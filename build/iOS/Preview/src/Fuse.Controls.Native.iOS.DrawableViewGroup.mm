// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.42.4/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Native.iOS.DrawableViewGroup.h>
#include <Fuse.Controls.Native.iOS.InputDispatch.h>
#include <Fuse.Controls.Native.iOS.NativeViewRenderer.h>
#include <Fuse.Controls.Native.iOS.View.h>
#include <Fuse.Controls.Native.OffscreenRendering.h>
#include <Fuse.Visual.h>
#include <iOS/Helpers.h>
#include <ObjC.Object.h>
#include <UIKit/UIKit.h>
#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <uObjC.Foreign.h>
#include <Uno.Float2.h>
#include <Uno.Float4x4.h>
static uType* TYPES[4];

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// public sealed extern class DrawableViewGroup :134
// {
static void DrawableViewGroup_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Action1_typeof()->MakeType(::g::ObjC::Object_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::IDisposable_typeof();
    ::TYPES[2] = ::g::Fuse::Controls::Native::INativeViewRenderer_typeof();
    ::TYPES[3] = ::g::Fuse::Controls::Native::iOS::View_typeof();
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(DrawableViewGroup_type, interface0),
        ::TYPES[1/*Uno.IDisposable*/], offsetof(DrawableViewGroup_type, interface1),
        ::g::Fuse::Controls::Native::IViewGroup_typeof(), offsetof(DrawableViewGroup_type, interface2),
        ::g::Fuse::Controls::Native::IOffscreenRenderer_typeof(), offsetof(DrawableViewGroup_type, interface3),
        ::TYPES[2/*Fuse.Controls.Native.INativeViewRenderer*/], offsetof(DrawableViewGroup_type, interface4));
    type->SetFields(5,
        ::g::ObjC::Object_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::DrawableViewGroup, _container), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::DrawableViewGroup, _offscreenEnabled), 0,
        ::TYPES[2/*Fuse.Controls.Native.INativeViewRenderer*/], offsetof(::g::Fuse::Controls::Native::iOS::DrawableViewGroup, _renderer), 0,
        ::g::Fuse::Visual_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::DrawableViewGroup, _visual), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("Add", NULL, (void*)DrawableViewGroup__Add_fn, 0, false, uVoid_typeof(), 1, ::TYPES[3/*Fuse.Controls.Native.iOS.View*/]),
        new uFunction("Add", NULL, (void*)DrawableViewGroup__Add1_fn, 0, false, uVoid_typeof(), 2, ::TYPES[3/*Fuse.Controls.Native.iOS.View*/], ::g::Uno::Int_typeof()),
        new uFunction(".ctor", NULL, (void*)DrawableViewGroup__New1_fn, 0, true, type, 2, ::g::Fuse::Controls::Native::OffscreenRendering_typeof(), ::g::Fuse::Visual_typeof()),
        new uFunction("Remove", NULL, (void*)DrawableViewGroup__Remove_fn, 0, false, uVoid_typeof(), 1, ::TYPES[3/*Fuse.Controls.Native.iOS.View*/]));
}

