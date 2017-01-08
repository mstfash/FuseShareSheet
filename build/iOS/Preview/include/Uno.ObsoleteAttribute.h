// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Attribute.h>
namespace g{namespace Uno{struct ObsoleteAttribute;}}

namespace g{
namespace Uno{

// public sealed class ObsoleteAttribute :5253
// {
uType* ObsoleteAttribute_typeof();
void ObsoleteAttribute__ctor_1_fn(ObsoleteAttribute* __this);
void ObsoleteAttribute__ctor_2_fn(ObsoleteAttribute* __this, uString* message);
void ObsoleteAttribute__ctor_3_fn(ObsoleteAttribute* __this, uString* message, bool* isError);
void ObsoleteAttribute__get_IsError_fn(ObsoleteAttribute* __this, bool* __retval);
void ObsoleteAttribute__set_IsError_fn(ObsoleteAttribute* __this, bool* value);
void ObsoleteAttribute__get_Message_fn(ObsoleteAttribute* __this, uString** __retval);
void ObsoleteAttribute__set_Message_fn(ObsoleteAttribute* __this, uString* value);
void ObsoleteAttribute__New1_fn(ObsoleteAttribute** __retval);
void ObsoleteAttribute__New2_fn(uString* message, ObsoleteAttribute** __retval);
void ObsoleteAttribute__New3_fn(uString* message, bool* isError, ObsoleteAttribute** __retval);

struct ObsoleteAttribute : ::g::Uno::Attribute
{
    bool _IsError;
    uStrong<uString*> _Message;

    void ctor_1();
    void ctor_2(uString* message);
    void ctor_3(uString* message, bool isError);
    bool IsError();
    void IsError(bool value);
    uString* Message();
    void Message(uString* value);
    static ObsoleteAttribute* New1();
    static ObsoleteAttribute* New2(uString* message);
    static ObsoleteAttribute* New3(uString* message, bool isError);
};
// }

}} // ::g::Uno
