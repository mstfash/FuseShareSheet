// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.V8.Simple.Value.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct ValueVector;}}}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{
namespace Simple{

// internal sealed extern class ValueVector :1861
// {
struct ValueVector_type : uType
{
    ::g::Uno::Collections::IList interface0;
    ::g::Uno::Collections::ICollection interface1;
    ::g::Uno::Collections::IEnumerable interface2;
};

ValueVector_type* ValueVector_typeof();
void ValueVector__ctor__fn(ValueVector* __this);
void ValueVector__Add_fn(ValueVector* __this, ::g::Fuse::Scripting::V8::Simple::Value* item);
void ValueVector__Clear_fn(ValueVector* __this);
void ValueVector__Contains_fn(ValueVector* __this, ::g::Fuse::Scripting::V8::Simple::Value* item, bool* __retval);
void ValueVector__get_Count_fn(ValueVector* __this, int* __retval);
void ValueVector__GetEnumerator_fn(ValueVector* __this, uObject** __retval);
void ValueVector__Insert_fn(ValueVector* __this, int* index, ::g::Fuse::Scripting::V8::Simple::Value* item);
void ValueVector__get_Item_fn(ValueVector* __this, int* index, ::g::Fuse::Scripting::V8::Simple::Value** __retval);
void ValueVector__New1_fn(ValueVector** __retval);
void ValueVector__Remove_fn(ValueVector* __this, ::g::Fuse::Scripting::V8::Simple::Value* item, bool* __retval);
void ValueVector__RemoveAt_fn(ValueVector* __this, int* index);

struct ValueVector : uObject
{
    uStrong< ::g::Uno::Collections::List*> _list;

    void ctor_();
    void Add(::g::Fuse::Scripting::V8::Simple::Value* item);
    void Clear();
    bool Contains(::g::Fuse::Scripting::V8::Simple::Value* item);
    int Count();
    uObject* GetEnumerator();
    void Insert(int index, ::g::Fuse::Scripting::V8::Simple::Value* item);
    ::g::Fuse::Scripting::V8::Simple::Value* Item(int index);
    bool Remove(::g::Fuse::Scripting::V8::Simple::Value* item);
    void RemoveAt(int index);
    static ValueVector* New1();
};
// }

}}}}} // ::g::Fuse::Scripting::V8::Simple
