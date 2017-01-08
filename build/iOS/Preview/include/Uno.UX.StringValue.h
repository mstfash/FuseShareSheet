// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/ux/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Value.h>
namespace g{namespace Uno{namespace UX{struct StringValue;}}}

namespace g{
namespace Uno{
namespace UX{

// internal sealed class StringValue :1689
// {
::g::Uno::UX::Value_type* StringValue_typeof();
void StringValue__ctor_1_fn(StringValue* __this, uString* value);
void StringValue__Add_fn(StringValue* __this, ::g::Uno::UX::Value* v, ::g::Uno::UX::Value** __retval);
void StringValue__EqualTo_fn(StringValue* __this, ::g::Uno::UX::Value* v, bool* __retval);
void StringValue__GreaterThan_fn(StringValue* __this, ::g::Uno::UX::Value* v, bool* __retval);
void StringValue__LessThan_fn(StringValue* __this, ::g::Uno::UX::Value* v, bool* __retval);
void StringValue__New1_fn(uString* value, StringValue** __retval);
void StringValue__ToBool_fn(StringValue* __this, bool* __retval);
void StringValue__ToDouble_fn(StringValue* __this, double* __retval);
void StringValue__ToObject_fn(StringValue* __this, uObject** __retval);
void StringValue__ToString_fn(StringValue* __this, uString** __retval);

struct StringValue : ::g::Uno::UX::Value
{
    uStrong<uString*> _value;

    void ctor_1(uString* value);
    static StringValue* New1(uString* value);
};
// }

}}} // ::g::Uno::UX
