// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Text.Bidirectional.Implementation.UBidiRuns.h>
#include <Fuse.Text.Bidirectional.Run.h>
#include <Fuse.Text.Implementation.CString.h>
#include <Fuse.Text.Implementation.UnoString.h>
#include <Fuse.Text.Substring.h>
#include <string.h>
#include <unicode/ubidi.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
#include <Uno.IntPtr.h>
#include <Uno.String.h>
static uString* STRINGS[1];
static uType* TYPES[2];

namespace g{
namespace Fuse{
namespace Text{
namespace Bidirectional{
namespace Implementation{

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/implementation/$.uno
// ---------------------------------------------------------------------------------------------------

// internal static extern class UBidiRuns :1268
// {
static void UBidiRuns_build(uType* type)
{
    ::STRINGS[0] = uString::Const("UBiDi error: ");
    ::TYPES[0] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Text::Bidirectional::Run_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Byte_typeof()->Array();
}

uClassType* UBidiRuns_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Text.Bidirectional.Implementation.UBidiRuns", options);
    type->fp_build_ = UBidiRuns_build;
    return type;
}

// private static void CheckError(int errorCode) :1328
void UBidiRuns__CheckError_fn(int* errorCode)
{
    UBidiRuns::CheckError(*errorCode);
}

// private static void Close(Uno.IntPtr ubidi) :1375
void UBidiRuns__Close_fn(void** ubidi)
{
    UBidiRuns::Close(*ubidi);
}

// private static Uno.IntPtr ErrorCString(int errorCode) :1344
void UBidiRuns__ErrorCString_fn(int* errorCode, void** __retval)
{
    *__retval = UBidiRuns::ErrorCString(*errorCode);
}

// private static int GetLevels(Uno.IntPtr ubidi, byte[] outLevels, int length) :1358
void UBidiRuns__GetLevels_fn(void** ubidi, uArray* outLevels, int* length, int* __retval)
{
    *__retval = UBidiRuns::GetLevels(*ubidi, outLevels, *length);
}

// private static Uno.Collections.List<Fuse.Text.Bidirectional.Run> GetLevels(Uno.IntPtr ubidi, Fuse.Text.Substring text) :1304
void UBidiRuns__GetLevels1_fn(void** ubidi, ::g::Fuse::Text::Substring* text, ::g::Uno::Collections::List** __retval)
{
    *__retval = UBidiRuns::GetLevels1(*ubidi, text);
}

// public static Uno.Collections.List<Fuse.Text.Bidirectional.Run> GetLogical(Fuse.Text.Substring text) :1270
void UBidiRuns__GetLogical_fn(::g::Fuse::Text::Substring* text, ::g::Uno::Collections::List** __retval)
{
    *__retval = UBidiRuns::GetLogical(text);
}

// private static int IsFailure(int errorCode) :1338
void UBidiRuns__IsFailure_fn(int* errorCode, int* __retval)
{
    *__retval = UBidiRuns::IsFailure(*errorCode);
}

// private static Uno.IntPtr Open() :1369
void UBidiRuns__Open_fn(void** __retval)
{
    *__retval = UBidiRuns::Open();
}

// private static void SetPara(Uno.IntPtr ubidi, Fuse.Text.Substring text) :1284
void UBidiRuns__SetPara_fn(void** ubidi, ::g::Fuse::Text::Substring* text)
{
    UBidiRuns::SetPara(*ubidi, text);
}

// private static int SetPara_Raw(Uno.IntPtr ubidi, Uno.IntPtr text, int length) :1350
void UBidiRuns__SetPara_Raw_fn(void** ubidi, void** text, int* length, int* __retval)
{
    *__retval = UBidiRuns::SetPara_Raw(*ubidi, *text, *length);
}

// private static void CheckError(int errorCode) [static] :1328
void UBidiRuns::CheckError(int errorCode)
{
    uStackFrame __("Fuse.Text.Bidirectional.Implementation.UBidiRuns", "CheckError(int)");

    if (UBidiRuns::IsFailure(errorCode) != 0)
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::STRINGS[0/*"UBiDi error: "*/], ::g::Fuse::Text::Implementation::CString::ToString(UBidiRuns::ErrorCString(errorCode)))));
}

// private static void Close(Uno.IntPtr ubidi) [static] :1375
void UBidiRuns::Close(void* ubidi)
{
    return ubidi_close((UBiDi*)ubidi);
}

// private static Uno.IntPtr ErrorCString(int errorCode) [static] :1344
void* UBidiRuns::ErrorCString(int errorCode)
{
    return (void*)u_errorName((UErrorCode)errorCode);
}

// private static int GetLevels(Uno.IntPtr ubidi, byte[] outLevels, int length) [static] :1358
int UBidiRuns::GetLevels(void* ubidi, uArray* outLevels, int length)
{
    return [] (void* ubidi, uint8_t* outLevels, int length) -> int
    {
        UErrorCode errorCode = U_ZERO_ERROR;
        			const UBiDiLevel* levels = ubidi_getLevels((UBiDi*)ubidi, &errorCode);
        			if (U_FAILURE(errorCode))
        				return (int)errorCode;
        			memcpy(outLevels, levels, length);
        			return (int)errorCode;
    } (ubidi, (uint8_t*)outLevels->Ptr(), length);
}

// private static Uno.Collections.List<Fuse.Text.Bidirectional.Run> GetLevels(Uno.IntPtr ubidi, Fuse.Text.Substring text) [static] :1304
::g::Uno::Collections::List* UBidiRuns::GetLevels1(void* ubidi, ::g::Fuse::Text::Substring* text)
{
    uStackFrame __("Fuse.Text.Bidirectional.Implementation.UBidiRuns", "GetLevels(Uno.IntPtr,Fuse.Text.Substring)");
    int length = uPtr(text)->Length;

    if (length == 0)
        return (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[0/*Uno.Collections.List<Fuse.Text.Bidirectional.Run>*/]);

    uArray* levels = uArray::New(::TYPES[1/*byte[]*/], length);
    UBidiRuns::CheckError(UBidiRuns::GetLevels(ubidi, levels, length));
    ::g::Uno::Collections::List* result = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[0/*Uno.Collections.List<Fuse.Text.Bidirectional.Run>*/]);
    int start = 0;
    uint8_t lastLevel = levels->Item<uint8_t>(0);

