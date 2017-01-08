// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.Wrappers.JavaObjectHelper.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Fuse.Text.Bidirectional.Implementation.JavaRuns.h>
#include <Fuse.Text.Bidirectional.Run.h>
#include <Fuse.Text.Substring.h>
#include <Java.Object.h>
#include <jni.h>
#include <Uno.Bool.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaUnoObject.h>
#include <Uno.Int.h>
#include <Uno.String.h>
#include <Uno/JNIHelper.h>
static uType* TYPES[1];

namespace g{
namespace Fuse{
namespace Text{
namespace Bidirectional{
namespace Implementation{

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/implementation/$.uno
// ---------------------------------------------------------------------------------------------------

// internal static extern class JavaRuns :1107
// {
static void JavaRuns_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Text::Bidirectional::Run_typeof(), NULL);
}

uClassType* JavaRuns_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Text.Bidirectional.Implementation.JavaRuns", options);
    type->fp_build_ = JavaRuns_build;
    return type;
}

// private static Java.Object Create(string text) :1127
void JavaRuns__Create_fn(uString* text, ::g::Java::Object** __retval)
{
    *__retval = JavaRuns::Create(text);
}

// public static Uno.Collections.List<Fuse.Text.Bidirectional.Run> GetLogical(Fuse.Text.Substring text) :1109
void JavaRuns__GetLogical_fn(::g::Fuse::Text::Substring* text, ::g::Uno::Collections::List** __retval)
{
    *__retval = JavaRuns::GetLogical(text);
}

// private static int GetRunCount(Java.Object handle) :1133
void JavaRuns__GetRunCount_fn(::g::Java::Object* handle, int* __retval)
{
    *__retval = JavaRuns::GetRunCount(handle);
}

// private static int GetRunLevel(Java.Object handle, int run) :1157
void JavaRuns__GetRunLevel_fn(::g::Java::Object* handle, int* run, int* __retval)
{
    *__retval = JavaRuns::GetRunLevel(handle, *run);
}

// private static int GetRunLimit(Java.Object handle, int run) :1151
void JavaRuns__GetRunLimit_fn(::g::Java::Object* handle, int* run, int* __retval)
{
    *__retval = JavaRuns::GetRunLimit(handle, *run);
}

// private static int GetRunStart(Java.Object handle, int run) :1145
void JavaRuns__GetRunStart_fn(::g::Java::Object* handle, int* run, int* __retval)
{
    *__retval = JavaRuns::GetRunStart(handle, *run);
}

// private static Java.Object Create(string text) [static] :1127
::g::Java::Object* JavaRuns::Create(uString* text)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Create225", "(Ljava/lang/String;)Ljava/lang/Object;");
        uString* _utext=text;
        jstring _text = JniHelper::UnoToJavaString(_utext);
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_text);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_text!=NULL) { U_JNIVAR->DeleteLocalRef(_text); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static Uno.Collections.List<Fuse.Text.Bidirectional.Run> GetLogical(Fuse.Text.Substring text) [static] :1109
::g::Uno::Collections::List* JavaRuns::GetLogical(::g::Fuse::Text::Substring* text)
{
    uStackFrame __("Fuse.Text.Bidirectional.Implementation.JavaRuns", "GetLogical(Fuse.Text.Substring)");
    ::g::Uno::Collections::List* result = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[0/*Uno.Collections.List<Fuse.Text.Bidirectional.Run>*/]);
    ::g::Java::Object* handle = JavaRuns::Create(uPtr(text)->ToString());
    int count = JavaRuns::GetRunCount(handle);

    for (int run = 0; run < count; ++run)
    {
        int start = JavaRuns::GetRunStart(handle, run);
        int limit = JavaRuns::GetRunLimit(handle, run);
        ::g::Fuse::Text::Substring* str = uPtr(text)->GetSubstring1(start, limit - start);
        ::g::Uno::Collections::List__Add_fn(uPtr(result), uCRef(::g::Fuse::Text::Bidirectional::Run__New1(str, JavaRuns::GetRunLevel(handle, run))));
    }

    return result;
}

// private static int GetRunCount(Java.Object handle) [static] :1133
int JavaRuns::GetRunCount(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetRunCount227", "(Ljava/lang/Object;)I");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd,_handle);
        int __result = (int)__jresult;
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static int GetRunLevel(Java.Object handle, int run) [static] :1157
int JavaRuns::GetRunLevel(::g::Java::Object* handle, int run)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetRunLevel228", "(Ljava/lang/Object;I)I");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _urun=run;
        jint _run = (jint)_urun;
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd,_handle,_run);
        int __result = (int)__jresult;
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static int GetRunLimit(Java.Object handle, int run) [static] :1151
int JavaRuns::GetRunLimit(::g::Java::Object* handle, int run)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetRunLimit229", "(Ljava/lang/Object;I)I");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _urun=run;
        jint _run = (jint)_urun;
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd,_handle,_run);
        int __result = (int)__jresult;
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static int GetRunStart(Java.Object handle, int run) [static] :1145
int JavaRuns::GetRunStart(::g::Java::Object* handle, int run)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetRunStart230", "(Ljava/lang/Object;I)I");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==NULL ? NULL : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int _urun=run;
        jint _run = (jint)_urun;
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd,_handle,_run);
        int __result = (int)__jresult;
        if (_handle!=NULL) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}
// }

}}}}} // ::g::Fuse::Text::Bidirectional::Implementation
