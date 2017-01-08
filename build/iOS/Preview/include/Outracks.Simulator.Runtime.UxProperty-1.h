// This file was generated based on /Users/mostafa/Desktop/ShareSheet/build/iOS/Preview/preamble/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Outracks{namespace Simulator{namespace Runtime{struct UxProperty;}}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Runtime{

// public sealed class UxProperty<T> :39
// {
::g::Uno::UX::Property1_type* UxProperty_typeof();
void UxProperty__ctor_2_fn(UxProperty* __this, uDelegate* setter, uDelegate* getter, ::g::Uno::UX::PropertyObject* obj, uString* name, bool* supportsOriginSetter);
void UxProperty__Get_fn(UxProperty* __this, uTRef __retval);
void UxProperty__New1_fn(uType* __type, uDelegate* setter, uDelegate* getter, ::g::Uno::UX::PropertyObject* obj, uString* name, bool* supportsOriginSetter, UxProperty** __retval);
void UxProperty__get_Object_fn(UxProperty* __this, ::g::Uno::UX::PropertyObject** __retval);
void UxProperty__Set_fn(UxProperty* __this, void* value, uObject* origin);
void UxProperty__get_SupportsOriginSetter_fn(UxProperty* __this, bool* __retval);

struct UxProperty : ::g::Uno::UX::Property1
{
    uStrong<uDelegate*> _getter;
    uStrong< ::g::Uno::UX::PropertyObject*> _obj;
    uStrong<uDelegate*> _setter;
    bool _supportsOriginSetter;

    void ctor_2(uDelegate* setter, uDelegate* getter, ::g::Uno::UX::PropertyObject* obj, uString* name, bool supportsOriginSetter);
    static UxProperty* New1(uType* __type, uDelegate* setter, uDelegate* getter, ::g::Uno::UX::PropertyObject* obj, uString* name, bool supportsOriginSetter);
};
// }

}}}} // ::g::Outracks::Simulator::Runtime
