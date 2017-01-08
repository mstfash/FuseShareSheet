// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Data.Xml/0.42.0/source/elements/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Data.Xml.XmlLinkedNode.h>
namespace g{namespace Uno{namespace Data{namespace Xml{struct XmlText;}}}}
namespace g{namespace Uno{namespace Data{namespace Xml{struct XmlValue;}}}}

namespace g{
namespace Uno{
namespace Data{
namespace Xml{

// public sealed class XmlText :274
// {
::g::Uno::Data::Xml::XmlLinkedNode_type* XmlText_typeof();
void XmlText__ctor_3_fn(XmlText* __this);
void XmlText__ctor_4_fn(XmlText* __this, ::g::Uno::Data::Xml::XmlValue* value);
void XmlText__CreateNewInstance_fn(XmlText* __this, ::g::Uno::Data::Xml::XmlLinkedNode** __retval);
void XmlText__New1_fn(XmlText** __retval);
void XmlText__New2_fn(::g::Uno::Data::Xml::XmlValue* value, XmlText** __retval);
void XmlText__ToString_fn(XmlText* __this, uString** __retval);

struct XmlText : ::g::Uno::Data::Xml::XmlLinkedNode
{
    void ctor_3();
    void ctor_4(::g::Uno::Data::Xml::XmlValue* value);
    static XmlText* New1();
    static XmlText* New2(::g::Uno::Data::Xml::XmlValue* value);
};
// }

}}}} // ::g::Uno::Data::Xml
