#pragma once

#include <UIKit/UIKit.h>

namespace g{namespace Uno{namespace Platform2{struct Display;}}}

@interface uWindow : UIWindow
@property (nonatomic, setter=uSetDisplay:) ::g::Uno::Platform2::Display* uDisplay;
@end


@interface UIWindow (uPlatform2)
- (void)uSetDisplay:(::g::Uno::Platform2::Display*)unoDisplay;
@end
