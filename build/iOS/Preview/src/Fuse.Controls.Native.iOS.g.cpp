// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseControlsNative_bundle.h>
#include <Fuse.Controls.Native.iOS.FocusHelpers.h>
#include <Fuse.Controls.Native.iOS.FocusHelpers.PerformBecomeFirstResponder.h>
#include <Fuse.Controls.Native.iOS.INativeFocusListener.h>
#include <Fuse.Controls.Native.iOS.iOSBlitter.h>
#include <Fuse.Controls.Native.iOS.iOSDevice.ScreenOrientation.h>
#include <Fuse.Controls.Native.iOS.NativeFocus.h>
#include <Fuse.Controls.Native.iOS.OSVersion.h>
#include <Fuse.Controls.Native.iOS.UITouch.TouchPhase.h>
#include <Fuse.Controls.Native.iOS.ViewParent.h>
#include <ObjC.Object.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Float.h>
#include <Uno.Float4x4.h>
#include <Uno.Graphics.BlendOperand.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Graphics.VertexAttributeType.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.Int.h>
#include <Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <Uno.String.h>
static uString* STRINGS[1];
static uType* TYPES[3];

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.42.4/ios/$.uno
// ---------------------------------------------------------------------------------------------------

// internal abstract extern interface INativeFocusListener :350
// {
uInterfaceType* INativeFocusListener_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.iOS.INativeFocusListener", 0, 0);
    return type;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.42.4/ios/$.uno
// ---------------------------------------------------------------------------------------------------

// internal sealed extern class iOSBlitter :1673
// {
// static iOSBlitter() :1673
static void iOSBlitter__cctor__fn(uType* __type)
{
    iOSBlitter::Singleton_ = iOSBlitter::New1();
}

static void iOSBlitter_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Float2_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::iOSBlitter, _draw_fbdb836b), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::iOSBlitter, Blit_v_fbdb836b_3_4_1), 0,
        ::TYPES[0/*float2[]*/], offsetof(::g::Fuse::Controls::Native::iOS::iOSBlitter, Blit_verts_fbdb836b_3_3_5), 0,
        type, (uintptr_t)&::g::Fuse::Controls::Native::iOS::iOSBlitter::Singleton_, uFieldFlagsStatic);
}

uType* iOSBlitter_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(iOSBlitter);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.iOS.iOSBlitter", options);
    type->fp_build_ = iOSBlitter_build;
    type->fp_ctor_ = (void*)iOSBlitter__New1_fn;
    type->fp_cctor_ = iOSBlitter__cctor__fn;
    return type;
}

// public generated iOSBlitter() :1673
void iOSBlitter__ctor__fn(iOSBlitter* __this)
{
    __this->ctor_();
}

// public void Blit(texture2D vt, float2 pos, float2 size, float4x4 localToClipTransform) :1677
void iOSBlitter__Blit_fn(iOSBlitter* __this, ::g::Uno::Graphics::Texture2D* vt, ::g::Uno::Float2* pos, ::g::Uno::Float2* size, ::g::Uno::Float4x4* localToClipTransform)
{
    __this->Blit(vt, *pos, *size, *localToClipTransform);
}

// private generated void init_DrawCalls() :1673
void iOSBlitter__init_DrawCalls_fn(iOSBlitter* __this)
{
    __this->init_DrawCalls();
}

// public generated iOSBlitter New() :1673
void iOSBlitter__New1_fn(iOSBlitter** __retval)
{
    *__retval = iOSBlitter::New1();
}

uSStrong<iOSBlitter*> iOSBlitter::Singleton_;

// public generated iOSBlitter() [instance] :1673
void iOSBlitter::ctor_()
{
    init_DrawCalls();
}

// public void Blit(texture2D vt, float2 pos, float2 size, float4x4 localToClipTransform) [instance] :1677
void iOSBlitter::Blit(::g::Uno::Graphics::Texture2D* vt, ::g::Uno::Float2 pos, ::g::Uno::Float2 size, ::g::Uno::Float4x4 localToClipTransform)
{
    uStackFrame __("Fuse.Controls.Native.iOS.iOSBlitter", "Blit(texture2D,float2,float2,float4x4)");
    _draw_fbdb836b.BlendEnabled(true);
    _draw_fbdb836b.DepthTestEnabled(false);
    _draw_fbdb836b.CullFace(0);
    _draw_fbdb836b.BlendSrcAlpha(7);
    _draw_fbdb836b.BlendDstRgb(3);
    _draw_fbdb836b.Use();
    _draw_fbdb836b.Attrib1(0, 2, Blit_v_fbdb836b_3_4_1, 8, 0);
    _draw_fbdb836b.Uniform2(1, size);
    _draw_fbdb836b.Uniform2(2, pos);
    _draw_fbdb836b.Uniform12(3, localToClipTransform);
    _draw_fbdb836b.Sampler2(4, vt);
    _draw_fbdb836b.DrawArrays(uPtr(Blit_verts_fbdb836b_3_3_5)->Length());
}

