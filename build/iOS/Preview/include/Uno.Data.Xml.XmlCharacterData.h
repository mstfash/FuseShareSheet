// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Data.Xml/0.42.0/source/elements/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Data.Xml.XmlLinkedNode.h>
namespace g{namespace Uno{namespace Data{namespace Xml{struct XmlCharacterData;}}}}

namespace g{
namespace Uno{
namespace Data{
namespace Xml{

// public sealed class XmlCharacterData :857
// {
::g::Uno::Data::Xml::XmlLinkedNode_type* XmlCharacterData_typeof();
void XmlCharacterData__ctor_3_fn(XmlCharacterData* __this);
void XmlCharacterData__ctor_4_fn(XmlCharacterData* __this, uString* data);
void XmlCharacterData__CreateNewInstance_fn(XmlCharacterData* __this, ::g::Uno::Data::Xml::XmlLinkedNode** __retval);
void XmlCharacterData__get_Data_fn(XmlCharacterData* __this, uString** __retval);
void XmlCharacterData__set_Data_fn(XmlCharacterData* __this, uString* value);
void XmlCharacterData__get_Length_fn(XmlCharacterData* __this, int* __retval);
void XmlCharacterData__New1_fn(XmlCharacterData** __retval);
void XmlCharacterData__New2_fn(uString* data, XmlCharacterData** __retval);
void XmlCharacterData__ToString_fn(XmlCharacterData* __this, uString** __retval);

struct XmlCharacterData : ::g::Uno::Data::Xml::XmlLinkedNode
{
    uStrong<uString*> _Data;

    void ctor_3();
    void ctor_4(uString* data);
    uString* Data();
    void Data(uString* value);
    int Length();
    static XmlCharacterData* New1();
    static XmlCharacterData* New2(uString* data);
};
// }

}}}} // ::g::Uno::Data::Xml
