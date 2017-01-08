// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Outracks.Simulator.Bytecode.Lambda.h>
#include <Outracks.Simulator.Bytecode.TypeName.h>
#include <Outracks.Simulator.Closure.h>
#include <Outracks.Simulator.ImmutableList-1.h>
#include <Outracks.Simulator.InvalidDataException.h>
#include <Outracks.Simulator.List.h>
#include <Outracks.Simulator.NonExhaustiveMatch.h>
#include <Outracks.Simulator.Protocol.DebugLog.h>
#include <Outracks.Simulator.Protocol.Error.h>
#include <Outracks.Simulator.Protocol.ExceptionInfo.h>
#include <Outracks.Simulator.Protocol.Execute.h>
#include <Outracks.Simulator.Protocol.MessageFromClient.h>
#include <Outracks.Simulator.Protocol.MessageToClient.h>
#include <Outracks.Simulator.Protocol.RegisterName.h>
#include <Outracks.Simulator.Protocol.Reify.h>
#include <Outracks.Simulator.Protocol.SetSelection.h>
#include <Outracks.Simulator.Protocol.UnhandledException.h>
#include <Uno.Action-1.h>
#include <Uno.Action-2.h>
#include <Uno.Bool.h>
#include <Uno.Char.h>
#include <Uno.Exception.h>
#include <Uno.Func-2.h>
#include <Uno.IO.BinaryReader.h>
#include <Uno.IO.BinaryWriter.h>
#include <Uno.String.h>
#include <Uno.Type.h>
static uString* STRINGS[4];
static uType* TYPES[35];

namespace g{
namespace Outracks{
namespace Simulator{
namespace Protocol{

// /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/messages/$.uno
// ----------------------------------------------------------------------------------

// public sealed class DebugLog :122
// {
static void DebugLog_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::Simulator::Protocol::DebugLog, ClientId), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::Simulator::Protocol::DebugLog, ClientName), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::Simulator::Protocol::DebugLog, Message), 0);
    type->Reflection.SetFields(3,
        new uField("ClientId", 0),
        new uField("ClientName", 1),
        new uField("Message", 2));
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)DebugLog__New1_fn, 0, true, type, 3, ::g::Uno::String_typeof(), ::g::Uno::String_typeof(), ::g::Uno::String_typeof()),
        new uFunction("Read", NULL, (void*)DebugLog__Read1_fn, 0, true, type, 1, ::g::Uno::IO::BinaryReader_typeof()),
        new uFunction("Write", NULL, (void*)DebugLog__Write1_fn, 0, true, uVoid_typeof(), 2, type, ::g::Uno::IO::BinaryWriter_typeof()));
}

uType* DebugLog_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Outracks::Simulator::Protocol::MessageFromClient_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(DebugLog);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Protocol.DebugLog", options);
    type->fp_build_ = DebugLog_build;
    return type;
}

// public DebugLog(string clientId, string clientName, string message) :128
void DebugLog__ctor_1_fn(DebugLog* __this, uString* clientId, uString* clientName, uString* message)
{
    __this->ctor_1(clientId, clientName, message);
}

// public DebugLog New(string clientId, string clientName, string message) :128
void DebugLog__New1_fn(uString* clientId, uString* clientName, uString* message, DebugLog** __retval)
{
    *__retval = DebugLog::New1(clientId, clientName, message);
}

// public static new Outracks.Simulator.Protocol.DebugLog Read(Uno.IO.BinaryReader reader) :142
void DebugLog__Read1_fn(::g::Uno::IO::BinaryReader* reader, DebugLog** __retval)
{
    *__retval = DebugLog::Read1(reader);
}

// public static void Write(Outracks.Simulator.Protocol.DebugLog message, Uno.IO.BinaryWriter writer) :135
void DebugLog__Write1_fn(DebugLog* message, ::g::Uno::IO::BinaryWriter* writer)
{
    DebugLog::Write1(message, writer);
}

// public DebugLog(string clientId, string clientName, string message) [instance] :128
void DebugLog::ctor_1(uString* clientId, uString* clientName, uString* message)
{
    ctor_();
    ClientId = clientId;
    ClientName = clientName;
    Message = message;
}

// public DebugLog New(string clientId, string clientName, string message) [static] :128
DebugLog* DebugLog::New1(uString* clientId, uString* clientName, uString* message)
{
    DebugLog* obj1 = (DebugLog*)uNew(DebugLog_typeof());
    obj1->ctor_1(clientId, clientName, message);
    return obj1;
}

// public static new Outracks.Simulator.Protocol.DebugLog Read(Uno.IO.BinaryReader reader) [static] :142
DebugLog* DebugLog::Read1(::g::Uno::IO::BinaryReader* reader)
{
    uStackFrame __("Outracks.Simulator.Protocol.DebugLog", "Read(Uno.IO.BinaryReader)");
    uString* clientId = uPtr(reader)->ReadString();
    uString* clientName = reader->ReadString();
    uString* message = reader->ReadString();
    return DebugLog::New1(clientId, clientName, message);
}

// public static void Write(Outracks.Simulator.Protocol.DebugLog message, Uno.IO.BinaryWriter writer) [static] :135
void DebugLog::Write1(DebugLog* message, ::g::Uno::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Protocol.DebugLog", "Write(Outracks.Simulator.Protocol.DebugLog,Uno.IO.BinaryWriter)");
    uPtr(writer)->Write24(uPtr(message)->ClientId);
    writer->Write24(message->ClientName);
    writer->Write24(message->Message);
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/messages/$.uno
// ----------------------------------------------------------------------------------

// public sealed class Error :370
// {
static void Error_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Error: ");
    type->SetFields(0,
        ::g::Outracks::Simulator::Protocol::ExceptionInfo_typeof(), offsetof(::g::Outracks::Simulator::Protocol::Error, Exception), 0);
    type->Reflection.SetFields(1,
        new uField("Exception", 0));
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)Error__New1_fn, 0, true, type, 1, ::g::Outracks::Simulator::Protocol::ExceptionInfo_typeof()),
        new uFunction("Read", NULL, (void*)Error__Read1_fn, 0, true, type, 1, ::g::Uno::IO::BinaryReader_typeof()),
        new uFunction("Write", NULL, (void*)Error__Write1_fn, 0, true, uVoid_typeof(), 2, type, ::g::Uno::IO::BinaryWriter_typeof()));
}

uType* Error_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Outracks::Simulator::Protocol::MessageToClient_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Error);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Protocol.Error", options);
    type->fp_build_ = Error_build;
    type->fp_ToString = (void(*)(uObject*, uString**))Error__ToString_fn;
    return type;
}

// public Error(Outracks.Simulator.Protocol.ExceptionInfo exception) :374
void Error__ctor_1_fn(Error* __this, ::g::Outracks::Simulator::Protocol::ExceptionInfo* exception)
{
    __this->ctor_1(exception);
}

// public Error New(Outracks.Simulator.Protocol.ExceptionInfo exception) :374
void Error__New1_fn(::g::Outracks::Simulator::Protocol::ExceptionInfo* exception, Error** __retval)
{
    *__retval = Error::New1(exception);
}

// public static new Outracks.Simulator.Protocol.Error Read(Uno.IO.BinaryReader reader) :384
void Error__Read1_fn(::g::Uno::IO::BinaryReader* reader, Error** __retval)
{
    *__retval = Error::Read1(reader);
}

// public override sealed string ToString() :390
void Error__ToString_fn(Error* __this, uString** __retval)
{
    uStackFrame __("Outracks.Simulator.Protocol.Error", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::STRINGS[0/*"Error: "*/], uPtr(uPtr(__this->Exception)->Message)->ToString()), void();
}

// public static void Write(Outracks.Simulator.Protocol.Error e, Uno.IO.BinaryWriter writer) :379
void Error__Write1_fn(Error* e, ::g::Uno::IO::BinaryWriter* writer)
{
    Error::Write1(e, writer);
}

// public Error(Outracks.Simulator.Protocol.ExceptionInfo exception) [instance] :374
void Error::ctor_1(::g::Outracks::Simulator::Protocol::ExceptionInfo* exception)
{
    ctor_();
    Exception = exception;
}

// public Error New(Outracks.Simulator.Protocol.ExceptionInfo exception) [static] :374
Error* Error::New1(::g::Outracks::Simulator::Protocol::ExceptionInfo* exception)
{
    Error* obj1 = (Error*)uNew(Error_typeof());
    obj1->ctor_1(exception);
    return obj1;
}

// public static new Outracks.Simulator.Protocol.Error Read(Uno.IO.BinaryReader reader) [static] :384
Error* Error::Read1(::g::Uno::IO::BinaryReader* reader)
{
    uStackFrame __("Outracks.Simulator.Protocol.Error", "Read(Uno.IO.BinaryReader)");
    ::g::Outracks::Simulator::Protocol::ExceptionInfo* exception = ::g::Outracks::Simulator::Protocol::ExceptionInfo::Read(reader);
    return Error::New1(exception);
}

