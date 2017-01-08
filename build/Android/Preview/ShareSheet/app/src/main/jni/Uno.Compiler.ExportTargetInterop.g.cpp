// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Compiler.ExportTargetInterop.DontCopyStructAttribute.h>
#include <Uno.Compiler.ExportTargetInterop.DontExportAttribute.h>
#include <Uno.Compiler.ExportTargetInterop.OptionalAttribute.h>
#include <Uno.Compiler.ExportTargetInterop.StaticAttribute.h>
#include <Uno.Compiler.ExportTargetInterop.TargetSpecificImplementationAttribute.h>
#include <Uno.Compiler.ExportTargetInterop.TargetSpecificTypeAttribute.h>

namespace g{
namespace Uno{
namespace Compiler{
namespace ExportTargetInterop{

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/compiler/exporttargetinterop/$.uno
// --------------------------------------------------------------------------------------------------------------------------

// public sealed class DontCopyStructAttribute :6
// {
static void DontCopyStructAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)DontCopyStructAttribute__New1_fn, 0, true, type, 0));
}

uType* DontCopyStructAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(DontCopyStructAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Compiler.ExportTargetInterop.DontCopyStructAttribute", options);
    type->fp_build_ = DontCopyStructAttribute_build;
    type->fp_ctor_ = (void*)DontCopyStructAttribute__New1_fn;
    return type;
}

// public generated DontCopyStructAttribute() :6
void DontCopyStructAttribute__ctor_1_fn(DontCopyStructAttribute* __this)
{
    __this->ctor_1();
}

// public generated DontCopyStructAttribute New() :6
void DontCopyStructAttribute__New1_fn(DontCopyStructAttribute** __retval)
{
    *__retval = DontCopyStructAttribute::New1();
}

// public generated DontCopyStructAttribute() [instance] :6
void DontCopyStructAttribute::ctor_1()
{
    ctor_();
}

// public generated DontCopyStructAttribute New() [static] :6
DontCopyStructAttribute* DontCopyStructAttribute::New1()
{
    DontCopyStructAttribute* obj1 = (DontCopyStructAttribute*)uNew(DontCopyStructAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/compiler/exporttargetinterop/$.uno
// --------------------------------------------------------------------------------------------------------------------------

// public sealed class DontExportAttribute :17
// {
static void DontExportAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)DontExportAttribute__New1_fn, 0, true, type, 0));
}

uType* DontExportAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(DontExportAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Compiler.ExportTargetInterop.DontExportAttribute", options);
    type->fp_build_ = DontExportAttribute_build;
    type->fp_ctor_ = (void*)DontExportAttribute__New1_fn;
    return type;
}

// public generated DontExportAttribute() :17
void DontExportAttribute__ctor_1_fn(DontExportAttribute* __this)
{
    __this->ctor_1();
}

// public generated DontExportAttribute New() :17
void DontExportAttribute__New1_fn(DontExportAttribute** __retval)
{
    *__retval = DontExportAttribute::New1();
}

// public generated DontExportAttribute() [instance] :17
void DontExportAttribute::ctor_1()
{
    ctor_();
}

// public generated DontExportAttribute New() [static] :17
DontExportAttribute* DontExportAttribute::New1()
{
    DontExportAttribute* obj1 = (DontExportAttribute*)uNew(DontExportAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/compiler/exporttargetinterop/$.uno
// --------------------------------------------------------------------------------------------------------------------------

// public sealed class OptionalAttribute :114
// {
static void OptionalAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)OptionalAttribute__New1_fn, 0, true, type, 0));
}

uType* OptionalAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(OptionalAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Compiler.ExportTargetInterop.OptionalAttribute", options);
    type->fp_build_ = OptionalAttribute_build;
    type->fp_ctor_ = (void*)OptionalAttribute__New1_fn;
    return type;
}

// public generated OptionalAttribute() :114
void OptionalAttribute__ctor_1_fn(OptionalAttribute* __this)
{
    __this->ctor_1();
}

// public generated OptionalAttribute New() :114
void OptionalAttribute__New1_fn(OptionalAttribute** __retval)
{
    *__retval = OptionalAttribute::New1();
}

// public generated OptionalAttribute() [instance] :114
void OptionalAttribute::ctor_1()
{
    ctor_();
}

