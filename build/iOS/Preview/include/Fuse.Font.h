// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Internal{struct FontFaceDescriptor;}}}
namespace g{namespace Fuse{struct Font;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{

// public class Font :2459
// {
uType* Font_typeof();
void Font__ctor__fn(Font* __this, ::g::Uno::Collections::List* descriptors);
void Font__ctor_1_fn(Font* __this, ::g::Uno::UX::FileSource* file);
void Font__get_FileSource_fn(Font* __this, ::g::Uno::UX::FileSource** __retval);
void Font__New1_fn(::g::Uno::Collections::List* descriptors, Font** __retval);
void Font__New2_fn(::g::Uno::UX::FileSource* file, Font** __retval);
void Font__get_PlatformDefault_fn(Font** __retval);
void Font__get_PlatformDefaultSize_fn(float* __retval);
void Font__get_PlatformDefaultTextColor_fn(::g::Uno::Float4* __retval);

struct Font : uObject
{
    static uSStrong<Font*> _fallback_;
    static uSStrong<Font*>& _fallback() { return _fallback_; }
    uStrong< ::g::Uno::Collections::List*> Descriptors;

    void ctor_(::g::Uno::Collections::List* descriptors);
    void ctor_1(::g::Uno::UX::FileSource* file);
    ::g::Uno::UX::FileSource* FileSource();
    static Font* New1(::g::Uno::Collections::List* descriptors);
    static Font* New2(::g::Uno::UX::FileSource* file);
    static Font* PlatformDefault();
    static float PlatformDefaultSize();
    static ::g::Uno::Float4 PlatformDefaultTextColor();
};
// }

}} // ::g::Fuse
