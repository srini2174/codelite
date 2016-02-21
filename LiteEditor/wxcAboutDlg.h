//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: AboutDlg.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#ifndef CODELITE_LITEEDITOR_ABOUTDLG_BASE_CLASSES_H
#define CODELITE_LITEEDITOR_ABOUTDLG_BASE_CLASSES_H

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
#include <wx/statbmp.h>
#include <wx/html/htmlwin.h>
#include <wx/textctrl.h>
#include <wx/statbox.h>
#include <wx/stattext.h>
#include <wx/hyperlink.h>
#include <wx/button.h>
#if wxVERSION_NUMBER >= 2900
#include <wx/persist.h>
#include <wx/persist/toplevel.h>
#include <wx/persist/bookctrl.h>
#include <wx/persist/treebook.h>
#endif

class AboutDlgBase : public wxDialog
{
protected:
    wxNotebook* m_notebook1;
    wxPanel* m_panel1;
    wxStaticBitmap* m_bitmap;
    wxPanel* m_panel4;
    wxHtmlWindow* m_htmlWin3;
    wxPanel* m_panel3;
    wxTextCtrl* m_textCtrlLicense;
    wxStaticText* m_staticTextHomePage;
    wxHyperlinkCtrl* m_hyperlink1;
    wxStaticText* m_staticText2;
    wxHyperlinkCtrl* m_hyperlink2;
    wxStaticText* m_staticText3;
    wxStaticText* m_staticTextInformation;
    wxStaticBitmap* m_bitmapPayPal;
    wxHyperlinkCtrl* m_hyperlink3;
    wxButton* m_buttonOk;

protected:
    virtual void OnOK(wxCommandEvent& event) { event.Skip(); }

public:
    wxStaticBitmap* GetBitmap() { return m_bitmap; }
    wxPanel* GetPanel1() { return m_panel1; }
    wxHtmlWindow* GetHtmlWin3() { return m_htmlWin3; }
    wxPanel* GetPanel4() { return m_panel4; }
    wxTextCtrl* GetTextCtrlLicense() { return m_textCtrlLicense; }
    wxPanel* GetPanel3() { return m_panel3; }
    wxNotebook* GetNotebook1() { return m_notebook1; }
    wxStaticText* GetStaticTextHomePage() { return m_staticTextHomePage; }
    wxHyperlinkCtrl* GetHyperlink1() { return m_hyperlink1; }
    wxStaticText* GetStaticText2() { return m_staticText2; }
    wxHyperlinkCtrl* GetHyperlink2() { return m_hyperlink2; }
    wxStaticText* GetStaticText3() { return m_staticText3; }
    wxStaticText* GetStaticTextInformation() { return m_staticTextInformation; }
    wxStaticBitmap* GetBitmapPayPal() { return m_bitmapPayPal; }
    wxHyperlinkCtrl* GetHyperlink3() { return m_hyperlink3; }
    wxButton* GetButtonOk() { return m_buttonOk; }
    AboutDlgBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("About CodeLite"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1, -1), long style = wxDEFAULT_DIALOG_STYLE);
    virtual ~AboutDlgBase();
};

#endif