// public static void Write(Outracks.Simulator.Protocol.Error e, Uno.IO.BinaryWriter writer) [static] :379
void Error::Write1(Error* e, ::g::Uno::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Protocol.Error", "Write(Outracks.Simulator.Protocol.Error,Uno.IO.BinaryWriter)");
    ::g::Outracks::Simulator::Protocol::ExceptionInfo::Write(uPtr(e)->Exception, writer);
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/messages/$.uno
// ----------------------------------------------------------------------------------

// public sealed class ExceptionInfo :320
// {
static void ExceptionInfo_build(uType* type)
{
    ::TYPES[0] = ::g::Outracks::Simulator::ImmutableList_typeof()->MakeType(type, NULL);
    ::TYPES[1] = ::g::Outracks::Simulator::List_typeof()->MakeMethod(1/*Read<Outracks.Simulator.Protocol.ExceptionInfo>*/, type, NULL);
    ::TYPES[2] = ::g::Uno::Func1_typeof()->MakeType(::g::Uno::IO::BinaryReader_typeof(), type, NULL);
    ::TYPES[3] = ::g::Outracks::Simulator::List_typeof()->MakeMethod(5/*Write<Outracks.Simulator.Protocol.ExceptionInfo>*/, type, NULL);
    ::TYPES[4] = ::g::Uno::Action2_typeof()->MakeType(type, ::g::Uno::IO::BinaryWriter_typeof(), NULL);
    type->SetFields(0,
        ::TYPES[0/*Outracks.Simulator.ImmutableList<Outracks.Simulator.Protocol.ExceptionInfo>*/], offsetof(::g::Outracks::Simulator::Protocol::ExceptionInfo, InnerExceptions), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::Simulator::Protocol::ExceptionInfo, Message), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::Simulator::Protocol::ExceptionInfo, StackTrace), 0,
        ::g::Outracks::Simulator::Bytecode::TypeName_typeof(), offsetof(::g::Outracks::Simulator::Protocol::ExceptionInfo, Type), 0);
    type->Reflection.SetFields(4,
        new uField("InnerExceptions", 0),
        new uField("Message", 1),
        new uField("StackTrace", 2),
        new uField("Type", 3));
    type->Reflection.SetFunctions(4,
        new uFunction("Capture", NULL, (void*)ExceptionInfo__Capture_fn, 0, true, type, 1, ::g::Uno::Exception_typeof()),
        new uFunction(".ctor", NULL, (void*)ExceptionInfo__New1_fn, 0, true, type, 4, ::g::Outracks::Simulator::Bytecode::TypeName_typeof(), ::g::Uno::String_typeof(), ::g::Uno::String_typeof(), ::TYPES[0/*Outracks.Simulator.ImmutableList<Outracks.Simulator.Protocol.ExceptionInfo>*/]),
        new uFunction("Read", NULL, (void*)ExceptionInfo__Read_fn, 0, true, type, 1, ::g::Uno::IO::BinaryReader_typeof()),
        new uFunction("Write", NULL, (void*)ExceptionInfo__Write_fn, 0, true, uVoid_typeof(), 2, type, ::g::Uno::IO::BinaryWriter_typeof()));
}

uType* ExceptionInfo_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(ExceptionInfo);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Protocol.ExceptionInfo", options);
    type->fp_build_ = ExceptionInfo_build;
    return type;
}

// public ExceptionInfo(Outracks.Simulator.Bytecode.TypeName type, string message, string stackTrace, Outracks.Simulator.ImmutableList<Outracks.Simulator.Protocol.ExceptionInfo> innerExceptions) :327
void ExceptionInfo__ctor__fn(ExceptionInfo* __this, ::g::Outracks::Simulator::Bytecode::TypeName* type, uString* message, uString* stackTrace, ::g::Outracks::Simulator::ImmutableList* innerExceptions)
{
    __this->ctor_(type, message, stackTrace, innerExceptions);
}

// public static Outracks.Simulator.Protocol.ExceptionInfo Capture(Uno.Exception e) :338
void ExceptionInfo__Capture_fn(::g::Uno::Exception* e, ExceptionInfo** __retval)
{
    *__retval = ExceptionInfo::Capture(e);
}

// public ExceptionInfo New(Outracks.Simulator.Bytecode.TypeName type, string message, string stackTrace, Outracks.Simulator.ImmutableList<Outracks.Simulator.Protocol.ExceptionInfo> innerExceptions) :327
void ExceptionInfo__New1_fn(::g::Outracks::Simulator::Bytecode::TypeName* type, uString* message, uString* stackTrace, ::g::Outracks::Simulator::ImmutableList* innerExceptions, ExceptionInfo** __retval)
{
    *__retval = ExceptionInfo::New1(type, message, stackTrace, innerExceptions);
}

// public static Outracks.Simulator.Protocol.ExceptionInfo Read(Uno.IO.BinaryReader reader) :359
void ExceptionInfo__Read_fn(::g::Uno::IO::BinaryReader* reader, ExceptionInfo** __retval)
{
    *__retval = ExceptionInfo::Read(reader);
}

// public static void Write(Outracks.Simulator.Protocol.ExceptionInfo e, Uno.IO.BinaryWriter writer) :351
void ExceptionInfo__Write_fn(ExceptionInfo* e, ::g::Uno::IO::BinaryWriter* writer)
{
    ExceptionInfo::Write(e, writer);
}

// public ExceptionInfo(Outracks.Simulator.Bytecode.TypeName type, string message, string stackTrace, Outracks.Simulator.ImmutableList<Outracks.Simulator.Protocol.ExceptionInfo> innerExceptions) [instance] :327
void ExceptionInfo::ctor_(::g::Outracks::Simulator::Bytecode::TypeName* type, uString* message, uString* stackTrace, ::g::Outracks::Simulator::ImmutableList* innerExceptions)
{
    Type = type;
    Message = message;
    StackTrace = stackTrace;
    InnerExceptions = innerExceptions;
}

// public static Outracks.Simulator.Protocol.ExceptionInfo Capture(Uno.Exception e) [static] :338
ExceptionInfo* ExceptionInfo::Capture(::g::Uno::Exception* e)
{
    uStackFrame __("Outracks.Simulator.Protocol.ExceptionInfo", "Capture(Uno.Exception)");
    return ExceptionInfo::New1(::g::Outracks::Simulator::Bytecode::TypeName::Parse(uPtr(::g::Uno::Object::GetType(uPtr(e)))->ToString()), uPtr(e)->Message(), uPtr(e)->StackTrace(), (::g::Outracks::Simulator::ImmutableList*)::g::Outracks::Simulator::ImmutableList::Empty(::TYPES[0/*Outracks.Simulator.ImmutableList<Outracks.Simulator.Protocol.ExceptionInfo>*/]));
}

// public ExceptionInfo New(Outracks.Simulator.Bytecode.TypeName type, string message, string stackTrace, Outracks.Simulator.ImmutableList<Outracks.Simulator.Protocol.ExceptionInfo> innerExceptions) [static] :327
ExceptionInfo* ExceptionInfo::New1(::g::Outracks::Simulator::Bytecode::TypeName* type, uString* message, uString* stackTrace, ::g::Outracks::Simulator::ImmutableList* innerExceptions)
{
    ExceptionInfo* obj1 = (ExceptionInfo*)uNew(ExceptionInfo_typeof());
    obj1->ctor_(type, message, stackTrace, innerExceptions);
    return obj1;
}

// public static Outracks.Simulator.Protocol.ExceptionInfo Read(Uno.IO.BinaryReader reader) [static] :359
ExceptionInfo* ExceptionInfo::Read(::g::Uno::IO::BinaryReader* reader)
{
    uStackFrame __("Outracks.Simulator.Protocol.ExceptionInfo", "Read(Uno.IO.BinaryReader)");
    ::g::Outracks::Simulator::Bytecode::TypeName* type = (::g::Outracks::Simulator::Bytecode::TypeName*)uPtr(::g::Outracks::Simulator::Bytecode::TypeName::Read())->Invoke(1, reader);
    uString* message = uPtr(reader)->ReadString();
    uString* stackTrace = reader->ReadString();
    ::g::Outracks::Simulator::ImmutableList* innerExceptions = (::g::Outracks::Simulator::ImmutableList*)::g::Outracks::Simulator::List::Read(::TYPES[1/*Outracks.Simulator.List.Read<Outracks.Simulator.Protocol.ExceptionInfo>*/], reader, uDelegate::New(::TYPES[2/*Uno.Func<Uno.IO.BinaryReader, Outracks.Simulator.Protocol.ExceptionInfo>*/], (void*)ExceptionInfo__Read_fn));
    return ExceptionInfo::New1(type, message, stackTrace, innerExceptions);
}

