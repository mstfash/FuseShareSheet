// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/diagnostics/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Diagnostics{struct Debug;}}}

namespace g{
namespace Uno{
namespace Diagnostics{

// public static class Debug :75
// {
uClassType* Debug_typeof();
void Debug__Assert_fn(bool* value, uString* expression, uString* filename, int* line, uArray* operands);
void Debug__EmitLog_fn(uString* message, int* type);
void Debug__Log2_fn(uObject* message, int* type, uString* filename, int* line);
void Debug__Log3_fn(uString* message);
void Debug__Log4_fn(uString* message, int* type);
void Debug__Log5_fn(uString* message, int* type, uString* filename, int* line);
void Debug__SetLogHandler_fn(uDelegate* handler);

struct Debug : uObject
{
    static uSStrong<uDelegate*> _assertionHandler_;
    static uSStrong<uDelegate*>& _assertionHandler() { return Debug_typeof()->Init(), _assertionHandler_; }
    static uSStrong<uString*> _indentStr_;
    static uSStrong<uString*>& _indentStr() { return Debug_typeof()->Init(), _indentStr_; }
    static uSStrong<uDelegate*> _logHandler_;
    static uSStrong<uDelegate*>& _logHandler() { return Debug_typeof()->Init(), _logHandler_; }

    static void Assert(bool value, uString* expression, uString* filename, int line, uArray* operands);
    static void EmitLog(uString* message, int type);
    static void Log2(uObject* message, int type, uString* filename, int line);
    static void Log3(uString* message);
    static void Log4(uString* message, int type);
    static void Log5(uString* message, int type, uString* filename, int line);
    static void SetLogHandler(uDelegate* handler);
};
// }

}}} // ::g::Uno::Diagnostics
