//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
//
// Copyright            : (C) 2015 Eran Ifrah
// File name            : VirtualDirectorySelectorBase.h
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
// wxCrafter project file: VirtualDirectorySelectorBase.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#ifndef CODELITE_PLUGIN_VIRTUALDIRECTORYSELECTORBASE_BASE_CLASSES_H
#define CODELITE_PLUGIN_VIRTUALDIRECTORYSELECTORBASE_BASE_CLASSES_H

#include <wx/settings.h>
#include <wx/xrc/xmlres.h>
#include <wx/xrc/xh_bmp.h>
#include <wx/dialog.h>
#include <wx/iconbndl.h>
#include <wx/artprov.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/treectrl.h>
#include <wx/statbox.h>
#include <wx/button.h>
#if wxVERSION_NUMBER >= 2900
#include <wx/persist.h>
#include <wx/persist/toplevel.h>
#include <wx/persist/bookctrl.h>
#include <wx/persist/treebook.h>
#endif
#include "codelite_exports.h"

class WXDLLIMPEXP_SDK VirtualDirectorySelectorDlgBaseClass : public wxDialog
{
protected:
    wxBoxSizer* bSizer1;
    wxStaticText* m_staticText1;
    wxTreeCtrl* m_treeCtrl;
    wxStaticBoxSizer* sbSizer1;
    wxStaticText* m_staticTextPreview;
    wxBoxSizer* bSizer2;
    wxButton* m_buttonOk;
    wxButton* m_buttonCancel;
    wxButton* m_button1;

protected:
    virtual void OnItemSelected(wxTreeEvent& event) { event.Skip(); }
    virtual void OnButtonOK(wxCommandEvent& event) { event.Skip(); }
    virtual void OnButtonOkUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnButtonCancel(wxCommandEvent& event) { event.Skip(); }
    virtual void OnNewVD(wxCommandEvent& event) { event.Skip(); }
    virtual void OnNewVDUI(wxUpdateUIEvent& event) { event.Skip(); }

public:
    wxStaticText* GetStaticText1() { return m_staticText1; }
    wxTreeCtrl* GetTreeCtrl() { return m_treeCtrl; }
    wxStaticText* GetStaticTextPreview() { return m_staticTextPreview; }
    wxButton* GetButtonOk() { return m_buttonOk; }
    wxButton* GetButtonCancel() { return m_buttonCancel; }
    wxButton* GetButton1() { return m_button1; }
    VirtualDirectorySelectorDlgBaseClass(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Virtual Directory Selector"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1, -1), long style = wxDEFAULT_DIALOG_STYLE);
    virtual ~VirtualDirectorySelectorDlgBaseClass();
};

#endif
