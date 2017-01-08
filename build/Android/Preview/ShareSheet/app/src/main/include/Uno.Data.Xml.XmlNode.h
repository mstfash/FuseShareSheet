// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Data.Xml/0.42.0/source/elements/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Data{namespace Xml{struct XmlNode;}}}}
namespace g{namespace Uno{namespace Data{namespace Xml{struct XmlValue;}}}}

namespace g{
namespace Uno{
namespace Data{
namespace Xml{

// public abstract class XmlNode :335
// {
struct XmlNode_type : uType
{
    void(*fp_get_Value)(::g::Uno::Data::Xml::XmlNode*, ::g::Uno::Data::Xml::XmlValue**);
    void(*fp_set_Value)(::g::Uno::Data::Xml::XmlNode*, ::g::Uno::Data::Xml::XmlValue*);
};

XmlNode_type* XmlNode_typeof();
void XmlNode__ctor__fn(XmlNode* __this);
void XmlNode__ctor_1_fn(XmlNode* __this, uString* name, int* nodeType, ::g::Uno::Data::Xml::XmlValue* value);
void XmlNode__get_Name_fn(XmlNode* __this, uString** __retval);
void XmlNode__set_Name_fn(XmlNode* __this, uString* value);
void XmlNode__get_NodeType_fn(XmlNode* __this, int* __retval);
void XmlNode__set_NodeType_fn(XmlNode* __this, int* value);
void XmlNode__get_Value_fn(XmlNode* __this, ::g::Uno::Data::Xml::XmlValue** __retval);
void XmlNode__set_Value_fn(XmlNode* __this, ::g::Uno::Data::Xml::XmlValue* value);

struct XmlNode : uObject
{
    uStrong<uString*> _Name;
    int _NodeType;
    uStrong< ::g::Uno::Data::Xml::XmlValue*> _Value;

    void ctor_();
    void ctor_1(uString* name, int nodeType, ::g::Uno::Data::Xml::XmlValue* value);
    uString* Name();
    void Name(uString* value);
    int NodeType();
    void NodeType(int value);
    ::g::Uno::Data::Xml::XmlValue* Value() { ::g::Uno::Data::Xml::XmlValue* __retval; return (((XmlNode_type*)__type)->fp_get_Value)(this, &__retval), __retval; }
    void Value(::g::Uno::Data::Xml::XmlValue* value) { (((XmlNode_type*)__type)->fp_set_Value)(this, value); }
    static ::g::Uno::Data::Xml::XmlValue* Value(XmlNode* __this) { ::g::Uno::Data::Xml::XmlValue* __retval; return XmlNode__get_Value_fn(__this, &__retval), __retval; }
    static void Value(XmlNode* __this, ::g::Uno::Data::Xml::XmlValue* value) { XmlNode__set_Value_fn(__this, value); }
};
// }

}}}} // ::g::Uno::Data::Xml
