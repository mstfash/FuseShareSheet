// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/ux/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Operator.h>
namespace g{namespace Uno{namespace UX{struct BinaryOperator;}}}
namespace g{namespace Uno{namespace UX{struct Value;}}}

namespace g{
namespace Uno{
namespace UX{

// public abstract class BinaryOperator :398
// {
struct BinaryOperator_type : ::g::Uno::UX::Operator_type
{
    void(*fp_Compute)(::g::Uno::UX::BinaryOperator*, ::g::Uno::UX::Value*, ::g::Uno::UX::Value*, ::g::Uno::UX::Value**);
};

BinaryOperator_type* BinaryOperator_typeof();
void BinaryOperator__ctor_2_fn(BinaryOperator* __this);
void BinaryOperator__Compute_fn(BinaryOperator* __this, ::g::Uno::UX::Value* a, ::g::Uno::UX::Value* b, ::g::Uno::UX::Value** __retval);
void BinaryOperator__get_HasLeft_fn(BinaryOperator* __this, bool* __retval);
void BinaryOperator__get_HasRight_fn(BinaryOperator* __this, bool* __retval);
void BinaryOperator__get_Left_fn(BinaryOperator* __this, ::g::Uno::UX::Value** __retval);
void BinaryOperator__set_Left_fn(BinaryOperator* __this, ::g::Uno::UX::Value* value);
void BinaryOperator__Push_fn(BinaryOperator* __this);
void BinaryOperator__get_Right_fn(BinaryOperator* __this, ::g::Uno::UX::Value** __retval);
void BinaryOperator__set_Right_fn(BinaryOperator* __this, ::g::Uno::UX::Value* value);

struct BinaryOperator : ::g::Uno::UX::Operator
{
    bool _hasLeft;
    bool _hasRight;
    uStrong< ::g::Uno::UX::Value*> _left;
    uStrong< ::g::Uno::UX::Value*> _right;

    void ctor_2();
    ::g::Uno::UX::Value* Compute(::g::Uno::UX::Value* a, ::g::Uno::UX::Value* b) { ::g::Uno::UX::Value* __retval; return (((BinaryOperator_type*)__type)->fp_Compute)(this, a, b, &__retval), __retval; }
    bool HasLeft();
    bool HasRight();
    ::g::Uno::UX::Value* Left();
    void Left(::g::Uno::UX::Value* value);
    ::g::Uno::UX::Value* Right();
    void Right(::g::Uno::UX::Value* value);
    static ::g::Uno::UX::Value* Compute(BinaryOperator* __this, ::g::Uno::UX::Value* a, ::g::Uno::UX::Value* b) { ::g::Uno::UX::Value* __retval; return BinaryOperator__Compute_fn(__this, a, b, &__retval), __retval; }
};
// }

}}} // ::g::Uno::UX
