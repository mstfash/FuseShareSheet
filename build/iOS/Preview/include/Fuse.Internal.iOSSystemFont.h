// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/internal/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Internal{struct FontFaceDescriptor;}}}
namespace g{namespace Fuse{namespace Internal{struct iOSSystemFont;}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Collections{struct HashSet;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}

namespace g{
namespace Fuse{
namespace Internal{

// internal static extern class iOSSystemFont :1728
// {
uClassType* iOSSystemFont_typeof();
void iOSSystemFont__AddFamily_fn(uString* name);
void iOSSystemFont__AddFontPath_fn(uString* name, uString* path);
void iOSSystemFont__AddFontPaths_fn();
void iOSSystemFont__get_Default_fn(::g::Uno::Collections::List** __retval);
void iOSSystemFont__EnsureFontPathsAdded_fn();
void iOSSystemFont__get_Families_fn(::g::Uno::Collections::HashSet** __retval);
void iOSSystemFont__get_FontPaths_fn(::g::Uno::Collections::Dictionary** __retval);
void iOSSystemFont__Get_fn(uString* family, int* style, int* weight, ::g::Uno::Collections::List** __retval);
void iOSSystemFont__GetDefaultUIFontDescriptor_fn(uObject** __retval);
void iOSSystemFont__GetDescriptorFontName_fn(uObject* descriptor, uString** __retval);
void iOSSystemFont__GetDescriptors_fn(uString* fileName, uArray** __retval);
void iOSSystemFont__GetDescriptorsFromFontNames_fn(uArray* fontNames, ::g::Uno::Collections::List** __retval);
void iOSSystemFont__GetFallback_fn(::g::Uno::UX::FileSource* file, ::g::Uno::Collections::List** __retval);
void iOSSystemFont__GetFallbackUIFontDescriptors_fn(uObject* rawDescriptor, uArray** __retval);
void iOSSystemFont__GetFontNamesFromUIFontDescriptors_fn(uArray* descriptors, uArray** __retval);
void iOSSystemFont__GetFontNameStyles_fn(uString* fontName, uObject** __retval);
void iOSSystemFont__GetMatchingFontDescriptor_fn(uString* family, bool* isItalic, uString* weight, uObject** __retval);
void iOSSystemFont__GetMatchingUIFontDescriptor_fn(uString* fileName, int* index, uDelegate* stylePredicate, uObject** __retval);
void iOSSystemFont__GetPostscriptName_fn(uObject* descriptor, uString** __retval);
void iOSSystemFont__GetStyleName_fn(uObject* descriptor, uString** __retval);

struct iOSSystemFont : uObject
{
    static uSStrong< ::g::Uno::Collections::HashSet*> _families_;
    static uSStrong< ::g::Uno::Collections::HashSet*>& _families() { return iOSSystemFont_typeof()->Init(), _families_; }
    static uSStrong< ::g::Uno::Collections::Dictionary*> _fontPaths_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _fontPaths() { return iOSSystemFont_typeof()->Init(), _fontPaths_; }
    static uSStrong<uArray*> _weightNames_;
    static uSStrong<uArray*>& _weightNames() { return iOSSystemFont_typeof()->Init(), _weightNames_; }

    static void AddFamily(uString* name);
    static void AddFontPath(uString* name, uString* path);
    static void AddFontPaths();
    static void EnsureFontPathsAdded();
    static ::g::Uno::Collections::List* Get(uString* family, int style, int weight);
    static uObject* GetDefaultUIFontDescriptor();
    static uString* GetDescriptorFontName(uObject* descriptor);
    static uArray* GetDescriptors(uString* fileName);
    static ::g::Uno::Collections::List* GetDescriptorsFromFontNames(uArray* fontNames);
    static ::g::Uno::Collections::List* GetFallback(::g::Uno::UX::FileSource* file);
    static uArray* GetFallbackUIFontDescriptors(uObject* rawDescriptor);
    static uArray* GetFontNamesFromUIFontDescriptors(uArray* descriptors);
    static uObject* GetFontNameStyles(uString* fontName);
    static uObject* GetMatchingFontDescriptor(uString* family, bool isItalic, uString* weight);
    static uObject* GetMatchingUIFontDescriptor(uString* fileName, int index, uDelegate* stylePredicate);
    static uString* GetPostscriptName(uObject* descriptor);
    static uString* GetStyleName(uObject* descriptor);
    static ::g::Uno::Collections::List* Default();
    static ::g::Uno::Collections::HashSet* Families();
    static ::g::Uno::Collections::Dictionary* FontPaths();
};
// }

}}} // ::g::Fuse::Internal
