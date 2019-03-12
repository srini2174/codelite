#ifndef GOTODEFINITIONREQUEST_H
#define GOTODEFINITIONREQUEST_H

#include "RequestMessage.h" // Base class: LSP::RequestMessage
#include <wx/filename.h>
#include "basic_types.h"

namespace LSP
{
class WXDLLIMPEXP_CL GotoDefinitionRequest : public LSP::RequestMessage
{
    wxFileName m_filename;
    size_t m_line = 0;
    size_t m_column = 0;

public:
    GotoDefinitionRequest(const wxFileName& filename, size_t line, size_t column);
    virtual ~GotoDefinitionRequest();
    void SetColumn(size_t column) { this->m_column = column; }
    void SetFilename(const wxFileName& filename) { this->m_filename = filename; }
    void SetLine(size_t line) { this->m_line = line; }
    size_t GetColumn() const { return m_column; }
    const wxFileName& GetFilename() const { return m_filename; }
    size_t GetLine() const { return m_line; }
    void OnResponse(const LSP::ResponseMessage& response, wxEvtHandler* owner);
    void BuildUID();
};
};     // namespace LSP
#endif // GOTODEFINITIONREQUEST_H
