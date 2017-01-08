// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Diagnostics.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.ExecutionThread.h>
#include <Fuse.Scripting.IEventSerializer.h>
#include <Fuse.Scripting.ListMirror.h>
#include <Fuse.Scripting.Marshal.h>
#include <Fuse.Scripting.Observable.h>
#include <Fuse.Scripting.Observable.Subscription.h>
#include <Fuse.Scripting.ScriptClass.h>
#include <Fuse.Scripting.ScriptMember.h>
#include <Fuse.Scripting.ScriptMethod-1.h>
#include <Fuse.Selection.Deselected.h>
#include <Fuse.Selection.Selectable.h>
#include <Fuse.Selection.Selected.h>
#include <Fuse.Selection.Selection.h>
#include <Fuse.Selection.Selection.How.h>
#include <Fuse.Selection.SelectionEvent.h>
#include <Fuse.Selection.SelectionEventArgs.h>
#include <Fuse.Selection.SelectionReplace.h>
#include <Fuse.Selection.SelectMode.h>
#include <Fuse.Selection.ToggleSelection.h>
#include <Fuse.Selection.WhileSelected.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Visual.h>
#include <Uno.Action-3.h>
#include <Uno.Bool.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[37];
static uType* TYPES[15];

namespace g{
namespace Fuse{
namespace Selection{

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Selection/0.42.4/$.uno
// -----------------------------------------------------------------------------------------

// public sealed class Deselected :283
// {
static void Deselected_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Selection::SelectionEvent_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Selection::SelectionEvent_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Selection::SelectionEvent_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Selection::SelectionEvent_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Selection::SelectionEvent_type, interface4));
    type->SetFields(32);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Deselected__New2_fn, 0, true, type, 0));
}

::g::Fuse::Selection::SelectionEvent_type* Deselected_typeof()
{
    static uSStrong< ::g::Fuse::Selection::SelectionEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Selection::SelectionEvent_typeof();
    options.FieldCount = 32;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(Deselected);
    options.TypeSize = sizeof(::g::Fuse::Selection::SelectionEvent_type);
    type = (::g::Fuse::Selection::SelectionEvent_type*)uClassType::New("Fuse.Selection.Deselected", options);
    type->fp_build_ = Deselected_build;
    type->fp_ctor_ = (void*)Deselected__New2_fn;
    type->fp_IsTriggered = (void(*)(::g::Fuse::Selection::SelectionEvent*, bool*, bool*))Deselected__IsTriggered_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnStable_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
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

// public generated Deselected() :283
void Deselected__ctor_6_fn(Deselected* __this)
{
    __this->ctor_6();
}

// protected override sealed bool IsTriggered(bool on) :285
void Deselected__IsTriggered_fn(Deselected* __this, bool* on, bool* __retval)
{
    bool on_ = *on;
    return *__retval = !on_, void();
}

// public generated Deselected New() :283
void Deselected__New2_fn(Deselected** __retval)
{
    *__retval = Deselected::New2();
}

// public generated Deselected() [instance] :283
void Deselected::ctor_6()
{
    ctor_5();
}

// public generated Deselected New() [static] :283
Deselected* Deselected::New2()
{
    Deselected* obj1 = (Deselected*)uNew(Deselected_typeof());
    obj1->ctor_6();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Selection/0.42.4/$.uno
// -----------------------------------------------------------------------------------------

// private enum Selection.How :748
uEnumType* Selection__How_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Selection.Selection.How", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "API", 0LL,
        "Observable", 1LL);
    return type;
}

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Selection/0.42.4/$.uno
// -----------------------------------------------------------------------------------------

// public partial sealed class Selectable :11
// {
// static Selectable() :13
static void Selectable__cctor_1_fn(uType* __type)
{
    Selectable::ValueName_ = ::g::Uno::UX::Selector__New1(::STRINGS[0/*"Value"*/]);
    ::g::Fuse::Scripting::ScriptClass::Register(__type, uArray::Init< ::g::Fuse::Scripting::ScriptMember*>(::TYPES[1/*Fuse.Scripting.ScriptMember[]*/], 3, (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[2/*Fuse.Scripting.ScriptMethod<Fuse.Selection.Selectable>*/], ::STRINGS[1/*"add"*/], uDelegate::New(::TYPES[3/*Uno.Action<Fuse.Scripting.Context, Fuse.Selection.Selectable, object[]>*/], (void*)Selectable__add_fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[2/*Fuse.Scripting.ScriptMethod<Fuse.Selection.Selectable>*/], ::STRINGS[2/*"remove"*/], uDelegate::New(::TYPES[3/*Uno.Action<Fuse.Scripting.Context, Fuse.Selection.Selectable, object[]>*/], (void*)Selectable__remove_fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[2/*Fuse.Scripting.ScriptMethod<Fuse.Selection.Selectable>*/], ::STRINGS[3/*"toggle"*/], uDelegate::New(::TYPES[3/*Uno.Action<Fuse.Scripting.Context, Fuse.Selection.Selectable, object[]>*/], (void*)Selectable__toggle_fn), 2)));
}

static void Selectable_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[1] = uString::Const("add");
    ::STRINGS[2] = uString::Const("remove");
    ::STRINGS[3] = uString::Const("toggle");
    ::STRINGS[4] = uString::Const("add requires 0 arguments");
    ::STRINGS[5] = uString::Const("/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Selection/0.42.4/$.uno");
    ::STRINGS[6] = uString::Const("No selection, perhaps not rooted");
    ::STRINGS[7] = uString::Const("Add");
    ::STRINGS[8] = uString::Const("Unable to locate `Selection`");
    ::STRINGS[9] = uString::Const("OnRooted");
    ::STRINGS[10] = uString::Const("remove requires 0 arguments");
    ::STRINGS[11] = uString::Const("Remove");
    ::STRINGS[12] = uString::Const("toggle requires 0 arguments");
    ::STRINGS[13] = uString::Const("Toggle");
    ::TYPES[0] = ::g::Uno::Type_typeof();
    ::TYPES[1] = ::g::Fuse::Scripting::ScriptMember_typeof()->Array();
    ::TYPES[2] = ::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(type, NULL);
    ::TYPES[3] = ::g::Uno::Action3_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), type, uObject_typeof()->Array(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface3));
    type->SetFields(13,
        ::g::Fuse::Selection::Selection_typeof(), offsetof(::g::Fuse::Selection::Selectable, _selection), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Selection::Selectable, _value), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Selection::Selectable::ValueName_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("ValueName", 15));
    type->Reflection.SetFunctions(6,
        new uFunction("Add", NULL, (void*)Selectable__Add1_fn, 0, false, uVoid_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Selectable__New2_fn, 0, true, type, 0),
        new uFunction("Remove", NULL, (void*)Selectable__Remove1_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("Toggle", NULL, (void*)Selectable__Toggle_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_Value", NULL, (void*)Selectable__get_Value_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Value", NULL, (void*)Selectable__set_Value_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()));
}

::g::Fuse::Node_type* Selectable_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 16;
    options.InterfaceCount = 4;
    options.ObjectSize = sizeof(Selectable);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.Selection.Selectable", options);
    type->fp_build_ = Selectable_build;
    type->fp_ctor_ = (void*)Selectable__New2_fn;
    type->fp_cctor_ = Selectable__cctor_1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Selectable__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Selectable__OnUnrooted_fn;
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

// public generated Selectable() :11
void Selectable__ctor_3_fn(Selectable* __this)
{
    __this->ctor_3();
}

// private static void add(Fuse.Scripting.Context c, Fuse.Selection.Selectable s, object[] args) :26
void Selectable__add_fn(::g::Fuse::Scripting::Context* c, Selectable* s, uArray* args)
{
    Selectable::add(c, s, args);
}

// public void Add() :153
void Selectable__Add1_fn(Selectable* __this)
{
    __this->Add1();
}

// public generated Selectable New() :11
void Selectable__New2_fn(Selectable** __retval)
{
    *__retval = Selectable::New2();
}

// protected override sealed void OnRooted() :110
void Selectable__OnRooted_fn(Selectable* __this)
{
    uStackFrame __("Fuse.Selection.Selectable", "OnRooted()");
    ::g::Fuse::Node__OnRooted_fn(__this);
    __this->_selection = ::g::Fuse::Selection::Selection::TryFindSelection(__this->Parent());

    if (__this->_selection == NULL)
        ::g::Fuse::Diagnostics::UserError(::STRINGS[8/*"Unable to l...*/], __this, ::STRINGS[5/*"/Users/most...*/], 116, ::STRINGS[9/*"OnRooted"*/]);
}

// protected override sealed void OnUnrooted() :119
void Selectable__OnUnrooted_fn(Selectable* __this)
{
    ::g::Fuse::Node__OnUnrooted_fn(__this);
    __this->_selection = NULL;
}

// private static void remove(Fuse.Scripting.Context c, Fuse.Selection.Selectable s, object[] args) :44
void Selectable__remove_fn(::g::Fuse::Scripting::Context* c, Selectable* s, uArray* args)
{
    Selectable::remove(c, s, args);
}

// public void Remove() :167
void Selectable__Remove1_fn(Selectable* __this)
{
    __this->Remove1();
}

// private static void toggle(Fuse.Scripting.Context c, Fuse.Selection.Selectable s, object[] args) :60
void Selectable__toggle_fn(::g::Fuse::Scripting::Context* c, Selectable* s, uArray* args)
{
    Selectable::toggle(c, s, args);
}

// public void Toggle() :181
void Selectable__Toggle_fn(Selectable* __this)
{
    __this->Toggle();
}

