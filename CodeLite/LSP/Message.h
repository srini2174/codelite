#ifndef MESSAGE_H
#define MESSAGE_H

#include "codelite_exports.h"
#include "JSONObject.h"
#include "JSON.h"
#include <string>

namespace LSP
{
class WXDLLIMPEXP_CL Message : public LSP::Serializable
{
    wxString m_jsonrpc = "2.0";

public:
    static int GetNextID();

public:
    Message();
    virtual ~Message();
    virtual JSONItem ToJSON(const wxString& name) const;
    virtual void FromJSON(const JSONItem& json);

    /**
     * @brief serialize this message into string
     */
    virtual std::string ToString() const = 0;

    template <typename T> T* As() const { return dynamic_cast<T*>(const_cast<Message*>(this)); }
};

}; // namespace LSP

#endif // MESSAGE_H
