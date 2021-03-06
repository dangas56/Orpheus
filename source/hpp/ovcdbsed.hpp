﻿// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'ovcdbsed.pas' rev: 28.00 (Windows)

#ifndef OvcdbsedHPP
#define OvcdbsedHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Winapi.Windows.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit
#include <Vcl.Controls.hpp>	// Pascal unit
#include <Data.DB.hpp>	// Pascal unit
#include <Data.DBConsts.hpp>	// Pascal unit
#include <Vcl.DBCtrls.hpp>	// Pascal unit
#include <Vcl.Forms.hpp>	// Pascal unit
#include <Vcl.Graphics.hpp>	// Pascal unit
#include <Vcl.Menus.hpp>	// Pascal unit
#include <Winapi.Messages.hpp>	// Pascal unit
#include <Vcl.StdCtrls.hpp>	// Pascal unit
#include <System.SysUtils.hpp>	// Pascal unit
#include <ovcbase.hpp>	// Pascal unit
#include <ovcedsld.hpp>	// Pascal unit
#include <ovcedpop.hpp>	// Pascal unit
#include <ovceditf.hpp>	// Pascal unit
#include <System.UITypes.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Ovcdbsed
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TOvcCustomDbSliderEdit;
class PASCALIMPLEMENTATION TOvcCustomDbSliderEdit : public Ovcedsld::TOvcCustomSliderEdit
{
	typedef Ovcedsld::TOvcCustomSliderEdit inherited;
	
protected:
	System::Classes::TAlignment FAlignment;
	bool FAutoUpdate;
	Vcl::Controls::TControlCanvas* FCanvas;
	Vcl::Dbctrls::TFieldDataLink* FDataLink;
	bool FFocused;
	System::UnicodeString __fastcall GetDataField(void);
	Data::Db::TDataSource* __fastcall GetDataSource(void);
	Data::Db::TField* __fastcall GetField(void);
	HIDESBASE bool __fastcall GetReadOnly(void);
	void __fastcall SetDataField(const System::UnicodeString Value);
	void __fastcall SetDataSource(Data::Db::TDataSource* Value);
	void __fastcall SetFocused(bool Value);
	HIDESBASE void __fastcall SetReadOnly(bool Value);
	void __fastcall DataChange(System::TObject* Sender);
	void __fastcall EditingChange(System::TObject* Sender);
	System::Types::TPoint __fastcall GetTextMargins(void);
	void __fastcall UpdateData(System::TObject* Sender);
	MESSAGE void __fastcall WMCut(Winapi::Messages::TMessage &Message);
	MESSAGE void __fastcall WMPaste(Winapi::Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall WMPaint(Winapi::Messages::TWMPaint &Message);
	HIDESBASE MESSAGE void __fastcall CMEnter(Winapi::Messages::TWMNoParams &Message);
	HIDESBASE MESSAGE void __fastcall CMExit(Winapi::Messages::TWMNoParams &Message);
	MESSAGE void __fastcall CMGetDataLink(Winapi::Messages::TMessage &Message);
	DYNAMIC void __fastcall Change(void);
	DYNAMIC bool __fastcall GetButtonEnabled(void);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	DYNAMIC void __fastcall KeyPress(System::WideChar &Key);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	__property bool AutoUpdate = {read=FAutoUpdate, write=FAutoUpdate, nodefault};
	__property System::UnicodeString DataField = {read=GetDataField, write=SetDataField};
	__property Data::Db::TDataSource* DataSource = {read=GetDataSource, write=SetDataSource};
	__property bool ReadOnly = {read=GetReadOnly, write=SetReadOnly, nodefault};
	
public:
	__fastcall virtual TOvcCustomDbSliderEdit(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TOvcCustomDbSliderEdit(void);
	DYNAMIC bool __fastcall ExecuteAction(System::Classes::TBasicAction* Action);
	virtual bool __fastcall UpdateAction(System::Classes::TBasicAction* Action);
	DYNAMIC void __fastcall PopupClose(System::TObject* Sender);
	DYNAMIC void __fastcall PopupOpen(void);
	__property Data::Db::TField* Field = {read=GetField};
public:
	/* TWinControl.CreateParented */ inline __fastcall TOvcCustomDbSliderEdit(HWND ParentWindow) : Ovcedsld::TOvcCustomSliderEdit(ParentWindow) { }
	
};


class DELPHICLASS TOvcDbSliderEdit;
class PASCALIMPLEMENTATION TOvcDbSliderEdit : public TOvcCustomDbSliderEdit
{
	typedef TOvcCustomDbSliderEdit inherited;
	
__published:
	__property Anchors = {default=3};
	__property Constraints;
	__property DragKind = {default=0};
	__property About = {default=0};
	__property AllowIncDec = {default=0};
	__property AutoSelect = {default=1};
	__property AutoSize = {default=1};
	__property AutoUpdate = {default=1};
	__property BorderStyle = {default=1};
	__property ButtonGlyph;
	__property Color = {default=-16777211};
	__property Ctl3D;
	__property Cursor = {default=0};
	__property DataField = {default=0};
	__property DataSource;
	__property DragCursor = {default=-12};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property HideSelection = {default=1};
	__property LabelInfo;
	__property ParentColor = {default=0};
	__property ParentCtl3D = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupAnchor = {default=0};
	__property PopupDrawMarks = {default=1};
	__property PopupHeight = {default=20};
	__property PopupMax = {default=0};
	__property PopupMenu;
	__property PopupMin = {default=0};
	__property PopupStep = {default=0};
	__property PopupWidth = {default=121};
	__property ReadOnly = {default=0};
	__property ShowButton = {default=1};
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Visible = {default=1};
	__property OnChange;
	__property OnClick;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnStartDrag;
public:
	/* TOvcCustomDbSliderEdit.Create */ inline __fastcall virtual TOvcDbSliderEdit(System::Classes::TComponent* AOwner) : TOvcCustomDbSliderEdit(AOwner) { }
	/* TOvcCustomDbSliderEdit.Destroy */ inline __fastcall virtual ~TOvcDbSliderEdit(void) { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TOvcDbSliderEdit(HWND ParentWindow) : TOvcCustomDbSliderEdit(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Ovcdbsed */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_OVCDBSED)
using namespace Ovcdbsed;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// OvcdbsedHPP