// public string get_Value() :135
void Selectable__get_Value_fn(Selectable* __this, uString** __retval)
{
    *__retval = __this->Value();
}

// public void set_Value(string value) :136
void Selectable__set_Value_fn(Selectable* __this, uString* value)
{
    __this->Value(value);
}

::g::Uno::UX::Selector Selectable::ValueName_;

// public generated Selectable() [instance] :11
void Selectable::ctor_3()
{
    ctor_2();
}

// public void Add() [instance] :153
void Selectable::Add1()
{
    uStackFrame __("Fuse.Selection.Selectable", "Add()");

    if (_selection == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[6/*"No selectio...*/], this, ::STRINGS[5/*"/Users/most...*/], 157, ::STRINGS[7/*"Add"*/]);
        return;
    }

    uPtr(_selection)->Add1(this);
}

// public void Remove() [instance] :167
void Selectable::Remove1()
{
    uStackFrame __("Fuse.Selection.Selectable", "Remove()");

    if (_selection == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[6/*"No selectio...*/], this, ::STRINGS[5/*"/Users/most...*/], 171, ::STRINGS[11/*"Remove"*/]);
        return;
    }

    uPtr(_selection)->Remove1(this);
}

// public void Toggle() [instance] :181
void Selectable::Toggle()
{
    uStackFrame __("Fuse.Selection.Selectable", "Toggle()");

    if (_selection == NULL)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[6/*"No selectio...*/], this, ::STRINGS[5/*"/Users/most...*/], 185, ::STRINGS[13/*"Toggle"*/]);
        return;
    }

    uPtr(_selection)->Toggle(this);
}

// public string get_Value() [instance] :135
uString* Selectable::Value()
{
    return _value;
}

// public void set_Value(string value) [instance] :136
void Selectable::Value(uString* value)
{
    uStackFrame __("Fuse.Selection.Selectable", "set_Value(string)");

    if (::g::Uno::String::op_Equality(_value, value))
        return;

    uString* old = _value;
    _value = value;

    if (_selection != NULL)
        uPtr(_selection)->ModifyValue(old, _value);

    OnPropertyChanged(Selectable::ValueName());
}

// private static void add(Fuse.Scripting.Context c, Fuse.Selection.Selectable s, object[] args) [static] :26
void Selectable::add(::g::Fuse::Scripting::Context* c, Selectable* s, uArray* args)
{
    uStackFrame __("Fuse.Selection.Selectable", "add(Fuse.Scripting.Context,Fuse.Selection.Selectable,object[])");
    Selectable_typeof()->Init();

    if (uPtr(args)->Length() != 0)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[4/*"add require...*/], s, ::STRINGS[5/*"/Users/most...*/], 30, ::STRINGS[1/*"add"*/]);
        return;
    }

    uPtr(s)->Add1();
}

// public generated Selectable New() [static] :11
Selectable* Selectable::New2()
{
    Selectable* obj1 = (Selectable*)uNew(Selectable_typeof());
    obj1->ctor_3();
    return obj1;
}

// private static void remove(Fuse.Scripting.Context c, Fuse.Selection.Selectable s, object[] args) [static] :44
void Selectable::remove(::g::Fuse::Scripting::Context* c, Selectable* s, uArray* args)
{
    uStackFrame __("Fuse.Selection.Selectable", "remove(Fuse.Scripting.Context,Fuse.Selection.Selectable,object[])");
    Selectable_typeof()->Init();

    if (uPtr(args)->Length() != 0)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[10/*"remove requ...*/], s, ::STRINGS[5/*"/Users/most...*/], 48, ::STRINGS[2/*"remove"*/]);
        return;
    }

    uPtr(s)->Remove1();
}

// private static void toggle(Fuse.Scripting.Context c, Fuse.Selection.Selectable s, object[] args) [static] :60
void Selectable::toggle(::g::Fuse::Scripting::Context* c, Selectable* s, uArray* args)
{
    uStackFrame __("Fuse.Selection.Selectable", "toggle(Fuse.Scripting.Context,Fuse.Selection.Selectable,object[])");
    Selectable_typeof()->Init();

    if (uPtr(args)->Length() != 0)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[12/*"toggle requ...*/], s, ::STRINGS[5/*"/Users/most...*/], 64, ::STRINGS[3/*"toggle"*/]);
        return;
    }

    uPtr(s)->Toggle();
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Selection/0.42.4/$.uno
// -----------------------------------------------------------------------------------------

// public sealed class Selected :272
// {
static void Selected_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Selection::SelectionEvent_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Selection::SelectionEvent_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Selection::SelectionEvent_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Selection::SelectionEvent_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(::g::Fuse::Selection::SelectionEvent_type, interface4));
    type->SetFields(32);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Selected__New2_fn, 0, true, type, 0));
}

