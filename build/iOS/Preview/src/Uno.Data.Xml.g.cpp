// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Source/pugixml.hpp>
#include <Uno.Action.h>
#include <Uno.Bool.h>
#include <Uno.Char.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.IListExtensions.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Data.Xml.AttributeHandleConverter.h>
#include <Uno.Data.Xml.ParseOptions.h>
#include <Uno.Data.Xml.TargetSpecificXmlNode.h>
#include <Uno.Data.Xml.ValidationHelper.h>
#include <Uno.Data.Xml.XmlAttribute.h>
#include <Uno.Data.Xml.XmlAttributeCollection.h>
#include <Uno.Data.Xml.XmlAttributeHandle.h>
#include <Uno.Data.Xml.XmlCharacterData.h>
#include <Uno.Data.Xml.XmlComment.h>
#include <Uno.Data.Xml.XmlDeclaration.h>
#include <Uno.Data.Xml.XmlDocument.h>
#include <Uno.Data.Xml.XmlDocumentElement.h>
#include <Uno.Data.Xml.XmlElement.h>
#include <Uno.Data.Xml.XmlEncoding.h>
#include <Uno.Data.Xml.XmlEncodingHelper.h>
#include <Uno.Data.Xml.XmlException.h>
#include <Uno.Data.Xml.XmlLinkedNode.h>
#include <Uno.Data.Xml.XmlLinkedNodeCollection.h>
#include <Uno.Data.Xml.XmlNode.h>
#include <Uno.Data.Xml.XmlNodeCollectionBase-1.h>
#include <Uno.Data.Xml.XmlNodeHandle.h>
#include <Uno.Data.Xml.XmlNodeHandleConverter.h>
#include <Uno.Data.Xml.XmlNodeImpl.h>
#include <Uno.Data.Xml.XmlNodeType.h>
#include <Uno.Data.Xml.XmlProcessingInstruction.h>
#include <Uno.Data.Xml.XmlText.h>
#include <Uno.Data.Xml.XmlValue.h>
#include <Uno.Data.Xml.XmlValueType.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.Long.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Text.StringBuilder.h>
#include <Uno.UInt.h>
#include <Uno/XliInterop.h>
static uString* STRINGS[48];
static uType* TYPES[23];

namespace g{
namespace Uno{
namespace Data{
namespace Xml{

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Data.Xml/0.42.0/source/helpers/$.uno
// ------------------------------------------------------------------------------------------------------

// internal sealed class AttributeHandleConverter :8
// {
static void AttributeHandleConverter_build(uType* type)
{
}

uType* AttributeHandleConverter_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(AttributeHandleConverter);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Data.Xml.AttributeHandleConverter", options);
    type->fp_build_ = AttributeHandleConverter_build;
    return type;
}

// public static Uno.Data.Xml.XmlAttribute ConvertToXmlAttribute(Uno.Data.Xml.XmlAttributeHandle handle) :10
void AttributeHandleConverter__ConvertToXmlAttribute_fn(::g::Uno::Data::Xml::XmlAttributeHandle* handle, ::g::Uno::Data::Xml::XmlAttribute** __retval)
{
    *__retval = AttributeHandleConverter::ConvertToXmlAttribute(handle);
}

// public static Uno.Data.Xml.XmlAttribute ConvertToXmlAttribute(Uno.Data.Xml.XmlAttributeHandle handle) [static] :10
::g::Uno::Data::Xml::XmlAttribute* AttributeHandleConverter::ConvertToXmlAttribute(::g::Uno::Data::Xml::XmlAttributeHandle* handle)
{
    uStackFrame __("Uno.Data.Xml.AttributeHandleConverter", "ConvertToXmlAttribute(Uno.Data.Xml.XmlAttributeHandle)");
    return ::g::Uno::Data::Xml::XmlAttribute::New2(uPtr(handle)->Name(), uPtr(handle)->Value());
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Data.Xml/0.42.0/source/$.uno
// ----------------------------------------------------------------------------------------------

// public enum ParseOptions :234
uEnumType* ParseOptions_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Data.Xml.ParseOptions", ::g::Uno::UInt_typeof(), 4);
    type->SetLiterals(
        "IncludeProcessingInstruction", 1LL,
        "IncludeDeclaration", 256LL,
        "IncludeComment", 2LL,
        "IncludeCharacterData", 4LL);
    return type;
}

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Data.Xml/0.42.0/source/$.uno
// ----------------------------------------------------------------------------------------------

// internal struct TargetSpecificXmlNode :56
// {
static void TargetSpecificXmlNode_build(uType* type)
{
}

uStructType* TargetSpecificXmlNode_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ValueSize = sizeof(void*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Data.Xml.TargetSpecificXmlNode", options);
    type->fp_build_ = TargetSpecificXmlNode_build;
    return type;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Data.Xml/0.42.0/source/helpers/$.uno
// ------------------------------------------------------------------------------------------------------

// internal sealed class ValidationHelper :25
// {
static void ValidationHelper_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Attributes can be added to xml elements only");
    ::STRINGS[1] = uString::Const("Attribute with the same name already exists");
    ::STRINGS[2] = uString::Const("Children can be added to the root node or to xml elements");
    ::STRINGS[3] = uString::Const("Declaration can be added to the root node only");
    ::STRINGS[4] = uString::Const("This type of node can't be added to the root element");
    ::STRINGS[5] = uString::Const("Only one declaration is possible");
    ::STRINGS[6] = uString::Const("Only one xml element can be added to the root");
    ::TYPES[0] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[1] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Data::Xml::XmlLinkedNode_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Data::Xml::XmlAttribute_typeof(), NULL);
}

uType* ValidationHelper_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(ValidationHelper);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Data.Xml.ValidationHelper", options);
    type->fp_build_ = ValidationHelper_build;
    return type;
}

// private static bool IsChildAlreadyExists(Uno.Data.Xml.XmlLinkedNode owner, Uno.Data.Xml.XmlNodeType nodeType) :74
void ValidationHelper__IsChildAlreadyExists_fn(::g::Uno::Data::Xml::XmlLinkedNode* owner, int* nodeType, bool* __retval)
{
    *__retval = ValidationHelper::IsChildAlreadyExists(owner, *nodeType);
}

// public static void ValidateAttributeAdding(Uno.Data.Xml.XmlLinkedNode owner, Uno.Data.Xml.XmlAttribute item) :27
void ValidationHelper__ValidateAttributeAdding_fn(::g::Uno::Data::Xml::XmlLinkedNode* owner, ::g::Uno::Data::Xml::XmlAttribute* item)
{
    ValidationHelper::ValidateAttributeAdding(owner, item);
}

// public static void ValidateNodeAdding(Uno.Data.Xml.XmlLinkedNode owner, Uno.Data.Xml.XmlLinkedNode item) :43
void ValidationHelper__ValidateNodeAdding_fn(::g::Uno::Data::Xml::XmlLinkedNode* owner, ::g::Uno::Data::Xml::XmlLinkedNode* item)
{
    ValidationHelper::ValidateNodeAdding(owner, item);
}

// private static bool IsChildAlreadyExists(Uno.Data.Xml.XmlLinkedNode owner, Uno.Data.Xml.XmlNodeType nodeType) [static] :74
bool ValidationHelper::IsChildAlreadyExists(::g::Uno::Data::Xml::XmlLinkedNode* owner, int nodeType)
{
    uStackFrame __("Uno.Data.Xml.ValidationHelper", "IsChildAlreadyExists(Uno.Data.Xml.XmlLinkedNode,Uno.Data.Xml.XmlNodeType)");
    ::g::Uno::Data::Xml::XmlLinkedNode* ret4;

    for (uObject* enum2 = (uObject*)uPtr(uPtr(owner)->Children())->GetEnumerator(); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum2), ::TYPES[0/*Uno.Collections.IEnumerator*/])); )
    {
        ::g::Uno::Data::Xml::XmlLinkedNode* child = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum2), ::TYPES[1/*Uno.Collections.IEnumerator<Uno.Data.Xml.XmlLinkedNode>*/]), &ret4), ret4);

        if (uPtr(child)->NodeType() == nodeType)
            return true;
    }

    return false;
}

// public static void ValidateAttributeAdding(Uno.Data.Xml.XmlLinkedNode owner, Uno.Data.Xml.XmlAttribute item) [static] :27
void ValidationHelper::ValidateAttributeAdding(::g::Uno::Data::Xml::XmlLinkedNode* owner, ::g::Uno::Data::Xml::XmlAttribute* item)
{
    uStackFrame __("Uno.Data.Xml.ValidationHelper", "ValidateAttributeAdding(Uno.Data.Xml.XmlLinkedNode,Uno.Data.Xml.XmlAttribute)");
    ::g::Uno::Data::Xml::XmlAttribute* ret5;

    if (uPtr(owner)->NodeType() != 3)
        U_THROW(::g::Uno::Data::Xml::XmlException::New4(::STRINGS[0/*"Attributes ...*/]));

    for (uObject* enum1 = (uObject*)uPtr(uPtr(owner)->Attributes())->GetEnumerator(); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[0/*Uno.Collections.IEnumerator*/])); )
    {
        ::g::Uno::Data::Xml::XmlAttribute* existingAttr = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[2/*Uno.Collections.IEnumerator<Uno.Data.Xml.XmlAttribute>*/]), &ret5), ret5);

        if (::g::Uno::String::op_Equality(uPtr(existingAttr)->Name(), uPtr(item)->Name()))
            U_THROW(::g::Uno::Data::Xml::XmlException::New4(::STRINGS[1/*"Attribute w...*/]));
    }
}

// public static void ValidateNodeAdding(Uno.Data.Xml.XmlLinkedNode owner, Uno.Data.Xml.XmlLinkedNode item) [static] :43
void ValidationHelper::ValidateNodeAdding(::g::Uno::Data::Xml::XmlLinkedNode* owner, ::g::Uno::Data::Xml::XmlLinkedNode* item)
{
    uStackFrame __("Uno.Data.Xml.ValidationHelper", "ValidateNodeAdding(Uno.Data.Xml.XmlLinkedNode,Uno.Data.Xml.XmlLinkedNode)");

    if ((uPtr(owner)->NodeType() != 3) && (uPtr(owner)->NodeType() != 0))
        U_THROW(::g::Uno::Data::Xml::XmlException::New4(::STRINGS[2/*"Children ca...*/]));

    if ((uPtr(item)->NodeType() == 4) && (uPtr(owner)->NodeType() != 0))
        U_THROW(::g::Uno::Data::Xml::XmlException::New4(::STRINGS[3/*"Declaration...*/]));

    if (uPtr(owner)->NodeType() == 0)
    {
        if (((uPtr(item)->NodeType() == 1) || (uPtr(item)->NodeType() == 2)) || (uPtr(item)->NodeType() == 5))
            U_THROW(::g::Uno::Data::Xml::XmlException::New4(::STRINGS[4/*"This type o...*/]));

        if ((uPtr(item)->NodeType() == 4) && ValidationHelper::IsChildAlreadyExists(owner, 4))
            U_THROW(::g::Uno::Data::Xml::XmlException::New4(::STRINGS[5/*"Only one de...*/]));

        if ((uPtr(item)->NodeType() == 3) && ValidationHelper::IsChildAlreadyExists(owner, 3))
            U_THROW(::g::Uno::Data::Xml::XmlException::New4(::STRINGS[6/*"Only one xm...*/]));
    }
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Data.Xml/0.42.0/source/elements/$.uno
// -------------------------------------------------------------------------------------------------------

// public sealed class XmlAttribute :10
// {
static void XmlAttribute_build(uType* type)
{
    ::STRINGS[7] = uString::Const("=\"");
    ::STRINGS[8] = uString::Const("\"");
    type->SetFields(3,
        type, offsetof(::g::Uno::Data::Xml::XmlAttribute, _NextSibling), 0,
        type, offsetof(::g::Uno::Data::Xml::XmlAttribute, _PreviousSibling), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("Clone", NULL, (void*)XmlAttribute__Clone_fn, 0, false, type, 0),
        new uFunction(".ctor", NULL, (void*)XmlAttribute__New1_fn, 0, true, type, 0),
        new uFunction(".ctor", NULL, (void*)XmlAttribute__New2_fn, 0, true, type, 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()),
        new uFunction("get_NextSibling", NULL, (void*)XmlAttribute__get_NextSibling_fn, 0, false, type, 0),
        new uFunction("get_PreviousSibling", NULL, (void*)XmlAttribute__get_PreviousSibling_fn, 0, false, type, 0));
}

::g::Uno::Data::Xml::XmlNode_type* XmlAttribute_typeof()
{
    static uSStrong< ::g::Uno::Data::Xml::XmlNode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Data::Xml::XmlNode_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(XmlAttribute);
    options.TypeSize = sizeof(::g::Uno::Data::Xml::XmlNode_type);
    type = (::g::Uno::Data::Xml::XmlNode_type*)uClassType::New("Uno.Data.Xml.XmlAttribute", options);
    type->fp_build_ = XmlAttribute_build;
    type->fp_ctor_ = (void*)XmlAttribute__New1_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))XmlAttribute__ToString_fn;
    return type;
}

// public XmlAttribute() :12
void XmlAttribute__ctor_2_fn(XmlAttribute* __this)
{
    __this->ctor_2();
}

// public XmlAttribute(string name, string value) :17
void XmlAttribute__ctor_3_fn(XmlAttribute* __this, uString* name, uString* value)
{
    __this->ctor_3(name, value);
}

// public Uno.Data.Xml.XmlAttribute Clone() :26
void XmlAttribute__Clone_fn(XmlAttribute* __this, XmlAttribute** __retval)
{
    *__retval = __this->Clone();
}

// public XmlAttribute New() :12
void XmlAttribute__New1_fn(XmlAttribute** __retval)
{
    *__retval = XmlAttribute::New1();
}

// public XmlAttribute New(string name, string value) :17
void XmlAttribute__New2_fn(uString* name, uString* value, XmlAttribute** __retval)
{
    *__retval = XmlAttribute::New2(name, value);
}

// public generated Uno.Data.Xml.XmlAttribute get_NextSibling() :22
void XmlAttribute__get_NextSibling_fn(XmlAttribute* __this, XmlAttribute** __retval)
{
    *__retval = __this->NextSibling();
}

// internal generated void set_NextSibling(Uno.Data.Xml.XmlAttribute value) :22
void XmlAttribute__set_NextSibling_fn(XmlAttribute* __this, XmlAttribute* value)
{
    __this->NextSibling(value);
}

// public generated Uno.Data.Xml.XmlAttribute get_PreviousSibling() :24
void XmlAttribute__get_PreviousSibling_fn(XmlAttribute* __this, XmlAttribute** __retval)
{
    *__retval = __this->PreviousSibling();
}

// internal generated void set_PreviousSibling(Uno.Data.Xml.XmlAttribute value) :24
void XmlAttribute__set_PreviousSibling_fn(XmlAttribute* __this, XmlAttribute* value)
{
    __this->PreviousSibling(value);
}

// public override sealed string ToString() :31
void XmlAttribute__ToString_fn(XmlAttribute* __this, uString** __retval)
{
    uStackFrame __("Uno.Data.Xml.XmlAttribute", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(__this->Name(), ::STRINGS[7/*"=\""*/]), uPtr(__this->Value())->AsString()), ::STRINGS[8/*"\""*/]), void();
}

// public XmlAttribute() [instance] :12
void XmlAttribute::ctor_2()
{
    ctor_();
    NodeType(7);
}

// public XmlAttribute(string name, string value) [instance] :17
void XmlAttribute::ctor_3(uString* name, uString* value)
{
    ctor_1(name, 7, ::g::Uno::Data::Xml::XmlValue::New7(value));
}

// public Uno.Data.Xml.XmlAttribute Clone() [instance] :26
XmlAttribute* XmlAttribute::Clone()
{
    uStackFrame __("Uno.Data.Xml.XmlAttribute", "Clone()");
    return XmlAttribute::New2(Name(), uPtr(Value())->AsString());
}

// public generated Uno.Data.Xml.XmlAttribute get_NextSibling() [instance] :22
XmlAttribute* XmlAttribute::NextSibling()
{
    return _NextSibling;
}

// internal generated void set_NextSibling(Uno.Data.Xml.XmlAttribute value) [instance] :22
void XmlAttribute::NextSibling(XmlAttribute* value)
{
    _NextSibling = value;
}

// public generated Uno.Data.Xml.XmlAttribute get_PreviousSibling() [instance] :24
XmlAttribute* XmlAttribute::PreviousSibling()
{
    return _PreviousSibling;
}

// internal generated void set_PreviousSibling(Uno.Data.Xml.XmlAttribute value) [instance] :24
void XmlAttribute::PreviousSibling(XmlAttribute* value)
{
    _PreviousSibling = value;
}

// public XmlAttribute New() [static] :12
XmlAttribute* XmlAttribute::New1()
{
    XmlAttribute* obj1 = (XmlAttribute*)uNew(XmlAttribute_typeof());
    obj1->ctor_2();
    return obj1;
}

// public XmlAttribute New(string name, string value) [static] :17
XmlAttribute* XmlAttribute::New2(uString* name, uString* value)
{
    XmlAttribute* obj2 = (XmlAttribute*)uNew(XmlAttribute_typeof());
    obj2->ctor_3(name, value);
    return obj2;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Data.Xml/0.42.0/source/collections/$.uno
// ----------------------------------------------------------------------------------------------------------

// public sealed class XmlAttributeCollection :111
// {
static void XmlAttributeCollection_build(uType* type)
{
    type->SetBase(::g::Uno::Data::Xml::XmlNodeCollectionBase_typeof()->MakeType(::g::Uno::Data::Xml::XmlAttribute_typeof(), NULL));
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::Data::Xml::XmlAttribute_typeof(), NULL), offsetof(::g::Uno::Data::Xml::XmlNodeCollectionBase_type, interface0),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::Data::Xml::XmlAttribute_typeof(), NULL), offsetof(::g::Uno::Data::Xml::XmlNodeCollectionBase_type, interface1),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Data::Xml::XmlAttribute_typeof(), NULL), offsetof(::g::Uno::Data::Xml::XmlNodeCollectionBase_type, interface2));
    type->SetFields(2);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)XmlAttributeCollection__New1_fn, 0, true, type, 1, ::g::Uno::Data::Xml::XmlLinkedNode_typeof()));
}

::g::Uno::Data::Xml::XmlNodeCollectionBase_type* XmlAttributeCollection_typeof()
{
    static uSStrong< ::g::Uno::Data::Xml::XmlNodeCollectionBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Data::Xml::XmlNodeCollectionBase_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(XmlAttributeCollection);
    options.TypeSize = sizeof(::g::Uno::Data::Xml::XmlNodeCollectionBase_type);
    type = (::g::Uno::Data::Xml::XmlNodeCollectionBase_type*)uClassType::New("Uno.Data.Xml.XmlAttributeCollection", options);
    type->fp_build_ = XmlAttributeCollection_build;
    type->fp_Add = (void(*)(::g::Uno::Data::Xml::XmlNodeCollectionBase*, ::g::Uno::Data::Xml::XmlNode*))XmlAttributeCollection__Add_fn;
    type->fp_Insert = (void(*)(::g::Uno::Data::Xml::XmlNodeCollectionBase*, int*, ::g::Uno::Data::Xml::XmlNode*))XmlAttributeCollection__Insert_fn;
    type->fp_Remove = (void(*)(::g::Uno::Data::Xml::XmlNodeCollectionBase*, ::g::Uno::Data::Xml::XmlNode*, bool*))XmlAttributeCollection__Remove_fn;
    type->fp_RemoveAt = (void(*)(::g::Uno::Data::Xml::XmlNodeCollectionBase*, int*))XmlAttributeCollection__RemoveAt_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))XmlAttributeCollection__Insert_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))XmlAttributeCollection__RemoveAt_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Uno::Data::Xml::XmlNodeCollectionBase__get_Item_fn;
    type->interface1.fp_Clear = (void(*)(uObject*))::g::Uno::Data::Xml::XmlNodeCollectionBase__Clear_fn;
    type->interface1.fp_Add = (void(*)(uObject*, void*))XmlAttributeCollection__Add_fn;
    type->interface1.fp_Remove = (void(*)(uObject*, void*, bool*))XmlAttributeCollection__Remove_fn;
    type->interface1.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Uno::Data::Xml::XmlNodeCollectionBase__Contains_fn;
    type->interface1.fp_get_Count = (void(*)(uObject*, int*))::g::Uno::Data::Xml::XmlNodeCollectionBase__get_Count_fn;
    type->interface2.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Uno::Data::Xml::XmlNodeCollectionBase__GetEnumerator_fn;
    return type;
}

// public XmlAttributeCollection(Uno.Data.Xml.XmlLinkedNode owner) :113
void XmlAttributeCollection__ctor_1_fn(XmlAttributeCollection* __this, ::g::Uno::Data::Xml::XmlLinkedNode* owner)
{
    __this->ctor_1(owner);
}

// public override sealed void Add(Uno.Data.Xml.XmlAttribute item) :129
void XmlAttributeCollection__Add_fn(XmlAttributeCollection* __this, ::g::Uno::Data::Xml::XmlAttribute* item)
{
    uStackFrame __("Uno.Data.Xml.XmlAttributeCollection", "Add(Uno.Data.Xml.XmlAttribute)");
    ::g::Uno::Data::Xml::ValidationHelper::ValidateAttributeAdding(__this->_owner, item);

    if (((::g::Uno::Data::Xml::XmlAttribute*)__this->LastChild()) != NULL)
    {
        uPtr(item)->PreviousSibling((::g::Uno::Data::Xml::XmlAttribute*)__this->LastChild());
        uPtr((::g::Uno::Data::Xml::XmlAttribute*)__this->LastChild())->NextSibling(item);
    }

    uPtr(item)->NextSibling(NULL);
    ::g::Uno::Data::Xml::XmlNodeCollectionBase__Add_fn(__this, item);
}

// public override sealed void Insert(int index, Uno.Data.Xml.XmlAttribute item) :157
void XmlAttributeCollection__Insert_fn(XmlAttributeCollection* __this, int* index, ::g::Uno::Data::Xml::XmlAttribute* item)
{
    uStackFrame __("Uno.Data.Xml.XmlAttributeCollection", "Insert(int,Uno.Data.Xml.XmlAttribute)");
    int index_ = *index;

    if (!__this->HasChildren() && (index_ == 0))
    {
        __this->Add(item);
        return;
    }

    ::g::Uno::Data::Xml::ValidationHelper::ValidateAttributeAdding(__this->_owner, item);
    ::g::Uno::Data::Xml::XmlAttribute* existingItem = (::g::Uno::Data::Xml::XmlAttribute*)__this->Item(index_);
    uPtr(item)->NextSibling(existingItem);

    if (uPtr(existingItem)->PreviousSibling() != NULL)
    {
        uPtr(item)->PreviousSibling(uPtr(existingItem)->PreviousSibling());
        uPtr(item->PreviousSibling())->NextSibling(item);
        existingItem->PreviousSibling(item);
    }

    ::g::Uno::Data::Xml::XmlNodeCollectionBase__Insert_fn(__this, uCRef<int>(index_), item);
}

// public XmlAttributeCollection New(Uno.Data.Xml.XmlLinkedNode owner) :113
void XmlAttributeCollection__New1_fn(::g::Uno::Data::Xml::XmlLinkedNode* owner, XmlAttributeCollection** __retval)
{
    *__retval = XmlAttributeCollection::New1(owner);
}

