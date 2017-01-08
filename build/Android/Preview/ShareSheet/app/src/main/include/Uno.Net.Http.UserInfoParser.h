// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Net.Http/0.42.5/uriparsers/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Net{namespace Http{struct UserInfoParser;}}}}

namespace g{
namespace Uno{
namespace Net{
namespace Http{

// public sealed class UserInfoParser :257
// {
uType* UserInfoParser_typeof();
void UserInfoParser__ctor__fn(UserInfoParser* __this);
void UserInfoParser__IsValid_fn(uString* userInfo, bool* __retval);
void UserInfoParser__New1_fn(UserInfoParser** __retval);
void UserInfoParser__Parse_fn(uString* uriString, int* endIdx, int* idx, uString** __retval);

struct UserInfoParser : uObject
{
    void ctor_();
    static bool IsValid(uString* userInfo);
    static UserInfoParser* New1();
    static uString* Parse(uString* uriString, int endIdx, int* idx);
};
// }

}}}} // ::g::Uno::Net::Http
