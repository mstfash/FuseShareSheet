// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Elements/0.42.4/ux/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
namespace g{namespace Fuse{namespace Elements{namespace UX{struct LayoutFunction;}}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{struct PlacedArgs;}}
namespace g{namespace Uno{namespace UX{struct Property;}}}
namespace g{namespace Uno{namespace UX{struct Value;}}}

namespace g{
namespace Fuse{
namespace Elements{
namespace UX{

// public abstract class LayoutFunction :8
// {
struct LayoutFunction_type : ::g::Fuse::Binding_type
{
    void(*fp_OnPlaced)(::g::Fuse::Elements::UX::LayoutFunction*, uObject*, ::g::Fuse::PlacedArgs*);
};

LayoutFunction_type* LayoutFunction_typeof();
void LayoutFunction__ctor_1_fn(LayoutFunction* __this);
void LayoutFunction__get_Element_fn(LayoutFunction* __this, ::g::Fuse::Elements::Element** __retval);
void LayoutFunction__set_Element_fn(LayoutFunction* __this, ::g::Fuse::Elements::Element* value);
void LayoutFunction__OnRooted_fn(LayoutFunction* __this);
void LayoutFunction__OnUnrooted_fn(LayoutFunction* __this);
void LayoutFunction__Push_fn(LayoutFunction* __this);
void LayoutFunction__SetValue_fn(LayoutFunction* __this, ::g::Uno::UX::Value* value);
void LayoutFunction__get_Target_fn(LayoutFunction* __this, ::g::Uno::UX::Property** __retval);
void LayoutFunction__set_Target_fn(LayoutFunction* __this, ::g::Uno::UX::Property* value);

struct LayoutFunction : ::g::Fuse::Binding
{
    uStrong< ::g::Fuse::Elements::Element*> _elm;
    bool _hasValue;
    uStrong< ::g::Uno::UX::Property*> _target;
    uStrong< ::g::Uno::UX::Value*> _value;

    void ctor_1();
    ::g::Fuse::Elements::Element* Element();
    void Element(::g::Fuse::Elements::Element* value);
    void OnPlaced(uObject* sender, ::g::Fuse::PlacedArgs* args) { (((LayoutFunction_type*)__type)->fp_OnPlaced)(this, sender, args); }
    void Push();
    void SetValue(::g::Uno::UX::Value* value);
    ::g::Uno::UX::Property* Target();
    void Target(::g::Uno::UX::Property* value);
};
// }

}}}} // ::g::Fuse::Elements::UX
