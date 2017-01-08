// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.JavaScriptCore/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScriptCore{

// internal extern struct JSContextRef :790
// {
struct JSContextRef_type : uStructType
{
    ::g::Uno::IDisposable interface0;
};

JSContextRef_type* JSContextRef_typeof();
void JSContextRef__Create_fn(::JSContextRef* __retval);
void JSContextRef__Dispose_fn(::JSContextRef* __this);
void JSContextRef__EvaluateScript_fn(::JSContextRef* __this, ::JSStringRef* script, ::JSObjectRef* thisObject, ::JSStringRef* sourceURL, int* startingLineNumber, ::JSValueRef* exception, ::JSValueRef* __retval);
void JSContextRef__EvaluateScript1_fn(::JSContextRef* __this, uString* script, ::JSObjectRef* thisObject, uString* sourceURL, int* startingLineNumber, uDelegate* onException, ::JSValueRef* __retval);
void JSContextRef__get_GlobalObject_fn(::JSContextRef* __this, ::JSObjectRef* __retval);

struct JSContextRef
{
    void* _dummy;

    static void Dispose(::JSContextRef __this);
    static ::JSValueRef EvaluateScript(::JSContextRef __this, ::JSStringRef script, ::JSObjectRef thisObject, ::JSStringRef sourceURL, int startingLineNumber, ::JSValueRef* exception);
    static ::JSValueRef EvaluateScript1(::JSContextRef __this, uString* script, ::JSObjectRef thisObject, uString* sourceURL, int startingLineNumber, uDelegate* onException);
    static ::JSObjectRef GlobalObject(::JSContextRef __this);
    static ::JSContextRef Create();
};
// }

}}}} // ::g::Fuse::Scripting::JavaScriptCore
