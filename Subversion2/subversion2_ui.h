//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
//
// Copyright            : (C) 2015 The CodeLite Team
// File name            : subversion2_ui.h
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
// wxCrafter project file: subversion2.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#ifndef CODELITE_SUBVERSION2_SUBVERSION2_BASE_CLASSES_H
#define CODELITE_SUBVERSION2_SUBVERSION2_BASE_CLASSES_H

#include <wx/settings.h>
#include <wx/xrc/xmlres.h>
#include <wx/xrc/xh_bmp.h>
#include <wx/panel.h>
#include <wx/artprov.h>
#include <wx/sizer.h>
#include <wx/splitter.h>
#include <wx/treectrl.h>
#include <wx/stc/stc.h>
#include <wx/dialog.h>
#include <wx/iconbndl.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/button.h>
#include <wx/treebook.h>
#include <wx/imaglist.h>
#include <wx/statbox.h>
#include <wx/checkbox.h>
#include <wx/combobox.h>
#include <wx/arrstr.h>
#include <wx/statline.h>
#include <wx/filepicker.h>
#include <wx/radiobox.h>
#include <wx/listbox.h>
#include <wx/frame.h>
#include "svnblameeditor.h"
#include <wx/bitmap.h>
#include <map>
#include <wx/icon.h>
#if wxVERSION_NUMBER >= 2900
#include <wx/persist.h>
#include <wx/persist/toplevel.h>
#include <wx/persist/bookctrl.h>
#include <wx/persist/treebook.h>
#endif

class SubversionPageBase : public wxPanel
{
protected:
    wxSplitterWindow* m_splitter17;
    wxPanel* m_splitterPageLeft;
    wxTreeCtrl* m_treeCtrl;
    wxPanel* m_splitterPageRight;
    wxStyledTextCtrl* m_sci;

protected:
    virtual void OnItemActivated(wxTreeEvent& event) { event.Skip(); }
    virtual void OnTreeMenu(wxTreeEvent& event) { event.Skip(); }
    virtual void OnUpdateUI(wxStyledTextEvent& event) { event.Skip(); }
    virtual void OnCharAdded(wxStyledTextEvent& event) { event.Skip(); }
    virtual void OnKeyDown(wxKeyEvent& event) { event.Skip(); }
    virtual void OnSciStcChange(wxStyledTextEvent& event) { event.Skip(); }

public:
    wxTreeCtrl* GetTreeCtrl() { return m_treeCtrl; }
    wxPanel* GetSplitterPageLeft() { return m_splitterPageLeft; }
    wxStyledTextCtrl* GetSci() { return m_sci; }
    wxPanel* GetSplitterPageRight() { return m_splitterPageRight; }
    wxSplitterWindow* GetSplitter17() { return m_splitter17; }
    SubversionPageBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxTAB_TRAVERSAL);
    virtual ~SubversionPageBase();
};


class SvnCopyDialogBase : public wxDialog
{
protected:
    wxStaticText* m_staticText3;
    wxTextCtrl* m_textCtrlSourceURL;
    wxStaticText* m_staticText4;
    wxTextCtrl* m_textCtrlTargetURL;
    wxStaticText* m_staticText5;
    wxTextCtrl* m_textCtrlComment;
    wxButton* m_button4;
    wxButton* m_button5;

protected:

public:
    wxStaticText* GetStaticText3() { return m_staticText3; }
    wxTextCtrl* GetTextCtrlSourceURL() { return m_textCtrlSourceURL; }
    wxStaticText* GetStaticText4() { return m_staticText4; }
    wxTextCtrl* GetTextCtrlTargetURL() { return m_textCtrlTargetURL; }
    wxStaticText* GetStaticText5() { return m_staticText5; }
    wxTextCtrl* GetTextCtrlComment() { return m_textCtrlComment; }
    wxButton* GetButton4() { return m_button4; }
    wxButton* GetButton5() { return m_button5; }
    SvnCopyDialogBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Create Svn Tag"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER);
    virtual ~SvnCopyDialogBase();
};


class SvnLoginDialogBase : public wxDialog
{
protected:
    wxStaticText* m_staticText6;
    wxTextCtrl* m_textCtrlUsername;
    wxStaticText* m_staticText7;
    wxTextCtrl* m_textCtrlPassword;
    wxButton* m_button6;
    wxButton* m_button7;

protected:

public:
    wxStaticText* GetStaticText6() { return m_staticText6; }
    wxTextCtrl* GetTextCtrlUsername() { return m_textCtrlUsername; }
    wxStaticText* GetStaticText7() { return m_staticText7; }
    wxTextCtrl* GetTextCtrlPassword() { return m_textCtrlPassword; }
    wxButton* GetButton6() { return m_button6; }
    wxButton* GetButton7() { return m_button7; }
    SvnLoginDialogBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Login"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxDEFAULT_DIALOG_STYLE);
    virtual ~SvnLoginDialogBase();
};


