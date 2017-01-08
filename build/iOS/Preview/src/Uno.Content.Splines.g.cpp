// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Bool.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Content.Splines.KeyframedSpline-2.h>
#include <Uno.Content.Splines.KeyframedSpline-2.Key.h>
#include <Uno.Content.Splines.LinearSplineFloat.h>
#include <Uno.Content.Splines.LinearSplineFloat2.h>
#include <Uno.Content.Splines.LinearSplineFloat3.h>
#include <Uno.Content.Splines.LinearSplineFloat4.h>
#include <Uno.Content.Splines.LinearSplineFloat4x4.h>
#include <Uno.Content.Splines.Spline-1.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
static uType* TYPES[2];

namespace g{
namespace Uno{
namespace Content{
namespace Splines{

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/content/splines/$.uno
// -------------------------------------------------------------------------------------------------------------

// public struct KeyframedSpline<TValue, TData>.Key :50
// {
static void KeyframedSpline__Key_build(uType* type)
{
    type->SetPrecalc(
        type->T(1));
    type->SetFields(0,
        ::g::Uno::Double_typeof(), (uintptr_t)0, uFieldFlagsConstrained,
        type->T(1), (uintptr_t)0, uFieldFlagsConstrained);
    type->Reflection.SetFields(2,
        new uField("Time", 0),
        new uField("Value", 1));
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", type, (void*)KeyframedSpline__Key__New1_fn, 0, true, type, 2, ::g::Uno::Double_typeof(), type->T(1)));
}

uStructType* KeyframedSpline__Key_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 2;
    options.PrecalcCount = 1;
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Content.Splines.KeyframedSpline`2.Key", options);
    type->fp_build_ = KeyframedSpline__Key_build;
    return type;
}

// public Key(double time, TData value) :55
void KeyframedSpline__Key__ctor__fn(uTRef __this, uType* __type, double* time, void* value)
{
    uType* __types[] = {
        __type->Precalced(0/*TData*/),
    };
    uT value_(__types[0], U_ALLOCA(__types[0]->ValueSize));
    double time_ = *time;
    value_ = value;
    __type->Field(__this, 0/*Time*/).Value<double>() = time_;
    __type->Field(__this, 1/*Value*/) = value_;
}

// public Key New(double time, TData value) :55
void KeyframedSpline__Key__New1_fn(uType* __type, double* time, void* value, uTRef __retval)
{
    uType* __types[] = {
        __type->Precalced(0/*TData*/),
    };
    uT value_(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT obj1(__type, U_ALLOCA(__type->ValueSize));
    double time_ = *time;
    value_ = value;
    KeyframedSpline__Key__ctor__fn(&obj1, __type, uCRef(time_), value_);
    return __retval.Store(obj1), void();
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/content/splines/$.uno
// -------------------------------------------------------------------------------------------------------------

// public abstract class KeyframedSpline<TValue, TData> :46
// {
static void KeyframedSpline_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::List_typeof();
    ::TYPES[1] = KeyframedSpline__Key_typeof();
    type->SetBase(::g::Uno::Content::Splines::Spline_typeof()->MakeType(type->T(0), NULL));
    type->SetPrecalc(
        ::g::Uno::Collections::List_typeof()->MakeType(KeyframedSpline__Key_typeof()->MakeType(type->T(0), type->T(1), NULL), NULL),
        KeyframedSpline__Key_typeof()->MakeType(type->T(0), type->T(1), NULL),
        type->T(1));
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Content::Splines::KeyframedSpline, cache), 0,
        ::TYPES[0/*Uno.Collections.List`1*/]->MakeType(::TYPES[1/*Uno.Content.Splines.KeyframedSpline`2.Key*/]->MakeType(type->T(0), type->T(1), NULL), NULL), offsetof(::g::Uno::Content::Splines::KeyframedSpline, keys), 0);
    type->Reflection.SetFunctions(14,
        new uFunction("AddKey", NULL, (void*)KeyframedSpline__AddKey_fn, 0, false, ::g::Uno::Int_typeof(), 2, ::g::Uno::Double_typeof(), type->T(1)),
        new uFunction("ClearKeys", NULL, (void*)KeyframedSpline__ClearKeys_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("FindLeftIndex", NULL, (void*)KeyframedSpline__FindLeftIndex_fn, 0, false, ::g::Uno::Int_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("FindNearestIndex", NULL, (void*)KeyframedSpline__FindNearestIndex_fn, 0, false, ::g::Uno::Int_typeof(), 1, ::g::Uno::Double_typeof()),
        new uFunction("FindValue", NULL, (void*)KeyframedSpline__FindValue_fn, 0, false, type->T(1), 1, ::g::Uno::Double_typeof()),
        new uFunction("FindValues", NULL, (void*)KeyframedSpline__FindValues_fn, 0, false, uVoid_typeof(), 4, ::g::Uno::Double_typeof(), type->T(1)->ByRef(), type->T(1)->ByRef(), ::g::Uno::Float_typeof()->ByRef()),
        new uFunction("FindValues", NULL, (void*)KeyframedSpline__FindValues1_fn, 0, false, uVoid_typeof(), 6, ::g::Uno::Double_typeof(), type->T(1)->ByRef(), type->T(1)->ByRef(), type->T(1)->ByRef(), type->T(1)->ByRef(), ::g::Uno::Float_typeof()->ByRef()),
        new uFunction("GetTime", NULL, (void*)KeyframedSpline__GetTime_fn, 0, false, ::g::Uno::Double_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("GetValue", NULL, (void*)KeyframedSpline__GetValue_fn, 0, false, type->T(1), 1, ::g::Uno::Int_typeof()),
        new uFunction("get_KeyCount", NULL, (void*)KeyframedSpline__get_KeyCount_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("Map", type, (void*)KeyframedSpline__Map_fn, 0, true, ::g::Uno::Float_typeof(), 3, ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof(), ::g::Uno::Double_typeof()),
        new uFunction("RemoveKey", NULL, (void*)KeyframedSpline__RemoveKey_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("SetTime", NULL, (void*)KeyframedSpline__SetTime_fn, 0, false, ::g::Uno::Int_typeof(), 2, ::g::Uno::Int_typeof(), ::g::Uno::Double_typeof()),
        new uFunction("SetValue", NULL, (void*)KeyframedSpline__SetValue_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Int_typeof(), type->T(1)));
}

::g::Uno::Content::Splines::Spline_type* KeyframedSpline_typeof()
{
    static uSStrong< ::g::Uno::Content::Splines::Spline_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Content::Splines::Spline_typeof();
    options.FieldCount = 2;
    options.GenericCount = 2;
    options.PrecalcCount = 3;
    options.ObjectSize = sizeof(KeyframedSpline);
    options.TypeSize = sizeof(::g::Uno::Content::Splines::Spline_type);
    type = (::g::Uno::Content::Splines::Spline_type*)uClassType::New("Uno.Content.Splines.KeyframedSpline`2", options);
    type->fp_build_ = KeyframedSpline_build;
    type->fp_get_End = (void(*)(::g::Uno::Content::Splines::Spline*, double*))KeyframedSpline__get_End_fn;
    type->fp_get_Start = (void(*)(::g::Uno::Content::Splines::Spline*, double*))KeyframedSpline__get_Start_fn;
    return type;
}

// protected KeyframedSpline() :65
void KeyframedSpline__ctor_1_fn(KeyframedSpline* __this)
{
    __this->ctor_1();
}

// protected KeyframedSpline(Uno.Content.Splines.KeyframedSpline<TValue, TData>.Key[] keys) :69
void KeyframedSpline__ctor_2_fn(KeyframedSpline* __this, uArray* keys1)
{
    __this->ctor_2(keys1);
}

// public int AddKey(double time, TData value) :127
void KeyframedSpline__AddKey_fn(KeyframedSpline* __this, double* time, void* value, int* __retval)
{
    uType* __types[] = {
        __this->__type->GetBase(KeyframedSpline_typeof())->Precalced(1/*Uno.Content.Splines.KeyframedSpline<TValue, TData>.Key*/),
        __this->__type->GetBase(KeyframedSpline_typeof())->Precalced(2/*TData*/),
    };
    uStackFrame __("Uno.Content.Splines.KeyframedSpline`2", "AddKey(double,TData)");
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT value_(__types[1], U_ALLOCA(__types[1]->ValueSize));
    double time_ = *time;
    value_ = value;
    int i = __this->FindLeftIndex(time_) + 1;
    ::g::Uno::Collections::List__Insert_fn(uPtr(__this->keys), uCRef<int>(i), (KeyframedSpline__Key__New1_fn(__types[0], uCRef(time_), value_, &ret2), ret2));
    return *__retval = i, void();
}

// public void ClearKeys() :140
void KeyframedSpline__ClearKeys_fn(KeyframedSpline* __this)
{
    __this->ClearKeys();
}

// public override sealed double get_End() :82
void KeyframedSpline__get_End_fn(KeyframedSpline* __this, double* __retval)
{
    uType* __types[] = {
        __this->__type->GetBase(KeyframedSpline_typeof())->Precalced(1/*Uno.Content.Splines.KeyframedSpline<TValue, TData>.Key*/),
    };
    uStackFrame __("Uno.Content.Splines.KeyframedSpline`2", "get_End()");
    uT ret26(__types[0], U_ALLOCA(__types[0]->ValueSize));
    return *__retval = (::g::Uno::Collections::List__get_Item_fn(uPtr(__this->keys), uCRef<int>(uPtr(__this->keys)->Count() - 1), &ret26), ret26)[0/*Time*/].Value<double>(), void();
}

// public int FindLeftIndex(double time) :85
void KeyframedSpline__FindLeftIndex_fn(KeyframedSpline* __this, double* time, int* __retval)
{
    *__retval = __this->FindLeftIndex(*time);
}

// public int FindNearestIndex(double time) :107
void KeyframedSpline__FindNearestIndex_fn(KeyframedSpline* __this, double* time, int* __retval)
{
    *__retval = __this->FindNearestIndex(*time);
}

// public TData FindValue(double time) :182
void KeyframedSpline__FindValue_fn(KeyframedSpline* __this, double* time, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->GetBase(KeyframedSpline_typeof())->Precalced(1/*Uno.Content.Splines.KeyframedSpline<TValue, TData>.Key*/),
    };
    uStackFrame __("Uno.Content.Splines.KeyframedSpline`2", "FindValue(double)");
    uT ret9(__types[0], U_ALLOCA(__types[0]->ValueSize));
    double time_ = *time;
    return __retval.Store((::g::Uno::Collections::List__get_Item_fn(uPtr(__this->keys), uCRef<int>(::g::Uno::Math::Max8(0, __this->FindLeftIndex(time_))), &ret9), ret9)[1/*Value*/]), void();
}

// public void FindValues(double time, TData& a, TData& b, float& p) :196
void KeyframedSpline__FindValues_fn(KeyframedSpline* __this, double* time, uTRef a, uTRef b, float* p)
{
    uType* __types[] = {
        __this->__type->GetBase(KeyframedSpline_typeof())->Precalced(1/*Uno.Content.Splines.KeyframedSpline<TValue, TData>.Key*/),
    };
    uStackFrame __("Uno.Content.Splines.KeyframedSpline`2", "FindValues(double,TData&,TData&,float&)");
    uT ret10(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret11(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ka(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT kb(__types[0], U_ALLOCA(__types[0]->ValueSize));
    double time_ = *time;
    int i = __this->FindLeftIndex(time_);
    ka = (::g::Uno::Collections::List__get_Item_fn(uPtr(__this->keys), uCRef<int>(::g::Uno::Math::Max8(i, 0)), &ret10), ret10);
    kb = (::g::Uno::Collections::List__get_Item_fn(uPtr(__this->keys), uCRef<int>(::g::Uno::Math::Min8(i + 1, uPtr(__this->keys)->Count() - 1)), &ret11), ret11);
    a.Store(ka[1/*Value*/]);
    b.Store(kb[1/*Value*/]);

    if (ka[0/*Time*/].Value<double>() == kb[0/*Time*/].Value<double>())
        *p = 0.0f;
    else
        *p = KeyframedSpline::Map(__this->__type->GetBase(KeyframedSpline_typeof()), ka[0/*Time*/].Value<double>(), kb[0/*Time*/].Value<double>(), time_);
}

// public void FindValues(double time, TData& a, TData& b, TData& c, TData& d, float& p) :211
void KeyframedSpline__FindValues1_fn(KeyframedSpline* __this, double* time, uTRef a, uTRef b, uTRef c, uTRef d, float* p)
{
    uType* __types[] = {
        __this->__type->GetBase(KeyframedSpline_typeof())->Precalced(1/*Uno.Content.Splines.KeyframedSpline<TValue, TData>.Key*/),
    };
    uStackFrame __("Uno.Content.Splines.KeyframedSpline`2", "FindValues(double,TData&,TData&,TData&,TData&,float&)");
    uT ret12(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret13(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret14(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret15(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ka(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT kb(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT kc(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT kd(__types[0], U_ALLOCA(__types[0]->ValueSize));
    double time_ = *time;
    int i = __this->FindLeftIndex(time_);
    ka = (::g::Uno::Collections::List__get_Item_fn(uPtr(__this->keys), uCRef<int>(::g::Uno::Math::Max8(i - 1, 0)), &ret12), ret12);
    kb = (::g::Uno::Collections::List__get_Item_fn(uPtr(__this->keys), uCRef<int>(::g::Uno::Math::Max8(i, 0)), &ret13), ret13);
    kc = (::g::Uno::Collections::List__get_Item_fn(uPtr(__this->keys), uCRef<int>(::g::Uno::Math::Min8(i + 1, uPtr(__this->keys)->Count() - 1)), &ret14), ret14);
    kd = (::g::Uno::Collections::List__get_Item_fn(uPtr(__this->keys), uCRef<int>(::g::Uno::Math::Min8(i + 2, uPtr(__this->keys)->Count() - 1)), &ret15), ret15);
    a.Store(ka[1/*Value*/]);
    b.Store(kb[1/*Value*/]);
    c.Store(kc[1/*Value*/]);
    d.Store(kd[1/*Value*/]);

    if (kb[0/*Time*/].Value<double>() == kc[0/*Time*/].Value<double>())
        *p = 0.0f;
    else
        *p = KeyframedSpline::Map(__this->__type->GetBase(KeyframedSpline_typeof()), kb[0/*Time*/].Value<double>(), kc[0/*Time*/].Value<double>(), time_);
}

// public double GetTime(int index) :156
void KeyframedSpline__GetTime_fn(KeyframedSpline* __this, int* index, double* __retval)
{
    *__retval = __this->GetTime(*index);
}

// public TData GetValue(int index) :151
void KeyframedSpline__GetValue_fn(KeyframedSpline* __this, int* index, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->GetBase(KeyframedSpline_typeof())->Precalced(1/*Uno.Content.Splines.KeyframedSpline<TValue, TData>.Key*/),
    };
    uStackFrame __("Uno.Content.Splines.KeyframedSpline`2", "GetValue(int)");
    uT ret17(__types[0], U_ALLOCA(__types[0]->ValueSize));
    int index_ = *index;
    return __retval.Store((::g::Uno::Collections::List__get_Item_fn(uPtr(__this->keys), uCRef<int>(index_), &ret17), ret17)[1/*Value*/]), void();
}

// public int get_KeyCount() :148
void KeyframedSpline__get_KeyCount_fn(KeyframedSpline* __this, int* __retval)
{
    *__retval = __this->KeyCount();
}

// public static float Map(double a, double b, double t) :187
void KeyframedSpline__Map_fn(uType* __type, double* a, double* b, double* t, float* __retval)
{
    *__retval = KeyframedSpline::Map(__type, *a, *b, *t);
}

// public void RemoveKey(int index) :134
void KeyframedSpline__RemoveKey_fn(KeyframedSpline* __this, int* index)
{
    __this->RemoveKey(*index);
}

// public int SetTime(int index, double time) :166
void KeyframedSpline__SetTime_fn(KeyframedSpline* __this, int* index, double* time, int* __retval)
{
    *__retval = __this->SetTime(*index, *time);
}

// public void SetValue(int index, TData value) :161
void KeyframedSpline__SetValue_fn(KeyframedSpline* __this, int* index, void* value)
{
    uType* __types[] = {
        __this->__type->GetBase(KeyframedSpline_typeof())->Precalced(1/*Uno.Content.Splines.KeyframedSpline<TValue, TData>.Key*/),
        __this->__type->GetBase(KeyframedSpline_typeof())->Precalced(2/*TData*/),
    };
    uStackFrame __("Uno.Content.Splines.KeyframedSpline`2", "SetValue(int,TData)");
    uT ret24(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret25(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT value_(__types[1], U_ALLOCA(__types[1]->ValueSize));
    int index_ = *index;
    value_ = value;
    ::g::Uno::Collections::List__set_Item_fn(uPtr(__this->keys), uCRef<int>(index_), (KeyframedSpline__Key__New1_fn(__types[0], uCRef((::g::Uno::Collections::List__get_Item_fn(uPtr(__this->keys), uCRef<int>(index_), &ret25), ret25)[0/*Time*/].Value<double>()), value_, &ret24), ret24));
}

// public override sealed double get_Start() :77
void KeyframedSpline__get_Start_fn(KeyframedSpline* __this, double* __retval)
{
    uType* __types[] = {
        __this->__type->GetBase(KeyframedSpline_typeof())->Precalced(1/*Uno.Content.Splines.KeyframedSpline<TValue, TData>.Key*/),
    };
    uStackFrame __("Uno.Content.Splines.KeyframedSpline`2", "get_Start()");
    uT ret27(__types[0], U_ALLOCA(__types[0]->ValueSize));
    return *__retval = (::g::Uno::Collections::List__get_Item_fn(uPtr(__this->keys), uCRef<int>(0), &ret27), ret27)[0/*Time*/].Value<double>(), void();
}

// protected KeyframedSpline() [instance] :65
void KeyframedSpline::ctor_1()
{
    uType* __types[] = {
        __type->GetBase(KeyframedSpline_typeof())->Precalced(0/*Uno.Collections.List<Uno.Content.Splines.KeyframedSpline<TValue, TData>.Key>*/),
    };
    keys = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(__types[0]));
    ctor_();
}

// protected KeyframedSpline(Uno.Content.Splines.KeyframedSpline<TValue, TData>.Key[] keys) [instance] :69
void KeyframedSpline::ctor_2(uArray* keys1)
{
    uType* __types[] = {
        __type->GetBase(KeyframedSpline_typeof())->Precalced(0/*Uno.Collections.List<Uno.Content.Splines.KeyframedSpline<TValue, TData>.Key>*/),
        __type->GetBase(KeyframedSpline_typeof())->Precalced(1/*Uno.Content.Splines.KeyframedSpline<TValue, TData>.Key*/),
    };
    uStackFrame __("Uno.Content.Splines.KeyframedSpline`2", ".ctor(Uno.Content.Splines.KeyframedSpline<TValue, TData>.Key[])");
    uT k(__types[1], U_ALLOCA(__types[1]->ValueSize));
    uArray* array1;
    int index2;
    int length3;
    int ret1;
    keys = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(__types[0]));
    ctor_();

    for (array1 = keys1, index2 = 0, length3 = uPtr(array1)->Length(); index2 < length3; ++index2)
    {
        k = uPtr(array1)->TItem(index2);
        KeyframedSpline__AddKey_fn(this, uCRef(k[0/*Time*/].Value<double>()), k[1/*Value*/], &ret1);
    }
}

// public void ClearKeys() [instance] :140
void KeyframedSpline::ClearKeys()
{
    uStackFrame __("Uno.Content.Splines.KeyframedSpline`2", "ClearKeys()");
    uPtr(keys)->Clear();
    cache = 0;
}

// public int FindLeftIndex(double time) [instance] :85
int KeyframedSpline::FindLeftIndex(double time)
{
    uType* __types[] = {
        __type->GetBase(KeyframedSpline_typeof())->Precalced(1/*Uno.Content.Splines.KeyframedSpline<TValue, TData>.Key*/),
    };
    uStackFrame __("Uno.Content.Splines.KeyframedSpline`2", "FindLeftIndex(double)");
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret4(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret5(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret6(__types[0], U_ALLOCA(__types[0]->ValueSize));

    if (uPtr(keys)->Count() > 0)
    {
        while (time >= (::g::Uno::Collections::List__get_Item_fn(uPtr(keys), uCRef<int>(cache), &ret3), ret3)[0/*Time*/].Value<double>())
        {
            if (cache == (uPtr(keys)->Count() - 1))
                return cache;

            if (time < (::g::Uno::Collections::List__get_Item_fn(uPtr(keys), uCRef<int>(cache + 1), &ret4), ret4)[0/*Time*/].Value<double>())
                return cache;

            cache++;
        }

        while (time < (::g::Uno::Collections::List__get_Item_fn(uPtr(keys), uCRef<int>(cache), &ret5), ret5)[0/*Time*/].Value<double>())
        {
            if (cache == 0)
                return -1;

            cache--;

            if (time >= (::g::Uno::Collections::List__get_Item_fn(uPtr(keys), uCRef<int>(cache), &ret6), ret6)[0/*Time*/].Value<double>())
                return cache;
        }
    }

    return -1;
}

// public int FindNearestIndex(double time) [instance] :107
int KeyframedSpline::FindNearestIndex(double time)
{
    uType* __types[] = {
        __type->GetBase(KeyframedSpline_typeof())->Precalced(1/*Uno.Content.Splines.KeyframedSpline<TValue, TData>.Key*/),
    };
    uStackFrame __("Uno.Content.Splines.KeyframedSpline`2", "FindNearestIndex(double)");
    uT ret7(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret8(__types[0], U_ALLOCA(__types[0]->ValueSize));
    int l = FindLeftIndex(time);
    int r = l + 1;

    if (l < 0)
        return r;

    if (r < uPtr(keys)->Count())
    {
        double ldif = time - (::g::Uno::Collections::List__get_Item_fn(uPtr(keys), uCRef<int>(l), &ret7), ret7)[0/*Time*/].Value<double>();
        double rdif = (::g::Uno::Collections::List__get_Item_fn(uPtr(keys), uCRef<int>(r), &ret8), ret8)[0/*Time*/].Value<double>() - time;

        if (rdif < ldif)
            return r;
    }

    return l;
}

// public double GetTime(int index) [instance] :156
double KeyframedSpline::GetTime(int index)
{
    uType* __types[] = {
        __type->GetBase(KeyframedSpline_typeof())->Precalced(1/*Uno.Content.Splines.KeyframedSpline<TValue, TData>.Key*/),
    };
    uStackFrame __("Uno.Content.Splines.KeyframedSpline`2", "GetTime(int)");
    uT ret16(__types[0], U_ALLOCA(__types[0]->ValueSize));
    return (::g::Uno::Collections::List__get_Item_fn(uPtr(keys), uCRef<int>(index), &ret16), ret16)[0/*Time*/].Value<double>();
}

// public int get_KeyCount() [instance] :148
int KeyframedSpline::KeyCount()
{
    uStackFrame __("Uno.Content.Splines.KeyframedSpline`2", "get_KeyCount()");
    return uPtr(keys)->Count();
}

// public void RemoveKey(int index) [instance] :134
void KeyframedSpline::RemoveKey(int index)
{
    uStackFrame __("Uno.Content.Splines.KeyframedSpline`2", "RemoveKey(int)");

    if ((cache == (uPtr(keys)->Count() - 1)) && (cache > 0))
        cache--;

    uPtr(keys)->RemoveAt(index);
}

// public int SetTime(int index, double time) [instance] :166
int KeyframedSpline::SetTime(int index, double time)
{
    uType* __types[] = {
        __type->GetBase(KeyframedSpline_typeof())->Precalced(1/*Uno.Content.Splines.KeyframedSpline<TValue, TData>.Key*/),
        __type->GetBase(KeyframedSpline_typeof())->Precalced(2/*TData*/),
    };
    uStackFrame __("Uno.Content.Splines.KeyframedSpline`2", "SetTime(int,double)");
    uT ret18(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret19(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret20(__types[1], U_ALLOCA(__types[1]->ValueSize));
    uT ret22(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret23(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT v(__types[1], U_ALLOCA(__types[1]->ValueSize));
    int ret21;

    if (((index > 0) && ((::g::Uno::Collections::List__get_Item_fn(uPtr(keys), uCRef<int>(index - 1), &ret18), ret18)[0/*Time*/].Value<double>() > time)) || ((index < (uPtr(keys)->Count() - 1)) && ((::g::Uno::Collections::List__get_Item_fn(uPtr(keys), uCRef<int>(index + 1), &ret19), ret19)[0/*Time*/].Value<double>() < time)))
    {
        v = (KeyframedSpline__GetValue_fn(this, uCRef<int>(index), &ret20), ret20);
        RemoveKey(index);
        return (KeyframedSpline__AddKey_fn(this, uCRef(time), v, &ret21), ret21);
    }
    else
    {
        ::g::Uno::Collections::List__set_Item_fn(uPtr(keys), uCRef<int>(index), (KeyframedSpline__Key__New1_fn(__types[0], uCRef(time), (::g::Uno::Collections::List__get_Item_fn(uPtr(keys), uCRef<int>(index), &ret23), ret23)[1/*Value*/], &ret22), ret22));
        return index;
    }
}

// public static float Map(double a, double b, double t) [static] :187
float KeyframedSpline::Map(uType* __type, double a, double b, double t)
{
    return (float)((t - a) / (b - a));
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/content/splines/$.uno
// -------------------------------------------------------------------------------------------------------------

// public sealed class LinearSplineFloat :236
// {
static void LinearSplineFloat_build(uType* type)
{
    type->SetBase(::g::Uno::Content::Splines::KeyframedSpline_typeof()->MakeType(::g::Uno::Float_typeof(), ::g::Uno::Float_typeof(), NULL));
    type->SetFields(2);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)LinearSplineFloat__New1_fn, 0, true, type, 0),
        new uFunction(".ctor", NULL, (void*)LinearSplineFloat__New2_fn, 0, true, type, 1, ::g::Uno::Content::Splines::KeyframedSpline__Key_typeof()->MakeType(::g::Uno::Float_typeof(), ::g::Uno::Float_typeof(), NULL)->Array()));
}

::g::Uno::Content::Splines::Spline_type* LinearSplineFloat_typeof()
{
    static uSStrong< ::g::Uno::Content::Splines::Spline_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Content::Splines::KeyframedSpline_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(LinearSplineFloat);
    options.TypeSize = sizeof(::g::Uno::Content::Splines::Spline_type);
    type = (::g::Uno::Content::Splines::Spline_type*)uClassType::New("Uno.Content.Splines.LinearSplineFloat", options);
    type->fp_build_ = LinearSplineFloat_build;
    type->fp_ctor_ = (void*)LinearSplineFloat__New1_fn;
    type->fp_Sample1 = (void(*)(::g::Uno::Content::Splines::Spline*, double*, uTRef))LinearSplineFloat__Sample1_fn;
    return type;
}

// public LinearSplineFloat() :238
void LinearSplineFloat__ctor_3_fn(LinearSplineFloat* __this)
{
    __this->ctor_3();
}

// public LinearSplineFloat(Uno.Content.Splines.KeyframedSpline<float, float>.Key[] keys) :242
void LinearSplineFloat__ctor_4_fn(LinearSplineFloat* __this, uArray* keys1)
{
    __this->ctor_4(keys1);
}

// public LinearSplineFloat New() :238
void LinearSplineFloat__New1_fn(LinearSplineFloat** __retval)
{
    *__retval = LinearSplineFloat::New1();
}

// public LinearSplineFloat New(Uno.Content.Splines.KeyframedSpline<float, float>.Key[] keys) :242
void LinearSplineFloat__New2_fn(uArray* keys1, LinearSplineFloat** __retval)
{
    *__retval = LinearSplineFloat::New2(keys1);
}

// public override sealed void Sample(double t, float& result) :247
void LinearSplineFloat__Sample1_fn(LinearSplineFloat* __this, double* t, float* result)
{
    uStackFrame __("Uno.Content.Splines.LinearSplineFloat", "Sample(double,float&)");
    double t_ = *t;
    float a, b, p;
    ::g::Uno::Content::Splines::KeyframedSpline__FindValues_fn(__this, uCRef(t_), &a, &b, &p);
    *result = a + ((b - a) * ::g::Uno::Math::Saturate1(p));
}

// public LinearSplineFloat() [instance] :238
void LinearSplineFloat::ctor_3()
{
    ctor_1();
}

// public LinearSplineFloat(Uno.Content.Splines.KeyframedSpline<float, float>.Key[] keys) [instance] :242
void LinearSplineFloat::ctor_4(uArray* keys1)
{
    uStackFrame __("Uno.Content.Splines.LinearSplineFloat", ".ctor(Uno.Content.Splines.KeyframedSpline<float, float>.Key[])");
    ctor_2(keys1);
}

// public LinearSplineFloat New() [static] :238
LinearSplineFloat* LinearSplineFloat::New1()
{
    LinearSplineFloat* obj1 = (LinearSplineFloat*)uNew(LinearSplineFloat_typeof());
    obj1->ctor_3();
    return obj1;
}

// public LinearSplineFloat New(Uno.Content.Splines.KeyframedSpline<float, float>.Key[] keys) [static] :242
LinearSplineFloat* LinearSplineFloat::New2(uArray* keys1)
{
    LinearSplineFloat* obj2 = (LinearSplineFloat*)uNew(LinearSplineFloat_typeof());
    obj2->ctor_4(keys1);
    return obj2;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/content/splines/$.uno
// -------------------------------------------------------------------------------------------------------------

// public sealed class LinearSplineFloat2 :264
// {
static void LinearSplineFloat2_build(uType* type)
{
    type->SetBase(::g::Uno::Content::Splines::KeyframedSpline_typeof()->MakeType(::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof(), NULL));
    type->SetFields(2);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)LinearSplineFloat2__New1_fn, 0, true, type, 0),
        new uFunction(".ctor", NULL, (void*)LinearSplineFloat2__New2_fn, 0, true, type, 1, ::g::Uno::Content::Splines::KeyframedSpline__Key_typeof()->MakeType(::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof(), NULL)->Array()));
}

::g::Uno::Content::Splines::Spline_type* LinearSplineFloat2_typeof()
{
    static uSStrong< ::g::Uno::Content::Splines::Spline_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Content::Splines::KeyframedSpline_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(LinearSplineFloat2);
    options.TypeSize = sizeof(::g::Uno::Content::Splines::Spline_type);
    type = (::g::Uno::Content::Splines::Spline_type*)uClassType::New("Uno.Content.Splines.LinearSplineFloat2", options);
    type->fp_build_ = LinearSplineFloat2_build;
    type->fp_ctor_ = (void*)LinearSplineFloat2__New1_fn;
    type->fp_Sample1 = (void(*)(::g::Uno::Content::Splines::Spline*, double*, uTRef))LinearSplineFloat2__Sample1_fn;
    return type;
}

// public LinearSplineFloat2() :266
void LinearSplineFloat2__ctor_3_fn(LinearSplineFloat2* __this)
{
    __this->ctor_3();
}

// public LinearSplineFloat2(Uno.Content.Splines.KeyframedSpline<float2, float2>.Key[] keys) :270
void LinearSplineFloat2__ctor_4_fn(LinearSplineFloat2* __this, uArray* keys1)
{
    __this->ctor_4(keys1);
}

// public LinearSplineFloat2 New() :266
void LinearSplineFloat2__New1_fn(LinearSplineFloat2** __retval)
{
    *__retval = LinearSplineFloat2::New1();
}

// public LinearSplineFloat2 New(Uno.Content.Splines.KeyframedSpline<float2, float2>.Key[] keys) :270
void LinearSplineFloat2__New2_fn(uArray* keys1, LinearSplineFloat2** __retval)
{
    *__retval = LinearSplineFloat2::New2(keys1);
}

// public override sealed void Sample(double t, float2& result) :275
void LinearSplineFloat2__Sample1_fn(LinearSplineFloat2* __this, double* t, ::g::Uno::Float2* result)
{
    uStackFrame __("Uno.Content.Splines.LinearSplineFloat2", "Sample(double,float2&)");
    double t_ = *t;
    ::g::Uno::Float2 a, b;
    float p;
    ::g::Uno::Content::Splines::KeyframedSpline__FindValues_fn(__this, uCRef(t_), &a, &b, &p);
    *result = ::g::Uno::Float2__op_Addition2(a, ::g::Uno::Float2__op_Multiply1(::g::Uno::Float2__op_Subtraction2(b, a), ::g::Uno::Math::Saturate1(p)));
}

// public LinearSplineFloat2() [instance] :266
void LinearSplineFloat2::ctor_3()
{
    ctor_1();
}

// public LinearSplineFloat2(Uno.Content.Splines.KeyframedSpline<float2, float2>.Key[] keys) [instance] :270
void LinearSplineFloat2::ctor_4(uArray* keys1)
{
    uStackFrame __("Uno.Content.Splines.LinearSplineFloat2", ".ctor(Uno.Content.Splines.KeyframedSpline<float2, float2>.Key[])");
    ctor_2(keys1);
}

// public LinearSplineFloat2 New() [static] :266
LinearSplineFloat2* LinearSplineFloat2::New1()
{
    LinearSplineFloat2* obj1 = (LinearSplineFloat2*)uNew(LinearSplineFloat2_typeof());
    obj1->ctor_3();
    return obj1;
}

// public LinearSplineFloat2 New(Uno.Content.Splines.KeyframedSpline<float2, float2>.Key[] keys) [static] :270
LinearSplineFloat2* LinearSplineFloat2::New2(uArray* keys1)
{
    LinearSplineFloat2* obj2 = (LinearSplineFloat2*)uNew(LinearSplineFloat2_typeof());
    obj2->ctor_4(keys1);
    return obj2;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/content/splines/$.uno
// -------------------------------------------------------------------------------------------------------------

// public sealed class LinearSplineFloat3 :293
// {
static void LinearSplineFloat3_build(uType* type)
{
    type->SetBase(::g::Uno::Content::Splines::KeyframedSpline_typeof()->MakeType(::g::Uno::Float3_typeof(), ::g::Uno::Float3_typeof(), NULL));
    type->SetFields(2);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)LinearSplineFloat3__New1_fn, 0, true, type, 0),
        new uFunction(".ctor", NULL, (void*)LinearSplineFloat3__New2_fn, 0, true, type, 1, ::g::Uno::Content::Splines::KeyframedSpline__Key_typeof()->MakeType(::g::Uno::Float3_typeof(), ::g::Uno::Float3_typeof(), NULL)->Array()));
}

::g::Uno::Content::Splines::Spline_type* LinearSplineFloat3_typeof()
{
    static uSStrong< ::g::Uno::Content::Splines::Spline_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Content::Splines::KeyframedSpline_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(LinearSplineFloat3);
    options.TypeSize = sizeof(::g::Uno::Content::Splines::Spline_type);
    type = (::g::Uno::Content::Splines::Spline_type*)uClassType::New("Uno.Content.Splines.LinearSplineFloat3", options);
    type->fp_build_ = LinearSplineFloat3_build;
    type->fp_ctor_ = (void*)LinearSplineFloat3__New1_fn;
    type->fp_Sample1 = (void(*)(::g::Uno::Content::Splines::Spline*, double*, uTRef))LinearSplineFloat3__Sample1_fn;
    return type;
}

// public LinearSplineFloat3() :295
void LinearSplineFloat3__ctor_3_fn(LinearSplineFloat3* __this)
{
    __this->ctor_3();
}

// public LinearSplineFloat3(Uno.Content.Splines.KeyframedSpline<float3, float3>.Key[] keys) :299
void LinearSplineFloat3__ctor_4_fn(LinearSplineFloat3* __this, uArray* keys1)
{
    __this->ctor_4(keys1);
}

// public LinearSplineFloat3 New() :295
void LinearSplineFloat3__New1_fn(LinearSplineFloat3** __retval)
{
    *__retval = LinearSplineFloat3::New1();
}

// public LinearSplineFloat3 New(Uno.Content.Splines.KeyframedSpline<float3, float3>.Key[] keys) :299
void LinearSplineFloat3__New2_fn(uArray* keys1, LinearSplineFloat3** __retval)
{
    *__retval = LinearSplineFloat3::New2(keys1);
}

// public override sealed void Sample(double t, float3& result) :304
void LinearSplineFloat3__Sample1_fn(LinearSplineFloat3* __this, double* t, ::g::Uno::Float3* result)
{
    uStackFrame __("Uno.Content.Splines.LinearSplineFloat3", "Sample(double,float3&)");
    double t_ = *t;
    ::g::Uno::Float3 a, b;
    float p;
    ::g::Uno::Content::Splines::KeyframedSpline__FindValues_fn(__this, uCRef(t_), &a, &b, &p);
    *result = ::g::Uno::Float3__op_Addition2(a, ::g::Uno::Float3__op_Multiply1(::g::Uno::Float3__op_Subtraction2(b, a), ::g::Uno::Math::Saturate1(p)));
}

// public LinearSplineFloat3() [instance] :295
void LinearSplineFloat3::ctor_3()
{
    ctor_1();
}

// public LinearSplineFloat3(Uno.Content.Splines.KeyframedSpline<float3, float3>.Key[] keys) [instance] :299
void LinearSplineFloat3::ctor_4(uArray* keys1)
{
    uStackFrame __("Uno.Content.Splines.LinearSplineFloat3", ".ctor(Uno.Content.Splines.KeyframedSpline<float3, float3>.Key[])");
    ctor_2(keys1);
}

// public LinearSplineFloat3 New() [static] :295
LinearSplineFloat3* LinearSplineFloat3::New1()
{
    LinearSplineFloat3* obj1 = (LinearSplineFloat3*)uNew(LinearSplineFloat3_typeof());
    obj1->ctor_3();
    return obj1;
}

// public LinearSplineFloat3 New(Uno.Content.Splines.KeyframedSpline<float3, float3>.Key[] keys) [static] :299
LinearSplineFloat3* LinearSplineFloat3::New2(uArray* keys1)
{
    LinearSplineFloat3* obj2 = (LinearSplineFloat3*)uNew(LinearSplineFloat3_typeof());
    obj2->ctor_4(keys1);
    return obj2;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/content/splines/$.uno
// -------------------------------------------------------------------------------------------------------------

// public sealed class LinearSplineFloat4 :322
// {
static void LinearSplineFloat4_build(uType* type)
{
    type->SetBase(::g::Uno::Content::Splines::KeyframedSpline_typeof()->MakeType(::g::Uno::Float4_typeof(), ::g::Uno::Float4_typeof(), NULL));
    type->SetFields(2);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)LinearSplineFloat4__New1_fn, 0, true, type, 0),
        new uFunction(".ctor", NULL, (void*)LinearSplineFloat4__New2_fn, 0, true, type, 1, ::g::Uno::Content::Splines::KeyframedSpline__Key_typeof()->MakeType(::g::Uno::Float4_typeof(), ::g::Uno::Float4_typeof(), NULL)->Array()));
}

::g::Uno::Content::Splines::Spline_type* LinearSplineFloat4_typeof()
{
    static uSStrong< ::g::Uno::Content::Splines::Spline_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Content::Splines::KeyframedSpline_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(LinearSplineFloat4);
    options.TypeSize = sizeof(::g::Uno::Content::Splines::Spline_type);
    type = (::g::Uno::Content::Splines::Spline_type*)uClassType::New("Uno.Content.Splines.LinearSplineFloat4", options);
    type->fp_build_ = LinearSplineFloat4_build;
    type->fp_ctor_ = (void*)LinearSplineFloat4__New1_fn;
    type->fp_Sample1 = (void(*)(::g::Uno::Content::Splines::Spline*, double*, uTRef))LinearSplineFloat4__Sample1_fn;
    return type;
}

// public LinearSplineFloat4() :324
void LinearSplineFloat4__ctor_3_fn(LinearSplineFloat4* __this)
{
    __this->ctor_3();
}

// public LinearSplineFloat4(Uno.Content.Splines.KeyframedSpline<float4, float4>.Key[] keys) :328
void LinearSplineFloat4__ctor_4_fn(LinearSplineFloat4* __this, uArray* keys1)
{
    __this->ctor_4(keys1);
}

// public LinearSplineFloat4 New() :324
void LinearSplineFloat4__New1_fn(LinearSplineFloat4** __retval)
{
    *__retval = LinearSplineFloat4::New1();
}

// public LinearSplineFloat4 New(Uno.Content.Splines.KeyframedSpline<float4, float4>.Key[] keys) :328
void LinearSplineFloat4__New2_fn(uArray* keys1, LinearSplineFloat4** __retval)
{
    *__retval = LinearSplineFloat4::New2(keys1);
}

// public override sealed void Sample(double t, float4& result) :333
void LinearSplineFloat4__Sample1_fn(LinearSplineFloat4* __this, double* t, ::g::Uno::Float4* result)
{
    uStackFrame __("Uno.Content.Splines.LinearSplineFloat4", "Sample(double,float4&)");
    double t_ = *t;
    ::g::Uno::Float4 a, b;
    float p;
    ::g::Uno::Content::Splines::KeyframedSpline__FindValues_fn(__this, uCRef(t_), &a, &b, &p);
    *result = ::g::Uno::Float4__op_Addition2(a, ::g::Uno::Float4__op_Multiply1(::g::Uno::Float4__op_Subtraction2(b, a), ::g::Uno::Math::Saturate1(p)));
}

// public LinearSplineFloat4() [instance] :324
void LinearSplineFloat4::ctor_3()
{
    ctor_1();
}

// public LinearSplineFloat4(Uno.Content.Splines.KeyframedSpline<float4, float4>.Key[] keys) [instance] :328
void LinearSplineFloat4::ctor_4(uArray* keys1)
{
    uStackFrame __("Uno.Content.Splines.LinearSplineFloat4", ".ctor(Uno.Content.Splines.KeyframedSpline<float4, float4>.Key[])");
    ctor_2(keys1);
}

// public LinearSplineFloat4 New() [static] :324
LinearSplineFloat4* LinearSplineFloat4::New1()
{
    LinearSplineFloat4* obj1 = (LinearSplineFloat4*)uNew(LinearSplineFloat4_typeof());
    obj1->ctor_3();
    return obj1;
}

// public LinearSplineFloat4 New(Uno.Content.Splines.KeyframedSpline<float4, float4>.Key[] keys) [static] :328
LinearSplineFloat4* LinearSplineFloat4::New2(uArray* keys1)
{
    LinearSplineFloat4* obj2 = (LinearSplineFloat4*)uNew(LinearSplineFloat4_typeof());
    obj2->ctor_4(keys1);
    return obj2;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/content/splines/$.uno
// -------------------------------------------------------------------------------------------------------------

// public sealed class LinearSplineFloat4x4 :351
// {
static void LinearSplineFloat4x4_build(uType* type)
{
    type->SetBase(::g::Uno::Content::Splines::KeyframedSpline_typeof()->MakeType(::g::Uno::Float4x4_typeof(), ::g::Uno::Float4x4_typeof(), NULL));
    type->SetFields(2);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)LinearSplineFloat4x4__New1_fn, 0, true, type, 0),
        new uFunction(".ctor", NULL, (void*)LinearSplineFloat4x4__New2_fn, 0, true, type, 1, ::g::Uno::Content::Splines::KeyframedSpline__Key_typeof()->MakeType(::g::Uno::Float4x4_typeof(), ::g::Uno::Float4x4_typeof(), NULL)->Array()));
}

::g::Uno::Content::Splines::Spline_type* LinearSplineFloat4x4_typeof()
{
    static uSStrong< ::g::Uno::Content::Splines::Spline_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Content::Splines::KeyframedSpline_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(LinearSplineFloat4x4);
    options.TypeSize = sizeof(::g::Uno::Content::Splines::Spline_type);
    type = (::g::Uno::Content::Splines::Spline_type*)uClassType::New("Uno.Content.Splines.LinearSplineFloat4x4", options);
    type->fp_build_ = LinearSplineFloat4x4_build;
    type->fp_ctor_ = (void*)LinearSplineFloat4x4__New1_fn;
    type->fp_Sample1 = (void(*)(::g::Uno::Content::Splines::Spline*, double*, uTRef))LinearSplineFloat4x4__Sample1_fn;
    return type;
}

// public LinearSplineFloat4x4() :353
void LinearSplineFloat4x4__ctor_3_fn(LinearSplineFloat4x4* __this)
{
    __this->ctor_3();
}

// public LinearSplineFloat4x4(Uno.Content.Splines.KeyframedSpline<float4x4, float4x4>.Key[] keys) :357
void LinearSplineFloat4x4__ctor_4_fn(LinearSplineFloat4x4* __this, uArray* keys1)
{
    __this->ctor_4(keys1);
}

// public LinearSplineFloat4x4 New() :353
void LinearSplineFloat4x4__New1_fn(LinearSplineFloat4x4** __retval)
{
    *__retval = LinearSplineFloat4x4::New1();
}

// public LinearSplineFloat4x4 New(Uno.Content.Splines.KeyframedSpline<float4x4, float4x4>.Key[] keys) :357
void LinearSplineFloat4x4__New2_fn(uArray* keys1, LinearSplineFloat4x4** __retval)
{
    *__retval = LinearSplineFloat4x4::New2(keys1);
}

// public override sealed void Sample(double t, float4x4& result) :362
void LinearSplineFloat4x4__Sample1_fn(LinearSplineFloat4x4* __this, double* t, ::g::Uno::Float4x4* result)
{
    uStackFrame __("Uno.Content.Splines.LinearSplineFloat4x4", "Sample(double,float4x4&)");
    double t_ = *t;
    ::g::Uno::Float4x4 a, b;
    float p;
    ::g::Uno::Content::Splines::KeyframedSpline__FindValues_fn(__this, uCRef(t_), &a, &b, &p);
    *result = ::g::Uno::Float4x4__op_Addition(a, ::g::Uno::Float4x4__op_Multiply(::g::Uno::Float4x4__op_Subtraction(b, a), ::g::Uno::Math::Saturate1(p)));
}

// public LinearSplineFloat4x4() [instance] :353
void LinearSplineFloat4x4::ctor_3()
{
    ctor_1();
}

// public LinearSplineFloat4x4(Uno.Content.Splines.KeyframedSpline<float4x4, float4x4>.Key[] keys) [instance] :357
void LinearSplineFloat4x4::ctor_4(uArray* keys1)
{
    uStackFrame __("Uno.Content.Splines.LinearSplineFloat4x4", ".ctor(Uno.Content.Splines.KeyframedSpline<float4x4, float4x4>.Key[])");
    ctor_2(keys1);
}

// public LinearSplineFloat4x4 New() [static] :353
LinearSplineFloat4x4* LinearSplineFloat4x4::New1()
{
    LinearSplineFloat4x4* obj1 = (LinearSplineFloat4x4*)uNew(LinearSplineFloat4x4_typeof());
    obj1->ctor_3();
    return obj1;
}

// public LinearSplineFloat4x4 New(Uno.Content.Splines.KeyframedSpline<float4x4, float4x4>.Key[] keys) [static] :357
LinearSplineFloat4x4* LinearSplineFloat4x4::New2(uArray* keys1)
{
    LinearSplineFloat4x4* obj2 = (LinearSplineFloat4x4*)uNew(LinearSplineFloat4x4_typeof());
    obj2->ctor_4(keys1);
    return obj2;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/content/splines/$.uno
// -------------------------------------------------------------------------------------------------------------

// public abstract class Spline<T> :378
// {
static void Spline_build(uType* type)
{
    type->SetPrecalc(
        type->T(0));
    type->Reflection.SetFunctions(6,
        new uFunction("get_End", NULL, NULL, offsetof(Spline_type, fp_get_End), false, ::g::Uno::Double_typeof(), 0),
        new uFunction("get_First", NULL, (void*)Spline__get_First_fn, 0, false, type->T(0), 0),
        new uFunction("get_Last", NULL, (void*)Spline__get_Last_fn, 0, false, type->T(0), 0),
        new uFunction("Sample", NULL, (void*)Spline__Sample_fn, 0, false, type->T(0), 1, ::g::Uno::Double_typeof()),
        new uFunction("Sample", NULL, NULL, offsetof(Spline_type, fp_Sample1), false, uVoid_typeof(), 2, ::g::Uno::Double_typeof(), type->T(0)->ByRef()),
        new uFunction("get_Start", NULL, NULL, offsetof(Spline_type, fp_get_Start), false, ::g::Uno::Double_typeof(), 0));
}

Spline_type* Spline_typeof()
{
    static uSStrong<Spline_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.GenericCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(Spline);
    options.TypeSize = sizeof(Spline_type);
    type = (Spline_type*)uClassType::New("Uno.Content.Splines.Spline`1", options);
    type->fp_build_ = Spline_build;
    return type;
}

// protected generated Spline() :378
void Spline__ctor__fn(Spline* __this)
{
    __this->ctor_();
}

// public T get_First() :386
void Spline__get_First_fn(Spline* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->GetBase(Spline_typeof())->Precalced(0/*T*/),
    };
    uStackFrame __("Uno.Content.Splines.Spline`1", "get_First()");
    uT ret1(__types[0], U_ALLOCA(__types[0]->ValueSize));
    return __retval.Store((Spline__Sample_fn(__this, uCRef(__this->Start()), &ret1), ret1)), void();
}

// public T get_Last() :391
void Spline__get_Last_fn(Spline* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->GetBase(Spline_typeof())->Precalced(0/*T*/),
    };
    uStackFrame __("Uno.Content.Splines.Spline`1", "get_Last()");
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    return __retval.Store((Spline__Sample_fn(__this, uCRef(__this->End()), &ret2), ret2)), void();
}

// public T Sample(double time) :394
void Spline__Sample_fn(Spline* __this, double* time, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->GetBase(Spline_typeof())->Precalced(0/*T*/),
    };
    uStackFrame __("Uno.Content.Splines.Spline`1", "Sample(double)");
    uT result(__types[0], U_ALLOCA(__types[0]->ValueSize));
    double time_ = *time;
    __this->Sample1_ex(uCRef(time_), &result);
    return __retval.Store(result), void();
}

// protected generated Spline() [instance] :378
void Spline::ctor_()
{
}
// }

}}}} // ::g::Uno::Content::Splines
