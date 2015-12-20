//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
//
// Copyright            : (C) 2015 Eran Ifrah
// File name            : cppchecksettingsdlgbase.h
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
// wxCrafter project file: cppchecksettingsdlg.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#ifndef CODELITE_CPPCHECKER_CPPCHECKSETTINGSDLG_BASE_CLASSES_H
#define CODELITE_CPPCHECKER_CPPCHECKSETTINGSDLG_BASE_CLASSES_H

#include <wx/settings.h>
#include <wx/xrc/xmlres.h>
#include <wx/xrc/xh_bmp.h>
#include <wx/dialog.h>
#include <wx/iconbndl.h>
#include <wx/artprov.h>
#include <wx/sizer.h>
#include <wx/notebook.h>
#include <wx/panel.h>
#include <wx/imaglist.h>
#include <wx/stattext.h>
#include <wx/checklst.h>
#include <wx/button.h>
#include <wx/checkbox.h>
#include <wx/spinctrl.h>
#include <wx/listbox.h>
#include <wx/statline.h>
#include <wx/textctrl.h>
#if wxVERSION_NUMBER >= 2900
#include <wx/persist.h>
#include <wx/persist/toplevel.h>
#include <wx/persist/bookctrl.h>
#include <wx/persist/treebook.h>
#endif