    for (int i = 1; i < length; ++i)
    {
        uint8_t currentLevel = uPtr(levels)->Item<uint8_t>(i);

        if (currentLevel != lastLevel)
        {
            ::g::Uno::Collections::List__Add_fn(uPtr(result), uCRef(::g::Fuse::Text::Bidirectional::Run__New1(uPtr(text)->GetSubstring1(start, i - start), (int)lastLevel)));
            start = i;
            lastLevel = currentLevel;
        }
    }

    ::g::Uno::Collections::List__Add_fn(result, uCRef(::g::Fuse::Text::Bidirectional::Run__New1(text->GetSubstring1(start, length - start), (int)lastLevel)));
    return result;
}

// public static Uno.Collections.List<Fuse.Text.Bidirectional.Run> GetLogical(Fuse.Text.Substring text) [static] :1270
::g::Uno::Collections::List* UBidiRuns::GetLogical(::g::Fuse::Text::Substring* text)
{
    uStackFrame __("Fuse.Text.Bidirectional.Implementation.UBidiRuns", "GetLogical(Fuse.Text.Substring)");
    void* ubidi = UBidiRuns::Open();

    {
        const auto __finally_fun = [&]()
        {
            UBidiRuns::Close(ubidi);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        UBidiRuns::SetPara(ubidi, text);
        return UBidiRuns::GetLevels1(ubidi, text);
    }
}

// private static int IsFailure(int errorCode) [static] :1338
int UBidiRuns::IsFailure(int errorCode)
{
    return U_FAILURE((UErrorCode)errorCode);
}

// private static Uno.IntPtr Open() [static] :1369
void* UBidiRuns::Open()
{
    return ubidi_open();
}

// private static void SetPara(Uno.IntPtr ubidi, Fuse.Text.Substring text) [static] :1284
void UBidiRuns::SetPara(void* ubidi, ::g::Fuse::Text::Substring* text)
{
    uStackFrame __("Fuse.Text.Bidirectional.Implementation.UBidiRuns", "SetPara(Uno.IntPtr,Fuse.Text.Substring)");
    UBidiRuns::CheckError(UBidiRuns::SetPara_Raw(ubidi, ::g::Fuse::Text::Implementation::UnoString::GetSubstringPtr(text), uPtr(text)->Length));
}

// private static int SetPara_Raw(Uno.IntPtr ubidi, Uno.IntPtr text, int length) [static] :1350
int UBidiRuns::SetPara_Raw(void* ubidi, void* text, int length)
{
    UErrorCode errorCode = U_ZERO_ERROR;
    			ubidi_setPara((UBiDi*)ubidi, (const UChar*)text, length, UBIDI_DEFAULT_LTR, NULL, &errorCode);
    			return (int)errorCode;
}
// }

}}}}} // ::g::Fuse::Text::Bidirectional::Implementation
