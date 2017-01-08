// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Action-1.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Array.h>
#include <Uno.Bool.h>
#include <Uno.Collections.Dictionary-2.Bucket.h>
#include <Uno.Collections.Dictionary-2.BucketState.h>
#include <Uno.Collections.Dictionary-2.Enumerator.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.Dictionary-2.KeyCollection.Enumerator.h>
#include <Uno.Collections.Dictionary-2.KeyCollection.h>
#include <Uno.Collections.Dictionary-2.ValueCollection.Enumerator.h>
#include <Uno.Collections.Dictionary-2.ValueCollection.h>
#include <Uno.Collections.EmptyEnumerable-1.h>
#include <Uno.Collections.EmptyEnumerator-1.h>
#include <Uno.Collections.EnumerableExtensions.h>
#include <Uno.Collections.EnumerableExtensions.LinkedList-1.h>
#include <Uno.Collections.HashSet-1.Enumerator.h>
#include <Uno.Collections.HashSet-1.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IDictionary-2.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.IListExtensions.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Collections.LinkedList-1.Enumerator.h>
#include <Uno.Collections.LinkedList-1.h>
#include <Uno.Collections.LinkedListNode-1.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.ObservableList-1.h>
#include <Uno.Collections.OfTypeEnumerable-2.h>
#include <Uno.Collections.OfTypeEnumerator-2.h>
#include <Uno.Collections.OrderByCompare-1.h>
#include <Uno.Collections.PriorityQueue-1.h>
#include <Uno.Collections.PriorityQueueItem-1.h>
#include <Uno.Collections.PriorityQueueType.h>
#include <Uno.Collections.Queue-1.Enumerator.h>
#include <Uno.Collections.Queue-1.h>
#include <Uno.Collections.ReadOnlyCollection-1.h>
#include <Uno.Collections.SelectEnumerable-2.h>
#include <Uno.Collections.SelectEnumerator-2.h>
#include <Uno.Collections.Stack-1.Enumerator.h>
#include <Uno.Collections.Stack-1.h>
#include <Uno.Collections.UnionEnumerable-1.h>
#include <Uno.Collections.UnionEnumerator-1.h>
#include <Uno.Collections.WhereEnumerable-1.h>
#include <Uno.Collections.WhereEnumerator-1.h>
#include <Uno.Comparison-1.h>
#include <Uno.Delegate.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Func-2.h>
#include <Uno.Func-3.h>
#include <Uno.Generic.h>
#include <Uno.IDisposable.h>
#include <Uno.IndexOutOfRangeException.h>
#include <Uno.Int.h>
#include <Uno.InvalidOperationException.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.Predicate-1.h>
#include <Uno.Runtime.Implementation.Internal.ArrayEnumerable-1.h>
#include <Uno.String.h>
static uString* STRINGS[16];
static uType* TYPES[38];

namespace g{
namespace Uno{
namespace Collections{

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/collections/$.uno
// ---------------------------------------------------------------------------------------------------------

// internal struct Dictionary<TKey, TValue>.Bucket :18
// {
static void Dictionary__Bucket_build(uType* type)
{
    type->SetFields(0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        type->T(1), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Collections::Dictionary__BucketState_typeof(), (uintptr_t)0, uFieldFlagsConstrained);
}

uStructType* Dictionary__Bucket_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.GenericCount = 2;
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Collections.Dictionary`2.Bucket", options);
    type->fp_build_ = Dictionary__Bucket_build;
    return type;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/collections/$.uno
// ---------------------------------------------------------------------------------------------------------

// internal enum Dictionary<TKey, TValue>.BucketState :10
uEnumType* Dictionary__BucketState_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Collections.Dictionary`2.BucketState", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Empty", 0LL,
        "Used", 1LL,
        "Dummy", 2LL);
    return type;
}

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/collections/$.uno
// ---------------------------------------------------------------------------------------------------------

// public sealed class Dictionary<TKey, TValue> :8
// {
static void Dictionary_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Dictionary already contains the given key");
    ::STRINGS[1] = uString::Const("Dictionary did not contain the given key");
    ::TYPES[0] = uObject_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Collections::KeyValuePair_typeof();
    ::TYPES[2] = ::g::Uno::Collections::IEnumerable_typeof();
    ::TYPES[3] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[4] = ::g::Uno::Collections::IEnumerator1_typeof();
    ::TYPES[5] = ::g::Uno::Generic_typeof();
    ::TYPES[6] = Dictionary__Enumerator_typeof();
    ::TYPES[7] = Dictionary__KeyCollection_typeof();
    ::TYPES[8] = Dictionary__ValueCollection_typeof();
    type->SetPrecalc(
        Dictionary__Bucket_typeof()->MakeType(type->T(0), type->T(1), NULL)->Array(),
        ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(type->T(0), type->T(1), NULL),
        type->T(0),
        type->T(1),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(type->T(0), type->T(1), NULL), NULL),
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(type->T(0), type->T(1), NULL), NULL),
        ::g::Uno::Generic_typeof()->MakeMethod(0/*Equals<TKey>*/, type->T(0), NULL),
        Dictionary__Enumerator_typeof()->MakeType(type->T(0), type->T(1), NULL),
        Dictionary__KeyCollection_typeof()->MakeType(type->T(0), type->T(1), NULL),
        Dictionary__ValueCollection_typeof()->MakeType(type->T(0), type->T(1), NULL));
    type->SetInterfaces(
        ::g::Uno::Collections::IDictionary_typeof()->MakeType(type->T(0), type->T(1), NULL), offsetof(Dictionary_type, interface0),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[1/*Uno.Collections.KeyValuePair`2*/]->MakeType(type->T(0), type->T(1), NULL), NULL), offsetof(Dictionary_type, interface1),
        ::TYPES[2/*Uno.Collections.IEnumerable`1*/]->MakeType(::TYPES[1/*Uno.Collections.KeyValuePair`2*/]->MakeType(type->T(0), type->T(1), NULL), NULL), offsetof(Dictionary_type, interface2));
    type->SetFields(0,
        Dictionary__Bucket_typeof()->MakeType(type->T(0), type->T(1), NULL)->Array(), offsetof(::g::Uno::Collections::Dictionary, _buckets), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Collections::Dictionary, _count), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Collections::Dictionary, _dummies), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Collections::Dictionary, _version), 0);
    type->Reflection.SetFunctions(14,
        new uFunction("Add", NULL, (void*)Dictionary__Add_fn, 0, false, uVoid_typeof(), 2, type->T(0), type->T(1)),
        new uFunction("Clear", NULL, (void*)Dictionary__Clear_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("ContainsKey", NULL, (void*)Dictionary__ContainsKey_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type->T(0)),
        new uFunction("get_Count", NULL, (void*)Dictionary__get_Count_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("GetEnumerator", NULL, (void*)Dictionary__GetEnumerator_fn, 0, false, ::TYPES[6/*Uno.Collections.Dictionary`2.Enumerator*/]->MakeType(type->T(0), type->T(1), NULL), 0),
        new uFunction("GetEnumerator", NULL, (void*)Dictionary__GetEnumerator_boxed_fn, 0, false, ::TYPES[4/*Uno.Collections.IEnumerator`1*/]->MakeType(::TYPES[1/*Uno.Collections.KeyValuePair`2*/]->MakeType(type->T(0), type->T(1), NULL), NULL), 0),
        new uFunction("get_Item", NULL, (void*)Dictionary__get_Item_fn, 0, false, type->T(1), 1, type->T(0)),
        new uFunction("set_Item", NULL, (void*)Dictionary__set_Item_fn, 0, false, uVoid_typeof(), 2, type->T(0), type->T(1)),
        new uFunction("get_Keys", NULL, (void*)Dictionary__get_Keys_fn, 0, false, ::TYPES[7/*Uno.Collections.Dictionary`2.KeyCollection*/]->MakeType(type->T(0), type->T(1), NULL), 0),
        new uFunction(".ctor", type, (void*)Dictionary__New1_fn, 0, true, type, 0),
        new uFunction(".ctor", type, (void*)Dictionary__New2_fn, 0, true, type, 1, ::g::Uno::Collections::IDictionary_typeof()->MakeType(type->T(0), type->T(1), NULL)),
        new uFunction("Remove", NULL, (void*)Dictionary__Remove_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type->T(0)),
        new uFunction("TryGetValue", NULL, (void*)Dictionary__TryGetValue_fn, 0, false, ::g::Uno::Bool_typeof(), 2, type->T(0), type->T(1)->ByRef()),
        new uFunction("get_Values", NULL, (void*)Dictionary__get_Values_fn, 0, false, ::TYPES[8/*Uno.Collections.Dictionary`2.ValueCollection*/]->MakeType(type->T(0), type->T(1), NULL), 0));
}

Dictionary_type* Dictionary_typeof()
{
    static uSStrong<Dictionary_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.GenericCount = 2;
    options.InterfaceCount = 3;
    options.PrecalcCount = 10;
    options.ObjectSize = sizeof(Dictionary);
    options.TypeSize = sizeof(Dictionary_type);
    type = (Dictionary_type*)uClassType::New("Uno.Collections.Dictionary`2", options);
    type->fp_build_ = Dictionary_build;
    type->fp_ctor_ = (void*)Dictionary__New1_fn;
    type->interface1.fp_Add = (void(*)(uObject*, void*))Dictionary__UnoCollectionsICollectionUnoCollectionsKeyValuePairTKeyTValueAdd_fn;
    type->interface1.fp_Remove = (void(*)(uObject*, void*, bool*))Dictionary__UnoCollectionsICollectionUnoCollectionsKeyValuePairTKeyTValueRemove_fn;
    type->interface1.fp_Contains = (void(*)(uObject*, void*, bool*))Dictionary__UnoCollectionsICollectionUnoCollectionsKeyValuePairTKeyTValueContains_fn;
    type->interface0.fp_TryGetValue = (void(*)(uObject*, void*, uTRef, bool*))Dictionary__TryGetValue_fn;
    type->interface1.fp_Clear = (void(*)(uObject*))Dictionary__Clear_fn;
    type->interface1.fp_get_Count = (void(*)(uObject*, int*))Dictionary__get_Count_fn;
    type->interface2.fp_GetEnumerator = (void(*)(uObject*, uObject**))Dictionary__GetEnumerator_boxed_fn;
    return type;
}

// public Dictionary() :267
void Dictionary__ctor__fn(Dictionary* __this)
{
    __this->ctor_();
}

// public Dictionary(Uno.Collections.IDictionary<TKey, TValue> dictionary) :274
void Dictionary__ctor_1_fn(Dictionary* __this, uObject* dictionary)
{
    __this->ctor_1(dictionary);
}

// public void Add(TKey key, TValue value) :329
void Dictionary__Add_fn(Dictionary* __this, void* key, void* value)
{
    uType* __types[] = {
        __this->__type->Precalced(6/*Uno.Generic.Equals<TKey>*/),
    };
    uStackFrame __("Uno.Collections.Dictionary`2", "Add(TKey,TValue)");
    bool ret6;

    if ((__this->_count + __this->_dummies) > (uPtr(__this->_buckets)->Length() / 2))
        __this->Rehash();

    int x = ::g::Uno::Math::Abs5(::g::Uno::Object::GetHashCode(uBoxPtr(__this->__type->Precalced(2/*TKey*/), uPtr(key), U_ALLOCA(__this->__type->Precalced(2/*TKey*/)->ObjectSize)))) & (uPtr(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (uPtr(__this->_buckets)->TItem(x)[2/*State*/].Value<int>() == 0)
        {
            uPtr(__this->_buckets)->TItem(x)[2/*State*/].Value<int>() = 1;
            uPtr(__this->_buckets)->TItem(x)[1/*Value*/] = value;
            uPtr(__this->_buckets)->TItem(x)[0/*Key*/] = key;
            __this->_count++;
            __this->_version++;
            return;
        }
        else if (uPtr(__this->_buckets)->TItem(x)[2/*State*/].Value<int>() == 2)
        {
            uPtr(__this->_buckets)->TItem(x)[2/*State*/].Value<int>() = 1;
            uPtr(__this->_buckets)->TItem(x)[1/*Value*/] = value;
            uPtr(__this->_buckets)->TItem(x)[0/*Key*/] = key;
            __this->_count++;
            __this->_dummies--;
            __this->_version++;
            return;
        }
        else if (uPtr(__this->_buckets)->TItem(x)[2/*State*/].Value<int>() == 1)
        {
            if ((::g::Uno::Generic__Equals_fn(__types[0], uPtr(__this->_buckets)->TItem(x)[0/*Key*/], key, &ret6), ret6))
                U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"Dictionary ...*/]));
        }

        x++;

        if (x >= uPtr(__this->_buckets)->Length())
            x = 0;
    }
}

// public void Clear() :315
void Dictionary__Clear_fn(Dictionary* __this)
{
    __this->Clear();
}

// public bool ContainsKey(TKey key) :428
void Dictionary__ContainsKey_fn(Dictionary* __this, void* key, bool* __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(6/*Uno.Generic.Equals<TKey>*/),
    };
    uStackFrame __("Uno.Collections.Dictionary`2", "ContainsKey(TKey)");
    bool ret7;
    int x = ::g::Uno::Math::Abs5(::g::Uno::Object::GetHashCode(uBoxPtr(__this->__type->Precalced(2/*TKey*/), uPtr(key), U_ALLOCA(__this->__type->Precalced(2/*TKey*/)->ObjectSize)))) & (uPtr(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (uPtr(__this->_buckets)->TItem(x)[2/*State*/].Value<int>() == 1)
        {
            if ((::g::Uno::Generic__Equals_fn(__types[0], uPtr(__this->_buckets)->TItem(x)[0/*Key*/], key, &ret7), ret7))
                return *__retval = true, void();
        }
        else if (uPtr(__this->_buckets)->TItem(x)[2/*State*/].Value<int>() == 0)
            return *__retval = false, void();

        x++;

        if (x >= uPtr(__this->_buckets)->Length())
            x = 0;
    }
}

// public int get_Count() :299
void Dictionary__get_Count_fn(Dictionary* __this, int* __retval)
{
    *__retval = __this->Count();
}

// public Uno.Collections.Dictionary<TKey, TValue>.Enumerator GetEnumerator() :282
void Dictionary__GetEnumerator_fn(Dictionary* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(7/*Uno.Collections.Dictionary<TKey, TValue>.Enumerator*/),
    };
    uStackFrame __("Uno.Collections.Dictionary`2", "GetEnumerator()");
    uT ret8(__types[0], U_ALLOCA(__types[0]->ValueSize));
    return __retval.Store((Dictionary__Enumerator__New1_fn(__types[0], __this, &ret8), ret8)), void();
}

// public Uno.Collections.Dictionary<TKey, TValue>.Enumerator GetEnumerator() :282
void Dictionary__GetEnumerator_boxed_fn(Dictionary* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator_boxed();
}

// public TValue get_Item(TKey key) :455
void Dictionary__get_Item_fn(Dictionary* __this, void* key, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(6/*Uno.Generic.Equals<TKey>*/),
    };
    uStackFrame __("Uno.Collections.Dictionary`2", "get_Item(TKey)");
    bool ret13;
    int x = ::g::Uno::Math::Abs5(::g::Uno::Object::GetHashCode(uBoxPtr(__this->__type->Precalced(2/*TKey*/), uPtr(key), U_ALLOCA(__this->__type->Precalced(2/*TKey*/)->ObjectSize)))) & (uPtr(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (uPtr(__this->_buckets)->TItem(x)[2/*State*/].Value<int>() == 1)
        {
            if ((::g::Uno::Generic__Equals_fn(__types[0], uPtr(__this->_buckets)->TItem(x)[0/*Key*/], key, &ret13), ret13))
                return __retval.Store(uPtr(__this->_buckets)->TItem(x)[1/*Value*/]), void();
        }
        else if (uPtr(__this->_buckets)->TItem(x)[2/*State*/].Value<int>() == 0)
            U_THROW(::g::Uno::Exception::New2(::STRINGS[1/*"Dictionary ...*/]));

        x++;

        if (x >= uPtr(__this->_buckets)->Length())
            x = 0;
    }
}

// public void set_Item(TKey key, TValue value) :479
void Dictionary__set_Item_fn(Dictionary* __this, void* key, void* value)
{
    uType* __types[] = {
        __this->__type->Precalced(6/*Uno.Generic.Equals<TKey>*/),
    };
    uStackFrame __("Uno.Collections.Dictionary`2", "set_Item(TKey,TValue)");
    bool ret14;
    int x = ::g::Uno::Math::Abs5(::g::Uno::Object::GetHashCode(uBoxPtr(__this->__type->Precalced(2/*TKey*/), uPtr(key), U_ALLOCA(__this->__type->Precalced(2/*TKey*/)->ObjectSize)))) & (uPtr(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (uPtr(__this->_buckets)->TItem(x)[2/*State*/].Value<int>() == 1)
        {
            if ((::g::Uno::Generic__Equals_fn(__types[0], uPtr(__this->_buckets)->TItem(x)[0/*Key*/], key, &ret14), ret14))
            {
                uPtr(__this->_buckets)->TItem(x)[1/*Value*/] = value;
                __this->_version++;
                return;
            }
        }
        else if (uPtr(__this->_buckets)->TItem(x)[2/*State*/].Value<int>() == 0)
        {
            Dictionary__Add_fn(__this, key, value);
            return;
        }

        x++;

        if (x >= uPtr(__this->_buckets)->Length())
            x = 0;
    }
}

// public Uno.Collections.Dictionary<TKey, TValue>.KeyCollection get_Keys() :289
void Dictionary__get_Keys_fn(Dictionary* __this, Dictionary__KeyCollection** __retval)
{
    *__retval = __this->Keys();
}

// public Dictionary New() :267
void Dictionary__New1_fn(uType* __type, Dictionary** __retval)
{
    *__retval = Dictionary::New1(__type);
}

// public Dictionary New(Uno.Collections.IDictionary<TKey, TValue> dictionary) :274
void Dictionary__New2_fn(uType* __type, uObject* dictionary, Dictionary** __retval)
{
    *__retval = Dictionary::New2(__type, dictionary);
}

// private void Rehash() :302
void Dictionary__Rehash_fn(Dictionary* __this)
{
    __this->Rehash();
}

// public bool Remove(TKey key) :397
void Dictionary__Remove_fn(Dictionary* __this, void* key, bool* __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(6/*Uno.Generic.Equals<TKey>*/),
    };
    uStackFrame __("Uno.Collections.Dictionary`2", "Remove(TKey)");
    bool ret9;
    int x = ::g::Uno::Math::Abs5(::g::Uno::Object::GetHashCode(uBoxPtr(__this->__type->Precalced(2/*TKey*/), uPtr(key), U_ALLOCA(__this->__type->Precalced(2/*TKey*/)->ObjectSize)))) & (uPtr(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (uPtr(__this->_buckets)->TItem(x)[2/*State*/].Value<int>() == 1)
        {
            if ((::g::Uno::Generic__Equals_fn(__types[0], uPtr(__this->_buckets)->TItem(x)[0/*Key*/], key, &ret9), ret9))
            {
                uPtr(__this->_buckets)->TItem(x)[2/*State*/].Value<int>() = 2;
                uPtr(__this->_buckets)->TItem(x)[1/*Value*/].Default();
                uPtr(__this->_buckets)->TItem(x)[0/*Key*/].Default();
                __this->_count--;
                __this->_dummies++;
                __this->_version++;
                return *__retval = true, void();
            }
        }
        else if (uPtr(__this->_buckets)->TItem(x)[2/*State*/].Value<int>() == 0)
            return *__retval = false, void();

        x++;

        if (x >= uPtr(__this->_buckets)->Length())
            x = 0;
    }
}

// public bool TryGetValue(TKey key, TValue& value) :370
void Dictionary__TryGetValue_fn(Dictionary* __this, void* key, uTRef value, bool* __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(6/*Uno.Generic.Equals<TKey>*/),
    };
    uStackFrame __("Uno.Collections.Dictionary`2", "TryGetValue(TKey,TValue&)");
    bool ret10;
    int x = ::g::Uno::Math::Abs5(::g::Uno::Object::GetHashCode(uBoxPtr(__this->__type->Precalced(2/*TKey*/), uPtr(key), U_ALLOCA(__this->__type->Precalced(2/*TKey*/)->ObjectSize)))) & (uPtr(__this->_buckets)->Length() - 1);

    while (true)
    {
        if (uPtr(__this->_buckets)->TItem(x)[2/*State*/].Value<int>() == 1)
        {
            if ((::g::Uno::Generic__Equals_fn(__types[0], uPtr(__this->_buckets)->TItem(x)[0/*Key*/], key, &ret10), ret10))
            {
                value.Store(uPtr(__this->_buckets)->TItem(x)[1/*Value*/]);
                return *__retval = true, void();
            }
        }
        else if (uPtr(__this->_buckets)->TItem(x)[2/*State*/].Value<int>() == 0)
        {
            value.Default(__this->__type->Precalced(3/*TValue*/));
            return *__retval = false, void();
        }

        x++;

        if (x >= uPtr(__this->_buckets)->Length())
            x = 0;
    }
}

// private void Uno.Collections.ICollection<Uno.Collections.KeyValuePair<TKey, TValue>>.Add(Uno.Collections.KeyValuePair<TKey, TValue> item) :508
void Dictionary__UnoCollectionsICollectionUnoCollectionsKeyValuePairTKeyTValueAdd_fn(Dictionary* __this, void* item)
{
    uType* __types[] = {
        __this->__type->Precalced(2/*TKey*/),
        __this->__type->Precalced(1/*Uno.Collections.KeyValuePair<TKey, TValue>*/),
        __this->__type->Precalced(3/*TValue*/),
    };
    uStackFrame __("Uno.Collections.Dictionary`2", "Uno.Collections.ICollection<Uno.Collections.KeyValuePair<TKey, TValue>>.Add(Uno.Collections.KeyValuePair<TKey, TValue>)");
    uT ret11(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT item_(__types[1], U_ALLOCA(__types[1]->ValueSize));
    uT ret12(__types[2], U_ALLOCA(__types[2]->ValueSize));
    item_ = item;
    Dictionary__Add_fn(__this, (::g::Uno::Collections::KeyValuePair__get_Key_fn(&item_, __types[1], &ret11), ret11), (::g::Uno::Collections::KeyValuePair__get_Value_fn(&item_, __types[1], &ret12), ret12));
}

// private bool Uno.Collections.ICollection<Uno.Collections.KeyValuePair<TKey, TValue>>.Contains(Uno.Collections.KeyValuePair<TKey, TValue> item) :518
void Dictionary__UnoCollectionsICollectionUnoCollectionsKeyValuePairTKeyTValueContains_fn(Dictionary* __this, void* item, bool* __retval)
{
    uStackFrame __("Uno.Collections.Dictionary`2", "Uno.Collections.ICollection<Uno.Collections.KeyValuePair<TKey, TValue>>.Contains(Uno.Collections.KeyValuePair<TKey, TValue>)");
    U_THROW(::g::Uno::InvalidOperationException::New4());
}

// private bool Uno.Collections.ICollection<Uno.Collections.KeyValuePair<TKey, TValue>>.Remove(Uno.Collections.KeyValuePair<TKey, TValue> item) :513
void Dictionary__UnoCollectionsICollectionUnoCollectionsKeyValuePairTKeyTValueRemove_fn(Dictionary* __this, void* item, bool* __retval)
{
    uStackFrame __("Uno.Collections.Dictionary`2", "Uno.Collections.ICollection<Uno.Collections.KeyValuePair<TKey, TValue>>.Remove(Uno.Collections.KeyValuePair<TKey, TValue>)");
    U_THROW(::g::Uno::InvalidOperationException::New4());
}

// public Uno.Collections.Dictionary<TKey, TValue>.ValueCollection get_Values() :294
void Dictionary__get_Values_fn(Dictionary* __this, Dictionary__ValueCollection** __retval)
{
    *__retval = __this->Values();
}

// public Dictionary() [instance] :267
void Dictionary::ctor_()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.Dictionary<TKey, TValue>.Bucket[]*/),
    };
    _buckets = uArray::New(__types[0], 8);
    _count = 0;
    _dummies = 0;
}

// public Dictionary(Uno.Collections.IDictionary<TKey, TValue> dictionary) [instance] :274
void Dictionary::ctor_1(uObject* dictionary)
{
    uType* __types[] = {
        __type->Precalced(1/*Uno.Collections.KeyValuePair<TKey, TValue>*/),
        __type->Precalced(2/*TKey*/),
        __type->Precalced(3/*TValue*/),
        __type->Precalced(4/*Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<TKey, TValue>>*/),
        __type->Precalced(5/*Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<TKey, TValue>>*/),
    };
    uStackFrame __("Uno.Collections.Dictionary`2", ".ctor(Uno.Collections.IDictionary<TKey, TValue>)");
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret4(__types[1], U_ALLOCA(__types[1]->ValueSize));
    uT ret5(__types[2], U_ALLOCA(__types[2]->ValueSize));
    uT keyValuePair(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ctor_();

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(dictionary), __types[3])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[3/*Uno.Collections.IEnumerator*/])); )
    {
        keyValuePair = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), __types[4]), &ret3), ret3);
        Dictionary__Add_fn(this, (::g::Uno::Collections::KeyValuePair__get_Key_fn(&keyValuePair, __types[0], &ret4), ret4), (::g::Uno::Collections::KeyValuePair__get_Value_fn(&keyValuePair, __types[0], &ret5), ret5));
    }
}

// public void Clear() [instance] :315
void Dictionary::Clear()
{
    uStackFrame __("Uno.Collections.Dictionary`2", "Clear()");

    for (int i = 0; i < uPtr(_buckets)->Length(); i++)
    {
        uPtr(_buckets)->TItem(i)[2/*State*/].Value<int>() = 0;
        uPtr(_buckets)->TItem(i)[1/*Value*/].Default();
        uPtr(_buckets)->TItem(i)[0/*Key*/].Default();
    }

    _count = 0;
    _dummies = 0;
    _version++;
}

// public int get_Count() [instance] :299
int Dictionary::Count()
{
    return _count;
}

// public Uno.Collections.Dictionary<TKey, TValue>.Enumerator GetEnumerator() [instance] :282
uObject* Dictionary::GetEnumerator_boxed()
{
    uType* __types[] = {
        __type->Precalced(7/*Uno.Collections.Dictionary<TKey, TValue>.Enumerator*/),
    };
    uT ret15(__types[0], U_ALLOCA(__types[0]->ValueSize));
    return uBoxPtr(__types[0], (Dictionary__GetEnumerator_fn(this, &ret15), ret15));
}

// public Uno.Collections.Dictionary<TKey, TValue>.KeyCollection get_Keys() [instance] :289
Dictionary__KeyCollection* Dictionary::Keys()
{
    uType* __types[] = {
        __type->Precalced(8/*Uno.Collections.Dictionary<TKey, TValue>.KeyCollection*/),
    };
    return Dictionary__KeyCollection::New1(__types[0], this);
}

// private void Rehash() [instance] :302
void Dictionary::Rehash()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.Dictionary<TKey, TValue>.Bucket[]*/),
    };
    uStackFrame __("Uno.Collections.Dictionary`2", "Rehash()");
    uArray* oldBuckets = _buckets;
    _buckets = uArray::New(__types[0], uPtr(oldBuckets)->Length() * 2);
    _count = 0;
    _dummies = 0;

    for (int i = 0; i < oldBuckets->Length(); i++)
        if (uPtr(oldBuckets)->TItem(i)[2/*State*/].Value<int>() == 1)
            Dictionary__Add_fn(this, uPtr(oldBuckets)->TItem(i)[0/*Key*/], uPtr(oldBuckets)->TItem(i)[1/*Value*/]);
}

// public Uno.Collections.Dictionary<TKey, TValue>.ValueCollection get_Values() [instance] :294
Dictionary__ValueCollection* Dictionary::Values()
{
    uType* __types[] = {
        __type->Precalced(9/*Uno.Collections.Dictionary<TKey, TValue>.ValueCollection*/),
    };
    return Dictionary__ValueCollection::New1(__types[0], this);
}

// public Dictionary New() [static] :267
Dictionary* Dictionary::New1(uType* __type)
{
    Dictionary* obj1 = (Dictionary*)uNew(__type);
    obj1->ctor_();
    return obj1;
}

// public Dictionary New(Uno.Collections.IDictionary<TKey, TValue> dictionary) [static] :274
Dictionary* Dictionary::New2(uType* __type, uObject* dictionary)
{
    Dictionary* obj2 = (Dictionary*)uNew(__type);
    obj2->ctor_1(dictionary);
    return obj2;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Collections/0.42.0/extensions/$.uno
// -----------------------------------------------------------------------------------------------------

// public sealed class EmptyEnumerable<T> :5
// {
static void EmptyEnumerable_build(uType* type)
{
    ::TYPES[9] = ::g::Uno::Collections::EmptyEnumerator_typeof();
    type->SetPrecalc(
        ::g::Uno::Collections::EmptyEnumerator_typeof()->MakeType(type->T(0), NULL));
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(0), NULL), offsetof(EmptyEnumerable_type, interface0));
    type->Reflection.SetFunctions(2,
        new uFunction("GetEnumerator", NULL, (void*)EmptyEnumerable__GetEnumerator_fn, 0, false, ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0), NULL), 0),
        new uFunction(".ctor", type, (void*)EmptyEnumerable__New1_fn, 0, true, type, 0));
}

EmptyEnumerable_type* EmptyEnumerable_typeof()
{
    static uSStrong<EmptyEnumerable_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(EmptyEnumerable);
    options.TypeSize = sizeof(EmptyEnumerable_type);
    type = (EmptyEnumerable_type*)uClassType::New("Uno.Collections.EmptyEnumerable`1", options);
    type->fp_build_ = EmptyEnumerable_build;
    type->fp_ctor_ = (void*)EmptyEnumerable__New1_fn;
    type->interface0.fp_GetEnumerator = (void(*)(uObject*, uObject**))EmptyEnumerable__GetEnumerator_fn;
    return type;
}

// public generated EmptyEnumerable() :5
void EmptyEnumerable__ctor__fn(EmptyEnumerable* __this)
{
    __this->ctor_();
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() :7
void EmptyEnumerable__GetEnumerator_fn(EmptyEnumerable* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public generated EmptyEnumerable New() :5
void EmptyEnumerable__New1_fn(uType* __type, EmptyEnumerable** __retval)
{
    *__retval = EmptyEnumerable::New1(__type);
}

// public generated EmptyEnumerable() [instance] :5
void EmptyEnumerable::ctor_()
{
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() [instance] :7
uObject* EmptyEnumerable::GetEnumerator()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.EmptyEnumerator<T>*/),
    };
    uStackFrame __("Uno.Collections.EmptyEnumerable`1", "GetEnumerator()");
    return (uObject*)((::g::Uno::Collections::EmptyEnumerator*)::g::Uno::Collections::EmptyEnumerator::New1(__types[0]));
}

// public generated EmptyEnumerable New() [static] :5
EmptyEnumerable* EmptyEnumerable::New1(uType* __type)
{
    EmptyEnumerable* obj1 = (EmptyEnumerable*)uNew(__type);
    obj1->ctor_();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Collections/0.42.0/extensions/$.uno
// -----------------------------------------------------------------------------------------------------

// internal sealed class EmptyEnumerator<T> :13
// {
static void EmptyEnumerator_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0), NULL), offsetof(EmptyEnumerator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(EmptyEnumerator_type, interface1),
        ::g::Uno::Collections::IEnumerator_typeof(), offsetof(EmptyEnumerator_type, interface2));
}

EmptyEnumerator_type* EmptyEnumerator_typeof()
{
    static uSStrong<EmptyEnumerator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(EmptyEnumerator);
    options.TypeSize = sizeof(EmptyEnumerator_type);
    type = (EmptyEnumerator_type*)uClassType::New("Uno.Collections.EmptyEnumerator`1", options);
    type->fp_build_ = EmptyEnumerator_build;
    type->fp_ctor_ = (void*)EmptyEnumerator__New1_fn;
    type->interface0.fp_get_Current = (void(*)(uObject*, uTRef))EmptyEnumerator__get_Current_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))EmptyEnumerator__Dispose_fn;
    type->interface2.fp_Reset = (void(*)(uObject*))EmptyEnumerator__Reset_fn;
    type->interface2.fp_MoveNext = (void(*)(uObject*, bool*))EmptyEnumerator__MoveNext_fn;
    return type;
}

// public generated EmptyEnumerator() :13
void EmptyEnumerator__ctor__fn(EmptyEnumerator* __this)
{
    __this->ctor_();
}

// public T get_Current() :15
void EmptyEnumerator__get_Current_fn(EmptyEnumerator* __this, uTRef __retval)
{
    uStackFrame __("Uno.Collections.EmptyEnumerator`1", "get_Current()");
    U_THROW(::g::Uno::InvalidOperationException::New4());
}

// public void Dispose() :18
void EmptyEnumerator__Dispose_fn(EmptyEnumerator* __this)
{
    __this->Dispose();
}

// public bool MoveNext() :17
void EmptyEnumerator__MoveNext_fn(EmptyEnumerator* __this, bool* __retval)
{
    *__retval = __this->MoveNext();
}

// public generated EmptyEnumerator New() :13
void EmptyEnumerator__New1_fn(uType* __type, EmptyEnumerator** __retval)
{
    *__retval = EmptyEnumerator::New1(__type);
}

// public void Reset() :16
void EmptyEnumerator__Reset_fn(EmptyEnumerator* __this)
{
    __this->Reset();
}

// public generated EmptyEnumerator() [instance] :13
void EmptyEnumerator::ctor_()
{
}

// public void Dispose() [instance] :18
void EmptyEnumerator::Dispose()
{
}

// public bool MoveNext() [instance] :17
bool EmptyEnumerator::MoveNext()
{
    return false;
}

// public void Reset() [instance] :16
void EmptyEnumerator::Reset()
{
}

