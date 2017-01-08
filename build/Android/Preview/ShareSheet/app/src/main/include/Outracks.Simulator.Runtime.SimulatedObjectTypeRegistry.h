// This file was generated based on /Users/mostafa/Desktop/ShareSheet/build/Android/Preview/preamble/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct TypeName;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Runtime{struct SimulatedObjectTypeRegistry;}}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{struct WeakDictionary;}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Runtime{

// public sealed class SimulatedObjectTypeRegistry :156
// {
uType* SimulatedObjectTypeRegistry_typeof();
void SimulatedObjectTypeRegistry__ctor__fn(SimulatedObjectTypeRegistry* __this);
void SimulatedObjectTypeRegistry__IsSimulatedType_fn(uObject* obj, uString* typeNameString, bool* __retval);
void SimulatedObjectTypeRegistry__New1_fn(SimulatedObjectTypeRegistry** __retval);
void SimulatedObjectTypeRegistry__RegisterSimulatedObject_fn(uObject* obj, uString* typeName);
void SimulatedObjectTypeRegistry__RegisterSimulatedType_fn(uString* typeName, uString* baseTypeName);
void SimulatedObjectTypeRegistry__TryGetSimulatedType_fn(uObject* obj, ::g::Outracks::Simulator::Bytecode::TypeName** type, bool* __retval);

struct SimulatedObjectTypeRegistry : uObject
{
    static uSStrong< ::g::Uno::Collections::Dictionary*> BaseTypes_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& BaseTypes() { return SimulatedObjectTypeRegistry_typeof()->Init(), BaseTypes_; }
    static uSStrong< ::g::WeakDictionary*> SimulatedObjectTypes_;
    static uSStrong< ::g::WeakDictionary*>& SimulatedObjectTypes() { return SimulatedObjectTypeRegistry_typeof()->Init(), SimulatedObjectTypes_; }

    void ctor_();
    static bool IsSimulatedType(uObject* obj, uString* typeNameString);
    static SimulatedObjectTypeRegistry* New1();
    static void RegisterSimulatedObject(uObject* obj, uString* typeName);
    static void RegisterSimulatedType(uString* typeName, uString* baseTypeName);
    static bool TryGetSimulatedType(uObject* obj, ::g::Outracks::Simulator::Bytecode::TypeName** type);
};
// }

}}}} // ::g::Outracks::Simulator::Runtime
