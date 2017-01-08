// This file was generated based on /Users/mostafa/Desktop/ShareSheet/build/iOS/Preview/cache/ux11/PageWithTitle.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.PageWithTitle.h>
#include <_root.ShareSheet_FuseControlsPage_Title_Property.h>
#include <_root.ShareSheet_FuseControlsPanel_Color_Property.h>
#include <_root.ShareSheet_FuseControlsTextControl_TextColor_Property.h>
#include <_root.ShareSheet_FuseControlsTextControl_Value_Property.h>
#include <_root.ShareSheet_PageWithTitle_HeaderColor_Property.h>
#include <_root.ShareSheet_PageWithTitle_HeaderTextColor_Property.h>
#include <_root.ShareSheet_PageWithTitle_Instructions_Property.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.Move.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.TransformAnimator-1.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.LayoutControl.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.HitTestMode.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Layouts.DockLayout.h>
#include <Fuse.Layouts.Layout.h>
#include <Fuse.Navigation.WhileActive.h>
#include <Fuse.Navigation.WhileNavigationTrigger.h>
#include <Fuse.Reactive.PropertyBinding.h>
#include <Fuse.Translation.h>
#include <Fuse.TranslationModes.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.WhileTrigger.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.String.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[8];
static uType* TYPES[3];

namespace g{

// public partial sealed class PageWithTitle :2
// {
// static PageWithTitle() :57
static void PageWithTitle__cctor_4_fn(uType* __type)
{
    PageWithTitle::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Value"*/]);
    PageWithTitle::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Title"*/]);
    PageWithTitle::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"TextColor"*/]);
    PageWithTitle::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"HeaderTextC...*/]);
    PageWithTitle::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"Color"*/]);
    PageWithTitle::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"HeaderColor"*/]);
    PageWithTitle::__selector6_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"Instructions"*/]);
    PageWithTitle::__selector7_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[7/*"self"*/]);
}

