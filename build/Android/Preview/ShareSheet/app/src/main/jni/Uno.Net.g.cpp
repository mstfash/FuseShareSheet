// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.Wrappers.JavaObjectHelper.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <arpa/inet.h>
#include <errno.h>
#include <jni.h>
#include <netdb.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.ArgumentOutOfRangeException.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Char.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaUnoObject.h>
#include <Uno.Exception.h>
#include <Uno.FormatException.h>
#include <Uno.Int.h>
#include <Uno.Long.h>
#include <Uno.Net.Dns.h>
#include <Uno.Net.EndPoint.h>
#include <Uno.Net.IPAddress.h>
#include <Uno.Net.IPEndPoint.h>
#include <Uno.Net.NetworkHelpers.h>
#include <Uno.Net.Sockets.AddressFamily.h>
#include <Uno.Net.Sockets.SocketException.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UInt.h>
#include <Uno/JNIHelper.h>
#include <vector>
static uString* STRINGS[12];
static uType* TYPES[6];

namespace g{
namespace Uno{
namespace Net{

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Net.Sockets/0.42.5/$.uno
// ------------------------------------------------------------------------------------------

// public sealed class Dns :18
// {
static void Dns_build(uType* type)
{
    ::STRINGS[0] = uString::Const("hostNameOrAddress");
    ::TYPES[0] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Net::IPAddress_typeof()->Array();
    type->Reflection.SetFunctions(2,
        new uFunction("GetHostAddresses", NULL, (void*)Dns__GetHostAddresses_fn, 0, true, ::TYPES[1/*Uno.Net.IPAddress[]*/], 1, ::g::Uno::String_typeof()),
        new uFunction(".ctor", NULL, (void*)Dns__New1_fn, 0, true, type, 0));
}

uType* Dns_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Dns);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Net.Dns", options);
    type->fp_build_ = Dns_build;
    type->fp_ctor_ = (void*)Dns__New1_fn;
    return type;
}

// public generated Dns() :18
void Dns__ctor__fn(Dns* __this)
{
    __this->ctor_();
}

// public static Uno.Net.IPAddress[] GetHostAddresses(string hostNameOrAddress) :131
void Dns__GetHostAddresses_fn(uString* hostNameOrAddress, uArray** __retval)
{
    *__retval = Dns::GetHostAddresses(hostNameOrAddress);
}

// private static Uno.Net.IPAddress[] GetHostAddressesImpl(string hostNameOrAddress) :101
void Dns__GetHostAddressesImpl_fn(uString* hostNameOrAddress, uArray** __retval)
{
    *__retval = Dns::GetHostAddressesImpl(hostNameOrAddress);
}

// private static extern Uno.Net.IPAddress[] GetLocalAddresses() :88
void Dns__GetLocalAddresses_fn(uArray** __retval)
{
    *__retval = Dns::GetLocalAddresses();
}

// private static extern bool JavaGetLocalAddresses(Uno.Collections.List<string> addresses) :52
void Dns__JavaGetLocalAddresses_fn(::g::Uno::Collections::List* addresses, bool* __retval)
{
    *__retval = Dns::JavaGetLocalAddresses(addresses);
}

// public generated Dns New() :18
void Dns__New1_fn(Dns** __retval)
{
    *__retval = Dns::New1();
}

// public generated Dns() [instance] :18
void Dns::ctor_()
{
}

// public static Uno.Net.IPAddress[] GetHostAddresses(string hostNameOrAddress) [static] :131
uArray* Dns::GetHostAddresses(uString* hostNameOrAddress)
{
    uStackFrame __("Uno.Net.Dns", "GetHostAddresses(string)");

    if (::g::Uno::String::op_Equality(hostNameOrAddress, NULL))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[0/*"hostNameOrA...*/]));

    if ((uPtr(hostNameOrAddress)->Length() > 255) || ((uPtr(hostNameOrAddress)->Length() == 255) && (uPtr(hostNameOrAddress)->Item(254) != '.')))
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[0/*"hostNameOrA...*/]));

    if (uPtr(hostNameOrAddress)->Length() == 0)
    {
        uArray* localAddresses = Dns::GetLocalAddresses();

        if (localAddresses == NULL)
            U_THROW(::g::Uno::Net::Sockets::SocketException::New4(::g::Uno::Net::NetworkHelpers::GetError()));

        return localAddresses;
    }

    uArray* ret = Dns::GetHostAddressesImpl(hostNameOrAddress);

    if (ret == NULL)
        U_THROW(::g::Uno::Net::Sockets::SocketException::New4(::g::Uno::Net::NetworkHelpers::GetError()));

    return ret;
}

