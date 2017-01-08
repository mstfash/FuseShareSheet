// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Scripting/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IModuleProvider.h>
#include <Fuse.Scripting.NativeModule.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct NativeEvent;}}}
namespace g{namespace Fuse{namespace Scripting{struct NativeEventEmitterModule;}}}
namespace g{namespace Fuse{namespace Scripting{struct Object;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace Collections{struct Queue;}}}
namespace g{namespace Uno{namespace Threading{struct Mutex;}}}
namespace g{namespace Uno{struct EventArgs;}}
namespace g{namespace Uno{struct Tuple2;}}

namespace g{
namespace Fuse{
namespace Scripting{

// public class NativeEventEmitterModule :431
// {
::g::Fuse::Scripting::NativeModule_type* NativeEventEmitterModule_typeof();
void NativeEventEmitterModule__ctor_2_fn(NativeEventEmitterModule* __this, bool* queueEventsBeforeInit, uArray* eventNames);
void NativeEventEmitterModule__CreateExportsObject_fn(NativeEventEmitterModule* __this, ::g::Fuse::Scripting::Context* c, uObject** __retval);
void NativeEventEmitterModule__Dispatch_fn(NativeEventEmitterModule* __this, uDelegate* action, bool* alwaysQueueEventBeforeInit);
void NativeEventEmitterModule__Emit_fn(NativeEventEmitterModule* __this, uArray* args);
void NativeEventEmitterModule__New2_fn(bool* queueEventsBeforeInit, uArray* eventNames, NativeEventEmitterModule** __retval);
void NativeEventEmitterModule__On_fn(NativeEventEmitterModule* __this, uObject* eventName, uDelegate* listener);
void NativeEventEmitterModule__On1_fn(NativeEventEmitterModule* __this, uObject* eventName, ::g::Fuse::Scripting::NativeEvent* nativeEvent);
void NativeEventEmitterModule__OnAppInitialized_fn(NativeEventEmitterModule* __this);
void NativeEventEmitterModule__ResetListeners_fn(NativeEventEmitterModule* __this, uObject* sender, ::g::Uno::EventArgs* eventArgs);
void NativeEventEmitterModule__ResetListenersJS_fn(NativeEventEmitterModule* __this);

struct NativeEventEmitterModule : ::g::Fuse::Scripting::NativeModule
{
    uStrong< ::g::Fuse::Scripting::Context*> _context;
    uStrong<uArray*> _eventNames;
    bool _initialized;
    uStrong< ::g::Uno::Collections::List*> _listeningCallbacks;
    uStrong< ::g::Uno::Threading::Mutex*> _mutex;
    uStrong< ::g::Uno::Collections::Queue*> _queuedEvents;
    bool _queueEventsBeforeInit;
    uStrong< ::g::Fuse::Scripting::Object*> _this;

    void ctor_2(bool queueEventsBeforeInit, uArray* eventNames);
    void Dispatch(uDelegate* action, bool alwaysQueueEventBeforeInit);
    void Emit(uArray* args);
    void On(uObject* eventName, uDelegate* listener);
    void On1(uObject* eventName, ::g::Fuse::Scripting::NativeEvent* nativeEvent);
    void OnAppInitialized();
    void ResetListeners(uObject* sender, ::g::Uno::EventArgs* eventArgs);
    void ResetListenersJS();
    static NativeEventEmitterModule* New2(bool queueEventsBeforeInit, uArray* eventNames);
};
// }

}}} // ::g::Fuse::Scripting