DrawableViewGroup_type* DrawableViewGroup_typeof()
{
    static uSStrong<DrawableViewGroup_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::iOS::ViewParent_typeof();
    options.FieldCount = 9;
    options.InterfaceCount = 5;
    options.ObjectSize = sizeof(DrawableViewGroup);
    options.TypeSize = sizeof(DrawableViewGroup_type);
    type = (DrawableViewGroup_type*)uClassType::New("Fuse.Controls.Native.iOS.DrawableViewGroup", options);
    type->fp_build_ = DrawableViewGroup_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::Native::iOS::View*))DrawableViewGroup__Dispose_fn;
    type->fp_NotifyChildNewSize = (void(*)(::g::Fuse::Controls::Native::iOS::ViewParent*, ::g::Fuse::Controls::Native::iOS::View*, ::g::Uno::Float2*))DrawableViewGroup__NotifyChildNewSize_fn;
    type->interface4.fp_Draw = (void(*)(uObject*, ::g::Uno::Float4x4*, ::g::Uno::Float2*, ::g::Uno::Float2*, float*))DrawableViewGroup__FuseControlsNativeINativeViewRendererDraw_fn;
    type->interface4.fp_Invalidate = (void(*)(uObject*))DrawableViewGroup__FuseControlsNativeINativeViewRendererInvalidate_fn;
    type->interface3.fp_EnableOffscreen = (void(*)(uObject*))DrawableViewGroup__FuseControlsNativeIOffscreenRendererEnableOffscreen_fn;
    type->interface3.fp_DisableOffscreen = (void(*)(uObject*))DrawableViewGroup__FuseControlsNativeIOffscreenRendererDisableOffscreen_fn;
    type->interface2.fp_Add = (void(*)(uObject*, uObject*))DrawableViewGroup__FuseControlsNativeIViewGroupAdd_fn;
    type->interface2.fp_Remove = (void(*)(uObject*, uObject*))DrawableViewGroup__FuseControlsNativeIViewGroupRemove_fn;
    type->interface2.fp_Add1 = (void(*)(uObject*, uObject*, int*))DrawableViewGroup__FuseControlsNativeIViewGroupAdd1_fn;
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
    type->interface1.fp_Dispose = (void(*)(uObject*))DrawableViewGroup__Dispose_fn;
    return type;
}

// public DrawableViewGroup(Fuse.Controls.Native.OffscreenRendering initialState, Fuse.Visual visual) :141
void DrawableViewGroup__ctor_2_fn(DrawableViewGroup* __this, int* initialState, ::g::Fuse::Visual* visual)
{
    __this->ctor_2(*initialState, visual);
}

// public void Add(Fuse.Controls.Native.iOS.View child) :217
void DrawableViewGroup__Add_fn(DrawableViewGroup* __this, ::g::Fuse::Controls::Native::iOS::View* child)
{
    __this->Add(child);
}

// public void Add(Fuse.Controls.Native.iOS.View child, int index) :223
void DrawableViewGroup__Add1_fn(DrawableViewGroup* __this, ::g::Fuse::Controls::Native::iOS::View* child, int* index)
{
    __this->Add1(child, *index);
}

// private static void Add(ObjC.Object parentHandle, ObjC.Object childHandle) :249
void DrawableViewGroup__Add2_fn(uObject* parentHandle, uObject* childHandle)
{
    DrawableViewGroup::Add2(parentHandle, childHandle);
}

// private static void Add(ObjC.Object parentHandle, ObjC.Object childHandle, int index) :257
void DrawableViewGroup__Add3_fn(uObject* parentHandle, uObject* childHandle, int* index)
{
    DrawableViewGroup::Add3(parentHandle, childHandle, *index);
}

// private static ObjC.Object Create() :273
void DrawableViewGroup__Create_fn(uObject** __retval)
{
    *__retval = DrawableViewGroup::Create();
}

// private static ObjC.Object CreateContainer() :290
void DrawableViewGroup__CreateContainer_fn(uObject** __retval)
{
    *__retval = DrawableViewGroup::CreateContainer();
}

// public override sealed void Dispose() :154
void DrawableViewGroup__Dispose_fn(DrawableViewGroup* __this)
{
    uStackFrame __("Fuse.Controls.Native.iOS.DrawableViewGroup", "Dispose()");
    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_renderer), ::TYPES[1/*Uno.IDisposable*/]));
    __this->_renderer = NULL;
    ::g::Fuse::Controls::Native::iOS::InputDispatch::RemoveListener(__this->_visual, __this->_container);
    __this->_container = NULL;
    ::g::Fuse::Controls::Native::iOS::InputDispatch::RemoveListener(__this->_visual, __this->Handle());
    __this->_visual = NULL;
    ::g::Fuse::Controls::Native::iOS::View__Dispose_fn(__this);
}

