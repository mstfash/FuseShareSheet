// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Bootstrapper.h>
#include <BootstrapperImpl_Android.h>

namespace g{
namespace Android{

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/targets/android/uno/base/$.uno
// -----------------------------------------------------------------------------------------------------------

// internal static extern class Bootstrapper :9
// {
static void Bootstrapper_build(uType* type)
{
}

uClassType* Bootstrapper_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Android.Bootstrapper", options);
    type->fp_build_ = Bootstrapper_build;
    return type;
}

// public static extern void _RegisterTypes() :11
void Bootstrapper___RegisterTypes_fn()
{
    Bootstrapper::_RegisterTypes();
}

// public static extern void _RegisterTypes() [static] :11
void Bootstrapper::_RegisterTypes()
{
    ::BootstrapperImpl();
}
// }

}} // ::g::Android
