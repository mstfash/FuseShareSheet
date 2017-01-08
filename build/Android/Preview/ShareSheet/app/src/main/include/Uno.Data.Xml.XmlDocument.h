// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Data.Xml/0.42.0/source/elements/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Data{namespace Xml{struct XmlDocument;}}}}
namespace g{namespace Uno{namespace Data{namespace Xml{struct XmlDocumentElement;}}}}
namespace g{namespace Uno{namespace Data{namespace Xml{struct XmlLinkedNode;}}}}

namespace g{
namespace Uno{
namespace Data{
namespace Xml{

// public sealed class XmlDocument :672
// {
uType* XmlDocument_typeof();
void XmlDocument__ctor__fn(XmlDocument* __this);
void XmlDocument__ApplyParseOptions_fn(::g::Uno::Data::Xml::XmlLinkedNode* node, uint32_t* parseOptions);
void XmlDocument__get_DocumentElement_fn(XmlDocument* __this, ::g::Uno::Data::Xml::XmlDocumentElement** __retval);
void XmlDocument__set_DocumentElement_fn(XmlDocument* __this, ::g::Uno::Data::Xml::XmlDocumentElement* value);
void XmlDocument__Load_fn(uString* xmlString, XmlDocument** __retval);
void XmlDocument__Load1_fn(uString* xmlString, uint32_t* parseOptions, XmlDocument** __retval);
void XmlDocument__New1_fn(XmlDocument** __retval);
void XmlDocument__Save_fn(XmlDocument* __this, uString** xmlString);
void XmlDocument__ToString_fn(XmlDocument* __this, uString** __retval);

struct XmlDocument : uObject
{
    uStrong< ::g::Uno::Data::Xml::XmlDocumentElement*> _DocumentElement;

    void ctor_();
    ::g::Uno::Data::Xml::XmlDocumentElement* DocumentElement();
    void DocumentElement(::g::Uno::Data::Xml::XmlDocumentElement* value);
    void Save(uString** xmlString);
    static void ApplyParseOptions(::g::Uno::Data::Xml::XmlLinkedNode* node, uint32_t parseOptions);
    static XmlDocument* Load(uString* xmlString);
    static XmlDocument* Load1(uString* xmlString, uint32_t parseOptions);
    static XmlDocument* New1();
};
// }

}}}} // ::g::Uno::Data::Xml
