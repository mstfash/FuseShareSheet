// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Panels/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Behavior.h>
#include <Fuse.Binding.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Controls{struct MultiLayout;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class MultiLayout :1029
// {
::g::Fuse::Node_type* MultiLayout_typeof();
void MultiLayout__ctor_3_fn(MultiLayout* __this);
void MultiLayout__ChangeLayout_fn(MultiLayout* __this, ::g::Fuse::Visual* layoutRoot);
void MultiLayout__get_LayoutElement_fn(MultiLayout* __this, ::g::Fuse::Elements::Element** __retval);
void MultiLayout__set_LayoutElement_fn(MultiLayout* __this, ::g::Fuse::Elements::Element* value);
void MultiLayout__New2_fn(MultiLayout** __retval);
void MultiLayout__OnRooted_fn(MultiLayout* __this);

struct MultiLayout : ::g::Fuse::Behavior
{
    uStrong< ::g::Fuse::Elements::Element*> _layoutElement;

    void ctor_3();
    void ChangeLayout(::g::Fuse::Visual* layoutRoot);
    ::g::Fuse::Elements::Element* LayoutElement();
    void LayoutElement(::g::Fuse::Elements::Element* value);
    static MultiLayout* New2();
};
// }

}}} // ::g::Fuse::Controls
