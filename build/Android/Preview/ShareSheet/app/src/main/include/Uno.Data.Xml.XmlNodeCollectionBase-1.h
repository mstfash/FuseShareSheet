// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Data.Xml/0.42.0/source/collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Data.Xml.XmlNode.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Data{namespace Xml{struct XmlLinkedNode;}}}}
namespace g{namespace Uno{namespace Data{namespace Xml{struct XmlNodeCollectionBase;}}}}

namespace g{
namespace Uno{
namespace Data{
namespace Xml{

// public abstract class XmlNodeCollectionBase<T> :8
// {
struct XmlNodeCollectionBase_type : uType
{
    ::g::Uno::Collections::IList interface0;
    ::g::Uno::Collections::ICollection interface1;
    ::g::Uno::Collections::IEnumerable interface2;
    void(*fp_Add)(::g::Uno::Data::Xml::XmlNodeCollectionBase*, ::g::Uno::Data::Xml::XmlNode*);
    void(*fp_Insert)(::g::Uno::Data::Xml::XmlNodeCollectionBase*, int*, ::g::Uno::Data::Xml::XmlNode*);
    void(*fp_Remove)(::g::Uno::Data::Xml::XmlNodeCollectionBase*, ::g::Uno::Data::Xml::XmlNode*, bool*);
    void(*fp_RemoveAt)(::g::Uno::Data::Xml::XmlNodeCollectionBase*, int*);
};

XmlNodeCollectionBase_type* XmlNodeCollectionBase_typeof();
void XmlNodeCollectionBase__ctor__fn(XmlNodeCollectionBase* __this, ::g::Uno::Data::Xml::XmlLinkedNode* owner);
void XmlNodeCollectionBase__Add_fn(XmlNodeCollectionBase* __this, ::g::Uno::Data::Xml::XmlNode* item);
void XmlNodeCollectionBase__get_Children_fn(XmlNodeCollectionBase* __this, uObject** __retval);
void XmlNodeCollectionBase__Clear_fn(XmlNodeCollectionBase* __this);
void XmlNodeCollectionBase__Contains_fn(XmlNodeCollectionBase* __this, ::g::Uno::Data::Xml::XmlNode* item, bool* __retval);
void XmlNodeCollectionBase__get_Count_fn(XmlNodeCollectionBase* __this, int* __retval);
void XmlNodeCollectionBase__get_FirstChild_fn(XmlNodeCollectionBase* __this, ::g::Uno::Data::Xml::XmlNode** __retval);
void XmlNodeCollectionBase__GetEnumerator_fn(XmlNodeCollectionBase* __this, uObject** __retval);
void XmlNodeCollectionBase__get_HasChildren_fn(XmlNodeCollectionBase* __this, bool* __retval);
void XmlNodeCollectionBase__Insert_fn(XmlNodeCollectionBase* __this, int* index, ::g::Uno::Data::Xml::XmlNode* item);
void XmlNodeCollectionBase__get_Item_fn(XmlNodeCollectionBase* __this, int* index, ::g::Uno::Data::Xml::XmlNode** __retval);
void XmlNodeCollectionBase__get_LastChild_fn(XmlNodeCollectionBase* __this, ::g::Uno::Data::Xml::XmlNode** __retval);
void XmlNodeCollectionBase__Remove_fn(XmlNodeCollectionBase* __this, ::g::Uno::Data::Xml::XmlNode* item, bool* __retval);
void XmlNodeCollectionBase__RemoveAt_fn(XmlNodeCollectionBase* __this, int* index);

struct XmlNodeCollectionBase : uObject
{
    uStrong<uObject*> _children;
    uStrong< ::g::Uno::Data::Xml::XmlLinkedNode*> _owner;

    void ctor_(::g::Uno::Data::Xml::XmlLinkedNode* owner);
    void Add(::g::Uno::Data::Xml::XmlNode* item) { (((XmlNodeCollectionBase_type*)__type)->fp_Add)(this, item); }
    uObject* Children();
    void Clear();
    bool Contains(::g::Uno::Data::Xml::XmlNode* item);
    int Count();
    ::g::Uno::Data::Xml::XmlNode* FirstChild();
    uObject* GetEnumerator();
    bool HasChildren();
    void Insert(int index, ::g::Uno::Data::Xml::XmlNode* item) { (((XmlNodeCollectionBase_type*)__type)->fp_Insert)(this, &index, item); }
    ::g::Uno::Data::Xml::XmlNode* Item(int index);
    ::g::Uno::Data::Xml::XmlNode* LastChild();
    bool Remove(::g::Uno::Data::Xml::XmlNode* item) { bool __retval; return (((XmlNodeCollectionBase_type*)__type)->fp_Remove)(this, item, &__retval), __retval; }
    void RemoveAt(int index) { (((XmlNodeCollectionBase_type*)__type)->fp_RemoveAt)(this, &index); }
    static void Add(XmlNodeCollectionBase* __this, ::g::Uno::Data::Xml::XmlNode* item) { XmlNodeCollectionBase__Add_fn(__this, item); }
    static void Insert(XmlNodeCollectionBase* __this, int index, ::g::Uno::Data::Xml::XmlNode* item) { XmlNodeCollectionBase__Insert_fn(__this, &index, item); }
    static bool Remove(XmlNodeCollectionBase* __this, ::g::Uno::Data::Xml::XmlNode* item) { bool __retval; return XmlNodeCollectionBase__Remove_fn(__this, item, &__retval), __retval; }
    static void RemoveAt(XmlNodeCollectionBase* __this, int index) { XmlNodeCollectionBase__RemoveAt_fn(__this, &index); }
};
// }

}}}} // ::g::Uno::Data::Xml
