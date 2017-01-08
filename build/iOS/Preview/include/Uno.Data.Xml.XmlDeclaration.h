// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Data.Xml/0.42.0/source/elements/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Data.Xml.XmlLinkedNode.h>
namespace g{namespace Uno{namespace Data{namespace Xml{struct XmlDeclaration;}}}}

namespace g{
namespace Uno{
namespace Data{
namespace Xml{

// public sealed class XmlDeclaration :777
// {
::g::Uno::Data::Xml::XmlLinkedNode_type* XmlDeclaration_typeof();
void XmlDeclaration__ctor_3_fn(XmlDeclaration* __this);
void XmlDeclaration__ctor_4_fn(XmlDeclaration* __this, uString* version, int* encoding);
void XmlDeclaration__CreateNewInstance_fn(XmlDeclaration* __this, ::g::Uno::Data::Xml::XmlLinkedNode** __retval);
void XmlDeclaration__get_Encoding_fn(XmlDeclaration* __this, int* __retval);
void XmlDeclaration__set_Encoding_fn(XmlDeclaration* __this, int* value);
void XmlDeclaration__New1_fn(XmlDeclaration** __retval);
void XmlDeclaration__New2_fn(uString* version, int* encoding, XmlDeclaration** __retval);
void XmlDeclaration__ToString_fn(XmlDeclaration* __this, uString** __retval);
void XmlDeclaration__get_Version_fn(XmlDeclaration* __this, uString** __retval);
void XmlDeclaration__set_Version_fn(XmlDeclaration* __this, uString* value);

struct XmlDeclaration : ::g::Uno::Data::Xml::XmlLinkedNode
{
    int _Encoding;
    uStrong<uString*> _Version;

    void ctor_3();
    void ctor_4(uString* version, int encoding);
    int Encoding();
    void Encoding(int value);
    uString* Version();
    void Version(uString* value);
    static XmlDeclaration* New1();
    static XmlDeclaration* New2(uString* version, int encoding);
};
// }

}}}} // ::g::Uno::Data::Xml