// private static Uno.Net.IPAddress[] GetHostAddressesImpl(string hostNameOrAddress) [static] :101
uArray* Dns::GetHostAddressesImpl(uString* hostNameOrAddress)
{
    const char *tmp = uAllocCStr(hostNameOrAddress);
    			struct addrinfo *addr, *curr;
    			int error = getaddrinfo(tmp, NULL, NULL, &addr);
    			uFreeCStr(tmp);
    			if (error != 0)
    				return NULL;
    
    			std::vector<::g::Uno::Net::IPAddress*> addresses;
    			for (curr = addr; curr; curr = curr->ai_next)
    			{
    				if (curr->ai_family == AF_INET)
    				{
    					struct sockaddr_in *sa = (struct sockaddr_in *)curr->ai_addr;
    					uArray* tmp = uArray::New(::g::Uno::Byte_typeof()->Array(), 4, &sa->sin_addr);
    					addresses.push_back(::g::Uno::Net::IPAddress::New1(tmp));
    				}
    				else if (curr->ai_family == AF_INET6)
    				{
    					struct sockaddr_in6 *sa = (struct sockaddr_in6 *)curr->ai_addr;
    					uArray* tmp = uArray::New(::g::Uno::Byte_typeof()->Array(), 16, &sa->sin6_addr);
    					addresses.push_back(::g::Uno::Net::IPAddress::New1(tmp));
    				}
    			}
    			freeaddrinfo(addr);
    
    			return uArray::New(::g::Uno::Net::IPAddress_typeof()->Array(), addresses.size(), &addresses[0]);
}

// private static extern Uno.Net.IPAddress[] GetLocalAddresses() [static] :88
uArray* Dns::GetLocalAddresses()
{
    uStackFrame __("Uno.Net.Dns", "GetLocalAddresses()");
    uString* ret2;
    ::g::Uno::Collections::List* result = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[0/*Uno.Collections.List<string>*/]);

    if (!Dns::JavaGetLocalAddresses(result))
        return NULL;

    uArray* ret = uArray::New(::TYPES[1/*Uno.Net.IPAddress[]*/], result->Count());

    for (int i = 0; i < result->Count(); ++i)
        uPtr(ret)->Strong< ::g::Uno::Net::IPAddress*>(i) = ::g::Uno::Net::IPAddress::Parse((::g::Uno::Collections::List__get_Item_fn(uPtr(result), uCRef<int>(i), &ret2), ret2));

    return ret;
}

// private static extern bool JavaGetLocalAddresses(Uno.Collections.List<string> addresses) [static] :52
bool Dns::JavaGetLocalAddresses(::g::Uno::Collections::List* addresses)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "JavaGetLocalAddresses50", "(Lcom/uno/UnoObject;)Z");
        ::g::Uno::Collections::List* _uaddresses=addresses;
        jobject _addresses = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uaddresses);
        jboolean __jresult = U_JNIVAR->CallStaticBooleanMethod(__cls,__mtd,_addresses);
        bool __result = (bool)__jresult;
        if (_addresses!=NULL) { U_JNIVAR->DeleteLocalRef(_addresses); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public generated Dns New() [static] :18
Dns* Dns::New1()
{
    Dns* obj1 = (Dns*)uNew(Dns_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Net.Sockets/0.42.5/$.uno
// ------------------------------------------------------------------------------------------

// public abstract class EndPoint :178
// {
static void EndPoint_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Net::Sockets::AddressFamily_typeof(), offsetof(::g::Uno::Net::EndPoint, _AddressFamily), 0);
    type->Reflection.SetFunctions(1,
        new uFunction("get_AddressFamily", NULL, (void*)EndPoint__get_AddressFamily_fn, 0, false, ::g::Uno::Net::Sockets::AddressFamily_typeof(), 0));
}

uType* EndPoint_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(EndPoint);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Net.EndPoint", options);
    type->fp_build_ = EndPoint_build;
    return type;
}

