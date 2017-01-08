// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Data.Xml/0.42.0/source/collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Data.Xml.XmlLinkedNode.h>
#include <Uno.Data.Xml.XmlNodeCollectionBase-1.h>
namespace g{namespace Uno{namespace Data{namespace Xml{struct XmlLinkedNodeCollection;}}}}

namespace g{
namespace Uno{
namespace Data{
namespace Xml{

// public sealed class XmlLinkedNodeCollection :202
// {
::g::Uno::Data::Xml::XmlNodeCollectionBase_type* XmlLinkedNodeCollection_typeof();
void XmlLinkedNodeCollection__ctor_1_fn(XmlLinkedNodeCollection* __this, ::g::Uno::Data::Xml::XmlLinkedNode* owner);
void XmlLinkedNodeCollection__Add_fn(XmlLinkedNodeCollection* __this, ::g::Uno::Data::Xml::XmlLinkedNode* item);
void XmlLinkedNodeCollection__Insert_fn(XmlLinkedNodeCollection* __this, int* index, ::g::Uno::Data::Xml::XmlLinkedNode* item);
void XmlLinkedNodeCollection__New1_fn(::g::Uno::Data::Xml::XmlLinkedNode* owner, XmlLinkedNodeCollection** __retval);
void XmlLinkedNodeCollection__Remove_fn(XmlLinkedNodeCollection* __this, ::g::Uno::Data::Xml::XmlLinkedNode* item, bool* __retval);
void XmlLinkedNodeCollection__RemoveAt_fn(XmlLinkedNodeCollection* __this, int* index);

struct XmlLinkedNodeCollection : ::g::Uno::Data::Xml::XmlNodeCollectionBase
{
    void ctor_1(::g::Uno::Data::Xml::XmlLinkedNode* owner);
    static XmlLinkedNodeCollection* New1(::g::Uno::Data::Xml::XmlLinkedNode* owner);
};
// }

}}}} // ::g::Uno::Data::Xml
