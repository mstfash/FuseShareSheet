// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.HashableWeakReference.h>
#include <_root.WeakDictionary-2.h>
#include <Outracks.Simulator.Bytecode.AddEventHandler.h>
#include <Outracks.Simulator.Bytecode.BindVariable.h>
#include <Outracks.Simulator.Bytecode.BlobLiteral.h>
#include <Outracks.Simulator.Bytecode.BooleanLiteral.h>
#include <Outracks.Simulator.Bytecode.CallDynamicMethod.h>
#include <Outracks.Simulator.Bytecode.CallLambda.h>
#include <Outracks.Simulator.Bytecode.CallStaticMethod.h>
#include <Outracks.Simulator.Bytecode.EnumLiteral.h>
#include <Outracks.Simulator.Bytecode.Expression.h>
#include <Outracks.Simulator.Bytecode.Instantiate.h>
#include <Outracks.Simulator.Bytecode.IsType.h>
#include <Outracks.Simulator.Bytecode.Lambda.h>
#include <Outracks.Simulator.Bytecode.Literal.h>
#include <Outracks.Simulator.Bytecode.LogicalOr.h>
#include <Outracks.Simulator.Bytecode.MethodGroup.h>
#include <Outracks.Simulator.Bytecode.NumberLiteral.h>
#include <Outracks.Simulator.Bytecode.NumberType.h>
#include <Outracks.Simulator.Bytecode.Optional.h>
#include <Outracks.Simulator.Bytecode.Optional-1.h>
#include <Outracks.Simulator.Bytecode.Parameter.h>
#include <Outracks.Simulator.Bytecode.ReadProperty.h>
#include <Outracks.Simulator.Bytecode.ReadStaticField.h>
#include <Outracks.Simulator.Bytecode.ReadVariable.h>
#include <Outracks.Simulator.Bytecode.RemoveEventHandler.h>
#include <Outracks.Simulator.Bytecode.Return.h>
#include <Outracks.Simulator.Bytecode.Signature.h>
#include <Outracks.Simulator.Bytecode.Statement.h>
#include <Outracks.Simulator.Bytecode.StaticMemberName.h>
#include <Outracks.Simulator.Bytecode.StringLiteral.h>
#include <Outracks.Simulator.Bytecode.TypeMemberName.h>
#include <Outracks.Simulator.Bytecode.TypeName.h>
#include <Outracks.Simulator.Bytecode.Variable.h>
#include <Outracks.Simulator.Bytecode.WriteProperty.h>
#include <Outracks.Simulator.Context.h>
#include <Outracks.Simulator.ImmutableList-1.h>
#include <Outracks.Simulator.Runtime.Environment.h>
#include <Outracks.Simulator.Runtime.IReflection.h>
#include <Outracks.Simulator.Runtime.LambdaClosure.h>
#include <Outracks.Simulator.Runtime.LazyProperty-1.h>
#include <Outracks.Simulator.Runtime.LazyPropertyStorage-1.h>
#include <Outracks.Simulator.Runtime.MemberNotFound.h>
#include <Outracks.Simulator.Runtime.ObjectPropertyRegistry.h>
#include <Outracks.Simulator.Runtime.ObjectTagRegistry.h>
#include <Outracks.Simulator.Runtime.ScopeClosure.h>
#include <Outracks.Simulator.Runtime.Selection.h>
#include <Outracks.Simulator.Runtime.TypeNotFound.h>
#include <Outracks.Simulator.Runtime.UnambiguousMethodNotFound.h>
#include <Outracks.Simulator.Runtime.VariableNotBound.h>
#include <Outracks.Simulator.Runtime.VirtualMachine.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Action-2.h>
#include <Uno.Action-3.h>
#include <Uno.ArgumentException.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Collections.List-1.Enumerator.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Func-1.h>
#include <Uno.Func-2.h>
#include <Uno.Func-3.h>
#include <Uno.Func-4.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.SByte.h>
#include <Uno.Short.h>
#include <Uno.String.h>
#include <Uno.UInt.h>
#include <Uno.UShort.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.ValueChangedHandler-1.h>
#include <Uno.WeakReference-1.h>
static uString* STRINGS[10];
static uType* TYPES[58];

namespace g{
namespace Outracks{
namespace Simulator{
namespace Runtime{

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/runtime/$.uno
// -------------------------------------------------------------------------------

// public sealed class Environment :11
// {
static void Environment_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Variable_typeof(), uObject_typeof(), NULL);
    ::TYPES[1] = ::g::Outracks::Simulator::Bytecode::Optional1_typeof()->MakeType(type, NULL);
    type->SetFields(0,
        ::TYPES[1/*Outracks.Simulator.Bytecode.Optional<Outracks.Simulator.Runtime.Environment>*/], (uintptr_t)0, uFieldFlagsConstrained,
        ::TYPES[0/*Uno.Collections.Dictionary<Outracks.Simulator.Bytecode.Variable, object>*/], offsetof(::g::Outracks::Simulator::Runtime::Environment, _variableBindings), 0);
    type->Reflection.SetFunctions(4,
        new uFunction("Bind", NULL, (void*)Environment__Bind_fn, 0, false, uVoid_typeof(), 2, ::g::Outracks::Simulator::Bytecode::Variable_typeof(), uObject_typeof()),
        new uFunction("Bind", NULL, (void*)Environment__Bind1_fn, 0, false, uVoid_typeof(), 2, ::g::Outracks::Simulator::ImmutableList_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Parameter_typeof(), NULL), uObject_typeof()->Array()),
        new uFunction("GetValue", NULL, (void*)Environment__GetValue_fn, 0, false, uObject_typeof(), 1, ::g::Outracks::Simulator::Bytecode::Variable_typeof()),
        new uFunction(".ctor", NULL, (void*)Environment__New1_fn, 0, true, type, 1, ::TYPES[1/*Outracks.Simulator.Bytecode.Optional<Outracks.Simulator.Runtime.Environment>*/]));
}

uType* Environment_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Environment);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Runtime.Environment", options);
    type->fp_build_ = Environment_build;
    return type;
}

// public Environment(Outracks.Simulator.Bytecode.Optional<Outracks.Simulator.Runtime.Environment> parent) :17
void Environment__ctor__fn(Environment* __this, ::g::Outracks::Simulator::Bytecode::Optional1<uStrong<Environment*> >* parent)
{
    __this->ctor_(*parent);
}

// public void Bind(Outracks.Simulator.Bytecode.Variable variable, object value) :28
void Environment__Bind_fn(Environment* __this, ::g::Outracks::Simulator::Bytecode::Variable* variable, uObject* value)
{
    __this->Bind(variable, value);
}

// public void Bind(Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.Parameter> parameters, object[] arguments) :22
void Environment__Bind1_fn(Environment* __this, ::g::Outracks::Simulator::ImmutableList* parameters, uArray* arguments)
{
    __this->Bind1(parameters, arguments);
}

// public object GetValue(Outracks.Simulator.Bytecode.Variable variable) :33
void Environment__GetValue_fn(Environment* __this, ::g::Outracks::Simulator::Bytecode::Variable* variable, uObject** __retval)
{
    *__retval = __this->GetValue(variable);
}

// public Environment New(Outracks.Simulator.Bytecode.Optional<Outracks.Simulator.Runtime.Environment> parent) :17
void Environment__New1_fn(::g::Outracks::Simulator::Bytecode::Optional1<uStrong<Environment*> >* parent, Environment** __retval)
{
    *__retval = Environment::New1(*parent);
}

// public Environment(Outracks.Simulator.Bytecode.Optional<Outracks.Simulator.Runtime.Environment> parent) [instance] :17
void Environment::ctor_(::g::Outracks::Simulator::Bytecode::Optional1<uStrong<Environment*> > parent)
{
    _variableBindings = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[0/*Uno.Collections.Dictionary<Outracks.Simulator.Bytecode.Variable, object>*/]));
    _parent().Value< ::g::Outracks::Simulator::Bytecode::Optional1<uStrong<Environment*> > >() = parent;
}

// public void Bind(Outracks.Simulator.Bytecode.Variable variable, object value) [instance] :28
void Environment::Bind(::g::Outracks::Simulator::Bytecode::Variable* variable, uObject* value)
{
    uStackFrame __("Outracks.Simulator.Runtime.Environment", "Bind(Outracks.Simulator.Bytecode.Variable,object)");
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(_variableBindings), variable, value);
}

// public void Bind(Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.Parameter> parameters, object[] arguments) [instance] :22
void Environment::Bind1(::g::Outracks::Simulator::ImmutableList* parameters, uArray* arguments)
{
    uStackFrame __("Outracks.Simulator.Runtime.Environment", "Bind(Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.Parameter>,object[])");
    ::g::Outracks::Simulator::Bytecode::Parameter* ret4;

    for (int i = 0; i < uPtr(parameters)->Count(); i++)
        Bind(uPtr((::g::Outracks::Simulator::ImmutableList__Get_fn(uPtr(parameters), uCRef<int>(i), &ret4), ret4))->Name, uPtr(arguments)->Strong<uObject*>(i));
}

// public object GetValue(Outracks.Simulator.Bytecode.Variable variable) [instance] :33
uObject* Environment::GetValue(::g::Outracks::Simulator::Bytecode::Variable* variable)
{
    uStackFrame __("Outracks.Simulator.Runtime.Environment", "GetValue(Outracks.Simulator.Bytecode.Variable)");
    ::g::Outracks::Simulator::Bytecode::Optional1<uStrong<Environment*> > ind1;
    ::g::Outracks::Simulator::Bytecode::Optional1<uStrong<Environment*> > ind2;
    bool ret5;
    uObject* value;

    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(_variableBindings), variable, (void**)(&value), &ret5), ret5))
        return value;

    if ((ind1 = _parent().Value< ::g::Outracks::Simulator::Bytecode::Optional1<uStrong<Environment*> > >(), (&ind1))->HasValue(::TYPES[1/*Outracks.Simulator.Bytecode.Optional<Outracks.Simulator.Runtime.Environment>*/]))
        return uPtr((ind2 = _parent().Value< ::g::Outracks::Simulator::Bytecode::Optional1<uStrong<Environment*> > >(), (&ind2))->Value(::TYPES[1/*Outracks.Simulator.Bytecode.Optional<Outracks.Simulator.Runtime.Environment>*/]))->GetValue(variable);

    U_THROW(::g::Outracks::Simulator::Runtime::VariableNotBound::New4(variable));
}

// public Environment New(Outracks.Simulator.Bytecode.Optional<Outracks.Simulator.Runtime.Environment> parent) [static] :17
Environment* Environment::New1(::g::Outracks::Simulator::Bytecode::Optional1<uStrong<Environment*> > parent)
{
    Environment* obj3 = (Environment*)uNew(Environment_typeof());
    obj3->ctor_(parent);
    return obj3;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Reflection.Uno/0.0.0/$.uno
// ---------------------------------------------------------------------------

// public abstract interface IReflection :30
// {
uInterfaceType* IReflection_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Outracks.Simulator.Runtime.IReflection", 0, 0);
    type->Reflection.SetFunctions(12,
        new uFunction("AddEventHandler", NULL, NULL, offsetof(IReflection, fp_AddEventHandler), false, uVoid_typeof(), 3, uObject_typeof(), ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof(), uObject_typeof()),
        new uFunction("CallDynamic", NULL, NULL, offsetof(IReflection, fp_CallDynamic), false, uObject_typeof(), 3, uObject_typeof(), ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof(), uObject_typeof()->Array()),
        new uFunction("CallStatic", NULL, NULL, offsetof(IReflection, fp_CallStatic), false, uObject_typeof(), 3, ::g::Outracks::Simulator::Bytecode::TypeName_typeof(), ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof(), uObject_typeof()->Array()),
        new uFunction("CreateDelegate", NULL, NULL, offsetof(IReflection, fp_CreateDelegate), false, uObject_typeof(), 4, ::g::Outracks::Simulator::Bytecode::TypeName_typeof(), uObject_typeof(), ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof(), ::g::Outracks::Simulator::Bytecode::Optional1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Signature_typeof(), NULL)),
        new uFunction("GetEnumValue", NULL, NULL, offsetof(IReflection, fp_GetEnumValue), false, uObject_typeof(), 2, ::g::Outracks::Simulator::Bytecode::TypeName_typeof(), ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof()),
        new uFunction("GetPropertyValue", NULL, NULL, offsetof(IReflection, fp_GetPropertyValue), false, uObject_typeof(), 2, uObject_typeof(), ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof()),
        new uFunction("GetStaticPropertyOrFieldValue", NULL, NULL, offsetof(IReflection, fp_GetStaticPropertyOrFieldValue), false, uObject_typeof(), 2, ::g::Outracks::Simulator::Bytecode::TypeName_typeof(), ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof()),
        new uFunction("Instantiate", NULL, NULL, offsetof(IReflection, fp_Instantiate), false, uObject_typeof(), 2, ::g::Outracks::Simulator::Bytecode::TypeName_typeof(), uObject_typeof()->Array()),
        new uFunction("IsSubtype", NULL, NULL, offsetof(IReflection, fp_IsSubtype), false, ::g::Uno::Bool_typeof(), 2, uObject_typeof(), ::g::Outracks::Simulator::Bytecode::TypeName_typeof()),
        new uFunction("IsType", NULL, NULL, offsetof(IReflection, fp_IsType), false, ::g::Uno::Bool_typeof(), 2, uObject_typeof(), ::g::Outracks::Simulator::Bytecode::TypeName_typeof()),
        new uFunction("RemoveEventHandler", NULL, NULL, offsetof(IReflection, fp_RemoveEventHandler), false, uVoid_typeof(), 3, uObject_typeof(), ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof(), uObject_typeof()),
        new uFunction("SetPropertyValue", NULL, NULL, offsetof(IReflection, fp_SetPropertyValue), false, uVoid_typeof(), 3, uObject_typeof(), ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof(), uObject_typeof()));
    return type;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/runtime/$.uno
