//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: CMakePlugin.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#include "CMakePluginUi.h"


// Declare the bitmap loading function
extern void wxCrafterR3nJ3cInitBitmapResources();

static bool bBitmapLoaded = false;


CMakeSettingsDialogBase::CMakeSettingsDialogBase(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style)
    : wxDialog(parent, id, title, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxCrafterR3nJ3cInitBitmapResources();
        bBitmapLoaded = true;
    }
    
    wxBoxSizer* boxSizerMain = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(boxSizerMain);
    
    wxFlexGridSizer* flexGridSizer = new wxFlexGridSizer(0, 2, 5, 5);
    flexGridSizer->SetFlexibleDirection( wxBOTH );
    flexGridSizer->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    flexGridSizer->AddGrowableCol(1);
    
    boxSizerMain->Add(flexGridSizer, 1, wxALL|wxEXPAND, 5);
    
    m_staticTextProgram = new wxStaticText(this, wxID_ANY, _("CMake program:"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    flexGridSizer->Add(m_staticTextProgram, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    
    m_filePickerProgram = new wxFilePickerCtrl(this, wxID_ANY, wxEmptyString, _("Select a file"), wxT("*"), wxDefaultPosition, wxSize(-1,-1), wxFLP_DEFAULT_STYLE|wxFLP_USE_TEXTCTRL);
    m_filePickerProgram->SetToolTip(_("Path to cmake executable."));
    
    flexGridSizer->Add(m_filePickerProgram, 1, wxALL|wxEXPAND|wxALIGN_CENTER_VERTICAL, 5);
    m_filePickerProgram->SetMinSize(wxSize(200,-1));
    
    m_staticTextDefaultGenerator = new wxStaticText(this, wxID_ANY, _("Default Generator:"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    flexGridSizer->Add(m_staticTextDefaultGenerator, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    
    wxArrayString m_choiceDefaultGeneratorArr;
    m_choiceDefaultGenerator = new wxChoice(this, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), m_choiceDefaultGeneratorArr, 0);
    m_choiceDefaultGenerator->SetToolTip(_("You can specify default generator for all projects (if is not overridden by project settings). If generator is not selected the CMake uses platform's default."));
    
    flexGridSizer->Add(m_choiceDefaultGenerator, 1, wxALL|wxEXPAND|wxALIGN_CENTER_VERTICAL, 5);
    
    m_stdBtnSizer = new wxStdDialogButtonSizer();
    
    boxSizerMain->Add(m_stdBtnSizer, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5);
    
    m_buttonOk = new wxButton(this, wxID_OK, wxT(""), wxDefaultPosition, wxSize(-1, -1), 0);
    m_buttonOk->SetDefault();
    m_stdBtnSizer->AddButton(m_buttonOk);
    
    m_buttonCancel = new wxButton(this, wxID_CANCEL, wxT(""), wxDefaultPosition, wxSize(-1, -1), 0);
    m_stdBtnSizer->AddButton(m_buttonCancel);
    m_stdBtnSizer->Realize();
    
    SetName(wxT("CMakeSettingsDialogBase"));
    SetMinClientSize(wxSize(400,150));
    SetSize(-1,-1);
    if (GetSizer()) {
         GetSizer()->Fit(this);
    }
    if(GetParent()) {
        CentreOnParent(wxBOTH);
    } else {
        CentreOnScreen(wxBOTH);
    }
#if wxVERSION_NUMBER >= 2900
    if(!wxPersistenceManager::Get().Find(this)) {
        wxPersistenceManager::Get().RegisterAndRestore(this);
    } else {
        wxPersistenceManager::Get().Restore(this);
    }
#endif
}

CMakeSettingsDialogBase::~CMakeSettingsDialogBase()
{
}

CMakeHelpTabBase::CMakeHelpTabBase(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style)
    : wxPanel(parent, id, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxCrafterR3nJ3cInitBitmapResources();
        bBitmapLoaded = true;
    }
    
    wxBoxSizer* boxSizerMain = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(boxSizerMain);
    
    wxFlexGridSizer* flexGridSizer225 = new wxFlexGridSizer(0, 3, 0, 0);
    flexGridSizer225->SetFlexibleDirection( wxBOTH );
    flexGridSizer225->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    flexGridSizer225->AddGrowableCol(1);
    
    boxSizerMain->Add(flexGridSizer225, 0, wxALL|wxEXPAND, 0);
    
    m_staticTextVersion = new wxStaticText(this, wxID_ANY, _("Version:"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    flexGridSizer225->Add(m_staticTextVersion, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    
    m_staticTextVersionValue = new wxStaticText(this, wxID_ANY, _("?"), wxDefaultPosition, wxSize(-1,-1), 0);
    wxFont m_staticTextVersionValueFont = wxSystemSettings::GetFont(wxSYS_DEFAULT_GUI_FONT);
    m_staticTextVersionValueFont.SetWeight(wxFONTWEIGHT_BOLD);
    m_staticTextVersionValue->SetFont(m_staticTextVersionValueFont);
    
    flexGridSizer225->Add(m_staticTextVersionValue, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5);
    
    flexGridSizer225->Add(0, 0, 1, wxALL, 5);
    
    m_staticText222 = new wxStaticText(this, wxID_ANY, _("Select Topic:"), wxDefaultPosition, wxSize(-1,-1), 0);
    
    flexGridSizer225->Add(m_staticText222, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    
    wxArrayString m_choiceTopicsArr;
    m_choiceTopicsArr.Add(wxT("Modules"));
    m_choiceTopicsArr.Add(wxT("Commands"));
    m_choiceTopicsArr.Add(wxT("Properties"));
    m_choiceTopicsArr.Add(wxT("Variables"));
    m_choiceTopics = new wxChoice(this, wxID_REFRESH, wxDefaultPosition, wxSize(-1,-1), m_choiceTopicsArr, 0);
    m_choiceTopics->SetSelection(0);
    
    flexGridSizer225->Add(m_choiceTopics, 0, wxALL|wxEXPAND|wxALIGN_CENTER_VERTICAL, 5);
    
    m_buttonReload = new wxButton(this, wxID_REFRESH, _("Reload"), wxDefaultPosition, wxSize(-1,-1), 0);
    m_buttonReload->SetToolTip(_("Reloads Help from CMake"));
    
    flexGridSizer225->Add(m_buttonReload, 0, wxALL, 5);
    
    m_gaugeLoad = new wxGauge(this, wxID_ANY, 100, wxDefaultPosition, wxSize(-1,-1), wxGA_HORIZONTAL);
    m_gaugeLoad->Hide();
    m_gaugeLoad->SetValue(0);
    
    boxSizerMain->Add(m_gaugeLoad, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 5);
    
    wxBoxSizer* boxSizerList = new wxBoxSizer(wxVERTICAL);
    
    boxSizerMain->Add(boxSizerList, 1, wxALL|wxEXPAND, 5);
    
    m_searchCtrlFilter = new wxSearchCtrl(this, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(-1,-1), wxTE_PROCESS_ENTER);
    m_searchCtrlFilter->SetFocus();
    m_searchCtrlFilter->ShowSearchButton(true);
    m_searchCtrlFilter->ShowCancelButton(false);
    
    boxSizerList->Add(m_searchCtrlFilter, 0, wxBOTTOM|wxEXPAND, 5);
    m_searchCtrlFilter->SetMinSize(wxSize(-1,22));
    
    wxArrayString m_listBoxListArr;
    m_listBoxList = new wxListBox(this, wxID_ANY, wxDefaultPosition, wxSize(-1,-1), m_listBoxListArr, wxLB_SINGLE);
    m_listBoxList->SetToolTip(_("Double click to insert in the current editor."));
    
    boxSizerList->Add(m_listBoxList, 1, wxALL|wxEXPAND, 0);
    m_listBoxList->SetMinSize(wxSize(100,200));
    
    SetName(wxT("CMakeHelpTabBase"));
    SetSize(-1,-1);
    if (GetSizer()) {
         GetSizer()->Fit(this);
    }
    // Connect events
    m_staticTextVersion->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(CMakeHelpTabBase::OnUpdateUi), NULL, this);
    m_staticTextVersionValue->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(CMakeHelpTabBase::OnUpdateUi), NULL, this);
    m_staticText222->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(CMakeHelpTabBase::OnUpdateUi), NULL, this);
    m_choiceTopics->Connect(wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler(CMakeHelpTabBase::OnChangeTopic), NULL, this);
    m_choiceTopics->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(CMakeHelpTabBase::OnUpdateUi), NULL, this);
    m_buttonReload->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CMakeHelpTabBase::OnReload), NULL, this);
    m_buttonReload->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(CMakeHelpTabBase::OnUpdateUi), NULL, this);
    m_searchCtrlFilter->Connect(wxEVT_COMMAND_SEARCHCTRL_SEARCH_BTN, wxCommandEventHandler(CMakeHelpTabBase::OnSearch), NULL, this);
    m_searchCtrlFilter->Connect(wxEVT_COMMAND_SEARCHCTRL_CANCEL_BTN, wxCommandEventHandler(CMakeHelpTabBase::OnSearchCancel), NULL, this);
    m_searchCtrlFilter->Connect(wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler(CMakeHelpTabBase::OnSearch), NULL, this);
    m_searchCtrlFilter->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(CMakeHelpTabBase::OnUpdateUi), NULL, this);
    m_listBoxList->Connect(wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler(CMakeHelpTabBase::OnSelect), NULL, this);
    m_listBoxList->Connect(wxEVT_COMMAND_LISTBOX_DOUBLECLICKED, wxCommandEventHandler(CMakeHelpTabBase::OnInsert), NULL, this);
    m_listBoxList->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(CMakeHelpTabBase::OnUpdateUi), NULL, this);
    
}

