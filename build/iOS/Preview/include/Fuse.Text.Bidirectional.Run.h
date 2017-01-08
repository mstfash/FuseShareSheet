// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Text{namespace Bidirectional{struct Run;}}}}
namespace g{namespace Fuse{namespace Text{struct Substring;}}}

namespace g{
namespace Fuse{
namespace Text{
namespace Bidirectional{

// public struct Run :8
// {
uStructType* Run_typeof();
void Run__ctor__fn(Run* __this, ::g::Fuse::Text::Substring* str, int* level);
void Run__get_Direction_fn(Run* __this, int* __retval);
void Run__get_IsLeftToRight_fn(Run* __this, bool* __retval);
void Run__get_IsRightToLeft_fn(Run* __this, bool* __retval);
void Run__get_LastLogicalIndex_fn(Run* __this, int* __retval);
void Run__get_LogicalEnd_fn(Run* __this, int* __retval);
void Run__get_LogicalStart_fn(Run* __this, int* __retval);
void Run__New1_fn(::g::Fuse::Text::Substring* str, int* level, Run* __retval);
void Run__get_VisualLeft_fn(Run* __this, int* __retval);
void Run__get_VisualRight_fn(Run* __this, int* __retval);

struct Run
{
    uStrong< ::g::Fuse::Text::Substring*> String;
    int Level;

    void ctor_(::g::Fuse::Text::Substring* str, int level);
    int Direction();
    bool IsLeftToRight();
    bool IsRightToLeft();
    int LastLogicalIndex();
    int LogicalEnd();
    int LogicalStart();
    int VisualLeft();
    int VisualRight();
};

Run Run__New1(::g::Fuse::Text::Substring* str, int level);
// }

}}}} // ::g::Fuse::Text::Bidirectional
