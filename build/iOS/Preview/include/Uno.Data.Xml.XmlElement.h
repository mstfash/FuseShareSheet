// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Data.Xml/0.42.0/source/elements/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Data.Xml.XmlLinkedNode.h>
namespace g{namespace Uno{namespace Data{namespace Xml{struct XmlElement;}}}}
namespace g{namespace Uno{namespace Data{namespace Xml{struct XmlValue;}}}}

namespace g{
namespace Uno{
namespace Data{
namespace Xml{

// public sealed class XmlElement :538
// {
::g::Uno::Data::Xml::XmlLinkedNode_type* XmlElement_typeof();
void XmlElement__ctor_3_fn(XmlElement* __this);
void XmlElement__ChildrenToString_fn(XmlElement* __this, uString** __retval);
void XmlElement__CreateNewInstance_fn(XmlElement* __this, ::g::Uno::Data::Xml::XmlLinkedNode** __retval);
void XmlElement__GetTextContent_fn(XmlElement* __this, uString** __retval);
void XmlElement__New1_fn(XmlElement** __retval);
void XmlElement__ToString_fn(XmlElement* __this, uString** __retval);
void XmlElement__get_Value_fn(XmlElement* __this, ::g::Uno::Data::Xml::XmlValue** __retval);
void XmlElement__set_Value_fn(XmlElement* __this, ::g::Uno::Data::Xml::XmlValue* value);

struct XmlElement : ::g::Uno::Data::Xml::XmlLinkedNode
{
    void ctor_3();
    uString* ChildrenToString();
    static XmlElement* New1();
};
// }

}}}} // ::g::Uno::Data::Xml