// private generated void init_DrawCalls() [instance] :1673
void iOSBlitter::init_DrawCalls()
{
    uStackFrame __("Fuse.Controls.Native.iOS.iOSBlitter", "init_DrawCalls()");
    uArray* verts_fbdb836b_3_3_0 = uArray::Init< ::g::Uno::Float2>(::TYPES[0/*float2[]*/], 6, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 1.0f));
    Blit_v_fbdb836b_3_4_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(verts_fbdb836b_3_3_0), 0);
    Blit_verts_fbdb836b_3_3_5 = verts_fbdb836b_3_3_0;
    _draw_fbdb836b = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseControlsNative_bundle::iOSBlitter0a63f4bb());
}

// public generated iOSBlitter New() [static] :1673
iOSBlitter* iOSBlitter::New1()
{
    iOSBlitter* obj1 = (iOSBlitter*)uNew(iOSBlitter_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.42.4/ios/$.uno
// ---------------------------------------------------------------------------------------------------

// internal static extern class NativeFocus :356
// {
// static NativeFocus() :356
static void NativeFocus__cctor__fn(uType* __type)
{
    NativeFocus::_listeners_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[1/*Uno.Collections.Dictionary<ObjC.Object, Fuse.Controls.Native.iOS.INativeFocusListener>*/]));
}

static void NativeFocus_build(uType* type)
{
    ::TYPES[1] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::ObjC::Object_typeof(), ::g::Fuse::Controls::Native::iOS::INativeFocusListener_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Controls::Native::iOS::INativeFocusListener_typeof();
    type->SetFields(0,
        ::TYPES[1/*Uno.Collections.Dictionary<ObjC.Object, Fuse.Controls.Native.iOS.INativeFocusListener>*/], (uintptr_t)&::g::Fuse::Controls::Native::iOS::NativeFocus::_listeners_, uFieldFlagsStatic);
}

uClassType* NativeFocus_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Native.iOS.NativeFocus", options);
    type->fp_build_ = NativeFocus_build;
    type->fp_cctor_ = NativeFocus__cctor__fn;
    return type;
}

// public static void AddListener(ObjC.Object handle, Fuse.Controls.Native.iOS.INativeFocusListener listener) :362
void NativeFocus__AddListener_fn(uObject* handle, uObject* listener)
{
    NativeFocus::AddListener(handle, listener);
}

// public static void RaiseFocusGained(ObjC.Object handle) :372
void NativeFocus__RaiseFocusGained_fn(uObject* handle)
{
    NativeFocus::RaiseFocusGained(handle);
}

// public static void RaiseFocusLost(ObjC.Object handle) :380
void NativeFocus__RaiseFocusLost_fn(uObject* handle)
{
    NativeFocus::RaiseFocusLost(handle);
}

// public static void RemoveListener(ObjC.Object handle) :367
void NativeFocus__RemoveListener_fn(uObject* handle)
{
    NativeFocus::RemoveListener(handle);
}

uSStrong< ::g::Uno::Collections::Dictionary*> NativeFocus::_listeners_;

// public static void AddListener(ObjC.Object handle, Fuse.Controls.Native.iOS.INativeFocusListener listener) [static] :362
void NativeFocus::AddListener(uObject* handle, uObject* listener)
{
    uStackFrame __("Fuse.Controls.Native.iOS.NativeFocus", "AddListener(ObjC.Object,Fuse.Controls.Native.iOS.INativeFocusListener)");
    NativeFocus_typeof()->Init();
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(NativeFocus::_listeners()), handle, listener);
}

// public static void RaiseFocusGained(ObjC.Object handle) [static] :372
void NativeFocus::RaiseFocusGained(uObject* handle)
{
    uStackFrame __("Fuse.Controls.Native.iOS.NativeFocus", "RaiseFocusGained(ObjC.Object)");
    NativeFocus_typeof()->Init();
    bool ret1;
    uObject* ret2;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(NativeFocus::_listeners()), handle, &ret1), ret1))
        ::g::Fuse::Controls::Native::iOS::INativeFocusListener::FocusGained(uInterface(uPtr((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(NativeFocus::_listeners()), handle, &ret2), ret2)), ::TYPES[2/*Fuse.Controls.Native.iOS.INativeFocusListener*/]));
}