// public generated EmptyEnumerator New() [static] :13
EmptyEnumerator* EmptyEnumerator::New1(uType* __type)
{
    EmptyEnumerator* obj1 = (EmptyEnumerator*)uNew(__type);
    obj1->ctor_();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Collections/0.42.0/extensions/$.uno
// -----------------------------------------------------------------------------------------------------

// public static class EnumerableExtensions :27
// {
static void EnumerableExtensions_build(uType* type)
{
    ::STRINGS[2] = uString::Const("first");
    ::STRINGS[3] = uString::Const("second");
    ::STRINGS[4] = uString::Const("Impossible");
    ::TYPES[2] = ::g::Uno::Collections::IEnumerable_typeof();
    ::TYPES[3] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[4] = ::g::Uno::Collections::IEnumerator1_typeof();
    ::TYPES[10] = ::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof();
    ::TYPES[11] = ::g::Uno::Collections::OfTypeEnumerable_typeof();
    ::TYPES[12] = ::g::Uno::Comparison_typeof();
    ::TYPES[13] = ::g::Uno::Collections::OrderByCompare_typeof();
    ::TYPES[14] = ::g::Uno::Collections::SelectEnumerable_typeof();
    ::TYPES[15] = ::g::Uno::IDisposable_typeof();
    ::TYPES[16] = EnumerableExtensions__LinkedList_typeof();
    ::TYPES[0] = uObject_typeof()->Array();
    ::TYPES[17] = ::g::Uno::Collections::List_typeof();
    ::TYPES[18] = ::g::Uno::Collections::UnionEnumerable_typeof();
    ::TYPES[19] = ::g::Uno::Collections::WhereEnumerable_typeof();
    type->MethodTypes[0]->SetPrecalc(
        ::TYPES[2/*Uno.Collections.IEnumerable`1*/]->MakeType(type->MethodTypes[0]->U(0), NULL),
        ::TYPES[4/*Uno.Collections.IEnumerator`1*/]->MakeType(type->MethodTypes[0]->U(0), NULL));
    type->MethodTypes[1]->SetPrecalc(
        ::TYPES[10/*Uno.Runtime.Implementation.Internal.ArrayEnumerable`1*/]->MakeType(type->MethodTypes[1]->U(0), NULL));
    type->MethodTypes[2]->SetPrecalc(
        ::TYPES[2/*Uno.Collections.IEnumerable`1*/]->MakeType(type->MethodTypes[2]->U(0), NULL));
    type->MethodTypes[3]->SetPrecalc(
        ::TYPES[2/*Uno.Collections.IEnumerable`1*/]->MakeType(type->MethodTypes[3]->U(0), NULL),
        ::TYPES[4/*Uno.Collections.IEnumerator`1*/]->MakeType(type->MethodTypes[3]->U(0), NULL));
    type->MethodTypes[4]->SetPrecalc(
        ::TYPES[2/*Uno.Collections.IEnumerable`1*/]->MakeType(type->MethodTypes[4]->U(0), NULL),
        ::TYPES[4/*Uno.Collections.IEnumerator`1*/]->MakeType(type->MethodTypes[4]->U(0), NULL));
    type->MethodTypes[5]->SetPrecalc(
        ::TYPES[2/*Uno.Collections.IEnumerable`1*/]->MakeType(type->MethodTypes[5]->U(0), NULL),
        ::TYPES[4/*Uno.Collections.IEnumerator`1*/]->MakeType(type->MethodTypes[5]->U(0), NULL));
    type->MethodTypes[6]->SetPrecalc(
        ::TYPES[2/*Uno.Collections.IEnumerable`1*/]->MakeType(type->MethodTypes[6]->U(0), NULL),
        ::TYPES[4/*Uno.Collections.IEnumerator`1*/]->MakeType(type->MethodTypes[6]->U(0), NULL));
    type->MethodTypes[7]->SetPrecalc(
        ::TYPES[11/*Uno.Collections.OfTypeEnumerable`2*/]->MakeType(type->MethodTypes[7]->U(0), type->MethodTypes[7]->U(1), NULL));
    type->MethodTypes[8]->SetPrecalc(
        type->MakeMethod(12/*ToList<T>*/, type->MethodTypes[8]->U(0), NULL),
        ::TYPES[12/*Uno.Comparison`1*/]->MakeType(type->MethodTypes[8]->U(0), NULL),
        ::TYPES[13/*Uno.Collections.OrderByCompare`1*/]->MakeType(type->MethodTypes[8]->U(0), NULL));
    type->MethodTypes[9]->SetPrecalc(
        ::TYPES[14/*Uno.Collections.SelectEnumerable`2*/]->MakeType(type->MethodTypes[9]->U(0), type->MethodTypes[9]->U(1), NULL));
    type->MethodTypes[10]->SetPrecalc(
        ::TYPES[2/*Uno.Collections.IEnumerable`1*/]->MakeType(type->MethodTypes[10]->U(0), NULL),
        ::TYPES[4/*Uno.Collections.IEnumerator`1*/]->MakeType(type->MethodTypes[10]->U(0), NULL));
    type->MethodTypes[11]->SetPrecalc(
        ::TYPES[2/*Uno.Collections.IEnumerable`1*/]->MakeType(type->MethodTypes[11]->U(0), NULL),
        ::TYPES[4/*Uno.Collections.IEnumerator`1*/]->MakeType(type->MethodTypes[11]->U(0), NULL),
        ::TYPES[16/*Uno.Collections.EnumerableExtensions.LinkedList`1*/]->MakeType(type->MethodTypes[11]->U(0), NULL),
        type->MethodTypes[11]->U(0)->Array());
    type->MethodTypes[12]->SetPrecalc(
        ::TYPES[2/*Uno.Collections.IEnumerable`1*/]->MakeType(type->MethodTypes[12]->U(0), NULL),
        ::TYPES[4/*Uno.Collections.IEnumerator`1*/]->MakeType(type->MethodTypes[12]->U(0), NULL),
        ::TYPES[16/*Uno.Collections.EnumerableExtensions.LinkedList`1*/]->MakeType(type->MethodTypes[12]->U(0), NULL),
        ::TYPES[17/*Uno.Collections.List`1*/]->MakeType(type->MethodTypes[12]->U(0), NULL),
        ::TYPES[10/*Uno.Runtime.Implementation.Internal.ArrayEnumerable`1*/]->MakeType(type->MethodTypes[12]->U(0), NULL),
        type->MethodTypes[12]->U(0)->Array());
    type->MethodTypes[13]->SetPrecalc(
        ::TYPES[18/*Uno.Collections.UnionEnumerable`1*/]->MakeType(type->MethodTypes[13]->U(0), NULL));
    type->MethodTypes[14]->SetPrecalc(
        ::TYPES[19/*Uno.Collections.WhereEnumerable`1*/]->MakeType(type->MethodTypes[14]->U(0), NULL));
    type->Reflection.SetFunctions(15,
        new uFunction("All`1", type->MethodTypes[0], (void*)EnumerableExtensions__All_fn, 0, true, ::g::Uno::Bool_typeof(), 2, ::TYPES[2/*Uno.Collections.IEnumerable`1*/]->MakeType(type->MethodTypes[0]->U(0), NULL), ::g::Uno::Predicate_typeof()->MakeType(type->MethodTypes[0]->U(0), NULL)),
        new uFunction("AsEnumerable`1", type->MethodTypes[1], (void*)EnumerableExtensions__AsEnumerable_fn, 0, true, ::TYPES[2/*Uno.Collections.IEnumerable`1*/]->MakeType(type->MethodTypes[1]->U(0), NULL), 1, type->MethodTypes[1]->U(0)->Array()),
        new uFunction("Count`1", type->MethodTypes[2], (void*)EnumerableExtensions__Count_fn, 0, true, ::g::Uno::Int_typeof(), 1, ::TYPES[2/*Uno.Collections.IEnumerable`1*/]->MakeType(type->MethodTypes[2]->U(0), NULL)),
        new uFunction("First`1", type->MethodTypes[3], (void*)EnumerableExtensions__First_fn, 0, true, type->MethodTypes[3]->U(0), 1, ::TYPES[2/*Uno.Collections.IEnumerable`1*/]->MakeType(type->MethodTypes[3]->U(0), NULL)),
        new uFunction("FirstOrDefault`1", type->MethodTypes[4], (void*)EnumerableExtensions__FirstOrDefault_fn, 0, true, type->MethodTypes[4]->U(0), 1, ::TYPES[2/*Uno.Collections.IEnumerable`1*/]->MakeType(type->MethodTypes[4]->U(0), NULL)),
        new uFunction("FirstOrDefault`1", type->MethodTypes[5], (void*)EnumerableExtensions__FirstOrDefault1_fn, 0, true, type->MethodTypes[5]->U(0), 2, ::TYPES[2/*Uno.Collections.IEnumerable`1*/]->MakeType(type->MethodTypes[5]->U(0), NULL), ::g::Uno::Predicate_typeof()->MakeType(type->MethodTypes[5]->U(0), NULL)),
        new uFunction("IndexOf`1", type->MethodTypes[6], (void*)EnumerableExtensions__IndexOf_fn, 0, true, ::g::Uno::Int_typeof(), 2, ::TYPES[2/*Uno.Collections.IEnumerable`1*/]->MakeType(type->MethodTypes[6]->U(0), NULL), type->MethodTypes[6]->U(0)),
        new uFunction("OfType`2", type->MethodTypes[7], (void*)EnumerableExtensions__OfType_fn, 0, true, ::TYPES[2/*Uno.Collections.IEnumerable`1*/]->MakeType(type->MethodTypes[7]->U(1), NULL), 1, ::TYPES[2/*Uno.Collections.IEnumerable`1*/]->MakeType(type->MethodTypes[7]->U(0), NULL)),
        new uFunction("OrderBy`1", type->MethodTypes[8], (void*)EnumerableExtensions__OrderBy1_fn, 0, true, ::TYPES[2/*Uno.Collections.IEnumerable`1*/]->MakeType(type->MethodTypes[8]->U(0), NULL), 2, ::TYPES[2/*Uno.Collections.IEnumerable`1*/]->MakeType(type->MethodTypes[8]->U(0), NULL), ::g::Uno::Func2_typeof()->MakeType(type->MethodTypes[8]->U(0), type->MethodTypes[8]->U(0), ::g::Uno::Int_typeof(), NULL)),
        new uFunction("Select`2", type->MethodTypes[9], (void*)EnumerableExtensions__Select_fn, 0, true, ::TYPES[2/*Uno.Collections.IEnumerable`1*/]->MakeType(type->MethodTypes[9]->U(1), NULL), 2, ::TYPES[2/*Uno.Collections.IEnumerable`1*/]->MakeType(type->MethodTypes[9]->U(0), NULL), ::g::Uno::Func1_typeof()->MakeType(type->MethodTypes[9]->U(0), type->MethodTypes[9]->U(1), NULL)),
        new uFunction("SequenceEqual`1", type->MethodTypes[10], (void*)EnumerableExtensions__SequenceEqual_fn, 0, true, ::g::Uno::Bool_typeof(), 2, ::TYPES[2/*Uno.Collections.IEnumerable`1*/]->MakeType(type->MethodTypes[10]->U(0), NULL), ::TYPES[2/*Uno.Collections.IEnumerable`1*/]->MakeType(type->MethodTypes[10]->U(0), NULL)),
        new uFunction("ToArray`1", type->MethodTypes[11], (void*)EnumerableExtensions__ToArray_fn, 0, true, type->MethodTypes[11]->U(0)->Array(), 1, ::TYPES[2/*Uno.Collections.IEnumerable`1*/]->MakeType(type->MethodTypes[11]->U(0), NULL)),
        new uFunction("ToList`1", type->MethodTypes[12], (void*)EnumerableExtensions__ToList_fn, 0, true, ::TYPES[17/*Uno.Collections.List`1*/]->MakeType(type->MethodTypes[12]->U(0), NULL), 1, ::TYPES[2/*Uno.Collections.IEnumerable`1*/]->MakeType(type->MethodTypes[12]->U(0), NULL)),
        new uFunction("Union`1", type->MethodTypes[13], (void*)EnumerableExtensions__Union_fn, 0, true, ::TYPES[2/*Uno.Collections.IEnumerable`1*/]->MakeType(type->MethodTypes[13]->U(0), NULL), 2, ::TYPES[2/*Uno.Collections.IEnumerable`1*/]->MakeType(type->MethodTypes[13]->U(0), NULL), ::TYPES[2/*Uno.Collections.IEnumerable`1*/]->MakeType(type->MethodTypes[13]->U(0), NULL)),
        new uFunction("Where`1", type->MethodTypes[14], (void*)EnumerableExtensions__Where_fn, 0, true, ::TYPES[2/*Uno.Collections.IEnumerable`1*/]->MakeType(type->MethodTypes[14]->U(0), NULL), 2, ::TYPES[2/*Uno.Collections.IEnumerable`1*/]->MakeType(type->MethodTypes[14]->U(0), NULL), ::g::Uno::Predicate_typeof()->MakeType(type->MethodTypes[14]->U(0), NULL)));
}

uClassType* EnumerableExtensions_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.MethodTypeCount = 15;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Collections.EnumerableExtensions", options);
    type->MethodTypes[0] = type->NewMethodType(1, 2);
    type->MethodTypes[1] = type->NewMethodType(1, 1);
    type->MethodTypes[2] = type->NewMethodType(1, 1);
    type->MethodTypes[3] = type->NewMethodType(1, 2);
    type->MethodTypes[4] = type->NewMethodType(1, 2);
    type->MethodTypes[5] = type->NewMethodType(1, 2);
    type->MethodTypes[6] = type->NewMethodType(1, 2);
    type->MethodTypes[7] = type->NewMethodType(2, 1);
    type->MethodTypes[8] = type->NewMethodType(1, 3);
    type->MethodTypes[9] = type->NewMethodType(2, 1);
    type->MethodTypes[10] = type->NewMethodType(1, 2);
    type->MethodTypes[11] = type->NewMethodType(1, 4);
    type->MethodTypes[12] = type->NewMethodType(1, 6);
    type->MethodTypes[13] = type->NewMethodType(1, 1);
    type->MethodTypes[14] = type->NewMethodType(1, 1);
    type->fp_build_ = EnumerableExtensions_build;
    return type;
}

// public static bool All<T>(Uno.Collections.IEnumerable<T> self, Uno.Predicate<T> where) :200
void EnumerableExtensions__All_fn(uType* __type, uObject* self, uDelegate* where, bool* __retval)
{
    *__retval = EnumerableExtensions::All(__type, self, where);
}

// public static Uno.Collections.IEnumerable<T> AsEnumerable<T>(T[] self) :29
void EnumerableExtensions__AsEnumerable_fn(uType* __type, uArray* self, uObject** __retval)
{
    *__retval = EnumerableExtensions::AsEnumerable(__type, self);
}

// public static int Count<T>(Uno.Collections.IEnumerable<T> self) :133
void EnumerableExtensions__Count_fn(uType* __type, uObject* self, int* __retval)
{
    *__retval = EnumerableExtensions::Count(__type, self);
}

// public static T First<T>(Uno.Collections.IEnumerable<T> self) :163
void EnumerableExtensions__First_fn(uType* __type, uObject* self, uTRef __retval)
{
    uType* __types[] = {
        __type->U(0),
        __type->Precalced(0/*Uno.Collections.IEnumerable<T>*/),
        __type->Precalced(1/*Uno.Collections.IEnumerator<T>*/),
    };
    uStackFrame __("Uno.Collections.EnumerableExtensions", "First`1(Uno.Collections.IEnumerable<T>)");
    uT ret8(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT item(__types[0], U_ALLOCA(__types[0]->ValueSize));

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(self), __types[1])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[3/*Uno.Collections.IEnumerator*/])); )
    {
        item = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), __types[2]), &ret8), ret8);
        return __retval.Store(item), void();
    }

    U_THROW(::g::Uno::InvalidOperationException::New4());
}

// public static T FirstOrDefault<T>(Uno.Collections.IEnumerable<T> self) :178
void EnumerableExtensions__FirstOrDefault_fn(uType* __type, uObject* self, uTRef __retval)
{
    uType* __types[] = {
        __type->U(0),
        __type->Precalced(0/*Uno.Collections.IEnumerable<T>*/),
        __type->Precalced(1/*Uno.Collections.IEnumerator<T>*/),
    };
    uStackFrame __("Uno.Collections.EnumerableExtensions", "FirstOrDefault`1(Uno.Collections.IEnumerable<T>)");
    uT ret9(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT item(__types[0], U_ALLOCA(__types[0]->ValueSize));

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(self), __types[1])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[3/*Uno.Collections.IEnumerator*/])); )
    {
        item = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), __types[2]), &ret9), ret9);
        return __retval.Store(item), void();
    }

    return __retval.Store(__types[0], uT(__types[0], U_ALLOCA(__types[0]->ValueSize))), void();
}

// public static T FirstOrDefault<T>(Uno.Collections.IEnumerable<T> self, Uno.Predicate<T> where) :170
void EnumerableExtensions__FirstOrDefault1_fn(uType* __type, uObject* self, uDelegate* where, uTRef __retval)
{
    uType* __types[] = {
        __type->U(0),
        __type->Precalced(0/*Uno.Collections.IEnumerable<T>*/),
        __type->Precalced(1/*Uno.Collections.IEnumerator<T>*/),
    };
    uStackFrame __("Uno.Collections.EnumerableExtensions", "FirstOrDefault`1(Uno.Collections.IEnumerable<T>,Uno.Predicate<T>)");
    uT ret10(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT item(__types[0], U_ALLOCA(__types[0]->ValueSize));
    bool ret11;

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(self), __types[1])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[3/*Uno.Collections.IEnumerator*/])); )
    {
        item = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), __types[2]), &ret10), ret10);

        if ((uPtr(where)->Invoke(&ret11, 1, (void*)item), ret11))
            return __retval.Store(item), void();
    }

    return __retval.Store(__types[0], uT(__types[0], U_ALLOCA(__types[0]->ValueSize))), void();
}

// public static int IndexOf<T>(Uno.Collections.IEnumerable<T> self, T element) :68
void EnumerableExtensions__IndexOf_fn(uType* __type, uObject* self, void* element, int* __retval)
{
    uType* __types[] = {
        __type->U(0),
        __type->Precalced(0/*Uno.Collections.IEnumerable<T>*/),
        __type->Precalced(1/*Uno.Collections.IEnumerator<T>*/),
    };
    uStackFrame __("Uno.Collections.EnumerableExtensions", "IndexOf`1(Uno.Collections.IEnumerable<T>,T)");
    uT ret12(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT item(__types[0], U_ALLOCA(__types[0]->ValueSize));
    int i = 0;

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(self), __types[1])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[3/*Uno.Collections.IEnumerator*/])); )
    {
        item = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), __types[2]), &ret12), ret12);

        if (::g::Uno::Object::Equals(uBoxPtr(__types[0], uPtr(item), U_ALLOCA(__types[0]->ObjectSize)), uBoxPtr(__types[0], element)))
            return *__retval = i, void();

        i++;
    }

    return *__retval = -1, void();
}

// public static Uno.Collections.IEnumerable<U> OfType<T, U>(Uno.Collections.IEnumerable<T> self) :34
void EnumerableExtensions__OfType_fn(uType* __type, uObject* self, uObject** __retval)
{
    *__retval = EnumerableExtensions::OfType(__type, self);
}

// public static Uno.Collections.IEnumerable<T> OrderBy<T>(Uno.Collections.IEnumerable<T> self, Uno.Func<T, T, int> orderFunction) :46
void EnumerableExtensions__OrderBy1_fn(uType* __type, uObject* self, uDelegate* orderFunction, uObject** __retval)
{
    *__retval = EnumerableExtensions::OrderBy1(__type, self, orderFunction);
}

// public static Uno.Collections.IEnumerable<TRet> Select<T, TRet>(Uno.Collections.IEnumerable<T> self, Uno.Func<T, TRet> func) :53
void EnumerableExtensions__Select_fn(uType* __type, uObject* self, uDelegate* func, uObject** __retval)
{
    *__retval = EnumerableExtensions::Select(__type, self, func);
}

// public static bool SequenceEqual<T>(Uno.Collections.IEnumerable<T> first, Uno.Collections.IEnumerable<T> second) :250
void EnumerableExtensions__SequenceEqual_fn(uType* __type, uObject* first, uObject* second, bool* __retval)
{
    *__retval = EnumerableExtensions::SequenceEqual(__type, first, second);
}

// public static T[] ToArray<T>(Uno.Collections.IEnumerable<T> self) :92
void EnumerableExtensions__ToArray_fn(uType* __type, uObject* self, uArray** __retval)
{
    *__retval = EnumerableExtensions::ToArray(__type, self);
}

// public static Uno.Collections.List<T> ToList<T>(Uno.Collections.IEnumerable<T> self) :108
void EnumerableExtensions__ToList_fn(uType* __type, uObject* self, ::g::Uno::Collections::List** __retval)
{
    *__retval = EnumerableExtensions::ToList(__type, self);
}

// public static Uno.Collections.IEnumerable<T> Union<T>(Uno.Collections.IEnumerable<T> self, Uno.Collections.IEnumerable<T> other) :58
void EnumerableExtensions__Union_fn(uType* __type, uObject* self, uObject* other, uObject** __retval)
{
    *__retval = EnumerableExtensions::Union(__type, self, other);
}

// public static Uno.Collections.IEnumerable<T> Where<T>(Uno.Collections.IEnumerable<T> self, Uno.Predicate<T> predicate) :63
void EnumerableExtensions__Where_fn(uType* __type, uObject* self, uDelegate* predicate, uObject** __retval)
{
    *__retval = EnumerableExtensions::Where(__type, self, predicate);
}

// public static bool All<T>(Uno.Collections.IEnumerable<T> self, Uno.Predicate<T> where) [static] :200
bool EnumerableExtensions::All(uType* __type, uObject* self, uDelegate* where)
{
    uType* __types[] = {
        __type->U(0),
        __type->Precalced(0/*Uno.Collections.IEnumerable<T>*/),
        __type->Precalced(1/*Uno.Collections.IEnumerator<T>*/),
    };
    uStackFrame __("Uno.Collections.EnumerableExtensions", "All`1(Uno.Collections.IEnumerable<T>,Uno.Predicate<T>)");
    uT ret1(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT item(__types[0], U_ALLOCA(__types[0]->ValueSize));
    bool ret2;

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(self), __types[1])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[3/*Uno.Collections.IEnumerator*/])); )
    {
        item = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), __types[2]), &ret1), ret1);

        if (!(uPtr(where)->Invoke(&ret2, 1, (void*)item), ret2))
            return false;
    }

    return true;
}

// public static Uno.Collections.IEnumerable<T> AsEnumerable<T>(T[] self) [static] :29
uObject* EnumerableExtensions::AsEnumerable(uType* __type, uArray* self)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<T>*/),
    };
    uStackFrame __("Uno.Collections.EnumerableExtensions", "AsEnumerable`1(T[])");
    return (uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(__types[0], self));
}

// public static int Count<T>(Uno.Collections.IEnumerable<T> self) [static] :133
int EnumerableExtensions::Count(uType* __type, uObject* self)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.IEnumerable<T>*/),
    };
    uStackFrame __("Uno.Collections.EnumerableExtensions", "Count`1(Uno.Collections.IEnumerable<T>)");
    int c = 0;
    uObject* enumerator = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(self), __types[0]));

    while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enumerator), ::TYPES[3/*Uno.Collections.IEnumerator*/])))
        c++;

    return c;
}

// public static Uno.Collections.IEnumerable<U> OfType<T, U>(Uno.Collections.IEnumerable<T> self) [static] :34
uObject* EnumerableExtensions::OfType(uType* __type, uObject* self)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.OfTypeEnumerable<T, U>*/),
    };
    uStackFrame __("Uno.Collections.EnumerableExtensions", "OfType`2(Uno.Collections.IEnumerable<T>)");
    return (uObject*)((::g::Uno::Collections::OfTypeEnumerable*)::g::Uno::Collections::OfTypeEnumerable::New1(__types[0], self));
}

// public static Uno.Collections.IEnumerable<T> OrderBy<T>(Uno.Collections.IEnumerable<T> self, Uno.Func<T, T, int> orderFunction) [static] :46
uObject* EnumerableExtensions::OrderBy1(uType* __type, uObject* self, uDelegate* orderFunction)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.EnumerableExtensions.ToList<T>*/),
        __type->Precalced(1/*Uno.Comparison<T>*/),
        __type->Precalced(2/*Uno.Collections.OrderByCompare<T>*/),
    };
    uStackFrame __("Uno.Collections.EnumerableExtensions", "OrderBy`1(Uno.Collections.IEnumerable<T>,Uno.Func<T, T, int>)");
    ::g::Uno::Collections::List* list = (::g::Uno::Collections::List*)EnumerableExtensions::ToList(__types[0], self);
    uPtr(list)->Sort(uDelegate::New(__types[1], (void*)::g::Uno::Collections::OrderByCompare__Compare_fn, (::g::Uno::Collections::OrderByCompare*)::g::Uno::Collections::OrderByCompare::New1(__types[2], orderFunction)));
    return (uObject*)list;
}

// public static Uno.Collections.IEnumerable<TRet> Select<T, TRet>(Uno.Collections.IEnumerable<T> self, Uno.Func<T, TRet> func) [static] :53
uObject* EnumerableExtensions::Select(uType* __type, uObject* self, uDelegate* func)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.SelectEnumerable<T, TRet>*/),
    };
    uStackFrame __("Uno.Collections.EnumerableExtensions", "Select`2(Uno.Collections.IEnumerable<T>,Uno.Func<T, TRet>)");
    return (uObject*)((::g::Uno::Collections::SelectEnumerable*)::g::Uno::Collections::SelectEnumerable::New1(__types[0], self, func));
}

// public static bool SequenceEqual<T>(Uno.Collections.IEnumerable<T> first, Uno.Collections.IEnumerable<T> second) [static] :250
bool EnumerableExtensions::SequenceEqual(uType* __type, uObject* first, uObject* second)
{
    uType* __types[] = {
        __type->U(0),
        __type->Precalced(0/*Uno.Collections.IEnumerable<T>*/),
        __type->Precalced(1/*Uno.Collections.IEnumerator<T>*/),
    };
    uStackFrame __("Uno.Collections.EnumerableExtensions", "SequenceEqual`1(Uno.Collections.IEnumerable<T>,Uno.Collections.IEnumerable<T>)");
    uT ret15(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret16(__types[0], U_ALLOCA(__types[0]->ValueSize));

    if (first == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[2/*"first"*/]));

    if (second == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[3/*"second"*/]));

    if (::g::Uno::Object::ReferenceEquals(first, second))
        return true;

    uObject* it1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(first), __types[1]));

    {
        const auto __finally_fun = [&]()
        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(it1), ::TYPES[15/*Uno.IDisposable*/]));
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        uObject* it2 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(second), __types[1]));

        {
            const auto __finally_fun = [&]()
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr(it2), ::TYPES[15/*Uno.IDisposable*/]));
            };

            const uFinally<decltype(__finally_fun)> __f(__finally_fun);

            while (true)
            {
                bool next1 = ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(it1), ::TYPES[3/*Uno.Collections.IEnumerator*/]));
                bool next2 = ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(it2), ::TYPES[3/*Uno.Collections.IEnumerator*/]));

                if (!next1 && !next2)
                    return true;

                if (next1 != next2)
                    return false;

                if (!::g::Uno::Object::Equals(uBoxPtr(__types[0], uPtr((::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(it1, __types[2]), &ret15), ret15)), U_ALLOCA(__types[0]->ObjectSize)), uBoxPtr(__types[0], (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(it2, __types[2]), &ret16), ret16))))
                    return false;
            }
        }
    }

    U_THROW(::g::Uno::Exception::New2(::STRINGS[4/*"Impossible"*/]));
}

// public static T[] ToArray<T>(Uno.Collections.IEnumerable<T> self) [static] :92
uArray* EnumerableExtensions::ToArray(uType* __type, uObject* self)
{
    uType* __types[] = {
        __type->U(0),
        __type->Precalced(0/*Uno.Collections.IEnumerable<T>*/),
        __type->Precalced(1/*Uno.Collections.IEnumerator<T>*/),
        __type->Precalced(2/*Uno.Collections.EnumerableExtensions.LinkedList<T>*/),
        __type->Precalced(3/*T[]*/),
    };
    uStackFrame __("Uno.Collections.EnumerableExtensions", "ToArray`1(Uno.Collections.IEnumerable<T>)");
    uT ret19(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT item(__types[0], U_ALLOCA(__types[0]->ValueSize));
    EnumerableExtensions__LinkedList* ret20;
    EnumerableExtensions__LinkedList* head = NULL;
    int count = 0;

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(self), __types[1])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[3/*Uno.Collections.IEnumerator*/])); )
    {
        item = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), __types[2]), &ret19), ret19);
        head = (EnumerableExtensions__LinkedList__New1_fn(__types[3], item, head, &ret20), ret20);
        count++;
    }

    uArray* res = uArray::New(__types[4], count);

    for (EnumerableExtensions__LinkedList* current = head; current != NULL; current = (EnumerableExtensions__LinkedList*)uPtr(current)->Next)
        uPtr(res)->TItem(--count) = uPtr(current)->Item();

    return res;
}

// public static Uno.Collections.List<T> ToList<T>(Uno.Collections.IEnumerable<T> self) [static] :108
::g::Uno::Collections::List* EnumerableExtensions::ToList(uType* __type, uObject* self)
{
    uType* __types[] = {
        __type->U(0),
        __type->Precalced(0/*Uno.Collections.IEnumerable<T>*/),
        __type->Precalced(1/*Uno.Collections.IEnumerator<T>*/),
        __type->Precalced(2/*Uno.Collections.EnumerableExtensions.LinkedList<T>*/),
        __type->Precalced(3/*Uno.Collections.List<T>*/),
        __type->Precalced(4/*Uno.Runtime.Implementation.Internal.ArrayEnumerable<T>*/),
        __type->Precalced(5/*T[]*/),
    };
    uStackFrame __("Uno.Collections.EnumerableExtensions", "ToList`1(Uno.Collections.IEnumerable<T>)");
    uT ret21(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT item(__types[0], U_ALLOCA(__types[0]->ValueSize));
    EnumerableExtensions__LinkedList* ret22;
    EnumerableExtensions__LinkedList* head = NULL;
    int count = 0;

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(self), __types[1])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[3/*Uno.Collections.IEnumerator*/])); )
    {
        item = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), __types[2]), &ret21), ret21);
        head = (EnumerableExtensions__LinkedList__New1_fn(__types[3], item, head, &ret22), ret22);
        count++;
    }

    ::g::Uno::Collections::List* res = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New2(__types[4], count);
    res->AddRange((uObject*)((::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable*)::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable::New1(__types[5], uArray::New(__types[6], count))));

    for (EnumerableExtensions__LinkedList* current = head; current != NULL; current = (EnumerableExtensions__LinkedList*)uPtr(current)->Next)
        ::g::Uno::Collections::List__set_Item_fn(uPtr(res), uCRef<int>(--count), uPtr(current)->Item());

    return res;
}

// public static Uno.Collections.IEnumerable<T> Union<T>(Uno.Collections.IEnumerable<T> self, Uno.Collections.IEnumerable<T> other) [static] :58
uObject* EnumerableExtensions::Union(uType* __type, uObject* self, uObject* other)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.UnionEnumerable<T>*/),
    };
    uStackFrame __("Uno.Collections.EnumerableExtensions", "Union`1(Uno.Collections.IEnumerable<T>,Uno.Collections.IEnumerable<T>)");
    return (uObject*)((::g::Uno::Collections::UnionEnumerable*)::g::Uno::Collections::UnionEnumerable::New1(__types[0], self, other));
}

// public static Uno.Collections.IEnumerable<T> Where<T>(Uno.Collections.IEnumerable<T> self, Uno.Predicate<T> predicate) [static] :63
uObject* EnumerableExtensions::Where(uType* __type, uObject* self, uDelegate* predicate)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.WhereEnumerable<T>*/),
    };
    uStackFrame __("Uno.Collections.EnumerableExtensions", "Where`1(Uno.Collections.IEnumerable<T>,Uno.Predicate<T>)");
    return (uObject*)((::g::Uno::Collections::WhereEnumerable*)::g::Uno::Collections::WhereEnumerable::New1(__types[0], self, predicate));
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/collections/$.uno
// ---------------------------------------------------------------------------------------------------------

// public struct HashSet<T>.Enumerator :535
// {
// private void Uno.Collections.IEnumerator.Reset() [adapter] :559
static void HashSet__Enumerator__UnoCollectionsIEnumeratorReset_ex(uObject* __this)
{
    HashSet__Enumerator__UnoCollectionsIEnumeratorReset_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type);
}

// public T get_Current() [adapter] :551
static void HashSet__Enumerator__get_Current_ex(uObject* __this, uTRef __retval)
{
    HashSet__Enumerator__get_Current_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type, __retval);
}

// public void Dispose() [adapter] :554
static void HashSet__Enumerator__Dispose_ex(uObject* __this)
{
    HashSet__Enumerator__Dispose_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type);
}

// public bool MoveNext() [adapter] :566
static void HashSet__Enumerator__MoveNext_ex(uObject* __this, bool* __retval)
{
    HashSet__Enumerator__MoveNext_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type, __retval);
}

