//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
//
// Copyright            : (C) 2015 The CodeLite Team
// File name            : new_virtual_folder.h
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
// wxCrafter project file: new_virtual_folder.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#ifndef CODELITE_LITEEDITOR_NEW_VIRTUAL_FOLDER_BASE_CLASSES_H
#define CODELITE_LITEEDITOR_NEW_VIRTUAL_FOLDER_BASE_CLASSES_H

#include <wx/settings.h>
#include <wx/xrc/xmlres.h>
#include <wx/xrc/xh_bmp.h>
#include <wx/dialog.h>
#include <wx/iconbndl.h>
#include <wx/artprov.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/checkbox.h>
#include <wx/button.h>
#if wxVERSION_NUMBER >= 2900
#include <wx/persist.h>
#include <wx/persist/toplevel.h>
#include <wx/persist/bookctrl.h>
#include <wx/persist/treebook.h>
#endif

class NewVirtualFolderDlgBase : public wxDialog
{
protected:
    wxStaticText* m_staticText12;
    wxTextCtrl* m_textCtrlName;
    wxCheckBox* m_checkBoxCreateOnDisk;
    wxTextCtrl* m_textCtrlPath;
    wxButton* m_button6;
    wxButton* m_button8;

protected:
    virtual void OnNameUpdated(wxCommandEvent& event) { event.Skip(); }
    virtual void OnCreateOnFolderChecked(wxCommandEvent& event) { event.Skip(); }
    virtual void OnCreateOnDiskUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnOkUI(wxUpdateUIEvent& event) { event.Skip(); }

public:
    wxStaticText* GetStaticText12() { return m_staticText12; }
    wxTextCtrl* GetTextCtrlName() { return m_textCtrlName; }
    wxCheckBox* GetCheckBoxCreateOnDisk() { return m_checkBoxCreateOnDisk; }
    wxTextCtrl* GetTextCtrlPath() { return m_textCtrlPath; }
    wxButton* GetButton6() { return m_button6; }
    wxButton* GetButton8() { return m_button8; }
    NewVirtualFolderDlgBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("New Virtual Folder"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER);
    virtual ~NewVirtualFolderDlgBase();
};

#endif