// public override sealed bool Remove(Uno.Data.Xml.XmlAttribute item) :143
void XmlAttributeCollection__Remove_fn(XmlAttributeCollection* __this, ::g::Uno::Data::Xml::XmlAttribute* item, bool* __retval)
{
    uStackFrame __("Uno.Data.Xml.XmlAttributeCollection", "Remove(Uno.Data.Xml.XmlAttribute)");
    bool ret3;

    if (uPtr(item)->PreviousSibling() != NULL)
        uPtr(uPtr(item)->PreviousSibling())->NextSibling(uPtr(item)->NextSibling());

    if (uPtr(item)->NextSibling() != NULL)
        uPtr(uPtr(item)->NextSibling())->PreviousSibling(uPtr(item)->PreviousSibling());

    return *__retval = (::g::Uno::Data::Xml::XmlNodeCollectionBase__Remove_fn(__this, item, &ret3), ret3), void();
}

// public override sealed void RemoveAt(int index) :178
void XmlAttributeCollection__RemoveAt_fn(XmlAttributeCollection* __this, int* index)
{
    uStackFrame __("Uno.Data.Xml.XmlAttributeCollection", "RemoveAt(int)");
    int index_ = *index;
    ::g::Uno::Data::Xml::XmlAttribute* item = (::g::Uno::Data::Xml::XmlAttribute*)__this->Item(index_);

    if (uPtr(item)->PreviousSibling() != NULL)
        uPtr(uPtr(item)->PreviousSibling())->NextSibling(uPtr(item)->NextSibling());

    if (uPtr(item)->NextSibling() != NULL)
        uPtr(uPtr(item)->NextSibling())->PreviousSibling(uPtr(item)->PreviousSibling());

    ::g::Uno::Data::Xml::XmlNodeCollectionBase__RemoveAt_fn(__this, uCRef<int>(index_));
}

// public XmlAttributeCollection(Uno.Data.Xml.XmlLinkedNode owner) [instance] :113
void XmlAttributeCollection::ctor_1(::g::Uno::Data::Xml::XmlLinkedNode* owner)
{
    ctor_(owner);
}

// public XmlAttributeCollection New(Uno.Data.Xml.XmlLinkedNode owner) [static] :113
XmlAttributeCollection* XmlAttributeCollection::New1(::g::Uno::Data::Xml::XmlLinkedNode* owner)
{
    XmlAttributeCollection* obj2 = (XmlAttributeCollection*)uNew(XmlAttributeCollection_typeof());
    obj2->ctor_1(owner);
    return obj2;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Data.Xml/0.42.0/source/$.uno
// ----------------------------------------------------------------------------------------------

// internal sealed class XmlAttributeHandle :187
// {
static void XmlAttributeHandle_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::Data::Xml::XmlAttributeHandle, _Name), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::Data::Xml::XmlAttributeHandle, _Value), 0);
}

uType* XmlAttributeHandle_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(XmlAttributeHandle);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Data.Xml.XmlAttributeHandle", options);
    type->fp_build_ = XmlAttributeHandle_build;
    return type;
}

// public XmlAttributeHandle(string name, string value) :192
void XmlAttributeHandle__ctor__fn(XmlAttributeHandle* __this, uString* name, uString* value)
{
    __this->ctor_(name, value);
}

// public generated string get_Name() :189
void XmlAttributeHandle__get_Name_fn(XmlAttributeHandle* __this, uString** __retval)
{
    *__retval = __this->Name();
}

// private generated void set_Name(string value) :189
void XmlAttributeHandle__set_Name_fn(XmlAttributeHandle* __this, uString* value)
{
    __this->Name(value);
}

// public XmlAttributeHandle New(string name, string value) :192
void XmlAttributeHandle__New1_fn(uString* name, uString* value, XmlAttributeHandle** __retval)
{
    *__retval = XmlAttributeHandle::New1(name, value);
}

// public generated string get_Value() :190
void XmlAttributeHandle__get_Value_fn(XmlAttributeHandle* __this, uString** __retval)
{
    *__retval = __this->Value();
}

// public generated void set_Value(string value) :190
void XmlAttributeHandle__set_Value_fn(XmlAttributeHandle* __this, uString* value)
{
    __this->Value(value);
}

// public XmlAttributeHandle(string name, string value) [instance] :192
void XmlAttributeHandle::ctor_(uString* name, uString* value)
{
    Name(name);
    Value(value);
}

// public generated string get_Name() [instance] :189
uString* XmlAttributeHandle::Name()
{
    return _Name;
}

// private generated void set_Name(string value) [instance] :189
void XmlAttributeHandle::Name(uString* value)
{
    _Name = value;
}

// public generated string get_Value() [instance] :190
uString* XmlAttributeHandle::Value()
{
    return _Value;
}

// public generated void set_Value(string value) [instance] :190
void XmlAttributeHandle::Value(uString* value)
{
    _Value = value;
}

// public XmlAttributeHandle New(string name, string value) [static] :192
XmlAttributeHandle* XmlAttributeHandle::New1(uString* name, uString* value)
{
    XmlAttributeHandle* obj1 = (XmlAttributeHandle*)uNew(XmlAttributeHandle_typeof());
    obj1->ctor_(name, value);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Data.Xml/0.42.0/source/elements/$.uno
// -------------------------------------------------------------------------------------------------------

// public sealed class XmlCharacterData :857
// {
static void XmlCharacterData_build(uType* type)
{
    ::STRINGS[9] = uString::Const("<![CDATA[");
    ::STRINGS[10] = uString::Const("]]>");
    type->SetFields(8,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::Data::Xml::XmlCharacterData, _Data), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("get_Data", NULL, (void*)XmlCharacterData__get_Data_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Data", NULL, (void*)XmlCharacterData__set_Data_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_Length", NULL, (void*)XmlCharacterData__get_Length_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)XmlCharacterData__New1_fn, 0, true, type, 0),
        new uFunction(".ctor", NULL, (void*)XmlCharacterData__New2_fn, 0, true, type, 1, ::g::Uno::String_typeof()));
}

::g::Uno::Data::Xml::XmlLinkedNode_type* XmlCharacterData_typeof()
{
    static uSStrong< ::g::Uno::Data::Xml::XmlLinkedNode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Data::Xml::XmlLinkedNode_typeof();
    options.FieldCount = 9;
    options.ObjectSize = sizeof(XmlCharacterData);
    options.TypeSize = sizeof(::g::Uno::Data::Xml::XmlLinkedNode_type);
    type = (::g::Uno::Data::Xml::XmlLinkedNode_type*)uClassType::New("Uno.Data.Xml.XmlCharacterData", options);
    type->fp_build_ = XmlCharacterData_build;
    type->fp_ctor_ = (void*)XmlCharacterData__New1_fn;
    type->fp_CreateNewInstance = (void(*)(::g::Uno::Data::Xml::XmlLinkedNode*, ::g::Uno::Data::Xml::XmlLinkedNode**))XmlCharacterData__CreateNewInstance_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))XmlCharacterData__ToString_fn;
    return type;
}

// public XmlCharacterData() :859
void XmlCharacterData__ctor_3_fn(XmlCharacterData* __this)
{
    __this->ctor_3();
}

// public XmlCharacterData(string data) :864
void XmlCharacterData__ctor_4_fn(XmlCharacterData* __this, uString* data)
{
    __this->ctor_4(data);
}

// protected override sealed Uno.Data.Xml.XmlLinkedNode CreateNewInstance() :873
void XmlCharacterData__CreateNewInstance_fn(XmlCharacterData* __this, ::g::Uno::Data::Xml::XmlLinkedNode** __retval)
{
    return *__retval = XmlCharacterData::New2(__this->Data()), void();
}

// public generated string get_Data() :869
void XmlCharacterData__get_Data_fn(XmlCharacterData* __this, uString** __retval)
{
    *__retval = __this->Data();
}

// public generated void set_Data(string value) :869
void XmlCharacterData__set_Data_fn(XmlCharacterData* __this, uString* value)
{
    __this->Data(value);
}

// public int get_Length() :871
void XmlCharacterData__get_Length_fn(XmlCharacterData* __this, int* __retval)
{
    *__retval = __this->Length();
}

// public XmlCharacterData New() :859
void XmlCharacterData__New1_fn(XmlCharacterData** __retval)
{
    *__retval = XmlCharacterData::New1();
}

// public XmlCharacterData New(string data) :864
void XmlCharacterData__New2_fn(uString* data, XmlCharacterData** __retval)
{
    *__retval = XmlCharacterData::New2(data);
}

// public override sealed string ToString() :878
void XmlCharacterData__ToString_fn(XmlCharacterData* __this, uString** __retval)
{
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[9/*"<![CDATA["*/], __this->Data()), ::STRINGS[10/*"]]>"*/]), void();
}

// public XmlCharacterData() [instance] :859
void XmlCharacterData::ctor_3()
{
    ctor_2();
    NodeType(2);
}

// public XmlCharacterData(string data) [instance] :864
void XmlCharacterData::ctor_4(uString* data)
{
    ctor_3();
    Data(data);
}

// public generated string get_Data() [instance] :869
uString* XmlCharacterData::Data()
{
    return _Data;
}

// public generated void set_Data(string value) [instance] :869
void XmlCharacterData::Data(uString* value)
{
    _Data = value;
}

// public int get_Length() [instance] :871
int XmlCharacterData::Length()
{
    uStackFrame __("Uno.Data.Xml.XmlCharacterData", "get_Length()");
    return uPtr(Data())->Length();
}

// public XmlCharacterData New() [static] :859
XmlCharacterData* XmlCharacterData::New1()
{
    XmlCharacterData* obj1 = (XmlCharacterData*)uNew(XmlCharacterData_typeof());
    obj1->ctor_3();
    return obj1;
}

// public XmlCharacterData New(string data) [static] :864
XmlCharacterData* XmlCharacterData::New2(uString* data)
{
    XmlCharacterData* obj2 = (XmlCharacterData*)uNew(XmlCharacterData_typeof());
    obj2->ctor_4(data);
    return obj2;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Data.Xml/0.42.0/source/elements/$.uno
// -------------------------------------------------------------------------------------------------------

// public sealed class XmlComment :829
// {
static void XmlComment_build(uType* type)
{
    ::STRINGS[11] = uString::Const("<!--");
    ::STRINGS[12] = uString::Const("-->");
    type->SetFields(8);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)XmlComment__New1_fn, 0, true, type, 0));
}

::g::Uno::Data::Xml::XmlLinkedNode_type* XmlComment_typeof()
{
    static uSStrong< ::g::Uno::Data::Xml::XmlLinkedNode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Data::Xml::XmlLinkedNode_typeof();
    options.FieldCount = 8;
    options.ObjectSize = sizeof(XmlComment);
    options.TypeSize = sizeof(::g::Uno::Data::Xml::XmlLinkedNode_type);
    type = (::g::Uno::Data::Xml::XmlLinkedNode_type*)uClassType::New("Uno.Data.Xml.XmlComment", options);
    type->fp_build_ = XmlComment_build;
    type->fp_ctor_ = (void*)XmlComment__New1_fn;
    type->fp_CreateNewInstance = (void(*)(::g::Uno::Data::Xml::XmlLinkedNode*, ::g::Uno::Data::Xml::XmlLinkedNode**))XmlComment__CreateNewInstance_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))XmlComment__ToString_fn;
    return type;
}

// public XmlComment() :831
void XmlComment__ctor_3_fn(XmlComment* __this)
{
    __this->ctor_3();
}

// protected override sealed Uno.Data.Xml.XmlLinkedNode CreateNewInstance() :836
void XmlComment__CreateNewInstance_fn(XmlComment* __this, ::g::Uno::Data::Xml::XmlLinkedNode** __retval)
{
    return *__retval = XmlComment::New1(), void();
}

// public XmlComment New() :831
void XmlComment__New1_fn(XmlComment** __retval)
{
    *__retval = XmlComment::New1();
}

// public override sealed string ToString() :841
void XmlComment__ToString_fn(XmlComment* __this, uString** __retval)
{
    uStackFrame __("Uno.Data.Xml.XmlComment", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[11/*"<!--"*/], uPtr(__this->Value())->AsString()), ::STRINGS[12/*"-->"*/]), void();
}

// public XmlComment() [instance] :831
void XmlComment::ctor_3()
{
    ctor_2();
    NodeType(5);
}

// public XmlComment New() [static] :831
XmlComment* XmlComment::New1()
{
    XmlComment* obj1 = (XmlComment*)uNew(XmlComment_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Data.Xml/0.42.0/source/elements/$.uno
// -------------------------------------------------------------------------------------------------------

// public sealed class XmlDeclaration :777
// {
static void XmlDeclaration_build(uType* type)
{
    ::STRINGS[13] = uString::Const("<?xml");
    ::STRINGS[14] = uString::Const(" version=\"");
    ::STRINGS[8] = uString::Const("\"");
    ::STRINGS[15] = uString::Const(" encoding=\"");
    ::STRINGS[16] = uString::Const("?>");
    type->SetFields(8,
        ::g::Uno::Data::Xml::XmlEncoding_typeof(), offsetof(::g::Uno::Data::Xml::XmlDeclaration, _Encoding), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::Data::Xml::XmlDeclaration, _Version), 0);
    type->Reflection.SetFunctions(6,
        new uFunction("get_Encoding", NULL, (void*)XmlDeclaration__get_Encoding_fn, 0, false, ::g::Uno::Data::Xml::XmlEncoding_typeof(), 0),
        new uFunction("set_Encoding", NULL, (void*)XmlDeclaration__set_Encoding_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Data::Xml::XmlEncoding_typeof()),
        new uFunction(".ctor", NULL, (void*)XmlDeclaration__New1_fn, 0, true, type, 0),
        new uFunction(".ctor", NULL, (void*)XmlDeclaration__New2_fn, 0, true, type, 2, ::g::Uno::String_typeof(), ::g::Uno::Data::Xml::XmlEncoding_typeof()),
        new uFunction("get_Version", NULL, (void*)XmlDeclaration__get_Version_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Version", NULL, (void*)XmlDeclaration__set_Version_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()));
}

::g::Uno::Data::Xml::XmlLinkedNode_type* XmlDeclaration_typeof()
{
    static uSStrong< ::g::Uno::Data::Xml::XmlLinkedNode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Data::Xml::XmlLinkedNode_typeof();
    options.FieldCount = 10;
    options.ObjectSize = sizeof(XmlDeclaration);
    options.TypeSize = sizeof(::g::Uno::Data::Xml::XmlLinkedNode_type);
    type = (::g::Uno::Data::Xml::XmlLinkedNode_type*)uClassType::New("Uno.Data.Xml.XmlDeclaration", options);
    type->fp_build_ = XmlDeclaration_build;
    type->fp_ctor_ = (void*)XmlDeclaration__New1_fn;
    type->fp_CreateNewInstance = (void(*)(::g::Uno::Data::Xml::XmlLinkedNode*, ::g::Uno::Data::Xml::XmlLinkedNode**))XmlDeclaration__CreateNewInstance_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))XmlDeclaration__ToString_fn;
    return type;
}

// public XmlDeclaration() :779
void XmlDeclaration__ctor_3_fn(XmlDeclaration* __this)
{
    __this->ctor_3();
}

// public XmlDeclaration(string version, Uno.Data.Xml.XmlEncoding encoding) :784
void XmlDeclaration__ctor_4_fn(XmlDeclaration* __this, uString* version, int* encoding)
{
    __this->ctor_4(version, *encoding);
}

// protected override sealed Uno.Data.Xml.XmlLinkedNode CreateNewInstance() :794
void XmlDeclaration__CreateNewInstance_fn(XmlDeclaration* __this, ::g::Uno::Data::Xml::XmlLinkedNode** __retval)
{
    return *__retval = XmlDeclaration::New2(__this->Version(), __this->Encoding()), void();
}

// public generated Uno.Data.Xml.XmlEncoding get_Encoding() :790
void XmlDeclaration__get_Encoding_fn(XmlDeclaration* __this, int* __retval)
{
    *__retval = __this->Encoding();
}

// public generated void set_Encoding(Uno.Data.Xml.XmlEncoding value) :790
void XmlDeclaration__set_Encoding_fn(XmlDeclaration* __this, int* value)
{
    __this->Encoding(*value);
}

// public XmlDeclaration New() :779
void XmlDeclaration__New1_fn(XmlDeclaration** __retval)
{
    *__retval = XmlDeclaration::New1();
}

// public XmlDeclaration New(string version, Uno.Data.Xml.XmlEncoding encoding) :784
void XmlDeclaration__New2_fn(uString* version, int* encoding, XmlDeclaration** __retval)
{
    *__retval = XmlDeclaration::New2(version, *encoding);
}

// public override sealed string ToString() :799
void XmlDeclaration__ToString_fn(XmlDeclaration* __this, uString** __retval)
{
    uStackFrame __("Uno.Data.Xml.XmlDeclaration", "ToString()");
    ::g::Uno::Text::StringBuilder* result = ::g::Uno::Text::StringBuilder::New1();
    result->Append2(::STRINGS[13/*"<?xml"*/]);

    if (!::g::Uno::String::IsNullOrEmpty(__this->Version()))
        uPtr(result)->Append2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[14/*" version=\""*/], __this->Version()), ::STRINGS[8/*"\""*/]));

    if (__this->Encoding() != 0)
        uPtr(result)->Append2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[15/*" encoding=\""*/], ::g::Uno::Data::Xml::XmlEncodingHelper::ConvertToString(__this->Encoding())), ::STRINGS[8/*"\""*/]));

    result->Append2(::STRINGS[16/*"?>"*/]);
    return *__retval = result->ToString(), void();
}

// public generated string get_Version() :792
void XmlDeclaration__get_Version_fn(XmlDeclaration* __this, uString** __retval)
{
    *__retval = __this->Version();
}

// public generated void set_Version(string value) :792
void XmlDeclaration__set_Version_fn(XmlDeclaration* __this, uString* value)
{
    __this->Version(value);
}

// public XmlDeclaration() [instance] :779
void XmlDeclaration::ctor_3()
{
    ctor_2();
    NodeType(4);
}

// public XmlDeclaration(string version, Uno.Data.Xml.XmlEncoding encoding) [instance] :784
void XmlDeclaration::ctor_4(uString* version, int encoding)
{
    ctor_3();
    Version(version);
    Encoding(encoding);
}

// public generated Uno.Data.Xml.XmlEncoding get_Encoding() [instance] :790
int XmlDeclaration::Encoding()
{
    return _Encoding;
}

// public generated void set_Encoding(Uno.Data.Xml.XmlEncoding value) [instance] :790
void XmlDeclaration::Encoding(int value)
{
    _Encoding = value;
}

// public generated string get_Version() [instance] :792
uString* XmlDeclaration::Version()
{
    return _Version;
}

// public generated void set_Version(string value) [instance] :792
void XmlDeclaration::Version(uString* value)
{
    _Version = value;
}

// public XmlDeclaration New() [static] :779
XmlDeclaration* XmlDeclaration::New1()
{
    XmlDeclaration* obj1 = (XmlDeclaration*)uNew(XmlDeclaration_typeof());
    obj1->ctor_3();
    return obj1;
}

// public XmlDeclaration New(string version, Uno.Data.Xml.XmlEncoding encoding) [static] :784
XmlDeclaration* XmlDeclaration::New2(uString* version, int encoding)
{
    XmlDeclaration* obj2 = (XmlDeclaration*)uNew(XmlDeclaration_typeof());
    obj2->ctor_4(version, encoding);
    return obj2;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Data.Xml/0.42.0/source/elements/$.uno
// -------------------------------------------------------------------------------------------------------

// public sealed class XmlDocument :672
// {
static void XmlDocument_build(uType* type)
{
    ::STRINGS[13] = uString::Const("<?xml");
    ::STRINGS[17] = uString::Const("XML declaration allowed only at the start of the document");
    type->SetFields(0,
        ::g::Uno::Data::Xml::XmlDocumentElement_typeof(), offsetof(::g::Uno::Data::Xml::XmlDocument, _DocumentElement), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("get_DocumentElement", NULL, (void*)XmlDocument__get_DocumentElement_fn, 0, false, ::g::Uno::Data::Xml::XmlDocumentElement_typeof(), 0),
        new uFunction("Load", NULL, (void*)XmlDocument__Load_fn, 0, true, type, 1, ::g::Uno::String_typeof()),
        new uFunction("Load", NULL, (void*)XmlDocument__Load1_fn, 0, true, type, 2, ::g::Uno::String_typeof(), ::g::Uno::Data::Xml::ParseOptions_typeof()),
        new uFunction(".ctor", NULL, (void*)XmlDocument__New1_fn, 0, true, type, 0),
        new uFunction("Save", NULL, (void*)XmlDocument__Save_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()->ByRef()));
}

uType* XmlDocument_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(XmlDocument);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Data.Xml.XmlDocument", options);
    type->fp_build_ = XmlDocument_build;
    type->fp_ctor_ = (void*)XmlDocument__New1_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))XmlDocument__ToString_fn;
    return type;
}

// public XmlDocument() :674
void XmlDocument__ctor__fn(XmlDocument* __this)
{
    __this->ctor_();
}

// private static void ApplyParseOptions(Uno.Data.Xml.XmlLinkedNode node, Uno.Data.Xml.ParseOptions parseOptions) :741
void XmlDocument__ApplyParseOptions_fn(::g::Uno::Data::Xml::XmlLinkedNode* node, uint32_t* parseOptions)
{
    XmlDocument::ApplyParseOptions(node, *parseOptions);
}

// public generated Uno.Data.Xml.XmlDocumentElement get_DocumentElement() :679
void XmlDocument__get_DocumentElement_fn(XmlDocument* __this, ::g::Uno::Data::Xml::XmlDocumentElement** __retval)
{
    *__retval = __this->DocumentElement();
}

// private generated void set_DocumentElement(Uno.Data.Xml.XmlDocumentElement value) :679
void XmlDocument__set_DocumentElement_fn(XmlDocument* __this, ::g::Uno::Data::Xml::XmlDocumentElement* value)
{
    __this->DocumentElement(value);
}

// public static Uno.Data.Xml.XmlDocument Load(string xmlString) :695
void XmlDocument__Load_fn(uString* xmlString, XmlDocument** __retval)
{
    *__retval = XmlDocument::Load(xmlString);
}

// public static Uno.Data.Xml.XmlDocument Load(string xmlString, Uno.Data.Xml.ParseOptions parseOptions) :700
void XmlDocument__Load1_fn(uString* xmlString, uint32_t* parseOptions, XmlDocument** __retval)
{
    *__retval = XmlDocument::Load1(xmlString, *parseOptions);
}

// public XmlDocument New() :674
void XmlDocument__New1_fn(XmlDocument** __retval)
{
    *__retval = XmlDocument::New1();
}

// public void Save(string& xmlString) :731
void XmlDocument__Save_fn(XmlDocument* __this, uString** xmlString)
{
    __this->Save(xmlString);
}

// public override sealed string ToString() :736
void XmlDocument__ToString_fn(XmlDocument* __this, uString** __retval)
{
    uStackFrame __("Uno.Data.Xml.XmlDocument", "ToString()");
    return *__retval = uPtr(__this->DocumentElement())->ToString(), void();
}

// public XmlDocument() [instance] :674
void XmlDocument::ctor_()
{
    DocumentElement(::g::Uno::Data::Xml::XmlDocumentElement::New1());
}

