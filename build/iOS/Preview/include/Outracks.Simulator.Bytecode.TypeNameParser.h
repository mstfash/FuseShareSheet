// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/bytecode/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct TypeName;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct TypeNameParser;}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{template<class T>struct Optional1;}}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Bytecode{

// public sealed class TypeNameParser :1236
// {
uType* TypeNameParser_typeof();
void TypeNameParser__ctor__fn(TypeNameParser* __this, ::g::Uno::Collections::List* tokens);
void TypeNameParser__get_Cur_fn(TypeNameParser* __this, uString** __retval);
void TypeNameParser__New1_fn(::g::Uno::Collections::List* tokens, TypeNameParser** __retval);
void TypeNameParser__get_NoTypes_fn(::g::Uno::Collections::List** __retval);
void TypeNameParser__Parse_fn(uString* typeName, ::g::Outracks::Simulator::Bytecode::TypeName** __retval);
void TypeNameParser__ParsePossibleDot_fn(TypeNameParser* __this);
void TypeNameParser__ParsePossibleGenericArguments_fn(TypeNameParser* __this, ::g::Uno::Collections::List** __retval);
void TypeNameParser__ParseSingleTypeName_fn(TypeNameParser* __this, ::g::Outracks::Simulator::Bytecode::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::TypeName*> >* containingType, ::g::Outracks::Simulator::Bytecode::TypeName** __retval);
void TypeNameParser__ParseTypeName_fn(TypeNameParser* __this, ::g::Outracks::Simulator::Bytecode::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::TypeName*> >* containingType, ::g::Outracks::Simulator::Bytecode::TypeName** __retval);

struct TypeNameParser : uObject
{
    int _idx;
    uStrong< ::g::Uno::Collections::List*> _tokens;

    void ctor_(::g::Uno::Collections::List* tokens);
    uString* Cur();
    void ParsePossibleDot();
    ::g::Uno::Collections::List* ParsePossibleGenericArguments();
    ::g::Outracks::Simulator::Bytecode::TypeName* ParseSingleTypeName(::g::Outracks::Simulator::Bytecode::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::TypeName*> > containingType);
    ::g::Outracks::Simulator::Bytecode::TypeName* ParseTypeName(::g::Outracks::Simulator::Bytecode::Optional1<uStrong< ::g::Outracks::Simulator::Bytecode::TypeName*> > containingType);
    static TypeNameParser* New1(::g::Uno::Collections::List* tokens);
    static ::g::Outracks::Simulator::Bytecode::TypeName* Parse(uString* typeName);
    static ::g::Uno::Collections::List* NoTypes();
};
// }

}}}} // ::g::Outracks::Simulator::Bytecode