// protected EndPoint(Uno.Net.Sockets.AddressFamily addressFamily) :186
void EndPoint__ctor__fn(EndPoint* __this, int* addressFamily)
{
    __this->ctor_(*addressFamily);
}

// public generated Uno.Net.Sockets.AddressFamily get_AddressFamily() :182
void EndPoint__get_AddressFamily_fn(EndPoint* __this, int* __retval)
{
    *__retval = __this->AddressFamily();
}

// private generated void set_AddressFamily(Uno.Net.Sockets.AddressFamily value) :183
void EndPoint__set_AddressFamily_fn(EndPoint* __this, int* value)
{
    __this->AddressFamily(*value);
}

// protected EndPoint(Uno.Net.Sockets.AddressFamily addressFamily) [instance] :186
void EndPoint::ctor_(int addressFamily)
{
    AddressFamily(addressFamily);
}

// public generated Uno.Net.Sockets.AddressFamily get_AddressFamily() [instance] :182
int EndPoint::AddressFamily()
{
    return _AddressFamily;
}

// private generated void set_AddressFamily(Uno.Net.Sockets.AddressFamily value) [instance] :183
void EndPoint::AddressFamily(int value)
{
    _AddressFamily = value;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Net.Sockets/0.42.5/$.uno
// ------------------------------------------------------------------------------------------

// public sealed class IPAddress :216
// {
// static IPAddress() :216
static void IPAddress__cctor__fn(uType* __type)
{
    IPAddress::Any_ = IPAddress::New1(uArray::Init<int>(::TYPES[2/*byte[]*/], 4, 0, 0, 0, 0));
    IPAddress::Broadcast_ = IPAddress::New1(uArray::Init<int>(::TYPES[2/*byte[]*/], 4, 255, 255, 255, 255));
    IPAddress::Loopback_ = IPAddress::New1(uArray::Init<int>(::TYPES[2/*byte[]*/], 4, 127, 0, 0, 1));
    IPAddress::IPv6Any_ = IPAddress::New2(uArray::Init<int>(::TYPES[2/*byte[]*/], 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0), 0LL);
    IPAddress::IPv6Loopback_ = IPAddress::New2(uArray::Init<int>(::TYPES[2/*byte[]*/], 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1), 0LL);
    IPAddress::IPv6None_ = IPAddress::New2(uArray::Init<int>(::TYPES[2/*byte[]*/], 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0), 0LL);
}

static void IPAddress_build(uType* type)
{
    ::STRINGS[1] = uString::Const("Invalid ip address-length: ");
    ::STRINGS[2] = uString::Const("address");
    ::STRINGS[3] = uString::Const("Invalid ipv6 address");
    ::STRINGS[4] = uString::Const("scopeId");
    ::STRINGS[5] = uString::Const("An invalid IP address was specified");
    ::STRINGS[6] = uString::Const("");
    ::STRINGS[7] = uString::Const("Invalid IPv4 address");
    ::STRINGS[8] = uString::Const(".");
    ::STRINGS[9] = uString::Const("{0}%{1}");
    ::STRINGS[10] = uString::Const("invalid AddressFamily");
    ::TYPES[2] = ::g::Uno::Byte_typeof()->Array();
    ::TYPES[3] = ::g::Uno::Int_typeof();
    ::TYPES[4] = ::g::Uno::Char_typeof()->Array();
    ::TYPES[5] = uObject_typeof()->Array();
    type->SetFields(0,
        ::TYPES[2/*byte[]*/], offsetof(::g::Uno::Net::IPAddress, _address), 0,
        ::g::Uno::Net::Sockets::AddressFamily_typeof(), offsetof(::g::Uno::Net::IPAddress, _addressFamily), 0,
        ::g::Uno::UInt_typeof(), offsetof(::g::Uno::Net::IPAddress, _scopeId), 0,
        type, (uintptr_t)&::g::Uno::Net::IPAddress::Any_, uFieldFlagsStatic,
        type, (uintptr_t)&::g::Uno::Net::IPAddress::Broadcast_, uFieldFlagsStatic,
        type, (uintptr_t)&::g::Uno::Net::IPAddress::IPv6Any_, uFieldFlagsStatic,
        type, (uintptr_t)&::g::Uno::Net::IPAddress::IPv6Loopback_, uFieldFlagsStatic,
        type, (uintptr_t)&::g::Uno::Net::IPAddress::IPv6None_, uFieldFlagsStatic,
        type, (uintptr_t)&::g::Uno::Net::IPAddress::Loopback_, uFieldFlagsStatic);
    type->Reflection.SetFields(6,
        new uField("Any", 3),
        new uField("Broadcast", 4),
        new uField("IPv6Any", 5),
        new uField("IPv6Loopback", 6),
        new uField("IPv6None", 7),
        new uField("Loopback", 8));
    type->Reflection.SetFunctions(6,
        new uFunction("get_AddressFamily", NULL, (void*)IPAddress__get_AddressFamily_fn, 0, false, ::g::Uno::Net::Sockets::AddressFamily_typeof(), 0),
        new uFunction("GetAddressBytes", NULL, (void*)IPAddress__GetAddressBytes_fn, 0, false, ::TYPES[2/*byte[]*/], 0),
        new uFunction(".ctor", NULL, (void*)IPAddress__New1_fn, 0, true, type, 1, ::TYPES[2/*byte[]*/]),
        new uFunction(".ctor", NULL, (void*)IPAddress__New2_fn, 0, true, type, 2, ::TYPES[2/*byte[]*/], ::g::Uno::Long_typeof()),
        new uFunction("Parse", NULL, (void*)IPAddress__Parse_fn, 0, true, type, 1, ::g::Uno::String_typeof()),
        new uFunction("get_ScopeId", NULL, (void*)IPAddress__get_ScopeId_fn, 0, false, ::g::Uno::Long_typeof(), 0));
}

uType* IPAddress_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.ObjectSize = sizeof(IPAddress);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Net.IPAddress", options);
    type->fp_build_ = IPAddress_build;
    type->fp_cctor_ = IPAddress__cctor__fn;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))IPAddress__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))IPAddress__GetHashCode_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))IPAddress__ToString_fn;
    return type;
}

