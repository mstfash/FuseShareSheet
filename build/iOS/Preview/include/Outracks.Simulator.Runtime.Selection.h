// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/runtime/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Preview.ISelection.h>
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{namespace Runtime{struct Selection;}}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Runtime{

// public sealed class Selection :565
// {
struct Selection_type : uType
{
    ::g::Fuse::Preview::ISelection interface0;
};

Selection_type* Selection_typeof();
void Selection__ctor__fn(Selection* __this, uString* tagHash, uString* property);
void Selection__Each_fn(Selection* __this, uDelegate* action);
void Selection__IsPropertySelected_fn(Selection* __this, uObject* obj, uString* property, bool* __retval);
void Selection__IsSelected_fn(Selection* __this, uObject* obj, bool* __retval);
void Selection__get_Items_fn(Selection* __this, uObject** __retval);
void Selection__New1_fn(uString* tagHash, uString* property, Selection** __retval);

struct Selection : uObject
{
    uStrong<uString*> _property;
    uStrong<uString*> _tagHash;

    void ctor_(uString* tagHash, uString* property);
    void Each(uDelegate* action);
    bool IsPropertySelected(uObject* obj, uString* property);
    bool IsSelected(uObject* obj);
    uObject* Items();
    static Selection* New1(uString* tagHash, uString* property);
};
// }

}}}} // ::g::Outracks::Simulator::Runtime
