// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Panels/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.ContentControl.h>
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
namespace g{namespace Fuse{namespace Controls{struct Placeholder;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Uno{namespace UX{struct Template;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class Placeholder :1138
// {
::g::Fuse::Controls::ContentControl_type* Placeholder_typeof();
void Placeholder__ctor_6_fn(Placeholder* __this);
void Placeholder__AcquireTarget_fn(Placeholder* __this);
void Placeholder__get_ContentFactory_fn(Placeholder* __this, ::g::Uno::UX::Template** __retval);
void Placeholder__set_ContentFactory_fn(Placeholder* __this, ::g::Uno::UX::Template* value);
void Placeholder__get_ContentTemplate_fn(Placeholder* __this, ::g::Uno::UX::Template** __retval);
void Placeholder__set_ContentTemplate_fn(Placeholder* __this, ::g::Uno::UX::Template* value);
void Placeholder__New3_fn(Placeholder** __retval);
void Placeholder__OnChildAdded_fn(Placeholder* __this, ::g::Fuse::Node* n);
void Placeholder__OnChildRemoved_fn(Placeholder* __this, ::g::Fuse::Node* n);
void Placeholder__get_PlaceholderContent_fn(Placeholder* __this, ::g::Fuse::Elements::Element** __retval);
void Placeholder__set_PlaceholderContent_fn(Placeholder* __this, ::g::Fuse::Elements::Element* value);
void Placeholder__get_Target_fn(Placeholder* __this, ::g::Fuse::Elements::Element** __retval);
void Placeholder__set_Target_fn(Placeholder* __this, ::g::Fuse::Elements::Element* value);

struct Placeholder : ::g::Fuse::Controls::ContentControl
{
    uStrong< ::g::Uno::UX::Template*> _contentTemplate;
    uStrong< ::g::Fuse::Elements::Element*> _Target;

    void ctor_6();
    void AcquireTarget();
    ::g::Uno::UX::Template* ContentFactory();
    void ContentFactory(::g::Uno::UX::Template* value);
    ::g::Uno::UX::Template* ContentTemplate();
    void ContentTemplate(::g::Uno::UX::Template* value);
    ::g::Fuse::Elements::Element* PlaceholderContent();
    void PlaceholderContent(::g::Fuse::Elements::Element* value);
    ::g::Fuse::Elements::Element* Target();
    void Target(::g::Fuse::Elements::Element* value);
    static Placeholder* New3();
};
// }

}}} // ::g::Fuse::Controls
