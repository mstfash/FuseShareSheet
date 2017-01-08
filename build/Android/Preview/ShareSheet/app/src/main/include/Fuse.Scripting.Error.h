// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/scripting/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Exception.h>
namespace g{namespace Fuse{namespace Scripting{struct Error;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public sealed class Error :2431
// {
::g::Uno::Exception_type* Error_typeof();
void Error__ctor_3_fn(Error* __this, uString* message);
void Error__New4_fn(uString* message, Error** __retval);

struct Error : ::g::Uno::Exception
{
    void ctor_3(uString* message);
    static Error* New4(uString* message);
};
// }

}}} // ::g::Fuse::Scripting