static void HashSet__Enumerator_build(uType* type)
{
    ::STRINGS[5] = uString::Const("Collection was modified");
    ::TYPES[20] = ::g::Uno::Collections::Dictionary__Bucket_typeof();
    type->SetPrecalc(
        ::g::Uno::Collections::Dictionary__Bucket_typeof()->MakeType(type->T(0), ::g::Uno::Bool_typeof(), NULL));
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0), NULL), offsetof(HashSet__Enumerator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(HashSet__Enumerator_type, interface1),
        ::g::Uno::Collections::IEnumerator_typeof(), offsetof(HashSet__Enumerator_type, interface2));
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(type->T(0), ::g::Uno::Bool_typeof(), NULL), (uintptr_t)0, uFieldFlagsConstrained,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Int_typeof(), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Int_typeof(), (uintptr_t)0, uFieldFlagsConstrained);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Current", type, (void*)HashSet__Enumerator__get_Current_fn, 0, false, type->T(0), 0),
        new uFunction("Dispose", type, (void*)HashSet__Enumerator__Dispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("MoveNext", type, (void*)HashSet__Enumerator__MoveNext_fn, 0, false, ::g::Uno::Bool_typeof(), 0));
}

HashSet__Enumerator_type* HashSet__Enumerator_typeof()
{
    static uSStrong<HashSet__Enumerator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.PrecalcCount = 1;
    options.TypeSize = sizeof(HashSet__Enumerator_type);
    type = (HashSet__Enumerator_type*)uStructType::New("Uno.Collections.HashSet`1.Enumerator", options);
    type->fp_build_ = HashSet__Enumerator_build;
    type->interface2.fp_Reset = HashSet__Enumerator__UnoCollectionsIEnumeratorReset_ex;
    type->interface0.fp_get_Current = (void(*)(uObject*, uTRef))HashSet__Enumerator__get_Current_ex;
    type->interface1.fp_Dispose = HashSet__Enumerator__Dispose_ex;
    type->interface2.fp_MoveNext = HashSet__Enumerator__MoveNext_ex;
    return type;
}

// internal Enumerator(Uno.Collections.Dictionary<T, bool> source) :542
void HashSet__Enumerator__ctor__fn(uTRef __this, uType* __type, ::g::Uno::Collections::Dictionary* source)
{
    uStackFrame __("Uno.Collections.HashSet`1.Enumerator", ".ctor(Uno.Collections.Dictionary<T, bool>)");
    __type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>() = source;
    __type->Field(__this, 3/*_version*/).Value<int>() = uPtr(source)->_version;
    __type->Field(__this, 2/*_iterator*/).Value<int>() = -1;
}

// public T get_Current() :551
void HashSet__Enumerator__get_Current_fn(uTRef __this, uType* __type, uTRef __retval)
{
    return __retval.Store(__type->Field(__this, 1/*_current*/)), void();
}

// public void Dispose() :554
void HashSet__Enumerator__Dispose_fn(uTRef __this, uType* __type)
{
}

// public bool MoveNext() :566
void HashSet__Enumerator__MoveNext_fn(uTRef __this, uType* __type, bool* __retval)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.Dictionary<T, bool>.Bucket*/),
    };
    uStackFrame __("Uno.Collections.HashSet`1.Enumerator", "MoveNext()");
    uT bucket(__types[0], U_ALLOCA(__types[0]->ValueSize));

    if (__type->Field(__this, 3/*_version*/).Value<int>() != uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>())->_version)
        U_THROW(::g::Uno::InvalidOperationException::New5(::STRINGS[5/*"Collection ...*/]));

    do
    {
        __type->Field(__this, 2/*_iterator*/).Value<int>()++;

        if (__type->Field(__this, 2/*_iterator*/).Value<int>() >= uPtr((uArray*)uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>())->_buckets)->Length())
            return *__retval = false, void();
    }
    while (uPtr((uArray*)uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>())->_buckets)->TItem(__type->Field(__this, 2/*_iterator*/).Value<int>())[2/*State*/].Value<int>() != 1);

    bucket = uPtr((uArray*)uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>())->_buckets)->TItem(__type->Field(__this, 2/*_iterator*/).Value<int>());
    __type->Field(__this, 1/*_current*/) = bucket[0/*Key*/];
    return *__retval = true, void();
}

// internal Enumerator New(Uno.Collections.Dictionary<T, bool> source) :542
void HashSet__Enumerator__New1_fn(uType* __type, ::g::Uno::Collections::Dictionary* source, uTRef __retval)
{
    uT obj1(__type, U_ALLOCA(__type->ValueSize));
    HashSet__Enumerator__ctor__fn(&obj1, __type, source);
    return __retval.Store(obj1), void();
}

// private void Uno.Collections.IEnumerator.Reset() :559
void HashSet__Enumerator__UnoCollectionsIEnumeratorReset_fn(uTRef __this, uType* __type)
{
    uStackFrame __("Uno.Collections.HashSet`1.Enumerator", "Uno.Collections.IEnumerator.Reset()");
    __type->Field(__this, 2/*_iterator*/).Value<int>() = -1;
    __type->Field(__this, 3/*_version*/).Value<int>() = uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>())->_version;
    __type->Field(__this, 1/*_current*/).Default();
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/collections/$.uno
// ---------------------------------------------------------------------------------------------------------

// public struct List<T>.Enumerator :1093
// {
// private void Uno.Collections.IEnumerator.Reset() [adapter] :1117
static void List__Enumerator__UnoCollectionsIEnumeratorReset_ex(uObject* __this)
{
    List__Enumerator__UnoCollectionsIEnumeratorReset_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type);
}

// public T get_Current() [adapter] :1109
static void List__Enumerator__get_Current_ex(uObject* __this, uTRef __retval)
{
    List__Enumerator__get_Current_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type, __retval);
}

// public void Dispose() [adapter] :1112
static void List__Enumerator__Dispose_ex(uObject* __this)
{
    List__Enumerator__Dispose_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type);
}

// public bool MoveNext() [adapter] :1124
static void List__Enumerator__MoveNext_ex(uObject* __this, bool* __retval)
{
    List__Enumerator__MoveNext_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type, __retval);
}

static void List__Enumerator_build(uType* type)
{
    ::STRINGS[5] = uString::Const("Collection was modified");
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0), NULL), offsetof(List__Enumerator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(List__Enumerator_type, interface1),
        ::g::Uno::Collections::IEnumerator_typeof(), offsetof(List__Enumerator_type, interface2));
    type->SetFields(0,
        ::g::Uno::Collections::List_typeof()->MakeType(type->T(0), NULL), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Int_typeof(), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Int_typeof(), (uintptr_t)0, uFieldFlagsConstrained,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Current", type, (void*)List__Enumerator__get_Current_fn, 0, false, type->T(0), 0),
        new uFunction("Dispose", type, (void*)List__Enumerator__Dispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("MoveNext", type, (void*)List__Enumerator__MoveNext_fn, 0, false, ::g::Uno::Bool_typeof(), 0));
}

List__Enumerator_type* List__Enumerator_typeof()
{
    static uSStrong<List__Enumerator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.TypeSize = sizeof(List__Enumerator_type);
    type = (List__Enumerator_type*)uStructType::New("Uno.Collections.List`1.Enumerator", options);
    type->fp_build_ = List__Enumerator_build;
    type->interface2.fp_Reset = List__Enumerator__UnoCollectionsIEnumeratorReset_ex;
    type->interface0.fp_get_Current = (void(*)(uObject*, uTRef))List__Enumerator__get_Current_ex;
    type->interface1.fp_Dispose = List__Enumerator__Dispose_ex;
    type->interface2.fp_MoveNext = List__Enumerator__MoveNext_ex;
    return type;
}

// internal Enumerator(Uno.Collections.List<T> source) :1100
void List__Enumerator__ctor__fn(uTRef __this, uType* __type, ::g::Uno::Collections::List* source)
{
    uStackFrame __("Uno.Collections.List`1.Enumerator", ".ctor(Uno.Collections.List<T>)");
    __type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::List*>() = source;
    __type->Field(__this, 1/*_version*/).Value<int>() = uPtr(source)->_version;
    __type->Field(__this, 2/*_iterator*/).Value<int>() = -1;
}

// public T get_Current() :1109
void List__Enumerator__get_Current_fn(uTRef __this, uType* __type, uTRef __retval)
{
    return __retval.Store(__type->Field(__this, 3/*_current*/)), void();
}

// public void Dispose() :1112
void List__Enumerator__Dispose_fn(uTRef __this, uType* __type)
{
}

// public bool MoveNext() :1124
void List__Enumerator__MoveNext_fn(uTRef __this, uType* __type, bool* __retval)
{
    uStackFrame __("Uno.Collections.List`1.Enumerator", "MoveNext()");

    if (uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::List*>())->_version != __type->Field(__this, 1/*_version*/).Value<int>())
        U_THROW(::g::Uno::InvalidOperationException::New5(::STRINGS[5/*"Collection ...*/]));

    __type->Field(__this, 2/*_iterator*/).Value<int>()++;

    if (__type->Field(__this, 2/*_iterator*/).Value<int>() < uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::List*>())->_used)
    {
        __type->Field(__this, 3/*_current*/) = uPtr(uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::List*>())->_data)->TItem(__type->Field(__this, 2/*_iterator*/).Value<int>());
        return *__retval = true, void();
    }

    return *__retval = false, void();
}

// internal Enumerator New(Uno.Collections.List<T> source) :1100
void List__Enumerator__New1_fn(uType* __type, ::g::Uno::Collections::List* source, uTRef __retval)
{
    uT obj1(__type, U_ALLOCA(__type->ValueSize));
    List__Enumerator__ctor__fn(&obj1, __type, source);
    return __retval.Store(obj1), void();
}

// private void Uno.Collections.IEnumerator.Reset() :1117
void List__Enumerator__UnoCollectionsIEnumeratorReset_fn(uTRef __this, uType* __type)
{
    uStackFrame __("Uno.Collections.List`1.Enumerator", "Uno.Collections.IEnumerator.Reset()");
    __type->Field(__this, 2/*_iterator*/).Value<int>() = -1;
    __type->Field(__this, 3/*_current*/).Default();
    __type->Field(__this, 1/*_version*/).Value<int>() = uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::List*>())->_version;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/collections/$.uno
// ---------------------------------------------------------------------------------------------------------

// public struct Queue<T>.Enumerator :1307
// {
// private void Uno.Collections.IEnumerator.Reset() [adapter] :1338
static void Queue__Enumerator__UnoCollectionsIEnumeratorReset_ex(uObject* __this)
{
    Queue__Enumerator__UnoCollectionsIEnumeratorReset_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type);
}

// public T get_Current() [adapter] :1324
static void Queue__Enumerator__get_Current_ex(uObject* __this, uTRef __retval)
{
    Queue__Enumerator__get_Current_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type, __retval);
}

// public void Dispose() [adapter] :1334
static void Queue__Enumerator__Dispose_ex(uObject* __this)
{
    Queue__Enumerator__Dispose_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type);
}

// public bool MoveNext() [adapter] :1345
static void Queue__Enumerator__MoveNext_ex(uObject* __this, bool* __retval)
{
    Queue__Enumerator__MoveNext_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type, __retval);
}

static void Queue__Enumerator_build(uType* type)
{
    ::STRINGS[5] = uString::Const("Collection was modified");
    ::STRINGS[6] = uString::Const("Enumerator is invalid");
    type->SetPrecalc(
        type->T(0));
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0), NULL), offsetof(Queue__Enumerator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Queue__Enumerator_type, interface1),
        ::g::Uno::Collections::IEnumerator_typeof(), offsetof(Queue__Enumerator_type, interface2));
    type->SetFields(0,
        ::g::Uno::Collections::Queue_typeof()->MakeType(type->T(0), NULL), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Int_typeof(), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Int_typeof(), (uintptr_t)0, uFieldFlagsConstrained,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Current", type, (void*)Queue__Enumerator__get_Current_fn, 0, false, type->T(0), 0),
        new uFunction("Dispose", type, (void*)Queue__Enumerator__Dispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("MoveNext", type, (void*)Queue__Enumerator__MoveNext_fn, 0, false, ::g::Uno::Bool_typeof(), 0));
}

Queue__Enumerator_type* Queue__Enumerator_typeof()
{
    static uSStrong<Queue__Enumerator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.PrecalcCount = 1;
    options.TypeSize = sizeof(Queue__Enumerator_type);
    type = (Queue__Enumerator_type*)uStructType::New("Uno.Collections.Queue`1.Enumerator", options);
    type->fp_build_ = Queue__Enumerator_build;
    type->interface2.fp_Reset = Queue__Enumerator__UnoCollectionsIEnumeratorReset_ex;
    type->interface0.fp_get_Current = (void(*)(uObject*, uTRef))Queue__Enumerator__get_Current_ex;
    type->interface1.fp_Dispose = Queue__Enumerator__Dispose_ex;
    type->interface2.fp_MoveNext = Queue__Enumerator__MoveNext_ex;
    return type;
}

// internal Enumerator(Uno.Collections.Queue<T> source) :1314
void Queue__Enumerator__ctor__fn(uTRef __this, uType* __type, ::g::Uno::Collections::Queue* source)
{
    uStackFrame __("Uno.Collections.Queue`1.Enumerator", ".ctor(Uno.Collections.Queue<T>)");
    __type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Queue*>() = source;
    __type->Field(__this, 3/*_current*/).Default();
    __type->Field(__this, 1/*_version*/).Value<int>() = uPtr(source)->_version;
    __type->Field(__this, 2/*_index*/).Value<int>() = -1;
}

// public T get_Current() :1324
void Queue__Enumerator__get_Current_fn(uTRef __this, uType* __type, uTRef __retval)
{
    uStackFrame __("Uno.Collections.Queue`1.Enumerator", "get_Current()");

    if (__type->Field(__this, 2/*_index*/).Value<int>() < 0)
        U_THROW(::g::Uno::InvalidOperationException::New5(::STRINGS[6/*"Enumerator ...*/]));

    return __retval.Store(__type->Field(__this, 3/*_current*/)), void();
}

// public void Dispose() :1334
void Queue__Enumerator__Dispose_fn(uTRef __this, uType* __type)
{
}

// public bool MoveNext() :1345
void Queue__Enumerator__MoveNext_fn(uTRef __this, uType* __type, bool* __retval)
{
    uType* __types[] = {
        __type->Precalced(0/*T*/),
    };
    uStackFrame __("Uno.Collections.Queue`1.Enumerator", "MoveNext()");
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));

    if (uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Queue*>())->_version != __type->Field(__this, 1/*_version*/).Value<int>())
        U_THROW(::g::Uno::InvalidOperationException::New5(::STRINGS[5/*"Collection ...*/]));

    __type->Field(__this, 2/*_index*/).Value<int>()++;

    if (__type->Field(__this, 2/*_index*/).Value<int>() < uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Queue*>())->_size)
    {
        __type->Field(__this, 3/*_current*/) = (::g::Uno::Collections::Queue__ElementAt_fn(uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Queue*>()), uCRef<int>(__type->Field(__this, 2/*_index*/).Value<int>()), &ret2), ret2);
        return *__retval = true, void();
    }

    return *__retval = false, void();
}

// internal Enumerator New(Uno.Collections.Queue<T> source) :1314
void Queue__Enumerator__New1_fn(uType* __type, ::g::Uno::Collections::Queue* source, uTRef __retval)
{
    uT obj1(__type, U_ALLOCA(__type->ValueSize));
    Queue__Enumerator__ctor__fn(&obj1, __type, source);
    return __retval.Store(obj1), void();
}

// private void Uno.Collections.IEnumerator.Reset() :1338
void Queue__Enumerator__UnoCollectionsIEnumeratorReset_fn(uTRef __this, uType* __type)
{
    uStackFrame __("Uno.Collections.Queue`1.Enumerator", "Uno.Collections.IEnumerator.Reset()");
    __type->Field(__this, 2/*_index*/).Value<int>() = -1;
    __type->Field(__this, 3/*_current*/).Default();
    __type->Field(__this, 1/*_version*/).Value<int>() = uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Queue*>())->_version;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/collections/$.uno
// ---------------------------------------------------------------------------------------------------------

// public struct Stack<T>.Enumerator :1535
// {
// private void Uno.Collections.IEnumerator.Reset() [adapter] :1562
static void Stack__Enumerator__UnoCollectionsIEnumeratorReset_ex(uObject* __this)
{
    Stack__Enumerator__UnoCollectionsIEnumeratorReset_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type);
}

// public T get_Current() [adapter] :1551
static void Stack__Enumerator__get_Current_ex(uObject* __this, uTRef __retval)
{
    Stack__Enumerator__get_Current_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type, __retval);
}

// public void Dispose() [adapter] :1557
static void Stack__Enumerator__Dispose_ex(uObject* __this)
{
    Stack__Enumerator__Dispose_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type);
}

// public bool MoveNext() [adapter] :1569
static void Stack__Enumerator__MoveNext_ex(uObject* __this, bool* __retval)
{
    Stack__Enumerator__MoveNext_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type, __retval);
}

static void Stack__Enumerator_build(uType* type)
{
    ::STRINGS[5] = uString::Const("Collection was modified");
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0), NULL), offsetof(Stack__Enumerator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Stack__Enumerator_type, interface1),
        ::g::Uno::Collections::IEnumerator_typeof(), offsetof(Stack__Enumerator_type, interface2));
    type->SetFields(0,
        ::g::Uno::Collections::Stack_typeof()->MakeType(type->T(0), NULL), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Int_typeof(), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Int_typeof(), (uintptr_t)0, uFieldFlagsConstrained,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Current", type, (void*)Stack__Enumerator__get_Current_fn, 0, false, type->T(0), 0),
        new uFunction("Dispose", type, (void*)Stack__Enumerator__Dispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("MoveNext", type, (void*)Stack__Enumerator__MoveNext_fn, 0, false, ::g::Uno::Bool_typeof(), 0));
}

Stack__Enumerator_type* Stack__Enumerator_typeof()
{
    static uSStrong<Stack__Enumerator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.TypeSize = sizeof(Stack__Enumerator_type);
    type = (Stack__Enumerator_type*)uStructType::New("Uno.Collections.Stack`1.Enumerator", options);
    type->fp_build_ = Stack__Enumerator_build;
    type->interface2.fp_Reset = Stack__Enumerator__UnoCollectionsIEnumeratorReset_ex;
    type->interface0.fp_get_Current = (void(*)(uObject*, uTRef))Stack__Enumerator__get_Current_ex;
    type->interface1.fp_Dispose = Stack__Enumerator__Dispose_ex;
    type->interface2.fp_MoveNext = Stack__Enumerator__MoveNext_ex;
    return type;
}

// internal Enumerator(Uno.Collections.Stack<T> source) :1542
void Stack__Enumerator__ctor__fn(uTRef __this, uType* __type, ::g::Uno::Collections::Stack* source)
{
    uStackFrame __("Uno.Collections.Stack`1.Enumerator", ".ctor(Uno.Collections.Stack<T>)");
    __type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Stack*>() = source;
    __type->Field(__this, 1/*_version*/).Value<int>() = uPtr(source)->_version;
    __type->Field(__this, 2/*_iterator*/).Value<int>() = source->_used;
}

// public T get_Current() :1551
void Stack__Enumerator__get_Current_fn(uTRef __this, uType* __type, uTRef __retval)
{
    return __retval.Store(__type->Field(__this, 3/*_current*/)), void();
}

// public void Dispose() :1557
void Stack__Enumerator__Dispose_fn(uTRef __this, uType* __type)
{
}

// public bool MoveNext() :1569
void Stack__Enumerator__MoveNext_fn(uTRef __this, uType* __type, bool* __retval)
{
    uStackFrame __("Uno.Collections.Stack`1.Enumerator", "MoveNext()");

    if (uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Stack*>())->_version != __type->Field(__this, 1/*_version*/).Value<int>())
        U_THROW(::g::Uno::InvalidOperationException::New5(::STRINGS[5/*"Collection ...*/]));

    __type->Field(__this, 2/*_iterator*/).Value<int>()--;

    if (__type->Field(__this, 2/*_iterator*/).Value<int>() >= 0)
    {
        __type->Field(__this, 3/*_current*/) = uPtr(uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Stack*>())->_data)->TItem(__type->Field(__this, 2/*_iterator*/).Value<int>());
        return *__retval = true, void();
    }

    return *__retval = false, void();
}

// internal Enumerator New(Uno.Collections.Stack<T> source) :1542
void Stack__Enumerator__New1_fn(uType* __type, ::g::Uno::Collections::Stack* source, uTRef __retval)
{
    uT obj1(__type, U_ALLOCA(__type->ValueSize));
    Stack__Enumerator__ctor__fn(&obj1, __type, source);
    return __retval.Store(obj1), void();
}

// private void Uno.Collections.IEnumerator.Reset() :1562
void Stack__Enumerator__UnoCollectionsIEnumeratorReset_fn(uTRef __this, uType* __type)
{
    uStackFrame __("Uno.Collections.Stack`1.Enumerator", "Uno.Collections.IEnumerator.Reset()");
    __type->Field(__this, 2/*_iterator*/).Value<int>() = uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Stack*>())->_used;
    __type->Field(__this, 3/*_current*/).Default();
    __type->Field(__this, 1/*_version*/).Value<int>() = uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Stack*>())->_version;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/collections/$.uno
// ---------------------------------------------------------------------------------------------------------

// public struct LinkedList<T>.Enumerator :823
// {
// public T get_Current() [adapter] :834
static void LinkedList__Enumerator__get_Current_ex(uObject* __this, uTRef __retval)
{
    LinkedList__Enumerator__get_Current_fn((LinkedList__Enumerator*)((uint8_t*)__this + sizeof(uObject)), __this->__type, __retval);
}

// public void Dispose() [adapter] :836
static void LinkedList__Enumerator__Dispose_ex(uObject* __this)
{
    LinkedList__Enumerator__Dispose_fn((LinkedList__Enumerator*)((uint8_t*)__this + sizeof(uObject)), __this->__type);
}

// public void Reset() [adapter] :841
static void LinkedList__Enumerator__Reset_ex(uObject* __this)
{
    LinkedList__Enumerator__Reset_fn((LinkedList__Enumerator*)((uint8_t*)__this + sizeof(uObject)), __this->__type);
}

// public bool MoveNext() [adapter] :846
static void LinkedList__Enumerator__MoveNext_ex(uObject* __this, bool* __retval)
{
    LinkedList__Enumerator__MoveNext_fn((LinkedList__Enumerator*)((uint8_t*)__this + sizeof(uObject)), __this->__type, __retval);
}

static void LinkedList__Enumerator_build(uType* type)
{
    type->SetPrecalc(
        type->T(0));
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0), NULL), offsetof(LinkedList__Enumerator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(LinkedList__Enumerator_type, interface1),
        ::g::Uno::Collections::IEnumerator_typeof(), offsetof(LinkedList__Enumerator_type, interface2));
    type->SetFields(0,
        ::g::Uno::Collections::LinkedList_typeof()->MakeType(type->T(0), NULL), offsetof(::g::Uno::Collections::LinkedList__Enumerator, _list), 0,
        ::g::Uno::Collections::LinkedListNode_typeof()->MakeType(type->T(0), NULL), offsetof(::g::Uno::Collections::LinkedList__Enumerator, _current), 0,
        ::g::Uno::Collections::LinkedListNode_typeof()->MakeType(type->T(0), NULL), offsetof(::g::Uno::Collections::LinkedList__Enumerator, _next), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("get_Current", type, (void*)LinkedList__Enumerator__get_Current_fn, 0, false, type->T(0), 0),
        new uFunction("Dispose", type, (void*)LinkedList__Enumerator__Dispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("MoveNext", type, (void*)LinkedList__Enumerator__MoveNext_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("Reset", type, (void*)LinkedList__Enumerator__Reset_fn, 0, false, uVoid_typeof(), 0));
}

LinkedList__Enumerator_type* LinkedList__Enumerator_typeof()
{
    static uSStrong<LinkedList__Enumerator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.PrecalcCount = 1;
    options.ValueSize = sizeof(LinkedList__Enumerator);
    options.TypeSize = sizeof(LinkedList__Enumerator_type);
    type = (LinkedList__Enumerator_type*)uStructType::New("Uno.Collections.LinkedList`1.Enumerator", options);
    type->fp_build_ = LinkedList__Enumerator_build;
    type->interface0.fp_get_Current = (void(*)(uObject*, uTRef))LinkedList__Enumerator__get_Current_ex;
    type->interface1.fp_Dispose = LinkedList__Enumerator__Dispose_ex;
    type->interface2.fp_Reset = LinkedList__Enumerator__Reset_ex;
    type->interface2.fp_MoveNext = LinkedList__Enumerator__MoveNext_ex;
    return type;
}

// internal Enumerator(Uno.Collections.LinkedList<T> list) :828
void LinkedList__Enumerator__ctor__fn(LinkedList__Enumerator* __this, uType* __type, ::g::Uno::Collections::LinkedList* list)
{
    __this->ctor_(__type, list);
}

// public T get_Current() :834
void LinkedList__Enumerator__get_Current_fn(LinkedList__Enumerator* __this, uType* __type, uTRef __retval)
{
    uType* __types[] = {
        __type->Precalced(0/*T*/),
    };
    uStackFrame __("Uno.Collections.LinkedList`1.Enumerator", "get_Current()");
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    return __retval.Store((::g::Uno::Collections::LinkedListNode__get_Value_fn(uPtr(__this->_current), &ret2), ret2)), void();
}

// public void Dispose() :836
void LinkedList__Enumerator__Dispose_fn(LinkedList__Enumerator* __this, uType* __type)
{
    __this->Dispose(__type);
}

// public bool MoveNext() :846
void LinkedList__Enumerator__MoveNext_fn(LinkedList__Enumerator* __this, uType* __type, bool* __retval)
{
    *__retval = __this->MoveNext(__type);
}

// internal Enumerator New(Uno.Collections.LinkedList<T> list) :828
void LinkedList__Enumerator__New1_fn(uType* __type, ::g::Uno::Collections::LinkedList* list, LinkedList__Enumerator* __retval)
{
    *__retval = LinkedList__Enumerator__New1(__type, list);
}

// public void Reset() :841
void LinkedList__Enumerator__Reset_fn(LinkedList__Enumerator* __this, uType* __type)
{
    __this->Reset(__type);
}

// internal Enumerator(Uno.Collections.LinkedList<T> list) [instance] :828
void LinkedList__Enumerator::ctor_(uType* __type, ::g::Uno::Collections::LinkedList* list)
{
    uStackFrame __("Uno.Collections.LinkedList`1.Enumerator", ".ctor(Uno.Collections.LinkedList<T>)");
    _list = list;
    _next = uPtr(_list)->First();
}

// public void Dispose() [instance] :836
void LinkedList__Enumerator::Dispose(uType* __type)
{
}

// public bool MoveNext() [instance] :846
bool LinkedList__Enumerator::MoveNext(uType* __type)
{
    uStackFrame __("Uno.Collections.LinkedList`1.Enumerator", "MoveNext()");

    if (_next == NULL)
        return false;

    _current = _next;
    _next = ((::g::Uno::Collections::LinkedListNode*)uPtr(_next)->Next());
    return true;
}

// public void Reset() [instance] :841
void LinkedList__Enumerator::Reset(uType* __type)
{
    uStackFrame __("Uno.Collections.LinkedList`1.Enumerator", "Reset()");
    _next = uPtr(_list)->First();
}

// internal Enumerator New(Uno.Collections.LinkedList<T> list) [static] :828
LinkedList__Enumerator LinkedList__Enumerator__New1(uType* __type, ::g::Uno::Collections::LinkedList* list)
{
    LinkedList__Enumerator obj1;
    obj1.ctor_(__type, list);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/collections/$.uno
// ---------------------------------------------------------------------------------------------------------

// public struct Dictionary<TKey, TValue>.KeyCollection.Enumerator :79
// {
// private void Uno.Collections.IEnumerator.Reset() [adapter] :104
static void Dictionary__KeyCollection__Enumerator__UnoCollectionsIEnumeratorReset_ex(uObject* __this)
{
    Dictionary__KeyCollection__Enumerator__UnoCollectionsIEnumeratorReset_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type);
}

// public TKey get_Current() [adapter] :96
static void Dictionary__KeyCollection__Enumerator__get_Current_ex(uObject* __this, uTRef __retval)
{
    Dictionary__KeyCollection__Enumerator__get_Current_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type, __retval);
}

// public void Dispose() [adapter] :99
static void Dictionary__KeyCollection__Enumerator__Dispose_ex(uObject* __this)
{
    Dictionary__KeyCollection__Enumerator__Dispose_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type);
}

// public bool MoveNext() [adapter] :111
static void Dictionary__KeyCollection__Enumerator__MoveNext_ex(uObject* __this, bool* __retval)
{
    Dictionary__KeyCollection__Enumerator__MoveNext_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type, __retval);
}

static void Dictionary__KeyCollection__Enumerator_build(uType* type)
{
    ::STRINGS[5] = uString::Const("Collection was modified");
    ::TYPES[20] = ::g::Uno::Collections::Dictionary__Bucket_typeof();
    type->SetPrecalc(
        ::g::Uno::Collections::Dictionary__Bucket_typeof()->MakeType(type->T(0), type->T(1), NULL));
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0), NULL), offsetof(Dictionary__KeyCollection__Enumerator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Dictionary__KeyCollection__Enumerator_type, interface1),
        ::g::Uno::Collections::IEnumerator_typeof(), offsetof(Dictionary__KeyCollection__Enumerator_type, interface2));
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(type->T(0), type->T(1), NULL), (uintptr_t)0, uFieldFlagsConstrained,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Int_typeof(), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Int_typeof(), (uintptr_t)0, uFieldFlagsConstrained);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Current", type, (void*)Dictionary__KeyCollection__Enumerator__get_Current_fn, 0, false, type->T(0), 0),
        new uFunction("Dispose", type, (void*)Dictionary__KeyCollection__Enumerator__Dispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("MoveNext", type, (void*)Dictionary__KeyCollection__Enumerator__MoveNext_fn, 0, false, ::g::Uno::Bool_typeof(), 0));
}

Dictionary__KeyCollection__Enumerator_type* Dictionary__KeyCollection__Enumerator_typeof()
{
    static uSStrong<Dictionary__KeyCollection__Enumerator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.GenericCount = 2;
    options.InterfaceCount = 3;
    options.PrecalcCount = 1;
    options.TypeSize = sizeof(Dictionary__KeyCollection__Enumerator_type);
    type = (Dictionary__KeyCollection__Enumerator_type*)uStructType::New("Uno.Collections.Dictionary`2.KeyCollection.Enumerator", options);
    type->fp_build_ = Dictionary__KeyCollection__Enumerator_build;
    type->interface2.fp_Reset = Dictionary__KeyCollection__Enumerator__UnoCollectionsIEnumeratorReset_ex;
    type->interface0.fp_get_Current = (void(*)(uObject*, uTRef))Dictionary__KeyCollection__Enumerator__get_Current_ex;
    type->interface1.fp_Dispose = Dictionary__KeyCollection__Enumerator__Dispose_ex;
    type->interface2.fp_MoveNext = Dictionary__KeyCollection__Enumerator__MoveNext_ex;
    return type;
}

// internal Enumerator(Uno.Collections.Dictionary<TKey, TValue> source) :87
void Dictionary__KeyCollection__Enumerator__ctor__fn(uTRef __this, uType* __type, ::g::Uno::Collections::Dictionary* source)
{
    uStackFrame __("Uno.Collections.Dictionary`2.KeyCollection.Enumerator", ".ctor(Uno.Collections.Dictionary<TKey, TValue>)");
    __type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>() = source;
    __type->Field(__this, 3/*_version*/).Value<int>() = uPtr(source)->_version;
    __type->Field(__this, 2/*_iterator*/).Value<int>() = -1;
}

// public TKey get_Current() :96
void Dictionary__KeyCollection__Enumerator__get_Current_fn(uTRef __this, uType* __type, uTRef __retval)
{
    return __retval.Store(__type->Field(__this, 1/*_current*/)), void();
}

// public void Dispose() :99
void Dictionary__KeyCollection__Enumerator__Dispose_fn(uTRef __this, uType* __type)
{
}

// public bool MoveNext() :111
void Dictionary__KeyCollection__Enumerator__MoveNext_fn(uTRef __this, uType* __type, bool* __retval)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.Dictionary<TKey, TValue>.Bucket*/),
    };
    uStackFrame __("Uno.Collections.Dictionary`2.KeyCollection.Enumerator", "MoveNext()");
    uT bucket(__types[0], U_ALLOCA(__types[0]->ValueSize));

    if (__type->Field(__this, 3/*_version*/).Value<int>() != uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>())->_version)
        U_THROW(::g::Uno::InvalidOperationException::New5(::STRINGS[5/*"Collection ...*/]));

    do
    {
        __type->Field(__this, 2/*_iterator*/).Value<int>()++;

        if (__type->Field(__this, 2/*_iterator*/).Value<int>() >= uPtr(uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>())->_buckets)->Length())
            return *__retval = false, void();
    }
    while (uPtr(uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>())->_buckets)->TItem(__type->Field(__this, 2/*_iterator*/).Value<int>())[2/*State*/].Value<int>() != 1);

    bucket = uPtr(uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>())->_buckets)->TItem(__type->Field(__this, 2/*_iterator*/).Value<int>());
    __type->Field(__this, 1/*_current*/) = bucket[0/*Key*/];
    return *__retval = true, void();
}

// internal Enumerator New(Uno.Collections.Dictionary<TKey, TValue> source) :87
void Dictionary__KeyCollection__Enumerator__New1_fn(uType* __type, ::g::Uno::Collections::Dictionary* source, uTRef __retval)
{
    uT obj1(__type, U_ALLOCA(__type->ValueSize));
    Dictionary__KeyCollection__Enumerator__ctor__fn(&obj1, __type, source);
    return __retval.Store(obj1), void();
}

// private void Uno.Collections.IEnumerator.Reset() :104
void Dictionary__KeyCollection__Enumerator__UnoCollectionsIEnumeratorReset_fn(uTRef __this, uType* __type)
{
    uStackFrame __("Uno.Collections.Dictionary`2.KeyCollection.Enumerator", "Uno.Collections.IEnumerator.Reset()");
    __type->Field(__this, 2/*_iterator*/).Value<int>() = -1;
    __type->Field(__this, 3/*_version*/).Value<int>() = uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>())->_version;
    __type->Field(__this, 1/*_current*/).Default();
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/collections/$.uno
// ---------------------------------------------------------------------------------------------------------

