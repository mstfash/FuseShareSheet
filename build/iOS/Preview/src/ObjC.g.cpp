// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <ObjC.Helpers.h>
#include <ObjC.ID.h>
#include <ObjC.Object.h>
#include <Uno.Bool.h>
static uType* TYPES[1];

namespace g{
namespace ObjC{

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/compiler/exporttargetinterop/foreign/objc/$.uno
// ---------------------------------------------------------------------------------------------------------------------------------------

// internal static class Helpers :39
// {
static void Helpers_build(uType* type)
{
    ::TYPES[0] = ::g::ObjC::Object_typeof();
}

uClassType* Helpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("ObjC.Helpers", options);
    type->fp_build_ = Helpers_build;
    return type;
}

// private static extern ObjC.ID GetHandle(ObjC.Object o) :41
void Helpers__GetHandle_fn(uObject* o, ::id* __retval)
{
    *__retval = Helpers::GetHandle(o);
}

// private static extern ObjC.ID GetHandle(ObjC.Object o) [static] :41
::id Helpers::GetHandle(uObject* o)
{
    uStackFrame __("ObjC.Helpers", "GetHandle(ObjC.Object)");
    return (o == NULL) ? ::g::ObjC::ID::Null_ : ::g::ObjC::Object::Handle(uInterface(uPtr(o), ::TYPES[0/*ObjC.Object*/]));
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/compiler/exporttargetinterop/foreign/objc/$.uno
// ---------------------------------------------------------------------------------------------------------------------------------------

// public abstract extern interface Object :34
// {
uInterfaceType* Object_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("ObjC.Object", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("get_Handle", NULL, NULL, offsetof(Object, fp_get_Handle), false, ::g::ObjC::ID_typeof(), 0));
    return type;
}
// }

}} // ::g::ObjC
