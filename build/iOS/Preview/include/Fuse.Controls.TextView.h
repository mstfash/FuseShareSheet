// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/textcontrols/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.TextInputControl.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.IValue-1.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.String.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct TextEdit;}}}
namespace g{namespace Fuse{namespace Controls{struct TextView;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class TextView :2618
// {
::g::Fuse::Controls::TextInputControl_type* TextView_typeof();
void TextView__ctor_7_fn(TextView* __this);
void TextView__Create_fn(::g::Fuse::Controls::TextEdit** __retval);
void TextView__New3_fn(TextView** __retval);

struct TextView : ::g::Fuse::Controls::TextInputControl
{
    void ctor_7();
    static ::g::Fuse::Controls::TextEdit* Create();
    static TextView* New3();
};
// }

}}} // ::g::Fuse::Controls
