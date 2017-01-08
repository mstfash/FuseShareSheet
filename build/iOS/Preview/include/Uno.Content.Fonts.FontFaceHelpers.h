// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/content/fonts/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Content{namespace Fonts{struct BitmapFont;}}}}
namespace g{namespace Uno{namespace Content{namespace Fonts{struct FontFace;}}}}
namespace g{namespace Uno{namespace Content{namespace Fonts{struct FontFaceHelpers;}}}}

namespace g{
namespace Uno{
namespace Content{
namespace Fonts{

// public static class FontFaceHelpers :395
// {
uClassType* FontFaceHelpers_typeof();
void FontFaceHelpers__RenderSpriteFont_fn(::g::Uno::Content::Fonts::FontFace* font, float* size, uString* charset, ::g::Uno::Content::Fonts::BitmapFont** __retval);

struct FontFaceHelpers : uObject
{
    static ::g::Uno::Content::Fonts::BitmapFont* RenderSpriteFont(::g::Uno::Content::Fonts::FontFace* font, float size, uString* charset);
};
// }

}}}} // ::g::Uno::Content::Fonts
