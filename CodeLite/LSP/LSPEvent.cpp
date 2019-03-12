#include "LSPEvent.h"

wxDEFINE_EVENT(wxEVT_LSP_DEFINITION, LSPEvent);
wxDEFINE_EVENT(wxEVT_LSP_INITIALIZED, LSPEvent);
wxDEFINE_EVENT(wxEVT_LSP_COMPLETION_READY, LSPEvent);
wxDEFINE_EVENT(wxEVT_LSP_RESTART_NEEDED, LSPEvent);
wxDEFINE_EVENT(wxEVT_LSP_REPARSE_NEEDED, LSPEvent);

LSPEvent::LSPEvent(wxEventType commandType, int winid)
    : clCommandEvent(commandType, winid)
{
}

LSPEvent::LSPEvent(const LSPEvent& src)
    : clCommandEvent(src)
{
    *this = src;
}

LSPEvent& LSPEvent::operator=(const LSPEvent& other)
{
    clCommandEvent::operator=(other);
    m_location = other.m_location;
    m_serverName = other.m_serverName;
    m_completions = other.m_completions;
    return *this;
}

LSPEvent::~LSPEvent() {}
