// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Data.Xml/0.42.0/source/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Exception.h>
namespace g{namespace Uno{namespace Data{namespace Xml{struct XmlException;}}}}

namespace g{
namespace Uno{
namespace Data{
namespace Xml{

// public sealed class XmlException :8
// {
::g::Uno::Exception_type* XmlException_typeof();
void XmlException__ctor_3_fn(XmlException* __this, uString* message);
void XmlException__New4_fn(uString* message, XmlException** __retval);

struct XmlException : ::g::Uno::Exception
{
    void ctor_3(uString* message);
    static XmlException* New4(uString* message);
};
// }

}}}} // ::g::Uno::Data::Xml
