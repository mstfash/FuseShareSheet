// This file was generated based on /Users/mostafa/Desktop/ShareSheet/ShareSheet.unoproj.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.ShareSheet_bundle.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.String.h>
static uString* STRINGS[2];

namespace g{

// public static generated class ShareSheet_bundle :0
// {
// static ShareSheet_bundle() :0
static void ShareSheet_bundle__cctor__fn(uType* __type)
{
    ShareSheet_bundle::FuseLogoc5a14933_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"ShareSheet"*/]))->GetFile(::STRINGS[1/*"fuselogo-01...*/]);
}

static void ShareSheet_bundle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("ShareSheet");
    ::STRINGS[1] = uString::Const("fuselogo-01c339c1.png");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::ShareSheet_bundle::FuseLogoc5a14933_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("FuseLogoc5a14933", 0));
}

uClassType* ShareSheet_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("ShareSheet_bundle", options);
    type->fp_build_ = ShareSheet_bundle_build;
    type->fp_cctor_ = ShareSheet_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> ShareSheet_bundle::FuseLogoc5a14933_;
// }

} // ::g