// -------------------------------------------------------------------------------

// internal sealed class LambdaClosure :303
// {
static void LambdaClosure_build(uType* type)
{
    ::TYPES[2] = uObject_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Func2_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Lambda_typeof(), ::TYPES[2/*object[]*/], uObject_typeof(), NULL), offsetof(::g::Outracks::Simulator::Runtime::LambdaClosure, _execute), 0,
        ::g::Outracks::Simulator::Bytecode::Lambda_typeof(), offsetof(::g::Outracks::Simulator::Runtime::LambdaClosure, _lambda), 0);
}

uType* LambdaClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(LambdaClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Runtime.LambdaClosure", options);
    type->fp_build_ = LambdaClosure_build;
    return type;
}

// public LambdaClosure(Outracks.Simulator.Bytecode.Lambda lambda, Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object> execute) :308
void LambdaClosure__ctor__fn(LambdaClosure* __this, ::g::Outracks::Simulator::Bytecode::Lambda* lambda, uDelegate* execute)
{
    __this->ctor_(lambda, execute);
}

// public void Action() :314
void LambdaClosure__Action_fn(LambdaClosure* __this)
{
    __this->Action();
}

// public void Action(object a1) :319
void LambdaClosure__Action1_fn(LambdaClosure* __this, uObject* a1)
{
    __this->Action1(a1);
}

// public void Action(object a1, object a2) :324
void LambdaClosure__Action2_fn(LambdaClosure* __this, uObject* a1, uObject* a2)
{
    __this->Action2(a1, a2);
}

// public void Action(object a1, object a2, object a3) :329
void LambdaClosure__Action3_fn(LambdaClosure* __this, uObject* a1, uObject* a2, uObject* a3)
{
    __this->Action3(a1, a2, a3);
}

// public object Func() :334
void LambdaClosure__Func_fn(LambdaClosure* __this, uObject** __retval)
{
    *__retval = __this->Func();
}

// public object Func(object a1) :339
void LambdaClosure__Func1_fn(LambdaClosure* __this, uObject* a1, uObject** __retval)
{
    *__retval = __this->Func1(a1);
}

// public object Func(object a1, object a2) :344
void LambdaClosure__Func2_fn(LambdaClosure* __this, uObject* a1, uObject* a2, uObject** __retval)
{
    *__retval = __this->Func2(a1, a2);
}

// public object Func(object a1, object a2, object a3) :349
void LambdaClosure__Func3_fn(LambdaClosure* __this, uObject* a1, uObject* a2, uObject* a3, uObject** __retval)
{
    *__retval = __this->Func3(a1, a2, a3);
}

// public LambdaClosure New(Outracks.Simulator.Bytecode.Lambda lambda, Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object> execute) :308
void LambdaClosure__New1_fn(::g::Outracks::Simulator::Bytecode::Lambda* lambda, uDelegate* execute, LambdaClosure** __retval)
{
    *__retval = LambdaClosure::New1(lambda, execute);
}

// public LambdaClosure(Outracks.Simulator.Bytecode.Lambda lambda, Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object> execute) [instance] :308
void LambdaClosure::ctor_(::g::Outracks::Simulator::Bytecode::Lambda* lambda, uDelegate* execute)
{
    _lambda = lambda;
    _execute = execute;
}

// public void Action() [instance] :314
void LambdaClosure::Action()
{
    uStackFrame __("Outracks.Simulator.Runtime.LambdaClosure", "Action()");
    Func();
}

// public void Action(object a1) [instance] :319
void LambdaClosure::Action1(uObject* a1)
{
    uStackFrame __("Outracks.Simulator.Runtime.LambdaClosure", "Action(object)");
    Func1(a1);
}

// public void Action(object a1, object a2) [instance] :324
void LambdaClosure::Action2(uObject* a1, uObject* a2)
{
    uStackFrame __("Outracks.Simulator.Runtime.LambdaClosure", "Action(object,object)");
    Func2(a1, a2);
}

// public void Action(object a1, object a2, object a3) [instance] :329
void LambdaClosure::Action3(uObject* a1, uObject* a2, uObject* a3)
{
    uStackFrame __("Outracks.Simulator.Runtime.LambdaClosure", "Action(object,object,object)");
    Func3(a1, a2, a3);
}

// public object Func() [instance] :334
uObject* LambdaClosure::Func()
{
    uStackFrame __("Outracks.Simulator.Runtime.LambdaClosure", "Func()");
    return uPtr(_execute)->Invoke(2, (::g::Outracks::Simulator::Bytecode::Lambda*)_lambda, uArray::New(::TYPES[2/*object[]*/], 0));
}

// public object Func(object a1) [instance] :339
uObject* LambdaClosure::Func1(uObject* a1)
{
    uStackFrame __("Outracks.Simulator.Runtime.LambdaClosure", "Func(object)");
    return uPtr(_execute)->Invoke(2, (::g::Outracks::Simulator::Bytecode::Lambda*)_lambda, uArray::Init<uObject*>(::TYPES[2/*object[]*/], 1, a1));
}

// public object Func(object a1, object a2) [instance] :344
uObject* LambdaClosure::Func2(uObject* a1, uObject* a2)
{
    uStackFrame __("Outracks.Simulator.Runtime.LambdaClosure", "Func(object,object)");
    return uPtr(_execute)->Invoke(2, (::g::Outracks::Simulator::Bytecode::Lambda*)_lambda, uArray::Init<uObject*>(::TYPES[2/*object[]*/], 2, a1, a2));
}

// public object Func(object a1, object a2, object a3) [instance] :349
uObject* LambdaClosure::Func3(uObject* a1, uObject* a2, uObject* a3)
{
    uStackFrame __("Outracks.Simulator.Runtime.LambdaClosure", "Func(object,object,object)");
    return uPtr(_execute)->Invoke(2, (::g::Outracks::Simulator::Bytecode::Lambda*)_lambda, uArray::Init<uObject*>(::TYPES[2/*object[]*/], 3, a1, a2, a3));
}

// public LambdaClosure New(Outracks.Simulator.Bytecode.Lambda lambda, Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object> execute) [static] :308
LambdaClosure* LambdaClosure::New1(::g::Outracks::Simulator::Bytecode::Lambda* lambda, uDelegate* execute)
{
    LambdaClosure* obj1 = (LambdaClosure*)uNew(LambdaClosure_typeof());
    obj1->ctor_(lambda, execute);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/runtime/$.uno
// -------------------------------------------------------------------------------

// public sealed class LazyProperty<T> :395
// {
static void LazyProperty_build(uType* type)
{
    ::TYPES[3] = ::g::Outracks::Simulator::Runtime::LazyPropertyStorage_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(type->T(0), NULL));
    type->SetPrecalc(
        type->T(0),
        ::g::Outracks::Simulator::Runtime::LazyPropertyStorage_typeof()->MakeType(type->T(0), NULL));
    type->SetFields(1,
        ::TYPES[3/*Outracks.Simulator.Runtime.LazyPropertyStorage`1*/]->MakeType(type->T(0), NULL), offsetof(::g::Outracks::Simulator::Runtime::LazyProperty, _storage), 0,
        ::g::Uno::Func_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::Outracks::Simulator::Runtime::LazyProperty, _storageFactory), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", type, (void*)LazyProperty__New1_fn, 0, true, type, 2, ::g::Uno::Func_typeof()->MakeType(uObject_typeof(), NULL), ::g::Uno::String_typeof()));
}

::g::Uno::UX::Property1_type* LazyProperty_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 3;
    options.GenericCount = 1;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(LazyProperty);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("Outracks.Simulator.Runtime.LazyProperty`1", options);
    type->fp_build_ = LazyProperty_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))LazyProperty__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))LazyProperty__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))LazyProperty__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))LazyProperty__get_SupportsOriginSetter_fn;
    return type;
}

// public LazyProperty(Uno.Func<object> storageFactory, string name) :410
void LazyProperty__ctor_2_fn(LazyProperty* __this, uDelegate* storageFactory, uString* name)
{
    __this->ctor_2(storageFactory, name);
}

// public override sealed T Get() :422
void LazyProperty__Get_fn(LazyProperty* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(0/*T*/),
    };
    uStackFrame __("Outracks.Simulator.Runtime.LazyProperty`1", "Get()");
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    return __retval.Store((::g::Outracks::Simulator::Runtime::LazyPropertyStorage__OnGet_fn(uPtr(__this->Storage()), &ret3), ret3)), void();
}

