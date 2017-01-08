// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Data.Xml/0.42.0/source/collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Data.Xml.XmlAttribute.h>
#include <Uno.Data.Xml.XmlNodeCollectionBase-1.h>
namespace g{namespace Uno{namespace Data{namespace Xml{struct XmlAttributeCollection;}}}}
namespace g{namespace Uno{namespace Data{namespace Xml{struct XmlLinkedNode;}}}}

namespace g{
namespace Uno{
namespace Data{
namespace Xml{

// public sealed class XmlAttributeCollection :111
// {
::g::Uno::Data::Xml::XmlNodeCollectionBase_type* XmlAttributeCollection_typeof();
void XmlAttributeCollection__ctor_1_fn(XmlAttributeCollection* __this, ::g::Uno::Data::Xml::XmlLinkedNode* owner);
void XmlAttributeCollection__Add_fn(XmlAttributeCollection* __this, ::g::Uno::Data::Xml::XmlAttribute* item);
void XmlAttributeCollection__Insert_fn(XmlAttributeCollection* __this, int* index, ::g::Uno::Data::Xml::XmlAttribute* item);
void XmlAttributeCollection__New1_fn(::g::Uno::Data::Xml::XmlLinkedNode* owner, XmlAttributeCollection** __retval);
void XmlAttributeCollection__Remove_fn(XmlAttributeCollection* __this, ::g::Uno::Data::Xml::XmlAttribute* item, bool* __retval);
void XmlAttributeCollection__RemoveAt_fn(XmlAttributeCollection* __this, int* index);

struct XmlAttributeCollection : ::g::Uno::Data::Xml::XmlNodeCollectionBase
{
    void ctor_1(::g::Uno::Data::Xml::XmlLinkedNode* owner);
    static XmlAttributeCollection* New1(::g::Uno::Data::Xml::XmlLinkedNode* owner);
};
// }

}}}} // ::g::Uno::Data::Xml
