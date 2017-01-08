// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Action.h>
#include <Uno.Bool.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
#include <Uno.String.h>
#include <Uno.Testing.NamedTestMethod.h>
#include <Uno.Testing.Registry.h>
#include <Uno.Testing.TestAttribute.h>
static uString* STRINGS[1];
static uType* TYPES[2];

namespace g{
namespace Uno{
namespace Testing{

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Testing/0.42.5/$.uno
// --------------------------------------------------------------------------------------

// public sealed class NamedTestMethod :899
// {
static void NamedTestMethod_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Uno::Testing::NamedTestMethod, Ignore), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::Testing::NamedTestMethod, IgnoreReason), 0,
        ::g::Uno::Action_typeof(), offsetof(::g::Uno::Testing::NamedTestMethod, Method), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Uno::Testing::NamedTestMethod, Name), 0);
    type->Reflection.SetFields(4,
        new uField("Ignore", 0),
        new uField("IgnoreReason", 1),
        new uField("Method", 2),
        new uField("Name", 3));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)NamedTestMethod__New1_fn, 0, true, type, 4, ::g::Uno::Action_typeof(), ::g::Uno::String_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::String_typeof()));
}

uType* NamedTestMethod_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(NamedTestMethod);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Testing.NamedTestMethod", options);
    type->fp_build_ = NamedTestMethod_build;
    return type;
}

// public NamedTestMethod(Uno.Action method, string name, bool ignore, string ignoreReason) :908
void NamedTestMethod__ctor__fn(NamedTestMethod* __this, uDelegate* method, uString* name, bool* ignore, uString* ignoreReason)
{
    __this->ctor_(method, name, *ignore, ignoreReason);
}

// public NamedTestMethod New(Uno.Action method, string name, bool ignore, string ignoreReason) :908
void NamedTestMethod__New1_fn(uDelegate* method, uString* name, bool* ignore, uString* ignoreReason, NamedTestMethod** __retval)
{
    *__retval = NamedTestMethod::New1(method, name, *ignore, ignoreReason);
}

// public NamedTestMethod(Uno.Action method, string name, bool ignore, string ignoreReason) [instance] :908
void NamedTestMethod::ctor_(uDelegate* method, uString* name, bool ignore, uString* ignoreReason)
{
    Method = method;
    Name = name;
    Ignore = ignore;
    IgnoreReason = ignoreReason;
}

// public NamedTestMethod New(Uno.Action method, string name, bool ignore, string ignoreReason) [static] :908
NamedTestMethod* NamedTestMethod::New1(uDelegate* method, uString* name, bool ignore, uString* ignoreReason)
{
    NamedTestMethod* obj1 = (NamedTestMethod*)uNew(NamedTestMethod_typeof());
    obj1->ctor_(method, name, ignore, ignoreReason);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Testing/0.42.5/$.uno
// --------------------------------------------------------------------------------------

// public sealed class Registry :926
// {
static void Registry_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Could not find test ");
    ::TYPES[0] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Testing::NamedTestMethod_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Testing::NamedTestMethod_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[0/*Uno.Collections.List<Uno.Testing.NamedTestMethod>*/], offsetof(::g::Uno::Testing::Registry, tests), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("Add", NULL, (void*)Registry__Add_fn, 0, false, uVoid_typeof(), 4, ::g::Uno::Action_typeof(), ::g::Uno::String_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::String_typeof()),
        new uFunction("get_Count", NULL, (void*)Registry__get_Count_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("FindTest", NULL, (void*)Registry__FindTest_fn, 0, false, ::g::Uno::Testing::NamedTestMethod_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_Item", NULL, (void*)Registry__get_Item_fn, 0, false, ::g::Uno::Testing::NamedTestMethod_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction(".ctor", NULL, (void*)Registry__New1_fn, 0, true, type, 0));
}

uType* Registry_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Registry);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Testing.Registry", options);
    type->fp_build_ = Registry_build;
    type->fp_ctor_ = (void*)Registry__New1_fn;
    return type;
}

// public generated Registry() :926
void Registry__ctor__fn(Registry* __this)
{
    __this->ctor_();
}

// public void Add(Uno.Action method, string name, bool ignore, string ignoreReason) :930
void Registry__Add_fn(Registry* __this, uDelegate* method, uString* name, bool* ignore, uString* ignoreReason)
{
    __this->Add(method, name, *ignore, ignoreReason);
}

