// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/ux/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Operator.h>
namespace g{namespace Uno{namespace UX{struct StringFunction;}}}

namespace g{
namespace Uno{
namespace UX{

// public abstract class StringFunction :278
// {
struct StringFunction_type : ::g::Uno::UX::Operator_type
{
    void(*fp_Compute)(::g::Uno::UX::StringFunction*, uString*, uString**);
};

StringFunction_type* StringFunction_typeof();
void StringFunction__ctor_2_fn(StringFunction* __this);
void StringFunction__get_Operand_fn(StringFunction* __this, uString** __retval);
void StringFunction__set_Operand_fn(StringFunction* __this, uString* value);
void StringFunction__Push_fn(StringFunction* __this);

struct StringFunction : ::g::Uno::UX::Operator
{
    bool _hasOperand;
    uStrong<uString*> _operand;

    void ctor_2();
    uString* Compute(uString* s) { uString* __retval; return (((StringFunction_type*)__type)->fp_Compute)(this, s, &__retval), __retval; }
    uString* Operand();
    void Operand(uString* value);
};
// }

}}} // ::g::Uno::UX
