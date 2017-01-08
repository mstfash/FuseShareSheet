// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/resources/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.FileSource.h>
namespace g{namespace Fuse{namespace Resources{struct SystemFileSource;}}}
namespace g{namespace Uno{namespace IO{struct Stream;}}}

namespace g{
namespace Fuse{
namespace Resources{

// internal sealed class SystemFileSource :614
// {
::g::Uno::UX::FileSource_type* SystemFileSource_typeof();
void SystemFileSource__ctor_1_fn(SystemFileSource* __this, uString* file);
void SystemFileSource__New1_fn(uString* file, SystemFileSource** __retval);
void SystemFileSource__OpenRead_fn(SystemFileSource* __this, ::g::Uno::IO::Stream** __retval);

struct SystemFileSource : ::g::Uno::UX::FileSource
{
    void ctor_1(uString* file);
    static SystemFileSource* New1(uString* file);
};
// }

}}} // ::g::Fuse::Resources