// public IPAddress(byte[] octets) :272
void IPAddress__ctor__fn(IPAddress* __this, uArray* octets)
{
    __this->ctor_(octets);
}

// public IPAddress(byte[] address, long scopeId) :286
void IPAddress__ctor_1_fn(IPAddress* __this, uArray* address, int64_t* scopeId)
{
    __this->ctor_1(address, *scopeId);
}

// public Uno.Net.Sockets.AddressFamily get_AddressFamily() :256
void IPAddress__get_AddressFamily_fn(IPAddress* __this, int* __retval)
{
    *__retval = __this->AddressFamily();
}

// public override sealed bool Equals(object obj) :416
void IPAddress__Equals_fn(IPAddress* __this, uObject* obj, bool* __retval)
{
    uStackFrame __("Uno.Net.IPAddress", "Equals(object)");
    IPAddress* ip = uAs<IPAddress*>(obj, __this->__type);

    if (ip == NULL)
        return *__retval = false, void();

    if (__this->_addressFamily != uPtr(ip)->_addressFamily)
        return *__retval = false, void();

    if (uPtr(__this->_address)->Length() != uPtr(uPtr(ip)->_address)->Length())
        return *__retval = false, void();

    for (int i = 0; i < uPtr(__this->_address)->Length(); i++)
        if (uPtr(__this->_address)->Item<uint8_t>(i) != uPtr(uPtr(ip)->_address)->Item<uint8_t>(i))
            return *__retval = false, void();

    if (__this->_scopeId != uPtr(ip)->_scopeId)
        return *__retval = false, void();

    return *__retval = true, void();
}

