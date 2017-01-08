// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseAndroid_bundle.h>
#include <_root.FuseControls_bundle.h>
#include <_root.FuseControlsNative_bundle.h>
#include <_root.FuseControlsNavigation_FuseControlsShape_Color_Property.h>
#include <_root.FuseControlsPrimitives_bundle.h>
#include <_root.FuseControlsPrimitives_FuseControlsButtonBase_Text_Property.h>
#include <_root.FuseControlsPrimitives_FuseControlsShape_Fill_Property.h>
#include <_root.FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property.h>
#include <_root.FuseControlsPrimitives_FuseControlsTextControl_Value_Property.h>
#include <_root.FuseControlsPrimitives_FuseControlsToggleControl_Value_Property.h>
#include <_root.FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property.h>
#include <_root.FuseControlsPrimitives_FuseDrawingStroke_Brush_Property.h>
#include <_root.FuseControlsPrimitives_FuseDrawingStroke_Color_Property.h>
#include <_root.FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property.h>
#include <_root.FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property.h>
#include <_root.FuseControlsPrimitives_FuseElementsElement_Opacity_Property.h>
#include <_root.FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property.h>
#include <_root.FuseControlsScrollView_FuseControlsScrollViewBase_KeepFoc-1ad9c37f.h>
#include <_root.FuseControlsScrollView_FuseControlsScrollViewBase_UserScr-80f342de.h>
#include <_root.FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property.h>
#include <_root.FuseControlsScrollView_FuseTriggersWhileBool_Value_Property.h>
#include <_root.FuseControlsVideo_bundle.h>
#include <_root.FuseCore_bundle.h>
#include <_root.FuseDrawing_bundle.h>
#include <_root.FuseDrawingPolygons_bundle.h>
#include <_root.FuseDrawingPrimitives_bundle.h>
#include <_root.FuseEffects_bundle.h>
#include <_root.FuseElements_bundle.h>
#include <_root.FuseReactive_bundle.h>
#include <_root.FuseText_bundle.h>
#include <_root.HashableWeakReference.h>
#include <_root.OutracksSimulatorClientUno_bundle.h>
#include <_root.OutracksSimulatorClientUno_FuseControlsShape_Color_Property.h>
#include <_root.OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property.h>
#include <_root.OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property.h>
#include <_root.OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property.h>
#include <_root.OutracksSimulatorClientUno_FuseTriggersWhileBool_Value_Property.h>
#include <_root.OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Fi-a4cead99.h>
#include <_root.OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Me-307dad8c.h>
#include <_root.OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Sh-369acd0e.h>
#include <_root.OutracksSimulatorClientUno_OutracksSimulatorErrorToast_St-a28a5744.h>
#include <_root.UnoCore_bundle.h>
#include <_root.WeakDictionary-2.h>
#include <Fuse.Controls.ButtonBase.h>
#include <Fuse.Controls.ScrollViewBase.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.ToggleControl.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Effects.DropShadow.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Scroller.h>
#include <Fuse.Gestures.SwipeGesture.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Outracks.Simulator.ErrorToast.h>
#include <Uno.Bool.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Int.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <Uno.String.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
#include <Uno.WeakReference-1.h>
static uString* STRINGS[165];
static uType* TYPES[3];

namespace g{

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Android/0.42.4/.uno/package
// ----------------------------------------------------------------------------------------------

// public static generated class FuseAndroid_bundle :0
// {
// static FuseAndroid_bundle() :0
static void FuseAndroid_bundle__cctor__fn(uType* __type)
{
    FuseAndroid_bundle::Blitter83cfc6f0_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[0/*"uniform vec...*/], ::STRINGS[1/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 5, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"f"*/]));
}

static void FuseAndroid_bundle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("uniform vec2 c, b;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 e;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    e = a;\n"
        "    gl_Position = d * vec4(c + (a * b), 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[1] = uString::Const("uniform sampler2D f;\n"
        "\n"
        "varying vec2 e;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(f, e);\n"
        "}\n"
        "");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[6] = uString::Const("f");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseAndroid_bundle::Blitter83cfc6f0_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("Blitter83cfc6f0", 0));
}

uClassType* FuseAndroid_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseAndroid_bundle", options);
    type->fp_build_ = FuseAndroid_bundle_build;
    type->fp_cctor_ = FuseAndroid_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseAndroid_bundle::Blitter83cfc6f0_;
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls/0.42.4/.uno/package
// -----------------------------------------------------------------------------------------------

// public static generated class FuseControls_bundle :0
// {
// static FuseControls_bundle() :0
static void FuseControls_bundle__cctor__fn(uType* __type)
{
    FuseControls_bundle::SolidRectangle2f148815_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[7/*"uniform mat...*/], ::STRINGS[8/*"uniform vec...*/], 2, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 18, ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[2/*"a"*/], ::STRINGS[5/*"d"*/], ::STRINGS[9/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[14/*"k"*/], ::STRINGS[15/*"l"*/], ::STRINGS[16/*"m"*/], ::STRINGS[17/*"n"*/], ::STRINGS[18/*"o"*/], ::STRINGS[19/*"p"*/], ::STRINGS[20/*"q"*/], ::STRINGS[21/*"t"*/]));
    FuseControls_bundle::SolidRectangle7463714b_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[22/*"uniform mat...*/], ::STRINGS[23/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 11, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[9/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[15/*"l"*/]));
    FuseControls_bundle::SolidRectangled1bbfcb0_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[24/*"uniform mat...*/], ::STRINGS[25/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/]));
    FuseControls_bundle::Viewportd3ce851b_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[26/*"uniform mat...*/], ::STRINGS[27/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[9/*"e"*/]));
}

static void FuseControls_bundle_build(uType* type)
{
    ::STRINGS[7] = uString::Const("uniform mat4 q, d;\n"
        "uniform vec2 e, f, g, h, i, k, j;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 r, s;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 u = ((((e * (false ? vec2(a.x, float(1) - a.y) : a)) - f) / g) * h) + i;\n"
        "    r = k + (u * j);\n"
        "    s = u;\n"
        "    gl_Position = d * (q * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[8] = uString::Const("uniform vec2 m, l;\n"
        "uniform vec4 n;\n"
        "uniform float o, p;\n"
        "\n"
        "uniform sampler2D t;\n"
        "\n"
        "varying vec2 r, s;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 u = (c ? vec4(float(0)) : texture2D(t, b ? (m + (fract(r) * l)) : s)) * n;\n"
        "    gl_FragColor = vec4((u.xyz * u.w) * o, u.w * o) * p;\n"
        "}\n"
        "");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[9] = uString::Const("e");
    ::STRINGS[6] = uString::Const("f");
    ::STRINGS[10] = uString::Const("g");
    ::STRINGS[11] = uString::Const("h");
    ::STRINGS[12] = uString::Const("i");
    ::STRINGS[13] = uString::Const("j");
    ::STRINGS[14] = uString::Const("k");
    ::STRINGS[15] = uString::Const("l");
    ::STRINGS[16] = uString::Const("m");
    ::STRINGS[17] = uString::Const("n");
    ::STRINGS[18] = uString::Const("o");
    ::STRINGS[19] = uString::Const("p");
    ::STRINGS[20] = uString::Const("q");
    ::STRINGS[21] = uString::Const("t");
    ::STRINGS[22] = uString::Const("uniform mat4 h, b;\n"
        "uniform vec2 c, d, e, i;\n"
        "uniform float j;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying float k;\n"
        "\n"
        "float m(vec2 n, vec2 o, float p){\n"
        "    vec2 q = (n * c) - d;\n"
        "    float r = dot(q, o) / p;\n"
        "    return (r - e.x) / e.y;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    k = m(false ? vec2(a.x, float(1) - a.y) : a, i, j);\n"
        "    gl_Position = b * (h * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[23] = uString::Const("uniform float f, g;\n"
        "\n"
        "uniform sampler2D l;\n"
        "\n"
        "varying float k;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 n = texture2D(l, vec2(k, 0.5));\n"
        "    gl_FragColor = vec4((n.xyz * n.w) * f, n.w * f) * g;\n"
        "}\n"
        "");
    ::STRINGS[24] = uString::Const("uniform mat4 d, b;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_Position = b * (d * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[25] = uString::Const("uniform vec4 c;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = c;\n"
        "}\n"
        "");
    ::STRINGS[26] = uString::Const("uniform mat4 c, b;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 d;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    d = true ? vec2(a.x, float(1) - a.y) : a;\n"
        "    gl_Position = b * (c * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[27] = uString::Const("uniform sampler2D e;\n"
        "\n"
        "varying vec2 d;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(e, d);\n"
        "}\n"
        "");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControls_bundle::SolidRectangle2f148815_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControls_bundle::SolidRectangle7463714b_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControls_bundle::SolidRectangled1bbfcb0_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControls_bundle::Viewportd3ce851b_, uFieldFlagsStatic);
    type->Reflection.SetFields(4,
        new uField("SolidRectangle2f148815", 0),
        new uField("SolidRectangle7463714b", 1),
        new uField("SolidRectangled1bbfcb0", 2),
        new uField("Viewportd3ce851b", 3));
}

uClassType* FuseControls_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseControls_bundle", options);
    type->fp_build_ = FuseControls_bundle_build;
    type->fp_cctor_ = FuseControls_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControls_bundle::SolidRectangle2f148815_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControls_bundle::SolidRectangle7463714b_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControls_bundle::SolidRectangled1bbfcb0_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControls_bundle::Viewportd3ce851b_;
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.42.4/.uno/package
// ------------------------------------------------------------------------------------------------------

// public static generated class FuseControlsNative_bundle :0
// {
// static FuseControlsNative_bundle() :0
static void FuseControlsNative_bundle__cctor__fn(uType* __type)
{
    FuseControlsNative_bundle::iOSBlitter0a63f4bb_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[28/*"uniform vec...*/], ::STRINGS[1/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 5, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"f"*/]));
}

static void FuseControlsNative_bundle_build(uType* type)
{
    ::STRINGS[28] = uString::Const("uniform vec2 c, b;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 e;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    e = vec2(a.x, 1.0 - a.y);\n"
        "    gl_Position = d * vec4(c + (a * b), 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[1] = uString::Const("uniform sampler2D f;\n"
        "\n"
        "varying vec2 e;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(f, e);\n"
        "}\n"
        "");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[6] = uString::Const("f");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControlsNative_bundle::iOSBlitter0a63f4bb_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("iOSBlitter0a63f4bb", 0));
}

