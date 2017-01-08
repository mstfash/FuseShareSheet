// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Reflection.Uno/0.0.0/native/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Simulator.Reflection.Native.IProperty.h>
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{namespace Reflection{namespace Native{struct CppProperty;}}}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Reflection{
namespace Native{

// internal sealed extern class CppProperty :439
// {
struct CppProperty_type : uType
{
    ::g::Outracks::Simulator::Reflection::Native::IProperty interface0;
};

CppProperty_type* CppProperty_typeof();
void CppProperty__ctor__fn(CppProperty* __this, uType* declaringType, uType* type, uString* name);
void CppProperty__get_DeclaringType_fn(CppProperty* __this, uType** __retval);
void CppProperty__get_GetMethod_fn(CppProperty* __this, uObject** __retval);
void CppProperty__New1_fn(uType* declaringType, uType* type, uString* name, CppProperty** __retval);
void CppProperty__get_SetMethod_fn(CppProperty* __this, uObject** __retval);

struct CppProperty : uObject
{
    uStrong<uType*> _declaringType;
    uStrong<uString*> _name;
    uStrong<uType*> _type;

    void ctor_(uType* declaringType, uType* type, uString* name);
    uType* DeclaringType();
    uObject* GetMethod();
    uObject* SetMethod();
    static CppProperty* New1(uType* declaringType, uType* type, uString* name);
};
// }

}}}}} // ::g::Outracks::Simulator::Reflection::Native