// public struct Dictionary<TKey, TValue>.Enumerator :25
// {
// private void Uno.Collections.IEnumerator.Reset() [adapter] :49
static void Dictionary__Enumerator__UnoCollectionsIEnumeratorReset_ex(uObject* __this)
{
    Dictionary__Enumerator__UnoCollectionsIEnumeratorReset_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type);
}

// public Uno.Collections.KeyValuePair<TKey, TValue> get_Current() [adapter] :41
static void Dictionary__Enumerator__get_Current_ex(uObject* __this, uTRef __retval)
{
    Dictionary__Enumerator__get_Current_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type, __retval);
}

// public void Dispose() [adapter] :44
static void Dictionary__Enumerator__Dispose_ex(uObject* __this)
{
    Dictionary__Enumerator__Dispose_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type);
}

// public bool MoveNext() [adapter] :56
static void Dictionary__Enumerator__MoveNext_ex(uObject* __this, bool* __retval)
{
    Dictionary__Enumerator__MoveNext_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type, __retval);
}

static void Dictionary__Enumerator_build(uType* type)
{
    ::STRINGS[5] = uString::Const("Collection was modified");
    ::TYPES[1] = ::g::Uno::Collections::KeyValuePair_typeof();
    ::TYPES[20] = ::g::Uno::Collections::Dictionary__Bucket_typeof();
    type->SetPrecalc(
        ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(type->T(0), type->T(1), NULL),
        ::g::Uno::Collections::Dictionary__Bucket_typeof()->MakeType(type->T(0), type->T(1), NULL));
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::TYPES[1/*Uno.Collections.KeyValuePair`2*/]->MakeType(type->T(0), type->T(1), NULL), NULL), offsetof(Dictionary__Enumerator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Dictionary__Enumerator_type, interface1),
        ::g::Uno::Collections::IEnumerator_typeof(), offsetof(Dictionary__Enumerator_type, interface2));
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(type->T(0), type->T(1), NULL), (uintptr_t)0, uFieldFlagsConstrained,
        ::TYPES[1/*Uno.Collections.KeyValuePair`2*/]->MakeType(type->T(0), type->T(1), NULL), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Int_typeof(), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Int_typeof(), (uintptr_t)0, uFieldFlagsConstrained);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Current", type, (void*)Dictionary__Enumerator__get_Current_fn, 0, false, ::TYPES[1/*Uno.Collections.KeyValuePair`2*/]->MakeType(type->T(0), type->T(1), NULL), 0),
        new uFunction("Dispose", type, (void*)Dictionary__Enumerator__Dispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("MoveNext", type, (void*)Dictionary__Enumerator__MoveNext_fn, 0, false, ::g::Uno::Bool_typeof(), 0));
}

Dictionary__Enumerator_type* Dictionary__Enumerator_typeof()
{
    static uSStrong<Dictionary__Enumerator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.GenericCount = 2;
    options.InterfaceCount = 3;
    options.PrecalcCount = 2;
    options.TypeSize = sizeof(Dictionary__Enumerator_type);
    type = (Dictionary__Enumerator_type*)uStructType::New("Uno.Collections.Dictionary`2.Enumerator", options);
    type->fp_build_ = Dictionary__Enumerator_build;
    type->interface2.fp_Reset = Dictionary__Enumerator__UnoCollectionsIEnumeratorReset_ex;
    type->interface0.fp_get_Current = (void(*)(uObject*, uTRef))Dictionary__Enumerator__get_Current_ex;
    type->interface1.fp_Dispose = Dictionary__Enumerator__Dispose_ex;
    type->interface2.fp_MoveNext = Dictionary__Enumerator__MoveNext_ex;
    return type;
}

// internal Enumerator(Uno.Collections.Dictionary<TKey, TValue> source) :32
void Dictionary__Enumerator__ctor__fn(uTRef __this, uType* __type, ::g::Uno::Collections::Dictionary* source)
{
    uStackFrame __("Uno.Collections.Dictionary`2.Enumerator", ".ctor(Uno.Collections.Dictionary<TKey, TValue>)");
    __type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>() = source;
    __type->Field(__this, 3/*_version*/).Value<int>() = uPtr(source)->_version;
    __type->Field(__this, 2/*_iterator*/).Value<int>() = -1;
}

// public Uno.Collections.KeyValuePair<TKey, TValue> get_Current() :41
void Dictionary__Enumerator__get_Current_fn(uTRef __this, uType* __type, uTRef __retval)
{
    return __retval.Store(__type->Field(__this, 1/*_current*/)), void();
}

// public void Dispose() :44
void Dictionary__Enumerator__Dispose_fn(uTRef __this, uType* __type)
{
}

// public bool MoveNext() :56
void Dictionary__Enumerator__MoveNext_fn(uTRef __this, uType* __type, bool* __retval)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.KeyValuePair<TKey, TValue>*/),
        __type->Precalced(1/*Uno.Collections.Dictionary<TKey, TValue>.Bucket*/),
    };
    uStackFrame __("Uno.Collections.Dictionary`2.Enumerator", "MoveNext()");
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT bucket(__types[1], U_ALLOCA(__types[1]->ValueSize));

    if (__type->Field(__this, 3/*_version*/).Value<int>() != uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>())->_version)
        U_THROW(::g::Uno::InvalidOperationException::New5(::STRINGS[5/*"Collection ...*/]));

    do
    {
        __type->Field(__this, 2/*_iterator*/).Value<int>()++;

        if (__type->Field(__this, 2/*_iterator*/).Value<int>() >= uPtr(uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>())->_buckets)->Length())
            return *__retval = false, void();
    }
    while (uPtr(uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>())->_buckets)->TItem(__type->Field(__this, 2/*_iterator*/).Value<int>())[2/*State*/].Value<int>() != 1);

    bucket = uPtr(uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>())->_buckets)->TItem(__type->Field(__this, 2/*_iterator*/).Value<int>());
    __type->Field(__this, 1/*_current*/) = (::g::Uno::Collections::KeyValuePair__New1_fn(__types[0], bucket[0/*Key*/], bucket[1/*Value*/], &ret2), ret2);
    return *__retval = true, void();
}

// internal Enumerator New(Uno.Collections.Dictionary<TKey, TValue> source) :32
void Dictionary__Enumerator__New1_fn(uType* __type, ::g::Uno::Collections::Dictionary* source, uTRef __retval)
{
    uT obj1(__type, U_ALLOCA(__type->ValueSize));
    Dictionary__Enumerator__ctor__fn(&obj1, __type, source);
    return __retval.Store(obj1), void();
}

// private void Uno.Collections.IEnumerator.Reset() :49
void Dictionary__Enumerator__UnoCollectionsIEnumeratorReset_fn(uTRef __this, uType* __type)
{
    uStackFrame __("Uno.Collections.Dictionary`2.Enumerator", "Uno.Collections.IEnumerator.Reset()");
    __type->Field(__this, 2/*_iterator*/).Value<int>() = -1;
    __type->Field(__this, 3/*_version*/).Value<int>() = uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>())->_version;
    __type->Field(__this, 1/*_current*/).Default();
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/collections/$.uno
// ---------------------------------------------------------------------------------------------------------

// public struct Dictionary<TKey, TValue>.ValueCollection.Enumerator :172
// {
// private void Uno.Collections.IEnumerator.Reset() [adapter] :196
static void Dictionary__ValueCollection__Enumerator__UnoCollectionsIEnumeratorReset_ex(uObject* __this)
{
    Dictionary__ValueCollection__Enumerator__UnoCollectionsIEnumeratorReset_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type);
}

// public TValue get_Current() [adapter] :188
static void Dictionary__ValueCollection__Enumerator__get_Current_ex(uObject* __this, uTRef __retval)
{
    Dictionary__ValueCollection__Enumerator__get_Current_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type, __retval);
}

// public void Dispose() [adapter] :191
static void Dictionary__ValueCollection__Enumerator__Dispose_ex(uObject* __this)
{
    Dictionary__ValueCollection__Enumerator__Dispose_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type);
}

// public bool MoveNext() [adapter] :203
static void Dictionary__ValueCollection__Enumerator__MoveNext_ex(uObject* __this, bool* __retval)
{
    Dictionary__ValueCollection__Enumerator__MoveNext_fn((void**)((uint8_t*)__this + sizeof(uObject)), __this->__type, __retval);
}

static void Dictionary__ValueCollection__Enumerator_build(uType* type)
{
    ::STRINGS[5] = uString::Const("Collection was modified");
    ::TYPES[20] = ::g::Uno::Collections::Dictionary__Bucket_typeof();
    type->SetPrecalc(
        ::g::Uno::Collections::Dictionary__Bucket_typeof()->MakeType(type->T(0), type->T(1), NULL));
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(1), NULL), offsetof(Dictionary__ValueCollection__Enumerator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Dictionary__ValueCollection__Enumerator_type, interface1),
        ::g::Uno::Collections::IEnumerator_typeof(), offsetof(Dictionary__ValueCollection__Enumerator_type, interface2));
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(type->T(0), type->T(1), NULL), (uintptr_t)0, uFieldFlagsConstrained,
        type->T(1), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Int_typeof(), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Int_typeof(), (uintptr_t)0, uFieldFlagsConstrained);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Current", type, (void*)Dictionary__ValueCollection__Enumerator__get_Current_fn, 0, false, type->T(1), 0),
        new uFunction("Dispose", type, (void*)Dictionary__ValueCollection__Enumerator__Dispose_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("MoveNext", type, (void*)Dictionary__ValueCollection__Enumerator__MoveNext_fn, 0, false, ::g::Uno::Bool_typeof(), 0));
}

Dictionary__ValueCollection__Enumerator_type* Dictionary__ValueCollection__Enumerator_typeof()
{
    static uSStrong<Dictionary__ValueCollection__Enumerator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.GenericCount = 2;
    options.InterfaceCount = 3;
    options.PrecalcCount = 1;
    options.TypeSize = sizeof(Dictionary__ValueCollection__Enumerator_type);
    type = (Dictionary__ValueCollection__Enumerator_type*)uStructType::New("Uno.Collections.Dictionary`2.ValueCollection.Enumerator", options);
    type->fp_build_ = Dictionary__ValueCollection__Enumerator_build;
    type->interface2.fp_Reset = Dictionary__ValueCollection__Enumerator__UnoCollectionsIEnumeratorReset_ex;
    type->interface0.fp_get_Current = (void(*)(uObject*, uTRef))Dictionary__ValueCollection__Enumerator__get_Current_ex;
    type->interface1.fp_Dispose = Dictionary__ValueCollection__Enumerator__Dispose_ex;
    type->interface2.fp_MoveNext = Dictionary__ValueCollection__Enumerator__MoveNext_ex;
    return type;
}

// internal Enumerator(Uno.Collections.Dictionary<TKey, TValue> source) :179
void Dictionary__ValueCollection__Enumerator__ctor__fn(uTRef __this, uType* __type, ::g::Uno::Collections::Dictionary* source)
{
    uStackFrame __("Uno.Collections.Dictionary`2.ValueCollection.Enumerator", ".ctor(Uno.Collections.Dictionary<TKey, TValue>)");
    __type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>() = source;
    __type->Field(__this, 3/*_version*/).Value<int>() = uPtr(source)->_version;
    __type->Field(__this, 2/*_iterator*/).Value<int>() = -1;
}

// public TValue get_Current() :188
void Dictionary__ValueCollection__Enumerator__get_Current_fn(uTRef __this, uType* __type, uTRef __retval)
{
    return __retval.Store(__type->Field(__this, 1/*_current*/)), void();
}

// public void Dispose() :191
void Dictionary__ValueCollection__Enumerator__Dispose_fn(uTRef __this, uType* __type)
{
}

// public bool MoveNext() :203
void Dictionary__ValueCollection__Enumerator__MoveNext_fn(uTRef __this, uType* __type, bool* __retval)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.Dictionary<TKey, TValue>.Bucket*/),
    };
    uStackFrame __("Uno.Collections.Dictionary`2.ValueCollection.Enumerator", "MoveNext()");
    uT bucket(__types[0], U_ALLOCA(__types[0]->ValueSize));

    if (__type->Field(__this, 3/*_version*/).Value<int>() != uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>())->_version)
        U_THROW(::g::Uno::InvalidOperationException::New5(::STRINGS[5/*"Collection ...*/]));

    do
    {
        __type->Field(__this, 2/*_iterator*/).Value<int>()++;

        if (__type->Field(__this, 2/*_iterator*/).Value<int>() >= uPtr(uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>())->_buckets)->Length())
            return *__retval = false, void();
    }
    while (uPtr(uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>())->_buckets)->TItem(__type->Field(__this, 2/*_iterator*/).Value<int>())[2/*State*/].Value<int>() != 1);

    bucket = uPtr(uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>())->_buckets)->TItem(__type->Field(__this, 2/*_iterator*/).Value<int>());
    __type->Field(__this, 1/*_current*/) = bucket[1/*Value*/];
    return *__retval = true, void();
}

// internal Enumerator New(Uno.Collections.Dictionary<TKey, TValue> source) :179
void Dictionary__ValueCollection__Enumerator__New1_fn(uType* __type, ::g::Uno::Collections::Dictionary* source, uTRef __retval)
{
    uT obj1(__type, U_ALLOCA(__type->ValueSize));
    Dictionary__ValueCollection__Enumerator__ctor__fn(&obj1, __type, source);
    return __retval.Store(obj1), void();
}

// private void Uno.Collections.IEnumerator.Reset() :196
void Dictionary__ValueCollection__Enumerator__UnoCollectionsIEnumeratorReset_fn(uTRef __this, uType* __type)
{
    uStackFrame __("Uno.Collections.Dictionary`2.ValueCollection.Enumerator", "Uno.Collections.IEnumerator.Reset()");
    __type->Field(__this, 2/*_iterator*/).Value<int>() = -1;
    __type->Field(__this, 3/*_version*/).Value<int>() = uPtr(__type->Field(__this, 0/*_source*/).Strong< ::g::Uno::Collections::Dictionary*>())->_version;
    __type->Field(__this, 1/*_current*/).Default();
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/collections/$.uno
// ---------------------------------------------------------------------------------------------------------

// public sealed class HashSet<T> :533
// {
static void HashSet_build(uType* type)
{
    ::TYPES[21] = ::g::Uno::Collections::Dictionary_typeof();
    ::TYPES[2] = ::g::Uno::Collections::IEnumerable_typeof();
    ::TYPES[3] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[4] = ::g::Uno::Collections::IEnumerator1_typeof();
    ::TYPES[22] = HashSet__Enumerator_typeof();
    type->SetPrecalc(
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(type->T(0), ::g::Uno::Bool_typeof(), NULL),
        type->T(0),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(0), NULL),
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0), NULL),
        HashSet__Enumerator_typeof()->MakeType(type->T(0), NULL));
    type->SetInterfaces(
        ::TYPES[2/*Uno.Collections.IEnumerable`1*/]->MakeType(type->T(0), NULL), offsetof(HashSet_type, interface0));
    type->SetFields(0,
        ::TYPES[21/*Uno.Collections.Dictionary`2*/]->MakeType(type->T(0), ::g::Uno::Bool_typeof(), NULL), offsetof(::g::Uno::Collections::HashSet, _map), 0);
    type->Reflection.SetFunctions(10,
        new uFunction("Add", NULL, (void*)HashSet__Add_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type->T(0)),
        new uFunction("Clear", NULL, (void*)HashSet__Clear_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("Contains", NULL, (void*)HashSet__Contains_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type->T(0)),
        new uFunction("get_Count", NULL, (void*)HashSet__get_Count_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("GetEnumerator", NULL, (void*)HashSet__GetEnumerator_fn, 0, false, ::TYPES[22/*Uno.Collections.HashSet`1.Enumerator*/]->MakeType(type->T(0), NULL), 0),
        new uFunction("GetEnumerator", NULL, (void*)HashSet__GetEnumerator_boxed_fn, 0, false, ::TYPES[4/*Uno.Collections.IEnumerator`1*/]->MakeType(type->T(0), NULL), 0),
        new uFunction(".ctor", type, (void*)HashSet__New1_fn, 0, true, type, 0),
        new uFunction(".ctor", type, (void*)HashSet__New2_fn, 0, true, type, 1, ::TYPES[2/*Uno.Collections.IEnumerable`1*/]->MakeType(type->T(0), NULL)),
        new uFunction("Remove", NULL, (void*)HashSet__Remove_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type->T(0)),
        new uFunction("SetEquals", NULL, (void*)HashSet__SetEquals_fn, 0, false, ::g::Uno::Bool_typeof(), 1, ::TYPES[2/*Uno.Collections.IEnumerable`1*/]->MakeType(type->T(0), NULL)));
}

HashSet_type* HashSet_typeof()
{
    static uSStrong<HashSet_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.PrecalcCount = 5;
    options.ObjectSize = sizeof(HashSet);
    options.TypeSize = sizeof(HashSet_type);
    type = (HashSet_type*)uClassType::New("Uno.Collections.HashSet`1", options);
    type->fp_build_ = HashSet_build;
    type->fp_ctor_ = (void*)HashSet__New1_fn;
    type->interface0.fp_GetEnumerator = (void(*)(uObject*, uObject**))HashSet__GetEnumerator_boxed_fn;
    return type;
}

// public HashSet() :589
void HashSet__ctor__fn(HashSet* __this)
{
    __this->ctor_();
}

// public HashSet(Uno.Collections.IEnumerable<T> items) :591
void HashSet__ctor_1_fn(HashSet* __this, uObject* items)
{
    __this->ctor_1(items);
}

// public bool Add(T item) :614
void HashSet__Add_fn(HashSet* __this, void* item, bool* __retval)
{
    uStackFrame __("Uno.Collections.HashSet`1", "Add(T)");
    bool ret5;
    bool result = (::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(__this->_map), item, &ret5), ret5);
    ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(__this->_map), item, uCRef(true));
    return *__retval = result, void();
}

// public void Clear() :636
void HashSet__Clear_fn(HashSet* __this)
{
    __this->Clear();
}

// public bool Contains(T item) :621
void HashSet__Contains_fn(HashSet* __this, void* item, bool* __retval)
{
    uStackFrame __("Uno.Collections.HashSet`1", "Contains(T)");
    bool ret6;
    return *__retval = (::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(__this->_map), item, &ret6), ret6), void();
}

// public int get_Count() :633
void HashSet__get_Count_fn(HashSet* __this, int* __retval)
{
    *__retval = __this->Count();
}

// public Uno.Collections.HashSet<T>.Enumerator GetEnumerator() :641
void HashSet__GetEnumerator_fn(HashSet* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(4/*Uno.Collections.HashSet<T>.Enumerator*/),
    };
    uStackFrame __("Uno.Collections.HashSet`1", "GetEnumerator()");
    uT ret7(__types[0], U_ALLOCA(__types[0]->ValueSize));
    return __retval.Store((HashSet__Enumerator__New1_fn(__types[0], __this->_map, &ret7), ret7)), void();
}

// public Uno.Collections.HashSet<T>.Enumerator GetEnumerator() :641
void HashSet__GetEnumerator_boxed_fn(HashSet* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator_boxed();
}

// public HashSet New() :589
void HashSet__New1_fn(uType* __type, HashSet** __retval)
{
    *__retval = HashSet::New1(__type);
}

// public HashSet New(Uno.Collections.IEnumerable<T> items) :591
void HashSet__New2_fn(uType* __type, uObject* items, HashSet** __retval)
{
    *__retval = HashSet::New2(__type, items);
}

// public bool Remove(T item) :626
void HashSet__Remove_fn(HashSet* __this, void* item, bool* __retval)
{
    uStackFrame __("Uno.Collections.HashSet`1", "Remove(T)");
    bool ret8;
    return *__retval = (::g::Uno::Collections::Dictionary__Remove_fn(uPtr(__this->_map), item, &ret8), ret8), void();
}

// public bool SetEquals(Uno.Collections.IEnumerable<T> that) :597
void HashSet__SetEquals_fn(HashSet* __this, uObject* that, bool* __retval)
{
    *__retval = __this->SetEquals(that);
}

// public HashSet() [instance] :589
void HashSet::ctor_()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.Dictionary<T, bool>*/),
    };
    _map = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(__types[0]));
}

// public HashSet(Uno.Collections.IEnumerable<T> items) [instance] :591
void HashSet::ctor_1(uObject* items)
{
    uType* __types[] = {
        __type->Precalced(1/*T*/),
        __type->Precalced(0/*Uno.Collections.Dictionary<T, bool>*/),
        __type->Precalced(2/*Uno.Collections.IEnumerable<T>*/),
        __type->Precalced(3/*Uno.Collections.IEnumerator<T>*/),
    };
    uStackFrame __("Uno.Collections.HashSet`1", ".ctor(Uno.Collections.IEnumerable<T>)");
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT item(__types[0], U_ALLOCA(__types[0]->ValueSize));
    bool ret4;
    _map = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(__types[1]));

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(items), __types[2])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[3/*Uno.Collections.IEnumerator*/])); )
    {
        item = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), __types[3]), &ret3), ret3);
        HashSet__Add_fn(this, item, &ret4);
    }
}

// public void Clear() [instance] :636
void HashSet::Clear()
{
    uStackFrame __("Uno.Collections.HashSet`1", "Clear()");
    uPtr(_map)->Clear();
}

// public int get_Count() [instance] :633
int HashSet::Count()
{
    uStackFrame __("Uno.Collections.HashSet`1", "get_Count()");
    return uPtr(_map)->Count();
}

// public Uno.Collections.HashSet<T>.Enumerator GetEnumerator() [instance] :641
uObject* HashSet::GetEnumerator_boxed()
{
    uType* __types[] = {
        __type->Precalced(4/*Uno.Collections.HashSet<T>.Enumerator*/),
    };
    uT ret16(__types[0], U_ALLOCA(__types[0]->ValueSize));
    return uBoxPtr(__types[0], (HashSet__GetEnumerator_fn(this, &ret16), ret16));
}

// public bool SetEquals(Uno.Collections.IEnumerable<T> that) [instance] :597
bool HashSet::SetEquals(uObject* that)
{
    uType* __types[] = {
        __type->Precalced(1/*T*/),
        __type->Precalced(4/*Uno.Collections.HashSet<T>.Enumerator*/),
        __type->Precalced(2/*Uno.Collections.IEnumerable<T>*/),
        __type->Precalced(3/*Uno.Collections.IEnumerator<T>*/),
    };
    uStackFrame __("Uno.Collections.HashSet`1", "SetEquals(Uno.Collections.IEnumerable<T>)");
    uT ret9(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret12(__types[1], U_ALLOCA(__types[1]->ValueSize));
    uT ret14(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT item(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT enum3(__types[1], U_ALLOCA(__types[1]->ValueSize));
    uT item1(__types[0], U_ALLOCA(__types[0]->ValueSize));
    bool ret10;
    bool ret11;
    bool ret13;
    bool ret15;
    HashSet* thatSet = HashSet::New1(__type);

    for (uObject* enum2 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(that), __types[2])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum2), ::TYPES[3/*Uno.Collections.IEnumerator*/])); )
    {
        item = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum2), __types[3]), &ret9), ret9);

        if (!(HashSet__Contains_fn(this, item, &ret10), ret10))
            return false;

        HashSet__Add_fn(uPtr(thatSet), item, &ret11);
    }

    for (enum3 = (HashSet__GetEnumerator_fn(this, &ret12), ret12); (HashSet__Enumerator__MoveNext_fn(&enum3, __types[1], &ret13), ret13); )
    {
        item1 = (HashSet__Enumerator__get_Current_fn(&enum3, __types[1], &ret14), ret14);

        if (!(HashSet__Contains_fn(uPtr(thatSet), item1, &ret15), ret15))
            return false;
    }

    return true;
}

// public HashSet New() [static] :589
HashSet* HashSet::New1(uType* __type)
{
    HashSet* obj1 = (HashSet*)uNew(__type);
    obj1->ctor_();
    return obj1;
}

// public HashSet New(Uno.Collections.IEnumerable<T> items) [static] :591
HashSet* HashSet::New2(uType* __type, uObject* items)
{
    HashSet* obj2 = (HashSet*)uNew(__type);
    obj2->ctor_1(items);
    return obj2;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/collections/$.uno
// ---------------------------------------------------------------------------------------------------------

// public abstract interface ICollection<T> :655
// {
uInterfaceType* ICollection_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Uno.Collections.ICollection`1", 1, 0);
    type->Reflection.SetFunctions(5,
        new uFunction("Add", NULL, NULL, offsetof(ICollection, fp_Add), false, uVoid_typeof(), 1, type->T(0)),
        new uFunction("Clear", NULL, NULL, offsetof(ICollection, fp_Clear), false, uVoid_typeof(), 0),
        new uFunction("Contains", NULL, NULL, offsetof(ICollection, fp_Contains), false, ::g::Uno::Bool_typeof(), 1, type->T(0)),
        new uFunction("get_Count", NULL, NULL, offsetof(ICollection, fp_get_Count), false, ::g::Uno::Int_typeof(), 0),
        new uFunction("Remove", NULL, NULL, offsetof(ICollection, fp_Remove), false, ::g::Uno::Bool_typeof(), 1, type->T(0)));
    return type;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/collections/$.uno
// ---------------------------------------------------------------------------------------------------------

// public abstract interface IDictionary<TKey, TValue> :673
// {
uInterfaceType* IDictionary_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Uno.Collections.IDictionary`2", 2, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("TryGetValue", NULL, NULL, offsetof(IDictionary, fp_TryGetValue), false, ::g::Uno::Bool_typeof(), 2, type->T(0), type->T(1)->ByRef()));
    return type;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/collections/$.uno
// ---------------------------------------------------------------------------------------------------------

// public abstract interface IEnumerable<T> :697
// {
uInterfaceType* IEnumerable_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Uno.Collections.IEnumerable`1", 1, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("GetEnumerator", NULL, NULL, offsetof(IEnumerable, fp_GetEnumerator), false, ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0), NULL), 0));
    return type;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/collections/$.uno
// ---------------------------------------------------------------------------------------------------------

// public abstract interface IEnumerator :711
// {
uInterfaceType* IEnumerator_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Uno.Collections.IEnumerator", 0, 0);
    type->Reflection.SetFunctions(2,
        new uFunction("MoveNext", NULL, NULL, offsetof(IEnumerator, fp_MoveNext), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("Reset", NULL, NULL, offsetof(IEnumerator, fp_Reset), false, uVoid_typeof(), 0));
    return type;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/collections/$.uno
// ---------------------------------------------------------------------------------------------------------

// public abstract interface IEnumerator<T> :718
// {
uInterfaceType* IEnumerator1_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Uno.Collections.IEnumerator`1", 1, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("get_Current", NULL, NULL, offsetof(IEnumerator1, fp_get_Current), false, type->T(0), 0));
    return type;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/collections/$.uno
// ---------------------------------------------------------------------------------------------------------

// public abstract interface IList<T> :732
// {
uInterfaceType* IList_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Uno.Collections.IList`1", 1, 0);
    type->Reflection.SetFunctions(3,
        new uFunction("Insert", NULL, NULL, offsetof(IList, fp_Insert), false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), type->T(0)),
        new uFunction("get_Item", NULL, NULL, offsetof(IList, fp_get_Item), false, type->T(0), 1, ::g::Uno::Int_typeof()),
        new uFunction("RemoveAt", NULL, NULL, offsetof(IList, fp_RemoveAt), false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()));
    return type;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Collections/0.42.0/extensions/$.uno
// -----------------------------------------------------------------------------------------------------

// public static class IListExtensions :285
// {
static void IListExtensions_build(uType* type)
{
    ::STRINGS[7] = uString::Const("collection");
    ::TYPES[2] = ::g::Uno::Collections::IEnumerable_typeof();
    ::TYPES[3] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[4] = ::g::Uno::Collections::IEnumerator1_typeof();
    ::TYPES[23] = ::g::Uno::Collections::ICollection_typeof();
    ::TYPES[24] = ::g::Uno::Collections::IList_typeof();
    type->MethodTypes[0]->SetPrecalc(
        ::TYPES[2/*Uno.Collections.IEnumerable`1*/]->MakeType(type->MethodTypes[0]->U(0), NULL),
        ::TYPES[4/*Uno.Collections.IEnumerator`1*/]->MakeType(type->MethodTypes[0]->U(0), NULL),
        ::TYPES[23/*Uno.Collections.ICollection`1*/]->MakeType(type->MethodTypes[0]->U(0), NULL));
    type->MethodTypes[1]->SetPrecalc(
        ::TYPES[23/*Uno.Collections.ICollection`1*/]->MakeType(type->MethodTypes[1]->U(0), NULL),
        ::TYPES[24/*Uno.Collections.IList`1*/]->MakeType(type->MethodTypes[1]->U(0), NULL));
    type->MethodTypes[2]->SetPrecalc(
        ::TYPES[23/*Uno.Collections.ICollection`1*/]->MakeType(type->MethodTypes[2]->U(0), NULL),
        ::TYPES[24/*Uno.Collections.IList`1*/]->MakeType(type->MethodTypes[2]->U(0), NULL));
    type->Reflection.SetFunctions(3,
        new uFunction("AddRange`1", type->MethodTypes[0], (void*)IListExtensions__AddRange_fn, 0, true, uVoid_typeof(), 2, ::TYPES[24/*Uno.Collections.IList`1*/]->MakeType(type->MethodTypes[0]->U(0), NULL), ::TYPES[2/*Uno.Collections.IEnumerable`1*/]->MakeType(type->MethodTypes[0]->U(0), NULL)),
        new uFunction("Last`1", type->MethodTypes[1], (void*)IListExtensions__Last_fn, 0, true, type->MethodTypes[1]->U(0), 1, ::TYPES[24/*Uno.Collections.IList`1*/]->MakeType(type->MethodTypes[1]->U(0), NULL)),
        new uFunction("RemoveLast`1", type->MethodTypes[2], (void*)IListExtensions__RemoveLast_fn, 0, true, type->MethodTypes[2]->U(0), 1, ::TYPES[24/*Uno.Collections.IList`1*/]->MakeType(type->MethodTypes[2]->U(0), NULL)));
}

uClassType* IListExtensions_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.MethodTypeCount = 3;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Collections.IListExtensions", options);
    type->MethodTypes[0] = type->NewMethodType(1, 3);
    type->MethodTypes[1] = type->NewMethodType(1, 2);
    type->MethodTypes[2] = type->NewMethodType(1, 2);
    type->fp_build_ = IListExtensions_build;
    return type;
}

// public static void AddRange<T>(Uno.Collections.IList<T> self, Uno.Collections.IEnumerable<T> collection) :287
void IListExtensions__AddRange_fn(uType* __type, uObject* self, uObject* collection)
{
    IListExtensions::AddRange(__type, self, collection);
}

// public static T Last<T>(Uno.Collections.IList<T> self) :321
void IListExtensions__Last_fn(uType* __type, uObject* self, uTRef __retval)
{
    uType* __types[] = {
        __type->U(0),
        __type->Precalced(0/*Uno.Collections.ICollection<T>*/),
        __type->Precalced(1/*Uno.Collections.IList<T>*/),
    };
    uStackFrame __("Uno.Collections.IListExtensions", "Last`1(Uno.Collections.IList<T>)");
    uT ret4(__types[0], U_ALLOCA(__types[0]->ValueSize));
    int i = ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(self), __types[1])) - 1;
    return __retval.Store((::g::Uno::Collections::IList::get_Item_ex(uInterface(self, __types[2]), uCRef<int>(i), &ret4), ret4)), void();
}

// public static T RemoveLast<T>(Uno.Collections.IList<T> self) :335
void IListExtensions__RemoveLast_fn(uType* __type, uObject* self, uTRef __retval)
{
    uType* __types[] = {
        __type->U(0),
        __type->Precalced(0/*Uno.Collections.ICollection<T>*/),
        __type->Precalced(1/*Uno.Collections.IList<T>*/),
    };
    uStackFrame __("Uno.Collections.IListExtensions", "RemoveLast`1(Uno.Collections.IList<T>)");
    uT ret6(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT t(__types[0], U_ALLOCA(__types[0]->ValueSize));
    int i = ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(self), __types[1])) - 1;
    t = (::g::Uno::Collections::IList::get_Item_ex(uInterface(self, __types[2]), uCRef<int>(i), &ret6), ret6);
    ::g::Uno::Collections::IList::RemoveAt(uInterface(self, __types[2]), i);
    return __retval.Store(t), void();
}

// public static void AddRange<T>(Uno.Collections.IList<T> self, Uno.Collections.IEnumerable<T> collection) [static] :287
void IListExtensions::AddRange(uType* __type, uObject* self, uObject* collection)
{
    uType* __types[] = {
        __type->U(0),
        __type->Precalced(0/*Uno.Collections.IEnumerable<T>*/),
        __type->Precalced(1/*Uno.Collections.IEnumerator<T>*/),
        __type->Precalced(2/*Uno.Collections.ICollection<T>*/),
    };
    uStackFrame __("Uno.Collections.IListExtensions", "AddRange`1(Uno.Collections.IList<T>,Uno.Collections.IEnumerable<T>)");
    uT ret1(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT item(__types[0], U_ALLOCA(__types[0]->ValueSize));

    if (collection == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[7/*"collection"*/]));

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(collection), __types[1])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[3/*Uno.Collections.IEnumerator*/])); )
    {
        item = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), __types[2]), &ret1), ret1);
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(self), __types[3]), item);
    }
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/collections/$.uno
// ---------------------------------------------------------------------------------------------------------

