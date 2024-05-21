//---------------------------------------------------------------------------

#ifndef MainFormUnitH
#define MainFormUnitH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "VirtualTrees.AncestorVCL.hpp"
#include "VirtualTrees.BaseAncestorVCL.hpp"
#include "VirtualTrees.BaseTree.hpp"
#include "VirtualTrees.hpp"
#include <Vcl.Dialogs.hpp>

#include "Sqlite3Unit.h"
//---------------------------------------------------------------------------
class TMainForm : public TForm
{
__published:	// IDE-managed Components
	TVirtualStringTree *DatebaseStringTree;
	TButton *OpenDatabaseButton;
	TOpenDialog *OpenDBdialog;
	TLabel *FilePathLabel;
	TLabel *LastVisit;
	TButton *FillNode;
	TButton *DeleteButton;
	TButton *ClearHistory;
	void __fastcall OpenDatabaseButtonClick(TObject *Sender);
	void __fastcall FillNodeClick(TObject *Sender);
	void __fastcall DatebaseStringTreeGetText(TBaseVirtualTree *Sender, PVirtualNode Node,
          TColumnIndex Column, TVSTTextType TextType, UnicodeString &CellText);
	void __fastcall DatebaseStringTreeAddToSelection(TBaseVirtualTree *Sender, PVirtualNode Node);
	void __fastcall DeleteButtonClick(TObject *Sender);
	void __fastcall ClearHistoryClick(TObject *Sender);


private:	// User declarations
public:		// User declarations
    SQLiteHistory HistoryDatabase;
	__fastcall TMainForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TMainForm *MainForm;
//---------------------------------------------------------------------------
typedef struct
{
	ULONGLONG Id;
	UnicodeString Url;
	UnicodeString Title;
	LONGLONG LastVisit;
} NodeStruct;
#endif
