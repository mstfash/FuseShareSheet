// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Reflection.Uno/0.0.0/native/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Outracks.Simulator.Reflection.Native.IEvent.h>
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{namespace Reflection{namespace Native{struct CppEvent;}}}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Reflection{
namespace Native{

// internal sealed extern class CppEvent :409
// {
struct CppEvent_type : uType
{
    ::g::Outracks::Simulator::Reflection::Native::IEvent interface0;
};

CppEvent_type* CppEvent_typeof();
void CppEvent__ctor__fn(CppEvent* __this, uType* declaringType, uType* type, uString* name);
void CppEvent__get_AddMethod_fn(CppEvent* __this, uObject** __retval);
void CppEvent__get_DeclaringType_fn(CppEvent* __this, uType** __retval);
void CppEvent__New1_fn(uType* declaringType, uType* type, uString* name, CppEvent** __retval);
void CppEvent__get_RemoveMethod_fn(CppEvent* __this, uObject** __retval);

struct CppEvent : uObject
{
    uStrong<uType*> _declaringType;
    uStrong<uString*> _name;
    uStrong<uType*> _type;

    void ctor_(uType* declaringType, uType* type, uString* name);
    uObject* AddMethod();
    uType* DeclaringType();
    uObject* RemoveMethod();
    static CppEvent* New1(uType* declaringType, uType* type, uString* name);
};
// }

}}}}} // ::g::Outracks::Simulator::Reflection::Native
