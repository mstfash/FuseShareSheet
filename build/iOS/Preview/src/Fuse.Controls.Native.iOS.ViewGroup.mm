// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.42.4/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Native.iOS.InputDispatch.h>
#include <Fuse.Controls.Native.iOS.View.h>
#include <Fuse.Controls.Native.iOS.ViewGroup.h>
#include <Fuse.Visual.h>
#include <ObjC.Object.h>
#include <UIKit/UIKit.h>
#include <Uno.Int.h>
#include <uObjC.Foreign.h>
#include <Uno.Float2.h>
static uType* TYPES[1];

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// public sealed extern class ViewGroup :3736
// {
static void ViewGroup_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Controls::Native::iOS::View_typeof();
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(ViewGroup_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(ViewGroup_type, interface1),
        ::g::Fuse::Controls::Native::IViewGroup_typeof(), offsetof(ViewGroup_type, interface2));
    type->SetFields(5,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::ViewGroup, _visual), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("Add", NULL, (void*)ViewGroup__Add_fn, 0, false, uVoid_typeof(), 1, ::TYPES[0/*Fuse.Controls.Native.iOS.View*/]),
        new uFunction("Add", NULL, (void*)ViewGroup__Add1_fn, 0, false, uVoid_typeof(), 2, ::TYPES[0/*Fuse.Controls.Native.iOS.View*/], ::g::Uno::Int_typeof()),
        new uFunction(".ctor", NULL, (void*)ViewGroup__New1_fn, 0, true, type, 1, ::g::Fuse::Visual_typeof()),
        new uFunction("Remove", NULL, (void*)ViewGroup__Remove_fn, 0, false, uVoid_typeof(), 1, ::TYPES[0/*Fuse.Controls.Native.iOS.View*/]));
}

ViewGroup_type* ViewGroup_typeof()
{
    static uSStrong<ViewGroup_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::iOS::ViewParent_typeof();
    options.FieldCount = 6;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(ViewGroup);
    options.TypeSize = sizeof(ViewGroup_type);
    type = (ViewGroup_type*)uClassType::New("Fuse.Controls.Native.iOS.ViewGroup", options);
    type->fp_build_ = ViewGroup_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::iOS::View*))ViewGroup__Dispose_fn;
    type->fp_NotifyChildNewSize = (void(*)(::g::Fuse::Controls::Native::iOS::ViewParent*, ::g::Fuse::Controls::Native::iOS::View*, ::g::Uno::Float2*))ViewGroup__NotifyChildNewSize_fn;
    type->interface2.fp_Add = (void(*)(uObject*, uObject*))ViewGroup__FuseControlsNativeIViewGroupAdd_fn;
    type->interface2.fp_Add1 = (void(*)(uObject*, uObject*, int*))ViewGroup__FuseControlsNativeIViewGroupAdd1_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, uObject*))ViewGroup__FuseControlsNativeIViewGroupRemove_fn;
    type->interface2.fp_set_ClipToBounds = (void(*)(uObject*, bool*))::g::Fuse::Controls::Native::iOS::View__set_ClipToBounds_fn;
    type->interface2.fp_set_HitTestEnabled = (void(*)(uObject*, bool*))::g::Fuse::Controls::Native::iOS::View__set_HitTestEnabled_fn;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::iOS::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::iOS::View__Hide_fn;
    type->interface0.fp_BringToFront = (void(*)(uObject*))::g::Fuse::Controls::Native::iOS::View__BringToFront_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::iOS::View__set_Transform_fn;
    type->interface0.fp_set_Position = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::iOS::View__set_Position_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::iOS::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::iOS::View__set_Opacity_fn;
    type->interface0.fp_set_IsEnabled = (void(*)(uObject*, bool*))::g::Fuse::Controls::Native::iOS::View__set_IsEnabled_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::iOS::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))ViewGroup__Dispose_fn;
    return type;
}

// public ViewGroup(Fuse.Visual visual) :3741
void ViewGroup__ctor_2_fn(ViewGroup* __this, ::g::Fuse::Visual* visual)
{
    __this->ctor_2(visual);
}

