// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Data.Xml/0.42.0/source/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace Data{namespace Xml{struct XmlAttributeHandle;}}}}
namespace g{namespace Uno{namespace Data{namespace Xml{struct XmlNodeHandle;}}}}

namespace g{
namespace Uno{
namespace Data{
namespace Xml{

// internal sealed class XmlNodeHandle :72
// {
uType* XmlNodeHandle_typeof();
void XmlNodeHandle__ctor__fn(XmlNodeHandle* __this);
void XmlNodeHandle__ctor_1_fn(XmlNodeHandle* __this, uString* xmlVersion, uString* xmlEncoding);
void XmlNodeHandle__ctor_2_fn(XmlNodeHandle* __this, uString* name, uString* value, int* nodeType);
void XmlNodeHandle__AddAttribute_fn(XmlNodeHandle* __this, ::g::Uno::Data::Xml::XmlAttributeHandle* attribute);
void XmlNodeHandle__AppendChild_fn(XmlNodeHandle* __this, XmlNodeHandle* child);
void XmlNodeHandle__get_Attributes_fn(XmlNodeHandle* __this, ::g::Uno::Collections::List** __retval);
void XmlNodeHandle__get_Children_fn(XmlNodeHandle* __this, ::g::Uno::Collections::List** __retval);
void XmlNodeHandle__get_Encoding_fn(XmlNodeHandle* __this, uString** __retval);
void XmlNodeHandle__set_Encoding_fn(XmlNodeHandle* __this, uString* value);
void XmlNodeHandle__get_FirstChild_fn(XmlNodeHandle* __this, XmlNodeHandle** __retval);
void XmlNodeHandle__get_LastChild_fn(XmlNodeHandle* __this, XmlNodeHandle** __retval);
void XmlNodeHandle__get_Name_fn(XmlNodeHandle* __this, uString** __retval);
void XmlNodeHandle__set_Name_fn(XmlNodeHandle* __this, uString* value);
void XmlNodeHandle__New1_fn(XmlNodeHandle** __retval);
void XmlNodeHandle__New2_fn(uString* xmlVersion, uString* xmlEncoding, XmlNodeHandle** __retval);
void XmlNodeHandle__New3_fn(uString* name, uString* value, int* nodeType, XmlNodeHandle** __retval);
void XmlNodeHandle__get_NextSibling_fn(XmlNodeHandle* __this, XmlNodeHandle** __retval);
void XmlNodeHandle__set_NextSibling_fn(XmlNodeHandle* __this, XmlNodeHandle* value);
void XmlNodeHandle__get_NodeType_fn(XmlNodeHandle* __this, int* __retval);
void XmlNodeHandle__set_NodeType_fn(XmlNodeHandle* __this, int* value);
void XmlNodeHandle__get_Parent_fn(XmlNodeHandle* __this, XmlNodeHandle** __retval);
void XmlNodeHandle__set_Parent_fn(XmlNodeHandle* __this, XmlNodeHandle* value);
void XmlNodeHandle__get_PrevSibling_fn(XmlNodeHandle* __this, XmlNodeHandle** __retval);
void XmlNodeHandle__set_PrevSibling_fn(XmlNodeHandle* __this, XmlNodeHandle* value);
void XmlNodeHandle__get_Value_fn(XmlNodeHandle* __this, uString** __retval);
void XmlNodeHandle__set_Value_fn(XmlNodeHandle* __this, uString* value);
void XmlNodeHandle__get_Version_fn(XmlNodeHandle* __this, uString** __retval);
void XmlNodeHandle__set_Version_fn(XmlNodeHandle* __this, uString* value);

struct XmlNodeHandle : uObject
{
    uStrong< ::g::Uno::Collections::List*> _attributes;
    uStrong< ::g::Uno::Collections::List*> _children;
    uStrong<uString*> _Encoding;
    uStrong<uString*> _Name;
    uStrong<XmlNodeHandle*> _NextSibling;
    int _NodeType;
    uStrong<XmlNodeHandle*> _Parent;
    uStrong<XmlNodeHandle*> _PrevSibling;
    uStrong<uString*> _Value;
    uStrong<uString*> _Version;

    void ctor_();
    void ctor_1(uString* xmlVersion, uString* xmlEncoding);
    void ctor_2(uString* name, uString* value, int nodeType);
    void AddAttribute(::g::Uno::Data::Xml::XmlAttributeHandle* attribute);
    void AppendChild(XmlNodeHandle* child);
    ::g::Uno::Collections::List* Attributes();
    ::g::Uno::Collections::List* Children();
    uString* Encoding();
    void Encoding(uString* value);
    XmlNodeHandle* FirstChild();
    XmlNodeHandle* LastChild();
    uString* Name();
    void Name(uString* value);
    XmlNodeHandle* NextSibling();
    void NextSibling(XmlNodeHandle* value);
    int NodeType();
    void NodeType(int value);
    XmlNodeHandle* Parent();
    void Parent(XmlNodeHandle* value);
    XmlNodeHandle* PrevSibling();
    void PrevSibling(XmlNodeHandle* value);
    uString* Value();
    void Value(uString* value);
    uString* Version();
    void Version(uString* value);
    static XmlNodeHandle* New1();
    static XmlNodeHandle* New2(uString* xmlVersion, uString* xmlEncoding);
    static XmlNodeHandle* New3(uString* name, uString* value, int nodeType);
};
// }

}}}} // ::g::Uno::Data::Xml
