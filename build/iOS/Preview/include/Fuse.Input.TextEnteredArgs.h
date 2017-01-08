// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IScriptEvent.h>
#include <Fuse.VisualEventArgs.h>
namespace g{namespace Fuse{namespace Input{struct TextEnteredArgs;}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Input{

// public sealed class TextEnteredArgs :1511
// {
::g::Fuse::VisualEventArgs_type* TextEnteredArgs_typeof();
void TextEnteredArgs__ctor_2_fn(TextEnteredArgs* __this, uString* text, ::g::Fuse::Visual* visual);
void TextEnteredArgs__New3_fn(uString* text, ::g::Fuse::Visual* visual, TextEnteredArgs** __retval);
void TextEnteredArgs__Serialize_fn(TextEnteredArgs* __this, uObject* s);
void TextEnteredArgs__get_Text_fn(TextEnteredArgs* __this, uString** __retval);
void TextEnteredArgs__set_Text_fn(TextEnteredArgs* __this, uString* value);

struct TextEnteredArgs : ::g::Fuse::VisualEventArgs
{
    uStrong<uString*> _Text;

    void ctor_2(uString* text, ::g::Fuse::Visual* visual);
    uString* Text();
    void Text(uString* value);
    static TextEnteredArgs* New3(uString* text, ::g::Fuse::Visual* visual);
};
// }

}}} // ::g::Fuse::Input
