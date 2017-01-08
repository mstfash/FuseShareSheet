// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/content/fonts/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Content.Fonts.BitmapFont.CharPair.h>
#include <Uno.Content.Fonts.BitmapFont.GlyphInfo.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Content{namespace Fonts{struct BitmapFont;}}}}
namespace g{namespace Uno{namespace Content{namespace Fonts{struct FontFace;}}}}
namespace g{namespace Uno{namespace Graphics{struct Texture2D;}}}
namespace g{namespace Uno{struct Buffer;}}

namespace g{
namespace Uno{
namespace Content{
namespace Fonts{

// public sealed class BitmapFont :9
// {
struct BitmapFont_type : uType
{
    ::g::Uno::IDisposable interface0;
};

BitmapFont_type* BitmapFont_typeof();
void BitmapFont__ctor__fn(BitmapFont* __this);
void BitmapFont__CreateFromPbf_fn(::g::Uno::Buffer* pbf, ::g::Uno::Graphics::Texture2D* tex, BitmapFont** __retval);
void BitmapFont__New1_fn(BitmapFont** __retval);
void BitmapFont__UnoIDisposableDispose_fn(BitmapFont* __this);

struct BitmapFont : uObject
{
    uStrong< ::g::Uno::Collections::Dictionary*> Advances;
    float Ascent;
    float Descent;
    uStrong<uString*> FamilyName;
    uStrong< ::g::Uno::Content::Fonts::FontFace*> FontFace;
    uStrong< ::g::Uno::Collections::Dictionary*> Glyphs;
    uStrong< ::g::Uno::Collections::Dictionary*> Kernings;
    float LineHeight;
    float PixelSize;
    float PixelSpread;
    uStrong<uString*> StyleName;
    uStrong< ::g::Uno::Graphics::Texture2D*> Texture;

    void ctor_();
    static BitmapFont* CreateFromPbf(::g::Uno::Buffer* pbf, ::g::Uno::Graphics::Texture2D* tex);
    static BitmapFont* New1();
};
// }

}}}} // ::g::Uno::Content::Fonts
