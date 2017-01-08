// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Data.Xml/0.42.0/source/helpers/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Data{namespace Xml{struct AttributeHandleConverter;}}}}
namespace g{namespace Uno{namespace Data{namespace Xml{struct XmlAttribute;}}}}
namespace g{namespace Uno{namespace Data{namespace Xml{struct XmlAttributeHandle;}}}}

namespace g{
namespace Uno{
namespace Data{
namespace Xml{

// internal sealed class AttributeHandleConverter :8
// {
uType* AttributeHandleConverter_typeof();
void AttributeHandleConverter__ConvertToXmlAttribute_fn(::g::Uno::Data::Xml::XmlAttributeHandle* handle, ::g::Uno::Data::Xml::XmlAttribute** __retval);

struct AttributeHandleConverter : uObject
{
    static ::g::Uno::Data::Xml::XmlAttribute* ConvertToXmlAttribute(::g::Uno::Data::Xml::XmlAttributeHandle* handle);
};
// }

}}}} // ::g::Uno::Data::Xml