// public static void Write(Outracks.Simulator.Protocol.ExceptionInfo e, Uno.IO.BinaryWriter writer) [static] :351
void ExceptionInfo::Write(ExceptionInfo* e, ::g::Uno::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Protocol.ExceptionInfo", "Write(Outracks.Simulator.Protocol.ExceptionInfo,Uno.IO.BinaryWriter)");
    uPtr(::g::Outracks::Simulator::Bytecode::TypeName::Write())->Invoke(2, (::g::Outracks::Simulator::Bytecode::TypeName*)uPtr(e)->Type, writer);
    uPtr(writer)->Write24(e->Message);
    writer->Write24(e->StackTrace);
    ::g::Outracks::Simulator::List::Write1(::TYPES[3/*Outracks.Simulator.List.Write<Outracks.Simulator.Protocol.ExceptionInfo>*/], writer, e->InnerExceptions, uDelegate::New(::TYPES[4/*Uno.Action<Outracks.Simulator.Protocol.ExceptionInfo, Uno.IO.BinaryWriter>*/], (void*)ExceptionInfo__Write_fn));
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/messages/$.uno
// ----------------------------------------------------------------------------------

// public sealed class Execute :293
// {
static void Execute_build(uType* type)
{
    ::STRINGS[1] = uString::Const("Execute: ");
    type->SetFields(0,
        ::g::Outracks::Simulator::Bytecode::Lambda_typeof(), offsetof(::g::Outracks::Simulator::Protocol::Execute, Function), 0);
    type->Reflection.SetFields(1,
        new uField("Function", 0));
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)Execute__New1_fn, 0, true, type, 1, ::g::Outracks::Simulator::Bytecode::Lambda_typeof()),
        new uFunction("Read", NULL, (void*)Execute__Read1_fn, 0, true, type, 1, ::g::Uno::IO::BinaryReader_typeof()),
        new uFunction("Write", NULL, (void*)Execute__Write1_fn, 0, true, uVoid_typeof(), 2, type, ::g::Uno::IO::BinaryWriter_typeof()));
}

uType* Execute_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Outracks::Simulator::Protocol::MessageToClient_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Execute);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Protocol.Execute", options);
    type->fp_build_ = Execute_build;
    type->fp_ToString = (void(*)(uObject*, uString**))Execute__ToString_fn;
    return type;
}

// public Execute(Outracks.Simulator.Bytecode.Lambda function) :297
void Execute__ctor_1_fn(Execute* __this, ::g::Outracks::Simulator::Bytecode::Lambda* function)
{
    __this->ctor_1(function);
}

// public Execute New(Outracks.Simulator.Bytecode.Lambda function) :297
void Execute__New1_fn(::g::Outracks::Simulator::Bytecode::Lambda* function, Execute** __retval)
{
    *__retval = Execute::New1(function);
}

// public static new Outracks.Simulator.Protocol.Execute Read(Uno.IO.BinaryReader reader) :307
void Execute__Read1_fn(::g::Uno::IO::BinaryReader* reader, Execute** __retval)
{
    *__retval = Execute::Read1(reader);
}

// public override sealed string ToString() :314
void Execute__ToString_fn(Execute* __this, uString** __retval)
{
    uStackFrame __("Outracks.Simulator.Protocol.Execute", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::STRINGS[1/*"Execute: "*/], uPtr(__this->Function)->ToString()), void();
}

// public static void Write(Outracks.Simulator.Protocol.Execute message, Uno.IO.BinaryWriter writer) :302
void Execute__Write1_fn(Execute* message, ::g::Uno::IO::BinaryWriter* writer)
{
    Execute::Write1(message, writer);
}

// public Execute(Outracks.Simulator.Bytecode.Lambda function) [instance] :297
void Execute::ctor_1(::g::Outracks::Simulator::Bytecode::Lambda* function)
{
    ctor_();
    Function = function;
}

// public Execute New(Outracks.Simulator.Bytecode.Lambda function) [static] :297
Execute* Execute::New1(::g::Outracks::Simulator::Bytecode::Lambda* function)
{
    Execute* obj1 = (Execute*)uNew(Execute_typeof());
    obj1->ctor_1(function);
    return obj1;
}

// public static new Outracks.Simulator.Protocol.Execute Read(Uno.IO.BinaryReader reader) [static] :307
Execute* Execute::Read1(::g::Uno::IO::BinaryReader* reader)
{
    uStackFrame __("Outracks.Simulator.Protocol.Execute", "Read(Uno.IO.BinaryReader)");
    ::g::Outracks::Simulator::Bytecode::Lambda* function = ::g::Outracks::Simulator::Bytecode::Lambda::Read2(reader);
    return Execute::New1(function);
}

// public static void Write(Outracks.Simulator.Protocol.Execute message, Uno.IO.BinaryWriter writer) [static] :302
void Execute::Write1(Execute* message, ::g::Uno::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Protocol.Execute", "Write(Outracks.Simulator.Protocol.Execute,Uno.IO.BinaryWriter)");
    ::g::Outracks::Simulator::Bytecode::Lambda::Write2(uPtr(message)->Function, writer);
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/messages/$.uno
// ----------------------------------------------------------------------------------

// public abstract class MessageFromClient :12
// {
static void MessageFromClient_build(uType* type)
{
    ::TYPES[5] = ::g::Outracks::Simulator::Protocol::RegisterName_typeof();
    ::TYPES[6] = ::g::Outracks::Simulator::Protocol::DebugLog_typeof();
    ::TYPES[7] = ::g::Outracks::Simulator::Protocol::UnhandledException_typeof();
    ::TYPES[8] = ::g::Outracks::Simulator::Protocol::SetSelection_typeof();
    ::TYPES[9] = type->MakeMethod(0/*Match<char>*/, ::g::Uno::Char_typeof(), NULL);
    ::TYPES[10] = ::g::Outracks::Simulator::Closure_typeof()->MakeMethod(4/*Return<Outracks.Simulator.Protocol.RegisterName, char>*/, ::TYPES[5/*Outracks.Simulator.Protocol.RegisterName*/], ::g::Uno::Char_typeof(), NULL);
    ::TYPES[11] = ::g::Outracks::Simulator::Closure_typeof()->MakeMethod(4/*Return<Outracks.Simulator.Protocol.DebugLog, char>*/, ::TYPES[6/*Outracks.Simulator.Protocol.DebugLog*/], ::g::Uno::Char_typeof(), NULL);
    ::TYPES[12] = ::g::Outracks::Simulator::Closure_typeof()->MakeMethod(4/*Return<Outracks.Simulator.Protocol.UnhandledException, char>*/, ::TYPES[7/*Outracks.Simulator.Protocol.UnhandledException*/], ::g::Uno::Char_typeof(), NULL);
    ::TYPES[13] = ::g::Outracks::Simulator::Closure_typeof()->MakeMethod(4/*Return<Outracks.Simulator.Protocol.SetSelection, char>*/, ::TYPES[8/*Outracks.Simulator.Protocol.SetSelection*/], ::g::Uno::Char_typeof(), NULL);
    ::TYPES[14] = ::g::Outracks::Simulator::Closure_typeof()->MakeMethod(2/*ApplySecond<Outracks.Simulator.Protocol.RegisterName, Uno.IO.BinaryWriter>*/, ::TYPES[5/*Outracks.Simulator.Protocol.RegisterName*/], ::g::Uno::IO::BinaryWriter_typeof(), NULL);
    ::TYPES[15] = ::g::Uno::Action2_typeof()->MakeType(::TYPES[5/*Outracks.Simulator.Protocol.RegisterName*/], ::g::Uno::IO::BinaryWriter_typeof(), NULL);
    ::TYPES[16] = ::g::Outracks::Simulator::Closure_typeof()->MakeMethod(2/*ApplySecond<Outracks.Simulator.Protocol.DebugLog, Uno.IO.BinaryWriter>*/, ::TYPES[6/*Outracks.Simulator.Protocol.DebugLog*/], ::g::Uno::IO::BinaryWriter_typeof(), NULL);
    ::TYPES[17] = ::g::Uno::Action2_typeof()->MakeType(::TYPES[6/*Outracks.Simulator.Protocol.DebugLog*/], ::g::Uno::IO::BinaryWriter_typeof(), NULL);
    ::TYPES[18] = ::g::Outracks::Simulator::Closure_typeof()->MakeMethod(2/*ApplySecond<Outracks.Simulator.Protocol.UnhandledException, Uno.IO.BinaryWriter>*/, ::TYPES[7/*Outracks.Simulator.Protocol.UnhandledException*/], ::g::Uno::IO::BinaryWriter_typeof(), NULL);
    ::TYPES[19] = ::g::Uno::Action2_typeof()->MakeType(::TYPES[7/*Outracks.Simulator.Protocol.UnhandledException*/], ::g::Uno::IO::BinaryWriter_typeof(), NULL);
    ::TYPES[20] = ::g::Outracks::Simulator::Closure_typeof()->MakeMethod(2/*ApplySecond<Outracks.Simulator.Protocol.SetSelection, Uno.IO.BinaryWriter>*/, ::TYPES[8/*Outracks.Simulator.Protocol.SetSelection*/], ::g::Uno::IO::BinaryWriter_typeof(), NULL);
    ::TYPES[21] = ::g::Uno::Action2_typeof()->MakeType(::TYPES[8/*Outracks.Simulator.Protocol.SetSelection*/], ::g::Uno::IO::BinaryWriter_typeof(), NULL);
    type->Reflection.SetFunctions(4,
        new uFunction("Match", NULL, (void*)MessageFromClient__Match_fn, 0, false, uVoid_typeof(), 4, ::g::Uno::Action1_typeof()->MakeType(::TYPES[5/*Outracks.Simulator.Protocol.RegisterName*/], NULL), ::g::Uno::Action1_typeof()->MakeType(::TYPES[6/*Outracks.Simulator.Protocol.DebugLog*/], NULL), ::g::Uno::Action1_typeof()->MakeType(::TYPES[7/*Outracks.Simulator.Protocol.UnhandledException*/], NULL), ::g::Uno::Action1_typeof()->MakeType(::TYPES[8/*Outracks.Simulator.Protocol.SetSelection*/], NULL)),
        new uFunction("Match`1", type->MethodTypes[0], (void*)MessageFromClient__Match1_fn, 0, false, type->MethodTypes[0]->U(0), 4, ::g::Uno::Func1_typeof()->MakeType(::TYPES[5/*Outracks.Simulator.Protocol.RegisterName*/], type->MethodTypes[0]->U(0), NULL), ::g::Uno::Func1_typeof()->MakeType(::TYPES[6/*Outracks.Simulator.Protocol.DebugLog*/], type->MethodTypes[0]->U(0), NULL), ::g::Uno::Func1_typeof()->MakeType(::TYPES[7/*Outracks.Simulator.Protocol.UnhandledException*/], type->MethodTypes[0]->U(0), NULL), ::g::Uno::Func1_typeof()->MakeType(::TYPES[8/*Outracks.Simulator.Protocol.SetSelection*/], type->MethodTypes[0]->U(0), NULL)),
        new uFunction("Read", NULL, (void*)MessageFromClient__Read_fn, 0, true, type, 1, ::g::Uno::IO::BinaryReader_typeof()),
        new uFunction("Write", NULL, (void*)MessageFromClient__Write_fn, 0, true, uVoid_typeof(), 2, type, ::g::Uno::IO::BinaryWriter_typeof()));
}

uType* MessageFromClient_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.MethodTypeCount = 1;
    options.ObjectSize = sizeof(MessageFromClient);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Protocol.MessageFromClient", options);
    type->MethodTypes[0] = type->NewMethodType(1, 0);
    type->fp_build_ = MessageFromClient_build;
    return type;
}

