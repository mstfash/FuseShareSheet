// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Data.Xml/0.42.0/source/elements/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Data.Xml.XmlNode.h>
namespace g{namespace Uno{namespace Data{namespace Xml{struct XmlAttribute;}}}}

namespace g{
namespace Uno{
namespace Data{
namespace Xml{

// public sealed class XmlAttribute :10
// {
::g::Uno::Data::Xml::XmlNode_type* XmlAttribute_typeof();
void XmlAttribute__ctor_2_fn(XmlAttribute* __this);
void XmlAttribute__ctor_3_fn(XmlAttribute* __this, uString* name, uString* value);
void XmlAttribute__Clone_fn(XmlAttribute* __this, XmlAttribute** __retval);
void XmlAttribute__New1_fn(XmlAttribute** __retval);
void XmlAttribute__New2_fn(uString* name, uString* value, XmlAttribute** __retval);
void XmlAttribute__get_NextSibling_fn(XmlAttribute* __this, XmlAttribute** __retval);
void XmlAttribute__set_NextSibling_fn(XmlAttribute* __this, XmlAttribute* value);
void XmlAttribute__get_PreviousSibling_fn(XmlAttribute* __this, XmlAttribute** __retval);
void XmlAttribute__set_PreviousSibling_fn(XmlAttribute* __this, XmlAttribute* value);
void XmlAttribute__ToString_fn(XmlAttribute* __this, uString** __retval);

struct XmlAttribute : ::g::Uno::Data::Xml::XmlNode
{
    uStrong<XmlAttribute*> _NextSibling;
    uStrong<XmlAttribute*> _PreviousSibling;

    void ctor_2();
    void ctor_3(uString* name, uString* value);
    XmlAttribute* Clone();
    XmlAttribute* NextSibling();
    void NextSibling(XmlAttribute* value);
    XmlAttribute* PreviousSibling();
    void PreviousSibling(XmlAttribute* value);
    static XmlAttribute* New1();
    static XmlAttribute* New2(uString* name, uString* value);
};
// }

}}}} // ::g::Uno::Data::Xml
