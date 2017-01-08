// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/ux/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.PropertyObject.h>
namespace g{namespace Uno{namespace UX{struct Operator;}}}
namespace g{namespace Uno{namespace UX{struct Property;}}}
namespace g{namespace Uno{namespace UX{struct Value;}}}

namespace g{
namespace Uno{
namespace UX{

// public abstract class Operator :141
// {
struct Operator_type : uType
{
    void(*fp_Push)(::g::Uno::UX::Operator*);
};

Operator_type* Operator_typeof();
void Operator__ctor_1_fn(Operator* __this);
void Operator__SetValue_fn(Operator* __this, ::g::Uno::UX::Value* v);
void Operator__get_Target_fn(Operator* __this, ::g::Uno::UX::Property** __retval);
void Operator__set_Target_fn(Operator* __this, ::g::Uno::UX::Property* value);

struct Operator : ::g::Uno::UX::PropertyObject
{
    uStrong< ::g::Uno::UX::Property*> _target;

    void ctor_1();
    void Push() { (((Operator_type*)__type)->fp_Push)(this); }
    void SetValue(::g::Uno::UX::Value* v);
    ::g::Uno::UX::Property* Target();
    void Target(::g::Uno::UX::Property* value);
};
// }

}}} // ::g::Uno::UX