::g::Fuse::Selection::SelectionEvent_type* Selected_typeof()
{
    static uSStrong< ::g::Fuse::Selection::SelectionEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Selection::SelectionEvent_typeof();
    options.FieldCount = 32;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(Selected);
    options.TypeSize = sizeof(::g::Fuse::Selection::SelectionEvent_type);
    type = (::g::Fuse::Selection::SelectionEvent_type*)uClassType::New("Fuse.Selection.Selected", options);
    type->fp_build_ = Selected_build;
    type->fp_ctor_ = (void*)Selected__New2_fn;
    type->fp_IsTriggered = (void(*)(::g::Fuse::Selection::SelectionEvent*, bool*, bool*))Selected__IsTriggered_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnStable_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
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

// public generated Selected() :272
void Selected__ctor_6_fn(Selected* __this)
{
    __this->ctor_6();
}

// protected override sealed bool IsTriggered(bool on) :274
void Selected__IsTriggered_fn(Selected* __this, bool* on, bool* __retval)
{
    bool on_ = *on;
    return *__retval = on_, void();
}

// public generated Selected New() :272
void Selected__New2_fn(Selected** __retval)
{
    *__retval = Selected::New2();
}

// public generated Selected() [instance] :272
void Selected::ctor_6()
{
    ctor_5();
}

// public generated Selected New() [static] :272
Selected* Selected::New2()
{
    Selected* obj1 = (Selected*)uNew(Selected_typeof());
    obj1->ctor_6();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Selection/0.42.4/$.uno
// -----------------------------------------------------------------------------------------

// public partial sealed class Selection :302
// {
// static Selection() :304
static void Selection__cctor_1_fn(uType* __type)
{
    Selection::ValueName_ = ::g::Uno::UX::Selector__New1(::STRINGS[0/*"Value"*/]);
    ::g::Fuse::Scripting::ScriptClass::Register(__type, uArray::Init< ::g::Fuse::Scripting::ScriptMember*>(::TYPES[1/*Fuse.Scripting.ScriptMember[]*/], 6, (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[4/*Fuse.Scripting.ScriptMethod<Fuse.Selection.Selection>*/], ::STRINGS[14/*"clear"*/], uDelegate::New(::TYPES[5/*Uno.Action<Fuse.Scripting.Context, Fuse.Selection.Selection, object[]>*/], (void*)Selection__clear_fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[4/*Fuse.Scripting.ScriptMethod<Fuse.Selection.Selection>*/], ::STRINGS[1/*"add"*/], uDelegate::New(::TYPES[5/*Uno.Action<Fuse.Scripting.Context, Fuse.Selection.Selection, object[]>*/], (void*)Selection__add_fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[4/*Fuse.Scripting.ScriptMethod<Fuse.Selection.Selection>*/], ::STRINGS[2/*"remove"*/], uDelegate::New(::TYPES[5/*Uno.Action<Fuse.Scripting.Context, Fuse.Selection.Selection, object[]>*/], (void*)Selection__remove_fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[4/*Fuse.Scripting.ScriptMethod<Fuse.Selection.Selection>*/], ::STRINGS[15/*"forceAdd"*/], uDelegate::New(::TYPES[5/*Uno.Action<Fuse.Scripting.Context, Fuse.Selection.Selection, object[]>*/], (void*)Selection__forceAdd_fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[4/*Fuse.Scripting.ScriptMethod<Fuse.Selection.Selection>*/], ::STRINGS[16/*"forceRemove"*/], uDelegate::New(::TYPES[5/*Uno.Action<Fuse.Scripting.Context, Fuse.Selection.Selection, object[]>*/], (void*)Selection__forceRemove_fn), 2), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::TYPES[4/*Fuse.Scripting.ScriptMethod<Fuse.Selection.Selection>*/], ::STRINGS[3/*"toggle"*/], uDelegate::New(::TYPES[5/*Uno.Action<Fuse.Scripting.Context, Fuse.Selection.Selection, object[]>*/], (void*)Selection__toggle_fn), 2)));
}

static void Selection_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[14] = uString::Const("clear");
    ::STRINGS[1] = uString::Const("add");
    ::STRINGS[2] = uString::Const("remove");
    ::STRINGS[15] = uString::Const("forceAdd");
    ::STRINGS[16] = uString::Const("forceRemove");
    ::STRINGS[3] = uString::Const("toggle");
    ::STRINGS[17] = uString::Const("add requires 1 argument, the value of the item");
    ::STRINGS[5] = uString::Const("/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Selection/0.42.4/$.uno");
    ::STRINGS[18] = uString::Const("clear requires 0 arguments");
    ::STRINGS[19] = uString::Const("forceAdd requires 1 argument, the value of the item");
    ::STRINGS[20] = uString::Const("forceRemove requires 1 argument, the value of the item");
    ::STRINGS[21] = uString::Const("Fuse.Scripting.IObserver.OnFailed");
    ::STRINGS[22] = uString::Const("removing invalid observable item");
    ::STRINGS[23] = uString::Const("Fuse.Scripting.IObserver.OnInsertAt");
    ::STRINGS[24] = uString::Const("Fuse.Scripting.IObserver.OnNewAt");
    ::STRINGS[25] = uString::Const("Fuse.Scripting.IObserver.OnRemoveAt");
    ::STRINGS[26] = uString::Const("remove requires 1 argument, the value of the item");
    ::STRINGS[27] = uString::Const("toggle requires 1 argument, the value of them item");
    ::STRINGS[28] = uString::Const("MaxCount must >= 1");
    ::STRINGS[29] = uString::Const("set_MaxCount");
    ::STRINGS[30] = uString::Const("");
    ::STRINGS[31] = uString::Const("`Values` must be an Observable");
    ::STRINGS[32] = uString::Const("set_Values");
    ::TYPES[0] = ::g::Uno::Type_typeof();
    ::TYPES[1] = ::g::Fuse::Scripting::ScriptMember_typeof()->Array();
    ::TYPES[4] = ::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(type, NULL);
    ::TYPES[5] = ::g::Uno::Action3_typeof()->MakeType(::g::Fuse::Scripting::Context_typeof(), type, uObject_typeof()->Array(), NULL);
    ::TYPES[6] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[7] = ::g::Fuse::Scripting::Marshal_typeof()->MakeMethod(0/*ToType<string>*/, ::g::Uno::String_typeof(), NULL);
    ::TYPES[8] = ::g::Fuse::Scripting::Observable__Subscription_typeof()->MakeMethod(0/*ReplaceAllExclusive<string>*/, ::g::Uno::String_typeof(), NULL);
    ::TYPES[9] = ::g::Fuse::Visual_typeof();
    ::TYPES[10] = ::TYPES[9/*Fuse.Visual*/]->MakeMethod(3/*FirstChild<Fuse.Selection.Selectable>*/, ::g::Fuse::Selection::Selectable_typeof(), NULL);
    ::TYPES[11] = ::TYPES[9/*Fuse.Visual*/]->MakeMethod(3/*FirstChild<Fuse.Selection.Selection>*/, type, NULL);
    ::TYPES[12] = ::g::Fuse::Scripting::Observable_typeof();
    ::TYPES[13] = ::g::Uno::EventHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Selection_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(Selection_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Selection_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(Selection_type, interface3),
        ::g::Fuse::Scripting::IObserver_typeof(), offsetof(Selection_type, interface4));
    type->SetFields(13,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Selection::Selection, _hasMaxCount), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Selection::Selection, _maxCount), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Selection::Selection, _minCount), 0,
        ::TYPES[12/*Fuse.Scripting.Observable*/], offsetof(::g::Fuse::Selection::Selection, _observableValues), 0,
        ::g::Fuse::Selection::SelectionReplace_typeof(), offsetof(::g::Fuse::Selection::Selection, _replace), 0,
        ::g::Fuse::Scripting::Observable__Subscription_typeof(), offsetof(::g::Fuse::Selection::Selection, _subscription), 0,
        ::TYPES[6/*Uno.Collections.List<string>*/], offsetof(::g::Fuse::Selection::Selection, _values), 0,
        ::TYPES[13/*Uno.EventHandler*/], offsetof(::g::Fuse::Selection::Selection, SelectionChanged1), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Selection::Selection::ValueName_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("ValueName", 21));
    type->Reflection.SetFunctions(23,
        new uFunction("Add", NULL, (void*)Selection__Add1_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Selection::Selectable_typeof()),
        new uFunction("Clear", NULL, (void*)Selection__Clear_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("ForceAdd", NULL, (void*)Selection__ForceAdd_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Selection::Selectable_typeof()),
        new uFunction("ForceRemove", NULL, (void*)Selection__ForceRemove_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Selection::Selectable_typeof()),
        new uFunction("get_HasMaxCount", NULL, (void*)Selection__get_HasMaxCount_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("IsSelected", NULL, (void*)Selection__IsSelected_fn, 0, false, ::g::Uno::Bool_typeof(), 1, ::g::Fuse::Selection::Selectable_typeof()),
        new uFunction("get_MaxCount", NULL, (void*)Selection__get_MaxCount_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_MaxCount", NULL, (void*)Selection__set_MaxCount_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("get_MinCount", NULL, (void*)Selection__get_MinCount_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_MinCount", NULL, (void*)Selection__set_MinCount_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction(".ctor", NULL, (void*)Selection__New2_fn, 0, true, type, 0),
        new uFunction("Remove", NULL, (void*)Selection__Remove1_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Selection::Selectable_typeof()),
        new uFunction("get_Replace", NULL, (void*)Selection__get_Replace_fn, 0, false, ::g::Fuse::Selection::SelectionReplace_typeof(), 0),
        new uFunction("set_Replace", NULL, (void*)Selection__set_Replace_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Selection::SelectionReplace_typeof()),
        new uFunction("get_SelectedCount", NULL, (void*)Selection__get_SelectedCount_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("add_SelectionChanged", NULL, (void*)Selection__add_SelectionChanged_fn, 0, false, uVoid_typeof(), 1, ::TYPES[13/*Uno.EventHandler*/]),
        new uFunction("remove_SelectionChanged", NULL, (void*)Selection__remove_SelectionChanged_fn, 0, false, uVoid_typeof(), 1, ::TYPES[13/*Uno.EventHandler*/]),
        new uFunction("SetValue", NULL, (void*)Selection__SetValue_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("Toggle", NULL, (void*)Selection__Toggle_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Selection::Selectable_typeof()),
        new uFunction("get_Value", NULL, (void*)Selection__get_Value_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Value", NULL, (void*)Selection__set_Value_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_Values", NULL, (void*)Selection__get_Values_fn, 0, false, uObject_typeof(), 0),
        new uFunction("set_Values", NULL, (void*)Selection__set_Values_fn, 0, false, uVoid_typeof(), 1, uObject_typeof()));
}

Selection_type* Selection_typeof()
{
    static uSStrong<Selection_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 22;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(Selection);
    options.TypeSize = sizeof(Selection_type);
    type = (Selection_type*)uClassType::New("Fuse.Selection.Selection", options);
    type->fp_build_ = Selection_build;
    type->fp_ctor_ = (void*)Selection__New2_fn;
    type->fp_cctor_ = Selection__cctor_1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Selection__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Selection__OnUnrooted_fn;
    type->interface4.fp_OnClear = (void(*)(uObject*))Selection__FuseScriptingIObserverOnClear_fn;
    type->interface4.fp_OnNewAll = (void(*)(uObject*, ::g::Fuse::Scripting::ListMirror*))Selection__FuseScriptingIObserverOnNewAll_fn;
    type->interface4.fp_OnNewAt = (void(*)(uObject*, int*, uObject*))Selection__FuseScriptingIObserverOnNewAt_fn;
    type->interface4.fp_OnSet = (void(*)(uObject*, uObject*))Selection__FuseScriptingIObserverOnSet_fn;
    type->interface4.fp_OnAdd = (void(*)(uObject*, uObject*))Selection__FuseScriptingIObserverOnAdd_fn;
    type->interface4.fp_OnRemoveAt = (void(*)(uObject*, int*))Selection__FuseScriptingIObserverOnRemoveAt_fn;
    type->interface4.fp_OnInsertAt = (void(*)(uObject*, int*, uObject*))Selection__FuseScriptingIObserverOnInsertAt_fn;
    type->interface4.fp_OnFailed = (void(*)(uObject*, uString*))Selection__FuseScriptingIObserverOnFailed_fn;
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

// public generated Selection() :302
void Selection__ctor_3_fn(Selection* __this)
{
    __this->ctor_3();
}

// private static void add(Fuse.Scripting.Context c, Fuse.Selection.Selection s, object[] args) :338
void Selection__add_fn(::g::Fuse::Scripting::Context* c, Selection* s, uArray* args)
{
    Selection::add(c, s, args);
}

// public void Add(Fuse.Selection.Selectable b) :607
void Selection__Add1_fn(Selection* __this, ::g::Fuse::Selection::Selectable* b)
{
    __this->Add1(b);
}

// private void Add(string value) :723
void Selection__Add2_fn(Selection* __this, uString* value)
{
    __this->Add2(value);
}

// private static void clear(Fuse.Scripting.Context c, Fuse.Selection.Selection s, object[] args) :320
void Selection__clear_fn(::g::Fuse::Scripting::Context* c, Selection* s, uArray* args)
{
    Selection::clear(c, s, args);
}

// public void Clear() :627
void Selection__Clear_fn(Selection* __this)
{
    __this->Clear();
}

// private void ClearSubscription() :818
void Selection__ClearSubscription_fn(Selection* __this)
{
    __this->ClearSubscription();
}

// private static void forceAdd(Fuse.Scripting.Context c, Fuse.Selection.Selection s, object[] args) :370
void Selection__forceAdd_fn(::g::Fuse::Scripting::Context* c, Selection* s, uArray* args)
{
    Selection::forceAdd(c, s, args);
}

// public void ForceAdd(Fuse.Selection.Selectable b) :636
void Selection__ForceAdd_fn(Selection* __this, ::g::Fuse::Selection::Selectable* b)
{
    __this->ForceAdd(b);
}

// private void ForceAdd(string value) :641
void Selection__ForceAdd1_fn(Selection* __this, uString* value)
{
    __this->ForceAdd1(value);
}

// private static void forceRemove(Fuse.Scripting.Context c, Fuse.Selection.Selection s, object[] args) :384
void Selection__forceRemove_fn(::g::Fuse::Scripting::Context* c, Selection* s, uArray* args)
{
    Selection::forceRemove(c, s, args);
}

// public void ForceRemove(Fuse.Selection.Selectable b) :653
void Selection__ForceRemove_fn(Selection* __this, ::g::Fuse::Selection::Selectable* b)
{
    __this->ForceRemove(b);
}

// private void ForceRemove(string value) :658
void Selection__ForceRemove1_fn(Selection* __this, uString* value)
{
    __this->ForceRemove1(value);
}

// private void Fuse.Scripting.IObserver.OnAdd(object addedValue) :859
void Selection__FuseScriptingIObserverOnAdd_fn(Selection* __this, uObject* addedValue)
{
    uStackFrame __("Fuse.Selection.Selection", "Fuse.Scripting.IObserver.OnAdd(object)");
    uString* ret9;
    ::g::Uno::Collections::List__Add_fn(uPtr(__this->_values), (::g::Fuse::Scripting::Marshal__ToType_fn(::TYPES[7/*Fuse.Scripting.Marshal.ToType<string>*/], addedValue, &ret9), ret9));
    __this->OnSelectionChanged(1);
}

// private void Fuse.Scripting.IObserver.OnClear() :827
void Selection__FuseScriptingIObserverOnClear_fn(Selection* __this)
{
    uStackFrame __("Fuse.Selection.Selection", "Fuse.Scripting.IObserver.OnClear()");
    uPtr(__this->_values)->Clear();
    __this->OnSelectionChanged(1);
}

// private void Fuse.Scripting.IObserver.OnFailed(string message) :887
void Selection__FuseScriptingIObserverOnFailed_fn(Selection* __this, uString* message)
{
    ::g::Fuse::Diagnostics::InternalError(message, __this, ::STRINGS[5/*"/Users/most...*/], 889, ::STRINGS[21/*"Fuse.Script...*/]);
}

// private void Fuse.Scripting.IObserver.OnInsertAt(int index, object value) :876
void Selection__FuseScriptingIObserverOnInsertAt_fn(Selection* __this, int* index, uObject* value)
{
    uStackFrame __("Fuse.Selection.Selection", "Fuse.Scripting.IObserver.OnInsertAt(int,object)");
    int index_ = *index;
    uString* ret10;

    if ((index_ < 0) || (index_ >= uPtr(__this->_values)->Count()))
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[22/*"removing in...*/], __this, ::STRINGS[5/*"/Users/most...*/], 880, ::STRINGS[23/*"Fuse.Script...*/]);
        return;
    }

    ::g::Uno::Collections::List__Insert_fn(uPtr(__this->_values), uCRef<int>(index_), (::g::Fuse::Scripting::Marshal__ToType_fn(::TYPES[7/*Fuse.Scripting.Marshal.ToType<string>*/], value, &ret10), ret10));
    __this->OnSelectionChanged(1);
}

// private void Fuse.Scripting.IObserver.OnNewAll(Fuse.Scripting.ListMirror values) :833
void Selection__FuseScriptingIObserverOnNewAll_fn(Selection* __this, ::g::Fuse::Scripting::ListMirror* values)
{
    uStackFrame __("Fuse.Selection.Selection", "Fuse.Scripting.IObserver.OnNewAll(Fuse.Scripting.ListMirror)");
    uString* ret11;
    uPtr(__this->_values)->Clear();

    for (int i = 0; i < uPtr(values)->Length(); ++i)
        ::g::Uno::Collections::List__Add_fn(uPtr(__this->_values), (::g::Fuse::Scripting::Marshal__ToType_fn(::TYPES[7/*Fuse.Scripting.Marshal.ToType<string>*/], uPtr(values)->Item(i), &ret11), ret11));

    __this->OnSelectionChanged(1);
}

// private void Fuse.Scripting.IObserver.OnNewAt(int index, object newValue) :841
void Selection__FuseScriptingIObserverOnNewAt_fn(Selection* __this, int* index, uObject* newValue)
{
    uStackFrame __("Fuse.Selection.Selection", "Fuse.Scripting.IObserver.OnNewAt(int,object)");
    int index_ = *index;
    uString* ret12;

    if ((index_ < 0) || (index_ >= uPtr(__this->_values)->Count()))
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[22/*"removing in...*/], __this, ::STRINGS[5/*"/Users/most...*/], 845, ::STRINGS[24/*"Fuse.Script...*/]);
        return;
    }

    ::g::Uno::Collections::List__set_Item_fn(uPtr(__this->_values), uCRef<int>(index_), (::g::Fuse::Scripting::Marshal__ToType_fn(::TYPES[7/*Fuse.Scripting.Marshal.ToType<string>*/], newValue, &ret12), ret12));
    __this->OnSelectionChanged(1);
}

// private void Fuse.Scripting.IObserver.OnRemoveAt(int index) :865
void Selection__FuseScriptingIObserverOnRemoveAt_fn(Selection* __this, int* index)
{
    uStackFrame __("Fuse.Selection.Selection", "Fuse.Scripting.IObserver.OnRemoveAt(int)");
    int index_ = *index;

    if ((index_ < 0) || (index_ >= uPtr(__this->_values)->Count()))
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[22/*"removing in...*/], __this, ::STRINGS[5/*"/Users/most...*/], 869, ::STRINGS[25/*"Fuse.Script...*/]);
        return;
    }

    uPtr(__this->_values)->RemoveAt(index_);
    __this->OnSelectionChanged(1);
}

// private void Fuse.Scripting.IObserver.OnSet(object newValue) :852
void Selection__FuseScriptingIObserverOnSet_fn(Selection* __this, uObject* newValue)
{
    uStackFrame __("Fuse.Selection.Selection", "Fuse.Scripting.IObserver.OnSet(object)");
    uString* ret13;
    uPtr(__this->_values)->Clear();
    ::g::Uno::Collections::List__Add_fn(uPtr(__this->_values), (::g::Fuse::Scripting::Marshal__ToType_fn(::TYPES[7/*Fuse.Scripting.Marshal.ToType<string>*/], newValue, &ret13), ret13));
    __this->OnSelectionChanged(1);
}

// public bool get_HasMaxCount() :567
void Selection__get_HasMaxCount_fn(Selection* __this, bool* __retval)
{
    *__retval = __this->HasMaxCount();
}

// public bool IsSelected(Fuse.Selection.Selectable b) :575
void Selection__IsSelected_fn(Selection* __this, ::g::Fuse::Selection::Selectable* b, bool* __retval)
{
    *__retval = __this->IsSelected(b);
}

// public int get_MaxCount() :545
void Selection__get_MaxCount_fn(Selection* __this, int* __retval)
{
    *__retval = __this->MaxCount();
}

// public void set_MaxCount(int value) :546
void Selection__set_MaxCount_fn(Selection* __this, int* value)
{
    __this->MaxCount(*value);
}

// public int get_MinCount() :528
void Selection__get_MinCount_fn(Selection* __this, int* __retval)
{
    *__retval = __this->MinCount();
}

// public void set_MinCount(int value) :529
void Selection__set_MinCount_fn(Selection* __this, int* value)
{
    __this->MinCount(*value);
}

// internal void ModifyValue(string old, string nw) :769
void Selection__ModifyValue_fn(Selection* __this, uString* old, uString* nw)
{
    __this->ModifyValue(old, nw);
}

// public generated Selection New() :302
void Selection__New2_fn(Selection** __retval)
{
    *__retval = Selection::New2();
}

// private void OnObservableValuesChanged() :808
void Selection__OnObservableValuesChanged_fn(Selection* __this)
{
    __this->OnObservableValuesChanged();
}

// protected override sealed void OnRooted() :500
void Selection__OnRooted_fn(Selection* __this)
{
    uStackFrame __("Fuse.Selection.Selection", "OnRooted()");
    ::g::Fuse::Node__OnRooted_fn(__this);
    __this->OnObservableValuesChanged();
}

// private void OnSelectionChanged(Fuse.Selection.Selection.How how) :754
void Selection__OnSelectionChanged_fn(Selection* __this, int* how)
{
    __this->OnSelectionChanged(*how);
}

// protected override sealed void OnUnrooted() :506
void Selection__OnUnrooted_fn(Selection* __this)
{
    uStackFrame __("Fuse.Selection.Selection", "OnUnrooted()");
    __this->ClearSubscription();
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// private static void remove(Fuse.Scripting.Context c, Fuse.Selection.Selection s, object[] args) :356
void Selection__remove_fn(::g::Fuse::Scripting::Context* c, Selection* s, uArray* args)
{
    Selection::remove(c, s, args);
}

// public void Remove(Fuse.Selection.Selectable b) :617
void Selection__Remove1_fn(Selection* __this, ::g::Fuse::Selection::Selectable* b)
{
    __this->Remove1(b);
}

// private void Remove(string value) :711
void Selection__Remove2_fn(Selection* __this, uString* value)
{
    __this->Remove2(value);
}

// public Fuse.Selection.SelectionReplace get_Replace() :518
void Selection__get_Replace_fn(Selection* __this, int* __retval)
{
    *__retval = __this->Replace();
}

// public void set_Replace(Fuse.Selection.SelectionReplace value) :519
void Selection__set_Replace_fn(Selection* __this, int* value)
{
    __this->Replace(*value);
}

// public int get_SelectedCount() :672
void Selection__get_SelectedCount_fn(Selection* __this, int* __retval)
{
    *__retval = __this->SelectedCount();
}

// public generated void add_SelectionChanged(Uno.EventHandler value) :746
void Selection__add_SelectionChanged_fn(Selection* __this, uDelegate* value)
{
    __this->add_SelectionChanged(value);
}

// public generated void remove_SelectionChanged(Uno.EventHandler value) :746
void Selection__remove_SelectionChanged_fn(Selection* __this, uDelegate* value)
{
    __this->remove_SelectionChanged(value);
}

// public void SetValue(string value, Uno.UX.IPropertyListener origin) :693
void Selection__SetValue_fn(Selection* __this, uString* value, uObject* origin)
{
    __this->SetValue(value, origin);
}

// private static void toggle(Fuse.Scripting.Context c, Fuse.Selection.Selection s, object[] args) :400
void Selection__toggle_fn(::g::Fuse::Scripting::Context* c, Selection* s, uArray* args)
{
    Selection::toggle(c, s, args);
}

// public void Toggle(Fuse.Selection.Selectable b) :589
void Selection__Toggle_fn(Selection* __this, ::g::Fuse::Selection::Selectable* b)
{
    __this->Toggle(b);
}

// private void Toggle(string value) :594
void Selection__Toggle1_fn(Selection* __this, uString* value)
{
    __this->Toggle1(value);
}

// internal static bool TryFindSelectable(Fuse.Node n, Fuse.Selection.Selectable& selectable, Fuse.Selection.Selection& selection) :473
void Selection__TryFindSelectable_fn(::g::Fuse::Node* n, ::g::Fuse::Selection::Selectable** selectable, Selection** selection, bool* __retval)
{
    *__retval = Selection::TryFindSelectable(n, selectable, selection);
}

// internal static Fuse.Selection.Selection TryFindSelection(Fuse.Node v) :456
void Selection__TryFindSelection_fn(::g::Fuse::Node* v, Selection** __retval)
{
    *__retval = Selection::TryFindSelection(v);
}

// public string get_Value() :687
void Selection__get_Value_fn(Selection* __this, uString** __retval)
{
    *__retval = __this->Value();
}

// public void set_Value(string value) :691
void Selection__set_Value_fn(Selection* __this, uString* value)
{
    __this->Value(value);
}

// public object get_Values() :790
void Selection__get_Values_fn(Selection* __this, uObject** __retval)
{
    *__retval = __this->Values();
}

// public void set_Values(object value) :791
void Selection__set_Values_fn(Selection* __this, uObject* value)
{
    __this->Values(value);
}

::g::Uno::UX::Selector Selection::ValueName_;

// public generated Selection() [instance] :302
void Selection::ctor_3()
{
    _values = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[6/*Uno.Collections.List<string>*/]));
    ctor_2();
}

