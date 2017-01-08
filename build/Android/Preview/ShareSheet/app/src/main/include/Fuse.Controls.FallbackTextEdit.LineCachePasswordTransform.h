// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/textcontrols/fallbacktextedit/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.FallbackTextEdit.LineCacheTransform.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextEdit{struct LineCachePasswordTransform;}}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace FallbackTextEdit{

// internal sealed class LineCachePasswordTransform :702
// {
struct LineCachePasswordTransform_type : uType
{
    ::g::Fuse::Controls::FallbackTextEdit::LineCacheTransform interface0;
};

LineCachePasswordTransform_type* LineCachePasswordTransform_typeof();
void LineCachePasswordTransform__ctor__fn(LineCachePasswordTransform* __this);
void LineCachePasswordTransform__New1_fn(LineCachePasswordTransform** __retval);
void LineCachePasswordTransform__SetReveal_fn(LineCachePasswordTransform* __this, int* r, bool* __retval);
void LineCachePasswordTransform__Transform_fn(LineCachePasswordTransform* __this, uString* text, uString** __retval);

struct LineCachePasswordTransform : uObject
{
    int _reveal;

    void ctor_();
    bool SetReveal(int r);
    uString* Transform(uString* text);
    static LineCachePasswordTransform* New1();
};
// }

}}}} // ::g::Fuse::Controls::FallbackTextEdit