// protected generated MessageFromClient() :12
void MessageFromClient__ctor__fn(MessageFromClient* __this)
{
    __this->ctor_();
}

// public void Match(Uno.Action<Outracks.Simulator.Protocol.RegisterName> a0, Uno.Action<Outracks.Simulator.Protocol.DebugLog> a1, Uno.Action<Outracks.Simulator.Protocol.UnhandledException> a2, Uno.Action<Outracks.Simulator.Protocol.SetSelection> a3) :32
void MessageFromClient__Match_fn(MessageFromClient* __this, uDelegate* a0, uDelegate* a1, uDelegate* a2, uDelegate* a3)
{
    __this->Match(a0, a1, a2, a3);
}

// public T Match<T>(Uno.Func<Outracks.Simulator.Protocol.RegisterName, T> a0, Uno.Func<Outracks.Simulator.Protocol.DebugLog, T> a1, Uno.Func<Outracks.Simulator.Protocol.UnhandledException, T> a2, Uno.Func<Outracks.Simulator.Protocol.SetSelection, T> a3) :17
void MessageFromClient__Match1_fn(MessageFromClient* __this, uType* __type, uDelegate* a0, uDelegate* a1, uDelegate* a2, uDelegate* a3, uTRef __retval)
{
    uType* __types[] = {
        __type->U(0),
    };
    uStackFrame __("Outracks.Simulator.Protocol.MessageFromClient", "Match`1(Uno.Func<Outracks.Simulator.Protocol.RegisterName, T>,Uno.Func<Outracks.Simulator.Protocol.DebugLog, T>,Uno.Func<Outracks.Simulator.Protocol.UnhandledException, T>,Uno.Func<Outracks.Simulator.Protocol.SetSelection, T>)");
    uT ret1(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret4(__types[0], U_ALLOCA(__types[0]->ValueSize));
    MessageFromClient* self = __this;
    ::g::Outracks::Simulator::Protocol::RegisterName* t0 = uAs< ::g::Outracks::Simulator::Protocol::RegisterName*>(self, ::TYPES[5/*Outracks.Simulator.Protocol.RegisterName*/]);

    if (t0 != NULL)
        return __retval.Store((uPtr(a0)->Invoke(&ret1, 1, t0), ret1)), void();

    ::g::Outracks::Simulator::Protocol::DebugLog* t1 = uAs< ::g::Outracks::Simulator::Protocol::DebugLog*>(self, ::TYPES[6/*Outracks.Simulator.Protocol.DebugLog*/]);

    if (t1 != NULL)
        return __retval.Store((uPtr(a1)->Invoke(&ret2, 1, t1), ret2)), void();

    ::g::Outracks::Simulator::Protocol::UnhandledException* t2 = uAs< ::g::Outracks::Simulator::Protocol::UnhandledException*>(self, ::TYPES[7/*Outracks.Simulator.Protocol.UnhandledException*/]);

    if (t2 != NULL)
        return __retval.Store((uPtr(a2)->Invoke(&ret3, 1, t2), ret3)), void();

    ::g::Outracks::Simulator::Protocol::SetSelection* t3 = uAs< ::g::Outracks::Simulator::Protocol::SetSelection*>(self, ::TYPES[8/*Outracks.Simulator.Protocol.SetSelection*/]);

    if (t3 != NULL)
        return __retval.Store((uPtr(a3)->Invoke(&ret4, 1, t3), ret4)), void();

    U_THROW(::g::Outracks::Simulator::NonExhaustiveMatch::New4());
}

// public static Outracks.Simulator.Protocol.MessageFromClient Read(Uno.IO.BinaryReader reader) :62
void MessageFromClient__Read_fn(::g::Uno::IO::BinaryReader* reader, MessageFromClient** __retval)
{
    *__retval = MessageFromClient::Read(reader);
}

// public static void Write(Outracks.Simulator.Protocol.MessageFromClient message, Uno.IO.BinaryWriter writer) :46
void MessageFromClient__Write_fn(MessageFromClient* message, ::g::Uno::IO::BinaryWriter* writer)
{
    MessageFromClient::Write(message, writer);
}

// protected generated MessageFromClient() [instance] :12
void MessageFromClient::ctor_()
{
}

// public void Match(Uno.Action<Outracks.Simulator.Protocol.RegisterName> a0, Uno.Action<Outracks.Simulator.Protocol.DebugLog> a1, Uno.Action<Outracks.Simulator.Protocol.UnhandledException> a2, Uno.Action<Outracks.Simulator.Protocol.SetSelection> a3) [instance] :32
void MessageFromClient::Match(uDelegate* a0, uDelegate* a1, uDelegate* a2, uDelegate* a3)
{
    uStackFrame __("Outracks.Simulator.Protocol.MessageFromClient", "Match(Uno.Action<Outracks.Simulator.Protocol.RegisterName>,Uno.Action<Outracks.Simulator.Protocol.DebugLog>,Uno.Action<Outracks.Simulator.Protocol.UnhandledException>,Uno.Action<Outracks.Simulator.Protocol.SetSelection>)");
    MessageFromClient* self = this;
    ::g::Outracks::Simulator::Protocol::RegisterName* t0 = uAs< ::g::Outracks::Simulator::Protocol::RegisterName*>(self, ::TYPES[5/*Outracks.Simulator.Protocol.RegisterName*/]);

    if (t0 != NULL)
    {
        uPtr(a0)->InvokeVoid(t0);
        return;
    }

    ::g::Outracks::Simulator::Protocol::DebugLog* t1 = uAs< ::g::Outracks::Simulator::Protocol::DebugLog*>(self, ::TYPES[6/*Outracks.Simulator.Protocol.DebugLog*/]);

    if (t1 != NULL)
    {
        uPtr(a1)->InvokeVoid(t1);
        return;
    }

    ::g::Outracks::Simulator::Protocol::UnhandledException* t2 = uAs< ::g::Outracks::Simulator::Protocol::UnhandledException*>(self, ::TYPES[7/*Outracks.Simulator.Protocol.UnhandledException*/]);

    if (t2 != NULL)
    {
        uPtr(a2)->InvokeVoid(t2);
        return;
    }

    ::g::Outracks::Simulator::Protocol::SetSelection* t3 = uAs< ::g::Outracks::Simulator::Protocol::SetSelection*>(self, ::TYPES[8/*Outracks.Simulator.Protocol.SetSelection*/]);

    if (t3 != NULL)
    {
        uPtr(a3)->InvokeVoid(t3);
        return;
    }

    U_THROW(::g::Outracks::Simulator::NonExhaustiveMatch::New4());
}

// public static Outracks.Simulator.Protocol.MessageFromClient Read(Uno.IO.BinaryReader reader) [static] :62
MessageFromClient* MessageFromClient::Read(::g::Uno::IO::BinaryReader* reader)
{
    uStackFrame __("Outracks.Simulator.Protocol.MessageFromClient", "Read(Uno.IO.BinaryReader)");
    uChar typeToken = uPtr(reader)->ReadChar();

    switch (typeToken)
    {
        case 'r':
            return ::g::Outracks::Simulator::Protocol::RegisterName::Read1(reader);
        case 'l':
            return ::g::Outracks::Simulator::Protocol::DebugLog::Read1(reader);
        case 'e':
            return ::g::Outracks::Simulator::Protocol::UnhandledException::Read1(reader);
        case 's':
            return ::g::Outracks::Simulator::Protocol::SetSelection::Read1(reader);
    }

    U_THROW(::g::Outracks::Simulator::InvalidDataException::New4());
}

// public static void Write(Outracks.Simulator.Protocol.MessageFromClient message, Uno.IO.BinaryWriter writer) [static] :46
void MessageFromClient::Write(MessageFromClient* message, ::g::Uno::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Protocol.MessageFromClient", "Write(Outracks.Simulator.Protocol.MessageFromClient,Uno.IO.BinaryWriter)");
    uChar ret5;
    uDelegate* ret6;
    uDelegate* ret7;
    uDelegate* ret8;
    uDelegate* ret9;
    uDelegate* ret10;
    uDelegate* ret11;
    uDelegate* ret12;
    uDelegate* ret13;
    uPtr(writer)->Write5((MessageFromClient__Match1_fn(uPtr(message), ::TYPES[9/*Outracks.Simulator.Protocol.MessageFromClient.Match<char>*/], (::g::Outracks::Simulator::Closure__Return_fn(::TYPES[10/*Outracks.Simulator.Closure.Return<Outracks.Simulator.Protocol.RegisterName, char>*/], uCRef<uChar>('r'), &ret6), ret6), (::g::Outracks::Simulator::Closure__Return_fn(::TYPES[11/*Outracks.Simulator.Closure.Return<Outracks.Simulator.Protocol.DebugLog, char>*/], uCRef<uChar>('l'), &ret7), ret7), (::g::Outracks::Simulator::Closure__Return_fn(::TYPES[12/*Outracks.Simulator.Closure.Return<Outracks.Simulator.Protocol.UnhandledException, char>*/], uCRef<uChar>('e'), &ret8), ret8), (::g::Outracks::Simulator::Closure__Return_fn(::TYPES[13/*Outracks.Simulator.Closure.Return<Outracks.Simulator.Protocol.SetSelection, char>*/], uCRef<uChar>('s'), &ret9), ret9), &ret5), ret5));
    message->Match((::g::Outracks::Simulator::Closure__ApplySecond_fn(::TYPES[14/*Outracks.Simulator.Closure.ApplySecond<Outracks.Simulator.Protocol.RegisterName, Uno.IO.BinaryWriter>*/], uDelegate::New(::TYPES[15/*Uno.Action<Outracks.Simulator.Protocol.RegisterName, Uno.IO.BinaryWriter>*/], (void*)::g::Outracks::Simulator::Protocol::RegisterName__Write1_fn), writer, &ret10), ret10), (::g::Outracks::Simulator::Closure__ApplySecond_fn(::TYPES[16/*Outracks.Simulator.Closure.ApplySecond<Outracks.Simulator.Protocol.DebugLog, Uno.IO.BinaryWriter>*/], uDelegate::New(::TYPES[17/*Uno.Action<Outracks.Simulator.Protocol.DebugLog, Uno.IO.BinaryWriter>*/], (void*)::g::Outracks::Simulator::Protocol::DebugLog__Write1_fn), writer, &ret11), ret11), (::g::Outracks::Simulator::Closure__ApplySecond_fn(::TYPES[18/*Outracks.Simulator.Closure.ApplySecond<Outracks.Simulator.Protocol.UnhandledException, Uno.IO.BinaryWriter>*/], uDelegate::New(::TYPES[19/*Uno.Action<Outracks.Simulator.Protocol.UnhandledException, Uno.IO.BinaryWriter>*/], (void*)::g::Outracks::Simulator::Protocol::UnhandledException__Write1_fn), writer, &ret12), ret12), (::g::Outracks::Simulator::Closure__ApplySecond_fn(::TYPES[20/*Outracks.Simulator.Closure.ApplySecond<Outracks.Simulator.Protocol.SetSelection, Uno.IO.BinaryWriter>*/], uDelegate::New(::TYPES[21/*Uno.Action<Outracks.Simulator.Protocol.SetSelection, Uno.IO.BinaryWriter>*/], (void*)::g::Outracks::Simulator::Protocol::SetSelection__Write1_fn), writer, &ret13), ret13));
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/messages/$.uno
// ----------------------------------------------------------------------------------

// public abstract class MessageToClient :204
// {
static void MessageToClient_build(uType* type)
{
    ::TYPES[22] = ::g::Outracks::Simulator::Protocol::Reify_typeof();
    ::TYPES[23] = ::g::Outracks::Simulator::Protocol::Execute_typeof();
    ::TYPES[24] = ::g::Outracks::Simulator::Protocol::Error_typeof();
    ::TYPES[25] = type->MakeMethod(0/*Match<char>*/, ::g::Uno::Char_typeof(), NULL);
    ::TYPES[26] = ::g::Outracks::Simulator::Closure_typeof()->MakeMethod(4/*Return<Outracks.Simulator.Protocol.Reify, char>*/, ::TYPES[22/*Outracks.Simulator.Protocol.Reify*/], ::g::Uno::Char_typeof(), NULL);
    ::TYPES[27] = ::g::Outracks::Simulator::Closure_typeof()->MakeMethod(4/*Return<Outracks.Simulator.Protocol.Execute, char>*/, ::TYPES[23/*Outracks.Simulator.Protocol.Execute*/], ::g::Uno::Char_typeof(), NULL);
    ::TYPES[28] = ::g::Outracks::Simulator::Closure_typeof()->MakeMethod(4/*Return<Outracks.Simulator.Protocol.Error, char>*/, ::TYPES[24/*Outracks.Simulator.Protocol.Error*/], ::g::Uno::Char_typeof(), NULL);
    ::TYPES[29] = ::g::Outracks::Simulator::Closure_typeof()->MakeMethod(2/*ApplySecond<Outracks.Simulator.Protocol.Reify, Uno.IO.BinaryWriter>*/, ::TYPES[22/*Outracks.Simulator.Protocol.Reify*/], ::g::Uno::IO::BinaryWriter_typeof(), NULL);
    ::TYPES[30] = ::g::Uno::Action2_typeof()->MakeType(::TYPES[22/*Outracks.Simulator.Protocol.Reify*/], ::g::Uno::IO::BinaryWriter_typeof(), NULL);
    ::TYPES[31] = ::g::Outracks::Simulator::Closure_typeof()->MakeMethod(2/*ApplySecond<Outracks.Simulator.Protocol.Execute, Uno.IO.BinaryWriter>*/, ::TYPES[23/*Outracks.Simulator.Protocol.Execute*/], ::g::Uno::IO::BinaryWriter_typeof(), NULL);
    ::TYPES[32] = ::g::Uno::Action2_typeof()->MakeType(::TYPES[23/*Outracks.Simulator.Protocol.Execute*/], ::g::Uno::IO::BinaryWriter_typeof(), NULL);
    ::TYPES[33] = ::g::Outracks::Simulator::Closure_typeof()->MakeMethod(2/*ApplySecond<Outracks.Simulator.Protocol.Error, Uno.IO.BinaryWriter>*/, ::TYPES[24/*Outracks.Simulator.Protocol.Error*/], ::g::Uno::IO::BinaryWriter_typeof(), NULL);
    ::TYPES[34] = ::g::Uno::Action2_typeof()->MakeType(::TYPES[24/*Outracks.Simulator.Protocol.Error*/], ::g::Uno::IO::BinaryWriter_typeof(), NULL);
    type->Reflection.SetFunctions(4,
        new uFunction("Match", NULL, (void*)MessageToClient__Match_fn, 0, false, uVoid_typeof(), 3, ::g::Uno::Action1_typeof()->MakeType(::TYPES[22/*Outracks.Simulator.Protocol.Reify*/], NULL), ::g::Uno::Action1_typeof()->MakeType(::TYPES[23/*Outracks.Simulator.Protocol.Execute*/], NULL), ::g::Uno::Action1_typeof()->MakeType(::TYPES[24/*Outracks.Simulator.Protocol.Error*/], NULL)),
        new uFunction("Match`1", type->MethodTypes[0], (void*)MessageToClient__Match1_fn, 0, false, type->MethodTypes[0]->U(0), 3, ::g::Uno::Func1_typeof()->MakeType(::TYPES[22/*Outracks.Simulator.Protocol.Reify*/], type->MethodTypes[0]->U(0), NULL), ::g::Uno::Func1_typeof()->MakeType(::TYPES[23/*Outracks.Simulator.Protocol.Execute*/], type->MethodTypes[0]->U(0), NULL), ::g::Uno::Func1_typeof()->MakeType(::TYPES[24/*Outracks.Simulator.Protocol.Error*/], type->MethodTypes[0]->U(0), NULL)),
        new uFunction("Read", NULL, (void*)MessageToClient__Read_fn, 0, true, type, 1, ::g::Uno::IO::BinaryReader_typeof()),
        new uFunction("Write", NULL, (void*)MessageToClient__Write_fn, 0, true, uVoid_typeof(), 2, type, ::g::Uno::IO::BinaryWriter_typeof()));
}

uType* MessageToClient_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.MethodTypeCount = 1;
    options.ObjectSize = sizeof(MessageToClient);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Protocol.MessageToClient", options);
    type->MethodTypes[0] = type->NewMethodType(1, 0);
    type->fp_build_ = MessageToClient_build;
    return type;
}

// protected generated MessageToClient() :204
void MessageToClient__ctor__fn(MessageToClient* __this)
{
    __this->ctor_();
}

// public void Match(Uno.Action<Outracks.Simulator.Protocol.Reify> a1, Uno.Action<Outracks.Simulator.Protocol.Execute> a2, Uno.Action<Outracks.Simulator.Protocol.Error> a3) :221
void MessageToClient__Match_fn(MessageToClient* __this, uDelegate* a1, uDelegate* a2, uDelegate* a3)
{
    __this->Match(a1, a2, a3);
}

// public T Match<T>(Uno.Func<Outracks.Simulator.Protocol.Reify, T> a1, Uno.Func<Outracks.Simulator.Protocol.Execute, T> a2, Uno.Func<Outracks.Simulator.Protocol.Error, T> a3) :209
void MessageToClient__Match1_fn(MessageToClient* __this, uType* __type, uDelegate* a1, uDelegate* a2, uDelegate* a3, uTRef __retval)
{
    uType* __types[] = {
        __type->U(0),
    };
    uStackFrame __("Outracks.Simulator.Protocol.MessageToClient", "Match`1(Uno.Func<Outracks.Simulator.Protocol.Reify, T>,Uno.Func<Outracks.Simulator.Protocol.Execute, T>,Uno.Func<Outracks.Simulator.Protocol.Error, T>)");
    uT ret1(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret2(__types[0], U_ALLOCA(__types[0]->ValueSize));
    uT ret3(__types[0], U_ALLOCA(__types[0]->ValueSize));
    MessageToClient* self = __this;
    ::g::Outracks::Simulator::Protocol::Reify* t1 = uAs< ::g::Outracks::Simulator::Protocol::Reify*>(self, ::TYPES[22/*Outracks.Simulator.Protocol.Reify*/]);

    if (t1 != NULL)
        return __retval.Store((uPtr(a1)->Invoke(&ret1, 1, t1), ret1)), void();

    ::g::Outracks::Simulator::Protocol::Execute* t2 = uAs< ::g::Outracks::Simulator::Protocol::Execute*>(self, ::TYPES[23/*Outracks.Simulator.Protocol.Execute*/]);

    if (t2 != NULL)
        return __retval.Store((uPtr(a2)->Invoke(&ret2, 1, t2), ret2)), void();

    ::g::Outracks::Simulator::Protocol::Error* t3 = uAs< ::g::Outracks::Simulator::Protocol::Error*>(self, ::TYPES[24/*Outracks.Simulator.Protocol.Error*/]);

    if (t3 != NULL)
        return __retval.Store((uPtr(a3)->Invoke(&ret3, 1, t3), ret3)), void();

    U_THROW(::g::Outracks::Simulator::NonExhaustiveMatch::New4());
}

// public static Outracks.Simulator.Protocol.MessageToClient Read(Uno.IO.BinaryReader reader) :247
void MessageToClient__Read_fn(::g::Uno::IO::BinaryReader* reader, MessageToClient** __retval)
{
    *__retval = MessageToClient::Read(reader);
}

// public static void Write(Outracks.Simulator.Protocol.MessageToClient message, Uno.IO.BinaryWriter writer) :233
void MessageToClient__Write_fn(MessageToClient* message, ::g::Uno::IO::BinaryWriter* writer)
{
    MessageToClient::Write(message, writer);
}

// protected generated MessageToClient() [instance] :204
void MessageToClient::ctor_()
{
}

// public void Match(Uno.Action<Outracks.Simulator.Protocol.Reify> a1, Uno.Action<Outracks.Simulator.Protocol.Execute> a2, Uno.Action<Outracks.Simulator.Protocol.Error> a3) [instance] :221
void MessageToClient::Match(uDelegate* a1, uDelegate* a2, uDelegate* a3)
{
    uStackFrame __("Outracks.Simulator.Protocol.MessageToClient", "Match(Uno.Action<Outracks.Simulator.Protocol.Reify>,Uno.Action<Outracks.Simulator.Protocol.Execute>,Uno.Action<Outracks.Simulator.Protocol.Error>)");
    MessageToClient* self = this;
    ::g::Outracks::Simulator::Protocol::Reify* t1 = uAs< ::g::Outracks::Simulator::Protocol::Reify*>(self, ::TYPES[22/*Outracks.Simulator.Protocol.Reify*/]);

    if (t1 != NULL)
    {
        uPtr(a1)->InvokeVoid(t1);
        return;
    }

    ::g::Outracks::Simulator::Protocol::Execute* t2 = uAs< ::g::Outracks::Simulator::Protocol::Execute*>(self, ::TYPES[23/*Outracks.Simulator.Protocol.Execute*/]);

    if (t2 != NULL)
    {
        uPtr(a2)->InvokeVoid(t2);
        return;
    }

    ::g::Outracks::Simulator::Protocol::Error* t3 = uAs< ::g::Outracks::Simulator::Protocol::Error*>(self, ::TYPES[24/*Outracks.Simulator.Protocol.Error*/]);

    if (t3 != NULL)
    {
        uPtr(a3)->InvokeVoid(t3);
        return;
    }

    U_THROW(::g::Outracks::Simulator::NonExhaustiveMatch::New4());
}

// public static Outracks.Simulator.Protocol.MessageToClient Read(Uno.IO.BinaryReader reader) [static] :247
MessageToClient* MessageToClient::Read(::g::Uno::IO::BinaryReader* reader)
{
    uStackFrame __("Outracks.Simulator.Protocol.MessageToClient", "Read(Uno.IO.BinaryReader)");
    uChar typeToken = uPtr(reader)->ReadChar();

    switch (typeToken)
    {
        case 'l':
            return ::g::Outracks::Simulator::Protocol::Reify::Read1(reader);
        case 'e':
            return ::g::Outracks::Simulator::Protocol::Execute::Read1(reader);
        case 'x':
            return ::g::Outracks::Simulator::Protocol::Error::Read1(reader);
    }

    U_THROW(::g::Outracks::Simulator::InvalidDataException::New4());
}

// public static void Write(Outracks.Simulator.Protocol.MessageToClient message, Uno.IO.BinaryWriter writer) [static] :233
void MessageToClient::Write(MessageToClient* message, ::g::Uno::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Protocol.MessageToClient", "Write(Outracks.Simulator.Protocol.MessageToClient,Uno.IO.BinaryWriter)");
    uChar ret4;
    uDelegate* ret5;
    uDelegate* ret6;
    uDelegate* ret7;
    uDelegate* ret8;
    uDelegate* ret9;
    uDelegate* ret10;
    uPtr(writer)->Write5((MessageToClient__Match1_fn(uPtr(message), ::TYPES[25/*Outracks.Simulator.Protocol.MessageToClient.Match<char>*/], (::g::Outracks::Simulator::Closure__Return_fn(::TYPES[26/*Outracks.Simulator.Closure.Return<Outracks.Simulator.Protocol.Reify, char>*/], uCRef<uChar>('l'), &ret5), ret5), (::g::Outracks::Simulator::Closure__Return_fn(::TYPES[27/*Outracks.Simulator.Closure.Return<Outracks.Simulator.Protocol.Execute, char>*/], uCRef<uChar>('e'), &ret6), ret6), (::g::Outracks::Simulator::Closure__Return_fn(::TYPES[28/*Outracks.Simulator.Closure.Return<Outracks.Simulator.Protocol.Error, char>*/], uCRef<uChar>('x'), &ret7), ret7), &ret4), ret4));
    message->Match((::g::Outracks::Simulator::Closure__ApplySecond_fn(::TYPES[29/*Outracks.Simulator.Closure.ApplySecond<Outracks.Simulator.Protocol.Reify, Uno.IO.BinaryWriter>*/], uDelegate::New(::TYPES[30/*Uno.Action<Outracks.Simulator.Protocol.Reify, Uno.IO.BinaryWriter>*/], (void*)::g::Outracks::Simulator::Protocol::Reify__Write1_fn), writer, &ret8), ret8), (::g::Outracks::Simulator::Closure__ApplySecond_fn(::TYPES[31/*Outracks.Simulator.Closure.ApplySecond<Outracks.Simulator.Protocol.Execute, Uno.IO.BinaryWriter>*/], uDelegate::New(::TYPES[32/*Uno.Action<Outracks.Simulator.Protocol.Execute, Uno.IO.BinaryWriter>*/], (void*)::g::Outracks::Simulator::Protocol::Execute__Write1_fn), writer, &ret9), ret9), (::g::Outracks::Simulator::Closure__ApplySecond_fn(::TYPES[33/*Outracks.Simulator.Closure.ApplySecond<Outracks.Simulator.Protocol.Error, Uno.IO.BinaryWriter>*/], uDelegate::New(::TYPES[34/*Uno.Action<Outracks.Simulator.Protocol.Error, Uno.IO.BinaryWriter>*/], (void*)::g::Outracks::Simulator::Protocol::Error__Write1_fn), writer, &ret10), ret10));
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/messages/$.uno
// ----------------------------------------------------------------------------------

// public sealed class RegisterName :97
// {
static void RegisterName_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::Simulator::Protocol::RegisterName, ClientId), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::Simulator::Protocol::RegisterName, ClientName), 0);
    type->Reflection.SetFields(2,
        new uField("ClientId", 0),
        new uField("ClientName", 1));
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)RegisterName__New1_fn, 0, true, type, 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()),
        new uFunction("Read", NULL, (void*)RegisterName__Read1_fn, 0, true, type, 1, ::g::Uno::IO::BinaryReader_typeof()),
        new uFunction("Write", NULL, (void*)RegisterName__Write1_fn, 0, true, uVoid_typeof(), 2, type, ::g::Uno::IO::BinaryWriter_typeof()));
}

