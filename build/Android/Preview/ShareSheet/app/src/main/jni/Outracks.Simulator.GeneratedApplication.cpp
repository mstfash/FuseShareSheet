// This file was generated based on /Users/mostafa/Desktop/ShareSheet/build/Android/Preview/preamble/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Outracks.Simulator.GeneratedApplication.h>
#include <Outracks.Simulator.Reflection.Native.ITypeMap.h>
#include <Outracks.Simulator.Reflection.Native.NativeReflection.h>
#include <Outracks.Simulator.Reflection.Native.SimpleTypeMap.h>
#include <Outracks.Simulator.Runtime.IReflection.h>
#include <Uno.Func-1.h>
#include <Uno.Int.h>
#include <Uno.IO.Bundle.h>
#include <Uno.Net.IPAddress.h>
#include <Uno.Net.IPEndPoint.h>
#include <Uno.String.h>
static uString* STRINGS[4];
static uType* TYPES[3];

namespace g{
namespace Outracks{
namespace Simulator{

// public sealed class GeneratedApplication :207
// {
static void GeneratedApplication_build(uType* type)
{
    ::STRINGS[0] = uString::Const("127.0.0.1");
    ::STRINGS[1] = uString::Const("192.168.7.49");
    ::STRINGS[2] = uString::Const("/Users/mostafa/Desktop/ShareSheet/ShareSheet.unoproj");
    ::STRINGS[3] = uString::Const("ShareSheet");
    ::TYPES[0] = ::g::Uno::Net::IPEndPoint_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Func_typeof()->MakeType(::g::Uno::IO::Bundle_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::String_typeof()->Array();
    type->SetInterfaces(
        ::g::Fuse::Input::IPointerEventResponder_typeof(), offsetof(::g::Outracks::Simulator::Application_type, interface0));
    type->SetFields(16);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)GeneratedApplication__New2_fn, 0, true, type, 0));
}

::g::Outracks::Simulator::Application_type* GeneratedApplication_typeof()
{
    static uSStrong< ::g::Outracks::Simulator::Application_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Outracks::Simulator::Application_typeof();
    options.FieldCount = 16;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(GeneratedApplication);
    options.TypeSize = sizeof(::g::Outracks::Simulator::Application_type);
    type = (::g::Outracks::Simulator::Application_type*)uClassType::New("Outracks.Simulator.GeneratedApplication", options);
    type->fp_build_ = GeneratedApplication_build;
    type->fp_ctor_ = (void*)GeneratedApplication__New2_fn;
    type->interface0.fp_OnPointerPressed = (void(*)(uObject*, ::g::Fuse::Input::PointerPressedArgs*))::g::Outracks::Simulator::Application__OnPointerPressed_fn;
    type->interface0.fp_OnPointerMoved = (void(*)(uObject*, ::g::Fuse::Input::PointerMovedArgs*))::g::Outracks::Simulator::Application__OnPointerMoved_fn;
    type->interface0.fp_OnPointerReleased = (void(*)(uObject*, ::g::Fuse::Input::PointerReleasedArgs*))::g::Outracks::Simulator::Application__OnPointerReleased_fn;
    type->interface0.fp_OnPointerWheelMoved = (void(*)(uObject*, ::g::Fuse::Input::PointerWheelMovedArgs*))::g::Outracks::Simulator::Application__OnPointerWheelMoved_fn;
    return type;
}

// public GeneratedApplication() :210
void GeneratedApplication__ctor_4_fn(GeneratedApplication* __this)
{
    __this->ctor_4();
}

// private static Uno.IO.Bundle GetBundle() :218
void GeneratedApplication__GetBundle_fn(::g::Uno::IO::Bundle** __retval)
{
    *__retval = GeneratedApplication::GetBundle();
}

// public GeneratedApplication New() :210
void GeneratedApplication__New2_fn(GeneratedApplication** __retval)
{
    *__retval = GeneratedApplication::New2();
}

// public GeneratedApplication() [instance] :210
void GeneratedApplication::ctor_4()
{
    uStackFrame __("Outracks.Simulator.GeneratedApplication", ".ctor()");
    ctor_3(uArray::Init< ::g::Uno::Net::IPEndPoint*>(::TYPES[0/*Uno.Net.IPEndPoint[]*/], 2, (::g::Uno::Net::IPEndPoint*)::g::Uno::Net::IPEndPoint::New1(::g::Uno::Net::IPAddress::Parse(::STRINGS[0/*"127.0.0.1"*/]), 12124), (::g::Uno::Net::IPEndPoint*)::g::Uno::Net::IPEndPoint::New1(::g::Uno::Net::IPAddress::Parse(::STRINGS[1/*"192.168.7.49"*/]), 12124)), ::STRINGS[2/*"/Users/most...*/], uDelegate::New(::TYPES[1/*Uno.Func<Uno.IO.Bundle>*/], (void*)GeneratedApplication__GetBundle_fn), uArray::Init<uString*>(::TYPES[2/*string[]*/], 0));
    Reflection((uObject*)::g::Outracks::Simulator::Reflection::Native::NativeReflection::New1((uObject*)::g::Outracks::Simulator::Reflection::Native::SimpleTypeMap::New1()));
}

// private static Uno.IO.Bundle GetBundle() [static] :218
::g::Uno::IO::Bundle* GeneratedApplication::GetBundle()
{
    uStackFrame __("Outracks.Simulator.GeneratedApplication", "GetBundle()");
    return ::g::Uno::IO::Bundle::Get(::STRINGS[3/*"ShareSheet"*/]);
}

// public GeneratedApplication New() [static] :210
GeneratedApplication* GeneratedApplication::New2()
{
    GeneratedApplication* obj1 = (GeneratedApplication*)uNew(GeneratedApplication_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

}}} // ::g::Outracks::Simulator
