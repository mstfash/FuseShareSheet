#import <WebKit/WebKit.h>
typedef void (^Action)(void);
@interface WVNavDelegate : NSObject<WKNavigationDelegate>
@property(copy) Action onURLChanged;
@property(copy) Action onPageLoaded;
@property(copy) Action onBeginLoading;
-(id)initWithEventHandlers:(Action)beginLoading loaded:(Action)pageLoaded change:(Action)urlChanged;
@end
