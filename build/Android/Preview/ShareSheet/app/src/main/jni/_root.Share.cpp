// This file was generated based on /Users/mostafa/Desktop/ShareSheet/Share.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.Share.h>
#include <Android.Base.Wrappers.JavaObjectHelper.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.NativeCallback.h>
#include <Fuse.Scripting.NativeFunction.h>
#include <Fuse.Scripting.NativeMember.h>
#include <jni.h>
#include <Uno.Bool.h>
#include <Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaUnoObject.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Resource.h>
#include <Uno/JNIHelper.h>
static uString* STRINGS[2];
static uType* TYPES[1];

namespace g{

// public sealed class Share :11
// {
static void Share_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Share");
    ::STRINGS[1] = uString::Const("sendIntent");
    ::TYPES[0] = ::g::Fuse::Scripting::NativeCallback_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(4,
        type, (uintptr_t)&::g::Share::_instance_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Share__New2_fn, 0, true, type, 0));
}

::g::Fuse::Scripting::NativeModule_type* Share_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Share);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("Share", options);
    type->fp_build_ = Share_build;
    type->fp_ctor_ = (void*)Share__New2_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public Share() :15
void Share__ctor_2_fn(Share* __this)
{
    __this->ctor_2();
}

// public Share New() :15
void Share__New2_fn(Share** __retval)
{
    *__retval = Share::New2();
}

// private static extern void SendIntent() :34
void Share__SendIntent_fn()
{
    Share::SendIntent();
}

// private static object SendIntent(Fuse.Scripting.Context c, object[] args) :25
void Share__SendIntent1_fn(::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = Share::SendIntent1(c, args);
}

uSStrong<Share*> Share::_instance_;

// public Share() [instance] :15
void Share::ctor_2()
{
    uStackFrame __("Share", ".ctor()");
    ctor_1();

    if (Share::_instance_ != NULL)
        return;

    Share::_instance_ = this;
    ::g::Uno::UX::Resource::SetGlobalKey(Share::_instance_, ::STRINGS[0/*"Share"*/]);
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[1/*"sendIntent"*/], uDelegate::New(::TYPES[0/*Fuse.Scripting.NativeCallback*/], (void*)Share__SendIntent1_fn)));
}

// public Share New() [static] :15
Share* Share::New2()
{
    Share* obj1 = (Share*)uNew(Share_typeof());
    obj1->ctor_2();
    return obj1;
}

// private static extern void SendIntent() [static] :34
void Share::SendIntent()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SendIntent291", "()V");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static object SendIntent(Fuse.Scripting.Context c, object[] args) [static] :25
uObject* Share::SendIntent1(::g::Fuse::Scripting::Context* c, uArray* args)
{
    Share::SendIntent();
    return NULL;
}
// }

} // ::g
