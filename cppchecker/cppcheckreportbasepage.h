//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
//
// Copyright            : (C) 2015 The CodeLite Team
// File name            : cppcheckreportbasepage.h
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
// wxCrafter project file: cppcheckreportbasepage.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#ifndef CODELITE_CPPCHECKER_CPPCHECKREPORTBASEPAGE_BASE_CLASSES_H
#define CODELITE_CPPCHECKER_CPPCHECKREPORTBASEPAGE_BASE_CLASSES_H

#include <wx/settings.h>
#include <wx/xrc/xmlres.h>
#include <wx/xrc/xh_bmp.h>
#include <wx/panel.h>
#include <wx/artprov.h>
#include <wx/sizer.h>
#include <wx/stc/stc.h>
#include <wx/button.h>
#include <wx/statline.h>
#if wxVERSION_NUMBER >= 2900
#include <wx/persist.h>
#include <wx/persist/toplevel.h>
#include <wx/persist/bookctrl.h>
#include <wx/persist/treebook.h>
#endif

class CppCheckReportBasePage : public wxPanel
{
protected:
    wxStyledTextCtrl* m_stc;
    wxButton* m_buttonClear;
    wxButton* m_buttonStop;
    wxStaticLine* m_staticLine10;
    wxButton* m_buttonUp;
    wxButton* m_buttonDown;

protected:
    virtual void OnStyleNeeded(wxStyledTextEvent& event) { event.Skip(); }
    virtual void OnOpenFile(wxStyledTextEvent& event) { event.Skip(); }
    virtual void OnClearReport(wxCommandEvent& event) { event.Skip(); }
    virtual void OnClearReportUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnStopChecking(wxCommandEvent& event) { event.Skip(); }
    virtual void OnStopCheckingUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnUp(wxCommandEvent& event) { event.Skip(); }
    virtual void OnUpUI(wxUpdateUIEvent& event) { event.Skip(); }
    virtual void OnDown(wxCommandEvent& event) { event.Skip(); }
    virtual void OnDownUI(wxUpdateUIEvent& event) { event.Skip(); }

public:
    wxStyledTextCtrl* GetStc() { return m_stc; }
    wxButton* GetButtonClear() { return m_buttonClear; }
    wxButton* GetButtonStop() { return m_buttonStop; }
    wxStaticLine* GetStaticLine10() { return m_staticLine10; }
    wxButton* GetButtonUp() { return m_buttonUp; }
    wxButton* GetButtonDown() { return m_buttonDown; }
    CppCheckReportBasePage(wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(482,238), long style = wxTAB_TRAVERSAL);
    virtual ~CppCheckReportBasePage();
};

#endif