// public sealed class Dictionary<TKey, TValue>.KeyCollection :77
// {
static void Dictionary__KeyCollection_build(uType* type)
{
    ::TYPES[25] = Dictionary__KeyCollection__Enumerator_typeof();
    type->SetPrecalc(
        Dictionary__KeyCollection__Enumerator_typeof()->MakeType(type->T(0), type->T(1), NULL));
    type->SetInterfaces(
        ::g::Uno::Collections::ICollection_typeof()->MakeType(type->T(0), NULL), offsetof(Dictionary__KeyCollection_type, interface0),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(0), NULL), offsetof(Dictionary__KeyCollection_type, interface1));
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(type->T(0), type->T(1), NULL), offsetof(::g::Uno::Collections::Dictionary__KeyCollection, _source), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Count", NULL, (void*)Dictionary__KeyCollection__get_Count_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("GetEnumerator", NULL, (void*)Dictionary__KeyCollection__GetEnumerator_fn, 0, false, ::TYPES[25/*Uno.Collections.Dictionary`2.KeyCollection.Enumerator*/]->MakeType(type->T(0), type->T(1), NULL), 0),
        new uFunction("GetEnumerator", NULL, (void*)Dictionary__KeyCollection__GetEnumerator_boxed_fn, 0, false, ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0), NULL), 0));
}

Dictionary__KeyCollection_type* Dictionary__KeyCollection_typeof()
{
    static uSStrong<Dictionary__KeyCollection_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 2;
    options.InterfaceCount = 2;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(Dictionary__KeyCollection);
    options.TypeSize = sizeof(Dictionary__KeyCollection_type);
    type = (Dictionary__KeyCollection_type*)uClassType::New("Uno.Collections.Dictionary`2.KeyCollection", options);
    type->fp_build_ = Dictionary__KeyCollection_build;
    type->interface0.fp_Clear = (void(*)(uObject*))Dictionary__KeyCollection__UnoCollectionsICollectionTKeyClear_fn;
    type->interface0.fp_Add = (void(*)(uObject*, void*))Dictionary__KeyCollection__UnoCollectionsICollectionTKeyAdd_fn;
    type->interface0.fp_Remove = (void(*)(uObject*, void*, bool*))Dictionary__KeyCollection__UnoCollectionsICollectionTKeyRemove_fn;
    type->interface0.fp_Contains = (void(*)(uObject*, void*, bool*))Dictionary__KeyCollection__UnoCollectionsICollectionTKeyContains_fn;
    type->interface0.fp_get_Count = (void(*)(uObject*, int*))Dictionary__KeyCollection__get_Count_fn;
    type->interface1.fp_GetEnumerator = (void(*)(uObject*, uObject**))Dictionary__KeyCollection__GetEnumerator_boxed_fn;
    return type;
}

// internal KeyCollection(Uno.Collections.Dictionary<TKey, TValue> source) :134
void Dictionary__KeyCollection__ctor__fn(Dictionary__KeyCollection* __this, ::g::Uno::Collections::Dictionary* source)
{
    __this->ctor_(source);
}

// public int get_Count() :166
void Dictionary__KeyCollection__get_Count_fn(Dictionary__KeyCollection* __this, int* __retval)
{
    *__retval = __this->Count();
}

// public Uno.Collections.Dictionary<TKey, TValue>.KeyCollection.Enumerator GetEnumerator() :139
void Dictionary__KeyCollection__GetEnumerator_fn(Dictionary__KeyCollection* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(0/*Uno.Collections.Dictionary<TKey, TValue>.KeyCollection.Enumerator*/),
    };
    uStackFrame __("Uno.Collections.Dictionary`2.KeyCollection", "GetEnumerator()");
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    return __retval.Store((Dictionary__KeyCollection__Enumerator__New1_fn(__types[0], __this->_source, &ret2), ret2)), void();
}

// public Uno.Collections.Dictionary<TKey, TValue>.KeyCollection.Enumerator GetEnumerator() :139
void Dictionary__KeyCollection__GetEnumerator_boxed_fn(Dictionary__KeyCollection* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator_boxed();
}

// internal KeyCollection New(Uno.Collections.Dictionary<TKey, TValue> source) :134
void Dictionary__KeyCollection__New1_fn(uType* __type, ::g::Uno::Collections::Dictionary* source, Dictionary__KeyCollection** __retval)
{
    *__retval = Dictionary__KeyCollection::New1(__type, source);
}

// private void Uno.Collections.ICollection<TKey>.Add(TKey item) :149
void Dictionary__KeyCollection__UnoCollectionsICollectionTKeyAdd_fn(Dictionary__KeyCollection* __this, void* item)
{
    uStackFrame __("Uno.Collections.Dictionary`2.KeyCollection", "Uno.Collections.ICollection<TKey>.Add(TKey)");
    U_THROW(::g::Uno::InvalidOperationException::New4());
}

// private void Uno.Collections.ICollection<TKey>.Clear() :144
void Dictionary__KeyCollection__UnoCollectionsICollectionTKeyClear_fn(Dictionary__KeyCollection* __this)
{
    uStackFrame __("Uno.Collections.Dictionary`2.KeyCollection", "Uno.Collections.ICollection<TKey>.Clear()");
    U_THROW(::g::Uno::InvalidOperationException::New4());
}

// private bool Uno.Collections.ICollection<TKey>.Contains(TKey item) :159
void Dictionary__KeyCollection__UnoCollectionsICollectionTKeyContains_fn(Dictionary__KeyCollection* __this, void* item, bool* __retval)
{
    uStackFrame __("Uno.Collections.Dictionary`2.KeyCollection", "Uno.Collections.ICollection<TKey>.Contains(TKey)");
    U_THROW(::g::Uno::InvalidOperationException::New4());
}

// private bool Uno.Collections.ICollection<TKey>.Remove(TKey item) :154
void Dictionary__KeyCollection__UnoCollectionsICollectionTKeyRemove_fn(Dictionary__KeyCollection* __this, void* item, bool* __retval)
{
    uStackFrame __("Uno.Collections.Dictionary`2.KeyCollection", "Uno.Collections.ICollection<TKey>.Remove(TKey)");
    U_THROW(::g::Uno::InvalidOperationException::New4());
}

// internal KeyCollection(Uno.Collections.Dictionary<TKey, TValue> source) [instance] :134
void Dictionary__KeyCollection::ctor_(::g::Uno::Collections::Dictionary* source)
{
    _source = source;
}

// public int get_Count() [instance] :166
int Dictionary__KeyCollection::Count()
{
    uStackFrame __("Uno.Collections.Dictionary`2.KeyCollection", "get_Count()");
    return uPtr(_source)->Count();
}

// public Uno.Collections.Dictionary<TKey, TValue>.KeyCollection.Enumerator GetEnumerator() [instance] :139
uObject* Dictionary__KeyCollection::GetEnumerator_boxed()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.Dictionary<TKey, TValue>.KeyCollection.Enumerator*/),
    };
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    return uBoxPtr(__types[0], (Dictionary__KeyCollection__GetEnumerator_fn(this, &ret3), ret3));
}

// internal KeyCollection New(Uno.Collections.Dictionary<TKey, TValue> source) [static] :134
Dictionary__KeyCollection* Dictionary__KeyCollection::New1(uType* __type, ::g::Uno::Collections::Dictionary* source)
{
    Dictionary__KeyCollection* obj1 = (Dictionary__KeyCollection*)uNew(__type);
    obj1->ctor_(source);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/collections/$.uno
// ---------------------------------------------------------------------------------------------------------

// public struct KeyValuePair<TKey, TValue> :772
// {
static void KeyValuePair_build(uType* type)
{
    type->SetFields(0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        type->T(1), (uintptr_t)0, uFieldFlagsConstrained);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Key", type, (void*)KeyValuePair__get_Key_fn, 0, false, type->T(0), 0),
        new uFunction(".ctor", type, (void*)KeyValuePair__New1_fn, 0, true, type, 2, type->T(0), type->T(1)),
        new uFunction("get_Value", type, (void*)KeyValuePair__get_Value_fn, 0, false, type->T(1), 0));
}

uStructType* KeyValuePair_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 2;
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Collections.KeyValuePair`2", options);
    type->fp_build_ = KeyValuePair_build;
    return type;
}

// public KeyValuePair(TKey key, TValue value) :777
void KeyValuePair__ctor__fn(uTRef __this, uType* __type, void* key, void* value)
{
    __type->Field(__this, 0/*_key*/) = key;
    __type->Field(__this, 1/*_value*/) = value;
}

// public TKey get_Key() :785
void KeyValuePair__get_Key_fn(uTRef __this, uType* __type, uTRef __retval)
{
    return __retval.Store(__type->Field(__this, 0/*_key*/)), void();
}

// public KeyValuePair New(TKey key, TValue value) :777
void KeyValuePair__New1_fn(uType* __type, void* key, void* value, uTRef __retval)
{
    uT obj1(__type, U_ALLOCA(__type->ValueSize));
    KeyValuePair__ctor__fn(&obj1, __type, key, value);
    return __retval.Store(obj1), void();
}

// public TValue get_Value() :790
void KeyValuePair__get_Value_fn(uTRef __this, uType* __type, uTRef __retval)
{
    return __retval.Store(__type->Field(__this, 1/*_value*/)), void();
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/collections/$.uno
// ---------------------------------------------------------------------------------------------------------

// public sealed class LinkedList<T> :817
// {
static void LinkedList_build(uType* type)
{
    ::STRINGS[8] = uString::Const("node");
    ::STRINGS[9] = uString::Const("The LinkedList node does not belong to current LinkedList.");
    ::STRINGS[10] = uString::Const("newNode");
    ::STRINGS[11] = uString::Const("The LinkedList node already belongs to a LinkedList.");
    ::TYPES[26] = ::g::Uno::Collections::LinkedListNode_typeof();
    ::TYPES[27] = LinkedList__Enumerator_typeof();
    type->SetPrecalc(
        ::g::Uno::Collections::LinkedListNode_typeof()->MakeType(type->T(0), NULL),
        type->T(0),
        LinkedList__Enumerator_typeof()->MakeType(type->T(0), NULL));
    type->SetInterfaces(
        ::g::Uno::Collections::ICollection_typeof()->MakeType(type->T(0), NULL), offsetof(LinkedList_type, interface0),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(0), NULL), offsetof(LinkedList_type, interface1));
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Collections::LinkedList, _Count), 0,
        ::TYPES[26/*Uno.Collections.LinkedListNode`1*/]->MakeType(type->T(0), NULL), offsetof(::g::Uno::Collections::LinkedList, _First), 0,
        ::TYPES[26/*Uno.Collections.LinkedListNode`1*/]->MakeType(type->T(0), NULL), offsetof(::g::Uno::Collections::LinkedList, _Last), 0);
    type->Reflection.SetFunctions(18,
        new uFunction("AddAfter", NULL, (void*)LinkedList__AddAfter_fn, 0, false, ::TYPES[26/*Uno.Collections.LinkedListNode`1*/]->MakeType(type->T(0), NULL), 2, ::TYPES[26/*Uno.Collections.LinkedListNode`1*/]->MakeType(type->T(0), NULL), type->T(0)),
        new uFunction("AddAfter", NULL, (void*)LinkedList__AddAfter1_fn, 0, false, uVoid_typeof(), 2, ::TYPES[26/*Uno.Collections.LinkedListNode`1*/]->MakeType(type->T(0), NULL), ::TYPES[26/*Uno.Collections.LinkedListNode`1*/]->MakeType(type->T(0), NULL)),
        new uFunction("AddBefore", NULL, (void*)LinkedList__AddBefore_fn, 0, false, ::TYPES[26/*Uno.Collections.LinkedListNode`1*/]->MakeType(type->T(0), NULL), 2, ::TYPES[26/*Uno.Collections.LinkedListNode`1*/]->MakeType(type->T(0), NULL), type->T(0)),
        new uFunction("AddBefore", NULL, (void*)LinkedList__AddBefore1_fn, 0, false, uVoid_typeof(), 2, ::TYPES[26/*Uno.Collections.LinkedListNode`1*/]->MakeType(type->T(0), NULL), ::TYPES[26/*Uno.Collections.LinkedListNode`1*/]->MakeType(type->T(0), NULL)),
        new uFunction("AddFirst", NULL, (void*)LinkedList__AddFirst_fn, 0, false, ::TYPES[26/*Uno.Collections.LinkedListNode`1*/]->MakeType(type->T(0), NULL), 1, type->T(0)),
        new uFunction("AddFirst", NULL, (void*)LinkedList__AddFirst1_fn, 0, false, uVoid_typeof(), 1, ::TYPES[26/*Uno.Collections.LinkedListNode`1*/]->MakeType(type->T(0), NULL)),
        new uFunction("AddLast", NULL, (void*)LinkedList__AddLast_fn, 0, false, ::TYPES[26/*Uno.Collections.LinkedListNode`1*/]->MakeType(type->T(0), NULL), 1, type->T(0)),
        new uFunction("AddLast", NULL, (void*)LinkedList__AddLast1_fn, 0, false, uVoid_typeof(), 1, ::TYPES[26/*Uno.Collections.LinkedListNode`1*/]->MakeType(type->T(0), NULL)),
        new uFunction("Clear", NULL, (void*)LinkedList__Clear_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("Contains", NULL, (void*)LinkedList__Contains_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type->T(0)),
        new uFunction("get_Count", NULL, (void*)LinkedList__get_Count_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("Find", NULL, (void*)LinkedList__Find_fn, 0, false, ::TYPES[26/*Uno.Collections.LinkedListNode`1*/]->MakeType(type->T(0), NULL), 1, type->T(0)),
        new uFunction("get_First", NULL, (void*)LinkedList__get_First_fn, 0, false, ::TYPES[26/*Uno.Collections.LinkedListNode`1*/]->MakeType(type->T(0), NULL), 0),
        new uFunction("GetEnumerator", NULL, (void*)LinkedList__GetEnumerator_fn, 0, false, ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0), NULL), 0),
        new uFunction("get_Last", NULL, (void*)LinkedList__get_Last_fn, 0, false, ::TYPES[26/*Uno.Collections.LinkedListNode`1*/]->MakeType(type->T(0), NULL), 0),
        new uFunction(".ctor", type, (void*)LinkedList__New1_fn, 0, true, type, 0),
        new uFunction("Remove", NULL, (void*)LinkedList__Remove_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type->T(0)),
        new uFunction("Remove", NULL, (void*)LinkedList__Remove1_fn, 0, false, uVoid_typeof(), 1, ::TYPES[26/*Uno.Collections.LinkedListNode`1*/]->MakeType(type->T(0), NULL)));
}

LinkedList_type* LinkedList_typeof()
{
    static uSStrong<LinkedList_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.GenericCount = 1;
    options.InterfaceCount = 2;
    options.PrecalcCount = 3;
    options.ObjectSize = sizeof(LinkedList);
    options.TypeSize = sizeof(LinkedList_type);
    type = (LinkedList_type*)uClassType::New("Uno.Collections.LinkedList`1", options);
    type->fp_build_ = LinkedList_build;
    type->fp_ctor_ = (void*)LinkedList__New1_fn;
    type->interface0.fp_Add = (void(*)(uObject*, void*))LinkedList__UnoCollectionsICollectionTAdd_fn;
    type->interface0.fp_Clear = (void(*)(uObject*))LinkedList__Clear_fn;
    type->interface0.fp_Remove = (void(*)(uObject*, void*, bool*))LinkedList__Remove_fn;
    type->interface0.fp_Contains = (void(*)(uObject*, void*, bool*))LinkedList__Contains_fn;
    type->interface0.fp_get_Count = (void(*)(uObject*, int*))LinkedList__get_Count_fn;
    type->interface1.fp_GetEnumerator = (void(*)(uObject*, uObject**))LinkedList__GetEnumerator_fn;
    return type;
}

// public generated LinkedList() :817
void LinkedList__ctor__fn(LinkedList* __this)
{
    __this->ctor_();
}

// public Uno.Collections.LinkedListNode<T> AddAfter(Uno.Collections.LinkedListNode<T> node, T value) :862
void LinkedList__AddAfter_fn(LinkedList* __this, ::g::Uno::Collections::LinkedListNode* node, void* value, ::g::Uno::Collections::LinkedListNode** __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(0/*Uno.Collections.LinkedListNode<T>*/),
    };
    uStackFrame __("Uno.Collections.LinkedList`1", "AddAfter(Uno.Collections.LinkedListNode<T>,T)");
    ::g::Uno::Collections::LinkedListNode* ret2;
    ::g::Uno::Collections::LinkedListNode* newNode = (::g::Uno::Collections::LinkedListNode__New1_fn(__types[0], value, &ret2), ret2);
    __this->AddAfter1(node, newNode);
    return *__retval = newNode, void();
}

// public void AddAfter(Uno.Collections.LinkedListNode<T> node, Uno.Collections.LinkedListNode<T> newNode) :869
void LinkedList__AddAfter1_fn(LinkedList* __this, ::g::Uno::Collections::LinkedListNode* node, ::g::Uno::Collections::LinkedListNode* newNode)
{
    __this->AddAfter1(node, newNode);
}

// public Uno.Collections.LinkedListNode<T> AddBefore(Uno.Collections.LinkedListNode<T> node, T value) :903
void LinkedList__AddBefore_fn(LinkedList* __this, ::g::Uno::Collections::LinkedListNode* node, void* value, ::g::Uno::Collections::LinkedListNode** __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(0/*Uno.Collections.LinkedListNode<T>*/),
    };
    uStackFrame __("Uno.Collections.LinkedList`1", "AddBefore(Uno.Collections.LinkedListNode<T>,T)");
    ::g::Uno::Collections::LinkedListNode* ret3;
    ::g::Uno::Collections::LinkedListNode* newNode = (::g::Uno::Collections::LinkedListNode__New1_fn(__types[0], value, &ret3), ret3);
    __this->AddBefore1(node, newNode);
    return *__retval = newNode, void();
}

// public void AddBefore(Uno.Collections.LinkedListNode<T> node, Uno.Collections.LinkedListNode<T> newNode) :910
void LinkedList__AddBefore1_fn(LinkedList* __this, ::g::Uno::Collections::LinkedListNode* node, ::g::Uno::Collections::LinkedListNode* newNode)
{
    __this->AddBefore1(node, newNode);
}

// public Uno.Collections.LinkedListNode<T> AddFirst(T value) :966
void LinkedList__AddFirst_fn(LinkedList* __this, void* value, ::g::Uno::Collections::LinkedListNode** __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(0/*Uno.Collections.LinkedListNode<T>*/),
    };
    uStackFrame __("Uno.Collections.LinkedList`1", "AddFirst(T)");
    ::g::Uno::Collections::LinkedListNode* ret4;
    ::g::Uno::Collections::LinkedListNode* node = (::g::Uno::Collections::LinkedListNode__New1_fn(__types[0], value, &ret4), ret4);
    __this->AddFirst1(node);
    return *__retval = node, void();
}

// public void AddFirst(Uno.Collections.LinkedListNode<T> node) :944
void LinkedList__AddFirst1_fn(LinkedList* __this, ::g::Uno::Collections::LinkedListNode* node)
{
    __this->AddFirst1(node);
}

// public Uno.Collections.LinkedListNode<T> AddLast(T value) :995
void LinkedList__AddLast_fn(LinkedList* __this, void* value, ::g::Uno::Collections::LinkedListNode** __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(0/*Uno.Collections.LinkedListNode<T>*/),
    };
    uStackFrame __("Uno.Collections.LinkedList`1", "AddLast(T)");
    ::g::Uno::Collections::LinkedListNode* ret5;
    ::g::Uno::Collections::LinkedListNode* node = (::g::Uno::Collections::LinkedListNode__New1_fn(__types[0], value, &ret5), ret5);
    __this->AddLast1(node);
    return *__retval = node, void();
}

// public void AddLast(Uno.Collections.LinkedListNode<T> node) :973
void LinkedList__AddLast1_fn(LinkedList* __this, ::g::Uno::Collections::LinkedListNode* node)
{
    __this->AddLast1(node);
}

// public void Clear() :1014
void LinkedList__Clear_fn(LinkedList* __this)
{
    __this->Clear();
}

// public bool Contains(T value) :1037
void LinkedList__Contains_fn(LinkedList* __this, void* value, bool* __retval)
{
    uStackFrame __("Uno.Collections.LinkedList`1", "Contains(T)");
    ::g::Uno::Collections::LinkedListNode* ret6;
    return *__retval = (LinkedList__Find_fn(__this, value, &ret6), ret6) != NULL, void();
}

// public generated int get_Count() :819
void LinkedList__get_Count_fn(LinkedList* __this, int* __retval)
{
    *__retval = __this->Count();
}

// private generated void set_Count(int value) :819
void LinkedList__set_Count_fn(LinkedList* __this, int* value)
{
    __this->Count(*value);
}

// public Uno.Collections.LinkedListNode<T> Find(T value) :1002
void LinkedList__Find_fn(LinkedList* __this, void* value, ::g::Uno::Collections::LinkedListNode** __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*T*/),
    };
    uStackFrame __("Uno.Collections.LinkedList`1", "Find(T)");
    uT ret7(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ::g::Uno::Collections::LinkedListNode* curr = __this->First();

    while (curr != NULL)
    {
        if (::g::Uno::Object::Equals(uBoxPtr(__types[0], uPtr((::g::Uno::Collections::LinkedListNode__get_Value_fn(uPtr(curr), &ret7), ret7)), U_ALLOCA(__types[0]->ObjectSize)), uBoxPtr(__types[0], value)))
            return *__retval = curr, void();

        curr = (::g::Uno::Collections::LinkedListNode*)uPtr(curr)->Next();
    }

    return *__retval = NULL, void();
}

// public generated Uno.Collections.LinkedListNode<T> get_First() :820
void LinkedList__get_First_fn(LinkedList* __this, ::g::Uno::Collections::LinkedListNode** __retval)
{
    *__retval = __this->First();
}

// private generated void set_First(Uno.Collections.LinkedListNode<T> value) :820
void LinkedList__set_First_fn(LinkedList* __this, ::g::Uno::Collections::LinkedListNode* value)
{
    __this->First(value);
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() :857
void LinkedList__GetEnumerator_fn(LinkedList* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public generated Uno.Collections.LinkedListNode<T> get_Last() :821
void LinkedList__get_Last_fn(LinkedList* __this, ::g::Uno::Collections::LinkedListNode** __retval)
{
    *__retval = __this->Last();
}

// private generated void set_Last(Uno.Collections.LinkedListNode<T> value) :821
void LinkedList__set_Last_fn(LinkedList* __this, ::g::Uno::Collections::LinkedListNode* value)
{
    __this->Last(value);
}

// public generated LinkedList New() :817
void LinkedList__New1_fn(uType* __type, LinkedList** __retval)
{
    *__retval = LinkedList::New1(__type);
}

// public bool Remove(T value) :1066
void LinkedList__Remove_fn(LinkedList* __this, void* value, bool* __retval)
{
    uStackFrame __("Uno.Collections.LinkedList`1", "Remove(T)");
    ::g::Uno::Collections::LinkedListNode* ret8;
    ::g::Uno::Collections::LinkedListNode* node = (LinkedList__Find_fn(__this, value, &ret8), ret8);

    if (node != NULL)
    {
        __this->Remove1(node);
        return *__retval = true, void();
    }

    return *__retval = false, void();
}

// public void Remove(Uno.Collections.LinkedListNode<T> node) :1042
void LinkedList__Remove1_fn(LinkedList* __this, ::g::Uno::Collections::LinkedListNode* node)
{
    __this->Remove1(node);
}

// private void UncheckedAddAfter(Uno.Collections.LinkedListNode<T> node, Uno.Collections.LinkedListNode<T> newNode) :886
void LinkedList__UncheckedAddAfter_fn(LinkedList* __this, ::g::Uno::Collections::LinkedListNode* node, ::g::Uno::Collections::LinkedListNode* newNode)
{
    __this->UncheckedAddAfter(node, newNode);
}

// private void UncheckedAddBefore(Uno.Collections.LinkedListNode<T> node, Uno.Collections.LinkedListNode<T> newNode) :927
void LinkedList__UncheckedAddBefore_fn(LinkedList* __this, ::g::Uno::Collections::LinkedListNode* node, ::g::Uno::Collections::LinkedListNode* newNode)
{
    __this->UncheckedAddBefore(node, newNode);
}

// public void Uno.Collections.ICollection<T>.Add(T value) :1032
void LinkedList__UnoCollectionsICollectionTAdd_fn(LinkedList* __this, void* value)
{
    uStackFrame __("Uno.Collections.LinkedList`1", "Uno.Collections.ICollection<T>.Add(T)");
    ::g::Uno::Collections::LinkedListNode* ret9;
    LinkedList__AddLast_fn(__this, value, &ret9);
}

// public generated LinkedList() [instance] :817
void LinkedList::ctor_()
{
}

// public void AddAfter(Uno.Collections.LinkedListNode<T> node, Uno.Collections.LinkedListNode<T> newNode) [instance] :869
void LinkedList::AddAfter1(::g::Uno::Collections::LinkedListNode* node, ::g::Uno::Collections::LinkedListNode* newNode)
{
    uStackFrame __("Uno.Collections.LinkedList`1", "AddAfter(Uno.Collections.LinkedListNode<T>,Uno.Collections.LinkedListNode<T>)");

    if (node == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[8/*"node"*/]));

    if (((LinkedList*)uPtr(node)->List()) != this)
        U_THROW(::g::Uno::InvalidOperationException::New5(::STRINGS[9/*"The LinkedL...*/]));

    if (newNode == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[10/*"newNode"*/]));

    if (((LinkedList*)uPtr(newNode)->List()) != NULL)
        U_THROW(::g::Uno::InvalidOperationException::New5(::STRINGS[11/*"The LinkedL...*/]));

    UncheckedAddAfter(node, newNode);
}

// public void AddBefore(Uno.Collections.LinkedListNode<T> node, Uno.Collections.LinkedListNode<T> newNode) [instance] :910
void LinkedList::AddBefore1(::g::Uno::Collections::LinkedListNode* node, ::g::Uno::Collections::LinkedListNode* newNode)
{
    uStackFrame __("Uno.Collections.LinkedList`1", "AddBefore(Uno.Collections.LinkedListNode<T>,Uno.Collections.LinkedListNode<T>)");

    if (node == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[8/*"node"*/]));

    if (((LinkedList*)uPtr(node)->List()) != this)
        U_THROW(::g::Uno::InvalidOperationException::New5(::STRINGS[9/*"The LinkedL...*/]));

    if (newNode == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[10/*"newNode"*/]));

    if (((LinkedList*)uPtr(newNode)->List()) != NULL)
        U_THROW(::g::Uno::InvalidOperationException::New5(::STRINGS[11/*"The LinkedL...*/]));

    UncheckedAddBefore(node, newNode);
}

// public void AddFirst(Uno.Collections.LinkedListNode<T> node) [instance] :944
void LinkedList::AddFirst1(::g::Uno::Collections::LinkedListNode* node)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.LinkedListNode<T>*/),
    };
    uStackFrame __("Uno.Collections.LinkedList`1", "AddFirst(Uno.Collections.LinkedListNode<T>)");

    if (node == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[8/*"node"*/]));

    if (((LinkedList*)uPtr(node)->List()) != NULL)
        U_THROW(::g::Uno::InvalidOperationException::New5(::STRINGS[11/*"The LinkedL...*/]));

    if (Last() == NULL)
    {
        uPtr(node)->Previous((uPtr(node)->Next(NULL), uCast< ::g::Uno::Collections::LinkedListNode*>(NULL, __types[0])));
        node->List(this);
        First((Last(node), node));
        Count(1);
    }
    else
        UncheckedAddBefore(First(), node);
}

// public void AddLast(Uno.Collections.LinkedListNode<T> node) [instance] :973
void LinkedList::AddLast1(::g::Uno::Collections::LinkedListNode* node)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.LinkedListNode<T>*/),
    };
    uStackFrame __("Uno.Collections.LinkedList`1", "AddLast(Uno.Collections.LinkedListNode<T>)");

    if (node == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[8/*"node"*/]));

    if (((LinkedList*)uPtr(node)->List()) != NULL)
        U_THROW(::g::Uno::InvalidOperationException::New5(::STRINGS[11/*"The LinkedL...*/]));

    if (Last() == NULL)
    {
        uPtr(node)->Previous((uPtr(node)->Next(NULL), uCast< ::g::Uno::Collections::LinkedListNode*>(NULL, __types[0])));
        node->List(this);
        First((Last(node), node));
        Count(1);
    }
    else
        UncheckedAddAfter(Last(), node);
}

// public void Clear() [instance] :1014
void LinkedList::Clear()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.LinkedListNode<T>*/),
    };
    uStackFrame __("Uno.Collections.LinkedList`1", "Clear()");
    ::g::Uno::Collections::LinkedListNode* curr = First();

    while (curr != NULL)
    {
        ::g::Uno::Collections::LinkedListNode* next = (::g::Uno::Collections::LinkedListNode*)uPtr(curr)->Next();
        curr->Previous(NULL);
        curr->Next(NULL);
        curr->List(NULL);
        curr = next;
    }

    First((Last(NULL), uCast< ::g::Uno::Collections::LinkedListNode*>(NULL, __types[0])));
    Count(0);
}

// public generated int get_Count() [instance] :819
int LinkedList::Count()
{
    return _Count;
}

// private generated void set_Count(int value) [instance] :819
void LinkedList::Count(int value)
{
    _Count = value;
}

// public generated Uno.Collections.LinkedListNode<T> get_First() [instance] :820
::g::Uno::Collections::LinkedListNode* LinkedList::First()
{
    return _First;
}

// private generated void set_First(Uno.Collections.LinkedListNode<T> value) [instance] :820
void LinkedList::First(::g::Uno::Collections::LinkedListNode* value)
{
    _First = value;
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() [instance] :857
uObject* LinkedList::GetEnumerator()
{
    uType* __types[] = {
        __type->Precalced(2/*Uno.Collections.LinkedList<T>.Enumerator*/),
    };
    uStackFrame __("Uno.Collections.LinkedList`1", "GetEnumerator()");
    return uBox(__types[0], LinkedList__Enumerator__New1(__types[0], this));
}

// public generated Uno.Collections.LinkedListNode<T> get_Last() [instance] :821
::g::Uno::Collections::LinkedListNode* LinkedList::Last()
{
    return _Last;
}

// private generated void set_Last(Uno.Collections.LinkedListNode<T> value) [instance] :821
void LinkedList::Last(::g::Uno::Collections::LinkedListNode* value)
{
    _Last = value;
}

// public void Remove(Uno.Collections.LinkedListNode<T> node) [instance] :1042
void LinkedList::Remove1(::g::Uno::Collections::LinkedListNode* node)
{
    uStackFrame __("Uno.Collections.LinkedList`1", "Remove(Uno.Collections.LinkedListNode<T>)");

    if (node == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[8/*"node"*/]));

    if (((LinkedList*)uPtr(node)->List()) != this)
        U_THROW(::g::Uno::InvalidOperationException::New5(::STRINGS[9/*"The LinkedL...*/]));

    if (((::g::Uno::Collections::LinkedListNode*)uPtr(node)->Previous()) != NULL)
        uPtr((::g::Uno::Collections::LinkedListNode*)uPtr(node)->Previous())->Next((::g::Uno::Collections::LinkedListNode*)uPtr(node)->Next());

    if (((::g::Uno::Collections::LinkedListNode*)uPtr(node)->Next()) != NULL)
        uPtr((::g::Uno::Collections::LinkedListNode*)uPtr(node)->Next())->Previous((::g::Uno::Collections::LinkedListNode*)uPtr(node)->Previous());

    if (node == First())
        First((::g::Uno::Collections::LinkedListNode*)uPtr(node)->Next());

    if (node == Last())
        Last((::g::Uno::Collections::LinkedListNode*)uPtr(node)->Previous());

    uPtr(node)->List(NULL);
    Count(Count() - 1);
}

// private void UncheckedAddAfter(Uno.Collections.LinkedListNode<T> node, Uno.Collections.LinkedListNode<T> newNode) [instance] :886
void LinkedList::UncheckedAddAfter(::g::Uno::Collections::LinkedListNode* node, ::g::Uno::Collections::LinkedListNode* newNode)
{
    uStackFrame __("Uno.Collections.LinkedList`1", "UncheckedAddAfter(Uno.Collections.LinkedListNode<T>,Uno.Collections.LinkedListNode<T>)");

    if (node == Last())
        Last(newNode);

    uPtr(newNode)->List(this);
    newNode->Next((::g::Uno::Collections::LinkedListNode*)uPtr(node)->Next());
    newNode->Previous(node);

    if (((::g::Uno::Collections::LinkedListNode*)node->Next()) != NULL)
        uPtr((::g::Uno::Collections::LinkedListNode*)uPtr(node)->Next())->Previous(newNode);

    node->Next(newNode);
    Count(Count() + 1);
}

// private void UncheckedAddBefore(Uno.Collections.LinkedListNode<T> node, Uno.Collections.LinkedListNode<T> newNode) [instance] :927
void LinkedList::UncheckedAddBefore(::g::Uno::Collections::LinkedListNode* node, ::g::Uno::Collections::LinkedListNode* newNode)
{
    uStackFrame __("Uno.Collections.LinkedList`1", "UncheckedAddBefore(Uno.Collections.LinkedListNode<T>,Uno.Collections.LinkedListNode<T>)");

    if (node == First())
        First(newNode);

    uPtr(newNode)->List(this);
    newNode->Next(node);
    newNode->Previous((::g::Uno::Collections::LinkedListNode*)uPtr(node)->Previous());

    if (((::g::Uno::Collections::LinkedListNode*)node->Previous()) != NULL)
        uPtr((::g::Uno::Collections::LinkedListNode*)uPtr(node)->Previous())->Next(newNode);

    node->Previous(newNode);
    Count(Count() + 1);
}