// private void Fuse.Controls.Native.INativeViewRenderer.Draw(float4x4 localToClipTransform, float2 position, float2 size, float density) :165
void DrawableViewGroup__FuseControlsNativeINativeViewRendererDraw_fn(DrawableViewGroup* __this, ::g::Uno::Float4x4* localToClipTransform, ::g::Uno::Float2* position, ::g::Uno::Float2* size, float* density)
{
    uStackFrame __("Fuse.Controls.Native.iOS.DrawableViewGroup", "Fuse.Controls.Native.INativeViewRenderer.Draw(float4x4,float2,float2,float)");
    ::g::Uno::Float4x4 localToClipTransform_ = *localToClipTransform;
    ::g::Uno::Float2 position_ = *position;
    ::g::Uno::Float2 size_ = *size;
    float density_ = *density;

    if (__this->_offscreenEnabled)
        ::g::Fuse::Controls::Native::iOS::View::Show1(__this->_container);

    ::g::Fuse::Controls::Native::INativeViewRenderer::Draw(uInterface(uPtr(__this->_renderer), ::TYPES[2/*Fuse.Controls.Native.INativeViewRenderer*/]), localToClipTransform_, position_, size_, density_);

    if (__this->_offscreenEnabled)
        ::g::Fuse::Controls::Native::iOS::View::Hide1(__this->_container);
}

// private void Fuse.Controls.Native.INativeViewRenderer.Invalidate() :176
void DrawableViewGroup__FuseControlsNativeINativeViewRendererInvalidate_fn(DrawableViewGroup* __this)
{
    uStackFrame __("Fuse.Controls.Native.iOS.DrawableViewGroup", "Fuse.Controls.Native.INativeViewRenderer.Invalidate()");
    ::g::Fuse::Controls::Native::INativeViewRenderer::Invalidate(uInterface(uPtr(__this->_renderer), ::TYPES[2/*Fuse.Controls.Native.INativeViewRenderer*/]));
}

// private void Fuse.Controls.Native.IOffscreenRenderer.DisableOffscreen() :192
void DrawableViewGroup__FuseControlsNativeIOffscreenRendererDisableOffscreen_fn(DrawableViewGroup* __this)
{
    if (__this->_offscreenEnabled)
    {
        DrawableViewGroup::Add2(__this->Handle(), __this->_container);
        ::g::Fuse::Controls::Native::iOS::View::Show1(__this->_container);
        __this->_offscreenEnabled = false;
    }
}

// private void Fuse.Controls.Native.IOffscreenRenderer.EnableOffscreen() :182
void DrawableViewGroup__FuseControlsNativeIOffscreenRendererEnableOffscreen_fn(DrawableViewGroup* __this)
{
    if (!__this->_offscreenEnabled)
    {
        DrawableViewGroup::Remove1(__this->_container);
        ::g::Fuse::Controls::Native::iOS::View::Hide1(__this->_container);
        __this->_offscreenEnabled = true;
    }
}

// private void Fuse.Controls.Native.IViewGroup.Add(Fuse.Controls.Native.IView child) :202
void DrawableViewGroup__FuseControlsNativeIViewGroupAdd_fn(DrawableViewGroup* __this, uObject* child)
{
    uStackFrame __("Fuse.Controls.Native.iOS.DrawableViewGroup", "Fuse.Controls.Native.IViewGroup.Add(Fuse.Controls.Native.IView)");
    __this->Add(uCast< ::g::Fuse::Controls::Native::iOS::View*>(child, ::TYPES[3/*Fuse.Controls.Native.iOS.View*/]));
}

// private void Fuse.Controls.Native.IViewGroup.Add(Fuse.Controls.Native.IView child, int index) :212
void DrawableViewGroup__FuseControlsNativeIViewGroupAdd1_fn(DrawableViewGroup* __this, uObject* child, int* index)
{
    uStackFrame __("Fuse.Controls.Native.iOS.DrawableViewGroup", "Fuse.Controls.Native.IViewGroup.Add(Fuse.Controls.Native.IView,int)");
    int index_ = *index;
    __this->Add1(uCast< ::g::Fuse::Controls::Native::iOS::View*>(child, ::TYPES[3/*Fuse.Controls.Native.iOS.View*/]), index_);
}

