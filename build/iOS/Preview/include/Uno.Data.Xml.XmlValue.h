// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Data.Xml/0.42.0/source/elements/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Data{namespace Xml{struct XmlValue;}}}}

namespace g{
namespace Uno{
namespace Data{
namespace Xml{

// public sealed class XmlValue :47
// {
uType* XmlValue_typeof();
void XmlValue__ctor__fn(XmlValue* __this);
void XmlValue__ctor_1_fn(XmlValue* __this, bool* value);
void XmlValue__ctor_2_fn(XmlValue* __this, double* value);
void XmlValue__ctor_3_fn(XmlValue* __this, float* value);
void XmlValue__ctor_4_fn(XmlValue* __this, int* value);
void XmlValue__ctor_5_fn(XmlValue* __this, int64_t* value);
void XmlValue__ctor_6_fn(XmlValue* __this, uString* value);
void XmlValue__AsBool_fn(XmlValue* __this, bool* __retval);
void XmlValue__AsDouble_fn(XmlValue* __this, double* __retval);
void XmlValue__AsFloat_fn(XmlValue* __this, float* __retval);
void XmlValue__AsInt_fn(XmlValue* __this, int* __retval);
void XmlValue__AsLong_fn(XmlValue* __this, int64_t* __retval);
void XmlValue__AsString_fn(XmlValue* __this, uString** __retval);
void XmlValue__BoolParseInternal_fn(XmlValue* __this);
void XmlValue__DoubleParseInternal_fn(XmlValue* __this);
void XmlValue__FloatParseInternal_fn(XmlValue* __this);
void XmlValue__IntParseInternal_fn(XmlValue* __this);
void XmlValue__LongParseInternal_fn(XmlValue* __this);
void XmlValue__New1_fn(XmlValue** __retval);
void XmlValue__New2_fn(bool* value, XmlValue** __retval);
void XmlValue__New3_fn(double* value, XmlValue** __retval);
void XmlValue__New4_fn(float* value, XmlValue** __retval);
void XmlValue__New5_fn(int* value, XmlValue** __retval);
void XmlValue__New6_fn(int64_t* value, XmlValue** __retval);
void XmlValue__New7_fn(uString* value, XmlValue** __retval);
void XmlValue__op_Equality_fn(XmlValue* xt, bool* value, bool* __retval);
void XmlValue__op_Equality1_fn(XmlValue* xt, double* value, bool* __retval);
void XmlValue__op_Equality2_fn(XmlValue* xt, float* value, bool* __retval);
void XmlValue__op_Equality3_fn(XmlValue* xt, int* value, bool* __retval);
void XmlValue__op_Equality4_fn(XmlValue* xt, int64_t* value, bool* __retval);
void XmlValue__op_Equality5_fn(XmlValue* xt, uString* value, bool* __retval);
void XmlValue__op_Inequality_fn(XmlValue* xt, bool* value, bool* __retval);
void XmlValue__op_Inequality1_fn(XmlValue* xt, double* value, bool* __retval);
void XmlValue__op_Inequality2_fn(XmlValue* xt, float* value, bool* __retval);
void XmlValue__op_Inequality3_fn(XmlValue* xt, int* value, bool* __retval);
void XmlValue__op_Inequality4_fn(XmlValue* xt, int64_t* value, bool* __retval);
void XmlValue__op_Inequality5_fn(XmlValue* xt, uString* value, bool* __retval);
void XmlValue__Set_fn(XmlValue* __this, bool* value);
void XmlValue__Set1_fn(XmlValue* __this, double* value);
void XmlValue__Set2_fn(XmlValue* __this, float* value);
void XmlValue__Set3_fn(XmlValue* __this, int* value);
void XmlValue__Set4_fn(XmlValue* __this, int64_t* value);
void XmlValue__Set5_fn(XmlValue* __this, uString* value);
void XmlValue__TryParseValue_fn(XmlValue* __this, uDelegate* action, bool* __retval);
void XmlValue__get_Type_fn(XmlValue* __this, int* __retval);
void XmlValue__get_Value_fn(XmlValue* __this, uObject** __retval);
void XmlValue__set_Value_fn(XmlValue* __this, uObject* value);

struct XmlValue : uObject
{
    uStrong<uObject*> _Value;

    void ctor_();
    void ctor_1(bool value);
    void ctor_2(double value);
    void ctor_3(float value);
    void ctor_4(int value);
    void ctor_5(int64_t value);
    void ctor_6(uString* value);
    bool AsBool();
    double AsDouble();
    float AsFloat();
    int AsInt();
    int64_t AsLong();
    uString* AsString();
    void BoolParseInternal();
    void DoubleParseInternal();
    void FloatParseInternal();
    void IntParseInternal();
    void LongParseInternal();
    void Set(bool value);
    void Set1(double value);
    void Set2(float value);
    void Set3(int value);
    void Set4(int64_t value);
    void Set5(uString* value);
    bool TryParseValue(uDelegate* action);
    int Type();
    uObject* Value();
    void Value(uObject* value);
    static XmlValue* New1();
    static XmlValue* New2(bool value);
    static XmlValue* New3(double value);
    static XmlValue* New4(float value);
    static XmlValue* New5(int value);
    static XmlValue* New6(int64_t value);
    static XmlValue* New7(uString* value);
    static bool op_Equality(XmlValue* xt, bool value);
    static bool op_Equality1(XmlValue* xt, double value);
    static bool op_Equality2(XmlValue* xt, float value);
    static bool op_Equality3(XmlValue* xt, int value);
    static bool op_Equality4(XmlValue* xt, int64_t value);
    static bool op_Equality5(XmlValue* xt, uString* value);
    static bool op_Inequality(XmlValue* xt, bool value);
    static bool op_Inequality1(XmlValue* xt, double value);
    static bool op_Inequality2(XmlValue* xt, float value);
    static bool op_Inequality3(XmlValue* xt, int value);
    static bool op_Inequality4(XmlValue* xt, int64_t value);
    static bool op_Inequality5(XmlValue* xt, uString* value);
};
// }

}}}} // ::g::Uno::Data::Xml
