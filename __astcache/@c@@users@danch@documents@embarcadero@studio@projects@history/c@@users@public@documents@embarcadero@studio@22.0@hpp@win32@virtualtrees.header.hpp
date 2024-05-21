﻿// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'VirtualTrees.Header.pas' rev: 35.00 (Windows)

#ifndef Virtualtrees_HeaderHPP
#define Virtualtrees_HeaderHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <System.Classes.hpp>
#include <System.Types.hpp>
#include <System.Generics.Collections.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Themes.hpp>
#include <Vcl.GraphUtil.hpp>
#include <System.UITypes.hpp>
#include <VirtualTrees.StyleHooks.hpp>
#include <VirtualTrees.Utils.hpp>
#include <VirtualTrees.Types.hpp>
#include <VirtualTrees.DragImage.hpp>

//-- user supplied -----------------------------------------------------------

namespace Virtualtrees
{
namespace Header
{
//-- forward type declarations -----------------------------------------------
struct THeaderPaintInfo;
class DELPHICLASS TVirtualTreeColumn;
class DELPHICLASS TVirtualTreeColumns;
class DELPHICLASS TVTFixedAreaConstraints;
class DELPHICLASS TVTHeader;
//-- type declarations -------------------------------------------------------
struct DECLSPEC_DRECORD THeaderPaintInfo
{
public:
	Vcl::Graphics::TCanvas* TargetCanvas;
	TVirtualTreeColumn* Column;
	System::Types::TRect PaintRectangle;
	System::Types::TRect TextRectangle;
	bool IsHoverIndex;
	bool IsDownIndex;
	bool IsEnabled;
	bool ShowHeaderGlyph;
	bool ShowSortGlyph;
	bool ShowRightBorder;
	Virtualtrees::Types::TVTDropMarkMode DropMark;
	System::Types::TPoint GlyphPos;
	System::Types::TPoint SortGlyphPos;
	System::Types::TSize SortGlyphSize;
	void __fastcall DrawSortArrow(Virtualtrees::Types::TSortDirection pDirection);
	void __fastcall DrawDropMark();
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TVirtualTreeColumn : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	static const System::Int8 cDefaultColumnSpacing = System::Int8(0x3);
	
