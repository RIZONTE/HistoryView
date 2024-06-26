//---------------------------------------------------------------------------
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
			Application->MessageBox(L"������ �������� ���� ������", L"������", MB_OK);
		}
    }
}
//---------------------------------------------------------------------------
void FillStringTree(TVirtualStringTree *stringTree, SQLiteHistory *HistoryDatabase)
{
	//������������� ���������� ����������
	stringTree->BeginUpdate();

	//�������� ������
	stringTree->Clear();

	HistoryDatabase->PrepareStatement();

	for(ULONGLONG i=0; i<10000; i++)
	{
        if(HistoryDatabase->Step())
		{
			//��������� ��������� ������
			PVirtualNode entryNode = stringTree->AddChild(stringTree->RootNode);

			//��������� ������ ����
			NodeStruct *nodeData = (NodeStruct*)stringTree->GetNodeData(entryNode);

			nodeData->Id = HistoryDatabase->GetId();
			nodeData->Url = HistoryDatabase->GetUrl();
			nodeData->Title = HistoryDatabase->GetTitle();
			nodeData->LastVisit = HistoryDatabase->GetLastVisit();
		}
        else break;
	}

	//�������� ���������� ����������
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

{   //������� ������ �� �����
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
{   //��� ������� ����������, ��� ����� ������������� ��� ��������� ����
	if(!Node) return;    //�������� ��� ��������� ������ �� ������

	//������� ��������� � ����� ��������� ��������� ���� ��� ��������� � ����� ����
	NodeStruct *nodeData = (NodeStruct*)Sender->GetNodeData(Node);

    //����� ���. ���.
	UnicodeString date = L"���� ���������� ���������: ";
	date += DateConvert(nodeData->LastVisit).c_str();
    //�������� �������� Caption � Name, ���������� ���. ���.
	LastVisit->Caption = date.c_str();

}
//---------------------------------------------------------------------------


void __fastcall TMainForm::DeleteButtonClick(TObject *Sender)
{
	//�������� ���������� ����
	PVirtualNode selectedNode = DatebaseStringTree->FocusedNode;
	if(!selectedNode) return;   //��������, ��� ���� �������
    //������� ��������� � ����� ��������� ��������� ���� ��� ��������� � ����� ����
	NodeStruct *nodeData = (NodeStruct*)DatebaseStringTree->GetNodeData(selectedNode);
	//�������� ������ � ���� ������
	HistoryDatabase.DeleteEntry(nodeData->Id);
	//������� ���� �� �������
	DatebaseStringTree->DeleteNode(selectedNode);
}
//---------------------------------------------------------------------------

void __fastcall TMainForm::ClearHistoryClick(TObject *Sender)
{
	int result = Application->MessageBox(L"�� �������, ��� ������ ������� ��� ������� ���������?",
							L"�������� ������� ���������", MB_YESNO);
	if (result == IDYES)
	{
		HistoryDatabase.ClearHistory();
	}

}
//---------------------------------------------------------------------------