// public generated LinkedList New() [static] :817
LinkedList* LinkedList::New1(uType* __type)
{
    LinkedList* obj1 = (LinkedList*)uNew(__type);
    obj1->ctor_();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Collections/0.42.0/extensions/$.uno
// -----------------------------------------------------------------------------------------------------

// private sealed class EnumerableExtensions.LinkedList<T> :80
// {
static void EnumerableExtensions__LinkedList_build(uType* type)
{
    type->SetFields(0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        type, offsetof(::g::Uno::Collections::EnumerableExtensions__LinkedList, Next), 0);
}

uType* EnumerableExtensions__LinkedList_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(EnumerableExtensions__LinkedList);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Collections.EnumerableExtensions.LinkedList`1", options);
    type->fp_build_ = EnumerableExtensions__LinkedList_build;
    return type;
}

// public LinkedList(T item, Uno.Collections.EnumerableExtensions.LinkedList<T> next) :85
void EnumerableExtensions__LinkedList__ctor__fn(EnumerableExtensions__LinkedList* __this, void* item, EnumerableExtensions__LinkedList* next)
{
    __this->Item() = item;
    __this->Next = next;
}

// public LinkedList New(T item, Uno.Collections.EnumerableExtensions.LinkedList<T> next) :85
void EnumerableExtensions__LinkedList__New1_fn(uType* __type, void* item, EnumerableExtensions__LinkedList* next, EnumerableExtensions__LinkedList** __retval)
{
    EnumerableExtensions__LinkedList* obj1 = (EnumerableExtensions__LinkedList*)uNew(__type);
    EnumerableExtensions__LinkedList__ctor__fn(obj1, item, next);
    return *__retval = obj1, void();
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/collections/$.uno
// ---------------------------------------------------------------------------------------------------------

// public sealed class LinkedListNode<T> :803
// {
static void LinkedListNode_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Collections::LinkedList_typeof()->MakeType(type->T(0), NULL), offsetof(::g::Uno::Collections::LinkedListNode, _List), 0,
        type, offsetof(::g::Uno::Collections::LinkedListNode, _Next), 0,
        type, offsetof(::g::Uno::Collections::LinkedListNode, _Previous), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
    type->Reflection.SetFunctions(5,
        new uFunction("get_List", NULL, (void*)LinkedListNode__get_List_fn, 0, false, ::g::Uno::Collections::LinkedList_typeof()->MakeType(type->T(0), NULL), 0),
        new uFunction(".ctor", type, (void*)LinkedListNode__New1_fn, 0, true, type, 1, type->T(0)),
        new uFunction("get_Next", NULL, (void*)LinkedListNode__get_Next_fn, 0, false, type, 0),
        new uFunction("get_Previous", NULL, (void*)LinkedListNode__get_Previous_fn, 0, false, type, 0),
        new uFunction("get_Value", NULL, (void*)LinkedListNode__get_Value_fn, 0, false, type->T(0), 0));
}

uType* LinkedListNode_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(LinkedListNode);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Collections.LinkedListNode`1", options);
    type->fp_build_ = LinkedListNode_build;
    return type;
}

// public LinkedListNode(T value) :810
void LinkedListNode__ctor__fn(LinkedListNode* __this, void* value)
{
    LinkedListNode__set_Value_fn(__this, value);
}

// public generated Uno.Collections.LinkedList<T> get_List() :805
void LinkedListNode__get_List_fn(LinkedListNode* __this, ::g::Uno::Collections::LinkedList** __retval)
{
    *__retval = __this->List();
}

// internal generated void set_List(Uno.Collections.LinkedList<T> value) :805
void LinkedListNode__set_List_fn(LinkedListNode* __this, ::g::Uno::Collections::LinkedList* value)
{
    __this->List(value);
}

// public LinkedListNode New(T value) :810
void LinkedListNode__New1_fn(uType* __type, void* value, LinkedListNode** __retval)
{
    LinkedListNode* obj1 = (LinkedListNode*)uNew(__type);
    LinkedListNode__ctor__fn(obj1, value);
    return *__retval = obj1, void();
}

// public generated Uno.Collections.LinkedListNode<T> get_Next() :806
void LinkedListNode__get_Next_fn(LinkedListNode* __this, LinkedListNode** __retval)
{
    *__retval = __this->Next();
}

// internal generated void set_Next(Uno.Collections.LinkedListNode<T> value) :806
void LinkedListNode__set_Next_fn(LinkedListNode* __this, LinkedListNode* value)
{
    __this->Next(value);
}

// public generated Uno.Collections.LinkedListNode<T> get_Previous() :807
void LinkedListNode__get_Previous_fn(LinkedListNode* __this, LinkedListNode** __retval)
{
    *__retval = __this->Previous();
}

// internal generated void set_Previous(Uno.Collections.LinkedListNode<T> value) :807
void LinkedListNode__set_Previous_fn(LinkedListNode* __this, LinkedListNode* value)
{
    __this->Previous(value);
}

// public generated T get_Value() :808
void LinkedListNode__get_Value_fn(LinkedListNode* __this, uTRef __retval)
{
    return __retval.Store(__this->_Value()), void();
}

// private generated void set_Value(T value) :808
void LinkedListNode__set_Value_fn(LinkedListNode* __this, void* value)
{
    __this->_Value() = value;
}

// public generated Uno.Collections.LinkedList<T> get_List() [instance] :805
::g::Uno::Collections::LinkedList* LinkedListNode::List()
{
    return _List;
}

// internal generated void set_List(Uno.Collections.LinkedList<T> value) [instance] :805
void LinkedListNode::List(::g::Uno::Collections::LinkedList* value)
{
    _List = value;
}

// public generated Uno.Collections.LinkedListNode<T> get_Next() [instance] :806
LinkedListNode* LinkedListNode::Next()
{
    return _Next;
}

// internal generated void set_Next(Uno.Collections.LinkedListNode<T> value) [instance] :806
void LinkedListNode::Next(LinkedListNode* value)
{
    _Next = value;
}

// public generated Uno.Collections.LinkedListNode<T> get_Previous() [instance] :807
LinkedListNode* LinkedListNode::Previous()
{
    return _Previous;
}

// internal generated void set_Previous(Uno.Collections.LinkedListNode<T> value) [instance] :807
void LinkedListNode::Previous(LinkedListNode* value)
{
    _Previous = value;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/collections/$.uno
// ---------------------------------------------------------------------------------------------------------

// public sealed class List<T> :1087
// {
static void List_build(uType* type)
{
    ::TYPES[0] = uObject_typeof()->Array();
    ::TYPES[2] = ::g::Uno::Collections::IEnumerable_typeof();
    ::TYPES[3] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[4] = ::g::Uno::Collections::IEnumerator1_typeof();
    ::TYPES[5] = ::g::Uno::Generic_typeof();
    ::TYPES[28] = List__Enumerator_typeof();
    ::TYPES[29] = ::g::Uno::Array_typeof();
    type->SetPrecalc(
        type->T(0)->Array(),
        type->T(0),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(0), NULL),
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0), NULL),
        ::g::Uno::Generic_typeof()->MakeMethod(0/*Equals<T>*/, type->T(0), NULL),
        List__Enumerator_typeof()->MakeType(type->T(0), NULL),
        ::g::Uno::Array_typeof()->MakeMethod(2/*Sort<T>*/, type->T(0), NULL));
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(type->T(0), NULL), offsetof(List_type, interface0),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(type->T(0), NULL), offsetof(List_type, interface1),
        ::TYPES[2/*Uno.Collections.IEnumerable`1*/]->MakeType(type->T(0), NULL), offsetof(List_type, interface2));
    type->SetFields(0,
        type->T(0)->Array(), offsetof(::g::Uno::Collections::List, _data), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Collections::List, _used), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Collections::List, _version), 0);
    type->Reflection.SetFunctions(17,
        new uFunction("Add", NULL, (void*)List__Add_fn, 0, false, uVoid_typeof(), 1, type->T(0)),
        new uFunction("AddRange", NULL, (void*)List__AddRange_fn, 0, false, uVoid_typeof(), 1, ::TYPES[2/*Uno.Collections.IEnumerable`1*/]->MakeType(type->T(0), NULL)),
        new uFunction("Clear", NULL, (void*)List__Clear_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("Contains", NULL, (void*)List__Contains_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type->T(0)),
        new uFunction("get_Count", NULL, (void*)List__get_Count_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("GetEnumerator", NULL, (void*)List__GetEnumerator_fn, 0, false, ::TYPES[28/*Uno.Collections.List`1.Enumerator*/]->MakeType(type->T(0), NULL), 0),
        new uFunction("GetEnumerator", NULL, (void*)List__GetEnumerator_boxed_fn, 0, false, ::TYPES[4/*Uno.Collections.IEnumerator`1*/]->MakeType(type->T(0), NULL), 0),
        new uFunction("IndexOf", NULL, (void*)List__IndexOf_fn, 0, false, ::g::Uno::Int_typeof(), 1, type->T(0)),
        new uFunction("Insert", NULL, (void*)List__Insert_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), type->T(0)),
        new uFunction("get_Item", NULL, (void*)List__get_Item_fn, 0, false, type->T(0), 1, ::g::Uno::Int_typeof()),
        new uFunction("set_Item", NULL, (void*)List__set_Item_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), type->T(0)),
        new uFunction(".ctor", type, (void*)List__New1_fn, 0, true, type, 0),
        new uFunction(".ctor", type, (void*)List__New2_fn, 0, true, type, 1, ::g::Uno::Int_typeof()),
        new uFunction("Remove", NULL, (void*)List__Remove_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type->T(0)),
        new uFunction("RemoveAt", NULL, (void*)List__RemoveAt_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("Sort", NULL, (void*)List__Sort_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Comparison_typeof()->MakeType(type->T(0), NULL)),
        new uFunction("ToArray", NULL, (void*)List__ToArray_fn, 0, false, type->T(0)->Array(), 0));
}

List_type* List_typeof()
{
    static uSStrong<List_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.PrecalcCount = 7;
    options.ObjectSize = sizeof(List);
    options.TypeSize = sizeof(List_type);
    type = (List_type*)uClassType::New("Uno.Collections.List`1", options);
    type->fp_build_ = List_build;
    type->fp_ctor_ = (void*)List__New1_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))List__Insert_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))List__RemoveAt_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))List__get_Item_fn;
    type->interface1.fp_Clear = (void(*)(uObject*))List__Clear_fn;
    type->interface1.fp_Add = (void(*)(uObject*, void*))List__Add_fn;
    type->interface1.fp_Remove = (void(*)(uObject*, void*, bool*))List__Remove_fn;
    type->interface1.fp_Contains = (void(*)(uObject*, void*, bool*))List__Contains_fn;
    type->interface1.fp_get_Count = (void(*)(uObject*, int*))List__get_Count_fn;
    type->interface2.fp_GetEnumerator = (void(*)(uObject*, uObject**))List__GetEnumerator_boxed_fn;
    return type;
}

// public List() :1141
void List__ctor__fn(List* __this)
{
    __this->ctor_();
}

// public List(int capacity) :1147
void List__ctor_1_fn(List* __this, int* capacity)
{
    __this->ctor_1(*capacity);
}

// public void Add(T item) :1196
void List__Add_fn(List* __this, void* item)
{
    uStackFrame __("Uno.Collections.List`1", "Add(T)");
    __this->EnsureCapacity();
    uPtr(__this->_data)->TItem(__this->_used++) = item;
    __this->_version++;
}

// public void AddRange(Uno.Collections.IEnumerable<T> items) :1203
void List__AddRange_fn(List* __this, uObject* items)
{
    __this->AddRange(items);
}

// private void BoundsCheck(int index) :1168
void List__BoundsCheck_fn(List* __this, int* index)
{
    __this->BoundsCheck(*index);
}

// public void Clear() :1258
void List__Clear_fn(List* __this)
{
    __this->Clear();
}

// public bool Contains(T item) :1265
void List__Contains_fn(List* __this, void* item, bool* __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(4/*Uno.Generic.Equals<T>*/),
    };
    uStackFrame __("Uno.Collections.List`1", "Contains(T)");
    bool ret4;

    for (int i = 0; i < __this->_used; i++)
        if ((::g::Uno::Generic__Equals_fn(__types[0], uPtr(__this->_data)->TItem(i), item, &ret4), ret4))
            return *__retval = true, void();

    return *__retval = false, void();
}

// public int get_Count() :1193
void List__get_Count_fn(List* __this, int* __retval)
{
    *__retval = __this->Count();
}

// private void EnsureCapacity() :1174
void List__EnsureCapacity_fn(List* __this)
{
    __this->EnsureCapacity();
}

// public Uno.Collections.List<T>.Enumerator GetEnumerator() :1153
void List__GetEnumerator_fn(List* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(5/*Uno.Collections.List<T>.Enumerator*/),
    };
    uStackFrame __("Uno.Collections.List`1", "GetEnumerator()");
    uT ret5(__types[0], U_ALLOCA(__types[0]->ValueSize));
    return __retval.Store((List__Enumerator__New1_fn(__types[0], __this, &ret5), ret5)), void();
}

// public Uno.Collections.List<T>.Enumerator GetEnumerator() :1153
void List__GetEnumerator_boxed_fn(List* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator_boxed();
}

// public int IndexOf(T item) :1223
void List__IndexOf_fn(List* __this, void* item, int* __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(4/*Uno.Generic.Equals<T>*/),
    };
    uStackFrame __("Uno.Collections.List`1", "IndexOf(T)");
    bool ret6;

    for (int i = 0; i < __this->_used; i++)
        if ((::g::Uno::Generic__Equals_fn(__types[0], uPtr(__this->_data)->TItem(i), item, &ret6), ret6))
            return *__retval = i, void();

    return *__retval = -1, void();
}

// public void Insert(int index, T item) :1208
void List__Insert_fn(List* __this, int* index, void* item)
{
    uStackFrame __("Uno.Collections.List`1", "Insert(int,T)");
    int index_ = *index;

    if ((index_ < 0) || (index_ > __this->_used))
        U_THROW(::g::Uno::IndexOutOfRangeException::New4());

    __this->EnsureCapacity();

    for (int i = __this->_used; i >= index_; i--)
        uPtr(__this->_data)->TItem(i + 1) = uPtr(__this->_data)->TItem(i);

    uPtr(__this->_data)->TItem(index_) = item;
    __this->_version++;
    __this->_used++;
}

// public T get_Item(int index) :1276
void List__get_Item_fn(List* __this, int* index, uTRef __retval)
{
    uStackFrame __("Uno.Collections.List`1", "get_Item(int)");
    int index_ = *index;
    __this->BoundsCheck(index_);
    return __retval.Store(uPtr(__this->_data)->TItem(index_)), void();
}

// public void set_Item(int index, T value) :1281
void List__set_Item_fn(List* __this, int* index, void* value)
{
    uStackFrame __("Uno.Collections.List`1", "set_Item(int,T)");
    int index_ = *index;
    __this->BoundsCheck(index_);
    uPtr(__this->_data)->TItem(index_) = value;
    __this->_version++;
}

// public List New() :1141
void List__New1_fn(uType* __type, List** __retval)
{
    *__retval = List::New1(__type);
}

// public List New(int capacity) :1147
void List__New2_fn(uType* __type, int* capacity, List** __retval)
{
    *__retval = List::New2(__type, *capacity);
}

// public bool Remove(T item) :1232
void List__Remove_fn(List* __this, void* item, bool* __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(4/*Uno.Generic.Equals<T>*/),
    };
    uStackFrame __("Uno.Collections.List`1", "Remove(T)");
    bool ret7;

    for (int i = 0; i < __this->_used; i++)
        if ((::g::Uno::Generic__Equals_fn(__types[0], uPtr(__this->_data)->TItem(i), item, &ret7), ret7))
        {
            __this->RemoveAt(i);
            return *__retval = true, void();
        }

    return *__retval = false, void();
}

// public void RemoveAt(int index) :1246
void List__RemoveAt_fn(List* __this, int* index)
{
    __this->RemoveAt(*index);
}

// public void Sort(Uno.Comparison<T> comparer) :1289
void List__Sort_fn(List* __this, uDelegate* comparer)
{
    __this->Sort(comparer);
}

// public T[] ToArray() :1158
void List__ToArray_fn(List* __this, uArray** __retval)
{
    *__retval = __this->ToArray();
}

// public List() [instance] :1141
void List::ctor_()
{
    _data = NULL;
    _used = 0;
}

// public List(int capacity) [instance] :1147
void List::ctor_1(int capacity)
{
    uType* __types[] = {
        __type->Precalced(0/*T[]*/),
    };
    _data = uArray::New(__types[0], capacity);
    _used = 0;
}

// public void AddRange(Uno.Collections.IEnumerable<T> items) [instance] :1203
void List::AddRange(uObject* items)
{
    uType* __types[] = {
        __type->Precalced(1/*T*/),
        __type->Precalced(2/*Uno.Collections.IEnumerable<T>*/),
        __type->Precalced(3/*Uno.Collections.IEnumerator<T>*/),
    };
    uStackFrame __("Uno.Collections.List`1", "AddRange(Uno.Collections.IEnumerable<T>)");
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT i(__types[0], U_ALLOCA(__types[0]->ValueSize));

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(items), __types[1])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[3/*Uno.Collections.IEnumerator*/])); )
    {
        i = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), __types[2]), &ret3), ret3);
        List__Add_fn(this, i);
    }
}

// private void BoundsCheck(int index) [instance] :1168
void List::BoundsCheck(int index)
{
    uStackFrame __("Uno.Collections.List`1", "BoundsCheck(int)");

    if ((index < 0) || (index >= Count()))
        U_THROW(::g::Uno::IndexOutOfRangeException::New4());
}

// public void Clear() [instance] :1258
void List::Clear()
{
    _data = NULL;
    _used = 0;
    _version++;
}

// public int get_Count() [instance] :1193
int List::Count()
{
    return _used;
}

// private void EnsureCapacity() [instance] :1174
void List::EnsureCapacity()
{
    uType* __types[] = {
        __type->Precalced(0/*T[]*/),
    };
    uStackFrame __("Uno.Collections.List`1", "EnsureCapacity()");

    if (_data == NULL)
        _data = uArray::New(__types[0], 2);
    else if ((_used + 1) >= uPtr(_data)->Length())
    {
        uArray* newData = uArray::New(__types[0], ::g::Uno::Math::Max8(2, uPtr(_data)->Length() * 2));

        for (int i = 0; i < _used; i++)
            uPtr(newData)->TItem(i) = uPtr(_data)->TItem(i);

        _data = newData;
    }
}

// public Uno.Collections.List<T>.Enumerator GetEnumerator() [instance] :1153
uObject* List::GetEnumerator_boxed()
{
    uType* __types[] = {
        __type->Precalced(5/*Uno.Collections.List<T>.Enumerator*/),
    };
    uT ret8(__types[0], U_ALLOCA(__types[0]->ValueSize));
    return uBoxPtr(__types[0], (List__GetEnumerator_fn(this, &ret8), ret8));
}

// public void RemoveAt(int index) [instance] :1246
void List::RemoveAt(int index)
{
    uStackFrame __("Uno.Collections.List`1", "RemoveAt(int)");
    BoundsCheck(index);

    for (int i = index; i < (_used - 1); i++)
        uPtr(_data)->TItem(i) = uPtr(_data)->TItem(i + 1);

    _used = (_used - 1);
    uPtr(_data)->TItem(_used).Default();
    _version++;
}

// public void Sort(Uno.Comparison<T> comparer) [instance] :1289
void List::Sort(uDelegate* comparer)
{
    uType* __types[] = {
        __type->Precalced(6/*Uno.Array.Sort<T>*/),
    };
    ::g::Uno::Array::Sort(__types[0], _data, 0, _used, comparer);
    _version++;
}

// public T[] ToArray() [instance] :1158
uArray* List::ToArray()
{
    uType* __types[] = {
        __type->Precalced(0/*T[]*/),
    };
    uStackFrame __("Uno.Collections.List`1", "ToArray()");
    uArray* t = uArray::New(__types[0], _used);

    for (int i = 0; i < _used; i++)
        uPtr(t)->TItem(i) = uPtr(_data)->TItem(i);

    return t;
}

// public List New() [static] :1141
List* List::New1(uType* __type)
{
    List* obj1 = (List*)uNew(__type);
    obj1->ctor_();
    return obj1;
}

// public List New(int capacity) [static] :1147
List* List::New2(uType* __type, int capacity)
{
    List* obj2 = (List*)uNew(__type);
    obj2->ctor_1(capacity);
    return obj2;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Collections/0.42.0/$.uno
// ------------------------------------------------------------------------------------------

// public sealed class ObservableList<T> :8
// {
static void ObservableList_build(uType* type)
{
    ::STRINGS[12] = uString::Const("added");
    ::STRINGS[13] = uString::Const("removed");
    ::TYPES[17] = ::g::Uno::Collections::List_typeof();
    ::TYPES[28] = ::g::Uno::Collections::List__Enumerator_typeof();
    type->SetPrecalc(
        ::g::Uno::Collections::List_typeof()->MakeType(type->T(0), NULL),
        ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(type->T(0), NULL),
        type->T(0));
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(type->T(0), NULL), offsetof(ObservableList_type, interface0),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(type->T(0), NULL), offsetof(ObservableList_type, interface1),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(0), NULL), offsetof(ObservableList_type, interface2));
    type->SetFields(0,
        ::g::Uno::Action1_typeof()->MakeType(type->T(0), NULL), offsetof(::g::Uno::Collections::ObservableList, added), 0,
        ::TYPES[17/*Uno.Collections.List`1*/]->MakeType(type->T(0), NULL), offsetof(::g::Uno::Collections::ObservableList, items), 0,
        ::g::Uno::Action1_typeof()->MakeType(type->T(0), NULL), offsetof(::g::Uno::Collections::ObservableList, removed), 0);
    type->Reflection.SetFunctions(11,
        new uFunction("Add", NULL, (void*)ObservableList__Add_fn, 0, false, uVoid_typeof(), 1, type->T(0)),
        new uFunction("Clear", NULL, (void*)ObservableList__Clear_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("Contains", NULL, (void*)ObservableList__Contains_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type->T(0)),
        new uFunction("get_Count", NULL, (void*)ObservableList__get_Count_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("GetEnumerator", NULL, (void*)ObservableList__GetEnumerator_fn, 0, false, ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0), NULL), 0),
        new uFunction("Insert", NULL, (void*)ObservableList__Insert_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), type->T(0)),
        new uFunction("get_Item", NULL, (void*)ObservableList__get_Item_fn, 0, false, type->T(0), 1, ::g::Uno::Int_typeof()),
        new uFunction(".ctor", type, (void*)ObservableList__New1_fn, 0, true, type, 2, ::g::Uno::Action1_typeof()->MakeType(type->T(0), NULL), ::g::Uno::Action1_typeof()->MakeType(type->T(0), NULL)),
        new uFunction("Remove", NULL, (void*)ObservableList__Remove_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type->T(0)),
        new uFunction("RemoveAt", NULL, (void*)ObservableList__RemoveAt_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("ReplaceAt", NULL, (void*)ObservableList__ReplaceAt_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), type->T(0)));
}

ObservableList_type* ObservableList_typeof()
{
    static uSStrong<ObservableList_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.PrecalcCount = 3;
    options.ObjectSize = sizeof(ObservableList);
    options.TypeSize = sizeof(ObservableList_type);
    type = (ObservableList_type*)uClassType::New("Uno.Collections.ObservableList`1", options);
    type->fp_build_ = ObservableList_build;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))ObservableList__Insert_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))ObservableList__RemoveAt_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))ObservableList__get_Item_fn;
    type->interface1.fp_Clear = (void(*)(uObject*))ObservableList__Clear_fn;
    type->interface1.fp_Add = (void(*)(uObject*, void*))ObservableList__Add_fn;
    type->interface1.fp_Remove = (void(*)(uObject*, void*, bool*))ObservableList__Remove_fn;
    type->interface1.fp_Contains = (void(*)(uObject*, void*, bool*))ObservableList__Contains_fn;
    type->interface1.fp_get_Count = (void(*)(uObject*, int*))ObservableList__get_Count_fn;
    type->interface2.fp_GetEnumerator = (void(*)(uObject*, uObject**))ObservableList__GetEnumerator_fn;
    return type;
}

// public ObservableList(Uno.Action<T> added, Uno.Action<T> removed) :14
void ObservableList__ctor__fn(ObservableList* __this, uDelegate* added1, uDelegate* removed1)
{
    __this->ctor_(added1, removed1);
}

// public void Add(T item) :44
void ObservableList__Add_fn(ObservableList* __this, void* item)
{
    uType* __types[] = {
        __this->__type->Precalced(0/*Uno.Collections.List<T>*/),
    };
    uStackFrame __("Uno.Collections.ObservableList`1", "Add(T)");

    if (__this->items == NULL)
        __this->items = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(__types[0]));

    ::g::Uno::Collections::List__Add_fn(uPtr(__this->items), item);
    uPtr(__this->added)->InvokeVoid(item);
}

// public void Clear() :25
void ObservableList__Clear_fn(ObservableList* __this)
{
    __this->Clear();
}

// public bool Contains(T item) :36
void ObservableList__Contains_fn(ObservableList* __this, void* item, bool* __retval)
{
    uStackFrame __("Uno.Collections.ObservableList`1", "Contains(T)");
    bool ret5;

    if (__this->items == NULL)
        return *__retval = false, void();

    return *__retval = (::g::Uno::Collections::List__Contains_fn(uPtr(__this->items), item, &ret5), ret5), void();
}

// public int get_Count() :92
void ObservableList__get_Count_fn(ObservableList* __this, int* __retval)
{
    *__retval = __this->Count();
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() :105
void ObservableList__GetEnumerator_fn(ObservableList* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public void Insert(int index, T item) :53
void ObservableList__Insert_fn(ObservableList* __this, int* index, void* item)
{
    uType* __types[] = {
        __this->__type->Precalced(0/*Uno.Collections.List<T>*/),
    };
    uStackFrame __("Uno.Collections.ObservableList`1", "Insert(int,T)");
    int index_ = *index;

    if (__this->items == NULL)
        __this->items = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(__types[0]));

    ::g::Uno::Collections::List__Insert_fn(uPtr(__this->items), uCRef<int>(index_), item);
    uPtr(__this->added)->InvokeVoid(item);
}

// public T get_Item(int index) :96
void ObservableList__get_Item_fn(ObservableList* __this, int* index, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(2/*T*/),
    };
    uStackFrame __("Uno.Collections.ObservableList`1", "get_Item(int)");
    uT ret11(__types[0], U_ALLOCA(__types[0]->ValueSize));
    int index_ = *index;

    if (__this->items == NULL)
        U_THROW(::g::Uno::IndexOutOfRangeException::New4());

    return __retval.Store((::g::Uno::Collections::List__get_Item_fn(uPtr(__this->items), uCRef<int>(index_), &ret11), ret11)), void();
}

// public ObservableList New(Uno.Action<T> added, Uno.Action<T> removed) :14
void ObservableList__New1_fn(uType* __type, uDelegate* added1, uDelegate* removed1, ObservableList** __retval)
{
    *__retval = ObservableList::New1(__type, added1, removed1);
}

// public bool Remove(T item) :81
void ObservableList__Remove_fn(ObservableList* __this, void* item, bool* __retval)
{
    uStackFrame __("Uno.Collections.ObservableList`1", "Remove(T)");
    bool ret7;

    if (__this->items == NULL)
        return *__retval = false, void();

    bool res = (::g::Uno::Collections::List__Remove_fn(uPtr(__this->items), item, &ret7), ret7);

    if (res)
        uPtr(__this->removed)->InvokeVoid(item);

    return *__retval = res, void();
}

// public void RemoveAt(int index) :73
void ObservableList__RemoveAt_fn(ObservableList* __this, int* index)
{
    __this->RemoveAt(*index);
}

// public void ReplaceAt(int index, T item) :62
void ObservableList__ReplaceAt_fn(ObservableList* __this, int* index, void* item)
{
    uType* __types[] = {
        __this->__type->Precalced(2/*T*/),
    };
    uStackFrame __("Uno.Collections.ObservableList`1", "ReplaceAt(int,T)");
    uT ret10(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT old(__types[0], U_ALLOCA(__types[0]->ValueSize));
    int index_ = *index;

    if (__this->items == NULL)
        U_THROW(::g::Uno::IndexOutOfRangeException::New4());

    old = (::g::Uno::Collections::List__get_Item_fn(uPtr(__this->items), uCRef<int>(index_), &ret10), ret10);
    ::g::Uno::Collections::List__set_Item_fn(uPtr(__this->items), uCRef<int>(index_), item);
    uPtr(__this->removed)->InvokeVoid(old);
    uPtr(__this->added)->InvokeVoid(item);
}

// public ObservableList(Uno.Action<T> added, Uno.Action<T> removed) [instance] :14
void ObservableList::ctor_(uDelegate* added1, uDelegate* removed1)
{
    uStackFrame __("Uno.Collections.ObservableList`1", ".ctor(Uno.Action<T>,Uno.Action<T>)");

    if (::g::Uno::Delegate::op_Equality(added1, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[12/*"added"*/]));

    if (::g::Uno::Delegate::op_Equality(removed1, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[13/*"removed"*/]));

    added = added1;
    removed = removed1;
}

// public void Clear() [instance] :25
void ObservableList::Clear()
{
    uType* __types[] = {
        __type->Precalced(1/*Uno.Collections.List<T>.Enumerator*/),
        __type->Precalced(2/*T*/),
    };
    uStackFrame __("Uno.Collections.ObservableList`1", "Clear()");
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret4(__types[1], U_ALLOCA(__types[1]->ValueSize));
    uT enum1(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT i(__types[1], U_ALLOCA(__types[1]->ValueSize));
    bool ret3;

    if (items != NULL)
    {
        ::g::Uno::Collections::List* removedItems = items;
        items = NULL;

        for (enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(removedItems), &ret2), ret2); (::g::Uno::Collections::List__Enumerator__MoveNext_fn(&enum1, __types[0], &ret3), ret3); )
        {
            i = (::g::Uno::Collections::List__Enumerator__get_Current_fn(&enum1, __types[0], &ret4), ret4);
            uPtr(removed)->InvokeVoid(i);
        }
    }
}

// public int get_Count() [instance] :92
int ObservableList::Count()
{
    uStackFrame __("Uno.Collections.ObservableList`1", "get_Count()");
    return (items != NULL) ? uPtr(items)->Count() : 0;
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() [instance] :105
uObject* ObservableList::GetEnumerator()
{
    uType* __types[] = {
        __type->Precalced(1/*Uno.Collections.List<T>.Enumerator*/),
        __type->Precalced(0/*Uno.Collections.List<T>*/),
    };
    uStackFrame __("Uno.Collections.ObservableList`1", "GetEnumerator()");
    uT ret6(__types[0], U_ALLOCA(__types[0]->ValueSize));

    if (items == NULL)
        items = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(__types[1]));

    return uBoxPtr(__types[0], (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(items), &ret6), ret6));
}

// public void RemoveAt(int index) [instance] :73
void ObservableList::RemoveAt(int index)
{
    uType* __types[] = {
        __type->Precalced(2/*T*/),
    };
    uStackFrame __("Uno.Collections.ObservableList`1", "RemoveAt(int)");
    uT ret9(__types[0], U_ALLOCA(__types[0]->ValueSize));
    bool ret8;

    if (items == NULL)
        U_THROW(::g::Uno::IndexOutOfRangeException::New4());

    ObservableList__Remove_fn(this, (::g::Uno::Collections::List__get_Item_fn(uPtr(items), uCRef<int>(index), &ret9), ret9), &ret8);
}

// public ObservableList New(Uno.Action<T> added, Uno.Action<T> removed) [static] :14
ObservableList* ObservableList::New1(uType* __type, uDelegate* added1, uDelegate* removed1)
{
    ObservableList* obj1 = (ObservableList*)uNew(__type);
    obj1->ctor_(added1, removed1);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Collections/0.42.0/extensions/$.uno
// -----------------------------------------------------------------------------------------------------

// internal sealed class OfTypeEnumerable<T, U> :359
// {
static void OfTypeEnumerable_build(uType* type)
{
    ::TYPES[30] = ::g::Uno::Collections::OfTypeEnumerator_typeof();
    ::TYPES[2] = ::g::Uno::Collections::IEnumerable_typeof();
    type->SetPrecalc(
        ::g::Uno::Collections::OfTypeEnumerator_typeof()->MakeType(type->T(0), type->T(1), NULL),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(0), NULL));
    type->SetInterfaces(
        ::TYPES[2/*Uno.Collections.IEnumerable`1*/]->MakeType(type->T(1), NULL), offsetof(OfTypeEnumerable_type, interface0));
    type->SetFields(0,
        ::TYPES[2/*Uno.Collections.IEnumerable`1*/]->MakeType(type->T(0), NULL), offsetof(::g::Uno::Collections::OfTypeEnumerable, _source), 0);
}

OfTypeEnumerable_type* OfTypeEnumerable_typeof()
{
    static uSStrong<OfTypeEnumerable_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 2;
    options.InterfaceCount = 1;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(OfTypeEnumerable);
    options.TypeSize = sizeof(OfTypeEnumerable_type);
    type = (OfTypeEnumerable_type*)uClassType::New("Uno.Collections.OfTypeEnumerable`2", options);
    type->fp_build_ = OfTypeEnumerable_build;
    type->interface0.fp_GetEnumerator = (void(*)(uObject*, uObject**))OfTypeEnumerable__GetEnumerator_fn;
    return type;
}

// public OfTypeEnumerable(Uno.Collections.IEnumerable<T> source) :363
void OfTypeEnumerable__ctor__fn(OfTypeEnumerable* __this, uObject* source)
{
    __this->ctor_(source);
}