// public void Add(Fuse.Selection.Selectable b) [instance] :607
void Selection::Add1(::g::Fuse::Selection::Selectable* b)
{
    uStackFrame __("Fuse.Selection.Selection", "Add(Fuse.Selection.Selectable)");
    Add2(uPtr(b)->Value());
}

// private void Add(string value) [instance] :723
void Selection::Add2(uString* value)
{
    uStackFrame __("Fuse.Selection.Selection", "Add(string)");
    bool ret3;

    if ((::g::Uno::Collections::List__Contains_fn(uPtr(_values), value, &ret3), ret3))
        return;

    if (HasMaxCount() && ((uPtr(_values)->Count() + 1) > MaxCount()))
    {
        if ((Replace() == 2) || (MaxCount() < 1))
            return;

        if (Replace() == 0)
            uPtr(_values)->RemoveAt(0);
        else
            uPtr(_values)->RemoveAt(uPtr(_values)->Count() - 1);
    }

    ::g::Uno::Collections::List__Add_fn(uPtr(_values), value);
    OnSelectionChanged(0);
}

// public void Clear() [instance] :627
void Selection::Clear()
{
    uStackFrame __("Fuse.Selection.Selection", "Clear()");
    uPtr(_values)->Clear();
    OnSelectionChanged(0);
}