CMakeHelpTabBase::~CMakeHelpTabBase()
{
    m_staticTextVersion->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(CMakeHelpTabBase::OnUpdateUi), NULL, this);
    m_staticTextVersionValue->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(CMakeHelpTabBase::OnUpdateUi), NULL, this);
    m_staticText222->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(CMakeHelpTabBase::OnUpdateUi), NULL, this);
    m_choiceTopics->Disconnect(wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler(CMakeHelpTabBase::OnChangeTopic), NULL, this);
    m_choiceTopics->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(CMakeHelpTabBase::OnUpdateUi), NULL, this);
    m_buttonReload->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(CMakeHelpTabBase::OnReload), NULL, this);
    m_buttonReload->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(CMakeHelpTabBase::OnUpdateUi), NULL, this);
    m_searchCtrlFilter->Disconnect(wxEVT_COMMAND_SEARCHCTRL_SEARCH_BTN, wxCommandEventHandler(CMakeHelpTabBase::OnSearch), NULL, this);
    m_searchCtrlFilter->Disconnect(wxEVT_COMMAND_SEARCHCTRL_CANCEL_BTN, wxCommandEventHandler(CMakeHelpTabBase::OnSearchCancel), NULL, this);
    m_searchCtrlFilter->Disconnect(wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler(CMakeHelpTabBase::OnSearch), NULL, this);
    m_searchCtrlFilter->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(CMakeHelpTabBase::OnUpdateUi), NULL, this);
    m_listBoxList->Disconnect(wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler(CMakeHelpTabBase::OnSelect), NULL, this);
    m_listBoxList->Disconnect(wxEVT_COMMAND_LISTBOX_DOUBLECLICKED, wxCommandEventHandler(CMakeHelpTabBase::OnInsert), NULL, this);
    m_listBoxList->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(CMakeHelpTabBase::OnUpdateUi), NULL, this);
    
}

cmakeImages::cmakeImages()
    : wxImageList(16, 16, true)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxCrafterR3nJ3cInitBitmapResources();
        bBitmapLoaded = true;
    }
    
    {
        wxBitmap bmp;
        wxIcon icn;
        bmp = wxXmlResource::Get()->LoadBitmap(wxT("cmake_16"));
        icn.CopyFromBitmap( bmp );
        this->Add( icn );
        m_bitmaps.insert( std::make_pair(wxT("cmake_16"), bmp ) );
    }
    
}

cmakeImages::~cmakeImages()
{
}
