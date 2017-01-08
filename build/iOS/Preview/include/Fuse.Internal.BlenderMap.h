// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Internal{struct Blender;}}}
namespace g{namespace Fuse{namespace Internal{struct BlenderMap;}}}
namespace g{namespace Fuse{namespace Internal{struct ScalarBlender;}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}

namespace g{
namespace Fuse{
namespace Internal{

// internal sealed class BlenderMap :252
// {
uType* BlenderMap_typeof();
void BlenderMap__ctor__fn(BlenderMap* __this);
void BlenderMap__Get_fn(uType* __type, ::g::Fuse::Internal::Blender** __retval);
void BlenderMap__GetScalar_fn(uType* __type, ::g::Fuse::Internal::ScalarBlender** __retval);
void BlenderMap__New1_fn(BlenderMap** __retval);

struct BlenderMap : uObject
{
    static uSStrong< ::g::Uno::Collections::Dictionary*> _blenders_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _blenders() { return BlenderMap_typeof()->Init(), _blenders_; }
    static uSStrong< ::g::Uno::Collections::Dictionary*> _scalarBlenders_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _scalarBlenders() { return BlenderMap_typeof()->Init(), _scalarBlenders_; }

    void ctor_();
    static ::g::Fuse::Internal::Blender* Get(uType* __type);
    static ::g::Fuse::Internal::ScalarBlender* GetScalar(uType* __type);
    static BlenderMap* New1();
};
// }

}}} // ::g::Fuse::Internal