// private void ClearSubscription() [instance] :818
void Selection::ClearSubscription()
{
    uStackFrame __("Fuse.Selection.Selection", "ClearSubscription()");

    if (_subscription != NULL)
    {
        uPtr(_subscription)->Dispose();
        _subscription = NULL;
    }
}

// public void ForceAdd(Fuse.Selection.Selectable b) [instance] :636
void Selection::ForceAdd(::g::Fuse::Selection::Selectable* b)
{
    uStackFrame __("Fuse.Selection.Selection", "ForceAdd(Fuse.Selection.Selectable)");
    ForceAdd1(uPtr(b)->Value());
}

// private void ForceAdd(string value) [instance] :641
void Selection::ForceAdd1(uString* value)
{
    uStackFrame __("Fuse.Selection.Selection", "ForceAdd(string)");
    bool ret5;

    if (!(::g::Uno::Collections::List__Contains_fn(uPtr(_values), value, &ret5), ret5))
    {
        ::g::Uno::Collections::List__Add_fn(uPtr(_values), value);
        OnSelectionChanged(0);
    }
}

// public void ForceRemove(Fuse.Selection.Selectable b) [instance] :653
void Selection::ForceRemove(::g::Fuse::Selection::Selectable* b)
{
    uStackFrame __("Fuse.Selection.Selection", "ForceRemove(Fuse.Selection.Selectable)");
    ForceRemove1(uPtr(b)->Value());
}

// private void ForceRemove(string value) [instance] :658
void Selection::ForceRemove1(uString* value)
{
    uStackFrame __("Fuse.Selection.Selection", "ForceRemove(string)");
    bool ret7;
    bool ret8;

    if ((::g::Uno::Collections::List__Contains_fn(uPtr(_values), value, &ret7), ret7))
    {
        ::g::Uno::Collections::List__Remove_fn(uPtr(_values), value, &ret8);
        OnSelectionChanged(0);
    }
}

// public bool get_HasMaxCount() [instance] :567
bool Selection::HasMaxCount()
{
    return _hasMaxCount;
}

// public bool IsSelected(Fuse.Selection.Selectable b) [instance] :575
bool Selection::IsSelected(::g::Fuse::Selection::Selectable* b)
{
    uStackFrame __("Fuse.Selection.Selection", "IsSelected(Fuse.Selection.Selectable)");
    bool ret14;

    if (::g::Uno::String::IsNullOrEmpty(uPtr(b)->Value()))
        return false;

    return (::g::Uno::Collections::List__Contains_fn(uPtr(_values), uPtr(b)->Value(), &ret14), ret14);
}

// public int get_MaxCount() [instance] :545
int Selection::MaxCount()
{
    return _maxCount;
}

// public void set_MaxCount(int value) [instance] :546
void Selection::MaxCount(int value)
{
    if (_hasMaxCount && (value == _maxCount))
        return;

    if (value < 1)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[28/*"MaxCount mu...*/], this, ::STRINGS[5/*"/Users/most...*/], 553, ::STRINGS[29/*"set_MaxCount"*/]);
        return;
    }

    _hasMaxCount = true;
    _maxCount = value;
}

// public int get_MinCount() [instance] :528
int Selection::MinCount()
{
    return _minCount;
}

// public void set_MinCount(int value) [instance] :529
void Selection::MinCount(int value)
{
    if (value == _minCount)
        return;

    _minCount = value;
}

// internal void ModifyValue(string old, string nw) [instance] :769
void Selection::ModifyValue(uString* old, uString* nw)
{
    uStackFrame __("Fuse.Selection.Selection", "ModifyValue(string,string)");
    bool ret15;
    bool ret16;

    if (::g::Uno::String::IsNullOrEmpty(old) || ::g::Uno::String::IsNullOrEmpty(nw))
        return;

    if ((::g::Uno::Collections::List__Contains_fn(uPtr(_values), old, &ret15), ret15))
    {
        ::g::Uno::Collections::List__Remove_fn(uPtr(_values), old, &ret16);
        ::g::Uno::Collections::List__Add_fn(uPtr(_values), nw);
        OnSelectionChanged(0);
    }
}

// private void OnObservableValuesChanged() [instance] :808
void Selection::OnObservableValuesChanged()
{
    uStackFrame __("Fuse.Selection.Selection", "OnObservableValuesChanged()");
    ClearSubscription();

    if (_observableValues == NULL)
        return;

    _subscription = uPtr(_observableValues)->Subscribe((uObject*)this);
}

// private void OnSelectionChanged(Fuse.Selection.Selection.How how) [instance] :754
void Selection::OnSelectionChanged(int how)
{
    uStackFrame __("Fuse.Selection.Selection", "OnSelectionChanged(Fuse.Selection.Selection.How)");
    OnPropertyChanged(Selection::ValueName());

    if (::g::Uno::Delegate::op_Inequality(SelectionChanged1, NULL))
        uPtr(SelectionChanged1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());

    if ((how == 0) && (_subscription != NULL))
        uPtr(_subscription)->ReplaceAllExclusive(::TYPES[8/*Fuse.Scripting.Observable.Subscription.ReplaceAllExclusive<string>*/], (uArray*)uPtr(_values)->ToArray());
}

// public void Remove(Fuse.Selection.Selectable b) [instance] :617
void Selection::Remove1(::g::Fuse::Selection::Selectable* b)
{
    uStackFrame __("Fuse.Selection.Selection", "Remove(Fuse.Selection.Selectable)");
    Remove2(uPtr(b)->Value());
}

