// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Drawing.Paths/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Drawing{struct Token;}}}

namespace g{
namespace Fuse{
namespace Drawing{

// internal sealed class Token :521
// {
uType* Token_typeof();
void Token__ctor__fn(Token* __this, int* first, bool* hasAction);
void Token__New1_fn(int* first, bool* hasAction, Token** __retval);

struct Token : uObject
{
    int First;
    bool HasAction;
    int Last;
    uStrong<Token*> Next;

    void ctor_(int first, bool hasAction);
    static Token* New1(int first, bool hasAction);
};
// }

}}} // ::g::Fuse::Drawing