// public generated Uno.Data.Xml.XmlDocumentElement get_DocumentElement() [instance] :679
::g::Uno::Data::Xml::XmlDocumentElement* XmlDocument::DocumentElement()
{
    return _DocumentElement;
}

// private generated void set_DocumentElement(Uno.Data.Xml.XmlDocumentElement value) [instance] :679
void XmlDocument::DocumentElement(::g::Uno::Data::Xml::XmlDocumentElement* value)
{
    _DocumentElement = value;
}

// public void Save(string& xmlString) [instance] :731
void XmlDocument::Save(uString** xmlString)
{
    uStackFrame __("Uno.Data.Xml.XmlDocument", "Save(string&)");
    *xmlString = uPtr(DocumentElement())->ToString();
}

// private static void ApplyParseOptions(Uno.Data.Xml.XmlLinkedNode node, Uno.Data.Xml.ParseOptions parseOptions) [static] :741
void XmlDocument::ApplyParseOptions(::g::Uno::Data::Xml::XmlLinkedNode* node, uint32_t parseOptions)
{
    uStackFrame __("Uno.Data.Xml.XmlDocument", "ApplyParseOptions(Uno.Data.Xml.XmlLinkedNode,Uno.Data.Xml.ParseOptions)");
    bool includePI = (parseOptions & 1) == 1;
    bool includeCD = (parseOptions & 4) == 4;
    bool includeDeclaration = (parseOptions & 256) == 256;
    bool includeComment = (parseOptions & 2) == 2;

    for (int i = 0; i < uPtr(uPtr(node)->Children())->Count(); i++)
    {
        ::g::Uno::Data::Xml::XmlLinkedNode* childNode = (::g::Uno::Data::Xml::XmlLinkedNode*)uPtr(uPtr(node)->Children())->Item(i);

        if (((((uPtr(childNode)->NodeType() == 6) && !includePI) || ((uPtr(childNode)->NodeType() == 2) && !includeCD)) || ((uPtr(childNode)->NodeType() == 4) && !includeDeclaration)) || ((uPtr(childNode)->NodeType() == 5) && !includeComment))
        {
            uPtr(uPtr(node)->Children())->Remove(childNode);
            i--;
        }
        else
            XmlDocument::ApplyParseOptions(childNode, parseOptions);
    }
}

// public static Uno.Data.Xml.XmlDocument Load(string xmlString) [static] :695
XmlDocument* XmlDocument::Load(uString* xmlString)
{
    uStackFrame __("Uno.Data.Xml.XmlDocument", "Load(string)");
    return XmlDocument::Load1(xmlString, 4);
}

// public static Uno.Data.Xml.XmlDocument Load(string xmlString, Uno.Data.Xml.ParseOptions parseOptions) [static] :700
XmlDocument* XmlDocument::Load1(uString* xmlString, uint32_t parseOptions)
{
    uStackFrame __("Uno.Data.Xml.XmlDocument", "Load(string,Uno.Data.Xml.ParseOptions)");

    if (::g::Uno::String::IndexOf1(uPtr(xmlString), ::STRINGS[13/*"<?xml"*/], 0) > 0)
        U_THROW(::g::Uno::Data::Xml::XmlException::New4(::STRINGS[17/*"XML declara...*/]));

    parseOptions = parseOptions | 4;
    ::g::Uno::Data::Xml::XmlNodeHandle* rootHandle = ::g::Uno::Data::Xml::XmlNodeImpl::Parse(xmlString);
    XmlDocument* xmlDocument = XmlDocument::New1();

    if ((rootHandle != NULL) && (uPtr(rootHandle)->FirstChild() != NULL))
        ::g::Uno::Data::Xml::XmlNodeHandleConverter::ConvertToXmlNodeTree(uPtr(xmlDocument)->DocumentElement(), uPtr(rootHandle)->FirstChild());

    XmlDocument::ApplyParseOptions(xmlDocument->DocumentElement(), parseOptions);
    return xmlDocument;
}

// public XmlDocument New() [static] :674
XmlDocument* XmlDocument::New1()
{
    XmlDocument* obj1 = (XmlDocument*)uNew(XmlDocument_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Data.Xml/0.42.0/source/elements/$.uno
// -------------------------------------------------------------------------------------------------------

// public sealed class XmlDocumentElement :629
// {
static void XmlDocumentElement_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[1] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Data::Xml::XmlLinkedNode_typeof(), NULL);
    type->SetFields(8);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)XmlDocumentElement__New1_fn, 0, true, type, 0));
}

::g::Uno::Data::Xml::XmlLinkedNode_type* XmlDocumentElement_typeof()
{
    static uSStrong< ::g::Uno::Data::Xml::XmlLinkedNode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Data::Xml::XmlLinkedNode_typeof();
    options.FieldCount = 8;
    options.ObjectSize = sizeof(XmlDocumentElement);
    options.TypeSize = sizeof(::g::Uno::Data::Xml::XmlLinkedNode_type);
    type = (::g::Uno::Data::Xml::XmlLinkedNode_type*)uClassType::New("Uno.Data.Xml.XmlDocumentElement", options);
    type->fp_build_ = XmlDocumentElement_build;
    type->fp_ctor_ = (void*)XmlDocumentElement__New1_fn;
    type->fp_CreateNewInstance = (void(*)(::g::Uno::Data::Xml::XmlLinkedNode*, ::g::Uno::Data::Xml::XmlLinkedNode**))XmlDocumentElement__CreateNewInstance_fn;
    type->fp_GetTextContent = (void(*)(::g::Uno::Data::Xml::XmlLinkedNode*, uString**))XmlDocumentElement__GetTextContent_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))XmlDocumentElement__ToString_fn;
    return type;
}

// public XmlDocumentElement() :631
void XmlDocumentElement__ctor_3_fn(XmlDocumentElement* __this)
{
    __this->ctor_3();
}

// protected override sealed Uno.Data.Xml.XmlLinkedNode CreateNewInstance() :636
void XmlDocumentElement__CreateNewInstance_fn(XmlDocumentElement* __this, ::g::Uno::Data::Xml::XmlLinkedNode** __retval)
{
    return *__retval = XmlDocumentElement::New1(), void();
}

// protected override sealed string GetTextContent() :641
void XmlDocumentElement__GetTextContent_fn(XmlDocumentElement* __this, uString** __retval)
{
    uStackFrame __("Uno.Data.Xml.XmlDocumentElement", "GetTextContent()");
    ::g::Uno::Data::Xml::XmlLinkedNode* ret4;

    for (uObject* enum1 = (uObject*)uPtr(__this->Children())->GetEnumerator(); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[0/*Uno.Collections.IEnumerator*/])); )
    {
        ::g::Uno::Data::Xml::XmlLinkedNode* child = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[1/*Uno.Collections.IEnumerator<Uno.Data.Xml.XmlLinkedNode>*/]), &ret4), ret4);

        if ((uPtr(child)->NodeType() != 4) && (uPtr(child)->NodeType() != 6))
            return *__retval = uPtr(child)->GetTextContent(), void();
    }

    return *__retval = NULL, void();
}

// public XmlDocumentElement New() :631
void XmlDocumentElement__New1_fn(XmlDocumentElement** __retval)
{
    *__retval = XmlDocumentElement::New1();
}

// public override sealed string ToString() :651
void XmlDocumentElement__ToString_fn(XmlDocumentElement* __this, uString** __retval)
{
    uStackFrame __("Uno.Data.Xml.XmlDocumentElement", "ToString()");
    ::g::Uno::Data::Xml::XmlLinkedNode* ret5;
    ::g::Uno::Text::StringBuilder* result = ::g::Uno::Text::StringBuilder::New1();

    for (uObject* enum2 = (uObject*)uPtr(__this->Children())->GetEnumerator(); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum2), ::TYPES[0/*Uno.Collections.IEnumerator*/])); )
    {
        ::g::Uno::Data::Xml::XmlLinkedNode* child = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum2), ::TYPES[1/*Uno.Collections.IEnumerator<Uno.Data.Xml.XmlLinkedNode>*/]), &ret5), ret5);
        uPtr(result)->Append2(::g::Uno::Object::ToString(uPtr(child)));
    }

    return *__retval = result->ToString(), void();
}

// public XmlDocumentElement() [instance] :631
void XmlDocumentElement::ctor_3()
{
    ctor_2();
    NodeType(0);
}

// public XmlDocumentElement New() [static] :631
XmlDocumentElement* XmlDocumentElement::New1()
{
    XmlDocumentElement* obj3 = (XmlDocumentElement*)uNew(XmlDocumentElement_typeof());
    obj3->ctor_3();
    return obj3;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Data.Xml/0.42.0/source/elements/$.uno
// -------------------------------------------------------------------------------------------------------

// public sealed class XmlElement :538
// {
static void XmlElement_build(uType* type)
{
    ::STRINGS[18] = uString::Const(" ");
    ::STRINGS[19] = uString::Const("<");
    ::STRINGS[20] = uString::Const(">");
    ::STRINGS[21] = uString::Const("</");
    ::STRINGS[22] = uString::Const("/>");
    ::TYPES[0] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[1] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Data::Xml::XmlLinkedNode_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Data::Xml::XmlAttribute_typeof(), NULL);
    type->SetFields(8);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)XmlElement__New1_fn, 0, true, type, 0));
}

::g::Uno::Data::Xml::XmlLinkedNode_type* XmlElement_typeof()
{
    static uSStrong< ::g::Uno::Data::Xml::XmlLinkedNode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Data::Xml::XmlLinkedNode_typeof();
    options.FieldCount = 8;
    options.ObjectSize = sizeof(XmlElement);
    options.TypeSize = sizeof(::g::Uno::Data::Xml::XmlLinkedNode_type);
    type = (::g::Uno::Data::Xml::XmlLinkedNode_type*)uClassType::New("Uno.Data.Xml.XmlElement", options);
    type->fp_build_ = XmlElement_build;
    type->fp_ctor_ = (void*)XmlElement__New1_fn;
    type->fp_CreateNewInstance = (void(*)(::g::Uno::Data::Xml::XmlLinkedNode*, ::g::Uno::Data::Xml::XmlLinkedNode**))XmlElement__CreateNewInstance_fn;
    type->fp_GetTextContent = (void(*)(::g::Uno::Data::Xml::XmlLinkedNode*, uString**))XmlElement__GetTextContent_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))XmlElement__ToString_fn;
    type->fp_get_Value = (void(*)(::g::Uno::Data::Xml::XmlNode*, ::g::Uno::Data::Xml::XmlValue**))XmlElement__get_Value_fn;
    type->fp_set_Value = (void(*)(::g::Uno::Data::Xml::XmlNode*, ::g::Uno::Data::Xml::XmlValue*))XmlElement__set_Value_fn;
    return type;
}

// public XmlElement() :540
void XmlElement__ctor_3_fn(XmlElement* __this)
{
    __this->ctor_3();
}

// private string ChildrenToString() :608
void XmlElement__ChildrenToString_fn(XmlElement* __this, uString** __retval)
{
    *__retval = __this->ChildrenToString();
}

// protected override sealed Uno.Data.Xml.XmlLinkedNode CreateNewInstance() :545
void XmlElement__CreateNewInstance_fn(XmlElement* __this, ::g::Uno::Data::Xml::XmlLinkedNode** __retval)
{
    return *__retval = XmlElement::New1(), void();
}

// protected override sealed string GetTextContent() :550
void XmlElement__GetTextContent_fn(XmlElement* __this, uString** __retval)
{
    uStackFrame __("Uno.Data.Xml.XmlElement", "GetTextContent()");
    ::g::Uno::Data::Xml::XmlLinkedNode* ret6;
    ::g::Uno::Text::StringBuilder* strBuilder = ::g::Uno::Text::StringBuilder::New1();
    bool needWhitespaceBetweenContents = false;

    for (uObject* enum1 = (uObject*)uPtr(__this->Children())->GetEnumerator(); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[0/*Uno.Collections.IEnumerator*/])); )
    {
        ::g::Uno::Data::Xml::XmlLinkedNode* child = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[1/*Uno.Collections.IEnumerator<Uno.Data.Xml.XmlLinkedNode>*/]), &ret6), ret6);

        if ((uPtr(child)->NodeType() != 5) && (uPtr(child)->NodeType() != 6))
        {
            uString* childTextContent = uPtr(child)->GetTextContent();

            if (!::g::Uno::String::IsNullOrEmpty(childTextContent))
            {
                if ((uPtr(childTextContent)->Item(0) != ' ') && needWhitespaceBetweenContents)
                    uPtr(strBuilder)->Append2(::STRINGS[18/*" "*/]);

                uPtr(strBuilder)->Append2(childTextContent);
                needWhitespaceBetweenContents = uPtr(childTextContent)->Item(uPtr(childTextContent)->Length() - 1) != ' ';
            }
        }
    }

    return *__retval = strBuilder->ToString(), void();
}

// public XmlElement New() :540
void XmlElement__New1_fn(XmlElement** __retval)
{
    *__retval = XmlElement::New1();
}

// public override sealed string ToString() :573
void XmlElement__ToString_fn(XmlElement* __this, uString** __retval)
{
    uStackFrame __("Uno.Data.Xml.XmlElement", "ToString()");
    ::g::Uno::Data::Xml::XmlAttribute* ret7;
    ::g::Uno::Text::StringBuilder* result = ::g::Uno::Text::StringBuilder::New1();
    result->Append2(::g::Uno::String::op_Addition2(::STRINGS[19/*"<"*/], __this->Name()));

    for (uObject* enum2 = (uObject*)uPtr(__this->Attributes())->GetEnumerator(); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum2), ::TYPES[0/*Uno.Collections.IEnumerator*/])); )
    {
        ::g::Uno::Data::Xml::XmlAttribute* a = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum2), ::TYPES[2/*Uno.Collections.IEnumerator<Uno.Data.Xml.XmlAttribute>*/]), &ret7), ret7);
        uPtr(result)->Append2(::g::Uno::String::op_Addition2(::STRINGS[18/*" "*/], uPtr(a)->ToString()));
    }

    if (__this->HasChildren())
        uPtr(result)->Append2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[20/*">"*/], __this->ChildrenToString()), ::STRINGS[21/*"</"*/]), __this->Name()), ::STRINGS[20/*">"*/]));
    else
        uPtr(result)->Append2(::STRINGS[22/*"/>"*/]);

    return *__retval = result->ToString(), void();
}

// public override sealed Uno.Data.Xml.XmlValue get_Value() :596
void XmlElement__get_Value_fn(XmlElement* __this, ::g::Uno::Data::Xml::XmlValue** __retval)
{
    uStackFrame __("Uno.Data.Xml.XmlElement", "get_Value()");
    ::g::Uno::Data::Xml::XmlValue* ret8;

    if ((uPtr(__this->Children())->Count() == 1) && (uPtr(__this->FirstChild())->NodeType() == 1))
        return *__retval = uPtr(__this->FirstChild())->Value(), void();

    return *__retval = (::g::Uno::Data::Xml::XmlNode__get_Value_fn(__this, &ret8), ret8), void();
}

// public override sealed void set_Value(Uno.Data.Xml.XmlValue value) :602
void XmlElement__set_Value_fn(XmlElement* __this, ::g::Uno::Data::Xml::XmlValue* value)
{
    ::g::Uno::Data::Xml::XmlNode__set_Value_fn(__this, value);
}

// public XmlElement() [instance] :540
void XmlElement::ctor_3()
{
    ctor_2();
    NodeType(3);
}

// private string ChildrenToString() [instance] :608
uString* XmlElement::ChildrenToString()
{
    uStackFrame __("Uno.Data.Xml.XmlElement", "ChildrenToString()");
    ::g::Uno::Data::Xml::XmlLinkedNode* ret5;
    ::g::Uno::Text::StringBuilder* strBuilder = ::g::Uno::Text::StringBuilder::New1();

    for (uObject* enum3 = (uObject*)uPtr(Children())->GetEnumerator(); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum3), ::TYPES[0/*Uno.Collections.IEnumerator*/])); )
    {
        ::g::Uno::Data::Xml::XmlLinkedNode* child = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum3), ::TYPES[1/*Uno.Collections.IEnumerator<Uno.Data.Xml.XmlLinkedNode>*/]), &ret5), ret5);
        uPtr(strBuilder)->Append2(::g::Uno::Object::ToString(uPtr(child)));
    }

    return strBuilder->ToString();
}

// public XmlElement New() [static] :540
XmlElement* XmlElement::New1()
{
    XmlElement* obj4 = (XmlElement*)uNew(XmlElement_typeof());
    obj4->ctor_3();
    return obj4;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Data.Xml/0.42.0/source/$.uno
// ----------------------------------------------------------------------------------------------

// public enum XmlEncoding :219
uEnumType* XmlEncoding_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Data.Xml.XmlEncoding", ::g::Uno::Int_typeof(), 10);
    type->SetLiterals(
        "Auto", 0LL,
        "Utf8", 1LL,
        "Utf16_le", 2LL,
        "Utf16_be", 3LL,
        "Utf16", 4LL,
        "Utf32_le", 5LL,
        "Utf32_be", 6LL,
        "Utf32", 7LL,
        "Wchar", 8LL,
        "Latin1", 9LL);
    return type;
}

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Data.Xml/0.42.0/source/helpers/$.uno
// ------------------------------------------------------------------------------------------------------

// internal sealed class XmlEncodingHelper :94
// {
static void XmlEncodingHelper_build(uType* type)
{
    ::STRINGS[23] = uString::Const("UTF-8");
    ::STRINGS[24] = uString::Const("UTF-16");
    ::STRINGS[25] = uString::Const("UTF-16LE");
    ::STRINGS[26] = uString::Const("UTF-16BE");
    ::STRINGS[27] = uString::Const("UTF-32");
    ::STRINGS[28] = uString::Const("UTF-32LE");
    ::STRINGS[29] = uString::Const("UTF-32BE");
    ::STRINGS[30] = uString::Const("Latin1");
    ::STRINGS[31] = uString::Const("Wchar");
    ::STRINGS[32] = uString::Const("utf-8");
    ::STRINGS[33] = uString::Const("utf-16be");
    ::STRINGS[34] = uString::Const("utf-16le");
    ::STRINGS[35] = uString::Const("utf-16");
    ::STRINGS[36] = uString::Const("utf-32be");
    ::STRINGS[37] = uString::Const("utf-32le");
    ::STRINGS[38] = uString::Const("utf-32");
    ::STRINGS[39] = uString::Const("latin1");
    ::STRINGS[40] = uString::Const("l1");
    ::STRINGS[41] = uString::Const("iso-ir-100");
    ::STRINGS[42] = uString::Const("csisolatin1");
    ::STRINGS[43] = uString::Const("cp819");
    ::STRINGS[44] = uString::Const("wchar");
    ::TYPES[3] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Data::Xml::XmlEncoding_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[3/*Uno.Collections.Dictionary<string, Uno.Data.Xml.XmlEncoding>*/], (uintptr_t)&::g::Uno::Data::Xml::XmlEncodingHelper::_encodingDictionary_, uFieldFlagsStatic);
}

uType* XmlEncodingHelper_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(XmlEncodingHelper);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Data.Xml.XmlEncodingHelper", options);
    type->fp_build_ = XmlEncodingHelper_build;
    return type;
}

// public static Uno.Data.Xml.XmlEncoding ConvertFromString(string encodingStr) :109
void XmlEncodingHelper__ConvertFromString_fn(uString* encodingStr, int* __retval)
{
    *__retval = XmlEncodingHelper::ConvertFromString(encodingStr);
}

// public static string ConvertToString(Uno.Data.Xml.XmlEncoding encoding) :123
void XmlEncodingHelper__ConvertToString_fn(int* encoding, uString** __retval)
{
    *__retval = XmlEncodingHelper::ConvertToString(*encoding);
}

// private static Uno.Collections.Dictionary<string, Uno.Data.Xml.XmlEncoding> get_EncodingDictionary() :99
void XmlEncodingHelper__get_EncodingDictionary_fn(::g::Uno::Collections::Dictionary** __retval)
{
    *__retval = XmlEncodingHelper::EncodingDictionary();
}

// private static void FillEncodingDictionary() :150
void XmlEncodingHelper__FillEncodingDictionary_fn()
{
    XmlEncodingHelper::FillEncodingDictionary();
}

uSStrong< ::g::Uno::Collections::Dictionary*> XmlEncodingHelper::_encodingDictionary_;

// public static Uno.Data.Xml.XmlEncoding ConvertFromString(string encodingStr) [static] :109
int XmlEncodingHelper::ConvertFromString(uString* encodingStr)
{
    uStackFrame __("Uno.Data.Xml.XmlEncodingHelper", "ConvertFromString(string)");
    bool ret2;
    int ret3;

    if (::g::Uno::String::IsNullOrEmpty(encodingStr))
        return 0;

    uString* encodingStrLowerCase = ::g::Uno::String::ToLower(uPtr(encodingStr));

    if (!(::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(XmlEncodingHelper::EncodingDictionary()), encodingStrLowerCase, &ret2), ret2))
        return 0;

    return (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(XmlEncodingHelper::EncodingDictionary()), encodingStrLowerCase, &ret3), ret3);
}

// public static string ConvertToString(Uno.Data.Xml.XmlEncoding encoding) [static] :123
uString* XmlEncodingHelper::ConvertToString(int encoding)
{
    switch (encoding)
    {
        case 1:
            return ::STRINGS[23/*"UTF-8"*/];
        case 4:
            return ::STRINGS[24/*"UTF-16"*/];
        case 2:
            return ::STRINGS[25/*"UTF-16LE"*/];
        case 3:
            return ::STRINGS[26/*"UTF-16BE"*/];
        case 7:
            return ::STRINGS[27/*"UTF-32"*/];
        case 5:
            return ::STRINGS[28/*"UTF-32LE"*/];
        case 6:
            return ::STRINGS[29/*"UTF-32BE"*/];
        case 9:
            return ::STRINGS[30/*"Latin1"*/];
        case 8:
            return ::STRINGS[31/*"Wchar"*/];
        default:
            return NULL;
    }
}

// private static void FillEncodingDictionary() [static] :150
void XmlEncodingHelper::FillEncodingDictionary()
{
    uStackFrame __("Uno.Data.Xml.XmlEncodingHelper", "FillEncodingDictionary()");
    XmlEncodingHelper::_encodingDictionary_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[3/*Uno.Collections.Dictionary<string, Uno.Data.Xml.XmlEncoding>*/]));
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(XmlEncodingHelper::_encodingDictionary_), ::STRINGS[32/*"utf-8"*/], uCRef<int>(1));
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(XmlEncodingHelper::_encodingDictionary_), ::STRINGS[33/*"utf-16be"*/], uCRef<int>(3));
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(XmlEncodingHelper::_encodingDictionary_), ::STRINGS[34/*"utf-16le"*/], uCRef<int>(2));
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(XmlEncodingHelper::_encodingDictionary_), ::STRINGS[35/*"utf-16"*/], uCRef<int>(4));
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(XmlEncodingHelper::_encodingDictionary_), ::STRINGS[36/*"utf-32be"*/], uCRef<int>(6));
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(XmlEncodingHelper::_encodingDictionary_), ::STRINGS[37/*"utf-32le"*/], uCRef<int>(5));
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(XmlEncodingHelper::_encodingDictionary_), ::STRINGS[38/*"utf-32"*/], uCRef<int>(7));
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(XmlEncodingHelper::_encodingDictionary_), ::STRINGS[39/*"latin1"*/], uCRef<int>(9));
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(XmlEncodingHelper::_encodingDictionary_), ::STRINGS[40/*"l1"*/], uCRef<int>(9));
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(XmlEncodingHelper::_encodingDictionary_), ::STRINGS[41/*"iso-ir-100"*/], uCRef<int>(9));
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(XmlEncodingHelper::_encodingDictionary_), ::STRINGS[42/*"csisolatin1"*/], uCRef<int>(9));
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(XmlEncodingHelper::_encodingDictionary_), ::STRINGS[43/*"cp819"*/], uCRef<int>(9));
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(XmlEncodingHelper::_encodingDictionary_), ::STRINGS[44/*"wchar"*/], uCRef<int>(8));
}

