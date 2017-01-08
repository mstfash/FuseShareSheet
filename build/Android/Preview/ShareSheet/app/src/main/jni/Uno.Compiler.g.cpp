// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Compiler.CallerFilePathAttribute.h>
#include <Uno.Compiler.CallerLineNumberAttribute.h>
#include <Uno.Compiler.CallerMemberNameAttribute.h>
#include <Uno.Compiler.CallerPackageNameAttribute.h>
#include <Uno.Compiler.HideFromCodeCompleterAttribute.h>
#include <Uno.Compiler.IgnoreMainClassAttribute.h>
#include <Uno.Compiler.MainClassAttribute.h>
#include <Uno.Compiler.UxGeneratedAttribute.h>

namespace g{
namespace Uno{
namespace Compiler{

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/compiler/$.uno
// ------------------------------------------------------------------------------------------------------

// public sealed class CallerFilePathAttribute :9
// {
static void CallerFilePathAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)CallerFilePathAttribute__New1_fn, 0, true, type, 0));
}

uType* CallerFilePathAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(CallerFilePathAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Compiler.CallerFilePathAttribute", options);
    type->fp_build_ = CallerFilePathAttribute_build;
    type->fp_ctor_ = (void*)CallerFilePathAttribute__New1_fn;
    return type;
}

// public generated CallerFilePathAttribute() :9
void CallerFilePathAttribute__ctor_1_fn(CallerFilePathAttribute* __this)
{
    __this->ctor_1();
}

// public generated CallerFilePathAttribute New() :9
void CallerFilePathAttribute__New1_fn(CallerFilePathAttribute** __retval)
{
    *__retval = CallerFilePathAttribute::New1();
}

// public generated CallerFilePathAttribute() [instance] :9
void CallerFilePathAttribute::ctor_1()
{
    ctor_();
}

// public generated CallerFilePathAttribute New() [static] :9
CallerFilePathAttribute* CallerFilePathAttribute::New1()
{
    CallerFilePathAttribute* obj1 = (CallerFilePathAttribute*)uNew(CallerFilePathAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/compiler/$.uno
// ------------------------------------------------------------------------------------------------------

// public sealed class CallerLineNumberAttribute :23
// {
static void CallerLineNumberAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)CallerLineNumberAttribute__New1_fn, 0, true, type, 0));
}

uType* CallerLineNumberAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(CallerLineNumberAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Compiler.CallerLineNumberAttribute", options);
    type->fp_build_ = CallerLineNumberAttribute_build;
    type->fp_ctor_ = (void*)CallerLineNumberAttribute__New1_fn;
    return type;
}

// public generated CallerLineNumberAttribute() :23
void CallerLineNumberAttribute__ctor_1_fn(CallerLineNumberAttribute* __this)
{
    __this->ctor_1();
}

// public generated CallerLineNumberAttribute New() :23
void CallerLineNumberAttribute__New1_fn(CallerLineNumberAttribute** __retval)
{
    *__retval = CallerLineNumberAttribute::New1();
}

// public generated CallerLineNumberAttribute() [instance] :23
void CallerLineNumberAttribute::ctor_1()
{
    ctor_();
}

// public generated CallerLineNumberAttribute New() [static] :23
CallerLineNumberAttribute* CallerLineNumberAttribute::New1()
{
    CallerLineNumberAttribute* obj1 = (CallerLineNumberAttribute*)uNew(CallerLineNumberAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/compiler/$.uno
// ------------------------------------------------------------------------------------------------------

// public sealed class CallerMemberNameAttribute :37
// {
static void CallerMemberNameAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)CallerMemberNameAttribute__New1_fn, 0, true, type, 0));
}

uType* CallerMemberNameAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(CallerMemberNameAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Compiler.CallerMemberNameAttribute", options);
    type->fp_build_ = CallerMemberNameAttribute_build;
    type->fp_ctor_ = (void*)CallerMemberNameAttribute__New1_fn;
    return type;
}

// public generated CallerMemberNameAttribute() :37
void CallerMemberNameAttribute__ctor_1_fn(CallerMemberNameAttribute* __this)
{
    __this->ctor_1();
}

// public generated CallerMemberNameAttribute New() :37
void CallerMemberNameAttribute__New1_fn(CallerMemberNameAttribute** __retval)
{
    *__retval = CallerMemberNameAttribute::New1();
}

// public generated CallerMemberNameAttribute() [instance] :37
void CallerMemberNameAttribute::ctor_1()
{
    ctor_();
}

// public generated CallerMemberNameAttribute New() [static] :37
CallerMemberNameAttribute* CallerMemberNameAttribute::New1()
{
    CallerMemberNameAttribute* obj1 = (CallerMemberNameAttribute*)uNew(CallerMemberNameAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/compiler/$.uno
// ------------------------------------------------------------------------------------------------------

// public sealed class CallerPackageNameAttribute :42
// {
static void CallerPackageNameAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)CallerPackageNameAttribute__New1_fn, 0, true, type, 0));
}

uType* CallerPackageNameAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(CallerPackageNameAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Compiler.CallerPackageNameAttribute", options);
    type->fp_build_ = CallerPackageNameAttribute_build;
    type->fp_ctor_ = (void*)CallerPackageNameAttribute__New1_fn;
    return type;
}

// public generated CallerPackageNameAttribute() :42
void CallerPackageNameAttribute__ctor_1_fn(CallerPackageNameAttribute* __this)
{
    __this->ctor_1();
}

// public generated CallerPackageNameAttribute New() :42
void CallerPackageNameAttribute__New1_fn(CallerPackageNameAttribute** __retval)
{
    *__retval = CallerPackageNameAttribute::New1();
}

