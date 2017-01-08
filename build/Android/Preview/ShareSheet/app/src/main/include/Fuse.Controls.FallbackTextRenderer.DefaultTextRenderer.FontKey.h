// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/textcontrols/fallbacktextrenderer/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextRenderer{struct DefaultTextRenderer__FontKey;}}}}
namespace g{namespace Uno{namespace Content{namespace Fonts{struct FontFace;}}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace FallbackTextRenderer{

// private sealed class DefaultTextRenderer.FontKey :13
// {
uType* DefaultTextRenderer__FontKey_typeof();
void DefaultTextRenderer__FontKey__ctor__fn(DefaultTextRenderer__FontKey* __this, ::g::Uno::Content::Fonts::FontFace* fontFace, int* size);
void DefaultTextRenderer__FontKey__Equals_fn(DefaultTextRenderer__FontKey* __this, uObject* obj, bool* __retval);
void DefaultTextRenderer__FontKey__GetHashCode_fn(DefaultTextRenderer__FontKey* __this, int* __retval);
void DefaultTextRenderer__FontKey__New1_fn(::g::Uno::Content::Fonts::FontFace* fontFace, int* size, DefaultTextRenderer__FontKey** __retval);

struct DefaultTextRenderer__FontKey : uObject
{
    uStrong< ::g::Uno::Content::Fonts::FontFace*> FontFace;
    int Size;

    void ctor_(::g::Uno::Content::Fonts::FontFace* fontFace, int size);
    static DefaultTextRenderer__FontKey* New1(::g::Uno::Content::Fonts::FontFace* fontFace, int size);
};
// }

}}}} // ::g::Fuse::Controls::FallbackTextRenderer
