// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/triggers/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Trigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Controls{struct TextInputActionArgs;}}}
namespace g{namespace Fuse{namespace Triggers{struct TextInputActionTriggered;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class TextInputActionTriggered :107
// {
::g::Fuse::Triggers::Trigger_type* TextInputActionTriggered_typeof();
void TextInputActionTriggered__ctor_4_fn(TextInputActionTriggered* __this);
void TextInputActionTriggered__New2_fn(TextInputActionTriggered** __retval);
void TextInputActionTriggered__OnActionTriggered_fn(TextInputActionTriggered* __this, uObject* s, ::g::Fuse::Controls::TextInputActionArgs* args);
void TextInputActionTriggered__OnRooted_fn(TextInputActionTriggered* __this);
void TextInputActionTriggered__OnUnrooted_fn(TextInputActionTriggered* __this);
void TextInputActionTriggered__get_Type_fn(TextInputActionTriggered* __this, int* __retval);
void TextInputActionTriggered__set_Type_fn(TextInputActionTriggered* __this, int* value);

struct TextInputActionTriggered : ::g::Fuse::Triggers::Trigger
{
    uStrong<uObject*> _textEdit;
    int _type;

    void ctor_4();
    void OnActionTriggered(uObject* s, ::g::Fuse::Controls::TextInputActionArgs* args);
    int Type();
    void Type(int value);
    static TextInputActionTriggered* New2();
};
// }

}}} // ::g::Fuse::Triggers
