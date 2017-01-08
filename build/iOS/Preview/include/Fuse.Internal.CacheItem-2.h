// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Internal{struct CacheItem;}}}
namespace g{namespace Fuse{namespace Internal{struct CacheRef;}}}

namespace g{
namespace Fuse{
namespace Internal{

// public struct CacheItem<TKey, TValue> :563
// {
struct CacheItem_type : uStructType
{
    ::g::Uno::IDisposable interface0;
};

CacheItem_type* CacheItem_typeof();
void CacheItem__ctor__fn(CacheItem* __this, uType* __type, ::g::Fuse::Internal::CacheRef* cacheRef);
void CacheItem__Dispose_fn(CacheItem* __this, uType* __type);
void CacheItem__Equals_fn(CacheItem* __this, uType* __type, uObject* o, bool* __retval);
void CacheItem__GetHashCode_fn(CacheItem* __this, uType* __type, int* __retval);
void CacheItem__get_Key_fn(CacheItem* __this, uType* __type, uTRef __retval);
void CacheItem__New1_fn(uType* __type, ::g::Fuse::Internal::CacheRef* cacheRef, CacheItem* __retval);
void CacheItem__op_Equality_fn(uType* __type, CacheItem* x, CacheItem* y, bool* __retval);
void CacheItem__op_Inequality_fn(uType* __type, CacheItem* x, CacheItem* y, bool* __retval);
void CacheItem__get_Value_fn(CacheItem* __this, uType* __type, uObject** __retval);

struct CacheItem
{
    uStrong< ::g::Fuse::Internal::CacheRef*> _cacheRef;

    void ctor_(uType* __type, ::g::Fuse::Internal::CacheRef* cacheRef);
    void Dispose(uType* __type);
    bool Equals(uType* __type, uObject* o) { bool __retval; return CacheItem__Equals_fn(this, __type, o, &__retval), __retval; }
    int GetHashCode(uType* __type) { int __retval; return CacheItem__GetHashCode_fn(this, __type, &__retval), __retval; }
    template<class TKey>
    TKey Key(uType* __type) { TKey __retval; return CacheItem__get_Key_fn(this, __type, &__retval), __retval; }
    uObject* Value(uType* __type);
};

CacheItem CacheItem__New1(uType* __type, ::g::Fuse::Internal::CacheRef* cacheRef);
bool CacheItem__op_Equality(uType* __type, CacheItem x, CacheItem y);
bool CacheItem__op_Inequality(uType* __type, CacheItem x, CacheItem y);
// }

}}} // ::g::Fuse::Internal