// public void Add(Fuse.Controls.Native.iOS.View child) :3766
void ViewGroup__Add_fn(ViewGroup* __this, ::g::Fuse::Controls::Native::iOS::View* child)
{
    __this->Add(child);
}

// public void Add(Fuse.Controls.Native.iOS.View child, int index) :3772
void ViewGroup__Add1_fn(ViewGroup* __this, ::g::Fuse::Controls::Native::iOS::View* child, int* index)
{
    __this->Add1(child, *index);
}

// private static void Add(ObjC.Object parentHandle, ObjC.Object childHandle) :3785
void ViewGroup__Add2_fn(uObject* parentHandle, uObject* childHandle)
{
    ViewGroup::Add2(parentHandle, childHandle);
}

// private static void Add(ObjC.Object parentHandle, ObjC.Object childHandle, int index) :3793
void ViewGroup__Add3_fn(uObject* parentHandle, uObject* childHandle, int* index)
{
    ViewGroup::Add3(parentHandle, childHandle, *index);
}

// private static ObjC.Object Create() :3754
void ViewGroup__Create_fn(uObject** __retval)
{
    *__retval = ViewGroup::Create();
}

// public override sealed void Dispose() :3747
void ViewGroup__Dispose_fn(ViewGroup* __this)
{
    uStackFrame __("Fuse.Controls.Native.iOS.ViewGroup", "Dispose()");
    ::g::Fuse::Controls::Native::iOS::View__Dispose_fn(__this);
    ::g::Fuse::Controls::Native::iOS::InputDispatch::RemoveListener(__this->_visual, __this->Handle());
}

// private void Fuse.Controls.Native.IViewGroup.Add(Fuse.Controls.Native.IView child) :3762
void ViewGroup__FuseControlsNativeIViewGroupAdd_fn(ViewGroup* __this, uObject* child)
{
    uStackFrame __("Fuse.Controls.Native.iOS.ViewGroup", "Fuse.Controls.Native.IViewGroup.Add(Fuse.Controls.Native.IView)");
    __this->Add(uCast< ::g::Fuse::Controls::Native::iOS::View*>(child, ::TYPES[0/*Fuse.Controls.Native.iOS.View*/]));
}

// private void Fuse.Controls.Native.IViewGroup.Add(Fuse.Controls.Native.IView child, int index) :3763
void ViewGroup__FuseControlsNativeIViewGroupAdd1_fn(ViewGroup* __this, uObject* child, int* index)
{
    uStackFrame __("Fuse.Controls.Native.iOS.ViewGroup", "Fuse.Controls.Native.IViewGroup.Add(Fuse.Controls.Native.IView,int)");
    int index_ = *index;
    __this->Add1(uCast< ::g::Fuse::Controls::Native::iOS::View*>(child, ::TYPES[0/*Fuse.Controls.Native.iOS.View*/]), index_);
}

// private void Fuse.Controls.Native.IViewGroup.Remove(Fuse.Controls.Native.IView child) :3764
void ViewGroup__FuseControlsNativeIViewGroupRemove_fn(ViewGroup* __this, uObject* child)
{
    uStackFrame __("Fuse.Controls.Native.iOS.ViewGroup", "Fuse.Controls.Native.IViewGroup.Remove(Fuse.Controls.Native.IView)");
    __this->Remove(uCast< ::g::Fuse::Controls::Native::iOS::View*>(child, ::TYPES[0/*Fuse.Controls.Native.iOS.View*/]));
}

// public ViewGroup New(Fuse.Visual visual) :3741
void ViewGroup__New1_fn(::g::Fuse::Visual* visual, ViewGroup** __retval)
{
    *__retval = ViewGroup::New1(visual);
}

// public override sealed void NotifyChildNewSize(Fuse.Controls.Native.iOS.View child, float2 size) :3807
void ViewGroup__NotifyChildNewSize_fn(ViewGroup* __this, ::g::Fuse::Controls::Native::iOS::View* child, ::g::Uno::Float2* size)
{
}

// public void Remove(Fuse.Controls.Native.iOS.View child) :3778
void ViewGroup__Remove_fn(ViewGroup* __this, ::g::Fuse::Controls::Native::iOS::View* child)
{
    __this->Remove(child);
}