// public generated OptionalAttribute New() [static] :114
OptionalAttribute* OptionalAttribute::New1()
{
    OptionalAttribute* obj1 = (OptionalAttribute*)uNew(OptionalAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/compiler/exporttargetinterop/$.uno
// --------------------------------------------------------------------------------------------------------------------------

// public sealed class StaticAttribute :165
// {
static void StaticAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)StaticAttribute__New1_fn, 0, true, type, 0));
}

uType* StaticAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(StaticAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Compiler.ExportTargetInterop.StaticAttribute", options);
    type->fp_build_ = StaticAttribute_build;
    type->fp_ctor_ = (void*)StaticAttribute__New1_fn;
    return type;
}

// public generated StaticAttribute() :165
void StaticAttribute__ctor_1_fn(StaticAttribute* __this)
{
    __this->ctor_1();
}

// public generated StaticAttribute New() :165
void StaticAttribute__New1_fn(StaticAttribute** __retval)
{
    *__retval = StaticAttribute::New1();
}

// public generated StaticAttribute() [instance] :165
void StaticAttribute::ctor_1()
{
    ctor_();
}

// public generated StaticAttribute New() [static] :165
StaticAttribute* StaticAttribute::New1()
{
    StaticAttribute* obj1 = (StaticAttribute*)uNew(StaticAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/compiler/exporttargetinterop/$.uno
// --------------------------------------------------------------------------------------------------------------------------

// public sealed class TargetSpecificImplementationAttribute :177
// {
static void TargetSpecificImplementationAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)TargetSpecificImplementationAttribute__New1_fn, 0, true, type, 0));
}

uType* TargetSpecificImplementationAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(TargetSpecificImplementationAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Compiler.ExportTargetInterop.TargetSpecificImplementationAttribute", options);
    type->fp_build_ = TargetSpecificImplementationAttribute_build;
    type->fp_ctor_ = (void*)TargetSpecificImplementationAttribute__New1_fn;
    return type;
}

// public generated TargetSpecificImplementationAttribute() :177
void TargetSpecificImplementationAttribute__ctor_1_fn(TargetSpecificImplementationAttribute* __this)
{
    __this->ctor_1();
}

// public generated TargetSpecificImplementationAttribute New() :177
void TargetSpecificImplementationAttribute__New1_fn(TargetSpecificImplementationAttribute** __retval)
{
    *__retval = TargetSpecificImplementationAttribute::New1();
}

// public generated TargetSpecificImplementationAttribute() [instance] :177
void TargetSpecificImplementationAttribute::ctor_1()
{
    ctor_();
}

// public generated TargetSpecificImplementationAttribute New() [static] :177
TargetSpecificImplementationAttribute* TargetSpecificImplementationAttribute::New1()
{
    TargetSpecificImplementationAttribute* obj1 = (TargetSpecificImplementationAttribute*)uNew(TargetSpecificImplementationAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/compiler/exporttargetinterop/$.uno
// --------------------------------------------------------------------------------------------------------------------------

// public sealed class TargetSpecificTypeAttribute :189
// {
static void TargetSpecificTypeAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)TargetSpecificTypeAttribute__New1_fn, 0, true, type, 0));
}

uType* TargetSpecificTypeAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(TargetSpecificTypeAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Compiler.ExportTargetInterop.TargetSpecificTypeAttribute", options);
    type->fp_build_ = TargetSpecificTypeAttribute_build;
    type->fp_ctor_ = (void*)TargetSpecificTypeAttribute__New1_fn;
    return type;
}

// public generated TargetSpecificTypeAttribute() :189
void TargetSpecificTypeAttribute__ctor_1_fn(TargetSpecificTypeAttribute* __this)
{
    __this->ctor_1();
}

// public generated TargetSpecificTypeAttribute New() :189
void TargetSpecificTypeAttribute__New1_fn(TargetSpecificTypeAttribute** __retval)
{
    *__retval = TargetSpecificTypeAttribute::New1();
}

// public generated TargetSpecificTypeAttribute() [instance] :189
void TargetSpecificTypeAttribute::ctor_1()
{
    ctor_();
}

// public generated TargetSpecificTypeAttribute New() [static] :189
TargetSpecificTypeAttribute* TargetSpecificTypeAttribute::New1()
{
    TargetSpecificTypeAttribute* obj1 = (TargetSpecificTypeAttribute*)uNew(TargetSpecificTypeAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

}}}} // ::g::Uno::Compiler::ExportTargetInterop