	System::UnicodeString FText;
	System::UnicodeString FHint;
	int FWidth;
	Virtualtrees::Types::TColumnPosition FPosition;
	int FMinWidth;
	int FMaxWidth;
	Virtualtrees::Types::TVirtualTreeColumnStyle FStyle;
	System::Uitypes::TImageIndex FImageIndex;
	System::Classes::TBiDiMode FBiDiMode;
	Virtualtrees::Types::TVTHeaderColumnLayout FLayout;
	int FMargin;
	int FSpacing;
	Virtualtrees::Types::TVTColumnOptions FOptions;
	Virtualtrees::Types::TVTEditOptions FEditOptions;
	int FEditNextColumn;
	NativeInt FTag;
	System::Classes::TAlignment FAlignment;
	System::Classes::TAlignment FCaptionAlignment;
	int FLastWidth;
	System::Uitypes::TColor FColor;
	bool FBonusPixel;
	float FSpringRest;
	System::UnicodeString FCaptionText;
	bool FCheckBox;
	Virtualtrees::Types::TCheckType FCheckType;
	Virtualtrees::Types::TCheckState FCheckState;
	System::Types::TRect FImageRect;
	bool FHasImage;
	Virtualtrees::Types::TSortDirection FDefaultSortDirection;
	System::Classes::TAlignment __fastcall GetCaptionAlignment();
	int __fastcall GetCaptionWidth();
	int __fastcall GetLeft();
	bool __fastcall IsBiDiModeStored();
	bool __fastcall IsCaptionAlignmentStored();
	bool __fastcall IsColorStored();
	void __fastcall SetAlignment(const System::Classes::TAlignment Value);
	void __fastcall SetBiDiMode(System::Classes::TBiDiMode Value);
	void __fastcall SetCaptionAlignment(const System::Classes::TAlignment Value);
	void __fastcall SetCheckBox(bool Value);
	void __fastcall SetCheckState(Virtualtrees::Types::TCheckState Value);
	void __fastcall SetCheckType(Virtualtrees::Types::TCheckType Value);
	void __fastcall SetColor(const System::Uitypes::TColor Value);
	void __fastcall SetImageIndex(System::Uitypes::TImageIndex Value);
	void __fastcall SetLayout(Virtualtrees::Types::TVTHeaderColumnLayout Value);
	void __fastcall SetMargin(int Value);
	void __fastcall SetMaxWidth(int Value);
	void __fastcall SetMinWidth(int Value);
	void __fastcall SetOptions(Virtualtrees::Types::TVTColumnOptions Value);
	void __fastcall SetPosition(Virtualtrees::Types::TColumnPosition Value);
	void __fastcall SetSpacing(int Value);
	void __fastcall SetStyle(Virtualtrees::Types::TVirtualTreeColumnStyle Value);
	
protected:
	int FLeft;
	virtual void __fastcall ChangeScale(int M, int D);
	void __fastcall ComputeHeaderLayout(THeaderPaintInfo &PaintInfo, unsigned DrawFormat, bool CalculateTextRect = false);
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	void __fastcall GetAbsoluteBounds(int &Left, int &Right);
	virtual System::UnicodeString __fastcall GetDisplayName();
	virtual System::UnicodeString __fastcall GetText();
	virtual void __fastcall SetText(const System::UnicodeString Value);
	HIDESBASE TVirtualTreeColumns* __fastcall GetOwner();
	void __fastcall InternalSetWidth(const int Value);
	void __fastcall ReadHint(System::Classes::TReader* Reader);
	void __fastcall ReadText(System::Classes::TReader* Reader);
	virtual void __fastcall SetCollection(System::Classes::TCollection* Value);
	void __fastcall SetWidth(int Value);
	
public:
	__fastcall virtual TVirtualTreeColumn(System::Classes::TCollection* Collection);
	__fastcall virtual ~TVirtualTreeColumn();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	virtual bool __fastcall Equals(System::TObject* OtherColumnObj);
	virtual System::Types::TRect __fastcall GetRect();
	__property bool HasImage = {read=FHasImage, nodefault};
	__property System::Types::TRect ImageRect = {read=FImageRect};
	void __fastcall LoadFromStream(System::Classes::TStream* const Stream, int Version);
	void __fastcall ParentBiDiModeChanged();
	void __fastcall ParentColorChanged();
	void __fastcall RestoreLastWidth();
	System::Uitypes::TColor __fastcall GetEffectiveColor();
	void __fastcall SaveToStream(System::Classes::TStream* const Stream);
	bool __fastcall UseRightToLeftReading();
	__property bool BonusPixel = {read=FBonusPixel, write=FBonusPixel, nodefault};
	__property System::UnicodeString CaptionText = {read=FCaptionText};
	__property int LastWidth = {read=FLastWidth, nodefault};
	__property int Left = {read=GetLeft, nodefault};
	__property TVirtualTreeColumns* Owner = {read=GetOwner};
	__property float SpringRest = {read=FSpringRest, write=FSpringRest};
	
__published:
	__property System::Classes::TAlignment Alignment = {read=FAlignment, write=SetAlignment, default=0};
	__property System::Classes::TBiDiMode BiDiMode = {read=FBiDiMode, write=SetBiDiMode, stored=IsBiDiModeStored, nodefault};
	__property System::Classes::TAlignment CaptionAlignment = {read=GetCaptionAlignment, write=SetCaptionAlignment, stored=IsCaptionAlignmentStored, default=0};
	__property int CaptionWidth = {read=GetCaptionWidth, nodefault};
	__property Virtualtrees::Types::TCheckType CheckType = {read=FCheckType, write=SetCheckType, default=2};
	__property Virtualtrees::Types::TCheckState CheckState = {read=FCheckState, write=SetCheckState, default=0};
	__property bool CheckBox = {read=FCheckBox, write=SetCheckBox, default=0};
	__property System::Uitypes::TColor Color = {read=FColor, write=SetColor, stored=IsColorStored, nodefault};
	__property Virtualtrees::Types::TSortDirection DefaultSortDirection = {read=FDefaultSortDirection, write=FDefaultSortDirection, default=0};
	__property System::UnicodeString Hint = {read=FHint, write=FHint};
	__property System::Uitypes::TImageIndex ImageIndex = {read=FImageIndex, write=SetImageIndex, default=-1};
	__property Virtualtrees::Types::TVTHeaderColumnLayout Layout = {read=FLayout, write=SetLayout, default=0};
	__property int Margin = {read=FMargin, write=SetMargin, default=4};
	__property int MaxWidth = {read=FMaxWidth, write=SetMaxWidth, default=10000};
	__property int MinWidth = {read=FMinWidth, write=SetMinWidth, default=10};
	__property Virtualtrees::Types::TVTColumnOptions Options = {read=FOptions, write=SetOptions, default=100607};
	__property Virtualtrees::Types::TVTEditOptions EditOptions = {read=FEditOptions, write=FEditOptions, default=0};
	__property int EditNextColumn = {read=FEditNextColumn, write=FEditNextColumn, default=-1};
	__property Virtualtrees::Types::TColumnPosition Position = {read=FPosition, write=SetPosition, nodefault};
	__property int Spacing = {read=FSpacing, write=SetSpacing, default=3};
	__property Virtualtrees::Types::TVirtualTreeColumnStyle Style = {read=FStyle, write=SetStyle, default=0};
	__property NativeInt Tag = {read=FTag, write=FTag, default=0};
	__property System::UnicodeString Text = {read=GetText, write=SetText};
	__property int Width = {read=FWidth, write=SetWidth, default=50};
};

#pragma pack(pop)

typedef System::TMetaClass* TVirtualTreeColumnClass;

typedef System::DynamicArray<TVirtualTreeColumn*> TColumnsArray;

typedef System::DynamicArray<unsigned> TCardinalArray;

typedef System::DynamicArray<Virtualtrees::Types::TColumnIndex> TIndexArray;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TVirtualTreeColumns : public System::Classes::TCollection
{
	typedef System::Classes::TCollection inherited;
	
public:
	TVirtualTreeColumn* operator[](Virtualtrees::Types::TColumnIndex Index) { return this->Items[Index]; }
	
private:
	TVTHeader* FHeader;
	Vcl::Graphics::TBitmap* FHeaderBitmap;
	Virtualtrees::Types::TColumnIndex FHoverIndex;
	Virtualtrees::Types::TColumnIndex FDownIndex;
	Virtualtrees::Types::TColumnIndex FTrackIndex;
	Virtualtrees::Types::TColumnIndex FClickIndex;
	bool FCheckBoxHit;
	TIndexArray FPositionToIndex;
	int FDefaultWidth;
	bool FNeedPositionsFix;
	bool FClearing;
	Vcl::Menus::TPopupMenu* FColumnPopupMenu;
	HIDESBASE int __fastcall GetCount();
	HIDESBASE TVirtualTreeColumn* __fastcall GetItem(Virtualtrees::Types::TColumnIndex Index);
	bool __fastcall GetNewIndex(const System::Types::TPoint &P, Virtualtrees::Types::TColumnIndex &OldIndex);
	void __fastcall SetDefaultWidth(int Value);
	HIDESBASE void __fastcall SetItem(Virtualtrees::Types::TColumnIndex Index, TVirtualTreeColumn* Value);
	Vcl::Controls::TCustomControl* __fastcall GetTreeView();
	
protected:
	Virtualtrees::Types::TColumnIndex FDragIndex;
	Virtualtrees::Types::TColumnIndex FDropTarget;
	bool FDropBefore;
	void __fastcall AdjustAutoSize(Virtualtrees::Types::TColumnIndex CurrentIndex, bool Force = false);
	Virtualtrees::Types::TColumnIndex __fastcall AdjustDownColumn(const System::Types::TPoint &P);
	bool __fastcall AdjustHoverColumn(const System::Types::TPoint &P);
	void __fastcall AdjustPosition(TVirtualTreeColumn* Column, unsigned Position);
	bool __fastcall CanSplitterResize(const System::Types::TPoint &P, Virtualtrees::Types::TColumnIndex Column);
	virtual void __fastcall DoCanSplitterResize(const System::Types::TPoint &P, Virtualtrees::Types::TColumnIndex Column, bool &Allowed);
	void __fastcall DrawButtonText(HDC DC, System::UnicodeString Caption, const System::Types::TRect &Bounds, bool Enabled, bool Hot, unsigned DrawFormat, bool WrapCaption);
	void __fastcall FixPositions();
	int __fastcall GetColumnAndBounds(const System::Types::TPoint &P, int &ColumnLeft, int &ColumnRight, bool Relative = true);
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	virtual bool __fastcall HandleClick(const System::Types::TPoint &P, System::Uitypes::TMouseButton Button, bool Force, bool DblClick);
	void __fastcall HeaderPopupMenuAddHeaderPopupItem(System::TObject* const Sender, const Virtualtrees::Types::TColumnIndex Column, Virtualtrees::Types::TAddPopupItemType &Cmd);
	void __fastcall IndexChanged(int OldIndex, int NewIndex);
	void __fastcall InitializePositionArray();
	virtual void __fastcall Notify(System::Classes::TCollectionItem* Item, System::Generics::Collections::TCollectionNotification Action);
	void __fastcall ReorderColumns(bool RTL);
	void __fastcall SetHoverIndex(Virtualtrees::Types::TColumnIndex Index);
	virtual void __fastcall Update(System::Classes::TCollectionItem* Item);
	void __fastcall UpdatePositions(bool Force = false);
	__property Vcl::Graphics::TBitmap* HeaderBitmap = {read=FHeaderBitmap};
	__property TIndexArray PositionToIndex = {read=FPositionToIndex};
	__property Virtualtrees::Types::TColumnIndex HoverIndex = {read=FHoverIndex, write=FHoverIndex, nodefault};
	__property Virtualtrees::Types::TColumnIndex DownIndex = {read=FDownIndex, write=FDownIndex, nodefault};
	__property bool CheckBoxHit = {read=FCheckBoxHit, write=FCheckBoxHit, nodefault};
	Vcl::Themes::TCustomStyleServices* __fastcall StyleServices(Vcl::Controls::TControl* AControl = (Vcl::Controls::TControl*)(0x0));
	
public:
	__fastcall virtual TVirtualTreeColumns(TVTHeader* AOwner);
	__fastcall virtual ~TVirtualTreeColumns();
	HIDESBASE virtual TVirtualTreeColumn* __fastcall Add();
	void __fastcall AnimatedResize(Virtualtrees::Types::TColumnIndex Column, int NewWidth);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	HIDESBASE virtual void __fastcall Clear();
	virtual Virtualtrees::Types::TColumnIndex __fastcall ColumnFromPosition(const System::Types::TPoint &P, bool Relative = true)/* overload */;
	virtual Virtualtrees::Types::TColumnIndex __fastcall ColumnFromPosition(Virtualtrees::Types::TColumnPosition PositionIndex)/* overload */;
	virtual bool __fastcall Equals(System::TObject* OtherColumnsObj);
	void __fastcall GetColumnBounds(Virtualtrees::Types::TColumnIndex Column, int &Left, int &Right);
	Virtualtrees::Types::TColumnIndex __fastcall GetFirstVisibleColumn(bool ConsiderAllowFocus = false);
	Virtualtrees::Types::TColumnIndex __fastcall GetLastVisibleColumn(bool ConsiderAllowFocus = false);
	Virtualtrees::Types::TColumnIndex __fastcall GetFirstColumn();
	Virtualtrees::Types::TColumnIndex __fastcall GetNextColumn(Virtualtrees::Types::TColumnIndex Column);
	Virtualtrees::Types::TColumnIndex __fastcall GetNextVisibleColumn(Virtualtrees::Types::TColumnIndex Column, bool ConsiderAllowFocus = false);
	Virtualtrees::Types::TColumnIndex __fastcall GetPreviousColumn(Virtualtrees::Types::TColumnIndex Column);
	Virtualtrees::Types::TColumnIndex __fastcall GetPreviousVisibleColumn(Virtualtrees::Types::TColumnIndex Column, bool ConsiderAllowFocus = false);
	int __fastcall GetScrollWidth();
	TColumnsArray __fastcall GetVisibleColumns();
	int __fastcall GetVisibleFixedWidth();
	bool __fastcall IsValidColumn(Virtualtrees::Types::TColumnIndex Column);
	void __fastcall LoadFromStream(System::Classes::TStream* const Stream, int Version);
	virtual void __fastcall PaintHeader(HDC DC, const System::Types::TRect &R, int HOffset)/* overload */;
	virtual void __fastcall PaintHeader(Vcl::Graphics::TCanvas* TargetCanvas, const System::Types::TRect &R, const System::Types::TPoint &Target, int RTLOffset = 0x0)/* overload */;
	void __fastcall SaveToStream(System::Classes::TStream* const Stream);
	virtual void __fastcall EndUpdate();
	int __fastcall TotalWidth();
	__property int Count = {read=GetCount, nodefault};
	__property Virtualtrees::Types::TColumnIndex ClickIndex = {read=FClickIndex, write=FClickIndex, nodefault};
	__property int DefaultWidth = {read=FDefaultWidth, write=SetDefaultWidth, nodefault};
	__property Virtualtrees::Types::TColumnIndex DragIndex = {read=FDragIndex, write=FDragIndex, nodefault};
	__property bool DropBefore = {read=FDropBefore, write=FDropBefore, nodefault};
	__property Virtualtrees::Types::TColumnIndex DropTarget = {read=FDropTarget, write=FDropTarget, nodefault};
	__property TVirtualTreeColumn* Items[Virtualtrees::Types::TColumnIndex Index] = {read=GetItem, write=SetItem/*, default*/};
	__property TVTHeader* Header = {read=FHeader};
	__property Virtualtrees::Types::TColumnIndex TrackIndex = {read=FTrackIndex, write=FTrackIndex, nodefault};
	__property Vcl::Controls::TCustomControl* TreeView = {read=GetTreeView};
	__property UpdateCount;
};

#pragma pack(pop)

typedef System::TMetaClass* TVirtualTreeColumnsClass;

typedef System::Int8 TVTConstraintPercent;

class PASCALIMPLEMENTATION TVTFixedAreaConstraints : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	TVTHeader* FHeader;
	TVTConstraintPercent FMaxHeightPercent;
	TVTConstraintPercent FMaxWidthPercent;
	TVTConstraintPercent FMinHeightPercent;
	TVTConstraintPercent FMinWidthPercent;
	System::Classes::TNotifyEvent FOnChange;
	void __fastcall SetConstraints(int Index, TVTConstraintPercent Value);
	
protected:
	void __fastcall Change();
	__property TVTHeader* Header = {read=FHeader};
	
public:
	__fastcall TVTFixedAreaConstraints(TVTHeader* AOwner);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	
__published:
	__property TVTConstraintPercent MaxHeightPercent = {read=FMaxHeightPercent, write=SetConstraints, index=0, default=0};
	__property TVTConstraintPercent MaxWidthPercent = {read=FMaxWidthPercent, write=SetConstraints, index=1, default=95};
	__property TVTConstraintPercent MinHeightPercent = {read=FMinHeightPercent, write=SetConstraints, index=2, default=0};
	__property TVTConstraintPercent MinWidthPercent = {read=FMinWidthPercent, write=SetConstraints, index=3, default=0};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TVTFixedAreaConstraints() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TVTHeader : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	Vcl::Controls::TCustomControl* FOwner;
	TVirtualTreeColumns* FColumns;
	int FHeight;
	Vcl::Graphics::TFont* FFont;
	bool FParentFont;
	Virtualtrees::Types::TVTHeaderOptions FOptions;
	Virtualtrees::Types::TVTHeaderStyle FStyle;
	System::Uitypes::TColor FBackgroundColor;
	Virtualtrees::Types::TColumnIndex FAutoSizeIndex;
	Vcl::Menus::TPopupMenu* FPopupMenu;
	Virtualtrees::Types::TColumnIndex FMainColumn;
	int FMaxHeight;
	int FMinHeight;
	int FDefaultHeight;
	TVTFixedAreaConstraints* FFixedAreaConstraints;
	Vcl::Imglist::TCustomImageList* FImages;
	Vcl::Imglist::TChangeLink* FImageChangeLink;
	int fSplitterHitTolerance;
	Virtualtrees::Types::TColumnIndex FSortColumn;
	Virtualtrees::Types::TSortDirection FSortDirection;
	Virtualtrees::Dragimage::TVTDragImage* FDragImage;
	int FLastWidth;
	int FRestoreSelectionColumnIndex;
	bool FWasDoubleClick;
	Virtualtrees::Types::TColumnIndex __fastcall GetMainColumn();
	bool __fastcall GetUseColumns();
	bool __fastcall IsFontStored();
	void __fastcall SetAutoSizeIndex(Virtualtrees::Types::TColumnIndex Value);
	void __fastcall SetBackground(System::Uitypes::TColor Value);
	void __fastcall SetColumns(TVirtualTreeColumns* Value);
	void __fastcall SetDefaultHeight(int Value);
	void __fastcall SetFont(Vcl::Graphics::TFont* const Value);
	void __fastcall SetHeight(int Value);
	void __fastcall SetImages(Vcl::Imglist::TCustomImageList* const Value);
	void __fastcall SetMainColumn(Virtualtrees::Types::TColumnIndex Value);
	void __fastcall SetMaxHeight(int Value);
	void __fastcall SetMinHeight(int Value);
	void __fastcall SetOptions(Virtualtrees::Types::TVTHeaderOptions Value);
	void __fastcall SetParentFont(bool Value);
	void __fastcall SetSortColumn(Virtualtrees::Types::TColumnIndex Value);
	void __fastcall SetSortDirection(const Virtualtrees::Types::TSortDirection Value);
	void __fastcall SetStyle(Virtualtrees::Types::TVTHeaderStyle Value);
	int __fastcall GetRestoreSelectionColumnIndex();
	bool __fastcall AreColumnsStored();
	
protected:
	Virtualtrees::Types::THeaderStates FStates;
	System::Types::TPoint FDragStart;
	System::Types::TPoint FTrackStart;
	System::Types::TPoint FTrackPoint;
	bool FDoingAutoFitColumns;
	virtual void __fastcall FontChanged(System::TObject* Sender);
	virtual void __fastcall AutoScale();
	bool __fastcall CanSplitterResize(const System::Types::TPoint &P);
	virtual bool __fastcall CanWriteColumns();
	virtual void __fastcall ChangeScale(int M, int D);
	virtual bool __fastcall DetermineSplitterIndex(const System::Types::TPoint &P);
	virtual void __fastcall DoAfterAutoFitColumn(Virtualtrees::Types::TColumnIndex Column);
	virtual void __fastcall DoAfterColumnWidthTracking(Virtualtrees::Types::TColumnIndex Column);
	virtual void __fastcall DoAfterHeightTracking();
	virtual bool __fastcall DoBeforeAutoFitColumn(Virtualtrees::Types::TColumnIndex Column, Virtualtrees::Types::TSmartAutoFitType SmartAutoFitType);
	virtual void __fastcall DoBeforeColumnWidthTracking(Virtualtrees::Types::TColumnIndex Column, System::Classes::TShiftState Shift);
	virtual void __fastcall DoBeforeHeightTracking(System::Classes::TShiftState Shift);
	virtual void __fastcall DoCanSplitterResize(const System::Types::TPoint &P, bool &Allowed);
	virtual bool __fastcall DoColumnWidthDblClickResize(Virtualtrees::Types::TColumnIndex Column, const System::Types::TPoint &P, System::Classes::TShiftState Shift);
	virtual bool __fastcall DoColumnWidthTracking(Virtualtrees::Types::TColumnIndex Column, System::Classes::TShiftState Shift, System::Types::TPoint &TrackPoint, const System::Types::TPoint &P);
	virtual Vcl::Menus::TPopupMenu* __fastcall DoGetPopupMenu(Virtualtrees::Types::TColumnIndex Column, const System::Types::TPoint &Position);
	virtual bool __fastcall DoHeightTracking(System::Types::TPoint &P, System::Classes::TShiftState Shift);
	virtual bool __fastcall DoHeightDblClickResize(System::Types::TPoint &P, System::Classes::TShiftState Shift);
	virtual void __fastcall DoSetSortColumn(Virtualtrees::Types::TColumnIndex Value, Virtualtrees::Types::TSortDirection pSortDirection);
	virtual void __fastcall DragTo(const System::Types::TPoint &P);
	void __fastcall FixedAreaConstraintsChanged(System::TObject* Sender);
	virtual TVirtualTreeColumnsClass __fastcall GetColumnsClass();
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	System::Classes::TShiftState __fastcall GetShiftState();
	bool __fastcall HandleHeaderMouseMove(Winapi::Messages::TWMMouse &Message);
	virtual bool __fastcall HandleMessage(Winapi::Messages::TMessage &Message);
	void __fastcall ImageListChange(System::TObject* Sender);
	void __fastcall PrepareDrag(const System::Types::TPoint &P, const System::Types::TPoint &Start);
	void __fastcall ReadColumns(System::Classes::TReader* Reader);
	virtual void __fastcall RecalculateHeader();
	void __fastcall RescaleHeader();
	void __fastcall UpdateMainColumn();
	void __fastcall UpdateSpringColumns();
	void __fastcall WriteColumns(System::Classes::TWriter* Writer);
	void __fastcall InternalSetMainColumn(const Virtualtrees::Types::TColumnIndex Index);
	void __fastcall InternalSetAutoSizeIndex(const Virtualtrees::Types::TColumnIndex Index);
	void __fastcall InternalSetSortColumn(const Virtualtrees::Types::TColumnIndex Index);
	
public:
	__fastcall virtual TVTHeader(Vcl::Controls::TCustomControl* AOwner);
	__fastcall virtual ~TVTHeader();
	bool __fastcall AllowFocus(Virtualtrees::Types::TColumnIndex ColumnIndex);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	void __fastcall AutoFitColumns()/* overload */;
	virtual void __fastcall AutoFitColumns(bool Animated, Virtualtrees::Types::TSmartAutoFitType SmartAutoFitType = (Virtualtrees::Types::TSmartAutoFitType)(0x2), int RangeStartCol = 0xffffffff, int RangeEndCol = 0xffffffff)/* overload */;
	virtual bool __fastcall InHeader(const System::Types::TPoint &P);
	virtual bool __fastcall InHeaderSplitterArea(const System::Types::TPoint &P);
	void __fastcall Invalidate(TVirtualTreeColumn* Column, bool ExpandToBorder = false, bool UpdateNowFlag = false);
	virtual void __fastcall LoadFromStream(System::Classes::TStream* const Stream);
	int __fastcall ResizeColumns(int ChangeBy, Virtualtrees::Types::TColumnIndex RangeStartCol, Virtualtrees::Types::TColumnIndex RangeEndCol, Virtualtrees::Types::TVTColumnOptions Options = (Virtualtrees::Types::TVTColumnOptions() << Virtualtrees::Types::TVTColumnOption::coVisible ));
	void __fastcall RestoreColumns();
	virtual void __fastcall SaveToStream(System::Classes::TStream* const Stream);
	virtual void __fastcall StyleChanged();
	void __fastcall ToggleSortDirection();
	__property Virtualtrees::Dragimage::TVTDragImage* DragImage = {read=FDragImage};
	__property int RestoreSelectionColumnIndex = {read=GetRestoreSelectionColumnIndex, write=FRestoreSelectionColumnIndex, default=-1};
	__property Virtualtrees::Types::THeaderStates States = {read=FStates, nodefault};
	__property Vcl::Controls::TCustomControl* Treeview = {read=FOwner};
	__property bool UseColumns = {read=GetUseColumns, nodefault};
	__property bool doingAutoFitColumns = {read=FDoingAutoFitColumns, nodefault};
	
__published:
	__property Virtualtrees::Types::TColumnIndex AutoSizeIndex = {read=FAutoSizeIndex, write=SetAutoSizeIndex, nodefault};
	__property System::Uitypes::TColor Background = {read=FBackgroundColor, write=SetBackground, default=-16777201};
	__property TVirtualTreeColumns* Columns = {read=FColumns, write=SetColumns, stored=AreColumnsStored};
	__property int DefaultHeight = {read=FDefaultHeight, write=SetDefaultHeight, default=19};
	__property Vcl::Graphics::TFont* Font = {read=FFont, write=SetFont, stored=IsFontStored};
	__property TVTFixedAreaConstraints* FixedAreaConstraints = {read=FFixedAreaConstraints, write=FFixedAreaConstraints};
	__property int Height = {read=FHeight, write=SetHeight, default=19};
	__property Vcl::Imglist::TCustomImageList* Images = {read=FImages, write=SetImages};
	__property Virtualtrees::Types::TColumnIndex MainColumn = {read=GetMainColumn, write=SetMainColumn, default=0};
	__property int MaxHeight = {read=FMaxHeight, write=SetMaxHeight, default=10000};
	__property int MinHeight = {read=FMinHeight, write=SetMinHeight, default=10};
	__property Virtualtrees::Types::TVTHeaderOptions Options = {read=FOptions, write=SetOptions, default=522};
	__property bool ParentFont = {read=FParentFont, write=SetParentFont, default=1};
	__property Vcl::Menus::TPopupMenu* PopupMenu = {read=FPopupMenu, write=FPopupMenu};
	__property Virtualtrees::Types::TColumnIndex SortColumn = {read=FSortColumn, write=SetSortColumn, default=-1};
	__property Virtualtrees::Types::TSortDirection SortDirection = {read=FSortDirection, write=SetSortDirection, default=0};
	__property int SplitterHitTolerance = {read=fSplitterHitTolerance, write=fSplitterHitTolerance, default=8};
	__property Virtualtrees::Types::TVTHeaderStyle Style = {read=FStyle, write=SetStyle, default=0};
};

#pragma pack(pop)

typedef System::TMetaClass* TVTHeaderClass;

//-- var, const, procedure ---------------------------------------------------
#define DefaultColumnOptions (System::Set<Virtualtrees::Types::TVTColumnOption, Virtualtrees::Types::TVTColumnOption::coAllowClick, Virtualtrees::Types::TVTColumnOption::coStyleColor>() << Virtualtrees::Types::TVTColumnOption::coAllowClick << Virtualtrees::Types::TVTColumnOption::coDraggable << Virtualtrees::Types::TVTColumnOption::coEnabled << Virtualtrees::Types::TVTColumnOption::coParentBidiMode << Virtualtrees::Types::TVTColumnOption::coParentColor << Virtualtrees::Types::TVTColumnOption::coResizable << Virtualtrees::Types::TVTColumnOption::coShowDropMark << Virtualtrees::Types::TVTColumnOption::coVisible << Virtualtrees::Types::TVTColumnOption::coAllowFocus << Virtualtrees::Types::TVTColumnOption::coEditable << Virtualtrees::Types::TVTColumnOption::coStyleColor )
}	/* namespace Header */
}	/* namespace Virtualtrees */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VIRTUALTREES_HEADER)
using namespace Virtualtrees::Header;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VIRTUALTREES)
using namespace Virtualtrees;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Virtualtrees_HeaderHPP