uType* RegisterName_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Outracks::Simulator::Protocol::MessageFromClient_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(RegisterName);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Protocol.RegisterName", options);
    type->fp_build_ = RegisterName_build;
    return type;
}

// public RegisterName(string clientId, string clientName) :102
void RegisterName__ctor_1_fn(RegisterName* __this, uString* clientId, uString* clientName)
{
    __this->ctor_1(clientId, clientName);
}

// public RegisterName New(string clientId, string clientName) :102
void RegisterName__New1_fn(uString* clientId, uString* clientName, RegisterName** __retval)
{
    *__retval = RegisterName::New1(clientId, clientName);
}

// public static new Outracks.Simulator.Protocol.RegisterName Read(Uno.IO.BinaryReader reader) :114
void RegisterName__Read1_fn(::g::Uno::IO::BinaryReader* reader, RegisterName** __retval)
{
    *__retval = RegisterName::Read1(reader);
}

// public static void Write(Outracks.Simulator.Protocol.RegisterName message, Uno.IO.BinaryWriter writer) :108
void RegisterName__Write1_fn(RegisterName* message, ::g::Uno::IO::BinaryWriter* writer)
{
    RegisterName::Write1(message, writer);
}

// public RegisterName(string clientId, string clientName) [instance] :102
void RegisterName::ctor_1(uString* clientId, uString* clientName)
{
    ctor_();
    ClientId = clientId;
    ClientName = clientName;
}

