// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Collections{template<class TKey, class TValue>struct KeyValuePair;}}}
namespace g{struct HashableWeakReference;}
namespace g{struct WeakDictionary;}

namespace g{

// public sealed class WeakDictionary<TKey, TValue> :2137
// {
uType* WeakDictionary_typeof();
void WeakDictionary__ctor__fn(WeakDictionary* __this);
void WeakDictionary__AsEnumerable_fn(WeakDictionary* __this, uObject** __retval);
void WeakDictionary__Clear_fn(WeakDictionary* __this);
void WeakDictionary__GetKey_fn(uType* __type, void* obj, ::g::HashableWeakReference** __retval);
void WeakDictionary__get_Item_fn(WeakDictionary* __this, void* key, uTRef __retval);
void WeakDictionary__set_Item_fn(WeakDictionary* __this, void* key, void* value);
void WeakDictionary__New1_fn(uType* __type, WeakDictionary** __retval);
void WeakDictionary__Remove_fn(WeakDictionary* __this, ::g::HashableWeakReference* key, bool* __retval);
void WeakDictionary__TryGetValue_fn(WeakDictionary* __this, void* key, uTRef value, bool* __retval);

struct WeakDictionary : uObject
{
    uStrong< ::g::Uno::Collections::Dictionary*> _dictionary;

    void ctor_();
    uObject* AsEnumerable();
    void Clear();
    template<class TKey, class TValue>
    TValue Item(TKey key) { TValue __retval; return WeakDictionary__get_Item_fn(this, uConstrain(__type->T(0), key), &__retval), __retval; }
    template<class TKey, class TValue>
    void Item(TKey key, TValue value) { WeakDictionary__set_Item_fn(this, uConstrain(__type->T(0), key), uConstrain(__type->T(1), value)); }
    bool Remove(::g::HashableWeakReference* key);
    template<class TKey, class TValue>
    bool TryGetValue(TKey key, TValue* value) { bool __retval; return WeakDictionary__TryGetValue_fn(this, uConstrain(__type->T(0), key), uConstrain(__type->T(1), value), &__retval), __retval; }
    template<class TKey>
    static ::g::HashableWeakReference* GetKey(uType* __type, TKey obj) { ::g::HashableWeakReference* __retval; return WeakDictionary__GetKey_fn(__type, uConstrain(__type->T(0), obj), &__retval), __retval; }
    static WeakDictionary* New1(uType* __type);
};
// }

} // ::g
