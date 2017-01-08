// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Outracks.Simulator.DeviceInfo.h>
#include <UIKit/UIKit.h>
#include <Uno.String.h>
#include <uObjC.Foreign.h>

namespace g{
namespace Outracks{
namespace Simulator{

// public static extern class DeviceInfo :1662
// {
static void DeviceInfo_build(uType* type)
{
    type->Reflection.SetFunctions(4,
        new uFunction("GetGUID", NULL, (void*)DeviceInfo__GetGUID_fn, 0, true, ::g::Uno::String_typeof(), 0),
        new uFunction("GetName", NULL, (void*)DeviceInfo__GetName_fn, 0, true, ::g::Uno::String_typeof(), 0),
        new uFunction("get_GUID", NULL, (void*)DeviceInfo__get_GUID_fn, 0, true, ::g::Uno::String_typeof(), 0),
        new uFunction("get_Name", NULL, (void*)DeviceInfo__get_Name_fn, 0, true, ::g::Uno::String_typeof(), 0));
}

uClassType* DeviceInfo_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Outracks.Simulator.DeviceInfo", options);
    type->fp_build_ = DeviceInfo_build;
    return type;
}

// public static extern string GetGUID() :1675
void DeviceInfo__GetGUID_fn(uString** __retval)
{
    *__retval = DeviceInfo::GetGUID();
}

// public static extern string GetName() :1669
void DeviceInfo__GetName_fn(uString** __retval)
{
    *__retval = DeviceInfo::GetName();
}

// public static string get_GUID() :1666
void DeviceInfo__get_GUID_fn(uString** __retval)
{
    *__retval = DeviceInfo::GUID();
}

// public static string get_Name() :1664
void DeviceInfo__get_Name_fn(uString** __retval)
{
    *__retval = DeviceInfo::Name();
}

// public static extern string GetGUID() [static] :1675
uString* DeviceInfo::GetGUID()
{
    @autoreleasepool
    {
        return ::uObjC::UnoString([] () -> ::NSString*
        {
            return [[[UIDevice currentDevice] identifierForVendor] UUIDString];
        } ());
        
    }
    
}

// public static extern string GetName() [static] :1669
uString* DeviceInfo::GetName()
{
    @autoreleasepool
    {
        return ::uObjC::UnoString([] () -> ::NSString*
        {
            return [[UIDevice currentDevice] name];
        } ());
        
    }
    
}

// public static string get_GUID() [static] :1666
uString* DeviceInfo::GUID()
{
    return DeviceInfo::GetGUID();
}

// public static string get_Name() [static] :1664
uString* DeviceInfo::Name()
{
    return DeviceInfo::GetName();
}
// }

}}} // ::g::Outracks::Simulator
