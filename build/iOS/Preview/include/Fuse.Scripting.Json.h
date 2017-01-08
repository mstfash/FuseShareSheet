// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/scripting/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Scripting{struct Json;}}}
namespace g{namespace Uno{namespace Collections{struct HashSet;}}}
namespace g{namespace Uno{namespace Text{struct StringBuilder;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public static class Json :828
// {
uClassType* Json_typeof();
void Json__Escape_fn(uString* s, uString** __retval);
void Json__Escape1_fn(uString* s, ::g::Uno::Text::StringBuilder* sb);
void Json__Stringify_fn(uObject* value, bool* normalized, uString** __retval);
void Json__Stringify1_fn(uObject* value, bool* normalized, ::g::Uno::Text::StringBuilder* sb, ::g::Uno::Collections::HashSet* visitedSet);
void Json__ToLiteral_fn(bool* b, uString** __retval);
void Json__ToLiteral1_fn(double* s, uString** __retval);
void Json__ToLiteral2_fn(uString* s, uString** __retval);
void Json__ToLiteral3_fn(uString* s, ::g::Uno::Text::StringBuilder* sb);

struct Json : uObject
{
    static uString* Escape(uString* s);
    static void Escape1(uString* s, ::g::Uno::Text::StringBuilder* sb);
    static uString* Stringify(uObject* value, bool normalized);
    static void Stringify1(uObject* value, bool normalized, ::g::Uno::Text::StringBuilder* sb, ::g::Uno::Collections::HashSet* visitedSet);
    static uString* ToLiteral(bool b);
    static uString* ToLiteral1(double s);
    static uString* ToLiteral2(uString* s);
    static void ToLiteral3(uString* s, ::g::Uno::Text::StringBuilder* sb);
};
// }

}}} // ::g::Fuse::Scripting