// private void Remove(string value) [instance] :711
void Selection::Remove2(uString* value)
{
    uStackFrame __("Fuse.Selection.Selection", "Remove(string)");
    bool ret18;
    bool ret19;

    if (!(::g::Uno::Collections::List__Contains_fn(uPtr(_values), value, &ret18), ret18))
        return;

    if ((uPtr(_values)->Count() - 1) < MinCount())
        return;

    ::g::Uno::Collections::List__Remove_fn(uPtr(_values), value, &ret19);
    OnSelectionChanged(0);
}

// public Fuse.Selection.SelectionReplace get_Replace() [instance] :518
int Selection::Replace()
{
    return _replace;
}

// public void set_Replace(Fuse.Selection.SelectionReplace value) [instance] :519
void Selection::Replace(int value)
{
    _replace = value;
}

// public int get_SelectedCount() [instance] :672
int Selection::SelectedCount()
{
    uStackFrame __("Fuse.Selection.Selection", "get_SelectedCount()");
    return uPtr(_values)->Count();
}

// public generated void add_SelectionChanged(Uno.EventHandler value) [instance] :746
void Selection::add_SelectionChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Selection.Selection", "add_SelectionChanged(Uno.EventHandler)");
    SelectionChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(SelectionChanged1, value), ::TYPES[13/*Uno.EventHandler*/]);
}

// public generated void remove_SelectionChanged(Uno.EventHandler value) [instance] :746
void Selection::remove_SelectionChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Selection.Selection", "remove_SelectionChanged(Uno.EventHandler)");
    SelectionChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(SelectionChanged1, value), ::TYPES[13/*Uno.EventHandler*/]);
}

// public void SetValue(string value, Uno.UX.IPropertyListener origin) [instance] :693
void Selection::SetValue(uString* value, uObject* origin)
{
    uStackFrame __("Fuse.Selection.Selection", "SetValue(string,Uno.UX.IPropertyListener)");
    uString* ret20;
    uString* ret21;

    if (::g::Uno::String::op_Equality(value, Value()))
        return;

    bool has = false;

    for (int i = uPtr(_values)->Count() - 1; i >= 0; i--)
        if (::g::Uno::String::op_Inequality((::g::Uno::Collections::List__get_Item_fn(uPtr(_values), uCRef<int>(i), &ret20), ret20), value))
            Remove2((::g::Uno::Collections::List__get_Item_fn(uPtr(_values), uCRef<int>(i), &ret21), ret21));
        else
            has = true;

    if (!has)
        Add2(value);
}

// public void Toggle(Fuse.Selection.Selectable b) [instance] :589
void Selection::Toggle(::g::Fuse::Selection::Selectable* b)
{
    uStackFrame __("Fuse.Selection.Selection", "Toggle(Fuse.Selection.Selectable)");
    Toggle1(uPtr(b)->Value());
}

// private void Toggle(string value) [instance] :594
void Selection::Toggle1(uString* value)
{
    uStackFrame __("Fuse.Selection.Selection", "Toggle(string)");
    bool ret24;

    if ((::g::Uno::Collections::List__Contains_fn(uPtr(_values), value, &ret24), ret24))
        Remove2(value);
    else
        Add2(value);
}

// public string get_Value() [instance] :687
uString* Selection::Value()
{
    uStackFrame __("Fuse.Selection.Selection", "get_Value()");
    uString* ret25;
    return (uPtr(_values)->Count() > 0) ? (::g::Uno::Collections::List__get_Item_fn(uPtr(_values), uCRef<int>(0), &ret25), ret25) : ::STRINGS[30/*""*/];
}

// public void set_Value(string value) [instance] :691
void Selection::Value(uString* value)
{
    uStackFrame __("Fuse.Selection.Selection", "set_Value(string)");
    SetValue(value, NULL);
}

// public object get_Values() [instance] :790
uObject* Selection::Values()
{
    return _observableValues;
}

// public void set_Values(object value) [instance] :791
void Selection::Values(uObject* value)
{
    uStackFrame __("Fuse.Selection.Selection", "set_Values(object)");
    ::g::Fuse::Scripting::Observable* q = uAs< ::g::Fuse::Scripting::Observable*>(value, ::TYPES[12/*Fuse.Scripting.Observable*/]);

    if ((value != NULL) && (q == NULL))
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[31/*"`Values` mu...*/], this, ::STRINGS[5/*"/Users/most...*/], 796, ::STRINGS[32/*"set_Values"*/]);
        return;
    }

    if (_observableValues != q)
    {
        _observableValues = q;
        OnObservableValuesChanged();
    }
}

// private static void add(Fuse.Scripting.Context c, Fuse.Selection.Selection s, object[] args) [static] :338
void Selection::add(::g::Fuse::Scripting::Context* c, Selection* s, uArray* args)
{
    uStackFrame __("Fuse.Selection.Selection", "add(Fuse.Scripting.Context,Fuse.Selection.Selection,object[])");
    Selection_typeof()->Init();
    uString* ret2;

    if (uPtr(args)->Length() != 1)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[17/*"add require...*/], s, ::STRINGS[5/*"/Users/most...*/], 342, ::STRINGS[1/*"add"*/]);
        return;
    }

    uPtr(s)->Add2((::g::Fuse::Scripting::Marshal__ToType_fn(::TYPES[7/*Fuse.Scripting.Marshal.ToType<string>*/], uPtr(args)->Strong<uObject*>(0), &ret2), ret2));
}

// private static void clear(Fuse.Scripting.Context c, Fuse.Selection.Selection s, object[] args) [static] :320
void Selection::clear(::g::Fuse::Scripting::Context* c, Selection* s, uArray* args)
{
    uStackFrame __("Fuse.Selection.Selection", "clear(Fuse.Scripting.Context,Fuse.Selection.Selection,object[])");
    Selection_typeof()->Init();

    if (uPtr(args)->Length() != 0)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[18/*"clear requi...*/], s, ::STRINGS[5/*"/Users/most...*/], 324, ::STRINGS[14/*"clear"*/]);
        return;
    }

    uPtr(s)->Clear();
}

// private static void forceAdd(Fuse.Scripting.Context c, Fuse.Selection.Selection s, object[] args) [static] :370
void Selection::forceAdd(::g::Fuse::Scripting::Context* c, Selection* s, uArray* args)
{
    uStackFrame __("Fuse.Selection.Selection", "forceAdd(Fuse.Scripting.Context,Fuse.Selection.Selection,object[])");
    Selection_typeof()->Init();
    uString* ret4;

    if (uPtr(args)->Length() != 1)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[19/*"forceAdd re...*/], s, ::STRINGS[5/*"/Users/most...*/], 374, ::STRINGS[15/*"forceAdd"*/]);
        return;
    }

    uPtr(s)->ForceAdd1((::g::Fuse::Scripting::Marshal__ToType_fn(::TYPES[7/*Fuse.Scripting.Marshal.ToType<string>*/], uPtr(args)->Strong<uObject*>(0), &ret4), ret4));
}

// private static void forceRemove(Fuse.Scripting.Context c, Fuse.Selection.Selection s, object[] args) [static] :384
void Selection::forceRemove(::g::Fuse::Scripting::Context* c, Selection* s, uArray* args)
{
    uStackFrame __("Fuse.Selection.Selection", "forceRemove(Fuse.Scripting.Context,Fuse.Selection.Selection,object[])");
    Selection_typeof()->Init();
    uString* ret6;

    if (uPtr(args)->Length() != 1)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[20/*"forceRemove...*/], s, ::STRINGS[5/*"/Users/most...*/], 388, ::STRINGS[16/*"forceRemove"*/]);
        return;
    }

    uPtr(s)->ForceRemove1((::g::Fuse::Scripting::Marshal__ToType_fn(::TYPES[7/*Fuse.Scripting.Marshal.ToType<string>*/], uPtr(args)->Strong<uObject*>(0), &ret6), ret6));
}

// public generated Selection New() [static] :302
Selection* Selection::New2()
{
    Selection* obj1 = (Selection*)uNew(Selection_typeof());
    obj1->ctor_3();
    return obj1;
}

// private static void remove(Fuse.Scripting.Context c, Fuse.Selection.Selection s, object[] args) [static] :356
void Selection::remove(::g::Fuse::Scripting::Context* c, Selection* s, uArray* args)
{
    uStackFrame __("Fuse.Selection.Selection", "remove(Fuse.Scripting.Context,Fuse.Selection.Selection,object[])");
    Selection_typeof()->Init();
    uString* ret17;

    if (uPtr(args)->Length() != 1)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[26/*"remove requ...*/], s, ::STRINGS[5/*"/Users/most...*/], 360, ::STRINGS[2/*"remove"*/]);
        return;
    }

    uPtr(s)->Remove2((::g::Fuse::Scripting::Marshal__ToType_fn(::TYPES[7/*Fuse.Scripting.Marshal.ToType<string>*/], uPtr(args)->Strong<uObject*>(0), &ret17), ret17));
}

// private static void toggle(Fuse.Scripting.Context c, Fuse.Selection.Selection s, object[] args) [static] :400
void Selection::toggle(::g::Fuse::Scripting::Context* c, Selection* s, uArray* args)
{
    uStackFrame __("Fuse.Selection.Selection", "toggle(Fuse.Scripting.Context,Fuse.Selection.Selection,object[])");
    Selection_typeof()->Init();
    uString* ret23;

    if (uPtr(args)->Length() != 1)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[27/*"toggle requ...*/], s, ::STRINGS[5/*"/Users/most...*/], 404, ::STRINGS[3/*"toggle"*/]);
        return;
    }

    uPtr(s)->Toggle1((::g::Fuse::Scripting::Marshal__ToType_fn(::TYPES[7/*Fuse.Scripting.Marshal.ToType<string>*/], uPtr(args)->Strong<uObject*>(0), &ret23), ret23));
}