// public byte[] GetAddressBytes() :368
void IPAddress__GetAddressBytes_fn(IPAddress* __this, uArray** __retval)
{
    *__retval = __this->GetAddressBytes();
}

// public override sealed int GetHashCode() :438
void IPAddress__GetHashCode_fn(IPAddress* __this, int* __retval)
{
    uStackFrame __("Uno.Net.IPAddress", "GetHashCode()");
    int ind4;
    int hash = 629 + ::g::Uno::Int::GetHashCode((ind4 = __this->_addressFamily, ind4), ::TYPES[3/*int*/]);
    hash = (hash * 37) + uPtr(__this->_address)->Length();

    for (int i = 0; i < uPtr(__this->_address)->Length(); i++)
        hash = (hash * 37) + (int)uPtr(__this->_address)->Item<uint8_t>(i);

    hash = (hash * 37) + (int)__this->_scopeId;
    return *__retval = hash, void();
}

// private static extern string IPv6AddressToString(byte[] bytes) :376
void IPAddress__IPv6AddressToString_fn(uArray* bytes, uString** __retval)
{
    *__retval = IPAddress::IPv6AddressToString(bytes);
}

// public IPAddress New(byte[] octets) :272
void IPAddress__New1_fn(uArray* octets, IPAddress** __retval)
{
    *__retval = IPAddress::New1(octets);
}

// public IPAddress New(byte[] address, long scopeId) :286
void IPAddress__New2_fn(uArray* address, int64_t* scopeId, IPAddress** __retval)
{
    *__retval = IPAddress::New2(address, *scopeId);
}

// public static Uno.Net.IPAddress Parse(string address) :318
void IPAddress__Parse_fn(uString* address, IPAddress** __retval)
{
    *__retval = IPAddress::Parse(address);
}

// private static extern byte[] ParseIPv6Address(string address) :305
void IPAddress__ParseIPv6Address_fn(uString* address, uArray** __retval)
{
    *__retval = IPAddress::ParseIPv6Address(address);
}

// public long get_ScopeId() :255
void IPAddress__get_ScopeId_fn(IPAddress* __this, int64_t* __retval)
{
    *__retval = __this->ScopeId();
}

// public override sealed string ToString() :389
void IPAddress__ToString_fn(IPAddress* __this, uString** __retval)
{
    uStackFrame __("Uno.Net.IPAddress", "ToString()");

    switch (__this->AddressFamily())
    {
        case 2:
        {
            uint8_t o1 = uPtr(__this->_address)->Item<uint8_t>(0);
            uint8_t o2 = uPtr(__this->_address)->Item<uint8_t>(1);
            uint8_t o3 = uPtr(__this->_address)->Item<uint8_t>(2);
            uint8_t o4 = uPtr(__this->_address)->Item<uint8_t>(3);
            return *__retval = ::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition(uBox<uint8_t>(::g::Uno::Byte_typeof(), o1), ::STRINGS[8/*"."*/]), uBox<uint8_t>(::g::Uno::Byte_typeof(), o2)), ::STRINGS[8/*"."*/]), uBox<uint8_t>(::g::Uno::Byte_typeof(), o3)), ::STRINGS[8/*"."*/]), uBox<uint8_t>(::g::Uno::Byte_typeof(), o4)), void();
        }
        case 23:
        {
            uString* ret;
            ret = IPAddress::IPv6AddressToString(__this->_address);

            if (__this->_scopeId != 0U)
                ret = ::g::Uno::String::Format(::STRINGS[9/*"{0}%{1}"*/], uArray::Init<uObject*>(::TYPES[5/*object[]*/], 2, ret, uBox<uint32_t>(::g::Uno::UInt_typeof(), __this->_scopeId)));

            return *__retval = ret, void();
        }
        default:
            U_THROW(::g::Uno::Exception::New2(::STRINGS[10/*"invalid Add...*/]));
    }
}

