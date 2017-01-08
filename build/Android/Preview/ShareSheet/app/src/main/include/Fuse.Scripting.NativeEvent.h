// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.Function.h>
#include <Fuse.Scripting.NativeProperty-2.h>
namespace g{namespace Fuse{namespace Scripting{struct NativeEvent;}}}
namespace g{namespace Uno{namespace Collections{struct Queue;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public sealed class NativeEvent :984
// {
::g::Fuse::Scripting::NativeProperty_type* NativeEvent_typeof();
void NativeEvent__ctor_4_fn(NativeEvent* __this, uString* name, bool* queueEventsBeforeHandlerIsSet);
void NativeEvent__DispatchQueue_fn(NativeEvent* __this);
void NativeEvent__GetProperty_fn(NativeEvent* __this, ::g::Fuse::Scripting::Function** __retval);
void NativeEvent__New4_fn(uString* name, bool* queueEventsBeforeHandlerIsSet, NativeEvent** __retval);
void NativeEvent__RaiseAsync_fn(NativeEvent* __this, uArray* args);
void NativeEvent__RaiseSync_fn(NativeEvent* __this, uArray* args, uObject** __retval);
void NativeEvent__SetProperty1_fn(NativeEvent* __this, ::g::Fuse::Scripting::Function* function);

struct NativeEvent : ::g::Fuse::Scripting::NativeProperty
{
    uStrong< ::g::Uno::Collections::Queue*> _eventArgsQueue;
    uStrong< ::g::Fuse::Scripting::Function*> _jsFunction;
    bool _queueEventsBeforeEvaluation;

    void ctor_4(uString* name, bool queueEventsBeforeHandlerIsSet);
    void DispatchQueue();
    void RaiseAsync(uArray* args);
    uObject* RaiseSync(uArray* args);
    static NativeEvent* New4(uString* name, bool queueEventsBeforeHandlerIsSet);
};
// }

}}} // ::g::Fuse::Scripting