// private void Fuse.Controls.Native.IViewGroup.Remove(Fuse.Controls.Native.IView child) :207
void DrawableViewGroup__FuseControlsNativeIViewGroupRemove_fn(DrawableViewGroup* __this, uObject* child)
{
    uStackFrame __("Fuse.Controls.Native.iOS.DrawableViewGroup", "Fuse.Controls.Native.IViewGroup.Remove(Fuse.Controls.Native.IView)");
    __this->Remove(uCast< ::g::Fuse::Controls::Native::iOS::View*>(child, ::TYPES[3/*Fuse.Controls.Native.iOS.View*/]));
}

// public DrawableViewGroup New(Fuse.Controls.Native.OffscreenRendering initialState, Fuse.Visual visual) :141
void DrawableViewGroup__New1_fn(int* initialState, ::g::Fuse::Visual* visual, DrawableViewGroup** __retval)
{
    *__retval = DrawableViewGroup::New1(*initialState, visual);
}

// public override sealed void NotifyChildNewSize(Fuse.Controls.Native.iOS.View child, float2 size) :299
void DrawableViewGroup__NotifyChildNewSize_fn(DrawableViewGroup* __this, ::g::Fuse::Controls::Native::iOS::View* child, ::g::Uno::Float2* size)
{
}

// private void OnSetFrame(ObjC.Object handle) :235
void DrawableViewGroup__OnSetFrame_fn(DrawableViewGroup* __this, uObject* handle)
{
    __this->OnSetFrame(handle);
}

// public void Remove(Fuse.Controls.Native.iOS.View child) :229
void DrawableViewGroup__Remove_fn(DrawableViewGroup* __this, ::g::Fuse::Controls::Native::iOS::View* child)
{
    __this->Remove(child);
}

// private static void Remove(ObjC.Object childHandle) :265
void DrawableViewGroup__Remove1_fn(uObject* childHandle)
{
    DrawableViewGroup::Remove1(childHandle);
}

// private static void SetSetFrameCallback(ObjC.Object handle, Uno.Action<ObjC.Object> callback) :283
void DrawableViewGroup__SetSetFrameCallback_fn(uObject* handle, uDelegate* callback)
{
    DrawableViewGroup::SetSetFrameCallback(handle, callback);
}

// private static void UpdateFrame(ObjC.Object sourceHandle, ObjC.Object targetHandle) :241
void DrawableViewGroup__UpdateFrame_fn(uObject* sourceHandle, uObject* targetHandle)
{
    DrawableViewGroup::UpdateFrame(sourceHandle, targetHandle);
}

// public DrawableViewGroup(Fuse.Controls.Native.OffscreenRendering initialState, Fuse.Visual visual) [instance] :141
void DrawableViewGroup::ctor_2(int initialState, ::g::Fuse::Visual* visual)
{
    uStackFrame __("Fuse.Controls.Native.iOS.DrawableViewGroup", ".ctor(Fuse.Controls.Native.OffscreenRendering,Fuse.Visual)");
    ctor_1(DrawableViewGroup::Create());
    _visual = visual;
    DrawableViewGroup::SetSetFrameCallback(Handle(), uDelegate::New(::TYPES[0/*Uno.Action<ObjC.Object>*/], (void*)DrawableViewGroup__OnSetFrame_fn, this));
    ::g::Fuse::Controls::Native::iOS::InputDispatch::AddListener(visual, Handle());
    _container = DrawableViewGroup::CreateContainer();
    ::g::Fuse::Controls::Native::iOS::InputDispatch::AddListener(visual, _container);
    _renderer = (uObject*)::g::Fuse::Controls::Native::iOS::NativeViewRenderer::New1(_container);
    _offscreenEnabled = (initialState == 0);

    if (!_offscreenEnabled)
        DrawableViewGroup::Add2(Handle(), _container);
}

// public void Add(Fuse.Controls.Native.iOS.View child) [instance] :217
void DrawableViewGroup::Add(::g::Fuse::Controls::Native::iOS::View* child)
{
    uStackFrame __("Fuse.Controls.Native.iOS.DrawableViewGroup", "Add(Fuse.Controls.Native.iOS.View)");
    uPtr(child)->Parent(this);
    DrawableViewGroup::Add2(_container, child->Handle());
}

