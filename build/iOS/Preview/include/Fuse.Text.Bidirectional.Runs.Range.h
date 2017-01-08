// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Text{namespace Bidirectional{struct Runs__Range;}}}}
namespace g{namespace Fuse{namespace Text{struct ShapedRun;}}}
namespace g{namespace Fuse{namespace Text{struct SinglyLinkedList;}}}

namespace g{
namespace Fuse{
namespace Text{
namespace Bidirectional{

// private sealed class Runs.Range :166
// {
uType* Runs__Range_typeof();
void Runs__Range__ctor__fn(Runs__Range* __this, int* level, ::g::Fuse::Text::SinglyLinkedList* left, ::g::Fuse::Text::SinglyLinkedList* right);
void Runs__Range__New1_fn(int* level, ::g::Fuse::Text::SinglyLinkedList* left, ::g::Fuse::Text::SinglyLinkedList* right, Runs__Range** __retval);

struct Runs__Range : uObject
{
    uStrong< ::g::Fuse::Text::SinglyLinkedList*> Left;
    int Level;
    uStrong< ::g::Fuse::Text::SinglyLinkedList*> Right;

    void ctor_(int level, ::g::Fuse::Text::SinglyLinkedList* left, ::g::Fuse::Text::SinglyLinkedList* right);
    static Runs__Range* New1(int level, ::g::Fuse::Text::SinglyLinkedList* left, ::g::Fuse::Text::SinglyLinkedList* right);
};
// }

}}}} // ::g::Fuse::Text::Bidirectional
