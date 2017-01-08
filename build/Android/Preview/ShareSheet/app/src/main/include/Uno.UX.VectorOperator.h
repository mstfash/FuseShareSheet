// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/ux/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Operator.h>
namespace g{namespace Uno{namespace UX{struct Value;}}}
namespace g{namespace Uno{namespace UX{struct VectorOperator;}}}

namespace g{
namespace Uno{
namespace UX{

// public sealed class VectorOperator :166
// {
::g::Uno::UX::Operator_type* VectorOperator_typeof();
void VectorOperator__Push_fn(VectorOperator* __this);
void VectorOperator__get_ReadyCompCount_fn(VectorOperator* __this, int* __retval);
void VectorOperator__get_W_fn(VectorOperator* __this, ::g::Uno::UX::Value** __retval);
void VectorOperator__set_W_fn(VectorOperator* __this, ::g::Uno::UX::Value* value);
void VectorOperator__get_X_fn(VectorOperator* __this, ::g::Uno::UX::Value** __retval);
void VectorOperator__set_X_fn(VectorOperator* __this, ::g::Uno::UX::Value* value);
void VectorOperator__get_Y_fn(VectorOperator* __this, ::g::Uno::UX::Value** __retval);
void VectorOperator__set_Y_fn(VectorOperator* __this, ::g::Uno::UX::Value* value);
void VectorOperator__get_Z_fn(VectorOperator* __this, ::g::Uno::UX::Value** __retval);
void VectorOperator__set_Z_fn(VectorOperator* __this, ::g::Uno::UX::Value* value);

struct VectorOperator : ::g::Uno::UX::Operator
{
    int _compCount;
    bool _hasW;
    bool _hasX;
    bool _hasY;
    bool _hasZ;
    uStrong< ::g::Uno::UX::Value*> _w;
    uStrong< ::g::Uno::UX::Value*> _x;
    uStrong< ::g::Uno::UX::Value*> _y;
    uStrong< ::g::Uno::UX::Value*> _z;

    int ReadyCompCount();
    ::g::Uno::UX::Value* W();
    void W(::g::Uno::UX::Value* value);
    ::g::Uno::UX::Value* X();
    void X(::g::Uno::UX::Value* value);
    ::g::Uno::UX::Value* Y();
    void Y(::g::Uno::UX::Value* value);
    ::g::Uno::UX::Value* Z();
    void Z(::g::Uno::UX::Value* value);
};
// }

}}} // ::g::Uno::UX