// public LazyProperty New(Uno.Func<object> storageFactory, string name) :410
void LazyProperty__New1_fn(uType* __type, uDelegate* storageFactory, uString* name, LazyProperty** __retval)
{
    *__retval = LazyProperty::New1(__type, storageFactory, name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :407
void LazyProperty__get_Object_fn(LazyProperty* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    uStackFrame __("Outracks.Simulator.Runtime.LazyProperty`1", "get_Object()");
    return *__retval = uPtr(__this->Storage())->Object(), void();
}

// public override sealed void Set(T value, Uno.UX.IPropertyListener origin) :416
void LazyProperty__Set_fn(LazyProperty* __this, void* value, uObject* origin)
{
    uStackFrame __("Outracks.Simulator.Runtime.LazyProperty`1", "Set(T,Uno.UX.IPropertyListener)");
    ::g::Outracks::Simulator::Runtime::LazyPropertyStorage__OnSet_fn(uPtr(__this->Storage()), value, origin);
    ::g::Uno::UX::PropertyObject::EmulatePropertyChanged(__this->Object(), __this->Name(), origin);
}

// private Outracks.Simulator.Runtime.LazyPropertyStorage<T> get_Storage() :402
void LazyProperty__get_Storage_fn(LazyProperty* __this, ::g::Outracks::Simulator::Runtime::LazyPropertyStorage** __retval)
{
    *__retval = __this->Storage();
}

// public override sealed bool get_SupportsOriginSetter() :427
void LazyProperty__get_SupportsOriginSetter_fn(LazyProperty* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public LazyProperty(Uno.Func<object> storageFactory, string name) [instance] :410
void LazyProperty::ctor_2(uDelegate* storageFactory, uString* name)
{
    uStackFrame __("Outracks.Simulator.Runtime.LazyProperty`1", ".ctor(Uno.Func<object>,string)");
    ctor_1(::g::Uno::UX::Selector__New1(name));
    _storageFactory = storageFactory;
}

// private Outracks.Simulator.Runtime.LazyPropertyStorage<T> get_Storage() [instance] :402
::g::Outracks::Simulator::Runtime::LazyPropertyStorage* LazyProperty::Storage()
{
    uType* __types[] = {
        __type->Precalced(1/*Outracks.Simulator.Runtime.LazyPropertyStorage<T>*/),
    };
    uStackFrame __("Outracks.Simulator.Runtime.LazyProperty`1", "get_Storage()");
    ::g::Outracks::Simulator::Runtime::LazyPropertyStorage* ind1 = _storage;
    return (ind1 != NULL) ? ind1 : (::g::Outracks::Simulator::Runtime::LazyPropertyStorage*)(_storage = uCast< ::g::Outracks::Simulator::Runtime::LazyPropertyStorage*>(uPtr(_storageFactory)->Invoke(), __types[0]));
}

// public LazyProperty New(Uno.Func<object> storageFactory, string name) [static] :410
LazyProperty* LazyProperty::New1(uType* __type, uDelegate* storageFactory, uString* name)
{
    LazyProperty* obj2 = (LazyProperty*)uNew(__type);
    obj2->ctor_2(storageFactory, name);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/runtime/$.uno
// -------------------------------------------------------------------------------

// public sealed class LazyPropertyStorage<T> :430
// {
static void LazyPropertyStorage_build(uType* type)
{
    ::TYPES[4] = ::g::Uno::Collections::List_typeof();
    ::TYPES[5] = ::g::Uno::WeakReference_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::UX::PropertyObject_typeof();
    type->SetPrecalc(
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(type->T(0), NULL), NULL));
    type->SetFields(0,
        ::TYPES[4/*Uno.Collections.List`1*/]->MakeType(::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(type->T(0), NULL), NULL), offsetof(::g::Outracks::Simulator::Runtime::LazyPropertyStorage, _listeners), 0,
        ::TYPES[5/*Uno.WeakReference<object>*/], offsetof(::g::Outracks::Simulator::Runtime::LazyPropertyStorage, _owner), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
    type->Reflection.SetFunctions(5,
        new uFunction(".ctor", type, (void*)LazyPropertyStorage__New1_fn, 0, true, type, 1, uObject_typeof()),
        new uFunction("get_Object", NULL, (void*)LazyPropertyStorage__get_Object_fn, 0, false, ::TYPES[6/*Uno.UX.PropertyObject*/], 0),
        new uFunction("OnGet", NULL, (void*)LazyPropertyStorage__OnGet_fn, 0, false, type->T(0), 0),
        new uFunction("OnSet", NULL, (void*)LazyPropertyStorage__OnSet_fn, 0, false, uVoid_typeof(), 2, type->T(0), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("get_Owner", NULL, (void*)LazyPropertyStorage__get_Owner_fn, 0, false, uObject_typeof(), 0));
}

uType* LazyPropertyStorage_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.GenericCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(LazyPropertyStorage);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Runtime.LazyPropertyStorage`1", options);
    type->fp_build_ = LazyPropertyStorage_build;
    return type;
}

// public LazyPropertyStorage(object owner) :442
void LazyPropertyStorage__ctor__fn(LazyPropertyStorage* __this, uObject* owner)
{
    __this->ctor_(owner);
}

// public LazyPropertyStorage New(object owner) :442
void LazyPropertyStorage__New1_fn(uType* __type, uObject* owner, LazyPropertyStorage** __retval)
{
    *__retval = LazyPropertyStorage::New1(__type, owner);
}

// public Uno.UX.PropertyObject get_Object() :439
void LazyPropertyStorage__get_Object_fn(LazyPropertyStorage* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    *__retval = __this->Object();
}

// public T OnGet() :447
void LazyPropertyStorage__OnGet_fn(LazyPropertyStorage* __this, uTRef __retval)
{
    return __retval.Store(__this->_value()), void();
}

// public void OnSet(T value, Uno.UX.IPropertyListener origin) :452
void LazyPropertyStorage__OnSet_fn(LazyPropertyStorage* __this, void* value, uObject* origin)
{
    __this->_value() = value;
}

// public object get_Owner() :459
void LazyPropertyStorage__get_Owner_fn(LazyPropertyStorage* __this, uObject** __retval)
{
    *__retval = __this->Owner();
}

// public LazyPropertyStorage(object owner) [instance] :442
void LazyPropertyStorage::ctor_(uObject* owner)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.List<Uno.UX.ValueChangedHandler<T>>*/),
    };
    _listeners = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(__types[0]));
    _owner = ((::g::Uno::WeakReference*)::g::Uno::WeakReference::New1(::TYPES[5/*Uno.WeakReference<object>*/], owner));
}

// public Uno.UX.PropertyObject get_Object() [instance] :439
::g::Uno::UX::PropertyObject* LazyPropertyStorage::Object()
{
    uStackFrame __("Outracks.Simulator.Runtime.LazyPropertyStorage`1", "get_Object()");
    return uCast< ::g::Uno::UX::PropertyObject*>(Owner(), ::TYPES[6/*Uno.UX.PropertyObject*/]);
}

// public object get_Owner() [instance] :459
uObject* LazyPropertyStorage::Owner()
{
    uStackFrame __("Outracks.Simulator.Runtime.LazyPropertyStorage`1", "get_Owner()");
    uObject* obj;

    if (uPtr(_owner)->TryGetTarget((uObject**)(&obj)))
        return obj;

    return NULL;
}

// public LazyPropertyStorage New(object owner) [static] :442
LazyPropertyStorage* LazyPropertyStorage::New1(uType* __type, uObject* owner)
{
    LazyPropertyStorage* obj1 = (LazyPropertyStorage*)uNew(__type);
    obj1->ctor_(owner);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Reflection.Uno/0.0.0/$.uno
// ---------------------------------------------------------------------------

// public sealed class MemberNotFound :15
// {
static void MemberNotFound_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Member not found: ");
    ::STRINGS[1] = uString::Const(".");
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MemberNotFound__New4_fn, 0, true, type, 2, ::g::Outracks::Simulator::Bytecode::TypeName_typeof(), ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof()));
}

::g::Uno::Exception_type* MemberNotFound_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(MemberNotFound);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Outracks.Simulator.Runtime.MemberNotFound", options);
    type->fp_build_ = MemberNotFound_build;
    return type;
}

// public MemberNotFound(Outracks.Simulator.Bytecode.TypeName typeName, Outracks.Simulator.Bytecode.TypeMemberName memberName) :17
void MemberNotFound__ctor_3_fn(MemberNotFound* __this, ::g::Outracks::Simulator::Bytecode::TypeName* typeName, ::g::Outracks::Simulator::Bytecode::TypeMemberName* memberName)
{
    __this->ctor_3(typeName, memberName);
}

// public MemberNotFound New(Outracks.Simulator.Bytecode.TypeName typeName, Outracks.Simulator.Bytecode.TypeMemberName memberName) :17
void MemberNotFound__New4_fn(::g::Outracks::Simulator::Bytecode::TypeName* typeName, ::g::Outracks::Simulator::Bytecode::TypeMemberName* memberName, MemberNotFound** __retval)
{
    *__retval = MemberNotFound::New4(typeName, memberName);
}

// public MemberNotFound(Outracks.Simulator.Bytecode.TypeName typeName, Outracks.Simulator.Bytecode.TypeMemberName memberName) [instance] :17
void MemberNotFound::ctor_3(::g::Outracks::Simulator::Bytecode::TypeName* typeName, ::g::Outracks::Simulator::Bytecode::TypeMemberName* memberName)
{
    ctor_1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[0/*"Member not ...*/], uPtr(typeName)->FullName()), ::STRINGS[1/*"."*/]), uPtr(memberName)->Name));
}

// public MemberNotFound New(Outracks.Simulator.Bytecode.TypeName typeName, Outracks.Simulator.Bytecode.TypeMemberName memberName) [static] :17
MemberNotFound* MemberNotFound::New4(::g::Outracks::Simulator::Bytecode::TypeName* typeName, ::g::Outracks::Simulator::Bytecode::TypeMemberName* memberName)
{
    MemberNotFound* obj1 = (MemberNotFound*)uNew(MemberNotFound_typeof());
    obj1->ctor_3(typeName, memberName);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/runtime/$.uno
// -------------------------------------------------------------------------------

// public static class ObjectPropertyRegistry :371
// {
// static ObjectPropertyRegistry() :371
static void ObjectPropertyRegistry__cctor__fn(uType* __type)
{
    ObjectPropertyRegistry::Objects_ = ((::g::WeakDictionary*)::g::WeakDictionary::New1(::TYPES[7/*WeakDictionary<object, Uno.Collections.Dictionary<string, object>>*/]));
}

static void ObjectPropertyRegistry_build(uType* type)
{
    ::TYPES[7] = ::g::WeakDictionary_typeof()->MakeType(uObject_typeof(), ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL), NULL);
    ::TYPES[8] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[7/*WeakDictionary<object, Uno.Collections.Dictionary<string, object>>*/], (uintptr_t)&::g::Outracks::Simulator::Runtime::ObjectPropertyRegistry::Objects_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(3,
        new uFunction("Clear", NULL, (void*)ObjectPropertyRegistry__Clear_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("GetProperty", NULL, (void*)ObjectPropertyRegistry__GetProperty_fn, 0, true, uObject_typeof(), 2, uObject_typeof(), ::g::Uno::String_typeof()),
        new uFunction("RegisterProperty", NULL, (void*)ObjectPropertyRegistry__RegisterProperty_fn, 0, true, uVoid_typeof(), 3, uObject_typeof(), ::g::Uno::String_typeof(), uObject_typeof()));
}

uClassType* ObjectPropertyRegistry_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Outracks.Simulator.Runtime.ObjectPropertyRegistry", options);
    type->fp_build_ = ObjectPropertyRegistry_build;
    type->fp_cctor_ = ObjectPropertyRegistry__cctor__fn;
    return type;
}

// public static void Clear() :375
void ObjectPropertyRegistry__Clear_fn()
{
    ObjectPropertyRegistry::Clear();
}

// public static object GetProperty(object obj, string property) :389
void ObjectPropertyRegistry__GetProperty_fn(uObject* obj, uString* property, uObject** __retval)
{
    *__retval = ObjectPropertyRegistry::GetProperty(obj, property);
}

// public static void RegisterProperty(object obj, string property, object propertyObject) :380
void ObjectPropertyRegistry__RegisterProperty_fn(uObject* obj, uString* property, uObject* propertyObject)
{
    ObjectPropertyRegistry::RegisterProperty(obj, property, propertyObject);
}

uSStrong< ::g::WeakDictionary*> ObjectPropertyRegistry::Objects_;

// public static void Clear() [static] :375
void ObjectPropertyRegistry::Clear()
{
    uStackFrame __("Outracks.Simulator.Runtime.ObjectPropertyRegistry", "Clear()");
    ObjectPropertyRegistry_typeof()->Init();
    uPtr(ObjectPropertyRegistry::Objects())->Clear();
}

// public static object GetProperty(object obj, string property) [static] :389
uObject* ObjectPropertyRegistry::GetProperty(uObject* obj, uString* property)
{
    uStackFrame __("Outracks.Simulator.Runtime.ObjectPropertyRegistry", "GetProperty(object,string)");
    ObjectPropertyRegistry_typeof()->Init();
    uObject* ret1;
    ::g::Uno::Collections::Dictionary* ret2;
    return (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr((::g::WeakDictionary__get_Item_fn(uPtr(ObjectPropertyRegistry::Objects()), obj, &ret2), ret2)), property, &ret1), ret1);
}

// public static void RegisterProperty(object obj, string property, object propertyObject) [static] :380
void ObjectPropertyRegistry::RegisterProperty(uObject* obj, uString* property, uObject* propertyObject)
{
    uStackFrame __("Outracks.Simulator.Runtime.ObjectPropertyRegistry", "RegisterProperty(object,string,object)");
    ObjectPropertyRegistry_typeof()->Init();
    bool ret3;
    ::g::Uno::Collections::Dictionary* properties = NULL;

    if (!(::g::WeakDictionary__TryGetValue_fn(uPtr(ObjectPropertyRegistry::Objects()), obj, (void**)(&properties), &ret3), ret3))
        ::g::WeakDictionary__set_Item_fn(uPtr(ObjectPropertyRegistry::Objects()), obj, properties = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[8/*Uno.Collections.Dictionary<string, object>*/]));

    ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(properties), property, propertyObject);
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/runtime/$.uno
// -------------------------------------------------------------------------------

// public static class ObjectTagRegistry :469
// {
// static ObjectTagRegistry() :469
static void ObjectTagRegistry__cctor__fn(uType* __type)
{
    ObjectTagRegistry::Objects_ = ((::g::WeakDictionary*)::g::WeakDictionary::New1(::TYPES[9/*WeakDictionary<object, string>*/]));
}

static void ObjectTagRegistry_build(uType* type)
{
    ::STRINGS[2] = uString::Const("/usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/runtime/$.uno");
    ::TYPES[9] = ::g::WeakDictionary_typeof()->MakeType(uObject_typeof(), ::g::Uno::String_typeof(), NULL);
    ::TYPES[10] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[11] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[12] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[13] = ::g::Uno::Exception_typeof();
    ::TYPES[14] = ::g::Uno::Collections::List_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[15] = ::g::Uno::Collections::List_typeof()->MakeType(::g::HashableWeakReference_typeof(), NULL);
    ::TYPES[16] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::HashableWeakReference_typeof(), ::g::Uno::String_typeof(), NULL), NULL);
    ::TYPES[17] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::HashableWeakReference_typeof(), ::g::Uno::String_typeof(), NULL), NULL);
    ::TYPES[18] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::HashableWeakReference_typeof(), ::g::Uno::String_typeof(), NULL);
    ::TYPES[19] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::HashableWeakReference_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[9/*WeakDictionary<object, string>*/], (uintptr_t)&::g::Outracks::Simulator::Runtime::ObjectTagRegistry::Objects_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(6,
        new uFunction("Clear", NULL, (void*)ObjectTagRegistry__Clear_fn, 0, true, uVoid_typeof(), 0),
        new uFunction("GetFirstObjectWithTag", NULL, (void*)ObjectTagRegistry__GetFirstObjectWithTag_fn, 0, true, uObject_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("GetObjectsWithTag", NULL, (void*)ObjectTagRegistry__GetObjectsWithTag_fn, 0, true, ::TYPES[10/*Uno.Collections.IEnumerable<object>*/], 1, ::g::Uno::String_typeof()),
        new uFunction("GetTagHash", NULL, (void*)ObjectTagRegistry__GetTagHash_fn, 0, true, ::g::Uno::String_typeof(), 1, uObject_typeof()),
        new uFunction("RegisterObjectTag", NULL, (void*)ObjectTagRegistry__RegisterObjectTag_fn, 0, true, uObject_typeof(), 2, uObject_typeof(), ::g::Uno::String_typeof()),
        new uFunction("TryExecuteOnObjectsWithTag", NULL, (void*)ObjectTagRegistry__TryExecuteOnObjectsWithTag_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::Action1_typeof()->MakeType(uObject_typeof(), NULL)));
}

uClassType* ObjectTagRegistry_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Outracks.Simulator.Runtime.ObjectTagRegistry", options);
    type->fp_build_ = ObjectTagRegistry_build;
    type->fp_cctor_ = ObjectTagRegistry__cctor__fn;
    return type;
}

// public static void Clear() :473
void ObjectTagRegistry__Clear_fn()
{
    ObjectTagRegistry::Clear();
}