// public static void RaiseFocusLost(ObjC.Object handle) [static] :380
void NativeFocus::RaiseFocusLost(uObject* handle)
{
    uStackFrame __("Fuse.Controls.Native.iOS.NativeFocus", "RaiseFocusLost(ObjC.Object)");
    NativeFocus_typeof()->Init();
    bool ret3;
    uObject* ret4;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(NativeFocus::_listeners()), handle, &ret3), ret3))
        ::g::Fuse::Controls::Native::iOS::INativeFocusListener::FocusLost(uInterface(uPtr((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(NativeFocus::_listeners()), handle, &ret4), ret4)), ::TYPES[2/*Fuse.Controls.Native.iOS.INativeFocusListener*/]));
}

// public static void RemoveListener(ObjC.Object handle) [static] :367
void NativeFocus::RemoveListener(uObject* handle)
{
    uStackFrame __("Fuse.Controls.Native.iOS.NativeFocus", "RemoveListener(ObjC.Object)");
    NativeFocus_typeof()->Init();
    bool ret5;
    ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(NativeFocus::_listeners()), handle, &ret5);
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.42.4/ios/$.uno
// ---------------------------------------------------------------------------------------------------

// public sealed extern class OSVersion :1298
// {
static void OSVersion_build(uType* type)
{
    ::STRINGS[0] = uString::Const(".");
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::OSVersion, Major), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::OSVersion, Minor), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::OSVersion, Patch), 0);
    type->Reflection.SetFields(3,
        new uField("Major", 0),
        new uField("Minor", 1),
        new uField("Patch", 2));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)OSVersion__New1_fn, 0, true, type, 3, ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), ::g::Uno::Int_typeof()));
}

uType* OSVersion_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(OSVersion);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.iOS.OSVersion", options);
    type->fp_build_ = OSVersion_build;
    type->fp_ToString = (void(*)(uObject*, uString**))OSVersion__ToString_fn;
    return type;
}

// public OSVersion(int major, int minor, int patch) :1303
void OSVersion__ctor__fn(OSVersion* __this, int* major, int* minor, int* patch)
{
    __this->ctor_(*major, *minor, *patch);
}

// public OSVersion New(int major, int minor, int patch) :1303
void OSVersion__New1_fn(int* major, int* minor, int* patch, OSVersion** __retval)
{
    *__retval = OSVersion::New1(*major, *minor, *patch);
}

// public override sealed string ToString() :1309
void OSVersion__ToString_fn(OSVersion* __this, uString** __retval)
{
    uStackFrame __("Fuse.Controls.Native.iOS.OSVersion", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition(uBox<int>(::g::Uno::Int_typeof(), __this->Major), ::STRINGS[0/*"."*/]), uBox<int>(::g::Uno::Int_typeof(), __this->Minor)), ::STRINGS[0/*"."*/]), uBox<int>(::g::Uno::Int_typeof(), __this->Patch)), void();
}

// public OSVersion(int major, int minor, int patch) [instance] :1303
void OSVersion::ctor_(int major, int minor, int patch)
{
    Major = major;
    Minor = minor;
    Patch = patch;
}

// public OSVersion New(int major, int minor, int patch) [static] :1303
OSVersion* OSVersion::New1(int major, int minor, int patch)
{
    OSVersion* obj1 = (OSVersion*)uNew(OSVersion_typeof());
    obj1->ctor_(major, minor, patch);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.42.4/ios/$.uno
// ---------------------------------------------------------------------------------------------------

// private sealed class FocusHelpers.PerformBecomeFirstResponder :467
// {
static void FocusHelpers__PerformBecomeFirstResponder_build(uType* type)
{
    type->SetFields(0,
        ::g::ObjC::Object_typeof(), offsetof(::g::Fuse::Controls::Native::iOS::FocusHelpers__PerformBecomeFirstResponder, _target), 0);
}

uType* FocusHelpers__PerformBecomeFirstResponder_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(FocusHelpers__PerformBecomeFirstResponder);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.iOS.FocusHelpers.PerformBecomeFirstResponder", options);
    type->fp_build_ = FocusHelpers__PerformBecomeFirstResponder_build;
    return type;
}

// public PerformBecomeFirstResponder(ObjC.Object target) :471
void FocusHelpers__PerformBecomeFirstResponder__ctor__fn(FocusHelpers__PerformBecomeFirstResponder* __this, uObject* target)
{
    __this->ctor_(target);
}

// public void BecomeFirstResponder() :476
void FocusHelpers__PerformBecomeFirstResponder__BecomeFirstResponder_fn(FocusHelpers__PerformBecomeFirstResponder* __this)
{
    __this->BecomeFirstResponder();
}