// public RegisterName New(string clientId, string clientName) [static] :102
RegisterName* RegisterName::New1(uString* clientId, uString* clientName)
{
    RegisterName* obj1 = (RegisterName*)uNew(RegisterName_typeof());
    obj1->ctor_1(clientId, clientName);
    return obj1;
}

// public static new Outracks.Simulator.Protocol.RegisterName Read(Uno.IO.BinaryReader reader) [static] :114
RegisterName* RegisterName::Read1(::g::Uno::IO::BinaryReader* reader)
{
    uStackFrame __("Outracks.Simulator.Protocol.RegisterName", "Read(Uno.IO.BinaryReader)");
    uString* clientId = uPtr(reader)->ReadString();
    uString* clientName = reader->ReadString();
    return RegisterName::New1(clientId, clientName);
}

// public static void Write(Outracks.Simulator.Protocol.RegisterName message, Uno.IO.BinaryWriter writer) [static] :108
void RegisterName::Write1(RegisterName* message, ::g::Uno::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Protocol.RegisterName", "Write(Outracks.Simulator.Protocol.RegisterName,Uno.IO.BinaryWriter)");
    uPtr(writer)->Write24(uPtr(message)->ClientId);
    writer->Write24(message->ClientName);
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/messages/$.uno
// ----------------------------------------------------------------------------------

// public sealed class Reify :260
// {
static void Reify_build(uType* type)
{
    ::STRINGS[2] = uString::Const("Reify: ");
    ::STRINGS[3] = uString::Const("bc2");
    type->SetFields(0,
        ::g::Outracks::Simulator::Bytecode::Lambda_typeof(), offsetof(::g::Outracks::Simulator::Protocol::Reify, AppMutator), 0);
    type->Reflection.SetFields(1,
        new uField("AppMutator", 0));
    type->Reflection.SetFunctions(4,
        new uFunction("get_BinaryFormat", NULL, (void*)Reify__get_BinaryFormat_fn, 0, true, ::g::Uno::String_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)Reify__New1_fn, 0, true, type, 1, ::g::Outracks::Simulator::Bytecode::Lambda_typeof()),
        new uFunction("Read", NULL, (void*)Reify__Read1_fn, 0, true, type, 1, ::g::Uno::IO::BinaryReader_typeof()),
        new uFunction("Write", NULL, (void*)Reify__Write1_fn, 0, true, uVoid_typeof(), 2, type, ::g::Uno::IO::BinaryWriter_typeof()));
}

