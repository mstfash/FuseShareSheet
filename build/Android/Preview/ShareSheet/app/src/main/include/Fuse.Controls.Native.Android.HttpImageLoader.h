// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Native/0.42.4/android/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Java.Object.h>
#include <Uno.IDisposable.h>
#include <Uno.Threading.Promise-1.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct HttpImageLoader;}}}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// internal sealed extern class HttpImageLoader :454
// {
::g::Uno::Threading::Future_type* HttpImageLoader_typeof();
void HttpImageLoader__ctor_7_fn(HttpImageLoader* __this, uString* url);
void HttpImageLoader__Dispose_fn(HttpImageLoader* __this);
void HttpImageLoader__Error_fn(HttpImageLoader* __this, uString* errorMsg);
void HttpImageLoader__LoadAsync_fn(uString* urlString, uDelegate* success, uDelegate* error);
void HttpImageLoader__New5_fn(uString* url, HttpImageLoader** __retval);
void HttpImageLoader__Success_fn(HttpImageLoader* __this, ::g::Java::Object* bitmap);

struct HttpImageLoader : ::g::Uno::Threading::Promise
{
    bool _isDisposed1;

    void ctor_7(uString* url);
    void Error(uString* errorMsg);
    void Success(::g::Java::Object* bitmap);
    static void LoadAsync(uString* urlString, uDelegate* success, uDelegate* error);
    static HttpImageLoader* New5(uString* url);
};
// }

}}}}} // ::g::Fuse::Controls::Native::Android
