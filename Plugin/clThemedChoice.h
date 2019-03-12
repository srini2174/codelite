#ifndef CLTHEMEDCHOICE_H
#define CLTHEMEDCHOICE_H

#include "clChoice.h" // Base class: clChoice

class WXDLLIMPEXP_SDK clThemedChoice : public clChoice
{
protected:
    void OnThemeChanged(wxCommandEvent& event);
    void ApplyTheme();

public:
    clThemedChoice();
    clThemedChoice(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size,
                   const wxArrayString& choices, long style = 0, const wxValidator& validator = wxDefaultValidator,
                   const wxString& name = wxChoiceNameStr);
    bool Create(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, const wxArrayString& choices,
                long style = 0, const wxValidator& validator = wxDefaultValidator,
                const wxString& name = wxChoiceNameStr);
    virtual ~clThemedChoice();
};

#endif // CLTHEMEDCHOICE_H
