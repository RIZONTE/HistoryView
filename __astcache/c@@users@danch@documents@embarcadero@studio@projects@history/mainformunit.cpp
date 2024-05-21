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
		//Добавляем очередную запись
		PVirtualNode entryNode = stringTree->AddChild(stringTree->RootNode);

		//Заполняем данные узла
		NodeStruct *nodeData = (NodeStruct*)stringTree->GetNodeData(entryNode);

		HistoryDatabase->Step();

		nodeData->Id = HistoryDatabase->GetId();
		nodeData->Url = HistoryDatabase->GetUrl();
		nodeData->Title = HistoryDatabase->GetTitle();
		nodeData->LastVisit = HistoryDatabase->GetLastVisit();
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
{   //Эта функция определяет
	if(!Node) return;    //Проверка что выбранная ячейка не пустая
	NodeStruct *nodeData = (NodeStruct*)Sender->GetNodeData(Node);
	//Изменяем свойство Caption у Name
	UnicodeString date = L"Дата последнего посещения: ";
	date += DateConvert(nodeData->LastVisit).c_str();
	LastVisit->Caption = date.c_str();

}
//---------------------------------------------------------------------------