// public generated CallerPackageNameAttribute() [instance] :42
void CallerPackageNameAttribute::ctor_1()
{
    ctor_();
}

// public generated CallerPackageNameAttribute New() [static] :42
CallerPackageNameAttribute* CallerPackageNameAttribute::New1()
{
    CallerPackageNameAttribute* obj1 = (CallerPackageNameAttribute*)uNew(CallerPackageNameAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/compiler/$.uno
// ------------------------------------------------------------------------------------------------------

// public sealed class HideFromCodeCompleterAttribute :69
// {
static void HideFromCodeCompleterAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)HideFromCodeCompleterAttribute__New1_fn, 0, true, type, 0));
}

uType* HideFromCodeCompleterAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(HideFromCodeCompleterAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Compiler.HideFromCodeCompleterAttribute", options);
    type->fp_build_ = HideFromCodeCompleterAttribute_build;
    type->fp_ctor_ = (void*)HideFromCodeCompleterAttribute__New1_fn;
    return type;
}

// public generated HideFromCodeCompleterAttribute() :69
void HideFromCodeCompleterAttribute__ctor_1_fn(HideFromCodeCompleterAttribute* __this)
{
    __this->ctor_1();
}

// public generated HideFromCodeCompleterAttribute New() :69
void HideFromCodeCompleterAttribute__New1_fn(HideFromCodeCompleterAttribute** __retval)
{
    *__retval = HideFromCodeCompleterAttribute::New1();
}

// public generated HideFromCodeCompleterAttribute() [instance] :69
void HideFromCodeCompleterAttribute::ctor_1()
{
    ctor_();
}

// public generated HideFromCodeCompleterAttribute New() [static] :69
HideFromCodeCompleterAttribute* HideFromCodeCompleterAttribute::New1()
{
    HideFromCodeCompleterAttribute* obj1 = (HideFromCodeCompleterAttribute*)uNew(HideFromCodeCompleterAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/compiler/$.uno
// ------------------------------------------------------------------------------------------------------

// public sealed class IgnoreMainClassAttribute :80
// {
static void IgnoreMainClassAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)IgnoreMainClassAttribute__New1_fn, 0, true, type, 0));
}

uType* IgnoreMainClassAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(IgnoreMainClassAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Compiler.IgnoreMainClassAttribute", options);
    type->fp_build_ = IgnoreMainClassAttribute_build;
    type->fp_ctor_ = (void*)IgnoreMainClassAttribute__New1_fn;
    return type;
}

// public generated IgnoreMainClassAttribute() :80
void IgnoreMainClassAttribute__ctor_1_fn(IgnoreMainClassAttribute* __this)
{
    __this->ctor_1();
}

// public generated IgnoreMainClassAttribute New() :80
void IgnoreMainClassAttribute__New1_fn(IgnoreMainClassAttribute** __retval)
{
    *__retval = IgnoreMainClassAttribute::New1();
}

// public generated IgnoreMainClassAttribute() [instance] :80
void IgnoreMainClassAttribute::ctor_1()
{
    ctor_();
}

// public generated IgnoreMainClassAttribute New() [static] :80
IgnoreMainClassAttribute* IgnoreMainClassAttribute::New1()
{
    IgnoreMainClassAttribute* obj1 = (IgnoreMainClassAttribute*)uNew(IgnoreMainClassAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/compiler/$.uno
// ------------------------------------------------------------------------------------------------------

// public sealed class MainClassAttribute :91
// {
static void MainClassAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainClassAttribute__New1_fn, 0, true, type, 0));
}

uType* MainClassAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(MainClassAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Compiler.MainClassAttribute", options);
    type->fp_build_ = MainClassAttribute_build;
    type->fp_ctor_ = (void*)MainClassAttribute__New1_fn;
    return type;
}

// public generated MainClassAttribute() :91
void MainClassAttribute__ctor_1_fn(MainClassAttribute* __this)
{
    __this->ctor_1();
}

// public generated MainClassAttribute New() :91
void MainClassAttribute__New1_fn(MainClassAttribute** __retval)
{
    *__retval = MainClassAttribute::New1();
}

// public generated MainClassAttribute() [instance] :91
void MainClassAttribute::ctor_1()
{
    ctor_();
}

// public generated MainClassAttribute New() [static] :91
MainClassAttribute* MainClassAttribute::New1()
{
    MainClassAttribute* obj1 = (MainClassAttribute*)uNew(MainClassAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/compiler/$.uno
// ------------------------------------------------------------------------------------------------------

// public sealed class UxGeneratedAttribute :102
// {
static void UxGeneratedAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)UxGeneratedAttribute__New1_fn, 0, true, type, 0));
}

uType* UxGeneratedAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(UxGeneratedAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Compiler.UxGeneratedAttribute", options);
    type->fp_build_ = UxGeneratedAttribute_build;
    type->fp_ctor_ = (void*)UxGeneratedAttribute__New1_fn;
    return type;
}

// public generated UxGeneratedAttribute() :102
void UxGeneratedAttribute__ctor_1_fn(UxGeneratedAttribute* __this)
{
    __this->ctor_1();
}

// public generated UxGeneratedAttribute New() :102
void UxGeneratedAttribute__New1_fn(UxGeneratedAttribute** __retval)
{
    *__retval = UxGeneratedAttribute::New1();
}

// public generated UxGeneratedAttribute() [instance] :102
void UxGeneratedAttribute::ctor_1()
{
    ctor_();
}

// public generated UxGeneratedAttribute New() [static] :102
UxGeneratedAttribute* UxGeneratedAttribute::New1()
{
    UxGeneratedAttribute* obj1 = (UxGeneratedAttribute*)uNew(UxGeneratedAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

}}} // ::g::Uno::Compiler