uType* Reify_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Outracks::Simulator::Protocol::MessageToClient_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Reify);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Protocol.Reify", options);
    type->fp_build_ = Reify_build;
    type->fp_ToString = (void(*)(uObject*, uString**))Reify__ToString_fn;
    return type;
}

// public Reify(Outracks.Simulator.Bytecode.Lambda appMutator) :264
void Reify__ctor_1_fn(Reify* __this, ::g::Outracks::Simulator::Bytecode::Lambda* appMutator)
{
    __this->ctor_1(appMutator);
}

// public static string get_BinaryFormat() :273
void Reify__get_BinaryFormat_fn(uString** __retval)
{
    *__retval = Reify::BinaryFormat();
}

// public Reify New(Outracks.Simulator.Bytecode.Lambda appMutator) :264
void Reify__New1_fn(::g::Outracks::Simulator::Bytecode::Lambda* appMutator, Reify** __retval)
{
    *__retval = Reify::New1(appMutator);
}

// public static new Outracks.Simulator.Protocol.Reify Read(Uno.IO.BinaryReader reader) :281
void Reify__Read1_fn(::g::Uno::IO::BinaryReader* reader, Reify** __retval)
{
    *__retval = Reify::Read1(reader);
}

// public override sealed string ToString() :287
void Reify__ToString_fn(Reify* __this, uString** __retval)
{
    uStackFrame __("Outracks.Simulator.Protocol.Reify", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition2(::STRINGS[2/*"Reify: "*/], uPtr(__this->AppMutator)->ToString()), void();
}

// public static void Write(Outracks.Simulator.Protocol.Reify message, Uno.IO.BinaryWriter writer) :276
void Reify__Write1_fn(Reify* message, ::g::Uno::IO::BinaryWriter* writer)
{
    Reify::Write1(message, writer);
}

// public Reify(Outracks.Simulator.Bytecode.Lambda appMutator) [instance] :264
void Reify::ctor_1(::g::Outracks::Simulator::Bytecode::Lambda* appMutator)
{
    ctor_();
    AppMutator = appMutator;
}

// public Reify New(Outracks.Simulator.Bytecode.Lambda appMutator) [static] :264
Reify* Reify::New1(::g::Outracks::Simulator::Bytecode::Lambda* appMutator)
{
    Reify* obj1 = (Reify*)uNew(Reify_typeof());
    obj1->ctor_1(appMutator);
    return obj1;
}

// public static new Outracks.Simulator.Protocol.Reify Read(Uno.IO.BinaryReader reader) [static] :281
Reify* Reify::Read1(::g::Uno::IO::BinaryReader* reader)
{
    uStackFrame __("Outracks.Simulator.Protocol.Reify", "Read(Uno.IO.BinaryReader)");
    ::g::Outracks::Simulator::Bytecode::Lambda* lambda = ::g::Outracks::Simulator::Bytecode::Lambda::Read2(reader);
    return Reify::New1(lambda);
}

// public static void Write(Outracks.Simulator.Protocol.Reify message, Uno.IO.BinaryWriter writer) [static] :276
void Reify::Write1(Reify* message, ::g::Uno::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Protocol.Reify", "Write(Outracks.Simulator.Protocol.Reify,Uno.IO.BinaryWriter)");
    ::g::Outracks::Simulator::Bytecode::Lambda::Write2(uPtr(message)->AppMutator, writer);
}

// public static string get_BinaryFormat() [static] :273
uString* Reify::BinaryFormat()
{
    return ::STRINGS[3/*"bc2"*/];
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/messages/$.uno
// ----------------------------------------------------------------------------------

// public sealed class SetSelection :76
// {
static void SetSelection_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::Simulator::Protocol::SetSelection, Tag), 0);
    type->Reflection.SetFields(1,
        new uField("Tag", 0));
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)SetSelection__New1_fn, 0, true, type, 1, ::g::Uno::String_typeof()),
        new uFunction("Read", NULL, (void*)SetSelection__Read1_fn, 0, true, type, 1, ::g::Uno::IO::BinaryReader_typeof()),
        new uFunction("Write", NULL, (void*)SetSelection__Write1_fn, 0, true, uVoid_typeof(), 2, type, ::g::Uno::IO::BinaryWriter_typeof()));
}

