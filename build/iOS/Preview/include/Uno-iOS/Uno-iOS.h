#pragma once

#include <Uno/Uno.h>

#include <Uno.Byte.h>
#include <Uno.Int2.h>
#include <Uno.Float2.h>
#include <Uno.Rect.h>
#include <Uno.Recti.h>

#include <objc/objc.h>
#include <CoreGraphics/CoreGraphics.h>

#if __OBJC__
#define U_FORWARD_DECLARE_OBJC_CLASS @class
#else
#define U_FORWARD_DECLARE_OBJC_CLASS struct
#endif

U_FORWARD_DECLARE_OBJC_CLASS NSString;
U_FORWARD_DECLARE_OBJC_CLASS UIImage;
U_FORWARD_DECLARE_OBJC_CLASS UIView;

namespace uPlatform2 { namespace iOS {

    void AssociateUnoObjectWeak(id nativeObject, uObject *unoObject);
    uObject *GetAssociatedUnoObject(id nativeObject);

    uString *ToUno(NSString *);
    NSString *FromUno(uString *);

    CGFloat GetUIScreenDensity(id screen);

    ::g::Uno::Int2 CGPointToUnoInt2(CGPoint point, float scale = 1.f);
    CGPoint CGPointFromUnoInt2(::g::Uno::Int2 point, float scale = 1.f);

    ::g::Uno::Float2 CGPointToUnoFloat2(CGPoint point, float scale = 1.f);
    CGPoint CGPointFromUnoFloat2(::g::Uno::Float2 point, float scale = 1.f);

    ::g::Uno::Rect CGRectToUnoRect(CGRect rect, float scale = 1.f);
    CGRect CGRectFromUnoRect(::g::Uno::Rect rect, float scale = 1.f);

    ::g::Uno::Recti CGRectToUnoRecti(CGRect rect, float scale = 1.f);
    CGRect CGRectFromUnoRecti(::g::Uno::Recti rect, float scale = 1.f);

    ::g::Uno::Int2 CGSizeToUnoInt2(CGSize size, float scale = 1.f);
    CGSize CGSizeFromUnoInt2(::g::Uno::Int2 size, float scale = 1.f);

    ::g::Uno::Float2 CGSizeToUnoFloat2(CGSize size, float scale = 1.f);
    CGSize CGSizeFromUnoFloat2(::g::Uno::Float2 size, float scale = 1.f);

    CGSize Pre_iOS8_HandleDeviceOrientation(CGSize size, UIView *view);
    CGRect Pre_iOS8_HandleDeviceOrientation(CGRect rect, UIView *view);

    // Clone UIImageOrientation to avoid an UIKit #include -- this is meant to
    // hide Objective C headers from Uno's C++.
    enum ImageOrientation
    {
        ImageOrientationUp,
        ImageOrientationDown,
        ImageOrientationLeft,
        ImageOrientationRight,

        ImageOrientationUpMirrored,
        ImageOrientationDownMirrored,
        ImageOrientationLeftMirrored,
        ImageOrientationRightMirrored
    };

    ::g::Uno::Int2 CGImageGetSize(
        CGImageRef image, ImageOrientation orientation = ImageOrientationUp);
    uArray* CGImageToRGBA8888(
        CGImageRef image, ImageOrientation orientation = ImageOrientationUp);

    ::g::Uno::Int2 UIImageGetSize(UIImage *image);
    uArray* UIImageToRGBA8888(UIImage *image);

}}