// private static void Remove(ObjC.Object childHandle) :3801
void ViewGroup__Remove1_fn(uObject* childHandle)
{
    ViewGroup::Remove1(childHandle);
}

// public ViewGroup(Fuse.Visual visual) [instance] :3741
void ViewGroup::ctor_2(::g::Fuse::Visual* visual)
{
    uStackFrame __("Fuse.Controls.Native.iOS.ViewGroup", ".ctor(Fuse.Visual)");
    ctor_1(ViewGroup::Create());
    _visual = visual;
    ::g::Fuse::Controls::Native::iOS::InputDispatch::AddListener(visual, Handle());
}

// public void Add(Fuse.Controls.Native.iOS.View child) [instance] :3766
void ViewGroup::Add(::g::Fuse::Controls::Native::iOS::View* child)
{
    uStackFrame __("Fuse.Controls.Native.iOS.ViewGroup", "Add(Fuse.Controls.Native.iOS.View)");
    uPtr(child)->Parent(this);
    ViewGroup::Add2(Handle(), child->Handle());
}

// public void Add(Fuse.Controls.Native.iOS.View child, int index) [instance] :3772
void ViewGroup::Add1(::g::Fuse::Controls::Native::iOS::View* child, int index)
{
    uStackFrame __("Fuse.Controls.Native.iOS.ViewGroup", "Add(Fuse.Controls.Native.iOS.View,int)");
    uPtr(child)->Parent(this);
    ViewGroup::Add3(Handle(), child->Handle(), index);
}

// public void Remove(Fuse.Controls.Native.iOS.View child) [instance] :3778
void ViewGroup::Remove(::g::Fuse::Controls::Native::iOS::View* child)
{
    uStackFrame __("Fuse.Controls.Native.iOS.ViewGroup", "Remove(Fuse.Controls.Native.iOS.View)");
    ViewGroup::Remove1(uPtr(child)->Handle());
    child->Parent(NULL);
}

// private static void Add(ObjC.Object parentHandle, ObjC.Object childHandle) [static] :3785
void ViewGroup::Add2(uObject* parentHandle, uObject* childHandle)
{
    @autoreleasepool
    {
        [] (::id parentHandle, ::id childHandle) -> void
        {
            ::UIView* parent =  (::UIView*)parentHandle;
            			::UIView* child =  (::UIView*)childHandle;
            			[parent addSubview:child];
        } (::g::ObjC::Helpers::GetHandle(parentHandle), ::g::ObjC::Helpers::GetHandle(childHandle));
        
    }
    
}

// private static void Add(ObjC.Object parentHandle, ObjC.Object childHandle, int index) [static] :3793
void ViewGroup::Add3(uObject* parentHandle, uObject* childHandle, int index)
{
    @autoreleasepool
    {
        [] (::id parentHandle, ::id childHandle, int index) -> void
        {
            ::UIView* parent =  (::UIView*)parentHandle;
            			::UIView* child =  (::UIView*)childHandle;
            			[parent insertSubview:child atIndex:index];
        } (::g::ObjC::Helpers::GetHandle(parentHandle), ::g::ObjC::Helpers::GetHandle(childHandle), index);
        
    }
    
}

// private static ObjC.Object Create() [static] :3754
uObject* ViewGroup::Create()
{
    @autoreleasepool
    {
        return ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1([] () -> ::id
        {
            ::UIControl* control = [[::UIControl alloc] init];
            			[control setOpaque:false];
            			[control setMultipleTouchEnabled:true];
            			return control;
        } ());
        
    }
    
}

// public ViewGroup New(Fuse.Visual visual) [static] :3741
ViewGroup* ViewGroup::New1(::g::Fuse::Visual* visual)
{
    ViewGroup* obj1 = (ViewGroup*)uNew(ViewGroup_typeof());
    obj1->ctor_2(visual);
    return obj1;
}

// private static void Remove(ObjC.Object childHandle) [static] :3801
void ViewGroup::Remove1(uObject* childHandle)
{
    @autoreleasepool
    {
        [] (::id childHandle) -> void
        {
            ::UIView* child =  (::UIView*)childHandle;
            			[child removeFromSuperview];
        } (::g::ObjC::Helpers::GetHandle(childHandle));
        
    }
    
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
