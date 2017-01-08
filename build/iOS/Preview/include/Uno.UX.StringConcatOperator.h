// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/ux/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.PropertyObject.h>
namespace g{namespace Uno{namespace UX{struct Property;}}}
namespace g{namespace Uno{namespace UX{struct StringConcatOperator;}}}

namespace g{
namespace Uno{
namespace UX{

// public sealed class StringConcatOperator :535
// {
uType* StringConcatOperator_typeof();
void StringConcatOperator__ctor_1_fn(StringConcatOperator* __this);
void StringConcatOperator__get_Left_fn(StringConcatOperator* __this, uString** __retval);
void StringConcatOperator__set_Left_fn(StringConcatOperator* __this, uString* value);
void StringConcatOperator__New2_fn(StringConcatOperator** __retval);
void StringConcatOperator__Push_fn(StringConcatOperator* __this);
void StringConcatOperator__get_Right_fn(StringConcatOperator* __this, uString** __retval);
void StringConcatOperator__set_Right_fn(StringConcatOperator* __this, uString* value);
void StringConcatOperator__SetString_fn(StringConcatOperator* __this, uString* v);
void StringConcatOperator__get_Target_fn(StringConcatOperator* __this, ::g::Uno::UX::Property** __retval);
void StringConcatOperator__set_Target_fn(StringConcatOperator* __this, ::g::Uno::UX::Property* value);

struct StringConcatOperator : ::g::Uno::UX::PropertyObject
{
    bool _hasLeft;
    bool _hasRight;
    uStrong<uString*> _left;
    uStrong<uString*> _right;
    uStrong< ::g::Uno::UX::Property*> _target;

    void ctor_1();
    uString* Left();
    void Left(uString* value);
    void Push();
    uString* Right();
    void Right(uString* value);
    void SetString(uString* v);
    ::g::Uno::UX::Property* Target();
    void Target(::g::Uno::UX::Property* value);
    static StringConcatOperator* New2();
};
// }

}}} // ::g::Uno::UX
