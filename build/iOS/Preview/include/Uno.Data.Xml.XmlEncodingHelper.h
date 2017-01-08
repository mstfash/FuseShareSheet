// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Data.Xml/0.42.0/source/helpers/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Data{namespace Xml{struct XmlEncodingHelper;}}}}

namespace g{
namespace Uno{
namespace Data{
namespace Xml{

// internal sealed class XmlEncodingHelper :94
// {
uType* XmlEncodingHelper_typeof();
void XmlEncodingHelper__ConvertFromString_fn(uString* encodingStr, int* __retval);
void XmlEncodingHelper__ConvertToString_fn(int* encoding, uString** __retval);
void XmlEncodingHelper__get_EncodingDictionary_fn(::g::Uno::Collections::Dictionary** __retval);
void XmlEncodingHelper__FillEncodingDictionary_fn();

struct XmlEncodingHelper : uObject
{
    static uSStrong< ::g::Uno::Collections::Dictionary*> _encodingDictionary_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _encodingDictionary() { return _encodingDictionary_; }

    static int ConvertFromString(uString* encodingStr);
    static uString* ConvertToString(int encoding);
    static void FillEncodingDictionary();
    static ::g::Uno::Collections::Dictionary* EncodingDictionary();
};
// }

}}}} // ::g::Uno::Data::Xml
