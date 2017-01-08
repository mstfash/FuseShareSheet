#import "WVNavDelegate.h"
@implementation WVNavDelegate
-(id)initWithEventHandlers:(Action)beginLoading loaded:(Action)pageLoaded change:(Action)urlChanged
{
	self = [super init];
	self.onBeginLoading = beginLoading;
	self.onPageLoaded = pageLoaded;
	self.onURLChanged = urlChanged;
	return self;
}
-(void) webView:(WKWebView*)webview didStartProvisionalNavigation:(WKNavigation*)navigation
{
	self.onBeginLoading();
}

-(void) webView:(WKWebView*)webview didCommitNavigation:(WKNavigation*)navigation
{
	self.onBeginLoading();
}

-(void) webView:(WKWebView*)webview didFinishNavigation:(WKNavigation*)navigation
{
	self.onURLChanged();
	self.onPageLoaded();
}
@end