class SvnPreferencesDialogBase : public wxDialog
{
protected:
    wxTreebook* m_treebook1;
    wxPanel* m_panel3;
    wxStaticText* m_staticTextExe;
    wxTextCtrl* m_textCtrlSvnExecutable;
    wxButton* m_buttonBrowse;
    wxStaticText* m_staticText9;
    wxTextCtrl* m_textCtrlIgnorePattern;
    wxCheckBox* m_checkBoxAddToSvn;
    wxCheckBox* m_checkBoxRetag;
    wxCheckBox* m_checkBoxRenameFile;
    wxCheckBox* m_checkBoxUsePosixLocale;
    wxPanel* m_panel4;
    wxCheckBox* m_checkBoxUseExternalDiff;
    wxStaticText* m_staticText10;
    wxTextCtrl* m_textCtrlDiffViewer;
    wxButton* m_buttonBrowseExtDiff;
    wxPanel* m_panel5;
    wxStaticText* m_staticText20;
    wxTextCtrl* m_textCtrlSSHClient;
    wxButton* m_button12;
    wxStaticText* m_staticText21;
    wxTextCtrl* m_textCtrlSshClientArgs;
    wxStaticText* m_staticText22;
    wxPanel* m_panel6;
    wxCheckBox* m_checkBoxExposeRevisionMacro;
    wxStaticText* m_staticText29;
    wxTextCtrl* m_textCtrlMacroName;
    wxButton* m_button8;
    wxButton* m_button9;

protected:
    virtual void OnBrowseSvnExe(wxCommandEvent& event) { event.Skip(); }
    virtual void OnUseExternalDiffUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnBrowseDiffViewer(wxCommandEvent& event) { event.Skip(); }
    virtual void OnBrowseSSHClient(wxCommandEvent& event) { event.Skip(); }
    virtual void OnAddRevisionMacroUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnButtonOK(wxCommandEvent& event) { event.Skip(); }

public:
    wxStaticText* GetStaticTextExe() { return m_staticTextExe; }
    wxTextCtrl* GetTextCtrlSvnExecutable() { return m_textCtrlSvnExecutable; }
    wxButton* GetButtonBrowse() { return m_buttonBrowse; }
    wxStaticText* GetStaticText9() { return m_staticText9; }
    wxTextCtrl* GetTextCtrlIgnorePattern() { return m_textCtrlIgnorePattern; }
    wxCheckBox* GetCheckBoxAddToSvn() { return m_checkBoxAddToSvn; }
    wxCheckBox* GetCheckBoxRetag() { return m_checkBoxRetag; }
    wxCheckBox* GetCheckBoxRenameFile() { return m_checkBoxRenameFile; }
    wxCheckBox* GetCheckBoxUsePosixLocale() { return m_checkBoxUsePosixLocale; }
    wxPanel* GetPanel3() { return m_panel3; }
    wxCheckBox* GetCheckBoxUseExternalDiff() { return m_checkBoxUseExternalDiff; }
    wxStaticText* GetStaticText10() { return m_staticText10; }
    wxTextCtrl* GetTextCtrlDiffViewer() { return m_textCtrlDiffViewer; }
    wxButton* GetButtonBrowseExtDiff() { return m_buttonBrowseExtDiff; }
    wxPanel* GetPanel4() { return m_panel4; }
    wxStaticText* GetStaticText20() { return m_staticText20; }
    wxTextCtrl* GetTextCtrlSSHClient() { return m_textCtrlSSHClient; }
    wxButton* GetButton12() { return m_button12; }
    wxStaticText* GetStaticText21() { return m_staticText21; }
    wxTextCtrl* GetTextCtrlSshClientArgs() { return m_textCtrlSshClientArgs; }
    wxStaticText* GetStaticText22() { return m_staticText22; }
    wxPanel* GetPanel5() { return m_panel5; }
    wxCheckBox* GetCheckBoxExposeRevisionMacro() { return m_checkBoxExposeRevisionMacro; }
    wxStaticText* GetStaticText29() { return m_staticText29; }
    wxTextCtrl* GetTextCtrlMacroName() { return m_textCtrlMacroName; }
    wxPanel* GetPanel6() { return m_panel6; }
    wxTreebook* GetTreebook1() { return m_treebook1; }
    wxButton* GetButton8() { return m_button8; }
    wxButton* GetButton9() { return m_button9; }
    SvnPreferencesDialogBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Subversion Preferences"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1, -1), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER);
    virtual ~SvnPreferencesDialogBase();
};


