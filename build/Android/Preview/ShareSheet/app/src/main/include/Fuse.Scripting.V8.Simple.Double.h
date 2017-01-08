// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting.V8/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.V8.Simple.DoubleImpl.h>
#include <Fuse.Scripting.V8.Simple.Value.h>
#include <include/V8Simple.h>
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct Double;}}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{
namespace Simple{

// internal sealed extern class Double :1726
// {
::g::Fuse::Scripting::V8::Simple::Value_type* Double_typeof();
void Double__ctor_2_fn(Double* __this, double* value);
void Double__ctor_3_fn(Double* __this, ::V8Simple::Value** impl);
void Double__get__doubleImpl_fn(Double* __this, ::V8Simple::Double** __retval);
void Double__GetValue_fn(Double* __this, double* __retval);
void Double__GetValueType_fn(Double* __this, int* __retval);
void Double__New4_fn(double* value, Double** __retval);
void Double__New5_fn(::V8Simple::Value** impl, Double** __retval);

struct Double : ::g::Fuse::Scripting::V8::Simple::Value
{
    void ctor_2(double value);
    void ctor_3(::V8Simple::Value* impl);
    ::V8Simple::Double* _doubleImpl();
    double GetValue();
    static Double* New4(double value);
    static Double* New5(::V8Simple::Value* impl);
};
// }

}}}}} // ::g::Fuse::Scripting::V8::Simple
