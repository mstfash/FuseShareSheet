// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Platform2.Implementation.InvokedFromNativeCodeAttribute.h>

namespace g{
namespace Uno{
namespace Platform2{
namespace Implementation{

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/platform2/implementation/$.uno
// ----------------------------------------------------------------------------------------------------------------------

// public sealed class InvokedFromNativeCodeAttribute :9
// {
static void InvokedFromNativeCodeAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)InvokedFromNativeCodeAttribute__New1_fn, 0, true, type, 0));
}

uType* InvokedFromNativeCodeAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(InvokedFromNativeCodeAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Platform2.Implementation.InvokedFromNativeCodeAttribute", options);
    type->fp_build_ = InvokedFromNativeCodeAttribute_build;
    type->fp_ctor_ = (void*)InvokedFromNativeCodeAttribute__New1_fn;
    return type;
}

// public generated InvokedFromNativeCodeAttribute() :9
void InvokedFromNativeCodeAttribute__ctor_1_fn(InvokedFromNativeCodeAttribute* __this)
{
    __this->ctor_1();
}

// public generated InvokedFromNativeCodeAttribute New() :9
void InvokedFromNativeCodeAttribute__New1_fn(InvokedFromNativeCodeAttribute** __retval)
{
    *__retval = InvokedFromNativeCodeAttribute::New1();
}

// public generated InvokedFromNativeCodeAttribute() [instance] :9
void InvokedFromNativeCodeAttribute::ctor_1()
{
    ctor_();
}

// public generated InvokedFromNativeCodeAttribute New() [static] :9
InvokedFromNativeCodeAttribute* InvokedFromNativeCodeAttribute::New1()
{
    InvokedFromNativeCodeAttribute* obj1 = (InvokedFromNativeCodeAttribute*)uNew(InvokedFromNativeCodeAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

}}}} // ::g::Uno::Platform2::Implementation
