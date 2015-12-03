//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
//
// Copyright            : (C) 2015 The CodeLite Team
// File name            : zoom_navigator.h
//
// -------------------------------------------------------------------------
// A
//              _____           _      _     _ _
//             /  __ \         | |    | |   (_) |
//             | /  \/ ___   __| | ___| |    _| |_ ___
//             | |    / _ \ / _  |/ _ \ |   | | __/ _ )
//             | \__/\ (_) | (_| |  __/ |___| | ||  __/
//              \____/\___/ \__,_|\___\_____/_|\__\___|
//
//                                                  F i l e
//
//    This program is free software; you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation; either version 2 of the License, or
//    (at your option) any later version.
//
//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: zoom_navigator.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#ifndef CODELITE_ZOOMNAVIGATOR_ZOOM_NAVIGATOR_BASE_CLASSES_H
#define CODELITE_ZOOMNAVIGATOR_ZOOM_NAVIGATOR_BASE_CLASSES_H

#include <wx/settings.h>
#include <wx/xrc/xmlres.h>
#include <wx/xrc/xh_bmp.h>
#include <wx/dialog.h>
#include <wx/iconbndl.h>
#include <wx/artprov.h>
#include <wx/sizer.h>
#include <wx/checkbox.h>
#include <wx/stattext.h>
#include <wx/clrpicker.h>
#include <wx/spinctrl.h>
#include <wx/button.h>
#if wxVERSION_NUMBER >= 2900
#include <wx/persist.h>
#include <wx/persist/toplevel.h>
#include <wx/persist/bookctrl.h>
#include <wx/persist/treebook.h>
#endif

class znSettingsDlgBase : public wxDialog
{
protected:
    wxCheckBox* m_checkBoxEnableZN;
    wxStaticText* m_staticText14;
    wxColourPickerCtrl* m_colourPickerHighlightColour;
    wxStaticText* m_staticText22;
    wxSpinCtrl* m_spinCtrlZoomFactor;
    wxStaticText* m_staticText26;
    wxCheckBox* m_checkBoxUseVScrollbar;
    wxStdDialogButtonSizer* m_stdBtnSizer30;
    wxButton* m_button32;
    wxButton* m_button34;

protected:
    virtual void OnOK(wxCommandEvent& event) { event.Skip(); }

public:
    wxCheckBox* GetCheckBoxEnableZN() { return m_checkBoxEnableZN; }
    wxStaticText* GetStaticText14() { return m_staticText14; }
    wxColourPickerCtrl* GetColourPickerHighlightColour() { return m_colourPickerHighlightColour; }
    wxStaticText* GetStaticText22() { return m_staticText22; }
    wxSpinCtrl* GetSpinCtrlZoomFactor() { return m_spinCtrlZoomFactor; }
    wxStaticText* GetStaticText26() { return m_staticText26; }
    wxCheckBox* GetCheckBoxUseVScrollbar() { return m_checkBoxUseVScrollbar; }
    znSettingsDlgBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("ZoomNavigator Settings"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxDEFAULT_DIALOG_STYLE);
    virtual ~znSettingsDlgBase();
};

#endif
