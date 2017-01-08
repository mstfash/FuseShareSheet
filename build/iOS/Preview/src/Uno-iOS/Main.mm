#include <Uno/Uno.h>
#include <UIKit/UIKit.h>

#include <Uno-iOS/AppDelegate.h>

int main(int argc, char **argv)
{
    // TODO: Report unhandled exceptions.
    // Can't rely on exceptions propagating outside UIApplicationMain as it
    // won't work with latest arm64 ABI

    uRuntime uno;

    int result;

    NSAutoreleasePool *pool = [[NSAutoreleasePool alloc] init];
    result = UIApplicationMain(
        argc, argv, nil, NSStringFromClass([uAppDelegate class]));
    [pool drain];

    return result;
}