// internal static bool TryFindSelectable(Fuse.Node n, Fuse.Selection.Selectable& selectable, Fuse.Selection.Selection& selection) [static] :473
bool Selection::TryFindSelectable(::g::Fuse::Node* n, ::g::Fuse::Selection::Selectable** selectable, Selection** selection)
{
    uStackFrame __("Fuse.Selection.Selection", "TryFindSelectable(Fuse.Node,Fuse.Selection.Selectable&,Fuse.Selection.Selection&)");
    Selection_typeof()->Init();
    *selectable = NULL;
    *selection = NULL;

    while (n != NULL)
    {
        ::g::Fuse::Visual* vs = uAs< ::g::Fuse::Visual*>(n, ::TYPES[9/*Fuse.Visual*/]);

        if (vs != NULL)
        {
            if (*selectable == NULL)
                *selectable = (::g::Fuse::Selection::Selectable*)uPtr(vs)->FirstChild(::TYPES[10/*Fuse.Visual.FirstChild<Fuse.Selection.Selectable>*/]);
            else
                *selection = (Selection*)uPtr(vs)->FirstChild(::TYPES[11/*Fuse.Visual.FirstChild<Fuse.Selection.Selection>*/]);

            if ((*selectable != NULL) && (*selection != NULL))
                return true;
        }

        n = uPtr(n)->ContextParent();
    }

    *selectable = NULL;
    *selection = NULL;
    return false;
}

// internal static Fuse.Selection.Selection TryFindSelection(Fuse.Node v) [static] :456
Selection* Selection::TryFindSelection(::g::Fuse::Node* v)
{
    uStackFrame __("Fuse.Selection.Selection", "TryFindSelection(Fuse.Node)");
    Selection_typeof()->Init();

    while (v != NULL)
    {
        ::g::Fuse::Visual* vs = uAs< ::g::Fuse::Visual*>(v, ::TYPES[9/*Fuse.Visual*/]);

        if (vs != NULL)
        {
            Selection* l = (Selection*)uPtr(vs)->FirstChild(::TYPES[11/*Fuse.Visual.FirstChild<Fuse.Selection.Selection>*/]);

            if (l != NULL)
                return l;
        }

        v = uPtr(v)->ContextParent();
    }

    return NULL;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Selection/0.42.4/$.uno
// -----------------------------------------------------------------------------------------

// public abstract class SelectionEvent :222
// {
static void SelectionEvent_build(uType* type)
{
    ::STRINGS[33] = uString::Const("Unable to locate a `Selectable` and `Selection`");
    ::STRINGS[5] = uString::Const("/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Selection/0.42.4/$.uno");
    ::STRINGS[9] = uString::Const("OnRooted");
    ::TYPES[13] = ::g::Uno::EventHandler_typeof();
    type->SetBase(::g::Fuse::Triggers::PulseTrigger_typeof()->MakeType(::g::Fuse::Selection::SelectionEventArgs_typeof(), NULL));
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(SelectionEvent_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(SelectionEvent_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(SelectionEvent_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(SelectionEvent_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(SelectionEvent_type, interface4));
    type->SetFields(29,
        ::g::Fuse::Selection::Selectable_typeof(), offsetof(::g::Fuse::Selection::SelectionEvent, _selectable), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Selection::SelectionEvent, _selected), 0,
        ::g::Fuse::Selection::Selection_typeof(), offsetof(::g::Fuse::Selection::SelectionEvent, _selection), 0);
}

SelectionEvent_type* SelectionEvent_typeof()
{
    static uSStrong<SelectionEvent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::PulseTrigger_typeof();
    options.FieldCount = 32;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(SelectionEvent);
    options.TypeSize = sizeof(SelectionEvent_type);
    type = (SelectionEvent_type*)uClassType::New("Fuse.Selection.SelectionEvent", options);
    type->fp_build_ = SelectionEvent_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))SelectionEvent__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))SelectionEvent__OnUnrooted_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnStable_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
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

// internal SelectionEvent() :224
void SelectionEvent__ctor_5_fn(SelectionEvent* __this)
{
    __this->ctor_5();
}

// protected override sealed void OnRooted() :231
void SelectionEvent__OnRooted_fn(SelectionEvent* __this)
{
    uStackFrame __("Fuse.Selection.SelectionEvent", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);

    if (!::g::Fuse::Selection::Selection::TryFindSelectable(__this->Parent(), &__this->_selectable, &__this->_selection))
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[33/*"Unable to l...*/], __this, ::STRINGS[5/*"/Users/most...*/], 237, ::STRINGS[9/*"OnRooted"*/]);
        return;
    }

    uPtr(__this->_selection)->add_SelectionChanged(uDelegate::New(::TYPES[13/*Uno.EventHandler*/], (void*)SelectionEvent__OnSelectionChanged_fn, __this));
    __this->_selected = uPtr(__this->_selection)->IsSelected(__this->_selectable);
}

// private void OnSelectionChanged(object s, object args) :255
void SelectionEvent__OnSelectionChanged_fn(SelectionEvent* __this, uObject* s, uObject* args)
{
    __this->OnSelectionChanged(s, args);
}

// protected override sealed void OnUnrooted() :245
void SelectionEvent__OnUnrooted_fn(SelectionEvent* __this)
{
    uStackFrame __("Fuse.Selection.SelectionEvent", "OnUnrooted()");

    if (__this->_selection != NULL)
        uPtr(__this->_selection)->remove_SelectionChanged(uDelegate::New(::TYPES[13/*Uno.EventHandler*/], (void*)SelectionEvent__OnSelectionChanged_fn, __this));

    __this->_selection = NULL;
    __this->_selectable = NULL;
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// internal SelectionEvent() [instance] :224
void SelectionEvent::ctor_5()
{
    ctor_4();
}

// private void OnSelectionChanged(object s, object args) [instance] :255
void SelectionEvent::OnSelectionChanged(uObject* s, uObject* args)
{
    uStackFrame __("Fuse.Selection.SelectionEvent", "OnSelectionChanged(object,object)");
    bool news = uPtr(_selection)->IsSelected(_selectable);

    if (news == _selected)
        return;

    if (IsTriggered(news))
        Pulse1(::g::Fuse::Selection::SelectionEventArgs::New2(uPtr(_selectable)->Value()));

    _selected = news;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Selection/0.42.4/$.uno
// -----------------------------------------------------------------------------------------

// public sealed class SelectionEventArgs :204
// {
static void SelectionEventArgs_build(uType* type)
{
    ::STRINGS[34] = uString::Const("value");
    ::TYPES[14] = ::g::Fuse::Scripting::IEventSerializer_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(SelectionEventArgs_type, interface0));
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Selection::SelectionEventArgs, _Value), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)SelectionEventArgs__New2_fn, 0, true, type, 1, ::g::Uno::String_typeof()),
        new uFunction("get_Value", NULL, (void*)SelectionEventArgs__get_Value_fn, 0, false, ::g::Uno::String_typeof(), 0));
}

SelectionEventArgs_type* SelectionEventArgs_typeof()
{
    static uSStrong<SelectionEventArgs_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::EventArgs_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(SelectionEventArgs);
    options.TypeSize = sizeof(SelectionEventArgs_type);
    type = (SelectionEventArgs_type*)uClassType::New("Fuse.Selection.SelectionEventArgs", options);
    type->fp_build_ = SelectionEventArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))SelectionEventArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// public SelectionEventArgs(string value) :211
void SelectionEventArgs__ctor_1_fn(SelectionEventArgs* __this, uString* value)
{
    __this->ctor_1(value);
}

// private void Fuse.Scripting.IScriptEvent.Serialize(Fuse.Scripting.IEventSerializer s) :216
void SelectionEventArgs__FuseScriptingIScriptEventSerialize_fn(SelectionEventArgs* __this, uObject* s)
{
    uStackFrame __("Fuse.Selection.SelectionEventArgs", "Fuse.Scripting.IScriptEvent.Serialize(Fuse.Scripting.IEventSerializer)");
    ::g::Fuse::Scripting::IEventSerializer::AddString(uInterface(uPtr(s), ::TYPES[14/*Fuse.Scripting.IEventSerializer*/]), ::STRINGS[34/*"value"*/], __this->Value());
}

// public SelectionEventArgs New(string value) :211
void SelectionEventArgs__New2_fn(uString* value, SelectionEventArgs** __retval)
{
    *__retval = SelectionEventArgs::New2(value);
}

// public generated string get_Value() :209
void SelectionEventArgs__get_Value_fn(SelectionEventArgs* __this, uString** __retval)
{
    *__retval = __this->Value();
}

// private generated void set_Value(string value) :209
void SelectionEventArgs__set_Value_fn(SelectionEventArgs* __this, uString* value)
{
    __this->Value(value);
}

// public SelectionEventArgs(string value) [instance] :211
void SelectionEventArgs::ctor_1(uString* value)
{
    ctor_();
    Value(value);
}

// public generated string get_Value() [instance] :209
uString* SelectionEventArgs::Value()
{
    return _Value;
}

// private generated void set_Value(string value) [instance] :209
void SelectionEventArgs::Value(uString* value)
{
    _Value = value;
}

