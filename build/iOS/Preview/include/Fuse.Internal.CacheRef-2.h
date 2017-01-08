// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Internal{struct Cache;}}}
namespace g{namespace Fuse{namespace Internal{struct CacheRef;}}}
namespace g{namespace Uno{namespace Collections{struct LinkedListNode;}}}
namespace g{namespace Uno{namespace Threading{struct Mutex;}}}

namespace g{
namespace Fuse{
namespace Internal{

// internal sealed class CacheRef<TKey, TValue> :611
// {
struct CacheRef_type : uType
{
    ::g::Uno::IDisposable interface0;
};

CacheRef_type* CacheRef_typeof();
void CacheRef__ctor__fn(CacheRef* __this, ::g::Fuse::Internal::Cache* parent, void* key, uObject* value);
void CacheRef__Dispose_fn(CacheRef* __this);
void CacheRef__New1_fn(uType* __type, ::g::Fuse::Internal::Cache* parent, void* key, uObject* value, CacheRef** __retval);
void CacheRef__Release_fn(CacheRef* __this);
void CacheRef__Retain_fn(CacheRef* __this);

struct CacheRef : uObject
{
    uStrong< ::g::Fuse::Internal::Cache*> _parent;
    int _refCount;
    uStrong< ::g::Uno::Threading::Mutex*> _refCountMutex;
    uStrong< ::g::Uno::Collections::LinkedListNode*> _unusedListNode;
    uTField Key() { return __type->Field(this, 4); }
    uStrong<uObject*> Value;

    template<class TKey>
    void ctor_(::g::Fuse::Internal::Cache* parent, TKey key, uObject* value) { CacheRef__ctor__fn(this, parent, uConstrain(__type->T(0), key), value); }
    void Dispose();
    void Release();
    void Retain();
    template<class TKey>
    static CacheRef* New1(uType* __type, ::g::Fuse::Internal::Cache* parent, TKey key, uObject* value) { CacheRef* __retval; return CacheRef__New1_fn(__type, parent, uConstrain(__type->T(0), key), value, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Internal