// public Uno.Collections.IEnumerator<U> GetEnumerator() :368
void OfTypeEnumerable__GetEnumerator_fn(OfTypeEnumerable* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public OfTypeEnumerable New(Uno.Collections.IEnumerable<T> source) :363
void OfTypeEnumerable__New1_fn(uType* __type, uObject* source, OfTypeEnumerable** __retval)
{
    *__retval = OfTypeEnumerable::New1(__type, source);
}

// public OfTypeEnumerable(Uno.Collections.IEnumerable<T> source) [instance] :363
void OfTypeEnumerable::ctor_(uObject* source)
{
    _source = source;
}

// public Uno.Collections.IEnumerator<U> GetEnumerator() [instance] :368
uObject* OfTypeEnumerable::GetEnumerator()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.OfTypeEnumerator<T, U>*/),
        __type->Precalced(1/*Uno.Collections.IEnumerable<T>*/),
    };
    uStackFrame __("Uno.Collections.OfTypeEnumerable`2", "GetEnumerator()");
    return (uObject*)((::g::Uno::Collections::OfTypeEnumerator*)::g::Uno::Collections::OfTypeEnumerator::New1(__types[0], (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(_source), __types[1]))));
}

// public OfTypeEnumerable New(Uno.Collections.IEnumerable<T> source) [static] :363
OfTypeEnumerable* OfTypeEnumerable::New1(uType* __type, uObject* source)
{
    OfTypeEnumerable* obj1 = (OfTypeEnumerable*)uNew(__type);
    obj1->ctor_(source);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Collections/0.42.0/extensions/$.uno
// -----------------------------------------------------------------------------------------------------

// internal sealed class OfTypeEnumerator<T, U> :374
// {
static void OfTypeEnumerator_build(uType* type)
{
    ::TYPES[3] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[4] = ::g::Uno::Collections::IEnumerator1_typeof();
    type->SetPrecalc(
        type->T(0),
        type->T(1),
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0), NULL));
    type->SetInterfaces(
        ::TYPES[4/*Uno.Collections.IEnumerator`1*/]->MakeType(type->T(1), NULL), offsetof(OfTypeEnumerator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(OfTypeEnumerator_type, interface1),
        ::TYPES[3/*Uno.Collections.IEnumerator*/], offsetof(OfTypeEnumerator_type, interface2));
    type->SetFields(0,
        type->T(1), (uintptr_t)0, uFieldFlagsConstrained,
        ::TYPES[4/*Uno.Collections.IEnumerator`1*/]->MakeType(type->T(0), NULL), offsetof(::g::Uno::Collections::OfTypeEnumerator, _source), 0);
}

OfTypeEnumerator_type* OfTypeEnumerator_typeof()
{
    static uSStrong<OfTypeEnumerator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 2;
    options.InterfaceCount = 3;
    options.PrecalcCount = 3;
    options.ObjectSize = sizeof(OfTypeEnumerator);
    options.TypeSize = sizeof(OfTypeEnumerator_type);
    type = (OfTypeEnumerator_type*)uClassType::New("Uno.Collections.OfTypeEnumerator`2", options);
    type->fp_build_ = OfTypeEnumerator_build;
    type->interface0.fp_get_Current = (void(*)(uObject*, uTRef))OfTypeEnumerator__get_Current_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))OfTypeEnumerator__Dispose_fn;
    type->interface2.fp_Reset = (void(*)(uObject*))OfTypeEnumerator__Reset_fn;
    type->interface2.fp_MoveNext = (void(*)(uObject*, bool*))OfTypeEnumerator__MoveNext_fn;
    return type;
}

// public OfTypeEnumerator(Uno.Collections.IEnumerator<T> source) :379
void OfTypeEnumerator__ctor__fn(OfTypeEnumerator* __this, uObject* source)
{
    __this->ctor_(source);
}

// public U get_Current() :386
void OfTypeEnumerator__get_Current_fn(OfTypeEnumerator* __this, uTRef __retval)
{
    return __retval.Store(__this->_current()), void();
}

// public void Dispose() :389
void OfTypeEnumerator__Dispose_fn(OfTypeEnumerator* __this)
{
    __this->Dispose();
}

// public bool MoveNext() :399
void OfTypeEnumerator__MoveNext_fn(OfTypeEnumerator* __this, bool* __retval)
{
    *__retval = __this->MoveNext();
}

// public OfTypeEnumerator New(Uno.Collections.IEnumerator<T> source) :379
void OfTypeEnumerator__New1_fn(uType* __type, uObject* source, OfTypeEnumerator** __retval)
{
    *__retval = OfTypeEnumerator::New1(__type, source);
}

// public void Reset() :394
void OfTypeEnumerator__Reset_fn(OfTypeEnumerator* __this)
{
    __this->Reset();
}

// public OfTypeEnumerator(Uno.Collections.IEnumerator<T> source) [instance] :379
void OfTypeEnumerator::ctor_(uObject* source)
{
    _source = source;
}

// public void Dispose() [instance] :389
void OfTypeEnumerator::Dispose()
{
}

// public bool MoveNext() [instance] :399
bool OfTypeEnumerator::MoveNext()
{
    uType* __types[] = {
        __type->Precalced(0/*T*/),
        __type->Precalced(1/*U*/),
        __type->Precalced(2/*Uno.Collections.IEnumerator<T>*/),
    };
    uStackFrame __("Uno.Collections.OfTypeEnumerator`2", "MoveNext()");
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));

    while (true)
    {
        if (!::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(_source), ::TYPES[3/*Uno.Collections.IEnumerator*/])))
            return false;

        if (uIs(uBoxPtr(__types[0], (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(_source), __types[2]), &ret2), ret2)), __types[1]))
        {
            uObject* obj = uBoxPtr(__types[0], (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(_source), __types[2]), &ret3), ret3));
            _current() = uUnboxAny(__types[1], obj);
            return true;
        }
    }

    return false;
}

// public void Reset() [instance] :394
void OfTypeEnumerator::Reset()
{
    uStackFrame __("Uno.Collections.OfTypeEnumerator`2", "Reset()");
    ::g::Uno::Collections::IEnumerator::Reset(uInterface(uPtr(_source), ::TYPES[3/*Uno.Collections.IEnumerator*/]));
}

// public OfTypeEnumerator New(Uno.Collections.IEnumerator<T> source) [static] :379
OfTypeEnumerator* OfTypeEnumerator::New1(uType* __type, uObject* source)
{
    OfTypeEnumerator* obj1 = (OfTypeEnumerator*)uNew(__type);
    obj1->ctor_(source);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Collections/0.42.0/extensions/$.uno
// -----------------------------------------------------------------------------------------------------

// internal sealed class OrderByCompare<T> :438
// {
static void OrderByCompare_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Func2_typeof()->MakeType(type->T(0), type->T(0), ::g::Uno::Int_typeof(), NULL), offsetof(::g::Uno::Collections::OrderByCompare, _orderFunction), 0);
}

uType* OrderByCompare_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(OrderByCompare);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Collections.OrderByCompare`1", options);
    type->fp_build_ = OrderByCompare_build;
    return type;
}

// public OrderByCompare(Uno.Func<T, T, int> orderFunction) :442
void OrderByCompare__ctor__fn(OrderByCompare* __this, uDelegate* orderFunction)
{
    __this->ctor_(orderFunction);
}

// public int Compare(T a, T b) :447
void OrderByCompare__Compare_fn(OrderByCompare* __this, void* a, void* b, int* __retval)
{
    uStackFrame __("Uno.Collections.OrderByCompare`1", "Compare(T,T)");
    int ret2;
    return *__retval = (uPtr(__this->_orderFunction)->Invoke(&ret2, 2, a, b), ret2), void();
}

// public OrderByCompare New(Uno.Func<T, T, int> orderFunction) :442
void OrderByCompare__New1_fn(uType* __type, uDelegate* orderFunction, OrderByCompare** __retval)
{
    *__retval = OrderByCompare::New1(__type, orderFunction);
}

// public OrderByCompare(Uno.Func<T, T, int> orderFunction) [instance] :442
void OrderByCompare::ctor_(uDelegate* orderFunction)
{
    _orderFunction = orderFunction;
}

// public OrderByCompare New(Uno.Func<T, T, int> orderFunction) [static] :442
OrderByCompare* OrderByCompare::New1(uType* __type, uDelegate* orderFunction)
{
    OrderByCompare* obj1 = (OrderByCompare*)uNew(__type);
    obj1->ctor_(orderFunction);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/internal/$.uno
// --------------------------------------------------------------------------------------------

// internal sealed class PriorityQueue<T> :1312
// {
static void PriorityQueue_build(uType* type)
{
    ::TYPES[17] = ::g::Uno::Collections::List_typeof();
    ::TYPES[31] = ::g::Uno::Collections::PriorityQueueItem_typeof();
    type->SetPrecalc(
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Collections::PriorityQueueItem_typeof()->MakeType(type->T(0), NULL), NULL),
        ::g::Uno::Collections::PriorityQueueItem_typeof()->MakeType(type->T(0), NULL),
        type->T(0));
    type->SetFields(0,
        ::TYPES[17/*Uno.Collections.List`1*/]->MakeType(::TYPES[31/*Uno.Collections.PriorityQueueItem`1*/]->MakeType(type->T(0), NULL), NULL), offsetof(::g::Uno::Collections::PriorityQueue, _items), 0,
        ::g::Uno::Collections::PriorityQueueType_typeof(), offsetof(::g::Uno::Collections::PriorityQueue, _type), 0);
}

uType* PriorityQueue_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.PrecalcCount = 3;
    options.ObjectSize = sizeof(PriorityQueue);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Collections.PriorityQueue`1", options);
    type->fp_build_ = PriorityQueue_build;
    return type;
}

// public PriorityQueue([Uno.Collections.PriorityQueueType type]) :1317
void PriorityQueue__ctor__fn(PriorityQueue* __this, int* type)
{
    __this->ctor_(*type);
}

// public void Add(T value, [float priority]) :1346
void PriorityQueue__Add_fn(PriorityQueue* __this, void* value, float* priority)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*Uno.Collections.PriorityQueueItem<T>*/),
    };
    uStackFrame __("Uno.Collections.PriorityQueue`1", "Add(T,[float])");
    uT collection1(__types[0], U_ALLOCA(__types[0]->ValueSize));
    float priority_ = *priority;
    int at = (__this->_type == 0) ? __this->LowerBound(priority_) : __this->UpperBound(priority_);
    ::g::Uno::Collections::List__Insert_fn(uPtr(__this->_items), uCRef<int>(at), (collection1.Default(), collection1[0/*Value*/] = value, collection1[1/*Priority*/].Value<float>() = priority_, collection1));
}

// public int get_Count() :1379
void PriorityQueue__get_Count_fn(PriorityQueue* __this, int* __retval)
{
    *__retval = __this->Count();
}

// public bool get_Empty() :1374
void PriorityQueue__get_Empty_fn(PriorityQueue* __this, bool* __retval)
{
    *__retval = __this->Empty();
}

// private int LowerBound(float priority) :1325
void PriorityQueue__LowerBound_fn(PriorityQueue* __this, float* priority, int* __retval)
{
    *__retval = __this->LowerBound(*priority);
}

// public PriorityQueue New([Uno.Collections.PriorityQueueType type]) :1317
void PriorityQueue__New1_fn(uType* __type, int* type, PriorityQueue** __retval)
{
    *__retval = PriorityQueue::New1(__type, *type);
}

// public T PopTop() :1364
void PriorityQueue__PopTop_fn(PriorityQueue* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*Uno.Collections.PriorityQueueItem<T>*/),
        __this->__type->Precalced(2/*T*/),
    };
    uStackFrame __("Uno.Collections.PriorityQueue`1", "PopTop()");
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT v(__types[1], U_ALLOCA(__types[1]->ValueSize));
    int i = uPtr(__this->_items)->Count() - 1;
    v = (::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_items), uCRef<int>(i), &ret3), ret3)[0/*Value*/];
    uPtr(__this->_items)->RemoveAt(i);
    return __retval.Store(v), void();
}

// public void Remove(T value) :1352
void PriorityQueue__Remove_fn(PriorityQueue* __this, void* value)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*Uno.Collections.PriorityQueueItem<T>*/),
    };
    uStackFrame __("Uno.Collections.PriorityQueue`1", "Remove(T)");
    uT ret4(__types[0], U_ALLOCA(__types[0]->ValueSize));

    for (int i = 0; i < uPtr(__this->_items)->Count(); ++i)
        if (::g::Uno::Object::Equals1(uBoxPtr(__this->__type->Precalced(2/*T*/), (::g::Uno::Collections::List__get_Item_fn(uPtr(__this->_items), uCRef<int>(i), &ret4), ret4)[0/*Value*/]), uBoxPtr(__this->__type->Precalced(2/*T*/), value)))
        {
            uPtr(__this->_items)->RemoveAt(i);
            break;
        }
}

// private int UpperBound(float priority) :1337
void PriorityQueue__UpperBound_fn(PriorityQueue* __this, float* priority, int* __retval)
{
    *__retval = __this->UpperBound(*priority);
}

// public PriorityQueue([Uno.Collections.PriorityQueueType type]) [instance] :1317
void PriorityQueue::ctor_(int type)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.List<Uno.Collections.PriorityQueueItem<T>>*/),
    };
    _items = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(__types[0]));
    _type = type;
}

// public int get_Count() [instance] :1379
int PriorityQueue::Count()
{
    uStackFrame __("Uno.Collections.PriorityQueue`1", "get_Count()");
    return uPtr(_items)->Count();
}

// public bool get_Empty() [instance] :1374
bool PriorityQueue::Empty()
{
    uStackFrame __("Uno.Collections.PriorityQueue`1", "get_Empty()");
    return uPtr(_items)->Count() == 0;
}

// private int LowerBound(float priority) [instance] :1325
int PriorityQueue::LowerBound(float priority)
{
    uType* __types[] = {
        __type->Precalced(1/*Uno.Collections.PriorityQueueItem<T>*/),
    };
    uStackFrame __("Uno.Collections.PriorityQueue`1", "LowerBound(float)");
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));

    for (int i = 0; i < uPtr(_items)->Count(); ++i)
        if ((::g::Uno::Collections::List__get_Item_fn(uPtr(_items), uCRef<int>(i), &ret2), ret2)[1/*Priority*/].Value<float>() >= priority)
            return i;

    return uPtr(_items)->Count();
}

// private int UpperBound(float priority) [instance] :1337
int PriorityQueue::UpperBound(float priority)
{
    uType* __types[] = {
        __type->Precalced(1/*Uno.Collections.PriorityQueueItem<T>*/),
    };
    uStackFrame __("Uno.Collections.PriorityQueue`1", "UpperBound(float)");
    uT ret5(__types[0], U_ALLOCA(__types[0]->ValueSize));

    for (int i = 0; i < uPtr(_items)->Count(); ++i)
        if ((::g::Uno::Collections::List__get_Item_fn(uPtr(_items), uCRef<int>(i), &ret5), ret5)[1/*Priority*/].Value<float>() > priority)
            return i;

    return uPtr(_items)->Count();
}

// public PriorityQueue New([Uno.Collections.PriorityQueueType type]) [static] :1317
PriorityQueue* PriorityQueue::New1(uType* __type, int type)
{
    PriorityQueue* obj1 = (PriorityQueue*)uNew(__type);
    obj1->ctor_(type);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/internal/$.uno
// --------------------------------------------------------------------------------------------

// internal struct PriorityQueueItem<T> :1294
// {
static void PriorityQueueItem_build(uType* type)
{
    type->SetFields(0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Float_typeof(), (uintptr_t)0, uFieldFlagsConstrained);
}

uStructType* PriorityQueueItem_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Collections.PriorityQueueItem`1", options);
    type->fp_build_ = PriorityQueueItem_build;
    return type;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/internal/$.uno
// --------------------------------------------------------------------------------------------

// internal enum PriorityQueueType :1300
uEnumType* PriorityQueueType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Uno.Collections.PriorityQueueType", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Fifo", 0LL,
        "Lifo", 1LL);
    return type;
}

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/collections/$.uno
// ---------------------------------------------------------------------------------------------------------

// public sealed class Queue<T> :1305
// {
static void Queue_build(uType* type)
{
    ::STRINGS[14] = uString::Const("Queue is empty");
    ::TYPES[0] = uObject_typeof()->Array();
    ::TYPES[5] = ::g::Uno::Generic_typeof();
    ::TYPES[32] = Queue__Enumerator_typeof();
    type->SetPrecalc(
        type->T(0)->Array(),
        ::g::Uno::Generic_typeof()->MakeMethod(0/*Equals<T>*/, type->T(0), NULL),
        type->T(0),
        Queue__Enumerator_typeof()->MakeType(type->T(0), NULL));
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(0), NULL), offsetof(Queue_type, interface0));
    type->SetFields(0,
        type->T(0)->Array(), offsetof(::g::Uno::Collections::Queue, _data), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Collections::Queue, _head), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Collections::Queue, _size), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Collections::Queue, _tail), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Collections::Queue, _version), 0);
    type->Reflection.SetFunctions(10,
        new uFunction("Clear", NULL, (void*)Queue__Clear_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("Contains", NULL, (void*)Queue__Contains_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type->T(0)),
        new uFunction("get_Count", NULL, (void*)Queue__get_Count_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("Dequeue", NULL, (void*)Queue__Dequeue_fn, 0, false, type->T(0), 0),
        new uFunction("Enqueue", NULL, (void*)Queue__Enqueue_fn, 0, false, uVoid_typeof(), 1, type->T(0)),
        new uFunction("GetEnumerator", NULL, (void*)Queue__GetEnumerator_fn, 0, false, ::TYPES[32/*Uno.Collections.Queue`1.Enumerator*/]->MakeType(type->T(0), NULL), 0),
        new uFunction("GetEnumerator", NULL, (void*)Queue__GetEnumerator_boxed_fn, 0, false, ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0), NULL), 0),
        new uFunction(".ctor", type, (void*)Queue__New1_fn, 0, true, type, 0),
        new uFunction(".ctor", type, (void*)Queue__New2_fn, 0, true, type, 1, ::g::Uno::Int_typeof()),
        new uFunction("Peek", NULL, (void*)Queue__Peek_fn, 0, false, type->T(0), 0));
}

Queue_type* Queue_typeof()
{
    static uSStrong<Queue_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.PrecalcCount = 4;
    options.ObjectSize = sizeof(Queue);
    options.TypeSize = sizeof(Queue_type);
    type = (Queue_type*)uClassType::New("Uno.Collections.Queue`1", options);
    type->fp_build_ = Queue_build;
    type->fp_ctor_ = (void*)Queue__New1_fn;
    type->interface0.fp_GetEnumerator = (void(*)(uObject*, uObject**))Queue__GetEnumerator_boxed_fn;
    return type;
}

// public Queue() :1368
void Queue__ctor__fn(Queue* __this)
{
    __this->ctor_();
}

// public Queue(int capacity) :1376
void Queue__ctor_1_fn(Queue* __this, int* capacity)
{
    __this->ctor_1(*capacity);
}

// public void Clear() :1394
void Queue__Clear_fn(Queue* __this)
{
    __this->Clear();
}

// public bool Contains(T item) :1403
void Queue__Contains_fn(Queue* __this, void* item, bool* __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*Uno.Generic.Equals<T>*/),
    };
    uStackFrame __("Uno.Collections.Queue`1", "Contains(T)");
    bool ret3;

    for (int i = __this->_head; i < __this->_tail; i++)
        if ((::g::Uno::Generic__Equals_fn(__types[0], uPtr(__this->_data)->TItem(i), item, &ret3), ret3))
            return *__retval = true, void();

    return *__retval = false, void();
}

// public int get_Count() :1386
void Queue__get_Count_fn(Queue* __this, int* __retval)
{
    *__retval = __this->Count();
}

// public T Dequeue() :1421
void Queue__Dequeue_fn(Queue* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(2/*T*/),
    };
    uStackFrame __("Uno.Collections.Queue`1", "Dequeue()");
    uT result(__types[0], U_ALLOCA(__types[0]->ValueSize));

    if (__this->_size == 0)
        U_THROW(::g::Uno::InvalidOperationException::New5(::STRINGS[14/*"Queue is em...*/]));

    result = uPtr(__this->_data)->TItem(__this->_head);
    uPtr(__this->_data)->TItem(__this->_head).Default();
    __this->_head++;
    __this->_size--;
    __this->_version++;
    return __retval.Store(result), void();
}

// private T ElementAt(int index) :1465
void Queue__ElementAt_fn(Queue* __this, int* index, uTRef __retval)
{
    uStackFrame __("Uno.Collections.Queue`1", "ElementAt(int)");
    int index_ = *index;
    return __retval.Store(uPtr(__this->_data)->TItem(__this->_head + index_)), void();
}

// public void Enqueue(T item) :1412
void Queue__Enqueue_fn(Queue* __this, void* item)
{
    uStackFrame __("Uno.Collections.Queue`1", "Enqueue(T)");
    __this->EnsureCapacity();
    uPtr(__this->_data)->TItem(__this->_tail) = item;
    __this->_tail++;
    __this->_size++;
    __this->_version++;
}

// private void EnsureCapacity() :1444
void Queue__EnsureCapacity_fn(Queue* __this)
{
    __this->EnsureCapacity();
}

// public Uno.Collections.Queue<T>.Enumerator GetEnumerator() :1389
void Queue__GetEnumerator_fn(Queue* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(3/*Uno.Collections.Queue<T>.Enumerator*/),
    };
    uStackFrame __("Uno.Collections.Queue`1", "GetEnumerator()");
    uT ret5(__types[0], U_ALLOCA(__types[0]->ValueSize));
    return __retval.Store((Queue__Enumerator__New1_fn(__types[0], __this, &ret5), ret5)), void();
}

// public Uno.Collections.Queue<T>.Enumerator GetEnumerator() :1389
void Queue__GetEnumerator_boxed_fn(Queue* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator_boxed();
}

// public Queue New() :1368
void Queue__New1_fn(uType* __type, Queue** __retval)
{
    *__retval = Queue::New1(__type);
}

// public Queue New(int capacity) :1376
void Queue__New2_fn(uType* __type, int* capacity, Queue** __retval)
{
    *__retval = Queue::New2(__type, *capacity);
}

// public T Peek() :1435
void Queue__Peek_fn(Queue* __this, uTRef __retval)
{
    uStackFrame __("Uno.Collections.Queue`1", "Peek()");

    if (__this->_size == 0)
        U_THROW(::g::Uno::InvalidOperationException::New5(::STRINGS[14/*"Queue is em...*/]));

    return __retval.Store(uPtr(__this->_data)->TItem(__this->_head)), void();
}

// public Queue() [instance] :1368
void Queue::ctor_()
{
    _data = NULL;
    _head = 0;
    _tail = 0;
    _size = 0;
}

// public Queue(int capacity) [instance] :1376
void Queue::ctor_1(int capacity)
{
    uType* __types[] = {
        __type->Precalced(0/*T[]*/),
    };
    _data = uArray::New(__types[0], capacity);
    _head = 0;
    _tail = 0;
    _size = 0;
}

// public void Clear() [instance] :1394
void Queue::Clear()
{
    _data = NULL;
    _head = 0;
    _tail = 0;
    _size = 0;
    _version++;
}

// public int get_Count() [instance] :1386
int Queue::Count()
{
    return _size;
}

// private void EnsureCapacity() [instance] :1444
void Queue::EnsureCapacity()
{
    uType* __types[] = {
        __type->Precalced(2/*T*/),
        __type->Precalced(0/*T[]*/),
    };
    uStackFrame __("Uno.Collections.Queue`1", "EnsureCapacity()");
    uT ret4(__types[0], U_ALLOCA(__types[0]->ValueSize));

    if (_data == NULL)
        _data = uArray::New(__types[1], 2);

    if (_tail == uPtr(_data)->Length())
    {
        int newSize = (_size != 0) ? _size * 2 : uPtr(_data)->Length();
        uArray* newData = uArray::New(__types[1], newSize);

        for (int i = 0; i < _size; i++)
            uPtr(newData)->TItem(i) = (Queue__ElementAt_fn(this, uCRef<int>(i), &ret4), ret4);

        _data = newData;
        _head = 0;
        _tail = _size;
    }
}

// public Uno.Collections.Queue<T>.Enumerator GetEnumerator() [instance] :1389
uObject* Queue::GetEnumerator_boxed()
{
    uType* __types[] = {
        __type->Precalced(3/*Uno.Collections.Queue<T>.Enumerator*/),
    };
    uT ret6(__types[0], U_ALLOCA(__types[0]->ValueSize));
    return uBoxPtr(__types[0], (Queue__GetEnumerator_fn(this, &ret6), ret6));
}

// public Queue New() [static] :1368
Queue* Queue::New1(uType* __type)
{
    Queue* obj1 = (Queue*)uNew(__type);
    obj1->ctor_();
    return obj1;
}

// public Queue New(int capacity) [static] :1376
Queue* Queue::New2(uType* __type, int capacity)
{
    Queue* obj2 = (Queue*)uNew(__type);
    obj2->ctor_1(capacity);
    return obj2;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/collections/$.uno
// ---------------------------------------------------------------------------------------------------------

// public sealed class ReadOnlyCollection<T> :1481
// {
static void ReadOnlyCollection_build(uType* type)
{
    ::TYPES[2] = ::g::Uno::Collections::IEnumerable_typeof();
    type->SetPrecalc(
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(0), NULL));
    type->SetInterfaces(
        ::TYPES[2/*Uno.Collections.IEnumerable`1*/]->MakeType(type->T(0), NULL), offsetof(ReadOnlyCollection_type, interface0));
    type->SetFields(0,
        ::g::Uno::Collections::IList_typeof()->MakeType(type->T(0), NULL), offsetof(::g::Uno::Collections::ReadOnlyCollection, _list), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("GetEnumerator", NULL, (void*)ReadOnlyCollection__GetEnumerator_fn, 0, false, ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0), NULL), 0),
        new uFunction(".ctor", type, (void*)ReadOnlyCollection__New1_fn, 0, true, type, 1, ::g::Uno::Collections::IList_typeof()->MakeType(type->T(0), NULL)));
}

ReadOnlyCollection_type* ReadOnlyCollection_typeof()
{
    static uSStrong<ReadOnlyCollection_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(ReadOnlyCollection);
    options.TypeSize = sizeof(ReadOnlyCollection_type);
    type = (ReadOnlyCollection_type*)uClassType::New("Uno.Collections.ReadOnlyCollection`1", options);
    type->fp_build_ = ReadOnlyCollection_build;
    type->interface0.fp_GetEnumerator = (void(*)(uObject*, uObject**))ReadOnlyCollection__GetEnumerator_fn;
    return type;
}

// public ReadOnlyCollection(Uno.Collections.IList<T> list) :1485
void ReadOnlyCollection__ctor__fn(ReadOnlyCollection* __this, uObject* list)
{
    __this->ctor_(list);
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() :1494
void ReadOnlyCollection__GetEnumerator_fn(ReadOnlyCollection* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public ReadOnlyCollection New(Uno.Collections.IList<T> list) :1485
void ReadOnlyCollection__New1_fn(uType* __type, uObject* list, ReadOnlyCollection** __retval)
{
    *__retval = ReadOnlyCollection::New1(__type, list);
}

// public ReadOnlyCollection(Uno.Collections.IList<T> list) [instance] :1485
void ReadOnlyCollection::ctor_(uObject* list)
{
    _list = list;
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() [instance] :1494
uObject* ReadOnlyCollection::GetEnumerator()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.IEnumerable<T>*/),
    };
    uStackFrame __("Uno.Collections.ReadOnlyCollection`1", "GetEnumerator()");
    return (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(_list), __types[0]));
}

// public ReadOnlyCollection New(Uno.Collections.IList<T> list) [static] :1485
ReadOnlyCollection* ReadOnlyCollection::New1(uType* __type, uObject* list)
{
    ReadOnlyCollection* obj1 = (ReadOnlyCollection*)uNew(__type);
    obj1->ctor_(list);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Collections/0.42.0/extensions/$.uno
// -----------------------------------------------------------------------------------------------------

// internal sealed class SelectEnumerable<T, TRet> :459
// {
static void SelectEnumerable_build(uType* type)
{
    ::TYPES[33] = ::g::Uno::Collections::SelectEnumerator_typeof();
    ::TYPES[2] = ::g::Uno::Collections::IEnumerable_typeof();
    type->SetPrecalc(
        ::g::Uno::Collections::SelectEnumerator_typeof()->MakeType(type->T(0), type->T(1), NULL),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(0), NULL));
    type->SetInterfaces(
        ::TYPES[2/*Uno.Collections.IEnumerable`1*/]->MakeType(type->T(1), NULL), offsetof(SelectEnumerable_type, interface0));
    type->SetFields(0,
        ::g::Uno::Func1_typeof()->MakeType(type->T(0), type->T(1), NULL), offsetof(::g::Uno::Collections::SelectEnumerable, _select), 0,
        ::TYPES[2/*Uno.Collections.IEnumerable`1*/]->MakeType(type->T(0), NULL), offsetof(::g::Uno::Collections::SelectEnumerable, _source), 0);
}

SelectEnumerable_type* SelectEnumerable_typeof()
{
    static uSStrong<SelectEnumerable_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 2;
    options.InterfaceCount = 1;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(SelectEnumerable);
    options.TypeSize = sizeof(SelectEnumerable_type);
    type = (SelectEnumerable_type*)uClassType::New("Uno.Collections.SelectEnumerable`2", options);
    type->fp_build_ = SelectEnumerable_build;
    type->interface0.fp_GetEnumerator = (void(*)(uObject*, uObject**))SelectEnumerable__GetEnumerator_fn;
    return type;
}

// public SelectEnumerable(Uno.Collections.IEnumerable<T> source, Uno.Func<T, TRet> select) :464
void SelectEnumerable__ctor__fn(SelectEnumerable* __this, uObject* source, uDelegate* select)
{
    __this->ctor_(source, select);
}

// public Uno.Collections.IEnumerator<TRet> GetEnumerator() :470
void SelectEnumerable__GetEnumerator_fn(SelectEnumerable* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public SelectEnumerable New(Uno.Collections.IEnumerable<T> source, Uno.Func<T, TRet> select) :464
void SelectEnumerable__New1_fn(uType* __type, uObject* source, uDelegate* select, SelectEnumerable** __retval)
{
    *__retval = SelectEnumerable::New1(__type, source, select);
}

// public SelectEnumerable(Uno.Collections.IEnumerable<T> source, Uno.Func<T, TRet> select) [instance] :464
void SelectEnumerable::ctor_(uObject* source, uDelegate* select)
{
    _source = source;
    _select = select;
}

// public Uno.Collections.IEnumerator<TRet> GetEnumerator() [instance] :470
uObject* SelectEnumerable::GetEnumerator()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.SelectEnumerator<T, TRet>*/),
        __type->Precalced(1/*Uno.Collections.IEnumerable<T>*/),
    };
    uStackFrame __("Uno.Collections.SelectEnumerable`2", "GetEnumerator()");
    return (uObject*)((::g::Uno::Collections::SelectEnumerator*)::g::Uno::Collections::SelectEnumerator::New1(__types[0], (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(_source), __types[1])), _select));
}

// public SelectEnumerable New(Uno.Collections.IEnumerable<T> source, Uno.Func<T, TRet> select) [static] :464
SelectEnumerable* SelectEnumerable::New1(uType* __type, uObject* source, uDelegate* select)
{
    SelectEnumerable* obj1 = (SelectEnumerable*)uNew(__type);
    obj1->ctor_(source, select);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Collections/0.42.0/extensions/$.uno
// -----------------------------------------------------------------------------------------------------

// internal sealed class SelectEnumerator<T, TRet> :476
// {
static void SelectEnumerator_build(uType* type)
{
    ::TYPES[3] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[4] = ::g::Uno::Collections::IEnumerator1_typeof();
    type->SetPrecalc(
        type->T(1),
        type->T(0),
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0), NULL));
    type->SetInterfaces(
        ::TYPES[4/*Uno.Collections.IEnumerator`1*/]->MakeType(type->T(1), NULL), offsetof(SelectEnumerator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(SelectEnumerator_type, interface1),
        ::TYPES[3/*Uno.Collections.IEnumerator*/], offsetof(SelectEnumerator_type, interface2));
    type->SetFields(0,
        ::g::Uno::Func1_typeof()->MakeType(type->T(0), type->T(1), NULL), offsetof(::g::Uno::Collections::SelectEnumerator, _select), 0,
        ::TYPES[4/*Uno.Collections.IEnumerator`1*/]->MakeType(type->T(0), NULL), offsetof(::g::Uno::Collections::SelectEnumerator, _source), 0);
}

SelectEnumerator_type* SelectEnumerator_typeof()
{
    static uSStrong<SelectEnumerator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 2;
    options.InterfaceCount = 3;
    options.PrecalcCount = 3;
    options.ObjectSize = sizeof(SelectEnumerator);
    options.TypeSize = sizeof(SelectEnumerator_type);
    type = (SelectEnumerator_type*)uClassType::New("Uno.Collections.SelectEnumerator`2", options);
    type->fp_build_ = SelectEnumerator_build;
    type->interface0.fp_get_Current = (void(*)(uObject*, uTRef))SelectEnumerator__get_Current_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))SelectEnumerator__Dispose_fn;
    type->interface2.fp_Reset = (void(*)(uObject*))SelectEnumerator__Reset_fn;
    type->interface2.fp_MoveNext = (void(*)(uObject*, bool*))SelectEnumerator__MoveNext_fn;
    return type;
}

// public SelectEnumerator(Uno.Collections.IEnumerator<T> source, Uno.Func<T, TRet> select) :481
void SelectEnumerator__ctor__fn(SelectEnumerator* __this, uObject* source, uDelegate* select)
{
    __this->ctor_(source, select);
}

// public TRet get_Current() :489
void SelectEnumerator__get_Current_fn(SelectEnumerator* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(0/*TRet*/),
        __this->__type->Precalced(1/*T*/),
        __this->__type->Precalced(2/*Uno.Collections.IEnumerator<T>*/),
    };
    uStackFrame __("Uno.Collections.SelectEnumerator`2", "get_Current()");
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret3(__types[1], U_ALLOCA(__types[1]->ValueSize));
    return __retval.Store((uPtr(__this->_select)->Invoke(&ret2, 1, (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(__this->_source), __types[2]), &ret3), (void*)ret3)), ret2)), void();
}