// public static object GetFirstObjectWithTag(string tag) :499
void ObjectTagRegistry__GetFirstObjectWithTag_fn(uString* tag, uObject** __retval)
{
    *__retval = ObjectTagRegistry::GetFirstObjectWithTag(tag);
}

// public static Uno.Collections.IEnumerable<object> GetObjectsWithTag(string tag) :516
void ObjectTagRegistry__GetObjectsWithTag_fn(uString* tag, uObject** __retval)
{
    *__retval = ObjectTagRegistry::GetObjectsWithTag(tag);
}

// public static string GetTagHash(object obj) :541
void ObjectTagRegistry__GetTagHash_fn(uObject* obj, uString** __retval)
{
    *__retval = ObjectTagRegistry::GetTagHash(obj);
}

// public static object RegisterObjectTag(object obj, string tagHash) :478
void ObjectTagRegistry__RegisterObjectTag_fn(uObject* obj, uString* tagHash, uObject** __retval)
{
    *__retval = ObjectTagRegistry::RegisterObjectTag(obj, tagHash);
}

// public static void TryExecuteOnObjectsWithTag(string tag, Uno.Action<object> action) :484
void ObjectTagRegistry__TryExecuteOnObjectsWithTag_fn(uString* tag, uDelegate* action)
{
    ObjectTagRegistry::TryExecuteOnObjectsWithTag(tag, action);
}

uSStrong< ::g::WeakDictionary*> ObjectTagRegistry::Objects_;

// public static void Clear() [static] :473
void ObjectTagRegistry::Clear()
{
    uStackFrame __("Outracks.Simulator.Runtime.ObjectTagRegistry", "Clear()");
    ObjectTagRegistry_typeof()->Init();
    uPtr(ObjectTagRegistry::Objects())->Clear();
}

// public static object GetFirstObjectWithTag(string tag) [static] :499
uObject* ObjectTagRegistry::GetFirstObjectWithTag(uString* tag)
{
    uStackFrame __("Outracks.Simulator.Runtime.ObjectTagRegistry", "GetFirstObjectWithTag(string)");
    ObjectTagRegistry_typeof()->Init();
    uObject* ret5;

    for (uObject* enum2 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(ObjectTagRegistry::GetObjectsWithTag(tag)), ::TYPES[10/*Uno.Collections.IEnumerable<object>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum2), ::TYPES[11/*Uno.Collections.IEnumerator*/])); )
    {
        uObject* obj = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum2), ::TYPES[12/*Uno.Collections.IEnumerator<object>*/]), &ret5), ret5);

        try
        {
            return obj;
        }
        catch (const uThrowable& __t)
        {
            ::g::Uno::Exception* e = __t.Exception;
            ::g::Uno::Diagnostics::Debug::Log5(uPtr(e)->ToString(), 1, ::STRINGS[2/*"/usr/local/...*/], 509);
        }
    }

    return NULL;
}

// public static Uno.Collections.IEnumerable<object> GetObjectsWithTag(string tag) [static] :516
uObject* ObjectTagRegistry::GetObjectsWithTag(uString* tag)
{
    uStackFrame __("Outracks.Simulator.Runtime.ObjectTagRegistry", "GetObjectsWithTag(string)");
    ObjectTagRegistry_typeof()->Init();
    ::g::Uno::Collections::KeyValuePair<uStrong< ::g::HashableWeakReference*>, uStrong<uString*> > ret6;
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::HashableWeakReference*> > ret7;
    ::g::Uno::Collections::List* list = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[14/*Uno.Collections.List<object>*/]);
    ::g::Uno::Collections::List* deadKeys = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[15/*Uno.Collections.List<HashableWeakReference>*/]);

    for (uObject* enum3 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr((uObject*)uPtr(ObjectTagRegistry::Objects())->AsEnumerable()), ::TYPES[16/*Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<HashableWeakReference, string>>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum3), ::TYPES[11/*Uno.Collections.IEnumerator*/])); )
    {
        ::g::Uno::Collections::KeyValuePair<uStrong< ::g::HashableWeakReference*>, uStrong<uString*> > kv = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum3), ::TYPES[17/*Uno.Collections.IEnumerator<Uno.Collections.KeyValuePair<HashableWeakReference, string>>*/]), &ret6), ret6);
        uObject* obj = NULL;

        if (uPtr(kv.Key(::TYPES[18/*Uno.Collections.KeyValuePair<HashableWeakReference, string>*/]))->TryGetTarget(&obj))
        {
            if (::g::Uno::String::op_Equality(kv.Value(::TYPES[18/*Uno.Collections.KeyValuePair<HashableWeakReference, string>*/]), tag))
                ::g::Uno::Collections::List__Add_fn(uPtr(list), obj);
        }
        else
            ::g::Uno::Collections::List__Add_fn(uPtr(deadKeys), kv.Key(::TYPES[18/*Uno.Collections.KeyValuePair<HashableWeakReference, string>*/]));
    }

    for (::g::Uno::Collections::List__Enumerator<uStrong< ::g::HashableWeakReference*> > enum4 = (::g::Uno::Collections::List__GetEnumerator_fn(deadKeys, &ret7), ret7); enum4.MoveNext(::TYPES[19/*Uno.Collections.List<HashableWeakReference>.Enumerator*/]); )
    {
        ::g::HashableWeakReference* deadKey = enum4.Current(::TYPES[19/*Uno.Collections.List<HashableWeakReference>.Enumerator*/]);
        uPtr(ObjectTagRegistry::Objects())->Remove(deadKey);
    }

    return (uObject*)list;
}

// public static string GetTagHash(object obj) [static] :541
uString* ObjectTagRegistry::GetTagHash(uObject* obj)
{
    uStackFrame __("Outracks.Simulator.Runtime.ObjectTagRegistry", "GetTagHash(object)");
    ObjectTagRegistry_typeof()->Init();
    bool ret8;
    uString* tagHash = NULL;
    ::g::WeakDictionary__TryGetValue_fn(uPtr(ObjectTagRegistry::Objects()), obj, (void**)(&tagHash), &ret8);
    return tagHash;
}

// public static object RegisterObjectTag(object obj, string tagHash) [static] :478
uObject* ObjectTagRegistry::RegisterObjectTag(uObject* obj, uString* tagHash)
{
    uStackFrame __("Outracks.Simulator.Runtime.ObjectTagRegistry", "RegisterObjectTag(object,string)");
    ObjectTagRegistry_typeof()->Init();
    ::g::WeakDictionary__set_Item_fn(uPtr(ObjectTagRegistry::Objects()), obj, tagHash);
    return obj;
}

// public static void TryExecuteOnObjectsWithTag(string tag, Uno.Action<object> action) [static] :484
void ObjectTagRegistry::TryExecuteOnObjectsWithTag(uString* tag, uDelegate* action)
{
    uStackFrame __("Outracks.Simulator.Runtime.ObjectTagRegistry", "TryExecuteOnObjectsWithTag(string,Uno.Action<object>)");
    ObjectTagRegistry_typeof()->Init();
    uObject* ret9;

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(ObjectTagRegistry::GetObjectsWithTag(tag)), ::TYPES[10/*Uno.Collections.IEnumerable<object>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[11/*Uno.Collections.IEnumerator*/])); )
    {
        uObject* obj = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[12/*Uno.Collections.IEnumerator<object>*/]), &ret9), ret9);

        try
        {
            uPtr(action)->InvokeVoid(obj);
        }
        catch (const uThrowable& __t)
        {
            ::g::Uno::Exception* e = __t.Exception;
            ::g::Uno::Diagnostics::Debug::Log5(uPtr(e)->ToString(), 1, ::STRINGS[2/*"/usr/local/...*/], 494);
        }
    }
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/runtime/$.uno
// -------------------------------------------------------------------------------

// public sealed class ScopeClosure :82
// {
static void ScopeClosure_build(uType* type)
{
    ::STRINGS[3] = uString::Const("Illegal parameter count");
    ::STRINGS[4] = uString::Const("Invalid number type ");
    ::TYPES[20] = ::g::Outracks::Simulator::Runtime::IReflection_typeof();
    ::TYPES[21] = ::g::Outracks::Simulator::Bytecode::Expression_typeof()->MakeMethod(0/*Match<object>*/, uObject_typeof(), NULL);
    ::TYPES[22] = ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::ReadVariable_typeof(), uObject_typeof(), NULL);
    ::TYPES[23] = ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Literal_typeof(), uObject_typeof(), NULL);
    ::TYPES[24] = ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Lambda_typeof(), uObject_typeof(), NULL);
    ::TYPES[25] = ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::MethodGroup_typeof(), uObject_typeof(), NULL);
    ::TYPES[26] = ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::IsType_typeof(), uObject_typeof(), NULL);
    ::TYPES[27] = ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::LogicalOr_typeof(), uObject_typeof(), NULL);
    ::TYPES[28] = ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Instantiate_typeof(), uObject_typeof(), NULL);
    ::TYPES[29] = ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::CallLambda_typeof(), uObject_typeof(), NULL);
    ::TYPES[30] = ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::CallStaticMethod_typeof(), uObject_typeof(), NULL);
    ::TYPES[31] = ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::CallDynamicMethod_typeof(), uObject_typeof(), NULL);
    ::TYPES[32] = ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::ReadStaticField_typeof(), uObject_typeof(), NULL);
    ::TYPES[33] = ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::ReadProperty_typeof(), uObject_typeof(), NULL);
    ::TYPES[34] = ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::WriteProperty_typeof(), uObject_typeof(), NULL);
    ::TYPES[35] = ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::AddEventHandler_typeof(), uObject_typeof(), NULL);
    ::TYPES[36] = ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::RemoveEventHandler_typeof(), uObject_typeof(), NULL);
    ::TYPES[37] = ::g::Outracks::Simulator::Bytecode::Optional1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::TypeName_typeof(), NULL);
    ::TYPES[38] = ::g::Uno::Func_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[39] = ::g::Uno::Func2_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Lambda_typeof(), uObject_typeof()->Array(), uObject_typeof(), NULL);
    ::TYPES[40] = ::g::Uno::Func1_typeof()->MakeType(uObject_typeof(), uObject_typeof(), NULL);
    ::TYPES[41] = ::g::Uno::Func2_typeof()->MakeType(uObject_typeof(), uObject_typeof(), uObject_typeof(), NULL);
    ::TYPES[42] = ::g::Uno::Func3_typeof()->MakeType(uObject_typeof(), uObject_typeof(), uObject_typeof(), uObject_typeof(), NULL);
    ::TYPES[43] = ::g::Uno::Action_typeof();
    ::TYPES[44] = ::g::Uno::Action1_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[45] = ::g::Uno::Action2_typeof()->MakeType(uObject_typeof(), uObject_typeof(), NULL);
    ::TYPES[46] = ::g::Uno::Action3_typeof()->MakeType(uObject_typeof(), uObject_typeof(), uObject_typeof(), NULL);
    ::TYPES[47] = ::g::Outracks::Simulator::Bytecode::Literal_typeof()->MakeMethod(0/*Match<object>*/, uObject_typeof(), NULL);
    ::TYPES[48] = ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::BooleanLiteral_typeof(), uObject_typeof(), NULL);
    ::TYPES[49] = ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::StringLiteral_typeof(), uObject_typeof(), NULL);
    ::TYPES[50] = ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::NumberLiteral_typeof(), uObject_typeof(), NULL);
    ::TYPES[51] = ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::EnumLiteral_typeof(), uObject_typeof(), NULL);
    ::TYPES[52] = ::g::Uno::Func1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::BlobLiteral_typeof(), uObject_typeof(), NULL);
    ::TYPES[2] = uObject_typeof()->Array();
    ::TYPES[1] = ::g::Outracks::Simulator::Bytecode::Optional1_typeof()->MakeType(::g::Outracks::Simulator::Runtime::Environment_typeof(), NULL);
    ::TYPES[11] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[53] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::BindVariable_typeof(), NULL);
    ::TYPES[54] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Statement_typeof(), NULL);
    ::TYPES[55] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Outracks::Simulator::Bytecode::Statement_typeof(), NULL);
    ::TYPES[56] = ::g::Outracks::Simulator::Bytecode::Expression_typeof();
    ::TYPES[57] = ::g::Outracks::Simulator::Bytecode::Return_typeof();
    type->SetFields(0,
        ::TYPES[20/*Outracks.Simulator.Runtime.IReflection*/], offsetof(::g::Outracks::Simulator::Runtime::ScopeClosure, _reflection), 0,
        ::g::Outracks::Simulator::Runtime::Environment_typeof(), offsetof(::g::Outracks::Simulator::Runtime::ScopeClosure, _scope), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("Execute", NULL, (void*)ScopeClosure__Execute1_fn, 0, false, uObject_typeof(), 2, ::g::Outracks::Simulator::Bytecode::Lambda_typeof(), ::TYPES[2/*object[]*/]),
        new uFunction(".ctor", NULL, (void*)ScopeClosure__New1_fn, 0, true, type, 2, ::g::Outracks::Simulator::Runtime::Environment_typeof(), ::TYPES[20/*Outracks.Simulator.Runtime.IReflection*/]));
}

uType* ScopeClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(ScopeClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Runtime.ScopeClosure", options);
    type->fp_build_ = ScopeClosure_build;
    return type;
}

