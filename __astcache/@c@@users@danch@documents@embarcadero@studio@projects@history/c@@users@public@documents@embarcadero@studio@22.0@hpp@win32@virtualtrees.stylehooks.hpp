// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'VirtualTrees.StyleHooks.pas' rev: 35.00 (Windows)

#ifndef Virtualtrees_StylehooksHPP
#define Virtualtrees_StylehooksHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <Winapi.UxTheme.hpp>
#include <System.Classes.hpp>
#include <System.UITypes.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Themes.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Controls.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------

namespace Virtualtrees
{
namespace Stylehooks
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TVclStyleScrollBarsHook;
//-- type declarations -------------------------------------------------------
#pragma pack(push,4)
class PASCALIMPLEMENTATION TVclStyleScrollBarsHook : public Vcl::Forms::TScrollingStyleHook
{
	typedef Vcl::Forms::TScrollingStyleHook inherited;
	
private:
	MESSAGE void __fastcall CMUpdateVclStyleScrollbars(Winapi::Messages::TMessage &Msg);
	
protected:
	virtual void __fastcall CalcScrollBarsRect();
	virtual void __fastcall UpdateScroll();
	
public:
	__fastcall virtual TVclStyleScrollBarsHook(Vcl::Controls::TWinControl* AControl);
	__classmethod void __fastcall DrawExpandArrow(Vcl::Graphics::TBitmap* pBitmap, bool pExpanded, System::Uitypes::TColor pColor = (System::Uitypes::TColor)(0x1fffffff));
	__property HorzScrollRect;
	__property VertScrollRect;
public:
	/* TScrollingStyleHook.Destroy */ inline __fastcall virtual ~TVclStyleScrollBarsHook() { }
	
};

#pragma pack(pop)

typedef Vcl::Themes::TCustomStyleServices* __fastcall (*TVTStyleServicesFunc)(Vcl::Controls::TControl* AControl/* = (Vcl::Controls::TControl*)(0x0)*/);

//-- var, const, procedure ---------------------------------------------------
static const System::Word CM_UPDATE_VCLSTYLE_SCROLLBARS = System::Word(0xb802);
extern DELPHI_PACKAGE TVTStyleServicesFunc VTStyleServicesFunc;
extern DELPHI_PACKAGE Vcl::Themes::TCustomStyleServices* __fastcall VTStyleServices(Vcl::Controls::TControl* AControl = (Vcl::Controls::TControl*)(0x0));
}	/* namespace Stylehooks */
}	/* namespace Virtualtrees */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VIRTUALTREES_STYLEHOOKS)
using namespace Virtualtrees::Stylehooks;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VIRTUALTREES)
using namespace Virtualtrees;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Virtualtrees_StylehooksHPP
