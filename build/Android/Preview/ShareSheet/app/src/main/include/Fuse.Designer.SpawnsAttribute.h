// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Designer/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Attribute.h>
namespace g{namespace Fuse{namespace Designer{struct SpawnsAttribute;}}}

namespace g{
namespace Fuse{
namespace Designer{

// public sealed class SpawnsAttribute :63
// {
uType* SpawnsAttribute_typeof();
void SpawnsAttribute__ctor_1_fn(SpawnsAttribute* __this, uString* sourceType, uString* targetProperty);
void SpawnsAttribute__New1_fn(uString* sourceType, uString* targetProperty, SpawnsAttribute** __retval);

struct SpawnsAttribute : ::g::Uno::Attribute
{
    uStrong<uString*> SourceType;
    uStrong<uString*> TargetProperty;

    void ctor_1(uString* sourceType, uString* targetProperty);
    static SpawnsAttribute* New1(uString* sourceType, uString* targetProperty);
};
// }

}}} // ::g::Fuse::Designer
