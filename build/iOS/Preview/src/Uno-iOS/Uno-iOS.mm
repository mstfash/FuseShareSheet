#include <Uno/Uno.h>

#include <libkern/OSByteOrder.h>
#include <objc/runtime.h>

#include <Foundation/Foundation.h>
#include <CoreGraphics/CoreGraphics.h>
#include <UIKit/UIKit.h>

#include <Uno-iOS/AppDelegate.h>
#include <Uno-iOS/Uno-iOS.h>

#include <uObjC.UnoObject.h>

namespace uPlatform2 { namespace iOS {

    static const char UnoObjectAssociationKey = 0;

    void AssociateUnoObjectWeak(id nativeObject, uObject *unoObject)
    {
        id value = [[WeakUnoObject alloc] initWithUnoObject:unoObject];

        objc_setAssociatedObject(
            nativeObject, &UnoObjectAssociationKey, value,
            OBJC_ASSOCIATION_RETAIN);

        [value release];
    }

    uObject *GetAssociatedUnoObject(id nativeObject)
    {
        uObject *result = NULL;

        id<UnoObject> value = (id<UnoObject>)
            objc_getAssociatedObject(nativeObject, &UnoObjectAssociationKey);

        if (value)
            result = value.unoObject;

        return result;
    }

#if __BIG_ENDIAN__
    enum { NativeUTF16Encoding = NSUTF16BigEndianStringEncoding };
#else
    enum { NativeUTF16Encoding = NSUTF16LittleEndianStringEncoding };
#endif

    uString *ToUno(NSString *str)
    {
        if (!str)
            return NULL;

        NSUInteger bytes = [str
            lengthOfBytesUsingEncoding:NativeUTF16Encoding];

        uString *result = uString::New(int(bytes / sizeof(uChar)));

        NSUInteger usedBytes = 0;
        if ([str
                getBytes:result->_ptr
                maxLength:bytes
                usedLength:&usedBytes
                encoding:NativeUTF16Encoding
                options:0
                range:NSMakeRange(0, [str length])
                remainingRange:NULL])
        {
            if (usedBytes != bytes) {
                result->_length = int(usedBytes / sizeof(uChar));
                result->_ptr[result->_length] = 0;
            }
            return result;
        }

        return NULL;
    }

    NSString *FromUno(uString *str)
    {
        if (!str)
            return nil;

        return [[[NSString alloc]
                initWithBytes:str->Ptr()
                length:str->Length() * sizeof(uChar)
                encoding:NativeUTF16Encoding]
            autorelease];
    }

    CGFloat GetUIScreenDensity(id screen)
    {
        UIScreen *uiScreen = (UIScreen*)screen;
        return [uiScreen respondsToSelector:@selector(nativeScale)] ?
            [uiScreen nativeScale] :
            [uiScreen scale];
    }

    ::g::Uno::Int2 CGPointToUnoInt2(CGPoint point, float scale)
    {
        ::g::Uno::Int2 unoPoint;
        unoPoint.X = point.x * scale;
        unoPoint.Y = point.y * scale;
        return unoPoint;
    }

    CGPoint CGPointFromUnoInt2(::g::Uno::Int2 unoPoint, float scale)
    {
        CGPoint point;
        point.x = unoPoint.X / scale;
        point.y = unoPoint.Y / scale;
        return point;
    }

    ::g::Uno::Float2 CGPointToUnoFloat2(CGPoint point, float scale)
    {
        ::g::Uno::Float2 unoPoint;
        unoPoint.X = point.x * scale;
        unoPoint.Y = point.y * scale;
        return unoPoint;
    }

    CGPoint CGPointFromUnoFloat2(::g::Uno::Float2 unoPoint, float scale)
    {
        CGPoint point;
        point.x = unoPoint.X / scale;
        point.y = unoPoint.Y / scale;
        return point;
    }

    ::g::Uno::Rect CGRectToUnoRect(CGRect rect, float scale)
    {
        ::g::Uno::Float2 origin = CGPointToUnoFloat2(rect.origin, scale);
        ::g::Uno::Float2 size = CGSizeToUnoFloat2(rect.size, scale);
        return ::g::Uno::Rect__New2(origin, size);
    }

    CGRect CGRectFromUnoRect(::g::Uno::Rect unoRect, float scale)
    {
        CGRect rect;
        rect.origin.x = unoRect.Left / scale;
        rect.origin.y = unoRect.Top / scale;
        rect.size.width = (unoRect.Right - unoRect.Left) / scale;
        rect.size.height = (unoRect.Bottom - unoRect.Top) / scale;
        return rect;
    }

    ::g::Uno::Recti CGRectToUnoRecti(CGRect rect, float scale)
    {
        ::g::Uno::Int2 origin = CGPointToUnoInt2(rect.origin, scale);
        ::g::Uno::Int2 size = CGSizeToUnoInt2(rect.size, scale);
        return ::g::Uno::Recti__New2(origin, size);
    }

    CGRect CGRectFromUnoRecti(::g::Uno::Recti unoRect, float scale)
    {
        CGRect rect;
        rect.origin.x = unoRect.Left / scale;
        rect.origin.y = unoRect.Top / scale;
        rect.size.width = (unoRect.Right - unoRect.Left) / scale;
        rect.size.height = (unoRect.Bottom - unoRect.Top) / scale;
        return rect;
    }

    ::g::Uno::Int2 CGSizeToUnoInt2(CGSize size, float scale)
    {
        ::g::Uno::Int2 unoSize;
        unoSize.X = size.width * scale;
        unoSize.Y = size.height * scale;
        return unoSize;
    }