// public ScopeClosure(Outracks.Simulator.Runtime.Environment scope, Outracks.Simulator.Runtime.IReflection reflection) :87
void ScopeClosure__ctor__fn(ScopeClosure* __this, ::g::Outracks::Simulator::Runtime::Environment* scope, uObject* reflection)
{
    __this->ctor_(scope, reflection);
}

// private object Evaluate(Outracks.Simulator.Bytecode.AddEventHandler e) :192
void ScopeClosure__Evaluate_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::AddEventHandler* e, uObject** __retval)
{
    *__retval = __this->Evaluate(e);
}

// private object Evaluate(Outracks.Simulator.Bytecode.BlobLiteral e) :272
void ScopeClosure__Evaluate1_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::BlobLiteral* e, uObject** __retval)
{
    *__retval = __this->Evaluate1(e);
}

// private object Evaluate(Outracks.Simulator.Bytecode.BooleanLiteral e) :274
void ScopeClosure__Evaluate2_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::BooleanLiteral* e, uObject** __retval)
{
    *__retval = __this->Evaluate2(e);
}

// private object Evaluate(Outracks.Simulator.Bytecode.CallDynamicMethod m) :171
void ScopeClosure__Evaluate3_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::CallDynamicMethod* m, uObject** __retval)
{
    *__retval = __this->Evaluate3(m);
}

// private object Evaluate(Outracks.Simulator.Bytecode.CallLambda i) :161
void ScopeClosure__Evaluate4_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::CallLambda* i, uObject** __retval)
{
    *__retval = __this->Evaluate4(i);
}

// private object Evaluate(Outracks.Simulator.Bytecode.CallStaticMethod m) :166
void ScopeClosure__Evaluate5_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::CallStaticMethod* m, uObject** __retval)
{
    *__retval = __this->Evaluate5(m);
}

// private object Evaluate(Outracks.Simulator.Bytecode.EnumLiteral i) :294
void ScopeClosure__Evaluate6_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::EnumLiteral* i, uObject** __retval)
{
    *__retval = __this->Evaluate6(i);
}

// private object Evaluate(Outracks.Simulator.Bytecode.Expression expression) :129
void ScopeClosure__Evaluate7_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::Expression* expression, uObject** __retval)
{
    *__retval = __this->Evaluate7(expression);
}

// private object Evaluate(Outracks.Simulator.Bytecode.Instantiate i) :156
void ScopeClosure__Evaluate8_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::Instantiate* i, uObject** __retval)
{
    *__retval = __this->Evaluate8(i);
}

// private object Evaluate(Outracks.Simulator.Bytecode.IsType t) :144
void ScopeClosure__Evaluate9_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::IsType* t, uObject** __retval)
{
    *__retval = __this->Evaluate9(t);
}

// private object Evaluate(Outracks.Simulator.Bytecode.Lambda p) :240
void ScopeClosure__Evaluate10_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::Lambda* p, uObject** __retval)
{
    *__retval = __this->Evaluate10(p);
}

// private object Evaluate(Outracks.Simulator.Bytecode.Literal e) :267
void ScopeClosure__Evaluate11_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::Literal* e, uObject** __retval)
{
    *__retval = __this->Evaluate11(e);
}

// private object Evaluate(Outracks.Simulator.Bytecode.LogicalOr o) :151
void ScopeClosure__Evaluate12_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::LogicalOr* o, uObject** __retval)
{
    *__retval = __this->Evaluate12(o);
}

// private object Evaluate(Outracks.Simulator.Bytecode.MethodGroup g) :139
void ScopeClosure__Evaluate13_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::MethodGroup* g, uObject** __retval)
{
    *__retval = __this->Evaluate13(g);
}

// private object Evaluate(Outracks.Simulator.Bytecode.NumberLiteral l) :278
void ScopeClosure__Evaluate14_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::NumberLiteral* l, uObject** __retval)
{
    *__retval = __this->Evaluate14(l);
}

// private object Evaluate(Outracks.Simulator.Bytecode.ReadProperty e) :181
void ScopeClosure__Evaluate15_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::ReadProperty* e, uObject** __retval)
{
    *__retval = __this->Evaluate15(e);
}

// private object Evaluate(Outracks.Simulator.Bytecode.ReadStaticField e) :176
void ScopeClosure__Evaluate16_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::ReadStaticField* e, uObject** __retval)
{
    *__retval = __this->Evaluate16(e);
}

// private object Evaluate(Outracks.Simulator.Bytecode.ReadVariable e) :134
void ScopeClosure__Evaluate17_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::ReadVariable* e, uObject** __retval)
{
    *__retval = __this->Evaluate17(e);
}

// private object Evaluate(Outracks.Simulator.Bytecode.RemoveEventHandler e) :198
void ScopeClosure__Evaluate18_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::RemoveEventHandler* e, uObject** __retval)
{
    *__retval = __this->Evaluate18(e);
}

// private object Evaluate(Outracks.Simulator.Bytecode.StringLiteral e) :276
void ScopeClosure__Evaluate19_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::StringLiteral* e, uObject** __retval)
{
    *__retval = __this->Evaluate19(e);
}

// private object Evaluate(Outracks.Simulator.Bytecode.WriteProperty p) :186
void ScopeClosure__Evaluate20_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::WriteProperty* p, uObject** __retval)
{
    *__retval = __this->Evaluate20(p);
}

// private object[] Evaluate(Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.Expression> arguments) :204
void ScopeClosure__Evaluate21_fn(ScopeClosure* __this, ::g::Outracks::Simulator::ImmutableList* arguments, uArray** __retval)
{
    *__retval = __this->Evaluate21(arguments);
}

// private object Execute(object lambda, object[] arguments) :216
void ScopeClosure__Execute_fn(ScopeClosure* __this, uObject* lambda, uArray* arguments, uObject** __retval)
{
    *__retval = __this->Execute(lambda, arguments);
}

// public object Execute(Outracks.Simulator.Bytecode.Lambda lambda, object[] arguments) :97
void ScopeClosure__Execute1_fn(ScopeClosure* __this, ::g::Outracks::Simulator::Bytecode::Lambda* lambda, uArray* arguments, uObject** __retval)
{
    *__retval = __this->Execute1(lambda, arguments);
}

// private object Execute(Uno.Collections.IEnumerable<Outracks.Simulator.Bytecode.Statement> statements) :110
void ScopeClosure__Execute2_fn(ScopeClosure* __this, uObject* statements, uObject** __retval)
{
    *__retval = __this->Execute2(statements);
}

// public ScopeClosure New(Outracks.Simulator.Runtime.Environment scope, Outracks.Simulator.Runtime.IReflection reflection) :87
void ScopeClosure__New1_fn(::g::Outracks::Simulator::Runtime::Environment* scope, uObject* reflection, ScopeClosure** __retval)
{
    *__retval = ScopeClosure::New1(scope, reflection);
}

// public ScopeClosure(Outracks.Simulator.Runtime.Environment scope, Outracks.Simulator.Runtime.IReflection reflection) [instance] :87
void ScopeClosure::ctor_(::g::Outracks::Simulator::Runtime::Environment* scope, uObject* reflection)
{
    _reflection = reflection;
    _scope = scope;
}

// private object Evaluate(Outracks.Simulator.Bytecode.AddEventHandler e) [instance] :192
uObject* ScopeClosure::Evaluate(::g::Outracks::Simulator::Bytecode::AddEventHandler* e)
{
    uStackFrame __("Outracks.Simulator.Runtime.ScopeClosure", "Evaluate(Outracks.Simulator.Bytecode.AddEventHandler)");
    ::g::Outracks::Simulator::Runtime::IReflection::AddEventHandler(uInterface(uPtr(_reflection), ::TYPES[20/*Outracks.Simulator.Runtime.IReflection*/]), Evaluate7(uPtr(e)->Object), uPtr(e)->Event, Evaluate7(uPtr(e)->Handler));
    return NULL;
}

// private object Evaluate(Outracks.Simulator.Bytecode.BlobLiteral e) [instance] :272
uObject* ScopeClosure::Evaluate1(::g::Outracks::Simulator::Bytecode::BlobLiteral* e)
{
    uStackFrame __("Outracks.Simulator.Runtime.ScopeClosure", "Evaluate(Outracks.Simulator.Bytecode.BlobLiteral)");
    return uPtr(e)->Bytes;
}

// private object Evaluate(Outracks.Simulator.Bytecode.BooleanLiteral e) [instance] :274
uObject* ScopeClosure::Evaluate2(::g::Outracks::Simulator::Bytecode::BooleanLiteral* e)
{
    uStackFrame __("Outracks.Simulator.Runtime.ScopeClosure", "Evaluate(Outracks.Simulator.Bytecode.BooleanLiteral)");
    return uBox(::g::Uno::Bool_typeof(), uPtr(e)->BooleanValue);
}

// private object Evaluate(Outracks.Simulator.Bytecode.CallDynamicMethod m) [instance] :171
uObject* ScopeClosure::Evaluate3(::g::Outracks::Simulator::Bytecode::CallDynamicMethod* m)
{
    uStackFrame __("Outracks.Simulator.Runtime.ScopeClosure", "Evaluate(Outracks.Simulator.Bytecode.CallDynamicMethod)");
    return ::g::Outracks::Simulator::Runtime::IReflection::CallDynamic(uInterface(uPtr(_reflection), ::TYPES[20/*Outracks.Simulator.Runtime.IReflection*/]), Evaluate7(uPtr(m)->Object), uPtr(m)->Method, Evaluate21(uPtr(m)->Arguments));
}

// private object Evaluate(Outracks.Simulator.Bytecode.CallLambda i) [instance] :161
uObject* ScopeClosure::Evaluate4(::g::Outracks::Simulator::Bytecode::CallLambda* i)
{
    uStackFrame __("Outracks.Simulator.Runtime.ScopeClosure", "Evaluate(Outracks.Simulator.Bytecode.CallLambda)");
    return Execute(Evaluate7(uPtr(i)->Lambda), Evaluate21(uPtr(i)->Arguments));
}

// private object Evaluate(Outracks.Simulator.Bytecode.CallStaticMethod m) [instance] :166
uObject* ScopeClosure::Evaluate5(::g::Outracks::Simulator::Bytecode::CallStaticMethod* m)
{
    uStackFrame __("Outracks.Simulator.Runtime.ScopeClosure", "Evaluate(Outracks.Simulator.Bytecode.CallStaticMethod)");
    return ::g::Outracks::Simulator::Runtime::IReflection::CallStatic(uInterface(uPtr(_reflection), ::TYPES[20/*Outracks.Simulator.Runtime.IReflection*/]), uPtr(uPtr(m)->StaticMethod)->TypeName, uPtr(uPtr(m)->StaticMethod)->MemberName, Evaluate21(uPtr(m)->Arguments));
}

// private object Evaluate(Outracks.Simulator.Bytecode.EnumLiteral i) [instance] :294
uObject* ScopeClosure::Evaluate6(::g::Outracks::Simulator::Bytecode::EnumLiteral* i)
{
    uStackFrame __("Outracks.Simulator.Runtime.ScopeClosure", "Evaluate(Outracks.Simulator.Bytecode.EnumLiteral)");
    return ::g::Outracks::Simulator::Runtime::IReflection::GetEnumValue(uInterface(uPtr(_reflection), ::TYPES[20/*Outracks.Simulator.Runtime.IReflection*/]), uPtr(uPtr(i)->Value)->TypeName, uPtr(uPtr(i)->Value)->MemberName);
}

// private object Evaluate(Outracks.Simulator.Bytecode.Expression expression) [instance] :129
uObject* ScopeClosure::Evaluate7(::g::Outracks::Simulator::Bytecode::Expression* expression)
{
    uStackFrame __("Outracks.Simulator.Runtime.ScopeClosure", "Evaluate(Outracks.Simulator.Bytecode.Expression)");
    uObject* ret5;
    return (::g::Outracks::Simulator::Bytecode::Expression__Match3_fn(uPtr(expression), ::TYPES[21/*Outracks.Simulator.Bytecode.Expression.Match<object>*/], uDelegate::New(::TYPES[22/*Uno.Func<Outracks.Simulator.Bytecode.ReadVariable, object>*/], (void*)ScopeClosure__Evaluate17_fn, this), uDelegate::New(::TYPES[23/*Uno.Func<Outracks.Simulator.Bytecode.Literal, object>*/], (void*)ScopeClosure__Evaluate11_fn, this), uDelegate::New(::TYPES[24/*Uno.Func<Outracks.Simulator.Bytecode.Lambda, object>*/], (void*)ScopeClosure__Evaluate10_fn, this), uDelegate::New(::TYPES[25/*Uno.Func<Outracks.Simulator.Bytecode.MethodGroup, object>*/], (void*)ScopeClosure__Evaluate13_fn, this), uDelegate::New(::TYPES[26/*Uno.Func<Outracks.Simulator.Bytecode.IsType, object>*/], (void*)ScopeClosure__Evaluate9_fn, this), uDelegate::New(::TYPES[27/*Uno.Func<Outracks.Simulator.Bytecode.LogicalOr, object>*/], (void*)ScopeClosure__Evaluate12_fn, this), uDelegate::New(::TYPES[28/*Uno.Func<Outracks.Simulator.Bytecode.Instantiate, object>*/], (void*)ScopeClosure__Evaluate8_fn, this), uDelegate::New(::TYPES[29/*Uno.Func<Outracks.Simulator.Bytecode.CallLambda, object>*/], (void*)ScopeClosure__Evaluate4_fn, this), uDelegate::New(::TYPES[30/*Uno.Func<Outracks.Simulator.Bytecode.CallStaticMethod, object>*/], (void*)ScopeClosure__Evaluate5_fn, this), uDelegate::New(::TYPES[31/*Uno.Func<Outracks.Simulator.Bytecode.CallDynamicMethod, object>*/], (void*)ScopeClosure__Evaluate3_fn, this), uDelegate::New(::TYPES[32/*Uno.Func<Outracks.Simulator.Bytecode.ReadStaticField, object>*/], (void*)ScopeClosure__Evaluate16_fn, this), uDelegate::New(::TYPES[33/*Uno.Func<Outracks.Simulator.Bytecode.ReadProperty, object>*/], (void*)ScopeClosure__Evaluate15_fn, this), uDelegate::New(::TYPES[34/*Uno.Func<Outracks.Simulator.Bytecode.WriteProperty, object>*/], (void*)ScopeClosure__Evaluate20_fn, this), uDelegate::New(::TYPES[35/*Uno.Func<Outracks.Simulator.Bytecode.AddEventHandler, object>*/], (void*)ScopeClosure__Evaluate_fn, this), uDelegate::New(::TYPES[36/*Uno.Func<Outracks.Simulator.Bytecode.RemoveEventHandler, object>*/], (void*)ScopeClosure__Evaluate18_fn, this), &ret5), ret5);
}