// private static Uno.Collections.Dictionary<string, Uno.Data.Xml.XmlEncoding> get_EncodingDictionary() [static] :99
::g::Uno::Collections::Dictionary* XmlEncodingHelper::EncodingDictionary()
{
    uStackFrame __("Uno.Data.Xml.XmlEncodingHelper", "get_EncodingDictionary()");

    if (XmlEncodingHelper::_encodingDictionary_ == NULL)
        XmlEncodingHelper::FillEncodingDictionary();

    return XmlEncodingHelper::_encodingDictionary_;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Data.Xml/0.42.0/source/$.uno
// ----------------------------------------------------------------------------------------------

// public sealed class XmlException :8
// {
static void XmlException_build(uType* type)
{
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)XmlException__New4_fn, 0, true, type, 1, ::g::Uno::String_typeof()));
}

::g::Uno::Exception_type* XmlException_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(XmlException);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Uno.Data.Xml.XmlException", options);
    type->fp_build_ = XmlException_build;
    return type;
}

// public XmlException(string message) :10
void XmlException__ctor_3_fn(XmlException* __this, uString* message)
{
    __this->ctor_3(message);
}

// public XmlException New(string message) :10
void XmlException__New4_fn(uString* message, XmlException** __retval)
{
    *__retval = XmlException::New4(message);
}

// public XmlException(string message) [instance] :10
void XmlException::ctor_3(uString* message)
{
    ctor_1(message);
}

// public XmlException New(string message) [static] :10
XmlException* XmlException::New4(uString* message)
{
    XmlException* obj1 = (XmlException*)uNew(XmlException_typeof());
    obj1->ctor_3(message);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Data.Xml/0.42.0/source/elements/$.uno
// -------------------------------------------------------------------------------------------------------

// public abstract class XmlLinkedNode :367
// {
static void XmlLinkedNode_build(uType* type)
{
    ::STRINGS[45] = uString::Const("Setting TextContent property is only allowed for XmlElement node");
    ::TYPES[0] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[2] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Data::Xml::XmlAttribute_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type, NULL);
    ::TYPES[4] = ::g::Uno::Collections::List_typeof()->MakeType(type, NULL);
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(type, NULL);
    ::TYPES[6] = ::g::Uno::Collections::IList_typeof()->MakeType(type, NULL);
    type->SetFields(3,
        ::g::Uno::Data::Xml::XmlAttributeCollection_typeof(), offsetof(::g::Uno::Data::Xml::XmlLinkedNode, _Attributes), 0,
        ::g::Uno::Data::Xml::XmlLinkedNodeCollection_typeof(), offsetof(::g::Uno::Data::Xml::XmlLinkedNode, _Children), 0,
        type, offsetof(::g::Uno::Data::Xml::XmlLinkedNode, _NextSibling), 0,
        type, offsetof(::g::Uno::Data::Xml::XmlLinkedNode, _Parent), 0,
        type, offsetof(::g::Uno::Data::Xml::XmlLinkedNode, _PreviousSibling), 0);
    type->Reflection.SetFunctions(18,
        new uFunction("AddAfterSelf", NULL, (void*)XmlLinkedNode__AddAfterSelf_fn, 0, false, uVoid_typeof(), 1, type),
        new uFunction("AddBeforeSelf", NULL, (void*)XmlLinkedNode__AddBeforeSelf_fn, 0, false, uVoid_typeof(), 1, type),
        new uFunction("AppendChild", NULL, (void*)XmlLinkedNode__AppendChild_fn, 0, false, uVoid_typeof(), 1, type),
        new uFunction("get_Attributes", NULL, (void*)XmlLinkedNode__get_Attributes_fn, 0, false, ::g::Uno::Data::Xml::XmlAttributeCollection_typeof(), 0),
        new uFunction("get_Children", NULL, (void*)XmlLinkedNode__get_Children_fn, 0, false, ::g::Uno::Data::Xml::XmlLinkedNodeCollection_typeof(), 0),
        new uFunction("Clone", NULL, (void*)XmlLinkedNode__Clone_fn, 0, false, type, 0),
        new uFunction("FindAllByName", NULL, (void*)XmlLinkedNode__FindAllByName_fn, 0, false, ::TYPES[6/*Uno.Collections.IList<Uno.Data.Xml.XmlLinkedNode>*/], 2, ::g::Uno::String_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("FindByName", NULL, (void*)XmlLinkedNode__FindByName_fn, 0, false, type, 2, ::g::Uno::String_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("get_FirstChild", NULL, (void*)XmlLinkedNode__get_FirstChild_fn, 0, false, type, 0),
        new uFunction("get_HasAttributes", NULL, (void*)XmlLinkedNode__get_HasAttributes_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_HasChildren", NULL, (void*)XmlLinkedNode__get_HasChildren_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_LastChild", NULL, (void*)XmlLinkedNode__get_LastChild_fn, 0, false, type, 0),
        new uFunction("get_NextSibling", NULL, (void*)XmlLinkedNode__get_NextSibling_fn, 0, false, type, 0),
        new uFunction("get_Parent", NULL, (void*)XmlLinkedNode__get_Parent_fn, 0, false, type, 0),
        new uFunction("PrependChild", NULL, (void*)XmlLinkedNode__PrependChild_fn, 0, false, uVoid_typeof(), 1, type),
        new uFunction("get_PreviousSibling", NULL, (void*)XmlLinkedNode__get_PreviousSibling_fn, 0, false, type, 0),
        new uFunction("get_TextContent", NULL, (void*)XmlLinkedNode__get_TextContent_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_TextContent", NULL, (void*)XmlLinkedNode__set_TextContent_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()));
}

XmlLinkedNode_type* XmlLinkedNode_typeof()
{
    static uSStrong<XmlLinkedNode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Data::Xml::XmlNode_typeof();
    options.FieldCount = 8;
    options.ObjectSize = sizeof(XmlLinkedNode);
    options.TypeSize = sizeof(XmlLinkedNode_type);
    type = (XmlLinkedNode_type*)uClassType::New("Uno.Data.Xml.XmlLinkedNode", options);
    type->fp_build_ = XmlLinkedNode_build;
    type->fp_GetTextContent = XmlLinkedNode__GetTextContent_fn;
    return type;
}

// protected XmlLinkedNode() :369
void XmlLinkedNode__ctor_2_fn(XmlLinkedNode* __this)
{
    __this->ctor_2();
}

// public void AddAfterSelf(Uno.Data.Xml.XmlLinkedNode node) :420
void XmlLinkedNode__AddAfterSelf_fn(XmlLinkedNode* __this, XmlLinkedNode* node)
{
    __this->AddAfterSelf(node);
}

// public void AddBeforeSelf(Uno.Data.Xml.XmlLinkedNode node) :442
void XmlLinkedNode__AddBeforeSelf_fn(XmlLinkedNode* __this, XmlLinkedNode* node)
{
    __this->AddBeforeSelf(node);
}

// public void AppendChild(Uno.Data.Xml.XmlLinkedNode node) :410
void XmlLinkedNode__AppendChild_fn(XmlLinkedNode* __this, XmlLinkedNode* node)
{
    __this->AppendChild(node);
}

// public generated Uno.Data.Xml.XmlAttributeCollection get_Attributes() :381
void XmlLinkedNode__get_Attributes_fn(XmlLinkedNode* __this, ::g::Uno::Data::Xml::XmlAttributeCollection** __retval)
{
    *__retval = __this->Attributes();
}

// private generated void set_Attributes(Uno.Data.Xml.XmlAttributeCollection value) :381
void XmlLinkedNode__set_Attributes_fn(XmlLinkedNode* __this, ::g::Uno::Data::Xml::XmlAttributeCollection* value)
{
    __this->Attributes(value);
}

// public generated Uno.Data.Xml.XmlLinkedNodeCollection get_Children() :377
void XmlLinkedNode__get_Children_fn(XmlLinkedNode* __this, ::g::Uno::Data::Xml::XmlLinkedNodeCollection** __retval)
{
    *__retval = __this->Children();
}

// private generated void set_Children(Uno.Data.Xml.XmlLinkedNodeCollection value) :377
void XmlLinkedNode__set_Children_fn(XmlLinkedNode* __this, ::g::Uno::Data::Xml::XmlLinkedNodeCollection* value)
{
    __this->Children(value);
}

// public Uno.Data.Xml.XmlLinkedNode Clone() :481
void XmlLinkedNode__Clone_fn(XmlLinkedNode* __this, XmlLinkedNode** __retval)
{
    *__retval = __this->Clone();
}

// protected void CloneChildren(Uno.Data.Xml.XmlLinkedNode newNode, Uno.Data.Xml.XmlLinkedNode existingNode) :497
void XmlLinkedNode__CloneChildren_fn(XmlLinkedNode* __this, XmlLinkedNode* newNode, XmlLinkedNode* existingNode)
{
    __this->CloneChildren(newNode, existingNode);
}

// public Uno.Collections.IList<Uno.Data.Xml.XmlLinkedNode> FindAllByName(string name, [bool includeNestedNodes]) :474
void XmlLinkedNode__FindAllByName_fn(XmlLinkedNode* __this, uString* name, bool* includeNestedNodes, uObject** __retval)
{
    *__retval = __this->FindAllByName(name, *includeNestedNodes);
}

// public Uno.Data.Xml.XmlLinkedNode FindByName(string name, [bool includeNestedNodes]) :464
void XmlLinkedNode__FindByName_fn(XmlLinkedNode* __this, uString* name, bool* includeNestedNodes, XmlLinkedNode** __retval)
{
    *__retval = __this->FindByName(name, *includeNestedNodes);
}

// public Uno.Data.Xml.XmlLinkedNode get_FirstChild() :389
void XmlLinkedNode__get_FirstChild_fn(XmlLinkedNode* __this, XmlLinkedNode** __retval)
{
    *__retval = __this->FirstChild();
}

// protected virtual string GetTextContent() :505
void XmlLinkedNode__GetTextContent_fn(XmlLinkedNode* __this, uString** __retval)
{
    uStackFrame __("Uno.Data.Xml.XmlLinkedNode", "GetTextContent()");
    return *__retval = uPtr(__this->Value())->AsString(), void();
}

// public bool get_HasAttributes() :383
void XmlLinkedNode__get_HasAttributes_fn(XmlLinkedNode* __this, bool* __retval)
{
    *__retval = __this->HasAttributes();
}

// public bool get_HasChildren() :379
void XmlLinkedNode__get_HasChildren_fn(XmlLinkedNode* __this, bool* __retval)
{
    *__retval = __this->HasChildren();
}

// public Uno.Data.Xml.XmlLinkedNode get_LastChild() :391
void XmlLinkedNode__get_LastChild_fn(XmlLinkedNode* __this, XmlLinkedNode** __retval)
{
    *__retval = __this->LastChild();
}

// public generated Uno.Data.Xml.XmlLinkedNode get_NextSibling() :385
void XmlLinkedNode__get_NextSibling_fn(XmlLinkedNode* __this, XmlLinkedNode** __retval)
{
    *__retval = __this->NextSibling();
}

// internal generated void set_NextSibling(Uno.Data.Xml.XmlLinkedNode value) :385
void XmlLinkedNode__set_NextSibling_fn(XmlLinkedNode* __this, XmlLinkedNode* value)
{
    __this->NextSibling(value);
}

// public generated Uno.Data.Xml.XmlLinkedNode get_Parent() :375
void XmlLinkedNode__get_Parent_fn(XmlLinkedNode* __this, XmlLinkedNode** __retval)
{
    *__retval = __this->Parent();
}

// internal generated void set_Parent(Uno.Data.Xml.XmlLinkedNode value) :375
void XmlLinkedNode__set_Parent_fn(XmlLinkedNode* __this, XmlLinkedNode* value)
{
    __this->Parent(value);
}

// public void PrependChild(Uno.Data.Xml.XmlLinkedNode node) :415
void XmlLinkedNode__PrependChild_fn(XmlLinkedNode* __this, XmlLinkedNode* node)
{
    __this->PrependChild(node);
}

// public generated Uno.Data.Xml.XmlLinkedNode get_PreviousSibling() :387
void XmlLinkedNode__get_PreviousSibling_fn(XmlLinkedNode* __this, XmlLinkedNode** __retval)
{
    *__retval = __this->PreviousSibling();
}

// internal generated void set_PreviousSibling(Uno.Data.Xml.XmlLinkedNode value) :387
void XmlLinkedNode__set_PreviousSibling_fn(XmlLinkedNode* __this, XmlLinkedNode* value)
{
    __this->PreviousSibling(value);
}

// private void RecursiveSearch(Uno.Collections.List<Uno.Data.Xml.XmlLinkedNode> res, Uno.Data.Xml.XmlLinkedNode node, string name, bool includeNestedNodes) :512
void XmlLinkedNode__RecursiveSearch_fn(XmlLinkedNode* __this, ::g::Uno::Collections::List* res, XmlLinkedNode* node, uString* name, bool* includeNestedNodes)
{
    __this->RecursiveSearch(res, node, name, *includeNestedNodes);
}

// public string get_TextContent() :395
void XmlLinkedNode__get_TextContent_fn(XmlLinkedNode* __this, uString** __retval)
{
    *__retval = __this->TextContent();
}

// public void set_TextContent(string value) :400
void XmlLinkedNode__set_TextContent_fn(XmlLinkedNode* __this, uString* value)
{
    __this->TextContent(value);
}

// protected XmlLinkedNode() [instance] :369
void XmlLinkedNode::ctor_2()
{
    ctor_();
    Children(::g::Uno::Data::Xml::XmlLinkedNodeCollection::New1(this));
    Attributes(::g::Uno::Data::Xml::XmlAttributeCollection::New1(this));
}

// public void AddAfterSelf(Uno.Data.Xml.XmlLinkedNode node) [instance] :420
void XmlLinkedNode::AddAfterSelf(XmlLinkedNode* node)
{
    uStackFrame __("Uno.Data.Xml.XmlLinkedNode", "AddAfterSelf(Uno.Data.Xml.XmlLinkedNode)");

    if (Parent() != NULL)
    {
        if (NextSibling() == NULL)
            uPtr(Parent())->AppendChild(node);
        else

            for (int index = 0; index < uPtr(uPtr(Parent())->Children())->Count(); index++)
                if (((XmlLinkedNode*)uPtr(uPtr(Parent())->Children())->Item(index)) == this)
                {
                    uPtr(uPtr(Parent())->Children())->Insert(index + 1, node);
                    break;
                }
    }
}

// public void AddBeforeSelf(Uno.Data.Xml.XmlLinkedNode node) [instance] :442
void XmlLinkedNode::AddBeforeSelf(XmlLinkedNode* node)
{
    uStackFrame __("Uno.Data.Xml.XmlLinkedNode", "AddBeforeSelf(Uno.Data.Xml.XmlLinkedNode)");

    if (Parent() != NULL)
    {
        if (PreviousSibling() == NULL)
            uPtr(Parent())->PrependChild(node);
        else

            for (int index = 0; index < uPtr(uPtr(Parent())->Children())->Count(); index++)
                if (((XmlLinkedNode*)uPtr(uPtr(Parent())->Children())->Item(index)) == this)
                {
                    uPtr(uPtr(Parent())->Children())->Insert(index, node);
                    break;
                }
    }
}

// public void AppendChild(Uno.Data.Xml.XmlLinkedNode node) [instance] :410
void XmlLinkedNode::AppendChild(XmlLinkedNode* node)
{
    uStackFrame __("Uno.Data.Xml.XmlLinkedNode", "AppendChild(Uno.Data.Xml.XmlLinkedNode)");
    uPtr(Children())->Add(node);
}

// public generated Uno.Data.Xml.XmlAttributeCollection get_Attributes() [instance] :381
::g::Uno::Data::Xml::XmlAttributeCollection* XmlLinkedNode::Attributes()
{
    return _Attributes;
}

// private generated void set_Attributes(Uno.Data.Xml.XmlAttributeCollection value) [instance] :381
void XmlLinkedNode::Attributes(::g::Uno::Data::Xml::XmlAttributeCollection* value)
{
    _Attributes = value;
}

// public generated Uno.Data.Xml.XmlLinkedNodeCollection get_Children() [instance] :377
::g::Uno::Data::Xml::XmlLinkedNodeCollection* XmlLinkedNode::Children()
{
    return _Children;
}

// private generated void set_Children(Uno.Data.Xml.XmlLinkedNodeCollection value) [instance] :377
void XmlLinkedNode::Children(::g::Uno::Data::Xml::XmlLinkedNodeCollection* value)
{
    _Children = value;
}

// public Uno.Data.Xml.XmlLinkedNode Clone() [instance] :481
XmlLinkedNode* XmlLinkedNode::Clone()
{
    uStackFrame __("Uno.Data.Xml.XmlLinkedNode", "Clone()");
    ::g::Uno::Data::Xml::XmlAttribute* ret4;
    XmlLinkedNode* newNode = CreateNewInstance();
    uPtr(newNode)->Name(Name());
    newNode->Value(::g::Uno::Data::Xml::XmlValue::New7(uPtr(Value())->AsString()));

    for (uObject* enum1 = (uObject*)uPtr(Attributes())->GetEnumerator(); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[0/*Uno.Collections.IEnumerator*/])); )
    {
        ::g::Uno::Data::Xml::XmlAttribute* attribute = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[2/*Uno.Collections.IEnumerator<Uno.Data.Xml.XmlAttribute>*/]), &ret4), ret4);
        uPtr(uPtr(newNode)->Attributes())->Add(uPtr(attribute)->Clone());
    }

    CloneChildren(newNode, this);
    return newNode;
}

// protected void CloneChildren(Uno.Data.Xml.XmlLinkedNode newNode, Uno.Data.Xml.XmlLinkedNode existingNode) [instance] :497
void XmlLinkedNode::CloneChildren(XmlLinkedNode* newNode, XmlLinkedNode* existingNode)
{
    uStackFrame __("Uno.Data.Xml.XmlLinkedNode", "CloneChildren(Uno.Data.Xml.XmlLinkedNode,Uno.Data.Xml.XmlLinkedNode)");
    XmlLinkedNode* ret5;

    for (uObject* enum2 = (uObject*)uPtr(uPtr(existingNode)->Children())->GetEnumerator(); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum2), ::TYPES[0/*Uno.Collections.IEnumerator*/])); )
    {
        XmlLinkedNode* child = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum2), ::TYPES[1/*Uno.Collections.IEnumerator<Uno.Data.Xml.XmlLinkedNode>*/]), &ret5), ret5);
        uPtr(newNode)->AppendChild(uPtr(child)->Clone());
    }
}

// public Uno.Collections.IList<Uno.Data.Xml.XmlLinkedNode> FindAllByName(string name, [bool includeNestedNodes]) [instance] :474
uObject* XmlLinkedNode::FindAllByName(uString* name, bool includeNestedNodes)
{
    uStackFrame __("Uno.Data.Xml.XmlLinkedNode", "FindAllByName(string,[bool])");
    ::g::Uno::Collections::List* res = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[4/*Uno.Collections.List<Uno.Data.Xml.XmlLinkedNode>*/]);
    RecursiveSearch(res, this, name, includeNestedNodes);
    return (uObject*)res;
}

// public Uno.Data.Xml.XmlLinkedNode FindByName(string name, [bool includeNestedNodes]) [instance] :464
XmlLinkedNode* XmlLinkedNode::FindByName(uString* name, bool includeNestedNodes)
{
    uStackFrame __("Uno.Data.Xml.XmlLinkedNode", "FindByName(string,[bool])");
    XmlLinkedNode* ret6;
    uObject* nodes = FindAllByName(name, includeNestedNodes);

    if (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(nodes), ::TYPES[5/*Uno.Collections.ICollection<Uno.Data.Xml.XmlLinkedNode>*/])) > 0)
        return (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(nodes), ::TYPES[6/*Uno.Collections.IList<Uno.Data.Xml.XmlLinkedNode>*/]), uCRef<int>(0), &ret6), ret6);

    return NULL;
}

// public Uno.Data.Xml.XmlLinkedNode get_FirstChild() [instance] :389
XmlLinkedNode* XmlLinkedNode::FirstChild()
{
    uStackFrame __("Uno.Data.Xml.XmlLinkedNode", "get_FirstChild()");
    return (XmlLinkedNode*)uPtr(Children())->FirstChild();
}

// public bool get_HasAttributes() [instance] :383
bool XmlLinkedNode::HasAttributes()
{
    uStackFrame __("Uno.Data.Xml.XmlLinkedNode", "get_HasAttributes()");
    return uPtr(Attributes())->HasChildren();
}

// public bool get_HasChildren() [instance] :379
bool XmlLinkedNode::HasChildren()
{
    uStackFrame __("Uno.Data.Xml.XmlLinkedNode", "get_HasChildren()");
    return uPtr(Children())->HasChildren();
}

// public Uno.Data.Xml.XmlLinkedNode get_LastChild() [instance] :391
XmlLinkedNode* XmlLinkedNode::LastChild()
{
    uStackFrame __("Uno.Data.Xml.XmlLinkedNode", "get_LastChild()");
    return (XmlLinkedNode*)uPtr(Children())->LastChild();
}

// public generated Uno.Data.Xml.XmlLinkedNode get_NextSibling() [instance] :385
XmlLinkedNode* XmlLinkedNode::NextSibling()
{
    return _NextSibling;
}

// internal generated void set_NextSibling(Uno.Data.Xml.XmlLinkedNode value) [instance] :385
void XmlLinkedNode::NextSibling(XmlLinkedNode* value)
{
    _NextSibling = value;
}

// public generated Uno.Data.Xml.XmlLinkedNode get_Parent() [instance] :375
XmlLinkedNode* XmlLinkedNode::Parent()
{
    return _Parent;
}

// internal generated void set_Parent(Uno.Data.Xml.XmlLinkedNode value) [instance] :375
void XmlLinkedNode::Parent(XmlLinkedNode* value)
{
    _Parent = value;
}

// public void PrependChild(Uno.Data.Xml.XmlLinkedNode node) [instance] :415
void XmlLinkedNode::PrependChild(XmlLinkedNode* node)
{
    uStackFrame __("Uno.Data.Xml.XmlLinkedNode", "PrependChild(Uno.Data.Xml.XmlLinkedNode)");
    uPtr(Children())->Insert(0, node);
}

// public generated Uno.Data.Xml.XmlLinkedNode get_PreviousSibling() [instance] :387
XmlLinkedNode* XmlLinkedNode::PreviousSibling()
{
    return _PreviousSibling;
}

// internal generated void set_PreviousSibling(Uno.Data.Xml.XmlLinkedNode value) [instance] :387
void XmlLinkedNode::PreviousSibling(XmlLinkedNode* value)
{
    _PreviousSibling = value;
}

