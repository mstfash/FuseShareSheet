// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Compiler.ExportTargetInterop.Android.ForeignFixedNameAttribute.h>

namespace g{
namespace Uno{
namespace Compiler{
namespace ExportTargetInterop{
namespace Android{

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/compiler/exporttargetinterop/foreign/android/$.uno
// ------------------------------------------------------------------------------------------------------------------------------------------

// public sealed class ForeignFixedNameAttribute :25
// {
static void ForeignFixedNameAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ForeignFixedNameAttribute__New1_fn, 0, true, type, 0));
}

uType* ForeignFixedNameAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(ForeignFixedNameAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Compiler.ExportTargetInterop.Android.ForeignFixedNameAttribute", options);
    type->fp_build_ = ForeignFixedNameAttribute_build;
    type->fp_ctor_ = (void*)ForeignFixedNameAttribute__New1_fn;
    return type;
}

// public ForeignFixedNameAttribute() :27
void ForeignFixedNameAttribute__ctor_1_fn(ForeignFixedNameAttribute* __this)
{
    __this->ctor_1();
}

// public ForeignFixedNameAttribute New() :27
void ForeignFixedNameAttribute__New1_fn(ForeignFixedNameAttribute** __retval)
{
    *__retval = ForeignFixedNameAttribute::New1();
}

// public ForeignFixedNameAttribute() [instance] :27
void ForeignFixedNameAttribute::ctor_1()
{
    ctor_();
}

// public ForeignFixedNameAttribute New() [static] :27
ForeignFixedNameAttribute* ForeignFixedNameAttribute::New1()
{
    ForeignFixedNameAttribute* obj1 = (ForeignFixedNameAttribute*)uNew(ForeignFixedNameAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

}}}}} // ::g::Uno::Compiler::ExportTargetInterop::Android