// private object Evaluate(Outracks.Simulator.Bytecode.Instantiate i) [instance] :156
uObject* ScopeClosure::Evaluate8(::g::Outracks::Simulator::Bytecode::Instantiate* i)
{
    uStackFrame __("Outracks.Simulator.Runtime.ScopeClosure", "Evaluate(Outracks.Simulator.Bytecode.Instantiate)");
    return ::g::Outracks::Simulator::Runtime::IReflection::Instantiate(uInterface(uPtr(_reflection), ::TYPES[20/*Outracks.Simulator.Runtime.IReflection*/]), uPtr(i)->Type, Evaluate21(uPtr(i)->Arguments));
}

// private object Evaluate(Outracks.Simulator.Bytecode.IsType t) [instance] :144
uObject* ScopeClosure::Evaluate9(::g::Outracks::Simulator::Bytecode::IsType* t)
{
    uStackFrame __("Outracks.Simulator.Runtime.ScopeClosure", "Evaluate(Outracks.Simulator.Bytecode.IsType)");
    return uBox(::g::Uno::Bool_typeof(), uPtr(t)->IncludeSubtypes ? ::g::Outracks::Simulator::Runtime::IReflection::IsSubtype(uInterface(uPtr(_reflection), ::TYPES[20/*Outracks.Simulator.Runtime.IReflection*/]), Evaluate7(uPtr(t)->Object), uPtr(t)->Type) : ::g::Outracks::Simulator::Runtime::IReflection::IsType(uInterface(uPtr(_reflection), ::TYPES[20/*Outracks.Simulator.Runtime.IReflection*/]), Evaluate7(uPtr(t)->Object), uPtr(t)->Type));
}

// private object Evaluate(Outracks.Simulator.Bytecode.Lambda p) [instance] :240
uObject* ScopeClosure::Evaluate10(::g::Outracks::Simulator::Bytecode::Lambda* p)
{
    uStackFrame __("Outracks.Simulator.Runtime.ScopeClosure", "Evaluate(Outracks.Simulator.Bytecode.Lambda)");
    ::g::Outracks::Simulator::Bytecode::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::TypeName*> > ind3;

    if ((ind3 = uPtr(uPtr(p)->Signature)->ReturnType().Value< ::g::Outracks::Simulator::Bytecode::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::TypeName*> > >(), (&ind3))->HasValue(::TYPES[37/*Outracks.Simulator.Bytecode.Optional<Outracks.Simulator.Bytecode.TypeName>*/]))

        switch (uPtr(uPtr(uPtr(p)->Signature)->Parameters)->Count())
        {
            case 0:
                return uDelegate::New(::TYPES[38/*Uno.Func<object>*/], (void*)::g::Outracks::Simulator::Runtime::LambdaClosure__Func_fn, ::g::Outracks::Simulator::Runtime::LambdaClosure::New1(p, uDelegate::New(::TYPES[39/*Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object>*/], (void*)ScopeClosure__Execute1_fn, this)));
            case 1:
                return uDelegate::New(::TYPES[40/*Uno.Func<object, object>*/], (void*)::g::Outracks::Simulator::Runtime::LambdaClosure__Func1_fn, ::g::Outracks::Simulator::Runtime::LambdaClosure::New1(p, uDelegate::New(::TYPES[39/*Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object>*/], (void*)ScopeClosure__Execute1_fn, this)));
            case 2:
                return uDelegate::New(::TYPES[41/*Uno.Func<object, object, object>*/], (void*)::g::Outracks::Simulator::Runtime::LambdaClosure__Func2_fn, ::g::Outracks::Simulator::Runtime::LambdaClosure::New1(p, uDelegate::New(::TYPES[39/*Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object>*/], (void*)ScopeClosure__Execute1_fn, this)));
            case 3:
                return uDelegate::New(::TYPES[42/*Uno.Func<object, object, object, object>*/], (void*)::g::Outracks::Simulator::Runtime::LambdaClosure__Func3_fn, ::g::Outracks::Simulator::Runtime::LambdaClosure::New1(p, uDelegate::New(::TYPES[39/*Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object>*/], (void*)ScopeClosure__Execute1_fn, this)));
        }
    else

        switch (uPtr(uPtr(uPtr(p)->Signature)->Parameters)->Count())
        {
            case 0:
                return uDelegate::New(::TYPES[43/*Uno.Action*/], (void*)::g::Outracks::Simulator::Runtime::LambdaClosure__Action_fn, ::g::Outracks::Simulator::Runtime::LambdaClosure::New1(p, uDelegate::New(::TYPES[39/*Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object>*/], (void*)ScopeClosure__Execute1_fn, this)));
            case 1:
                return uDelegate::New(::TYPES[44/*Uno.Action<object>*/], (void*)::g::Outracks::Simulator::Runtime::LambdaClosure__Action1_fn, ::g::Outracks::Simulator::Runtime::LambdaClosure::New1(p, uDelegate::New(::TYPES[39/*Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object>*/], (void*)ScopeClosure__Execute1_fn, this)));
            case 2:
                return uDelegate::New(::TYPES[45/*Uno.Action<object, object>*/], (void*)::g::Outracks::Simulator::Runtime::LambdaClosure__Action2_fn, ::g::Outracks::Simulator::Runtime::LambdaClosure::New1(p, uDelegate::New(::TYPES[39/*Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object>*/], (void*)ScopeClosure__Execute1_fn, this)));
            case 3:
                return uDelegate::New(::TYPES[46/*Uno.Action<object, object, object>*/], (void*)::g::Outracks::Simulator::Runtime::LambdaClosure__Action3_fn, ::g::Outracks::Simulator::Runtime::LambdaClosure::New1(p, uDelegate::New(::TYPES[39/*Uno.Func<Outracks.Simulator.Bytecode.Lambda, object[], object>*/], (void*)ScopeClosure__Execute1_fn, this)));
        }

    U_THROW(::g::Uno::Exception::New2(::STRINGS[3/*"Illegal par...*/]));
}

// private object Evaluate(Outracks.Simulator.Bytecode.Literal e) [instance] :267
uObject* ScopeClosure::Evaluate11(::g::Outracks::Simulator::Bytecode::Literal* e)
{
    uStackFrame __("Outracks.Simulator.Runtime.ScopeClosure", "Evaluate(Outracks.Simulator.Bytecode.Literal)");
    uObject* ret6;
    return (::g::Outracks::Simulator::Bytecode::Literal__Match5_fn(uPtr(e), ::TYPES[47/*Outracks.Simulator.Bytecode.Literal.Match<object>*/], uDelegate::New(::TYPES[48/*Uno.Func<Outracks.Simulator.Bytecode.BooleanLiteral, object>*/], (void*)ScopeClosure__Evaluate2_fn, this), uDelegate::New(::TYPES[49/*Uno.Func<Outracks.Simulator.Bytecode.StringLiteral, object>*/], (void*)ScopeClosure__Evaluate19_fn, this), uDelegate::New(::TYPES[50/*Uno.Func<Outracks.Simulator.Bytecode.NumberLiteral, object>*/], (void*)ScopeClosure__Evaluate14_fn, this), uDelegate::New(::TYPES[51/*Uno.Func<Outracks.Simulator.Bytecode.EnumLiteral, object>*/], (void*)ScopeClosure__Evaluate6_fn, this), uDelegate::New(::TYPES[52/*Uno.Func<Outracks.Simulator.Bytecode.BlobLiteral, object>*/], (void*)ScopeClosure__Evaluate1_fn, this), &ret6), ret6);
}

// private object Evaluate(Outracks.Simulator.Bytecode.LogicalOr o) [instance] :151
uObject* ScopeClosure::Evaluate12(::g::Outracks::Simulator::Bytecode::LogicalOr* o)
{
    uStackFrame __("Outracks.Simulator.Runtime.ScopeClosure", "Evaluate(Outracks.Simulator.Bytecode.LogicalOr)");
    return uBox(::g::Uno::Bool_typeof(), uUnbox<bool>(::g::Uno::Bool_typeof(), Evaluate7(uPtr(o)->Left)) || uUnbox<bool>(::g::Uno::Bool_typeof(), Evaluate7(uPtr(o)->Right)));
}

// private object Evaluate(Outracks.Simulator.Bytecode.MethodGroup g) [instance] :139
uObject* ScopeClosure::Evaluate13(::g::Outracks::Simulator::Bytecode::MethodGroup* g)
{
    uStackFrame __("Outracks.Simulator.Runtime.ScopeClosure", "Evaluate(Outracks.Simulator.Bytecode.MethodGroup)");
    return ::g::Outracks::Simulator::Runtime::IReflection::CreateDelegate(uInterface(uPtr(_reflection), ::TYPES[20/*Outracks.Simulator.Runtime.IReflection*/]), uPtr(g)->DelegateType, Evaluate7(uPtr(g)->Object), uPtr(g)->MethodName, uPtr(g)->MethodSignature().Value< ::g::Outracks::Simulator::Bytecode::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::Signature*> > >());
}

// private object Evaluate(Outracks.Simulator.Bytecode.NumberLiteral l) [instance] :278
uObject* ScopeClosure::Evaluate14(::g::Outracks::Simulator::Bytecode::NumberLiteral* l)
{
    uStackFrame __("Outracks.Simulator.Runtime.ScopeClosure", "Evaluate(Outracks.Simulator.Bytecode.NumberLiteral)");

    switch (uPtr(l)->NumberType)
    {
        case 0:
            return uBox(::g::Uno::Double_typeof(), uPtr(l)->DoubleValue);
        case 1:
            return uBox(::g::Uno::Float_typeof(), (float)uPtr(l)->DoubleValue);
        case 2:
            return uBox<int>(::g::Uno::Int_typeof(), (int)uPtr(l)->DoubleValue);
        case 3:
            return uBox<uint32_t>(::g::Uno::UInt_typeof(), (uint32_t)uPtr(l)->DoubleValue);
        case 4:
            return uBox<int16_t>(::g::Uno::Short_typeof(), (int16_t)uPtr(l)->DoubleValue);
        case 5:
            return uBox<uint16_t>(::g::Uno::UShort_typeof(), (uint16_t)uPtr(l)->DoubleValue);
        case 6:
            return uBox<int8_t>(::g::Uno::SByte_typeof(), (int8_t)uPtr(l)->DoubleValue);
        case 7:
            return uBox<uint8_t>(::g::Uno::Byte_typeof(), (uint8_t)uPtr(l)->DoubleValue);
    }

    U_THROW(::g::Uno::ArgumentException::New4(::g::Uno::String::op_Addition1(::STRINGS[4/*"Invalid num...*/], uBox<int>(::g::Outracks::Simulator::Bytecode::NumberType_typeof(), uPtr(l)->NumberType))));
}

// private object Evaluate(Outracks.Simulator.Bytecode.ReadProperty e) [instance] :181
uObject* ScopeClosure::Evaluate15(::g::Outracks::Simulator::Bytecode::ReadProperty* e)
{
    uStackFrame __("Outracks.Simulator.Runtime.ScopeClosure", "Evaluate(Outracks.Simulator.Bytecode.ReadProperty)");
    return ::g::Outracks::Simulator::Runtime::IReflection::GetPropertyValue(uInterface(uPtr(_reflection), ::TYPES[20/*Outracks.Simulator.Runtime.IReflection*/]), Evaluate7(uPtr(e)->Object), uPtr(e)->Property);
}

// private object Evaluate(Outracks.Simulator.Bytecode.ReadStaticField e) [instance] :176
uObject* ScopeClosure::Evaluate16(::g::Outracks::Simulator::Bytecode::ReadStaticField* e)
{
    uStackFrame __("Outracks.Simulator.Runtime.ScopeClosure", "Evaluate(Outracks.Simulator.Bytecode.ReadStaticField)");
    return ::g::Outracks::Simulator::Runtime::IReflection::GetStaticPropertyOrFieldValue(uInterface(uPtr(_reflection), ::TYPES[20/*Outracks.Simulator.Runtime.IReflection*/]), uPtr(uPtr(e)->Field)->TypeName, uPtr(uPtr(e)->Field)->MemberName);
}

