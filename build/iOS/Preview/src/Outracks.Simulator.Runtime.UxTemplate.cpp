// This file was generated based on /Users/mostafa/Desktop/ShareSheet/build/iOS/Preview/preamble/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Outracks.Simulator.Runtime.UxTemplate.h>
#include <Uno.Bool.h>
#include <Uno.Func-1.h>
#include <Uno.Object.h>
#include <Uno.String.h>

namespace g{
namespace Outracks{
namespace Simulator{
namespace Runtime{

// public sealed class UxTemplate :10
// {
static void UxTemplate_build(uType* type)
{
    type->SetFields(2,
        ::g::Uno::Func_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::Outracks::Simulator::Runtime::UxTemplate, _create), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)UxTemplate__New2_fn, 0, true, type, 3, ::g::Uno::Func_typeof()->MakeType(uObject_typeof(), NULL), ::g::Uno::String_typeof(), ::g::Uno::Bool_typeof()));
}

::g::Uno::UX::Template_type* UxTemplate_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(UxTemplate);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("Outracks.Simulator.Runtime.UxTemplate", options);
    type->fp_build_ = UxTemplate_build;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))UxTemplate__New1_fn;
    return type;
}

// public UxTemplate(Uno.Func<object> create, string matchCase, bool isDefault) :13
void UxTemplate__ctor_1_fn(UxTemplate* __this, uDelegate* create, uString* matchCase, bool* isDefault)
{
    __this->ctor_1(create, matchCase, *isDefault);
}

// public override sealed object New() :20
void UxTemplate__New1_fn(UxTemplate* __this, uObject** __retval)
{
    uStackFrame __("Outracks.Simulator.Runtime.UxTemplate", "New()");
    return *__retval = uPtr(__this->_create)->Invoke(), void();
}

// public UxTemplate New(Uno.Func<object> create, string matchCase, bool isDefault) :13
void UxTemplate__New2_fn(uDelegate* create, uString* matchCase, bool* isDefault, UxTemplate** __retval)
{
    *__retval = UxTemplate::New2(create, matchCase, *isDefault);
}

// public UxTemplate(Uno.Func<object> create, string matchCase, bool isDefault) [instance] :13
void UxTemplate::ctor_1(uDelegate* create, uString* matchCase, bool isDefault)
{
    ctor_(matchCase, isDefault);
    _create = create;
}

// public UxTemplate New(Uno.Func<object> create, string matchCase, bool isDefault) [static] :13
UxTemplate* UxTemplate::New2(uDelegate* create, uString* matchCase, bool isDefault)
{
    UxTemplate* obj1 = (UxTemplate*)uNew(UxTemplate_typeof());
    obj1->ctor_1(create, matchCase, isDefault);
    return obj1;
}
// }

}}}} // ::g::Outracks::Simulator::Runtime