static void PageWithTitle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[1] = uString::Const("Title");
    ::STRINGS[2] = uString::Const("TextColor");
    ::STRINGS[3] = uString::Const("HeaderTextColor");
    ::STRINGS[4] = uString::Const("Color");
    ::STRINGS[5] = uString::Const("HeaderColor");
    ::STRINGS[6] = uString::Const("Instructions");
    ::STRINGS[7] = uString::Const("self");
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface1),
        ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Control_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface3),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface4),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface5),
        ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Control_type, interface6),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface7),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface8),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface9),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface10),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface11),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface12));
    type->SetFields(93,
        ::g::Uno::Float4_typeof(), offsetof(::g::PageWithTitle, _field_HeaderColor), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::PageWithTitle, _field_HeaderTextColor), 0,
        ::g::Uno::String_typeof(), offsetof(::g::PageWithTitle, _field_Instructions), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(::g::PageWithTitle, temp_TextColor_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::PageWithTitle, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(::g::PageWithTitle, temp1_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::PageWithTitle, temp2_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(::g::PageWithTitle, this_HeaderColor_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(::g::PageWithTitle, this_HeaderTextColor_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::PageWithTitle, this_Instructions_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::PageWithTitle, this_Title_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::PageWithTitle::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::PageWithTitle::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::PageWithTitle::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::PageWithTitle::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::PageWithTitle::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::PageWithTitle::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::PageWithTitle::__selector6_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::PageWithTitle::__selector7_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(10,
        new uFunction("get_HeaderColor", NULL, (void*)PageWithTitle__get_HeaderColor_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_HeaderColor", NULL, (void*)PageWithTitle__set_HeaderColor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("get_HeaderTextColor", NULL, (void*)PageWithTitle__get_HeaderTextColor_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_HeaderTextColor", NULL, (void*)PageWithTitle__set_HeaderTextColor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("get_Instructions", NULL, (void*)PageWithTitle__get_Instructions_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Instructions", NULL, (void*)PageWithTitle__set_Instructions_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction(".ctor", NULL, (void*)PageWithTitle__New5_fn, 0, true, type, 0),
        new uFunction("SetHeaderColor", NULL, (void*)PageWithTitle__SetHeaderColor_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Float4_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("SetHeaderTextColor", NULL, (void*)PageWithTitle__SetHeaderTextColor_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Float4_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("SetInstructions", NULL, (void*)PageWithTitle__SetInstructions_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::UX::IPropertyListener_typeof()));
}

::g::Fuse::Controls::Control_type* PageWithTitle_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Control_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 112;
    options.InterfaceCount = 13;
    options.ObjectSize = sizeof(PageWithTitle);
    options.TypeSize = sizeof(::g::Fuse::Controls::Control_type);
    type = (::g::Fuse::Controls::Control_type*)uClassType::New("PageWithTitle", options);
    type->fp_build_ = PageWithTitle_build;
    type->fp_ctor_ = (void*)PageWithTitle__New5_fn;
    type->fp_cctor_ = PageWithTitle__cctor_4_fn;
    type->interface8.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface10.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface9.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface12.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface11.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface11.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualPosition_fn;
    type->interface11.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface11.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface6.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface6.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface4.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface7.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface6.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface4.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface4.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface5.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Controls::Control__OnPropertyChanged2_fn;
    type->interface6.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface6.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface2.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface2.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface3.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface2.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public PageWithTitle() :61
void PageWithTitle__ctor_8_fn(PageWithTitle* __this)
{
    __this->ctor_8();
}

// public float4 get_HeaderColor() :8
void PageWithTitle__get_HeaderColor_fn(PageWithTitle* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->HeaderColor();
}

// public void set_HeaderColor(float4 value) :9
void PageWithTitle__set_HeaderColor_fn(PageWithTitle* __this, ::g::Uno::Float4* value)
{
    __this->HeaderColor(*value);
}

// public float4 get_HeaderTextColor() :23
void PageWithTitle__get_HeaderTextColor_fn(PageWithTitle* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->HeaderTextColor();
}

// public void set_HeaderTextColor(float4 value) :24
void PageWithTitle__set_HeaderTextColor_fn(PageWithTitle* __this, ::g::Uno::Float4* value)
{
    __this->HeaderTextColor(*value);
}

// private void InitializeUX() :65
void PageWithTitle__InitializeUX_fn(PageWithTitle* __this)
{
    __this->InitializeUX();
}

// public string get_Instructions() :38
void PageWithTitle__get_Instructions_fn(PageWithTitle* __this, uString** __retval)
{
    *__retval = __this->Instructions();
}

// public void set_Instructions(string value) :39
void PageWithTitle__set_Instructions_fn(PageWithTitle* __this, uString* value)
{
    __this->Instructions(value);
}

// public PageWithTitle New() :61
void PageWithTitle__New5_fn(PageWithTitle** __retval)
{
    *__retval = PageWithTitle::New5();
}

// public void SetHeaderColor(float4 value, Uno.UX.IPropertyListener origin) :11
void PageWithTitle__SetHeaderColor_fn(PageWithTitle* __this, ::g::Uno::Float4* value, uObject* origin)
{
    __this->SetHeaderColor(*value, origin);
}

// public void SetHeaderTextColor(float4 value, Uno.UX.IPropertyListener origin) :26
void PageWithTitle__SetHeaderTextColor_fn(PageWithTitle* __this, ::g::Uno::Float4* value, uObject* origin)
{
    __this->SetHeaderTextColor(*value, origin);
}

// public void SetInstructions(string value, Uno.UX.IPropertyListener origin) :41
void PageWithTitle__SetInstructions_fn(PageWithTitle* __this, uString* value, uObject* origin)
{
    __this->SetInstructions(value, origin);
}

::g::Uno::UX::Selector PageWithTitle::__selector0_;
::g::Uno::UX::Selector PageWithTitle::__selector1_;
::g::Uno::UX::Selector PageWithTitle::__selector2_;
::g::Uno::UX::Selector PageWithTitle::__selector3_;
::g::Uno::UX::Selector PageWithTitle::__selector4_;
::g::Uno::UX::Selector PageWithTitle::__selector5_;
::g::Uno::UX::Selector PageWithTitle::__selector6_;
::g::Uno::UX::Selector PageWithTitle::__selector7_;

// public PageWithTitle() [instance] :61
void PageWithTitle::ctor_8()
{
    uStackFrame __("PageWithTitle", ".ctor()");
    ctor_7();
    InitializeUX();
}

// public float4 get_HeaderColor() [instance] :8
::g::Uno::Float4 PageWithTitle::HeaderColor()
{
    return _field_HeaderColor;
}

// public void set_HeaderColor(float4 value) [instance] :9
void PageWithTitle::HeaderColor(::g::Uno::Float4 value)
{
    uStackFrame __("PageWithTitle", "set_HeaderColor(float4)");
    SetHeaderColor(value, NULL);
}

// public float4 get_HeaderTextColor() [instance] :23
::g::Uno::Float4 PageWithTitle::HeaderTextColor()
{
    return _field_HeaderTextColor;
}

// public void set_HeaderTextColor(float4 value) [instance] :24
void PageWithTitle::HeaderTextColor(::g::Uno::Float4 value)
{
    uStackFrame __("PageWithTitle", "set_HeaderTextColor(float4)");
    SetHeaderTextColor(value, NULL);
}

// private void InitializeUX() [instance] :65
void PageWithTitle::InitializeUX()
{
    uStackFrame __("PageWithTitle", "InitializeUX()");
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New3();
    temp_Value_inst = ::g::ShareSheet_FuseControlsTextControl_Value_Property::New1(temp, PageWithTitle::__selector0());
    this_Title_inst = ::g::ShareSheet_FuseControlsPage_Title_Property::New1(this, PageWithTitle::__selector1());
    temp_TextColor_inst = ::g::ShareSheet_FuseControlsTextControl_TextColor_Property::New1(temp, PageWithTitle::__selector2());
    this_HeaderTextColor_inst = ::g::ShareSheet_PageWithTitle_HeaderTextColor_Property::New1(this, PageWithTitle::__selector3());
    ::g::Fuse::Controls::Panel* temp1 = ::g::Fuse::Controls::Panel::New3();
    temp1_Color_inst = ::g::ShareSheet_FuseControlsPanel_Color_Property::New1(temp1, PageWithTitle::__selector4());
    this_HeaderColor_inst = ::g::ShareSheet_PageWithTitle_HeaderColor_Property::New1(this, PageWithTitle::__selector5());
    ::g::Fuse::Controls::Text* temp2 = ::g::Fuse::Controls::Text::New3();
    temp2_Value_inst = ::g::ShareSheet_FuseControlsTextControl_Value_Property::New1(temp2, PageWithTitle::__selector0());
    this_Instructions_inst = ::g::ShareSheet_PageWithTitle_Instructions_Property::New1(this, PageWithTitle::__selector6());
    ::g::Fuse::Layouts::DockLayout* temp3 = ::g::Fuse::Layouts::DockLayout::New2();
    ::g::Fuse::Controls::StackPanel* temp4 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Reactive::PropertyBinding* temp5 = ::g::Fuse::Reactive::PropertyBinding::New1(temp_Value_inst, this_Title_inst);
    ::g::Fuse::Reactive::PropertyBinding* temp6 = ::g::Fuse::Reactive::PropertyBinding::New1(temp_TextColor_inst, this_HeaderTextColor_inst);
    ::g::Fuse::Reactive::PropertyBinding* temp7 = ::g::Fuse::Reactive::PropertyBinding::New1(temp1_Color_inst, this_HeaderColor_inst);
    ::g::Fuse::Controls::Panel* temp8 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Navigation::WhileActive* temp9 = ::g::Fuse::Navigation::WhileActive::New2();
    ::g::Fuse::Animations::Move* temp10 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Reactive::PropertyBinding* temp11 = ::g::Fuse::Reactive::PropertyBinding::New1(temp2_Value_inst, this_Instructions_inst);
    HitTestMode(6);
    Name(PageWithTitle::__selector7());
    ::g::Fuse::Controls::DockPanel::SetDock(temp4, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    temp1->Height(::g::Uno::UX::Size__New1(45.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp7);
    temp->FontSize(22.0f);
    temp->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp6);
    temp8->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.5333334f));
    temp8->Height(::g::Uno::UX::Size__New1(10.0f, 4));
    temp8->Alignment(12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    temp9->Threshold(0.4f);
    temp9->Invert(true);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Animators()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp10);
    temp10->Y(1.0f);
    temp10->Duration(0.4);
    temp10->RelativeTo(::g::Fuse::TranslationModes::Size());
    temp10->Easing(::g::Fuse::Animations::Easing::CircularInOut());
    temp2->TextColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp2->Alignment(10);
    temp2->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp11);
    Layout(temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
}

// public string get_Instructions() [instance] :38
uString* PageWithTitle::Instructions()
{
    return _field_Instructions;
}

// public void set_Instructions(string value) [instance] :39
void PageWithTitle::Instructions(uString* value)
{
    uStackFrame __("PageWithTitle", "set_Instructions(string)");
    SetInstructions(value, NULL);
}

// public void SetHeaderColor(float4 value, Uno.UX.IPropertyListener origin) [instance] :11
void PageWithTitle::SetHeaderColor(::g::Uno::Float4 value, uObject* origin)
{
    uStackFrame __("PageWithTitle", "SetHeaderColor(float4,Uno.UX.IPropertyListener)");

    if (::g::Uno::Float4__op_Inequality(value, _field_HeaderColor))
    {
        _field_HeaderColor = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"HeaderColor"*/]), origin);
    }
}

// public void SetHeaderTextColor(float4 value, Uno.UX.IPropertyListener origin) [instance] :26
void PageWithTitle::SetHeaderTextColor(::g::Uno::Float4 value, uObject* origin)
{
    uStackFrame __("PageWithTitle", "SetHeaderTextColor(float4,Uno.UX.IPropertyListener)");

    if (::g::Uno::Float4__op_Inequality(value, _field_HeaderTextColor))
    {
        _field_HeaderTextColor = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"HeaderTextC...*/]), origin);
    }
}

// public void SetInstructions(string value, Uno.UX.IPropertyListener origin) [instance] :41
void PageWithTitle::SetInstructions(uString* value, uObject* origin)
{
    uStackFrame __("PageWithTitle", "SetInstructions(string,Uno.UX.IPropertyListener)");

    if (::g::Uno::String::op_Inequality(value, _field_Instructions))
    {
        _field_Instructions = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"Instructions"*/]), origin);
    }
}

// public PageWithTitle New() [static] :61
PageWithTitle* PageWithTitle::New5()
{
    PageWithTitle* obj1 = (PageWithTitle*)uNew(PageWithTitle_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

} // ::g