// public int get_Count() :935
void Registry__get_Count_fn(Registry* __this, int* __retval)
{
    *__retval = __this->Count();
}

// public Uno.Testing.NamedTestMethod FindTest(string testName) :938
void Registry__FindTest_fn(Registry* __this, uString* testName, ::g::Uno::Testing::NamedTestMethod** __retval)
{
    *__retval = __this->FindTest(testName);
}

// public Uno.Testing.NamedTestMethod get_Item(int index) :936
void Registry__get_Item_fn(Registry* __this, int* index, ::g::Uno::Testing::NamedTestMethod** __retval)
{
    *__retval = __this->Item(*index);
}

// public generated Registry New() :926
void Registry__New1_fn(Registry** __retval)
{
    *__retval = Registry::New1();
}

// public generated Registry() [instance] :926
void Registry::ctor_()
{
    tests = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[0/*Uno.Collections.List<Uno.Testing.NamedTestMethod>*/]));
}

// public void Add(Uno.Action method, string name, bool ignore, string ignoreReason) [instance] :930
void Registry::Add(uDelegate* method, uString* name, bool ignore, uString* ignoreReason)
{
    uStackFrame __("Uno.Testing.Registry", "Add(Uno.Action,string,bool,string)");
    ::g::Uno::Collections::List__Add_fn(uPtr(tests), ::g::Uno::Testing::NamedTestMethod::New1(method, name, ignore, ignoreReason));
}

// public int get_Count() [instance] :935
int Registry::Count()
{
    uStackFrame __("Uno.Testing.Registry", "get_Count()");
    return uPtr(tests)->Count();
}

// public Uno.Testing.NamedTestMethod FindTest(string testName) [instance] :938
::g::Uno::Testing::NamedTestMethod* Registry::FindTest(uString* testName)
{
    uStackFrame __("Uno.Testing.Registry", "FindTest(string)");
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Testing::NamedTestMethod*> > ret3;

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Testing::NamedTestMethod*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(tests), &ret3), ret3); enum1.MoveNext(::TYPES[1/*Uno.Collections.List<Uno.Testing.NamedTestMethod>.Enumerator*/]); )
    {
        ::g::Uno::Testing::NamedTestMethod* t = enum1.Current(::TYPES[1/*Uno.Collections.List<Uno.Testing.NamedTestMethod>.Enumerator*/]);

        if (::g::Uno::String::op_Equality(uPtr(t)->Name, testName))
            return t;
    }

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::STRINGS[0/*"Could not f...*/], testName)));
}

// public Uno.Testing.NamedTestMethod get_Item(int index) [instance] :936
::g::Uno::Testing::NamedTestMethod* Registry::Item(int index)
{
    uStackFrame __("Uno.Testing.Registry", "get_Item(int)");
    ::g::Uno::Testing::NamedTestMethod* ret4;
    return (::g::Uno::Collections::List__get_Item_fn(uPtr(tests), uCRef<int>(index), &ret4), ret4);
}

// public generated Registry New() [static] :926
Registry* Registry::New1()
{
    Registry* obj2 = (Registry*)uNew(Registry_typeof());
    obj2->ctor_();
    return obj2;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Testing/0.42.5/$.uno
// --------------------------------------------------------------------------------------

// public sealed class TestAttribute :1075
// {
static void TestAttribute_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)TestAttribute__New1_fn, 0, true, type, 0));
}

uType* TestAttribute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Attribute_typeof();
    options.ObjectSize = sizeof(TestAttribute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Testing.TestAttribute", options);
    type->fp_build_ = TestAttribute_build;
    type->fp_ctor_ = (void*)TestAttribute__New1_fn;
    return type;
}

// public generated TestAttribute() :1075
void TestAttribute__ctor_1_fn(TestAttribute* __this)
{
    __this->ctor_1();
}

// public generated TestAttribute New() :1075
void TestAttribute__New1_fn(TestAttribute** __retval)
{
    *__retval = TestAttribute::New1();
}

// public generated TestAttribute() [instance] :1075
void TestAttribute::ctor_1()
{
    ctor_();
}

// public generated TestAttribute New() [static] :1075
TestAttribute* TestAttribute::New1()
{
    TestAttribute* obj1 = (TestAttribute*)uNew(TestAttribute_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

}}} // ::g::Uno::Testing
