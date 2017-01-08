// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct HitTestResult;}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{

// public sealed class HitTestResult :2921
// {
uType* HitTestResult_typeof();
void HitTestResult__ctor__fn(HitTestResult* __this);
void HitTestResult__get_HasHitDistance_fn(HitTestResult* __this, bool* __retval);
void HitTestResult__set_HasHitDistance_fn(HitTestResult* __this, bool* value);
void HitTestResult__get_HitDistance_fn(HitTestResult* __this, float* __retval);
void HitTestResult__set_HitDistance_fn(HitTestResult* __this, float* value);
void HitTestResult__get_HitObject_fn(HitTestResult* __this, ::g::Fuse::Visual** __retval);
void HitTestResult__set_HitObject_fn(HitTestResult* __this, ::g::Fuse::Visual* value);
void HitTestResult__New1_fn(HitTestResult** __retval);

struct HitTestResult : uObject
{
    bool _HasHitDistance;
    float _HitDistance;
    uStrong< ::g::Fuse::Visual*> _HitObject;

    void ctor_();
    bool HasHitDistance();
    void HasHitDistance(bool value);
    float HitDistance();
    void HitDistance(float value);
    ::g::Fuse::Visual* HitObject();
    void HitObject(::g::Fuse::Visual* value);
    static HitTestResult* New1();
};
// }

}} // ::g::Fuse
