#pragma once

#ifdef __OBJC__
#include <UIKit/UIKit.h>


#include <Uno.Rect.h>

@interface uAppDelegate : UIViewController<UIApplicationDelegate>
{
    bool isStatusBarVisible;
    UIStatusBarStyle statusBarStyle;
    UIStatusBarAnimation statusBarAnimation;

    uintptr_t primaryTouch;
}

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) EAGLContext *context;
@end


@interface uAppDelegate (SoftKeyboard)
- (void)uKeyboardWillChangeFrame:(NSNotification *)notification;
@end


@interface uAppDelegate (StatusBar)
@property (nonatomic, setter=uSetStatusBarVisible:) bool uStatusBarVisible;
@property (nonatomic, setter=uSetStatusBarStyle:) UIStatusBarStyle uStatusBarStyle;
@property (nonatomic, setter=uSetStatusBarAnimation:) UIStatusBarAnimation uStatusBarAnimation;

@property (nonatomic, readonly) ::g::Uno::Rect uStatusBarFrame;
@end


@interface uAppDelegate (TouchEvents)
@end
#endif

void uEnableKeyboardResizeNotifications(uAppDelegate *delegate);
void uDisableKeyboardResizeNotifications(uAppDelegate *delegate);