class SvnInfoDialogBase : public wxDialog
{
protected:
    wxStaticText* m_staticText19;
    wxTextCtrl* m_textCtrlRootURL;
    wxStaticText* m_staticText21;
    wxTextCtrl* m_textCtrlURL;
    wxStaticText* m_staticText23;
    wxTextCtrl* m_textCtrlRevision;
    wxStaticText* m_staticText25;
    wxTextCtrl* m_textCtrlAuthor;
    wxStaticText* m_staticText27;
    wxTextCtrl* m_textCtrlDate;
    wxButton* m_button13;

protected:

public:
    wxStaticText* GetStaticText19() { return m_staticText19; }
    wxTextCtrl* GetTextCtrlRootURL() { return m_textCtrlRootURL; }
    wxStaticText* GetStaticText21() { return m_staticText21; }
    wxTextCtrl* GetTextCtrlURL() { return m_textCtrlURL; }
    wxStaticText* GetStaticText23() { return m_staticText23; }
    wxTextCtrl* GetTextCtrlRevision() { return m_textCtrlRevision; }
    wxStaticText* GetStaticText25() { return m_staticText25; }
    wxTextCtrl* GetTextCtrlAuthor() { return m_textCtrlAuthor; }
    wxStaticText* GetStaticText27() { return m_staticText27; }
    wxTextCtrl* GetTextCtrlDate() { return m_textCtrlDate; }
    wxButton* GetButton13() { return m_button13; }
    SvnInfoDialogBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Svn Info"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxDEFAULT_DIALOG_STYLE);
    virtual ~SvnInfoDialogBase();
};


class SvnCheckoutDialogBase : public wxDialog
{
protected:
    wxStaticText* m_staticText24;
    wxComboBox* m_comboBoxRepoURL;
    wxStaticText* m_staticText25;
    wxTextCtrl* m_textCtrl20;
    wxButton* m_buttonBrowseDir;
    wxButton* m_button14;
    wxButton* m_button15;

protected:
    virtual void OnCheckoutDirectoryText(wxCommandEvent& event) { event.Skip(); }
    virtual void OnBrowseDirectory(wxCommandEvent& event) { event.Skip(); }
    virtual void OnOK(wxCommandEvent& event) { event.Skip(); }
    virtual void OnOkUI(wxUpdateUIEvent& event) { event.Skip(); }

public:
    wxStaticText* GetStaticText24() { return m_staticText24; }
    wxComboBox* GetComboBoxRepoURL() { return m_comboBoxRepoURL; }
    wxStaticText* GetStaticText25() { return m_staticText25; }
    wxTextCtrl* GetTextCtrl20() { return m_textCtrl20; }
    wxButton* GetButtonBrowseDir() { return m_buttonBrowseDir; }
    wxButton* GetButton14() { return m_button14; }
    wxButton* GetButton15() { return m_button15; }
    SvnCheckoutDialogBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Svn Checkout"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1, -1), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER);
    virtual ~SvnCheckoutDialogBase();
};


class SvnLogDialogBase : public wxDialog
{
protected:
    wxStaticText* m_staticText28;
    wxTextCtrl* m_from;
    wxStaticText* m_staticText29;
    wxTextCtrl* m_to;
    wxCheckBox* m_compact;
    wxButton* m_button17;
    wxButton* m_button18;

protected:

public:
    wxStaticText* GetStaticText28() { return m_staticText28; }
    wxTextCtrl* GetFrom() { return m_from; }
    wxStaticText* GetStaticText29() { return m_staticText29; }
    wxTextCtrl* GetTo() { return m_to; }
    wxCheckBox* GetCompact() { return m_compact; }
    wxButton* GetButton17() { return m_button17; }
    wxButton* GetButton18() { return m_button18; }
    SvnLogDialogBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Svn Log"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxDEFAULT_DIALOG_STYLE);
    virtual ~SvnLogDialogBase();
};


class DiffDialogBase : public wxDialog
{
protected:
    wxStaticText* m_staticText25;
    wxTextCtrl* m_textCtrlFromRev;
    wxStaticText* m_staticText26;
    wxTextCtrl* m_textCtrlToRev;
    wxCheckBox* m_checkBoxIgnoreWhitespace;
    wxButton* m_button20;
    wxButton* m_button19;

protected:

public:
    wxStaticText* GetStaticText25() { return m_staticText25; }
    wxTextCtrl* GetTextCtrlFromRev() { return m_textCtrlFromRev; }
    wxStaticText* GetStaticText26() { return m_staticText26; }
    wxTextCtrl* GetTextCtrlToRev() { return m_textCtrlToRev; }
    wxCheckBox* GetCheckBoxIgnoreWhitespace() { return m_checkBoxIgnoreWhitespace; }
    wxButton* GetButton20() { return m_button20; }
    wxButton* GetButton19() { return m_button19; }
    DiffDialogBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Svn Diff..."), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1, -1), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER);
    virtual ~DiffDialogBase();
};