    CGSize CGSizeFromUnoInt2(::g::Uno::Int2 unoSize, float scale)
    {
        CGSize size;
        size.width = unoSize.X / scale;
        size.height = unoSize.Y / scale;
        return size;
    }

    ::g::Uno::Float2 CGSizeToUnoFloat2(CGSize size, float scale)
    {
        ::g::Uno::Float2 unoSize;
        unoSize.X = size.width * scale;
        unoSize.Y = size.height * scale;
        return unoSize;
    }

    CGSize CGSizeFromUnoFloat2(::g::Uno::Float2 unoSize, float scale)
    {
        CGSize size;
        size.width = unoSize.X / scale;
        size.height = unoSize.Y / scale;
        return size;
    }

    namespace {

        static uAppDelegate *_appDelegate()
        {
            return (uAppDelegate *) [UIApplication sharedApplication].delegate;
        }

        static bool _isDeviceOrientationLandscape()
        {
            return UIInterfaceOrientationIsLandscape(
                [UIApplication sharedApplication].statusBarOrientation);
        }

        static bool _isRootView(UIView *view)
        {
            return view == _appDelegate().view;
        }

    } // <anonymous> namespace

    CGSize Pre_iOS8_HandleDeviceOrientation(CGSize size, UIView *view)
    {
        if (NSFoundationVersionNumber <= NSFoundationVersionNumber_iOS_7_1
            && _isDeviceOrientationLandscape()
            && (!view || _isRootView(view)))
        {
            // Transpose dimensions
            return CGSizeMake(size.height, size.width);
        }

        return size;
    }

    CGRect Pre_iOS8_HandleDeviceOrientation(CGRect rect, UIView *view)
    {
        if (NSFoundationVersionNumber <= NSFoundationVersionNumber_iOS_7_1
            && _isDeviceOrientationLandscape()
            && (!view || _isRootView(view)))
        {
            // Transpose rect
            return CGRectMake(
                rect.origin.y, rect.origin.x,
                rect.size.height, rect.size.width);
        }

        return rect;
    }

    ::g::Uno::Int2 CGImageGetSize(CGImageRef image, ImageOrientation orientation)
    {
        int width = (int) CGImageGetWidth(image);
        int height = (int) CGImageGetHeight(image);

        if (int(orientation) & 0x2)
            return ::g::Uno::Int2__New2(height, width);

        return ::g::Uno::Int2__New2(width, height);
    }

    uArray* CGImageToRGBA8888(
        CGImageRef image, ImageOrientation orientation)
    {
        CGRect imageRect
            = CGRectMake(0, 0, CGImageGetWidth(image), CGImageGetHeight(image));

        int bitmapWidth = imageRect.size.width;
        int bitmapHeight = imageRect.size.height;

        if (int(orientation) & 0x2)
        {
            // Transpose for Left* and Right* orientations
            bitmapWidth = imageRect.size.height;
            bitmapHeight = imageRect.size.width;
        }

        uArray *bitmap = uArray::New(::g::Uno::Byte_typeof()->Array(), bitmapWidth * bitmapHeight * 4);

        CGColorSpaceRef colorSpace = CGColorSpaceCreateDeviceRGB();
        CGContextRef context = CGBitmapContextCreate(bitmap->Ptr(),
            bitmapWidth, bitmapHeight, 8, 4 * bitmapWidth, colorSpace,
            kCGImageAlphaPremultipliedLast | kCGBitmapByteOrder32Big);

        switch (orientation)
        {
            // Right side up
            case ImageOrientationUp:
                break;
            case ImageOrientationUpMirrored:
                CGContextTranslateCTM(context, imageRect.size.width, 0);
                CGContextScaleCTM(context, -1., 1.);
                break;

            // Upside down
            case ImageOrientationDown:
                CGContextRotateCTM(context, M_PI);
                CGContextTranslateCTM(
                    context, -imageRect.size.width, -imageRect.size.height);
                break;
            case ImageOrientationDownMirrored:
                CGContextRotateCTM(context, M_PI);
                CGContextTranslateCTM(context, 0, -imageRect.size.height);
                CGContextScaleCTM(context, -1., 1.);
                break;

            // Left
            case ImageOrientationLeft:
                CGContextRotateCTM(context, M_PI_2);
                CGContextTranslateCTM(context, 0, -imageRect.size.height);
                break;
            case ImageOrientationLeftMirrored:
                CGContextRotateCTM(context, M_PI_2);
                CGContextTranslateCTM(
                    context, imageRect.size.width, -imageRect.size.height);
                CGContextScaleCTM(context, -1., 1.);
                break;

            // Right
            case ImageOrientationRight:
                CGContextRotateCTM(context, -M_PI_2);
                CGContextTranslateCTM(context, -imageRect.size.width, 0);
                break;
            case ImageOrientationRightMirrored:
                CGContextRotateCTM(context, -M_PI_2);
                CGContextScaleCTM(context, -1., 1.);
                break;
        }

        CGContextDrawImage(context, imageRect, image);

        CGContextRelease(context);
        CGColorSpaceRelease(colorSpace);

        return bitmap;
    }

    ::g::Uno::Int2 UIImageGetSize(UIImage *image)
    {
        CGSize imageSize = image.size;

        int width = (int) imageSize.width;
        int height = (int) imageSize.height;

        return ::g::Uno::Int2__New2(width, height);
    }

    uArray* UIImageToRGBA8888(UIImage *_image)
    {
        CGImageRef image = [_image CGImage];
        if (image == NULL)
            return NULL;

        return CGImageToRGBA8888(
            image, ImageOrientation(_image.imageOrientation));
    }

}} // namespace uPlatform2::iOS