class CppCheckSettingsDialogBase : public wxDialog
{
protected:
    wxNotebook* m_notebook1;
    wxPanel* m_ChecksPanel;
    wxStaticText* m_staticText5;
    wxCheckListBox* m_checkListExtraWarnings;
    wxButton* m_buttonAllChecks;
    wxButton* m_buttonClearChecks;
    wxCheckBox* m_cbOptionForce;
    wxCheckBox* m_cbJobs;
    wxSpinCtrl* m_spinCtrlJobs;
    wxCheckBox* m_cbCheckConfig;
    wxPanel* m_ExcludePanel;
    wxStaticText* m_staticText1;
    wxListBox* m_listBoxExcludelist;
    wxButton* m_buttonAdd;
    wxButton* m_buttonRemove;
    wxButton* m_buttonClearList;
    wxPanel* m_SuppressPanel;
    wxStaticText* m_staticText11;
    wxCheckListBox* m_checkListSuppress;
    wxButton* m_buttonAddSuppression;
    wxButton* m_buttonRemoveSuppression;
    wxButton* m_buttonSuppressAll;
    wxButton* m_buttonClearSuppressions;
    wxCheckBox* m_checkBoxSerialise;
    wxPanel* m_IncludeDirs;
    wxStaticText* m_staticText113;
    wxListBox* m_listBoxIncludeDirs;
    wxButton* m_buttonAddIncludeDir;
    wxButton* m_buttonRemoveIncludeDir;
    wxCheckBox* m_checkBoxSuppressSystemIncludes;
    wxCheckBox* m_checkBoxSerialiseIncludeDirs;
    wxPanel* m_DefinesPanel;
    wxStaticText* m_staticText11428;
    wxStaticLine* m_staticLine18;
    wxStaticText* m_staticText11429;
    wxListBox* m_listBoxDefinelist;
    wxButton* m_buttonAdd1824;
    wxButton* m_buttonRemove1925;
    wxButton* m_buttonClearList2026;
    wxStaticText* m_staticText114;
    wxListBox* m_listBoxUndefineList;
    wxButton* m_buttonAdd18;
    wxButton* m_buttonRemove19;
    wxButton* m_buttonClearList20;
    wxStaticLine* m_staticline1;
    wxButton* m_BtmOK;
    wxButton* m_BtnCancel;

protected:
    virtual void OnChecksTickAll(wxCommandEvent& event) { event.Skip(); }
    virtual void OnChecksTickAllUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnChecksUntickAll(wxCommandEvent& event) { event.Skip(); }
    virtual void OnChecksUntickAllUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnJobsUpdateUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnAddFile(wxCommandEvent& event) { event.Skip(); }
    virtual void OnRemoveFile(wxCommandEvent& event) { event.Skip(); }
    virtual void OnRemoveFileUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnClearList(wxCommandEvent& event) { event.Skip(); }
    virtual void OnClearListUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnAddSuppression(wxCommandEvent& event) { event.Skip(); }
    virtual void OnRemoveSuppression(wxCommandEvent& event) { event.Skip(); }
    virtual void OnRemoveSuppressionUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnSuppressTickAll(wxCommandEvent& event) { event.Skip(); }
    virtual void OnSuppressTickAllUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnSuppressUntickAll(wxCommandEvent& event) { event.Skip(); }
    virtual void OnSuppressUntickAllUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnIncludeDirsUpdateUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnAddIncludeDir(wxCommandEvent& event) { event.Skip(); }
    virtual void OnRemoveIncludeDir(wxCommandEvent& event) { event.Skip(); }
    virtual void OnRemoveIncludeDirUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnAddDefinition(wxCommandEvent& event) { event.Skip(); }
    virtual void OnRemoveDefinition(wxCommandEvent& event) { event.Skip(); }
    virtual void OnRemoveDefinitionUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnClearDefinitions(wxCommandEvent& event) { event.Skip(); }
    virtual void OnClearDefinitionsUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnAddUndefine(wxCommandEvent& event) { event.Skip(); }
    virtual void OnRemoveUndefine(wxCommandEvent& event) { event.Skip(); }
    virtual void OnRemoveUndefineUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnClearUndefines(wxCommandEvent& event) { event.Skip(); }
    virtual void OnClearUndefinesUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnBtnOK(wxCommandEvent& event) { event.Skip(); }

public:
    wxStaticText* GetStaticText5() { return m_staticText5; }
    wxCheckListBox* GetCheckListExtraWarnings() { return m_checkListExtraWarnings; }
    wxButton* GetButtonAllChecks() { return m_buttonAllChecks; }
    wxButton* GetButtonClearChecks() { return m_buttonClearChecks; }
    wxCheckBox* GetCbOptionForce() { return m_cbOptionForce; }
    wxCheckBox* GetCbJobs() { return m_cbJobs; }
    wxSpinCtrl* GetSpinCtrlJobs() { return m_spinCtrlJobs; }
    wxCheckBox* GetCbCheckConfig() { return m_cbCheckConfig; }
    wxPanel* GetChecksPanel() { return m_ChecksPanel; }
    wxStaticText* GetStaticText1() { return m_staticText1; }
    wxListBox* GetListBoxExcludelist() { return m_listBoxExcludelist; }
    wxButton* GetButtonAdd() { return m_buttonAdd; }
    wxButton* GetButtonRemove() { return m_buttonRemove; }
    wxButton* GetButtonClearList() { return m_buttonClearList; }
    wxPanel* GetExcludePanel() { return m_ExcludePanel; }
    wxStaticText* GetStaticText11() { return m_staticText11; }
    wxCheckListBox* GetCheckListSuppress() { return m_checkListSuppress; }
    wxButton* GetButtonAddSuppression() { return m_buttonAddSuppression; }
    wxButton* GetButtonRemoveSuppression() { return m_buttonRemoveSuppression; }
    wxButton* GetButtonSuppressAll() { return m_buttonSuppressAll; }
    wxButton* GetButtonClearSuppressions() { return m_buttonClearSuppressions; }
    wxCheckBox* GetCheckBoxSerialise() { return m_checkBoxSerialise; }
    wxPanel* GetSuppressPanel() { return m_SuppressPanel; }
    wxStaticText* GetStaticText113() { return m_staticText113; }
    wxListBox* GetListBoxIncludeDirs() { return m_listBoxIncludeDirs; }
    wxButton* GetButtonAddIncludeDir() { return m_buttonAddIncludeDir; }
    wxButton* GetButtonRemoveIncludeDir() { return m_buttonRemoveIncludeDir; }
    wxCheckBox* GetCheckBoxSuppressSystemIncludes() { return m_checkBoxSuppressSystemIncludes; }
    wxCheckBox* GetCheckBoxSerialiseIncludeDirs() { return m_checkBoxSerialiseIncludeDirs; }
    wxPanel* GetIncludeDirs() { return m_IncludeDirs; }
    wxStaticText* GetStaticText11428() { return m_staticText11428; }
    wxStaticLine* GetStaticLine18() { return m_staticLine18; }
    wxStaticText* GetStaticText11429() { return m_staticText11429; }
    wxListBox* GetListBoxDefinelist() { return m_listBoxDefinelist; }
    wxButton* GetButtonAdd1824() { return m_buttonAdd1824; }
    wxButton* GetButtonRemove1925() { return m_buttonRemove1925; }
    wxButton* GetButtonClearList2026() { return m_buttonClearList2026; }
    wxStaticText* GetStaticText114() { return m_staticText114; }
    wxListBox* GetListBoxUndefineList() { return m_listBoxUndefineList; }
    wxButton* GetButtonAdd18() { return m_buttonAdd18; }
    wxButton* GetButtonRemove19() { return m_buttonRemove19; }
    wxButton* GetButtonClearList20() { return m_buttonClearList20; }
    wxPanel* GetDefinesPanel() { return m_DefinesPanel; }
    wxNotebook* GetNotebook1() { return m_notebook1; }
    wxStaticLine* GetStaticline1() { return m_staticline1; }
    wxButton* GetBtmOK() { return m_BtmOK; }
    wxButton* GetBtnCancel() { return m_BtnCancel; }
    CppCheckSettingsDialogBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("CppCheck settings"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER);
    virtual ~CppCheckSettingsDialogBase();
};


class CppCheckAddSuppressionDialogBase : public wxDialog
{
protected:
    wxStaticText* m_staticText12;
    wxTextCtrl* m_txtDescription;
    wxStaticText* m_staticText13;
    wxTextCtrl* m_txtKey;
    wxStaticLine* m_staticline1;
    wxButton* m_buttonOK;
    wxButton* m_buttonCancel;

protected:
    virtual void OnOKButtonUpdateUI(wxUpdateUIEvent& event) { event.Skip(); }

public:
    wxStaticText* GetStaticText12() { return m_staticText12; }
    wxTextCtrl* GetTxtDescription() { return m_txtDescription; }
    wxStaticText* GetStaticText13() { return m_staticText13; }
    wxTextCtrl* GetTxtKey() { return m_txtKey; }
    wxStaticLine* GetStaticline1() { return m_staticline1; }
    wxButton* GetButtonOK() { return m_buttonOK; }
    wxButton* GetButtonCancel() { return m_buttonCancel; }
    CppCheckAddSuppressionDialogBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("CppChecker add warning suppression"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER);
    virtual ~CppCheckAddSuppressionDialogBase();
};

#endif
