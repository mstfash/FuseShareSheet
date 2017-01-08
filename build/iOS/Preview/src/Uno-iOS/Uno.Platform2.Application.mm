#include <UIKit/UIKit.h>

#include <Uno/Uno.h>
#include <Uno/Platform2.h>

#include <Uno-iOS/AppDelegate.h>
#include <Uno-iOS/Uno-iOS.h>


namespace {

    static uAppDelegate *_appDelegate()
    {
        return (uAppDelegate *) [UIApplication sharedApplication].delegate;
    }

} // <anonymous> namespace

namespace uPlatform2
{
    ViewNativeHandle Application::GetRootView()
    {
        return _appDelegate().view;
    }

    void Application::SetRootView(ViewNativeHandle viewHandle)
    {
        _appDelegate().view = viewHandle;
    }

    bool Application::GetIsStatusBarVisible()
    {
        return _appDelegate().uStatusBarVisible;
    }

    void Application::SetStatusBarVisible(bool visible)
    {
        _appDelegate().uStatusBarVisible = visible;
    }

    void Application::EnterFullscreen()
    {
        SetStatusBarVisible(false);
    }

    ::g::Uno::Rect Application::GetStatusBarFrame()
    {
        CGRect frame = [UIApplication sharedApplication].statusBarFrame;
        CGFloat scale = [UIScreen mainScreen].scale;
        return iOS::CGRectToUnoRect(
            iOS::Pre_iOS8_HandleDeviceOrientation(frame, nil), scale);
    }

    void Application::Quit()
    {
        // will get you kicked out the app store
    }
}