uSStrong<IPAddress*> IPAddress::Any_;
uSStrong<IPAddress*> IPAddress::Broadcast_;
uSStrong<IPAddress*> IPAddress::IPv6Any_;
uSStrong<IPAddress*> IPAddress::IPv6Loopback_;
uSStrong<IPAddress*> IPAddress::IPv6None_;
uSStrong<IPAddress*> IPAddress::Loopback_;

// public IPAddress(byte[] octets) [instance] :272
void IPAddress::ctor_(uArray* octets)
{
    uStackFrame __("Uno.Net.IPAddress", ".ctor(byte[])");

    if (uPtr(octets)->Length() == 4)
        _addressFamily = 2;
    else if (uPtr(octets)->Length() == 16)
        _addressFamily = 23;
    else
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::STRINGS[1/*"Invalid ip ...*/], uBox<int>(::TYPES[3/*int*/], uPtr(octets)->Length()))));

    _address = uArray::New(::TYPES[2/*byte[]*/], uPtr(octets)->Length());

    for (int i = 0; i < octets->Length(); ++i)
        uPtr(_address)->Item<uint8_t>(i) = uPtr(octets)->Item<uint8_t>(i);
}

// public IPAddress(byte[] address, long scopeId) [instance] :286
void IPAddress::ctor_1(uArray* address, int64_t scopeId)
{
    uStackFrame __("Uno.Net.IPAddress", ".ctor(byte[],long)");

    if (address == NULL)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[2/*"address"*/]));

    if (uPtr(address)->Length() != 16)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[3/*"Invalid ipv...*/]));

    if ((-2147483648LL > scopeId) || (scopeId > 2147483647LL))
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[4/*"scopeId"*/]));

    _addressFamily = 23;
    _address = uArray::New(::TYPES[2/*byte[]*/], uPtr(address)->Length());

    for (int i = 0; i < address->Length(); ++i)
        uPtr(_address)->Item<uint8_t>(i) = uPtr(address)->Item<uint8_t>(i);

    _scopeId = (uint32_t)scopeId;
}

// public Uno.Net.Sockets.AddressFamily get_AddressFamily() [instance] :256
int IPAddress::AddressFamily()
{
    return _addressFamily;
}

// public byte[] GetAddressBytes() [instance] :368
uArray* IPAddress::GetAddressBytes()
{
    uStackFrame __("Uno.Net.IPAddress", "GetAddressBytes()");
    uArray* address = uArray::New(::TYPES[2/*byte[]*/], uPtr(_address)->Length());

    for (int i = 0; i < uPtr(_address)->Length(); i++)
        uPtr(address)->Item<uint8_t>(i) = uPtr(_address)->Item<uint8_t>(i);

    return address;
}

// public long get_ScopeId() [instance] :255
int64_t IPAddress::ScopeId()
{
    return (int64_t)_scopeId;
}

// private static extern string IPv6AddressToString(byte[] bytes) [static] :376
uString* IPAddress::IPv6AddressToString(uArray* bytes)
{
    IPAddress_typeof()->Init();
    in6_addr addr;
    			memcpy(addr.s6_addr, bytes->Ptr(), bytes->Length());
    
    			char buf[INET6_ADDRSTRLEN];
    			const char *ret = inet_ntop(AF_INET6, &addr, buf, INET6_ADDRSTRLEN);
    			if (ret == NULL)
    				return NULL;
    
    			return uString::Utf8(ret);
}

// public IPAddress New(byte[] octets) [static] :272
IPAddress* IPAddress::New1(uArray* octets)
{
    IPAddress* obj6 = (IPAddress*)uNew(IPAddress_typeof());
    obj6->ctor_(octets);
    return obj6;
}

// public IPAddress New(byte[] address, long scopeId) [static] :286
IPAddress* IPAddress::New2(uArray* address, int64_t scopeId)
{
    IPAddress* obj7 = (IPAddress*)uNew(IPAddress_typeof());
    obj7->ctor_1(address, scopeId);
    return obj7;
}

