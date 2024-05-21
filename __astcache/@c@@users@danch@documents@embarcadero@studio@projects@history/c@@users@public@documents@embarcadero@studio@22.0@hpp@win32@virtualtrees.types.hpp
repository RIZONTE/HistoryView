// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'VirtualTrees.Types.pas' rev: 35.00 (Windows)

#ifndef Virtualtrees_TypesHPP
#define Virtualtrees_TypesHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.ActiveX.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <System.Types.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.GraphUtil.hpp>
#include <Vcl.Themes.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.ImgList.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Virtualtrees
{
namespace Types
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS EVirtualTreeError;
struct TCheckStateHelper /* Helper for enum 'TCheckState' */;
struct TSortDirectionHelper /* Helper for enum 'TSortDirection' */;
struct TChunkHeader;
class DELPHICLASS TCustomVirtualTreeOptions;
class DELPHICLASS TVirtualTreeOptions;
class DELPHICLASS TCustomStringTreeOptions;
class DELPHICLASS TStringTreeOptions;
class DELPHICLASS TScrollBarOptions;
struct TVirtualNode;
struct TVTHeaderHitInfo;
struct THitInfo;
struct TVTImageInfo;
struct TVTPaintInfo;
//-- type declarations -------------------------------------------------------
typedef int TDimension;

typedef int *PDimension;

typedef HICON TVTCursor;

;

typedef _di_IDataObject TVTDragDataObject;

typedef Vcl::Graphics::TPicture TVTBackground;

typedef HDC TVTPaintContext;

typedef HBRUSH TVTBrush;

typedef int TColumnIndex;

typedef unsigned TColumnPosition;

typedef unsigned *PCardinal;

#pragma pack(push,4)
class PASCALIMPLEMENTATION EVirtualTreeError : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EVirtualTreeError(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EVirtualTreeError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EVirtualTreeError(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EVirtualTreeError(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EVirtualTreeError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EVirtualTreeError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EVirtualTreeError(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EVirtualTreeError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EVirtualTreeError(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EVirtualTreeError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EVirtualTreeError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EVirtualTreeError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EVirtualTreeError() { }
	
};

#pragma pack(pop)

typedef System::Word TAutoScrollInterval;

typedef System::Word TVTScrollIncrement;

typedef System::DynamicArray<tagFORMATETC> TFormatEtcArray;

typedef System::DynamicArray<System::Word> TFormatArray;

enum DECLSPEC_DENUM TSmartAutoFitType : unsigned char { smaAllColumns, smaNoColumn, smaUseColumnOption };

enum DECLSPEC_DENUM TAddPopupItemType : unsigned char { apNormal, apDisabled, apHidden };

enum DECLSPEC_DENUM TCheckType : unsigned char { ctNone, ctTriStateCheckBox, ctCheckBox, ctRadioButton, ctButton };

enum DECLSPEC_DENUM TCheckState : unsigned char { csUncheckedNormal, csUncheckedPressed, csCheckedNormal, csCheckedPressed, csMixedNormal, csMixedPressed, csUncheckedDisabled, csCheckedDisabled, csMixedDisabled };

enum DECLSPEC_DENUM TVTColumnOption : unsigned char { coAllowClick, coDraggable, coEnabled, coParentBidiMode, coParentColor, coResizable, coShowDropMark, coVisible, coAutoSpring, coFixed, coSmartResize, coAllowFocus, coDisableAnimatedResize, coWrapCaption, coUseCaptionAlignment, coEditable, coStyleColor };

typedef System::Set<TVTColumnOption, TVTColumnOption::coAllowClick, TVTColumnOption::coStyleColor> TVTColumnOptions;

enum DECLSPEC_DENUM TVirtualTreeColumnStyle : unsigned char { vsText, vsOwnerDraw };

enum DECLSPEC_DENUM TSortDirection : unsigned char { sdAscending, sdDescending };

enum DECLSPEC_DENUM TVTDropMarkMode : unsigned char { dmmNone, dmmLeft, dmmRight };

typedef System::Set<Vcl::Graphutil::TScrollDirection, Vcl::Graphutil::TScrollDirection::sdLeft, Vcl::Graphutil::TScrollDirection::sdDown> TScrollDirections;

enum DECLSPEC_DENUM TVTPaintOption : unsigned char { toHideFocusRect, toHideSelection, toHotTrack, toPopupMode, toShowBackground, toShowButtons, toShowDropmark, toShowHorzGridLines, toShowRoot, toShowTreeLines, toShowVertGridLines, toThemeAware, toUseBlendedImages, toGhostedIfUnfocused, toFullVertGridLines, toAlwaysHideSelection, toUseBlendedSelection, toStaticBackground, toChildrenAbove, toFixedIndent, toUseExplorerTheme, toHideTreeLinesIfThemed, toShowFilteredNodes };

typedef System::Set<TVTPaintOption, TVTPaintOption::toHideFocusRect, TVTPaintOption::toShowFilteredNodes> TVTPaintOptions;

enum DECLSPEC_DENUM TVTAnimationOption : unsigned char { toAnimatedToggle, toAdvancedAnimatedToggle };

typedef System::Set<TVTAnimationOption, TVTAnimationOption::toAnimatedToggle, TVTAnimationOption::toAdvancedAnimatedToggle> TVTAnimationOptions;

enum DECLSPEC_DENUM TVTAutoOption : unsigned char { toAutoDropExpand, toAutoExpand, toAutoScroll, toAutoScrollOnExpand, toAutoSort, toAutoSpanColumns, toAutoTristateTracking, toAutoHideButtons, toAutoDeleteMovedNodes, toDisableAutoscrollOnFocus, toAutoChangeScale, toAutoFreeOnCollapse, toDisableAutoscrollOnEdit, toAutoBidiColumnOrdering };

typedef System::Set<TVTAutoOption, TVTAutoOption::toAutoDropExpand, TVTAutoOption::toAutoBidiColumnOrdering> TVTAutoOptions;

enum DECLSPEC_DENUM TVTSelectionOption : unsigned char { toDisableDrawSelection, toExtendedFocus, toFullRowSelect, toLevelSelectConstraint, toMiddleClickSelect, toMultiSelect, toRightClickSelect, toSiblingSelectConstraint, toCenterScrollIntoView, toSimpleDrawSelection, toAlwaysSelectNode, toRestoreSelection, toSyncCheckboxesWithSelection, toSelectNextNodeOnRemoval };

typedef System::Set<TVTSelectionOption, TVTSelectionOption::toDisableDrawSelection, TVTSelectionOption::toSelectNextNodeOnRemoval> TVTSelectionOptions;

enum DECLSPEC_DENUM TVTEditOptions : unsigned char { toDefaultEdit, toVerticalEdit, toHorizontalEdit };

enum DECLSPEC_DENUM TVTMiscOption : unsigned char { toAcceptOLEDrop, toCheckSupport, toEditable, toFullRepaintOnResize, toGridExtensions, toInitOnSave, toReportMode, toToggleOnDblClick, toWheelPanning, toReadOnly, toVariableNodeHeight, toFullRowDrag, toNodeHeightResize, toNodeHeightDblClickResize, toEditOnClick, toEditOnDblClick, toReverseFullExpandHotKey };

typedef System::Set<TVTMiscOption, TVTMiscOption::toAcceptOLEDrop, TVTMiscOption::toReverseFullExpandHotKey> TVTMiscOptions;

enum DECLSPEC_DENUM TVTExportMode : unsigned char { emAll, emChecked, emUnchecked, emVisibleDueToExpansion, emSelected };

enum DECLSPEC_DENUM TVSTTextType : unsigned char { ttNormal, ttStatic };

enum DECLSPEC_DENUM TVTStringOption : unsigned char { toSaveCaptions, toShowStaticText, toAutoAcceptEditChange };

typedef System::Set<TVTStringOption, TVTStringOption::toSaveCaptions, TVTStringOption::toAutoAcceptEditChange> TVTStringOptions;

enum DECLSPEC_DENUM TVirtualNodeState : unsigned char { vsInitialized, vsChecking, vsCutOrCopy, vsDisabled, vsDeleting, vsExpanded, vsHasChildren, vsVisible, vsSelected, vsOnFreeNodeCallRequired, vsAllChildrenHidden, vsReleaseCallOnUserDataRequired, vsMultiline, vsHeightMeasured, vsToggling, vsFiltered, vsInitializing };

typedef System::Set<TVirtualNodeState, TVirtualNodeState::vsInitialized, TVirtualNodeState::vsInitializing> TVirtualNodeStates;

enum DECLSPEC_DENUM TVirtualNodeInitState : unsigned char { ivsDisabled, ivsExpanded, ivsHasChildren, ivsMultiline, ivsSelected, ivsFiltered, ivsReInit };

typedef System::Set<TVirtualNodeInitState, TVirtualNodeInitState::ivsDisabled, TVirtualNodeInitState::ivsReInit> TVirtualNodeInitStates;

enum DECLSPEC_DENUM Virtualtrees_Types__2 : unsigned char { tsChangePending, tsCheckPropagation, tsCollapsing, tsToggleFocusedSelection, tsClearPending, tsClearOnNewSelection, tsClipboardFlushing, tsCopyPending, tsCutPending, tsDrawSelPending, tsDrawSelecting, tsEditing, tsEditPending, tsExpanding, tsNodeHeightTracking, tsNodeHeightTrackPending, tsHint, tsInAnimation, tsIncrementalSearching, tsIncrementalSearchPending, tsIterating, tsLeftButtonDown, tsLeftDblClick, tsMiddleButtonDown, tsMiddleDblClick, tsNeedRootCountUpdate, tsOLEDragging, tsOLEDragPending, tsPainting, tsRightButtonDown, tsRightDblClick, tsPopupMenuShown, tsScrolling, tsScrollPending, tsSizing, tsStopValidation, tsStructureChangePending, tsSynchMode, tsThumbTracking, tsToggling, 
	tsUpdateHiddenChildrenNeeded, tsUseCache, tsUserDragObject, tsUseThemes, tsValidating, tsPreviouslySelectedLocked, tsValidationNeeded, tsVCLDragging, tsVCLDragPending, tsVCLDragFinished, tsWheelPanning, tsWheelScrolling, tsWindowCreating, tsUseExplorerTheme };

typedef System::Set<Virtualtrees_Types__2, Virtualtrees_Types__2::tsChangePending, Virtualtrees_Types__2::tsUseExplorerTheme> TVirtualTreeStates;

enum DECLSPEC_DENUM TCheckImageKind : unsigned char { ckCustom, ckSystemDefault };

enum DECLSPEC_DENUM TVTNodeAttachMode : unsigned char { amNoWhere, amInsertBefore, amInsertAfter, amAddChildFirst, amAddChildLast };

enum DECLSPEC_DENUM TDropMode : unsigned char { dmNowhere, dmAbove, dmOnNode, dmBelow };

enum DECLSPEC_DENUM TDragOperation : unsigned char { doCopy, doMove, doLink };

typedef System::Set<TDragOperation, TDragOperation::doCopy, TDragOperation::doLink> TDragOperations;

enum DECLSPEC_DENUM TVTImageKind : unsigned char { ikNormal, ikSelected, ikState, ikOverlay };

enum DECLSPEC_DENUM TVTHintMode : unsigned char { hmDefault, hmHint, hmHintAndDefault, hmTooltip };

enum DECLSPEC_DENUM TVTTooltipLineBreakStyle : unsigned char { hlbDefault, hlbForceSingleLine, hlbForceMultiLine };

typedef System::Set<System::Uitypes::TMouseButton, _DELPHI_SET_ENUMERATOR(System::Uitypes::TMouseButton::mbLeft), _DELPHI_SET_ENUMERATOR(System::Uitypes::TMouseButton::mbMiddle)> TMouseButtons;

enum DECLSPEC_DENUM TItemEraseAction : unsigned char { eaColor, eaDefault, eaNone };

enum DECLSPEC_DENUM TVTOperationKind : unsigned char { okAutoFitColumns, okGetMaxColumnWidth, okSortNode, okSortTree, okExport, okExpand };

typedef System::Set<TVTOperationKind, TVTOperationKind::okAutoFitColumns, TVTOperationKind::okExpand> TVTOperationKinds;

enum DECLSPEC_DENUM TVTUpdateState : unsigned char { usBegin, usBeginSynch, usSynch, usUpdate, usEnd, usEndSynch };

enum DECLSPEC_DENUM Virtualtrees_Types__3 : unsigned char { hpeBackground, hpeDropMark, hpeHeaderGlyph, hpeSortGlyph, hpeText, hpeOverlay };

typedef System::Set<Virtualtrees_Types__3, Virtualtrees_Types__3::hpeBackground, Virtualtrees_Types__3::hpeOverlay> THeaderPaintElements;

enum DECLSPEC_DENUM TVTDragImageKind : unsigned char { diComplete, diMainColumnOnly, diNoImage };

enum DECLSPEC_DENUM TVTDragType : unsigned char { dtOLE, dtVCL };

enum DECLSPEC_DENUM TVTLineStyle : unsigned char { lsCustomStyle, lsDotted, lsSolid };

enum DECLSPEC_DENUM TVTLineType : unsigned char { ltNone, ltBottomRight, ltTopDown, ltTopDownRight, ltRight, ltTopRight, ltLeft, ltLeftBottom };

enum DECLSPEC_DENUM TVTLineMode : unsigned char { lmNormal, lmBands };

typedef System::DynamicArray<TVTLineType> TLineImage;

enum DECLSPEC_DENUM TVTExportType : unsigned char { etNone, etRTF, etHTML, etText, etExcel, etWord, etPDF, etPrinter, etCSV, etCustom };

enum DECLSPEC_DENUM Virtualtrees_Types__4 : unsigned char { suoRepaintHeader, suoRepaintScrollBars, suoScrollClientArea, suoUpdateNCArea };

typedef System::Set<Virtualtrees_Types__4, Virtualtrees_Types__4::suoRepaintHeader, Virtualtrees_Types__4::suoUpdateNCArea> TScrollUpdateOptions;

enum DECLSPEC_DENUM TVTButtonStyle : unsigned char { bsRectangle, bsTriangle };

enum DECLSPEC_DENUM TVTButtonFillMode : unsigned char { fmTreeColor, fmWindowColor, fmShaded, fmTransparent };

typedef bool __fastcall (__closure *TVTAnimationCallback)(int Step, int StepSize, void * Data);

enum DECLSPEC_DENUM TVTIncrementalSearch : unsigned char { isAll, isNone, isInitializedOnly, isVisibleOnly };

enum DECLSPEC_DENUM TVTSearchDirection : unsigned char { sdForward, sdBackward };

enum DECLSPEC_DENUM TVTSearchStart : unsigned char { ssAlwaysStartOver, ssLastHit, ssFocusedNode };

enum DECLSPEC_DENUM TVTNodeAlignment : unsigned char { naFromBottom, naFromTop, naProportional };

enum DECLSPEC_DENUM TVTDrawSelectionMode : unsigned char { smDottedRectangle, smBlendedRectangle };

enum DECLSPEC_DENUM TVTCellPaintMode : unsigned char { cpmPaint, cpmGetContentMargin };

enum DECLSPEC_DENUM TVTCellContentMarginType : unsigned char { ccmtAllSides, ccmtTopLeftOnly, ccmtBottomRightOnly };

enum DECLSPEC_DENUM TChangeReason : unsigned char { crIgnore, crAccumulated, crChildAdded, crChildDeleted, crNodeAdded, crNodeCopied, crNodeMoved };

struct DECLSPEC_DRECORD TChunkHeader
{
public:
	int ChunkType;
	int ChunkSize;
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TCustomVirtualTreeOptions : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	Vcl::Controls::TCustomControl* FOwner;
	TVTPaintOptions FPaintOptions;
	TVTAnimationOptions FAnimationOptions;
	TVTAutoOptions FAutoOptions;
	TVTSelectionOptions FSelectionOptions;
	TVTMiscOptions FMiscOptions;
	TVTExportMode FExportMode;
	TVTEditOptions FEditOptions;
	void __fastcall SetAnimationOptions(const TVTAnimationOptions Value);
	void __fastcall SetAutoOptions(const TVTAutoOptions Value);
	void __fastcall SetMiscOptions(const TVTMiscOptions Value);
	void __fastcall SetPaintOptions(const TVTPaintOptions Value);
	void __fastcall SetSelectionOptions(const TVTSelectionOptions Value);
	
protected:
	Vcl::Themes::TCustomStyleServices* __fastcall StyleServices(Vcl::Controls::TControl* AControl = (Vcl::Controls::TControl*)(0x0));
	
public:
	__fastcall virtual TCustomVirtualTreeOptions(Vcl::Controls::TCustomControl* AOwner);
	void __fastcall InternalSetMiscOptions(const TVTMiscOptions Value);
	virtual void __fastcall AssignTo(System::Classes::TPersistent* Dest);
	__property TVTAnimationOptions AnimationOptions = {read=FAnimationOptions, write=SetAnimationOptions, default=0};
	__property TVTAutoOptions AutoOptions = {read=FAutoOptions, write=SetAutoOptions, default=1497};
	__property TVTExportMode ExportMode = {read=FExportMode, write=FExportMode, default=0};
	__property TVTMiscOptions MiscOptions = {read=FMiscOptions, write=SetMiscOptions, default=16809};
	__property TVTPaintOptions PaintOptions = {read=FPaintOptions, write=SetPaintOptions, default=23392};
	__property TVTSelectionOptions SelectionOptions = {read=FSelectionOptions, write=SetSelectionOptions, default=8192};
	__property TVTEditOptions EditOptions = {read=FEditOptions, write=FEditOptions, default=0};
	__property Vcl::Controls::TCustomControl* Owner = {read=FOwner};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TCustomVirtualTreeOptions() { }
	
};

#pragma pack(pop)

typedef System::TMetaClass* TTreeOptionsClass;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TVirtualTreeOptions : public TCustomVirtualTreeOptions
{
	typedef TCustomVirtualTreeOptions inherited;
	
__published:
	__property AnimationOptions = {default=0};
	__property AutoOptions = {default=1497};
	__property ExportMode = {default=0};
	__property MiscOptions = {default=16809};
	__property PaintOptions = {default=23392};
	__property SelectionOptions = {default=8192};
public:
	/* TCustomVirtualTreeOptions.Create */ inline __fastcall virtual TVirtualTreeOptions(Vcl::Controls::TCustomControl* AOwner) : TCustomVirtualTreeOptions(AOwner) { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TVirtualTreeOptions() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCustomStringTreeOptions : public TCustomVirtualTreeOptions
{
	typedef TCustomVirtualTreeOptions inherited;
	
private:
	TVTStringOptions FStringOptions;
	void __fastcall SetStringOptions(const TVTStringOptions Value);
	
public:
	__fastcall virtual TCustomStringTreeOptions(Vcl::Controls::TCustomControl* AOwner);
	virtual void __fastcall AssignTo(System::Classes::TPersistent* Dest);
	__property TVTStringOptions StringOptions = {read=FStringOptions, write=SetStringOptions, default=5};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TCustomStringTreeOptions() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TStringTreeOptions : public TCustomStringTreeOptions
{
	typedef TCustomStringTreeOptions inherited;
	
__published:
	__property AnimationOptions = {default=0};
	__property AutoOptions = {default=1497};
	__property ExportMode = {default=0};
	__property MiscOptions = {default=16809};
	__property PaintOptions = {default=23392};
	__property SelectionOptions = {default=8192};
	__property StringOptions = {default=5};
	__property EditOptions = {default=0};
public:
	/* TCustomStringTreeOptions.Create */ inline __fastcall virtual TStringTreeOptions(Vcl::Controls::TCustomControl* AOwner) : TCustomStringTreeOptions(AOwner) { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TStringTreeOptions() { }
	
};

#pragma pack(pop)

enum DECLSPEC_DENUM TScrollBarStyle : unsigned char { sbmRegular, sbm3D };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TScrollBarOptions : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	bool FAlwaysVisible;
	Vcl::Controls::TCustomControl* FOwner;
	System::Uitypes::TScrollStyle FScrollBars;
	TScrollBarStyle FScrollBarStyle;
	TVTScrollIncrement FIncrementX;
	TVTScrollIncrement FIncrementY;
	void __fastcall SetAlwaysVisible(bool Value);
	void __fastcall SetScrollBars(System::Uitypes::TScrollStyle Value);
	void __fastcall SetScrollBarStyle(TScrollBarStyle Value);
	
protected:
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	
public:
	__fastcall TScrollBarOptions(Vcl::Controls::TCustomControl* AOwner);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property bool AlwaysVisible = {read=FAlwaysVisible, write=SetAlwaysVisible, default=0};
	__property TVTScrollIncrement HorizontalIncrement = {read=FIncrementX, write=FIncrementX, default=20};
	__property System::Uitypes::TScrollStyle ScrollBars = {read=FScrollBars, write=SetScrollBars, default=3};
	__property TScrollBarStyle ScrollBarStyle = {read=FScrollBarStyle, write=SetScrollBarStyle, default=0};
	__property TVTScrollIncrement VerticalIncrement = {read=FIncrementY, write=FIncrementY, default=20};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TScrollBarOptions() { }
	
};

#pragma pack(pop)

typedef TVirtualNode *PVirtualNode;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TVirtualNode
{
	
private:
	struct DECLSPEC_DRECORD _TVirtualNode__1
	{
	};
	
	
	
private:
	unsigned fIndex;
	unsigned fChildCount;
	int fNodeHeight;
	
public:
	TVirtualNodeStates States;
	System::Byte Align;
	TCheckState CheckState;
	TCheckType CheckType;
	System::Byte Dummy;
	unsigned TotalCount;
	int TotalHeight;
	
	
private:
	TVirtualNode *fParent;
	TVirtualNode *fPrevSibling;
	TVirtualNode *fNextSibling;
	
public:
	TVirtualNode *FirstChild;
	
private:
	TVirtualNode *fLastChild;
	
public:
	void __fastcall SetParent(const PVirtualNode pParent);
	void __fastcall SetPrevSibling(const PVirtualNode pPrevSibling);
	void __fastcall SetNextSibling(const PVirtualNode pNextSibling);
	void __fastcall SetFirstChild(const PVirtualNode pFirstChild);
	void __fastcall SetLastChild(const PVirtualNode pLastChild);
	void __fastcall SetIndex(const unsigned pIndex);
	void __fastcall SetChildCount(const unsigned pCount);
	void __fastcall SetNodeHeight(const int pNodeHeight);
	__property unsigned Index = {read=fIndex};
	__property unsigned ChildCount = {read=fChildCount};
	__property PVirtualNode Parent = {read=fParent};
	__property PVirtualNode PrevSibling = {read=fPrevSibling};
	__property PVirtualNode NextSibling = {read=fNextSibling};
	__property PVirtualNode LastChild = {read=fLastChild};
	__property int NodeHeight = {read=fNodeHeight};
	
private:
	_TVirtualNode__1 Data;
	
public:
	bool __fastcall IsAssigned();
	void * __fastcall GetData()/* overload */;
	template<typename T> T __fastcall GetData()/* overload */;
	void __fastcall SetData(void * pUserData)/* overload */;
	template<typename T> void __fastcall SetData(T pUserData)/* overload */;
	void __fastcall SetData(const System::_di_IInterface pUserData)/* overload */;
};
#pragma pack(pop)


enum DECLSPEC_DENUM TVTHeaderColumnLayout : unsigned char { blGlyphLeft, blGlyphRight, blGlyphTop, blGlyphBottom };

enum DECLSPEC_DENUM TVTHeaderHitPosition : unsigned char { hhiNoWhere, hhiOnColumn, hhiOnIcon, hhiOnCheckbox };

typedef System::Set<TVTHeaderHitPosition, TVTHeaderHitPosition::hhiNoWhere, TVTHeaderHitPosition::hhiOnCheckbox> TVTHeaderHitPositions;

enum DECLSPEC_DENUM THitPosition : unsigned char { hiAbove, hiBelow, hiNowhere, hiOnItem, hiOnItemButton, hiOnItemButtonExact, hiOnItemCheckbox, hiOnItemIndent, hiOnItemLabel, hiOnItemLeft, hiOnItemRight, hiOnNormalIcon, hiOnStateIcon, hiToLeft, hiToRight, hiUpperSplitter, hiLowerSplitter };

typedef System::Set<THitPosition, THitPosition::hiAbove, THitPosition::hiLowerSplitter> THitPositions;

struct DECLSPEC_DRECORD TVTHeaderHitInfo
{
public:
	int X;
	int Y;
	System::Uitypes::TMouseButton Button;
	System::Classes::TShiftState Shift;
	TColumnIndex Column;
	TVTHeaderHitPositions HitPosition;
};


struct DECLSPEC_DRECORD THitInfo
{
public:
	TVirtualNode *HitNode;
	THitPositions HitPositions;
	TColumnIndex HitColumn;
	System::Types::TPoint HitPoint;
	System::Classes::TShiftState ShiftState;
};


enum DECLSPEC_DENUM TVTHeaderStyle : unsigned char { hsThickButtons, hsFlatButtons, hsPlates };

enum DECLSPEC_DENUM TVTHeaderOption : unsigned char { hoAutoResize, hoColumnResize, hoDblClickResize, hoDrag, hoHotTrack, hoOwnerDraw, hoRestrictDrag, hoShowHint, hoShowImages, hoShowSortGlyphs, hoVisible, hoAutoSpring, hoFullRepaintOnResize, hoDisableAnimatedResize, hoHeightResize, hoHeightDblClickResize, hoHeaderClickAutoSort, hoAutoColumnPopupMenu, hoAutoResizeInclCaption };

typedef System::Set<TVTHeaderOption, TVTHeaderOption::hoAutoResize, TVTHeaderOption::hoAutoResizeInclCaption> TVTHeaderOptions;

enum DECLSPEC_DENUM THeaderState : unsigned char { hsAutoSizing, hsDragging, hsDragPending, hsLoading, hsColumnWidthTracking, hsColumnWidthTrackPending, hsHeightTracking, hsHeightTrackPending, hsResizing, hsScaling, hsNeedScaling };

typedef System::Set<THeaderState, THeaderState::hsAutoSizing, THeaderState::hsNeedScaling> THeaderStates;

enum DECLSPEC_DENUM TVTElement : unsigned char { ofsMargin, ofsToggleButton, ofsCheckBox, ofsStateImage, ofsImage, ofsLabel, ofsText, ofsRightOfText, ofsEndOfClientArea };

typedef System::StaticArray<int, 9> TVTOffsets;

struct DECLSPEC_DRECORD TVTImageInfo
{
public:
	System::Uitypes::TImageIndex Index;
	int XPos;
	int YPos;
	bool Ghosted;
	Vcl::Imglist::TCustomImageList* Images;
	bool __fastcall Equals(const TVTImageInfo &pImageInfo2);
};


enum DECLSPEC_DENUM TVTImageInfoIndex : unsigned char { iiNormal, iiState, iiCheck, iiOverlay };

enum DECLSPEC_DENUM TVTInternalPaintOption : unsigned char { poBackground, poColumnColor, poDrawFocusRect, poDrawSelection, poDrawDropMark, poGridLines, poMainOnly, poSelectedOnly, poUnbuffered };

typedef System::Set<TVTInternalPaintOption, TVTInternalPaintOption::poBackground, TVTInternalPaintOption::poUnbuffered> TVTInternalPaintOptions;

struct DECLSPEC_DRECORD TVTPaintInfo
{
public:
	Vcl::Graphics::TCanvas* Canvas;
	TVTInternalPaintOptions PaintOptions;
	TVirtualNode *Node;
	TColumnIndex Column;
	TColumnPosition Position;
	System::Types::TRect CellRect;
	System::Types::TRect ContentRect;
	int NodeWidth;
	System::Classes::TAlignment Alignment;
	System::Classes::TAlignment CaptionAlignment;
	System::Classes::TBiDiMode BidiMode;
	System::Types::TPoint BrushOrigin;
	System::StaticArray<TVTImageInfo, 4> ImageInfo;
	TVTOffsets Offsets;
	int VAlign;
	void __fastcall AdjustImageCoordinates();
};


typedef System::DynamicArray<PVirtualNode> TNodeArray;

//-- var, const, procedure ---------------------------------------------------
static const System::Int8 VTTreeStreamVersion = System::Int8(0x3);
static const System::Int8 VTHeaderStreamVersion = System::Int8(0x6);
static const System::Word CacheThreshold = System::Word(0x7d0);
static const System::Byte FadeAnimationStepCount = System::Byte(0xff);
static const System::Int8 ShadowSize = System::Int8(0x5);
static const System::Int8 cDefaultTextMargin = System::Int8(0x4);
static const System::Int8 cInitialDefaultNodeHeight = System::Int8(0x12);
static const System::Int8 NoColumn = System::Int8(-1);
static const System::Int8 InvalidColumn = System::Int8(-2);
static const System::Int8 ckEmpty = System::Int8(0x0);
static const System::Int8 ckRadioUncheckedNormal = System::Int8(0x1);
static const System::Int8 ckRadioUncheckedHot = System::Int8(0x2);
static const System::Int8 ckRadioUncheckedPressed = System::Int8(0x3);
static const System::Int8 ckRadioUncheckedDisabled = System::Int8(0x4);
static const System::Int8 ckRadioCheckedNormal = System::Int8(0x5);
static const System::Int8 ckRadioCheckedHot = System::Int8(0x6);
static const System::Int8 ckRadioCheckedPressed = System::Int8(0x7);
static const System::Int8 ckRadioCheckedDisabled = System::Int8(0x8);
static const System::Int8 ckCheckUncheckedNormal = System::Int8(0x9);
static const System::Int8 ckCheckUncheckedHot = System::Int8(0xa);
static const System::Int8 ckCheckUncheckedPressed = System::Int8(0xb);
static const System::Int8 ckCheckUncheckedDisabled = System::Int8(0xc);
static const System::Int8 ckCheckCheckedNormal = System::Int8(0xd);
static const System::Int8 ckCheckCheckedHot = System::Int8(0xe);
static const System::Int8 ckCheckCheckedPressed = System::Int8(0xf);
static const System::Int8 ckCheckCheckedDisabled = System::Int8(0x10);
static const System::Int8 ckCheckMixedNormal = System::Int8(0x11);
static const System::Int8 ckCheckMixedHot = System::Int8(0x12);
static const System::Int8 ckCheckMixedPressed = System::Int8(0x13);
static const System::Int8 ckCheckMixedDisabled = System::Int8(0x14);
static const System::Int8 ckButtonNormal = System::Int8(0x15);
static const System::Int8 ckButtonHot = System::Int8(0x16);
static const System::Int8 ckButtonPressed = System::Int8(0x17);
static const System::Int8 ckButtonDisabled = System::Int8(0x18);
static const System::Int8 ExpandTimer = System::Int8(0x1);
static const System::Int8 EditTimer = System::Int8(0x2);
static const System::Int8 HeaderTimer = System::Int8(0x3);
static const System::Int8 ScrollTimer = System::Int8(0x4);
static const System::Int8 ChangeTimer = System::Int8(0x5);
static const System::Int8 StructureChangeTimer = System::Int8(0x6);
static const System::Int8 SearchTimer = System::Int8(0x7);
static const System::Int8 ThemeChangedTimer = System::Int8(0x8);
static const System::Word ThemeChangedTimerDelay = System::Word(0x1f4);
static const System::Word CM_DENYSUBCLASSING = System::Word(0xce3);
static const System::Word CM_AUTOADJUST = System::Word(0xce8);
extern DELPHI_PACKAGE GUID IID_IDropTargetHelper;
extern DELPHI_PACKAGE GUID IID_IDragSourceHelper;
extern DELPHI_PACKAGE GUID IID_IDropTarget;
#define CFSTR_VIRTUALTREE L"Virtual Tree Data"
#define CFSTR_VTREFERENCE L"Virtual Tree Reference"
#define CFSTR_HTML L"HTML Format"
#define CFSTR_RTF L"Rich Text Format"
#define CFSTR_RTFNOOBJS L"Rich Text Format Without Objects"
#define CFSTR_CSV L"CSV"
static const System::Word hcTFEditLinkIsNil = System::Word(0x7d0);
static const System::Word hcTFWrongMoveError = System::Word(0x7d1);
static const System::Word hcTFWrongStreamFormat = System::Word(0x7d2);
static const System::Word hcTFWrongStreamVersion = System::Word(0x7d3);
static const System::Word hcTFStreamTooSmall = System::Word(0x7d4);
static const System::Word hcTFCorruptStream1 = System::Word(0x7d5);
static const System::Word hcTFCorruptStream2 = System::Word(0x7d6);
static const System::Word hcTFClipboardFailed = System::Word(0x7d7);
static const System::Word hcTFCannotSetUserData = System::Word(0x7d8);
static const short crHeaderSplit _DEPRECATED_ATTRIBUTE1("Use vrHSplit instead")  = short(-14);
static const short crVertSplit _DEPRECATED_ATTRIBUTE1("Use vrVSplit instead")  = short(-15);
static const System::Int8 NodeChunk = System::Int8(0x1);
static const System::Int8 BaseChunk = System::Int8(0x2);
static const System::Int8 CaptionChunk = System::Int8(0x3);
static const System::Int8 UserChunk = System::Int8(0x4);
#define DefaultPaintOptions (System::Set<TVTPaintOption, TVTPaintOption::toHideFocusRect, TVTPaintOption::toShowFilteredNodes>() << TVTPaintOption::toShowButtons << TVTPaintOption::toShowDropmark << TVTPaintOption::toShowRoot << TVTPaintOption::toShowTreeLines << TVTPaintOption::toThemeAware << TVTPaintOption::toUseBlendedImages << TVTPaintOption::toFullVertGridLines )
#define DefaultAnimationOptions System::Set<System::Byte>()
#define DefaultAutoOptions (System::Set<TVTAutoOption, TVTAutoOption::toAutoDropExpand, TVTAutoOption::toAutoBidiColumnOrdering>() << TVTAutoOption::toAutoDropExpand << TVTAutoOption::toAutoScrollOnExpand << TVTAutoOption::toAutoSort << TVTAutoOption::toAutoTristateTracking << TVTAutoOption::toAutoHideButtons << TVTAutoOption::toAutoDeleteMovedNodes << TVTAutoOption::toAutoChangeScale )
#define DefaultSelectionOptions (System::Set<TVTSelectionOption, TVTSelectionOption::toDisableDrawSelection, TVTSelectionOption::toSelectNextNodeOnRemoval>() << TVTSelectionOption::toSelectNextNodeOnRemoval )
#define DefaultMiscOptions (System::Set<TVTMiscOption, TVTMiscOption::toAcceptOLEDrop, TVTMiscOption::toReverseFullExpandHotKey>() << TVTMiscOption::toAcceptOLEDrop << TVTMiscOption::toFullRepaintOnResize << TVTMiscOption::toInitOnSave << TVTMiscOption::toToggleOnDblClick << TVTMiscOption::toWheelPanning << TVTMiscOption::toEditOnClick )
#define DefaultStringOptions (System::Set<TVTStringOption, TVTStringOption::toSaveCaptions, TVTStringOption::toAutoAcceptEditChange>() << TVTStringOption::toSaveCaptions << TVTStringOption::toAutoAcceptEditChange )
}	/* namespace Types */
}	/* namespace Virtualtrees */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VIRTUALTREES_TYPES)
using namespace Virtualtrees::Types;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VIRTUALTREES)
using namespace Virtualtrees;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Virtualtrees_TypesHPP
