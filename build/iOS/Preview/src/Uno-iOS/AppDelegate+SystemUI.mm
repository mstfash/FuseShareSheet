#include <Uno.Platform.SystemUI.h>
#include <Uno.Platform.SystemUIWillResizeEventArgs.h>

#include <Uno-iOS/AppDelegate.h>
#include <Uno-iOS/Uno-iOS.h>

void uEnableKeyboardResizeNotifications(uAppDelegate *delegate)
{
    [[NSNotificationCenter defaultCenter] addObserver:delegate selector:@selector(uKeyboardWillChangeFrame:) name:UIKeyboardWillShowNotification object:nil];
    [[NSNotificationCenter defaultCenter] addObserver:delegate selector:@selector(uKeyboardWillChangeFrame:) name:UIKeyboardWillHideNotification object:nil];
}

void uDisableKeyboardResizeNotifications(uAppDelegate *delegate)
{
    [[NSNotificationCenter defaultCenter] removeObserver:delegate name:UIKeyboardWillShowNotification object:nil];
    [[NSNotificationCenter defaultCenter] removeObserver:delegate name:UIKeyboardWillHideNotification object:nil];
}

@implementation uAppDelegate (SoftKeyboard)

- (void)uKeyboardWillChangeFrame:(NSNotification *)notification
{
    CGRect frameBegin = [[notification.userInfo objectForKey:UIKeyboardFrameBeginUserInfoKey] CGRectValue];
    CGRect frameEnd = [[notification.userInfo objectForKey:UIKeyboardFrameEndUserInfoKey] CGRectValue];

    double animationDuration = [[notification.userInfo objectForKey:UIKeyboardAnimationDurationUserInfoKey] doubleValue];
    UIViewAnimationCurve animationCurve = (UIViewAnimationCurve) [[notification.userInfo objectForKey:UIKeyboardAnimationCurveUserInfoKey] integerValue];

    int resizeReason;

    if (notification.name == UIKeyboardWillShowNotification)
        resizeReason = 0;
    else if (notification.name == UIKeyboardWillHideNotification)
    {
        resizeReason = 2;
        frameEnd.size.height = 0.;
    }
    else // UIKeyboardWillChangeFrameNotification
        resizeReason = 1;

    CGFloat scale = uPlatform2::iOS::GetUIScreenDensity([UIScreen mainScreen]);

    frameBegin
        = uPlatform2::iOS::Pre_iOS8_HandleDeviceOrientation(frameBegin, nil);
    ::g::Uno::Rect startFrame
        = uPlatform2::iOS::CGRectToUnoRect(frameBegin, scale);

    frameEnd = uPlatform2::iOS::Pre_iOS8_HandleDeviceOrientation(frameEnd, nil);
    ::g::Uno::Rect endFrame = uPlatform2::iOS::CGRectToUnoRect(frameEnd, scale);

    uAutoReleasePool pool;
    ::g::Uno::Platform::SystemUIWillResizeEventArgs* args = ::g::Uno::Platform::SystemUIWillResizeEventArgs::New2(1, resizeReason, endFrame, startFrame, animationDuration, animationCurve);
    ::g::Uno::Platform::SystemUI::OnWillResize(args);
}

@end