uClassType* FuseControlsNative_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseControlsNative_bundle", options);
    type->fp_build_ = FuseControlsNative_bundle_build;
    type->fp_cctor_ = FuseControlsNative_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControlsNative_bundle::iOSBlitter0a63f4bb_;
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Navigation/0.42.4/.uno/ux11/$.uno
// -------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsNavigation_FuseControlsShape_Color_Property :255
// {
static void FuseControlsNavigation_FuseControlsShape_Color_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Controls::Shape_typeof(), offsetof(::g::FuseControlsNavigation_FuseControlsShape_Color_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsNavigation_FuseControlsShape_Color_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsNavigation_FuseControlsShape_Color_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsNavigation_FuseControlsShape_Color_Property", options);
    type->fp_build_ = FuseControlsNavigation_FuseControlsShape_Color_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsNavigation_FuseControlsShape_Color_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsNavigation_FuseControlsShape_Color_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsNavigation_FuseControlsShape_Color_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsNavigation_FuseControlsShape_Color_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsNavigation_FuseControlsShape_Color_Property(Fuse.Controls.Shape obj, Uno.UX.Selector name) :258
void FuseControlsNavigation_FuseControlsShape_Color_Property__ctor_2_fn(FuseControlsNavigation_FuseControlsShape_Color_Property* __this, ::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed float4 Get() :260
void FuseControlsNavigation_FuseControlsShape_Color_Property__Get_fn(FuseControlsNavigation_FuseControlsShape_Color_Property* __this, ::g::Uno::Float4* __retval)
{
    uStackFrame __("FuseControlsNavigation_FuseControlsShape_Color_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->Color(), void();
}

// public FuseControlsNavigation_FuseControlsShape_Color_Property New(Fuse.Controls.Shape obj, Uno.UX.Selector name) :258
void FuseControlsNavigation_FuseControlsShape_Color_Property__New1_fn(::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector* name, FuseControlsNavigation_FuseControlsShape_Color_Property** __retval)
{
    *__retval = FuseControlsNavigation_FuseControlsShape_Color_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :259
void FuseControlsNavigation_FuseControlsShape_Color_Property__get_Object_fn(FuseControlsNavigation_FuseControlsShape_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float4 v, Uno.UX.IPropertyListener origin) :261
void FuseControlsNavigation_FuseControlsShape_Color_Property__Set_fn(FuseControlsNavigation_FuseControlsShape_Color_Property* __this, ::g::Uno::Float4* v, uObject* origin)
{
    uStackFrame __("FuseControlsNavigation_FuseControlsShape_Color_Property", "Set(float4,Uno.UX.IPropertyListener)");
    ::g::Uno::Float4 v_ = *v;
    uPtr(__this->_obj)->SetColor(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :262
void FuseControlsNavigation_FuseControlsShape_Color_Property__get_SupportsOriginSetter_fn(FuseControlsNavigation_FuseControlsShape_Color_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public FuseControlsNavigation_FuseControlsShape_Color_Property(Fuse.Controls.Shape obj, Uno.UX.Selector name) [instance] :258
void FuseControlsNavigation_FuseControlsShape_Color_Property::ctor_2(::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public FuseControlsNavigation_FuseControlsShape_Color_Property New(Fuse.Controls.Shape obj, Uno.UX.Selector name) [static] :258
FuseControlsNavigation_FuseControlsShape_Color_Property* FuseControlsNavigation_FuseControlsShape_Color_Property::New1(::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsNavigation_FuseControlsShape_Color_Property* obj1 = (FuseControlsNavigation_FuseControlsShape_Color_Property*)uNew(FuseControlsNavigation_FuseControlsShape_Color_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/.uno/package
// ----------------------------------------------------------------------------------------------------------

// public static generated class FuseControlsPrimitives_bundle :0
// {
// static FuseControlsPrimitives_bundle() :0
static void FuseControlsPrimitives_bundle__cctor__fn(uType* __type)
{
    FuseControlsPrimitives_bundle::ImageElementDraw7660063a_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[29/*"uniform mat...*/], ::STRINGS[30/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[9/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[11/*"h"*/]));
}

static void FuseControlsPrimitives_bundle_build(uType* type)
{
    ::STRINGS[29] = uString::Const("uniform mat4 f, b;\n"
        "uniform vec2 c, d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    g = (a * c) + d;\n"
        "    gl_Position = b * (f * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[30] = uString::Const("uniform vec4 e;\n"
        "\n"
        "uniform sampler2D h;\n"
        "\n"
        "varying vec2 g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(h, g) * e;\n"
        "}\n"
        "");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[9] = uString::Const("e");
    ::STRINGS[6] = uString::Const("f");
    ::STRINGS[11] = uString::Const("h");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControlsPrimitives_bundle::ImageElementDraw7660063a_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("ImageElementDraw7660063a", 0));
}

uClassType* FuseControlsPrimitives_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseControlsPrimitives_bundle", options);
    type->fp_build_ = FuseControlsPrimitives_bundle_build;
    type->fp_cctor_ = FuseControlsPrimitives_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControlsPrimitives_bundle::ImageElementDraw7660063a_;
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/.uno/ux11/$.uno
// -------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseControlsButtonBase_Text_Property :623
// {
static void FuseControlsPrimitives_FuseControlsButtonBase_Text_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Controls::ButtonBase_typeof(), offsetof(::g::FuseControlsPrimitives_FuseControlsButtonBase_Text_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseControlsButtonBase_Text_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseControlsButtonBase_Text_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseControlsButtonBase_Text_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseControlsButtonBase_Text_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsPrimitives_FuseControlsButtonBase_Text_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseControlsButtonBase_Text_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsPrimitives_FuseControlsButtonBase_Text_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsPrimitives_FuseControlsButtonBase_Text_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsPrimitives_FuseControlsButtonBase_Text_Property(Fuse.Controls.ButtonBase obj, Uno.UX.Selector name) :626
void FuseControlsPrimitives_FuseControlsButtonBase_Text_Property__ctor_2_fn(FuseControlsPrimitives_FuseControlsButtonBase_Text_Property* __this, ::g::Fuse::Controls::ButtonBase* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed string Get() :628
void FuseControlsPrimitives_FuseControlsButtonBase_Text_Property__Get_fn(FuseControlsPrimitives_FuseControlsButtonBase_Text_Property* __this, uString** __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseControlsButtonBase_Text_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->Text(), void();
}

// public FuseControlsPrimitives_FuseControlsButtonBase_Text_Property New(Fuse.Controls.ButtonBase obj, Uno.UX.Selector name) :626
void FuseControlsPrimitives_FuseControlsButtonBase_Text_Property__New1_fn(::g::Fuse::Controls::ButtonBase* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseControlsButtonBase_Text_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseControlsButtonBase_Text_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :627
void FuseControlsPrimitives_FuseControlsButtonBase_Text_Property__get_Object_fn(FuseControlsPrimitives_FuseControlsButtonBase_Text_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(string v, Uno.UX.IPropertyListener origin) :629
void FuseControlsPrimitives_FuseControlsButtonBase_Text_Property__Set_fn(FuseControlsPrimitives_FuseControlsButtonBase_Text_Property* __this, uString* v, uObject* origin)
{
    uStackFrame __("FuseControlsPrimitives_FuseControlsButtonBase_Text_Property", "Set(string,Uno.UX.IPropertyListener)");
    uPtr(__this->_obj)->SetText(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :630
void FuseControlsPrimitives_FuseControlsButtonBase_Text_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseControlsButtonBase_Text_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public FuseControlsPrimitives_FuseControlsButtonBase_Text_Property(Fuse.Controls.ButtonBase obj, Uno.UX.Selector name) [instance] :626
void FuseControlsPrimitives_FuseControlsButtonBase_Text_Property::ctor_2(::g::Fuse::Controls::ButtonBase* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseControlsButtonBase_Text_Property New(Fuse.Controls.ButtonBase obj, Uno.UX.Selector name) [static] :626
FuseControlsPrimitives_FuseControlsButtonBase_Text_Property* FuseControlsPrimitives_FuseControlsButtonBase_Text_Property::New1(::g::Fuse::Controls::ButtonBase* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseControlsButtonBase_Text_Property* obj1 = (FuseControlsPrimitives_FuseControlsButtonBase_Text_Property*)uNew(FuseControlsPrimitives_FuseControlsButtonBase_Text_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/.uno/ux11/$.uno
// -------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseControlsShape_Fill_Property :659
// {
static void FuseControlsPrimitives_FuseControlsShape_Fill_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Controls::Shape_typeof(), offsetof(::g::FuseControlsPrimitives_FuseControlsShape_Fill_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseControlsShape_Fill_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseControlsShape_Fill_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseControlsShape_Fill_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseControlsShape_Fill_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsPrimitives_FuseControlsShape_Fill_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseControlsShape_Fill_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsPrimitives_FuseControlsShape_Fill_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsPrimitives_FuseControlsShape_Fill_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsPrimitives_FuseControlsShape_Fill_Property(Fuse.Controls.Shape obj, Uno.UX.Selector name) :662
void FuseControlsPrimitives_FuseControlsShape_Fill_Property__ctor_2_fn(FuseControlsPrimitives_FuseControlsShape_Fill_Property* __this, ::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed Fuse.Drawing.Brush Get() :664
void FuseControlsPrimitives_FuseControlsShape_Fill_Property__Get_fn(FuseControlsPrimitives_FuseControlsShape_Fill_Property* __this, ::g::Fuse::Drawing::Brush** __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseControlsShape_Fill_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->Fill(), void();
}

// public FuseControlsPrimitives_FuseControlsShape_Fill_Property New(Fuse.Controls.Shape obj, Uno.UX.Selector name) :662
void FuseControlsPrimitives_FuseControlsShape_Fill_Property__New1_fn(::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseControlsShape_Fill_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseControlsShape_Fill_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :663
void FuseControlsPrimitives_FuseControlsShape_Fill_Property__get_Object_fn(FuseControlsPrimitives_FuseControlsShape_Fill_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Fuse.Drawing.Brush v, Uno.UX.IPropertyListener origin) :665
void FuseControlsPrimitives_FuseControlsShape_Fill_Property__Set_fn(FuseControlsPrimitives_FuseControlsShape_Fill_Property* __this, ::g::Fuse::Drawing::Brush* v, uObject* origin)
{
    uStackFrame __("FuseControlsPrimitives_FuseControlsShape_Fill_Property", "Set(Fuse.Drawing.Brush,Uno.UX.IPropertyListener)");
    uPtr(__this->_obj)->Fill(v);
}

// public override sealed bool get_SupportsOriginSetter() :666
void FuseControlsPrimitives_FuseControlsShape_Fill_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseControlsShape_Fill_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public FuseControlsPrimitives_FuseControlsShape_Fill_Property(Fuse.Controls.Shape obj, Uno.UX.Selector name) [instance] :662
void FuseControlsPrimitives_FuseControlsShape_Fill_Property::ctor_2(::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseControlsShape_Fill_Property New(Fuse.Controls.Shape obj, Uno.UX.Selector name) [static] :662
FuseControlsPrimitives_FuseControlsShape_Fill_Property* FuseControlsPrimitives_FuseControlsShape_Fill_Property::New1(::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseControlsShape_Fill_Property* obj1 = (FuseControlsPrimitives_FuseControlsShape_Fill_Property*)uNew(FuseControlsPrimitives_FuseControlsShape_Fill_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/.uno/ux11/$.uno
// -------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property :641
// {
static void FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Controls::TextControl_typeof(), offsetof(::g::FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property(Fuse.Controls.TextControl obj, Uno.UX.Selector name) :644
void FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property__ctor_2_fn(FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property* __this, ::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed float4 Get() :646
void FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property__Get_fn(FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property* __this, ::g::Uno::Float4* __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->TextColor(), void();
}

// public FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property New(Fuse.Controls.TextControl obj, Uno.UX.Selector name) :644
void FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property__New1_fn(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :645
void FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property__get_Object_fn(FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float4 v, Uno.UX.IPropertyListener origin) :647
void FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property__Set_fn(FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property* __this, ::g::Uno::Float4* v, uObject* origin)
{
    uStackFrame __("FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property", "Set(float4,Uno.UX.IPropertyListener)");
    ::g::Uno::Float4 v_ = *v;
    uPtr(__this->_obj)->TextColor(v_);
}

// public override sealed bool get_SupportsOriginSetter() :648
void FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property(Fuse.Controls.TextControl obj, Uno.UX.Selector name) [instance] :644
void FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property::ctor_2(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property New(Fuse.Controls.TextControl obj, Uno.UX.Selector name) [static] :644
FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property* FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property::New1(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property* obj1 = (FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property*)uNew(FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/.uno/ux11/$.uno
// -------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseControlsTextControl_Value_Property :605
// {
static void FuseControlsPrimitives_FuseControlsTextControl_Value_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Controls::TextControl_typeof(), offsetof(::g::FuseControlsPrimitives_FuseControlsTextControl_Value_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseControlsTextControl_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseControlsTextControl_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseControlsTextControl_Value_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseControlsTextControl_Value_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsPrimitives_FuseControlsTextControl_Value_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseControlsTextControl_Value_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsPrimitives_FuseControlsTextControl_Value_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsPrimitives_FuseControlsTextControl_Value_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsPrimitives_FuseControlsTextControl_Value_Property(Fuse.Controls.TextControl obj, Uno.UX.Selector name) :608
void FuseControlsPrimitives_FuseControlsTextControl_Value_Property__ctor_2_fn(FuseControlsPrimitives_FuseControlsTextControl_Value_Property* __this, ::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed string Get() :610
void FuseControlsPrimitives_FuseControlsTextControl_Value_Property__Get_fn(FuseControlsPrimitives_FuseControlsTextControl_Value_Property* __this, uString** __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseControlsTextControl_Value_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->Value(), void();
}

// public FuseControlsPrimitives_FuseControlsTextControl_Value_Property New(Fuse.Controls.TextControl obj, Uno.UX.Selector name) :608
void FuseControlsPrimitives_FuseControlsTextControl_Value_Property__New1_fn(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseControlsTextControl_Value_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseControlsTextControl_Value_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :609
void FuseControlsPrimitives_FuseControlsTextControl_Value_Property__get_Object_fn(FuseControlsPrimitives_FuseControlsTextControl_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(string v, Uno.UX.IPropertyListener origin) :611
void FuseControlsPrimitives_FuseControlsTextControl_Value_Property__Set_fn(FuseControlsPrimitives_FuseControlsTextControl_Value_Property* __this, uString* v, uObject* origin)
{
    uStackFrame __("FuseControlsPrimitives_FuseControlsTextControl_Value_Property", "Set(string,Uno.UX.IPropertyListener)");
    uPtr(__this->_obj)->SetValue(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :612
void FuseControlsPrimitives_FuseControlsTextControl_Value_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseControlsTextControl_Value_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public FuseControlsPrimitives_FuseControlsTextControl_Value_Property(Fuse.Controls.TextControl obj, Uno.UX.Selector name) [instance] :608
void FuseControlsPrimitives_FuseControlsTextControl_Value_Property::ctor_2(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseControlsTextControl_Value_Property New(Fuse.Controls.TextControl obj, Uno.UX.Selector name) [static] :608
FuseControlsPrimitives_FuseControlsTextControl_Value_Property* FuseControlsPrimitives_FuseControlsTextControl_Value_Property::New1(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseControlsTextControl_Value_Property* obj1 = (FuseControlsPrimitives_FuseControlsTextControl_Value_Property*)uNew(FuseControlsPrimitives_FuseControlsTextControl_Value_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/.uno/ux11/$.uno
// -------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseControlsToggleControl_Value_Property :632
// {
static void FuseControlsPrimitives_FuseControlsToggleControl_Value_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Controls::ToggleControl_typeof(), offsetof(::g::FuseControlsPrimitives_FuseControlsToggleControl_Value_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseControlsToggleControl_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseControlsToggleControl_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseControlsToggleControl_Value_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseControlsToggleControl_Value_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsPrimitives_FuseControlsToggleControl_Value_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseControlsToggleControl_Value_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsPrimitives_FuseControlsToggleControl_Value_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsPrimitives_FuseControlsToggleControl_Value_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsPrimitives_FuseControlsToggleControl_Value_Property(Fuse.Controls.ToggleControl obj, Uno.UX.Selector name) :635
void FuseControlsPrimitives_FuseControlsToggleControl_Value_Property__ctor_2_fn(FuseControlsPrimitives_FuseControlsToggleControl_Value_Property* __this, ::g::Fuse::Controls::ToggleControl* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed bool Get() :637
void FuseControlsPrimitives_FuseControlsToggleControl_Value_Property__Get_fn(FuseControlsPrimitives_FuseControlsToggleControl_Value_Property* __this, bool* __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseControlsToggleControl_Value_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->Value(), void();
}

// public FuseControlsPrimitives_FuseControlsToggleControl_Value_Property New(Fuse.Controls.ToggleControl obj, Uno.UX.Selector name) :635
void FuseControlsPrimitives_FuseControlsToggleControl_Value_Property__New1_fn(::g::Fuse::Controls::ToggleControl* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseControlsToggleControl_Value_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseControlsToggleControl_Value_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :636
void FuseControlsPrimitives_FuseControlsToggleControl_Value_Property__get_Object_fn(FuseControlsPrimitives_FuseControlsToggleControl_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(bool v, Uno.UX.IPropertyListener origin) :638
void FuseControlsPrimitives_FuseControlsToggleControl_Value_Property__Set_fn(FuseControlsPrimitives_FuseControlsToggleControl_Value_Property* __this, bool* v, uObject* origin)
{
    uStackFrame __("FuseControlsPrimitives_FuseControlsToggleControl_Value_Property", "Set(bool,Uno.UX.IPropertyListener)");
    bool v_ = *v;
    uPtr(__this->_obj)->SetValue(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :639
void FuseControlsPrimitives_FuseControlsToggleControl_Value_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseControlsToggleControl_Value_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public FuseControlsPrimitives_FuseControlsToggleControl_Value_Property(Fuse.Controls.ToggleControl obj, Uno.UX.Selector name) [instance] :635
void FuseControlsPrimitives_FuseControlsToggleControl_Value_Property::ctor_2(::g::Fuse::Controls::ToggleControl* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseControlsToggleControl_Value_Property New(Fuse.Controls.ToggleControl obj, Uno.UX.Selector name) [static] :635
FuseControlsPrimitives_FuseControlsToggleControl_Value_Property* FuseControlsPrimitives_FuseControlsToggleControl_Value_Property::New1(::g::Fuse::Controls::ToggleControl* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseControlsToggleControl_Value_Property* obj1 = (FuseControlsPrimitives_FuseControlsToggleControl_Value_Property*)uNew(FuseControlsPrimitives_FuseControlsToggleControl_Value_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/.uno/ux11/$.uno
// -------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property :704
// {
static void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Drawing::SolidColor_typeof(), offsetof(::g::FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property(Fuse.Drawing.SolidColor obj, Uno.UX.Selector name) :707
void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__ctor_2_fn(FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property* __this, ::g::Fuse::Drawing::SolidColor* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed float4 Get() :709
void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__Get_fn(FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property* __this, ::g::Uno::Float4* __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->Color(), void();
}

// public FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property New(Fuse.Drawing.SolidColor obj, Uno.UX.Selector name) :707
void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__New1_fn(::g::Fuse::Drawing::SolidColor* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :708
void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__get_Object_fn(FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float4 v, Uno.UX.IPropertyListener origin) :710
void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__Set_fn(FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property* __this, ::g::Uno::Float4* v, uObject* origin)
{
    uStackFrame __("FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property", "Set(float4,Uno.UX.IPropertyListener)");
    ::g::Uno::Float4 v_ = *v;
    uPtr(__this->_obj)->SetColor1(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :711
void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property(Fuse.Drawing.SolidColor obj, Uno.UX.Selector name) [instance] :707
void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property::ctor_2(::g::Fuse::Drawing::SolidColor* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property New(Fuse.Drawing.SolidColor obj, Uno.UX.Selector name) [static] :707
FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property* FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property::New1(::g::Fuse::Drawing::SolidColor* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property* obj1 = (FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property*)uNew(FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/.uno/ux11/$.uno
// -------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseDrawingStroke_Brush_Property :668
// {
static void FuseControlsPrimitives_FuseDrawingStroke_Brush_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Drawing::Stroke_typeof(), offsetof(::g::FuseControlsPrimitives_FuseDrawingStroke_Brush_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseDrawingStroke_Brush_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseDrawingStroke_Brush_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseDrawingStroke_Brush_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseDrawingStroke_Brush_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsPrimitives_FuseDrawingStroke_Brush_Property(Fuse.Drawing.Stroke obj, Uno.UX.Selector name) :671
void FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__ctor_2_fn(FuseControlsPrimitives_FuseDrawingStroke_Brush_Property* __this, ::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed Fuse.Drawing.Brush Get() :673
void FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__Get_fn(FuseControlsPrimitives_FuseDrawingStroke_Brush_Property* __this, ::g::Fuse::Drawing::Brush** __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseDrawingStroke_Brush_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->Brush(), void();
}

// public FuseControlsPrimitives_FuseDrawingStroke_Brush_Property New(Fuse.Drawing.Stroke obj, Uno.UX.Selector name) :671
void FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__New1_fn(::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseDrawingStroke_Brush_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseDrawingStroke_Brush_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :672
void FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__get_Object_fn(FuseControlsPrimitives_FuseDrawingStroke_Brush_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Fuse.Drawing.Brush v, Uno.UX.IPropertyListener origin) :674
void FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__Set_fn(FuseControlsPrimitives_FuseDrawingStroke_Brush_Property* __this, ::g::Fuse::Drawing::Brush* v, uObject* origin)
{
    uStackFrame __("FuseControlsPrimitives_FuseDrawingStroke_Brush_Property", "Set(Fuse.Drawing.Brush,Uno.UX.IPropertyListener)");
    uPtr(__this->_obj)->Brush(v);
}

// public override sealed bool get_SupportsOriginSetter() :675
void FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseDrawingStroke_Brush_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public FuseControlsPrimitives_FuseDrawingStroke_Brush_Property(Fuse.Drawing.Stroke obj, Uno.UX.Selector name) [instance] :671
void FuseControlsPrimitives_FuseDrawingStroke_Brush_Property::ctor_2(::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseDrawingStroke_Brush_Property New(Fuse.Drawing.Stroke obj, Uno.UX.Selector name) [static] :671
FuseControlsPrimitives_FuseDrawingStroke_Brush_Property* FuseControlsPrimitives_FuseDrawingStroke_Brush_Property::New1(::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseDrawingStroke_Brush_Property* obj1 = (FuseControlsPrimitives_FuseDrawingStroke_Brush_Property*)uNew(FuseControlsPrimitives_FuseDrawingStroke_Brush_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/.uno/ux11/$.uno
// -------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseDrawingStroke_Color_Property :695
// {
static void FuseControlsPrimitives_FuseDrawingStroke_Color_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Drawing::Stroke_typeof(), offsetof(::g::FuseControlsPrimitives_FuseDrawingStroke_Color_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseDrawingStroke_Color_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseDrawingStroke_Color_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseDrawingStroke_Color_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseDrawingStroke_Color_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsPrimitives_FuseDrawingStroke_Color_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseDrawingStroke_Color_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsPrimitives_FuseDrawingStroke_Color_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsPrimitives_FuseDrawingStroke_Color_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsPrimitives_FuseDrawingStroke_Color_Property(Fuse.Drawing.Stroke obj, Uno.UX.Selector name) :698
void FuseControlsPrimitives_FuseDrawingStroke_Color_Property__ctor_2_fn(FuseControlsPrimitives_FuseDrawingStroke_Color_Property* __this, ::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed float4 Get() :700
void FuseControlsPrimitives_FuseDrawingStroke_Color_Property__Get_fn(FuseControlsPrimitives_FuseDrawingStroke_Color_Property* __this, ::g::Uno::Float4* __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseDrawingStroke_Color_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->Color(), void();
}

// public FuseControlsPrimitives_FuseDrawingStroke_Color_Property New(Fuse.Drawing.Stroke obj, Uno.UX.Selector name) :698
void FuseControlsPrimitives_FuseDrawingStroke_Color_Property__New1_fn(::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseDrawingStroke_Color_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseDrawingStroke_Color_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :699
void FuseControlsPrimitives_FuseDrawingStroke_Color_Property__get_Object_fn(FuseControlsPrimitives_FuseDrawingStroke_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float4 v, Uno.UX.IPropertyListener origin) :701
void FuseControlsPrimitives_FuseDrawingStroke_Color_Property__Set_fn(FuseControlsPrimitives_FuseDrawingStroke_Color_Property* __this, ::g::Uno::Float4* v, uObject* origin)
{
    uStackFrame __("FuseControlsPrimitives_FuseDrawingStroke_Color_Property", "Set(float4,Uno.UX.IPropertyListener)");
    ::g::Uno::Float4 v_ = *v;
    uPtr(__this->_obj)->SetColor(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :702
void FuseControlsPrimitives_FuseDrawingStroke_Color_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseDrawingStroke_Color_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public FuseControlsPrimitives_FuseDrawingStroke_Color_Property(Fuse.Drawing.Stroke obj, Uno.UX.Selector name) [instance] :698
void FuseControlsPrimitives_FuseDrawingStroke_Color_Property::ctor_2(::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseDrawingStroke_Color_Property New(Fuse.Drawing.Stroke obj, Uno.UX.Selector name) [static] :698
FuseControlsPrimitives_FuseDrawingStroke_Color_Property* FuseControlsPrimitives_FuseDrawingStroke_Color_Property::New1(::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseDrawingStroke_Color_Property* obj1 = (FuseControlsPrimitives_FuseDrawingStroke_Color_Property*)uNew(FuseControlsPrimitives_FuseDrawingStroke_Color_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/.uno/ux11/$.uno
// -------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property :677
// {
static void FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Effects::DropShadow_typeof(), offsetof(::g::FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property(Fuse.Effects.DropShadow obj, Uno.UX.Selector name) :680
void FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__ctor_2_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property* __this, ::g::Fuse::Effects::DropShadow* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed float Get() :682
void FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__Get_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property* __this, float* __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->Distance(), void();
}

// public FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property New(Fuse.Effects.DropShadow obj, Uno.UX.Selector name) :680
void FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__New1_fn(::g::Fuse::Effects::DropShadow* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :681
void FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__get_Object_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float v, Uno.UX.IPropertyListener origin) :683
void FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__Set_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property* __this, float* v, uObject* origin)
{
    uStackFrame __("FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property", "Set(float,Uno.UX.IPropertyListener)");
    float v_ = *v;
    uPtr(__this->_obj)->Distance(v_);
}

// public override sealed bool get_SupportsOriginSetter() :684
void FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property(Fuse.Effects.DropShadow obj, Uno.UX.Selector name) [instance] :680
void FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property::ctor_2(::g::Fuse::Effects::DropShadow* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property New(Fuse.Effects.DropShadow obj, Uno.UX.Selector name) [static] :680
FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property* FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property::New1(::g::Fuse::Effects::DropShadow* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property* obj1 = (FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property*)uNew(FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/.uno/ux11/$.uno
// -------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property :686
// {
static void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Effects::DropShadow_typeof(), offsetof(::g::FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property(Fuse.Effects.DropShadow obj, Uno.UX.Selector name) :689
void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__ctor_2_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property* __this, ::g::Fuse::Effects::DropShadow* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed float Get() :691
void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__Get_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property* __this, float* __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->Size(), void();
}

// public FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property New(Fuse.Effects.DropShadow obj, Uno.UX.Selector name) :689
void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__New1_fn(::g::Fuse::Effects::DropShadow* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :690
void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__get_Object_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float v, Uno.UX.IPropertyListener origin) :692
void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__Set_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property* __this, float* v, uObject* origin)
{
    uStackFrame __("FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property", "Set(float,Uno.UX.IPropertyListener)");
    float v_ = *v;
    uPtr(__this->_obj)->Size(v_);
}

// public override sealed bool get_SupportsOriginSetter() :693
void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property(Fuse.Effects.DropShadow obj, Uno.UX.Selector name) [instance] :689
void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property::ctor_2(::g::Fuse::Effects::DropShadow* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property New(Fuse.Effects.DropShadow obj, Uno.UX.Selector name) [static] :689
FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property* FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property::New1(::g::Fuse::Effects::DropShadow* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property* obj1 = (FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property*)uNew(FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/.uno/ux11/$.uno
// -------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseElementsElement_Opacity_Property :650
// {
static void FuseControlsPrimitives_FuseElementsElement_Opacity_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::FuseControlsPrimitives_FuseElementsElement_Opacity_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseElementsElement_Opacity_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseElementsElement_Opacity_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseElementsElement_Opacity_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseElementsElement_Opacity_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsPrimitives_FuseElementsElement_Opacity_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseElementsElement_Opacity_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsPrimitives_FuseElementsElement_Opacity_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsPrimitives_FuseElementsElement_Opacity_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsPrimitives_FuseElementsElement_Opacity_Property(Fuse.Elements.Element obj, Uno.UX.Selector name) :653
void FuseControlsPrimitives_FuseElementsElement_Opacity_Property__ctor_2_fn(FuseControlsPrimitives_FuseElementsElement_Opacity_Property* __this, ::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed float Get() :655
void FuseControlsPrimitives_FuseElementsElement_Opacity_Property__Get_fn(FuseControlsPrimitives_FuseElementsElement_Opacity_Property* __this, float* __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseElementsElement_Opacity_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->Opacity(), void();
}

// public FuseControlsPrimitives_FuseElementsElement_Opacity_Property New(Fuse.Elements.Element obj, Uno.UX.Selector name) :653
void FuseControlsPrimitives_FuseElementsElement_Opacity_Property__New1_fn(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseElementsElement_Opacity_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseElementsElement_Opacity_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :654
void FuseControlsPrimitives_FuseElementsElement_Opacity_Property__get_Object_fn(FuseControlsPrimitives_FuseElementsElement_Opacity_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float v, Uno.UX.IPropertyListener origin) :656
void FuseControlsPrimitives_FuseElementsElement_Opacity_Property__Set_fn(FuseControlsPrimitives_FuseElementsElement_Opacity_Property* __this, float* v, uObject* origin)
{
    uStackFrame __("FuseControlsPrimitives_FuseElementsElement_Opacity_Property", "Set(float,Uno.UX.IPropertyListener)");
    float v_ = *v;
    uPtr(__this->_obj)->SetOpacity(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :657
void FuseControlsPrimitives_FuseElementsElement_Opacity_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseElementsElement_Opacity_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public FuseControlsPrimitives_FuseElementsElement_Opacity_Property(Fuse.Elements.Element obj, Uno.UX.Selector name) [instance] :653
void FuseControlsPrimitives_FuseElementsElement_Opacity_Property::ctor_2(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseElementsElement_Opacity_Property New(Fuse.Elements.Element obj, Uno.UX.Selector name) [static] :653
FuseControlsPrimitives_FuseElementsElement_Opacity_Property* FuseControlsPrimitives_FuseElementsElement_Opacity_Property::New1(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseElementsElement_Opacity_Property* obj1 = (FuseControlsPrimitives_FuseElementsElement_Opacity_Property*)uNew(FuseControlsPrimitives_FuseElementsElement_Opacity_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/.uno/ux11/$.uno
// -------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property :614
// {
static void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Gestures::SwipeGesture_typeof(), offsetof(::g::FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property(Fuse.Gestures.SwipeGesture obj, Uno.UX.Selector name) :617
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__ctor_2_fn(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* __this, ::g::Fuse::Gestures::SwipeGesture* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed bool Get() :619
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__Get_fn(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* __this, bool* __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->IsActive(), void();
}

// public FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property New(Fuse.Gestures.SwipeGesture obj, Uno.UX.Selector name) :617
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__New1_fn(::g::Fuse::Gestures::SwipeGesture* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :618
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__get_Object_fn(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(bool v, Uno.UX.IPropertyListener origin) :620
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__Set_fn(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* __this, bool* v, uObject* origin)
{
    uStackFrame __("FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property", "Set(bool,Uno.UX.IPropertyListener)");
    bool v_ = *v;
    uPtr(__this->_obj)->SetIsActive(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :621
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property(Fuse.Gestures.SwipeGesture obj, Uno.UX.Selector name) [instance] :617
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property::ctor_2(::g::Fuse::Gestures::SwipeGesture* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property New(Fuse.Gestures.SwipeGesture obj, Uno.UX.Selector name) [static] :617
FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property::New1(::g::Fuse::Gestures::SwipeGesture* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* obj1 = (FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property*)uNew(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.ScrollView/0.42.4/.uno/ux11/$.uno
// -------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsScrollView_FuseControlsScrollViewBase_KeepFocusInView_Property :141
// {
static void FuseControlsScrollView_FuseControlsScrollViewBase_KeepFocusInView_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Controls::ScrollViewBase_typeof(), offsetof(::g::FuseControlsScrollView_FuseControlsScrollViewBase_KeepFocusInView_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsScrollView_FuseControlsScrollViewBase_KeepFocusInView_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsScrollView_FuseControlsScrollViewBase_KeepFocusInView_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsScrollView_FuseControlsScrollViewBase_KeepFocusInView_Property", options);
    type->fp_build_ = FuseControlsScrollView_FuseControlsScrollViewBase_KeepFocusInView_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsScrollView_FuseControlsScrollViewBase_KeepFocusInView_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsScrollView_FuseControlsScrollViewBase_KeepFocusInView_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsScrollView_FuseControlsScrollViewBase_KeepFocusInView_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsScrollView_FuseControlsScrollViewBase_KeepFocusInView_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsScrollView_FuseControlsScrollViewBase_KeepFocusInView_Property(Fuse.Controls.ScrollViewBase obj, Uno.UX.Selector name) :144
void FuseControlsScrollView_FuseControlsScrollViewBase_KeepFocusInView_Property__ctor_2_fn(FuseControlsScrollView_FuseControlsScrollViewBase_KeepFocusInView_Property* __this, ::g::Fuse::Controls::ScrollViewBase* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed bool Get() :146
void FuseControlsScrollView_FuseControlsScrollViewBase_KeepFocusInView_Property__Get_fn(FuseControlsScrollView_FuseControlsScrollViewBase_KeepFocusInView_Property* __this, bool* __retval)
{
    uStackFrame __("FuseControlsScrollView_FuseControlsScrollViewBase_KeepFocusInView_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->KeepFocusInView(), void();
}

// public FuseControlsScrollView_FuseControlsScrollViewBase_KeepFocusInView_Property New(Fuse.Controls.ScrollViewBase obj, Uno.UX.Selector name) :144
void FuseControlsScrollView_FuseControlsScrollViewBase_KeepFocusInView_Property__New1_fn(::g::Fuse::Controls::ScrollViewBase* obj, ::g::Uno::UX::Selector* name, FuseControlsScrollView_FuseControlsScrollViewBase_KeepFocusInView_Property** __retval)
{
    *__retval = FuseControlsScrollView_FuseControlsScrollViewBase_KeepFocusInView_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :145
void FuseControlsScrollView_FuseControlsScrollViewBase_KeepFocusInView_Property__get_Object_fn(FuseControlsScrollView_FuseControlsScrollViewBase_KeepFocusInView_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(bool v, Uno.UX.IPropertyListener origin) :147
void FuseControlsScrollView_FuseControlsScrollViewBase_KeepFocusInView_Property__Set_fn(FuseControlsScrollView_FuseControlsScrollViewBase_KeepFocusInView_Property* __this, bool* v, uObject* origin)
{
    uStackFrame __("FuseControlsScrollView_FuseControlsScrollViewBase_KeepFocusInView_Property", "Set(bool,Uno.UX.IPropertyListener)");
    bool v_ = *v;
    uPtr(__this->_obj)->KeepFocusInView(v_);
}

// public override sealed bool get_SupportsOriginSetter() :148
void FuseControlsScrollView_FuseControlsScrollViewBase_KeepFocusInView_Property__get_SupportsOriginSetter_fn(FuseControlsScrollView_FuseControlsScrollViewBase_KeepFocusInView_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public FuseControlsScrollView_FuseControlsScrollViewBase_KeepFocusInView_Property(Fuse.Controls.ScrollViewBase obj, Uno.UX.Selector name) [instance] :144
void FuseControlsScrollView_FuseControlsScrollViewBase_KeepFocusInView_Property::ctor_2(::g::Fuse::Controls::ScrollViewBase* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public FuseControlsScrollView_FuseControlsScrollViewBase_KeepFocusInView_Property New(Fuse.Controls.ScrollViewBase obj, Uno.UX.Selector name) [static] :144
FuseControlsScrollView_FuseControlsScrollViewBase_KeepFocusInView_Property* FuseControlsScrollView_FuseControlsScrollViewBase_KeepFocusInView_Property::New1(::g::Fuse::Controls::ScrollViewBase* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsScrollView_FuseControlsScrollViewBase_KeepFocusInView_Property* obj1 = (FuseControlsScrollView_FuseControlsScrollViewBase_KeepFocusInView_Property*)uNew(FuseControlsScrollView_FuseControlsScrollViewBase_KeepFocusInView_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.ScrollView/0.42.4/.uno/ux11/$.uno
// -------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsScrollView_FuseControlsScrollViewBase_UserScroll_Property :132
// {
static void FuseControlsScrollView_FuseControlsScrollViewBase_UserScroll_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Controls::ScrollViewBase_typeof(), offsetof(::g::FuseControlsScrollView_FuseControlsScrollViewBase_UserScroll_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsScrollView_FuseControlsScrollViewBase_UserScroll_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsScrollView_FuseControlsScrollViewBase_UserScroll_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsScrollView_FuseControlsScrollViewBase_UserScroll_Property", options);
    type->fp_build_ = FuseControlsScrollView_FuseControlsScrollViewBase_UserScroll_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsScrollView_FuseControlsScrollViewBase_UserScroll_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsScrollView_FuseControlsScrollViewBase_UserScroll_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsScrollView_FuseControlsScrollViewBase_UserScroll_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsScrollView_FuseControlsScrollViewBase_UserScroll_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsScrollView_FuseControlsScrollViewBase_UserScroll_Property(Fuse.Controls.ScrollViewBase obj, Uno.UX.Selector name) :135
void FuseControlsScrollView_FuseControlsScrollViewBase_UserScroll_Property__ctor_2_fn(FuseControlsScrollView_FuseControlsScrollViewBase_UserScroll_Property* __this, ::g::Fuse::Controls::ScrollViewBase* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed bool Get() :137
void FuseControlsScrollView_FuseControlsScrollViewBase_UserScroll_Property__Get_fn(FuseControlsScrollView_FuseControlsScrollViewBase_UserScroll_Property* __this, bool* __retval)
{
    uStackFrame __("FuseControlsScrollView_FuseControlsScrollViewBase_UserScroll_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->UserScroll(), void();
}

// public FuseControlsScrollView_FuseControlsScrollViewBase_UserScroll_Property New(Fuse.Controls.ScrollViewBase obj, Uno.UX.Selector name) :135
void FuseControlsScrollView_FuseControlsScrollViewBase_UserScroll_Property__New1_fn(::g::Fuse::Controls::ScrollViewBase* obj, ::g::Uno::UX::Selector* name, FuseControlsScrollView_FuseControlsScrollViewBase_UserScroll_Property** __retval)
{
    *__retval = FuseControlsScrollView_FuseControlsScrollViewBase_UserScroll_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :136
void FuseControlsScrollView_FuseControlsScrollViewBase_UserScroll_Property__get_Object_fn(FuseControlsScrollView_FuseControlsScrollViewBase_UserScroll_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(bool v, Uno.UX.IPropertyListener origin) :138
void FuseControlsScrollView_FuseControlsScrollViewBase_UserScroll_Property__Set_fn(FuseControlsScrollView_FuseControlsScrollViewBase_UserScroll_Property* __this, bool* v, uObject* origin)
{
    uStackFrame __("FuseControlsScrollView_FuseControlsScrollViewBase_UserScroll_Property", "Set(bool,Uno.UX.IPropertyListener)");
    bool v_ = *v;
    uPtr(__this->_obj)->UserScroll(v_);
}

// public override sealed bool get_SupportsOriginSetter() :139
void FuseControlsScrollView_FuseControlsScrollViewBase_UserScroll_Property__get_SupportsOriginSetter_fn(FuseControlsScrollView_FuseControlsScrollViewBase_UserScroll_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public FuseControlsScrollView_FuseControlsScrollViewBase_UserScroll_Property(Fuse.Controls.ScrollViewBase obj, Uno.UX.Selector name) [instance] :135
void FuseControlsScrollView_FuseControlsScrollViewBase_UserScroll_Property::ctor_2(::g::Fuse::Controls::ScrollViewBase* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public FuseControlsScrollView_FuseControlsScrollViewBase_UserScroll_Property New(Fuse.Controls.ScrollViewBase obj, Uno.UX.Selector name) [static] :135
FuseControlsScrollView_FuseControlsScrollViewBase_UserScroll_Property* FuseControlsScrollView_FuseControlsScrollViewBase_UserScroll_Property::New1(::g::Fuse::Controls::ScrollViewBase* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsScrollView_FuseControlsScrollViewBase_UserScroll_Property* obj1 = (FuseControlsScrollView_FuseControlsScrollViewBase_UserScroll_Property*)uNew(FuseControlsScrollView_FuseControlsScrollViewBase_UserScroll_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.ScrollView/0.42.4/.uno/ux11/$.uno
// -------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property :114
// {
static void FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Gestures::Scroller_typeof(), offsetof(::g::FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property", options);
    type->fp_build_ = FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property(Fuse.Gestures.Scroller obj, Uno.UX.Selector name) :117
void FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property__ctor_2_fn(FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property* __this, ::g::Fuse::Gestures::Scroller* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed bool Get() :119
void FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property__Get_fn(FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property* __this, bool* __retval)
{
    uStackFrame __("FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->UserScroll(), void();
}

// public FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property New(Fuse.Gestures.Scroller obj, Uno.UX.Selector name) :117
void FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property__New1_fn(::g::Fuse::Gestures::Scroller* obj, ::g::Uno::UX::Selector* name, FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property** __retval)
{
    *__retval = FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :118
void FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property__get_Object_fn(FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(bool v, Uno.UX.IPropertyListener origin) :120
void FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property__Set_fn(FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property* __this, bool* v, uObject* origin)
{
    uStackFrame __("FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property", "Set(bool,Uno.UX.IPropertyListener)");
    bool v_ = *v;
    uPtr(__this->_obj)->UserScroll(v_);
}

// public override sealed bool get_SupportsOriginSetter() :121
void FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property__get_SupportsOriginSetter_fn(FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property(Fuse.Gestures.Scroller obj, Uno.UX.Selector name) [instance] :117
void FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property::ctor_2(::g::Fuse::Gestures::Scroller* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property New(Fuse.Gestures.Scroller obj, Uno.UX.Selector name) [static] :117
FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property* FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property::New1(::g::Fuse::Gestures::Scroller* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property* obj1 = (FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property*)uNew(FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.ScrollView/0.42.4/.uno/ux11/$.uno
// -------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsScrollView_FuseTriggersWhileBool_Value_Property :123
// {
static void FuseControlsScrollView_FuseTriggersWhileBool_Value_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Triggers::WhileBool_typeof(), offsetof(::g::FuseControlsScrollView_FuseTriggersWhileBool_Value_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsScrollView_FuseTriggersWhileBool_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsScrollView_FuseTriggersWhileBool_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsScrollView_FuseTriggersWhileBool_Value_Property", options);
    type->fp_build_ = FuseControlsScrollView_FuseTriggersWhileBool_Value_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))FuseControlsScrollView_FuseTriggersWhileBool_Value_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsScrollView_FuseTriggersWhileBool_Value_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))FuseControlsScrollView_FuseTriggersWhileBool_Value_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))FuseControlsScrollView_FuseTriggersWhileBool_Value_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsScrollView_FuseTriggersWhileBool_Value_Property(Fuse.Triggers.WhileBool obj, Uno.UX.Selector name) :126
void FuseControlsScrollView_FuseTriggersWhileBool_Value_Property__ctor_2_fn(FuseControlsScrollView_FuseTriggersWhileBool_Value_Property* __this, ::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed bool Get() :128
void FuseControlsScrollView_FuseTriggersWhileBool_Value_Property__Get_fn(FuseControlsScrollView_FuseTriggersWhileBool_Value_Property* __this, bool* __retval)
{
    uStackFrame __("FuseControlsScrollView_FuseTriggersWhileBool_Value_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->Value1(), void();
}

// public FuseControlsScrollView_FuseTriggersWhileBool_Value_Property New(Fuse.Triggers.WhileBool obj, Uno.UX.Selector name) :126
void FuseControlsScrollView_FuseTriggersWhileBool_Value_Property__New1_fn(::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector* name, FuseControlsScrollView_FuseTriggersWhileBool_Value_Property** __retval)
{
    *__retval = FuseControlsScrollView_FuseTriggersWhileBool_Value_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :127
void FuseControlsScrollView_FuseTriggersWhileBool_Value_Property__get_Object_fn(FuseControlsScrollView_FuseTriggersWhileBool_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(bool v, Uno.UX.IPropertyListener origin) :129
void FuseControlsScrollView_FuseTriggersWhileBool_Value_Property__Set_fn(FuseControlsScrollView_FuseTriggersWhileBool_Value_Property* __this, bool* v, uObject* origin)
{
    uStackFrame __("FuseControlsScrollView_FuseTriggersWhileBool_Value_Property", "Set(bool,Uno.UX.IPropertyListener)");
    bool v_ = *v;
    uPtr(__this->_obj)->Value1(v_);
}

// public override sealed bool get_SupportsOriginSetter() :130
void FuseControlsScrollView_FuseTriggersWhileBool_Value_Property__get_SupportsOriginSetter_fn(FuseControlsScrollView_FuseTriggersWhileBool_Value_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public FuseControlsScrollView_FuseTriggersWhileBool_Value_Property(Fuse.Triggers.WhileBool obj, Uno.UX.Selector name) [instance] :126
void FuseControlsScrollView_FuseTriggersWhileBool_Value_Property::ctor_2(::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public FuseControlsScrollView_FuseTriggersWhileBool_Value_Property New(Fuse.Triggers.WhileBool obj, Uno.UX.Selector name) [static] :126
FuseControlsScrollView_FuseTriggersWhileBool_Value_Property* FuseControlsScrollView_FuseTriggersWhileBool_Value_Property::New1(::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsScrollView_FuseTriggersWhileBool_Value_Property* obj1 = (FuseControlsScrollView_FuseTriggersWhileBool_Value_Property*)uNew(FuseControlsScrollView_FuseTriggersWhileBool_Value_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Video/0.42.4/.uno/package
// -----------------------------------------------------------------------------------------------------

// public static generated class FuseControlsVideo_bundle :0
// {
// static FuseControlsVideo_bundle() :0
static void FuseControlsVideo_bundle__cctor__fn(uType* __type)
{
    FuseControlsVideo_bundle::Scale9Rectangleda875692_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[31/*"uniform flo...*/], ::STRINGS[32/*"uniform sam...*/], 0, 2, uArray::Init<uString*>(::TYPES[0/*string[]*/], 16, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[9/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[14/*"k"*/], ::STRINGS[15/*"l"*/], ::STRINGS[16/*"m"*/], ::STRINGS[17/*"n"*/], ::STRINGS[18/*"o"*/], ::STRINGS[20/*"q"*/]));
    FuseControlsVideo_bundle::VideoDrawElement5c829975_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[33/*"uniform mat...*/], ::STRINGS[34/*"uniform sam...*/], 1, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[3/*"b"*/], ::STRINGS[2/*"a"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[9/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[11/*"h"*/]));
}

static void FuseControlsVideo_bundle_build(uType* type)
{
    ::STRINGS[31] = uString::Const("uniform float c, d, e, f, g, h, k, l, m, n;\n"
        "uniform mat4 i, j;\n"
        "uniform vec2 o;\n"
        "\n"
        "attribute vec3 a, b;\n"
        "\n"
        "varying vec2 p;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    p = vec2(((a.x * c) + (a.y * k)) + (a.z * l), ((b.x * f) + (b.y * m)) + (b.z * n)) / o;\n"
        "    gl_Position = j * (i * vec4(vec2(((a.x * c) + (a.y * d)) + (a.z * e), ((b.x * f) + (b.y * g)) + (b.z * h)), float(0), float(1)));\n"
        "}\n"
        "");
    ::STRINGS[32] = uString::Const("uniform sampler2D q;\n"
        "\n"
        "varying vec2 p;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = vec4(texture2D(q, p).xyz, 1.0);\n"
        "}\n"
        "");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[9] = uString::Const("e");
    ::STRINGS[6] = uString::Const("f");
    ::STRINGS[10] = uString::Const("g");
    ::STRINGS[11] = uString::Const("h");
    ::STRINGS[12] = uString::Const("i");
    ::STRINGS[13] = uString::Const("j");
    ::STRINGS[14] = uString::Const("k");
    ::STRINGS[15] = uString::Const("l");
    ::STRINGS[16] = uString::Const("m");
    ::STRINGS[17] = uString::Const("n");
    ::STRINGS[18] = uString::Const("o");
    ::STRINGS[20] = uString::Const("q");
    ::STRINGS[33] = uString::Const("uniform mat4 f, c;\n"
        "uniform vec2 d, e;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 g;\n"
        "\n"
        "vec2 i(vec2 j){\n"
        "    vec2 k = j.xy;\n"
        "\n"
        "    if (b == 1)\n"
        "        return vec2(k.y, 1.0 - k.x);\n"
        "    else if (b == 2)\n"
        "        return vec2(1.0 - k.x, 1.0 - k.y);\n"
        "    else if (b == 3)\n"
        "        return vec2(1.0 - k.y, k.x);\n"
        "    else\n"
        "        return k;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    g = i((a * d) + e);\n"
        "    gl_Position = c * (f * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[34] = uString::Const("uniform sampler2D h;\n"
        "\n"
        "varying vec2 g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = vec4(texture2D(h, g).xyz, 1.0);\n"
        "}\n"
        "");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControlsVideo_bundle::Scale9Rectangleda875692_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControlsVideo_bundle::VideoDrawElement5c829975_, uFieldFlagsStatic);
    type->Reflection.SetFields(2,
        new uField("Scale9Rectangleda875692", 0),
        new uField("VideoDrawElement5c829975", 1));
}

uClassType* FuseControlsVideo_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseControlsVideo_bundle", options);
    type->fp_build_ = FuseControlsVideo_bundle_build;
    type->fp_cctor_ = FuseControlsVideo_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControlsVideo_bundle::Scale9Rectangleda875692_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControlsVideo_bundle::VideoDrawElement5c829975_;
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/.uno/package
// ------------------------------------------------------------------------------------------

// public static generated class FuseCore_bundle :0
// {
// static FuseCore_bundle() :0
static void FuseCore_bundle__cctor__fn(uType* __type)
{
    FuseCore_bundle::DrawHelpers4c5c39ae_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[35/*"uniform vec...*/], ::STRINGS[36/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 5, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[9/*"e"*/]));
}

static void FuseCore_bundle_build(uType* type)
{
    ::STRINGS[35] = uString::Const("uniform vec2 c, b;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_Position = d * vec4(c + (a * b), float(0), float(1));\n"
        "}\n"
        "");
    ::STRINGS[36] = uString::Const("uniform vec4 e;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = e;\n"
        "}\n"
        "");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[9] = uString::Const("e");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseCore_bundle::DrawHelpers4c5c39ae_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("DrawHelpers4c5c39ae", 0));
}

uClassType* FuseCore_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseCore_bundle", options);
    type->fp_build_ = FuseCore_bundle_build;
    type->fp_cctor_ = FuseCore_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseCore_bundle::DrawHelpers4c5c39ae_;
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Drawing/0.42.4/.uno/package
// ----------------------------------------------------------------------------------------------

// public static generated class FuseDrawing_bundle :0
// {
// static FuseDrawing_bundle() :0
static void FuseDrawing_bundle__cctor__fn(uType* __type)
{
    FuseDrawing_bundle::LinearGradientDrawable479fd075_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[37/*"attribute v...*/], ::STRINGS[38/*"uniform flo...*/], 2, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 6, ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[2/*"a"*/], ::STRINGS[5/*"d"*/], ::STRINGS[9/*"e"*/], ::STRINGS[6/*"f"*/]));
}

static void FuseDrawing_bundle_build(uType* type)
{
    ::STRINGS[37] = uString::Const("attribute vec2 a;\n"
        "\n"
        "varying vec2 g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    g = a;\n"
        "    gl_Position = vec4((a.x * float(2)) - float(1), (-a.y * float(2)) + float(1), float(0), float(1));\n"
        "}\n"
        "");
    ::STRINGS[38] = uString::Const("uniform float d[b], e;\n"
        "uniform vec4 f[c];\n"
        "\n"
        "varying vec2 g;\n"
        "\n"
        "vec4 h(vec2 i){\n"
        "    float j = d[0] + (e * i.x);\n"
        "    vec4 k = f[0];\n"
        "\n"
        "    for (int l = 0; l < (b - 1); l++)\n"
        "    {\n"
        "        float m = d[l];\n"
        "        float n = d[l + 1];\n"
        "        vec4 o = f[l + 1];\n"
        "        k = mix(k, o, smoothstep(m, n, j));\n"
        "    }\n"
        "\n"
        "    return k;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = h(g);\n"
        "}\n"
        "");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[9] = uString::Const("e");
    ::STRINGS[6] = uString::Const("f");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawing_bundle::LinearGradientDrawable479fd075_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("LinearGradientDrawable479fd075", 0));
}

uClassType* FuseDrawing_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseDrawing_bundle", options);
    type->fp_build_ = FuseDrawing_bundle_build;
    type->fp_cctor_ = FuseDrawing_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawing_bundle::LinearGradientDrawable479fd075_;
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Polygons/0.42.4/.uno/package
// -------------------------------------------------------------------------------------------------------

// public static generated class FuseDrawingPolygons_bundle :0
// {
// static FuseDrawingPolygons_bundle() :0
static void FuseDrawingPolygons_bundle__cctor__fn(uType* __type)
{
    FuseDrawingPolygons_bundle::Border59574a1c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[39/*"uniform mat...*/], ::STRINGS[40/*"varying vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/]));
    FuseDrawingPolygons_bundle::Border896a8e7a_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[41/*"uniform mat...*/], ::STRINGS[42/*"varying vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 3, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/]));
    FuseDrawingPolygons_bundle::Borderb6afd581_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[43/*"uniform mat...*/], ::STRINGS[44/*"uniform vec...*/], 2, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 16, ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[2/*"a"*/], ::STRINGS[5/*"d"*/], ::STRINGS[9/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[14/*"k"*/], ::STRINGS[15/*"l"*/], ::STRINGS[16/*"m"*/], ::STRINGS[17/*"n"*/], ::STRINGS[18/*"o"*/], ::STRINGS[45/*"s"*/]));
    FuseDrawingPolygons_bundle::Borderfbfebeb7_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[46/*"uniform mat...*/], ::STRINGS[47/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 9, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[9/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[14/*"k"*/]));
    FuseDrawingPolygons_bundle::PolygonDrawable13820064_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[48/*"uniform mat...*/], ::STRINGS[25/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 3, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/]));
    FuseDrawingPolygons_bundle::PolygonDrawable13820065_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[49/*"uniform mat...*/], ::STRINGS[50/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 9, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[9/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[13/*"j"*/]));
    FuseDrawingPolygons_bundle::PolygonDrawable13820067_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[51/*"uniform mat...*/], ::STRINGS[52/*"uniform vec...*/], 2, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 16, ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[2/*"a"*/], ::STRINGS[5/*"d"*/], ::STRINGS[9/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[14/*"k"*/], ::STRINGS[15/*"l"*/], ::STRINGS[16/*"m"*/], ::STRINGS[17/*"n"*/], ::STRINGS[18/*"o"*/], ::STRINGS[53/*"r"*/]));
}

static void FuseDrawingPolygons_bundle_build(uType* type)
{
    ::STRINGS[39] = uString::Const("uniform mat4 b;\n"
        "uniform vec4 c;\n"
        "uniform float d;\n"
        "\n"
        "attribute vec4 a;\n"
        "\n"
        "varying vec4 e;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 f = c * vec4(float(1), float(1), float(1), a.zw.x);\n"
        "    e = vec4((f.xyz * f.w) * d, f.w * d);\n"
        "    gl_Position = b * vec4(a.xy, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[40] = uString::Const("varying vec4 e;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = e;\n"
        "}\n"
        "");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[41] = uString::Const("uniform mat4 b;\n"
        "uniform vec4 c;\n"
        "\n"
        "attribute vec4 a;\n"
        "\n"
        "varying vec4 d;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 e = c * vec4(float(1), float(1), float(1), a.zw.x);\n"
        "    d = vec4((e.xyz * e.w) * 1.0, e.w);\n"
        "    gl_Position = b * vec4(a.xy, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[42] = uString::Const("varying vec4 d;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = d;\n"
        "}\n"
        "");
    ::STRINGS[43] = uString::Const("uniform mat4 d;\n"
        "uniform vec2 e, f, g, h, i, k, j;\n"
        "\n"
        "attribute vec4 a;\n"
        "\n"
        "varying vec4 p;\n"
        "varying vec2 q, r;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 t = ((((e * (a.xy / e)) - f) / g) * h) + i;\n"
        "    p = vec4(float(1), float(1), float(1), a.zw.x);\n"
        "    q = k + (t * j);\n"
        "    r = t;\n"
        "    gl_Position = d * vec4(a.xy, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[44] = uString::Const("uniform vec2 m, l;\n"
        "uniform vec4 n;\n"
        "uniform float o;\n"
        "\n"
        "uniform sampler2D s;\n"
        "\n"
        "varying vec4 p;\n"
        "varying vec2 q, r;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 t = ((c ? vec4(float(0)) : texture2D(s, b ? (m + (fract(q) * l)) : r)) * n) * p;\n"
        "    gl_FragColor = vec4((t.xyz * t.w) * o, t.w * o);\n"
        "}\n"
        "");
    ::STRINGS[9] = uString::Const("e");
    ::STRINGS[6] = uString::Const("f");
    ::STRINGS[10] = uString::Const("g");
    ::STRINGS[11] = uString::Const("h");
    ::STRINGS[12] = uString::Const("i");
    ::STRINGS[13] = uString::Const("j");
    ::STRINGS[14] = uString::Const("k");
    ::STRINGS[15] = uString::Const("l");
    ::STRINGS[16] = uString::Const("m");
    ::STRINGS[17] = uString::Const("n");
    ::STRINGS[18] = uString::Const("o");
    ::STRINGS[45] = uString::Const("s");
    ::STRINGS[46] = uString::Const("uniform mat4 b;\n"
        "uniform vec2 c, d, e, g;\n"
        "uniform float h;\n"
        "\n"
        "attribute vec4 a;\n"
        "\n"
        "varying vec4 i;\n"
        "varying float j;\n"
        "\n"
        "float l(vec2 m, vec2 n, float o){\n"
        "    vec2 p = (m * c) - d;\n"
        "    float q = dot(p, n) / o;\n"
        "    return (q - e.x) / e.y;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    i = vec4(float(1), float(1), float(1), a.zw.x);\n"
        "    j = l(a.xy / c, g, h);\n"
        "    gl_Position = b * vec4(a.xy, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[47] = uString::Const("uniform float f;\n"
        "\n"
        "uniform sampler2D k;\n"
        "\n"
        "varying vec4 i;\n"
        "varying float j;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 m = texture2D(k, vec2(j, 0.5)) * i;\n"
        "    gl_FragColor = vec4((m.xyz * m.w) * f, m.w * f);\n"
        "}\n"
        "");
    ::STRINGS[48] = uString::Const("uniform mat4 b;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_Position = b * vec4(a, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[25] = uString::Const("uniform vec4 c;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = c;\n"
        "}\n"
        "");
    ::STRINGS[49] = uString::Const("uniform mat4 b;\n"
        "uniform vec2 c, d, e, g;\n"
        "uniform float h;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying float i;\n"
        "\n"
        "float k(vec2 l, vec2 m, float n){\n"
        "    vec2 o = (l * c) - d;\n"
        "    float p = dot(o, m) / n;\n"
        "    return (p - e.x) / e.y;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    i = k(a / c, g, h);\n"
        "    gl_Position = b * vec4(a, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[50] = uString::Const("uniform float f;\n"
        "\n"
        "uniform sampler2D j;\n"
        "\n"
        "varying float i;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 l = texture2D(j, vec2(i, 0.5));\n"
        "    gl_FragColor = vec4((l.xyz * l.w) * f, l.w * f);\n"
        "}\n"
        "");
    ::STRINGS[51] = uString::Const("uniform mat4 d;\n"
        "uniform vec2 e, f, g, h, i, k, j;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 p, q;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 s = ((((e * (a / e)) - f) / g) * h) + i;\n"
        "    p = k + (s * j);\n"
        "    q = s;\n"
        "    gl_Position = d * vec4(a, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[52] = uString::Const("uniform vec2 m, l;\n"
        "uniform vec4 n;\n"
        "uniform float o;\n"
        "\n"
        "uniform sampler2D r;\n"
        "\n"
        "varying vec2 p, q;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 s = (c ? vec4(float(0)) : texture2D(r, b ? (m + (fract(p) * l)) : q)) * n;\n"
        "    gl_FragColor = vec4((s.xyz * s.w) * o, s.w * o);\n"
        "}\n"
        "");
    ::STRINGS[53] = uString::Const("r");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPolygons_bundle::Border59574a1c_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPolygons_bundle::Border896a8e7a_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPolygons_bundle::Borderb6afd581_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPolygons_bundle::Borderfbfebeb7_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPolygons_bundle::PolygonDrawable13820064_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPolygons_bundle::PolygonDrawable13820065_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPolygons_bundle::PolygonDrawable13820067_, uFieldFlagsStatic);
    type->Reflection.SetFields(7,
        new uField("Border59574a1c", 0),
        new uField("Border896a8e7a", 1),
        new uField("Borderb6afd581", 2),
        new uField("Borderfbfebeb7", 3),
        new uField("PolygonDrawable13820064", 4),
        new uField("PolygonDrawable13820065", 5),
        new uField("PolygonDrawable13820067", 6));
}

uClassType* FuseDrawingPolygons_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseDrawingPolygons_bundle", options);
    type->fp_build_ = FuseDrawingPolygons_bundle_build;
    type->fp_cctor_ = FuseDrawingPolygons_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPolygons_bundle::Border59574a1c_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPolygons_bundle::Border896a8e7a_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPolygons_bundle::Borderb6afd581_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPolygons_bundle::Borderfbfebeb7_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPolygons_bundle::PolygonDrawable13820064_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPolygons_bundle::PolygonDrawable13820065_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPolygons_bundle::PolygonDrawable13820067_;
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Primitives/0.42.4/.uno/package
// ---------------------------------------------------------------------------------------------------------

// public static generated class FuseDrawingPrimitives_bundle :0
// {
// static FuseDrawingPrimitives_bundle() :0
static void FuseDrawingPrimitives_bundle__cctor__fn(uType* __type)
{
    FuseDrawingPrimitives_bundle::Circle01247f96_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[54/*"uniform vec...*/], ::STRINGS[55/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 19, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[9/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[14/*"k"*/], ::STRINGS[15/*"l"*/], ::STRINGS[16/*"m"*/], ::STRINGS[17/*"n"*/], ::STRINGS[18/*"o"*/], ::STRINGS[19/*"p"*/], ::STRINGS[20/*"q"*/], ::STRINGS[53/*"r"*/], ::STRINGS[56/*"u"*/]));
    FuseDrawingPrimitives_bundle::Circle038d0b56_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[57/*"uniform vec...*/], ::STRINGS[58/*"uniform vec...*/], 2, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 26, ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[2/*"a"*/], ::STRINGS[5/*"d"*/], ::STRINGS[9/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[14/*"k"*/], ::STRINGS[15/*"l"*/], ::STRINGS[16/*"m"*/], ::STRINGS[17/*"n"*/], ::STRINGS[18/*"o"*/], ::STRINGS[19/*"p"*/], ::STRINGS[20/*"q"*/], ::STRINGS[53/*"r"*/], ::STRINGS[45/*"s"*/], ::STRINGS[21/*"t"*/], ::STRINGS[56/*"u"*/], ::STRINGS[59/*"v"*/], ::STRINGS[60/*"w"*/], ::STRINGS[61/*"x"*/], ::STRINGS[62/*"y"*/], ::STRINGS[63/*"C"*/]));
    FuseDrawingPrimitives_bundle::Circle09647386_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[64/*"uniform vec...*/], ::STRINGS[65/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 17, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[9/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[14/*"k"*/], ::STRINGS[15/*"l"*/], ::STRINGS[16/*"m"*/], ::STRINGS[17/*"n"*/], ::STRINGS[18/*"o"*/], ::STRINGS[19/*"p"*/], ::STRINGS[45/*"s"*/]));
    FuseDrawingPrimitives_bundle::Circle09647387_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[66/*"uniform vec...*/], ::STRINGS[67/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 14, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[9/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[14/*"k"*/], ::STRINGS[15/*"l"*/], ::STRINGS[16/*"m"*/], ::STRINGS[19/*"p"*/]));
    FuseDrawingPrimitives_bundle::Circle09647389_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[64/*"uniform vec...*/], ::STRINGS[68/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 17, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[9/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[14/*"k"*/], ::STRINGS[15/*"l"*/], ::STRINGS[16/*"m"*/], ::STRINGS[17/*"n"*/], ::STRINGS[18/*"o"*/], ::STRINGS[19/*"p"*/], ::STRINGS[45/*"s"*/]));
    FuseDrawingPrimitives_bundle::Circle27c6b7fe_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[54/*"uniform vec...*/], ::STRINGS[69/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 19, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[9/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[14/*"k"*/], ::STRINGS[15/*"l"*/], ::STRINGS[16/*"m"*/], ::STRINGS[17/*"n"*/], ::STRINGS[18/*"o"*/], ::STRINGS[19/*"p"*/], ::STRINGS[20/*"q"*/], ::STRINGS[53/*"r"*/], ::STRINGS[56/*"u"*/]));
    FuseDrawingPrimitives_bundle::Circle27c6b7ff_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[70/*"uniform vec...*/], ::STRINGS[71/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 16, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[9/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[14/*"k"*/], ::STRINGS[15/*"l"*/], ::STRINGS[16/*"m"*/], ::STRINGS[17/*"n"*/], ::STRINGS[18/*"o"*/], ::STRINGS[53/*"r"*/]));
    FuseDrawingPrimitives_bundle::Circle4a971b16_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[72/*"uniform vec...*/], ::STRINGS[73/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 11, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[9/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[14/*"k"*/]));
    FuseDrawingPrimitives_bundle::Circle4c78c62c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[74/*"uniform vec...*/], ::STRINGS[75/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 15, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[9/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[14/*"k"*/], ::STRINGS[15/*"l"*/], ::STRINGS[16/*"m"*/], ::STRINGS[17/*"n"*/], ::STRINGS[18/*"o"*/]));
    FuseDrawingPrimitives_bundle::Circle60e596bb_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[57/*"uniform vec...*/], ::STRINGS[76/*"uniform vec...*/], 2, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 26, ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[2/*"a"*/], ::STRINGS[5/*"d"*/], ::STRINGS[9/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[14/*"k"*/], ::STRINGS[15/*"l"*/], ::STRINGS[16/*"m"*/], ::STRINGS[17/*"n"*/], ::STRINGS[18/*"o"*/], ::STRINGS[19/*"p"*/], ::STRINGS[20/*"q"*/], ::STRINGS[53/*"r"*/], ::STRINGS[45/*"s"*/], ::STRINGS[21/*"t"*/], ::STRINGS[56/*"u"*/], ::STRINGS[59/*"v"*/], ::STRINGS[60/*"w"*/], ::STRINGS[61/*"x"*/], ::STRINGS[62/*"y"*/], ::STRINGS[63/*"C"*/]));
    FuseDrawingPrimitives_bundle::Circle7aaa5f74_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[77/*"uniform vec...*/], ::STRINGS[78/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 14, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[9/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[14/*"k"*/], ::STRINGS[15/*"l"*/], ::STRINGS[16/*"m"*/], ::STRINGS[17/*"n"*/]));
    FuseDrawingPrimitives_bundle::Circle91c7af62_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[79/*"uniform vec...*/], ::STRINGS[80/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 12, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[9/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[14/*"k"*/], ::STRINGS[15/*"l"*/]));
    FuseDrawingPrimitives_bundle::Circlebe3e2220_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[81/*"uniform vec...*/], ::STRINGS[82/*"uniform vec...*/], 2, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 23, ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[2/*"a"*/], ::STRINGS[5/*"d"*/], ::STRINGS[9/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[14/*"k"*/], ::STRINGS[15/*"l"*/], ::STRINGS[16/*"m"*/], ::STRINGS[17/*"n"*/], ::STRINGS[18/*"o"*/], ::STRINGS[19/*"p"*/], ::STRINGS[20/*"q"*/], ::STRINGS[53/*"r"*/], ::STRINGS[45/*"s"*/], ::STRINGS[21/*"t"*/], ::STRINGS[56/*"u"*/], ::STRINGS[59/*"v"*/], ::STRINGS[83/*"z"*/]));
    FuseDrawingPrimitives_bundle::Circlecfb305c7_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[84/*"uniform vec...*/], ::STRINGS[85/*"uniform vec...*/], 2, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 24, ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[2/*"a"*/], ::STRINGS[5/*"d"*/], ::STRINGS[9/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[14/*"k"*/], ::STRINGS[15/*"l"*/], ::STRINGS[16/*"m"*/], ::STRINGS[17/*"n"*/], ::STRINGS[18/*"o"*/], ::STRINGS[19/*"p"*/], ::STRINGS[20/*"q"*/], ::STRINGS[53/*"r"*/], ::STRINGS[45/*"s"*/], ::STRINGS[21/*"t"*/], ::STRINGS[56/*"u"*/], ::STRINGS[59/*"v"*/], ::STRINGS[60/*"w"*/], ::STRINGS[86/*"A"*/]));
    FuseDrawingPrimitives_bundle::Circlecfb305c9_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[87/*"uniform vec...*/], ::STRINGS[88/*"uniform vec...*/], 2, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 21, ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[2/*"a"*/], ::STRINGS[5/*"d"*/], ::STRINGS[9/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[14/*"k"*/], ::STRINGS[15/*"l"*/], ::STRINGS[16/*"m"*/], ::STRINGS[17/*"n"*/], ::STRINGS[18/*"o"*/], ::STRINGS[19/*"p"*/], ::STRINGS[20/*"q"*/], ::STRINGS[53/*"r"*/], ::STRINGS[45/*"s"*/], ::STRINGS[21/*"t"*/], ::STRINGS[61/*"x"*/]));
    FuseDrawingPrimitives_bundle::Circlecfb305ca_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[84/*"uniform vec...*/], ::STRINGS[89/*"uniform vec...*/], 2, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 24, ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[2/*"a"*/], ::STRINGS[5/*"d"*/], ::STRINGS[9/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[14/*"k"*/], ::STRINGS[15/*"l"*/], ::STRINGS[16/*"m"*/], ::STRINGS[17/*"n"*/], ::STRINGS[18/*"o"*/], ::STRINGS[19/*"p"*/], ::STRINGS[20/*"q"*/], ::STRINGS[53/*"r"*/], ::STRINGS[45/*"s"*/], ::STRINGS[21/*"t"*/], ::STRINGS[56/*"u"*/], ::STRINGS[59/*"v"*/], ::STRINGS[60/*"w"*/], ::STRINGS[86/*"A"*/]));
    FuseDrawingPrimitives_bundle::Circled0e74ba4_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[90/*"uniform vec...*/], ::STRINGS[91/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 10, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[9/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/]));
    FuseDrawingPrimitives_bundle::Circled802ead9_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[77/*"uniform vec...*/], ::STRINGS[92/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 14, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[9/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[14/*"k"*/], ::STRINGS[15/*"l"*/], ::STRINGS[16/*"m"*/], ::STRINGS[17/*"n"*/]));
    FuseDrawingPrimitives_bundle::Circlee8f0edda_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[93/*"uniform vec...*/], ::STRINGS[94/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 13, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[9/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[14/*"k"*/], ::STRINGS[15/*"l"*/], ::STRINGS[16/*"m"*/]));
    FuseDrawingPrimitives_bundle::Circlee8f0eddb_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[93/*"uniform vec...*/], ::STRINGS[95/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 13, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[9/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[14/*"k"*/], ::STRINGS[15/*"l"*/], ::STRINGS[16/*"m"*/]));
    FuseDrawingPrimitives_bundle::Circleef203ac7_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[74/*"uniform vec...*/], ::STRINGS[96/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 15, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[9/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[14/*"k"*/], ::STRINGS[15/*"l"*/], ::STRINGS[16/*"m"*/], ::STRINGS[17/*"n"*/], ::STRINGS[18/*"o"*/]));
    FuseDrawingPrimitives_bundle::Circlef28f173b_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[97/*"uniform vec...*/], ::STRINGS[98/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 9, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[9/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/]));
    FuseDrawingPrimitives_bundle::Circlef28f173d_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[79/*"uniform vec...*/], ::STRINGS[99/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 12, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[9/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[14/*"k"*/], ::STRINGS[15/*"l"*/]));
    FuseDrawingPrimitives_bundle::Circlef28f173e_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[79/*"uniform vec...*/], ::STRINGS[100/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 12, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[9/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[14/*"k"*/], ::STRINGS[15/*"l"*/]));
    FuseDrawingPrimitives_bundle::Rectangle5aede5cb_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[101/*"uniform flo...*/], ::STRINGS[102/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 16, ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[9/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[14/*"k"*/], ::STRINGS[15/*"l"*/], ::STRINGS[16/*"m"*/], ::STRINGS[17/*"n"*/], ::STRINGS[18/*"o"*/], ::STRINGS[21/*"t"*/]));
    FuseDrawingPrimitives_bundle::Rectangle5aede5cc_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[101/*"uniform flo...*/], ::STRINGS[103/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 16, ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[9/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[14/*"k"*/], ::STRINGS[15/*"l"*/], ::STRINGS[16/*"m"*/], ::STRINGS[17/*"n"*/], ::STRINGS[18/*"o"*/], ::STRINGS[21/*"t"*/]));
    FuseDrawingPrimitives_bundle::Rectangle6bc1d5d3_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[104/*"uniform flo...*/], ::STRINGS[105/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 11, ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[9/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[14/*"k"*/]));
    FuseDrawingPrimitives_bundle::Rectangle6bc1d5d4_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[104/*"uniform flo...*/], ::STRINGS[106/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 11, ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[9/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[14/*"k"*/]));
    FuseDrawingPrimitives_bundle::Rectangle7c95c5e3_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[107/*"uniform flo...*/], ::STRINGS[108/*"uniform vec...*/], 3, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 23, ::STRINGS[5/*"d"*/], ::STRINGS[9/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[14/*"k"*/], ::STRINGS[15/*"l"*/], ::STRINGS[16/*"m"*/], ::STRINGS[17/*"n"*/], ::STRINGS[18/*"o"*/], ::STRINGS[19/*"p"*/], ::STRINGS[20/*"q"*/], ::STRINGS[53/*"r"*/], ::STRINGS[45/*"s"*/], ::STRINGS[21/*"t"*/], ::STRINGS[56/*"u"*/], ::STRINGS[59/*"v"*/], ::STRINGS[109/*"B"*/]));
    FuseDrawingPrimitives_bundle::Rectangle7c95c5e4_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[107/*"uniform flo...*/], ::STRINGS[110/*"uniform vec...*/], 3, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 23, ::STRINGS[5/*"d"*/], ::STRINGS[9/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[14/*"k"*/], ::STRINGS[15/*"l"*/], ::STRINGS[16/*"m"*/], ::STRINGS[17/*"n"*/], ::STRINGS[18/*"o"*/], ::STRINGS[19/*"p"*/], ::STRINGS[20/*"q"*/], ::STRINGS[53/*"r"*/], ::STRINGS[45/*"s"*/], ::STRINGS[21/*"t"*/], ::STRINGS[56/*"u"*/], ::STRINGS[59/*"v"*/], ::STRINGS[109/*"B"*/]));
    FuseDrawingPrimitives_bundle::Rectangle7fa93ce4_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[111/*"uniform flo...*/], ::STRINGS[112/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 13, ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[9/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[14/*"k"*/], ::STRINGS[15/*"l"*/], ::STRINGS[16/*"m"*/]));
    FuseDrawingPrimitives_bundle::Rectangle8d69b5eb_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[113/*"uniform flo...*/], ::STRINGS[114/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 12, ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[9/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[14/*"k"*/], ::STRINGS[15/*"l"*/]));
    FuseDrawingPrimitives_bundle::Rectangle8d69b5ec_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[113/*"uniform flo...*/], ::STRINGS[115/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 12, ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[9/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[14/*"k"*/], ::STRINGS[15/*"l"*/]));
    FuseDrawingPrimitives_bundle::Rectanglea858f3bc_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[111/*"uniform flo...*/], ::STRINGS[116/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 13, ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[9/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[14/*"k"*/], ::STRINGS[15/*"l"*/], ::STRINGS[16/*"m"*/]));
    FuseDrawingPrimitives_bundle::Rectanglea858f4fc_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[117/*"uniform flo...*/], ::STRINGS[118/*"uniform vec...*/], 3, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 25, ::STRINGS[5/*"d"*/], ::STRINGS[9/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[14/*"k"*/], ::STRINGS[15/*"l"*/], ::STRINGS[16/*"m"*/], ::STRINGS[17/*"n"*/], ::STRINGS[18/*"o"*/], ::STRINGS[19/*"p"*/], ::STRINGS[20/*"q"*/], ::STRINGS[53/*"r"*/], ::STRINGS[45/*"s"*/], ::STRINGS[21/*"t"*/], ::STRINGS[56/*"u"*/], ::STRINGS[59/*"v"*/], ::STRINGS[60/*"w"*/], ::STRINGS[61/*"x"*/], ::STRINGS[119/*"D"*/]));
    FuseDrawingPrimitives_bundle::Rectanglea858f503_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[117/*"uniform flo...*/], ::STRINGS[120/*"uniform vec...*/], 3, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 25, ::STRINGS[5/*"d"*/], ::STRINGS[9/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[14/*"k"*/], ::STRINGS[15/*"l"*/], ::STRINGS[16/*"m"*/], ::STRINGS[17/*"n"*/], ::STRINGS[18/*"o"*/], ::STRINGS[19/*"p"*/], ::STRINGS[20/*"q"*/], ::STRINGS[53/*"r"*/], ::STRINGS[45/*"s"*/], ::STRINGS[21/*"t"*/], ::STRINGS[56/*"u"*/], ::STRINGS[59/*"v"*/], ::STRINGS[60/*"w"*/], ::STRINGS[61/*"x"*/], ::STRINGS[119/*"D"*/]));
    FuseDrawingPrimitives_bundle::Rectanglea858f53c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[121/*"uniform flo...*/], ::STRINGS[122/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 14, ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[9/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[14/*"k"*/], ::STRINGS[15/*"l"*/], ::STRINGS[16/*"m"*/], ::STRINGS[17/*"n"*/]));
    FuseDrawingPrimitives_bundle::Rectanglea858f53f_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[121/*"uniform flo...*/], ::STRINGS[123/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 14, ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[9/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[14/*"k"*/], ::STRINGS[15/*"l"*/], ::STRINGS[16/*"m"*/], ::STRINGS[17/*"n"*/]));
    FuseDrawingPrimitives_bundle::Rectanglea858f57b_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[124/*"uniform flo...*/], ::STRINGS[125/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 18, ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[9/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[14/*"k"*/], ::STRINGS[15/*"l"*/], ::STRINGS[16/*"m"*/], ::STRINGS[17/*"n"*/], ::STRINGS[18/*"o"*/], ::STRINGS[19/*"p"*/], ::STRINGS[20/*"q"*/], ::STRINGS[59/*"v"*/]));
    FuseDrawingPrimitives_bundle::Rectanglea858f57c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[124/*"uniform flo...*/], ::STRINGS[126/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 18, ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[9/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[14/*"k"*/], ::STRINGS[15/*"l"*/], ::STRINGS[16/*"m"*/], ::STRINGS[17/*"n"*/], ::STRINGS[18/*"o"*/], ::STRINGS[19/*"p"*/], ::STRINGS[20/*"q"*/], ::STRINGS[59/*"v"*/]));
}

static void FuseDrawingPrimitives_bundle_build(uType* type)
{
    ::STRINGS[54] = uString::Const("uniform vec2 b, c, e, f, g, n;\n"
        "uniform mat4 d;\n"
        "uniform float o;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying float s;\n"
        "varying vec2 t;\n"
        "\n"
        "float v(vec2 w, vec2 x, float y){\n"
        "    vec2 z = (w * e) - f;\n"
        "    float A = dot(z, x) / y;\n"
        "    return (A - g.x) / g.y;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 w = a * b;\n"
        "    vec2 x = w + c;\n"
        "    s = v(x / e, n, o);\n"
        "    t = w;\n"
        "    gl_Position = d * vec4(x, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[55] = uString::Const("uniform float h, i, j, k, l, m;\n"
        "uniform vec2 p, q, r;\n"
        "\n"
        "uniform sampler2D u;\n"
        "\n"
        "varying float s;\n"
        "varying vec2 t;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 w = texture2D(u, vec2(s, 0.5));\n"
        "    vec4 x = vec4(w.xyz, w.w * (clamp(0.5 - (((abs((length(t) - h) - i) - j) * k) * l), float(0), float(1)) * clamp(0.5 - ((min(dot(t, p), min(dot(t, q), dot(t, r))) * k) * l), float(0), float(1))));\n"
        "    gl_FragColor = vec4((x.xyz * x.w) * m, x.w * m);\n"
        "}\n"
        "");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[9] = uString::Const("e");
    ::STRINGS[6] = uString::Const("f");
    ::STRINGS[10] = uString::Const("g");
    ::STRINGS[11] = uString::Const("h");
    ::STRINGS[12] = uString::Const("i");
    ::STRINGS[13] = uString::Const("j");
    ::STRINGS[14] = uString::Const("k");
    ::STRINGS[15] = uString::Const("l");
    ::STRINGS[16] = uString::Const("m");
    ::STRINGS[17] = uString::Const("n");
    ::STRINGS[18] = uString::Const("o");
    ::STRINGS[19] = uString::Const("p");
    ::STRINGS[20] = uString::Const("q");
    ::STRINGS[53] = uString::Const("r");
    ::STRINGS[56] = uString::Const("u");
    ::STRINGS[57] = uString::Const("uniform vec2 d, e, g, h, i, j, k, m, l;\n"
        "uniform mat4 f;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 z, A, B;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 D = a * d;\n"
        "    vec2 E = D + e;\n"
        "    vec2 F = ((((g * (E / g)) - h) / i) * j) + k;\n"
        "    z = m + (F * l);\n"
        "    A = F;\n"
        "    B = D;\n"
        "    gl_Position = f * vec4(E, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[58] = uString::Const("uniform vec2 o, n, w, x, y;\n"
        "uniform vec4 p;\n"
        "uniform float q, r, s, t, u, v;\n"
        "\n"
        "uniform sampler2D C;\n"
        "\n"
        "varying vec2 z, A, B;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 D = (c ? vec4(float(0)) : texture2D(C, b ? (o + (fract(z) * n)) : A)) * p;\n"
        "    vec4 E = vec4(D.xyz, D.w * (clamp(0.5 - (((abs((length(B) - q) - r) - s) * t) * u), float(0), float(1)) * clamp(0.5 - ((min(dot(B, w), min(dot(B, x), dot(B, y))) * t) * u), float(0), float(1))));\n"
        "    gl_FragColor = vec4((E.xyz * E.w) * v, E.w * v);\n"
        "}\n"
        "");
    ::STRINGS[45] = uString::Const("s");
    ::STRINGS[21] = uString::Const("t");
    ::STRINGS[59] = uString::Const("v");
    ::STRINGS[60] = uString::Const("w");
    ::STRINGS[61] = uString::Const("x");
    ::STRINGS[62] = uString::Const("y");
    ::STRINGS[63] = uString::Const("C");
    ::STRINGS[64] = uString::Const("uniform vec2 b, c, e, f, g, l;\n"
        "uniform mat4 d;\n"
        "uniform float m;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying float q;\n"
        "varying vec2 r;\n"
        "\n"
        "float t(vec2 u, vec2 v, float w){\n"
        "    vec2 x = (u * e) - f;\n"
        "    float y = dot(x, v) / w;\n"
        "    return (y - g.x) / g.y;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 u = a * b;\n"
        "    vec2 v = u + c;\n"
        "    q = t(v / e, l, m);\n"
        "    r = u;\n"
        "    gl_Position = d * vec4(v, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[65] = uString::Const("uniform float h, i, j, k;\n"
        "uniform vec2 n, o, p;\n"
        "\n"
        "uniform sampler2D s;\n"
        "\n"
        "varying float q;\n"
        "varying vec2 r;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 u = texture2D(s, vec2(q, 0.5));\n"
        "    vec4 v = vec4(u.xyz, u.w * (clamp(0.5 - (((length(r) - h) * i) * j), float(0), float(1)) * clamp(0.5 - ((max(dot(r, n), max(dot(r, o), dot(r, p))) * i) * j), float(0), float(1))));\n"
        "    gl_FragColor = vec4((v.xyz * v.w) * k, v.w * k);\n"
        "}\n"
        "");
    ::STRINGS[66] = uString::Const("uniform vec2 b, c, e, f, g, l;\n"
        "uniform mat4 d;\n"
        "uniform float m;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying float n;\n"
        "varying vec2 o;\n"
        "\n"
        "float q(vec2 r, vec2 s, float t){\n"
        "    vec2 u = (r * e) - f;\n"
        "    float v = dot(u, s) / t;\n"
        "    return (v - g.x) / g.y;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 r = a * b;\n"
        "    vec2 s = r + c;\n"
        "    n = q(s / e, l, m);\n"
        "    o = r;\n"
        "    gl_Position = d * vec4(s, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[67] = uString::Const("uniform float h, i, j, k;\n"
        "\n"
        "uniform sampler2D p;\n"
        "\n"
        "varying float n;\n"
        "varying vec2 o;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 r = texture2D(p, vec2(n, 0.5));\n"
        "    vec4 s = vec4(r.xyz, r.w * (clamp(0.5 - (((length(o) - h) * i) * j), float(0), float(1)) * float(1)));\n"
        "    gl_FragColor = vec4((s.xyz * s.w) * k, s.w * k);\n"
        "}\n"
        "");
    ::STRINGS[68] = uString::Const("uniform float h, i, j, k;\n"
        "uniform vec2 n, o, p;\n"
        "\n"
        "uniform sampler2D s;\n"
        "\n"
        "varying float q;\n"
        "varying vec2 r;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 u = texture2D(s, vec2(q, 0.5));\n"
        "    vec4 v = vec4(u.xyz, u.w * (clamp(0.5 - (((length(r) - h) * i) * j), float(0), float(1)) * clamp(0.5 - ((min(dot(r, n), min(dot(r, o), dot(r, p))) * i) * j), float(0), float(1))));\n"
        "    gl_FragColor = vec4((v.xyz * v.w) * k, v.w * k);\n"
        "}\n"
        "");
    ::STRINGS[69] = uString::Const("uniform float h, i, j, k, l, m;\n"
        "uniform vec2 p, q, r;\n"
        "\n"
        "uniform sampler2D u;\n"
        "\n"
        "varying float s;\n"
        "varying vec2 t;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 w = texture2D(u, vec2(s, 0.5));\n"
        "    vec4 x = vec4(w.xyz, w.w * (clamp(0.5 - (((abs((length(t) - h) - i) - j) * k) * l), float(0), float(1)) * clamp(0.5 - ((max(dot(t, p), max(dot(t, q), dot(t, r))) * k) * l), float(0), float(1))));\n"
        "    gl_FragColor = vec4((x.xyz * x.w) * m, x.w * m);\n"
        "}\n"
        "");
    ::STRINGS[70] = uString::Const("uniform vec2 b, c, e, f, g, n;\n"
        "uniform mat4 d;\n"
        "uniform float o;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying float p;\n"
        "varying vec2 q;\n"
        "\n"
        "float s(vec2 t, vec2 u, float v){\n"
        "    vec2 w = (t * e) - f;\n"
        "    float x = dot(w, u) / v;\n"
        "    return (x - g.x) / g.y;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 t = a * b;\n"
        "    vec2 u = t + c;\n"
        "    p = s(u / e, n, o);\n"
        "    q = t;\n"
        "    gl_Position = d * vec4(u, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[71] = uString::Const("uniform float h, i, j, k, l, m;\n"
        "\n"
        "uniform sampler2D r;\n"
        "\n"
        "varying float p;\n"
        "varying vec2 q;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 t = texture2D(r, vec2(p, 0.5));\n"
        "    vec4 u = vec4(t.xyz, t.w * (clamp(0.5 - (((abs((length(q) - h) - i) - j) * k) * l), float(0), float(1)) * float(1)));\n"
        "    gl_FragColor = vec4((u.xyz * u.w) * m, u.w * m);\n"
        "}\n"
        "");
    ::STRINGS[72] = uString::Const("uniform vec2 b, c;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 l;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 m = a * b;\n"
        "    l = m;\n"
        "    gl_Position = d * vec4(m + c, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[73] = uString::Const("uniform float e, f, g, h, i, j;\n"
        "uniform vec3 k;\n"
        "\n"
        "varying vec2 l;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 m = vec4(k, j * (clamp(0.5 - (((abs((length(l) - e) - f) - g) * h) * i), float(0), float(1)) * float(1)));\n"
        "    gl_FragColor = vec4((m.xyz * m.w) * 1.0, m.w);\n"
        "}\n"
        "");
    ::STRINGS[74] = uString::Const("uniform vec2 b, c;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 p;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 q = a * b;\n"
        "    p = q;\n"
        "    gl_Position = d * vec4(q + c, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[75] = uString::Const("uniform float e, f, g, h, i, j, l;\n"
        "uniform vec2 m, n, o;\n"
        "uniform vec3 k;\n"
        "\n"
        "varying vec2 p;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 q = vec4(k, j * (clamp(0.5 - (((abs((length(p) - e) - f) - g) * h) * i), float(0), float(1)) * clamp(0.5 - ((min(dot(p, m), min(dot(p, n), dot(p, o))) * h) * i), float(0), float(1))));\n"
        "    gl_FragColor = vec4((q.xyz * q.w) * l, q.w * l);\n"
        "}\n"
        "");
    ::STRINGS[76] = uString::Const("uniform vec2 o, n, w, x, y;\n"
        "uniform vec4 p;\n"
        "uniform float q, r, s, t, u, v;\n"
        "\n"
        "uniform sampler2D C;\n"
        "\n"
        "varying vec2 z, A, B;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 D = (c ? vec4(float(0)) : texture2D(C, b ? (o + (fract(z) * n)) : A)) * p;\n"
        "    vec4 E = vec4(D.xyz, D.w * (clamp(0.5 - (((abs((length(B) - q) - r) - s) * t) * u), float(0), float(1)) * clamp(0.5 - ((max(dot(B, w), max(dot(B, x), dot(B, y))) * t) * u), float(0), float(1))));\n"
        "    gl_FragColor = vec4((E.xyz * E.w) * v, E.w * v);\n"
        "}\n"
        "");
    ::STRINGS[77] = uString::Const("uniform vec2 b, c;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 o;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 p = a * b;\n"
        "    o = p;\n"
        "    gl_Position = d * vec4(p + c, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[78] = uString::Const("uniform float e, f, g, h, i, j;\n"
        "uniform vec2 l, m, n;\n"
        "uniform vec3 k;\n"
        "\n"
        "varying vec2 o;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 p = vec4(k, j * (clamp(0.5 - (((abs((length(o) - e) - f) - g) * h) * i), float(0), float(1)) * clamp(0.5 - ((min(dot(o, l), min(dot(o, m), dot(o, n))) * h) * i), float(0), float(1))));\n"
        "    gl_FragColor = vec4((p.xyz * p.w) * 1.0, p.w);\n"
        "}\n"
        "");
    ::STRINGS[79] = uString::Const("uniform vec2 b, c;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 m;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 n = a * b;\n"
        "    m = n;\n"
        "    gl_Position = d * vec4(n + c, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[80] = uString::Const("uniform float e, f, g, h, i, j, l;\n"
        "uniform vec3 k;\n"
        "\n"
        "varying vec2 m;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 n = vec4(k, j * (clamp(0.5 - (((abs((length(m) - e) - f) - g) * h) * i), float(0), float(1)) * float(1)));\n"
        "    gl_FragColor = vec4((n.xyz * n.w) * l, n.w * l);\n"
        "}\n"
        "");
    ::STRINGS[81] = uString::Const("uniform vec2 d, e, g, h, i, j, k, m, l;\n"
        "uniform mat4 f;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 w, x, y;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 A = a * d;\n"
        "    vec2 B = A + e;\n"
        "    vec2 C = ((((g * (B / g)) - h) / i) * j) + k;\n"
        "    w = m + (C * l);\n"
        "    x = C;\n"
        "    y = A;\n"
        "    gl_Position = f * vec4(B, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[82] = uString::Const("uniform vec2 o, n;\n"
        "uniform vec4 p;\n"
        "uniform float q, r, s, t, u, v;\n"
        "\n"
        "uniform sampler2D z;\n"
        "\n"
        "varying vec2 w, x, y;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 A = (c ? vec4(float(0)) : texture2D(z, b ? (o + (fract(w) * n)) : x)) * p;\n"
        "    vec4 B = vec4(A.xyz, A.w * (clamp(0.5 - (((abs((length(y) - q) - r) - s) * t) * u), float(0), float(1)) * float(1)));\n"
        "    gl_FragColor = vec4((B.xyz * B.w) * v, B.w * v);\n"
        "}\n"
        "");
    ::STRINGS[83] = uString::Const("z");
    ::STRINGS[84] = uString::Const("uniform vec2 d, e, g, h, i, j, k, m, l;\n"
        "uniform mat4 f;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 x, y, z;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 B = a * d;\n"
        "    vec2 C = B + e;\n"
        "    vec2 D = ((((g * (C / g)) - h) / i) * j) + k;\n"
        "    x = m + (D * l);\n"
        "    y = D;\n"
        "    z = B;\n"
        "    gl_Position = f * vec4(C, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[85] = uString::Const("uniform vec2 o, n, u, v, w;\n"
        "uniform vec4 p;\n"
        "uniform float q, r, s, t;\n"
        "\n"
        "uniform sampler2D A;\n"
        "\n"
        "varying vec2 x, y, z;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 B = (c ? vec4(float(0)) : texture2D(A, b ? (o + (fract(x) * n)) : y)) * p;\n"
        "    vec4 C = vec4(B.xyz, B.w * (clamp(0.5 - (((length(z) - q) * r) * s), float(0), float(1)) * clamp(0.5 - ((min(dot(z, u), min(dot(z, v), dot(z, w))) * r) * s), float(0), float(1))));\n"
        "    gl_FragColor = vec4((C.xyz * C.w) * t, C.w * t);\n"
        "}\n"
        "");
    ::STRINGS[86] = uString::Const("A");
    ::STRINGS[87] = uString::Const("uniform vec2 d, e, g, h, i, j, k, m, l;\n"
        "uniform mat4 f;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 u, v, w;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 y = a * d;\n"
        "    vec2 z = y + e;\n"
        "    vec2 A = ((((g * (z / g)) - h) / i) * j) + k;\n"
        "    u = m + (A * l);\n"
        "    v = A;\n"
        "    w = y;\n"
        "    gl_Position = f * vec4(z, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[88] = uString::Const("uniform vec2 o, n;\n"
        "uniform vec4 p;\n"
        "uniform float q, r, s, t;\n"
        "\n"
        "uniform sampler2D x;\n"
        "\n"
        "varying vec2 u, v, w;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 y = (c ? vec4(float(0)) : texture2D(x, b ? (o + (fract(u) * n)) : v)) * p;\n"
        "    vec4 z = vec4(y.xyz, y.w * (clamp(0.5 - (((length(w) - q) * r) * s), float(0), float(1)) * float(1)));\n"
        "    gl_FragColor = vec4((z.xyz * z.w) * t, z.w * t);\n"
        "}\n"
        "");
    ::STRINGS[89] = uString::Const("uniform vec2 o, n, u, v, w;\n"
        "uniform vec4 p;\n"
        "uniform float q, r, s, t;\n"
        "\n"
        "uniform sampler2D A;\n"
        "\n"
        "varying vec2 x, y, z;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 B = (c ? vec4(float(0)) : texture2D(A, b ? (o + (fract(x) * n)) : y)) * p;\n"
        "    vec4 C = vec4(B.xyz, B.w * (clamp(0.5 - (((length(z) - q) * r) * s), float(0), float(1)) * clamp(0.5 - ((max(dot(z, u), max(dot(z, v), dot(z, w))) * r) * s), float(0), float(1))));\n"
        "    gl_FragColor = vec4((C.xyz * C.w) * t, C.w * t);\n"
        "}\n"
        "");
    ::STRINGS[90] = uString::Const("uniform vec2 b, c;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 k;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 l = a * b;\n"
        "    k = l;\n"
        "    gl_Position = d * vec4(l + c, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[91] = uString::Const("uniform float e, f, g, h, j;\n"
        "uniform vec3 i;\n"
        "\n"
        "varying vec2 k;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 l = vec4(i, h * (clamp(0.5 - (((length(k) - e) * f) * g), float(0), float(1)) * float(1)));\n"
        "    gl_FragColor = vec4((l.xyz * l.w) * j, l.w * j);\n"
        "}\n"
        "");
    ::STRINGS[92] = uString::Const("uniform float e, f, g, h, i, j;\n"
        "uniform vec2 l, m, n;\n"
        "uniform vec3 k;\n"
        "\n"
        "varying vec2 o;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 p = vec4(k, j * (clamp(0.5 - (((abs((length(o) - e) - f) - g) * h) * i), float(0), float(1)) * clamp(0.5 - ((max(dot(o, l), max(dot(o, m), dot(o, n))) * h) * i), float(0), float(1))));\n"
        "    gl_FragColor = vec4((p.xyz * p.w) * 1.0, p.w);\n"
        "}\n"
        "");
    ::STRINGS[93] = uString::Const("uniform vec2 b, c;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 n;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 o = a * b;\n"
        "    n = o;\n"
        "    gl_Position = d * vec4(o + c, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[94] = uString::Const("uniform float e, f, g, h, j;\n"
        "uniform vec2 k, l, m;\n"
        "uniform vec3 i;\n"
        "\n"
        "varying vec2 n;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 o = vec4(i, h * (clamp(0.5 - (((length(n) - e) * f) * g), float(0), float(1)) * clamp(0.5 - ((max(dot(n, k), max(dot(n, l), dot(n, m))) * f) * g), float(0), float(1))));\n"
        "    gl_FragColor = vec4((o.xyz * o.w) * j, o.w * j);\n"
        "}\n"
        "");
    ::STRINGS[95] = uString::Const("uniform float e, f, g, h, j;\n"
        "uniform vec2 k, l, m;\n"
        "uniform vec3 i;\n"
        "\n"
        "varying vec2 n;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 o = vec4(i, h * (clamp(0.5 - (((length(n) - e) * f) * g), float(0), float(1)) * clamp(0.5 - ((min(dot(n, k), min(dot(n, l), dot(n, m))) * f) * g), float(0), float(1))));\n"
        "    gl_FragColor = vec4((o.xyz * o.w) * j, o.w * j);\n"
        "}\n"
        "");
    ::STRINGS[96] = uString::Const("uniform float e, f, g, h, i, j, l;\n"
        "uniform vec2 m, n, o;\n"
        "uniform vec3 k;\n"
        "\n"
        "varying vec2 p;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 q = vec4(k, j * (clamp(0.5 - (((abs((length(p) - e) - f) - g) * h) * i), float(0), float(1)) * clamp(0.5 - ((max(dot(p, m), max(dot(p, n), dot(p, o))) * h) * i), float(0), float(1))));\n"
        "    gl_FragColor = vec4((q.xyz * q.w) * l, q.w * l);\n"
        "}\n"
        "");
    ::STRINGS[97] = uString::Const("uniform vec2 b, c;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 j;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 k = a * b;\n"
        "    j = k;\n"
        "    gl_Position = d * vec4(k + c, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[98] = uString::Const("uniform float e, f, g, h;\n"
        "uniform vec3 i;\n"
        "\n"
        "varying vec2 j;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 k = vec4(i, h * (clamp(0.5 - (((length(j) - e) * f) * g), float(0), float(1)) * float(1)));\n"
        "    gl_FragColor = vec4((k.xyz * k.w) * 1.0, k.w);\n"
        "}\n"
        "");
    ::STRINGS[99] = uString::Const("uniform float e, f, g, h;\n"
        "uniform vec2 j, k, l;\n"
        "uniform vec3 i;\n"
        "\n"
        "varying vec2 m;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 n = vec4(i, h * (clamp(0.5 - (((length(m) - e) * f) * g), float(0), float(1)) * clamp(0.5 - ((min(dot(m, j), min(dot(m, k), dot(m, l))) * f) * g), float(0), float(1))));\n"
        "    gl_FragColor = vec4((n.xyz * n.w) * 1.0, n.w);\n"
        "}\n"
        "");
    ::STRINGS[100] = uString::Const("uniform float e, f, g, h;\n"
        "uniform vec2 j, k, l;\n"
        "uniform vec3 i;\n"
        "\n"
        "varying vec2 m;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 n = vec4(i, h * (clamp(0.5 - (((length(m) - e) * f) * g), float(0), float(1)) * clamp(0.5 - ((max(dot(m, j), max(dot(m, k), dot(m, l))) * f) * g), float(0), float(1))));\n"
        "    gl_FragColor = vec4((n.xyz * n.w) * 1.0, n.w);\n"
        "}\n"
        "");
    ::STRINGS[101] = uString::Const("uniform float e[d], o;\n"
        "uniform vec2 f, h, i, j, n;\n"
        "uniform mat4 g;\n"
        "\n"
        "attribute vec4 a, b;\n"
        "attribute float c;\n"
        "\n"
        "varying float p, q;\n"
        "varying vec2 r, s;\n"
        "\n"
        "float u(vec2 v, vec2 w, float x){\n"
        "    vec2 y = (v * h) - i;\n"
        "    float z = dot(y, w) / x;\n"
        "    return (z - j.x) / j.y;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 v = vec2((sign(a.x) * e[int(abs(a.x))]) + (sign(a.y) * e[int(abs(a.y))]), (sign(a.z) * e[int(abs(a.z))]) + (sign(a.w) * e[int(abs(a.w))])) + f;\n"
        "    p = e[int(c)];\n"
        "    q = u(v / h, n, o);\n"
        "    r = v;\n"
        "    s = vec2((sign(b.x) * e[int(abs(b.x))]) + (sign(b.y) * e[int(abs(b.y))]), (sign(b.z) * e[int(abs(b.z))]) + (sign(b.w) * e[int(abs(b.w))])) + f;\n"
        "    gl_Position = g * vec4(v, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[102] = uString::Const("uniform float k, l, m;\n"
        "\n"
        "uniform sampler2D t;\n"
        "\n"
        "varying float p, q;\n"
        "varying vec2 r, s;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 v = texture2D(t, vec2(q, 0.5));\n"
        "    vec4 w = vec4(v.xyz, v.w * clamp(0.5 - (((distance(r, s) - p) * k) * l), float(0), float(1)));\n"
        "    gl_FragColor = vec4((w.xyz * w.w) * m, w.w * m);\n"
        "}\n"
        "");
    ::STRINGS[103] = uString::Const("uniform float k, l, m;\n"
        "\n"
        "uniform sampler2D t;\n"
        "\n"
        "varying float p, q;\n"
        "varying vec2 r, s;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 v = texture2D(t, vec2(q, 0.5));\n"
        "    float w = clamp(0.5 - (((distance(r, s) - p) * k) * l), float(0), float(1));\n"
        "    vec4 x = vec4(v.xyz, v.w * (((w * w) * w) * ((w * ((w * float(6)) - float(15))) + float(10))));\n"
        "    gl_FragColor = vec4((x.xyz * x.w) * m, x.w * m);\n"
        "}\n"
        "");
    ::STRINGS[104] = uString::Const("uniform float e[d];\n"
        "uniform vec2 f;\n"
        "uniform mat4 g;\n"
        "\n"
        "attribute vec4 a, b;\n"
        "attribute float c;\n"
        "\n"
        "varying float l;\n"
        "varying vec2 m, n;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 o = vec2((sign(a.x) * e[int(abs(a.x))]) + (sign(a.y) * e[int(abs(a.y))]), (sign(a.z) * e[int(abs(a.z))]) + (sign(a.w) * e[int(abs(a.w))])) + f;\n"
        "    l = e[int(c)];\n"
        "    m = o;\n"
        "    n = vec2((sign(b.x) * e[int(abs(b.x))]) + (sign(b.y) * e[int(abs(b.y))]), (sign(b.z) * e[int(abs(b.z))]) + (sign(b.w) * e[int(abs(b.w))])) + f;\n"
        "    gl_Position = g * vec4(o, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[105] = uString::Const("uniform float h, i, j;\n"
        "uniform vec3 k;\n"
        "\n"
        "varying float l;\n"
        "varying vec2 m, n;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 o = vec4(k, j * clamp(0.5 - (((distance(m, n) - l) * h) * i), float(0), float(1)));\n"
        "    gl_FragColor = vec4((o.xyz * o.w) * 1.0, o.w);\n"
        "}\n"
        "");
    ::STRINGS[106] = uString::Const("uniform float h, i, j;\n"
        "uniform vec3 k;\n"
        "\n"
        "varying float l;\n"
        "varying vec2 m, n;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    float o = clamp(0.5 - (((distance(m, n) - l) * h) * i), float(0), float(1));\n"
        "    vec4 p = vec4(k, j * (((o * o) * o) * ((o * ((o * float(6)) - float(15))) + float(10))));\n"
        "    gl_FragColor = vec4((p.xyz * p.w) * 1.0, p.w);\n"
        "}\n"
        "");
    ::STRINGS[107] = uString::Const("uniform float g[d];\n"
        "uniform vec2 h, j, k, l, m, n, p, o;\n"
        "uniform mat4 i;\n"
        "\n"
        "attribute vec4 a, b;\n"
        "attribute float c;\n"
        "\n"
        "varying float w;\n"
        "varying vec2 x, y, z, A;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 C = vec2((sign(a.x) * g[int(abs(a.x))]) + (sign(a.y) * g[int(abs(a.y))]), (sign(a.z) * g[int(abs(a.z))]) + (sign(a.w) * g[int(abs(a.w))])) + h;\n"
        "    vec2 D = ((((j * (C / j)) - k) / l) * m) + n;\n"
        "    w = g[int(c)];\n"
        "    x = p + (D * o);\n"
        "    y = D;\n"
        "    z = C;\n"
        "    A = vec2((sign(b.x) * g[int(abs(b.x))]) + (sign(b.y) * g[int(abs(b.y))]), (sign(b.z) * g[int(abs(b.z))]) + (sign(b.w) * g[int(abs(b.w))])) + h;\n"
        "    gl_Position = i * vec4(C, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[108] = uString::Const("uniform vec2 r, q;\n"
        "uniform vec4 s;\n"
        "uniform float t, u, v;\n"
        "\n"
        "uniform sampler2D B;\n"
        "\n"
        "varying float w;\n"
        "varying vec2 x, y, z, A;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 C = (f ? vec4(float(0)) : texture2D(B, e ? (r + (fract(x) * q)) : y)) * s;\n"
        "    vec4 D = vec4(C.xyz, C.w * clamp(0.5 - (((distance(z, A) - w) * t) * u), float(0), float(1)));\n"
        "    gl_FragColor = vec4((D.xyz * D.w) * v, D.w * v);\n"
        "}\n"
        "");
    ::STRINGS[109] = uString::Const("B");
    ::STRINGS[110] = uString::Const("uniform vec2 r, q;\n"
        "uniform vec4 s;\n"
        "uniform float t, u, v;\n"
        "\n"
        "uniform sampler2D B;\n"
        "\n"
        "varying float w;\n"
        "varying vec2 x, y, z, A;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 C = (f ? vec4(float(0)) : texture2D(B, e ? (r + (fract(x) * q)) : y)) * s;\n"
        "    float D = clamp(0.5 - (((distance(z, A) - w) * t) * u), float(0), float(1));\n"
        "    vec4 E = vec4(C.xyz, C.w * (((D * D) * D) * ((D * ((D * float(6)) - float(15))) + float(10))));\n"
        "    gl_FragColor = vec4((E.xyz * E.w) * v, E.w * v);\n"
        "}\n"
        "");
    ::STRINGS[111] = uString::Const("uniform float e[d];\n"
        "uniform vec2 f;\n"
        "uniform mat4 g;\n"
        "\n"
        "attribute vec4 a, b;\n"
        "attribute float c;\n"
        "\n"
        "varying float n;\n"
        "varying vec2 o, p;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 q = vec2((sign(a.x) * e[int(abs(a.x))]) + (sign(a.y) * e[int(abs(a.y))]), (sign(a.z) * e[int(abs(a.z))]) + (sign(a.w) * e[int(abs(a.w))])) + f;\n"
        "    n = e[int(c)];\n"
        "    o = q;\n"
        "    p = vec2((sign(b.x) * e[int(abs(b.x))]) + (sign(b.y) * e[int(abs(b.y))]), (sign(b.z) * e[int(abs(b.z))]) + (sign(b.w) * e[int(abs(b.w))])) + f;\n"
        "    gl_Position = g * vec4(q, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[112] = uString::Const("uniform float h, i, j, k, l;\n"
        "uniform vec3 m;\n"
        "\n"
        "varying float n;\n"
        "varying vec2 o, p;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 q = vec4(m, l * clamp(0.5 - (((abs((distance(o, p) - n) - h) - i) * j) * k), float(0), float(1)));\n"
        "    gl_FragColor = vec4((q.xyz * q.w) * 1.0, q.w);\n"
        "}\n"
        "");
    ::STRINGS[113] = uString::Const("uniform float e[d];\n"
        "uniform vec2 f;\n"
        "uniform mat4 g;\n"
        "\n"
        "attribute vec4 a, b;\n"
        "attribute float c;\n"
        "\n"
        "varying float m;\n"
        "varying vec2 n, o;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 p = vec2((sign(a.x) * e[int(abs(a.x))]) + (sign(a.y) * e[int(abs(a.y))]), (sign(a.z) * e[int(abs(a.z))]) + (sign(a.w) * e[int(abs(a.w))])) + f;\n"
        "    m = e[int(c)];\n"
        "    n = p;\n"
        "    o = vec2((sign(b.x) * e[int(abs(b.x))]) + (sign(b.y) * e[int(abs(b.y))]), (sign(b.z) * e[int(abs(b.z))]) + (sign(b.w) * e[int(abs(b.w))])) + f;\n"
        "    gl_Position = g * vec4(p, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[114] = uString::Const("uniform float h, i, j, l;\n"
        "uniform vec3 k;\n"
        "\n"
        "varying float m;\n"
        "varying vec2 n, o;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 p = vec4(k, j * clamp(0.5 - (((distance(n, o) - m) * h) * i), float(0), float(1)));\n"
        "    gl_FragColor = vec4((p.xyz * p.w) * l, p.w * l);\n"
        "}\n"
        "");
    ::STRINGS[115] = uString::Const("uniform float h, i, j, l;\n"
        "uniform vec3 k;\n"
        "\n"
        "varying float m;\n"
        "varying vec2 n, o;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    float p = clamp(0.5 - (((distance(n, o) - m) * h) * i), float(0), float(1));\n"
        "    vec4 q = vec4(k, j * (((p * p) * p) * ((p * ((p * float(6)) - float(15))) + float(10))));\n"
        "    gl_FragColor = vec4((q.xyz * q.w) * l, q.w * l);\n"
        "}\n"
        "");
    ::STRINGS[116] = uString::Const("uniform float h, i, j, k, l;\n"
        "uniform vec3 m;\n"
        "\n"
        "varying float n;\n"
        "varying vec2 o, p;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    float q = clamp(0.5 - (((abs((distance(o, p) - n) - h) - i) * j) * k), float(0), float(1));\n"
        "    vec4 r = vec4(m, l * (((q * q) * q) * ((q * ((q * float(6)) - float(15))) + float(10))));\n"
        "    gl_FragColor = vec4((r.xyz * r.w) * 1.0, r.w);\n"
        "}\n"
        "");
    ::STRINGS[117] = uString::Const("uniform float g[d];\n"
        "uniform vec2 h, j, k, l, m, n, p, o;\n"
        "uniform mat4 i;\n"
        "\n"
        "attribute vec4 a, b;\n"
        "attribute float c;\n"
        "\n"
        "varying float y;\n"
        "varying vec2 z, A, B, C;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 E = vec2((sign(a.x) * g[int(abs(a.x))]) + (sign(a.y) * g[int(abs(a.y))]), (sign(a.z) * g[int(abs(a.z))]) + (sign(a.w) * g[int(abs(a.w))])) + h;\n"
        "    vec2 F = ((((j * (E / j)) - k) / l) * m) + n;\n"
        "    y = g[int(c)];\n"
        "    z = p + (F * o);\n"
        "    A = F;\n"
        "    B = E;\n"
        "    C = vec2((sign(b.x) * g[int(abs(b.x))]) + (sign(b.y) * g[int(abs(b.y))]), (sign(b.z) * g[int(abs(b.z))]) + (sign(b.w) * g[int(abs(b.w))])) + h;\n"
        "    gl_Position = i * vec4(E, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[118] = uString::Const("uniform vec2 r, q;\n"
        "uniform vec4 s;\n"
        "uniform float t, u, v, w, x;\n"
        "\n"
        "uniform sampler2D D;\n"
        "\n"
        "varying float y;\n"
        "varying vec2 z, A, B, C;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 E = (f ? vec4(float(0)) : texture2D(D, e ? (r + (fract(z) * q)) : A)) * s;\n"
        "    float F = clamp(0.5 - (((abs((distance(B, C) - y) - t) - u) * v) * w), float(0), float(1));\n"
        "    vec4 G = vec4(E.xyz, E.w * (((F * F) * F) * ((F * ((F * float(6)) - float(15))) + float(10))));\n"
        "    gl_FragColor = vec4((G.xyz * G.w) * x, G.w * x);\n"
        "}\n"
        "");
    ::STRINGS[119] = uString::Const("D");
    ::STRINGS[120] = uString::Const("uniform vec2 r, q;\n"
        "uniform vec4 s;\n"
        "uniform float t, u, v, w, x;\n"
        "\n"
        "uniform sampler2D D;\n"
        "\n"
        "varying float y;\n"
        "varying vec2 z, A, B, C;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 E = (f ? vec4(float(0)) : texture2D(D, e ? (r + (fract(z) * q)) : A)) * s;\n"
        "    vec4 F = vec4(E.xyz, E.w * clamp(0.5 - (((abs((distance(B, C) - y) - t) - u) * v) * w), float(0), float(1)));\n"
        "    gl_FragColor = vec4((F.xyz * F.w) * x, F.w * x);\n"
        "}\n"
        "");
    ::STRINGS[121] = uString::Const("uniform float e[d];\n"
        "uniform vec2 f;\n"
        "uniform mat4 g;\n"
        "\n"
        "attribute vec4 a, b;\n"
        "attribute float c;\n"
        "\n"
        "varying float o;\n"
        "varying vec2 p, q;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 r = vec2((sign(a.x) * e[int(abs(a.x))]) + (sign(a.y) * e[int(abs(a.y))]), (sign(a.z) * e[int(abs(a.z))]) + (sign(a.w) * e[int(abs(a.w))])) + f;\n"
        "    o = e[int(c)];\n"
        "    p = r;\n"
        "    q = vec2((sign(b.x) * e[int(abs(b.x))]) + (sign(b.y) * e[int(abs(b.y))]), (sign(b.z) * e[int(abs(b.z))]) + (sign(b.w) * e[int(abs(b.w))])) + f;\n"
        "    gl_Position = g * vec4(r, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[122] = uString::Const("uniform float h, i, j, k, l, n;\n"
        "uniform vec3 m;\n"
        "\n"
        "varying float o;\n"
        "varying vec2 p, q;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    float r = clamp(0.5 - (((abs((distance(p, q) - o) - h) - i) * j) * k), float(0), float(1));\n"
        "    vec4 s = vec4(m, l * (((r * r) * r) * ((r * ((r * float(6)) - float(15))) + float(10))));\n"
        "    gl_FragColor = vec4((s.xyz * s.w) * n, s.w * n);\n"
        "}\n"
        "");
    ::STRINGS[123] = uString::Const("uniform float h, i, j, k, l, n;\n"
        "uniform vec3 m;\n"
        "\n"
        "varying float o;\n"
        "varying vec2 p, q;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 r = vec4(m, l * clamp(0.5 - (((abs((distance(p, q) - o) - h) - i) * j) * k), float(0), float(1)));\n"
        "    gl_FragColor = vec4((r.xyz * r.w) * n, r.w * n);\n"
        "}\n"
        "");
    ::STRINGS[124] = uString::Const("uniform float e[d], q;\n"
        "uniform vec2 f, h, i, j, p;\n"
        "uniform mat4 g;\n"
        "\n"
        "attribute vec4 a, b;\n"
        "attribute float c;\n"
        "\n"
        "varying float r, s;\n"
        "varying vec2 t, u;\n"
        "\n"
        "float w(vec2 x, vec2 y, float z){\n"
        "    vec2 A = (x * h) - i;\n"
        "    float B = dot(A, y) / z;\n"
        "    return (B - j.x) / j.y;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 x = vec2((sign(a.x) * e[int(abs(a.x))]) + (sign(a.y) * e[int(abs(a.y))]), (sign(a.z) * e[int(abs(a.z))]) + (sign(a.w) * e[int(abs(a.w))])) + f;\n"
        "    r = e[int(c)];\n"
        "    s = w(x / h, p, q);\n"
        "    t = x;\n"
        "    u = vec2((sign(b.x) * e[int(abs(b.x))]) + (sign(b.y) * e[int(abs(b.y))]), (sign(b.z) * e[int(abs(b.z))]) + (sign(b.w) * e[int(abs(b.w))])) + f;\n"
        "    gl_Position = g * vec4(x, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[125] = uString::Const("uniform float k, l, m, n, o;\n"
        "\n"
        "uniform sampler2D v;\n"
        "\n"
        "varying float r, s;\n"
        "varying vec2 t, u;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 x = texture2D(v, vec2(s, 0.5));\n"
        "    vec4 y = vec4(x.xyz, x.w * clamp(0.5 - (((abs((distance(t, u) - r) - k) - l) * m) * n), float(0), float(1)));\n"
        "    gl_FragColor = vec4((y.xyz * y.w) * o, y.w * o);\n"
        "}\n"
        "");
    ::STRINGS[126] = uString::Const("uniform float k, l, m, n, o;\n"
        "\n"
        "uniform sampler2D v;\n"
        "\n"
        "varying float r, s;\n"
        "varying vec2 t, u;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 x = texture2D(v, vec2(s, 0.5));\n"
        "    float y = clamp(0.5 - (((abs((distance(t, u) - r) - k) - l) * m) * n), float(0), float(1));\n"
        "    vec4 z = vec4(x.xyz, x.w * (((y * y) * y) * ((y * ((y * float(6)) - float(15))) + float(10))));\n"
        "    gl_FragColor = vec4((z.xyz * z.w) * o, z.w * o);\n"
        "}\n"
        "");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle01247f96_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle038d0b56_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle09647386_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle09647387_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle09647389_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle27c6b7fe_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle27c6b7ff_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle4a971b16_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle4c78c62c_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle60e596bb_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle7aaa5f74_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle91c7af62_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circlebe3e2220_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circlecfb305c7_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circlecfb305c9_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circlecfb305ca_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circled0e74ba4_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circled802ead9_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circlee8f0edda_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circlee8f0eddb_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circleef203ac7_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circlef28f173b_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circlef28f173d_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circlef28f173e_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangle5aede5cb_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangle5aede5cc_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangle6bc1d5d3_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangle6bc1d5d4_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangle7c95c5e3_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangle7c95c5e4_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangle7fa93ce4_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangle8d69b5eb_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangle8d69b5ec_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectanglea858f3bc_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectanglea858f4fc_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectanglea858f503_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectanglea858f53c_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectanglea858f53f_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectanglea858f57b_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectanglea858f57c_, uFieldFlagsStatic);
    type->Reflection.SetFields(40,
        new uField("Circle01247f96", 0),
        new uField("Circle038d0b56", 1),
        new uField("Circle09647386", 2),
        new uField("Circle09647387", 3),
        new uField("Circle09647389", 4),
        new uField("Circle27c6b7fe", 5),
        new uField("Circle27c6b7ff", 6),
        new uField("Circle4a971b16", 7),
        new uField("Circle4c78c62c", 8),
        new uField("Circle60e596bb", 9),
        new uField("Circle7aaa5f74", 10),
        new uField("Circle91c7af62", 11),
        new uField("Circlebe3e2220", 12),
        new uField("Circlecfb305c7", 13),
        new uField("Circlecfb305c9", 14),
        new uField("Circlecfb305ca", 15),
        new uField("Circled0e74ba4", 16),
        new uField("Circled802ead9", 17),
        new uField("Circlee8f0edda", 18),
        new uField("Circlee8f0eddb", 19),
        new uField("Circleef203ac7", 20),
        new uField("Circlef28f173b", 21),
        new uField("Circlef28f173d", 22),
        new uField("Circlef28f173e", 23),
        new uField("Rectangle5aede5cb", 24),
        new uField("Rectangle5aede5cc", 25),
        new uField("Rectangle6bc1d5d3", 26),
        new uField("Rectangle6bc1d5d4", 27),
        new uField("Rectangle7c95c5e3", 28),
        new uField("Rectangle7c95c5e4", 29),
        new uField("Rectangle7fa93ce4", 30),
        new uField("Rectangle8d69b5eb", 31),
        new uField("Rectangle8d69b5ec", 32),
        new uField("Rectanglea858f3bc", 33),
        new uField("Rectanglea858f4fc", 34),
        new uField("Rectanglea858f503", 35),
        new uField("Rectanglea858f53c", 36),
        new uField("Rectanglea858f53f", 37),
        new uField("Rectanglea858f57b", 38),
        new uField("Rectanglea858f57c", 39));
}

uClassType* FuseDrawingPrimitives_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 40;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseDrawingPrimitives_bundle", options);
    type->fp_build_ = FuseDrawingPrimitives_bundle_build;
    type->fp_cctor_ = FuseDrawingPrimitives_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle01247f96_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle038d0b56_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle09647386_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle09647387_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle09647389_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle27c6b7fe_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle27c6b7ff_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle4a971b16_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle4c78c62c_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle60e596bb_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle7aaa5f74_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle91c7af62_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlebe3e2220_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlecfb305c7_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlecfb305c9_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlecfb305ca_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circled0e74ba4_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circled802ead9_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlee8f0edda_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlee8f0eddb_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circleef203ac7_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlef28f173b_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlef28f173d_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlef28f173e_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle5aede5cb_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle5aede5cc_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle6bc1d5d3_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle6bc1d5d4_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle7c95c5e3_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle7c95c5e4_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle7fa93ce4_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle8d69b5eb_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle8d69b5ec_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectanglea858f3bc_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectanglea858f4fc_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectanglea858f503_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectanglea858f53c_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectanglea858f53f_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectanglea858f57b_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectanglea858f57c_;
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Effects/0.42.4/.uno/package
// ----------------------------------------------------------------------------------------------

// public static generated class FuseEffects_bundle :0
// {
// static FuseEffects_bundle() :0
static void FuseEffects_bundle__cctor__fn(uType* __type)
{
    FuseEffects_bundle::Blitter6e650d31_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[127/*"uniform mat...*/], ::STRINGS[128/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[9/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[11/*"h"*/]));
    FuseEffects_bundle::Blur115443aa_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[26/*"uniform mat...*/], ::STRINGS[27/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[9/*"e"*/]));
    FuseEffects_bundle::Desaturate88bb7f94_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[129/*"uniform mat...*/], ::STRINGS[130/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 5, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"f"*/]));
    FuseEffects_bundle::EffectHelpers52052d40_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[131/*"attribute v...*/], ::STRINGS[132/*"uniform flo...*/], 3, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[9/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[11/*"h"*/]));
    FuseEffects_bundle::EffectHelpers9b892494_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[133/*"attribute v...*/], ::STRINGS[134/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 2, ::STRINGS[2/*"a"*/], ::STRINGS[4/*"c"*/]));
    FuseEffects_bundle::EffectHelpersd8c2e3e5_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[135/*"uniform vec...*/], ::STRINGS[136/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 11, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[9/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[21/*"t"*/]));
    FuseEffects_bundle::EffectHelperse7e608d1_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[137/*"uniform vec...*/], ::STRINGS[138/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 8, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[9/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[16/*"m"*/]));
    FuseEffects_bundle::Halftone3c4c510c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[139/*"uniform mat...*/], ::STRINGS[140/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 14, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[9/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[14/*"k"*/], ::STRINGS[15/*"l"*/], ::STRINGS[16/*"m"*/], ::STRINGS[20/*"q"*/]));
    FuseEffects_bundle::Mask0da73af7_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[141/*"uniform mat...*/], ::STRINGS[142/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[9/*"e"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/]));
    FuseEffects_bundle::Mask6affc65c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[141/*"uniform mat...*/], ::STRINGS[143/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[9/*"e"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/]));
    FuseEffects_bundle::Maskb04eaf92_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[141/*"uniform mat...*/], ::STRINGS[144/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[9/*"e"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/]));
}

static void FuseEffects_bundle_build(uType* type)
{
    ::STRINGS[127] = uString::Const("uniform mat4 f, b;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    g = true ? vec2(a.x, float(1) - a.y) : a;\n"
        "    gl_Position = b * (f * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[128] = uString::Const("uniform vec3 e;\n"
        "uniform float c, d;\n"
        "\n"
        "uniform sampler2D h;\n"
        "\n"
        "varying vec2 g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = vec4(e, clamp(texture2D(h, g).w * c, float(0), float(1)) * d);\n"
        "}\n"
        "");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[9] = uString::Const("e");
    ::STRINGS[6] = uString::Const("f");
    ::STRINGS[11] = uString::Const("h");
    ::STRINGS[26] = uString::Const("uniform mat4 c, b;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 d;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    d = true ? vec2(a.x, float(1) - a.y) : a;\n"
        "    gl_Position = b * (c * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[27] = uString::Const("uniform sampler2D e;\n"
        "\n"
        "varying vec2 d;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(e, d);\n"
        "}\n"
        "");
    ::STRINGS[129] = uString::Const("uniform mat4 d, b;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 e;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    e = true ? vec2(a.x, float(1) - a.y) : a;\n"
        "    gl_Position = b * (d * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[130] = uString::Const("uniform float c;\n"
        "\n"
        "uniform sampler2D f;\n"
        "\n"
        "varying vec2 e;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 g = texture2D(f, e);\n"
        "    vec4 h = vec4(g.xyz / max(g.w, 1e-05), g.w);\n"
        "    gl_FragColor = vec4(mix(h.xyz, vec3(sqrt(dot(h.xyz * h.xyz, vec3(0.299, 0.587, 0.114)))), c), h.w);\n"
        "}\n"
        "");
    ::STRINGS[131] = uString::Const("attribute vec2 a;\n"
        "\n"
        "varying vec2 g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec3 j = vec3((a.xy * vec2(float(2), float(2))) + vec3(float(-1), float(-1), float(0)).xy, float(0));\n"
        "    g = (j.xy * 0.5) + 0.5;\n"
        "    gl_Position = vec4(j, float(1));\n"
        "}\n"
        "");
    ::STRINGS[132] = uString::Const("uniform float e[b];\n"
        "uniform vec2 f[d];\n"
        "\n"
        "uniform sampler2D h;\n"
        "\n"
        "varying vec2 g;\n"
        "\n"
        "vec4 i(vec2 j){\n"
        "    vec4 k = texture2D(h, j) * e[0];\n"
        "\n"
        "    for (int l = 0; l < c; ++l)\n"
        "    {\n"
        "        k = k + (texture2D(h, j + f[l]) * e[1 + l]);\n"
        "        k = k + (texture2D(h, j - f[l]) * e[1 + l]);\n"
        "    }\n"
        "\n"
        "    return k;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = i(g);\n"
        "}\n"
        "");
    ::STRINGS[133] = uString::Const("attribute vec2 a;\n"
        "\n"
        "varying vec2 b;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec3 d = vec3((a.xy * vec2(float(2), float(2))) + vec3(float(-1), float(-1), float(0)).xy, float(0));\n"
        "    b = (d.xy * 0.5) + 0.5;\n"
        "    gl_Position = vec4(d, float(1));\n"
        "}\n"
        "");
    ::STRINGS[134] = uString::Const("uniform sampler2D c;\n"
        "\n"
        "varying vec2 b;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(c, b);\n"
        "}\n"
        "");
    ::STRINGS[135] = uString::Const("uniform vec2 c, e, f, h, i, j;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 k, l, m, n, o, p, q, r, s;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec3 u = vec3((a.xy * vec2(float(2), float(2))) + vec3(float(-1), float(-1), float(0)).xy, float(0));\n"
        "    vec2 v = (u.xy * 0.5) + 0.5;\n"
        "    k = v;\n"
        "    l = v + c;\n"
        "    m = v - c;\n"
        "    n = v + e;\n"
        "    o = v - e;\n"
        "    p = v + f;\n"
        "    q = v + h;\n"
        "    r = v + i;\n"
        "    s = v + j;\n"
        "    gl_Position = vec4(u, float(1));\n"
        "}\n"
        "");
    ::STRINGS[136] = uString::Const("uniform float b, d, g;\n"
        "\n"
        "uniform sampler2D t;\n"
        "\n"
        "varying vec2 k, l, m, n, o, p, q, r, s;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = ((((((((texture2D(t, k) * b) + (texture2D(t, l) * d)) + (texture2D(t, m) * d)) + (texture2D(t, n) * d)) + (texture2D(t, o) * d)) + (texture2D(t, p) * g)) + (texture2D(t, q) * g)) + (texture2D(t, r) * g)) + (texture2D(t, s) * g);\n"
        "}\n"
        "");
    ::STRINGS[10] = uString::Const("g");
    ::STRINGS[12] = uString::Const("i");
    ::STRINGS[13] = uString::Const("j");
    ::STRINGS[21] = uString::Const("t");
    ::STRINGS[137] = uString::Const("uniform vec2 c, e, f, g;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 h, i, j, k, l;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec3 n = vec3((a.xy * vec2(float(2), float(2))) + vec3(float(-1), float(-1), float(0)).xy, float(0));\n"
        "    vec2 o = (n.xy * 0.5) + 0.5;\n"
        "    h = o;\n"
        "    i = o + c;\n"
        "    j = o + e;\n"
        "    k = o + f;\n"
        "    l = o + g;\n"
        "    gl_Position = vec4(n, float(1));\n"
        "}\n"
        "");
    ::STRINGS[138] = uString::Const("uniform float b, d;\n"
        "\n"
        "uniform sampler2D m;\n"
        "\n"
        "varying vec2 h, i, j, k, l;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = ((((texture2D(m, h) * b) + (texture2D(m, i) * d)) + (texture2D(m, j) * d)) + (texture2D(m, k) * d)) + (texture2D(m, l) * d);\n"
        "}\n"
        "");
    ::STRINGS[16] = uString::Const("m");
    ::STRINGS[139] = uString::Const("uniform mat4 m, b;\n"
        "uniform vec2 g, h;\n"
        "uniform mat2 i;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 n, o, p;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 r = true ? vec2(a.x, float(1) - a.y) : a;\n"
        "    vec2 s = (r * g) + h;\n"
        "    n = r;\n"
        "    o = i * s;\n"
        "    p = s;\n"
        "    gl_Position = b * (m * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[140] = uString::Const("uniform float c, d, e, f, k, l;\n"
        "uniform mat2 j;\n"
        "\n"
        "uniform sampler2D q;\n"
        "\n"
        "varying vec2 n, o, p;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 r = texture2D(q, n);\n"
        "    gl_FragColor = mix(mix(vec4(float(1), float(1), float(1), r.w), r, c), mix(vec4(float(0), float(0), float(0), r.w), r, d), clamp(0.5 - ((((((float(1) - sqrt((float(1) - dot(r.xyz * r.xyz, vec3(0.299, 0.587, 0.114))) / 3.14159274)) * e) * f) - length(p - (j * ((floor(o / e) + 0.5) * e)))) * k) * l), float(0), float(1)));\n"
        "}\n"
        "");
    ::STRINGS[14] = uString::Const("k");
    ::STRINGS[15] = uString::Const("l");
    ::STRINGS[20] = uString::Const("q");
    ::STRINGS[141] = uString::Const("uniform mat4 e, b;\n"
        "uniform vec2 c, d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 f, g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 j = true ? vec2(a.x, float(1) - a.y) : a;\n"
        "    f = j;\n"
        "    g = (vec2(j.x, float(1) - j.y) * c) + d;\n"
        "    gl_Position = b * (e * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[142] = uString::Const("uniform sampler2D h, i;\n"
        "\n"
        "varying vec2 f, g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(h, f) * texture2D(i, g).x;\n"
        "}\n"
        "");
    ::STRINGS[143] = uString::Const("uniform sampler2D h, i;\n"
        "\n"
        "varying vec2 f, g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 j = texture2D(i, g);\n"
        "    gl_FragColor = texture2D(h, f) * vec4(j.xyz * j.w, j.w);\n"
        "}\n"
        "");
    ::STRINGS[144] = uString::Const("uniform sampler2D h, i;\n"
        "\n"
        "varying vec2 f, g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(h, f) * texture2D(i, g).w;\n"
        "}\n"
        "");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::Blitter6e650d31_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::Blur115443aa_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::Desaturate88bb7f94_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::EffectHelpers52052d40_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::EffectHelpers9b892494_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::EffectHelpersd8c2e3e5_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::EffectHelperse7e608d1_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::Halftone3c4c510c_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::Mask0da73af7_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::Mask6affc65c_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::Maskb04eaf92_, uFieldFlagsStatic);
    type->Reflection.SetFields(11,
        new uField("Blitter6e650d31", 0),
        new uField("Blur115443aa", 1),
        new uField("Desaturate88bb7f94", 2),
        new uField("EffectHelpers52052d40", 3),
        new uField("EffectHelpers9b892494", 4),
        new uField("EffectHelpersd8c2e3e5", 5),
        new uField("EffectHelperse7e608d1", 6),
        new uField("Halftone3c4c510c", 7),
        new uField("Mask0da73af7", 8),
        new uField("Mask6affc65c", 9),
        new uField("Maskb04eaf92", 10));
}

uClassType* FuseEffects_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 11;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseEffects_bundle", options);
    type->fp_build_ = FuseEffects_bundle_build;
    type->fp_cctor_ = FuseEffects_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Blitter6e650d31_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Blur115443aa_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Desaturate88bb7f94_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::EffectHelpers52052d40_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::EffectHelpers9b892494_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::EffectHelpersd8c2e3e5_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::EffectHelperse7e608d1_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Halftone3c4c510c_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Mask0da73af7_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Mask6affc65c_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Maskb04eaf92_;
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Elements/0.42.4/.uno/package
// -----------------------------------------------------------------------------------------------

// public static generated class FuseElements_bundle :0
// {
// static FuseElements_bundle() :0
static void FuseElements_bundle__cctor__fn(uType* __type)
{
    FuseElements_bundle::CacheHelper230c69b7_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[145/*"uniform vec...*/], ::STRINGS[146/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 6, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[9/*"e"*/], ::STRINGS[10/*"g"*/]));
    FuseElements_bundle::ElementBatchd43eeb4e_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[147/*"uniform mat...*/], ::STRINGS[148/*"uniform sam...*/], 0, 2, uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[6/*"f"*/]));
    FuseElements_bundle::ElementDraw1f583284_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[24/*"uniform mat...*/], ::STRINGS[25/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/]));
    FuseElements_bundle::RepeatBaker447c61dc_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[149/*"uniform vec...*/], ::STRINGS[150/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[9/*"e"*/]));
    FuseElements_bundle::Scale9Rectangle720ad3ad_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[151/*"uniform flo...*/], ::STRINGS[152/*"uniform vec...*/], 0, 2, uArray::Init<uString*>(::TYPES[0/*string[]*/], 17, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[9/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[14/*"k"*/], ::STRINGS[15/*"l"*/], ::STRINGS[16/*"m"*/], ::STRINGS[17/*"n"*/], ::STRINGS[18/*"o"*/], ::STRINGS[19/*"p"*/], ::STRINGS[53/*"r"*/]));
}

static void FuseElements_bundle_build(uType* type)
{
    ::STRINGS[145] = uString::Const("uniform vec2 b;\n"
        "uniform mat4 c, d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 f;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    f = vec2(a.x, 1.0 - a.y);\n"
        "    gl_Position = d * (c * vec4(a * b, float(0), float(1)));\n"
        "}\n"
        "");
    ::STRINGS[146] = uString::Const("uniform float e;\n"
        "\n"
        "uniform sampler2D g;\n"
        "\n"
        "varying vec2 f;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 h = texture2D(g, f);\n"
        "    gl_FragColor = vec4(h.xyz * e, h.w * e);\n"
        "}\n"
        "");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[9] = uString::Const("e");
    ::STRINGS[10] = uString::Const("g");
    ::STRINGS[147] = uString::Const("uniform mat4 c;\n"
        "\n"
        "attribute vec3 a;\n"
        "attribute vec2 b;\n"
        "\n"
        "varying float d;\n"
        "varying vec2 e;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    d = a.z;\n"
        "    e = vec2(b.x, 1.0 - b.y);\n"
        "    gl_Position = (a.z > float(0)) ? (c * vec4(a.xy, float(0), float(1))) : vec4(float(0), float(0), float(0), float(-1));\n"
        "}\n"
        "");
    ::STRINGS[148] = uString::Const("uniform sampler2D f;\n"
        "\n"
        "varying float d;\n"
        "varying vec2 e;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(f, e) * d;\n"
        "}\n"
        "");
    ::STRINGS[6] = uString::Const("f");
    ::STRINGS[24] = uString::Const("uniform mat4 d, b;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_Position = b * (d * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[25] = uString::Const("uniform vec4 c;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = c;\n"
        "}\n"
        "");
    ::STRINGS[149] = uString::Const("uniform vec2 b, c;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 d;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    d = (a * b) / c;\n"
        "    gl_Position = vec4((a * float(2)) - float(1), float(0), float(1));\n"
        "}\n"
        "");
    ::STRINGS[150] = uString::Const("uniform sampler2D e;\n"
        "\n"
        "varying vec2 d;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(e, fract(d));\n"
        "}\n"
        "");
    ::STRINGS[151] = uString::Const("uniform float c, d, e, f, g, h, k, l, m, n;\n"
        "uniform mat4 i, j;\n"
        "uniform vec2 o;\n"
        "\n"
        "attribute vec3 a, b;\n"
        "\n"
        "varying vec2 q;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    q = vec2(((a.x * c) + (a.y * k)) + (a.z * l), ((b.x * f) + (b.y * m)) + (b.z * n)) / o;\n"
        "    gl_Position = j * (i * vec4(vec2(((a.x * c) + (a.y * d)) + (a.z * e), ((b.x * f) + (b.y * g)) + (b.z * h)), float(0), float(1)));\n"
        "}\n"
        "");
    ::STRINGS[152] = uString::Const("uniform vec4 p;\n"
        "\n"
        "uniform sampler2D r;\n"
        "\n"
        "varying vec2 q;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(r, q) * p;\n"
        "}\n"
        "");
    ::STRINGS[11] = uString::Const("h");
    ::STRINGS[12] = uString::Const("i");
    ::STRINGS[13] = uString::Const("j");
    ::STRINGS[14] = uString::Const("k");
    ::STRINGS[15] = uString::Const("l");
    ::STRINGS[16] = uString::Const("m");
    ::STRINGS[17] = uString::Const("n");
    ::STRINGS[18] = uString::Const("o");
    ::STRINGS[19] = uString::Const("p");
    ::STRINGS[53] = uString::Const("r");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseElements_bundle::CacheHelper230c69b7_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseElements_bundle::ElementBatchd43eeb4e_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseElements_bundle::ElementDraw1f583284_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseElements_bundle::RepeatBaker447c61dc_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseElements_bundle::Scale9Rectangle720ad3ad_, uFieldFlagsStatic);
    type->Reflection.SetFields(5,
        new uField("CacheHelper230c69b7", 0),
        new uField("ElementBatchd43eeb4e", 1),
        new uField("ElementDraw1f583284", 2),
        new uField("RepeatBaker447c61dc", 3),
        new uField("Scale9Rectangle720ad3ad", 4));
}

uClassType* FuseElements_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseElements_bundle", options);
    type->fp_build_ = FuseElements_bundle_build;
    type->fp_cctor_ = FuseElements_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseElements_bundle::CacheHelper230c69b7_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseElements_bundle::ElementBatchd43eeb4e_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseElements_bundle::ElementDraw1f583284_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseElements_bundle::RepeatBaker447c61dc_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseElements_bundle::Scale9Rectangle720ad3ad_;
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Reactive/0.42.4/.uno/package
// -----------------------------------------------------------------------------------------------

// public static generated class FuseReactive_bundle :0
// {
// static FuseReactive_bundle() :0
static void FuseReactive_bundle__cctor__fn(uType* __type)
{
    FuseReactive_bundle::es6promisemindcd92cac_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[153/*"Fuse.Reactive"*/]))->GetFile(::STRINGS[154/*"es6-promise...*/]);
    FuseReactive_bundle::Observabled73eeeb6_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[153/*"Fuse.Reactive"*/]))->GetFile(::STRINGS[155/*"observable-...*/]);
    FuseReactive_bundle::setTimeout9c121c74_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[153/*"Fuse.Reactive"*/]))->GetFile(::STRINGS[156/*"settimeout-...*/]);
}

static void FuseReactive_bundle_build(uType* type)
{
    ::STRINGS[153] = uString::Const("Fuse.Reactive");
    ::STRINGS[154] = uString::Const("es6-promise.min-a3069df9.js");
    ::STRINGS[155] = uString::Const("observable-66183501.js");
    ::STRINGS[156] = uString::Const("settimeout-cb0e3491.js");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::FuseReactive_bundle::es6promisemindcd92cac_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::FuseReactive_bundle::Observabled73eeeb6_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::FuseReactive_bundle::setTimeout9c121c74_, uFieldFlagsStatic);
    type->Reflection.SetFields(3,
        new uField("es6promisemindcd92cac", 0),
        new uField("Observabled73eeeb6", 1),
        new uField("setTimeout9c121c74", 2));
}

uClassType* FuseReactive_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseReactive_bundle", options);
    type->fp_build_ = FuseReactive_bundle_build;
    type->fp_cctor_ = FuseReactive_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> FuseReactive_bundle::es6promisemindcd92cac_;
uSStrong< ::g::Uno::IO::BundleFile*> FuseReactive_bundle::Observabled73eeeb6_;
uSStrong< ::g::Uno::IO::BundleFile*> FuseReactive_bundle::setTimeout9c121c74_;
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/.uno/package
// -------------------------------------------------------------------------------------------

// public static generated class FuseText_bundle :0
// {
// static FuseText_bundle() :0
static void FuseText_bundle__cctor__fn(uType* __type)
{
    FuseText_bundle::Renderer0b7f7722_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[157/*"uniform mat...*/], ::STRINGS[158/*"uniform vec...*/], 1, 2, uArray::Init<uString*>(::TYPES[0/*string[]*/], 6, ::STRINGS[4/*"c"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[5/*"d"*/], ::STRINGS[9/*"e"*/], ::STRINGS[10/*"g"*/]));
}

static void FuseText_bundle_build(uType* type)
{
    ::STRINGS[157] = uString::Const("uniform mat4 d;\n"
        "\n"
        "attribute vec2 a, b;\n"
        "\n"
        "varying vec2 f;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    f = b;\n"
        "    gl_Position = d * vec4(a, float(0), float(1));\n"
        "}\n"
        "");
    ::STRINGS[158] = uString::Const("uniform vec4 e;\n"
        "\n"
        "uniform sampler2D g;\n"
        "\n"
        "varying vec2 f;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 h = texture2D(g, f);\n"
        "    gl_FragColor = c ? (e * vec4(h.x)) : h;\n"
        "}\n"
        "");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[9] = uString::Const("e");
    ::STRINGS[10] = uString::Const("g");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseText_bundle::Renderer0b7f7722_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("Renderer0b7f7722", 0));
}

uClassType* FuseText_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseText_bundle", options);
    type->fp_build_ = FuseText_bundle_build;
    type->fp_cctor_ = FuseText_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseText_bundle::Renderer0b7f7722_;
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno
// -----------------------------------------------------------------------

// public sealed class HashableWeakReference :2100
// {
static void HashableWeakReference_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::WeakReference_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::HashableWeakReference, _reference), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)HashableWeakReference__New1_fn, 0, true, type, 1, ::g::Uno::WeakReference_typeof()->MakeType(uObject_typeof(), NULL)),
        new uFunction("TryGetTarget", NULL, (void*)HashableWeakReference__TryGetTarget_fn, 0, false, ::g::Uno::Bool_typeof(), 1, uObject_typeof()->ByRef()));
}

uType* HashableWeakReference_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(HashableWeakReference);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("HashableWeakReference", options);
    type->fp_build_ = HashableWeakReference_build;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))HashableWeakReference__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))HashableWeakReference__GetHashCode_fn;
    return type;
}

// public HashableWeakReference(Uno.WeakReference<object> reference) :2103
void HashableWeakReference__ctor__fn(HashableWeakReference* __this, ::g::Uno::WeakReference* reference)
{
    __this->ctor_(reference);
}

// public override sealed bool Equals(object that) :2122
void HashableWeakReference__Equals_fn(HashableWeakReference* __this, uObject* that, bool* __retval)
{
    uStackFrame __("HashableWeakReference", "Equals(object)");

    if (::g::Uno::Object::ReferenceEquals(__this, that))
        return *__retval = true, void();

    uObject* a = NULL;
    uObject* b = NULL;

    if (!uPtr(__this->_reference)->TryGetTarget((uObject**)(&a)))
        return *__retval = false, void();

    if (!uIs(that, __this->__type) || !uPtr(uPtr(uCast<HashableWeakReference*>(that, __this->__type))->_reference)->TryGetTarget((uObject**)(&b)))
        return *__retval = false, void();

    return *__retval = ::g::Uno::Object::Equals(uPtr(a), b), void();
}

// public override sealed int GetHashCode() :2113
void HashableWeakReference__GetHashCode_fn(HashableWeakReference* __this, int* __retval)
{
    uStackFrame __("HashableWeakReference", "GetHashCode()");
    uObject* obj;

    if (!uPtr(__this->_reference)->TryGetTarget((uObject**)(&obj)))
        return *__retval = 0, void();

    return *__retval = ::g::Uno::Object::GetHashCode(uPtr(obj)), void();
}

// public HashableWeakReference New(Uno.WeakReference<object> reference) :2103
void HashableWeakReference__New1_fn(::g::Uno::WeakReference* reference, HashableWeakReference** __retval)
{
    *__retval = HashableWeakReference::New1(reference);
}

// public bool TryGetTarget(object& obj) :2108
void HashableWeakReference__TryGetTarget_fn(HashableWeakReference* __this, uObject** obj, bool* __retval)
{
    *__retval = __this->TryGetTarget(obj);
}

// public HashableWeakReference(Uno.WeakReference<object> reference) [instance] :2103
void HashableWeakReference::ctor_(::g::Uno::WeakReference* reference)
{
    _reference = reference;
}

// public bool TryGetTarget(object& obj) [instance] :2108
bool HashableWeakReference::TryGetTarget(uObject** obj)
{
    uStackFrame __("HashableWeakReference", "TryGetTarget(object&)");
    return uPtr(_reference)->TryGetTarget((uObject**)obj);
}

// public HashableWeakReference New(Uno.WeakReference<object> reference) [static] :2103
HashableWeakReference* HashableWeakReference::New1(::g::Uno::WeakReference* reference)
{
    HashableWeakReference* obj1 = (HashableWeakReference*)uNew(HashableWeakReference_typeof());
    obj1->ctor_(reference);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/.uno/package
// ------------------------------------------------------------------------------

// public static generated class OutracksSimulatorClientUno_bundle :0
// {
// static OutracksSimulatorClientUno_bundle() :0
static void OutracksSimulatorClientUno_bundle__cctor__fn(uType* __type)
{
    OutracksSimulatorClientUno_bundle::fight90e57290_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[159/*"Outracks.Si...*/]))->GetFile(::STRINGS[160/*"fight-15374...*/]);
}

static void OutracksSimulatorClientUno_bundle_build(uType* type)
{
    ::STRINGS[159] = uString::Const("Outracks.Simulator.Client.Uno");
    ::STRINGS[160] = uString::Const("fight-1537455b.png");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::OutracksSimulatorClientUno_bundle::fight90e57290_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("fight90e57290", 0));
}

uClassType* OutracksSimulatorClientUno_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("OutracksSimulatorClientUno_bundle", options);
    type->fp_build_ = OutracksSimulatorClientUno_bundle_build;
    type->fp_cctor_ = OutracksSimulatorClientUno_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> OutracksSimulatorClientUno_bundle::fight90e57290_;
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/.uno/ux11/$.uno
// ---------------------------------------------------------------------------------

// internal sealed class OutracksSimulatorClientUno_FuseControlsShape_Color_Property :266
// {
static void OutracksSimulatorClientUno_FuseControlsShape_Color_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Controls::Shape_typeof(), offsetof(::g::OutracksSimulatorClientUno_FuseControlsShape_Color_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* OutracksSimulatorClientUno_FuseControlsShape_Color_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(OutracksSimulatorClientUno_FuseControlsShape_Color_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("OutracksSimulatorClientUno_FuseControlsShape_Color_Property", options);
    type->fp_build_ = OutracksSimulatorClientUno_FuseControlsShape_Color_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))OutracksSimulatorClientUno_FuseControlsShape_Color_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))OutracksSimulatorClientUno_FuseControlsShape_Color_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))OutracksSimulatorClientUno_FuseControlsShape_Color_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))OutracksSimulatorClientUno_FuseControlsShape_Color_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public OutracksSimulatorClientUno_FuseControlsShape_Color_Property(Fuse.Controls.Shape obj, Uno.UX.Selector name) :269
void OutracksSimulatorClientUno_FuseControlsShape_Color_Property__ctor_2_fn(OutracksSimulatorClientUno_FuseControlsShape_Color_Property* __this, ::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed float4 Get() :271
void OutracksSimulatorClientUno_FuseControlsShape_Color_Property__Get_fn(OutracksSimulatorClientUno_FuseControlsShape_Color_Property* __this, ::g::Uno::Float4* __retval)
{
    uStackFrame __("OutracksSimulatorClientUno_FuseControlsShape_Color_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->Color(), void();
}

// public OutracksSimulatorClientUno_FuseControlsShape_Color_Property New(Fuse.Controls.Shape obj, Uno.UX.Selector name) :269
void OutracksSimulatorClientUno_FuseControlsShape_Color_Property__New1_fn(::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector* name, OutracksSimulatorClientUno_FuseControlsShape_Color_Property** __retval)
{
    *__retval = OutracksSimulatorClientUno_FuseControlsShape_Color_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :270
void OutracksSimulatorClientUno_FuseControlsShape_Color_Property__get_Object_fn(OutracksSimulatorClientUno_FuseControlsShape_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float4 v, Uno.UX.IPropertyListener origin) :272
void OutracksSimulatorClientUno_FuseControlsShape_Color_Property__Set_fn(OutracksSimulatorClientUno_FuseControlsShape_Color_Property* __this, ::g::Uno::Float4* v, uObject* origin)
{
    uStackFrame __("OutracksSimulatorClientUno_FuseControlsShape_Color_Property", "Set(float4,Uno.UX.IPropertyListener)");
    ::g::Uno::Float4 v_ = *v;
    uPtr(__this->_obj)->SetColor(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :273
void OutracksSimulatorClientUno_FuseControlsShape_Color_Property__get_SupportsOriginSetter_fn(OutracksSimulatorClientUno_FuseControlsShape_Color_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public OutracksSimulatorClientUno_FuseControlsShape_Color_Property(Fuse.Controls.Shape obj, Uno.UX.Selector name) [instance] :269
void OutracksSimulatorClientUno_FuseControlsShape_Color_Property::ctor_2(::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public OutracksSimulatorClientUno_FuseControlsShape_Color_Property New(Fuse.Controls.Shape obj, Uno.UX.Selector name) [static] :269
OutracksSimulatorClientUno_FuseControlsShape_Color_Property* OutracksSimulatorClientUno_FuseControlsShape_Color_Property::New1(::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector name)
{
    OutracksSimulatorClientUno_FuseControlsShape_Color_Property* obj1 = (OutracksSimulatorClientUno_FuseControlsShape_Color_Property*)uNew(OutracksSimulatorClientUno_FuseControlsShape_Color_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/.uno/ux11/$.uno
// ---------------------------------------------------------------------------------

// internal sealed class OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property :248
// {
static void OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Controls::TextControl_typeof(), offsetof(::g::OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property", options);
    type->fp_build_ = OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property(Fuse.Controls.TextControl obj, Uno.UX.Selector name) :251
void OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property__ctor_2_fn(OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property* __this, ::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed string Get() :253
void OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property__Get_fn(OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property* __this, uString** __retval)
{
    uStackFrame __("OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->Value(), void();
}

// public OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property New(Fuse.Controls.TextControl obj, Uno.UX.Selector name) :251
void OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property__New1_fn(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name, OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property** __retval)
{
    *__retval = OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :252
void OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property__get_Object_fn(OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(string v, Uno.UX.IPropertyListener origin) :254
void OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property__Set_fn(OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property* __this, uString* v, uObject* origin)
{
    uStackFrame __("OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property", "Set(string,Uno.UX.IPropertyListener)");
    uPtr(__this->_obj)->SetValue(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :255
void OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property__get_SupportsOriginSetter_fn(OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property(Fuse.Controls.TextControl obj, Uno.UX.Selector name) [instance] :251
void OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property::ctor_2(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property New(Fuse.Controls.TextControl obj, Uno.UX.Selector name) [static] :251
OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property* OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property::New1(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name)
{
    OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property* obj1 = (OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property*)uNew(OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/.uno/ux11/$.uno
// ---------------------------------------------------------------------------------

// internal sealed class OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property :275
// {
static void OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Drawing::Stroke_typeof(), offsetof(::g::OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property", options);
    type->fp_build_ = OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property(Fuse.Drawing.Stroke obj, Uno.UX.Selector name) :278
void OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property__ctor_2_fn(OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property* __this, ::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed float4 Get() :280
void OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property__Get_fn(OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property* __this, ::g::Uno::Float4* __retval)
{
    uStackFrame __("OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->Color(), void();
}

// public OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property New(Fuse.Drawing.Stroke obj, Uno.UX.Selector name) :278
void OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property__New1_fn(::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector* name, OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property** __retval)
{
    *__retval = OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :279
void OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property__get_Object_fn(OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float4 v, Uno.UX.IPropertyListener origin) :281
void OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property__Set_fn(OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property* __this, ::g::Uno::Float4* v, uObject* origin)
{
    uStackFrame __("OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property", "Set(float4,Uno.UX.IPropertyListener)");
    ::g::Uno::Float4 v_ = *v;
    uPtr(__this->_obj)->SetColor(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :282
void OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property__get_SupportsOriginSetter_fn(OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property(Fuse.Drawing.Stroke obj, Uno.UX.Selector name) [instance] :278
void OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property::ctor_2(::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property New(Fuse.Drawing.Stroke obj, Uno.UX.Selector name) [static] :278
OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property* OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property::New1(::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector name)
{
    OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property* obj1 = (OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property*)uNew(OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/.uno/ux11/$.uno
// ---------------------------------------------------------------------------------

// internal sealed class OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property :320
// {
static void OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Elements::Element_typeof(), offsetof(::g::OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property", options);
    type->fp_build_ = OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property(Fuse.Elements.Element obj, Uno.UX.Selector name) :323
void OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property__ctor_2_fn(OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property* __this, ::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed float Get() :325
void OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property__Get_fn(OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property* __this, float* __retval)
{
    uStackFrame __("OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->Opacity(), void();
}

// public OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property New(Fuse.Elements.Element obj, Uno.UX.Selector name) :323
void OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property__New1_fn(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name, OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property** __retval)
{
    *__retval = OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :324
void OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property__get_Object_fn(OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float v, Uno.UX.IPropertyListener origin) :326
void OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property__Set_fn(OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property* __this, float* v, uObject* origin)
{
    uStackFrame __("OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property", "Set(float,Uno.UX.IPropertyListener)");
    float v_ = *v;
    uPtr(__this->_obj)->SetOpacity(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :327
void OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property__get_SupportsOriginSetter_fn(OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property(Fuse.Elements.Element obj, Uno.UX.Selector name) [instance] :323
void OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property::ctor_2(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property New(Fuse.Elements.Element obj, Uno.UX.Selector name) [static] :323
OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property* OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property::New1(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name)
{
    OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property* obj1 = (OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property*)uNew(OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/.uno/ux11/$.uno
// ---------------------------------------------------------------------------------

// internal sealed class OutracksSimulatorClientUno_FuseTriggersWhileBool_Value_Property :257
// {
static void OutracksSimulatorClientUno_FuseTriggersWhileBool_Value_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Triggers::WhileBool_typeof(), offsetof(::g::OutracksSimulatorClientUno_FuseTriggersWhileBool_Value_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* OutracksSimulatorClientUno_FuseTriggersWhileBool_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(OutracksSimulatorClientUno_FuseTriggersWhileBool_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("OutracksSimulatorClientUno_FuseTriggersWhileBool_Value_Property", options);
    type->fp_build_ = OutracksSimulatorClientUno_FuseTriggersWhileBool_Value_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))OutracksSimulatorClientUno_FuseTriggersWhileBool_Value_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))OutracksSimulatorClientUno_FuseTriggersWhileBool_Value_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))OutracksSimulatorClientUno_FuseTriggersWhileBool_Value_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))OutracksSimulatorClientUno_FuseTriggersWhileBool_Value_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public OutracksSimulatorClientUno_FuseTriggersWhileBool_Value_Property(Fuse.Triggers.WhileBool obj, Uno.UX.Selector name) :260
void OutracksSimulatorClientUno_FuseTriggersWhileBool_Value_Property__ctor_2_fn(OutracksSimulatorClientUno_FuseTriggersWhileBool_Value_Property* __this, ::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed bool Get() :262
void OutracksSimulatorClientUno_FuseTriggersWhileBool_Value_Property__Get_fn(OutracksSimulatorClientUno_FuseTriggersWhileBool_Value_Property* __this, bool* __retval)
{
    uStackFrame __("OutracksSimulatorClientUno_FuseTriggersWhileBool_Value_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->Value1(), void();
}

// public OutracksSimulatorClientUno_FuseTriggersWhileBool_Value_Property New(Fuse.Triggers.WhileBool obj, Uno.UX.Selector name) :260
void OutracksSimulatorClientUno_FuseTriggersWhileBool_Value_Property__New1_fn(::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector* name, OutracksSimulatorClientUno_FuseTriggersWhileBool_Value_Property** __retval)
{
    *__retval = OutracksSimulatorClientUno_FuseTriggersWhileBool_Value_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :261
void OutracksSimulatorClientUno_FuseTriggersWhileBool_Value_Property__get_Object_fn(OutracksSimulatorClientUno_FuseTriggersWhileBool_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(bool v, Uno.UX.IPropertyListener origin) :263
void OutracksSimulatorClientUno_FuseTriggersWhileBool_Value_Property__Set_fn(OutracksSimulatorClientUno_FuseTriggersWhileBool_Value_Property* __this, bool* v, uObject* origin)
{
    uStackFrame __("OutracksSimulatorClientUno_FuseTriggersWhileBool_Value_Property", "Set(bool,Uno.UX.IPropertyListener)");
    bool v_ = *v;
    uPtr(__this->_obj)->Value1(v_);
}

// public override sealed bool get_SupportsOriginSetter() :264
void OutracksSimulatorClientUno_FuseTriggersWhileBool_Value_Property__get_SupportsOriginSetter_fn(OutracksSimulatorClientUno_FuseTriggersWhileBool_Value_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public OutracksSimulatorClientUno_FuseTriggersWhileBool_Value_Property(Fuse.Triggers.WhileBool obj, Uno.UX.Selector name) [instance] :260
void OutracksSimulatorClientUno_FuseTriggersWhileBool_Value_Property::ctor_2(::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public OutracksSimulatorClientUno_FuseTriggersWhileBool_Value_Property New(Fuse.Triggers.WhileBool obj, Uno.UX.Selector name) [static] :260
OutracksSimulatorClientUno_FuseTriggersWhileBool_Value_Property* OutracksSimulatorClientUno_FuseTriggersWhileBool_Value_Property::New1(::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector name)
{
    OutracksSimulatorClientUno_FuseTriggersWhileBool_Value_Property* obj1 = (OutracksSimulatorClientUno_FuseTriggersWhileBool_Value_Property*)uNew(OutracksSimulatorClientUno_FuseTriggersWhileBool_Value_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/.uno/ux11/$.uno
// ---------------------------------------------------------------------------------

// internal sealed class OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property :302
// {
static void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::g::Outracks::Simulator::ErrorToast_typeof(), offsetof(::g::OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property", options);
    type->fp_build_ = OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property(Outracks.Simulator.ErrorToast obj, Uno.UX.Selector name) :305
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property__ctor_2_fn(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property* __this, ::g::Outracks::Simulator::ErrorToast* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed float4 Get() :307
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property__Get_fn(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property* __this, ::g::Uno::Float4* __retval)
{
    uStackFrame __("OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->FillColor(), void();
}

// public OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property New(Outracks.Simulator.ErrorToast obj, Uno.UX.Selector name) :305
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property__New1_fn(::g::Outracks::Simulator::ErrorToast* obj, ::g::Uno::UX::Selector* name, OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property** __retval)
{
    *__retval = OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :306
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property__get_Object_fn(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float4 v, Uno.UX.IPropertyListener origin) :308
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property__Set_fn(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property* __this, ::g::Uno::Float4* v, uObject* origin)
{
    uStackFrame __("OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property", "Set(float4,Uno.UX.IPropertyListener)");
    ::g::Uno::Float4 v_ = *v;
    uPtr(__this->_obj)->SetFillColor(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :309
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property__get_SupportsOriginSetter_fn(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property(Outracks.Simulator.ErrorToast obj, Uno.UX.Selector name) [instance] :305
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property::ctor_2(::g::Outracks::Simulator::ErrorToast* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property New(Outracks.Simulator.ErrorToast obj, Uno.UX.Selector name) [static] :305
OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property* OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property::New1(::g::Outracks::Simulator::ErrorToast* obj, ::g::Uno::UX::Selector name)
{
    OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property* obj1 = (OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property*)uNew(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/.uno/ux11/$.uno
// ---------------------------------------------------------------------------------

// internal sealed class OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property :284
// {
static void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::g::Outracks::Simulator::ErrorToast_typeof(), offsetof(::g::OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property", options);
    type->fp_build_ = OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property(Outracks.Simulator.ErrorToast obj, Uno.UX.Selector name) :287
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property__ctor_2_fn(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property* __this, ::g::Outracks::Simulator::ErrorToast* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed string Get() :289
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property__Get_fn(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property* __this, uString** __retval)
{
    uStackFrame __("OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->Message(), void();
}

// public OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property New(Outracks.Simulator.ErrorToast obj, Uno.UX.Selector name) :287
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property__New1_fn(::g::Outracks::Simulator::ErrorToast* obj, ::g::Uno::UX::Selector* name, OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property** __retval)
{
    *__retval = OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :288
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property__get_Object_fn(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(string v, Uno.UX.IPropertyListener origin) :290
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property__Set_fn(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property* __this, uString* v, uObject* origin)
{
    uStackFrame __("OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property", "Set(string,Uno.UX.IPropertyListener)");
    uPtr(__this->_obj)->SetMessage(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :291
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property__get_SupportsOriginSetter_fn(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property(Outracks.Simulator.ErrorToast obj, Uno.UX.Selector name) [instance] :287
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property::ctor_2(::g::Outracks::Simulator::ErrorToast* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property New(Outracks.Simulator.ErrorToast obj, Uno.UX.Selector name) [static] :287
OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property* OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property::New1(::g::Outracks::Simulator::ErrorToast* obj, ::g::Uno::UX::Selector name)
{
    OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property* obj1 = (OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property*)uNew(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/.uno/ux11/$.uno
// ---------------------------------------------------------------------------------

// internal sealed class OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property :293
// {
static void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL));
    type->SetFields(1,
        ::g::Outracks::Simulator::ErrorToast_typeof(), offsetof(::g::OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property", options);
    type->fp_build_ = OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property(Outracks.Simulator.ErrorToast obj, Uno.UX.Selector name) :296
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property__ctor_2_fn(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property* __this, ::g::Outracks::Simulator::ErrorToast* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed bool Get() :298
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property__Get_fn(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property* __this, bool* __retval)
{
    uStackFrame __("OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->ShowMonitorInfo(), void();
}

// public OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property New(Outracks.Simulator.ErrorToast obj, Uno.UX.Selector name) :296
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property__New1_fn(::g::Outracks::Simulator::ErrorToast* obj, ::g::Uno::UX::Selector* name, OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property** __retval)
{
    *__retval = OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :297
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property__get_Object_fn(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(bool v, Uno.UX.IPropertyListener origin) :299
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property__Set_fn(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property* __this, bool* v, uObject* origin)
{
    uStackFrame __("OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property", "Set(bool,Uno.UX.IPropertyListener)");
    bool v_ = *v;
    uPtr(__this->_obj)->SetShowMonitorInfo(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :300
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property__get_SupportsOriginSetter_fn(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property(Outracks.Simulator.ErrorToast obj, Uno.UX.Selector name) [instance] :296
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property::ctor_2(::g::Outracks::Simulator::ErrorToast* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property New(Outracks.Simulator.ErrorToast obj, Uno.UX.Selector name) [static] :296
OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property* OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property::New1(::g::Outracks::Simulator::ErrorToast* obj, ::g::Uno::UX::Selector name)
{
    OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property* obj1 = (OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property*)uNew(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/.uno/ux11/$.uno
// ---------------------------------------------------------------------------------

// internal sealed class OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property :311
// {
static void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::g::Outracks::Simulator::ErrorToast_typeof(), offsetof(::g::OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property", options);
    type->fp_build_ = OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property(Outracks.Simulator.ErrorToast obj, Uno.UX.Selector name) :314
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property__ctor_2_fn(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property* __this, ::g::Outracks::Simulator::ErrorToast* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed float4 Get() :316
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property__Get_fn(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property* __this, ::g::Uno::Float4* __retval)
{
    uStackFrame __("OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->StrokeColor(), void();
}

// public OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property New(Outracks.Simulator.ErrorToast obj, Uno.UX.Selector name) :314
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property__New1_fn(::g::Outracks::Simulator::ErrorToast* obj, ::g::Uno::UX::Selector* name, OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property** __retval)
{
    *__retval = OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :315
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property__get_Object_fn(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(float4 v, Uno.UX.IPropertyListener origin) :317
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property__Set_fn(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property* __this, ::g::Uno::Float4* v, uObject* origin)
{
    uStackFrame __("OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property", "Set(float4,Uno.UX.IPropertyListener)");
    ::g::Uno::Float4 v_ = *v;
    uPtr(__this->_obj)->SetStrokeColor(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :318
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property__get_SupportsOriginSetter_fn(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property(Outracks.Simulator.ErrorToast obj, Uno.UX.Selector name) [instance] :314
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property::ctor_2(::g::Outracks::Simulator::ErrorToast* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property New(Outracks.Simulator.ErrorToast obj, Uno.UX.Selector name) [static] :314
OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property* OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property::New1(::g::Outracks::Simulator::ErrorToast* obj, ::g::Uno::UX::Selector name)
{
    OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property* obj1 = (OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property*)uNew(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/.uno/package
// -----------------------------------------------------------------------------------------

// public static generated class UnoCore_bundle :0
// {
// static UnoCore_bundle() :0
static void UnoCore_bundle__cctor__fn(uType* __type)
{
    UnoCore_bundle::SdfFontShaderc4d110ba_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[161/*"uniform mat...*/], ::STRINGS[162/*"uniform flo...*/], 0, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[9/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[12/*"i"*/]));
    UnoCore_bundle::SpriteFontShader901b6a86_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[163/*"uniform mat...*/], ::STRINGS[164/*"uniform sam...*/], 0, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 5, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[10/*"g"*/]));
}

static void UnoCore_bundle_build(uType* type)
{
    ::STRINGS[161] = uString::Const("uniform mat4 d;\n"
        "\n"
        "attribute vec2 a, b;\n"
        "attribute vec4 c;\n"
        "\n"
        "varying vec2 g;\n"
        "varying vec4 h;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    g = b;\n"
        "    h = c;\n"
        "    gl_Position = d * vec4(a, float(0), float(1));\n"
        "}\n"
        "");
    ::STRINGS[162] = uString::Const("uniform float e, f;\n"
        "\n"
        "uniform sampler2D i;\n"
        "\n"
        "varying vec2 g;\n"
        "varying vec4 h;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    float j = smoothstep(e, f, texture2D(i, g).x);\n"
        "    if (j < 0.15) discard;\n"
        "    gl_FragColor = h * vec4(float(1), float(1), float(1), j);\n"
        "}\n"
        "");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[9] = uString::Const("e");
    ::STRINGS[6] = uString::Const("f");
    ::STRINGS[12] = uString::Const("i");
    ::STRINGS[163] = uString::Const("uniform mat4 d;\n"
        "\n"
        "attribute vec2 a, c;\n"
        "attribute vec4 b;\n"
        "\n"
        "varying vec2 e;\n"
        "varying vec4 f;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    e = c;\n"
        "    f = b;\n"
        "    gl_Position = d * vec4(a, float(0), float(1));\n"
        "}\n"
        "");
    ::STRINGS[164] = uString::Const("uniform sampler2D g;\n"
        "\n"
        "varying vec2 e;\n"
        "varying vec4 f;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = f * vec4(float(1), float(1), float(1), texture2D(g, e).x);\n"
        "}\n"
        "");
    ::STRINGS[10] = uString::Const("g");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::UnoCore_bundle::SdfFontShaderc4d110ba_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::UnoCore_bundle::SpriteFontShader901b6a86_, uFieldFlagsStatic);
    type->Reflection.SetFields(2,
        new uField("SdfFontShaderc4d110ba", 0),
        new uField("SpriteFontShader901b6a86", 1));
}

uClassType* UnoCore_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("UnoCore_bundle", options);
    type->fp_build_ = UnoCore_bundle_build;
    type->fp_cctor_ = UnoCore_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> UnoCore_bundle::SdfFontShaderc4d110ba_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> UnoCore_bundle::SpriteFontShader901b6a86_;
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno
// -----------------------------------------------------------------------

// public sealed class WeakDictionary<TKey, TValue> :2137
// {
static void WeakDictionary_build(uType* type)
{
    ::TYPES[1] = ::g::Uno::Collections::Dictionary_typeof();
    ::TYPES[2] = ::g::Uno::WeakReference_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetPrecalc(
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::HashableWeakReference_typeof(), type->T(1), NULL),
        type->T(1));
    type->SetFields(0,
        ::TYPES[1/*Uno.Collections.Dictionary`2*/]->MakeType(::g::HashableWeakReference_typeof(), type->T(1), NULL), offsetof(::g::WeakDictionary, _dictionary), 0);
    type->Reflection.SetFunctions(7,
        new uFunction("AsEnumerable", NULL, (void*)WeakDictionary__AsEnumerable_fn, 0, false, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::HashableWeakReference_typeof(), type->T(1), NULL), NULL), 0),
        new uFunction("Clear", NULL, (void*)WeakDictionary__Clear_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_Item", NULL, (void*)WeakDictionary__get_Item_fn, 0, false, type->T(1), 1, type->T(0)),
        new uFunction("set_Item", NULL, (void*)WeakDictionary__set_Item_fn, 0, false, uVoid_typeof(), 2, type->T(0), type->T(1)),
        new uFunction(".ctor", type, (void*)WeakDictionary__New1_fn, 0, true, type, 0),
        new uFunction("Remove", NULL, (void*)WeakDictionary__Remove_fn, 0, false, ::g::Uno::Bool_typeof(), 1, ::g::HashableWeakReference_typeof()),
        new uFunction("TryGetValue", NULL, (void*)WeakDictionary__TryGetValue_fn, 0, false, ::g::Uno::Bool_typeof(), 2, type->T(0), type->T(1)->ByRef()));
}

uType* WeakDictionary_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 2;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(WeakDictionary);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("WeakDictionary`2", options);
    type->fp_build_ = WeakDictionary_build;
    type->fp_ctor_ = (void*)WeakDictionary__New1_fn;
    return type;
}

// public generated WeakDictionary() :2137
void WeakDictionary__ctor__fn(WeakDictionary* __this)
{
    __this->ctor_();
}

// public Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<HashableWeakReference, TValue>> AsEnumerable() :2141
void WeakDictionary__AsEnumerable_fn(WeakDictionary* __this, uObject** __retval)
{
    *__retval = __this->AsEnumerable();
}

// public void Clear() :2146
void WeakDictionary__Clear_fn(WeakDictionary* __this)
{
    __this->Clear();
}

// private static HashableWeakReference GetKey(TKey obj) :2167
void WeakDictionary__GetKey_fn(uType* __type, void* obj, ::g::HashableWeakReference** __retval)
{
    return *__retval = ::g::HashableWeakReference::New1((::g::Uno::WeakReference*)::g::Uno::WeakReference::New1(::TYPES[2/*Uno.WeakReference<object>*/], uBoxPtr(__type->T(0), obj))), void();
}

// public TValue get_Item(TKey key) :2163
void WeakDictionary__get_Item_fn(WeakDictionary* __this, void* key, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*TValue*/),
    };
    uStackFrame __("WeakDictionary`2", "get_Item(TKey)");
    uT ret5(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ::g::HashableWeakReference* ret6;
    return __retval.Store((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(__this->_dictionary), (WeakDictionary__GetKey_fn(__this->__type, key, &ret6), ret6), &ret5), ret5)), void();
}

// public void set_Item(TKey key, TValue value) :2164
void WeakDictionary__set_Item_fn(WeakDictionary* __this, void* key, void* value)
{
    uStackFrame __("WeakDictionary`2", "set_Item(TKey,TValue)");
    ::g::HashableWeakReference* ret7;
    ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(__this->_dictionary), (WeakDictionary__GetKey_fn(__this->__type, key, &ret7), ret7), value);
}

// public generated WeakDictionary New() :2137
void WeakDictionary__New1_fn(uType* __type, WeakDictionary** __retval)
{
    *__retval = WeakDictionary::New1(__type);
}

// public bool Remove(HashableWeakReference key) :2156
void WeakDictionary__Remove_fn(WeakDictionary* __this, ::g::HashableWeakReference* key, bool* __retval)
{
    *__retval = __this->Remove(key);
}

// public bool TryGetValue(TKey key, TValue& value) :2151
void WeakDictionary__TryGetValue_fn(WeakDictionary* __this, void* key, uTRef value, bool* __retval)
{
    uStackFrame __("WeakDictionary`2", "TryGetValue(TKey,TValue&)");
    bool ret3;
    ::g::HashableWeakReference* ret4;
    return *__retval = (::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(__this->_dictionary), (WeakDictionary__GetKey_fn(__this->__type, key, &ret4), ret4), value, &ret3), ret3), void();
}

// public generated WeakDictionary() [instance] :2137
void WeakDictionary::ctor_()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.Dictionary<HashableWeakReference, TValue>*/),
    };
    _dictionary = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(__types[0]));
}

// public Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<HashableWeakReference, TValue>> AsEnumerable() [instance] :2141
uObject* WeakDictionary::AsEnumerable()
{
    uStackFrame __("WeakDictionary`2", "AsEnumerable()");
    return (uObject*)_dictionary;
}

// public void Clear() [instance] :2146
void WeakDictionary::Clear()
{
    uStackFrame __("WeakDictionary`2", "Clear()");
    uPtr(_dictionary)->Clear();
}

// public bool Remove(HashableWeakReference key) [instance] :2156
bool WeakDictionary::Remove(::g::HashableWeakReference* key)
{
    uStackFrame __("WeakDictionary`2", "Remove(HashableWeakReference)");
    bool ret2;
    return (::g::Uno::Collections::Dictionary__Remove_fn(uPtr(_dictionary), key, &ret2), ret2);
}

// public generated WeakDictionary New() [static] :2137
WeakDictionary* WeakDictionary::New1(uType* __type)
{
    WeakDictionary* obj1 = (WeakDictionary*)uNew(__type);
    obj1->ctor_();
    return obj1;
}
// }

} // ::g