// private void RecursiveSearch(Uno.Collections.List<Uno.Data.Xml.XmlLinkedNode> res, Uno.Data.Xml.XmlLinkedNode node, string name, bool includeNestedNodes) [instance] :512
void XmlLinkedNode::RecursiveSearch(::g::Uno::Collections::List* res, XmlLinkedNode* node, uString* name, bool includeNestedNodes)
{
    uStackFrame __("Uno.Data.Xml.XmlLinkedNode", "RecursiveSearch(Uno.Collections.List<Uno.Data.Xml.XmlLinkedNode>,Uno.Data.Xml.XmlLinkedNode,string,bool)");
    XmlLinkedNode* ret7;

    for (uObject* enum3 = (uObject*)uPtr(uPtr(node)->Children())->GetEnumerator(); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum3), ::TYPES[0/*Uno.Collections.IEnumerator*/])); )
    {
        XmlLinkedNode* child = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum3), ::TYPES[1/*Uno.Collections.IEnumerator<Uno.Data.Xml.XmlLinkedNode>*/]), &ret7), ret7);

        if (::g::Uno::String::op_Equality(uPtr(child)->Name(), name))
            ::g::Uno::Collections::List__Add_fn(uPtr(res), child);

        if (includeNestedNodes)
            RecursiveSearch(res, child, name, includeNestedNodes);
    }
}

// public string get_TextContent() [instance] :395
uString* XmlLinkedNode::TextContent()
{
    uStackFrame __("Uno.Data.Xml.XmlLinkedNode", "get_TextContent()");
    return GetTextContent();
}

// public void set_TextContent(string value) [instance] :400
void XmlLinkedNode::TextContent(uString* value)
{
    uStackFrame __("Uno.Data.Xml.XmlLinkedNode", "set_TextContent(string)");

    if (NodeType() != 3)
        U_THROW(::g::Uno::Data::Xml::XmlException::New4(::STRINGS[45/*"Setting Tex...*/]));

    uPtr(Children())->Clear();
    uPtr(Children())->Add(::g::Uno::Data::Xml::XmlText::New2(::g::Uno::Data::Xml::XmlValue::New7(value)));
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Data.Xml/0.42.0/source/collections/$.uno
// ----------------------------------------------------------------------------------------------------------

// public sealed class XmlLinkedNodeCollection :202
// {
static void XmlLinkedNodeCollection_build(uType* type)
{
    type->SetBase(::g::Uno::Data::Xml::XmlNodeCollectionBase_typeof()->MakeType(::g::Uno::Data::Xml::XmlLinkedNode_typeof(), NULL));
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Uno::Data::Xml::XmlLinkedNode_typeof(), NULL), offsetof(::g::Uno::Data::Xml::XmlNodeCollectionBase_type, interface0),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::Data::Xml::XmlLinkedNode_typeof(), NULL), offsetof(::g::Uno::Data::Xml::XmlNodeCollectionBase_type, interface1),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Data::Xml::XmlLinkedNode_typeof(), NULL), offsetof(::g::Uno::Data::Xml::XmlNodeCollectionBase_type, interface2));
    type->SetFields(2);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)XmlLinkedNodeCollection__New1_fn, 0, true, type, 1, ::g::Uno::Data::Xml::XmlLinkedNode_typeof()));
}

::g::Uno::Data::Xml::XmlNodeCollectionBase_type* XmlLinkedNodeCollection_typeof()
{
    static uSStrong< ::g::Uno::Data::Xml::XmlNodeCollectionBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Data::Xml::XmlNodeCollectionBase_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(XmlLinkedNodeCollection);
    options.TypeSize = sizeof(::g::Uno::Data::Xml::XmlNodeCollectionBase_type);
    type = (::g::Uno::Data::Xml::XmlNodeCollectionBase_type*)uClassType::New("Uno.Data.Xml.XmlLinkedNodeCollection", options);
    type->fp_build_ = XmlLinkedNodeCollection_build;
    type->fp_Add = (void(*)(::g::Uno::Data::Xml::XmlNodeCollectionBase*, ::g::Uno::Data::Xml::XmlNode*))XmlLinkedNodeCollection__Add_fn;
    type->fp_Insert = (void(*)(::g::Uno::Data::Xml::XmlNodeCollectionBase*, int*, ::g::Uno::Data::Xml::XmlNode*))XmlLinkedNodeCollection__Insert_fn;
    type->fp_Remove = (void(*)(::g::Uno::Data::Xml::XmlNodeCollectionBase*, ::g::Uno::Data::Xml::XmlNode*, bool*))XmlLinkedNodeCollection__Remove_fn;
    type->fp_RemoveAt = (void(*)(::g::Uno::Data::Xml::XmlNodeCollectionBase*, int*))XmlLinkedNodeCollection__RemoveAt_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))XmlLinkedNodeCollection__Insert_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))XmlLinkedNodeCollection__RemoveAt_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Uno::Data::Xml::XmlNodeCollectionBase__get_Item_fn;
    type->interface1.fp_Clear = (void(*)(uObject*))::g::Uno::Data::Xml::XmlNodeCollectionBase__Clear_fn;
    type->interface1.fp_Add = (void(*)(uObject*, void*))XmlLinkedNodeCollection__Add_fn;
    type->interface1.fp_Remove = (void(*)(uObject*, void*, bool*))XmlLinkedNodeCollection__Remove_fn;
    type->interface1.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Uno::Data::Xml::XmlNodeCollectionBase__Contains_fn;
    type->interface1.fp_get_Count = (void(*)(uObject*, int*))::g::Uno::Data::Xml::XmlNodeCollectionBase__get_Count_fn;
    type->interface2.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Uno::Data::Xml::XmlNodeCollectionBase__GetEnumerator_fn;
    return type;
}

// public XmlLinkedNodeCollection(Uno.Data.Xml.XmlLinkedNode owner) :204
void XmlLinkedNodeCollection__ctor_1_fn(XmlLinkedNodeCollection* __this, ::g::Uno::Data::Xml::XmlLinkedNode* owner)
{
    __this->ctor_1(owner);
}

// public override sealed void Add(Uno.Data.Xml.XmlLinkedNode item) :207
void XmlLinkedNodeCollection__Add_fn(XmlLinkedNodeCollection* __this, ::g::Uno::Data::Xml::XmlLinkedNode* item)
{
    uStackFrame __("Uno.Data.Xml.XmlLinkedNodeCollection", "Add(Uno.Data.Xml.XmlLinkedNode)");
    ::g::Uno::Data::Xml::ValidationHelper::ValidateNodeAdding(__this->_owner, item);

    if ((uPtr(item)->NodeType() == 4) && __this->HasChildren())
    {
        __this->Insert(0, item);
        return;
    }

    if (uPtr(item)->Parent() != NULL)
        item = uPtr(item)->Clone();

    uPtr(item)->Parent(__this->_owner);

    if (((::g::Uno::Data::Xml::XmlLinkedNode*)__this->LastChild()) != NULL)
    {
        uPtr(item)->PreviousSibling((::g::Uno::Data::Xml::XmlLinkedNode*)__this->LastChild());
        uPtr((::g::Uno::Data::Xml::XmlLinkedNode*)__this->LastChild())->NextSibling(item);
    }

    item->NextSibling(NULL);
    ::g::Uno::Data::Xml::XmlNodeCollectionBase__Add_fn(__this, item);
}

// public override sealed void Insert(int index, Uno.Data.Xml.XmlLinkedNode item) :246
void XmlLinkedNodeCollection__Insert_fn(XmlLinkedNodeCollection* __this, int* index, ::g::Uno::Data::Xml::XmlLinkedNode* item)
{
    uStackFrame __("Uno.Data.Xml.XmlLinkedNodeCollection", "Insert(int,Uno.Data.Xml.XmlLinkedNode)");
    int index_ = *index;

    if (!__this->HasChildren() && (index_ == 0))
    {
        __this->Add(item);
        return;
    }

    ::g::Uno::Data::Xml::ValidationHelper::ValidateNodeAdding(__this->_owner, item);

    if ((uPtr(item)->NodeType() == 4) && (index_ != 0))
    {
        __this->Insert(0, item);
        return;
    }

    if (uPtr(item)->Parent() != NULL)
        item = uPtr(item)->Clone();

    ::g::Uno::Data::Xml::XmlLinkedNode* existingItem = (::g::Uno::Data::Xml::XmlLinkedNode*)__this->Item(index_);
    uPtr(item)->NextSibling(existingItem);
    item->Parent(__this->_owner);

    if (uPtr(existingItem)->PreviousSibling() != NULL)
        uPtr(uPtr(existingItem)->PreviousSibling())->NextSibling(item);

    item->PreviousSibling(uPtr(existingItem)->PreviousSibling());
    existingItem->PreviousSibling(item);
    ::g::Uno::Data::Xml::XmlNodeCollectionBase__Insert_fn(__this, uCRef<int>(index_), item);
}

// public XmlLinkedNodeCollection New(Uno.Data.Xml.XmlLinkedNode owner) :204
void XmlLinkedNodeCollection__New1_fn(::g::Uno::Data::Xml::XmlLinkedNode* owner, XmlLinkedNodeCollection** __retval)
{
    *__retval = XmlLinkedNodeCollection::New1(owner);
}

// public override sealed bool Remove(Uno.Data.Xml.XmlLinkedNode item) :232
void XmlLinkedNodeCollection__Remove_fn(XmlLinkedNodeCollection* __this, ::g::Uno::Data::Xml::XmlLinkedNode* item, bool* __retval)
{
    uStackFrame __("Uno.Data.Xml.XmlLinkedNodeCollection", "Remove(Uno.Data.Xml.XmlLinkedNode)");
    bool ret2;

    if (uPtr(item)->PreviousSibling() != NULL)
        uPtr(uPtr(item)->PreviousSibling())->NextSibling(uPtr(item)->NextSibling());

    if (uPtr(item)->NextSibling() != NULL)
        uPtr(uPtr(item)->NextSibling())->PreviousSibling(uPtr(item)->PreviousSibling());

    return *__retval = (::g::Uno::Data::Xml::XmlNodeCollectionBase__Remove_fn(__this, item, &ret2), ret2), void();
}

// public override sealed void RemoveAt(int index) :280
void XmlLinkedNodeCollection__RemoveAt_fn(XmlLinkedNodeCollection* __this, int* index)
{
    uStackFrame __("Uno.Data.Xml.XmlLinkedNodeCollection", "RemoveAt(int)");
    int index_ = *index;
    ::g::Uno::Data::Xml::XmlLinkedNode* item = (::g::Uno::Data::Xml::XmlLinkedNode*)__this->Item(index_);

    if (uPtr(item)->PreviousSibling() != NULL)
        uPtr(uPtr(item)->PreviousSibling())->NextSibling(uPtr(item)->NextSibling());

    if (uPtr(item)->NextSibling() != NULL)
        uPtr(uPtr(item)->NextSibling())->PreviousSibling(uPtr(item)->PreviousSibling());

    ::g::Uno::Data::Xml::XmlNodeCollectionBase__RemoveAt_fn(__this, uCRef<int>(index_));
}

// public XmlLinkedNodeCollection(Uno.Data.Xml.XmlLinkedNode owner) [instance] :204
void XmlLinkedNodeCollection::ctor_1(::g::Uno::Data::Xml::XmlLinkedNode* owner)
{
    ctor_(owner);
}

// public XmlLinkedNodeCollection New(Uno.Data.Xml.XmlLinkedNode owner) [static] :204
XmlLinkedNodeCollection* XmlLinkedNodeCollection::New1(::g::Uno::Data::Xml::XmlLinkedNode* owner)
{
    XmlLinkedNodeCollection* obj1 = (XmlLinkedNodeCollection*)uNew(XmlLinkedNodeCollection_typeof());
    obj1->ctor_1(owner);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Data.Xml/0.42.0/source/elements/$.uno
// -------------------------------------------------------------------------------------------------------

// public abstract class XmlNode :335
// {
static void XmlNode_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::Data::Xml::XmlNode, _Name), 0,
        ::g::Uno::Data::Xml::XmlNodeType_typeof(), offsetof(::g::Uno::Data::Xml::XmlNode, _NodeType), 0,
        ::g::Uno::Data::Xml::XmlValue_typeof(), offsetof(::g::Uno::Data::Xml::XmlNode, _Value), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("get_Name", NULL, (void*)XmlNode__get_Name_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Name", NULL, (void*)XmlNode__set_Name_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_NodeType", NULL, (void*)XmlNode__get_NodeType_fn, 0, false, ::g::Uno::Data::Xml::XmlNodeType_typeof(), 0),
        new uFunction("get_Value", NULL, NULL, offsetof(XmlNode_type, fp_get_Value), false, ::g::Uno::Data::Xml::XmlValue_typeof(), 0),
        new uFunction("set_Value", NULL, NULL, offsetof(XmlNode_type, fp_set_Value), false, uVoid_typeof(), 1, ::g::Uno::Data::Xml::XmlValue_typeof()));
}

XmlNode_type* XmlNode_typeof()
{
    static uSStrong<XmlNode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(XmlNode);
    options.TypeSize = sizeof(XmlNode_type);
    type = (XmlNode_type*)uClassType::New("Uno.Data.Xml.XmlNode", options);
    type->fp_build_ = XmlNode_build;
    type->fp_get_Value = XmlNode__get_Value_fn;
    type->fp_set_Value = XmlNode__set_Value_fn;
    return type;
}

// protected XmlNode() :337
void XmlNode__ctor__fn(XmlNode* __this)
{
    __this->ctor_();
}

// protected XmlNode(string name, Uno.Data.Xml.XmlNodeType nodeType, Uno.Data.Xml.XmlValue value) :342
void XmlNode__ctor_1_fn(XmlNode* __this, uString* name, int* nodeType, ::g::Uno::Data::Xml::XmlValue* value)
{
    __this->ctor_1(name, *nodeType, value);
}

// public generated string get_Name() :351
void XmlNode__get_Name_fn(XmlNode* __this, uString** __retval)
{
    *__retval = __this->Name();
}

// public generated void set_Name(string value) :351
void XmlNode__set_Name_fn(XmlNode* __this, uString* value)
{
    __this->Name(value);
}

// public generated Uno.Data.Xml.XmlNodeType get_NodeType() :349
void XmlNode__get_NodeType_fn(XmlNode* __this, int* __retval)
{
    *__retval = __this->NodeType();
}

// protected generated void set_NodeType(Uno.Data.Xml.XmlNodeType value) :349
void XmlNode__set_NodeType_fn(XmlNode* __this, int* value)
{
    __this->NodeType(*value);
}

// public generated virtual Uno.Data.Xml.XmlValue get_Value() :353
void XmlNode__get_Value_fn(XmlNode* __this, ::g::Uno::Data::Xml::XmlValue** __retval)
{
    return *__retval = __this->_Value, void();
}

// public generated virtual void set_Value(Uno.Data.Xml.XmlValue value) :353
void XmlNode__set_Value_fn(XmlNode* __this, ::g::Uno::Data::Xml::XmlValue* value)
{
    __this->_Value = value;
}

// protected XmlNode() [instance] :337
void XmlNode::ctor_()
{
    Value(::g::Uno::Data::Xml::XmlValue::New1());
}

// protected XmlNode(string name, Uno.Data.Xml.XmlNodeType nodeType, Uno.Data.Xml.XmlValue value) [instance] :342
void XmlNode::ctor_1(uString* name, int nodeType, ::g::Uno::Data::Xml::XmlValue* value)
{
    NodeType(nodeType);
    Name(name);
    Value(value);
}

// public generated string get_Name() [instance] :351
uString* XmlNode::Name()
{
    return _Name;
}

// public generated void set_Name(string value) [instance] :351
void XmlNode::Name(uString* value)
{
    _Name = value;
}

// public generated Uno.Data.Xml.XmlNodeType get_NodeType() [instance] :349
int XmlNode::NodeType()
{
    return _NodeType;
}

// protected generated void set_NodeType(Uno.Data.Xml.XmlNodeType value) [instance] :349
void XmlNode::NodeType(int value)
{
    _NodeType = value;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Data.Xml/0.42.0/source/collections/$.uno
// ----------------------------------------------------------------------------------------------------------

// public abstract class XmlNodeCollectionBase<T> :8
// {
static void XmlNodeCollectionBase_build(uType* type)
{
    ::TYPES[7] = ::g::Uno::Collections::ICollection_typeof();
    ::TYPES[8] = ::g::Uno::Collections::IEnumerable_typeof();
    ::TYPES[9] = ::g::Uno::Collections::IList_typeof();
    ::TYPES[10] = ::g::Uno::Collections::List_typeof();
    type->SetPrecalc(
        ::g::Uno::Collections::ICollection_typeof()->MakeType(type->T(0), NULL),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(0), NULL),
        ::g::Uno::Collections::IList_typeof()->MakeType(type->T(0), NULL),
        ::g::Uno::Collections::List_typeof()->MakeType(type->T(0), NULL));
    type->SetInterfaces(
        ::TYPES[9/*Uno.Collections.IList`1*/]->MakeType(type->T(0), NULL), offsetof(XmlNodeCollectionBase_type, interface0),
        ::TYPES[7/*Uno.Collections.ICollection`1*/]->MakeType(type->T(0), NULL), offsetof(XmlNodeCollectionBase_type, interface1),
        ::TYPES[8/*Uno.Collections.IEnumerable`1*/]->MakeType(type->T(0), NULL), offsetof(XmlNodeCollectionBase_type, interface2));
    type->SetFields(0,
        ::TYPES[9/*Uno.Collections.IList`1*/]->MakeType(type->T(0), NULL), offsetof(::g::Uno::Data::Xml::XmlNodeCollectionBase, _children), 0,
        ::g::Uno::Data::Xml::XmlLinkedNode_typeof(), offsetof(::g::Uno::Data::Xml::XmlNodeCollectionBase, _owner), 0);
    type->Reflection.SetFunctions(12,
        new uFunction("Add", NULL, NULL, offsetof(XmlNodeCollectionBase_type, fp_Add), false, uVoid_typeof(), 1, type->T(0)),
        new uFunction("Clear", NULL, (void*)XmlNodeCollectionBase__Clear_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("Contains", NULL, (void*)XmlNodeCollectionBase__Contains_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type->T(0)),
        new uFunction("get_Count", NULL, (void*)XmlNodeCollectionBase__get_Count_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_FirstChild", NULL, (void*)XmlNodeCollectionBase__get_FirstChild_fn, 0, false, type->T(0), 0),
        new uFunction("GetEnumerator", NULL, (void*)XmlNodeCollectionBase__GetEnumerator_fn, 0, false, ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0), NULL), 0),
        new uFunction("get_HasChildren", NULL, (void*)XmlNodeCollectionBase__get_HasChildren_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("Insert", NULL, NULL, offsetof(XmlNodeCollectionBase_type, fp_Insert), false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), type->T(0)),
        new uFunction("get_Item", NULL, (void*)XmlNodeCollectionBase__get_Item_fn, 0, false, type->T(0), 1, ::g::Uno::Int_typeof()),
        new uFunction("get_LastChild", NULL, (void*)XmlNodeCollectionBase__get_LastChild_fn, 0, false, type->T(0), 0),
        new uFunction("Remove", NULL, NULL, offsetof(XmlNodeCollectionBase_type, fp_Remove), false, ::g::Uno::Bool_typeof(), 1, type->T(0)),
        new uFunction("RemoveAt", NULL, NULL, offsetof(XmlNodeCollectionBase_type, fp_RemoveAt), false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()));
}

XmlNodeCollectionBase_type* XmlNodeCollectionBase_typeof()
{
    static uSStrong<XmlNodeCollectionBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.PrecalcCount = 4;
    options.ObjectSize = sizeof(XmlNodeCollectionBase);
    options.TypeSize = sizeof(XmlNodeCollectionBase_type);
    type = (XmlNodeCollectionBase_type*)uClassType::New("Uno.Data.Xml.XmlNodeCollectionBase`1", options);
    type->fp_build_ = XmlNodeCollectionBase_build;
    type->fp_Add = XmlNodeCollectionBase__Add_fn;
    type->fp_Insert = XmlNodeCollectionBase__Insert_fn;
    type->fp_Remove = XmlNodeCollectionBase__Remove_fn;
    type->fp_RemoveAt = XmlNodeCollectionBase__RemoveAt_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))XmlNodeCollectionBase__Insert_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))XmlNodeCollectionBase__RemoveAt_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))XmlNodeCollectionBase__get_Item_fn;
    type->interface1.fp_Clear = (void(*)(uObject*))XmlNodeCollectionBase__Clear_fn;
    type->interface1.fp_Add = (void(*)(uObject*, void*))XmlNodeCollectionBase__Add_fn;
    type->interface1.fp_Remove = (void(*)(uObject*, void*, bool*))XmlNodeCollectionBase__Remove_fn;
    type->interface1.fp_Contains = (void(*)(uObject*, void*, bool*))XmlNodeCollectionBase__Contains_fn;
    type->interface1.fp_get_Count = (void(*)(uObject*, int*))XmlNodeCollectionBase__get_Count_fn;
    type->interface2.fp_GetEnumerator = (void(*)(uObject*, uObject**))XmlNodeCollectionBase__GetEnumerator_fn;
    return type;
}

// protected XmlNodeCollectionBase(Uno.Data.Xml.XmlLinkedNode owner) :18
void XmlNodeCollectionBase__ctor__fn(XmlNodeCollectionBase* __this, ::g::Uno::Data::Xml::XmlLinkedNode* owner)
{
    __this->ctor_(owner);
}

// public virtual void Add(T item) :82
void XmlNodeCollectionBase__Add_fn(XmlNodeCollectionBase* __this, ::g::Uno::Data::Xml::XmlNode* item)
{
    uType* __types[] = {
        __this->__type->GetBase(XmlNodeCollectionBase_typeof())->Precalced(0/*Uno.Collections.ICollection<T>*/),
    };
    uStackFrame __("Uno.Data.Xml.XmlNodeCollectionBase`1", "Add(T)");
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__this->Children()), __types[0]), item);
}

// private Uno.Collections.IList<T> get_Children() :13
void XmlNodeCollectionBase__get_Children_fn(XmlNodeCollectionBase* __this, uObject** __retval)
{
    *__retval = __this->Children();
}

// public void Clear() :35
void XmlNodeCollectionBase__Clear_fn(XmlNodeCollectionBase* __this)
{
    __this->Clear();
}

// public bool Contains(T item) :53
void XmlNodeCollectionBase__Contains_fn(XmlNodeCollectionBase* __this, ::g::Uno::Data::Xml::XmlNode* item, bool* __retval)
{
    *__retval = __this->Contains(item);
}

// public int get_Count() :25
void XmlNodeCollectionBase__get_Count_fn(XmlNodeCollectionBase* __this, int* __retval)
{
    *__retval = __this->Count();
}