class ChangeLogPageBase : public wxPanel
{
protected:
    wxTextCtrl* m_textCtrl;

protected:
    virtual void OnURL(wxCommandEvent& event) { event.Skip(); }

public:
    wxTextCtrl* GetTextCtrl() { return m_textCtrl; }
    ChangeLogPageBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(500,300), long style = wxTAB_TRAVERSAL);
    virtual ~ChangeLogPageBase();
};


class SvnPropsBaseDlg : public wxDialog
{
protected:
    wxStaticText* m_staticTextURL;
    wxStaticText* m_staticText27;
    wxTextCtrl* m_textCtrlBugURL;
    wxStaticText* m_staticText33;
    wxTextCtrl* m_textCtrlBugMsg;
    wxStaticText* m_staticText31;
    wxTextCtrl* m_textCtrlFrURL;
    wxStaticText* m_staticText34;
    wxTextCtrl* m_textCtrlFrMsg;
    wxStaticLine* m_staticline7;
    wxButton* m_button21;
    wxButton* m_button22;

protected:

public:
    wxStaticText* GetStaticTextURL() { return m_staticTextURL; }
    wxStaticText* GetStaticText27() { return m_staticText27; }
    wxTextCtrl* GetTextCtrlBugURL() { return m_textCtrlBugURL; }
    wxStaticText* GetStaticText33() { return m_staticText33; }
    wxTextCtrl* GetTextCtrlBugMsg() { return m_textCtrlBugMsg; }
    wxStaticText* GetStaticText31() { return m_staticText31; }
    wxTextCtrl* GetTextCtrlFrURL() { return m_textCtrlFrURL; }
    wxStaticText* GetStaticText34() { return m_staticText34; }
    wxTextCtrl* GetTextCtrlFrMsg() { return m_textCtrlFrMsg; }
    wxStaticLine* GetStaticline7() { return m_staticline7; }
    wxButton* GetButton21() { return m_button21; }
    wxButton* GetButton22() { return m_button22; }
    SvnPropsBaseDlg(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Svn Properties..."), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1, -1), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER);
    virtual ~SvnPropsBaseDlg();
};


class PatchDlgBase : public wxDialog
{
protected:
    wxFilePickerCtrl* m_filePicker;
    wxRadioBox* m_radioBoxEOLPolicy;
    wxStdDialogButtonSizer* m_stdBtnSizer33;
    wxButton* m_button35;
    wxButton* m_button37;

protected:

public:
    wxFilePickerCtrl* GetFilePicker() { return m_filePicker; }
    wxRadioBox* GetRadioBoxEOLPolicy() { return m_radioBoxEOLPolicy; }
    PatchDlgBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Select patch file:"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1, -1), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER);
    virtual ~PatchDlgBase();
};


class SvnSelectLocalRepoBase : public wxDialog
{
protected:
    wxStaticText* m_staticText37;
    wxDirPickerCtrl* m_dirPicker1;
    wxStaticText* m_staticText36;
    wxListBox* m_listBoxPaths;
    wxStdDialogButtonSizer* m_stdBtnSizer39;
    wxButton* m_button41;
    wxButton* m_button43;

protected:
    virtual void OnPathSelected(wxCommandEvent& event) { event.Skip(); }
    virtual void OnPathActivated(wxCommandEvent& event) { event.Skip(); }
    virtual void OnMenu(wxMouseEvent& event) { event.Skip(); }

public:
    wxStaticText* GetStaticText37() { return m_staticText37; }
    wxDirPickerCtrl* GetDirPicker1() { return m_dirPicker1; }
    wxStaticText* GetStaticText36() { return m_staticText36; }
    wxListBox* GetListBoxPaths() { return m_listBoxPaths; }
    SvnSelectLocalRepoBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Select Local Repository:"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1, -1), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER);
    virtual ~SvnSelectLocalRepoBase();
};


class SvnBlameFrameBase : public wxFrame
{
protected:
    wxPanel* m_panel11;
    SvnBlameEditor* m_stc;

protected:

public:
    SvnBlameEditor* GetStc() { return m_stc; }
    wxPanel* GetPanel11() { return m_panel11; }
    SvnBlameFrameBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Blame"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxDEFAULT_FRAME_STYLE|wxFRAME_NO_TASKBAR|wxFRAME_FLOAT_ON_PARENT);
    virtual ~SvnBlameFrameBase();
};


class SubversionImages : public wxImageList
{
protected:
    // Maintain a map of all bitmaps representd by their name
    std::map<wxString, wxBitmap> m_bitmaps;


protected:

public:
    SubversionImages();
    const wxBitmap& Bitmap(const wxString &name) const {
        if ( !m_bitmaps.count(name) )
            return wxNullBitmap;
        return m_bitmaps.find(name)->second;
    }
    virtual ~SubversionImages();
};

#endif
