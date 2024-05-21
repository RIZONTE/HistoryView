// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'VirtualTrees.pas' rev: 35.00 (Windows)

#ifndef VirtualtreesHPP
#define VirtualtreesHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <Winapi.ActiveX.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.Themes.hpp>
#include <VirtualTrees.Types.hpp>
#include <VirtualTrees.Header.hpp>
#include <VirtualTrees.BaseTree.hpp>
#include <VirtualTrees.AncestorVCL.hpp>
#include <VirtualTrees.BaseAncestorVCL.hpp>
#include <System.Types.hpp>
#include <System.UITypes.hpp>
#include <Vcl.Forms.hpp>
#include <VirtualTrees.Colors.hpp>

//-- user supplied -----------------------------------------------------------
#include <objidl.h>
#include <oleidl.h>
#include <oleacc.h>
#pragma comment(lib, "VirtualTreesCR")
#pragma comment(lib, "Shell32")
#pragma comment(lib, "uxtheme")
#pragma link "VirtualTrees.Accessibility"

namespace Virtualtrees
{
//-- forward type declarations -----------------------------------------------
struct TVSTGetCellTextEventArgs;
class DELPHICLASS TCustomVirtualStringTree;
class DELPHICLASS TVirtualStringTree;
//-- type declarations -------------------------------------------------------
using Virtualtrees::Types::PVirtualNode;

typedef Virtualtrees::Types::TVirtualNode TVirtualNode;

using Virtualtrees::Types::TVTHeaderColumnLayout;

using Virtualtrees::Types::TSmartAutoFitType;

using Virtualtrees::Types::TVirtualTreeStates;

using Virtualtrees::Types::TCheckState;

using Virtualtrees::Types::TCheckType;

using Virtualtrees::Types::TSortDirection;

using Virtualtrees::Types::TColumnIndex;

using Virtualtrees::Types::TVTColumnOption;

typedef Virtualtrees::Types::TVTHeaderHitInfo TVTHeaderHitInfo;

using Virtualtrees::Types::TVTHeaderHitPosition;

using Virtualtrees::Types::TVTHeaderHitPositions;

using Virtualtrees::Types::THeaderState;

using Virtualtrees::Types::THeaderStates;

using Virtualtrees::Types::TDropMode;

using Virtualtrees::Types::TFormatArray;

using Virtualtrees::Types::TVTHeaderOption;

using Virtualtrees::Types::TVTHeaderOptions;

using Virtualtrees::Types::TVTHeaderStyle;

using Virtualtrees::Types::TVTExportType;

using Virtualtrees::Types::TVTImageKind;

using Virtualtrees::Types::TVTExportMode;

using Virtualtrees::Types::TVTOperationKind;

using Virtualtrees::Types::TVTUpdateState;

using Virtualtrees::Types::TVTCellPaintMode;

using Virtualtrees::Types::TVirtualNodeState;

using Virtualtrees::Types::TVirtualNodeInitState;

using Virtualtrees::Types::TVirtualNodeInitStates;

using Virtualtrees::Types::TVTTooltipLineBreakStyle;

using Virtualtrees::Types::TVTNodeAttachMode;

using Virtualtrees::Types::TNodeArray;

typedef Virtualtrees::Types::THitInfo THitInfo;

using Virtualtrees::Types::THitPosition;

using Virtualtrees::Types::TVTPaintOption;

using Virtualtrees::Types::TVTAutoOption;

using Virtualtrees::Types::TVTAutoOptions;

using Virtualtrees::Types::TVTSelectionOption;

using Virtualtrees::Types::TVSTTextType;

using Virtualtrees::Types::TVTHintMode;

;

;

using Virtualtrees::Basetree::TVTHeaderNotifyEvent;

using Virtualtrees::Basetree::TVTCompareEvent;

;

;

;

using Virtualtrees::Header::TVTHeaderClass;

typedef Virtualtrees::Header::THeaderPaintInfo THeaderPaintInfo;

using Virtualtrees::Header::TVTConstraintPercent;

;

using Virtualtrees::Header::TColumnsArray;

;

typedef Virtualtrees::Ancestorvcl::TVTAncestorVcl TVTAncestor;

enum DECLSPEC_DENUM TVSTTextSourceType : unsigned char { tstAll, tstInitialized, tstSelected, tstCutCopySet, tstVisible, tstChecked };

typedef void __fastcall (__closure *TVSTGetTextEvent)(Virtualtrees::Basetree::TBaseVirtualTree* Sender, Virtualtrees::Types::PVirtualNode Node, Virtualtrees::Types::TColumnIndex Column, Virtualtrees::Types::TVSTTextType TextType, System::UnicodeString &CellText);

typedef void __fastcall (__closure *TVSTGetHintEvent)(Virtualtrees::Basetree::TBaseVirtualTree* Sender, Virtualtrees::Types::PVirtualNode Node, Virtualtrees::Types::TColumnIndex Column, Virtualtrees::Types::TVTTooltipLineBreakStyle &LineBreakStyle, System::UnicodeString &HintText);

typedef void __fastcall (__closure *TVSTNewTextEvent)(Virtualtrees::Basetree::TBaseVirtualTree* Sender, Virtualtrees::Types::PVirtualNode Node, Virtualtrees::Types::TColumnIndex Column, System::UnicodeString NewText);

typedef void __fastcall (__closure *TVSTShortenStringEvent)(Virtualtrees::Basetree::TBaseVirtualTree* Sender, Vcl::Graphics::TCanvas* TargetCanvas, Virtualtrees::Types::PVirtualNode Node, Virtualtrees::Types::TColumnIndex Column, const System::UnicodeString S, int TextSpace, System::UnicodeString &Result, bool &Done);

typedef void __fastcall (__closure *TVTMeasureTextEvent)(Virtualtrees::Basetree::TBaseVirtualTree* Sender, Vcl::Graphics::TCanvas* TargetCanvas, Virtualtrees::Types::PVirtualNode Node, Virtualtrees::Types::TColumnIndex Column, const System::UnicodeString Text, int &Extent);

typedef void __fastcall (__closure *TVTDrawTextEvent)(Virtualtrees::Basetree::TBaseVirtualTree* Sender, Vcl::Graphics::TCanvas* TargetCanvas, Virtualtrees::Types::PVirtualNode Node, Virtualtrees::Types::TColumnIndex Column, const System::UnicodeString Text, const System::Types::TRect &CellRect, bool &DefaultDraw);

struct DECLSPEC_DRECORD TVSTGetCellTextEventArgs
{
public:
	Virtualtrees::Types::TVirtualNode *Node;
	Virtualtrees::Types::TColumnIndex Column;
	System::UnicodeString CellText;
	System::UnicodeString StaticText;
	System::Classes::TAlignment StaticTextAlignment;
	Virtualtrees::Types::TVTExportType ExportType;
	__fastcall TVSTGetCellTextEventArgs(Virtualtrees::Types::PVirtualNode pNode, Virtualtrees::Types::TColumnIndex pColumn, Virtualtrees::Types::TVTExportType pExportType);
	TVSTGetCellTextEventArgs() {}
};


typedef void __fastcall (__closure *TVSTGetCellTextEvent)(TCustomVirtualStringTree* Sender, TVSTGetCellTextEventArgs &E);

class PASCALIMPLEMENTATION TCustomVirtualStringTree : public Virtualtrees::Ancestorvcl::TVTAncestorVcl
{
	typedef Virtualtrees::Ancestorvcl::TVTAncestorVcl inherited;
	
private:
	unsigned FInternalDataOffset;
	System::UnicodeString FDefaultText;
	int FTextHeight;
	int FEllipsisWidth;
	TVSTGetTextEvent FOnGetText;
	TVSTGetCellTextEvent fOnGetCellText;
	TVSTGetHintEvent FOnGetHint;
	TVSTNewTextEvent FOnNewText;
	TVSTShortenStringEvent FOnShortenString;
	TVTMeasureTextEvent FOnMeasureTextWidth;
	TVTMeasureTextEvent FOnMeasureTextHeight;
	TVTDrawTextEvent FOnDrawText;
	bool __fastcall IsDefaultTextStored();
	System::UnicodeString __fastcall GetImageText(Virtualtrees::Types::PVirtualNode Node, Virtualtrees::Types::TVTImageKind Kind, Virtualtrees::Types::TColumnIndex Column);
	Virtualtrees::Types::TCustomStringTreeOptions* __fastcall GetOptions();
	System::UnicodeString __fastcall GetStaticText(Virtualtrees::Types::PVirtualNode Node, Virtualtrees::Types::TColumnIndex Column);
	HIDESBASE System::UnicodeString __fastcall GetText(Virtualtrees::Types::PVirtualNode Node, Virtualtrees::Types::TColumnIndex Column);
	void __fastcall ReadText(System::Classes::TReader* Reader);
	void __fastcall WriteText(System::Classes::TWriter* Writer);
	void __fastcall ResetInternalData(Virtualtrees::Types::PVirtualNode Node, bool Recursive);
	void __fastcall SetDefaultText(const System::UnicodeString Value);
	HIDESBASE void __fastcall SetOptions(Virtualtrees::Types::TCustomStringTreeOptions* const Value);
	HIDESBASE void __fastcall SetText(Virtualtrees::Types::PVirtualNode Node, Virtualtrees::Types::TColumnIndex Column, const System::UnicodeString Value);
	MESSAGE void __fastcall WMSetFont(Winapi::Messages::TWMSetFont &Msg);
	void __fastcall GetDataFromGrid(System::Classes::TStringList* const AStrings, const bool IncludeHeading = true);
	
protected:
	System::Classes::TStringList* FPreviouslySelected;
	void __fastcall InitializeTextProperties(Virtualtrees::Types::TVTPaintInfo &PaintInfo);
	virtual void __fastcall PaintNormalText(Virtualtrees::Types::TVTPaintInfo &PaintInfo, int TextOutFlags, System::UnicodeString Text);
	virtual void __fastcall PaintStaticText(const Virtualtrees::Types::TVTPaintInfo &PaintInfo, System::Classes::TAlignment pStaticTextAlignment, const System::UnicodeString Text);
	virtual void __fastcall AdjustPaintCellRect(Virtualtrees::Types::TVTPaintInfo &PaintInfo, Virtualtrees::Types::TColumnIndex &NextNonEmpty);
	bool __fastcall CanExportNode(Virtualtrees::Types::PVirtualNode Node);
	virtual int __fastcall CalculateStaticTextWidth(Vcl::Graphics::TCanvas* Canvas, Virtualtrees::Types::PVirtualNode Node, Virtualtrees::Types::TColumnIndex Column, const System::UnicodeString Text);
	virtual int __fastcall CalculateTextWidth(Vcl::Graphics::TCanvas* Canvas, Virtualtrees::Types::PVirtualNode Node, Virtualtrees::Types::TColumnIndex Column, const System::UnicodeString Text);
	virtual bool __fastcall ColumnIsEmpty(Virtualtrees::Types::PVirtualNode Node, Virtualtrees::Types::TColumnIndex Column);
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual Virtualtrees::Basetree::_di_IVTEditLink __fastcall DoCreateEditor(Virtualtrees::Types::PVirtualNode Node, Virtualtrees::Types::TColumnIndex Column);
	virtual void __fastcall DoAddToSelection(Virtualtrees::Types::PVirtualNode Node);
	virtual System::UnicodeString __fastcall DoGetNodeHint(Virtualtrees::Types::PVirtualNode Node, Virtualtrees::Types::TColumnIndex Column, Virtualtrees::Types::TVTTooltipLineBreakStyle &LineBreakStyle);
	virtual System::UnicodeString __fastcall DoGetNodeTooltip(Virtualtrees::Types::PVirtualNode Node, Virtualtrees::Types::TColumnIndex Column, Virtualtrees::Types::TVTTooltipLineBreakStyle &LineBreakStyle);
	virtual int __fastcall DoGetNodeExtraWidth(Virtualtrees::Types::PVirtualNode Node, Virtualtrees::Types::TColumnIndex Column, Vcl::Graphics::TCanvas* Canvas = (Vcl::Graphics::TCanvas*)(0x0));
	virtual int __fastcall DoGetNodeWidth(Virtualtrees::Types::PVirtualNode Node, Virtualtrees::Types::TColumnIndex Column, Vcl::Graphics::TCanvas* Canvas = (Vcl::Graphics::TCanvas*)(0x0));
	virtual void __fastcall DoGetText(TVSTGetCellTextEventArgs &pEventArgs);
	virtual int __fastcall DoIncrementalSearch(Virtualtrees::Types::PVirtualNode Node, const System::UnicodeString Text);
	virtual void __fastcall DoNewText(Virtualtrees::Types::PVirtualNode Node, Virtualtrees::Types::TColumnIndex Column, const System::UnicodeString Text);
	virtual void __fastcall DoPaintNode(Virtualtrees::Types::TVTPaintInfo &PaintInfo);
	virtual System::UnicodeString __fastcall DoShortenString(Vcl::Graphics::TCanvas* Canvas, Virtualtrees::Types::PVirtualNode Node, Virtualtrees::Types::TColumnIndex Column, const System::UnicodeString S, int Width, int EllipsisWidth = 0x0);
	virtual void __fastcall DoTextDrawing(Virtualtrees::Types::TVTPaintInfo &PaintInfo, const System::UnicodeString Text, const System::Types::TRect &CellRect, unsigned DrawFormat);
	virtual System::Types::TSize __fastcall DoTextMeasuring(Vcl::Graphics::TCanvas* Canvas, Virtualtrees::Types::PVirtualNode Node, Virtualtrees::Types::TColumnIndex Column, const System::UnicodeString Text);
	virtual Virtualtrees::Types::TTreeOptionsClass __fastcall GetOptionsClass();
	void __fastcall GetRenderStartValues(TVSTTextSourceType Source, Virtualtrees::Types::PVirtualNode &Node, Virtualtrees::Basetree::TGetNextNodeProc &NextNodeProc);
	HIDESBASE void * __fastcall InternalData(Virtualtrees::Types::PVirtualNode Node);
	virtual void __fastcall MainColumnChanged();
	virtual bool __fastcall ReadChunk(System::Classes::TStream* Stream, int Version, Virtualtrees::Types::PVirtualNode Node, int ChunkType, int ChunkSize);
	void __fastcall ReadOldStringOptions(System::Classes::TReader* Reader);
	virtual HRESULT __fastcall RenderOLEData(const tagFORMATETC &FormatEtcIn, /* out */ tagSTGMEDIUM &Medium, bool ForClipboard);
	virtual void __fastcall SetChildCount(Virtualtrees::Types::PVirtualNode Node, unsigned NewChildCount);
	virtual void __fastcall WriteChunks(System::Classes::TStream* Stream, Virtualtrees::Types::PVirtualNode Node);
	__property System::UnicodeString DefaultText = {read=FDefaultText, write=SetDefaultText, stored=false};
	__property int EllipsisWidth = {read=FEllipsisWidth, nodefault};
	__property Virtualtrees::Types::TCustomStringTreeOptions* TreeOptions = {read=GetOptions, write=SetOptions};
	__property TVSTGetHintEvent OnGetHint = {read=FOnGetHint, write=FOnGetHint};
	__property TVSTGetTextEvent OnGetText = {read=FOnGetText, write=FOnGetText};
	__property TVSTGetCellTextEvent OnGetCellText = {read=fOnGetCellText, write=fOnGetCellText};
	__property TVSTNewTextEvent OnNewText = {read=FOnNewText, write=FOnNewText};
	__property TVSTShortenStringEvent OnShortenString = {read=FOnShortenString, write=FOnShortenString};
	__property TVTMeasureTextEvent OnMeasureTextWidth = {read=FOnMeasureTextWidth, write=FOnMeasureTextWidth};
	__property TVTMeasureTextEvent OnMeasureTextHeight = {read=FOnMeasureTextHeight, write=FOnMeasureTextHeight};
	__property TVTDrawTextEvent OnDrawText = {read=FOnDrawText, write=FOnDrawText};
	
public:
	__fastcall virtual TCustomVirtualStringTree(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomVirtualStringTree();
	virtual Virtualtrees::Types::PVirtualNode __fastcall AddChild(Virtualtrees::Types::PVirtualNode Parent, void * UserData = (void *)(0x0))/* overload */;
	virtual int __fastcall ComputeNodeHeight(Vcl::Graphics::TCanvas* Canvas, Virtualtrees::Types::PVirtualNode Node, Virtualtrees::Types::TColumnIndex Column, System::UnicodeString S = System::UnicodeString());
	NativeUInt __fastcall ContentToClipboard(System::Word Format, TVSTTextSourceType Source);
	void __fastcall ContentToCustom(TVSTTextSourceType Source);
	System::UnicodeString __fastcall ContentToHTML(TVSTTextSourceType Source, const System::UnicodeString Caption = System::UnicodeString());
	System::RawByteString __fastcall ContentToRTF(TVSTTextSourceType Source);
	System::UnicodeString __fastcall ContentToText(TVSTTextSourceType Source, System::WideChar Separator)/* overload */;
	System::UnicodeString __fastcall ContentToUnicode _DEPRECATED_ATTRIBUTE1("Use ContentToText instead") (TVSTTextSourceType Source, System::WideChar Separator)/* overload */;
	System::UnicodeString __fastcall ContentToText(TVSTTextSourceType Source, const System::UnicodeString Separator)/* overload */;
	virtual void __fastcall GetTextInfo(Virtualtrees::Types::PVirtualNode Node, Virtualtrees::Types::TColumnIndex Column, Vcl::Graphics::TFont* const AFont, System::Types::TRect &R, System::UnicodeString &Text);
	virtual System::Types::TRect __fastcall InvalidateNode(Virtualtrees::Types::PVirtualNode Node);
	System::UnicodeString __fastcall Path(Virtualtrees::Types::PVirtualNode Node, Virtualtrees::Types::TColumnIndex Column, System::WideChar Delimiter);
	virtual void __fastcall ReinitNode(Virtualtrees::Types::PVirtualNode Node, bool Recursive, bool ForceReinit = false);
	virtual void __fastcall RemoveFromSelection(Virtualtrees::Types::PVirtualNode Node);
	bool __fastcall SaveToCSVFile(const System::Sysutils::TFileName FileNameWithPath, const bool IncludeHeading);
	__property System::UnicodeString ImageText[Virtualtrees::Types::PVirtualNode Node][Virtualtrees::Types::TVTImageKind Kind][Virtualtrees::Types::TColumnIndex Column] = {read=GetImageText};
	__property System::UnicodeString StaticText[Virtualtrees::Types::PVirtualNode Node][Virtualtrees::Types::TColumnIndex Column] = {read=GetStaticText};
	__property System::UnicodeString Text[Virtualtrees::Types::PVirtualNode Node][Virtualtrees::Types::TColumnIndex Column] = {read=GetText, write=SetText};
public:
	/* TWinControl.CreateParented */ inline __fastcall TCustomVirtualStringTree(HWND ParentWindow) : Virtualtrees::Ancestorvcl::TVTAncestorVcl(ParentWindow) { }
	
	/* Hoisted overloads: */
	
public:
	inline Virtualtrees::Types::PVirtualNode __fastcall  AddChild(Virtualtrees::Types::PVirtualNode Parent, const System::_di_IInterface UserData){ return Virtualtrees::Basetree::TBaseVirtualTree::AddChild(Parent, UserData); }
	inline Virtualtrees::Types::PVirtualNode __fastcall  AddChild(Virtualtrees::Types::PVirtualNode Parent, System::TObject* const UserData){ return Virtualtrees::Basetree::TBaseVirtualTree::AddChild(Parent, UserData); }
	
};


class PASCALIMPLEMENTATION TVirtualStringTree : public TCustomVirtualStringTree
{
	typedef TCustomVirtualStringTree inherited;
	
private:
	HIDESBASE Virtualtrees::Types::TStringTreeOptions* __fastcall GetOptions();
	HIDESBASE void __fastcall SetOptions(Virtualtrees::Types::TStringTreeOptions* const Value);
	
protected:
	virtual Virtualtrees::Types::TTreeOptionsClass __fastcall GetOptionsClass();
	
public:
	__property Canvas;
	__property RangeX;
	__property LastDragEffect;
	__property CheckImageKind = {default=1};
	
__published:
	__property AccessibleName = {default=0};
	__property Action;
	__property Align = {default=0};
	__property Alignment = {default=0};
	__property Anchors = {default=3};
	__property AnimationDuration = {default=200};
	__property AutoExpandDelay = {default=1000};
	__property AutoScrollDelay = {default=1000};
	__property AutoScrollInterval = {default=1};
	__property Background;
	__property BackGroundImageTransparent = {default=0};
	__property BackgroundOffsetX;
	__property BackgroundOffsetY;
	__property BiDiMode;
	__property BevelEdges = {default=15};
	__property BevelInner = {index=0, default=2};
	__property BevelOuter = {index=1, default=1};
	__property BevelKind = {default=0};
	__property BevelWidth = {default=1};
	__property BorderStyle = {default=1};
	__property BottomSpace;
	__property ButtonFillMode = {default=0};
	__property ButtonStyle = {default=0};
	__property BorderWidth = {default=0};
	__property ChangeDelay = {default=0};
	__property ClipboardFormats;
	__property Color = {default=-16777211};
	__property Colors;
	__property Constraints;
	__property Ctl3D;
	__property CustomCheckImages;
	__property DefaultNodeHeight;
	__property DefaultPasteMode = {default=4};
	__property DefaultText = {default=0};
	__property DragCursor = {default=-12};
	__property DragHeight = {default=350};
	__property DragKind = {default=0};
	__property DragImageKind = {default=0};
	__property DragMode = {default=0};
	__property DragOperations = {default=3};
	__property DragType = {default=0};
	__property DragWidth = {default=200};
	__property DrawSelectionMode = {default=0};
	__property EditDelay = {default=1000};
	__property EmptyListMessage = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property Header;
	__property HintMode = {default=0};
	__property HotCursor = {default=0};
	__property Images;
	__property IncrementalSearch = {default=1};
	__property IncrementalSearchDirection = {default=0};
	__property IncrementalSearchStart = {default=2};
	__property IncrementalSearchTimeout = {default=1000};
	__property Indent;
	__property LineMode = {default=0};
	__property LineStyle = {default=1};
	__property Margin;
	__property NodeAlignment = {default=2};
	__property NodeDataSize = {default=-1};
	__property OperationCanceled;
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property RootNodeCount = {default=0};
	__property ScrollBarOptions;
	__property SelectionBlendFactor = {default=128};
	__property SelectionCurveRadius = {default=0};
	__property ShowHint;
	__property StateImages;
	__property StyleElements = {default=7};
	__property StyleName = {default=0};
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property TextMargin;
	__property Virtualtrees::Types::TStringTreeOptions* TreeOptions = {read=GetOptions, write=SetOptions};
	__property Visible = {default=1};
	__property WantTabs = {default=0};
	__property OnAddToSelection;
	__property OnAdvancedHeaderDraw;
	__property OnAfterAutoFitColumn;
	__property OnAfterAutoFitColumns;
	__property OnAfterCellPaint;
	__property OnAfterColumnExport;
	__property OnAfterColumnWidthTracking;
	__property OnAfterGetMaxColumnWidth;
	__property OnAfterHeaderExport;
	__property OnAfterHeaderHeightTracking;
	__property OnAfterItemErase;
	__property OnAfterItemPaint;
	__property OnAfterNodeExport;
	__property OnAfterPaint;
	__property OnAfterTreeExport;
	__property OnBeforeAutoFitColumn;
	__property OnBeforeAutoFitColumns;
	__property OnBeforeCellPaint;
	__property OnBeforeColumnExport;
	__property OnBeforeColumnWidthTracking;
	__property OnBeforeDrawTreeLine;
	__property OnBeforeGetMaxColumnWidth;
	__property OnBeforeHeaderExport;
	__property OnBeforeHeaderHeightTracking;
	__property OnBeforeItemErase;
	__property OnBeforeItemPaint;
	__property OnBeforeNodeExport;
	__property OnBeforePaint;
	__property OnBeforeTreeExport;
	__property OnCanSplitterResizeColumn;
	__property OnCanSplitterResizeHeader;
	__property OnCanSplitterResizeNode;
	__property OnChange;
	__property OnChecked;
	__property OnChecking;
	__property OnClick;
	__property OnCollapsed;
	__property OnCollapsing;
	__property OnColumnChecked;
	__property OnColumnChecking;
	__property OnColumnClick;
	__property OnColumnDblClick;
	__property OnColumnExport;
	__property OnColumnResize;
	__property OnColumnVisibilityChanged;
	__property OnColumnWidthDblClickResize;
	__property OnColumnWidthTracking;
	__property OnCompareNodes;
	__property OnContextPopup;
	__property OnCreateDataObject;
	__property OnCreateDragManager;
	__property OnCreateEditor;
	__property OnDblClick;
	__property OnDragAllowed;
	__property OnDragOver;
	__property OnDragDrop;
	__property OnDrawHint;
	__property OnDrawText;
	__property OnEditCancelled;
	__property OnEdited;
	__property OnEditing;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnEndOperation;
	__property OnEnter;
	__property OnExit;
	__property OnExpanded;
	__property OnExpanding;
	__property OnFocusChanged;
	__property OnFocusChanging;
	__property OnFreeNode;
	__property OnGetCellText;
	__property OnGetCellIsEmpty;
	__property OnGetCursor;
	__property OnGetHeaderCursor;
	__property OnGetText;
	__property OnPaintText;
	__property OnGetHelpContext;
	__property OnGetHintKind;
	__property OnGetHintSize;
	__property OnGetImageIndex;
	__property OnGetImageIndexEx;
	__property OnGetImageText;
	__property OnGetHint;
	__property OnGetLineStyle;
	__property OnGetNodeDataSize;
	__property OnGetPopupMenu;
	__property OnGetUserClipboardFormats;
	__property OnHeaderAddPopupItem;
	__property OnHeaderClick;
	__property OnHeaderDblClick;
	__property OnHeaderDragged;
	__property OnHeaderDraggedOut;
	__property OnHeaderDragging;
	__property OnHeaderDraw;
	__property OnHeaderDrawQueryElements;
	__property OnHeaderHeightDblClickResize;
	__property OnHeaderHeightTracking;
	__property OnHeaderMouseDown;
	__property OnHeaderMouseMove;
	__property OnHeaderMouseUp;
	__property OnHotChange;
	__property OnIncrementalSearch;
	__property OnInitChildren;
	__property OnInitNode;
	__property OnKeyAction;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnLoadNode;
	__property OnLoadTree;
	__property OnMeasureItem;
	__property OnMeasureTextWidth;
	__property OnMeasureTextHeight;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseWheel;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnNewText;
	__property OnNodeClick;
	__property OnNodeCopied;
	__property OnNodeCopying;
	__property OnNodeDblClick;
	__property OnNodeExport;
	__property OnNodeHeightDblClickResize;
	__property OnNodeHeightTracking;
	__property OnNodeMoved;
	__property OnNodeMoving;
	__property OnPaintBackground;
	__property OnPrepareButtonBitmaps;
	__property OnRemoveFromSelection;
	__property OnRenderOLEData;
	__property OnResetNode;
	__property OnResize;
	__property OnSaveNode;
	__property OnSaveTree;
	__property OnScroll;
	__property OnShortenString;
	__property OnShowScrollBar;
	__property OnBeforeGetCheckState;
	__property OnStartDock;
	__property OnStartDrag;
	__property OnStartOperation;
	__property OnStateChange;
	__property OnStructureChange;
	__property OnUpdating;
	__property OnCanResize;
	__property OnGesture;
	__property Touch;
public:
	/* TCustomVirtualStringTree.Create */ inline __fastcall virtual TVirtualStringTree(System::Classes::TComponent* AOwner) : TCustomVirtualStringTree(AOwner) { }
	/* TCustomVirtualStringTree.Destroy */ inline __fastcall virtual ~TVirtualStringTree() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TVirtualStringTree(HWND ParentWindow) : TCustomVirtualStringTree(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const System::Int8 NoColumn = System::Int8(-1);
static const System::Int8 InvalidColumn = System::Int8(-2);
static const Virtualtrees::Types::TSortDirection sdAscending = (Virtualtrees::Types::TSortDirection)(0);
static const Virtualtrees::Types::TSortDirection sdDescending = (Virtualtrees::Types::TSortDirection)(1);
static const Virtualtrees::Types::TVTAutoOption toAutoSort = (Virtualtrees::Types::TVTAutoOption)(4);
static const Virtualtrees::Types::TVTMiscOption toCheckSupport = (Virtualtrees::Types::TVTMiscOption)(1);
static const Virtualtrees::Types::TVTMiscOption toEditable = (Virtualtrees::Types::TVTMiscOption)(2);
static const Virtualtrees::Types::TVTPaintOption toShowRoot = (Virtualtrees::Types::TVTPaintOption)(8);
static const Virtualtrees::Types::TCheckType ctNone = (Virtualtrees::Types::TCheckType)(0);
static const Virtualtrees::Types::TCheckType ctTriStateCheckBox = (Virtualtrees::Types::TCheckType)(1);
static const Virtualtrees::Types::TCheckType ctCheckBox = (Virtualtrees::Types::TCheckType)(2);
static const Virtualtrees::Types::TCheckType ctRadioButton = (Virtualtrees::Types::TCheckType)(3);
static const Virtualtrees::Types::TCheckType ctButton = (Virtualtrees::Types::TCheckType)(4);
static const Virtualtrees::Types::TCheckState csUncheckedNormal = (Virtualtrees::Types::TCheckState)(0);
static const Virtualtrees::Types::TCheckState csUncheckedPressed = (Virtualtrees::Types::TCheckState)(1);
static const Virtualtrees::Types::TCheckState csCheckedNormal = (Virtualtrees::Types::TCheckState)(2);
static const Virtualtrees::Types::TCheckState csCheckedPressed = (Virtualtrees::Types::TCheckState)(3);
static const Virtualtrees::Types::TCheckState csMixedNormal = (Virtualtrees::Types::TCheckState)(4);
static const Virtualtrees::Types::TCheckState csMixedPressed = (Virtualtrees::Types::TCheckState)(5);
static const Virtualtrees::Types::TCheckState csUncheckedDisabled = (Virtualtrees::Types::TCheckState)(6);
static const Virtualtrees::Types::TCheckState csCheckedDisabled = (Virtualtrees::Types::TCheckState)(7);
static const Virtualtrees::Types::TCheckState csMixedDisable = (Virtualtrees::Types::TCheckState)(8);
static const Virtualtrees::Types::TVTColumnOption coVisible = (Virtualtrees::Types::TVTColumnOption)(7);
static const Virtualtrees::Types::TVirtualNodeState vsDisabled = (Virtualtrees::Types::TVirtualNodeState)(3);
static const Virtualtrees::Types::TVTExportType etHTML = (Virtualtrees::Types::TVTExportType)(2);
static const Virtualtrees::Types::THitPosition hiOnItemButton = (Virtualtrees::Types::THitPosition)(4);
static const Virtualtrees::Types::TDropMode dmOnNode = (Virtualtrees::Types::TDropMode)(2);
static const Virtualtrees::Types::TVTTooltipLineBreakStyle hlbForceMultiLine = (Virtualtrees::Types::TVTTooltipLineBreakStyle)(2);
static const Virtualtrees::Types::TVTHintMode hmHintAndDefault = (Virtualtrees::Types::TVTHintMode)(2);
static const Virtualtrees::Types::TVTHintMode hmTooltip = (Virtualtrees::Types::TVTHintMode)(3);
}	/* namespace Virtualtrees */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VIRTUALTREES)
using namespace Virtualtrees;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// VirtualtreesHPP