// private object Evaluate(Outracks.Simulator.Bytecode.ReadVariable e) [instance] :134
uObject* ScopeClosure::Evaluate17(::g::Outracks::Simulator::Bytecode::ReadVariable* e)
{
    uStackFrame __("Outracks.Simulator.Runtime.ScopeClosure", "Evaluate(Outracks.Simulator.Bytecode.ReadVariable)");
    return uPtr(_scope)->GetValue(uPtr(e)->Variable);
}

// private object Evaluate(Outracks.Simulator.Bytecode.RemoveEventHandler e) [instance] :198
uObject* ScopeClosure::Evaluate18(::g::Outracks::Simulator::Bytecode::RemoveEventHandler* e)
{
    uStackFrame __("Outracks.Simulator.Runtime.ScopeClosure", "Evaluate(Outracks.Simulator.Bytecode.RemoveEventHandler)");
    ::g::Outracks::Simulator::Runtime::IReflection::RemoveEventHandler(uInterface(uPtr(_reflection), ::TYPES[20/*Outracks.Simulator.Runtime.IReflection*/]), Evaluate7(uPtr(e)->Object), uPtr(e)->Event, Evaluate7(uPtr(e)->Handler));
    return NULL;
}

// private object Evaluate(Outracks.Simulator.Bytecode.StringLiteral e) [instance] :276
uObject* ScopeClosure::Evaluate19(::g::Outracks::Simulator::Bytecode::StringLiteral* e)
{
    uStackFrame __("Outracks.Simulator.Runtime.ScopeClosure", "Evaluate(Outracks.Simulator.Bytecode.StringLiteral)");
    return uPtr(e)->StringValue;
}

// private object Evaluate(Outracks.Simulator.Bytecode.WriteProperty p) [instance] :186
uObject* ScopeClosure::Evaluate20(::g::Outracks::Simulator::Bytecode::WriteProperty* p)
{
    uStackFrame __("Outracks.Simulator.Runtime.ScopeClosure", "Evaluate(Outracks.Simulator.Bytecode.WriteProperty)");
    ::g::Outracks::Simulator::Runtime::IReflection::SetPropertyValue(uInterface(uPtr(_reflection), ::TYPES[20/*Outracks.Simulator.Runtime.IReflection*/]), Evaluate7(uPtr(p)->Object), uPtr(p)->Property, Evaluate7(uPtr(p)->Value));
    return NULL;
}

// private object[] Evaluate(Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.Expression> arguments) [instance] :204
uArray* ScopeClosure::Evaluate21(::g::Outracks::Simulator::ImmutableList* arguments)
{
    uStackFrame __("Outracks.Simulator.Runtime.ScopeClosure", "Evaluate(Outracks.Simulator.ImmutableList<Outracks.Simulator.Bytecode.Expression>)");
    ::g::Outracks::Simulator::Bytecode::Expression* ret7;
    uArray* objects = uArray::New(::TYPES[2/*object[]*/], uPtr(arguments)->Count());

    for (int i = 0; i < arguments->Count(); i++)
        uPtr(objects)->Strong<uObject*>(i) = Evaluate7((::g::Outracks::Simulator::ImmutableList__get_Item_fn(uPtr(arguments), uCRef<int>(i), &ret7), ret7));

    return objects;
}

// private object Execute(object lambda, object[] arguments) [instance] :216
uObject* ScopeClosure::Execute(uObject* lambda, uArray* arguments)
{
    uStackFrame __("Outracks.Simulator.Runtime.ScopeClosure", "Execute(object,object[])");
    uDelegate* f0 = uAs<uDelegate*>(lambda, ::TYPES[38/*Uno.Func<object>*/]);

    if (::g::Uno::Delegate::op_Inequality(f0, NULL))
        return uPtr(f0)->Invoke();

    uDelegate* f1 = uAs<uDelegate*>(lambda, ::TYPES[40/*Uno.Func<object, object>*/]);

    if (::g::Uno::Delegate::op_Inequality(f1, NULL))
        return uPtr(f1)->Invoke(1, (uObject*)uPtr(arguments)->Strong<uObject*>(0));

    uDelegate* f2 = uAs<uDelegate*>(lambda, ::TYPES[41/*Uno.Func<object, object, object>*/]);

    if (::g::Uno::Delegate::op_Inequality(f2, NULL))
        return uPtr(f2)->Invoke(2, (uObject*)uPtr(arguments)->Strong<uObject*>(0), (uObject*)uPtr(arguments)->Strong<uObject*>(1));

    uDelegate* f3 = uAs<uDelegate*>(lambda, ::TYPES[42/*Uno.Func<object, object, object, object>*/]);

    if (::g::Uno::Delegate::op_Inequality(f3, NULL))
        return uPtr(f3)->Invoke(3, (uObject*)uPtr(arguments)->Strong<uObject*>(0), (uObject*)uPtr(arguments)->Strong<uObject*>(1), (uObject*)uPtr(arguments)->Strong<uObject*>(2));

    uDelegate* a0 = uAs<uDelegate*>(lambda, ::TYPES[43/*Uno.Action*/]);

    if (::g::Uno::Delegate::op_Inequality(a0, NULL))
        uPtr(a0)->InvokeVoid();

    uDelegate* a1 = uAs<uDelegate*>(lambda, ::TYPES[44/*Uno.Action<object>*/]);

    if (::g::Uno::Delegate::op_Inequality(a1, NULL))
        uPtr(a1)->InvokeVoid(uPtr(arguments)->Strong<uObject*>(0));

    uDelegate* a2 = uAs<uDelegate*>(lambda, ::TYPES[45/*Uno.Action<object, object>*/]);

    if (::g::Uno::Delegate::op_Inequality(a2, NULL))
        uPtr(a2)->Invoke(2, (uObject*)uPtr(arguments)->Strong<uObject*>(0), (uObject*)uPtr(arguments)->Strong<uObject*>(1));

    uDelegate* a3 = uAs<uDelegate*>(lambda, ::TYPES[46/*Uno.Action<object, object, object>*/]);

    if (::g::Uno::Delegate::op_Inequality(a3, NULL))
        uPtr(a3)->Invoke(3, (uObject*)uPtr(arguments)->Strong<uObject*>(0), (uObject*)uPtr(arguments)->Strong<uObject*>(1), (uObject*)uPtr(arguments)->Strong<uObject*>(2));

    return NULL;
}

// public object Execute(Outracks.Simulator.Bytecode.Lambda lambda, object[] arguments) [instance] :97
uObject* ScopeClosure::Execute1(::g::Outracks::Simulator::Bytecode::Lambda* lambda, uArray* arguments)
{
    uStackFrame __("Outracks.Simulator.Runtime.ScopeClosure", "Execute(Outracks.Simulator.Bytecode.Lambda,object[])");
    ::g::Outracks::Simulator::Bytecode::Optional1<uStrong< ::g::Outracks::Simulator::Runtime::Environment*> > ret8;
    ::g::Outracks::Simulator::Bytecode::BindVariable* ret9;
    ::g::Outracks::Simulator::Runtime::Environment* bodyEnv = ::g::Outracks::Simulator::Runtime::Environment::New1((::g::Outracks::Simulator::Bytecode::Optional1__op_Implicit1_fn(::TYPES[1/*Outracks.Simulator.Bytecode.Optional<Outracks.Simulator.Runtime.Environment>*/], _scope, &ret8), ret8));
    ScopeClosure* bodyClosure = ScopeClosure::New1(bodyEnv, _reflection);
    bodyEnv->Bind1(uPtr(uPtr(lambda)->Signature)->Parameters, arguments);

    for (uObject* enum1 = (uObject*)uPtr(lambda->LocalVariables)->GetEnumerator(); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[11/*Uno.Collections.IEnumerator*/])); )
    {
        ::g::Outracks::Simulator::Bytecode::BindVariable* b = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[53/*Uno.Collections.IEnumerator<Outracks.Simulator.Bytecode.BindVariable>*/]), &ret9), ret9);
        uPtr(bodyEnv)->Bind(uPtr(b)->Variable, uPtr(bodyClosure)->Evaluate7(uPtr(b)->Expression));
    }

    return bodyClosure->Execute2((uObject*)lambda->Statements);
}

// private object Execute(Uno.Collections.IEnumerable<Outracks.Simulator.Bytecode.Statement> statements) [instance] :110
uObject* ScopeClosure::Execute2(uObject* statements)
{
    uStackFrame __("Outracks.Simulator.Runtime.ScopeClosure", "Execute(Uno.Collections.IEnumerable<Outracks.Simulator.Bytecode.Statement>)");
    ::g::Outracks::Simulator::Bytecode::Statement* ret10;

    for (uObject* enum2 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(statements), ::TYPES[54/*Uno.Collections.IEnumerable<Outracks.Simulator.Bytecode.Statement>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum2), ::TYPES[11/*Uno.Collections.IEnumerator*/])); )
    {
        ::g::Outracks::Simulator::Bytecode::Statement* statement = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum2), ::TYPES[55/*Uno.Collections.IEnumerator<Outracks.Simulator.Bytecode.Statement>*/]), &ret10), ret10);
        ::g::Outracks::Simulator::Bytecode::Expression* e = uAs< ::g::Outracks::Simulator::Bytecode::Expression*>(statement, ::TYPES[56/*Outracks.Simulator.Bytecode.Expression*/]);

        if (e != NULL)
            Evaluate7(e);

        ::g::Outracks::Simulator::Bytecode::Return* r = uAs< ::g::Outracks::Simulator::Bytecode::Return*>(statement, ::TYPES[57/*Outracks.Simulator.Bytecode.Return*/]);

        if (r != NULL)
            return Evaluate7(uPtr(r)->Value);
    }

    return NULL;
}

// public ScopeClosure New(Outracks.Simulator.Runtime.Environment scope, Outracks.Simulator.Runtime.IReflection reflection) [static] :87
ScopeClosure* ScopeClosure::New1(::g::Outracks::Simulator::Runtime::Environment* scope, uObject* reflection)
{
    ScopeClosure* obj4 = (ScopeClosure*)uNew(ScopeClosure_typeof());
    obj4->ctor_(scope, reflection);
    return obj4;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/runtime/$.uno
// -------------------------------------------------------------------------------

// public sealed class Selection :565
// {
static void Selection_build(uType* type)
{
    ::STRINGS[2] = uString::Const("/usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/runtime/$.uno");
    ::TYPES[10] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[11] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[12] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[13] = ::g::Uno::Exception_typeof();
    type->SetInterfaces(
        ::g::Fuse::Preview::ISelection_typeof(), offsetof(Selection_type, interface0));
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::Simulator::Runtime::Selection, _property), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::Simulator::Runtime::Selection, _tagHash), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("Each", NULL, (void*)Selection__Each_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Action1_typeof()->MakeType(uObject_typeof(), NULL)),
        new uFunction("IsPropertySelected", NULL, (void*)Selection__IsPropertySelected_fn, 0, false, ::g::Uno::Bool_typeof(), 2, uObject_typeof(), ::g::Uno::String_typeof()),
        new uFunction("IsSelected", NULL, (void*)Selection__IsSelected_fn, 0, false, ::g::Uno::Bool_typeof(), 1, uObject_typeof()),
        new uFunction("get_Items", NULL, (void*)Selection__get_Items_fn, 0, false, ::TYPES[10/*Uno.Collections.IEnumerable<object>*/], 0),
        new uFunction(".ctor", NULL, (void*)Selection__New1_fn, 0, true, type, 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()));
}

Selection_type* Selection_typeof()
{
    static uSStrong<Selection_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Selection);
    options.TypeSize = sizeof(Selection_type);
    type = (Selection_type*)uClassType::New("Outracks.Simulator.Runtime.Selection", options);
    type->fp_build_ = Selection_build;
    type->interface0.fp_IsSelected = (void(*)(uObject*, uObject*, bool*))Selection__IsSelected_fn;
    type->interface0.fp_IsPropertySelected = (void(*)(uObject*, uObject*, uString*, bool*))Selection__IsPropertySelected_fn;
    return type;
}

// public Selection(string tagHash, [string property]) :570
void Selection__ctor__fn(Selection* __this, uString* tagHash, uString* property)
{
    __this->ctor_(tagHash, property);
}

// public void Each(Uno.Action<object> action) :576
void Selection__Each_fn(Selection* __this, uDelegate* action)
{
    __this->Each(action);
}

// public bool IsPropertySelected(object obj, string property) :597
void Selection__IsPropertySelected_fn(Selection* __this, uObject* obj, uString* property, bool* __retval)
{
    *__retval = __this->IsPropertySelected(obj, property);
}

// public bool IsSelected(object obj) :602
void Selection__IsSelected_fn(Selection* __this, uObject* obj, bool* __retval)
{
    *__retval = __this->IsSelected(obj);
}

// public Uno.Collections.IEnumerable<object> get_Items() :594
void Selection__get_Items_fn(Selection* __this, uObject** __retval)
{
    *__retval = __this->Items();
}

