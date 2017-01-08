// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.WebView/0.42.4/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.iOS.Controls.NavDelegate.h>
#include <iOS/WVNavDelegate.h>
#include <ObjC.Object.h>
#include <Uno.Action.h>
#include <uObjC.Foreign.h>

namespace g{
namespace Fuse{
namespace iOS{
namespace Controls{

// public static extern class NavDelegate :14
// {
static void NavDelegate_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction("Create", NULL, (void*)NavDelegate__Create_fn, 0, true, ::g::ObjC::Object_typeof(), 3, ::g::Uno::Action_typeof(), ::g::Uno::Action_typeof(), ::g::Uno::Action_typeof()));
}

uClassType* NavDelegate_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.iOS.Controls.NavDelegate", options);
    type->fp_build_ = NavDelegate_build;
    return type;
}

// public static ObjC.Object Create(Uno.Action beginLoading, Uno.Action pageLoaded, Uno.Action urlChanged) :17
void NavDelegate__Create_fn(uDelegate* beginLoading, uDelegate* pageLoaded, uDelegate* urlChanged, uObject** __retval)
{
    *__retval = NavDelegate::Create(beginLoading, pageLoaded, urlChanged);
}

// public static ObjC.Object Create(Uno.Action beginLoading, Uno.Action pageLoaded, Uno.Action urlChanged) [static] :17
uObject* NavDelegate::Create(uDelegate* beginLoading, uDelegate* pageLoaded, uDelegate* urlChanged)
{
    @autoreleasepool
    {
        return ::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object::New1([] (::uObjC::Function<void> beginLoading, ::uObjC::Function<void> pageLoaded, ::uObjC::Function<void> urlChanged) -> ::id
        {
            return [[WVNavDelegate alloc] initWithEventHandlers:beginLoading loaded:pageLoaded change:urlChanged];
        } ([] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void>
        {
            return [[^ void ()
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->InvokeVoid();
                
            } copy] autorelease];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: beginLoading]), [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void>
        {
            return [[^ void ()
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->InvokeVoid();
                
            } copy] autorelease];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: pageLoaded]), [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void>
        {
            return [[^ void ()
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->InvokeVoid();
                
            } copy] autorelease];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: urlChanged])));
        
    }
    
}
// }

}}}} // ::g::Fuse::iOS::Controls