// public static Uno.Net.IPAddress Parse(string address) [static] :318
IPAddress* IPAddress::Parse(uString* address)
{
    uStackFrame __("Uno.Net.IPAddress", "Parse(string)");
    IPAddress_typeof()->Init();

    if (::g::Uno::String::IndexOf(uPtr(address), ':', 0) != -1)
    {
        int64_t scopeid = 0LL;
        int percent = ::g::Uno::String::IndexOf(uPtr(address), '%', 0);

        if (percent != -1)
        {
            uString* scopeString = ::g::Uno::String::Substring1(uPtr(address), percent + 1, (uPtr(address)->Length() - percent) - 1);

            if (uPtr(scopeString)->Length() > 10)
                U_THROW(::g::Uno::FormatException::New4(::STRINGS[5/*"An invalid ...*/]));

            for (int index2 = 0, length3 = uPtr(scopeString)->Length(); index2 < length3; ++index2)
            {
                uChar ch = uPtr(scopeString)->Item(index2);

                if (!::g::Uno::Char::IsDigit(ch))
                    U_THROW(::g::Uno::FormatException::New4(::STRINGS[5/*"An invalid ...*/]));
            }

            scopeid = ::g::Uno::Long::Parse(scopeString);
            address = ::g::Uno::String::Substring1(uPtr(address), 0, percent);
        }

        uArray* data = IPAddress::ParseIPv6Address(address);

        if (data == NULL)
            U_THROW(::g::Uno::Net::Sockets::SocketException::New4(::STRINGS[6/*""*/]));

        return IPAddress::New2(data, scopeid);
    }

    uArray* parts = ::g::Uno::String::Split(uPtr(address), uArray::Init<int>(::TYPES[4/*char[]*/], 1, '.'));

    if (uPtr(parts)->Length() != 4)
        U_THROW(::g::Uno::FormatException::New4(::STRINGS[7/*"Invalid IPv...*/]));

    uArray* octets = uArray::New(::TYPES[2/*byte[]*/], 4);

    for (int i = 0; i < 4; ++i)
    {
        int tmp = ::g::Uno::Int::Parse(uPtr(parts)->Strong<uString*>(i));

        if ((0 > tmp) || (tmp > 255))
            U_THROW(::g::Uno::FormatException::New4(::STRINGS[7/*"Invalid IPv...*/]));

        uPtr(octets)->Item<uint8_t>(i) = (uint8_t)tmp;
    }

    return IPAddress::New1(octets);
}

// private static extern byte[] ParseIPv6Address(string address) [static] :305
uArray* IPAddress::ParseIPv6Address(uString* address)
{
    IPAddress_typeof()->Init();
    const char *tmp = uAllocCStr(address);
    			unsigned char buf[sizeof(struct in6_addr)];
    			int err = inet_pton(AF_INET6, tmp, buf);
    			uFreeCStr(tmp);
    
    			if (err != 1)
    				return NULL;
    
    			return uArray::New(::g::Uno::Byte_typeof()->Array(), int(sizeof(struct in6_addr)), buf);
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Net.Sockets/0.42.5/$.uno
// ------------------------------------------------------------------------------------------

// public sealed class IPEndPoint :193
// {
static void IPEndPoint_build(uType* type)
{
    ::STRINGS[11] = uString::Const(":");
    type->SetFields(1,
        ::g::Uno::Net::IPAddress_typeof(), offsetof(::g::Uno::Net::IPEndPoint, _Address), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Uno::Net::IPEndPoint, _Port), 0);
    type->Reflection.SetFunctions(3,
        new uFunction("get_Address", NULL, (void*)IPEndPoint__get_Address_fn, 0, false, ::g::Uno::Net::IPAddress_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)IPEndPoint__New1_fn, 0, true, type, 2, ::g::Uno::Net::IPAddress_typeof(), ::g::Uno::Int_typeof()),
        new uFunction("get_Port", NULL, (void*)IPEndPoint__get_Port_fn, 0, false, ::g::Uno::Int_typeof(), 0));
}