// public T get_FirstChild() :60
void XmlNodeCollectionBase__get_FirstChild_fn(XmlNodeCollectionBase* __this, ::g::Uno::Data::Xml::XmlNode** __retval)
{
    *__retval = __this->FirstChild();
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() :43
void XmlNodeCollectionBase__GetEnumerator_fn(XmlNodeCollectionBase* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public bool get_HasChildren() :50
void XmlNodeCollectionBase__get_HasChildren_fn(XmlNodeCollectionBase* __this, bool* __retval)
{
    *__retval = __this->HasChildren();
}

// public virtual void Insert(int index, T item) :92
void XmlNodeCollectionBase__Insert_fn(XmlNodeCollectionBase* __this, int* index, ::g::Uno::Data::Xml::XmlNode* item)
{
    uType* __types[] = {
        __this->__type->GetBase(XmlNodeCollectionBase_typeof())->Precalced(2/*Uno.Collections.IList<T>*/),
    };
    uStackFrame __("Uno.Data.Xml.XmlNodeCollectionBase`1", "Insert(int,T)");
    int index_ = *index;
    ::g::Uno::Collections::IList::Insert_ex(uInterface(uPtr(__this->Children()), __types[0]), uCRef<int>(index_), item);
}

// public T get_Item(int index) :76
void XmlNodeCollectionBase__get_Item_fn(XmlNodeCollectionBase* __this, int* index, ::g::Uno::Data::Xml::XmlNode** __retval)
{
    *__retval = __this->Item(*index);
}

// public T get_LastChild() :68
void XmlNodeCollectionBase__get_LastChild_fn(XmlNodeCollectionBase* __this, ::g::Uno::Data::Xml::XmlNode** __retval)
{
    *__retval = __this->LastChild();
}

// public virtual bool Remove(T item) :87
void XmlNodeCollectionBase__Remove_fn(XmlNodeCollectionBase* __this, ::g::Uno::Data::Xml::XmlNode* item, bool* __retval)
{
    uType* __types[] = {
        __this->__type->GetBase(XmlNodeCollectionBase_typeof())->Precalced(0/*Uno.Collections.ICollection<T>*/),
    };
    uStackFrame __("Uno.Data.Xml.XmlNodeCollectionBase`1", "Remove(T)");
    bool ret3;
    return *__retval = (::g::Uno::Collections::ICollection::Remove_ex(uInterface(uPtr(__this->Children()), __types[0]), item, &ret3), ret3), void();
}

// public virtual void RemoveAt(int index) :97
void XmlNodeCollectionBase__RemoveAt_fn(XmlNodeCollectionBase* __this, int* index)
{
    uType* __types[] = {
        __this->__type->GetBase(XmlNodeCollectionBase_typeof())->Precalced(2/*Uno.Collections.IList<T>*/),
    };
    uStackFrame __("Uno.Data.Xml.XmlNodeCollectionBase`1", "RemoveAt(int)");
    int index_ = *index;
    ::g::Uno::Collections::IList::RemoveAt(uInterface(uPtr(__this->Children()), __types[0]), index_);
}

// protected XmlNodeCollectionBase(Uno.Data.Xml.XmlLinkedNode owner) [instance] :18
void XmlNodeCollectionBase::ctor_(::g::Uno::Data::Xml::XmlLinkedNode* owner)
{
    _owner = owner;
}

// private Uno.Collections.IList<T> get_Children() [instance] :13
uObject* XmlNodeCollectionBase::Children()
{
    uType* __types[] = {
        __type->GetBase(XmlNodeCollectionBase_typeof())->Precalced(3/*Uno.Collections.List<T>*/),
    };
    uStackFrame __("Uno.Data.Xml.XmlNodeCollectionBase`1", "get_Children()");
    uObject* ind1 = _children;
    return (ind1 != NULL) ? ind1 : (uObject*)(_children = (uObject*)((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(__types[0])));
}

// public void Clear() [instance] :35
void XmlNodeCollectionBase::Clear()
{
    uType* __types[] = {
        __type->GetBase(XmlNodeCollectionBase_typeof())->Precalced(0/*Uno.Collections.ICollection<T>*/),
    };
    uStackFrame __("Uno.Data.Xml.XmlNodeCollectionBase`1", "Clear()");

    if (HasChildren())
        ::g::Uno::Collections::ICollection::Clear(uInterface(uPtr(Children()), __types[0]));
}

// public bool Contains(T item) [instance] :53
bool XmlNodeCollectionBase::Contains(::g::Uno::Data::Xml::XmlNode* item)
{
    uType* __types[] = {
        __type->GetBase(XmlNodeCollectionBase_typeof())->Precalced(0/*Uno.Collections.ICollection<T>*/),
    };
    uStackFrame __("Uno.Data.Xml.XmlNodeCollectionBase`1", "Contains(T)");
    bool ret2;
    return HasChildren() && (::g::Uno::Collections::ICollection::Contains_ex(uInterface(uPtr(Children()), __types[0]), item, &ret2), ret2);
}

// public int get_Count() [instance] :25
int XmlNodeCollectionBase::Count()
{
    uType* __types[] = {
        __type->GetBase(XmlNodeCollectionBase_typeof())->Precalced(0/*Uno.Collections.ICollection<T>*/),
    };
    uStackFrame __("Uno.Data.Xml.XmlNodeCollectionBase`1", "get_Count()");

    if (HasChildren())
        return ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Children()), __types[0]));

    return 0;
}

// public T get_FirstChild() [instance] :60
::g::Uno::Data::Xml::XmlNode* XmlNodeCollectionBase::FirstChild()
{
    uType* __types[] = {
        __type->GetBase(XmlNodeCollectionBase_typeof())->Precalced(2/*Uno.Collections.IList<T>*/),
    };
    uStackFrame __("Uno.Data.Xml.XmlNodeCollectionBase`1", "get_FirstChild()");
    ::g::Uno::Data::Xml::XmlNode* ret4;
    return HasChildren() ? (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(Children()), __types[0]), uCRef<int>(0), &ret4), ret4) : NULL;
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() [instance] :43
uObject* XmlNodeCollectionBase::GetEnumerator()
{
    uType* __types[] = {
        __type->GetBase(XmlNodeCollectionBase_typeof())->Precalced(1/*Uno.Collections.IEnumerable<T>*/),
    };
    uStackFrame __("Uno.Data.Xml.XmlNodeCollectionBase`1", "GetEnumerator()");
    return (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(Children()), __types[0]));
}

// public bool get_HasChildren() [instance] :50
bool XmlNodeCollectionBase::HasChildren()
{
    uType* __types[] = {
        __type->GetBase(XmlNodeCollectionBase_typeof())->Precalced(0/*Uno.Collections.ICollection<T>*/),
    };
    uStackFrame __("Uno.Data.Xml.XmlNodeCollectionBase`1", "get_HasChildren()");
    return ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Children()), __types[0])) > 0;
}

// public T get_Item(int index) [instance] :76
::g::Uno::Data::Xml::XmlNode* XmlNodeCollectionBase::Item(int index)
{
    uType* __types[] = {
        __type->GetBase(XmlNodeCollectionBase_typeof())->Precalced(2/*Uno.Collections.IList<T>*/),
    };
    uStackFrame __("Uno.Data.Xml.XmlNodeCollectionBase`1", "get_Item(int)");
    ::g::Uno::Data::Xml::XmlNode* ret5;
    return (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(Children()), __types[0]), uCRef<int>(index), &ret5), ret5);
}

// public T get_LastChild() [instance] :68
::g::Uno::Data::Xml::XmlNode* XmlNodeCollectionBase::LastChild()
{
    uType* __types[] = {
        __type->GetBase(XmlNodeCollectionBase_typeof())->Precalced(2/*Uno.Collections.IList<T>*/),
        __type->GetBase(XmlNodeCollectionBase_typeof())->Precalced(0/*Uno.Collections.ICollection<T>*/),
    };
    uStackFrame __("Uno.Data.Xml.XmlNodeCollectionBase`1", "get_LastChild()");
    ::g::Uno::Data::Xml::XmlNode* ret6;
    return HasChildren() ? (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(Children()), __types[0]), uCRef<int>(::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Children()), __types[1])) - 1), &ret6), ret6) : NULL;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Data.Xml/0.42.0/source/$.uno
// ----------------------------------------------------------------------------------------------

// internal sealed class XmlNodeHandle :72
// {
static void XmlNodeHandle_build(uType* type)
{
    ::STRINGS[46] = uString::Const("xml");
    ::TYPES[11] = ::g::Uno::String_typeof();
    ::TYPES[12] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Data::Xml::XmlAttributeHandle_typeof(), NULL);
    ::TYPES[13] = ::g::Uno::Collections::List_typeof()->MakeType(type, NULL);
    ::TYPES[14] = ::g::Uno::Collections::IListExtensions_typeof()->MakeMethod(1/*Last<Uno.Data.Xml.XmlNodeHandle>*/, type, NULL);
    type->SetFields(0,
        ::TYPES[12/*Uno.Collections.List<Uno.Data.Xml.XmlAttributeHandle>*/], offsetof(::g::Uno::Data::Xml::XmlNodeHandle, _attributes), 0,
        ::TYPES[13/*Uno.Collections.List<Uno.Data.Xml.XmlNodeHandle>*/], offsetof(::g::Uno::Data::Xml::XmlNodeHandle, _children), 0,
        ::TYPES[11/*string*/], offsetof(::g::Uno::Data::Xml::XmlNodeHandle, _Encoding), 0,
        ::TYPES[11/*string*/], offsetof(::g::Uno::Data::Xml::XmlNodeHandle, _Name), 0,
        type, offsetof(::g::Uno::Data::Xml::XmlNodeHandle, _NextSibling), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Data::Xml::XmlNodeHandle, _NodeType), 0,
        type, offsetof(::g::Uno::Data::Xml::XmlNodeHandle, _Parent), 0,
        type, offsetof(::g::Uno::Data::Xml::XmlNodeHandle, _PrevSibling), 0,
        ::TYPES[11/*string*/], offsetof(::g::Uno::Data::Xml::XmlNodeHandle, _Value), 0,
        ::TYPES[11/*string*/], offsetof(::g::Uno::Data::Xml::XmlNodeHandle, _Version), 0);
}

uType* XmlNodeHandle_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.ObjectSize = sizeof(XmlNodeHandle);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Data.Xml.XmlNodeHandle", options);
    type->fp_build_ = XmlNodeHandle_build;
    type->fp_ctor_ = (void*)XmlNodeHandle__New1_fn;
    return type;
}

// public XmlNodeHandle() :123
void XmlNodeHandle__ctor__fn(XmlNodeHandle* __this)
{
    __this->ctor_();
}

// public XmlNodeHandle(string xmlVersion, string xmlEncoding) :141
void XmlNodeHandle__ctor_1_fn(XmlNodeHandle* __this, uString* xmlVersion, uString* xmlEncoding)
{
    __this->ctor_1(xmlVersion, xmlEncoding);
}

// public XmlNodeHandle(string name, string value, int nodeType) :130
void XmlNodeHandle__ctor_2_fn(XmlNodeHandle* __this, uString* name, uString* value, int* nodeType)
{
    __this->ctor_2(name, value, *nodeType);
}

// public void AddAttribute(Uno.Data.Xml.XmlAttributeHandle attribute) :167
void XmlNodeHandle__AddAttribute_fn(XmlNodeHandle* __this, ::g::Uno::Data::Xml::XmlAttributeHandle* attribute)
{
    __this->AddAttribute(attribute);
}

// public void AppendChild(Uno.Data.Xml.XmlNodeHandle child) :152
void XmlNodeHandle__AppendChild_fn(XmlNodeHandle* __this, XmlNodeHandle* child)
{
    __this->AppendChild(child);
}

// public Uno.Collections.List<Uno.Data.Xml.XmlAttributeHandle> get_Attributes() :97
void XmlNodeHandle__get_Attributes_fn(XmlNodeHandle* __this, ::g::Uno::Collections::List** __retval)
{
    *__retval = __this->Attributes();
}

// public Uno.Collections.List<Uno.Data.Xml.XmlNodeHandle> get_Children() :106
void XmlNodeHandle__get_Children_fn(XmlNodeHandle* __this, ::g::Uno::Collections::List** __retval)
{
    *__retval = __this->Children();
}

// public generated string get_Encoding() :77
void XmlNodeHandle__get_Encoding_fn(XmlNodeHandle* __this, uString** __retval)
{
    *__retval = __this->Encoding();
}

// public generated void set_Encoding(string value) :77
void XmlNodeHandle__set_Encoding_fn(XmlNodeHandle* __this, uString* value)
{
    __this->Encoding(value);
}

// public Uno.Data.Xml.XmlNodeHandle get_FirstChild() :86
void XmlNodeHandle__get_FirstChild_fn(XmlNodeHandle* __this, XmlNodeHandle** __retval)
{
    *__retval = __this->FirstChild();
}

// public Uno.Data.Xml.XmlNodeHandle get_LastChild() :91
void XmlNodeHandle__get_LastChild_fn(XmlNodeHandle* __this, XmlNodeHandle** __retval)
{
    *__retval = __this->LastChild();
}

// public generated string get_Name() :74
void XmlNodeHandle__get_Name_fn(XmlNodeHandle* __this, uString** __retval)
{
    *__retval = __this->Name();
}

// private generated void set_Name(string value) :74
void XmlNodeHandle__set_Name_fn(XmlNodeHandle* __this, uString* value)
{
    __this->Name(value);
}

// public XmlNodeHandle New() :123
void XmlNodeHandle__New1_fn(XmlNodeHandle** __retval)
{
    *__retval = XmlNodeHandle::New1();
}

// public XmlNodeHandle New(string xmlVersion, string xmlEncoding) :141
void XmlNodeHandle__New2_fn(uString* xmlVersion, uString* xmlEncoding, XmlNodeHandle** __retval)
{
    *__retval = XmlNodeHandle::New2(xmlVersion, xmlEncoding);
}

// public XmlNodeHandle New(string name, string value, int nodeType) :130
void XmlNodeHandle__New3_fn(uString* name, uString* value, int* nodeType, XmlNodeHandle** __retval)
{
    *__retval = XmlNodeHandle::New3(name, value, *nodeType);
}

// public generated Uno.Data.Xml.XmlNodeHandle get_NextSibling() :81
void XmlNodeHandle__get_NextSibling_fn(XmlNodeHandle* __this, XmlNodeHandle** __retval)
{
    *__retval = __this->NextSibling();
}

// public generated void set_NextSibling(Uno.Data.Xml.XmlNodeHandle value) :81
void XmlNodeHandle__set_NextSibling_fn(XmlNodeHandle* __this, XmlNodeHandle* value)
{
    __this->NextSibling(value);
}

// public generated int get_NodeType() :76
void XmlNodeHandle__get_NodeType_fn(XmlNodeHandle* __this, int* __retval)
{
    *__retval = __this->NodeType();
}

// public generated void set_NodeType(int value) :76
void XmlNodeHandle__set_NodeType_fn(XmlNodeHandle* __this, int* value)
{
    __this->NodeType(*value);
}

// public generated Uno.Data.Xml.XmlNodeHandle get_Parent() :80
void XmlNodeHandle__get_Parent_fn(XmlNodeHandle* __this, XmlNodeHandle** __retval)
{
    *__retval = __this->Parent();
}

// public generated void set_Parent(Uno.Data.Xml.XmlNodeHandle value) :80
void XmlNodeHandle__set_Parent_fn(XmlNodeHandle* __this, XmlNodeHandle* value)
{
    __this->Parent(value);
}

// public generated Uno.Data.Xml.XmlNodeHandle get_PrevSibling() :82
void XmlNodeHandle__get_PrevSibling_fn(XmlNodeHandle* __this, XmlNodeHandle** __retval)
{
    *__retval = __this->PrevSibling();
}

// public generated void set_PrevSibling(Uno.Data.Xml.XmlNodeHandle value) :82
void XmlNodeHandle__set_PrevSibling_fn(XmlNodeHandle* __this, XmlNodeHandle* value)
{
    __this->PrevSibling(value);
}

// public generated string get_Value() :75
void XmlNodeHandle__get_Value_fn(XmlNodeHandle* __this, uString** __retval)
{
    *__retval = __this->Value();
}

// public generated void set_Value(string value) :75
void XmlNodeHandle__set_Value_fn(XmlNodeHandle* __this, uString* value)
{
    __this->Value(value);
}

// public generated string get_Version() :78
void XmlNodeHandle__get_Version_fn(XmlNodeHandle* __this, uString** __retval)
{
    *__retval = __this->Version();
}

// public generated void set_Version(string value) :78
void XmlNodeHandle__set_Version_fn(XmlNodeHandle* __this, uString* value)
{
    __this->Version(value);
}

// public XmlNodeHandle() [instance] :123
void XmlNodeHandle::ctor_()
{
    Parent(NULL);
    NextSibling(NULL);
    PrevSibling(NULL);
}

// public XmlNodeHandle(string xmlVersion, string xmlEncoding) [instance] :141
void XmlNodeHandle::ctor_1(uString* xmlVersion, uString* xmlEncoding)
{
    Name(::STRINGS[46/*"xml"*/]);
    Encoding(xmlEncoding);
    Version(xmlVersion);
    NodeType(4);
    Parent(NULL);
    NextSibling(NULL);
    PrevSibling(NULL);
}

// public XmlNodeHandle(string name, string value, int nodeType) [instance] :130
void XmlNodeHandle::ctor_2(uString* name, uString* value, int nodeType)
{
    uStackFrame __("Uno.Data.Xml.XmlNodeHandle", ".ctor(string,string,int)");
    Name(name);
    Value(::g::Uno::String::IsNullOrEmpty(value) ? uCast<uString*>(NULL, ::TYPES[11/*string*/]) : value);
    NodeType(nodeType);
    Parent(NULL);
    NextSibling(NULL);
    PrevSibling(NULL);
}

// public void AddAttribute(Uno.Data.Xml.XmlAttributeHandle attribute) [instance] :167
void XmlNodeHandle::AddAttribute(::g::Uno::Data::Xml::XmlAttributeHandle* attribute)
{
    uStackFrame __("Uno.Data.Xml.XmlNodeHandle", "AddAttribute(Uno.Data.Xml.XmlAttributeHandle)");
    ::g::Uno::Collections::List__Add_fn(uPtr(Attributes()), attribute);
}

// public void AppendChild(Uno.Data.Xml.XmlNodeHandle child) [instance] :152
void XmlNodeHandle::AppendChild(XmlNodeHandle* child)
{
    uStackFrame __("Uno.Data.Xml.XmlNodeHandle", "AppendChild(Uno.Data.Xml.XmlNodeHandle)");

    if (child == NULL)
        return;

    XmlNodeHandle* lastChild = LastChild();
    uPtr(child)->Parent(this);
    child->PrevSibling(lastChild);

    if (lastChild != NULL)
        uPtr(lastChild)->NextSibling(child);

    child->NextSibling(NULL);
    ::g::Uno::Collections::List__Add_fn(uPtr(Children()), child);
}

// public Uno.Collections.List<Uno.Data.Xml.XmlAttributeHandle> get_Attributes() [instance] :97
::g::Uno::Collections::List* XmlNodeHandle::Attributes()
{
    return (_attributes == NULL) ? (::g::Uno::Collections::List*)(_attributes = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[12/*Uno.Collections.List<Uno.Data.Xml.XmlAttributeHandle>*/]))) : (::g::Uno::Collections::List*)_attributes;
}

// public Uno.Collections.List<Uno.Data.Xml.XmlNodeHandle> get_Children() [instance] :106
::g::Uno::Collections::List* XmlNodeHandle::Children()
{
    return (_children == NULL) ? (::g::Uno::Collections::List*)(_children = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[13/*Uno.Collections.List<Uno.Data.Xml.XmlNodeHandle>*/]))) : (::g::Uno::Collections::List*)_children;
}

// public generated string get_Encoding() [instance] :77
uString* XmlNodeHandle::Encoding()
{
    return _Encoding;
}

// public generated void set_Encoding(string value) [instance] :77
void XmlNodeHandle::Encoding(uString* value)
{
    _Encoding = value;
}

// public Uno.Data.Xml.XmlNodeHandle get_FirstChild() [instance] :86
XmlNodeHandle* XmlNodeHandle::FirstChild()
{
    uStackFrame __("Uno.Data.Xml.XmlNodeHandle", "get_FirstChild()");
    XmlNodeHandle* ret4;
    return (uPtr(Children())->Count() > 0) ? (::g::Uno::Collections::List__get_Item_fn(uPtr(Children()), uCRef<int>(0), &ret4), ret4) : NULL;
}

// public Uno.Data.Xml.XmlNodeHandle get_LastChild() [instance] :91
XmlNodeHandle* XmlNodeHandle::LastChild()
{
    uStackFrame __("Uno.Data.Xml.XmlNodeHandle", "get_LastChild()");
    XmlNodeHandle* ret5;
    return (uPtr(Children())->Count() > 0) ? (::g::Uno::Collections::IListExtensions__Last_fn(::TYPES[14/*Uno.Collections.IListExtensions.Last<Uno.Data.Xml.XmlNodeHandle>*/], (uObject*)Children(), &ret5), ret5) : NULL;
}

// public generated string get_Name() [instance] :74
uString* XmlNodeHandle::Name()
{
    return _Name;
}

// private generated void set_Name(string value) [instance] :74
void XmlNodeHandle::Name(uString* value)
{
    _Name = value;
}

// public generated Uno.Data.Xml.XmlNodeHandle get_NextSibling() [instance] :81
XmlNodeHandle* XmlNodeHandle::NextSibling()
{
    return _NextSibling;
}

// public generated void set_NextSibling(Uno.Data.Xml.XmlNodeHandle value) [instance] :81
void XmlNodeHandle::NextSibling(XmlNodeHandle* value)
{
    _NextSibling = value;
}

// public generated int get_NodeType() [instance] :76
int XmlNodeHandle::NodeType()
{
    return _NodeType;
}

// public generated void set_NodeType(int value) [instance] :76
void XmlNodeHandle::NodeType(int value)
{
    _NodeType = value;
}

// public generated Uno.Data.Xml.XmlNodeHandle get_Parent() [instance] :80
XmlNodeHandle* XmlNodeHandle::Parent()
{
    return _Parent;
}

// public generated void set_Parent(Uno.Data.Xml.XmlNodeHandle value) [instance] :80
void XmlNodeHandle::Parent(XmlNodeHandle* value)
{
    _Parent = value;
}

// public generated Uno.Data.Xml.XmlNodeHandle get_PrevSibling() [instance] :82
XmlNodeHandle* XmlNodeHandle::PrevSibling()
{
    return _PrevSibling;
}

// public generated void set_PrevSibling(Uno.Data.Xml.XmlNodeHandle value) [instance] :82
void XmlNodeHandle::PrevSibling(XmlNodeHandle* value)
{
    _PrevSibling = value;
}

// public generated string get_Value() [instance] :75
uString* XmlNodeHandle::Value()
{
    return _Value;
}

// public generated void set_Value(string value) [instance] :75
void XmlNodeHandle::Value(uString* value)
{
    _Value = value;
}

// public generated string get_Version() [instance] :78
uString* XmlNodeHandle::Version()
{
    return _Version;
}

// public generated void set_Version(string value) [instance] :78
void XmlNodeHandle::Version(uString* value)
{
    _Version = value;
}

// public XmlNodeHandle New() [static] :123
XmlNodeHandle* XmlNodeHandle::New1()
{
    XmlNodeHandle* obj1 = (XmlNodeHandle*)uNew(XmlNodeHandle_typeof());
    obj1->ctor_();
    return obj1;
}

// public XmlNodeHandle New(string xmlVersion, string xmlEncoding) [static] :141
XmlNodeHandle* XmlNodeHandle::New2(uString* xmlVersion, uString* xmlEncoding)
{
    XmlNodeHandle* obj3 = (XmlNodeHandle*)uNew(XmlNodeHandle_typeof());
    obj3->ctor_1(xmlVersion, xmlEncoding);
    return obj3;
}