// public void Add(Fuse.Controls.Native.iOS.View child, int index) [instance] :223
void DrawableViewGroup::Add1(::g::Fuse::Controls::Native::iOS::View* child, int index)
{
    uStackFrame __("Fuse.Controls.Native.iOS.DrawableViewGroup", "Add(Fuse.Controls.Native.iOS.View,int)");
    uPtr(child)->Parent(this);
    DrawableViewGroup::Add3(_container, child->Handle(), index);
}

// private void OnSetFrame(ObjC.Object handle) [instance] :235
void DrawableViewGroup::OnSetFrame(uObject* handle)
{
    DrawableViewGroup::UpdateFrame(handle, _container);
}

// public void Remove(Fuse.Controls.Native.iOS.View child) [instance] :229
void DrawableViewGroup::Remove(::g::Fuse::Controls::Native::iOS::View* child)
{
    uStackFrame __("Fuse.Controls.Native.iOS.DrawableViewGroup", "Remove(Fuse.Controls.Native.iOS.View)");
    DrawableViewGroup::Remove1(uPtr(child)->Handle());
    child->Parent(NULL);
}

// private static void Add(ObjC.Object parentHandle, ObjC.Object childHandle) [static] :249
void DrawableViewGroup::Add2(uObject* parentHandle, uObject* childHandle)
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

// private static void Add(ObjC.Object parentHandle, ObjC.Object childHandle, int index) [static] :257
void DrawableViewGroup::Add3(uObject* parentHandle, uObject* childHandle, int index)
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

// private static ObjC.Object Create() [static] :273
uObject* DrawableViewGroup::Create()
{
    @autoreleasepool
    {
        return ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1([] () -> ::id
        {
            ::SizeControl* control = [[::SizeControl alloc] init];
            			[control setOpaque:false];
            			[control setMultipleTouchEnabled:true];
            			return control;
        } ());
        
    }
    
}

// private static ObjC.Object CreateContainer() [static] :290
uObject* DrawableViewGroup::CreateContainer()
{
    @autoreleasepool
    {
        return ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1([] () -> ::id
        {
            ::UIControl* control = [[::UIControl alloc] init];
            			[control setOpaque:false];
            			[control setMultipleTouchEnabled:true];
            			control.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
            			return control;
        } ());
        
    }
    
}

// public DrawableViewGroup New(Fuse.Controls.Native.OffscreenRendering initialState, Fuse.Visual visual) [static] :141
DrawableViewGroup* DrawableViewGroup::New1(int initialState, ::g::Fuse::Visual* visual)
{
    DrawableViewGroup* obj1 = (DrawableViewGroup*)uNew(DrawableViewGroup_typeof());
    obj1->ctor_2(initialState, visual);
    return obj1;
}

// private static void Remove(ObjC.Object childHandle) [static] :265
void DrawableViewGroup::Remove1(uObject* childHandle)
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

// private static void SetSetFrameCallback(ObjC.Object handle, Uno.Action<ObjC.Object> callback) [static] :283
void DrawableViewGroup::SetSetFrameCallback(uObject* handle, uDelegate* callback)
{
    @autoreleasepool
    {
        [] (::id handle, ::uObjC::Function<void, ::id> callback) -> void
        {
            ::SizeControl* control = (::SizeControl*)handle;
            			[handle setOnSetFrameCallback: callback];
        } (::g::ObjC::Helpers::GetHandle(handle), [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void, ::id>
        {
            return [[^ void (::id arg)
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->InvokeVoid(::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1(arg));
                
            } copy] autorelease];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: callback]));
        
    }
    
}

// private static void UpdateFrame(ObjC.Object sourceHandle, ObjC.Object targetHandle) [static] :241
void DrawableViewGroup::UpdateFrame(uObject* sourceHandle, uObject* targetHandle)
{
    @autoreleasepool
    {
        [] (::id sourceHandle, ::id targetHandle) -> void
        {
            ::UIView* source =  (::UIView*)sourceHandle;
            			::UIView* target =  (::UIView*)targetHandle;
            			[target setFrame: { target.frame.origin, source.frame.size }];
        } (::g::ObjC::Helpers::GetHandle(sourceHandle), ::g::ObjC::Helpers::GetHandle(targetHandle));
        
    }
    
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
