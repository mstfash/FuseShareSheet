// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/implementation/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Fuse{namespace Text{namespace Bidirectional{namespace Implementation{struct UBidiRuns;}}}}}
namespace g{namespace Fuse{namespace Text{namespace Bidirectional{struct Run;}}}}
namespace g{namespace Fuse{namespace Text{struct Substring;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Fuse{
namespace Text{
namespace Bidirectional{
namespace Implementation{

// internal static extern class UBidiRuns :1268
// {
uClassType* UBidiRuns_typeof();
void UBidiRuns__CheckError_fn(int* errorCode);
void UBidiRuns__Close_fn(void** ubidi);
void UBidiRuns__ErrorCString_fn(int* errorCode, void** __retval);
void UBidiRuns__GetLevels_fn(void** ubidi, uArray* outLevels, int* length, int* __retval);
void UBidiRuns__GetLevels1_fn(void** ubidi, ::g::Fuse::Text::Substring* text, ::g::Uno::Collections::List** __retval);
void UBidiRuns__GetLogical_fn(::g::Fuse::Text::Substring* text, ::g::Uno::Collections::List** __retval);
void UBidiRuns__IsFailure_fn(int* errorCode, int* __retval);
void UBidiRuns__Open_fn(void** __retval);
void UBidiRuns__SetPara_fn(void** ubidi, ::g::Fuse::Text::Substring* text);
void UBidiRuns__SetPara_Raw_fn(void** ubidi, void** text, int* length, int* __retval);

struct UBidiRuns : uObject
{
    static void CheckError(int errorCode);
    static void Close(void* ubidi);
    static void* ErrorCString(int errorCode);
    static int GetLevels(void* ubidi, uArray* outLevels, int length);
    static ::g::Uno::Collections::List* GetLevels1(void* ubidi, ::g::Fuse::Text::Substring* text);
    static ::g::Uno::Collections::List* GetLogical(::g::Fuse::Text::Substring* text);
    static int IsFailure(int errorCode);
    static void* Open();
    static void SetPara(void* ubidi, ::g::Fuse::Text::Substring* text);
    static int SetPara_Raw(void* ubidi, void* text, int length);
};
// }

}}}}} // ::g::Fuse::Text::Bidirectional::Implementation
