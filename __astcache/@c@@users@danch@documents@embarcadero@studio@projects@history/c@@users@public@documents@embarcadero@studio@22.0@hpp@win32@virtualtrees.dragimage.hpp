// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'VirtualTrees.DragImage.pas' rev: 35.00 (Windows)

#ifndef Virtualtrees_DragimageHPP
#define Virtualtrees_DragimageHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.ActiveX.hpp>
#include <System.Types.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Graphics.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Virtualtrees
{
namespace Dragimage
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TVTDragImage;
//-- type declarations -------------------------------------------------------
typedef System::Byte TVTTransparency;

typedef System::Int8 TVTBias;

enum DECLSPEC_DENUM TVTDragMoveRestriction : unsigned char { dmrNone, dmrHorizontalOnly, dmrVerticalOnly };

enum DECLSPEC_DENUM Virtualtrees_Dragimage__1 : unsigned char { disHidden, disInDrag, disPrepared, disSystemSupport };

typedef System::Set<Virtualtrees_Dragimage__1, Virtualtrees_Dragimage__1::disHidden, Virtualtrees_Dragimage__1::disSystemSupport> TVTDragImageStates;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TVTDragImage : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Vcl::Controls::TCustomControl* FOwner;
	Vcl::Graphics::TBitmap* FBackImage;
	Vcl::Graphics::TBitmap* FAlphaImage;
	Vcl::Graphics::TBitmap* FDragImage;
	System::Types::TPoint FImagePosition;
	System::Types::TPoint FLastPosition;
	TVTTransparency FTransparency;
	TVTBias FPreBlendBias;
	TVTBias FPostBlendBias;
	bool FFade;
	TVTDragMoveRestriction FRestriction;
	System::Uitypes::TColor FColorKey;
	TVTDragImageStates FStates;
	bool __fastcall GetVisible();
	void __fastcall InternalShowDragImage(HDC ScreenDC);
	void __fastcall MakeAlphaChannel(Vcl::Graphics::TBitmap* Source, Vcl::Graphics::TBitmap* Target);
	
public:
	__fastcall TVTDragImage(Vcl::Controls::TCustomControl* AOwner);
	__fastcall virtual ~TVTDragImage();
	bool __fastcall DragTo(const System::Types::TPoint &P, bool ForceRepaint);
	void __fastcall EndDrag();
	System::Types::TRect __fastcall GetDragImageRect();
	void __fastcall HideDragImage();
	void __fastcall PrepareDrag(Vcl::Graphics::TBitmap* DragImage, const System::Types::TPoint &ImagePosition, const System::Types::TPoint &HotSpot, const _di_IDataObject DataObject);
	void __fastcall RecaptureBackground(Vcl::Controls::TCustomControl* Tree, const System::Types::TRect &R, HRGN VisibleRegion, bool CaptureNCArea, bool ReshowDragImage);
	void __fastcall ShowDragImage();
	bool __fastcall WillMove(const System::Types::TPoint &P);
	__property System::Uitypes::TColor ColorKey = {read=FColorKey, write=FColorKey, default=-16777211};
	__property bool Fade = {read=FFade, write=FFade, default=0};
	__property System::Types::TPoint ImagePosition = {read=FImagePosition};
	__property System::Types::TPoint LastPosition = {read=FLastPosition};
	__property TVTDragMoveRestriction MoveRestriction = {read=FRestriction, write=FRestriction, default=0};
	__property TVTBias PreBlendBias = {read=FPreBlendBias, write=FPreBlendBias, default=0};
	__property TVTTransparency Transparency = {read=FTransparency, write=FTransparency, default=128};
	__property bool Visible = {read=GetVisible, nodefault};
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Dragimage */
}	/* namespace Virtualtrees */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VIRTUALTREES_DRAGIMAGE)
using namespace Virtualtrees::Dragimage;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VIRTUALTREES)
using namespace Virtualtrees;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Virtualtrees_DragimageHPP