// public SelectionEventArgs New(string value) [static] :211
SelectionEventArgs* SelectionEventArgs::New2(uString* value)
{
    SelectionEventArgs* obj1 = (SelectionEventArgs*)uNew(SelectionEventArgs_typeof());
    obj1->ctor_1(value);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Selection/0.42.4/$.uno
// -----------------------------------------------------------------------------------------

// public enum SelectionReplace :424
uEnumType* SelectionReplace_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Selection.SelectionReplace", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Oldest", 0LL,
        "Newest", 1LL,
        "None", 2LL);
    return type;
}

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Selection/0.42.4/$.uno
// -----------------------------------------------------------------------------------------

// public enum SelectMode :915
uEnumType* SelectMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Selection.SelectMode", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Toggle", 0LL,
        "AddOnly", 1LL,
        "RemoveOnly", 2LL);
    return type;
}

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Selection/0.42.4/$.uno
// -----------------------------------------------------------------------------------------

// public sealed class ToggleSelection :933
// {
static void ToggleSelection_build(uType* type)
{
    ::STRINGS[35] = uString::Const("Unable to locate Selectable");
    ::STRINGS[5] = uString::Const("/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Selection/0.42.4/$.uno");
    ::STRINGS[36] = uString::Const("Perform");
    type->SetFields(8,
        ::g::Fuse::Selection::SelectMode_typeof(), offsetof(::g::Fuse::Selection::ToggleSelection, _mode), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Mode", NULL, (void*)ToggleSelection__get_Mode_fn, 0, false, ::g::Fuse::Selection::SelectMode_typeof(), 0),
        new uFunction("set_Mode", NULL, (void*)ToggleSelection__set_Mode_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Selection::SelectMode_typeof()),
        new uFunction(".ctor", NULL, (void*)ToggleSelection__New2_fn, 0, true, type, 0));
}

::g::Fuse::Triggers::Actions::TriggerAction_type* ToggleSelection_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 9;
    options.ObjectSize = sizeof(ToggleSelection);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Selection.ToggleSelection", options);
    type->fp_build_ = ToggleSelection_build;
    type->fp_ctor_ = (void*)ToggleSelection__New2_fn;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))ToggleSelection__Perform_fn;
    return type;
}

// public generated ToggleSelection() :933
void ToggleSelection__ctor_2_fn(ToggleSelection* __this)
{
    __this->ctor_2();
}

// public Fuse.Selection.SelectMode get_Mode() :943
void ToggleSelection__get_Mode_fn(ToggleSelection* __this, int* __retval)
{
    *__retval = __this->Mode();
}

// public void set_Mode(Fuse.Selection.SelectMode value) :944
void ToggleSelection__set_Mode_fn(ToggleSelection* __this, int* value)
{
    __this->Mode(*value);
}

// public generated ToggleSelection New() :933
void ToggleSelection__New2_fn(ToggleSelection** __retval)
{
    *__retval = ToggleSelection::New2();
}

// protected override sealed void Perform(Fuse.Node target) :947
void ToggleSelection__Perform_fn(ToggleSelection* __this, ::g::Fuse::Node* target)
{
    uStackFrame __("Fuse.Selection.ToggleSelection", "Perform(Fuse.Node)");
    ::g::Fuse::Selection::Selectable* selectable;
    ::g::Fuse::Selection::Selection* selection;

    if (!::g::Fuse::Selection::Selection::TryFindSelectable(target, &selectable, &selection))
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[35/*"Unable to l...*/], __this, ::STRINGS[5/*"/Users/most...*/], 953, ::STRINGS[36/*"Perform"*/]);
        return;
    }

    switch (__this->Mode())
    {
        case 0:
        {
            uPtr(selection)->Toggle(selectable);
            break;
        }
        case 1:
        {
            uPtr(selection)->Add1(selectable);
            break;
        }
        case 2:
        {
            uPtr(selection)->Remove1(selectable);
            break;
        }
    }
}

// public generated ToggleSelection() [instance] :933
void ToggleSelection::ctor_2()
{
    ctor_1();
}

// public Fuse.Selection.SelectMode get_Mode() [instance] :943
int ToggleSelection::Mode()
{
    return _mode;
}

// public void set_Mode(Fuse.Selection.SelectMode value) [instance] :944
void ToggleSelection::Mode(int value)
{
    _mode = value;
}

// public generated ToggleSelection New() [static] :933
ToggleSelection* ToggleSelection::New2()
{
    ToggleSelection* obj1 = (ToggleSelection*)uNew(ToggleSelection_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Selection/0.42.4/$.uno
// -----------------------------------------------------------------------------------------

// public sealed class WhileSelected :991
// {
static void WhileSelected_build(uType* type)
{
    ::STRINGS[33] = uString::Const("Unable to locate a `Selectable` and `Selection`");
    ::STRINGS[5] = uString::Const("/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Selection/0.42.4/$.uno");
    ::STRINGS[9] = uString::Const("OnRooted");
    ::TYPES[13] = ::g::Uno::EventHandler_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(WhileSelected_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(WhileSelected_type, interface1),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(WhileSelected_type, interface2),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(WhileSelected_type, interface3),
        ::g::Fuse::Animations::IPlayerFeedback_typeof(), offsetof(WhileSelected_type, interface4),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(WhileSelected_type, interface5));
    type->SetFields(29,
        ::g::Fuse::Selection::Selectable_typeof(), offsetof(::g::Fuse::Selection::WhileSelected, _selectable), 0,
        ::g::Fuse::Selection::Selection_typeof(), offsetof(::g::Fuse::Selection::WhileSelected, _selection), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)WhileSelected__New2_fn, 0, true, type, 0));
}

WhileSelected_type* WhileSelected_typeof()
{
    static uSStrong<WhileSelected_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::WhileTrigger_typeof();
    options.FieldCount = 31;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(WhileSelected);
    options.TypeSize = sizeof(WhileSelected_type);
    type = (WhileSelected_type*)uClassType::New("Fuse.Selection.WhileSelected", options);
    type->fp_build_ = WhileSelected_build;
    type->fp_ctor_ = (void*)WhileSelected__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))WhileSelected__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))WhileSelected__OnUnrooted_fn;
    type->interface5.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))WhileSelected__UnoUXIPropertyListenerOnPropertyChanged_fn;
    type->interface4.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnPlaybackDone_fn;
    type->interface4.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnStable_fn;
    type->interface4.fp_OnProgressUpdated = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIPlayerFeedbackOnProgressUpdated_fn;
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

// public generated WhileSelected() :991
void WhileSelected__ctor_5_fn(WhileSelected* __this)
{
    __this->ctor_5();
}

// public generated WhileSelected New() :991
void WhileSelected__New2_fn(WhileSelected** __retval)
{
    *__retval = WhileSelected::New2();
}

// protected override sealed void OnRooted() :996
void WhileSelected__OnRooted_fn(WhileSelected* __this)
{
    uStackFrame __("Fuse.Selection.WhileSelected", "OnRooted()");
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);

    if (!::g::Fuse::Selection::Selection::TryFindSelectable(__this->Parent(), &__this->_selectable, &__this->_selection))
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[33/*"Unable to l...*/], __this, ::STRINGS[5/*"/Users/most...*/], 1002, ::STRINGS[9/*"OnRooted"*/]);
        return;
    }

    __this->SetActive(uPtr(__this->_selection)->IsSelected(__this->_selectable));
    uPtr(__this->_selection)->add_SelectionChanged(uDelegate::New(::TYPES[13/*Uno.EventHandler*/], (void*)WhileSelected__OnSelectionChanged_fn, __this));
    uPtr(__this->_selectable)->AddPropertyListener((uObject*)__this);
}

// private void OnSelectionChanged(object s, object args) :1034
void WhileSelected__OnSelectionChanged_fn(WhileSelected* __this, uObject* s, uObject* args)
{
    __this->OnSelectionChanged(s, args);
}

// protected override sealed void OnUnrooted() :1011
void WhileSelected__OnUnrooted_fn(WhileSelected* __this)
{
    uStackFrame __("Fuse.Selection.WhileSelected", "OnUnrooted()");

    if (__this->_selection != NULL)
    {
        uPtr(__this->_selection)->remove_SelectionChanged(uDelegate::New(::TYPES[13/*Uno.EventHandler*/], (void*)WhileSelected__OnSelectionChanged_fn, __this));
        uPtr(__this->_selectable)->RemovePropertyListener((uObject*)__this);
    }

    __this->_selection = NULL;
    __this->_selectable = NULL;
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject obj, Uno.UX.Selector prop) :1024
void WhileSelected__UnoUXIPropertyListenerOnPropertyChanged_fn(WhileSelected* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop)
{
    uStackFrame __("Fuse.Selection.WhileSelected", "Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject,Uno.UX.Selector)");

    if (obj == __this->_selectable)
        __this->BypassSetActive(uPtr(__this->_selection)->IsSelected(__this->_selectable));
}

// public generated WhileSelected() [instance] :991
void WhileSelected::ctor_5()
{
    ctor_4();
}

// private void OnSelectionChanged(object s, object args) [instance] :1034
void WhileSelected::OnSelectionChanged(uObject* s, uObject* args)
{
    uStackFrame __("Fuse.Selection.WhileSelected", "OnSelectionChanged(object,object)");
    SetActive(uPtr(_selection)->IsSelected(_selectable));
}

// public generated WhileSelected New() [static] :991
WhileSelected* WhileSelected::New2()
{
    WhileSelected* obj1 = (WhileSelected*)uNew(WhileSelected_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

}}} // ::g::Fuse::Selection
