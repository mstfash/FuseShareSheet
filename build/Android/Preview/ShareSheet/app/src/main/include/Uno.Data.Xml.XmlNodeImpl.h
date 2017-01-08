// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Data.Xml/0.42.0/source/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Data{namespace Xml{struct XmlAttributeHandle;}}}}
namespace g{namespace Uno{namespace Data{namespace Xml{struct XmlNodeHandle;}}}}
namespace g{namespace Uno{namespace Data{namespace Xml{struct XmlNodeImpl;}}}}

namespace g{
namespace Uno{
namespace Data{
namespace Xml{

// internal sealed class XmlNodeImpl :34
// {
uType* XmlNodeImpl_typeof();
void XmlNodeImpl__AddAttribute_fn(::g::Uno::Data::Xml::XmlNodeHandle* handle, ::g::Uno::Data::Xml::XmlAttributeHandle* attrib);
void XmlNodeImpl__AppendChild_fn(::g::Uno::Data::Xml::XmlNodeHandle* handle, ::g::Uno::Data::Xml::XmlNodeHandle* child);
void XmlNodeImpl__GenerateXMLTree_fn(void** obj_, ::g::Uno::Data::Xml::XmlNodeHandle** __retval);
void XmlNodeImpl__Parse_fn(uString* xmlString_, ::g::Uno::Data::Xml::XmlNodeHandle** __retval);

struct XmlNodeImpl : uObject
{
    static void AddAttribute(::g::Uno::Data::Xml::XmlNodeHandle* handle, ::g::Uno::Data::Xml::XmlAttributeHandle* attrib);
    static void AppendChild(::g::Uno::Data::Xml::XmlNodeHandle* handle, ::g::Uno::Data::Xml::XmlNodeHandle* child);
    static ::g::Uno::Data::Xml::XmlNodeHandle* GenerateXMLTree(void* obj_);
    static ::g::Uno::Data::Xml::XmlNodeHandle* Parse(uString* xmlString_);
};
// }

}}}} // ::g::Uno::Data::Xml
