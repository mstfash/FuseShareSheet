// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Outracks{namespace Simulator{struct Bundle;}}}

namespace g{
namespace Outracks{
namespace Simulator{

// public static class Bundle :2179
// {
uClassType* Bundle_typeof();
void Bundle__AddOrUpdateFile_fn(uString* projectRelativeFilePath, uArray* data);

struct Bundle : uObject
{
    static void AddOrUpdateFile(uString* projectRelativeFilePath, uArray* data);
};
// }

}}} // ::g::Outracks::Simulator