// public Selection New(string tagHash, [string property]) :570
void Selection__New1_fn(uString* tagHash, uString* property, Selection** __retval)
{
    *__retval = Selection::New1(tagHash, property);
}

// public Selection(string tagHash, [string property]) [instance] :570
void Selection::ctor_(uString* tagHash, uString* property)
{
    _tagHash = tagHash;
    _property = property;
}

// public void Each(Uno.Action<object> action) [instance] :576
void Selection::Each(uDelegate* action)
{
    uStackFrame __("Outracks.Simulator.Runtime.Selection", "Each(Uno.Action<object>)");
    uObject* ret3;

    for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(Items()), ::TYPES[10/*Uno.Collections.IEnumerable<object>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[11/*Uno.Collections.IEnumerator*/])); )
    {
        uObject* obj = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[12/*Uno.Collections.IEnumerator<object>*/]), &ret3), ret3);

        try
        {
            uPtr(action)->InvokeVoid(obj);
        }
        catch (const uThrowable& __t)
        {
            ::g::Uno::Exception* e = __t.Exception;
            ::g::Uno::Diagnostics::Debug::Log5(uPtr(e)->ToString(), 1, ::STRINGS[2/*"/usr/local/...*/], 586);
        }
    }
}

// public bool IsPropertySelected(object obj, string property) [instance] :597
bool Selection::IsPropertySelected(uObject* obj, uString* property)
{
    uStackFrame __("Outracks.Simulator.Runtime.Selection", "IsPropertySelected(object,string)");
    return IsSelected(obj) && ::g::Uno::String::op_Equality(property, _property);
}

// public bool IsSelected(object obj) [instance] :602
bool Selection::IsSelected(uObject* obj)
{
    uStackFrame __("Outracks.Simulator.Runtime.Selection", "IsSelected(object)");
    return ::g::Uno::String::op_Equality(::g::Outracks::Simulator::Runtime::ObjectTagRegistry::GetTagHash(obj), _tagHash);
}

// public Uno.Collections.IEnumerable<object> get_Items() [instance] :594
uObject* Selection::Items()
{
    uStackFrame __("Outracks.Simulator.Runtime.Selection", "get_Items()");
    return ::g::Outracks::Simulator::Runtime::ObjectTagRegistry::GetObjectsWithTag(_tagHash);
}

// public Selection New(string tagHash, [string property]) [static] :570
Selection* Selection::New1(uString* tagHash, uString* property)
{
    Selection* obj2 = (Selection*)uNew(Selection_typeof());
    obj2->ctor_(tagHash, property);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Reflection.Uno/0.0.0/$.uno
// ---------------------------------------------------------------------------

// public sealed class TypeNotFound :8
// {
static void TypeNotFound_build(uType* type)
{
    ::STRINGS[5] = uString::Const("Type not found: ");
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)TypeNotFound__New4_fn, 0, true, type, 1, ::g::Outracks::Simulator::Bytecode::TypeName_typeof()));
}

::g::Uno::Exception_type* TypeNotFound_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(TypeNotFound);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Outracks.Simulator.Runtime.TypeNotFound", options);
    type->fp_build_ = TypeNotFound_build;
    return type;
}

// public TypeNotFound(Outracks.Simulator.Bytecode.TypeName typeName) :10
void TypeNotFound__ctor_3_fn(TypeNotFound* __this, ::g::Outracks::Simulator::Bytecode::TypeName* typeName)
{
    __this->ctor_3(typeName);
}

// public TypeNotFound New(Outracks.Simulator.Bytecode.TypeName typeName) :10
void TypeNotFound__New4_fn(::g::Outracks::Simulator::Bytecode::TypeName* typeName, TypeNotFound** __retval)
{
    *__retval = TypeNotFound::New4(typeName);
}

// public TypeNotFound(Outracks.Simulator.Bytecode.TypeName typeName) [instance] :10
void TypeNotFound::ctor_3(::g::Outracks::Simulator::Bytecode::TypeName* typeName)
{
    ctor_1(::g::Uno::String::op_Addition2(::STRINGS[5/*"Type not fo...*/], uPtr(typeName)->FullName()));
}

// public TypeNotFound New(Outracks.Simulator.Bytecode.TypeName typeName) [static] :10
TypeNotFound* TypeNotFound::New4(::g::Outracks::Simulator::Bytecode::TypeName* typeName)
{
    TypeNotFound* obj1 = (TypeNotFound*)uNew(TypeNotFound_typeof());
    obj1->ctor_3(typeName);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Reflection.Uno/0.0.0/$.uno
// ---------------------------------------------------------------------------

// public sealed class UnambiguousMethodNotFound :22
// {
static void UnambiguousMethodNotFound_build(uType* type)
{
    ::STRINGS[6] = uString::Const("Method call on ");
    ::STRINGS[7] = uString::Const(" is ambiguous: ");
    type->SetFields(3);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)UnambiguousMethodNotFound__New4_fn, 0, true, type, 2, ::g::Outracks::Simulator::Bytecode::TypeName_typeof(), ::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof()));
}

::g::Uno::Exception_type* UnambiguousMethodNotFound_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(UnambiguousMethodNotFound);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Outracks.Simulator.Runtime.UnambiguousMethodNotFound", options);
    type->fp_build_ = UnambiguousMethodNotFound_build;
    return type;
}

// public UnambiguousMethodNotFound(Outracks.Simulator.Bytecode.TypeName typeName, Outracks.Simulator.Bytecode.TypeMemberName methodName) :24
void UnambiguousMethodNotFound__ctor_3_fn(UnambiguousMethodNotFound* __this, ::g::Outracks::Simulator::Bytecode::TypeName* typeName, ::g::Outracks::Simulator::Bytecode::TypeMemberName* methodName)
{
    __this->ctor_3(typeName, methodName);
}

// public UnambiguousMethodNotFound New(Outracks.Simulator.Bytecode.TypeName typeName, Outracks.Simulator.Bytecode.TypeMemberName methodName) :24
void UnambiguousMethodNotFound__New4_fn(::g::Outracks::Simulator::Bytecode::TypeName* typeName, ::g::Outracks::Simulator::Bytecode::TypeMemberName* methodName, UnambiguousMethodNotFound** __retval)
{
    *__retval = UnambiguousMethodNotFound::New4(typeName, methodName);
}

// public UnambiguousMethodNotFound(Outracks.Simulator.Bytecode.TypeName typeName, Outracks.Simulator.Bytecode.TypeMemberName methodName) [instance] :24
void UnambiguousMethodNotFound::ctor_3(::g::Outracks::Simulator::Bytecode::TypeName* typeName, ::g::Outracks::Simulator::Bytecode::TypeMemberName* methodName)
{
    ctor_1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[6/*"Method call...*/], uPtr(typeName)->FullName()), ::STRINGS[7/*" is ambiguo...*/]), uPtr(methodName)->Name));
}

// public UnambiguousMethodNotFound New(Outracks.Simulator.Bytecode.TypeName typeName, Outracks.Simulator.Bytecode.TypeMemberName methodName) [static] :24
UnambiguousMethodNotFound* UnambiguousMethodNotFound::New4(::g::Outracks::Simulator::Bytecode::TypeName* typeName, ::g::Outracks::Simulator::Bytecode::TypeMemberName* methodName)
{
    UnambiguousMethodNotFound* obj1 = (UnambiguousMethodNotFound*)uNew(UnambiguousMethodNotFound_typeof());
    obj1->ctor_3(typeName, methodName);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/runtime/$.uno
// -------------------------------------------------------------------------------

// public sealed class VariableNotBound :46
// {
static void VariableNotBound_build(uType* type)
{
    ::STRINGS[8] = uString::Const("Element '");
    ::STRINGS[9] = uString::Const("' was referenced before it was initialized");
    type->SetFields(3,
        ::g::Outracks::Simulator::Bytecode::Variable_typeof(), offsetof(::g::Outracks::Simulator::Runtime::VariableNotBound, Variable), 0);
    type->Reflection.SetFields(1,
        new uField("Variable", 3));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)VariableNotBound__New4_fn, 0, true, type, 1, ::g::Outracks::Simulator::Bytecode::Variable_typeof()));
}

::g::Uno::Exception_type* VariableNotBound_typeof()
{
    static uSStrong< ::g::Uno::Exception_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Exception_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(VariableNotBound);
    options.TypeSize = sizeof(::g::Uno::Exception_type);
    type = (::g::Uno::Exception_type*)uClassType::New("Outracks.Simulator.Runtime.VariableNotBound", options);
    type->fp_build_ = VariableNotBound_build;
    return type;
}

// public VariableNotBound(Outracks.Simulator.Bytecode.Variable variable) :50
void VariableNotBound__ctor_3_fn(VariableNotBound* __this, ::g::Outracks::Simulator::Bytecode::Variable* variable)
{
    __this->ctor_3(variable);
}

// public VariableNotBound New(Outracks.Simulator.Bytecode.Variable variable) :50
void VariableNotBound__New4_fn(::g::Outracks::Simulator::Bytecode::Variable* variable, VariableNotBound** __retval)
{
    *__retval = VariableNotBound::New4(variable);
}

// public VariableNotBound(Outracks.Simulator.Bytecode.Variable variable) [instance] :50
void VariableNotBound::ctor_3(::g::Outracks::Simulator::Bytecode::Variable* variable)
{
    ctor_1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[8/*"Element '"*/], uPtr(variable)->Name), ::STRINGS[9/*"' was refer...*/]));
    Variable = variable;
}

// public VariableNotBound New(Outracks.Simulator.Bytecode.Variable variable) [static] :50
VariableNotBound* VariableNotBound::New4(::g::Outracks::Simulator::Bytecode::Variable* variable)
{
    VariableNotBound* obj1 = (VariableNotBound*)uNew(VariableNotBound_typeof());
    obj1->ctor_3(variable);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/runtime/$.uno
// -------------------------------------------------------------------------------

// public static class VirtualMachine :68
// {
static void VirtualMachine_build(uType* type)
{
    ::TYPES[1] = ::g::Outracks::Simulator::Bytecode::Optional1_typeof()->MakeType(::g::Outracks::Simulator::Runtime::Environment_typeof(), NULL);
    type->Reflection.SetFunctions(2,
        new uFunction("Execute", NULL, (void*)VirtualMachine__Execute_fn, 0, true, uObject_typeof(), 2, ::g::Outracks::Simulator::Bytecode::Lambda_typeof(), uObject_typeof()->Array()),
        new uFunction("Execute", NULL, (void*)VirtualMachine__Execute1_fn, 0, true, uObject_typeof(), 3, ::g::Outracks::Simulator::Runtime::IReflection_typeof(), ::g::Outracks::Simulator::Bytecode::Lambda_typeof(), uObject_typeof()->Array()));
}

uClassType* VirtualMachine_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Outracks.Simulator.Runtime.VirtualMachine", options);
    type->fp_build_ = VirtualMachine_build;
    return type;
}

// public static object Execute(Outracks.Simulator.Bytecode.Lambda lambda, object[] arguments) :71
void VirtualMachine__Execute_fn(::g::Outracks::Simulator::Bytecode::Lambda* lambda, uArray* arguments, uObject** __retval)
{
    *__retval = VirtualMachine::Execute(lambda, arguments);
}

// public static object Execute(Outracks.Simulator.Runtime.IReflection reflection, Outracks.Simulator.Bytecode.Lambda lambda, object[] arguments) :76
void VirtualMachine__Execute1_fn(uObject* reflection, ::g::Outracks::Simulator::Bytecode::Lambda* lambda, uArray* arguments, uObject** __retval)
{
    *__retval = VirtualMachine::Execute1(reflection, lambda, arguments);
}

// public static object Execute(Outracks.Simulator.Bytecode.Lambda lambda, object[] arguments) [static] :71
uObject* VirtualMachine::Execute(::g::Outracks::Simulator::Bytecode::Lambda* lambda, uArray* arguments)
{
    return VirtualMachine::Execute1(::g::Outracks::Simulator::Context::Reflection(), lambda, arguments);
}

// public static object Execute(Outracks.Simulator.Runtime.IReflection reflection, Outracks.Simulator.Bytecode.Lambda lambda, object[] arguments) [static] :76
uObject* VirtualMachine::Execute1(uObject* reflection, ::g::Outracks::Simulator::Bytecode::Lambda* lambda, uArray* arguments)
{
    uStackFrame __("Outracks.Simulator.Runtime.VirtualMachine", "Execute(Outracks.Simulator.Runtime.IReflection,Outracks.Simulator.Bytecode.Lambda,object[])");
    ::g::Outracks::Simulator::Bytecode::Optional1<uStrong< ::g::Outracks::Simulator::Runtime::Environment*> > ret1;
    return ::g::Outracks::Simulator::Runtime::ScopeClosure::New1(::g::Outracks::Simulator::Runtime::Environment::New1((::g::Outracks::Simulator::Bytecode::Optional1__op_Implicit_fn(::TYPES[1/*Outracks.Simulator.Bytecode.Optional<Outracks.Simulator.Runtime.Environment>*/], ::g::Outracks::Simulator::Bytecode::Optional::None(), &ret1), ret1)), reflection)->Execute1(lambda, arguments);
}
// }

}}}} // ::g::Outracks::Simulator::Runtime
