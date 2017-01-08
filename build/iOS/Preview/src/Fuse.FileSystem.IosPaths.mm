// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.FileSystem/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.FileSystem.IosPaths.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.String.h>
#include <uObjC.Foreign.h>
static uString* STRINGS[4];
static uType* TYPES[1];

namespace g{
namespace Fuse{
namespace FileSystem{

// internal sealed extern class IosPaths :1270
// {
static void IosPaths_build(uType* type)
{
    ::STRINGS[0] = uString::Const("documents");
    ::STRINGS[1] = uString::Const("library");
    ::STRINGS[2] = uString::Const("caches");
    ::STRINGS[3] = uString::Const("temporary");
    ::TYPES[0] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof(), NULL);
}

uType* IosPaths_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(IosPaths);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.FileSystem.IosPaths", options);
    type->fp_build_ = IosPaths_build;
    type->fp_ctor_ = (void*)IosPaths__New1_fn;
    return type;
}

// public generated IosPaths() :1270
void IosPaths__ctor__fn(IosPaths* __this)
{
    __this->ctor_();
}

// public static string GetCachesDirectory() :1284
void IosPaths__GetCachesDirectory_fn(uString** __retval)
{
    *__retval = IosPaths::GetCachesDirectory();
}

// public static string GetDocumentsDirectory() :1291
void IosPaths__GetDocumentsDirectory_fn(uString** __retval)
{
    *__retval = IosPaths::GetDocumentsDirectory();
}

// public static string GetLibraryDirectory() :1298
void IosPaths__GetLibraryDirectory_fn(uString** __retval)
{
    *__retval = IosPaths::GetLibraryDirectory();
}

// internal static Uno.Collections.Dictionary<string, string> GetPathDictionary() :1272
void IosPaths__GetPathDictionary_fn(::g::Uno::Collections::Dictionary** __retval)
{
    *__retval = IosPaths::GetPathDictionary();
}

// public static string GetTemporaryDirectory() :1305
void IosPaths__GetTemporaryDirectory_fn(uString** __retval)
{
    *__retval = IosPaths::GetTemporaryDirectory();
}

// public generated IosPaths New() :1270
void IosPaths__New1_fn(IosPaths** __retval)
{
    *__retval = IosPaths::New1();
}

// public generated IosPaths() [instance] :1270
void IosPaths::ctor_()
{
}

// public static string GetCachesDirectory() [static] :1284
uString* IosPaths::GetCachesDirectory()
{
    @autoreleasepool
    {
        return ::uObjC::UnoString([] () -> ::NSString*
        {
            return NSSearchPathForDirectoriesInDomains(NSCachesDirectory, NSUserDomainMask, YES)[0];
        } ());
        
    }
    
}

// public static string GetDocumentsDirectory() [static] :1291
uString* IosPaths::GetDocumentsDirectory()
{
    @autoreleasepool
    {
        return ::uObjC::UnoString([] () -> ::NSString*
        {
            return NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES)[0];
        } ());
        
    }
    
}

// public static string GetLibraryDirectory() [static] :1298
uString* IosPaths::GetLibraryDirectory()
{
    @autoreleasepool
    {
        return ::uObjC::UnoString([] () -> ::NSString*
        {
            return NSSearchPathForDirectoriesInDomains(NSLibraryDirectory, NSUserDomainMask, YES)[0];
        } ());
        
    }
    
}

// internal static Uno.Collections.Dictionary<string, string> GetPathDictionary() [static] :1272
::g::Uno::Collections::Dictionary* IosPaths::GetPathDictionary()
{
    uStackFrame __("Fuse.FileSystem.IosPaths", "GetPathDictionary()");
    ::g::Uno::Collections::Dictionary* dict = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[0/*Uno.Collections.Dictionary<string, string>*/]);
    ::g::Uno::Collections::Dictionary__set_Item_fn(dict, ::STRINGS[0/*"documents"*/], IosPaths::GetDocumentsDirectory());
    ::g::Uno::Collections::Dictionary__set_Item_fn(dict, ::STRINGS[1/*"library"*/], IosPaths::GetLibraryDirectory());
    ::g::Uno::Collections::Dictionary__set_Item_fn(dict, ::STRINGS[2/*"caches"*/], IosPaths::GetCachesDirectory());
    ::g::Uno::Collections::Dictionary__set_Item_fn(dict, ::STRINGS[3/*"temporary"*/], IosPaths::GetTemporaryDirectory());
    return dict;
}

// public static string GetTemporaryDirectory() [static] :1305
uString* IosPaths::GetTemporaryDirectory()
{
    @autoreleasepool
    {
        return ::uObjC::UnoString([] () -> ::NSString*
        {
            return NSTemporaryDirectory();
        } ());
        
    }
    
}

// public generated IosPaths New() [static] :1270
IosPaths* IosPaths::New1()
{
    IosPaths* obj1 = (IosPaths*)uNew(IosPaths_typeof());
    obj1->ctor_();
    return obj1;
}
// }

}}} // ::g::Fuse::FileSystem
