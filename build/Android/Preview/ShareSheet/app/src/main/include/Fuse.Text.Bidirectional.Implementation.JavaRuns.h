// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/implementation/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Text{namespace Bidirectional{namespace Implementation{struct JavaRuns;}}}}}
namespace g{namespace Fuse{namespace Text{namespace Bidirectional{struct Run;}}}}
namespace g{namespace Fuse{namespace Text{struct Substring;}}}
namespace g{namespace Java{struct Object;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Text{
namespace Bidirectional{
namespace Implementation{

// internal static extern class JavaRuns :1107
// {
uClassType* JavaRuns_typeof();
void JavaRuns__Create_fn(uString* text, ::g::Java::Object** __retval);
void JavaRuns__GetLogical_fn(::g::Fuse::Text::Substring* text, ::g::Uno::Collections::List** __retval);
void JavaRuns__GetRunCount_fn(::g::Java::Object* handle, int* __retval);
void JavaRuns__GetRunLevel_fn(::g::Java::Object* handle, int* run, int* __retval);
void JavaRuns__GetRunLimit_fn(::g::Java::Object* handle, int* run, int* __retval);
void JavaRuns__GetRunStart_fn(::g::Java::Object* handle, int* run, int* __retval);

struct JavaRuns : uObject
{
    static ::g::Java::Object* Create(uString* text);
    static ::g::Uno::Collections::List* GetLogical(::g::Fuse::Text::Substring* text);
    static int GetRunCount(::g::Java::Object* handle);
    static int GetRunLevel(::g::Java::Object* handle, int run);
    static int GetRunLimit(::g::Java::Object* handle, int run);
    static int GetRunStart(::g::Java::Object* handle, int run);
};
// }

}}}}} // ::g::Fuse::Text::Bidirectional::Implementation
