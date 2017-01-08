// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/time/text/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Time{namespace Text{struct ParseResult;}}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Uno{
namespace Time{
namespace Text{

// public sealed class ParseResult<T> :756
// {
uType* ParseResult_typeof();
void ParseResult__ctor__fn(ParseResult* __this, void* value);
void ParseResult__ctor_1_fn(ParseResult* __this, ::g::Uno::Exception* exception);
void ParseResult__ForException_fn(uType* __type, ::g::Uno::Exception* exception, ParseResult** __retval);
void ParseResult__ForValue_fn(uType* __type, void* value, ParseResult** __retval);
void ParseResult__GetValueOrThrow_fn(ParseResult* __this, uTRef __retval);
void ParseResult__New1_fn(uType* __type, void* value, ParseResult** __retval);
void ParseResult__New2_fn(uType* __type, ::g::Uno::Exception* exception, ParseResult** __retval);

struct ParseResult : uObject
{
    uStrong< ::g::Uno::Exception*> _exception;
    uTField _value() { return __type->Field(this, 1); }

    template<class T>
    void ctor_(T value) { ParseResult__ctor__fn(this, uConstrain(__type->T(0), value)); }
    void ctor_1(::g::Uno::Exception* exception);
    template<class T>
    T GetValueOrThrow() { T __retval; return ParseResult__GetValueOrThrow_fn(this, &__retval), __retval; }
    static ParseResult* ForException(uType* __type, ::g::Uno::Exception* exception);
    template<class T>
    static ParseResult* ForValue(uType* __type, T value) { ParseResult* __retval; return ParseResult__ForValue_fn(__type, uConstrain(__type->T(0), value), &__retval), __retval; }
    template<class T>
    static ParseResult* New1(uType* __type, T value) { ParseResult* __retval; return ParseResult__New1_fn(__type, uConstrain(__type->T(0), value), &__retval), __retval; }
    static ParseResult* New2(uType* __type, ::g::Uno::Exception* exception);
};
// }

}}}} // ::g::Uno::Time::Text
