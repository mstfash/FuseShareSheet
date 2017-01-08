// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Panels/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct StackPanel;}}}
namespace g{namespace Fuse{namespace Layouts{struct StackLayout;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public class StackPanel :1690
// {
::g::Fuse::Controls::Control_type* StackPanel_typeof();
void StackPanel__ctor_7_fn(StackPanel* __this);
void StackPanel__get_ContentAlignment_fn(StackPanel* __this, int* __retval);
void StackPanel__set_ContentAlignment_fn(StackPanel* __this, int* value);
void StackPanel__get_ItemSpacing_fn(StackPanel* __this, float* __retval);
void StackPanel__set_ItemSpacing_fn(StackPanel* __this, float* value);
void StackPanel__get_Mode_fn(StackPanel* __this, int* __retval);
void StackPanel__set_Mode_fn(StackPanel* __this, int* value);
void StackPanel__New4_fn(StackPanel** __retval);
void StackPanel__get_Orientation_fn(StackPanel* __this, int* __retval);
void StackPanel__set_Orientation_fn(StackPanel* __this, int* value);

struct StackPanel : ::g::Fuse::Controls::Panel
{
    uStrong< ::g::Fuse::Layouts::StackLayout*> _stackLayout;

    void ctor_7();
    int ContentAlignment();
    void ContentAlignment(int value);
    float ItemSpacing();
    void ItemSpacing(float value);
    int Mode();
    void Mode(int value);
    int Orientation();
    void Orientation(int value);
    static StackPanel* New4();
};
// }

}}} // ::g::Fuse::Controls