uType* SetSelection_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Outracks::Simulator::Protocol::MessageFromClient_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(SetSelection);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Protocol.SetSelection", options);
    type->fp_build_ = SetSelection_build;
    return type;
}

// public SetSelection(string tag) :80
void SetSelection__ctor_1_fn(SetSelection* __this, uString* tag)
{
    __this->ctor_1(tag);
}

// public SetSelection New(string tag) :80
void SetSelection__New1_fn(uString* tag, SetSelection** __retval)
{
    *__retval = SetSelection::New1(tag);
}

// public static new Outracks.Simulator.Protocol.SetSelection Read(Uno.IO.BinaryReader reader) :90
void SetSelection__Read1_fn(::g::Uno::IO::BinaryReader* reader, SetSelection** __retval)
{
    *__retval = SetSelection::Read1(reader);
}

// public static void Write(Outracks.Simulator.Protocol.SetSelection message, Uno.IO.BinaryWriter writer) :85
void SetSelection__Write1_fn(SetSelection* message, ::g::Uno::IO::BinaryWriter* writer)
{
    SetSelection::Write1(message, writer);
}

// public SetSelection(string tag) [instance] :80
void SetSelection::ctor_1(uString* tag)
{
    ctor_();
    Tag = tag;
}

// public SetSelection New(string tag) [static] :80
SetSelection* SetSelection::New1(uString* tag)
{
    SetSelection* obj1 = (SetSelection*)uNew(SetSelection_typeof());
    obj1->ctor_1(tag);
    return obj1;
}

// public static new Outracks.Simulator.Protocol.SetSelection Read(Uno.IO.BinaryReader reader) [static] :90
SetSelection* SetSelection::Read1(::g::Uno::IO::BinaryReader* reader)
{
    uStackFrame __("Outracks.Simulator.Protocol.SetSelection", "Read(Uno.IO.BinaryReader)");
    uString* tag = uPtr(reader)->ReadString();
    return SetSelection::New1(tag);
}

// public static void Write(Outracks.Simulator.Protocol.SetSelection message, Uno.IO.BinaryWriter writer) [static] :85
void SetSelection::Write1(SetSelection* message, ::g::Uno::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Protocol.SetSelection", "Write(Outracks.Simulator.Protocol.SetSelection,Uno.IO.BinaryWriter)");
    uPtr(writer)->Write24(uPtr(message)->Tag);
}
// }

// /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/messages/$.uno
// ----------------------------------------------------------------------------------

// public sealed class UnhandledException :152
// {
static void UnhandledException_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::Simulator::Protocol::UnhandledException, ClientId), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::Simulator::Protocol::UnhandledException, ClientName), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::Simulator::Protocol::UnhandledException, Message), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::Simulator::Protocol::UnhandledException, StackTrace), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Outracks::Simulator::Protocol::UnhandledException, Type), 0);
    type->Reflection.SetFields(5,
        new uField("ClientId", 0),
        new uField("ClientName", 1),
        new uField("Message", 2),
        new uField("StackTrace", 3),
        new uField("Type", 4));
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)UnhandledException__New1_fn, 0, true, type, 5, ::g::Uno::String_typeof(), ::g::Uno::String_typeof(), ::g::Uno::String_typeof(), ::g::Uno::String_typeof(), ::g::Uno::String_typeof()),
        new uFunction("Read", NULL, (void*)UnhandledException__Read1_fn, 0, true, type, 1, ::g::Uno::IO::BinaryReader_typeof()),
        new uFunction("Write", NULL, (void*)UnhandledException__Write1_fn, 0, true, uVoid_typeof(), 2, type, ::g::Uno::IO::BinaryWriter_typeof()));
}

uType* UnhandledException_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Outracks::Simulator::Protocol::MessageFromClient_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(UnhandledException);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Outracks.Simulator.Protocol.UnhandledException", options);
    type->fp_build_ = UnhandledException_build;
    return type;
}

// public UnhandledException(string clientId, string clientName, string message, string stackTrace, string type) :160
void UnhandledException__ctor_1_fn(UnhandledException* __this, uString* clientId, uString* clientName, uString* message, uString* stackTrace, uString* type)
{
    __this->ctor_1(clientId, clientName, message, stackTrace, type);
}

// public UnhandledException New(string clientId, string clientName, string message, string stackTrace, string type) :160
void UnhandledException__New1_fn(uString* clientId, uString* clientName, uString* message, uString* stackTrace, uString* type, UnhandledException** __retval)
{
    *__retval = UnhandledException::New1(clientId, clientName, message, stackTrace, type);
}

// public static new Outracks.Simulator.Protocol.UnhandledException Read(Uno.IO.BinaryReader reader) :183
void UnhandledException__Read1_fn(::g::Uno::IO::BinaryReader* reader, UnhandledException** __retval)
{
    *__retval = UnhandledException::Read1(reader);
}

// public static void Write(Outracks.Simulator.Protocol.UnhandledException message, Uno.IO.BinaryWriter writer) :174
void UnhandledException__Write1_fn(UnhandledException* message, ::g::Uno::IO::BinaryWriter* writer)
{
    UnhandledException::Write1(message, writer);
}

// public UnhandledException(string clientId, string clientName, string message, string stackTrace, string type) [instance] :160
void UnhandledException::ctor_1(uString* clientId, uString* clientName, uString* message, uString* stackTrace, uString* type)
{
    ctor_();
    ClientId = clientId;
    ClientName = clientName;
    Message = message;
    StackTrace = stackTrace;
    Type = type;
}

// public UnhandledException New(string clientId, string clientName, string message, string stackTrace, string type) [static] :160
UnhandledException* UnhandledException::New1(uString* clientId, uString* clientName, uString* message, uString* stackTrace, uString* type)
{
    UnhandledException* obj1 = (UnhandledException*)uNew(UnhandledException_typeof());
    obj1->ctor_1(clientId, clientName, message, stackTrace, type);
    return obj1;
}

// public static new Outracks.Simulator.Protocol.UnhandledException Read(Uno.IO.BinaryReader reader) [static] :183
UnhandledException* UnhandledException::Read1(::g::Uno::IO::BinaryReader* reader)
{
    uStackFrame __("Outracks.Simulator.Protocol.UnhandledException", "Read(Uno.IO.BinaryReader)");
    uString* clientId = uPtr(reader)->ReadString();
    uString* clientName = reader->ReadString();
    uString* message = reader->ReadString();
    uString* stackTrace = reader->ReadString();
    uString* type = reader->ReadString();
    return UnhandledException::New1(clientId, clientName, message, stackTrace, type);
}

// public static void Write(Outracks.Simulator.Protocol.UnhandledException message, Uno.IO.BinaryWriter writer) [static] :174
void UnhandledException::Write1(UnhandledException* message, ::g::Uno::IO::BinaryWriter* writer)
{
    uStackFrame __("Outracks.Simulator.Protocol.UnhandledException", "Write(Outracks.Simulator.Protocol.UnhandledException,Uno.IO.BinaryWriter)");
    uPtr(writer)->Write24(uPtr(message)->ClientId);
    writer->Write24(message->ClientName);
    writer->Write24(message->Message);
    writer->Write24(message->StackTrace);
    writer->Write24(message->Type);
}
// }

}}}} // ::g::Outracks::Simulator::Protocol