// public XmlNodeHandle New(string name, string value, int nodeType) [static] :130
XmlNodeHandle* XmlNodeHandle::New3(uString* name, uString* value, int nodeType)
{
    XmlNodeHandle* obj2 = (XmlNodeHandle*)uNew(XmlNodeHandle_typeof());
    obj2->ctor_2(name, value, nodeType);
    return obj2;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Data.Xml/0.42.0/source/helpers/$.uno
// ------------------------------------------------------------------------------------------------------

// internal sealed class XmlNodeHandleConverter :178
// {
static void XmlNodeHandleConverter_build(uType* type)
{
    ::TYPES[15] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Data::Xml::XmlAttributeHandle_typeof(), NULL);
}

uType* XmlNodeHandleConverter_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(XmlNodeHandleConverter);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Data.Xml.XmlNodeHandleConverter", options);
    type->fp_build_ = XmlNodeHandleConverter_build;
    return type;
}

// private static Uno.Data.Xml.XmlLinkedNode ConvertToXmlLinkedNode(Uno.Data.Xml.XmlNodeHandle handle) :204
void XmlNodeHandleConverter__ConvertToXmlLinkedNode_fn(::g::Uno::Data::Xml::XmlNodeHandle* handle, ::g::Uno::Data::Xml::XmlLinkedNode** __retval)
{
    *__retval = XmlNodeHandleConverter::ConvertToXmlLinkedNode(handle);
}

// public static void ConvertToXmlNodeTree(Uno.Data.Xml.XmlLinkedNode xmlNode, Uno.Data.Xml.XmlNodeHandle handle) :180
void XmlNodeHandleConverter__ConvertToXmlNodeTree_fn(::g::Uno::Data::Xml::XmlLinkedNode* xmlNode, ::g::Uno::Data::Xml::XmlNodeHandle* handle)
{
    XmlNodeHandleConverter::ConvertToXmlNodeTree(xmlNode, handle);
}

// private static Uno.Data.Xml.XmlLinkedNode ConvertToXmlLinkedNode(Uno.Data.Xml.XmlNodeHandle handle) [static] :204
::g::Uno::Data::Xml::XmlLinkedNode* XmlNodeHandleConverter::ConvertToXmlLinkedNode(::g::Uno::Data::Xml::XmlNodeHandle* handle)
{
    uStackFrame __("Uno.Data.Xml.XmlNodeHandleConverter", "ConvertToXmlLinkedNode(Uno.Data.Xml.XmlNodeHandle)");
    ::g::Uno::Data::Xml::XmlLinkedNode* xmlNode;

    switch (uPtr(handle)->NodeType())
    {
        case 0:
        {
            xmlNode = ::g::Uno::Data::Xml::XmlDocumentElement::New1();
            break;
        }
        case 3:
        {
            xmlNode = ::g::Uno::Data::Xml::XmlElement::New1();
            break;
        }
        case 5:
        {
            xmlNode = ::g::Uno::Data::Xml::XmlComment::New1();
            break;
        }
        case 2:
        {
            xmlNode = ::g::Uno::Data::Xml::XmlCharacterData::New2(uPtr(handle)->Value());
            break;
        }
        case 1:
        {
            if (::g::Uno::String::op_Equality(uPtr(handle)->Value(), NULL) || (uPtr(::g::Uno::String::Trim(uPtr(uPtr(handle)->Value())))->Length() == 0))
                return NULL;

            xmlNode = ::g::Uno::Data::Xml::XmlText::New1();
            break;
        }
        case 4:
        {
            xmlNode = ::g::Uno::Data::Xml::XmlDeclaration::New2(uPtr(handle)->Version(), ::g::Uno::Data::Xml::XmlEncodingHelper::ConvertFromString(uPtr(handle)->Encoding()));
            break;
        }
        case 6:
        {
            xmlNode = ::g::Uno::Data::Xml::XmlProcessingInstruction::New1();
            break;
        }
        default:
            return NULL;
    }

    uPtr(xmlNode)->Name(uPtr(handle)->Name());

    if (::g::Uno::String::op_Inequality(handle->Value(), NULL))
        uPtr(xmlNode)->Value(::g::Uno::Data::Xml::XmlValue::New7(uPtr(handle)->Value()));

    return xmlNode;
}

// public static void ConvertToXmlNodeTree(Uno.Data.Xml.XmlLinkedNode xmlNode, Uno.Data.Xml.XmlNodeHandle handle) [static] :180
void XmlNodeHandleConverter::ConvertToXmlNodeTree(::g::Uno::Data::Xml::XmlLinkedNode* xmlNode, ::g::Uno::Data::Xml::XmlNodeHandle* handle)
{
    uStackFrame __("Uno.Data.Xml.XmlNodeHandleConverter", "ConvertToXmlNodeTree(Uno.Data.Xml.XmlLinkedNode,Uno.Data.Xml.XmlNodeHandle)");
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Data::Xml::XmlAttributeHandle*> > ret3;

    if (uPtr(handle)->NextSibling() != NULL)
        XmlNodeHandleConverter::ConvertToXmlNodeTree(xmlNode, uPtr(handle)->NextSibling());

    ::g::Uno::Data::Xml::XmlLinkedNode* newNode = XmlNodeHandleConverter::ConvertToXmlLinkedNode(handle);

    if (newNode != NULL)
    {
        uPtr(xmlNode)->PrependChild(newNode);

        for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Data::Xml::XmlAttributeHandle*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(uPtr(handle)->Attributes()), &ret3), ret3); enum1.MoveNext(::TYPES[15/*Uno.Collections.List<Uno.Data.Xml.XmlAttributeHandle>.Enumerator*/]); )
        {
            ::g::Uno::Data::Xml::XmlAttributeHandle* attributeHandle = enum1.Current(::TYPES[15/*Uno.Collections.List<Uno.Data.Xml.XmlAttributeHandle>.Enumerator*/]);
            uPtr(uPtr(newNode)->Attributes())->Add(::g::Uno::Data::Xml::AttributeHandleConverter::ConvertToXmlAttribute(attributeHandle));
        }

        if (handle->FirstChild() != NULL)
            XmlNodeHandleConverter::ConvertToXmlNodeTree(newNode, uPtr(handle)->FirstChild());
    }
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Data.Xml/0.42.0/source/$.uno
// ----------------------------------------------------------------------------------------------

// internal sealed class XmlNodeImpl :34
// {
static void XmlNodeImpl_build(uType* type)
{
}

uType* XmlNodeImpl_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(XmlNodeImpl);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Data.Xml.XmlNodeImpl", options);
    type->fp_build_ = XmlNodeImpl_build;
    return type;
}

// public static void AddAttribute(Uno.Data.Xml.XmlNodeHandle handle, Uno.Data.Xml.XmlAttributeHandle attrib) :37
void XmlNodeImpl__AddAttribute_fn(::g::Uno::Data::Xml::XmlNodeHandle* handle, ::g::Uno::Data::Xml::XmlAttributeHandle* attrib)
{
    XmlNodeImpl::AddAttribute(handle, attrib);
}

// public static void AppendChild(Uno.Data.Xml.XmlNodeHandle handle, Uno.Data.Xml.XmlNodeHandle child) :43
void XmlNodeImpl__AppendChild_fn(::g::Uno::Data::Xml::XmlNodeHandle* handle, ::g::Uno::Data::Xml::XmlNodeHandle* child)
{
    XmlNodeImpl::AppendChild(handle, child);
}

// public static Uno.Data.Xml.XmlNodeHandle GenerateXMLTree(Uno.Data.Xml.TargetSpecificXmlNode obj) :52
void XmlNodeImpl__GenerateXMLTree_fn(void** obj_, ::g::Uno::Data::Xml::XmlNodeHandle** __retval)
{
    *__retval = XmlNodeImpl::GenerateXMLTree(*obj_);
}

// public static Uno.Data.Xml.XmlNodeHandle Parse(string xmlString) :49
void XmlNodeImpl__Parse_fn(uString* xmlString_, ::g::Uno::Data::Xml::XmlNodeHandle** __retval)
{
    *__retval = XmlNodeImpl::Parse(xmlString_);
}

// public static void AddAttribute(Uno.Data.Xml.XmlNodeHandle handle, Uno.Data.Xml.XmlAttributeHandle attrib) [static] :37
void XmlNodeImpl::AddAttribute(::g::Uno::Data::Xml::XmlNodeHandle* handle, ::g::Uno::Data::Xml::XmlAttributeHandle* attrib)
{
    uStackFrame __("Uno.Data.Xml.XmlNodeImpl", "AddAttribute(Uno.Data.Xml.XmlNodeHandle,Uno.Data.Xml.XmlAttributeHandle)");
    uPtr(handle)->AddAttribute(attrib);
}

// public static void AppendChild(Uno.Data.Xml.XmlNodeHandle handle, Uno.Data.Xml.XmlNodeHandle child) [static] :43
void XmlNodeImpl::AppendChild(::g::Uno::Data::Xml::XmlNodeHandle* handle, ::g::Uno::Data::Xml::XmlNodeHandle* child)
{
    uStackFrame __("Uno.Data.Xml.XmlNodeImpl", "AppendChild(Uno.Data.Xml.XmlNodeHandle,Uno.Data.Xml.XmlNodeHandle)");
    uPtr(handle)->AppendChild(child);
}

// public static Uno.Data.Xml.XmlNodeHandle GenerateXMLTree(Uno.Data.Xml.TargetSpecificXmlNode obj) [static] :52
::g::Uno::Data::Xml::XmlNodeHandle* XmlNodeImpl::GenerateXMLTree(void* obj_)
{
    pugi::xml_node node = *((pugi::xml_node*)obj_);
    ::g::Uno::Data::Xml::XmlNodeHandle* nodeHandle;
    
    if (node.type() == pugi::node_declaration)
    {
        return ::g::Uno::Data::Xml::XmlNodeHandle::New2(uStringFromXliString(node.attribute("version").as_string()), uStringFromXliString(node.attribute("encoding").as_string()));
    }
    
    if (node.type() == pugi::node_document)
    {
        //create empty root element
        nodeHandle = ::g::Uno::Data::Xml::XmlNodeHandle::New1();
    }
    else
    {
        int mappedNodeType = -1;
        switch(node.type())
        {
            case pugi::node_element:
                mappedNodeType = 3;
                break;
            case pugi::node_pcdata:
                mappedNodeType = 1;
                break;
            case pugi::node_cdata:
                mappedNodeType = 2;
                break;
            case pugi::node_comment:
                mappedNodeType = 5;
                break;
            case pugi::node_pi:
                mappedNodeType = 6;
                break;
        }
    
        nodeHandle = ::g::Uno::Data::Xml::XmlNodeHandle::New3(uStringFromXliString(node.name()), uStringFromXliString(node.value()), mappedNodeType);
        
        for (pugi::xml_attribute_iterator attrib = node.attributes_begin(); attrib != node.attributes_end(); attrib++)
        {
            pugi::xml_attribute attribute = (*attrib);
            ::g::Uno::Data::Xml::XmlAttributeHandle* attributeHandle = ::g::Uno::Data::Xml::XmlAttributeHandle::New1(uStringFromXliString(attribute.name()), uStringFromXliString(attribute.value()));
            XmlNodeImpl::AddAttribute(nodeHandle, attributeHandle);
        }
    }
    
    for (pugi::xml_node_iterator child = node.children().begin(); child != node.children().end(); child++)
    {
        pugi::xml_node childNode = (*child);
        XmlNodeImpl::AppendChild(nodeHandle, XmlNodeImpl::GenerateXMLTree(&(childNode)));
    }
    
    return nodeHandle;
}

// public static Uno.Data.Xml.XmlNodeHandle Parse(string xmlString) [static] :49
::g::Uno::Data::Xml::XmlNodeHandle* XmlNodeImpl::Parse(uString* xmlString_)
{
    pugi::xml_document doc;
    pugi::xml_parse_result parseResult = doc.load(uStringToXliString(xmlString_).Ptr(), pugi::parse_full);
    
    if (parseResult.status == 0)
    {
        pugi::xml_node root = doc.root();
        return XmlNodeImpl::GenerateXMLTree(&(root));
    }
    else
    {
        const char * errorMessages[] = { "No error", "File was not found during load_file()", "Error reading from file/stream", "Could not allocate memory", "Internal error occurred", "Parser could not determine tag type",
                                         "Parsing error occurred while parsing document declaration/processing instruction", "Parsing error occurred while parsing comment", "Parsing error occurred while parsing CDATA section",
                                         "Parsing error occurred while parsing document type declaration", "Parsing error occurred while parsing PCDATA section", "Parsing error occurred while parsing start element tag",
                                         "Parsing error occurred while parsing element attribute", "Parsing error occurred while parsing end element tag",
                                         "There was a mismatch of start-end tags (closing tag had incorrect name, some tag was not closed or there was an excessive closing tag)",
                                         "Unable to append nodes since root type is not node_element or node_document (exclusive to xml_node::append_buffer)", "Parsing resulted in a document without element nodes" };
    
        throw uThrowable(::g::Uno::Data::Xml::XmlException::New4(uStringFromXliString(errorMessages[parseResult.status])), U_FUNCTION, __LINE__);
    }
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Data.Xml/0.42.0/source/$.uno
// ----------------------------------------------------------------------------------------------

// public enum XmlNodeType :207
uEnumType* XmlNodeType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Data.Xml.XmlNodeType", ::g::Uno::Int_typeof(), 8);
    type->SetLiterals(
        "Document", 0LL,
        "Text", 1LL,
        "CharacterData", 2LL,
        "Element", 3LL,
        "Declaration", 4LL,
        "Comment", 5LL,
        "ProcessingInstruction", 6LL,
        "Attribute", 7LL);
    return type;
}

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Data.Xml/0.42.0/source/elements/$.uno
// -------------------------------------------------------------------------------------------------------

// public sealed class XmlProcessingInstruction :307
// {
static void XmlProcessingInstruction_build(uType* type)
{
    ::STRINGS[47] = uString::Const("<?");
    ::STRINGS[18] = uString::Const(" ");
    ::STRINGS[16] = uString::Const("?>");
    type->SetFields(8);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)XmlProcessingInstruction__New1_fn, 0, true, type, 0));
}

::g::Uno::Data::Xml::XmlLinkedNode_type* XmlProcessingInstruction_typeof()
{
    static uSStrong< ::g::Uno::Data::Xml::XmlLinkedNode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Data::Xml::XmlLinkedNode_typeof();
    options.FieldCount = 8;
    options.ObjectSize = sizeof(XmlProcessingInstruction);
    options.TypeSize = sizeof(::g::Uno::Data::Xml::XmlLinkedNode_type);
    type = (::g::Uno::Data::Xml::XmlLinkedNode_type*)uClassType::New("Uno.Data.Xml.XmlProcessingInstruction", options);
    type->fp_build_ = XmlProcessingInstruction_build;
    type->fp_ctor_ = (void*)XmlProcessingInstruction__New1_fn;
    type->fp_CreateNewInstance = (void(*)(::g::Uno::Data::Xml::XmlLinkedNode*, ::g::Uno::Data::Xml::XmlLinkedNode**))XmlProcessingInstruction__CreateNewInstance_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))XmlProcessingInstruction__ToString_fn;
    return type;
}

// public XmlProcessingInstruction() :309
void XmlProcessingInstruction__ctor_3_fn(XmlProcessingInstruction* __this)
{
    __this->ctor_3();
}

// protected override sealed Uno.Data.Xml.XmlLinkedNode CreateNewInstance() :314
void XmlProcessingInstruction__CreateNewInstance_fn(XmlProcessingInstruction* __this, ::g::Uno::Data::Xml::XmlLinkedNode** __retval)
{
    return *__retval = XmlProcessingInstruction::New1(), void();
}

// public XmlProcessingInstruction New() :309
void XmlProcessingInstruction__New1_fn(XmlProcessingInstruction** __retval)
{
    *__retval = XmlProcessingInstruction::New1();
}

// public override sealed string ToString() :319
void XmlProcessingInstruction__ToString_fn(XmlProcessingInstruction* __this, uString** __retval)
{
    uStackFrame __("Uno.Data.Xml.XmlProcessingInstruction", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[47/*"<?"*/], __this->Name()), ::STRINGS[18/*" "*/]), uPtr(__this->Value())->AsString()), ::STRINGS[16/*"?>"*/]), void();
}

// public XmlProcessingInstruction() [instance] :309
void XmlProcessingInstruction::ctor_3()
{
    ctor_2();
    NodeType(6);
}

// public XmlProcessingInstruction New() [static] :309
XmlProcessingInstruction* XmlProcessingInstruction::New1()
{
    XmlProcessingInstruction* obj1 = (XmlProcessingInstruction*)uNew(XmlProcessingInstruction_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Data.Xml/0.42.0/source/elements/$.uno
// -------------------------------------------------------------------------------------------------------

// public sealed class XmlText :274
// {
static void XmlText_build(uType* type)
{
    type->SetFields(8);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)XmlText__New1_fn, 0, true, type, 0),
        new uFunction(".ctor", NULL, (void*)XmlText__New2_fn, 0, true, type, 1, ::g::Uno::Data::Xml::XmlValue_typeof()));
}

::g::Uno::Data::Xml::XmlLinkedNode_type* XmlText_typeof()
{
    static uSStrong< ::g::Uno::Data::Xml::XmlLinkedNode_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Data::Xml::XmlLinkedNode_typeof();
    options.FieldCount = 8;
    options.ObjectSize = sizeof(XmlText);
    options.TypeSize = sizeof(::g::Uno::Data::Xml::XmlLinkedNode_type);
    type = (::g::Uno::Data::Xml::XmlLinkedNode_type*)uClassType::New("Uno.Data.Xml.XmlText", options);
    type->fp_build_ = XmlText_build;
    type->fp_ctor_ = (void*)XmlText__New1_fn;
    type->fp_CreateNewInstance = (void(*)(::g::Uno::Data::Xml::XmlLinkedNode*, ::g::Uno::Data::Xml::XmlLinkedNode**))XmlText__CreateNewInstance_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))XmlText__ToString_fn;
    return type;
}

// public XmlText() :276
void XmlText__ctor_3_fn(XmlText* __this)
{
    __this->ctor_3();
}

// public XmlText(Uno.Data.Xml.XmlValue value) :281
void XmlText__ctor_4_fn(XmlText* __this, ::g::Uno::Data::Xml::XmlValue* value)
{
    __this->ctor_4(value);
}

// protected override sealed Uno.Data.Xml.XmlLinkedNode CreateNewInstance() :286
void XmlText__CreateNewInstance_fn(XmlText* __this, ::g::Uno::Data::Xml::XmlLinkedNode** __retval)
{
    return *__retval = XmlText::New1(), void();
}

// public XmlText New() :276
void XmlText__New1_fn(XmlText** __retval)
{
    *__retval = XmlText::New1();
}

// public XmlText New(Uno.Data.Xml.XmlValue value) :281
void XmlText__New2_fn(::g::Uno::Data::Xml::XmlValue* value, XmlText** __retval)
{
    *__retval = XmlText::New2(value);
}

// public override sealed string ToString() :291
void XmlText__ToString_fn(XmlText* __this, uString** __retval)
{
    uStackFrame __("Uno.Data.Xml.XmlText", "ToString()");
    return *__retval = uPtr(__this->Value())->AsString(), void();
}

// public XmlText() [instance] :276
void XmlText::ctor_3()
{
    ctor_2();
    NodeType(1);
}

// public XmlText(Uno.Data.Xml.XmlValue value) [instance] :281
void XmlText::ctor_4(::g::Uno::Data::Xml::XmlValue* value)
{
    ctor_3();
    Value(value);
}

// public XmlText New() [static] :276
XmlText* XmlText::New1()
{
    XmlText* obj1 = (XmlText*)uNew(XmlText_typeof());
    obj1->ctor_3();
    return obj1;
}

// public XmlText New(Uno.Data.Xml.XmlValue value) [static] :281
XmlText* XmlText::New2(::g::Uno::Data::Xml::XmlValue* value)
{
    XmlText* obj2 = (XmlText*)uNew(XmlText_typeof());
    obj2->ctor_4(value);
    return obj2;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Data.Xml/0.42.0/source/elements/$.uno
// -------------------------------------------------------------------------------------------------------

// public sealed class XmlValue :47
// {
static void XmlValue_build(uType* type)
{
    ::TYPES[16] = ::g::Uno::Bool_typeof();
    ::TYPES[17] = ::g::Uno::Double_typeof();
    ::TYPES[18] = ::g::Uno::Float_typeof();
    ::TYPES[19] = ::g::Uno::Int_typeof();
    ::TYPES[20] = ::g::Uno::Long_typeof();
    ::TYPES[11] = ::g::Uno::String_typeof();
    ::TYPES[21] = ::g::Uno::Exception_typeof();
    ::TYPES[22] = ::g::Uno::Action_typeof();
    type->SetFields(0,
        uObject_typeof(), offsetof(::g::Uno::Data::Xml::XmlValue, _Value), 0);
    type->Reflection.SetFunctions(22,
        new uFunction("AsBool", NULL, (void*)XmlValue__AsBool_fn, 0, false, ::TYPES[16/*bool*/], 0),
        new uFunction("AsDouble", NULL, (void*)XmlValue__AsDouble_fn, 0, false, ::TYPES[17/*double*/], 0),
        new uFunction("AsFloat", NULL, (void*)XmlValue__AsFloat_fn, 0, false, ::TYPES[18/*float*/], 0),
        new uFunction("AsInt", NULL, (void*)XmlValue__AsInt_fn, 0, false, ::TYPES[19/*int*/], 0),
        new uFunction("AsLong", NULL, (void*)XmlValue__AsLong_fn, 0, false, ::TYPES[20/*long*/], 0),
        new uFunction("AsString", NULL, (void*)XmlValue__AsString_fn, 0, false, ::TYPES[11/*string*/], 0),
        new uFunction(".ctor", NULL, (void*)XmlValue__New1_fn, 0, true, type, 0),
        new uFunction(".ctor", NULL, (void*)XmlValue__New2_fn, 0, true, type, 1, ::TYPES[16/*bool*/]),
        new uFunction(".ctor", NULL, (void*)XmlValue__New3_fn, 0, true, type, 1, ::TYPES[17/*double*/]),
        new uFunction(".ctor", NULL, (void*)XmlValue__New4_fn, 0, true, type, 1, ::TYPES[18/*float*/]),
        new uFunction(".ctor", NULL, (void*)XmlValue__New5_fn, 0, true, type, 1, ::TYPES[19/*int*/]),
        new uFunction(".ctor", NULL, (void*)XmlValue__New6_fn, 0, true, type, 1, ::TYPES[20/*long*/]),
        new uFunction(".ctor", NULL, (void*)XmlValue__New7_fn, 0, true, type, 1, ::TYPES[11/*string*/]),
        new uFunction("Set", NULL, (void*)XmlValue__Set_fn, 0, false, uVoid_typeof(), 1, ::TYPES[16/*bool*/]),
        new uFunction("Set", NULL, (void*)XmlValue__Set1_fn, 0, false, uVoid_typeof(), 1, ::TYPES[17/*double*/]),
        new uFunction("Set", NULL, (void*)XmlValue__Set2_fn, 0, false, uVoid_typeof(), 1, ::TYPES[18/*float*/]),
        new uFunction("Set", NULL, (void*)XmlValue__Set3_fn, 0, false, uVoid_typeof(), 1, ::TYPES[19/*int*/]),
        new uFunction("Set", NULL, (void*)XmlValue__Set4_fn, 0, false, uVoid_typeof(), 1, ::TYPES[20/*long*/]),
        new uFunction("Set", NULL, (void*)XmlValue__Set5_fn, 0, false, uVoid_typeof(), 1, ::TYPES[11/*string*/]),
        new uFunction("get_Type", NULL, (void*)XmlValue__get_Type_fn, 0, false, ::g::Uno::Data::Xml::XmlValueType_typeof(), 0),
        new uFunction("get_Value", NULL, (void*)XmlValue__get_Value_fn, 0, false, uObject_typeof(), 0),
        new uFunction("set_Value", NULL, (void*)XmlValue__set_Value_fn, 0, false, uVoid_typeof(), 1, uObject_typeof()));
}

uType* XmlValue_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(XmlValue);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Data.Xml.XmlValue", options);
    type->fp_build_ = XmlValue_build;
    type->fp_ctor_ = (void*)XmlValue__New1_fn;
    return type;
}

