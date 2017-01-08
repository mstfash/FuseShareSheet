// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/compiler/exporttargetinterop/foreign/objc/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <ObjC.ID.h>
#include <Uno.Bool.h>
#include <Uno.Compiler.ExportTargetInterop.Foreign.ObjC.Object.h>
#include <Uno.Int.h>
static uType* TYPES[2];

namespace g{
namespace Uno{
namespace Compiler{
namespace ExportTargetInterop{
namespace Foreign{
namespace ObjC{

// public sealed extern class Object :51
// {
// ~Object() :74
static void Object__Finalize_fn(Object* __this)
{
    [__this->_handle release];
}

static void Object_build(uType* type)
{
    ::TYPES[0] = ::g::ObjC::Object_typeof();
    ::TYPES[1] = ::g::ObjC::ID_typeof();
    type->SetInterfaces(
        ::TYPES[0/*ObjC.Object*/], offsetof(Object_type, interface0));
    type->SetFields(0,
        ::TYPES[1/*ObjC.ID*/], offsetof(::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object, _handle), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("get_Handle", NULL, (void*)Object__get_Handle_fn, 0, false, ::TYPES[1/*ObjC.ID*/], 0),
        new uFunction("New", NULL, (void*)Object__New1_fn, 0, true, type, 1, ::TYPES[1/*ObjC.ID*/]));
}

Object_type* Object_typeof()
{
    static uSStrong<Object_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Object);
    options.TypeSize = sizeof(Object_type);
    type = (Object_type*)uClassType::New("Uno.Compiler.ExportTargetInterop.Foreign.ObjC.Object", options);
    type->fp_build_ = Object_build;
    type->fp_Finalize = (void(*)(uObject*))Object__Finalize_fn;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))Object__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))Object__GetHashCode_fn;
    type->interface0.fp_get_Handle = (void(*)(uObject*, ::id*))Object__get_Handle_fn;
    return type;
}

// private Object(ObjC.ID handle) :63
void Object__ctor__fn(Object* __this, ::id* handle)
{
    __this->ctor_(*handle);
}

// public override sealed bool Equals(object x) :79
void Object__Equals_fn(Object* __this, uObject* x, bool* __retval)
{
    uStackFrame __("Uno.Compiler.ExportTargetInterop.Foreign.ObjC.Object", "Equals(object)");
    uObject* o = uAs<uObject*>(x, ::TYPES[0/*ObjC.Object*/]);
    return *__retval = (o != NULL) && ::g::ObjC::ID::op_Equality(::g::ObjC::Object::Handle(uInterface(uPtr(o), ::TYPES[0/*ObjC.Object*/])), __this->Handle()), void();
}

// public override sealed int GetHashCode() :85
void Object__GetHashCode_fn(Object* __this, int* __retval)
{
    uStackFrame __("Uno.Compiler.ExportTargetInterop.Foreign.ObjC.Object", "GetHashCode()");
    ::id ind1;
    return *__retval = ::g::ObjC::ID::GetHashCode((ind1 = __this->_handle, ind1), ::TYPES[1/*ObjC.ID*/]), void();
}

// public ObjC.ID get_Handle() :57
void Object__get_Handle_fn(Object* __this, ::id* __retval)
{
    *__retval = __this->Handle();
}

// public static Uno.Compiler.ExportTargetInterop.Foreign.ObjC.Object New(ObjC.ID handle) :69
void Object__New1_fn(::id* handle, Object** __retval)
{
    *__retval = Object::New1(*handle);
}

// private Object New(ObjC.ID handle) :63
void Object__New2_fn(::id* handle, Object** __retval)
{
    *__retval = Object::New2(*handle);
}

// private Object(ObjC.ID handle) [instance] :63
void Object::ctor_(::id handle)
{
    _handle = handle;
    [_handle retain];
}

// public ObjC.ID get_Handle() [instance] :57
::id Object::Handle()
{
    return [[_handle retain] autorelease];
}

// public static Uno.Compiler.ExportTargetInterop.Foreign.ObjC.Object New(ObjC.ID handle) [static] :69
Object* Object::New1(::id handle)
{
    uStackFrame __("Uno.Compiler.ExportTargetInterop.Foreign.ObjC.Object", "New(ObjC.ID)");
    return ::g::ObjC::ID::op_Equality(handle, ::g::ObjC::ID::Null_) ? uCast<Object*>(NULL, Object_typeof()) : (Object*)Object::New2(handle);
}

// private Object New(ObjC.ID handle) [static] :63
Object* Object::New2(::id handle)
{
    Object* obj2 = (Object*)uNew(Object_typeof());
    obj2->ctor_(handle);
    return obj2;
}
// }

}}}}}} // ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC
