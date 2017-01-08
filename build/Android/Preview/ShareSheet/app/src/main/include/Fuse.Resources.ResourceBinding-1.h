// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/resources/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
namespace g{namespace Fuse{namespace Resources{struct ResourceBinding;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}

namespace g{
namespace Fuse{
namespace Resources{

// public sealed class ResourceBinding<T> :446
// {
::g::Fuse::Binding_type* ResourceBinding_typeof();
void ResourceBinding__ctor_1_fn(ResourceBinding* __this, ::g::Uno::UX::Property1* target, uString* key);
void ResourceBinding__get_Key_fn(ResourceBinding* __this, uString** __retval);
void ResourceBinding__set_Key_fn(ResourceBinding* __this, uString* value);
void ResourceBinding__New1_fn(uType* __type, ::g::Uno::UX::Property1* target, uString* key, ResourceBinding** __retval);
void ResourceBinding__OnChanged_fn(ResourceBinding* __this);
void ResourceBinding__OnRooted_fn(ResourceBinding* __this);
void ResourceBinding__OnUnrooted_fn(ResourceBinding* __this);
void ResourceBinding__get_Target_fn(ResourceBinding* __this, ::g::Uno::UX::Property1** __retval);
void ResourceBinding__set_Target_fn(ResourceBinding* __this, ::g::Uno::UX::Property1* value);

struct ResourceBinding : ::g::Fuse::Binding
{
    uStrong<uObject*> _converter;
    uStrong<uString*> _Key;
    uStrong< ::g::Uno::UX::Property1*> _Target;

    void ctor_1(::g::Uno::UX::Property1* target, uString* key);
    uString* Key();
    void Key(uString* value);
    void OnChanged();
    ::g::Uno::UX::Property1* Target();
    void Target(::g::Uno::UX::Property1* value);
    static ResourceBinding* New1(uType* __type, ::g::Uno::UX::Property1* target, uString* key);
};
// }

}}} // ::g::Fuse::Resources