// public PerformBecomeFirstResponder New(ObjC.Object target) :471
void FocusHelpers__PerformBecomeFirstResponder__New1_fn(uObject* target, FocusHelpers__PerformBecomeFirstResponder** __retval)
{
    *__retval = FocusHelpers__PerformBecomeFirstResponder::New1(target);
}

// public PerformBecomeFirstResponder(ObjC.Object target) [instance] :471
void FocusHelpers__PerformBecomeFirstResponder::ctor_(uObject* target)
{
    _target = target;
}

// public void BecomeFirstResponder() [instance] :476
void FocusHelpers__PerformBecomeFirstResponder::BecomeFirstResponder()
{
    ::g::Fuse::Controls::Native::iOS::FocusHelpers::BecomeFirstResponder(_target);
}

// public PerformBecomeFirstResponder New(ObjC.Object target) [static] :471
FocusHelpers__PerformBecomeFirstResponder* FocusHelpers__PerformBecomeFirstResponder::New1(uObject* target)
{
    FocusHelpers__PerformBecomeFirstResponder* obj1 = (FocusHelpers__PerformBecomeFirstResponder*)uNew(FocusHelpers__PerformBecomeFirstResponder_typeof());
    obj1->ctor_(target);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.42.4/ios/$.uno
// ---------------------------------------------------------------------------------------------------

// public enum iOSDevice.ScreenOrientation :1318
uEnumType* iOSDevice__ScreenOrientation_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Controls.Native.iOS.iOSDevice.ScreenOrientation", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Portrait", 0LL,
        "Landscape", 1LL);
    return type;
}

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.42.4/ios/$.uno
// ---------------------------------------------------------------------------------------------------

// public enum UITouch.TouchPhase :1142
uEnumType* UITouch__TouchPhase_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Controls.Native.iOS.UITouch.TouchPhase", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "Began", 0LL,
        "Moved", 1LL,
        "Staionary", 2LL,
        "Ended", 3LL,
        "Cancelled", 4LL);
    return type;
}

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.42.4/ios/$.uno
// ---------------------------------------------------------------------------------------------------

// public abstract extern class ViewParent :3718
// {
static void ViewParent_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(ViewParent_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(ViewParent_type, interface1));
    type->SetFields(5);
    type->Reflection.SetFunctions(1,
        new uFunction("NotifyChildNewSize", NULL, NULL, offsetof(ViewParent_type, fp_NotifyChildNewSize), false, uVoid_typeof(), 2, ::g::Fuse::Controls::Native::iOS::View_typeof(), ::g::Uno::Float2_typeof()));
}

ViewParent_type* ViewParent_typeof()
{
    static uSStrong<ViewParent_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::iOS::View_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ViewParent);
    options.TypeSize = sizeof(ViewParent_type);
    type = (ViewParent_type*)uClassType::New("Fuse.Controls.Native.iOS.ViewParent", options);
    type->fp_build_ = ViewParent_build;
    type->interface0.fp_Show = (void(*)(uObject*))::g::Fuse::Controls::Native::iOS::View__Show_fn;
    type->interface0.fp_Hide = (void(*)(uObject*))::g::Fuse::Controls::Native::iOS::View__Hide_fn;
    type->interface0.fp_BringToFront = (void(*)(uObject*))::g::Fuse::Controls::Native::iOS::View__BringToFront_fn;
    type->interface0.fp_set_Transform = (void(*)(uObject*, ::g::Uno::Float4x4*))::g::Fuse::Controls::Native::iOS::View__set_Transform_fn;
    type->interface0.fp_set_Position = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::iOS::View__set_Position_fn;
    type->interface0.fp_set_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Native::iOS::View__set_Size_fn;
    type->interface0.fp_set_Opacity = (void(*)(uObject*, float*))::g::Fuse::Controls::Native::iOS::View__set_Opacity_fn;
    type->interface0.fp_set_IsEnabled = (void(*)(uObject*, bool*))::g::Fuse::Controls::Native::iOS::View__set_IsEnabled_fn;
    type->interface0.fp_set_Background = (void(*)(uObject*, ::g::Fuse::Drawing::Brush*))::g::Fuse::Controls::Native::iOS::View__set_Background_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::iOS::View__Dispose_fn;
    return type;
}

// protected ViewParent(ObjC.Object handle) :3720
void ViewParent__ctor_1_fn(ViewParent* __this, uObject* handle)
{
    __this->ctor_1(handle);
}

// protected ViewParent(ObjC.Object handle) [instance] :3720
void ViewParent::ctor_1(uObject* handle)
{
    ctor_(handle);
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