// public XmlValue() :49
void XmlValue__ctor__fn(XmlValue* __this)
{
    __this->ctor_();
}

// public XmlValue(bool value) :77
void XmlValue__ctor_1_fn(XmlValue* __this, bool* value)
{
    __this->ctor_1(*value);
}

// public XmlValue(double value) :72
void XmlValue__ctor_2_fn(XmlValue* __this, double* value)
{
    __this->ctor_2(*value);
}

// public XmlValue(float value) :67
void XmlValue__ctor_3_fn(XmlValue* __this, float* value)
{
    __this->ctor_3(*value);
}

// public XmlValue(int value) :57
void XmlValue__ctor_4_fn(XmlValue* __this, int* value)
{
    __this->ctor_4(*value);
}

// public XmlValue(long value) :62
void XmlValue__ctor_5_fn(XmlValue* __this, int64_t* value)
{
    __this->ctor_5(*value);
}

// public XmlValue(string value) :52
void XmlValue__ctor_6_fn(XmlValue* __this, uString* value)
{
    __this->ctor_6(value);
}

// public bool AsBool() :159
void XmlValue__AsBool_fn(XmlValue* __this, bool* __retval)
{
    *__retval = __this->AsBool();
}

// public double AsDouble() :150
void XmlValue__AsDouble_fn(XmlValue* __this, double* __retval)
{
    *__retval = __this->AsDouble();
}

// public float AsFloat() :141
void XmlValue__AsFloat_fn(XmlValue* __this, float* __retval)
{
    *__retval = __this->AsFloat();
}

// public int AsInt() :123
void XmlValue__AsInt_fn(XmlValue* __this, int* __retval)
{
    *__retval = __this->AsInt();
}

// public long AsLong() :132
void XmlValue__AsLong_fn(XmlValue* __this, int64_t* __retval)
{
    *__retval = __this->AsLong();
}

// public string AsString() :114
void XmlValue__AsString_fn(XmlValue* __this, uString** __retval)
{
    *__retval = __this->AsString();
}

// private void BoolParseInternal() :238
void XmlValue__BoolParseInternal_fn(XmlValue* __this)
{
    __this->BoolParseInternal();
}

// private void DoubleParseInternal() :258
void XmlValue__DoubleParseInternal_fn(XmlValue* __this)
{
    __this->DoubleParseInternal();
}

// private void FloatParseInternal() :253
void XmlValue__FloatParseInternal_fn(XmlValue* __this)
{
    __this->FloatParseInternal();
}

// private void IntParseInternal() :243
void XmlValue__IntParseInternal_fn(XmlValue* __this)
{
    __this->IntParseInternal();
}

// private void LongParseInternal() :248
void XmlValue__LongParseInternal_fn(XmlValue* __this)
{
    __this->LongParseInternal();
}

// public XmlValue New() :49
void XmlValue__New1_fn(XmlValue** __retval)
{
    *__retval = XmlValue::New1();
}

// public XmlValue New(bool value) :77
void XmlValue__New2_fn(bool* value, XmlValue** __retval)
{
    *__retval = XmlValue::New2(*value);
}

// public XmlValue New(double value) :72
void XmlValue__New3_fn(double* value, XmlValue** __retval)
{
    *__retval = XmlValue::New3(*value);
}

// public XmlValue New(float value) :67
void XmlValue__New4_fn(float* value, XmlValue** __retval)
{
    *__retval = XmlValue::New4(*value);
}

// public XmlValue New(int value) :57
void XmlValue__New5_fn(int* value, XmlValue** __retval)
{
    *__retval = XmlValue::New5(*value);
}

// public XmlValue New(long value) :62
void XmlValue__New6_fn(int64_t* value, XmlValue** __retval)
{
    *__retval = XmlValue::New6(*value);
}

// public XmlValue New(string value) :52
void XmlValue__New7_fn(uString* value, XmlValue** __retval)
{
    *__retval = XmlValue::New7(value);
}

// public static operator ==(Uno.Data.Xml.XmlValue xt, bool value) :222
void XmlValue__op_Equality_fn(XmlValue* xt, bool* value, bool* __retval)
{
    *__retval = XmlValue::op_Equality(xt, *value);
}

// public static operator ==(Uno.Data.Xml.XmlValue xt, double value) :219
void XmlValue__op_Equality1_fn(XmlValue* xt, double* value, bool* __retval)
{
    *__retval = XmlValue::op_Equality1(xt, *value);
}

// public static operator ==(Uno.Data.Xml.XmlValue xt, float value) :216
void XmlValue__op_Equality2_fn(XmlValue* xt, float* value, bool* __retval)
{
    *__retval = XmlValue::op_Equality2(xt, *value);
}

// public static operator ==(Uno.Data.Xml.XmlValue xt, int value) :210
void XmlValue__op_Equality3_fn(XmlValue* xt, int* value, bool* __retval)
{
    *__retval = XmlValue::op_Equality3(xt, *value);
}

// public static operator ==(Uno.Data.Xml.XmlValue xt, long value) :213
void XmlValue__op_Equality4_fn(XmlValue* xt, int64_t* value, bool* __retval)
{
    *__retval = XmlValue::op_Equality4(xt, *value);
}

// public static operator ==(Uno.Data.Xml.XmlValue xt, string value) :207
void XmlValue__op_Equality5_fn(XmlValue* xt, uString* value, bool* __retval)
{
    *__retval = XmlValue::op_Equality5(xt, value);
}

// public static operator !=(Uno.Data.Xml.XmlValue xt, bool value) :223
void XmlValue__op_Inequality_fn(XmlValue* xt, bool* value, bool* __retval)
{
    *__retval = XmlValue::op_Inequality(xt, *value);
}

// public static operator !=(Uno.Data.Xml.XmlValue xt, double value) :220
void XmlValue__op_Inequality1_fn(XmlValue* xt, double* value, bool* __retval)
{
    *__retval = XmlValue::op_Inequality1(xt, *value);
}

// public static operator !=(Uno.Data.Xml.XmlValue xt, float value) :217
void XmlValue__op_Inequality2_fn(XmlValue* xt, float* value, bool* __retval)
{
    *__retval = XmlValue::op_Inequality2(xt, *value);
}

// public static operator !=(Uno.Data.Xml.XmlValue xt, int value) :211
void XmlValue__op_Inequality3_fn(XmlValue* xt, int* value, bool* __retval)
{
    *__retval = XmlValue::op_Inequality3(xt, *value);
}

// public static operator !=(Uno.Data.Xml.XmlValue xt, long value) :214
void XmlValue__op_Inequality4_fn(XmlValue* xt, int64_t* value, bool* __retval)
{
    *__retval = XmlValue::op_Inequality4(xt, *value);
}

// public static operator !=(Uno.Data.Xml.XmlValue xt, string value) :208
void XmlValue__op_Inequality5_fn(XmlValue* xt, uString* value, bool* __retval)
{
    *__retval = XmlValue::op_Inequality5(xt, value);
}

// public void Set(bool value) :109
void XmlValue__Set_fn(XmlValue* __this, bool* value)
{
    __this->Set(*value);
}

// public void Set(double value) :104
void XmlValue__Set1_fn(XmlValue* __this, double* value)
{
    __this->Set1(*value);
}

// public void Set(float value) :99
void XmlValue__Set2_fn(XmlValue* __this, float* value)
{
    __this->Set2(*value);
}

// public void Set(int value) :89
void XmlValue__Set3_fn(XmlValue* __this, int* value)
{
    __this->Set3(*value);
}

// public void Set(long value) :94
void XmlValue__Set4_fn(XmlValue* __this, int64_t* value)
{
    __this->Set4(*value);
}

// public void Set(string value) :84
void XmlValue__Set5_fn(XmlValue* __this, uString* value)
{
    __this->Set5(value);
}

// private bool TryParseValue(Uno.Action action) :225
void XmlValue__TryParseValue_fn(XmlValue* __this, uDelegate* action, bool* __retval)
{
    *__retval = __this->TryParseValue(action);
}

// public Uno.Data.Xml.XmlValueType get_Type() :170
void XmlValue__get_Type_fn(XmlValue* __this, int* __retval)
{
    *__retval = __this->Type();
}

// public generated object get_Value() :82
void XmlValue__get_Value_fn(XmlValue* __this, uObject** __retval)
{
    *__retval = __this->Value();
}

// public generated void set_Value(object value) :82
void XmlValue__set_Value_fn(XmlValue* __this, uObject* value)
{
    __this->Value(value);
}

// public XmlValue() [instance] :49
void XmlValue::ctor_()
{
}

// public XmlValue(bool value) [instance] :77
void XmlValue::ctor_1(bool value)
{
    Value(uBox(::TYPES[16/*bool*/], value));
}

// public XmlValue(double value) [instance] :72
void XmlValue::ctor_2(double value)
{
    Value(uBox(::TYPES[17/*double*/], value));
}

// public XmlValue(float value) [instance] :67
void XmlValue::ctor_3(float value)
{
    Value(uBox(::TYPES[18/*float*/], value));
}

// public XmlValue(int value) [instance] :57
void XmlValue::ctor_4(int value)
{
    Value(uBox<int>(::TYPES[19/*int*/], value));
}

// public XmlValue(long value) [instance] :62
void XmlValue::ctor_5(int64_t value)
{
    Value(uBox<int64_t>(::TYPES[20/*long*/], value));
}

// public XmlValue(string value) [instance] :52
void XmlValue::ctor_6(uString* value)
{
    Value(value);
}

// public bool AsBool() [instance] :159
bool XmlValue::AsBool()
{
    uStackFrame __("Uno.Data.Xml.XmlValue", "AsBool()");

    if (uIs((uObject*)Value(), ::TYPES[16/*bool*/]))
        return uUnbox<bool>(::TYPES[16/*bool*/], Value());

    return ::g::Uno::Bool::Parse(AsString());
}

// public double AsDouble() [instance] :150
double XmlValue::AsDouble()
{
    uStackFrame __("Uno.Data.Xml.XmlValue", "AsDouble()");

    if (uIs((uObject*)Value(), ::TYPES[17/*double*/]))
        return uUnbox<double>(::TYPES[17/*double*/], Value());

    return ::g::Uno::Double::Parse(AsString());
}

// public float AsFloat() [instance] :141
float XmlValue::AsFloat()
{
    uStackFrame __("Uno.Data.Xml.XmlValue", "AsFloat()");

    if (uIs((uObject*)Value(), ::TYPES[18/*float*/]))
        return uUnbox<float>(::TYPES[18/*float*/], Value());

    return ::g::Uno::Float::Parse(AsString());
}

// public int AsInt() [instance] :123
int XmlValue::AsInt()
{
    uStackFrame __("Uno.Data.Xml.XmlValue", "AsInt()");

    if (uIs((uObject*)Value(), ::TYPES[19/*int*/]))
        return uUnbox<int>(::TYPES[19/*int*/], Value());

    return ::g::Uno::Int::Parse(AsString());
}

// public long AsLong() [instance] :132
int64_t XmlValue::AsLong()
{
    uStackFrame __("Uno.Data.Xml.XmlValue", "AsLong()");

    if (uIs((uObject*)Value(), ::TYPES[20/*long*/]))
        return uUnbox<int64_t>(::TYPES[20/*long*/], Value());

    return ::g::Uno::Long::Parse(AsString());
}

// public string AsString() [instance] :114
uString* XmlValue::AsString()
{
    uStackFrame __("Uno.Data.Xml.XmlValue", "AsString()");

    if (uIs((uObject*)Value(), ::TYPES[11/*string*/]))
        return uAs<uString*>(Value(), ::TYPES[11/*string*/]);

    return (Value() == NULL) ? uCast<uString*>(NULL, ::TYPES[11/*string*/]) : (uString*)::g::Uno::Object::ToString(uPtr(Value()));
}

// private void BoolParseInternal() [instance] :238
void XmlValue::BoolParseInternal()
{
    uStackFrame __("Uno.Data.Xml.XmlValue", "BoolParseInternal()");
    ::g::Uno::Bool::Parse(AsString());
}

// private void DoubleParseInternal() [instance] :258
void XmlValue::DoubleParseInternal()
{
    uStackFrame __("Uno.Data.Xml.XmlValue", "DoubleParseInternal()");
    ::g::Uno::Double::Parse(AsString());
}

// private void FloatParseInternal() [instance] :253
void XmlValue::FloatParseInternal()
{
    uStackFrame __("Uno.Data.Xml.XmlValue", "FloatParseInternal()");
    ::g::Uno::Float::Parse(AsString());
}

// private void IntParseInternal() [instance] :243
void XmlValue::IntParseInternal()
{
    uStackFrame __("Uno.Data.Xml.XmlValue", "IntParseInternal()");
    ::g::Uno::Int::Parse(AsString());
}

// private void LongParseInternal() [instance] :248
void XmlValue::LongParseInternal()
{
    uStackFrame __("Uno.Data.Xml.XmlValue", "LongParseInternal()");
    ::g::Uno::Long::Parse(AsString());
}

// public void Set(bool value) [instance] :109
void XmlValue::Set(bool value)
{
    Value(uBox(::TYPES[16/*bool*/], value));
}

// public void Set(double value) [instance] :104
void XmlValue::Set1(double value)
{
    Value(uBox(::TYPES[17/*double*/], value));
}

// public void Set(float value) [instance] :99
void XmlValue::Set2(float value)
{
    Value(uBox(::TYPES[18/*float*/], value));
}

// public void Set(int value) [instance] :89
void XmlValue::Set3(int value)
{
    Value(uBox<int>(::TYPES[19/*int*/], value));
}

// public void Set(long value) [instance] :94
void XmlValue::Set4(int64_t value)
{
    Value(uBox<int64_t>(::TYPES[20/*long*/], value));
}

// public void Set(string value) [instance] :84
void XmlValue::Set5(uString* value)
{
    Value(value);
}

// private bool TryParseValue(Uno.Action action) [instance] :225
bool XmlValue::TryParseValue(uDelegate* action)
{
    uStackFrame __("Uno.Data.Xml.XmlValue", "TryParseValue(Uno.Action)");

    try
    {
        uPtr(action)->InvokeVoid();
        return true;
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* exception_ = __t.Exception;
        return false;
    }
}

// public Uno.Data.Xml.XmlValueType get_Type() [instance] :170
int XmlValue::Type()
{
    uStackFrame __("Uno.Data.Xml.XmlValue", "get_Type()");

    if (uIs((uObject*)Value(), ::TYPES[11/*string*/]))
    {
        if (TryParseValue(uDelegate::New(::TYPES[22/*Uno.Action*/], (void*)XmlValue__BoolParseInternal_fn, this)))
            return 0;

        if (TryParseValue(uDelegate::New(::TYPES[22/*Uno.Action*/], (void*)XmlValue__IntParseInternal_fn, this)))
            return 1;

        if (TryParseValue(uDelegate::New(::TYPES[22/*Uno.Action*/], (void*)XmlValue__LongParseInternal_fn, this)))
            return 2;

        if (TryParseValue(uDelegate::New(::TYPES[22/*Uno.Action*/], (void*)XmlValue__FloatParseInternal_fn, this)))
            return 3;

        if (TryParseValue(uDelegate::New(::TYPES[22/*Uno.Action*/], (void*)XmlValue__DoubleParseInternal_fn, this)))
            return 4;
    }
    else
    {
        if (uIs((uObject*)Value(), ::TYPES[16/*bool*/]))
            return 0;

        if (uIs((uObject*)Value(), ::TYPES[19/*int*/]))
            return 1;

        if (uIs((uObject*)Value(), ::TYPES[20/*long*/]))
            return 2;

        if (uIs((uObject*)Value(), ::TYPES[18/*float*/]))
            return 3;

        if (uIs((uObject*)Value(), ::TYPES[17/*double*/]))
            return 4;
    }

    return 5;
}

// public generated object get_Value() [instance] :82
uObject* XmlValue::Value()
{
    return _Value;
}

// public generated void set_Value(object value) [instance] :82
void XmlValue::Value(uObject* value)
{
    _Value = value;
}

// public XmlValue New() [static] :49
XmlValue* XmlValue::New1()
{
    XmlValue* obj1 = (XmlValue*)uNew(XmlValue_typeof());
    obj1->ctor_();
    return obj1;
}

// public XmlValue New(bool value) [static] :77
XmlValue* XmlValue::New2(bool value)
{
    XmlValue* obj7 = (XmlValue*)uNew(XmlValue_typeof());
    obj7->ctor_1(value);
    return obj7;
}

// public XmlValue New(double value) [static] :72
XmlValue* XmlValue::New3(double value)
{
    XmlValue* obj6 = (XmlValue*)uNew(XmlValue_typeof());
    obj6->ctor_2(value);
    return obj6;
}

// public XmlValue New(float value) [static] :67
XmlValue* XmlValue::New4(float value)
{
    XmlValue* obj5 = (XmlValue*)uNew(XmlValue_typeof());
    obj5->ctor_3(value);
    return obj5;
}

// public XmlValue New(int value) [static] :57
XmlValue* XmlValue::New5(int value)
{
    XmlValue* obj3 = (XmlValue*)uNew(XmlValue_typeof());
    obj3->ctor_4(value);
    return obj3;
}

// public XmlValue New(long value) [static] :62
XmlValue* XmlValue::New6(int64_t value)
{
    XmlValue* obj4 = (XmlValue*)uNew(XmlValue_typeof());
    obj4->ctor_5(value);
    return obj4;
}

// public XmlValue New(string value) [static] :52
XmlValue* XmlValue::New7(uString* value)
{
    XmlValue* obj2 = (XmlValue*)uNew(XmlValue_typeof());
    obj2->ctor_6(value);
    return obj2;
}

// public static operator ==(Uno.Data.Xml.XmlValue xt, bool value) [static] :222
bool XmlValue::op_Equality(XmlValue* xt, bool value)
{
    uStackFrame __("Uno.Data.Xml.XmlValue", "==(Uno.Data.Xml.XmlValue,bool)");
    return uPtr(xt)->AsBool() == value;
}

// public static operator ==(Uno.Data.Xml.XmlValue xt, double value) [static] :219
bool XmlValue::op_Equality1(XmlValue* xt, double value)
{
    uStackFrame __("Uno.Data.Xml.XmlValue", "==(Uno.Data.Xml.XmlValue,double)");
    return uPtr(xt)->AsDouble() == value;
}

// public static operator ==(Uno.Data.Xml.XmlValue xt, float value) [static] :216
bool XmlValue::op_Equality2(XmlValue* xt, float value)
{
    uStackFrame __("Uno.Data.Xml.XmlValue", "==(Uno.Data.Xml.XmlValue,float)");
    return uPtr(xt)->AsFloat() == value;
}

// public static operator ==(Uno.Data.Xml.XmlValue xt, int value) [static] :210
bool XmlValue::op_Equality3(XmlValue* xt, int value)
{
    uStackFrame __("Uno.Data.Xml.XmlValue", "==(Uno.Data.Xml.XmlValue,int)");
    return uPtr(xt)->AsInt() == value;
}

// public static operator ==(Uno.Data.Xml.XmlValue xt, long value) [static] :213
bool XmlValue::op_Equality4(XmlValue* xt, int64_t value)
{
    uStackFrame __("Uno.Data.Xml.XmlValue", "==(Uno.Data.Xml.XmlValue,long)");
    return uPtr(xt)->AsLong() == value;
}

// public static operator ==(Uno.Data.Xml.XmlValue xt, string value) [static] :207
bool XmlValue::op_Equality5(XmlValue* xt, uString* value)
{
    uStackFrame __("Uno.Data.Xml.XmlValue", "==(Uno.Data.Xml.XmlValue,string)");
    return ::g::Uno::String::op_Equality(uPtr(xt)->AsString(), value);
}

// public static operator !=(Uno.Data.Xml.XmlValue xt, bool value) [static] :223
bool XmlValue::op_Inequality(XmlValue* xt, bool value)
{
    uStackFrame __("Uno.Data.Xml.XmlValue", "!=(Uno.Data.Xml.XmlValue,bool)");
    return !(uPtr(xt)->AsBool() == value);
}

// public static operator !=(Uno.Data.Xml.XmlValue xt, double value) [static] :220
bool XmlValue::op_Inequality1(XmlValue* xt, double value)
{
    uStackFrame __("Uno.Data.Xml.XmlValue", "!=(Uno.Data.Xml.XmlValue,double)");
    return !(uPtr(xt)->AsDouble() == value);
}

// public static operator !=(Uno.Data.Xml.XmlValue xt, float value) [static] :217
bool XmlValue::op_Inequality2(XmlValue* xt, float value)
{
    uStackFrame __("Uno.Data.Xml.XmlValue", "!=(Uno.Data.Xml.XmlValue,float)");
    return !(uPtr(xt)->AsFloat() == value);
}

// public static operator !=(Uno.Data.Xml.XmlValue xt, int value) [static] :211
bool XmlValue::op_Inequality3(XmlValue* xt, int value)
{
    uStackFrame __("Uno.Data.Xml.XmlValue", "!=(Uno.Data.Xml.XmlValue,int)");
    return !(uPtr(xt)->AsInt() == value);
}

// public static operator !=(Uno.Data.Xml.XmlValue xt, long value) [static] :214
bool XmlValue::op_Inequality4(XmlValue* xt, int64_t value)
{
    uStackFrame __("Uno.Data.Xml.XmlValue", "!=(Uno.Data.Xml.XmlValue,long)");
    return !(uPtr(xt)->AsLong() == value);
}

// public static operator !=(Uno.Data.Xml.XmlValue xt, string value) [static] :208
bool XmlValue::op_Inequality5(XmlValue* xt, uString* value)
{
    uStackFrame __("Uno.Data.Xml.XmlValue", "!=(Uno.Data.Xml.XmlValue,string)");
    return !::g::Uno::String::op_Equality(uPtr(xt)->AsString(), value);
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Data.Xml/0.42.0/source/$.uno
// ----------------------------------------------------------------------------------------------

// public enum XmlValueType :242
uEnumType* XmlValueType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Data.Xml.XmlValueType", ::g::Uno::Int_typeof(), 6);
    type->SetLiterals(
        "Bool", 0LL,
        "Int", 1LL,
        "Long", 2LL,
        "Float", 3LL,
        "Double", 4LL,
        "String", 5LL);
    return type;
}

}}}} // ::g::Uno::Data::Xml