uType* IPEndPoint_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Net::EndPoint_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(IPEndPoint);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Net.IPEndPoint", options);
    type->fp_build_ = IPEndPoint_build;
    type->fp_ToString = (void(*)(uObject*, uString**))IPEndPoint__ToString_fn;
    return type;
}

// public IPEndPoint(Uno.Net.IPAddress address, int port) :199
void IPEndPoint__ctor_1_fn(IPEndPoint* __this, ::g::Uno::Net::IPAddress* address, int* port)
{
    __this->ctor_1(address, *port);
}

// public generated Uno.Net.IPAddress get_Address() :197
void IPEndPoint__get_Address_fn(IPEndPoint* __this, ::g::Uno::Net::IPAddress** __retval)
{
    *__retval = __this->Address();
}

// private generated void set_Address(Uno.Net.IPAddress value) :197
void IPEndPoint__set_Address_fn(IPEndPoint* __this, ::g::Uno::Net::IPAddress* value)
{
    __this->Address(value);
}

// public IPEndPoint New(Uno.Net.IPAddress address, int port) :199
void IPEndPoint__New1_fn(::g::Uno::Net::IPAddress* address, int* port, IPEndPoint** __retval)
{
    *__retval = IPEndPoint::New1(address, *port);
}

// public generated int get_Port() :195
void IPEndPoint__get_Port_fn(IPEndPoint* __this, int* __retval)
{
    *__retval = __this->Port();
}

// private generated void set_Port(int value) :195
void IPEndPoint__set_Port_fn(IPEndPoint* __this, int* value)
{
    __this->Port(*value);
}

// public override sealed string ToString() :206
void IPEndPoint__ToString_fn(IPEndPoint* __this, uString** __retval)
{
    uStackFrame __("Uno.Net.IPEndPoint", "ToString()");
    return *__retval = ::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(uPtr(__this->Address())->ToString(), ::STRINGS[11/*":"*/]), uBox<int>(::TYPES[3/*int*/], __this->Port())), void();
}

// public IPEndPoint(Uno.Net.IPAddress address, int port) [instance] :199
void IPEndPoint::ctor_1(::g::Uno::Net::IPAddress* address, int port)
{
    uStackFrame __("Uno.Net.IPEndPoint", ".ctor(Uno.Net.IPAddress,int)");
    ctor_(uPtr(address)->AddressFamily());
    Address(address);
    Port(port);
}

// public generated Uno.Net.IPAddress get_Address() [instance] :197
::g::Uno::Net::IPAddress* IPEndPoint::Address()
{
    return _Address;
}

// private generated void set_Address(Uno.Net.IPAddress value) [instance] :197
void IPEndPoint::Address(::g::Uno::Net::IPAddress* value)
{
    _Address = value;
}

// public generated int get_Port() [instance] :195
int IPEndPoint::Port()
{
    return _Port;
}

// private generated void set_Port(int value) [instance] :195
void IPEndPoint::Port(int value)
{
    _Port = value;
}

// public IPEndPoint New(Uno.Net.IPAddress address, int port) [static] :199
IPEndPoint* IPEndPoint::New1(::g::Uno::Net::IPAddress* address, int port)
{
    IPEndPoint* obj1 = (IPEndPoint*)uNew(IPEndPoint_typeof());
    obj1->ctor_1(address, port);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Uno.Net.Sockets/0.42.5/$.uno
// ------------------------------------------------------------------------------------------

// internal sealed extern class NetworkHelpers :463
// {
static void NetworkHelpers_build(uType* type)
{
}

uType* NetworkHelpers_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(NetworkHelpers);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Net.NetworkHelpers", options);
    type->fp_build_ = NetworkHelpers_build;
    return type;
}

// public static extern string GetError() :482
void NetworkHelpers__GetError_fn(uString** __retval)
{
    *__retval = NetworkHelpers::GetError();
}

// public static extern string GetError() [static] :482
uString* NetworkHelpers::GetError()
{
    return uString::Utf8(strerror(errno));
}
// }

}}} // ::g::Uno::Net
