// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Data.Xml/0.42.0/source/elements/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Data.Xml.XmlNode.h>
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace Data{namespace Xml{struct XmlAttributeCollection;}}}}
namespace g{namespace Uno{namespace Data{namespace Xml{struct XmlLinkedNode;}}}}
namespace g{namespace Uno{namespace Data{namespace Xml{struct XmlLinkedNodeCollection;}}}}

namespace g{
namespace Uno{
namespace Data{
namespace Xml{

// public abstract class XmlLinkedNode :367
// {
struct XmlLinkedNode_type : ::g::Uno::Data::Xml::XmlNode_type
{
    void(*fp_CreateNewInstance)(::g::Uno::Data::Xml::XmlLinkedNode*, ::g::Uno::Data::Xml::XmlLinkedNode**);
    void(*fp_GetTextContent)(::g::Uno::Data::Xml::XmlLinkedNode*, uString**);
};

XmlLinkedNode_type* XmlLinkedNode_typeof();
void XmlLinkedNode__ctor_2_fn(XmlLinkedNode* __this);
void XmlLinkedNode__AddAfterSelf_fn(XmlLinkedNode* __this, XmlLinkedNode* node);
void XmlLinkedNode__AddBeforeSelf_fn(XmlLinkedNode* __this, XmlLinkedNode* node);
void XmlLinkedNode__AppendChild_fn(XmlLinkedNode* __this, XmlLinkedNode* node);
void XmlLinkedNode__get_Attributes_fn(XmlLinkedNode* __this, ::g::Uno::Data::Xml::XmlAttributeCollection** __retval);
void XmlLinkedNode__set_Attributes_fn(XmlLinkedNode* __this, ::g::Uno::Data::Xml::XmlAttributeCollection* value);
void XmlLinkedNode__get_Children_fn(XmlLinkedNode* __this, ::g::Uno::Data::Xml::XmlLinkedNodeCollection** __retval);
void XmlLinkedNode__set_Children_fn(XmlLinkedNode* __this, ::g::Uno::Data::Xml::XmlLinkedNodeCollection* value);
void XmlLinkedNode__Clone_fn(XmlLinkedNode* __this, XmlLinkedNode** __retval);
void XmlLinkedNode__CloneChildren_fn(XmlLinkedNode* __this, XmlLinkedNode* newNode, XmlLinkedNode* existingNode);
void XmlLinkedNode__FindAllByName_fn(XmlLinkedNode* __this, uString* name, bool* includeNestedNodes, uObject** __retval);
void XmlLinkedNode__FindByName_fn(XmlLinkedNode* __this, uString* name, bool* includeNestedNodes, XmlLinkedNode** __retval);
void XmlLinkedNode__get_FirstChild_fn(XmlLinkedNode* __this, XmlLinkedNode** __retval);
void XmlLinkedNode__GetTextContent_fn(XmlLinkedNode* __this, uString** __retval);
void XmlLinkedNode__get_HasAttributes_fn(XmlLinkedNode* __this, bool* __retval);
void XmlLinkedNode__get_HasChildren_fn(XmlLinkedNode* __this, bool* __retval);
void XmlLinkedNode__get_LastChild_fn(XmlLinkedNode* __this, XmlLinkedNode** __retval);
void XmlLinkedNode__get_NextSibling_fn(XmlLinkedNode* __this, XmlLinkedNode** __retval);
void XmlLinkedNode__set_NextSibling_fn(XmlLinkedNode* __this, XmlLinkedNode* value);
void XmlLinkedNode__get_Parent_fn(XmlLinkedNode* __this, XmlLinkedNode** __retval);
void XmlLinkedNode__set_Parent_fn(XmlLinkedNode* __this, XmlLinkedNode* value);
void XmlLinkedNode__PrependChild_fn(XmlLinkedNode* __this, XmlLinkedNode* node);
void XmlLinkedNode__get_PreviousSibling_fn(XmlLinkedNode* __this, XmlLinkedNode** __retval);
void XmlLinkedNode__set_PreviousSibling_fn(XmlLinkedNode* __this, XmlLinkedNode* value);
void XmlLinkedNode__RecursiveSearch_fn(XmlLinkedNode* __this, ::g::Uno::Collections::List* res, XmlLinkedNode* node, uString* name, bool* includeNestedNodes);
void XmlLinkedNode__get_TextContent_fn(XmlLinkedNode* __this, uString** __retval);
void XmlLinkedNode__set_TextContent_fn(XmlLinkedNode* __this, uString* value);

struct XmlLinkedNode : ::g::Uno::Data::Xml::XmlNode
{
    uStrong< ::g::Uno::Data::Xml::XmlAttributeCollection*> _Attributes;
    uStrong< ::g::Uno::Data::Xml::XmlLinkedNodeCollection*> _Children;
    uStrong<XmlLinkedNode*> _NextSibling;
    uStrong<XmlLinkedNode*> _Parent;
    uStrong<XmlLinkedNode*> _PreviousSibling;

    void ctor_2();
    void AddAfterSelf(XmlLinkedNode* node);
    void AddBeforeSelf(XmlLinkedNode* node);
    void AppendChild(XmlLinkedNode* node);
    ::g::Uno::Data::Xml::XmlAttributeCollection* Attributes();
    void Attributes(::g::Uno::Data::Xml::XmlAttributeCollection* value);
    ::g::Uno::Data::Xml::XmlLinkedNodeCollection* Children();
    void Children(::g::Uno::Data::Xml::XmlLinkedNodeCollection* value);
    XmlLinkedNode* Clone();
    void CloneChildren(XmlLinkedNode* newNode, XmlLinkedNode* existingNode);
    XmlLinkedNode* CreateNewInstance() { XmlLinkedNode* __retval; return (((XmlLinkedNode_type*)__type)->fp_CreateNewInstance)(this, &__retval), __retval; }
    uObject* FindAllByName(uString* name, bool includeNestedNodes);
    XmlLinkedNode* FindByName(uString* name, bool includeNestedNodes);
    XmlLinkedNode* FirstChild();
    uString* GetTextContent() { uString* __retval; return (((XmlLinkedNode_type*)__type)->fp_GetTextContent)(this, &__retval), __retval; }
    bool HasAttributes();
    bool HasChildren();
    XmlLinkedNode* LastChild();
    XmlLinkedNode* NextSibling();
    void NextSibling(XmlLinkedNode* value);
    XmlLinkedNode* Parent();
    void Parent(XmlLinkedNode* value);
    void PrependChild(XmlLinkedNode* node);
    XmlLinkedNode* PreviousSibling();
    void PreviousSibling(XmlLinkedNode* value);
    void RecursiveSearch(::g::Uno::Collections::List* res, XmlLinkedNode* node, uString* name, bool includeNestedNodes);
    uString* TextContent();
    void TextContent(uString* value);
    static uString* GetTextContent(XmlLinkedNode* __this) { uString* __retval; return XmlLinkedNode__GetTextContent_fn(__this, &__retval), __retval; }
};
// }

}}}} // ::g::Uno::Data::Xml
