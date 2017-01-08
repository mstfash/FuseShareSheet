// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Protocol.Uno/0.0.0/bytecode/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct TypeNameTokenizer;}}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Bytecode{

// public sealed class TypeNameTokenizer :1306
// {
uType* TypeNameTokenizer_typeof();
void TypeNameTokenizer__ctor__fn(TypeNameTokenizer* __this, uString* name);
void TypeNameTokenizer__IsSpecialChar_fn(uChar* c, bool* __retval);
void TypeNameTokenizer__New1_fn(uString* name, TypeNameTokenizer** __retval);
void TypeNameTokenizer__ReadName_fn(TypeNameTokenizer* __this);
void TypeNameTokenizer__Tokenize_fn(TypeNameTokenizer* __this);
void TypeNameTokenizer__Tokenize1_fn(uString* name, ::g::Uno::Collections::List** __retval);

struct TypeNameTokenizer : uObject
{
    int _idx;
    uStrong<uString*> _name;
    uStrong< ::g::Uno::Collections::List*> _tokens;

    void ctor_(uString* name);
    void ReadName();
    void Tokenize();
    static bool IsSpecialChar(uChar c);
    static TypeNameTokenizer* New1(uString* name);
    static ::g::Uno::Collections::List* Tokenize1(uString* name);
};
// }

}}}} // ::g::Outracks::Simulator::Bytecode