// public void Dispose() :492
void SelectEnumerator__Dispose_fn(SelectEnumerator* __this)
{
    __this->Dispose();
}

// public bool MoveNext() :502
void SelectEnumerator__MoveNext_fn(SelectEnumerator* __this, bool* __retval)
{
    *__retval = __this->MoveNext();
}

// public SelectEnumerator New(Uno.Collections.IEnumerator<T> source, Uno.Func<T, TRet> select) :481
void SelectEnumerator__New1_fn(uType* __type, uObject* source, uDelegate* select, SelectEnumerator** __retval)
{
    *__retval = SelectEnumerator::New1(__type, source, select);
}

// public void Reset() :497
void SelectEnumerator__Reset_fn(SelectEnumerator* __this)
{
    __this->Reset();
}

// public SelectEnumerator(Uno.Collections.IEnumerator<T> source, Uno.Func<T, TRet> select) [instance] :481
void SelectEnumerator::ctor_(uObject* source, uDelegate* select)
{
    _source = source;
    _select = select;
}

// public void Dispose() [instance] :492
void SelectEnumerator::Dispose()
{
}

// public bool MoveNext() [instance] :502
bool SelectEnumerator::MoveNext()
{
    uStackFrame __("Uno.Collections.SelectEnumerator`2", "MoveNext()");
    return ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(_source), ::TYPES[3/*Uno.Collections.IEnumerator*/]));
}

// public void Reset() [instance] :497
void SelectEnumerator::Reset()
{
    uStackFrame __("Uno.Collections.SelectEnumerator`2", "Reset()");
    ::g::Uno::Collections::IEnumerator::Reset(uInterface(uPtr(_source), ::TYPES[3/*Uno.Collections.IEnumerator*/]));
}

// public SelectEnumerator New(Uno.Collections.IEnumerator<T> source, Uno.Func<T, TRet> select) [static] :481
SelectEnumerator* SelectEnumerator::New1(uType* __type, uObject* source, uDelegate* select)
{
    SelectEnumerator* obj1 = (SelectEnumerator*)uNew(__type);
    obj1->ctor_(source, select);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/collections/$.uno
// ---------------------------------------------------------------------------------------------------------

// public sealed class Stack<T> :1509
// {
static void Stack_build(uType* type)
{
    ::STRINGS[15] = uString::Const("Stack is empty");
    ::TYPES[0] = uObject_typeof()->Array();
    ::TYPES[5] = ::g::Uno::Generic_typeof();
    ::TYPES[34] = Stack__Enumerator_typeof();
    type->SetPrecalc(
        type->T(0)->Array(),
        ::g::Uno::Generic_typeof()->MakeMethod(0/*Equals<T>*/, type->T(0), NULL),
        Stack__Enumerator_typeof()->MakeType(type->T(0), NULL),
        type->T(0));
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(0), NULL), offsetof(Stack_type, interface0));
    type->SetFields(0,
        type->T(0)->Array(), offsetof(::g::Uno::Collections::Stack, _data), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Collections::Stack, _used), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Collections::Stack, _version), 0);
    type->Reflection.SetFunctions(9,
        new uFunction("Clear", NULL, (void*)Stack__Clear_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("Contains", NULL, (void*)Stack__Contains_fn, 0, false, ::g::Uno::Bool_typeof(), 1, type->T(0)),
        new uFunction("get_Count", NULL, (void*)Stack__get_Count_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("GetEnumerator", NULL, (void*)Stack__GetEnumerator_fn, 0, false, ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0), NULL), 0),
        new uFunction(".ctor", type, (void*)Stack__New1_fn, 0, true, type, 0),
        new uFunction(".ctor", type, (void*)Stack__New2_fn, 0, true, type, 1, ::g::Uno::Int_typeof()),
        new uFunction("Peek", NULL, (void*)Stack__Peek_fn, 0, false, type->T(0), 0),
        new uFunction("Pop", NULL, (void*)Stack__Pop_fn, 0, false, type->T(0), 0),
        new uFunction("Push", NULL, (void*)Stack__Push_fn, 0, false, uVoid_typeof(), 1, type->T(0)));
}

Stack_type* Stack_typeof()
{
    static uSStrong<Stack_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.PrecalcCount = 4;
    options.ObjectSize = sizeof(Stack);
    options.TypeSize = sizeof(Stack_type);
    type = (Stack_type*)uClassType::New("Uno.Collections.Stack`1", options);
    type->fp_build_ = Stack_build;
    type->fp_ctor_ = (void*)Stack__New1_fn;
    type->interface0.fp_GetEnumerator = (void(*)(uObject*, uObject**))Stack__GetEnumerator_fn;
    return type;
}

// public Stack() :1515
void Stack__ctor__fn(Stack* __this)
{
    __this->ctor_();
}

// public Stack(int capacity) :1521
void Stack__ctor_1_fn(Stack* __this, int* capacity)
{
    __this->ctor_1(*capacity);
}

// public void Clear() :1591
void Stack__Clear_fn(Stack* __this)
{
    __this->Clear();
}

// public bool Contains(T item) :1598
void Stack__Contains_fn(Stack* __this, void* item, bool* __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*Uno.Generic.Equals<T>*/),
    };
    uStackFrame __("Uno.Collections.Stack`1", "Contains(T)");
    bool ret3;

    for (int i = 0; i < __this->_used; i++)
        if ((::g::Uno::Generic__Equals_fn(__types[0], uPtr(__this->_data)->TItem(i), item, &ret3), ret3))
            return *__retval = true, void();

    return *__retval = false, void();
}

// public int get_Count() :1529
void Stack__get_Count_fn(Stack* __this, int* __retval)
{
    *__retval = __this->Count();
}

// private void EnsureCapacity() :1635
void Stack__EnsureCapacity_fn(Stack* __this)
{
    __this->EnsureCapacity();
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() :1586
void Stack__GetEnumerator_fn(Stack* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public Stack New() :1515
void Stack__New1_fn(uType* __type, Stack** __retval)
{
    *__retval = Stack::New1(__type);
}

// public Stack New(int capacity) :1521
void Stack__New2_fn(uType* __type, int* capacity, Stack** __retval)
{
    *__retval = Stack::New2(__type, *capacity);
}

// public T Peek() :1626
void Stack__Peek_fn(Stack* __this, uTRef __retval)
{
    uStackFrame __("Uno.Collections.Stack`1", "Peek()");

    if (__this->_used == 0)
        U_THROW(::g::Uno::InvalidOperationException::New5(::STRINGS[15/*"Stack is em...*/]));

    return __retval.Store(uPtr(__this->_data)->TItem(__this->_used - 1)), void();
}

// public T Pop() :1614
void Stack__Pop_fn(Stack* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(3/*T*/),
    };
    uStackFrame __("Uno.Collections.Stack`1", "Pop()");
    uT result(__types[0], U_ALLOCA(__types[0]->ValueSize));

    if (__this->_used == 0)
        U_THROW(::g::Uno::InvalidOperationException::New5(::STRINGS[15/*"Stack is em...*/]));

    __this->_version++;
    result = uPtr(__this->_data)->TItem(--__this->_used);
    uPtr(__this->_data)->TItem(__this->_used).Default();
    return __retval.Store(result), void();
}

// public void Push(T item) :1607
void Stack__Push_fn(Stack* __this, void* item)
{
    uStackFrame __("Uno.Collections.Stack`1", "Push(T)");
    __this->EnsureCapacity();
    uPtr(__this->_data)->TItem(__this->_used++) = item;
    __this->_version++;
}

// public Stack() [instance] :1515
void Stack::ctor_()
{
    _data = NULL;
    _used = 0;
}

// public Stack(int capacity) [instance] :1521
void Stack::ctor_1(int capacity)
{
    uType* __types[] = {
        __type->Precalced(0/*T[]*/),
    };
    _data = uArray::New(__types[0], capacity);
    _used = 0;
}

// public void Clear() [instance] :1591
void Stack::Clear()
{
    _data = NULL;
    _used = 0;
    _version++;
}

// public int get_Count() [instance] :1529
int Stack::Count()
{
    return _used;
}

// private void EnsureCapacity() [instance] :1635
void Stack::EnsureCapacity()
{
    uType* __types[] = {
        __type->Precalced(0/*T[]*/),
    };
    uStackFrame __("Uno.Collections.Stack`1", "EnsureCapacity()");

    if (_data == NULL)
        _data = uArray::New(__types[0], 2);
    else if ((_used + 1) == uPtr(_data)->Length())
    {
        uArray* newData = uArray::New(__types[0], uPtr(_data)->Length() * 2);

        for (int i = 0; i < _used; i++)
            uPtr(newData)->TItem(i) = uPtr(_data)->TItem(i);

        _data = newData;
    }
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() [instance] :1586
uObject* Stack::GetEnumerator()
{
    uType* __types[] = {
        __type->Precalced(2/*Uno.Collections.Stack<T>.Enumerator*/),
    };
    uStackFrame __("Uno.Collections.Stack`1", "GetEnumerator()");
    uT ret4(__types[0], U_ALLOCA(__types[0]->ValueSize));
    return uBoxPtr(__types[0], (Stack__Enumerator__New1_fn(__types[0], this, &ret4), ret4));
}

// public Stack New() [static] :1515
Stack* Stack::New1(uType* __type)
{
    Stack* obj1 = (Stack*)uNew(__type);
    obj1->ctor_();
    return obj1;
}

// public Stack New(int capacity) [static] :1521
Stack* Stack::New2(uType* __type, int capacity)
{
    Stack* obj2 = (Stack*)uNew(__type);
    obj2->ctor_1(capacity);
    return obj2;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Collections/0.42.0/extensions/$.uno
// -----------------------------------------------------------------------------------------------------

// internal sealed class UnionEnumerable<T> :514
// {
static void UnionEnumerable_build(uType* type)
{
    ::TYPES[35] = ::g::Uno::Collections::UnionEnumerator_typeof();
    ::TYPES[2] = ::g::Uno::Collections::IEnumerable_typeof();
    type->SetPrecalc(
        ::g::Uno::Collections::UnionEnumerator_typeof()->MakeType(type->T(0), NULL),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(0), NULL));
    type->SetInterfaces(
        ::TYPES[2/*Uno.Collections.IEnumerable`1*/]->MakeType(type->T(0), NULL), offsetof(UnionEnumerable_type, interface0));
    type->SetFields(0,
        ::TYPES[2/*Uno.Collections.IEnumerable`1*/]->MakeType(type->T(0), NULL), offsetof(::g::Uno::Collections::UnionEnumerable, _first), 0,
        ::TYPES[2/*Uno.Collections.IEnumerable`1*/]->MakeType(type->T(0), NULL), offsetof(::g::Uno::Collections::UnionEnumerable, _second), 0);
}

UnionEnumerable_type* UnionEnumerable_typeof()
{
    static uSStrong<UnionEnumerable_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(UnionEnumerable);
    options.TypeSize = sizeof(UnionEnumerable_type);
    type = (UnionEnumerable_type*)uClassType::New("Uno.Collections.UnionEnumerable`1", options);
    type->fp_build_ = UnionEnumerable_build;
    type->interface0.fp_GetEnumerator = (void(*)(uObject*, uObject**))UnionEnumerable__GetEnumerator_fn;
    return type;
}

// public UnionEnumerable(Uno.Collections.IEnumerable<T> first, Uno.Collections.IEnumerable<T> second) :519
void UnionEnumerable__ctor__fn(UnionEnumerable* __this, uObject* first, uObject* second)
{
    __this->ctor_(first, second);
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() :525
void UnionEnumerable__GetEnumerator_fn(UnionEnumerable* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public UnionEnumerable New(Uno.Collections.IEnumerable<T> first, Uno.Collections.IEnumerable<T> second) :519
void UnionEnumerable__New1_fn(uType* __type, uObject* first, uObject* second, UnionEnumerable** __retval)
{
    *__retval = UnionEnumerable::New1(__type, first, second);
}

// public UnionEnumerable(Uno.Collections.IEnumerable<T> first, Uno.Collections.IEnumerable<T> second) [instance] :519
void UnionEnumerable::ctor_(uObject* first, uObject* second)
{
    _first = first;
    _second = second;
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() [instance] :525
uObject* UnionEnumerable::GetEnumerator()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.UnionEnumerator<T>*/),
        __type->Precalced(1/*Uno.Collections.IEnumerable<T>*/),
    };
    uStackFrame __("Uno.Collections.UnionEnumerable`1", "GetEnumerator()");
    return (uObject*)((::g::Uno::Collections::UnionEnumerator*)::g::Uno::Collections::UnionEnumerator::New1(__types[0], (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(_first), __types[1])), (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(_second), __types[1]))));
}

// public UnionEnumerable New(Uno.Collections.IEnumerable<T> first, Uno.Collections.IEnumerable<T> second) [static] :519
UnionEnumerable* UnionEnumerable::New1(uType* __type, uObject* first, uObject* second)
{
    UnionEnumerable* obj1 = (UnionEnumerable*)uNew(__type);
    obj1->ctor_(first, second);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Collections/0.42.0/extensions/$.uno
// -----------------------------------------------------------------------------------------------------

// internal sealed class UnionEnumerator<T> :531
// {
static void UnionEnumerator_build(uType* type)
{
    ::TYPES[3] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[4] = ::g::Uno::Collections::IEnumerator1_typeof();
    type->SetPrecalc(
        type->T(0),
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0), NULL));
    type->SetInterfaces(
        ::TYPES[4/*Uno.Collections.IEnumerator`1*/]->MakeType(type->T(0), NULL), offsetof(UnionEnumerator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(UnionEnumerator_type, interface1),
        ::TYPES[3/*Uno.Collections.IEnumerator*/], offsetof(UnionEnumerator_type, interface2));
    type->SetFields(0,
        ::TYPES[4/*Uno.Collections.IEnumerator`1*/]->MakeType(type->T(0), NULL), offsetof(::g::Uno::Collections::UnionEnumerator, _current), 0,
        ::TYPES[4/*Uno.Collections.IEnumerator`1*/]->MakeType(type->T(0), NULL), offsetof(::g::Uno::Collections::UnionEnumerator, _first), 0,
        ::TYPES[4/*Uno.Collections.IEnumerator`1*/]->MakeType(type->T(0), NULL), offsetof(::g::Uno::Collections::UnionEnumerator, _second), 0);
}

UnionEnumerator_type* UnionEnumerator_typeof()
{
    static uSStrong<UnionEnumerator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(UnionEnumerator);
    options.TypeSize = sizeof(UnionEnumerator_type);
    type = (UnionEnumerator_type*)uClassType::New("Uno.Collections.UnionEnumerator`1", options);
    type->fp_build_ = UnionEnumerator_build;
    type->interface0.fp_get_Current = (void(*)(uObject*, uTRef))UnionEnumerator__get_Current_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))UnionEnumerator__Dispose_fn;
    type->interface2.fp_Reset = (void(*)(uObject*))UnionEnumerator__Reset_fn;
    type->interface2.fp_MoveNext = (void(*)(uObject*, bool*))UnionEnumerator__MoveNext_fn;
    return type;
}

// public UnionEnumerator(Uno.Collections.IEnumerator<T> first, Uno.Collections.IEnumerator<T> second) :537
void UnionEnumerator__ctor__fn(UnionEnumerator* __this, uObject* first, uObject* second)
{
    __this->ctor_(first, second);
}

// public T get_Current() :546
void UnionEnumerator__get_Current_fn(UnionEnumerator* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(0/*T*/),
        __this->__type->Precalced(1/*Uno.Collections.IEnumerator<T>*/),
    };
    uStackFrame __("Uno.Collections.UnionEnumerator`1", "get_Current()");
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    return __retval.Store((::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(__this->_current), __types[1]), &ret2), ret2)), void();
}

// public void Dispose() :549
void UnionEnumerator__Dispose_fn(UnionEnumerator* __this)
{
    __this->Dispose();
}

// public bool MoveNext() :561
void UnionEnumerator__MoveNext_fn(UnionEnumerator* __this, bool* __retval)
{
    *__retval = __this->MoveNext();
}

// public UnionEnumerator New(Uno.Collections.IEnumerator<T> first, Uno.Collections.IEnumerator<T> second) :537
void UnionEnumerator__New1_fn(uType* __type, uObject* first, uObject* second, UnionEnumerator** __retval)
{
    *__retval = UnionEnumerator::New1(__type, first, second);
}

// public void Reset() :554
void UnionEnumerator__Reset_fn(UnionEnumerator* __this)
{
    __this->Reset();
}

// public UnionEnumerator(Uno.Collections.IEnumerator<T> first, Uno.Collections.IEnumerator<T> second) [instance] :537
void UnionEnumerator::ctor_(uObject* first, uObject* second)
{
    _first = first;
    _second = second;
    _current = _first;
}

// public void Dispose() [instance] :549
void UnionEnumerator::Dispose()
{
}

// public bool MoveNext() [instance] :561
bool UnionEnumerator::MoveNext()
{
    uStackFrame __("Uno.Collections.UnionEnumerator`1", "MoveNext()");

    if (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(_current), ::TYPES[3/*Uno.Collections.IEnumerator*/])))
        return true;

    if (_current == _first)
    {
        _current = _second;
        return MoveNext();
    }

    return false;
}

// public void Reset() [instance] :554
void UnionEnumerator::Reset()
{
    uStackFrame __("Uno.Collections.UnionEnumerator`1", "Reset()");
    ::g::Uno::Collections::IEnumerator::Reset(uInterface(uPtr(_first), ::TYPES[3/*Uno.Collections.IEnumerator*/]));
    ::g::Uno::Collections::IEnumerator::Reset(uInterface(uPtr(_second), ::TYPES[3/*Uno.Collections.IEnumerator*/]));
    _current = _first;
}

// public UnionEnumerator New(Uno.Collections.IEnumerator<T> first, Uno.Collections.IEnumerator<T> second) [static] :537
UnionEnumerator* UnionEnumerator::New1(uType* __type, uObject* first, uObject* second)
{
    UnionEnumerator* obj1 = (UnionEnumerator*)uNew(__type);
    obj1->ctor_(first, second);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/collections/$.uno
// ---------------------------------------------------------------------------------------------------------

// public sealed class Dictionary<TKey, TValue>.ValueCollection :170
// {
static void Dictionary__ValueCollection_build(uType* type)
{
    ::TYPES[36] = Dictionary__ValueCollection__Enumerator_typeof();
    type->SetPrecalc(
        Dictionary__ValueCollection__Enumerator_typeof()->MakeType(type->T(0), type->T(1), NULL));
    type->SetInterfaces(
        ::g::Uno::Collections::ICollection_typeof()->MakeType(type->T(1), NULL), offsetof(Dictionary__ValueCollection_type, interface0),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(1), NULL), offsetof(Dictionary__ValueCollection_type, interface1));
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(type->T(0), type->T(1), NULL), offsetof(::g::Uno::Collections::Dictionary__ValueCollection, _source), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Count", NULL, (void*)Dictionary__ValueCollection__get_Count_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("GetEnumerator", NULL, (void*)Dictionary__ValueCollection__GetEnumerator_fn, 0, false, ::TYPES[36/*Uno.Collections.Dictionary`2.ValueCollection.Enumerator*/]->MakeType(type->T(0), type->T(1), NULL), 0),
        new uFunction("GetEnumerator", NULL, (void*)Dictionary__ValueCollection__GetEnumerator_boxed_fn, 0, false, ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(1), NULL), 0));
}

Dictionary__ValueCollection_type* Dictionary__ValueCollection_typeof()
{
    static uSStrong<Dictionary__ValueCollection_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 2;
    options.InterfaceCount = 2;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(Dictionary__ValueCollection);
    options.TypeSize = sizeof(Dictionary__ValueCollection_type);
    type = (Dictionary__ValueCollection_type*)uClassType::New("Uno.Collections.Dictionary`2.ValueCollection", options);
    type->fp_build_ = Dictionary__ValueCollection_build;
    type->interface0.fp_Clear = (void(*)(uObject*))Dictionary__ValueCollection__UnoCollectionsICollectionTValueClear_fn;
    type->interface0.fp_Add = (void(*)(uObject*, void*))Dictionary__ValueCollection__UnoCollectionsICollectionTValueAdd_fn;
    type->interface0.fp_Remove = (void(*)(uObject*, void*, bool*))Dictionary__ValueCollection__UnoCollectionsICollectionTValueRemove_fn;
    type->interface0.fp_Contains = (void(*)(uObject*, void*, bool*))Dictionary__ValueCollection__UnoCollectionsICollectionTValueContains_fn;
    type->interface0.fp_get_Count = (void(*)(uObject*, int*))Dictionary__ValueCollection__get_Count_fn;
    type->interface1.fp_GetEnumerator = (void(*)(uObject*, uObject**))Dictionary__ValueCollection__GetEnumerator_boxed_fn;
    return type;
}

// internal ValueCollection(Uno.Collections.Dictionary<TKey, TValue> source) :226
void Dictionary__ValueCollection__ctor__fn(Dictionary__ValueCollection* __this, ::g::Uno::Collections::Dictionary* source)
{
    __this->ctor_(source);
}

// public int get_Count() :258
void Dictionary__ValueCollection__get_Count_fn(Dictionary__ValueCollection* __this, int* __retval)
{
    *__retval = __this->Count();
}

// public Uno.Collections.Dictionary<TKey, TValue>.ValueCollection.Enumerator GetEnumerator() :231
void Dictionary__ValueCollection__GetEnumerator_fn(Dictionary__ValueCollection* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(0/*Uno.Collections.Dictionary<TKey, TValue>.ValueCollection.Enumerator*/),
    };
    uStackFrame __("Uno.Collections.Dictionary`2.ValueCollection", "GetEnumerator()");
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    return __retval.Store((Dictionary__ValueCollection__Enumerator__New1_fn(__types[0], __this->_source, &ret2), ret2)), void();
}

// public Uno.Collections.Dictionary<TKey, TValue>.ValueCollection.Enumerator GetEnumerator() :231
void Dictionary__ValueCollection__GetEnumerator_boxed_fn(Dictionary__ValueCollection* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator_boxed();
}

// internal ValueCollection New(Uno.Collections.Dictionary<TKey, TValue> source) :226
void Dictionary__ValueCollection__New1_fn(uType* __type, ::g::Uno::Collections::Dictionary* source, Dictionary__ValueCollection** __retval)
{
    *__retval = Dictionary__ValueCollection::New1(__type, source);
}

// private void Uno.Collections.ICollection<TValue>.Add(TValue item) :241
void Dictionary__ValueCollection__UnoCollectionsICollectionTValueAdd_fn(Dictionary__ValueCollection* __this, void* item)
{
    uStackFrame __("Uno.Collections.Dictionary`2.ValueCollection", "Uno.Collections.ICollection<TValue>.Add(TValue)");
    U_THROW(::g::Uno::InvalidOperationException::New4());
}

// private void Uno.Collections.ICollection<TValue>.Clear() :236
void Dictionary__ValueCollection__UnoCollectionsICollectionTValueClear_fn(Dictionary__ValueCollection* __this)
{
    uStackFrame __("Uno.Collections.Dictionary`2.ValueCollection", "Uno.Collections.ICollection<TValue>.Clear()");
    U_THROW(::g::Uno::InvalidOperationException::New4());
}

// private bool Uno.Collections.ICollection<TValue>.Contains(TValue item) :251
void Dictionary__ValueCollection__UnoCollectionsICollectionTValueContains_fn(Dictionary__ValueCollection* __this, void* item, bool* __retval)
{
    uStackFrame __("Uno.Collections.Dictionary`2.ValueCollection", "Uno.Collections.ICollection<TValue>.Contains(TValue)");
    U_THROW(::g::Uno::InvalidOperationException::New4());
}

// private bool Uno.Collections.ICollection<TValue>.Remove(TValue item) :246
void Dictionary__ValueCollection__UnoCollectionsICollectionTValueRemove_fn(Dictionary__ValueCollection* __this, void* item, bool* __retval)
{
    uStackFrame __("Uno.Collections.Dictionary`2.ValueCollection", "Uno.Collections.ICollection<TValue>.Remove(TValue)");
    U_THROW(::g::Uno::InvalidOperationException::New4());
}

// internal ValueCollection(Uno.Collections.Dictionary<TKey, TValue> source) [instance] :226
void Dictionary__ValueCollection::ctor_(::g::Uno::Collections::Dictionary* source)
{
    _source = source;
}

// public int get_Count() [instance] :258
int Dictionary__ValueCollection::Count()
{
    uStackFrame __("Uno.Collections.Dictionary`2.ValueCollection", "get_Count()");
    return uPtr(_source)->Count();
}

// public Uno.Collections.Dictionary<TKey, TValue>.ValueCollection.Enumerator GetEnumerator() [instance] :231
uObject* Dictionary__ValueCollection::GetEnumerator_boxed()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.Dictionary<TKey, TValue>.ValueCollection.Enumerator*/),
    };
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    return uBoxPtr(__types[0], (Dictionary__ValueCollection__GetEnumerator_fn(this, &ret3), ret3));
}

// internal ValueCollection New(Uno.Collections.Dictionary<TKey, TValue> source) [static] :226
Dictionary__ValueCollection* Dictionary__ValueCollection::New1(uType* __type, ::g::Uno::Collections::Dictionary* source)
{
    Dictionary__ValueCollection* obj1 = (Dictionary__ValueCollection*)uNew(__type);
    obj1->ctor_(source);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Collections/0.42.0/extensions/$.uno
// -----------------------------------------------------------------------------------------------------

// internal sealed class WhereEnumerable<T> :582
// {
static void WhereEnumerable_build(uType* type)
{
    ::TYPES[37] = ::g::Uno::Collections::WhereEnumerator_typeof();
    ::TYPES[2] = ::g::Uno::Collections::IEnumerable_typeof();
    type->SetPrecalc(
        ::g::Uno::Collections::WhereEnumerator_typeof()->MakeType(type->T(0), NULL),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(0), NULL));
    type->SetInterfaces(
        ::TYPES[2/*Uno.Collections.IEnumerable`1*/]->MakeType(type->T(0), NULL), offsetof(WhereEnumerable_type, interface0));
    type->SetFields(0,
        ::g::Uno::Predicate_typeof()->MakeType(type->T(0), NULL), offsetof(::g::Uno::Collections::WhereEnumerable, _predicate), 0,
        ::TYPES[2/*Uno.Collections.IEnumerable`1*/]->MakeType(type->T(0), NULL), offsetof(::g::Uno::Collections::WhereEnumerable, _source), 0);
}

WhereEnumerable_type* WhereEnumerable_typeof()
{
    static uSStrong<WhereEnumerable_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(WhereEnumerable);
    options.TypeSize = sizeof(WhereEnumerable_type);
    type = (WhereEnumerable_type*)uClassType::New("Uno.Collections.WhereEnumerable`1", options);
    type->fp_build_ = WhereEnumerable_build;
    type->interface0.fp_GetEnumerator = (void(*)(uObject*, uObject**))WhereEnumerable__GetEnumerator_fn;
    return type;
}

// public WhereEnumerable(Uno.Collections.IEnumerable<T> source, Uno.Predicate<T> predicate) :587
void WhereEnumerable__ctor__fn(WhereEnumerable* __this, uObject* source, uDelegate* predicate)
{
    __this->ctor_(source, predicate);
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() :593
void WhereEnumerable__GetEnumerator_fn(WhereEnumerable* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// public WhereEnumerable New(Uno.Collections.IEnumerable<T> source, Uno.Predicate<T> predicate) :587
void WhereEnumerable__New1_fn(uType* __type, uObject* source, uDelegate* predicate, WhereEnumerable** __retval)
{
    *__retval = WhereEnumerable::New1(__type, source, predicate);
}

// public WhereEnumerable(Uno.Collections.IEnumerable<T> source, Uno.Predicate<T> predicate) [instance] :587
void WhereEnumerable::ctor_(uObject* source, uDelegate* predicate)
{
    _source = source;
    _predicate = predicate;
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() [instance] :593
uObject* WhereEnumerable::GetEnumerator()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.WhereEnumerator<T>*/),
        __type->Precalced(1/*Uno.Collections.IEnumerable<T>*/),
    };
    uStackFrame __("Uno.Collections.WhereEnumerable`1", "GetEnumerator()");
    return (uObject*)((::g::Uno::Collections::WhereEnumerator*)::g::Uno::Collections::WhereEnumerator::New1(__types[0], (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(_source), __types[1])), _predicate));
}

// public WhereEnumerable New(Uno.Collections.IEnumerable<T> source, Uno.Predicate<T> predicate) [static] :587
WhereEnumerable* WhereEnumerable::New1(uType* __type, uObject* source, uDelegate* predicate)
{
    WhereEnumerable* obj1 = (WhereEnumerable*)uNew(__type);
    obj1->ctor_(source, predicate);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Collections/0.42.0/extensions/$.uno
// -----------------------------------------------------------------------------------------------------

// internal sealed class WhereEnumerator<T> :599
// {
static void WhereEnumerator_build(uType* type)
{
    ::TYPES[3] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[4] = ::g::Uno::Collections::IEnumerator1_typeof();
    type->SetPrecalc(
        type->T(0),
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0), NULL));
    type->SetInterfaces(
        ::TYPES[4/*Uno.Collections.IEnumerator`1*/]->MakeType(type->T(0), NULL), offsetof(WhereEnumerator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(WhereEnumerator_type, interface1),
        ::TYPES[3/*Uno.Collections.IEnumerator*/], offsetof(WhereEnumerator_type, interface2));
    type->SetFields(0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Predicate_typeof()->MakeType(type->T(0), NULL), offsetof(::g::Uno::Collections::WhereEnumerator, _predicate), 0,
        ::TYPES[4/*Uno.Collections.IEnumerator`1*/]->MakeType(type->T(0), NULL), offsetof(::g::Uno::Collections::WhereEnumerator, _source), 0);
}

WhereEnumerator_type* WhereEnumerator_typeof()
{
    static uSStrong<WhereEnumerator_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(WhereEnumerator);
    options.TypeSize = sizeof(WhereEnumerator_type);
    type = (WhereEnumerator_type*)uClassType::New("Uno.Collections.WhereEnumerator`1", options);
    type->fp_build_ = WhereEnumerator_build;
    type->interface0.fp_get_Current = (void(*)(uObject*, uTRef))WhereEnumerator__get_Current_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))WhereEnumerator__Dispose_fn;
    type->interface2.fp_Reset = (void(*)(uObject*))WhereEnumerator__Reset_fn;
    type->interface2.fp_MoveNext = (void(*)(uObject*, bool*))WhereEnumerator__MoveNext_fn;
    return type;
}

// public WhereEnumerator(Uno.Collections.IEnumerator<T> source, Uno.Predicate<T> predicate) :605
void WhereEnumerator__ctor__fn(WhereEnumerator* __this, uObject* source, uDelegate* predicate)
{
    __this->ctor_(source, predicate);
}

// public T get_Current() :613
void WhereEnumerator__get_Current_fn(WhereEnumerator* __this, uTRef __retval)
{
    return __retval.Store(__this->_current()), void();
}

// public void Dispose() :616
void WhereEnumerator__Dispose_fn(WhereEnumerator* __this)
{
    __this->Dispose();
}

// public bool MoveNext() :626
void WhereEnumerator__MoveNext_fn(WhereEnumerator* __this, bool* __retval)
{
    *__retval = __this->MoveNext();
}

// public WhereEnumerator New(Uno.Collections.IEnumerator<T> source, Uno.Predicate<T> predicate) :605
void WhereEnumerator__New1_fn(uType* __type, uObject* source, uDelegate* predicate, WhereEnumerator** __retval)
{
    *__retval = WhereEnumerator::New1(__type, source, predicate);
}

// public void Reset() :621
void WhereEnumerator__Reset_fn(WhereEnumerator* __this)
{
    __this->Reset();
}

// public WhereEnumerator(Uno.Collections.IEnumerator<T> source, Uno.Predicate<T> predicate) [instance] :605
void WhereEnumerator::ctor_(uObject* source, uDelegate* predicate)
{
    _source = source;
    _predicate = predicate;
}

// public void Dispose() [instance] :616
void WhereEnumerator::Dispose()
{
}

// public bool MoveNext() [instance] :626
bool WhereEnumerator::MoveNext()
{
    uType* __types[] = {
        __type->Precalced(0/*T*/),
        __type->Precalced(1/*Uno.Collections.IEnumerator<T>*/),
    };
    uStackFrame __("Uno.Collections.WhereEnumerator`1", "MoveNext()");
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret4(__types[0], U_ALLOCA(__types[0]->ValueSize));
    bool ret2;

    while (true)
    {
        if (!::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(_source), ::TYPES[3/*Uno.Collections.IEnumerator*/])))
            return false;

        if ((uPtr(_predicate)->Invoke(&ret2, 1, (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(_source), __types[1]), &ret3), (void*)ret3)), ret2))
        {
            _current() = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(_source), __types[1]), &ret4), ret4);
            return true;
        }
    }

    return false;
}

// public void Reset() [instance] :621
void WhereEnumerator::Reset()
{
    uStackFrame __("Uno.Collections.WhereEnumerator`1", "Reset()");
    ::g::Uno::Collections::IEnumerator::Reset(uInterface(uPtr(_source), ::TYPES[3/*Uno.Collections.IEnumerator*/]));
}

// public WhereEnumerator New(Uno.Collections.IEnumerator<T> source, Uno.Predicate<T> predicate) [static] :605
WhereEnumerator* WhereEnumerator::New1(uType* __type, uObject* source, uDelegate* predicate)
{
    WhereEnumerator* obj1 = (WhereEnumerator*)uNew(__type);
    obj1->ctor_(source, predicate);
    return obj1;
}
// }

}}} // ::g::Uno::Collections
