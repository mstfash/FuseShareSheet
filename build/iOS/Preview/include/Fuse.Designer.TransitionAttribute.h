// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Designer/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Attribute.h>
namespace g{namespace Fuse{namespace Designer{struct TransitionAttribute;}}}

namespace g{
namespace Fuse{
namespace Designer{

// public sealed class TransitionAttribute :74
// {
uType* TransitionAttribute_typeof();
void TransitionAttribute__ctor_1_fn(TransitionAttribute* __this, uString* incomingType, uString* targetType, uString* targetProperty);
void TransitionAttribute__New1_fn(uString* incomingType, uString* targetType, uString* targetProperty, TransitionAttribute** __retval);

struct TransitionAttribute : ::g::Uno::Attribute
{
    uStrong<uString*> IncomingType;
    uStrong<uString*> TargetProperty;
    uStrong<uString*> TargetType;

    void ctor_1(uString* incomingType, uString* targetType, uString* targetProperty);
    static TransitionAttribute* New1(uString* incomingType, uString* targetType, uString* targetProperty);
};
// }

}}} // ::g::Fuse::Designer
