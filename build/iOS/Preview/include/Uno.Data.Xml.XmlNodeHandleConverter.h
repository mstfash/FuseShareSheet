// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Data.Xml/0.42.0/source/helpers/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Data{namespace Xml{struct XmlLinkedNode;}}}}
namespace g{namespace Uno{namespace Data{namespace Xml{struct XmlNodeHandle;}}}}
namespace g{namespace Uno{namespace Data{namespace Xml{struct XmlNodeHandleConverter;}}}}

namespace g{
namespace Uno{
namespace Data{
namespace Xml{

// internal sealed class XmlNodeHandleConverter :178
// {
uType* XmlNodeHandleConverter_typeof();
void XmlNodeHandleConverter__ConvertToXmlLinkedNode_fn(::g::Uno::Data::Xml::XmlNodeHandle* handle, ::g::Uno::Data::Xml::XmlLinkedNode** __retval);
void XmlNodeHandleConverter__ConvertToXmlNodeTree_fn(::g::Uno::Data::Xml::XmlLinkedNode* xmlNode, ::g::Uno::Data::Xml::XmlNodeHandle* handle);

struct XmlNodeHandleConverter : uObject
{
    static ::g::Uno::Data::Xml::XmlLinkedNode* ConvertToXmlLinkedNode(::g::Uno::Data::Xml::XmlNodeHandle* handle);
    static void ConvertToXmlNodeTree(::g::Uno::Data::Xml::XmlLinkedNode* xmlNode, ::g::Uno::Data::Xml::XmlNodeHandle* handle);
};
// }

}}}} // ::g::Uno::Data::Xml
