// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/exceptions/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Exception.h>
namespace g{namespace Uno{namespace Collections{struct ReadOnlyCollection;}}}
namespace g{namespace Uno{struct AggregateException;}}

namespace g{
namespace Uno{

// public sealed class AggregateException :10
// {
::g::Uno::Exception_type* AggregateException_typeof();
void AggregateException__ctor_3_fn(AggregateException* __this);
void AggregateException__ctor_4_fn(AggregateException* __this, uString* message);
void AggregateException__ctor_5_fn(AggregateException* __this, uString* message, uArray* innerExceptions);
void AggregateException__ctor_6_fn(AggregateException* __this, uArray* innerExceptions);
void AggregateException__get_InnerExceptions_fn(AggregateException* __this, ::g::Uno::Collections::ReadOnlyCollection** __retval);
void AggregateException__New4_fn(AggregateException** __retval);
void AggregateException__New5_fn(uString* message, AggregateException** __retval);
void AggregateException__New6_fn(uString* message, uArray* innerExceptions, AggregateException** __retval);
void AggregateException__New7_fn(uArray* innerExceptions, AggregateException** __retval);
void AggregateException__ToString_fn(AggregateException* __this, uString** __retval);

struct AggregateException : ::g::Uno::Exception
{
    uStrong<uArray*> _innerExceptions;

    void ctor_3();
    void ctor_4(uString* message);
    void ctor_5(uString* message, uArray* innerExceptions);
    void ctor_6(uArray* innerExceptions);
    ::g::Uno::Collections::ReadOnlyCollection* InnerExceptions();
    static AggregateException* New4();
    static AggregateException* New5(uString* message);
    static AggregateException* New6(uString* message, uArray* innerExceptions);
    static AggregateException* New7(uArray* innerExceptions);
};
// }

}} // ::g::Uno
