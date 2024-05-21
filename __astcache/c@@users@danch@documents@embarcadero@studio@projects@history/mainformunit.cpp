﻿//---------------------------------------------------------------------------
#include <iostream>
#include <vcl.h>
#include <sqlite3.h>
#include "Sqlite3Unit.h"
#pragma hdrstop

using namespace std;
#include "MainFormUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "VirtualTrees"
#pragma link "VirtualTrees.AncestorVCL"
#pragma link "VirtualTrees.BaseAncestorVCL"
#pragma link "VirtualTrees.BaseTree"
#pragma resource "*.dfm"
TMainForm *MainForm;
//---------------------------------------------------------------------------
__fastcall TMainForm::TMainForm(TComponent* Owner)
	: TForm(Owner)
{
    DatebaseStringTree->NodeDataSize = sizeof(NodeStruct);
}
//---------------------------------------------------------------------------
void __fastcall TMainForm::OpenDatabaseButtonClick(TObject *Sender)
{
	UnicodeString fileName;
	if(OpenDBdialog->Execute())
	{
		fileName = OpenDBdialog->FileName;
	}

	if(!fileName.IsEmpty())
	{
		FilePathLabel->Caption = fileName.c_str();
		bool res =  HistoryDatabase.OpenDatabase(fileName.c_str() );
		if(!res)
		{
			Application->MessageBox(L"Ошибка открытия базы данных", L"Ошибка", MB_OK);
		}
    }
}
//---------------------------------------------------------------------------
void FillStringTree(TVirtualStringTree *stringTree, SQLiteHistory *HistoryDatabase)
{
	//Останавливаем обновление интерфейса
	stringTree->BeginUpdate();

	//Очистить дерево
	stringTree->Clear();

	HistoryDatabase->PrepareStatement();

	for(ULONGLONG i=0; i<10000; i++)
	{
        if(HistoryDatabase->Step())
		{
			//Добавляем очередную запись
			PVirtualNode entryNode = stringTree->AddChild(stringTree->RootNode);

			//Заполняем данные узла
			NodeStruct *nodeData = (NodeStruct*)stringTree->GetNodeData(entryNode);

			nodeData->Id = HistoryDatabase->GetId();
			nodeData->Url = HistoryDatabase->GetUrl();
			nodeData->Title = HistoryDatabase->GetTitle();
			nodeData->LastVisit = HistoryDatabase->GetLastVisit();
		}
        else break;
	}

	//Включаем обновление интерфейса
	stringTree->EndUpdate();
}
//---------------------------------------------------------------------------
void __fastcall TMainForm::FillNodeClick(TObject *Sender)
{
	FillStringTree(DatebaseStringTree, &HistoryDatabase);
}
//---------------------------------------------------------------------------
void __fastcall TMainForm::DatebaseStringTreeGetText(TBaseVirtualTree *Sender, PVirtualNode Node,
          TColumnIndex Column, TVSTTextType TextType, UnicodeString &CellText)

{   //Выводим данные на экран
	if(!Node) return;
	NodeStruct *nodeData = (NodeStruct*)Sender->GetNodeData(Node);
	switch(Column)
	{
		case 0: CellText = nodeData->Id; break;
		case 1: CellText = nodeData->Url; break;
        case 2: CellText = nodeData->Title; break;
    }
}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
void __fastcall TMainForm::DatebaseStringTreeAddToSelection(TBaseVirtualTree *Sender,
          PVirtualNode Node)
{   //Эта функция определяет, что будет производиться при выделении узла
	if(!Node) return;    //Проверка что выбранная ячейка не пустая

	//Создаем указатель с типом созданной структуры узла для обращения к полям узла
	NodeStruct *nodeData = (NodeStruct*)Sender->GetNodeData(Node);

    //Вывод доп. инф.
	UnicodeString date = L"Дата последнего посещения: ";
	date += DateConvert(nodeData->LastVisit).c_str();
    //Изменяем свойство Caption у Name, отображаем доп. инф.
	LastVisit->Caption = date.c_str();

}
//---------------------------------------------------------------------------


void __fastcall TMainForm::DeleteButtonClick(TObject *Sender)
{
	//Получаем выделенный узел
	PVirtualNode selectedNode = DatebaseStringTree->FocusedNode;
	if(!selectedNode) return;   //Проверка, что узел получен
    //Создаем указатель с типом созданной структуры узла для обращения к полям узла
	NodeStruct *nodeData = (NodeStruct*)DatebaseStringTree->GetNodeData(selectedNode);
	//Удаление записи в базе данных
	HistoryDatabase.DeleteEntry(nodeData->Id);
	//Удаляем узел из таблицы
	DatebaseStringTree->DeleteNode(selectedNode);
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::ClearHistoryClick(TObject *Sender)
{
	int result = Application->MessageBox(L"Вы уверены, что хотите удалить всю историю посещений?",
							L"Удаление истории посещений", MB_YESNO);
	if (result == IDYES)
	{
		HistoryDatabase.ClearHistory();
	}

}
//---------------------------------------------------------------------------

