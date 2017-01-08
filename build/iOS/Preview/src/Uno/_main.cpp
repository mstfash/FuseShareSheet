// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/backends/cplusplus/Uno/_main.cpp'.
// WARNING: Changes might be lost if you edit this file directly.

#include <uBase/Array.h>
#include <uBase/Memory.h>
#include <XliPlatform/GL.h>
#include <XliPlatform/GLContext.h>
#include <XliPlatform/Application.h>
#include <Uno/Support.h>
#include <Uno.Exception.h>
#include <Uno.Platform2.Application.h>
#include <Uno.Runtime.Implementation.Internal.Bootstrapper.h>
#include <Uno.Runtime.Implementation.Internal.BootstrapHints.h>
#include <Uno.Runtime.Implementation.PlatformWindowImpl.h>
#include <Uno.Application.h>
#include <Uno.String.h>

#ifdef DEBUG_DUMPS
#include <stdio.h> // needed for sprintf
#endif

/**
    \addtogroup Main
    @{
*/
Xli::Window* _XliWindowPtr;
Xli::GLContext* _XliGLContextPtr;
uSStrong<uArray*> _CommandLineArgs = 0;
static const uBase::Array<uBase::String>* _BaseArgs;

class uApplication : public Xli::Application
{
    uBase::Auto<Xli::GLContext> _gl;

public:
    virtual uBase::String GetInitTitle()
    {
        return "ShareSheet (preview)";
    }

    virtual void OnInit(Xli::Window* wnd)
    {
        _gl = Xli::GLContext::Create(wnd, Xli::GLContextAttributes::Default());

#ifdef U_GL_DESKTOP
        glEnable(GL_VERTEX_PROGRAM_POINT_SIZE);
#endif
        glClearColor(0, 0, 0, 0);
        glClear(GL_COLOR_BUFFER_BIT);

        _gl->SetSwapInterval(0);
        _gl->SwapBuffers();

        // Store global references to wnd and gl
        _XliWindowPtr = wnd;
        _XliGLContextPtr = _gl;
    }

    virtual void OnLoad(Xli::Window* wnd)
    {
        uAutoReleasePool pool;
        ::g::Uno::Platform2::Application::Start();
    }

    virtual void OnUpdate(Xli::Window* wnd)
    {
        uAutoReleasePool pool;
        ::g::Uno::Runtime::Implementation::Internal::Bootstrapper::OnUpdate();
    }

    virtual void OnDraw(Xli::Window* wnd)
    {
        {
            uAutoReleasePool pool;

            if (::g::Uno::Application::Current() && ::g::Uno::Application::Current()->NeedsRedraw())
            {
                ::g::Uno::Runtime::Implementation::Internal::Bootstrapper::OnDraw();
                _gl->SwapBuffers();
            }
        }

#ifdef DEBUG_DUMPS
        static int frame = 0;
        char path[32];
        sprintf(path, "draw%d.dot", frame++);
        uDumpAllStrongRefs(path);
#endif
    }

    virtual bool OnKeyDown(Xli::Window* wnd, Xli::Key key)
    {
        uAutoReleasePool pool;

        if (::g::Uno::Runtime::Implementation::Internal::Bootstrapper::OnKeyDown(wnd, key))
            return true;

#ifdef WIN32
        if (key == Xli::KeyF11)
        {
            wnd->SetFullscreen(!wnd->IsFullscreen());
            return true;
        }
#endif

        return false;
    }

    virtual bool OnKeyboardResized(Xli::Window* wnd)
    {
        uAutoReleasePool pool;
        return ::g::Uno::Runtime::Implementation::Internal::Bootstrapper::OnKeyboardResized(wnd);
    }

    virtual bool OnKeyUp(Xli::Window* wnd, Xli::Key key)
    {
        uAutoReleasePool pool;

        if (::g::Uno::Runtime::Implementation::Internal::Bootstrapper::OnKeyUp(wnd, key))
            return true;

        return false;
    }

    virtual bool OnTextInput(Xli::Window* wnd, const uBase::String& text)
    {
        uAutoReleasePool pool;

        if (::g::Uno::Runtime::Implementation::Internal::Bootstrapper::OnTextInput(wnd, uStringFromXliString(text)))
            return true;

        return false;
    }

    virtual bool OnMouseDown(Xli::Window* wnd, uBase::Vector2i pos, Xli::MouseButton button)
    {
        uAutoReleasePool pool;

        if (::g::Uno::Runtime::Implementation::Internal::Bootstrapper::OnMouseDown(wnd, pos.X, pos.Y, button))
            return true;

        return false;
    }

    virtual bool OnMouseUp(Xli::Window* wnd, uBase::Vector2i pos, Xli::MouseButton button)
    {
        uAutoReleasePool pool;

        if (::g::Uno::Runtime::Implementation::Internal::Bootstrapper::OnMouseUp(wnd, pos.X, pos.Y, button))
            return true;

        return false;
    }

    virtual bool OnMouseMove(Xli::Window* wnd, uBase::Vector2i pos)
    {
        uAutoReleasePool pool;

        if (::g::Uno::Runtime::Implementation::Internal::Bootstrapper::OnMouseMove(wnd, pos.X, pos.Y))
            return true;

        return false;
    }

    virtual bool OnMouseWheel(Xli::Window* wnd, uBase::Vector2i delta)
    {
        uAutoReleasePool pool;

        if (::g::Uno::Runtime::Implementation::Internal::Bootstrapper::OnMouseWheel(wnd, (float)delta.X, (float)delta.Y, 1))
            return true;

        return false;
    }

    virtual bool OnTouchDown(Xli::Window* wnd, uBase::Vector2 pos, int id)
    {
        uAutoReleasePool pool;

        if (::g::Uno::Runtime::Implementation::Internal::Bootstrapper::OnTouchDown(wnd, pos.X, pos.Y, id))
            return true;

        return false;
    }

    virtual bool OnTouchMove(Xli::Window* wnd, uBase::Vector2 pos, int id)
    {
        uAutoReleasePool pool;

        if (::g::Uno::Runtime::Implementation::Internal::Bootstrapper::OnTouchMove(wnd, pos.X, pos.Y, id))
            return true;

        return false;
    }

    virtual bool OnTouchUp(Xli::Window* wnd, uBase::Vector2 pos, int id)
    {
        uAutoReleasePool pool;

        if (::g::Uno::Runtime::Implementation::Internal::Bootstrapper::OnTouchUp(wnd, pos.X, pos.Y, id))
            return true;

        return false;
    }

    virtual void OnNativeHandleChanged(Xli::Window* wnd)
    {
        _gl->MakeCurrent(wnd);
    }

    virtual void OnSizeChanged(Xli::Window* wnd)
    {
        uAutoReleasePool pool;
        ::g::Uno::Runtime::Implementation::Internal::Bootstrapper::OnWindowSizeChanged(wnd);
        Application::OnSizeChanged(wnd);
    }

    virtual bool OnClosing(Xli::Window* wnd, bool& cancel)
    {
        uAutoReleasePool pool;

        // TODO
        return false;
    }

    virtual void OnClosed(Xli::Window* wnd)
    {
        uAutoReleasePool pool;
        ::g::Uno::Runtime::Implementation::Internal::Bootstrapper::OnWindowClosed(wnd);
    }

    virtual void OnAppLowMemory(Xli::Window* wnd)
    {
        uAutoReleasePool pool;
        ::g::Uno::Platform2::Application::OnReceivedLowMemoryWarning();
    }

    virtual void OnAppTerminating(Xli::Window* wnd)
    {
        uAutoReleasePool pool;
        ::g::Uno::Platform2::Application::Terminate();
    }

    virtual void OnAppDidEnterForeground(Xli::Window* wnd)
    {
        uAutoReleasePool pool;
        ::g::Uno::Platform2::Application::EnterInteractive();
    }

    virtual void OnAppDidEnterBackground(Xli::Window* wnd)
    {
        uAutoReleasePool pool;
        ::g::Uno::Platform2::Application::EnterBackground();
    }
};

int Main(const uBase::Array<uBase::String>& args)
{
    _BaseArgs = &args;
    uRuntime uno;
    uAutoReleasePool pool;

    try
    {
        uApplication app;
        Xli::Application::Run(&app);
    }
    catch (const uThrowable& t)
    {
        uBase::String str = "(null)";

        if (t.Exception)
            str = uStringToXliString(t.Exception->ToString());

        uBase::Exception x(str);
        x._func = t.Function;
        x._line = t.Line;
        throw x;
    }

    return 0;
}

namespace g{namespace Experimental{namespace Http{namespace Internal{uClassType* DateUtil_typeof();}}}}
namespace g{namespace Experimental{namespace Http{struct Loader_type; ::g::Experimental::Http::Loader_type* BinaryLoader_typeof();}}}
namespace g{namespace Experimental{namespace Http{struct Loader_type; ::g::Experimental::Http::Loader_type* TextLoader_typeof();}}}
namespace g{namespace Experimental{namespace Http{struct Loader_type; Loader_type* Loader_typeof();}}}
namespace g{namespace Experimental{namespace Http{uClassType* HttpLoader_typeof();}}}
namespace g{namespace Experimental{namespace Http{uClassType* LoaderConst_typeof();}}}
namespace g{namespace Experimental{namespace Http{uType* HttpResponseHeader_typeof();}}}
namespace g{namespace Experimental{namespace TextureLoader{uClassType* TextureLoader_typeof();}}}
namespace g{namespace Experimental{namespace TextureLoader{uClassType* TextureLoaderImpl_typeof();}}}
namespace g{namespace Experimental{namespace TextureLoader{uType* Callback_typeof();}}}
namespace g{namespace Fuse{namespace Android{namespace Controls{namespace WebViewUtils{uClassType* WebViewForeign_typeof();}}}}}
namespace g{namespace Fuse{namespace Android{uClassType* Helpers_typeof();}}}
namespace g{namespace Fuse{namespace Android{uType* Blitter_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Animator_type; ::g::Fuse::Animations::Animator_type* Change_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Animator_type; ::g::Fuse::Animations::Animator_type* Cycle_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Animator_type; ::g::Fuse::Animations::Animator_type* Nothing_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Animator_type; ::g::Fuse::Animations::Animator_type* OpenAnimator_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Animator_type; ::g::Fuse::Animations::Animator_type* Resize_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Animator_type; ::g::Fuse::Animations::Animator_type* Spin_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Animator_type; ::g::Fuse::Animations::Animator_type* TrackAnimator_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Animator_type; Animator_type* Animator_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct AnimatorState_type; AnimatorState_type* AnimatorState_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Attractor_type; Attractor_type* Attractor_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Converter_type; ::g::Fuse::Animations::Converter_type* ConverterDouble_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Converter_type; ::g::Fuse::Animations::Converter_type* ConverterFloat_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Converter_type; ::g::Fuse::Animations::Converter_type* ConverterFloat2_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Converter_type; ::g::Fuse::Animations::Converter_type* ConverterFloat3_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Converter_type; ::g::Fuse::Animations::Converter_type* ConverterFloat4_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Converter_type; ::g::Fuse::Animations::Converter_type* ConverterSize_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Converter_type; ::g::Fuse::Animations::Converter_type* ConverterSize2_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Converter_type; Converter_type* Converter_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct DiscreteKeyframeTrack_type; DiscreteKeyframeTrack_type* DiscreteKeyframeTrack_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct DiscreteSingleTrack_type; DiscreteSingleTrack_type* DiscreteSingleTrack_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Easing_type; ::g::Fuse::Animations::Easing_type* CubicBezierEasing_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Easing_type; ::g::Fuse::Animations::Easing_type* Easing__BackInImpl_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Easing_type; ::g::Fuse::Animations::Easing_type* Easing__BackInOutImpl_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Easing_type; ::g::Fuse::Animations::Easing_type* Easing__BackOutImpl_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Easing_type; ::g::Fuse::Animations::Easing_type* Easing__BounceInImpl_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Easing_type; ::g::Fuse::Animations::Easing_type* Easing__BounceInOutImpl_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Easing_type; ::g::Fuse::Animations::Easing_type* Easing__BounceOutImpl_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Easing_type; ::g::Fuse::Animations::Easing_type* Easing__CircularInImpl_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Easing_type; ::g::Fuse::Animations::Easing_type* Easing__CircularInOutImpl_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Easing_type; ::g::Fuse::Animations::Easing_type* Easing__CircularOutImpl_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Easing_type; ::g::Fuse::Animations::Easing_type* Easing__CubicInImpl_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Easing_type; ::g::Fuse::Animations::Easing_type* Easing__CubicInOutImpl_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Easing_type; ::g::Fuse::Animations::Easing_type* Easing__CubicOutImpl_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Easing_type; ::g::Fuse::Animations::Easing_type* Easing__ElasticInImpl_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Easing_type; ::g::Fuse::Animations::Easing_type* Easing__ElasticInOutImpl_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Easing_type; ::g::Fuse::Animations::Easing_type* Easing__ElasticOutImpl_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Easing_type; ::g::Fuse::Animations::Easing_type* Easing__ExponentialInImpl_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Easing_type; ::g::Fuse::Animations::Easing_type* Easing__ExponentialInOutImpl_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Easing_type; ::g::Fuse::Animations::Easing_type* Easing__ExponentialOutImpl_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Easing_type; ::g::Fuse::Animations::Easing_type* Easing__LinearImpl_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Easing_type; ::g::Fuse::Animations::Easing_type* Easing__QuadraticInImpl_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Easing_type; ::g::Fuse::Animations::Easing_type* Easing__QuadraticInOutImpl_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Easing_type; ::g::Fuse::Animations::Easing_type* Easing__QuadraticOutImpl_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Easing_type; ::g::Fuse::Animations::Easing_type* Easing__QuarticInImpl_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Easing_type; ::g::Fuse::Animations::Easing_type* Easing__QuarticInOutImpl_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Easing_type; ::g::Fuse::Animations::Easing_type* Easing__QuarticOutImpl_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Easing_type; ::g::Fuse::Animations::Easing_type* Easing__QuinticInImpl_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Easing_type; ::g::Fuse::Animations::Easing_type* Easing__QuinticInOutImpl_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Easing_type; ::g::Fuse::Animations::Easing_type* Easing__QuinticOutImpl_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Easing_type; ::g::Fuse::Animations::Easing_type* Easing__SinusoidalInImpl_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Easing_type; ::g::Fuse::Animations::Easing_type* Easing__SinusoidalInOutImpl_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Easing_type; ::g::Fuse::Animations::Easing_type* Easing__SinusoidalOutImpl_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Easing_type; Easing_type* Easing_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct EasingTrack_type; EasingTrack_type* EasingTrack_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct MasterBase_type; ::g::Fuse::Animations::MasterBase_type* AverageMasterTransform_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct MasterBase_type; ::g::Fuse::Animations::MasterBase_type* DiscreteMasterTransform_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct MasterBase_type; ::g::Fuse::Animations::MasterBase_type* MasterTransform_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct MasterBase_type; MasterBase_type* MasterBase_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct MasterProperty_type; ::g::Fuse::Animations::MasterProperty_type* AverageMasterProperty_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct MasterProperty_type; ::g::Fuse::Animations::MasterProperty_type* DiscreteMasterProperty_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct MasterProperty_type; MasterProperty_type* MasterProperty_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct MixerBase_type; ::g::Fuse::Animations::MixerBase_type* AverageMixer_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct MixerBase_type; ::g::Fuse::Animations::MixerBase_type* DiscreteMixer_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct MixerBase_type; MixerBase_type* MixerBase_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct MixerHandle_type; MixerHandle_type* MixerHandle_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct OpenAnimatorState_type; ::g::Fuse::Animations::OpenAnimatorState_type* CycleState_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct OpenAnimatorState_type; ::g::Fuse::Animations::OpenAnimatorState_type* SpinState_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct OpenAnimatorState_type; OpenAnimatorState_type* OpenAnimatorState_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct Player_type; Player_type* Player_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct RangeAdapter_type; RangeAdapter_type* RangeAdapter_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct SplineTrack_type; SplineTrack_type* SplineTrack_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct TrackAnimatorState_type; ::g::Fuse::Animations::TrackAnimatorState_type* ContinuousTrackChangeState_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct TrackAnimatorState_type; ::g::Fuse::Animations::TrackAnimatorState_type* DiscreteTrackChangeState_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct TrackAnimatorState_type; ::g::Fuse::Animations::TrackAnimatorState_type* NothingAnimatorState_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct TrackAnimatorState_type; ::g::Fuse::Animations::TrackAnimatorState_type* ResizeAnimatorState_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct TrackAnimatorState_type; ::g::Fuse::Animations::TrackAnimatorState_type* TransformAnimatorState_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct TrackAnimatorState_type; TrackAnimatorState_type* TrackAnimatorState_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct TransformAnimator_type; ::g::Fuse::Animations::TransformAnimator_type* Move_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct TransformAnimator_type; ::g::Fuse::Animations::TransformAnimator_type* Rotate_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct TransformAnimator_type; ::g::Fuse::Animations::TransformAnimator_type* Scale_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct TransformAnimator_type; ::g::Fuse::Animations::TransformAnimator_type* Skew_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct TransformAnimator_type; TransformAnimator_type* TransformAnimator_typeof();}}}
namespace g{namespace Fuse{namespace Animations{struct TriggerAnimationState_type; TriggerAnimationState_type* TriggerAnimationState_typeof();}}}
namespace g{namespace Fuse{namespace Animations{uClassType* EasingFunctions_typeof();}}}
namespace g{namespace Fuse{namespace Animations{uClassType* RangeAdapterHelpers_typeof();}}}
namespace g{namespace Fuse{namespace Animations{uStructType* MasterBase__GFWResult_typeof();}}}
namespace g{namespace Fuse{namespace Animations{uType* CreateStateParams_typeof();}}}
namespace g{namespace Fuse{namespace Animations{uType* Keyframe_typeof();}}}
namespace g{namespace Fuse{namespace Animations{uType* Mixer_typeof();}}}
namespace g{namespace Fuse{namespace Animations{uType* PlayerPart_typeof();}}}
namespace g{namespace Fuse{namespace Animations{uType* TriggerAnimation_typeof();}}}
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextEdit{struct LineCachePasswordTransform_type; LineCachePasswordTransform_type* LineCachePasswordTransform_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextEdit{uType* DegreeSpan_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextEdit{uType* LineCache_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextEdit{uType* LineCacheLine_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextEdit{uType* SwipeGestureHelper_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextEdit{uType* TextPosition_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextEdit{uType* TextSpan_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextRenderer{struct TextRenderer_type; TextRenderer_type* TextRenderer_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextRenderer{uClassType* RectExtensions_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextRenderer{uClassType* WordWrapper_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextRenderer{uType* DefaultTextRenderer__FontKey_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextRenderer{uType* DefaultTextRenderer_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextRenderer{uType* WordWrapInfo_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextRenderer{uType* WordWrapperWord_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextRenderer{uType* WrappedLine_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace FuseTextRenderer{struct CacheState_type; ::g::Fuse::Controls::FuseTextRenderer::CacheState_type* EverythingCached_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace FuseTextRenderer{struct CacheState_type; ::g::Fuse::Controls::FuseTextRenderer::CacheState_type* LogicalRunsCached_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace FuseTextRenderer{struct CacheState_type; ::g::Fuse::Controls::FuseTextRenderer::CacheState_type* MeasurementsCached_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace FuseTextRenderer{struct CacheState_type; ::g::Fuse::Controls::FuseTextRenderer::CacheState_type* NothingCached_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace FuseTextRenderer{struct CacheState_type; ::g::Fuse::Controls::FuseTextRenderer::CacheState_type* RendererCached_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace FuseTextRenderer{struct CacheState_type; CacheState_type* CacheState_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace FuseTextRenderer{struct TextRenderer_type; TextRenderer_type* TextRenderer_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace FuseTextRenderer{uClassType* Helpers_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace FuseTextRenderer{uStructType* TextControlData_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace FuseTextRenderer{uStructType* Tolerances_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace FuseTextRenderer{uType* AsyncMeasurer_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace Graphics{struct ControlVisual_type; ControlVisual_type* ControlVisual_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct Slider_type; Slider_type* Slider_typeof();}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct Switch_type; Switch_type* Switch_typeof();}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{uClassType* Helpers_typeof();}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{uType* Button_typeof();}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct Button_type; Button_type* Button_typeof();}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct Circle_type; Circle_type* Circle_typeof();}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct DrawableViewGroup_type; DrawableViewGroup_type* DrawableViewGroup_typeof();}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct GraphicsView_type; GraphicsView_type* GraphicsView_typeof();}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct ImageView_type; ImageView_type* ImageView_typeof();}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct LeafView_type; LeafView_type* LeafView_typeof();}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct MultiLineTextEdit_type; MultiLineTextEdit_type* MultiLineTextEdit_typeof();}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct NativeViewRenderer_type; NativeViewRenderer_type* NativeViewRenderer_typeof();}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct Rectangle_type; Rectangle_type* Rectangle_typeof();}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct ScrollView_type; ScrollView_type* ScrollView_typeof();}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct Shape_type; ::g::Fuse::Controls::Native::iOS::Shape_type* Ellipse_typeof();}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct Shape_type; Shape_type* Shape_typeof();}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct SingleLineTextEdit_type; SingleLineTextEdit_type* SingleLineTextEdit_typeof();}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct Slider_type; Slider_type* Slider_typeof();}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct Switch_type; Switch_type* Switch_typeof();}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct TextView_type; TextView_type* TextView_typeof();}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct UIControlEvent_type; UIControlEvent_type* UIControlEvent_typeof();}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct View_type; View_type* View_typeof();}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct ViewGroup_type; ViewGroup_type* ViewGroup_typeof();}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct ViewParent_type; ViewParent_type* ViewParent_typeof();}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{uClassType* FocusHelpers_typeof();}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{uClassType* FontCache_typeof();}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{uClassType* InputDispatch_typeof();}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{uClassType* iOSDevice_typeof();}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{uClassType* NativeFocus_typeof();}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{uClassType* TextEditSpeedHack_typeof();}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{uType* FocusHelpers__PerformBecomeFirstResponder_typeof();}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{uType* iOSBlitter_typeof();}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{uType* KeyboardView_typeof();}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{uType* NSAttributedStringBuilder_typeof();}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{uType* OSVersion_typeof();}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{uType* UIEvent_typeof();}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{uType* UITouch_typeof();}}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{struct ImageHandle_type; ImageHandle_type* ImageHandle_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace Native{uClassType* ImageLoader_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace VideoImpl{namespace iOS{struct VideoPlayer_type; VideoPlayer_type* VideoPlayer_typeof();}}}}}
namespace g{namespace Fuse{namespace Controls{namespace VideoImpl{namespace iOS{uClassType* VideoPlayerImpl_typeof();}}}}}
namespace g{namespace Fuse{namespace Controls{namespace VideoImpl{namespace iOS{uType* VideoLoader_typeof();}}}}}
namespace g{namespace Fuse{namespace Controls{namespace VideoImpl{struct EmptyVideo_type; EmptyVideo_type* EmptyVideo_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace VideoImpl{struct GraphicsVideoService_type; GraphicsVideoService_type* GraphicsVideoService_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace VideoImpl{struct LoadingClosure_type; LoadingClosure_type* LoadingClosure_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace VideoImpl{struct VideoVisual_type; VideoVisual_type* VideoVisual_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace VideoImpl{uClassType* VideoDiskCache_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace VideoImpl{uClassType* VideoLoader_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace VideoImpl{uType* Scale9Rectangle_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{namespace VideoImpl{uType* VideoDrawElement_typeof();}}}}
namespace g{namespace Fuse{namespace Controls{struct ContentControl_type; ::g::Fuse::Controls::ContentControl_type* Placeholder_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct ContentControl_type; ::g::Fuse::Controls::ContentControl_type* Viewbox_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct ContentControl_type; ContentControl_type* ContentControl_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Control_type; ::g::Fuse::Controls::Control_type* BackButton_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Control_type; ::g::Fuse::Controls::Control_type* BottomBarBackground_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Control_type; ::g::Fuse::Controls::Control_type* BottomFrameBackground_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Control_type; ::g::Fuse::Controls::Control_type* Button_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Control_type; ::g::Fuse::Controls::Control_type* ButtonBase_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Control_type; ::g::Fuse::Controls::Control_type* ClientPanel_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Control_type; ::g::Fuse::Controls::Control_type* Container_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Control_type; ::g::Fuse::Controls::Control_type* DockPanel_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Control_type; ::g::Fuse::Controls::Control_type* EdgeNavigator_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Control_type; ::g::Fuse::Controls::Control_type* Grid_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Control_type; ::g::Fuse::Controls::Control_type* LayoutControl_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Control_type; ::g::Fuse::Controls::Control_type* MultiLayoutPanel_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Control_type; ::g::Fuse::Controls::Control_type* NavigationBar_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Control_type; ::g::Fuse::Controls::Control_type* Page_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Control_type; ::g::Fuse::Controls::Control_type* PageIndicator_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Control_type; ::g::Fuse::Controls::Control_type* PageIndicatorDot_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Control_type; ::g::Fuse::Controls::Control_type* Panel_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Control_type; ::g::Fuse::Controls::Control_type* RightFrameBackground_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Control_type; ::g::Fuse::Controls::Control_type* StackPanel_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Control_type; ::g::Fuse::Controls::Control_type* StatusBarBackground_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Control_type; ::g::Fuse::Controls::Control_type* TopFrameBackground_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Control_type; ::g::Fuse::Controls::Control_type* WrapPanel_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Control_type; Control_type* Control_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Control_type;}} ::g::Fuse::Controls::Control_type* PageWithTitle_typeof();}
namespace g{namespace Fuse{namespace Controls{struct Control_type;}} namespace Outracks{namespace Simulator{::g::Fuse::Controls::Control_type* DeveloperMenu_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Control_type;}} namespace Outracks{namespace Simulator{::g::Fuse::Controls::Control_type* ErrorToast_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Control_type;}} namespace Outracks{namespace Simulator{::g::Fuse::Controls::Control_type* FakeApp_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Control_type;}} namespace Outracks{namespace Simulator{::g::Fuse::Controls::Control_type* Flasher_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct FallbackWebViewClient_type; FallbackWebViewClient_type* FallbackWebViewClient_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct ForwardProperties_type; ForwardProperties_type* ForwardProperties_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct GraphicsView_type; GraphicsView_type* GraphicsView_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Image_type; Image_type* Image_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct JavaScriptCall_type; JavaScriptCall_type* JavaScriptCall_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct LoadHtmlCall_type; LoadHtmlCall_type* LoadHtmlCall_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct MobileTextEdit_type; MobileTextEdit_type* MobileTextEdit_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct NativeViewHost__Disable_type; NativeViewHost__Disable_type* NativeViewHost__Disable_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct NativeViewHost__DummyRenderer_type; NativeViewHost__DummyRenderer_type* NativeViewHost__DummyRenderer_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct NativeViewHost__Enable_type; NativeViewHost__Enable_type* NativeViewHost__Enable_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct NativeViewHost_type; ::g::Fuse::Controls::NativeViewHost_type* NativeTextEditHost_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct NativeViewHost_type; NativeViewHost_type* NativeViewHost_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct NavigationControl_type; NavigationControl_type* NavigationControl_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Navigator_type; ::g::Fuse::Controls::Navigator_type* PageView_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Navigator_type; Navigator_type* Navigator_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Number_type; Number_type* Number_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct PageControl_type; PageControl_type* PageControl_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct PathShape_type; ::g::Fuse::Controls::PathShape_type* Ellipse_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct PathShape_type; ::g::Fuse::Controls::PathShape_type* Path_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct PathShape_type; ::g::Fuse::Controls::PathShape_type* RegularPolygon_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct PathShape_type; ::g::Fuse::Controls::PathShape_type* Star_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct PathShape_type; PathShape_type* PathShape_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct RangeControl_type; ::g::Fuse::Controls::RangeControl_type* Slider_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct RangeControl_type; RangeControl_type* RangeControl_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct RangeControl2D_type; RangeControl2D_type* RangeControl2D_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct ScrollPositionChangedArgs_type; ScrollPositionChangedArgs_type* ScrollPositionChangedArgs_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct ScrollViewBase_type; ::g::Fuse::Controls::ScrollViewBase_type* ScrollView_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct ScrollViewBase_type; ScrollViewBase_type* ScrollViewBase_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Shape_type; ::g::Fuse::Controls::Shape_type* Circle_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Shape_type; ::g::Fuse::Controls::Shape_type* Rectangle_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Shape_type; Shape_type* Shape_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct TextControl_type; ::g::Fuse::Controls::TextControl_type* Text_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct TextControl_type; ::g::Fuse::Controls::TextControl_type* TextBlock_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct TextControl_type; TextControl_type* TextControl_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct TextEdit_type; TextEdit_type* TextEdit_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct TextInput_type; ::g::Fuse::Controls::TextInput_type* TextBox_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct TextInput_type; TextInput_type* TextInput_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct TextInputControl_type; ::g::Fuse::Controls::TextInputControl_type* TextView_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct TextInputControl_type; TextInputControl_type* TextInputControl_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct ToggleControl_type; ::g::Fuse::Controls::ToggleControl_type* Switch_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct ToggleControl_type; ToggleControl_type* ToggleControl_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct Video_type; Video_type* Video_typeof();}}}
namespace g{namespace Fuse{namespace Controls{struct WebView_type; WebView_type* WebView_typeof();}}}
namespace g{namespace Fuse{namespace Controls{uClassType* KeyframeAccessors_typeof();}}}
namespace g{namespace Fuse{namespace Controls{uType* EdgeNavigator__PageData_typeof();}}}
namespace g{namespace Fuse{namespace Controls{uType* FileVideoSource_typeof();}}}
namespace g{namespace Fuse{namespace Controls{uType* HTML_typeof();}}}
namespace g{namespace Fuse{namespace Controls{uType* ImageElementDraw_typeof();}}}
namespace g{namespace Fuse{namespace Controls{uType* NavigationControl__PageData_typeof();}}}
namespace g{namespace Fuse{namespace Controls{uType* Navigator__NavPage_typeof();}}}
namespace g{namespace Fuse{namespace Controls{uType* Shape__Watcher_typeof();}}}
namespace g{namespace Fuse{namespace Controls{uType* UrlVideoSource_typeof();}}}
namespace g{namespace Fuse{namespace Controls{uType* VideoSource_typeof();}}}
namespace g{namespace Fuse{namespace Designer{uType* AdvancedAttribute_typeof();}}}
namespace g{namespace Fuse{namespace Designer{uType* ChildExtensionAttribute_typeof();}}}
namespace g{namespace Fuse{namespace Designer{uType* ColorAttribute_typeof();}}}
namespace g{namespace Fuse{namespace Designer{uType* ComponentOfAttribute_typeof();}}}
namespace g{namespace Fuse{namespace Designer{uType* DefaultComponentAttribute_typeof();}}}
namespace g{namespace Fuse{namespace Designer{uType* DefaultInstanceAttribute_typeof();}}}
namespace g{namespace Fuse{namespace Designer{uType* DesignerNameAttribute_typeof();}}}
namespace g{namespace Fuse{namespace Designer{uType* DragDropPriorityAttribute_typeof();}}}
namespace g{namespace Fuse{namespace Designer{uType* ExtensionAttribute_typeof();}}}
namespace g{namespace Fuse{namespace Designer{uType* GroupAttribute_typeof();}}}
namespace g{namespace Fuse{namespace Designer{uType* HideAttribute_typeof();}}}
namespace g{namespace Fuse{namespace Designer{uType* HidesAttribute_typeof();}}}
namespace g{namespace Fuse{namespace Designer{uType* IconAttribute_typeof();}}}
namespace g{namespace Fuse{namespace Designer{uType* InlineAttribute_typeof();}}}
namespace g{namespace Fuse{namespace Designer{uType* IntervalAttribute_typeof();}}}
namespace g{namespace Fuse{namespace Designer{uType* OptionalHideAttribute_typeof();}}}
namespace g{namespace Fuse{namespace Designer{uType* PriorityAttribute_typeof();}}}
namespace g{namespace Fuse{namespace Designer{uType* RangeAttribute_typeof();}}}
namespace g{namespace Fuse{namespace Designer{uType* RecursionSafeAttribute_typeof();}}}
namespace g{namespace Fuse{namespace Designer{uType* RequiredComponentAttribute_typeof();}}}
namespace g{namespace Fuse{namespace Designer{uType* SpawnableAttribute_typeof();}}}
namespace g{namespace Fuse{namespace Designer{uType* SpawnsAttribute_typeof();}}}
namespace g{namespace Fuse{namespace Designer{uType* ThicknessAttribute_typeof();}}}
namespace g{namespace Fuse{namespace Designer{uType* TransitionAttribute_typeof();}}}
namespace g{namespace Fuse{namespace Desktop{struct DesktopRootViewport_type; DesktopRootViewport_type* DesktopRootViewport_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{namespace Batching{uClassType* BatchHelpers_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Batching{uType* Batch_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Batching{uType* BatchIndexBuffer_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Batching{uType* BatchVertexBuffer_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Batching{uType* Entry_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Batching{uType* MeshBatcher_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Internal{uType* Float2Buffer_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Internal{uType* Float3Buffer_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Internal{uType* FloatBuffer_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Internal{uType* MultiBuffer__Field_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Internal{uType* MultiBuffer__Setter_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Internal{uType* MultiBuffer_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Internal{uType* TypedBuffer_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Internal{uType* UShortBuffer_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Meshes{uClassType* MeshGenerator_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Meshes{uClassType* MeshTools_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{uType* Circle_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{uType* ConcaveWedgeCoverage_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{uType* ConvexWedgeCoverage_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{uType* Coverage_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{uType* Falloff_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{uType* FillCoverage_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{uType* LimitCoverage_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{uType* OneLimitCoverage_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{uType* Rectangle_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{uType* ShadowFalloff_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{uType* StrokeCoverage_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{uType* Wedge_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{uType* WedgeCoverage_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{namespace Collections{struct Dict_type; ::g::Fuse::Drawing::Tesselation::Collections::Dict_type* ActiveRegionDict_typeof();}}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{namespace Collections{struct Dict_type; Dict_type* Dict_typeof();}}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{namespace Collections{struct LinkedListEnumerable_type; ::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_type* DictNodeEnumerable_typeof();}}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{namespace Collections{struct LinkedListEnumerable_type; LinkedListEnumerable_type* LinkedListEnumerable_typeof();}}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{namespace Collections{struct LinkedListEnumerable_type;}}}} namespace Fuse{namespace Drawing{namespace Tesselation{::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_type* EdgeLoopEnumerable_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{namespace Collections{struct LinkedListEnumerable_type;}}}} namespace Fuse{namespace Drawing{namespace Tesselation{::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_type* EdgesEnumerable_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{namespace Collections{struct LinkedListEnumerable_type;}}}} namespace Fuse{namespace Drawing{namespace Tesselation{::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_type* FacesEnumerable_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{namespace Collections{struct LinkedListEnumerable_type;}}}} namespace Fuse{namespace Drawing{namespace Tesselation{::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_type* OriginEnumerable_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{namespace Collections{struct LinkedListEnumerable_type;}}}} namespace Fuse{namespace Drawing{namespace Tesselation{::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_type* VerticesEnumerable_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{namespace Collections{struct LinkedListEnumerator_type; LinkedListEnumerator_type* LinkedListEnumerator_typeof();}}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{namespace Collections{struct PriorityQueue_type; ::g::Fuse::Drawing::Tesselation::Collections::PriorityQueue_type* VertexQueue_typeof();}}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{namespace Collections{struct PriorityQueue_type; PriorityQueue_type* PriorityQueue_typeof();}}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{namespace Collections{uType* DictNode_typeof();}}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{uClassType* Geom_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{uType* ActiveRegion_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{uType* Face_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{uType* HalfEdge_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{uType* Mesh_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{uType* MeshBuilder_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{uType* Sweep_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{uType* Vertex_typeof();}}}}
namespace g{namespace Fuse{namespace Drawing{struct Brush__Converter_type; Brush__Converter_type* Brush__Converter_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct Brush_type; ::g::Fuse::Drawing::Brush_type* DynamicBrush_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct Brush_type; ::g::Fuse::Drawing::Brush_type* StaticBrush_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct Brush_type; Brush_type* Brush_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct ContourEnumerable_type; ContourEnumerable_type* ContourEnumerable_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct ContourEnumerator_type; ContourEnumerator_type* ContourEnumerator_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct ImageFill_type; ImageFill_type* ImageFill_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct LinearGradient_type; LinearGradient_type* LinearGradient_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct LineCapImpl_type; ::g::Fuse::Drawing::LineCapImpl_type* ButtCap_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct LineCapImpl_type; ::g::Fuse::Drawing::LineCapImpl_type* RoundCap_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct LineCapImpl_type; LineCapImpl_type* LineCapImpl_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct LineJoinImpl_type; ::g::Fuse::Drawing::LineJoinImpl_type* MiterJoin_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct LineJoinImpl_type; LineJoinImpl_type* LineJoinImpl_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct NonConsecutiveEnumerable_type; NonConsecutiveEnumerable_type* NonConsecutiveEnumerable_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct NonConsecutiveEnumerator_type; NonConsecutiveEnumerator_type* NonConsecutiveEnumerator_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct PathGeometry_type; ::g::Fuse::Drawing::PathGeometry_type* ClosePath_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct PathGeometry_type; ::g::Fuse::Drawing::PathGeometry_type* ContourTerminator_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct PathGeometry_type; ::g::Fuse::Drawing::PathGeometry_type* CurveTo_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct PathGeometry_type; ::g::Fuse::Drawing::PathGeometry_type* HorizontalLineTo_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct PathGeometry_type; ::g::Fuse::Drawing::PathGeometry_type* LineTo_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct PathGeometry_type; ::g::Fuse::Drawing::PathGeometry_type* MoveTo_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct PathGeometry_type; ::g::Fuse::Drawing::PathGeometry_type* SmoothCurveTo_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct PathGeometry_type; ::g::Fuse::Drawing::PathGeometry_type* VerticalLineTo_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct PathGeometry_type; PathGeometry_type* PathGeometry_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct PathGeometryRenderer_type; PathGeometryRenderer_type* PathGeometryRenderer_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct PolygonFiller_type; PolygonFiller_type* PolygonFiller_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct SolidColor_type; SolidColor_type* SolidColor_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct StaticSolidColor_type; StaticSolidColor_type* StaticSolidColor_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{struct Stroke_type; Stroke_type* Stroke_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{uClassType* BezierOp_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{uClassType* BlendModeHelpers_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{uClassType* Brushes_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{uClassType* Colors_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{uClassType* EllipseFactory_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{uClassType* NonConsecutiveExtension_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{uClassType* PathGeometryExtensions_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{uClassType* RectangleFactory_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{uClassType* RegularPolygonFactory_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{uClassType* StarFactory_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{uClassType* WindingRules_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{uStructType* ImageFill__DrawParams_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{uType* Border_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{uType* Cache_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{uType* Contour_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{uType* GradientStop_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{uType* LinearGradientDrawable_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{uType* PathGeometryParser_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{uType* Polygon_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{uType* PolygonDrawable_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{uType* RendererContext_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{uType* RepeatBaker_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{uType* Token_typeof();}}}
namespace g{namespace Fuse{namespace Drawing{uType* Util_typeof();}}}
namespace g{namespace Fuse{namespace Effects{struct BasicEffect_type; ::g::Fuse::Effects::BasicEffect_type* Blur_typeof();}}}
namespace g{namespace Fuse{namespace Effects{struct BasicEffect_type; ::g::Fuse::Effects::BasicEffect_type* Desaturate_typeof();}}}
namespace g{namespace Fuse{namespace Effects{struct BasicEffect_type; ::g::Fuse::Effects::BasicEffect_type* DropShadow_typeof();}}}
namespace g{namespace Fuse{namespace Effects{struct BasicEffect_type; ::g::Fuse::Effects::BasicEffect_type* Halftone_typeof();}}}
namespace g{namespace Fuse{namespace Effects{struct BasicEffect_type; BasicEffect_type* BasicEffect_typeof();}}}
namespace g{namespace Fuse{namespace Effects{struct Effect_type; Effect_type* Effect_typeof();}}}
namespace g{namespace Fuse{namespace Effects{struct Mask_type; Mask_type* Mask_typeof();}}}
namespace g{namespace Fuse{namespace Effects{uType* DropShadow__Blitter_typeof();}}}
namespace g{namespace Fuse{namespace Effects{uType* EffectHelpers_typeof();}}}
namespace g{namespace Fuse{namespace Elements{namespace Internal{uType* ElementDraw_typeof();}}}}
namespace g{namespace Fuse{namespace Elements{namespace Internal{uType* Scale9Rectangle_typeof();}}}}
namespace g{namespace Fuse{namespace Elements{namespace UX{struct LayoutFunction_type; ::g::Fuse::Elements::UX::LayoutFunction_type* HeightFunction_typeof();}}}}
namespace g{namespace Fuse{namespace Elements{namespace UX{struct LayoutFunction_type; ::g::Fuse::Elements::UX::LayoutFunction_type* WidthFunction_typeof();}}}}
namespace g{namespace Fuse{namespace Elements{namespace UX{struct LayoutFunction_type; LayoutFunction_type* LayoutFunction_typeof();}}}}
namespace g{namespace Fuse{namespace Elements{struct BoxSizing_type; ::g::Fuse::Elements::BoxSizing_type* FillAspectBoxSizing_typeof();}}}
namespace g{namespace Fuse{namespace Elements{struct BoxSizing_type; ::g::Fuse::Elements::BoxSizing_type* LayoutMasterBoxSizing_typeof();}}}
namespace g{namespace Fuse{namespace Elements{struct BoxSizing_type; ::g::Fuse::Elements::BoxSizing_type* LimitBoxSizing_typeof();}}}
namespace g{namespace Fuse{namespace Elements{struct BoxSizing_type; ::g::Fuse::Elements::BoxSizing_type* NoImplicitMaxBoxSizing_typeof();}}}
namespace g{namespace Fuse{namespace Elements{struct BoxSizing_type; ::g::Fuse::Elements::BoxSizing_type* StandardBoxSizing_typeof();}}}
namespace g{namespace Fuse{namespace Elements{struct BoxSizing_type; BoxSizing_type* BoxSizing_typeof();}}}
namespace g{namespace Fuse{namespace Elements{struct Element_type; Element_type* Element_typeof();}}}
namespace g{namespace Fuse{namespace Elements{struct Element_type;}} namespace Fuse{namespace Controls{namespace FallbackTextEdit{::g::Fuse::Elements::Element_type* TextWindow_typeof();}}}}
namespace g{namespace Fuse{namespace Elements{struct Element_type;}} namespace Fuse{namespace Controls{namespace Primitives{::g::Fuse::Elements::Element_type* ShadowElement_typeof();}}}}
namespace g{namespace Fuse{namespace Elements{struct ElementAtlasFramebufferPoolImpl_type; ElementAtlasFramebufferPoolImpl_type* ElementAtlasFramebufferPoolImpl_typeof();}}}
namespace g{namespace Fuse{namespace Elements{struct ElementBatch_type; ElementBatch_type* ElementBatch_typeof();}}}
namespace g{namespace Fuse{namespace Elements{struct ElementBatcher_type; ElementBatcher_type* ElementBatcher_typeof();}}}
namespace g{namespace Fuse{namespace Elements{struct ExplicitTransformOrigin_type; ExplicitTransformOrigin_type* ExplicitTransformOrigin_typeof();}}}
namespace g{namespace Fuse{namespace Elements{struct SingleVisualDrawable_type; SingleVisualDrawable_type* SingleVisualDrawable_typeof();}}}
namespace g{namespace Fuse{namespace Elements{struct TransformOrigins__AnchorOrigin_type; TransformOrigins__AnchorOrigin_type* TransformOrigins__AnchorOrigin_typeof();}}}
namespace g{namespace Fuse{namespace Elements{struct TransformOrigins__BoxCenter_type; TransformOrigins__BoxCenter_type* TransformOrigins__BoxCenter_typeof();}}}
namespace g{namespace Fuse{namespace Elements{struct TransformOrigins__CenterOrigin_type; TransformOrigins__CenterOrigin_type* TransformOrigins__CenterOrigin_typeof();}}}
namespace g{namespace Fuse{namespace Elements{struct TransformOrigins__TopLeftOrigin_type; TransformOrigins__TopLeftOrigin_type* TransformOrigins__TopLeftOrigin_typeof();}}}
namespace g{namespace Fuse{namespace Elements{struct TranslationModes__OffsetMode_type; ::g::Fuse::Elements::TranslationModes__OffsetMode_type* TranslationModes__PositionOffsetMode_typeof();}}}
namespace g{namespace Fuse{namespace Elements{struct TranslationModes__OffsetMode_type; ::g::Fuse::Elements::TranslationModes__OffsetMode_type* TranslationModes__TransformOriginOffsetMode_typeof();}}}
namespace g{namespace Fuse{namespace Elements{struct TranslationModes__OffsetMode_type; TranslationModes__OffsetMode_type* TranslationModes__OffsetMode_typeof();}}}
namespace g{namespace Fuse{namespace Elements{struct TranslationModes__RelativeResizeChangeMode_type; TranslationModes__RelativeResizeChangeMode_type* TranslationModes__RelativeResizeChangeMode_typeof();}}}
namespace g{namespace Fuse{namespace Elements{struct TranslationModes__SizeFactorMode_type; TranslationModes__SizeFactorMode_type* TranslationModes__SizeFactorMode_typeof();}}}
namespace g{namespace Fuse{namespace Elements{struct Viewport_type; Viewport_type* Viewport_typeof();}}}
namespace g{namespace Fuse{namespace Elements{uClassType* AlignmentHelpers_typeof();}}}
namespace g{namespace Fuse{namespace Elements{uClassType* DisplayHelpers_typeof();}}}
namespace g{namespace Fuse{namespace Elements{uClassType* ElementAtlasFramebufferPool_typeof();}}}
namespace g{namespace Fuse{namespace Elements{uClassType* LayoutMasterAttr_typeof();}}}
namespace g{namespace Fuse{namespace Elements{uClassType* TransformOrigins_typeof();}}}
namespace g{namespace Fuse{namespace Elements{uClassType* TranslationModes_typeof();}}}
namespace g{namespace Fuse{namespace Elements{uStructType* BoxPlacement_typeof();}}}
namespace g{namespace Fuse{namespace Elements{uStructType* CacheTile_typeof();}}}
namespace g{namespace Fuse{namespace Elements{uStructType* Element__GMSCacheItem_typeof();}}}
namespace g{namespace Fuse{namespace Elements{uType* Cache_typeof();}}}
namespace g{namespace Fuse{namespace Elements{uType* CacheHelper_typeof();}}}
namespace g{namespace Fuse{namespace Elements{uType* ElementAtlas_typeof();}}}
namespace g{namespace Fuse{namespace Elements{uType* ElementAtlasFramebuffer_typeof();}}}
namespace g{namespace Fuse{namespace Elements{uType* ElementAtlasFramebufferPoolEntry_typeof();}}}
namespace g{namespace Fuse{namespace Elements{uType* ElementBatchEntry_typeof();}}}
namespace g{namespace Fuse{namespace Elements{uType* LayoutMasterBoxSizing__LayoutMasterData_typeof();}}}
namespace g{namespace Fuse{namespace Elements{uType* PreplacementArgs_typeof();}}}
namespace g{namespace Fuse{namespace Elements{uType* TranslationModes__OffsetMode__Subscriptions_typeof();}}}
namespace g{namespace Fuse{namespace FileSystem{struct FileSystemInfo_type; ::g::Fuse::FileSystem::FileSystemInfo_type* DirectoryInfo_typeof();}}}
namespace g{namespace Fuse{namespace FileSystem{struct FileSystemInfo_type; ::g::Fuse::FileSystem::FileSystemInfo_type* FileInfo_typeof();}}}
namespace g{namespace Fuse{namespace FileSystem{struct FileSystemInfo_type; FileSystemInfo_type* FileSystemInfo_typeof();}}}
namespace g{namespace Fuse{namespace FileSystem{uClassType* FileStatusHelpers_typeof();}}}
namespace g{namespace Fuse{namespace FileSystem{uClassType* PathTools_typeof();}}}
namespace g{namespace Fuse{namespace FileSystem{uClassType* UnifiedPaths_typeof();}}}
namespace g{namespace Fuse{namespace FileSystem{uType* FileStatus_typeof();}}}
namespace g{namespace Fuse{namespace FileSystem{uType* FileSystemOperations__Closure_typeof();}}}
namespace g{namespace Fuse{namespace FileSystem{uType* FileSystemOperations__Closure1_typeof();}}}
namespace g{namespace Fuse{namespace FileSystem{uType* FileSystemOperations_typeof();}}}
namespace g{namespace Fuse{namespace FileSystem{uType* IosPaths_typeof();}}}
namespace g{namespace Fuse{namespace FileSystem{uType* Nothing_typeof();}}}
namespace g{namespace Fuse{namespace Gestures{namespace Internal{uType* EdgeSwiper_typeof();}}}}
namespace g{namespace Fuse{namespace Gestures{namespace Internal{uType* Swiper_typeof();}}}}
namespace g{namespace Fuse{namespace Gestures{namespace Internal{uType* SwipeRegion_typeof();}}}}
namespace g{namespace Fuse{namespace Gestures{namespace Internal{uType* TwoFinger__Point_typeof();}}}}
namespace g{namespace Fuse{namespace Gestures{namespace Internal{uType* TwoFinger_typeof();}}}}
namespace g{namespace Fuse{namespace Gestures{struct Scroller_type; Scroller_type* Scroller_typeof();}}}
namespace g{namespace Fuse{namespace Gestures{struct Scroller_type;}} namespace Fuse{namespace Controls{::g::Fuse::Gestures::Scroller_type* ScrollView__DefaultScroller_typeof();}}}
namespace g{namespace Fuse{namespace Gestures{struct SwipeGesture_type; SwipeGesture_type* SwipeGesture_typeof();}}}
namespace g{namespace Fuse{namespace Gestures{struct SwipingAnimation_type; SwipingAnimation_type* SwipingAnimation_typeof();}}}
namespace g{namespace Fuse{namespace Gestures{struct TransformGesture_type; ::g::Fuse::Gestures::TransformGesture_type* PanGesture_typeof();}}}
namespace g{namespace Fuse{namespace Gestures{struct TransformGesture_type; ::g::Fuse::Gestures::TransformGesture_type* RotateGesture_typeof();}}}
namespace g{namespace Fuse{namespace Gestures{struct TransformGesture_type; ::g::Fuse::Gestures::TransformGesture_type* ZoomGesture_typeof();}}}
namespace g{namespace Fuse{namespace Gestures{struct TransformGesture_type; TransformGesture_type* TransformGesture_typeof();}}}
namespace g{namespace Fuse{namespace Gestures{struct WhileSwipeActive_type; WhileSwipeActive_type* WhileSwipeActive_typeof();}}}
namespace g{namespace Fuse{namespace Gestures{uStructType* double2_typeof();}}}
namespace g{namespace Fuse{namespace Gestures{uType* Clicker_typeof();}}}
namespace g{namespace Fuse{namespace Gestures{uType* DegreeSpan_typeof();}}}
namespace g{namespace Fuse{namespace Gestures{uType* SwipeGestureHelper_typeof();}}}
namespace g{namespace Fuse{namespace Input{namespace UX{uClassType* AttachedFocusMembers_typeof();}}}}
namespace g{namespace Fuse{namespace Input{namespace UX{uClassType* AttachedKeyboardMembers_typeof();}}}}
namespace g{namespace Fuse{namespace Input{namespace UX{uClassType* AttachedPointerMembers_typeof();}}}}
namespace g{namespace Fuse{namespace Input{struct Pointer__DefaultPointerEventResponder_type; Pointer__DefaultPointerEventResponder_type* Pointer__DefaultPointerEventResponder_typeof();}}}
namespace g{namespace Fuse{namespace Input{uClassType* Focus_typeof();}}}
namespace g{namespace Fuse{namespace Input{uClassType* FocusPrediction_typeof();}}}
namespace g{namespace Fuse{namespace Input{uClassType* FocusPredictStrategy_typeof();}}}
namespace g{namespace Fuse{namespace Input{uClassType* HitTestHelpers_typeof();}}}
namespace g{namespace Fuse{namespace Input{uClassType* Keyboard_typeof();}}}
namespace g{namespace Fuse{namespace Input{uClassType* Pointer_typeof();}}}
namespace g{namespace Fuse{namespace Input{uClassType* TextService_typeof();}}}
namespace g{namespace Fuse{namespace Input{uType* Capturer_typeof();}}}
namespace g{namespace Fuse{namespace Input{uType* FocusPrediction__PredictFilter_typeof();}}}
namespace g{namespace Fuse{namespace Input{uType* Pointer__PELHolder_typeof();}}}
namespace g{namespace Fuse{namespace Input{uType* Pointer__PointerRecord_typeof();}}}
namespace g{namespace Fuse{namespace Input{uType* PointerEventData_typeof();}}}
namespace g{namespace Fuse{namespace Input{uType* SelectionQuery_typeof();}}}
namespace g{namespace Fuse{namespace Internal{namespace Drawing{uType* SolidRectangle_typeof();}}}}
namespace g{namespace Fuse{namespace Internal{struct Blender_type; ::g::Fuse::Internal::Blender_type* Float2Blender_typeof();}}}
namespace g{namespace Fuse{namespace Internal{struct Blender_type; ::g::Fuse::Internal::Blender_type* Float3Blender_typeof();}}}
namespace g{namespace Fuse{namespace Internal{struct Blender_type; ::g::Fuse::Internal::Blender_type* Float4Blender_typeof();}}}
namespace g{namespace Fuse{namespace Internal{struct Blender_type; ::g::Fuse::Internal::Blender_type* Size2Blender_typeof();}}}
namespace g{namespace Fuse{namespace Internal{struct Blender_type; ::g::Fuse::Internal::Blender_type* SizeBlender_typeof();}}}
namespace g{namespace Fuse{namespace Internal{struct Blender_type; Blender_type* Blender_typeof();}}}
namespace g{namespace Fuse{namespace Internal{struct Cache_type; Cache_type* Cache_typeof();}}}
namespace g{namespace Fuse{namespace Internal{struct CacheItem_type; CacheItem_type* CacheItem_typeof();}}}
namespace g{namespace Fuse{namespace Internal{struct CacheRef_type; CacheRef_type* CacheRef_typeof();}}}
namespace g{namespace Fuse{namespace Internal{struct MiniList__Enumerator_type; MiniList__Enumerator_type* MiniList__Enumerator_typeof();}}}
namespace g{namespace Fuse{namespace Internal{struct MiniList_type; MiniList_type* MiniList_typeof();}}}
namespace g{namespace Fuse{namespace Internal{struct ScalarBlender_type; ::g::Fuse::Internal::ScalarBlender_type* DoubleBlender_typeof();}}}
namespace g{namespace Fuse{namespace Internal{struct ScalarBlender_type; ::g::Fuse::Internal::ScalarBlender_type* FloatBlender_typeof();}}}
namespace g{namespace Fuse{namespace Internal{struct ScalarBlender_type; ScalarBlender_type* ScalarBlender_typeof();}}}
namespace g{namespace Fuse{namespace Internal{uClassType* FrustumMatrix_typeof();}}}
namespace g{namespace Fuse{namespace Internal{uClassType* FuseConfig_typeof();}}}
namespace g{namespace Fuse{namespace Internal{uClassType* iOSSystemFont_typeof();}}}
namespace g{namespace Fuse{namespace Internal{uClassType* Statistics_typeof();}}}
namespace g{namespace Fuse{namespace Internal{uClassType* SystemFont_typeof();}}}
namespace g{namespace Fuse{namespace Internal{uClassType* VectorUtil_typeof();}}}
namespace g{namespace Fuse{namespace Internal{uStructType* SkylineNode_typeof();}}}
namespace g{namespace Fuse{namespace Internal{uType* BlenderMap_typeof();}}}
namespace g{namespace Fuse{namespace Internal{uType* FontFaceDescriptor_typeof();}}}
namespace g{namespace Fuse{namespace Internal{uType* ImageContainer_typeof();}}}
namespace g{namespace Fuse{namespace Internal{uType* RectPacker_typeof();}}}
namespace g{namespace Fuse{namespace Internal{uType* SizingContainer_typeof();}}}
namespace g{namespace Fuse{namespace iOS{namespace Bindings{struct TextRenderer_type; TextRenderer_type* TextRenderer_typeof();}}}}
namespace g{namespace Fuse{namespace iOS{namespace Bindings{uClassType* iOSDeviceInterop_typeof();}}}}
namespace g{namespace Fuse{namespace iOS{namespace Bindings{uStructType* CGColorSpaceRef_typeof();}}}}
namespace g{namespace Fuse{namespace iOS{namespace Bindings{uStructType* CGContextRef_typeof();}}}}
namespace g{namespace Fuse{namespace iOS{namespace Bindings{uType* Blitter_typeof();}}}}
namespace g{namespace Fuse{namespace iOS{namespace Bindings{uType* TextLayout_typeof();}}}}
namespace g{namespace Fuse{namespace iOS{namespace Controls{struct WebView_type; WebView_type* WebView_typeof();}}}}
namespace g{namespace Fuse{namespace iOS{namespace Controls{uClassType* NavDelegate_typeof();}}}}
namespace g{namespace Fuse{namespace iOS{namespace Controls{uClassType* WKWebViewHelpers_typeof();}}}}
namespace g{namespace Fuse{namespace Layouts{struct Layout_type; ::g::Fuse::Layouts::Layout_type* CircleLayout_typeof();}}}
namespace g{namespace Fuse{namespace Layouts{struct Layout_type; ::g::Fuse::Layouts::Layout_type* ColumnLayout_typeof();}}}
namespace g{namespace Fuse{namespace Layouts{struct Layout_type; ::g::Fuse::Layouts::Layout_type* DefaultLayout_typeof();}}}
namespace g{namespace Fuse{namespace Layouts{struct Layout_type; ::g::Fuse::Layouts::Layout_type* DockLayout_typeof();}}}
namespace g{namespace Fuse{namespace Layouts{struct Layout_type; ::g::Fuse::Layouts::Layout_type* GridLayout_typeof();}}}
namespace g{namespace Fuse{namespace Layouts{struct Layout_type; ::g::Fuse::Layouts::Layout_type* StackLayout_typeof();}}}
namespace g{namespace Fuse{namespace Layouts{struct Layout_type; ::g::Fuse::Layouts::Layout_type* WrapLayout_typeof();}}}
namespace g{namespace Fuse{namespace Layouts{struct Layout_type; Layout_type* Layout_typeof();}}}
namespace g{namespace Fuse{namespace Layouts{uClassType* Layouts_typeof();}}}
namespace g{namespace Fuse{namespace Layouts{uType* Column_typeof();}}}
namespace g{namespace Fuse{namespace Layouts{uType* DefinitionBase_typeof();}}}
namespace g{namespace Fuse{namespace Layouts{uType* Row_typeof();}}}
namespace g{namespace Fuse{namespace Motion{namespace Simulation{struct AdapterMultiplier_type; AdapterMultiplier_type* AdapterMultiplier_typeof();}}}}
namespace g{namespace Fuse{namespace Motion{namespace Simulation{struct AngularAdapter_type; AngularAdapter_type* AngularAdapter_typeof();}}}}
namespace g{namespace Fuse{namespace Motion{namespace Simulation{struct BasicBoundedRegion2D_type; BasicBoundedRegion2D_type* BasicBoundedRegion2D_typeof();}}}}
namespace g{namespace Fuse{namespace Motion{namespace Simulation{struct EasingMotion_type; EasingMotion_type* EasingMotion_typeof();}}}}
namespace g{namespace Fuse{namespace Motion{namespace Simulation{struct ElasticForce_type; ElasticForce_type* ElasticForce_typeof();}}}}
namespace g{namespace Fuse{namespace Motion{namespace Simulation{struct Friction_type; Friction_type* Friction_typeof();}}}}
namespace g{namespace Fuse{namespace Motion{namespace Simulation{struct SmoothSnap_type; SmoothSnap_type* SmoothSnap_typeof();}}}}
namespace g{namespace Fuse{namespace Motion{namespace Simulation{uType* PointerVelocity_typeof();}}}}
namespace g{namespace Fuse{namespace Motion{uType* DestinationMotion_typeof();}}}
namespace g{namespace Fuse{namespace Motion{uType* MotionConfig_typeof();}}}
namespace g{namespace Fuse{namespace Motion{uType* NavigationMotion_typeof();}}}
namespace g{namespace Fuse{namespace Motion{uType* ScrollViewMotion_typeof();}}}
namespace g{namespace Fuse{namespace Motion{uType* SpringFunction_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct BackForwardNavigationTriggerAction_type; ::g::Fuse::Navigation::BackForwardNavigationTriggerAction_type* GoBack_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct BackForwardNavigationTriggerAction_type; ::g::Fuse::Navigation::BackForwardNavigationTriggerAction_type* GoForward_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct BackForwardNavigationTriggerAction_type; BackForwardNavigationTriggerAction_type* BackForwardNavigationTriggerAction_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigatedArgs_type; NavigatedArgs_type* NavigatedArgs_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationAnimation_type; ::g::Fuse::Navigation::NavigationAnimation_type* ActivatingAnimation_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationAnimation_type; ::g::Fuse::Navigation::NavigationAnimation_type* DeactivatingAnimation_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationAnimation_type; ::g::Fuse::Navigation::NavigationAnimation_type* EnterExitAnimation_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationAnimation_type; ::g::Fuse::Navigation::NavigationAnimation_type* EnteringAnimation_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationAnimation_type; ::g::Fuse::Navigation::NavigationAnimation_type* ExitingAnimation_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationAnimation_type; NavigationAnimation_type* NavigationAnimation_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationAnimation_type;}} namespace Fuse{namespace Controls{namespace NavigationControlBit{::g::Fuse::Navigation::NavigationAnimation_type* EnterHorizontal_typeof();}}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationAnimation_type;}} namespace Fuse{namespace Controls{namespace NavigationControlBit{::g::Fuse::Navigation::NavigationAnimation_type* EnterVertical_typeof();}}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationAnimation_type;}} namespace Fuse{namespace Controls{namespace NavigationControlBit{::g::Fuse::Navigation::NavigationAnimation_type* ExitHorizontal_typeof();}}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationAnimation_type;}} namespace Fuse{namespace Controls{namespace NavigationControlBit{::g::Fuse::Navigation::NavigationAnimation_type* ExitVertical_typeof();}}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationAnimation_type;}} namespace Fuse{namespace Controls{namespace NavigationControlBit{::g::Fuse::Navigation::NavigationAnimation_type* NavEnterHorizontal_typeof();}}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationAnimation_type;}} namespace Fuse{namespace Controls{namespace NavigationControlBit{::g::Fuse::Navigation::NavigationAnimation_type* NavExitHorizontal_typeof();}}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationPageProxy_type; NavigationPageProxy_type* NavigationPageProxy_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationTrigger_type; ::g::Fuse::Navigation::NavigationTrigger_type* Activated_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationTrigger_type; ::g::Fuse::Navigation::NavigationTrigger_type* Deactivated_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationTrigger_type; NavigationTrigger_type* NavigationTrigger_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationTriggerAction_type; ::g::Fuse::Navigation::NavigationTriggerAction_type* NavigateTo_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationTriggerAction_type; ::g::Fuse::Navigation::NavigationTriggerAction_type* NavigateToggle_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct NavigationTriggerAction_type; NavigationTriggerAction_type* NavigationTriggerAction_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct PageResourceBinding_type; PageResourceBinding_type* PageResourceBinding_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct Router_type; Router_type* Router_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct StructuredNavigation_type; ::g::Fuse::Navigation::StructuredNavigation_type* HierarchicalNavigation_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct StructuredNavigation_type; ::g::Fuse::Navigation::StructuredNavigation_type* LinearNavigation_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct StructuredNavigation_type; StructuredNavigation_type* StructuredNavigation_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct VisualNavigation_type; ::g::Fuse::Navigation::VisualNavigation_type* DirectNavigation_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct VisualNavigation_type; ::g::Fuse::Navigation::VisualNavigation_type* EdgeNavigation_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct VisualNavigation_type; ::g::Fuse::Navigation::VisualNavigation_type* ExplicitNavigation_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct VisualNavigation_type; VisualNavigation_type* VisualNavigation_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct WhileHistoryTrigger_type; ::g::Fuse::Navigation::WhileHistoryTrigger_type* WhileCanGoBack_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct WhileHistoryTrigger_type; ::g::Fuse::Navigation::WhileHistoryTrigger_type* WhileCanGoForward_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct WhileHistoryTrigger_type; WhileHistoryTrigger_type* WhileHistoryTrigger_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct WhileNavigationTrigger_type; ::g::Fuse::Navigation::WhileNavigationTrigger_type* WhileActive_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct WhileNavigationTrigger_type; ::g::Fuse::Navigation::WhileNavigationTrigger_type* WhileInactive_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct WhileNavigationTrigger_type; ::g::Fuse::Navigation::WhileNavigationTrigger_type* WhileInEnterState_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct WhileNavigationTrigger_type; ::g::Fuse::Navigation::WhileNavigationTrigger_type* WhileInExitState_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{struct WhileNavigationTrigger_type; WhileNavigationTrigger_type* WhileNavigationTrigger_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{uClassType* NavigationPageProperty_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{uClassType* NavTriggerUtil_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{uStructType* NavigationPageState_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{uType* EndSeekArgs_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{uType* Navigation_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{uType* NavigationArgs_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{uType* NavigationStateArgs_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{uType* Route_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{uType* Router__GetRouteCallback_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{uType* UpdateSeekArgs_typeof();}}}
namespace g{namespace Fuse{namespace Navigation{uType* VisualNavigation__PageData_typeof();}}}
namespace g{namespace Fuse{namespace Physics{struct Draggable_type; Draggable_type* Draggable_typeof();}}}
namespace g{namespace Fuse{namespace Physics{struct ForceField_type; ::g::Fuse::Physics::ForceField_type* PointAttractor_typeof();}}}
namespace g{namespace Fuse{namespace Physics{struct ForceField_type; ForceField_type* ForceField_typeof();}}}
namespace g{namespace Fuse{namespace Physics{struct ForceFieldTrigger_type; ::g::Fuse::Physics::ForceFieldTrigger_type* EnteredForceField_typeof();}}}
namespace g{namespace Fuse{namespace Physics{struct ForceFieldTrigger_type; ::g::Fuse::Physics::ForceFieldTrigger_type* ExitedForceField_typeof();}}}
namespace g{namespace Fuse{namespace Physics{struct ForceFieldTrigger_type; ::g::Fuse::Physics::ForceFieldTrigger_type* ForceFieldEventTrigger_typeof();}}}
namespace g{namespace Fuse{namespace Physics{struct ForceFieldTrigger_type; ::g::Fuse::Physics::ForceFieldTrigger_type* InForceFieldAnimation_typeof();}}}
namespace g{namespace Fuse{namespace Physics{struct ForceFieldTrigger_type; ForceFieldTrigger_type* ForceFieldTrigger_typeof();}}}
namespace g{namespace Fuse{namespace Physics{struct Spring_type; Spring_type* Spring_typeof();}}}
namespace g{namespace Fuse{namespace Physics{uClassType* BodyAttr_typeof();}}}
namespace g{namespace Fuse{namespace Physics{uType* Body_typeof();}}}
namespace g{namespace Fuse{namespace Physics{uType* ForceFieldEventArgs_typeof();}}}
namespace g{namespace Fuse{namespace Physics{uType* World_typeof();}}}
namespace g{namespace Fuse{namespace Platform{uClassType* AppEvents_typeof();}}}
namespace g{namespace Fuse{namespace Platform{uClassType* InterApp_typeof();}}}
namespace g{namespace Fuse{namespace Platform{uClassType* Lifecycle_typeof();}}}
namespace g{namespace Fuse{namespace Platform{uType* Display_typeof();}}}
namespace g{namespace Fuse{namespace Preview{uClassType* SelectionManager_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{uType* Builtins_typeof();}}}}
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{uType* Http__FunctionClosure_typeof();}}}}
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{uType* Http__FuseJSHttpClient_typeof();}}}}
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{uType* Http__FuseJSHttpRequest_typeof();}}}}
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{uType* HttpHeaders_typeof();}}}}
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{uType* TimerManager__Timer_typeof();}}}}
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{uType* TimerManager_typeof();}}}}
namespace g{namespace Fuse{namespace Reactive{namespace FuseJS{uType* TimerModule__CallbackClosure_typeof();}}}}
namespace g{namespace Fuse{namespace Reactive{struct AnyChangeObserver_type; AnyChangeObserver_type* AnyChangeObserver_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{struct ClosureArgs_type; ClosureArgs_type* ClosureArgs_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{struct ContextBinding_type; ::g::Fuse::Reactive::ContextBinding_type* EventBinding_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{struct ContextBinding_type; ContextBinding_type* ContextBinding_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{struct DataBinding_type; ::g::Fuse::Reactive::DataBinding_type* ClearDataBinding_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{struct DataBinding_type; ::g::Fuse::Reactive::DataBinding_type* DataToResourceBinding_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{struct DataBinding_type; ::g::Fuse::Reactive::DataBinding_type* ReadClearDataBinding_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{struct DataBinding_type; ::g::Fuse::Reactive::DataBinding_type* ReadDataBinding_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{struct DataBinding_type; ::g::Fuse::Reactive::DataBinding_type* WriteClearDataBinding_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{struct DataBinding_type; ::g::Fuse::Reactive::DataBinding_type* WriteDataBinding_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{struct DataBinding_type; DataBinding_type* DataBinding_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{struct EventBinding__CallClosure_type; EventBinding__CallClosure_type* EventBinding__CallClosure_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{struct Instantiator_type; ::g::Fuse::Reactive::Instantiator_type* Each_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{struct Instantiator_type; ::g::Fuse::Reactive::Instantiator_type* Instance_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{struct Instantiator_type; Instantiator_type* Instantiator_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{struct JavaScript_type; JavaScript_type* JavaScript_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{struct Match_type; Match_type* Match_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{struct PathObserver_type; PathObserver_type* PathObserver_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{struct PropertyBinding_type; ::g::Fuse::Reactive::PropertyBinding_type* ReadPropertyBinding_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{struct PropertyBinding_type; ::g::Fuse::Reactive::PropertyBinding_type* WritePropertyBinding_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{struct PropertyBinding_type; PropertyBinding_type* PropertyBinding_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{struct SegmentObserver_type; SegmentObserver_type* SegmentObserver_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{struct ThreadWorker_type; ThreadWorker_type* ThreadWorker_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{struct WhileCount_type; ::g::Fuse::Reactive::WhileCount_type* WhileEmpty_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{struct WhileCount_type; ::g::Fuse::Reactive::WhileCount_type* WhileNotEmpty_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{struct WhileCount_type; WhileCount_type* WhileCount_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{uClassType* BindingTypes_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{uClassType* Console_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{uClassType* DebugLog_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{uType* BindAttempt_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{uType* Case_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{uType* DelayFunction__SetClosure_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{uType* DelayFunction_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{uType* Instantiator__CountItem_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{uType* JavaScript__EvaluateDataContext_typeof();}}}
namespace g{namespace Fuse{namespace Reactive{uType* ThreadWorker__Flag_typeof();}}}
namespace g{namespace Fuse{namespace Resources{struct DisposalPolicy_type; ::g::Fuse::Resources::DisposalPolicy_type* ExpirationDisposalPolicy_typeof();}}}
namespace g{namespace Fuse{namespace Resources{struct DisposalPolicy_type; ::g::Fuse::Resources::DisposalPolicy_type* RetainDisposalPolicy_typeof();}}}
namespace g{namespace Fuse{namespace Resources{struct DisposalPolicy_type; DisposalPolicy_type* DisposalPolicy_typeof();}}}
namespace g{namespace Fuse{namespace Resources{struct GenericResourceConverter_type; GenericResourceConverter_type* GenericResourceConverter_typeof();}}}
namespace g{namespace Fuse{namespace Resources{struct ImageSource_type; ::g::Fuse::Resources::ImageSource_type* FileImageSource_typeof();}}}
namespace g{namespace Fuse{namespace Resources{struct ImageSource_type; ::g::Fuse::Resources::ImageSource_type* HttpImageSource_typeof();}}}
namespace g{namespace Fuse{namespace Resources{struct ImageSource_type; ::g::Fuse::Resources::ImageSource_type* MultiDensityImageSource_typeof();}}}
namespace g{namespace Fuse{namespace Resources{struct ImageSource_type; ::g::Fuse::Resources::ImageSource_type* TextureImageSource_typeof();}}}
namespace g{namespace Fuse{namespace Resources{struct ImageSource_type; ImageSource_type* ImageSource_typeof();}}}
namespace g{namespace Fuse{namespace Resources{struct ImageSourceErrorArgs_type; ImageSourceErrorArgs_type* ImageSourceErrorArgs_typeof();}}}
namespace g{namespace Fuse{namespace Resources{struct LoadingImageSource_type; ::g::Fuse::Resources::LoadingImageSource_type* FileImageSourceImpl_typeof();}}}
namespace g{namespace Fuse{namespace Resources{struct LoadingImageSource_type; ::g::Fuse::Resources::LoadingImageSource_type* HttpImageSourceImpl_typeof();}}}
namespace g{namespace Fuse{namespace Resources{struct LoadingImageSource_type; LoadingImageSource_type* LoadingImageSource_typeof();}}}
namespace g{namespace Fuse{namespace Resources{struct NumericResourceConverter_type; ::g::Fuse::Resources::NumericResourceConverter_type* DoubleResourceConverter_typeof();}}}
namespace g{namespace Fuse{namespace Resources{struct NumericResourceConverter_type; ::g::Fuse::Resources::NumericResourceConverter_type* FloatResourceConverter_typeof();}}}
namespace g{namespace Fuse{namespace Resources{struct NumericResourceConverter_type; ::g::Fuse::Resources::NumericResourceConverter_type* IntResourceConverter_typeof();}}}
namespace g{namespace Fuse{namespace Resources{struct NumericResourceConverter_type; NumericResourceConverter_type* NumericResourceConverter_typeof();}}}
namespace g{namespace Fuse{namespace Resources{struct PolicyDeferredDisposable_type; PolicyDeferredDisposable_type* PolicyDeferredDisposable_typeof();}}}
namespace g{namespace Fuse{namespace Resources{uClassType* DisposalManager_typeof();}}}
namespace g{namespace Fuse{namespace Resources{uClassType* FileImageSourceCache_typeof();}}}
namespace g{namespace Fuse{namespace Resources{uClassType* HttpImageSourceCache_typeof();}}}
namespace g{namespace Fuse{namespace Resources{uClassType* ResourceConverters_typeof();}}}
namespace g{namespace Fuse{namespace Resources{uClassType* ResourceRegistry_typeof();}}}
namespace g{namespace Fuse{namespace Resources{uType* FileImageSourceImpl__BackgroundLoad_typeof();}}}
namespace g{namespace Fuse{namespace Resources{uType* HttpImageSourceImpl__BackgroundLoad_typeof();}}}
namespace g{namespace Fuse{namespace Resources{uType* ImageSourceChangedArgs_typeof();}}}
namespace g{namespace Fuse{namespace Resources{uType* MemoryPolicy_typeof();}}}
namespace g{namespace Fuse{namespace Resources{uType* ProxyImageSource_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{namespace JavaScriptCore{struct JSClassRef_type; JSClassRef_type* JSClassRef_typeof();}}}}
namespace g{namespace Fuse{namespace Scripting{namespace JavaScriptCore{struct JSContextRef_type; JSContextRef_type* JSContextRef_typeof();}}}}
namespace g{namespace Fuse{namespace Scripting{namespace JavaScriptCore{struct JSPropertyNameArray_type; JSPropertyNameArray_type* JSPropertyNameArray_typeof();}}}}
namespace g{namespace Fuse{namespace Scripting{namespace JavaScriptCore{struct JSStringRef_type; JSStringRef_type* JSStringRef_typeof();}}}}
namespace g{namespace Fuse{namespace Scripting{namespace JavaScriptCore{uClassType* JSTypedArray_typeof();}}}}
namespace g{namespace Fuse{namespace Scripting{namespace JavaScriptCore{uStructType* JSObjectRef_typeof();}}}}
namespace g{namespace Fuse{namespace Scripting{namespace JavaScriptCore{uStructType* JSValueRef_typeof();}}}}
namespace g{namespace Fuse{namespace Scripting{namespace JavaScriptCore{uType* Context__CallbackWrapper_typeof();}}}}
namespace g{namespace Fuse{namespace Scripting{struct Array_type; Array_type* Array_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct Array_type; namespace JavaScriptCore{::g::Fuse::Scripting::Array_type* Array_typeof();}}}}
namespace g{namespace Fuse{namespace Scripting{struct BoolChangedArgs_type; BoolChangedArgs_type* BoolChangedArgs_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct Context_type; Context_type* Context_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct Context_type; namespace JavaScriptCore{::g::Fuse::Scripting::Context_type* Context_typeof();}}}}
namespace g{namespace Fuse{namespace Scripting{struct DoubleChangedArgs_type; DoubleChangedArgs_type* DoubleChangedArgs_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct FileSourceConverter_type; FileSourceConverter_type* FileSourceConverter_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct Function_type; Function_type* Function_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct Function_type; namespace JavaScriptCore{::g::Fuse::Scripting::Function_type* Function_typeof();}}}}
namespace g{namespace Fuse{namespace Scripting{struct ListMirror_type; ::g::Fuse::Scripting::ListMirror_type* ArrayMirror_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct ListMirror_type; ::g::Fuse::Scripting::ListMirror_type* Observable_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct ListMirror_type; ListMirror_type* ListMirror_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct Module_type; Module_type* Module_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct NativeMember_type; ::g::Fuse::Scripting::NativeMember_type* NativeFunction_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct NativeMember_type; ::g::Fuse::Scripting::NativeMember_type* NativePromise_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct NativeMember_type; NativeMember_type* NativeMember_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct NativeModule_type; ::g::Fuse::Scripting::NativeModule_type* NativeEventEmitterModule_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct NativeModule_type; NativeModule_type* NativeModule_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct NativeModule_type;}} ::g::Fuse::Scripting::NativeModule_type* Share_typeof();}
namespace g{namespace Fuse{namespace Scripting{struct NativeModule_type;}} namespace Fuse{namespace FileSystem{::g::Fuse::Scripting::NativeModule_type* FileSystemModule_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct NativeModule_type;}} namespace Fuse{namespace Reactive{namespace FuseJS{::g::Fuse::Scripting::NativeModule_type* Http_typeof();}}}}
namespace g{namespace Fuse{namespace Scripting{struct NativeModule_type;}} namespace Fuse{namespace Reactive{namespace FuseJS{::g::Fuse::Scripting::NativeModule_type* TimerModule_typeof();}}}}
namespace g{namespace Fuse{namespace Scripting{struct NativeModule_type;}} namespace Fuse{namespace Storage{::g::Fuse::Scripting::NativeModule_type* StorageModule_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct NativeModule_type;}} namespace Fuse{namespace Triggers{::g::Fuse::Scripting::NativeModule_type* BusyTaskModule_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct NativeModule_type;}} namespace FuseJS{::g::Fuse::Scripting::NativeModule_type* Base64_typeof();}}
namespace g{namespace Fuse{namespace Scripting{struct NativeModule_type;}} namespace FuseJS{::g::Fuse::Scripting::NativeModule_type* Bundle_typeof();}}
namespace g{namespace Fuse{namespace Scripting{struct NativeModule_type;}} namespace FuseJS{::g::Fuse::Scripting::NativeModule_type* Environment_typeof();}}
namespace g{namespace Fuse{namespace Scripting{struct NativeModule_type;}} namespace FuseJS{::g::Fuse::Scripting::NativeModule_type* FileReaderImpl_typeof();}}
namespace g{namespace Fuse{namespace Scripting{struct NativeModule_type;}} namespace FuseJS{::g::Fuse::Scripting::NativeModule_type* Globals_typeof();}}
namespace g{namespace Fuse{namespace Scripting{struct NativeModule_type;}} namespace FuseJS{::g::Fuse::Scripting::NativeModule_type* Lifecycle_typeof();}}
namespace g{namespace Fuse{namespace Scripting{struct NativeModule_type;}} namespace FuseJS{::g::Fuse::Scripting::NativeModule_type* UserEvents_typeof();}}
namespace g{namespace Fuse{namespace Scripting{struct NativeProperty_type; ::g::Fuse::Scripting::NativeProperty_type* NativeEvent_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct NativeProperty_type; NativeProperty_type* NativeProperty_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct Object_type; namespace JavaScriptCore{::g::Fuse::Scripting::Object_type* Object_typeof();}}}}
namespace g{namespace Fuse{namespace Scripting{struct Object_type; Object_type* Object_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct ObjectMirror_type; ObjectMirror_type* ObjectMirror_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct Observable__Operation_type; ::g::Fuse::Scripting::Observable__Operation_type* Observable__Add_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct Observable__Operation_type; ::g::Fuse::Scripting::Observable__Operation_type* Observable__Clear_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct Observable__Operation_type; ::g::Fuse::Scripting::Observable__Operation_type* Observable__InsertAll_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct Observable__Operation_type; ::g::Fuse::Scripting::Observable__Operation_type* Observable__InsertAt_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct Observable__Operation_type; ::g::Fuse::Scripting::Observable__Operation_type* Observable__NewAll_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct Observable__Operation_type; ::g::Fuse::Scripting::Observable__Operation_type* Observable__NewAt_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct Observable__Operation_type; ::g::Fuse::Scripting::Observable__Operation_type* Observable__RemoveAt_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct Observable__Operation_type; ::g::Fuse::Scripting::Observable__Operation_type* Observable__RemoveRange_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct Observable__Operation_type; ::g::Fuse::Scripting::Observable__Operation_type* Observable__Set_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct Observable__Operation_type; Observable__Operation_type* Observable__Operation_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct Observable__Subscription_type; Observable__Subscription_type* Observable__Subscription_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct ObservableProperty_type; ::g::Fuse::Scripting::ObservableProperty_type* LazyObservableProperty_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct ObservableProperty_type; ObservableProperty_type* ObservableProperty_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct ScriptEventArgs_type; ScriptEventArgs_type* ScriptEventArgs_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct ScriptMethod_type; ::g::Fuse::Scripting::ScriptMethod_type* ScriptMethod1_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct ScriptMethod_type; ::g::Fuse::Scripting::ScriptMethod_type* ScriptMethodInline_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct ScriptMethod_type; ScriptMethod_type* ScriptMethod_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct ScriptModule_type; ::g::Fuse::Scripting::ScriptModule_type* CodeModule_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct ScriptModule_type; ::g::Fuse::Scripting::ScriptModule_type* FileModule_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct ScriptModule_type; ScriptModule_type* ScriptModule_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct ScriptModule_type;}} namespace Fuse{namespace Reactive{::g::Fuse::Scripting::ScriptModule_type* RootableScriptModule_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct ScriptProperty_type; ::g::Fuse::Scripting::ScriptProperty_type* ScriptProperty1_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct ScriptProperty_type; ScriptProperty_type* ScriptProperty_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct StringChangedArgs_type; StringChangedArgs_type* StringChangedArgs_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{struct ValueMirror_type; ValueMirror_type* ValueMirror_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uClassType* AppInitialized_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uClassType* EventEmitterModule_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uClassType* JSCallback__NumberConverter_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uClassType* JSCallback_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uClassType* JSObjectUtils_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uClassType* Json_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uClassType* Marshal_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uClassType* Value_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uType* AppInitialized__Closure_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uType* ClassInstance_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uType* Context__MethodClosure_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uType* Context__PropertyClosure_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uType* External_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uType* FactoryClosure_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uType* JSCallback__ActionClosure_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uType* JSCallback__ActionClosure1_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uType* JSCallback__ActionClosure2_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uType* JSCallback__FuncClosure_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uType* JSCallback__FuncClosure1_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uType* JSCallback__FuncClosure2_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uType* ModuleResult_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uType* NativeEventEmitterModule__EmitClosure_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uType* NativeEventEmitterModule__OnClosure_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uType* NativeFunction__NativeFunctionClosure_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uType* NativePromise__ContextClosure_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uType* NativePromise__PromiseClosure_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uType* ObservableProperty__PushCapture_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uType* ScriptClass_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uType* ScriptMember_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uType* ScriptMethod1__CallClosure_typeof();}}}
namespace g{namespace Fuse{namespace Scripting{uType* ScriptModule__RequireContext_typeof();}}}
namespace g{namespace Fuse{namespace Selection{struct Selection_type; Selection_type* Selection_typeof();}}}
namespace g{namespace Fuse{namespace Selection{struct SelectionEvent_type; ::g::Fuse::Selection::SelectionEvent_type* Deselected_typeof();}}}
namespace g{namespace Fuse{namespace Selection{struct SelectionEvent_type; ::g::Fuse::Selection::SelectionEvent_type* Selected_typeof();}}}
namespace g{namespace Fuse{namespace Selection{struct SelectionEvent_type; SelectionEvent_type* SelectionEvent_typeof();}}}
namespace g{namespace Fuse{namespace Selection{struct SelectionEventArgs_type; SelectionEventArgs_type* SelectionEventArgs_typeof();}}}
namespace g{namespace Fuse{namespace Selection{struct WhileSelected_type; WhileSelected_type* WhileSelected_typeof();}}}
namespace g{namespace Fuse{namespace Storage{uClassType* ApplicationDir_typeof();}}}
namespace g{namespace Fuse{namespace Storage{uType* ApplicationDir__ReadClosure_typeof();}}}
namespace g{namespace Fuse{namespace Storage{uType* ApplicationDir__WriteClosure_typeof();}}}
namespace g{namespace Fuse{namespace Text{namespace Bidirectional{namespace Implementation{uClassType* UBidiRuns_typeof();}}}}}
namespace g{namespace Fuse{namespace Text{namespace Bidirectional{uClassType* Runs_typeof();}}}}
namespace g{namespace Fuse{namespace Text{namespace Bidirectional{uStructType* Run_typeof();}}}}
namespace g{namespace Fuse{namespace Text{namespace Bidirectional{uType* Runs__Range_typeof();}}}}
namespace g{namespace Fuse{namespace Text{namespace Edit{uClassType* CaretPosition_typeof();}}}}
namespace g{namespace Fuse{namespace Text{namespace Edit{uClassType* Edit_typeof();}}}}
namespace g{namespace Fuse{namespace Text{namespace Edit{uClassType* Selection_typeof();}}}}
namespace g{namespace Fuse{namespace Text{namespace Edit{uStructType* Caret_typeof();}}}}
namespace g{namespace Fuse{namespace Text{namespace Edit{uStructType* Span_typeof();}}}}
namespace g{namespace Fuse{namespace Text{namespace Implementation{struct HarfbuzzFont_type; ::g::Fuse::Text::Implementation::HarfbuzzFont_type* CoreTextFont_typeof();}}}}
namespace g{namespace Fuse{namespace Text{namespace Implementation{struct HarfbuzzFont_type; ::g::Fuse::Text::Implementation::HarfbuzzFont_type* FreeTypeFont_typeof();}}}}
namespace g{namespace Fuse{namespace Text{namespace Implementation{struct HarfbuzzFont_type; HarfbuzzFont_type* HarfbuzzFont_typeof();}}}}
namespace g{namespace Fuse{namespace Text{namespace Implementation{uClassType* CString_typeof();}}}}
namespace g{namespace Fuse{namespace Text{namespace Implementation{uClassType* FreeType_typeof();}}}}
namespace g{namespace Fuse{namespace Text{namespace Implementation{uClassType* FT_Error_typeof();}}}}
namespace g{namespace Fuse{namespace Text{namespace Implementation{uClassType* Harfbuzz_typeof();}}}}
namespace g{namespace Fuse{namespace Text{namespace Implementation{uClassType* Memory_typeof();}}}}
namespace g{namespace Fuse{namespace Text{namespace Implementation{uClassType* UnoString_typeof();}}}}
namespace g{namespace Fuse{namespace Text{struct Batch_type; Batch_type* Batch_typeof();}}}
namespace g{namespace Fuse{namespace Text{struct Font_type; ::g::Fuse::Text::Font_type* FallingBackFont_typeof();}}}
namespace g{namespace Fuse{namespace Text{struct Font_type; ::g::Fuse::Text::Font_type* LazyFont_typeof();}}}
namespace g{namespace Fuse{namespace Text{struct Font_type; Font_type* Font_typeof();}}}
namespace g{namespace Fuse{namespace Text{struct FontFace_type; ::g::Fuse::Text::FontFace_type* FallingBackFontFace_typeof();}}}
namespace g{namespace Fuse{namespace Text{struct FontFace_type; ::g::Fuse::Text::FontFace_type* LazyFontFace_typeof();}}}
namespace g{namespace Fuse{namespace Text{struct FontFace_type; FontFace_type* FontFace_typeof();}}}
namespace g{namespace Fuse{namespace Text{struct FontFace_type; namespace Implementation{::g::Fuse::Text::FontFace_type* CoreTextFontFace_typeof();}}}}
namespace g{namespace Fuse{namespace Text{struct FontFace_type; namespace Implementation{::g::Fuse::Text::FontFace_type* FreeTypeFontFace_typeof();}}}}
namespace g{namespace Fuse{namespace Text{struct GlyphAtlas_type; GlyphAtlas_type* GlyphAtlas_typeof();}}}
namespace g{namespace Fuse{namespace Text{struct Renderer_type; Renderer_type* Renderer_typeof();}}}
namespace g{namespace Fuse{namespace Text{struct ShapedRun__PGEnumerator_type; ShapedRun__PGEnumerator_type* ShapedRun__PGEnumerator_typeof();}}}
namespace g{namespace Fuse{namespace Text{struct ShapedRun_type; ShapedRun_type* ShapedRun_typeof();}}}
namespace g{namespace Fuse{namespace Text{struct SinglyLinkedList__Enumerator_type; SinglyLinkedList__Enumerator_type* SinglyLinkedList__Enumerator_typeof();}}}
namespace g{namespace Fuse{namespace Text{struct SinglyLinkedList_type; SinglyLinkedList_type* SinglyLinkedList_typeof();}}}
namespace g{namespace Fuse{namespace Text{struct Substring__CharEnumerator_type; Substring__CharEnumerator_type* Substring__CharEnumerator_typeof();}}}
namespace g{namespace Fuse{namespace Text{struct Substring__LineEnumerable_type; Substring__LineEnumerable_type* Substring__LineEnumerable_typeof();}}}
namespace g{namespace Fuse{namespace Text{struct Substring__LineEnumerator_type; Substring__LineEnumerator_type* Substring__LineEnumerator_typeof();}}}
namespace g{namespace Fuse{namespace Text{struct Substring_type; Substring_type* Substring_typeof();}}}
namespace g{namespace Fuse{namespace Text{uClassType* Measure_typeof();}}}
namespace g{namespace Fuse{namespace Text{uClassType* Renderer__SharedIndexBuffer_typeof();}}}
namespace g{namespace Fuse{namespace Text{uClassType* Shape_typeof();}}}
namespace g{namespace Fuse{namespace Text{uClassType* SubstringExtensions_typeof();}}}
namespace g{namespace Fuse{namespace Text{uClassType* Truncate_typeof();}}}
namespace g{namespace Fuse{namespace Text{uClassType* Wrap_typeof();}}}
namespace g{namespace Fuse{namespace Text{uStructType* Glyph_typeof();}}}
namespace g{namespace Fuse{namespace Text{uStructType* GlyphTexture_typeof();}}}
namespace g{namespace Fuse{namespace Text{uStructType* PositionedGlyph_typeof();}}}
namespace g{namespace Fuse{namespace Text{uStructType* Quad_typeof();}}}
namespace g{namespace Fuse{namespace Text{uStructType* RenderedGlyph_typeof();}}}
namespace g{namespace Fuse{namespace Text{uStructType* SubTexture_typeof();}}}
namespace g{namespace Fuse{namespace Text{uType* PositionedRun_typeof();}}}
namespace g{namespace Fuse{namespace Text{uType* TextureAtlas_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct DebugFrame_type; DebugFrame_type* DebugFrame_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct DebugProperty_type; DebugProperty_type* DebugProperty_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct DebugTime_type; DebugTime_type* DebugTime_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct JSEventArgs_type; JSEventArgs_type* JSEventArgs_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct LoadHtml_type; LoadHtml_type* LoadHtml_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* BringIntoView_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* BringToFront_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* Callback_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* CancelInteractions_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* Collapse_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* DebugAction_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* EvaluateJS_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* GiveFocus_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* Hide_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* Pause_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* PlaybackAction_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* PlayTo_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* Pulse_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* PulseBackward_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* PulseForward_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* RaiseUserEvent_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* ReleaseFocus_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* ReleasePage_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* Resume_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* SendToBack_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* Set_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* Show_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* Stop_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* Toggle_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* TransitionLayout_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; ::g::Fuse::Triggers::Actions::TriggerAction_type* TransitionState_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type; TriggerAction_type* TriggerAction_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type;}}} namespace Fuse{namespace Gestures{::g::Fuse::Triggers::Actions::TriggerAction_type* ScrollableGoto_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type;}}} namespace Fuse{namespace Gestures{::g::Fuse::Triggers::Actions::TriggerAction_type* ScrollTo_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type;}}} namespace Fuse{namespace Gestures{::g::Fuse::Triggers::Actions::TriggerAction_type* SetSwipeActive_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type;}}} namespace Fuse{namespace Gestures{::g::Fuse::Triggers::Actions::TriggerAction_type* ToggleSwipeActive_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type;}}} namespace Fuse{namespace Navigation{::g::Fuse::Triggers::Actions::TriggerAction_type* RouterModify_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TriggerAction_type;}}} namespace Fuse{namespace Selection{::g::Fuse::Triggers::Actions::TriggerAction_type* ToggleSelection_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct WebViewNavAction_type; ::g::Fuse::Triggers::Actions::WebViewNavAction_type* LoadUrl_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct WebViewNavAction_type; ::g::Fuse::Triggers::Actions::WebViewNavAction_type* Reload_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct WebViewNavAction_type; ::g::Fuse::Triggers::Actions::WebViewNavAction_type* StopLoading_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct WebViewNavAction_type; WebViewNavAction_type* WebViewNavAction_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{uType* UserEventArg_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{struct IScrolledLengths__ContentSizeLength_type; IScrolledLengths__ContentSizeLength_type* IScrolledLengths__ContentSizeLength_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct IScrolledLengths__PixelsLength_type; IScrolledLengths__PixelsLength_type* IScrolledLengths__PixelsLength_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct IScrolledLengths__PointsLength_type; IScrolledLengths__PointsLength_type* IScrolledLengths__PointsLength_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct IScrolledLengths__ScrollViewSizeLength_type; IScrolledLengths__ScrollViewSizeLength_type* IScrolledLengths__ScrollViewSizeLength_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct LayoutTransition__PositionChangeMode_type; LayoutTransition__PositionChangeMode_type* LayoutTransition__PositionChangeMode_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct LayoutTransition__ResizeChangeMode_type; LayoutTransition__ResizeChangeMode_type* LayoutTransition__ResizeChangeMode_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct LayoutTransition__ScaleChangeMode_type; LayoutTransition__ScaleChangeMode_type* LayoutTransition__ScaleChangeMode_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct LayoutTransition__WorldPositionChangeMode_type; LayoutTransition__WorldPositionChangeMode_type* LayoutTransition__WorldPositionChangeMode_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct RemovingAnimation_type; RemovingAnimation_type* RemovingAnimation_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct RemovingAnimation_type;}} namespace Fuse{namespace Controls{namespace NavigationControlBit{::g::Fuse::Triggers::RemovingAnimation_type* NavRemoveHorizontal_typeof();}}}}
namespace g{namespace Fuse{namespace Triggers{struct ScrollingAnimation_type; ::g::Fuse::Triggers::ScrollingAnimation_type* PullToReload_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct ScrollingAnimation_type; ScrollingAnimation_type* ScrollingAnimation_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Timeline_type; Timeline_type* Timeline_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* AddingAnimation_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* Android_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* ContainingText_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* InteractionCompleted_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* iOS_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* LayoutAnimation_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* OnBackButton_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* OnKeyPress_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* OnUserEvent_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* PageBeginLoading_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* PageLoaded_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* ProgressAnimation_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* PulseTrigger_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* RangeAnimation_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* Scrolled_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* State_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* TextInputActionTriggered_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* Transition_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* WhileCompleted_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* WhileContainsText_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* WhileFailed_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* WhileFocused_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* WhileFocusWithin_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* WhileInteracting_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* WhileKeyboardVisible_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* WhileNotFocused_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* WhilePageLoading_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* WhilePaused_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* WhilePlaying_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* WhileScrolled_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* WhileTrigger_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* WhileVisible_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; ::g::Fuse::Triggers::Trigger_type* WhileVisibleInScrollView_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type; Trigger_type* Trigger_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type;}} namespace Fuse{namespace Gestures{::g::Fuse::Triggers::Trigger_type* Clicked_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type;}} namespace Fuse{namespace Gestures{::g::Fuse::Triggers::Trigger_type* ClickerTrigger_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type;}} namespace Fuse{namespace Gestures{::g::Fuse::Triggers::Trigger_type* DoubleClicked_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type;}} namespace Fuse{namespace Gestures{::g::Fuse::Triggers::Trigger_type* DoubleTapped_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type;}} namespace Fuse{namespace Gestures{::g::Fuse::Triggers::Trigger_type* EdgeSwipeAnimation_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type;}} namespace Fuse{namespace Gestures{::g::Fuse::Triggers::Trigger_type* LongPressed_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type;}} namespace Fuse{namespace Gestures{::g::Fuse::Triggers::Trigger_type* Pressed_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type;}} namespace Fuse{namespace Gestures{::g::Fuse::Triggers::Trigger_type* Released_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type;}} namespace Fuse{namespace Gestures{::g::Fuse::Triggers::Trigger_type* Swiped_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type;}} namespace Fuse{namespace Gestures{::g::Fuse::Triggers::Trigger_type* Tapped_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type;}} namespace Fuse{namespace Gestures{::g::Fuse::Triggers::Trigger_type* WhileClickerTrigger_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type;}} namespace Fuse{namespace Gestures{::g::Fuse::Triggers::Trigger_type* WhileHovering_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type;}} namespace Fuse{namespace Gestures{::g::Fuse::Triggers::Trigger_type* WhilePressed_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type;}} namespace Fuse{namespace Navigation{::g::Fuse::Triggers::Trigger_type* WhileNavigating_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type;}} namespace Fuse{namespace Physics{::g::Fuse::Triggers::Trigger_type* WhileDragging_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type;}} namespace Fuse{namespace Reactive{::g::Fuse::Triggers::Trigger_type* Select_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger_type;}} namespace Fuse{namespace Reactive{::g::Fuse::Triggers::Trigger_type* With_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct WhileBool_type; ::g::Fuse::Triggers::WhileBool_type* WhileFalse_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct WhileBool_type; ::g::Fuse::Triggers::WhileBool_type* WhileTrue_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct WhileBool_type; WhileBool_type* WhileBool_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct WhileBool_type;}} namespace Fuse{namespace Controls{::g::Fuse::Triggers::WhileBool_type* ScrollView__DefaultTrigger_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct WhileBusy_type; ::g::Fuse::Triggers::WhileBusy_type* WhileLoading_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct WhileBusy_type; WhileBusy_type* WhileBusy_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct WhileEnabledDisabledTrigger_type; ::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type* WhileDisabled_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct WhileEnabledDisabledTrigger_type; ::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type* WhileEnabled_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct WhileEnabledDisabledTrigger_type; WhileEnabledDisabledTrigger_type* WhileEnabledDisabledTrigger_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct WhileKeyboardVisible__RelativeToKeyboardMode_type; WhileKeyboardVisible__RelativeToKeyboardMode_type* WhileKeyboardVisible__RelativeToKeyboardMode_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct WhileScrollable_type; WhileScrollable_type* WhileScrollable_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct WhileValue_type; ::g::Fuse::Triggers::WhileValue_type* WhileFloat_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct WhileValue_type; ::g::Fuse::Triggers::WhileValue_type* WhileString_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct WhileValue_type; WhileValue_type* WhileValue_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct WindowSizeTrigger_type; ::g::Fuse::Triggers::WindowSizeTrigger_type* WhileWindowAspect_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct WindowSizeTrigger_type; ::g::Fuse::Triggers::WindowSizeTrigger_type* WhileWindowLandscape_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct WindowSizeTrigger_type; ::g::Fuse::Triggers::WindowSizeTrigger_type* WhileWindowPortrait_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct WindowSizeTrigger_type; ::g::Fuse::Triggers::WindowSizeTrigger_type* WhileWindowSize_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{struct WindowSizeTrigger_type; WindowSizeTrigger_type* WindowSizeTrigger_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{uClassType* IScrolledLengths_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{uClassType* LayoutTransition_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{uClassType* WhileValueStatic_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{uType* BusyTask_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{uType* BusyTaskModule__ConstructorClosure_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{uType* ScrolledArgs_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{uType* ScrollRegion_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{uType* StateGroup__GotoImpl_typeof();}}}
namespace g{namespace Fuse{namespace Triggers{uType* TransitionGroup_typeof();}}}
namespace g{namespace Fuse{struct AppBase_type; ::g::Fuse::AppBase_type* App_typeof();}}
namespace g{namespace Fuse{struct AppBase_type; AppBase_type* AppBase_typeof();}}
namespace g{namespace Fuse{struct AppBase_type;} ::g::Fuse::AppBase_type* MainView_typeof();}
namespace g{namespace Fuse{struct Binding_type; Binding_type* Binding_typeof();}}
namespace g{namespace Fuse{struct Binding_type; namespace Reactive{::g::Fuse::Binding_type* SnapshotPropertyBinding_typeof();}}}
namespace g{namespace Fuse{struct Binding_type; namespace Resources{::g::Fuse::Binding_type* ResourceBinding_typeof();}}}
namespace g{namespace Fuse{struct Deferred_type; Deferred_type* Deferred_typeof();}}
namespace g{namespace Fuse{struct FixedViewport_type; FixedViewport_type* FixedViewport_typeof();}}
namespace g{namespace Fuse{struct FramebufferPoolImpl_type; FramebufferPoolImpl_type* FramebufferPoolImpl_typeof();}}
namespace g{namespace Fuse{struct InheritViewport_type; InheritViewport_type* InheritViewport_typeof();}}
namespace g{namespace Fuse{struct Node_type; ::g::Fuse::Node_type* AlternateRoot_typeof();}}
namespace g{namespace Fuse{struct Node_type; ::g::Fuse::Node_type* Behavior_typeof();}}
namespace g{namespace Fuse{struct Node_type; ::g::Fuse::Node_type* UserEvent_typeof();}}
namespace g{namespace Fuse{struct Node_type; namespace Android{::g::Fuse::Node_type* StatusBarConfig_typeof();}}}
namespace g{namespace Fuse{struct Node_type; namespace Controls{::g::Fuse::Node_type* MultiLayout_typeof();}}}
namespace g{namespace Fuse{struct Node_type; namespace Controls{::g::Fuse::Node_type* Shadow_typeof();}}}
namespace g{namespace Fuse{struct Node_type; namespace Gestures{::g::Fuse::Node_type* CircularRangeBehavior_typeof();}}}
namespace g{namespace Fuse{struct Node_type; namespace Gestures{::g::Fuse::Node_type* KeepFocusInView_typeof();}}}
namespace g{namespace Fuse{struct Node_type; namespace Gestures{::g::Fuse::Node_type* KeepInView_typeof();}}}
namespace g{namespace Fuse{struct Node_type; namespace Gestures{::g::Fuse::Node_type* KeepInViewCommon_typeof();}}}
namespace g{namespace Fuse{struct Node_type; namespace Gestures{::g::Fuse::Node_type* LinearRangeBehavior_typeof();}}}
namespace g{namespace Fuse{struct Node_type; namespace iOS{::g::Fuse::Node_type* StatusBarConfig_typeof();}}}
namespace g{namespace Fuse{struct Node_type; namespace Navigation{::g::Fuse::Node_type* SwipeNavigate_typeof();}}}
namespace g{namespace Fuse{struct Node_type; namespace Reactive{::g::Fuse::Node_type* Closure_typeof();}}}
namespace g{namespace Fuse{struct Node_type; namespace Resources{::g::Fuse::Node_type* ResourceBool_typeof();}}}
namespace g{namespace Fuse{struct Node_type; namespace Resources{::g::Fuse::Node_type* ResourceFloat_typeof();}}}
namespace g{namespace Fuse{struct Node_type; namespace Resources{::g::Fuse::Node_type* ResourceFloat2_typeof();}}}
namespace g{namespace Fuse{struct Node_type; namespace Resources{::g::Fuse::Node_type* ResourceFloat3_typeof();}}}
namespace g{namespace Fuse{struct Node_type; namespace Resources{::g::Fuse::Node_type* ResourceFloat4_typeof();}}}
namespace g{namespace Fuse{struct Node_type; namespace Resources{::g::Fuse::Node_type* ResourceObject_typeof();}}}
namespace g{namespace Fuse{struct Node_type; namespace Resources{::g::Fuse::Node_type* ResourceSetter_typeof();}}}
namespace g{namespace Fuse{struct Node_type; namespace Resources{::g::Fuse::Node_type* ResourceString_typeof();}}}
namespace g{namespace Fuse{struct Node_type; namespace Selection{::g::Fuse::Node_type* Selectable_typeof();}}}
namespace g{namespace Fuse{struct Node_type; namespace Triggers{::g::Fuse::Node_type* StateGroup_typeof();}}}
namespace g{namespace Fuse{struct Node_type; Node_type* Node_typeof();}}
namespace g{namespace Fuse{struct OrthographicFrustum_type; OrthographicFrustum_type* OrthographicFrustum_typeof();}}
namespace g{namespace Fuse{struct PerspectiveFrustum_type; PerspectiveFrustum_type* PerspectiveFrustum_typeof();}}
namespace g{namespace Fuse{struct PlacedArgs_type; PlacedArgs_type* PlacedArgs_typeof();}}
namespace g{namespace Fuse{struct RelativeTransform_type; ::g::Fuse::RelativeTransform_type* Scaling_typeof();}}
namespace g{namespace Fuse{struct RelativeTransform_type; ::g::Fuse::RelativeTransform_type* Translation_typeof();}}
namespace g{namespace Fuse{struct RelativeTransform_type; RelativeTransform_type* RelativeTransform_typeof();}}
namespace g{namespace Fuse{struct RootViewport_type; RootViewport_type* RootViewport_typeof();}}
namespace g{namespace Fuse{struct ScalingModes__IdentityMode_type; ScalingModes__IdentityMode_type* ScalingModes__IdentityMode_typeof();}}
namespace g{namespace Fuse{struct Transform_type; ::g::Fuse::Transform_type* Rotation_typeof();}}
namespace g{namespace Fuse{struct Transform_type; ::g::Fuse::Transform_type* Shear_typeof();}}
namespace g{namespace Fuse{struct Transform_type; namespace Animations{::g::Fuse::Transform_type* FastMatrixTransform_typeof();}}}
namespace g{namespace Fuse{struct Transform_type; namespace Elements{::g::Fuse::Transform_type* InteractiveTransform_typeof();}}}
namespace g{namespace Fuse{struct Transform_type; Transform_type* Transform_typeof();}}
namespace g{namespace Fuse{struct TranslationModes__LocalMode_type; TranslationModes__LocalMode_type* TranslationModes__LocalMode_typeof();}}
namespace g{namespace Fuse{struct TranslationModes__ParentSizeMode_type; TranslationModes__ParentSizeMode_type* TranslationModes__ParentSizeMode_typeof();}}
namespace g{namespace Fuse{struct TranslationModes__SizeMode_type; ::g::Fuse::TranslationModes__SizeMode_type* TranslationModes__HeightMode_typeof();}}
namespace g{namespace Fuse{struct TranslationModes__SizeMode_type; ::g::Fuse::TranslationModes__SizeMode_type* TranslationModes__WidthMode_typeof();}}
namespace g{namespace Fuse{struct TranslationModes__SizeMode_type; TranslationModes__SizeMode_type* TranslationModes__SizeMode_typeof();}}
namespace g{namespace Fuse{struct UpdateDispatcher_type; UpdateDispatcher_type* UpdateDispatcher_typeof();}}
namespace g{namespace Fuse{struct UserEventArgs_type; UserEventArgs_type* UserEventArgs_typeof();}}
namespace g{namespace Fuse{struct Visual_type; namespace Controls{namespace Graphics{::g::Fuse::Visual_type* Visual_typeof();}}}}
namespace g{namespace Fuse{struct Visual_type; Visual_type* Visual_typeof();}}
namespace g{namespace Fuse{struct VisualEvent_type; namespace Input{::g::Fuse::VisualEvent_type* FocusGained_typeof();}}}
namespace g{namespace Fuse{struct VisualEvent_type; namespace Input{::g::Fuse::VisualEvent_type* FocusLost_typeof();}}}
namespace g{namespace Fuse{struct VisualEvent_type; namespace Input{::g::Fuse::VisualEvent_type* IsFocusableChangedEvent_typeof();}}}
namespace g{namespace Fuse{struct VisualEvent_type; namespace Input{::g::Fuse::VisualEvent_type* KeyPressed_typeof();}}}
namespace g{namespace Fuse{struct VisualEvent_type; namespace Input{::g::Fuse::VisualEvent_type* KeyReleased_typeof();}}}
namespace g{namespace Fuse{struct VisualEvent_type; namespace Input{::g::Fuse::VisualEvent_type* PointerEntered_typeof();}}}
namespace g{namespace Fuse{struct VisualEvent_type; namespace Input{::g::Fuse::VisualEvent_type* PointerLeft_typeof();}}}
namespace g{namespace Fuse{struct VisualEvent_type; namespace Input{::g::Fuse::VisualEvent_type* PointerMoved_typeof();}}}
namespace g{namespace Fuse{struct VisualEvent_type; namespace Input{::g::Fuse::VisualEvent_type* PointerPressed_typeof();}}}
namespace g{namespace Fuse{struct VisualEvent_type; namespace Input{::g::Fuse::VisualEvent_type* PointerReleased_typeof();}}}
namespace g{namespace Fuse{struct VisualEvent_type; namespace Input{::g::Fuse::VisualEvent_type* PointerWheelMoved_typeof();}}}
namespace g{namespace Fuse{struct VisualEvent_type; namespace Input{::g::Fuse::VisualEvent_type* TextEntered_typeof();}}}
namespace g{namespace Fuse{struct VisualEvent_type; namespace Triggers{::g::Fuse::VisualEvent_type* LayoutTransitioned_typeof();}}}
namespace g{namespace Fuse{struct VisualEvent_type; VisualEvent_type* VisualEvent_typeof();}}
namespace g{namespace Fuse{struct VisualEventArgs_type; namespace Controls{::g::Fuse::VisualEventArgs_type* NavigatorSwitchedArgs_typeof();}}}
namespace g{namespace Fuse{struct VisualEventArgs_type; namespace Controls{::g::Fuse::VisualEventArgs_type* TextInputActionArgs_typeof();}}}
namespace g{namespace Fuse{struct VisualEventArgs_type; namespace Gestures{::g::Fuse::VisualEventArgs_type* ClickedArgs_typeof();}}}
namespace g{namespace Fuse{struct VisualEventArgs_type; namespace Gestures{::g::Fuse::VisualEventArgs_type* DoubleTappedArgs_typeof();}}}
namespace g{namespace Fuse{struct VisualEventArgs_type; namespace Gestures{::g::Fuse::VisualEventArgs_type* LongPressedArgs_typeof();}}}
namespace g{namespace Fuse{struct VisualEventArgs_type; namespace Gestures{::g::Fuse::VisualEventArgs_type* TappedArgs_typeof();}}}
namespace g{namespace Fuse{struct VisualEventArgs_type; namespace Input{::g::Fuse::VisualEventArgs_type* CustomPointerEventArgs_typeof();}}}
namespace g{namespace Fuse{struct VisualEventArgs_type; namespace Input{::g::Fuse::VisualEventArgs_type* FocusGainedArgs_typeof();}}}
namespace g{namespace Fuse{struct VisualEventArgs_type; namespace Input{::g::Fuse::VisualEventArgs_type* FocusLostArgs_typeof();}}}
namespace g{namespace Fuse{struct VisualEventArgs_type; namespace Input{::g::Fuse::VisualEventArgs_type* IsFocusableChangedArgs_typeof();}}}
namespace g{namespace Fuse{struct VisualEventArgs_type; namespace Input{::g::Fuse::VisualEventArgs_type* KeyEventArgs_typeof();}}}
namespace g{namespace Fuse{struct VisualEventArgs_type; namespace Input{::g::Fuse::VisualEventArgs_type* KeyPressedArgs_typeof();}}}
namespace g{namespace Fuse{struct VisualEventArgs_type; namespace Input{::g::Fuse::VisualEventArgs_type* KeyReleasedArgs_typeof();}}}
namespace g{namespace Fuse{struct VisualEventArgs_type; namespace Input{::g::Fuse::VisualEventArgs_type* PointerEnteredArgs_typeof();}}}
namespace g{namespace Fuse{struct VisualEventArgs_type; namespace Input{::g::Fuse::VisualEventArgs_type* PointerEventArgs_typeof();}}}
namespace g{namespace Fuse{struct VisualEventArgs_type; namespace Input{::g::Fuse::VisualEventArgs_type* PointerLeftArgs_typeof();}}}
namespace g{namespace Fuse{struct VisualEventArgs_type; namespace Input{::g::Fuse::VisualEventArgs_type* PointerMovedArgs_typeof();}}}
namespace g{namespace Fuse{struct VisualEventArgs_type; namespace Input{::g::Fuse::VisualEventArgs_type* PointerPressedArgs_typeof();}}}
namespace g{namespace Fuse{struct VisualEventArgs_type; namespace Input{::g::Fuse::VisualEventArgs_type* PointerReleasedArgs_typeof();}}}
namespace g{namespace Fuse{struct VisualEventArgs_type; namespace Input{::g::Fuse::VisualEventArgs_type* PointerWheelMovedArgs_typeof();}}}
namespace g{namespace Fuse{struct VisualEventArgs_type; namespace Input{::g::Fuse::VisualEventArgs_type* TextEnteredArgs_typeof();}}}
namespace g{namespace Fuse{struct VisualEventArgs_type; namespace Triggers{::g::Fuse::VisualEventArgs_type* LayoutTransitionedArgs_typeof();}}}
namespace g{namespace Fuse{struct VisualEventArgs_type; VisualEventArgs_type* VisualEventArgs_typeof();}}
namespace g{namespace Fuse{uClassType* AppRoot_typeof();}}
namespace g{namespace Fuse{uClassType* DeferredManager_typeof();}}
namespace g{namespace Fuse{uClassType* Device_typeof();}}
namespace g{namespace Fuse{uClassType* Diagnostics_typeof();}}
namespace g{namespace Fuse{uClassType* FramebufferPool_typeof();}}
namespace g{namespace Fuse{uClassType* GraphicsWorker_typeof();}}
namespace g{namespace Fuse{uClassType* ILoadingStatic_typeof();}}
namespace g{namespace Fuse{uClassType* iOSDevice_typeof();}}
namespace g{namespace Fuse{uClassType* LayoutPriority_typeof();}}
namespace g{namespace Fuse{uClassType* NameRegistry_typeof();}}
namespace g{namespace Fuse{uClassType* ScalingModes_typeof();}}
namespace g{namespace Fuse{uClassType* TestDeferredManager_typeof();}}
namespace g{namespace Fuse{uClassType* Time_typeof();}}
namespace g{namespace Fuse{uClassType* TranslationModes_typeof();}}
namespace g{namespace Fuse{uClassType* UpdateManager_typeof();}}
namespace g{namespace Fuse{uClassType* ViewportHelpers_typeof();}}
namespace g{namespace Fuse{uClassType* VisualListCache_typeof();}}
namespace g{namespace Fuse{uStructType* LayoutParams_typeof();}}
namespace g{namespace Fuse{uStructType* UpdateAction_typeof();}}
namespace g{namespace Fuse{uStructType* Visual__InteractionItem_typeof();}}
namespace g{namespace Fuse{uType* CacheFramebuffer_typeof();}}
namespace g{namespace Fuse{uType* Diagnostic_typeof();}}
namespace g{namespace Fuse{uType* DrawContext_typeof();}}
namespace g{namespace Fuse{uType* DrawHelpers_typeof();}}
namespace g{namespace Fuse{uType* FastMatrix_typeof();}}
namespace g{namespace Fuse{uType* FastProperty1Link_typeof();}}
namespace g{namespace Fuse{uType* FastProperty1Link1_typeof();}}
namespace g{namespace Fuse{uType* FastProperty2Link_typeof();}}
namespace g{namespace Fuse{uType* FastProperty2Link1_typeof();}}
namespace g{namespace Fuse{uType* Font_typeof();}}
namespace g{namespace Fuse{uType* FrustumViewport_typeof();}}
namespace g{namespace Fuse{uType* HitTestContext_typeof();}}
namespace g{namespace Fuse{uType* HitTestResult_typeof();}}
namespace g{namespace Fuse{uType* KeyboardBootstrapper_typeof();}}
namespace g{namespace Fuse{uType* MobileBootstrapping_typeof();}}
namespace g{namespace Fuse{uType* Node__CallFuncClosure_typeof();}}
namespace g{namespace Fuse{uType* OSVersion_typeof();}}
namespace g{namespace Fuse{uType* PendingRemoveVisual_typeof();}}
namespace g{namespace Fuse{uType* Properties_typeof();}}
namespace g{namespace Fuse{uType* PropertyHandle_typeof();}}
namespace g{namespace Fuse{uType* RenderTargetEntry_typeof();}}
namespace g{namespace Fuse{uType* RequestBringIntoViewArgs_typeof();}}
namespace g{namespace Fuse{uType* Stage_typeof();}}
namespace g{namespace Fuse{uType* SystemFont_typeof();}}
namespace g{namespace Fuse{uType* Timer_typeof();}}
namespace g{namespace Fuse{uType* Toast_typeof();}}
namespace g{namespace Fuse{uType* UnhandledExceptionArgs_typeof();}}
namespace g{namespace Fuse{uType* UpdateListener_typeof();}}
namespace g{namespace Fuse{uType* UserEventDispatch_typeof();}}
namespace g{namespace Fuse{uType* Visual__HitTestRecord_typeof();}}
namespace g{namespace Fuse{uType* VisualBounds_typeof();}}
namespace g{namespace FuseJS{uClassType* Latin1Helpers_typeof();}}
namespace g{namespace FuseJS{uType* Bundle__ReadClosure_typeof();}}
namespace g{namespace FuseJS{uType* FileReaderImpl__FileReadCommand_typeof();}}
namespace g{namespace FuseJS{uType* RaiseEvent_typeof();}}
namespace g{namespace ObjC{uClassType* Helpers_typeof();}}
namespace g{namespace ObjC{uStructType* ID_typeof();}}
namespace g{namespace OpenGL{uClassType* GL_typeof();}}
namespace g{namespace OpenGL{uStructType* GLBufferHandle_typeof();}}
namespace g{namespace OpenGL{uStructType* GLFramebufferHandle_typeof();}}
namespace g{namespace OpenGL{uStructType* GLProgramHandle_typeof();}}
namespace g{namespace OpenGL{uStructType* GLRenderbufferHandle_typeof();}}
namespace g{namespace OpenGL{uStructType* GLShaderHandle_typeof();}}
namespace g{namespace OpenGL{uStructType* GLTextureHandle_typeof();}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Expression_type; ::g::Outracks::Simulator::Bytecode::Expression_type* AddEventHandler_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Expression_type; ::g::Outracks::Simulator::Bytecode::Expression_type* CallDynamicMethod_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Expression_type; ::g::Outracks::Simulator::Bytecode::Expression_type* CallLambda_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Expression_type; ::g::Outracks::Simulator::Bytecode::Expression_type* CallStaticMethod_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Expression_type; ::g::Outracks::Simulator::Bytecode::Expression_type* Instantiate_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Expression_type; ::g::Outracks::Simulator::Bytecode::Expression_type* IsType_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Expression_type; ::g::Outracks::Simulator::Bytecode::Expression_type* Lambda_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Expression_type; ::g::Outracks::Simulator::Bytecode::Expression_type* LogicalOr_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Expression_type; ::g::Outracks::Simulator::Bytecode::Expression_type* MethodGroup_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Expression_type; ::g::Outracks::Simulator::Bytecode::Expression_type* ReadProperty_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Expression_type; ::g::Outracks::Simulator::Bytecode::Expression_type* ReadStaticField_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Expression_type; ::g::Outracks::Simulator::Bytecode::Expression_type* ReadVariable_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Expression_type; ::g::Outracks::Simulator::Bytecode::Expression_type* RemoveEventHandler_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Expression_type; ::g::Outracks::Simulator::Bytecode::Expression_type* WriteProperty_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Expression_type; Expression_type* Expression_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Literal_type; ::g::Outracks::Simulator::Bytecode::Literal_type* BlobLiteral_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Literal_type; ::g::Outracks::Simulator::Bytecode::Literal_type* BooleanLiteral_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Literal_type; ::g::Outracks::Simulator::Bytecode::Literal_type* EnumLiteral_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Literal_type; ::g::Outracks::Simulator::Bytecode::Literal_type* NumberLiteral_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Literal_type; ::g::Outracks::Simulator::Bytecode::Literal_type* StringLiteral_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Literal_type; Literal_type* Literal_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct NamespaceName_type; NamespaceName_type* NamespaceName_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Optional1_type; Optional1_type* Optional1_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Statement_type; ::g::Outracks::Simulator::Bytecode::Statement_type* NoOperation_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Statement_type; ::g::Outracks::Simulator::Bytecode::Statement_type* Return_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Statement_type; Statement_type* Statement_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct StaticMemberName_type; StaticMemberName_type* StaticMemberName_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct TypeMemberName_type; TypeMemberName_type* TypeMemberName_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct TypeName_type; TypeName_type* TypeName_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{struct Variable_type; Variable_type* Variable_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{uClassType* ExpressionIdRegistry_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{uClassType* LiteralIdRegistry_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{uClassType* OptionalExtensions_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{uClassType* StatementIdRegistry_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{uType* BindVariable_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{uType* Optional_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{uType* Parameter_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{uType* Signature_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{uType* TypeNameParser_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Bytecode{uType* TypeNameTokenizer_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Protocol{uType* DebugLog_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Protocol{uType* Error_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Protocol{uType* ExceptionInfo_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Protocol{uType* Execute_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Protocol{uType* MessageFromClient_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Protocol{uType* MessageToClient_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Protocol{uType* RegisterName_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Protocol{uType* Reify_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Protocol{uType* SetSelection_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Protocol{uType* UnhandledException_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Reflection{namespace Native{struct CppEvent_type; CppEvent_type* CppEvent_typeof();}}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Reflection{namespace Native{struct CppProperty_type; CppProperty_type* CppProperty_typeof();}}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Reflection{namespace Native{struct NativeReflection_type; NativeReflection_type* NativeReflection_typeof();}}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Reflection{namespace Native{struct SimpleTypeMap_type; SimpleTypeMap_type* SimpleTypeMap_typeof();}}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Reflection{namespace Native{uClassType* ReflectionCache_typeof();}}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Reflection{namespace Native{uClassType* ReflectionExtensions_typeof();}}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Reflection{namespace Native{uClassType* ReflectionHelpers_typeof();}}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Reflection{namespace Native{uClassType* TryInvokeExtension_typeof();}}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Reflection{struct DelegateReflection_type; DelegateReflection_type* DelegateReflection_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Runtime{struct Selection_type; Selection_type* Selection_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Runtime{uClassType* ObjectPropertyRegistry_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Runtime{uClassType* ObjectTagRegistry_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Runtime{uClassType* VirtualMachine_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Runtime{uType* Environment_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Runtime{uType* LambdaClosure_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Runtime{uType* LazyPropertyStorage_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Runtime{uType* ScopeClosure_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{namespace Runtime{uType* SimulatedObjectTypeRegistry_typeof();}}}}
namespace g{namespace Outracks{namespace Simulator{struct Application_type; ::g::Outracks::Simulator::Application_type* GeneratedApplication_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{struct Application_type; Application_type* Application_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{struct Connected_type; ::g::Outracks::Simulator::Connected_type* Idle_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{struct Connected_type; ::g::Outracks::Simulator::Connected_type* Reifying_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{struct Connected_type; ::g::Outracks::Simulator::Connected_type* Running_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{struct Connected_type; Connected_type* Connected_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{struct ImmutableList_type; ImmutableList_type* ImmutableList_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{struct OfflineSimulatorClient_type; OfflineSimulatorClient_type* OfflineSimulatorClient_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{struct ShowingPrompt_type; ::g::Outracks::Simulator::ShowingPrompt_type* ChangeIp_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{struct ShowingPrompt_type; ShowingPrompt_type* ShowingPrompt_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{struct SimulatorClient_type; SimulatorClient_type* SimulatorClient_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{struct State_type; ::g::Outracks::Simulator::State_type* Connecting_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{struct State_type; ::g::Outracks::Simulator::State_type* ConnectingToHost_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{struct State_type; ::g::Outracks::Simulator::State_type* ConnectingToProxy_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{struct State_type; ::g::Outracks::Simulator::State_type* ConnectionLost_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{struct State_type; ::g::Outracks::Simulator::State_type* FailedToConnect_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{struct State_type; ::g::Outracks::Simulator::State_type* Faulted_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{struct State_type; ::g::Outracks::Simulator::State_type* ShowingModalDialog_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{struct State_type; ::g::Outracks::Simulator::State_type* Uninitialized_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{struct State_type; State_type* State_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{uClassType* AggregateConnectError_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{uClassType* Bundle_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{uClassType* BytecodeCache_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{uClassType* Closure_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{uClassType* ConnectToFirstRespondingEndpoint_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{uClassType* Context_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{uClassType* DeviceInfo_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{uClassType* EnumerableHitTestExtension_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{uClassType* Exceptions_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{uClassType* GoOffline_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{uClassType* IndentString_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{uClassType* List_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{uClassType* Serialization_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{uClassType* StringSplitting_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{uClassType* Tasks_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{uType* Apply_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{uType* ApplyFirst_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{uType* ApplySecond_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{uType* ConcurrentQueue_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{uType* ConnectToEndpointClosure_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{uType* DiagnosticItem_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{uType* DiagnosticShower_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{uType* DialogButton_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{uType* DummyApplication_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{uType* EnumerableHitTestExtension__CollectHitNodesClosure_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{uType* FileCache_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{uType* Forget_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{uType* Forget1_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{uType* ForgetAction_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{uType* GetSimulatorEndpoint_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{uType* LoadingScreen_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{uType* ModalDialog_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{uType* ProxyClient_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{uType* Task_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{uType* TaskThread_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{uType* UserAppState_typeof();}}}
namespace g{namespace Outracks{namespace Simulator{uType* WaitForFirstResult_typeof();}}}
namespace g{namespace Polyfills{namespace Window{struct WindowModule_type; WindowModule_type* WindowModule_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary__Enumerator_type; Dictionary__Enumerator_type* Dictionary__Enumerator_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary__KeyCollection__Enumerator_type; Dictionary__KeyCollection__Enumerator_type* Dictionary__KeyCollection__Enumerator_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary__KeyCollection_type; Dictionary__KeyCollection_type* Dictionary__KeyCollection_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary__ValueCollection__Enumerator_type; Dictionary__ValueCollection__Enumerator_type* Dictionary__ValueCollection__Enumerator_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary__ValueCollection_type; Dictionary__ValueCollection_type* Dictionary__ValueCollection_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary_type; Dictionary_type* Dictionary_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct EmptyEnumerable_type; EmptyEnumerable_type* EmptyEnumerable_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct EmptyEnumerator_type; EmptyEnumerator_type* EmptyEnumerator_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct HashSet__Enumerator_type; HashSet__Enumerator_type* HashSet__Enumerator_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct HashSet_type; HashSet_type* HashSet_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct LinkedList__Enumerator_type; LinkedList__Enumerator_type* LinkedList__Enumerator_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct LinkedList_type; LinkedList_type* LinkedList_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct List__Enumerator_type; List__Enumerator_type* List__Enumerator_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct List_type; List_type* List_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct ObservableList_type; ObservableList_type* ObservableList_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct OfTypeEnumerable_type; OfTypeEnumerable_type* OfTypeEnumerable_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct OfTypeEnumerator_type; OfTypeEnumerator_type* OfTypeEnumerator_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct Queue__Enumerator_type; Queue__Enumerator_type* Queue__Enumerator_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct Queue_type; Queue_type* Queue_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct ReadOnlyCollection_type; ReadOnlyCollection_type* ReadOnlyCollection_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct SelectEnumerable_type; SelectEnumerable_type* SelectEnumerable_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct SelectEnumerator_type; SelectEnumerator_type* SelectEnumerator_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct Stack__Enumerator_type; Stack__Enumerator_type* Stack__Enumerator_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct Stack_type; Stack_type* Stack_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct UnionEnumerable_type; UnionEnumerable_type* UnionEnumerable_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct UnionEnumerator_type; UnionEnumerator_type* UnionEnumerator_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct WhereEnumerable_type; WhereEnumerable_type* WhereEnumerable_typeof();}}}
namespace g{namespace Uno{namespace Collections{struct WhereEnumerator_type; WhereEnumerator_type* WhereEnumerator_typeof();}}}
namespace g{namespace Uno{namespace Collections{uClassType* EnumerableExtensions_typeof();}}}
namespace g{namespace Uno{namespace Collections{uClassType* IListExtensions_typeof();}}}
namespace g{namespace Uno{namespace Collections{uStructType* Dictionary__Bucket_typeof();}}}
namespace g{namespace Uno{namespace Collections{uStructType* KeyValuePair_typeof();}}}
namespace g{namespace Uno{namespace Collections{uStructType* PriorityQueueItem_typeof();}}}
namespace g{namespace Uno{namespace Collections{uType* EnumerableExtensions__LinkedList_typeof();}}}
namespace g{namespace Uno{namespace Collections{uType* LinkedListNode_typeof();}}}
namespace g{namespace Uno{namespace Collections{uType* OrderByCompare_typeof();}}}
namespace g{namespace Uno{namespace Collections{uType* PriorityQueue_typeof();}}}
namespace g{namespace Uno{namespace Compiler{namespace ExportTargetInterop{namespace Android{uType* ForeignFixedNameAttribute_typeof();}}}}}
namespace g{namespace Uno{namespace Compiler{namespace ExportTargetInterop{namespace Foreign{namespace ObjC{struct Object_type; Object_type* Object_typeof();}}}}}}
namespace g{namespace Uno{namespace Compiler{namespace ExportTargetInterop{uType* DontCopyStructAttribute_typeof();}}}}
namespace g{namespace Uno{namespace Compiler{namespace ExportTargetInterop{uType* DontExportAttribute_typeof();}}}}
namespace g{namespace Uno{namespace Compiler{namespace ExportTargetInterop{uType* OptionalAttribute_typeof();}}}}
namespace g{namespace Uno{namespace Compiler{namespace ExportTargetInterop{uType* StaticAttribute_typeof();}}}}
namespace g{namespace Uno{namespace Compiler{namespace ExportTargetInterop{uType* TargetSpecificImplementationAttribute_typeof();}}}}
namespace g{namespace Uno{namespace Compiler{namespace ExportTargetInterop{uType* TargetSpecificTypeAttribute_typeof();}}}}
namespace g{namespace Uno{namespace Compiler{namespace ImportServices{uType* FilenameAttribute_typeof();}}}}
namespace g{namespace Uno{namespace Compiler{namespace ShaderGenerator{uType* ShaderStageInlineAttribute_typeof();}}}}
namespace g{namespace Uno{namespace Compiler{uType* CallerFilePathAttribute_typeof();}}}
namespace g{namespace Uno{namespace Compiler{uType* CallerLineNumberAttribute_typeof();}}}
namespace g{namespace Uno{namespace Compiler{uType* CallerMemberNameAttribute_typeof();}}}
namespace g{namespace Uno{namespace Compiler{uType* CallerPackageNameAttribute_typeof();}}}
namespace g{namespace Uno{namespace Compiler{uType* HideFromCodeCompleterAttribute_typeof();}}}
namespace g{namespace Uno{namespace Compiler{uType* IgnoreMainClassAttribute_typeof();}}}
namespace g{namespace Uno{namespace Compiler{uType* MainClassAttribute_typeof();}}}
namespace g{namespace Uno{namespace Compiler{uType* UxGeneratedAttribute_typeof();}}}
namespace g{namespace Uno{namespace Content{namespace Fonts{struct BitmapFont_type; BitmapFont_type* BitmapFont_typeof();}}}}
namespace g{namespace Uno{namespace Content{namespace Fonts{struct FontFace_type; ::g::Uno::Content::Fonts::FontFace_type* CppFontFace_typeof();}}}}
namespace g{namespace Uno{namespace Content{namespace Fonts{struct FontFace_type; FontFace_type* FontFace_typeof();}}}}
namespace g{namespace Uno{namespace Content{namespace Fonts{struct TextShader_type; ::g::Uno::Content::Fonts::TextShader_type* SdfFontShader_typeof();}}}}
namespace g{namespace Uno{namespace Content{namespace Fonts{struct TextShader_type; ::g::Uno::Content::Fonts::TextShader_type* SpriteFontShader_typeof();}}}}
namespace g{namespace Uno{namespace Content{namespace Fonts{struct TextShader_type; TextShader_type* TextShader_typeof();}}}}
namespace g{namespace Uno{namespace Content{namespace Fonts{struct TextTransform_type; ::g::Uno::Content::Fonts::TextTransform_type* DefaultTextTransform_typeof();}}}}
namespace g{namespace Uno{namespace Content{namespace Fonts{struct TextTransform_type; TextTransform_type* TextTransform_typeof();}}}}
namespace g{namespace Uno{namespace Content{namespace Fonts{struct TextTransform_type;}}} namespace Fuse{namespace Controls{namespace FallbackTextRenderer{::g::Uno::Content::Fonts::TextTransform_type* ProperTextTransform_typeof();}}}}
namespace g{namespace Uno{namespace Content{namespace Fonts{uClassType* FontFaceHelpers_typeof();}}}}
namespace g{namespace Uno{namespace Content{namespace Fonts{uStructType* BitmapFont__CharPair_typeof();}}}}
namespace g{namespace Uno{namespace Content{namespace Fonts{uStructType* BitmapFont__GlyphInfo_typeof();}}}}
namespace g{namespace Uno{namespace Content{namespace Fonts{uStructType* CppFontFaceHandle_typeof();}}}}
namespace g{namespace Uno{namespace Content{namespace Fonts{uStructType* RenderedGlyph_typeof();}}}}
namespace g{namespace Uno{namespace Content{namespace Fonts{uType* TextRenderer_typeof();}}}}
namespace g{namespace Uno{namespace Content{namespace Fonts{uType* TextShaderData_typeof();}}}}
namespace g{namespace Uno{namespace Content{namespace Images{uType* Bitmap_typeof();}}}}
namespace g{namespace Uno{namespace Content{namespace Models{uType* IndexArray_typeof();}}}}
namespace g{namespace Uno{namespace Content{namespace Models{uType* ModelMesh_typeof();}}}}
namespace g{namespace Uno{namespace Content{namespace Models{uType* VertexAttributeArray_typeof();}}}}
namespace g{namespace Uno{namespace Content{namespace Splines{struct Spline_type; ::g::Uno::Content::Splines::Spline_type* KeyframedSpline_typeof();}}}}
namespace g{namespace Uno{namespace Content{namespace Splines{struct Spline_type; ::g::Uno::Content::Splines::Spline_type* LinearSplineFloat_typeof();}}}}
namespace g{namespace Uno{namespace Content{namespace Splines{struct Spline_type; ::g::Uno::Content::Splines::Spline_type* LinearSplineFloat2_typeof();}}}}
namespace g{namespace Uno{namespace Content{namespace Splines{struct Spline_type; ::g::Uno::Content::Splines::Spline_type* LinearSplineFloat3_typeof();}}}}
namespace g{namespace Uno{namespace Content{namespace Splines{struct Spline_type; ::g::Uno::Content::Splines::Spline_type* LinearSplineFloat4_typeof();}}}}
namespace g{namespace Uno{namespace Content{namespace Splines{struct Spline_type; ::g::Uno::Content::Splines::Spline_type* LinearSplineFloat4x4_typeof();}}}}
namespace g{namespace Uno{namespace Content{namespace Splines{struct Spline_type; Spline_type* Spline_typeof();}}}}
namespace g{namespace Uno{namespace Content{namespace Splines{uStructType* KeyframedSpline__Key_typeof();}}}}
namespace g{namespace Uno{namespace Data{namespace Xml{struct XmlLinkedNode_type; ::g::Uno::Data::Xml::XmlLinkedNode_type* XmlCharacterData_typeof();}}}}
namespace g{namespace Uno{namespace Data{namespace Xml{struct XmlLinkedNode_type; ::g::Uno::Data::Xml::XmlLinkedNode_type* XmlComment_typeof();}}}}
namespace g{namespace Uno{namespace Data{namespace Xml{struct XmlLinkedNode_type; ::g::Uno::Data::Xml::XmlLinkedNode_type* XmlDeclaration_typeof();}}}}
namespace g{namespace Uno{namespace Data{namespace Xml{struct XmlLinkedNode_type; ::g::Uno::Data::Xml::XmlLinkedNode_type* XmlDocumentElement_typeof();}}}}
namespace g{namespace Uno{namespace Data{namespace Xml{struct XmlLinkedNode_type; ::g::Uno::Data::Xml::XmlLinkedNode_type* XmlElement_typeof();}}}}
namespace g{namespace Uno{namespace Data{namespace Xml{struct XmlLinkedNode_type; ::g::Uno::Data::Xml::XmlLinkedNode_type* XmlProcessingInstruction_typeof();}}}}
namespace g{namespace Uno{namespace Data{namespace Xml{struct XmlLinkedNode_type; ::g::Uno::Data::Xml::XmlLinkedNode_type* XmlText_typeof();}}}}
namespace g{namespace Uno{namespace Data{namespace Xml{struct XmlLinkedNode_type; XmlLinkedNode_type* XmlLinkedNode_typeof();}}}}
namespace g{namespace Uno{namespace Data{namespace Xml{struct XmlNode_type; ::g::Uno::Data::Xml::XmlNode_type* XmlAttribute_typeof();}}}}
namespace g{namespace Uno{namespace Data{namespace Xml{struct XmlNode_type; XmlNode_type* XmlNode_typeof();}}}}
namespace g{namespace Uno{namespace Data{namespace Xml{struct XmlNodeCollectionBase_type; ::g::Uno::Data::Xml::XmlNodeCollectionBase_type* XmlAttributeCollection_typeof();}}}}
namespace g{namespace Uno{namespace Data{namespace Xml{struct XmlNodeCollectionBase_type; ::g::Uno::Data::Xml::XmlNodeCollectionBase_type* XmlLinkedNodeCollection_typeof();}}}}
namespace g{namespace Uno{namespace Data{namespace Xml{struct XmlNodeCollectionBase_type; XmlNodeCollectionBase_type* XmlNodeCollectionBase_typeof();}}}}
namespace g{namespace Uno{namespace Data{namespace Xml{uStructType* TargetSpecificXmlNode_typeof();}}}}
namespace g{namespace Uno{namespace Data{namespace Xml{uType* AttributeHandleConverter_typeof();}}}}
namespace g{namespace Uno{namespace Data{namespace Xml{uType* ValidationHelper_typeof();}}}}
namespace g{namespace Uno{namespace Data{namespace Xml{uType* XmlAttributeHandle_typeof();}}}}
namespace g{namespace Uno{namespace Data{namespace Xml{uType* XmlDocument_typeof();}}}}
namespace g{namespace Uno{namespace Data{namespace Xml{uType* XmlEncodingHelper_typeof();}}}}
namespace g{namespace Uno{namespace Data{namespace Xml{uType* XmlNodeHandle_typeof();}}}}
namespace g{namespace Uno{namespace Data{namespace Xml{uType* XmlNodeHandleConverter_typeof();}}}}
namespace g{namespace Uno{namespace Data{namespace Xml{uType* XmlNodeImpl_typeof();}}}}
namespace g{namespace Uno{namespace Data{namespace Xml{uType* XmlValue_typeof();}}}}
namespace g{namespace Uno{namespace Diagnostics{struct ProfileEvent_type; ::g::Uno::Diagnostics::ProfileEvent_type* AllocateEvent_typeof();}}}
namespace g{namespace Uno{namespace Diagnostics{struct ProfileEvent_type; ::g::Uno::Diagnostics::ProfileEvent_type* EnterEvent_typeof();}}}
namespace g{namespace Uno{namespace Diagnostics{struct ProfileEvent_type; ::g::Uno::Diagnostics::ProfileEvent_type* ExitEvent_typeof();}}}
namespace g{namespace Uno{namespace Diagnostics{struct ProfileEvent_type; ::g::Uno::Diagnostics::ProfileEvent_type* FreeEvent_typeof();}}}
namespace g{namespace Uno{namespace Diagnostics{struct ProfileEvent_type; ProfileEvent_type* ProfileEvent_typeof();}}}
namespace g{namespace Uno{namespace Diagnostics{uClassType* Clock_typeof();}}}
namespace g{namespace Uno{namespace Diagnostics{uClassType* Debug_typeof();}}}
namespace g{namespace Uno{namespace Diagnostics{uClassType* Profile_typeof();}}}
namespace g{namespace Uno{namespace Diagnostics{uType* AlwaysProfileAttribute_typeof();}}}
namespace g{namespace Uno{namespace Diagnostics{uType* IdMap_typeof();}}}
namespace g{namespace Uno{namespace Diagnostics{uType* NeverProfileAttribute_typeof();}}}
namespace g{namespace Uno{namespace Diagnostics{uType* ProfileData_typeof();}}}
namespace g{namespace Uno{namespace Geometry{struct VertexEnumerable_type; VertexEnumerable_type* VertexEnumerable_typeof();}}}
namespace g{namespace Uno{namespace Geometry{struct VertexEnumerator_type; VertexEnumerator_type* VertexEnumerator_typeof();}}}
namespace g{namespace Uno{namespace Geometry{uClassType* Collision_typeof();}}}
namespace g{namespace Uno{namespace Geometry{uClassType* Collision2D_typeof();}}}
namespace g{namespace Uno{namespace Geometry{uStructType* Box_typeof();}}}
namespace g{namespace Uno{namespace Geometry{uStructType* Ray_typeof();}}}
namespace g{namespace Uno{namespace Geometry{uType* CubicBezier_typeof();}}}
namespace g{namespace Uno{namespace Geometry{uType* Triangle2D_typeof();}}}
namespace g{namespace Uno{namespace Geometry{uType* Vertex_typeof();}}}
namespace g{namespace Uno{namespace Graphics{struct DeviceBuffer_type; ::g::Uno::Graphics::DeviceBuffer_type* IndexBuffer_typeof();}}}
namespace g{namespace Uno{namespace Graphics{struct DeviceBuffer_type; ::g::Uno::Graphics::DeviceBuffer_type* VertexBuffer_typeof();}}}
namespace g{namespace Uno{namespace Graphics{struct DeviceBuffer_type; DeviceBuffer_type* DeviceBuffer_typeof();}}}
namespace g{namespace Uno{namespace Graphics{struct Framebuffer_type; Framebuffer_type* Framebuffer_typeof();}}}
namespace g{namespace Uno{namespace Graphics{struct RenderTarget_type; RenderTarget_type* RenderTarget_typeof();}}}
namespace g{namespace Uno{namespace Graphics{struct Texture2D_type; Texture2D_type* Texture2D_typeof();}}}
namespace g{namespace Uno{namespace Graphics{struct TextureCube_type; TextureCube_type* TextureCube_typeof();}}}
namespace g{namespace Uno{namespace Graphics{struct VideoTexture_type; VideoTexture_type* VideoTexture_typeof();}}}
namespace g{namespace Uno{namespace Graphics{uClassType* FormatHelpers_typeof();}}}
namespace g{namespace Uno{namespace Graphics{uClassType* IndexTypeHelpers_typeof();}}}
namespace g{namespace Uno{namespace Graphics{uClassType* TextureHelpers_typeof();}}}
namespace g{namespace Uno{namespace Graphics{uClassType* VertexAttributeTypeHelpers_typeof();}}}
namespace g{namespace Uno{namespace Graphics{uStructType* SamplerState_typeof();}}}
namespace g{namespace Uno{namespace Graphics{uStructType* VertexAttributeInfo_typeof();}}}
namespace g{namespace Uno{namespace Graphics{uType* GraphicsContext_typeof();}}}
namespace g{namespace Uno{namespace IO{struct BinaryReader_type; BinaryReader_type* BinaryReader_typeof();}}}
namespace g{namespace Uno{namespace IO{struct BinaryWriter_type; BinaryWriter_type* BinaryWriter_typeof();}}}
namespace g{namespace Uno{namespace IO{struct FileSystemEnumerable_type; FileSystemEnumerable_type* FileSystemEnumerable_typeof();}}}
namespace g{namespace Uno{namespace IO{struct FileSystemEnumerator_type; FileSystemEnumerator_type* FileSystemEnumerator_typeof();}}}
namespace g{namespace Uno{namespace IO{struct Stream_type; ::g::Uno::IO::Stream_type* CppXliStream_typeof();}}}
namespace g{namespace Uno{namespace IO{struct Stream_type; ::g::Uno::IO::Stream_type* MemoryStream_typeof();}}}
namespace g{namespace Uno{namespace IO{struct Stream_type; Stream_type* Stream_typeof();}}}
namespace g{namespace Uno{namespace IO{struct Stream_type;}} namespace Experimental{namespace Cache{::g::Uno::IO::Stream_type* ProxyStream_typeof();}}}
namespace g{namespace Uno{namespace IO{struct Stream_type;}} namespace Outracks{namespace Simulator{::g::Uno::IO::Stream_type* ArrayStream_typeof();}}}
namespace g{namespace Uno{namespace IO{struct Stream_type;}} namespace Uno{namespace Net{namespace Sockets{::g::Uno::IO::Stream_type* NetworkStream_typeof();}}}}
namespace g{namespace Uno{namespace IO{struct TextReader_type; ::g::Uno::IO::TextReader_type* StreamReader_typeof();}}}
namespace g{namespace Uno{namespace IO{struct TextReader_type; ::g::Uno::IO::TextReader_type* StringReader_typeof();}}}
namespace g{namespace Uno{namespace IO{struct TextReader_type; TextReader_type* TextReader_typeof();}}}
namespace g{namespace Uno{namespace IO{struct TextWriter_type; ::g::Uno::IO::TextWriter_type* StreamWriter_typeof();}}}
namespace g{namespace Uno{namespace IO{struct TextWriter_type; ::g::Uno::IO::TextWriter_type* StringWriter_typeof();}}}
namespace g{namespace Uno{namespace IO{struct TextWriter_type; TextWriter_type* TextWriter_typeof();}}}
namespace g{namespace Uno{namespace IO{uClassType* Directory_typeof();}}}
namespace g{namespace Uno{namespace IO{uClassType* File_typeof();}}}
namespace g{namespace Uno{namespace IO{uClassType* FileSystemEnumeratorImpl_typeof();}}}
namespace g{namespace Uno{namespace IO{uClassType* FileSystemImpl_typeof();}}}
namespace g{namespace Uno{namespace IO{uClassType* Path_typeof();}}}
namespace g{namespace Uno{namespace IO{uStructType* CppXliStreamHandle_typeof();}}}
namespace g{namespace Uno{namespace IO{uStructType* FileSystemEnumeratorHandle_typeof();}}}
namespace g{namespace Uno{namespace IO{uType* Bundle_typeof();}}}
namespace g{namespace Uno{namespace IO{uType* BundleFile_typeof();}}}
namespace g{namespace Uno{namespace Net{namespace Http{namespace Implementation{struct iOSHttpRequest_type; iOSHttpRequest_type* iOSHttpRequest_typeof();}}}}}
namespace g{namespace Uno{namespace Net{namespace Http{namespace Implementation{uClassType* iOSHttpSharedCache_typeof();}}}}}
namespace g{namespace Uno{namespace Net{namespace Http{namespace Implementation{uStructType* iOSHttpRequestHandle_typeof();}}}}}
namespace g{namespace Uno{namespace Net{namespace Http{struct HttpDefaultDispatcher_type; HttpDefaultDispatcher_type* HttpDefaultDispatcher_typeof();}}}}
namespace g{namespace Uno{namespace Net{namespace Http{struct HttpMessageHandler_type; HttpMessageHandler_type* HttpMessageHandler_typeof();}}}}
namespace g{namespace Uno{namespace Net{namespace Http{struct HttpMessageHandlerRequest_type; HttpMessageHandlerRequest_type* HttpMessageHandlerRequest_typeof();}}}}
namespace g{namespace Uno{namespace Net{namespace Http{uClassType* HttpMessageCache_typeof();}}}}
namespace g{namespace Uno{namespace Net{namespace Http{uClassType* HttpMessageHandler__StaticData_typeof();}}}}
namespace g{namespace Uno{namespace Net{namespace Http{uClassType* HttpStatusReasonPhrase_typeof();}}}}
namespace g{namespace Uno{namespace Net{namespace Http{uStructType* SchemeParserResult_typeof();}}}}
namespace g{namespace Uno{namespace Net{namespace Http{uType* AbsolutePathParser_typeof();}}}}
namespace g{namespace Uno{namespace Net{namespace Http{uType* HashParser_typeof();}}}}
namespace g{namespace Uno{namespace Net{namespace Http{uType* HostInfo_typeof();}}}}
namespace g{namespace Uno{namespace Net{namespace Http{uType* HostInfoParser_typeof();}}}}
namespace g{namespace Uno{namespace Net{namespace Http{uType* HttpMessageHandlerRequest__DispatchClosure_typeof();}}}}
namespace g{namespace Uno{namespace Net{namespace Http{uType* HttpMessageHandlerRequest__DispatchClosure1_typeof();}}}}
namespace g{namespace Uno{namespace Net{namespace Http{uType* QueryParser_typeof();}}}}
namespace g{namespace Uno{namespace Net{namespace Http{uType* SchemeParser_typeof();}}}}
namespace g{namespace Uno{namespace Net{namespace Http{uType* UriScheme_typeof();}}}}
namespace g{namespace Uno{namespace Net{namespace Http{uType* UserInfoParser_typeof();}}}}
namespace g{namespace Uno{namespace Net{namespace Sockets{struct Socket_type; Socket_type* Socket_typeof();}}}}
namespace g{namespace Uno{namespace Net{namespace Sockets{uStructType* Socket__SocketHandle_typeof();}}}}
namespace g{namespace Uno{namespace Net{namespace Sockets{uType* SocketHelpers_typeof();}}}}
namespace g{namespace Uno{namespace Net{uType* Dns_typeof();}}}
namespace g{namespace Uno{namespace Net{uType* EndPoint_typeof();}}}
namespace g{namespace Uno{namespace Net{uType* IPAddress_typeof();}}}
namespace g{namespace Uno{namespace Net{uType* IPEndPoint_typeof();}}}
namespace g{namespace Uno{namespace Net{uType* NetworkHelpers_typeof();}}}
namespace g{namespace Uno{namespace Platform{namespace iOS{uClassType* Application_typeof();}}}}
namespace g{namespace Uno{namespace Platform{namespace iOS{uClassType* StatusBar_typeof();}}}}
namespace g{namespace Uno{namespace Platform{uClassType* SystemUI_typeof();}}}
namespace g{namespace Uno{namespace Platform{uStructType* ViewNativeHandle_typeof();}}}
namespace g{namespace Uno{namespace Platform{uType* ClosingEventArgs_typeof();}}}
namespace g{namespace Uno{namespace Platform{uType* FrameChangedEventArgs_typeof();}}}
namespace g{namespace Uno{namespace Platform{uType* KeyEventArgs_typeof();}}}
namespace g{namespace Uno{namespace Platform{uType* PointerEventArgs_typeof();}}}
namespace g{namespace Uno{namespace Platform{uType* SystemUIWillResizeEventArgs_typeof();}}}
namespace g{namespace Uno{namespace Platform{uType* TextInputEventArgs_typeof();}}}
namespace g{namespace Uno{namespace Platform{uType* TimerEventArgs_typeof();}}}
namespace g{namespace Uno{namespace Platform{uType* Window_typeof();}}}
namespace g{namespace Uno{namespace Platform2{namespace Implementation{uType* InvokedFromNativeCodeAttribute_typeof();}}}}
namespace g{namespace Uno{namespace Platform2{uClassType* Application_typeof();}}}
namespace g{namespace Uno{namespace Platform2{uStructType* Display__PrivateState_typeof();}}}
namespace g{namespace Uno{namespace Platform2{uType* Display_typeof();}}}
namespace g{namespace Uno{namespace Reflection{struct CppField_type; CppField_type* CppField_typeof();}}}
namespace g{namespace Uno{namespace Reflection{struct CppFunction_type; CppFunction_type* CppFunction_typeof();}}}
namespace g{namespace Uno{namespace Reflection{uType* CppReflection_typeof();}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace Internal{struct ArrayEnumerable_type; ArrayEnumerable_type* ArrayEnumerable_typeof();}}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace Internal{struct ArrayEnumerator_type; ArrayEnumerator_type* ArrayEnumerator_typeof();}}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace Internal{struct ArrayList_type; ArrayList_type* ArrayList_typeof();}}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace Internal{struct FormatStringToken_type; ::g::Uno::Runtime::Implementation::Internal::FormatStringToken_type* FormatStringItem_typeof();}}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace Internal{struct FormatStringToken_type; ::g::Uno::Runtime::Implementation::Internal::FormatStringToken_type* FormatStringLiteral_typeof();}}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace Internal{struct FormatStringToken_type; FormatStringToken_type* FormatStringToken_typeof();}}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace Internal{uClassType* BootstrapHints_typeof();}}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace Internal{uClassType* Bootstrapper_typeof();}}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace Internal{uClassType* BufferConverters_typeof();}}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace Internal{uClassType* NumericFormatter_typeof();}}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace Internal{uClassType* WindowHelpers_typeof();}}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace Internal{uType* BufferReader_typeof();}}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace Internal{uType* FormatStringTokenizer_typeof();}}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace ShaderBackends{namespace OpenGL{struct GLCompiledProgram_type; GLCompiledProgram_type* GLCompiledProgram_typeof();}}}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace ShaderBackends{namespace OpenGL{uClassType* GLHelpers_typeof();}}}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace ShaderBackends{namespace OpenGL{uClassType* GLInterop_typeof();}}}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace ShaderBackends{namespace OpenGL{uStructType* GLDrawCall_typeof();}}}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace ShaderBackends{namespace OpenGL{uType* GLProgram_typeof();}}}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{uClassType* ArrayCopyImpl_typeof();}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{uClassType* ArraySortImpl_typeof();}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{uClassType* BufferImpl_typeof();}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{uClassType* ClockImpl_typeof();}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{uClassType* DebugImpl_typeof();}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{uClassType* GenericEqualsImpl_typeof();}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{uClassType* GraphicsContextImpl_typeof();}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{uClassType* PlatformWindowImpl_typeof();}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{uClassType* TextEncodingImpl_typeof();}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{uStructType* GraphicsContextHandle_typeof();}}}}
namespace g{namespace Uno{namespace Runtime{namespace Implementation{uStructType* PlatformWindowHandle_typeof();}}}}
namespace g{namespace Uno{namespace Testing{uType* NamedTestMethod_typeof();}}}
namespace g{namespace Uno{namespace Testing{uType* Registry_typeof();}}}
namespace g{namespace Uno{namespace Testing{uType* TestAttribute_typeof();}}}
namespace g{namespace Uno{namespace Text{struct Decoder_type; ::g::Uno::Text::Decoder_type* UTF8Decoder_typeof();}}}
namespace g{namespace Uno{namespace Text{struct Decoder_type; Decoder_type* Decoder_typeof();}}}
namespace g{namespace Uno{namespace Text{struct Encoding_type; ::g::Uno::Text::Encoding_type* UTF8Encoding_typeof();}}}
namespace g{namespace Uno{namespace Text{struct Encoding_type; Encoding_type* Encoding_typeof();}}}
namespace g{namespace Uno{namespace Text{uClassType* Ascii_typeof();}}}
namespace g{namespace Uno{namespace Text{uClassType* Base64_typeof();}}}
namespace g{namespace Uno{namespace Text{uClassType* Utf8_typeof();}}}
namespace g{namespace Uno{namespace Text{uType* StringBuilder_typeof();}}}
namespace g{namespace Uno{namespace Text{uType* StringBuilderElement_typeof();}}}
namespace g{namespace Uno{namespace Threading{struct AutoResetEvent_type; ::g::Uno::Threading::AutoResetEvent_type* PosixAutoResetEvent_typeof();}}}
namespace g{namespace Uno{namespace Threading{struct AutoResetEvent_type; AutoResetEvent_type* AutoResetEvent_typeof();}}}
namespace g{namespace Uno{namespace Threading{struct ConcurrentDictionary_type; ConcurrentDictionary_type* ConcurrentDictionary_typeof();}}}
namespace g{namespace Uno{namespace Threading{struct ConcurrentQueue_type; ConcurrentQueue_type* ConcurrentQueue_typeof();}}}
namespace g{namespace Uno{namespace Threading{struct Future_type; ::g::Uno::Threading::Future_type* Future1_typeof();}}}
namespace g{namespace Uno{namespace Threading{struct Future_type; ::g::Uno::Threading::Future_type* Promise_typeof();}}}
namespace g{namespace Uno{namespace Threading{struct Future_type; ::g::Uno::Threading::Future_type* TaskFuture_typeof();}}}
namespace g{namespace Uno{namespace Threading{struct Future_type; Future_type* Future_typeof();}}}
namespace g{namespace Uno{namespace Threading{struct Future_type;}} namespace Fuse{namespace Controls{namespace VideoImpl{namespace iOS{::g::Uno::Threading::Future_type* VideoLoader__VideoPromise_typeof();}}}}}
namespace g{namespace Uno{namespace Threading{struct LockGuard_type; LockGuard_type* LockGuard_typeof();}}}
namespace g{namespace Uno{namespace Threading{struct ManualResetEvent_type; ::g::Uno::Threading::ManualResetEvent_type* PosixManualResetEvent_typeof();}}}
namespace g{namespace Uno{namespace Threading{struct ManualResetEvent_type; ManualResetEvent_type* ManualResetEvent_typeof();}}}
namespace g{namespace Uno{namespace Threading{struct Mutex_type; ::g::Uno::Threading::Mutex_type* POSIXMutex_typeof();}}}
namespace g{namespace Uno{namespace Threading{struct Mutex_type; Mutex_type* Mutex_typeof();}}}
namespace g{namespace Uno{namespace Threading{struct SyncDispatcher_type; SyncDispatcher_type* SyncDispatcher_typeof();}}}
namespace g{namespace Uno{namespace Threading{struct Task_type; Task_type* Task_typeof();}}}
namespace g{namespace Uno{namespace Threading{struct Thread_type; ::g::Uno::Threading::Thread_type* POSIXThread_typeof();}}}
namespace g{namespace Uno{namespace Threading{struct Thread_type; Thread_type* Thread_typeof();}}}
namespace g{namespace Uno{namespace Threading{struct ThreadPool__WorkItem_type; ::g::Uno::Threading::ThreadPool__WorkItem_type* ThreadPool__DefaultWorkItem_typeof();}}}
namespace g{namespace Uno{namespace Threading{struct ThreadPool__WorkItem_type; ::g::Uno::Threading::ThreadPool__WorkItem_type* ThreadPool__ParameterizedWorkItem_typeof();}}}
namespace g{namespace Uno{namespace Threading{struct ThreadPool__WorkItem_type; ThreadPool__WorkItem_type* ThreadPool__WorkItem_typeof();}}}
namespace g{namespace Uno{namespace Threading{struct ThreadPool_type; ThreadPool_type* ThreadPool_typeof();}}}
namespace g{namespace Uno{namespace Threading{struct ThreadPoolTaskScheduler_type; ThreadPoolTaskScheduler_type* ThreadPoolTaskScheduler_typeof();}}}
namespace g{namespace Uno{namespace Threading{uClassType* IDispatcherExtensions_typeof();}}}
namespace g{namespace Uno{namespace Threading{uClassType* Monitor_typeof();}}}
namespace g{namespace Uno{namespace Threading{uType* CancellationToken_typeof();}}}
namespace g{namespace Uno{namespace Threading{uType* CancellationTokenSource_typeof();}}}
namespace g{namespace Uno{namespace Threading{uType* Future1__Closure_typeof();}}}
namespace g{namespace Uno{namespace Threading{uType* IDispatcherExtensions__Arg1Invoke_typeof();}}}
namespace g{namespace Uno{namespace Threading{uType* IDispatcherExtensions__Arg1InvokeFunc_typeof();}}}
namespace g{namespace Uno{namespace Threading{uType* IDispatcherExtensions__Arg2Invoke_typeof();}}}
namespace g{namespace Uno{namespace Threading{uType* MainThreadAttribute_typeof();}}}
namespace g{namespace Uno{namespace Threading{uType* POSIXThread__ReleasingLauncher_typeof();}}}
namespace g{namespace Uno{namespace Time{namespace Calendars{struct YearMonthDayCalculator_type; ::g::Uno::Time::Calendars::YearMonthDayCalculator_type* GregorianYearMonthDayCalculator_typeof();}}}}
namespace g{namespace Uno{namespace Time{namespace Calendars{struct YearMonthDayCalculator_type; YearMonthDayCalculator_type* YearMonthDayCalculator_typeof();}}}}
namespace g{namespace Uno{namespace Time{namespace Calendars{uClassType* TimeOfDayCalculator_typeof();}}}}
namespace g{namespace Uno{namespace Time{namespace Calendars{uType* Era_typeof();}}}}
namespace g{namespace Uno{namespace Time{namespace Calendars{uType* WeekYearCalculator_typeof();}}}}
namespace g{namespace Uno{namespace Time{namespace Text{struct PatternPart_type; ::g::Uno::Time::Text::PatternPart_type* NumberPart_typeof();}}}}
namespace g{namespace Uno{namespace Time{namespace Text{struct PatternPart_type; ::g::Uno::Time::Text::PatternPart_type* OffsetPatternPart_typeof();}}}}
namespace g{namespace Uno{namespace Time{namespace Text{struct PatternPart_type; ::g::Uno::Time::Text::PatternPart_type* RangeNumberPart_typeof();}}}}
namespace g{namespace Uno{namespace Time{namespace Text{struct PatternPart_type; ::g::Uno::Time::Text::PatternPart_type* SeparatorPart_typeof();}}}}
namespace g{namespace Uno{namespace Time{namespace Text{struct PatternPart_type; ::g::Uno::Time::Text::PatternPart_type* SignPart_typeof();}}}}
namespace g{namespace Uno{namespace Time{namespace Text{struct PatternPart_type; PatternPart_type* PatternPart_typeof();}}}}
namespace g{namespace Uno{namespace Time{namespace Text{uType* FixedFormatPattern_typeof();}}}}
namespace g{namespace Uno{namespace Time{namespace Text{uType* LocalDatePattern__LocalDateBucket_typeof();}}}}
namespace g{namespace Uno{namespace Time{namespace Text{uType* LocalDatePattern_typeof();}}}}
namespace g{namespace Uno{namespace Time{namespace Text{uType* LocalDateTimePattern__LocalDateTimeBucket_typeof();}}}}
namespace g{namespace Uno{namespace Time{namespace Text{uType* LocalDateTimePattern_typeof();}}}}
namespace g{namespace Uno{namespace Time{namespace Text{uType* LocalTimePattern__LocalTimeBucket_typeof();}}}}
namespace g{namespace Uno{namespace Time{namespace Text{uType* LocalTimePattern_typeof();}}}}
namespace g{namespace Uno{namespace Time{namespace Text{uType* OffsetDateTimePattern__OffsetDateTimeBucket_typeof();}}}}
namespace g{namespace Uno{namespace Time{namespace Text{uType* OffsetDateTimePattern_typeof();}}}}
namespace g{namespace Uno{namespace Time{namespace Text{uType* OffsetPattern__OffsetBucket_typeof();}}}}
namespace g{namespace Uno{namespace Time{namespace Text{uType* OffsetPattern_typeof();}}}}
namespace g{namespace Uno{namespace Time{namespace Text{uType* ParseResult_typeof();}}}}
namespace g{namespace Uno{namespace Time{struct DateTimeZone_type; ::g::Uno::Time::DateTimeZone_type* DeviceTimeZone_typeof();}}}
namespace g{namespace Uno{namespace Time{struct DateTimeZone_type; ::g::Uno::Time::DateTimeZone_type* FixedDateTimeZone_typeof();}}}
namespace g{namespace Uno{namespace Time{struct DateTimeZone_type; DateTimeZone_type* DateTimeZone_typeof();}}}
namespace g{namespace Uno{namespace Time{uClassType* Constants_typeof();}}}
namespace g{namespace Uno{namespace Time{uClassType* Converter_typeof();}}}
namespace g{namespace Uno{namespace Time{uClassType* HashCodeHelper_typeof();}}}
namespace g{namespace Uno{namespace Time{uClassType* Preconditions_typeof();}}}
namespace g{namespace Uno{namespace Time{uStructType* Duration_typeof();}}}
namespace g{namespace Uno{namespace Time{uStructType* Instant_typeof();}}}
namespace g{namespace Uno{namespace Time{uStructType* LocalTime_typeof();}}}
namespace g{namespace Uno{namespace Time{uStructType* Offset_typeof();}}}
namespace g{namespace Uno{namespace Time{uType* CalendarSystem_typeof();}}}
namespace g{namespace Uno{namespace Time{uType* LocalDate_typeof();}}}
namespace g{namespace Uno{namespace Time{uType* LocalDateTime_typeof();}}}
namespace g{namespace Uno{namespace Time{uType* OffsetDateTime_typeof();}}}
namespace g{namespace Uno{namespace Time{uType* ZonedDateTime_typeof();}}}
namespace g{namespace Uno{namespace UX{struct BinaryOperator_type; ::g::Uno::UX::BinaryOperator_type* AddOperator_typeof();}}}
namespace g{namespace Uno{namespace UX{struct BinaryOperator_type; ::g::Uno::UX::BinaryOperator_type* DivideOperator_typeof();}}}
namespace g{namespace Uno{namespace UX{struct BinaryOperator_type; ::g::Uno::UX::BinaryOperator_type* EqualOperator_typeof();}}}
namespace g{namespace Uno{namespace UX{struct BinaryOperator_type; ::g::Uno::UX::BinaryOperator_type* GreaterOrEqualOperator_typeof();}}}
namespace g{namespace Uno{namespace UX{struct BinaryOperator_type; ::g::Uno::UX::BinaryOperator_type* GreaterThanOperator_typeof();}}}
namespace g{namespace Uno{namespace UX{struct BinaryOperator_type; ::g::Uno::UX::BinaryOperator_type* LessOrEqualOperator_typeof();}}}
namespace g{namespace Uno{namespace UX{struct BinaryOperator_type; ::g::Uno::UX::BinaryOperator_type* LessThanOperator_typeof();}}}
namespace g{namespace Uno{namespace UX{struct BinaryOperator_type; ::g::Uno::UX::BinaryOperator_type* LogicalAndOperator_typeof();}}}
namespace g{namespace Uno{namespace UX{struct BinaryOperator_type; ::g::Uno::UX::BinaryOperator_type* LogicalOrOperator_typeof();}}}
namespace g{namespace Uno{namespace UX{struct BinaryOperator_type; ::g::Uno::UX::BinaryOperator_type* MaxFunction_typeof();}}}
namespace g{namespace Uno{namespace UX{struct BinaryOperator_type; ::g::Uno::UX::BinaryOperator_type* MinFunction_typeof();}}}
namespace g{namespace Uno{namespace UX{struct BinaryOperator_type; ::g::Uno::UX::BinaryOperator_type* MultiplyOperator_typeof();}}}
namespace g{namespace Uno{namespace UX{struct BinaryOperator_type; ::g::Uno::UX::BinaryOperator_type* NotEqualOperator_typeof();}}}
namespace g{namespace Uno{namespace UX{struct BinaryOperator_type; ::g::Uno::UX::BinaryOperator_type* NullCoalesceOperator_typeof();}}}
namespace g{namespace Uno{namespace UX{struct BinaryOperator_type; ::g::Uno::UX::BinaryOperator_type* SubtractOperator_typeof();}}}
namespace g{namespace Uno{namespace UX{struct BinaryOperator_type; BinaryOperator_type* BinaryOperator_typeof();}}}
namespace g{namespace Uno{namespace UX{struct FileSource_type; ::g::Uno::UX::FileSource_type* BundleFileSource_typeof();}}}
namespace g{namespace Uno{namespace UX{struct FileSource_type; FileSource_type* FileSource_typeof();}}}
namespace g{namespace Uno{namespace UX{struct FileSource_type;}} namespace Fuse{namespace Resources{::g::Uno::UX::FileSource_type* FileResource_typeof();}}}
namespace g{namespace Uno{namespace UX{struct FileSource_type;}} namespace Fuse{namespace Resources{::g::Uno::UX::FileSource_type* SystemFileSource_typeof();}}}
namespace g{namespace Uno{namespace UX{struct FileSource_type;}} namespace Fuse{namespace Scripting{::g::Uno::UX::FileSource_type* JSFileSource_typeof();}}}
namespace g{namespace Uno{namespace UX{struct FileSource_type;}} namespace Outracks{namespace Simulator{::g::Uno::UX::FileSource_type* ByteFileSource_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Operator_type; ::g::Uno::UX::Operator_type* VectorOperator_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Operator_type; Operator_type* Operator_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Property_type; Property_type* Property_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Property1_type; Property1_type* Property1_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Property1_type;}} ::g::Uno::UX::Property1_type* FuseControlsNavigation_FuseControlsShape_Color_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property1_type;}} ::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseControlsButtonBase_Text_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property1_type;}} ::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseControlsShape_Fill_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property1_type;}} ::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property1_type;}} ::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseControlsTextControl_Value_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property1_type;}} ::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseControlsToggleControl_Value_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property1_type;}} ::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property1_type;}} ::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseDrawingStroke_Brush_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property1_type;}} ::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseDrawingStroke_Color_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property1_type;}} ::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property1_type;}} ::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property1_type;}} ::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseElementsElement_Opacity_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property1_type;}} ::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property1_type;}} ::g::Uno::UX::Property1_type* FuseControlsScrollView_FuseControlsScrollViewBase_KeepFocusInView_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property1_type;}} ::g::Uno::UX::Property1_type* FuseControlsScrollView_FuseControlsScrollViewBase_UserScroll_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property1_type;}} ::g::Uno::UX::Property1_type* FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property1_type;}} ::g::Uno::UX::Property1_type* FuseControlsScrollView_FuseTriggersWhileBool_Value_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property1_type;}} ::g::Uno::UX::Property1_type* OutracksSimulatorClientUno_FuseControlsShape_Color_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property1_type;}} ::g::Uno::UX::Property1_type* OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property1_type;}} ::g::Uno::UX::Property1_type* OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property1_type;}} ::g::Uno::UX::Property1_type* OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property1_type;}} ::g::Uno::UX::Property1_type* OutracksSimulatorClientUno_FuseTriggersWhileBool_Value_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property1_type;}} ::g::Uno::UX::Property1_type* OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property1_type;}} ::g::Uno::UX::Property1_type* OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property1_type;}} ::g::Uno::UX::Property1_type* OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property1_type;}} ::g::Uno::UX::Property1_type* OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property1_type;}} ::g::Uno::UX::Property1_type* ShareSheet_FuseControlsPage_Title_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property1_type;}} ::g::Uno::UX::Property1_type* ShareSheet_FuseControlsPanel_Color_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property1_type;}} ::g::Uno::UX::Property1_type* ShareSheet_FuseControlsRectangle_CornerRadius_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property1_type;}} ::g::Uno::UX::Property1_type* ShareSheet_FuseControlsShape_Color_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property1_type;}} ::g::Uno::UX::Property1_type* ShareSheet_FuseControlsTextControl_TextColor_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property1_type;}} ::g::Uno::UX::Property1_type* ShareSheet_FuseControlsTextControl_Value_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property1_type;}} ::g::Uno::UX::Property1_type* ShareSheet_FuseEffectsBlur_Radius_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property1_type;}} ::g::Uno::UX::Property1_type* ShareSheet_FuseElementsElement_Height_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property1_type;}} ::g::Uno::UX::Property1_type* ShareSheet_FuseElementsElement_Opacity_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property1_type;}} ::g::Uno::UX::Property1_type* ShareSheet_FuseReactiveEach_Items_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property1_type;}} ::g::Uno::UX::Property1_type* ShareSheet_PageWithTitle_HeaderColor_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property1_type;}} ::g::Uno::UX::Property1_type* ShareSheet_PageWithTitle_HeaderTextColor_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property1_type;}} ::g::Uno::UX::Property1_type* ShareSheet_PageWithTitle_Instructions_Property_typeof();}
namespace g{namespace Uno{namespace UX{struct Property1_type;}} namespace Fuse{::g::Uno::UX::Property1_type* Visual__ParameterProperty_typeof();}}
namespace g{namespace Uno{namespace UX{struct Property1_type;}} namespace Fuse{namespace Controls{::g::Uno::UX::Property1_type* Element_Opacity_Property_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Property1_type;}} namespace Fuse{namespace Controls{::g::Uno::UX::Property1_type* Router_PrepareProgress_Property_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Property1_type;}} namespace Outracks{namespace Simulator{namespace Runtime{::g::Uno::UX::Property1_type* LazyProperty_typeof();}}}}
namespace g{namespace Uno{namespace UX{struct Property1_type;}} namespace Outracks{namespace Simulator{namespace Runtime{::g::Uno::UX::Property1_type* UxProperty_typeof();}}}}
namespace g{namespace Uno{namespace UX{struct StringFunction_type; ::g::Uno::UX::StringFunction_type* ToLowerFunction_typeof();}}}
namespace g{namespace Uno{namespace UX{struct StringFunction_type; ::g::Uno::UX::StringFunction_type* ToUpperFunction_typeof();}}}
namespace g{namespace Uno{namespace UX{struct StringFunction_type; StringFunction_type* StringFunction_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Template_type; Template_type* Template_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Template_type;}} ::g::Uno::UX::Template_type* MainView__Template_typeof();}
namespace g{namespace Uno{namespace UX{struct Template_type;}} namespace Fuse{namespace Controls{::g::Uno::UX::Template_type* Button__Template_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Template_type;}} namespace Fuse{namespace Controls{::g::Uno::UX::Template_type* PageIndicatorDotTemplate_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Template_type;}} namespace Fuse{namespace Controls{::g::Uno::UX::Template_type* Slider__Template_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Template_type;}} namespace Fuse{namespace Controls{::g::Uno::UX::Template_type* Slider__Template1_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Template_type;}} namespace Fuse{namespace Controls{::g::Uno::UX::Template_type* Slider__Template2_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Template_type;}} namespace Fuse{namespace Controls{::g::Uno::UX::Template_type* Switch__Template_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Template_type;}} namespace Fuse{namespace Controls{::g::Uno::UX::Template_type* Switch__Template1_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Template_type;}} namespace Fuse{namespace Controls{::g::Uno::UX::Template_type* Switch__Template2_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Template_type;}} namespace Outracks{namespace Simulator{namespace Runtime{::g::Uno::UX::Template_type* UxTemplate_typeof();}}}}
namespace g{namespace Uno{namespace UX{struct UnaryOperator_type; ::g::Uno::UX::UnaryOperator_type* NegateOperator_typeof();}}}
namespace g{namespace Uno{namespace UX{struct UnaryOperator_type; UnaryOperator_type* UnaryOperator_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Value_type; ::g::Uno::UX::Value_type* BoolValue_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Value_type; ::g::Uno::UX::Value_type* NumberValue_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Value_type; ::g::Uno::UX::Value_type* Size2Value_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Value_type; ::g::Uno::UX::Value_type* Size3Value_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Value_type; ::g::Uno::UX::Value_type* Size4Value_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Value_type; ::g::Uno::UX::Value_type* SizeValue_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Value_type; ::g::Uno::UX::Value_type* StringValue_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Value_type; ::g::Uno::UX::Value_type* Vector2Value_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Value_type; ::g::Uno::UX::Value_type* Vector3Value_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Value_type; ::g::Uno::UX::Value_type* Vector4Value_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Value_type; ::g::Uno::UX::Value_type* VectorValue_typeof();}}}
namespace g{namespace Uno{namespace UX{struct Value_type; Value_type* Value_typeof();}}}
namespace g{namespace Uno{namespace UX{uClassType* SelectorRegistry_typeof();}}}
namespace g{namespace Uno{namespace UX{uClassType* StreamExtensions_typeof();}}}
namespace g{namespace Uno{namespace UX{uStructType* Selector_typeof();}}}
namespace g{namespace Uno{namespace UX{uStructType* Size_typeof();}}}
namespace g{namespace Uno{namespace UX{uStructType* Size2_typeof();}}}
namespace g{namespace Uno{namespace UX{uType* ConditionalOperator_typeof();}}}
namespace g{namespace Uno{namespace UX{uType* NameTable_typeof();}}}
namespace g{namespace Uno{namespace UX{uType* PropertyObject_typeof();}}}
namespace g{namespace Uno{namespace UX{uType* Resource_typeof();}}}
namespace g{namespace Uno{namespace UX{uType* StringConcatOperator_typeof();}}}
namespace g{namespace Uno{namespace UX{uType* UXAutoNameTableAttribute_typeof();}}}
namespace g{namespace Uno{namespace UX{uType* UXComponentsAttribute_typeof();}}}
namespace g{namespace Uno{namespace UX{uType* UXConstructorAttribute_typeof();}}}
namespace g{namespace Uno{namespace UX{uType* UXContentAttribute_typeof();}}}
namespace g{namespace Uno{namespace UX{uType* UXFileNameAttribute_typeof();}}}
namespace g{namespace Uno{namespace UX{uType* UXFreestandingAttribute_typeof();}}}
namespace g{namespace Uno{namespace UX{uType* UXGlobalModuleAttribute_typeof();}}}
namespace g{namespace Uno{namespace UX{uType* UXGlobalResourceAttribute_typeof();}}}
namespace g{namespace Uno{namespace UX{uType* UXLineNumberAttribute_typeof();}}}
namespace g{namespace Uno{namespace UX{uType* UXNameAttribute_typeof();}}}
namespace g{namespace Uno{namespace UX{uType* UXPrimaryAttribute_typeof();}}}
namespace g{namespace Uno{namespace UX{uType* UXSourceFileNameAttribute_typeof();}}}
namespace g{namespace Uno{namespace UX{uType* UXValueBindingArgumentAttribute_typeof();}}}
namespace g{namespace Uno{namespace UX{uType* UXValueBindingTargetAttribute_typeof();}}}
namespace g{namespace Uno{namespace UX{uType* ValueChangedArgs_typeof();}}}
namespace g{namespace Uno{struct Exception_type; ::g::Uno::Exception_type* AggregateException_typeof();}}
namespace g{namespace Uno{struct Exception_type; ::g::Uno::Exception_type* ArgumentException_typeof();}}
namespace g{namespace Uno{struct Exception_type; ::g::Uno::Exception_type* ArgumentNullException_typeof();}}
namespace g{namespace Uno{struct Exception_type; ::g::Uno::Exception_type* ArgumentOutOfRangeException_typeof();}}
namespace g{namespace Uno{struct Exception_type; ::g::Uno::Exception_type* FormatException_typeof();}}
namespace g{namespace Uno{struct Exception_type; ::g::Uno::Exception_type* IndexOutOfRangeException_typeof();}}
namespace g{namespace Uno{struct Exception_type; ::g::Uno::Exception_type* InvalidCastException_typeof();}}
namespace g{namespace Uno{struct Exception_type; ::g::Uno::Exception_type* InvalidOperationException_typeof();}}
namespace g{namespace Uno{struct Exception_type; ::g::Uno::Exception_type* NotImplementedException_typeof();}}
namespace g{namespace Uno{struct Exception_type; ::g::Uno::Exception_type* NotSupportedException_typeof();}}
namespace g{namespace Uno{struct Exception_type; ::g::Uno::Exception_type* NullReferenceException_typeof();}}
namespace g{namespace Uno{struct Exception_type; ::g::Uno::Exception_type* ObjectDisposedException_typeof();}}
namespace g{namespace Uno{struct Exception_type; ::g::Uno::Exception_type* OverflowException_typeof();}}
namespace g{namespace Uno{struct Exception_type; Exception_type* Exception_typeof();}}
namespace g{namespace Uno{struct Exception_type; namespace Data{namespace Xml{::g::Uno::Exception_type* XmlException_typeof();}}}}
namespace g{namespace Uno{struct Exception_type; namespace IO{::g::Uno::Exception_type* EndOfStreamException_typeof();}}}
namespace g{namespace Uno{struct Exception_type; namespace IO{::g::Uno::Exception_type* IOException_typeof();}}}
namespace g{namespace Uno{struct Exception_type; namespace Net{namespace Http{::g::Uno::Exception_type* InvalidResponseTypeException_typeof();}}}}
namespace g{namespace Uno{struct Exception_type; namespace Net{namespace Http{::g::Uno::Exception_type* InvalidStateException_typeof();}}}}
namespace g{namespace Uno{struct Exception_type; namespace Net{namespace Http{::g::Uno::Exception_type* UriFormatException_typeof();}}}}
namespace g{namespace Uno{struct Exception_type; namespace Net{namespace Sockets{::g::Uno::Exception_type* SocketException_typeof();}}}}
namespace g{namespace Uno{struct Exception_type; namespace Runtime{namespace Implementation{namespace ShaderBackends{namespace OpenGL{::g::Uno::Exception_type* GLException_typeof();}}}}}}
namespace g{namespace Uno{struct Exception_type;} namespace Experimental{namespace TextureLoader{::g::Uno::Exception_type* InvalidContentTypeException_typeof();}}}
namespace g{namespace Uno{struct Exception_type;} namespace Fuse{::g::Uno::Exception_type* RequiresRootedException_typeof();}}
namespace g{namespace Uno{struct Exception_type;} namespace Fuse{::g::Uno::Exception_type* WrapException_typeof();}}
namespace g{namespace Uno{struct Exception_type;} namespace Fuse{namespace Scripting{::g::Uno::Exception_type* Error_typeof();}}}
namespace g{namespace Uno{struct Exception_type;} namespace Fuse{namespace Scripting{::g::Uno::Exception_type* ScriptException_typeof();}}}
namespace g{namespace Uno{struct Exception_type;} namespace Outracks{namespace Simulator{::g::Uno::Exception_type* FailedToConnectToEndPoint_typeof();}}}
namespace g{namespace Uno{struct Exception_type;} namespace Outracks{namespace Simulator{::g::Uno::Exception_type* FailedToConnectToProxy_typeof();}}}
namespace g{namespace Uno{struct Exception_type;} namespace Outracks{namespace Simulator{::g::Uno::Exception_type* FailedToConnectToSimulator_typeof();}}}
namespace g{namespace Uno{struct Exception_type;} namespace Outracks{namespace Simulator{::g::Uno::Exception_type* InvalidDataException_typeof();}}}
namespace g{namespace Uno{struct Exception_type;} namespace Outracks{namespace Simulator{::g::Uno::Exception_type* NonExhaustiveMatch_typeof();}}}
namespace g{namespace Uno{struct Exception_type;} namespace Outracks{namespace Simulator{namespace Runtime{::g::Uno::Exception_type* MemberNotFound_typeof();}}}}
namespace g{namespace Uno{struct Exception_type;} namespace Outracks{namespace Simulator{namespace Runtime{::g::Uno::Exception_type* TypeNotFound_typeof();}}}}
namespace g{namespace Uno{struct Exception_type;} namespace Outracks{namespace Simulator{namespace Runtime{::g::Uno::Exception_type* UnambiguousMethodNotFound_typeof();}}}}
namespace g{namespace Uno{struct Exception_type;} namespace Outracks{namespace Simulator{namespace Runtime{::g::Uno::Exception_type* VariableNotBound_typeof();}}}}
namespace g{namespace Uno{uClassType* Array_typeof();}}
namespace g{namespace Uno{uClassType* Color_typeof();}}
namespace g{namespace Uno{uClassType* ColorHelper_typeof();}}
namespace g{namespace Uno{uClassType* Enum_typeof();}}
namespace g{namespace Uno{uClassType* GC_typeof();}}
namespace g{namespace Uno{uClassType* Generic_typeof();}}
namespace g{namespace Uno{uClassType* Math_typeof();}}
namespace g{namespace Uno{uClassType* Matrix_typeof();}}
namespace g{namespace Uno{uClassType* Quaternion_typeof();}}
namespace g{namespace Uno{uClassType* Tuple_typeof();}}
namespace g{namespace Uno{uClassType* Vector_typeof();}}
namespace g{namespace Uno{uStructType* Bool_typeof();}}
namespace g{namespace Uno{uStructType* Byte_typeof();}}
namespace g{namespace Uno{uStructType* Byte2_typeof();}}
namespace g{namespace Uno{uStructType* Byte4_typeof();}}
namespace g{namespace Uno{uStructType* Char_typeof();}}
namespace g{namespace Uno{uStructType* Double_typeof();}}
namespace g{namespace Uno{uStructType* Float_typeof();}}
namespace g{namespace Uno{uStructType* Float2_typeof();}}
namespace g{namespace Uno{uStructType* Float2x2_typeof();}}
namespace g{namespace Uno{uStructType* Float3_typeof();}}
namespace g{namespace Uno{uStructType* Float3x3_typeof();}}
namespace g{namespace Uno{uStructType* Float4_typeof();}}
namespace g{namespace Uno{uStructType* Float4x4_typeof();}}
namespace g{namespace Uno{uStructType* Int_typeof();}}
namespace g{namespace Uno{uStructType* Int2_typeof();}}
namespace g{namespace Uno{uStructType* Int3_typeof();}}
namespace g{namespace Uno{uStructType* Int4_typeof();}}
namespace g{namespace Uno{uStructType* IntPtr_typeof();}}
namespace g{namespace Uno{uStructType* Long_typeof();}}
namespace g{namespace Uno{uStructType* Rect_typeof();}}
namespace g{namespace Uno{uStructType* Recti_typeof();}}
namespace g{namespace Uno{uStructType* SByte_typeof();}}
namespace g{namespace Uno{uStructType* SByte2_typeof();}}
namespace g{namespace Uno{uStructType* SByte4_typeof();}}
namespace g{namespace Uno{uStructType* Short_typeof();}}
namespace g{namespace Uno{uStructType* Short2_typeof();}}
namespace g{namespace Uno{uStructType* Short4_typeof();}}
namespace g{namespace Uno{uStructType* UInt_typeof();}}
namespace g{namespace Uno{uStructType* ULong_typeof();}}
namespace g{namespace Uno{uStructType* UShort_typeof();}}
namespace g{namespace Uno{uStructType* UShort2_typeof();}}
namespace g{namespace Uno{uStructType* UShort4_typeof();}}
namespace g{namespace Uno{uType* Application_typeof();}}
namespace g{namespace Uno{uType* Attribute_typeof();}}
namespace g{namespace Uno{uType* Buffer_typeof();}}
namespace g{namespace Uno{uType* DateTime_typeof();}}
namespace g{namespace Uno{uType* Delegate_typeof();}}
namespace g{namespace Uno{uType* EventArgs_typeof();}}
namespace g{namespace Uno{uType* FakeTime_typeof();}}
namespace g{namespace Uno{uType* FlagsAttribute_typeof();}}
namespace g{namespace Uno{uType* ObsoleteAttribute_typeof();}}
namespace g{namespace Uno{uType* String_typeof();}}
namespace g{namespace Uno{uType* Tuple2_typeof();}}
namespace g{namespace Uno{uType* Type_typeof();}}
namespace g{namespace Uno{uType* WeakReference_typeof();}}
namespace g{namespace Uno{uType* WeakReferenceAttribute_typeof();}}
namespace g{uClassType* FuseAndroid_bundle_typeof();}
namespace g{uClassType* FuseControls_bundle_typeof();}
namespace g{uClassType* FuseControlsNative_bundle_typeof();}
namespace g{uClassType* FuseControlsPrimitives_bundle_typeof();}
namespace g{uClassType* FuseControlsVideo_bundle_typeof();}
namespace g{uClassType* FuseCore_bundle_typeof();}
namespace g{uClassType* FuseDrawing_bundle_typeof();}
namespace g{uClassType* FuseDrawingPolygons_bundle_typeof();}
namespace g{uClassType* FuseDrawingPrimitives_bundle_typeof();}
namespace g{uClassType* FuseEffects_bundle_typeof();}
namespace g{uClassType* FuseElements_bundle_typeof();}
namespace g{uClassType* FuseReactive_bundle_typeof();}
namespace g{uClassType* FuseText_bundle_typeof();}
namespace g{uClassType* OutracksSimulatorClientUno_bundle_typeof();}
namespace g{uClassType* ShareSheet_bundle_typeof();}
namespace g{uClassType* UnoCore_bundle_typeof();}
namespace g{uType* HashableWeakReference_typeof();}
namespace g{uType* WeakDictionary_typeof();}
void uInitRtti(uType*(*factories[])());

void uInitRtti()
{
    static uType*(*factories[])() =
    {
        (uType*(*)())&::g::Experimental::Cache::ProxyStream_typeof,
        (uType*(*)())&::g::Experimental::Http::BinaryLoader_typeof,
        (uType*(*)())&::g::Experimental::Http::HttpLoader_typeof,
        (uType*(*)())&::g::Experimental::Http::HttpResponseHeader_typeof,
        (uType*(*)())&::g::Experimental::Http::Internal::DateUtil_typeof,
        (uType*(*)())&::g::Experimental::Http::Loader_typeof,
        (uType*(*)())&::g::Experimental::Http::LoaderConst_typeof,
        (uType*(*)())&::g::Experimental::Http::TextLoader_typeof,
        (uType*(*)())&::g::Experimental::TextureLoader::Callback_typeof,
        (uType*(*)())&::g::Experimental::TextureLoader::InvalidContentTypeException_typeof,
        (uType*(*)())&::g::Experimental::TextureLoader::TextureLoader_typeof,
        (uType*(*)())&::g::Experimental::TextureLoader::TextureLoaderImpl_typeof,
        (uType*(*)())&::g::Fuse::AlternateRoot_typeof,
        (uType*(*)())&::g::Fuse::Android::Blitter_typeof,
        (uType*(*)())&::g::Fuse::Android::Controls::WebViewUtils::WebViewForeign_typeof,
        (uType*(*)())&::g::Fuse::Android::Helpers_typeof,
        (uType*(*)())&::g::Fuse::Android::StatusBarConfig_typeof,
        (uType*(*)())&::g::Fuse::Animations::Animator_typeof,
        (uType*(*)())&::g::Fuse::Animations::AnimatorState_typeof,
        (uType*(*)())&::g::Fuse::Animations::Attractor_typeof,
        (uType*(*)())&::g::Fuse::Animations::AverageMasterProperty_typeof,
        (uType*(*)())&::g::Fuse::Animations::AverageMasterTransform_typeof,
        (uType*(*)())&::g::Fuse::Animations::AverageMixer_typeof,
        (uType*(*)())&::g::Fuse::Animations::Change_typeof,
        (uType*(*)())&::g::Fuse::Animations::ContinuousTrackChangeState_typeof,
        (uType*(*)())&::g::Fuse::Animations::Converter_typeof,
        (uType*(*)())&::g::Fuse::Animations::ConverterDouble_typeof,
        (uType*(*)())&::g::Fuse::Animations::ConverterFloat_typeof,
        (uType*(*)())&::g::Fuse::Animations::ConverterFloat2_typeof,
        (uType*(*)())&::g::Fuse::Animations::ConverterFloat3_typeof,
        (uType*(*)())&::g::Fuse::Animations::ConverterFloat4_typeof,
        (uType*(*)())&::g::Fuse::Animations::ConverterSize_typeof,
        (uType*(*)())&::g::Fuse::Animations::ConverterSize2_typeof,
        (uType*(*)())&::g::Fuse::Animations::CreateStateParams_typeof,
        (uType*(*)())&::g::Fuse::Animations::CubicBezierEasing_typeof,
        (uType*(*)())&::g::Fuse::Animations::Cycle_typeof,
        (uType*(*)())&::g::Fuse::Animations::CycleState_typeof,
        (uType*(*)())&::g::Fuse::Animations::DiscreteKeyframeTrack_typeof,
        (uType*(*)())&::g::Fuse::Animations::DiscreteMasterProperty_typeof,
        (uType*(*)())&::g::Fuse::Animations::DiscreteMasterTransform_typeof,
        (uType*(*)())&::g::Fuse::Animations::DiscreteMixer_typeof,
        (uType*(*)())&::g::Fuse::Animations::DiscreteSingleTrack_typeof,
        (uType*(*)())&::g::Fuse::Animations::DiscreteTrackChangeState_typeof,
        (uType*(*)())&::g::Fuse::Animations::Easing__BackInImpl_typeof,
        (uType*(*)())&::g::Fuse::Animations::Easing__BackInOutImpl_typeof,
        (uType*(*)())&::g::Fuse::Animations::Easing__BackOutImpl_typeof,
        (uType*(*)())&::g::Fuse::Animations::Easing__BounceInImpl_typeof,
        (uType*(*)())&::g::Fuse::Animations::Easing__BounceInOutImpl_typeof,
        (uType*(*)())&::g::Fuse::Animations::Easing__BounceOutImpl_typeof,
        (uType*(*)())&::g::Fuse::Animations::Easing__CircularInImpl_typeof,
        (uType*(*)())&::g::Fuse::Animations::Easing__CircularInOutImpl_typeof,
        (uType*(*)())&::g::Fuse::Animations::Easing__CircularOutImpl_typeof,
        (uType*(*)())&::g::Fuse::Animations::Easing__CubicInImpl_typeof,
        (uType*(*)())&::g::Fuse::Animations::Easing__CubicInOutImpl_typeof,
        (uType*(*)())&::g::Fuse::Animations::Easing__CubicOutImpl_typeof,
        (uType*(*)())&::g::Fuse::Animations::Easing__ElasticInImpl_typeof,
        (uType*(*)())&::g::Fuse::Animations::Easing__ElasticInOutImpl_typeof,
        (uType*(*)())&::g::Fuse::Animations::Easing__ElasticOutImpl_typeof,
        (uType*(*)())&::g::Fuse::Animations::Easing__ExponentialInImpl_typeof,
        (uType*(*)())&::g::Fuse::Animations::Easing__ExponentialInOutImpl_typeof,
        (uType*(*)())&::g::Fuse::Animations::Easing__ExponentialOutImpl_typeof,
        (uType*(*)())&::g::Fuse::Animations::Easing__LinearImpl_typeof,
        (uType*(*)())&::g::Fuse::Animations::Easing__QuadraticInImpl_typeof,
        (uType*(*)())&::g::Fuse::Animations::Easing__QuadraticInOutImpl_typeof,
        (uType*(*)())&::g::Fuse::Animations::Easing__QuadraticOutImpl_typeof,
        (uType*(*)())&::g::Fuse::Animations::Easing__QuarticInImpl_typeof,
        (uType*(*)())&::g::Fuse::Animations::Easing__QuarticInOutImpl_typeof,
        (uType*(*)())&::g::Fuse::Animations::Easing__QuarticOutImpl_typeof,
        (uType*(*)())&::g::Fuse::Animations::Easing__QuinticInImpl_typeof,
        (uType*(*)())&::g::Fuse::Animations::Easing__QuinticInOutImpl_typeof,
        (uType*(*)())&::g::Fuse::Animations::Easing__QuinticOutImpl_typeof,
        (uType*(*)())&::g::Fuse::Animations::Easing__SinusoidalInImpl_typeof,
        (uType*(*)())&::g::Fuse::Animations::Easing__SinusoidalInOutImpl_typeof,
        (uType*(*)())&::g::Fuse::Animations::Easing__SinusoidalOutImpl_typeof,
        (uType*(*)())&::g::Fuse::Animations::Easing_typeof,
        (uType*(*)())&::g::Fuse::Animations::EasingFunctions_typeof,
        (uType*(*)())&::g::Fuse::Animations::EasingTrack_typeof,
        (uType*(*)())&::g::Fuse::Animations::FastMatrixTransform_typeof,
        (uType*(*)())&::g::Fuse::Animations::Keyframe_typeof,
        (uType*(*)())&::g::Fuse::Animations::MasterBase__GFWResult_typeof,
        (uType*(*)())&::g::Fuse::Animations::MasterBase_typeof,
        (uType*(*)())&::g::Fuse::Animations::MasterProperty_typeof,
        (uType*(*)())&::g::Fuse::Animations::MasterTransform_typeof,
        (uType*(*)())&::g::Fuse::Animations::Mixer_typeof,
        (uType*(*)())&::g::Fuse::Animations::MixerBase_typeof,
        (uType*(*)())&::g::Fuse::Animations::MixerHandle_typeof,
        (uType*(*)())&::g::Fuse::Animations::Move_typeof,
        (uType*(*)())&::g::Fuse::Animations::Nothing_typeof,
        (uType*(*)())&::g::Fuse::Animations::NothingAnimatorState_typeof,
        (uType*(*)())&::g::Fuse::Animations::OpenAnimator_typeof,
        (uType*(*)())&::g::Fuse::Animations::OpenAnimatorState_typeof,
        (uType*(*)())&::g::Fuse::Animations::Player_typeof,
        (uType*(*)())&::g::Fuse::Animations::PlayerPart_typeof,
        (uType*(*)())&::g::Fuse::Animations::RangeAdapter_typeof,
        (uType*(*)())&::g::Fuse::Animations::RangeAdapterHelpers_typeof,
        (uType*(*)())&::g::Fuse::Animations::Resize_typeof,
        (uType*(*)())&::g::Fuse::Animations::ResizeAnimatorState_typeof,
        (uType*(*)())&::g::Fuse::Animations::Rotate_typeof,
        (uType*(*)())&::g::Fuse::Animations::Scale_typeof,
        (uType*(*)())&::g::Fuse::Animations::Skew_typeof,
        (uType*(*)())&::g::Fuse::Animations::Spin_typeof,
        (uType*(*)())&::g::Fuse::Animations::SpinState_typeof,
        (uType*(*)())&::g::Fuse::Animations::SplineTrack_typeof,
        (uType*(*)())&::g::Fuse::Animations::TrackAnimator_typeof,
        (uType*(*)())&::g::Fuse::Animations::TrackAnimatorState_typeof,
        (uType*(*)())&::g::Fuse::Animations::TransformAnimator_typeof,
        (uType*(*)())&::g::Fuse::Animations::TransformAnimatorState_typeof,
        (uType*(*)())&::g::Fuse::Animations::TriggerAnimation_typeof,
        (uType*(*)())&::g::Fuse::Animations::TriggerAnimationState_typeof,
        (uType*(*)())&::g::Fuse::App_typeof,
        (uType*(*)())&::g::Fuse::AppBase_typeof,
        (uType*(*)())&::g::Fuse::AppRoot_typeof,
        (uType*(*)())&::g::Fuse::Behavior_typeof,
        (uType*(*)())&::g::Fuse::Binding_typeof,
        (uType*(*)())&::g::Fuse::CacheFramebuffer_typeof,
        (uType*(*)())&::g::Fuse::Controls::BackButton_typeof,
        (uType*(*)())&::g::Fuse::Controls::BottomBarBackground_typeof,
        (uType*(*)())&::g::Fuse::Controls::BottomFrameBackground_typeof,
        (uType*(*)())&::g::Fuse::Controls::Button__Template_typeof,
        (uType*(*)())&::g::Fuse::Controls::Button_typeof,
        (uType*(*)())&::g::Fuse::Controls::ButtonBase_typeof,
        (uType*(*)())&::g::Fuse::Controls::Circle_typeof,
        (uType*(*)())&::g::Fuse::Controls::ClientPanel_typeof,
        (uType*(*)())&::g::Fuse::Controls::Container_typeof,
        (uType*(*)())&::g::Fuse::Controls::ContentControl_typeof,
        (uType*(*)())&::g::Fuse::Controls::Control_typeof,
        (uType*(*)())&::g::Fuse::Controls::DockPanel_typeof,
        (uType*(*)())&::g::Fuse::Controls::EdgeNavigator__PageData_typeof,
        (uType*(*)())&::g::Fuse::Controls::EdgeNavigator_typeof,
        (uType*(*)())&::g::Fuse::Controls::Element_Opacity_Property_typeof,
        (uType*(*)())&::g::Fuse::Controls::Ellipse_typeof,
        (uType*(*)())&::g::Fuse::Controls::FallbackTextEdit::DegreeSpan_typeof,
        (uType*(*)())&::g::Fuse::Controls::FallbackTextEdit::LineCache_typeof,
        (uType*(*)())&::g::Fuse::Controls::FallbackTextEdit::LineCacheLine_typeof,
        (uType*(*)())&::g::Fuse::Controls::FallbackTextEdit::LineCachePasswordTransform_typeof,
        (uType*(*)())&::g::Fuse::Controls::FallbackTextEdit::SwipeGestureHelper_typeof,
        (uType*(*)())&::g::Fuse::Controls::FallbackTextEdit::TextPosition_typeof,
        (uType*(*)())&::g::Fuse::Controls::FallbackTextEdit::TextSpan_typeof,
        (uType*(*)())&::g::Fuse::Controls::FallbackTextEdit::TextWindow_typeof,
        (uType*(*)())&::g::Fuse::Controls::FallbackTextRenderer::DefaultTextRenderer__FontKey_typeof,
        (uType*(*)())&::g::Fuse::Controls::FallbackTextRenderer::DefaultTextRenderer_typeof,
        (uType*(*)())&::g::Fuse::Controls::FallbackTextRenderer::ProperTextTransform_typeof,
        (uType*(*)())&::g::Fuse::Controls::FallbackTextRenderer::RectExtensions_typeof,
        (uType*(*)())&::g::Fuse::Controls::FallbackTextRenderer::TextRenderer_typeof,
        (uType*(*)())&::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo_typeof,
        (uType*(*)())&::g::Fuse::Controls::FallbackTextRenderer::WordWrapper_typeof,
        (uType*(*)())&::g::Fuse::Controls::FallbackTextRenderer::WordWrapperWord_typeof,
        (uType*(*)())&::g::Fuse::Controls::FallbackTextRenderer::WrappedLine_typeof,
        (uType*(*)())&::g::Fuse::Controls::FallbackWebViewClient_typeof,
        (uType*(*)())&::g::Fuse::Controls::FileVideoSource_typeof,
        (uType*(*)())&::g::Fuse::Controls::ForwardProperties_typeof,
        (uType*(*)())&::g::Fuse::Controls::FuseTextRenderer::AsyncMeasurer_typeof,
        (uType*(*)())&::g::Fuse::Controls::FuseTextRenderer::CacheState_typeof,
        (uType*(*)())&::g::Fuse::Controls::FuseTextRenderer::EverythingCached_typeof,
        (uType*(*)())&::g::Fuse::Controls::FuseTextRenderer::Helpers_typeof,
        (uType*(*)())&::g::Fuse::Controls::FuseTextRenderer::LogicalRunsCached_typeof,
        (uType*(*)())&::g::Fuse::Controls::FuseTextRenderer::MeasurementsCached_typeof,
        (uType*(*)())&::g::Fuse::Controls::FuseTextRenderer::NothingCached_typeof,
        (uType*(*)())&::g::Fuse::Controls::FuseTextRenderer::RendererCached_typeof,
        (uType*(*)())&::g::Fuse::Controls::FuseTextRenderer::TextControlData_typeof,
        (uType*(*)())&::g::Fuse::Controls::FuseTextRenderer::TextRenderer_typeof,
        (uType*(*)())&::g::Fuse::Controls::FuseTextRenderer::Tolerances_typeof,
        (uType*(*)())&::g::Fuse::Controls::Graphics::ControlVisual_typeof,
        (uType*(*)())&::g::Fuse::Controls::Graphics::Visual_typeof,
        (uType*(*)())&::g::Fuse::Controls::GraphicsView_typeof,
        (uType*(*)())&::g::Fuse::Controls::Grid_typeof,
        (uType*(*)())&::g::Fuse::Controls::HTML_typeof,
        (uType*(*)())&::g::Fuse::Controls::Image_typeof,
        (uType*(*)())&::g::Fuse::Controls::ImageElementDraw_typeof,
        (uType*(*)())&::g::Fuse::Controls::JavaScriptCall_typeof,
        (uType*(*)())&::g::Fuse::Controls::KeyframeAccessors_typeof,
        (uType*(*)())&::g::Fuse::Controls::LayoutControl_typeof,
        (uType*(*)())&::g::Fuse::Controls::LoadHtmlCall_typeof,
        (uType*(*)())&::g::Fuse::Controls::MobileTextEdit_typeof,
        (uType*(*)())&::g::Fuse::Controls::MultiLayout_typeof,
        (uType*(*)())&::g::Fuse::Controls::MultiLayoutPanel_typeof,
        (uType*(*)())&::g::Fuse::Controls::Native::Android::Button_typeof,
        (uType*(*)())&::g::Fuse::Controls::Native::Android::Helpers_typeof,
        (uType*(*)())&::g::Fuse::Controls::Native::Android::Slider_typeof,
        (uType*(*)())&::g::Fuse::Controls::Native::Android::Switch_typeof,
        (uType*(*)())&::g::Fuse::Controls::Native::ImageHandle_typeof,
        (uType*(*)())&::g::Fuse::Controls::Native::ImageLoader_typeof,
        (uType*(*)())&::g::Fuse::Controls::Native::iOS::Button_typeof,
        (uType*(*)())&::g::Fuse::Controls::Native::iOS::Circle_typeof,
        (uType*(*)())&::g::Fuse::Controls::Native::iOS::DrawableViewGroup_typeof,
        (uType*(*)())&::g::Fuse::Controls::Native::iOS::Ellipse_typeof,
        (uType*(*)())&::g::Fuse::Controls::Native::iOS::FocusHelpers__PerformBecomeFirstResponder_typeof,
        (uType*(*)())&::g::Fuse::Controls::Native::iOS::FocusHelpers_typeof,
        (uType*(*)())&::g::Fuse::Controls::Native::iOS::FontCache_typeof,
        (uType*(*)())&::g::Fuse::Controls::Native::iOS::GraphicsView_typeof,
        (uType*(*)())&::g::Fuse::Controls::Native::iOS::ImageView_typeof,
        (uType*(*)())&::g::Fuse::Controls::Native::iOS::InputDispatch_typeof,
        (uType*(*)())&::g::Fuse::Controls::Native::iOS::iOSBlitter_typeof,
        (uType*(*)())&::g::Fuse::Controls::Native::iOS::iOSDevice_typeof,
        (uType*(*)())&::g::Fuse::Controls::Native::iOS::KeyboardView_typeof,
        (uType*(*)())&::g::Fuse::Controls::Native::iOS::LeafView_typeof,
        (uType*(*)())&::g::Fuse::Controls::Native::iOS::MultiLineTextEdit_typeof,
        (uType*(*)())&::g::Fuse::Controls::Native::iOS::NativeFocus_typeof,
        (uType*(*)())&::g::Fuse::Controls::Native::iOS::NativeViewRenderer_typeof,
        (uType*(*)())&::g::Fuse::Controls::Native::iOS::NSAttributedStringBuilder_typeof,
        (uType*(*)())&::g::Fuse::Controls::Native::iOS::OSVersion_typeof,
        (uType*(*)())&::g::Fuse::Controls::Native::iOS::Rectangle_typeof,
        (uType*(*)())&::g::Fuse::Controls::Native::iOS::ScrollView_typeof,
        (uType*(*)())&::g::Fuse::Controls::Native::iOS::Shape_typeof,
        (uType*(*)())&::g::Fuse::Controls::Native::iOS::SingleLineTextEdit_typeof,
        (uType*(*)())&::g::Fuse::Controls::Native::iOS::Slider_typeof,
        (uType*(*)())&::g::Fuse::Controls::Native::iOS::Switch_typeof,
        (uType*(*)())&::g::Fuse::Controls::Native::iOS::TextEditSpeedHack_typeof,
        (uType*(*)())&::g::Fuse::Controls::Native::iOS::TextView_typeof,
        (uType*(*)())&::g::Fuse::Controls::Native::iOS::UIControlEvent_typeof,
        (uType*(*)())&::g::Fuse::Controls::Native::iOS::UIEvent_typeof,
        (uType*(*)())&::g::Fuse::Controls::Native::iOS::UITouch_typeof,
        (uType*(*)())&::g::Fuse::Controls::Native::iOS::View_typeof,
        (uType*(*)())&::g::Fuse::Controls::Native::iOS::ViewGroup_typeof,
        (uType*(*)())&::g::Fuse::Controls::Native::iOS::ViewParent_typeof,
        (uType*(*)())&::g::Fuse::Controls::NativeTextEditHost_typeof,
        (uType*(*)())&::g::Fuse::Controls::NativeViewHost__Disable_typeof,
        (uType*(*)())&::g::Fuse::Controls::NativeViewHost__DummyRenderer_typeof,
        (uType*(*)())&::g::Fuse::Controls::NativeViewHost__Enable_typeof,
        (uType*(*)())&::g::Fuse::Controls::NativeViewHost_typeof,
        (uType*(*)())&::g::Fuse::Controls::NavigationBar_typeof,
        (uType*(*)())&::g::Fuse::Controls::NavigationControl__PageData_typeof,
        (uType*(*)())&::g::Fuse::Controls::NavigationControl_typeof,
        (uType*(*)())&::g::Fuse::Controls::NavigationControlBit::EnterHorizontal_typeof,
        (uType*(*)())&::g::Fuse::Controls::NavigationControlBit::EnterVertical_typeof,
        (uType*(*)())&::g::Fuse::Controls::NavigationControlBit::ExitHorizontal_typeof,
        (uType*(*)())&::g::Fuse::Controls::NavigationControlBit::ExitVertical_typeof,
        (uType*(*)())&::g::Fuse::Controls::NavigationControlBit::NavEnterHorizontal_typeof,
        (uType*(*)())&::g::Fuse::Controls::NavigationControlBit::NavExitHorizontal_typeof,
        (uType*(*)())&::g::Fuse::Controls::NavigationControlBit::NavRemoveHorizontal_typeof,
        (uType*(*)())&::g::Fuse::Controls::Navigator__NavPage_typeof,
        (uType*(*)())&::g::Fuse::Controls::Navigator_typeof,
        (uType*(*)())&::g::Fuse::Controls::NavigatorSwitchedArgs_typeof,
        (uType*(*)())&::g::Fuse::Controls::Number_typeof,
        (uType*(*)())&::g::Fuse::Controls::Page_typeof,
        (uType*(*)())&::g::Fuse::Controls::PageControl_typeof,
        (uType*(*)())&::g::Fuse::Controls::PageIndicator_typeof,
        (uType*(*)())&::g::Fuse::Controls::PageIndicatorDot_typeof,
        (uType*(*)())&::g::Fuse::Controls::PageIndicatorDotTemplate_typeof,
        (uType*(*)())&::g::Fuse::Controls::PageView_typeof,
        (uType*(*)())&::g::Fuse::Controls::Panel_typeof,
        (uType*(*)())&::g::Fuse::Controls::Path_typeof,
        (uType*(*)())&::g::Fuse::Controls::PathShape_typeof,
        (uType*(*)())&::g::Fuse::Controls::Placeholder_typeof,
        (uType*(*)())&::g::Fuse::Controls::Primitives::ShadowElement_typeof,
        (uType*(*)())&::g::Fuse::Controls::RangeControl_typeof,
        (uType*(*)())&::g::Fuse::Controls::RangeControl2D_typeof,
        (uType*(*)())&::g::Fuse::Controls::Rectangle_typeof,
        (uType*(*)())&::g::Fuse::Controls::RegularPolygon_typeof,
        (uType*(*)())&::g::Fuse::Controls::RightFrameBackground_typeof,
        (uType*(*)())&::g::Fuse::Controls::Router_PrepareProgress_Property_typeof,
        (uType*(*)())&::g::Fuse::Controls::ScrollPositionChangedArgs_typeof,
        (uType*(*)())&::g::Fuse::Controls::ScrollView__DefaultScroller_typeof,
        (uType*(*)())&::g::Fuse::Controls::ScrollView__DefaultTrigger_typeof,
        (uType*(*)())&::g::Fuse::Controls::ScrollView_typeof,
        (uType*(*)())&::g::Fuse::Controls::ScrollViewBase_typeof,
        (uType*(*)())&::g::Fuse::Controls::Shadow_typeof,
        (uType*(*)())&::g::Fuse::Controls::Shape__Watcher_typeof,
        (uType*(*)())&::g::Fuse::Controls::Shape_typeof,
        (uType*(*)())&::g::Fuse::Controls::Slider__Template_typeof,
        (uType*(*)())&::g::Fuse::Controls::Slider__Template1_typeof,
        (uType*(*)())&::g::Fuse::Controls::Slider__Template2_typeof,
        (uType*(*)())&::g::Fuse::Controls::Slider_typeof,
        (uType*(*)())&::g::Fuse::Controls::StackPanel_typeof,
        (uType*(*)())&::g::Fuse::Controls::Star_typeof,
        (uType*(*)())&::g::Fuse::Controls::StatusBarBackground_typeof,
        (uType*(*)())&::g::Fuse::Controls::Switch__Template_typeof,
        (uType*(*)())&::g::Fuse::Controls::Switch__Template1_typeof,
        (uType*(*)())&::g::Fuse::Controls::Switch__Template2_typeof,
        (uType*(*)())&::g::Fuse::Controls::Switch_typeof,
        (uType*(*)())&::g::Fuse::Controls::Text_typeof,
        (uType*(*)())&::g::Fuse::Controls::TextBlock_typeof,
        (uType*(*)())&::g::Fuse::Controls::TextBox_typeof,
        (uType*(*)())&::g::Fuse::Controls::TextControl_typeof,
        (uType*(*)())&::g::Fuse::Controls::TextEdit_typeof,
        (uType*(*)())&::g::Fuse::Controls::TextInput_typeof,
        (uType*(*)())&::g::Fuse::Controls::TextInputActionArgs_typeof,
        (uType*(*)())&::g::Fuse::Controls::TextInputControl_typeof,
        (uType*(*)())&::g::Fuse::Controls::TextView_typeof,
        (uType*(*)())&::g::Fuse::Controls::ToggleControl_typeof,
        (uType*(*)())&::g::Fuse::Controls::TopFrameBackground_typeof,
        (uType*(*)())&::g::Fuse::Controls::UrlVideoSource_typeof,
        (uType*(*)())&::g::Fuse::Controls::Video_typeof,
        (uType*(*)())&::g::Fuse::Controls::VideoImpl::EmptyVideo_typeof,
        (uType*(*)())&::g::Fuse::Controls::VideoImpl::GraphicsVideoService_typeof,
        (uType*(*)())&::g::Fuse::Controls::VideoImpl::iOS::VideoLoader__VideoPromise_typeof,
        (uType*(*)())&::g::Fuse::Controls::VideoImpl::iOS::VideoLoader_typeof,
        (uType*(*)())&::g::Fuse::Controls::VideoImpl::iOS::VideoPlayer_typeof,
        (uType*(*)())&::g::Fuse::Controls::VideoImpl::iOS::VideoPlayerImpl_typeof,
        (uType*(*)())&::g::Fuse::Controls::VideoImpl::LoadingClosure_typeof,
        (uType*(*)())&::g::Fuse::Controls::VideoImpl::Scale9Rectangle_typeof,
        (uType*(*)())&::g::Fuse::Controls::VideoImpl::VideoDiskCache_typeof,
        (uType*(*)())&::g::Fuse::Controls::VideoImpl::VideoDrawElement_typeof,
        (uType*(*)())&::g::Fuse::Controls::VideoImpl::VideoLoader_typeof,
        (uType*(*)())&::g::Fuse::Controls::VideoImpl::VideoVisual_typeof,
        (uType*(*)())&::g::Fuse::Controls::VideoSource_typeof,
        (uType*(*)())&::g::Fuse::Controls::Viewbox_typeof,
        (uType*(*)())&::g::Fuse::Controls::WebView_typeof,
        (uType*(*)())&::g::Fuse::Controls::WrapPanel_typeof,
        (uType*(*)())&::g::Fuse::Deferred_typeof,
        (uType*(*)())&::g::Fuse::DeferredManager_typeof,
        (uType*(*)())&::g::Fuse::Designer::AdvancedAttribute_typeof,
        (uType*(*)())&::g::Fuse::Designer::ChildExtensionAttribute_typeof,
        (uType*(*)())&::g::Fuse::Designer::ColorAttribute_typeof,
        (uType*(*)())&::g::Fuse::Designer::ComponentOfAttribute_typeof,
        (uType*(*)())&::g::Fuse::Designer::DefaultComponentAttribute_typeof,
        (uType*(*)())&::g::Fuse::Designer::DefaultInstanceAttribute_typeof,
        (uType*(*)())&::g::Fuse::Designer::DesignerNameAttribute_typeof,
        (uType*(*)())&::g::Fuse::Designer::DragDropPriorityAttribute_typeof,
        (uType*(*)())&::g::Fuse::Designer::ExtensionAttribute_typeof,
        (uType*(*)())&::g::Fuse::Designer::GroupAttribute_typeof,
        (uType*(*)())&::g::Fuse::Designer::HideAttribute_typeof,
        (uType*(*)())&::g::Fuse::Designer::HidesAttribute_typeof,
        (uType*(*)())&::g::Fuse::Designer::IconAttribute_typeof,
        (uType*(*)())&::g::Fuse::Designer::InlineAttribute_typeof,
        (uType*(*)())&::g::Fuse::Designer::IntervalAttribute_typeof,
        (uType*(*)())&::g::Fuse::Designer::OptionalHideAttribute_typeof,
        (uType*(*)())&::g::Fuse::Designer::PriorityAttribute_typeof,
        (uType*(*)())&::g::Fuse::Designer::RangeAttribute_typeof,
        (uType*(*)())&::g::Fuse::Designer::RecursionSafeAttribute_typeof,
        (uType*(*)())&::g::Fuse::Designer::RequiredComponentAttribute_typeof,
        (uType*(*)())&::g::Fuse::Designer::SpawnableAttribute_typeof,
        (uType*(*)())&::g::Fuse::Designer::SpawnsAttribute_typeof,
        (uType*(*)())&::g::Fuse::Designer::ThicknessAttribute_typeof,
        (uType*(*)())&::g::Fuse::Designer::TransitionAttribute_typeof,
        (uType*(*)())&::g::Fuse::Desktop::DesktopRootViewport_typeof,
        (uType*(*)())&::g::Fuse::Device_typeof,
        (uType*(*)())&::g::Fuse::Diagnostic_typeof,
        (uType*(*)())&::g::Fuse::Diagnostics_typeof,
        (uType*(*)())&::g::Fuse::DrawContext_typeof,
        (uType*(*)())&::g::Fuse::DrawHelpers_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Batching::Batch_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Batching::BatchHelpers_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Batching::BatchIndexBuffer_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Batching::BatchVertexBuffer_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Batching::Entry_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Batching::MeshBatcher_typeof,
        (uType*(*)())&::g::Fuse::Drawing::BezierOp_typeof,
        (uType*(*)())&::g::Fuse::Drawing::BlendModeHelpers_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Border_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Brush__Converter_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Brush_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Brushes_typeof,
        (uType*(*)())&::g::Fuse::Drawing::ButtCap_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Cache_typeof,
        (uType*(*)())&::g::Fuse::Drawing::ClosePath_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Colors_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Contour_typeof,
        (uType*(*)())&::g::Fuse::Drawing::ContourEnumerable_typeof,
        (uType*(*)())&::g::Fuse::Drawing::ContourEnumerator_typeof,
        (uType*(*)())&::g::Fuse::Drawing::ContourTerminator_typeof,
        (uType*(*)())&::g::Fuse::Drawing::CurveTo_typeof,
        (uType*(*)())&::g::Fuse::Drawing::DynamicBrush_typeof,
        (uType*(*)())&::g::Fuse::Drawing::EllipseFactory_typeof,
        (uType*(*)())&::g::Fuse::Drawing::GradientStop_typeof,
        (uType*(*)())&::g::Fuse::Drawing::HorizontalLineTo_typeof,
        (uType*(*)())&::g::Fuse::Drawing::ImageFill__DrawParams_typeof,
        (uType*(*)())&::g::Fuse::Drawing::ImageFill_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Internal::Float2Buffer_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Internal::Float3Buffer_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Internal::FloatBuffer_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Internal::MultiBuffer__Field_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Internal::MultiBuffer__Setter_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Internal::MultiBuffer_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Internal::TypedBuffer_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Internal::UShortBuffer_typeof,
        (uType*(*)())&::g::Fuse::Drawing::LinearGradient_typeof,
        (uType*(*)())&::g::Fuse::Drawing::LinearGradientDrawable_typeof,
        (uType*(*)())&::g::Fuse::Drawing::LineCapImpl_typeof,
        (uType*(*)())&::g::Fuse::Drawing::LineJoinImpl_typeof,
        (uType*(*)())&::g::Fuse::Drawing::LineTo_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Meshes::MeshGenerator_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Meshes::MeshTools_typeof,
        (uType*(*)())&::g::Fuse::Drawing::MiterJoin_typeof,
        (uType*(*)())&::g::Fuse::Drawing::MoveTo_typeof,
        (uType*(*)())&::g::Fuse::Drawing::NonConsecutiveEnumerable_typeof,
        (uType*(*)())&::g::Fuse::Drawing::NonConsecutiveEnumerator_typeof,
        (uType*(*)())&::g::Fuse::Drawing::NonConsecutiveExtension_typeof,
        (uType*(*)())&::g::Fuse::Drawing::PathGeometry_typeof,
        (uType*(*)())&::g::Fuse::Drawing::PathGeometryExtensions_typeof,
        (uType*(*)())&::g::Fuse::Drawing::PathGeometryParser_typeof,
        (uType*(*)())&::g::Fuse::Drawing::PathGeometryRenderer_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Polygon_typeof,
        (uType*(*)())&::g::Fuse::Drawing::PolygonDrawable_typeof,
        (uType*(*)())&::g::Fuse::Drawing::PolygonFiller_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Primitives::Circle_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Primitives::Coverage_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Primitives::Falloff_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Primitives::FillCoverage_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Primitives::LimitCoverage_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Primitives::OneLimitCoverage_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Primitives::Rectangle_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Primitives::ShadowFalloff_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Primitives::StrokeCoverage_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Primitives::Wedge_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Primitives::WedgeCoverage_typeof,
        (uType*(*)())&::g::Fuse::Drawing::RectangleFactory_typeof,
        (uType*(*)())&::g::Fuse::Drawing::RegularPolygonFactory_typeof,
        (uType*(*)())&::g::Fuse::Drawing::RendererContext_typeof,
        (uType*(*)())&::g::Fuse::Drawing::RepeatBaker_typeof,
        (uType*(*)())&::g::Fuse::Drawing::RoundCap_typeof,
        (uType*(*)())&::g::Fuse::Drawing::SmoothCurveTo_typeof,
        (uType*(*)())&::g::Fuse::Drawing::SolidColor_typeof,
        (uType*(*)())&::g::Fuse::Drawing::StarFactory_typeof,
        (uType*(*)())&::g::Fuse::Drawing::StaticBrush_typeof,
        (uType*(*)())&::g::Fuse::Drawing::StaticSolidColor_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Stroke_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Tesselation::ActiveRegion_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Tesselation::Collections::ActiveRegionDict_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Tesselation::Collections::Dict_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Tesselation::Collections::DictNode_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Tesselation::Collections::DictNodeEnumerable_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerator_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Tesselation::Collections::PriorityQueue_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Tesselation::Collections::VertexQueue_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Tesselation::EdgeLoopEnumerable_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Tesselation::EdgesEnumerable_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Tesselation::Face_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Tesselation::FacesEnumerable_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Tesselation::Geom_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Tesselation::HalfEdge_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Tesselation::Mesh_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Tesselation::MeshBuilder_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Tesselation::OriginEnumerable_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Tesselation::Sweep_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Tesselation::Vertex_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Tesselation::VerticesEnumerable_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Token_typeof,
        (uType*(*)())&::g::Fuse::Drawing::Util_typeof,
        (uType*(*)())&::g::Fuse::Drawing::VerticalLineTo_typeof,
        (uType*(*)())&::g::Fuse::Drawing::WindingRules_typeof,
        (uType*(*)())&::g::Fuse::Effects::BasicEffect_typeof,
        (uType*(*)())&::g::Fuse::Effects::Blur_typeof,
        (uType*(*)())&::g::Fuse::Effects::Desaturate_typeof,
        (uType*(*)())&::g::Fuse::Effects::DropShadow__Blitter_typeof,
        (uType*(*)())&::g::Fuse::Effects::DropShadow_typeof,
        (uType*(*)())&::g::Fuse::Effects::Effect_typeof,
        (uType*(*)())&::g::Fuse::Effects::EffectHelpers_typeof,
        (uType*(*)())&::g::Fuse::Effects::Halftone_typeof,
        (uType*(*)())&::g::Fuse::Effects::Mask_typeof,
        (uType*(*)())&::g::Fuse::Elements::AlignmentHelpers_typeof,
        (uType*(*)())&::g::Fuse::Elements::BoxPlacement_typeof,
        (uType*(*)())&::g::Fuse::Elements::BoxSizing_typeof,
        (uType*(*)())&::g::Fuse::Elements::Cache_typeof,
        (uType*(*)())&::g::Fuse::Elements::CacheHelper_typeof,
        (uType*(*)())&::g::Fuse::Elements::CacheTile_typeof,
        (uType*(*)())&::g::Fuse::Elements::DisplayHelpers_typeof,
        (uType*(*)())&::g::Fuse::Elements::Element__GMSCacheItem_typeof,
        (uType*(*)())&::g::Fuse::Elements::Element_typeof,
        (uType*(*)())&::g::Fuse::Elements::ElementAtlas_typeof,
        (uType*(*)())&::g::Fuse::Elements::ElementAtlasFramebuffer_typeof,
        (uType*(*)())&::g::Fuse::Elements::ElementAtlasFramebufferPool_typeof,
        (uType*(*)())&::g::Fuse::Elements::ElementAtlasFramebufferPoolEntry_typeof,
        (uType*(*)())&::g::Fuse::Elements::ElementAtlasFramebufferPoolImpl_typeof,
        (uType*(*)())&::g::Fuse::Elements::ElementBatch_typeof,
        (uType*(*)())&::g::Fuse::Elements::ElementBatchEntry_typeof,
        (uType*(*)())&::g::Fuse::Elements::ElementBatcher_typeof,
        (uType*(*)())&::g::Fuse::Elements::ExplicitTransformOrigin_typeof,
        (uType*(*)())&::g::Fuse::Elements::FillAspectBoxSizing_typeof,
        (uType*(*)())&::g::Fuse::Elements::InteractiveTransform_typeof,
        (uType*(*)())&::g::Fuse::Elements::Internal::ElementDraw_typeof,
        (uType*(*)())&::g::Fuse::Elements::Internal::Scale9Rectangle_typeof,
        (uType*(*)())&::g::Fuse::Elements::LayoutMasterAttr_typeof,
        (uType*(*)())&::g::Fuse::Elements::LayoutMasterBoxSizing__LayoutMasterData_typeof,
        (uType*(*)())&::g::Fuse::Elements::LayoutMasterBoxSizing_typeof,
        (uType*(*)())&::g::Fuse::Elements::LimitBoxSizing_typeof,
        (uType*(*)())&::g::Fuse::Elements::NoImplicitMaxBoxSizing_typeof,
        (uType*(*)())&::g::Fuse::Elements::PreplacementArgs_typeof,
        (uType*(*)())&::g::Fuse::Elements::SingleVisualDrawable_typeof,
        (uType*(*)())&::g::Fuse::Elements::StandardBoxSizing_typeof,
        (uType*(*)())&::g::Fuse::Elements::TransformOrigins__AnchorOrigin_typeof,
        (uType*(*)())&::g::Fuse::Elements::TransformOrigins__BoxCenter_typeof,
        (uType*(*)())&::g::Fuse::Elements::TransformOrigins__CenterOrigin_typeof,
        (uType*(*)())&::g::Fuse::Elements::TransformOrigins__TopLeftOrigin_typeof,
        (uType*(*)())&::g::Fuse::Elements::TransformOrigins_typeof,
        (uType*(*)())&::g::Fuse::Elements::TranslationModes__OffsetMode__Subscriptions_typeof,
        (uType*(*)())&::g::Fuse::Elements::TranslationModes__OffsetMode_typeof,
        (uType*(*)())&::g::Fuse::Elements::TranslationModes__PositionOffsetMode_typeof,
        (uType*(*)())&::g::Fuse::Elements::TranslationModes__RelativeResizeChangeMode_typeof,
        (uType*(*)())&::g::Fuse::Elements::TranslationModes__SizeFactorMode_typeof,
        (uType*(*)())&::g::Fuse::Elements::TranslationModes__TransformOriginOffsetMode_typeof,
        (uType*(*)())&::g::Fuse::Elements::TranslationModes_typeof,
        (uType*(*)())&::g::Fuse::Elements::UX::HeightFunction_typeof,
        (uType*(*)())&::g::Fuse::Elements::UX::LayoutFunction_typeof,
        (uType*(*)())&::g::Fuse::Elements::UX::WidthFunction_typeof,
        (uType*(*)())&::g::Fuse::Elements::Viewport_typeof,
        (uType*(*)())&::g::Fuse::FastMatrix_typeof,
        (uType*(*)())&::g::Fuse::FastProperty1Link_typeof,
        (uType*(*)())&::g::Fuse::FastProperty1Link1_typeof,
        (uType*(*)())&::g::Fuse::FastProperty2Link_typeof,
        (uType*(*)())&::g::Fuse::FastProperty2Link1_typeof,
        (uType*(*)())&::g::Fuse::FileSystem::DirectoryInfo_typeof,
        (uType*(*)())&::g::Fuse::FileSystem::FileInfo_typeof,
        (uType*(*)())&::g::Fuse::FileSystem::FileStatus_typeof,
        (uType*(*)())&::g::Fuse::FileSystem::FileStatusHelpers_typeof,
        (uType*(*)())&::g::Fuse::FileSystem::FileSystemInfo_typeof,
        (uType*(*)())&::g::Fuse::FileSystem::FileSystemModule_typeof,
        (uType*(*)())&::g::Fuse::FileSystem::FileSystemOperations__Closure_typeof,
        (uType*(*)())&::g::Fuse::FileSystem::FileSystemOperations__Closure1_typeof,
        (uType*(*)())&::g::Fuse::FileSystem::FileSystemOperations_typeof,
        (uType*(*)())&::g::Fuse::FileSystem::IosPaths_typeof,
        (uType*(*)())&::g::Fuse::FileSystem::Nothing_typeof,
        (uType*(*)())&::g::Fuse::FileSystem::PathTools_typeof,
        (uType*(*)())&::g::Fuse::FileSystem::UnifiedPaths_typeof,
        (uType*(*)())&::g::Fuse::FixedViewport_typeof,
        (uType*(*)())&::g::Fuse::Font_typeof,
        (uType*(*)())&::g::Fuse::FramebufferPool_typeof,
        (uType*(*)())&::g::Fuse::FramebufferPoolImpl_typeof,
        (uType*(*)())&::g::Fuse::FrustumViewport_typeof,
        (uType*(*)())&::g::Fuse::Gestures::CircularRangeBehavior_typeof,
        (uType*(*)())&::g::Fuse::Gestures::Clicked_typeof,
        (uType*(*)())&::g::Fuse::Gestures::ClickedArgs_typeof,
        (uType*(*)())&::g::Fuse::Gestures::Clicker_typeof,
        (uType*(*)())&::g::Fuse::Gestures::ClickerTrigger_typeof,
        (uType*(*)())&::g::Fuse::Gestures::DegreeSpan_typeof,
        (uType*(*)())&::g::Fuse::Gestures::double2_typeof,
        (uType*(*)())&::g::Fuse::Gestures::DoubleClicked_typeof,
        (uType*(*)())&::g::Fuse::Gestures::DoubleTapped_typeof,
        (uType*(*)())&::g::Fuse::Gestures::DoubleTappedArgs_typeof,
        (uType*(*)())&::g::Fuse::Gestures::EdgeSwipeAnimation_typeof,
        (uType*(*)())&::g::Fuse::Gestures::Internal::EdgeSwiper_typeof,
        (uType*(*)())&::g::Fuse::Gestures::Internal::Swiper_typeof,
        (uType*(*)())&::g::Fuse::Gestures::Internal::SwipeRegion_typeof,
        (uType*(*)())&::g::Fuse::Gestures::Internal::TwoFinger__Point_typeof,
        (uType*(*)())&::g::Fuse::Gestures::Internal::TwoFinger_typeof,
        (uType*(*)())&::g::Fuse::Gestures::KeepFocusInView_typeof,
        (uType*(*)())&::g::Fuse::Gestures::KeepInView_typeof,
        (uType*(*)())&::g::Fuse::Gestures::KeepInViewCommon_typeof,
        (uType*(*)())&::g::Fuse::Gestures::LinearRangeBehavior_typeof,
        (uType*(*)())&::g::Fuse::Gestures::LongPressed_typeof,
        (uType*(*)())&::g::Fuse::Gestures::LongPressedArgs_typeof,
        (uType*(*)())&::g::Fuse::Gestures::PanGesture_typeof,
        (uType*(*)())&::g::Fuse::Gestures::Pressed_typeof,
        (uType*(*)())&::g::Fuse::Gestures::Released_typeof,
        (uType*(*)())&::g::Fuse::Gestures::RotateGesture_typeof,
        (uType*(*)())&::g::Fuse::Gestures::ScrollableGoto_typeof,
        (uType*(*)())&::g::Fuse::Gestures::Scroller_typeof,
        (uType*(*)())&::g::Fuse::Gestures::ScrollTo_typeof,
        (uType*(*)())&::g::Fuse::Gestures::SetSwipeActive_typeof,
        (uType*(*)())&::g::Fuse::Gestures::Swiped_typeof,
        (uType*(*)())&::g::Fuse::Gestures::SwipeGesture_typeof,
        (uType*(*)())&::g::Fuse::Gestures::SwipeGestureHelper_typeof,
        (uType*(*)())&::g::Fuse::Gestures::SwipingAnimation_typeof,
        (uType*(*)())&::g::Fuse::Gestures::Tapped_typeof,
        (uType*(*)())&::g::Fuse::Gestures::TappedArgs_typeof,
        (uType*(*)())&::g::Fuse::Gestures::ToggleSwipeActive_typeof,
        (uType*(*)())&::g::Fuse::Gestures::TransformGesture_typeof,
        (uType*(*)())&::g::Fuse::Gestures::WhileClickerTrigger_typeof,
        (uType*(*)())&::g::Fuse::Gestures::WhileHovering_typeof,
        (uType*(*)())&::g::Fuse::Gestures::WhilePressed_typeof,
        (uType*(*)())&::g::Fuse::Gestures::WhileSwipeActive_typeof,
        (uType*(*)())&::g::Fuse::Gestures::ZoomGesture_typeof,
        (uType*(*)())&::g::Fuse::GraphicsWorker_typeof,
        (uType*(*)())&::g::Fuse::HitTestContext_typeof,
        (uType*(*)())&::g::Fuse::HitTestResult_typeof,
        (uType*(*)())&::g::Fuse::ILoadingStatic_typeof,
        (uType*(*)())&::g::Fuse::InheritViewport_typeof,
        (uType*(*)())&::g::Fuse::Input::Capturer_typeof,
        (uType*(*)())&::g::Fuse::Input::CustomPointerEventArgs_typeof,
        (uType*(*)())&::g::Fuse::Input::Focus_typeof,
        (uType*(*)())&::g::Fuse::Input::FocusGained_typeof,
        (uType*(*)())&::g::Fuse::Input::FocusGainedArgs_typeof,
        (uType*(*)())&::g::Fuse::Input::FocusLost_typeof,
        (uType*(*)())&::g::Fuse::Input::FocusLostArgs_typeof,
        (uType*(*)())&::g::Fuse::Input::FocusPrediction__PredictFilter_typeof,
        (uType*(*)())&::g::Fuse::Input::FocusPrediction_typeof,
        (uType*(*)())&::g::Fuse::Input::FocusPredictStrategy_typeof,
        (uType*(*)())&::g::Fuse::Input::HitTestHelpers_typeof,
        (uType*(*)())&::g::Fuse::Input::IsFocusableChangedArgs_typeof,
        (uType*(*)())&::g::Fuse::Input::IsFocusableChangedEvent_typeof,
        (uType*(*)())&::g::Fuse::Input::Keyboard_typeof,
        (uType*(*)())&::g::Fuse::Input::KeyEventArgs_typeof,
        (uType*(*)())&::g::Fuse::Input::KeyPressed_typeof,
        (uType*(*)())&::g::Fuse::Input::KeyPressedArgs_typeof,
        (uType*(*)())&::g::Fuse::Input::KeyReleased_typeof,
        (uType*(*)())&::g::Fuse::Input::KeyReleasedArgs_typeof,
        (uType*(*)())&::g::Fuse::Input::Pointer__DefaultPointerEventResponder_typeof,
        (uType*(*)())&::g::Fuse::Input::Pointer__PELHolder_typeof,
        (uType*(*)())&::g::Fuse::Input::Pointer__PointerRecord_typeof,
        (uType*(*)())&::g::Fuse::Input::Pointer_typeof,
        (uType*(*)())&::g::Fuse::Input::PointerEntered_typeof,
        (uType*(*)())&::g::Fuse::Input::PointerEnteredArgs_typeof,
        (uType*(*)())&::g::Fuse::Input::PointerEventArgs_typeof,
        (uType*(*)())&::g::Fuse::Input::PointerEventData_typeof,
        (uType*(*)())&::g::Fuse::Input::PointerLeft_typeof,
        (uType*(*)())&::g::Fuse::Input::PointerLeftArgs_typeof,
        (uType*(*)())&::g::Fuse::Input::PointerMoved_typeof,
        (uType*(*)())&::g::Fuse::Input::PointerMovedArgs_typeof,
        (uType*(*)())&::g::Fuse::Input::PointerPressed_typeof,
        (uType*(*)())&::g::Fuse::Input::PointerPressedArgs_typeof,
        (uType*(*)())&::g::Fuse::Input::PointerReleased_typeof,
        (uType*(*)())&::g::Fuse::Input::PointerReleasedArgs_typeof,
        (uType*(*)())&::g::Fuse::Input::PointerWheelMoved_typeof,
        (uType*(*)())&::g::Fuse::Input::PointerWheelMovedArgs_typeof,
        (uType*(*)())&::g::Fuse::Input::SelectionQuery_typeof,
        (uType*(*)())&::g::Fuse::Input::TextEntered_typeof,
        (uType*(*)())&::g::Fuse::Input::TextEnteredArgs_typeof,
        (uType*(*)())&::g::Fuse::Input::TextService_typeof,
        (uType*(*)())&::g::Fuse::Input::UX::AttachedFocusMembers_typeof,
        (uType*(*)())&::g::Fuse::Input::UX::AttachedKeyboardMembers_typeof,
        (uType*(*)())&::g::Fuse::Input::UX::AttachedPointerMembers_typeof,
        (uType*(*)())&::g::Fuse::Internal::Blender_typeof,
        (uType*(*)())&::g::Fuse::Internal::BlenderMap_typeof,
        (uType*(*)())&::g::Fuse::Internal::Cache_typeof,
        (uType*(*)())&::g::Fuse::Internal::CacheItem_typeof,
        (uType*(*)())&::g::Fuse::Internal::CacheRef_typeof,
        (uType*(*)())&::g::Fuse::Internal::DoubleBlender_typeof,
        (uType*(*)())&::g::Fuse::Internal::Drawing::SolidRectangle_typeof,
        (uType*(*)())&::g::Fuse::Internal::Float2Blender_typeof,
        (uType*(*)())&::g::Fuse::Internal::Float3Blender_typeof,
        (uType*(*)())&::g::Fuse::Internal::Float4Blender_typeof,
        (uType*(*)())&::g::Fuse::Internal::FloatBlender_typeof,
        (uType*(*)())&::g::Fuse::Internal::FontFaceDescriptor_typeof,
        (uType*(*)())&::g::Fuse::Internal::FrustumMatrix_typeof,
        (uType*(*)())&::g::Fuse::Internal::FuseConfig_typeof,
        (uType*(*)())&::g::Fuse::Internal::ImageContainer_typeof,
        (uType*(*)())&::g::Fuse::Internal::iOSSystemFont_typeof,
        (uType*(*)())&::g::Fuse::Internal::MiniList__Enumerator_typeof,
        (uType*(*)())&::g::Fuse::Internal::MiniList_typeof,
        (uType*(*)())&::g::Fuse::Internal::RectPacker_typeof,
        (uType*(*)())&::g::Fuse::Internal::ScalarBlender_typeof,
        (uType*(*)())&::g::Fuse::Internal::Size2Blender_typeof,
        (uType*(*)())&::g::Fuse::Internal::SizeBlender_typeof,
        (uType*(*)())&::g::Fuse::Internal::SizingContainer_typeof,
        (uType*(*)())&::g::Fuse::Internal::SkylineNode_typeof,
        (uType*(*)())&::g::Fuse::Internal::Statistics_typeof,
        (uType*(*)())&::g::Fuse::Internal::SystemFont_typeof,
        (uType*(*)())&::g::Fuse::Internal::VectorUtil_typeof,
        (uType*(*)())&::g::Fuse::iOS::Bindings::Blitter_typeof,
        (uType*(*)())&::g::Fuse::iOS::Bindings::CGColorSpaceRef_typeof,
        (uType*(*)())&::g::Fuse::iOS::Bindings::CGContextRef_typeof,
        (uType*(*)())&::g::Fuse::iOS::Bindings::iOSDeviceInterop_typeof,
        (uType*(*)())&::g::Fuse::iOS::Bindings::TextLayout_typeof,
        (uType*(*)())&::g::Fuse::iOS::Bindings::TextRenderer_typeof,
        (uType*(*)())&::g::Fuse::iOS::Controls::NavDelegate_typeof,
        (uType*(*)())&::g::Fuse::iOS::Controls::WebView_typeof,
        (uType*(*)())&::g::Fuse::iOS::Controls::WKWebViewHelpers_typeof,
        (uType*(*)())&::g::Fuse::iOS::StatusBarConfig_typeof,
        (uType*(*)())&::g::Fuse::iOSDevice_typeof,
        (uType*(*)())&::g::Fuse::KeyboardBootstrapper_typeof,
        (uType*(*)())&::g::Fuse::LayoutParams_typeof,
        (uType*(*)())&::g::Fuse::LayoutPriority_typeof,
        (uType*(*)())&::g::Fuse::Layouts::CircleLayout_typeof,
        (uType*(*)())&::g::Fuse::Layouts::Column_typeof,
        (uType*(*)())&::g::Fuse::Layouts::ColumnLayout_typeof,
        (uType*(*)())&::g::Fuse::Layouts::DefaultLayout_typeof,
        (uType*(*)())&::g::Fuse::Layouts::DefinitionBase_typeof,
        (uType*(*)())&::g::Fuse::Layouts::DockLayout_typeof,
        (uType*(*)())&::g::Fuse::Layouts::GridLayout_typeof,
        (uType*(*)())&::g::Fuse::Layouts::Layout_typeof,
        (uType*(*)())&::g::Fuse::Layouts::Layouts_typeof,
        (uType*(*)())&::g::Fuse::Layouts::Row_typeof,
        (uType*(*)())&::g::Fuse::Layouts::StackLayout_typeof,
        (uType*(*)())&::g::Fuse::Layouts::WrapLayout_typeof,
        (uType*(*)())&::g::Fuse::MobileBootstrapping_typeof,
        (uType*(*)())&::g::Fuse::Motion::DestinationMotion_typeof,
        (uType*(*)())&::g::Fuse::Motion::MotionConfig_typeof,
        (uType*(*)())&::g::Fuse::Motion::NavigationMotion_typeof,
        (uType*(*)())&::g::Fuse::Motion::ScrollViewMotion_typeof,
        (uType*(*)())&::g::Fuse::Motion::Simulation::AdapterMultiplier_typeof,
        (uType*(*)())&::g::Fuse::Motion::Simulation::AngularAdapter_typeof,
        (uType*(*)())&::g::Fuse::Motion::Simulation::BasicBoundedRegion2D_typeof,
        (uType*(*)())&::g::Fuse::Motion::Simulation::EasingMotion_typeof,
        (uType*(*)())&::g::Fuse::Motion::Simulation::ElasticForce_typeof,
        (uType*(*)())&::g::Fuse::Motion::Simulation::Friction_typeof,
        (uType*(*)())&::g::Fuse::Motion::Simulation::PointerVelocity_typeof,
        (uType*(*)())&::g::Fuse::Motion::Simulation::SmoothSnap_typeof,
        (uType*(*)())&::g::Fuse::Motion::SpringFunction_typeof,
        (uType*(*)())&::g::Fuse::NameRegistry_typeof,
        (uType*(*)())&::g::Fuse::Navigation::Activated_typeof,
        (uType*(*)())&::g::Fuse::Navigation::ActivatingAnimation_typeof,
        (uType*(*)())&::g::Fuse::Navigation::BackForwardNavigationTriggerAction_typeof,
        (uType*(*)())&::g::Fuse::Navigation::Deactivated_typeof,
        (uType*(*)())&::g::Fuse::Navigation::DeactivatingAnimation_typeof,
        (uType*(*)())&::g::Fuse::Navigation::DirectNavigation_typeof,
        (uType*(*)())&::g::Fuse::Navigation::EdgeNavigation_typeof,
        (uType*(*)())&::g::Fuse::Navigation::EndSeekArgs_typeof,
        (uType*(*)())&::g::Fuse::Navigation::EnterExitAnimation_typeof,
        (uType*(*)())&::g::Fuse::Navigation::EnteringAnimation_typeof,
        (uType*(*)())&::g::Fuse::Navigation::ExitingAnimation_typeof,
        (uType*(*)())&::g::Fuse::Navigation::ExplicitNavigation_typeof,
        (uType*(*)())&::g::Fuse::Navigation::GoBack_typeof,
        (uType*(*)())&::g::Fuse::Navigation::GoForward_typeof,
        (uType*(*)())&::g::Fuse::Navigation::HierarchicalNavigation_typeof,
        (uType*(*)())&::g::Fuse::Navigation::LinearNavigation_typeof,
        (uType*(*)())&::g::Fuse::Navigation::NavigatedArgs_typeof,
        (uType*(*)())&::g::Fuse::Navigation::NavigateTo_typeof,
        (uType*(*)())&::g::Fuse::Navigation::NavigateToggle_typeof,
        (uType*(*)())&::g::Fuse::Navigation::Navigation_typeof,
        (uType*(*)())&::g::Fuse::Navigation::NavigationAnimation_typeof,
        (uType*(*)())&::g::Fuse::Navigation::NavigationArgs_typeof,
        (uType*(*)())&::g::Fuse::Navigation::NavigationPageProperty_typeof,
        (uType*(*)())&::g::Fuse::Navigation::NavigationPageProxy_typeof,
        (uType*(*)())&::g::Fuse::Navigation::NavigationPageState_typeof,
        (uType*(*)())&::g::Fuse::Navigation::NavigationStateArgs_typeof,
        (uType*(*)())&::g::Fuse::Navigation::NavigationTrigger_typeof,
        (uType*(*)())&::g::Fuse::Navigation::NavigationTriggerAction_typeof,
        (uType*(*)())&::g::Fuse::Navigation::NavTriggerUtil_typeof,
        (uType*(*)())&::g::Fuse::Navigation::PageResourceBinding_typeof,
        (uType*(*)())&::g::Fuse::Navigation::Route_typeof,
        (uType*(*)())&::g::Fuse::Navigation::Router__GetRouteCallback_typeof,
        (uType*(*)())&::g::Fuse::Navigation::Router_typeof,
        (uType*(*)())&::g::Fuse::Navigation::RouterModify_typeof,
        (uType*(*)())&::g::Fuse::Navigation::StructuredNavigation_typeof,
        (uType*(*)())&::g::Fuse::Navigation::SwipeNavigate_typeof,
        (uType*(*)())&::g::Fuse::Navigation::UpdateSeekArgs_typeof,
        (uType*(*)())&::g::Fuse::Navigation::VisualNavigation__PageData_typeof,
        (uType*(*)())&::g::Fuse::Navigation::VisualNavigation_typeof,
        (uType*(*)())&::g::Fuse::Navigation::WhileActive_typeof,
        (uType*(*)())&::g::Fuse::Navigation::WhileCanGoBack_typeof,
        (uType*(*)())&::g::Fuse::Navigation::WhileCanGoForward_typeof,
        (uType*(*)())&::g::Fuse::Navigation::WhileHistoryTrigger_typeof,
        (uType*(*)())&::g::Fuse::Navigation::WhileInactive_typeof,
        (uType*(*)())&::g::Fuse::Navigation::WhileInEnterState_typeof,
        (uType*(*)())&::g::Fuse::Navigation::WhileInExitState_typeof,
        (uType*(*)())&::g::Fuse::Navigation::WhileNavigating_typeof,
        (uType*(*)())&::g::Fuse::Navigation::WhileNavigationTrigger_typeof,
        (uType*(*)())&::g::Fuse::Node__CallFuncClosure_typeof,
        (uType*(*)())&::g::Fuse::Node_typeof,
        (uType*(*)())&::g::Fuse::OrthographicFrustum_typeof,
        (uType*(*)())&::g::Fuse::OSVersion_typeof,
        (uType*(*)())&::g::Fuse::PendingRemoveVisual_typeof,
        (uType*(*)())&::g::Fuse::PerspectiveFrustum_typeof,
        (uType*(*)())&::g::Fuse::Physics::Body_typeof,
        (uType*(*)())&::g::Fuse::Physics::BodyAttr_typeof,
        (uType*(*)())&::g::Fuse::Physics::Draggable_typeof,
        (uType*(*)())&::g::Fuse::Physics::EnteredForceField_typeof,
        (uType*(*)())&::g::Fuse::Physics::ExitedForceField_typeof,
        (uType*(*)())&::g::Fuse::Physics::ForceField_typeof,
        (uType*(*)())&::g::Fuse::Physics::ForceFieldEventArgs_typeof,
        (uType*(*)())&::g::Fuse::Physics::ForceFieldEventTrigger_typeof,
        (uType*(*)())&::g::Fuse::Physics::ForceFieldTrigger_typeof,
        (uType*(*)())&::g::Fuse::Physics::InForceFieldAnimation_typeof,
        (uType*(*)())&::g::Fuse::Physics::PointAttractor_typeof,
        (uType*(*)())&::g::Fuse::Physics::Spring_typeof,
        (uType*(*)())&::g::Fuse::Physics::WhileDragging_typeof,
        (uType*(*)())&::g::Fuse::Physics::World_typeof,
        (uType*(*)())&::g::Fuse::PlacedArgs_typeof,
        (uType*(*)())&::g::Fuse::Platform::AppEvents_typeof,
        (uType*(*)())&::g::Fuse::Platform::Display_typeof,
        (uType*(*)())&::g::Fuse::Platform::InterApp_typeof,
        (uType*(*)())&::g::Fuse::Platform::Lifecycle_typeof,
        (uType*(*)())&::g::Fuse::Preview::SelectionManager_typeof,
        (uType*(*)())&::g::Fuse::Properties_typeof,
        (uType*(*)())&::g::Fuse::PropertyHandle_typeof,
        (uType*(*)())&::g::Fuse::Reactive::AnyChangeObserver_typeof,
        (uType*(*)())&::g::Fuse::Reactive::BindAttempt_typeof,
        (uType*(*)())&::g::Fuse::Reactive::BindingTypes_typeof,
        (uType*(*)())&::g::Fuse::Reactive::Case_typeof,
        (uType*(*)())&::g::Fuse::Reactive::ClearDataBinding_typeof,
        (uType*(*)())&::g::Fuse::Reactive::Closure_typeof,
        (uType*(*)())&::g::Fuse::Reactive::ClosureArgs_typeof,
        (uType*(*)())&::g::Fuse::Reactive::Console_typeof,
        (uType*(*)())&::g::Fuse::Reactive::ContextBinding_typeof,
        (uType*(*)())&::g::Fuse::Reactive::DataBinding_typeof,
        (uType*(*)())&::g::Fuse::Reactive::DataToResourceBinding_typeof,
        (uType*(*)())&::g::Fuse::Reactive::DebugLog_typeof,
        (uType*(*)())&::g::Fuse::Reactive::DelayFunction__SetClosure_typeof,
        (uType*(*)())&::g::Fuse::Reactive::DelayFunction_typeof,
        (uType*(*)())&::g::Fuse::Reactive::Each_typeof,
        (uType*(*)())&::g::Fuse::Reactive::EventBinding__CallClosure_typeof,
        (uType*(*)())&::g::Fuse::Reactive::EventBinding_typeof,
        (uType*(*)())&::g::Fuse::Reactive::FuseJS::Builtins_typeof,
        (uType*(*)())&::g::Fuse::Reactive::FuseJS::Http__FunctionClosure_typeof,
        (uType*(*)())&::g::Fuse::Reactive::FuseJS::Http__FuseJSHttpClient_typeof,
        (uType*(*)())&::g::Fuse::Reactive::FuseJS::Http__FuseJSHttpRequest_typeof,
        (uType*(*)())&::g::Fuse::Reactive::FuseJS::Http_typeof,
        (uType*(*)())&::g::Fuse::Reactive::FuseJS::HttpHeaders_typeof,
        (uType*(*)())&::g::Fuse::Reactive::FuseJS::TimerManager__Timer_typeof,
        (uType*(*)())&::g::Fuse::Reactive::FuseJS::TimerManager_typeof,
        (uType*(*)())&::g::Fuse::Reactive::FuseJS::TimerModule__CallbackClosure_typeof,
        (uType*(*)())&::g::Fuse::Reactive::FuseJS::TimerModule_typeof,
        (uType*(*)())&::g::Fuse::Reactive::Instance_typeof,
        (uType*(*)())&::g::Fuse::Reactive::Instantiator__CountItem_typeof,
        (uType*(*)())&::g::Fuse::Reactive::Instantiator_typeof,
        (uType*(*)())&::g::Fuse::Reactive::JavaScript__EvaluateDataContext_typeof,
        (uType*(*)())&::g::Fuse::Reactive::JavaScript_typeof,
        (uType*(*)())&::g::Fuse::Reactive::Match_typeof,
        (uType*(*)())&::g::Fuse::Reactive::PathObserver_typeof,
        (uType*(*)())&::g::Fuse::Reactive::PropertyBinding_typeof,
        (uType*(*)())&::g::Fuse::Reactive::ReadClearDataBinding_typeof,
        (uType*(*)())&::g::Fuse::Reactive::ReadDataBinding_typeof,
        (uType*(*)())&::g::Fuse::Reactive::ReadPropertyBinding_typeof,
        (uType*(*)())&::g::Fuse::Reactive::RootableScriptModule_typeof,
        (uType*(*)())&::g::Fuse::Reactive::SegmentObserver_typeof,
        (uType*(*)())&::g::Fuse::Reactive::Select_typeof,
        (uType*(*)())&::g::Fuse::Reactive::SnapshotPropertyBinding_typeof,
        (uType*(*)())&::g::Fuse::Reactive::ThreadWorker__Flag_typeof,
        (uType*(*)())&::g::Fuse::Reactive::ThreadWorker_typeof,
        (uType*(*)())&::g::Fuse::Reactive::WhileCount_typeof,
        (uType*(*)())&::g::Fuse::Reactive::WhileEmpty_typeof,
        (uType*(*)())&::g::Fuse::Reactive::WhileNotEmpty_typeof,
        (uType*(*)())&::g::Fuse::Reactive::With_typeof,
        (uType*(*)())&::g::Fuse::Reactive::WriteClearDataBinding_typeof,
        (uType*(*)())&::g::Fuse::Reactive::WriteDataBinding_typeof,
        (uType*(*)())&::g::Fuse::Reactive::WritePropertyBinding_typeof,
        (uType*(*)())&::g::Fuse::RelativeTransform_typeof,
        (uType*(*)())&::g::Fuse::RenderTargetEntry_typeof,
        (uType*(*)())&::g::Fuse::RequestBringIntoViewArgs_typeof,
        (uType*(*)())&::g::Fuse::RequiresRootedException_typeof,
        (uType*(*)())&::g::Fuse::Resources::DisposalManager_typeof,
        (uType*(*)())&::g::Fuse::Resources::DisposalPolicy_typeof,
        (uType*(*)())&::g::Fuse::Resources::DoubleResourceConverter_typeof,
        (uType*(*)())&::g::Fuse::Resources::ExpirationDisposalPolicy_typeof,
        (uType*(*)())&::g::Fuse::Resources::FileImageSource_typeof,
        (uType*(*)())&::g::Fuse::Resources::FileImageSourceCache_typeof,
        (uType*(*)())&::g::Fuse::Resources::FileImageSourceImpl__BackgroundLoad_typeof,
        (uType*(*)())&::g::Fuse::Resources::FileImageSourceImpl_typeof,
        (uType*(*)())&::g::Fuse::Resources::FileResource_typeof,
        (uType*(*)())&::g::Fuse::Resources::FloatResourceConverter_typeof,
        (uType*(*)())&::g::Fuse::Resources::GenericResourceConverter_typeof,
        (uType*(*)())&::g::Fuse::Resources::HttpImageSource_typeof,
        (uType*(*)())&::g::Fuse::Resources::HttpImageSourceCache_typeof,
        (uType*(*)())&::g::Fuse::Resources::HttpImageSourceImpl__BackgroundLoad_typeof,
        (uType*(*)())&::g::Fuse::Resources::HttpImageSourceImpl_typeof,
        (uType*(*)())&::g::Fuse::Resources::ImageSource_typeof,
        (uType*(*)())&::g::Fuse::Resources::ImageSourceChangedArgs_typeof,
        (uType*(*)())&::g::Fuse::Resources::ImageSourceErrorArgs_typeof,
        (uType*(*)())&::g::Fuse::Resources::IntResourceConverter_typeof,
        (uType*(*)())&::g::Fuse::Resources::LoadingImageSource_typeof,
        (uType*(*)())&::g::Fuse::Resources::MemoryPolicy_typeof,
        (uType*(*)())&::g::Fuse::Resources::MultiDensityImageSource_typeof,
        (uType*(*)())&::g::Fuse::Resources::NumericResourceConverter_typeof,
        (uType*(*)())&::g::Fuse::Resources::PolicyDeferredDisposable_typeof,
        (uType*(*)())&::g::Fuse::Resources::ProxyImageSource_typeof,
        (uType*(*)())&::g::Fuse::Resources::ResourceBinding_typeof,
        (uType*(*)())&::g::Fuse::Resources::ResourceBool_typeof,
        (uType*(*)())&::g::Fuse::Resources::ResourceConverters_typeof,
        (uType*(*)())&::g::Fuse::Resources::ResourceFloat_typeof,
        (uType*(*)())&::g::Fuse::Resources::ResourceFloat2_typeof,
        (uType*(*)())&::g::Fuse::Resources::ResourceFloat3_typeof,
        (uType*(*)())&::g::Fuse::Resources::ResourceFloat4_typeof,
        (uType*(*)())&::g::Fuse::Resources::ResourceObject_typeof,
        (uType*(*)())&::g::Fuse::Resources::ResourceRegistry_typeof,
        (uType*(*)())&::g::Fuse::Resources::ResourceSetter_typeof,
        (uType*(*)())&::g::Fuse::Resources::ResourceString_typeof,
        (uType*(*)())&::g::Fuse::Resources::RetainDisposalPolicy_typeof,
        (uType*(*)())&::g::Fuse::Resources::SystemFileSource_typeof,
        (uType*(*)())&::g::Fuse::Resources::TextureImageSource_typeof,
        (uType*(*)())&::g::Fuse::RootViewport_typeof,
        (uType*(*)())&::g::Fuse::Rotation_typeof,
        (uType*(*)())&::g::Fuse::Scaling_typeof,
        (uType*(*)())&::g::Fuse::ScalingModes__IdentityMode_typeof,
        (uType*(*)())&::g::Fuse::ScalingModes_typeof,
        (uType*(*)())&::g::Fuse::Scripting::AppInitialized__Closure_typeof,
        (uType*(*)())&::g::Fuse::Scripting::AppInitialized_typeof,
        (uType*(*)())&::g::Fuse::Scripting::Array_typeof,
        (uType*(*)())&::g::Fuse::Scripting::ArrayMirror_typeof,
        (uType*(*)())&::g::Fuse::Scripting::BoolChangedArgs_typeof,
        (uType*(*)())&::g::Fuse::Scripting::ClassInstance_typeof,
        (uType*(*)())&::g::Fuse::Scripting::CodeModule_typeof,
        (uType*(*)())&::g::Fuse::Scripting::Context__MethodClosure_typeof,
        (uType*(*)())&::g::Fuse::Scripting::Context__PropertyClosure_typeof,
        (uType*(*)())&::g::Fuse::Scripting::Context_typeof,
        (uType*(*)())&::g::Fuse::Scripting::DoubleChangedArgs_typeof,
        (uType*(*)())&::g::Fuse::Scripting::Error_typeof,
        (uType*(*)())&::g::Fuse::Scripting::EventEmitterModule_typeof,
        (uType*(*)())&::g::Fuse::Scripting::External_typeof,
        (uType*(*)())&::g::Fuse::Scripting::FactoryClosure_typeof,
        (uType*(*)())&::g::Fuse::Scripting::FileModule_typeof,
        (uType*(*)())&::g::Fuse::Scripting::FileSourceConverter_typeof,
        (uType*(*)())&::g::Fuse::Scripting::Function_typeof,
        (uType*(*)())&::g::Fuse::Scripting::JavaScriptCore::Array_typeof,
        (uType*(*)())&::g::Fuse::Scripting::JavaScriptCore::Context__CallbackWrapper_typeof,
        (uType*(*)())&::g::Fuse::Scripting::JavaScriptCore::Context_typeof,
        (uType*(*)())&::g::Fuse::Scripting::JavaScriptCore::Function_typeof,
        (uType*(*)())&::g::Fuse::Scripting::JavaScriptCore::JSClassRef_typeof,
        (uType*(*)())&::g::Fuse::Scripting::JavaScriptCore::JSContextRef_typeof,
        (uType*(*)())&::g::Fuse::Scripting::JavaScriptCore::JSObjectRef_typeof,
        (uType*(*)())&::g::Fuse::Scripting::JavaScriptCore::JSPropertyNameArray_typeof,
        (uType*(*)())&::g::Fuse::Scripting::JavaScriptCore::JSStringRef_typeof,
        (uType*(*)())&::g::Fuse::Scripting::JavaScriptCore::JSTypedArray_typeof,
        (uType*(*)())&::g::Fuse::Scripting::JavaScriptCore::JSValueRef_typeof,
        (uType*(*)())&::g::Fuse::Scripting::JavaScriptCore::Object_typeof,
        (uType*(*)())&::g::Fuse::Scripting::JSCallback__ActionClosure_typeof,
        (uType*(*)())&::g::Fuse::Scripting::JSCallback__ActionClosure1_typeof,
        (uType*(*)())&::g::Fuse::Scripting::JSCallback__ActionClosure2_typeof,
        (uType*(*)())&::g::Fuse::Scripting::JSCallback__FuncClosure_typeof,
        (uType*(*)())&::g::Fuse::Scripting::JSCallback__FuncClosure1_typeof,
        (uType*(*)())&::g::Fuse::Scripting::JSCallback__FuncClosure2_typeof,
        (uType*(*)())&::g::Fuse::Scripting::JSCallback__NumberConverter_typeof,
        (uType*(*)())&::g::Fuse::Scripting::JSCallback_typeof,
        (uType*(*)())&::g::Fuse::Scripting::JSFileSource_typeof,
        (uType*(*)())&::g::Fuse::Scripting::JSObjectUtils_typeof,
        (uType*(*)())&::g::Fuse::Scripting::Json_typeof,
        (uType*(*)())&::g::Fuse::Scripting::LazyObservableProperty_typeof,
        (uType*(*)())&::g::Fuse::Scripting::ListMirror_typeof,
        (uType*(*)())&::g::Fuse::Scripting::Marshal_typeof,
        (uType*(*)())&::g::Fuse::Scripting::Module_typeof,
        (uType*(*)())&::g::Fuse::Scripting::ModuleResult_typeof,
        (uType*(*)())&::g::Fuse::Scripting::NativeEvent_typeof,
        (uType*(*)())&::g::Fuse::Scripting::NativeEventEmitterModule__EmitClosure_typeof,
        (uType*(*)())&::g::Fuse::Scripting::NativeEventEmitterModule__OnClosure_typeof,
        (uType*(*)())&::g::Fuse::Scripting::NativeEventEmitterModule_typeof,
        (uType*(*)())&::g::Fuse::Scripting::NativeFunction__NativeFunctionClosure_typeof,
        (uType*(*)())&::g::Fuse::Scripting::NativeFunction_typeof,
        (uType*(*)())&::g::Fuse::Scripting::NativeMember_typeof,
        (uType*(*)())&::g::Fuse::Scripting::NativeModule_typeof,
        (uType*(*)())&::g::Fuse::Scripting::NativePromise__ContextClosure_typeof,
        (uType*(*)())&::g::Fuse::Scripting::NativePromise__PromiseClosure_typeof,
        (uType*(*)())&::g::Fuse::Scripting::NativePromise_typeof,
        (uType*(*)())&::g::Fuse::Scripting::NativeProperty_typeof,
        (uType*(*)())&::g::Fuse::Scripting::Object_typeof,
        (uType*(*)())&::g::Fuse::Scripting::ObjectMirror_typeof,
        (uType*(*)())&::g::Fuse::Scripting::Observable__Add_typeof,
        (uType*(*)())&::g::Fuse::Scripting::Observable__Clear_typeof,
        (uType*(*)())&::g::Fuse::Scripting::Observable__InsertAll_typeof,
        (uType*(*)())&::g::Fuse::Scripting::Observable__InsertAt_typeof,
        (uType*(*)())&::g::Fuse::Scripting::Observable__NewAll_typeof,
        (uType*(*)())&::g::Fuse::Scripting::Observable__NewAt_typeof,
        (uType*(*)())&::g::Fuse::Scripting::Observable__Operation_typeof,
        (uType*(*)())&::g::Fuse::Scripting::Observable__RemoveAt_typeof,
        (uType*(*)())&::g::Fuse::Scripting::Observable__RemoveRange_typeof,
        (uType*(*)())&::g::Fuse::Scripting::Observable__Set_typeof,
        (uType*(*)())&::g::Fuse::Scripting::Observable__Subscription_typeof,
        (uType*(*)())&::g::Fuse::Scripting::Observable_typeof,
        (uType*(*)())&::g::Fuse::Scripting::ObservableProperty__PushCapture_typeof,
        (uType*(*)())&::g::Fuse::Scripting::ObservableProperty_typeof,
        (uType*(*)())&::g::Fuse::Scripting::ScriptClass_typeof,
        (uType*(*)())&::g::Fuse::Scripting::ScriptEventArgs_typeof,
        (uType*(*)())&::g::Fuse::Scripting::ScriptException_typeof,
        (uType*(*)())&::g::Fuse::Scripting::ScriptMember_typeof,
        (uType*(*)())&::g::Fuse::Scripting::ScriptMethod_typeof,
        (uType*(*)())&::g::Fuse::Scripting::ScriptMethod1__CallClosure_typeof,
        (uType*(*)())&::g::Fuse::Scripting::ScriptMethod1_typeof,
        (uType*(*)())&::g::Fuse::Scripting::ScriptMethodInline_typeof,
        (uType*(*)())&::g::Fuse::Scripting::ScriptModule__RequireContext_typeof,
        (uType*(*)())&::g::Fuse::Scripting::ScriptModule_typeof,
        (uType*(*)())&::g::Fuse::Scripting::ScriptProperty_typeof,
        (uType*(*)())&::g::Fuse::Scripting::ScriptProperty1_typeof,
        (uType*(*)())&::g::Fuse::Scripting::StringChangedArgs_typeof,
        (uType*(*)())&::g::Fuse::Scripting::Value_typeof,
        (uType*(*)())&::g::Fuse::Scripting::ValueMirror_typeof,
        (uType*(*)())&::g::Fuse::Selection::Deselected_typeof,
        (uType*(*)())&::g::Fuse::Selection::Selectable_typeof,
        (uType*(*)())&::g::Fuse::Selection::Selected_typeof,
        (uType*(*)())&::g::Fuse::Selection::Selection_typeof,
        (uType*(*)())&::g::Fuse::Selection::SelectionEvent_typeof,
        (uType*(*)())&::g::Fuse::Selection::SelectionEventArgs_typeof,
        (uType*(*)())&::g::Fuse::Selection::ToggleSelection_typeof,
        (uType*(*)())&::g::Fuse::Selection::WhileSelected_typeof,
        (uType*(*)())&::g::Fuse::Shear_typeof,
        (uType*(*)())&::g::Fuse::Stage_typeof,
        (uType*(*)())&::g::Fuse::Storage::ApplicationDir__ReadClosure_typeof,
        (uType*(*)())&::g::Fuse::Storage::ApplicationDir__WriteClosure_typeof,
        (uType*(*)())&::g::Fuse::Storage::ApplicationDir_typeof,
        (uType*(*)())&::g::Fuse::Storage::StorageModule_typeof,
        (uType*(*)())&::g::Fuse::SystemFont_typeof,
        (uType*(*)())&::g::Fuse::TestDeferredManager_typeof,
        (uType*(*)())&::g::Fuse::Text::Batch_typeof,
        (uType*(*)())&::g::Fuse::Text::Bidirectional::Implementation::UBidiRuns_typeof,
        (uType*(*)())&::g::Fuse::Text::Bidirectional::Run_typeof,
        (uType*(*)())&::g::Fuse::Text::Bidirectional::Runs__Range_typeof,
        (uType*(*)())&::g::Fuse::Text::Bidirectional::Runs_typeof,
        (uType*(*)())&::g::Fuse::Text::Edit::Caret_typeof,
        (uType*(*)())&::g::Fuse::Text::Edit::CaretPosition_typeof,
        (uType*(*)())&::g::Fuse::Text::Edit::Edit_typeof,
        (uType*(*)())&::g::Fuse::Text::Edit::Selection_typeof,
        (uType*(*)())&::g::Fuse::Text::Edit::Span_typeof,
        (uType*(*)())&::g::Fuse::Text::FallingBackFont_typeof,
        (uType*(*)())&::g::Fuse::Text::FallingBackFontFace_typeof,
        (uType*(*)())&::g::Fuse::Text::Font_typeof,
        (uType*(*)())&::g::Fuse::Text::FontFace_typeof,
        (uType*(*)())&::g::Fuse::Text::Glyph_typeof,
        (uType*(*)())&::g::Fuse::Text::GlyphAtlas_typeof,
        (uType*(*)())&::g::Fuse::Text::GlyphTexture_typeof,
        (uType*(*)())&::g::Fuse::Text::Implementation::CoreTextFont_typeof,
        (uType*(*)())&::g::Fuse::Text::Implementation::CoreTextFontFace_typeof,
        (uType*(*)())&::g::Fuse::Text::Implementation::CString_typeof,
        (uType*(*)())&::g::Fuse::Text::Implementation::FreeType_typeof,
        (uType*(*)())&::g::Fuse::Text::Implementation::FreeTypeFont_typeof,
        (uType*(*)())&::g::Fuse::Text::Implementation::FreeTypeFontFace_typeof,
        (uType*(*)())&::g::Fuse::Text::Implementation::FT_Error_typeof,
        (uType*(*)())&::g::Fuse::Text::Implementation::Harfbuzz_typeof,
        (uType*(*)())&::g::Fuse::Text::Implementation::HarfbuzzFont_typeof,
        (uType*(*)())&::g::Fuse::Text::Implementation::Memory_typeof,
        (uType*(*)())&::g::Fuse::Text::Implementation::UnoString_typeof,
        (uType*(*)())&::g::Fuse::Text::LazyFont_typeof,
        (uType*(*)())&::g::Fuse::Text::LazyFontFace_typeof,
        (uType*(*)())&::g::Fuse::Text::Measure_typeof,
        (uType*(*)())&::g::Fuse::Text::PositionedGlyph_typeof,
        (uType*(*)())&::g::Fuse::Text::PositionedRun_typeof,
        (uType*(*)())&::g::Fuse::Text::Quad_typeof,
        (uType*(*)())&::g::Fuse::Text::RenderedGlyph_typeof,
        (uType*(*)())&::g::Fuse::Text::Renderer__SharedIndexBuffer_typeof,
        (uType*(*)())&::g::Fuse::Text::Renderer_typeof,
        (uType*(*)())&::g::Fuse::Text::Shape_typeof,
        (uType*(*)())&::g::Fuse::Text::ShapedRun__PGEnumerator_typeof,
        (uType*(*)())&::g::Fuse::Text::ShapedRun_typeof,
        (uType*(*)())&::g::Fuse::Text::SinglyLinkedList__Enumerator_typeof,
        (uType*(*)())&::g::Fuse::Text::SinglyLinkedList_typeof,
        (uType*(*)())&::g::Fuse::Text::Substring__CharEnumerator_typeof,
        (uType*(*)())&::g::Fuse::Text::Substring__LineEnumerable_typeof,
        (uType*(*)())&::g::Fuse::Text::Substring__LineEnumerator_typeof,
        (uType*(*)())&::g::Fuse::Text::Substring_typeof,
        (uType*(*)())&::g::Fuse::Text::SubstringExtensions_typeof,
        (uType*(*)())&::g::Fuse::Text::SubTexture_typeof,
        (uType*(*)())&::g::Fuse::Text::TextureAtlas_typeof,
        (uType*(*)())&::g::Fuse::Text::Truncate_typeof,
        (uType*(*)())&::g::Fuse::Text::Wrap_typeof,
        (uType*(*)())&::g::Fuse::Time_typeof,
        (uType*(*)())&::g::Fuse::Timer_typeof,
        (uType*(*)())&::g::Fuse::Toast_typeof,
        (uType*(*)())&::g::Fuse::Transform_typeof,
        (uType*(*)())&::g::Fuse::Translation_typeof,
        (uType*(*)())&::g::Fuse::TranslationModes__HeightMode_typeof,
        (uType*(*)())&::g::Fuse::TranslationModes__LocalMode_typeof,
        (uType*(*)())&::g::Fuse::TranslationModes__ParentSizeMode_typeof,
        (uType*(*)())&::g::Fuse::TranslationModes__SizeMode_typeof,
        (uType*(*)())&::g::Fuse::TranslationModes__WidthMode_typeof,
        (uType*(*)())&::g::Fuse::TranslationModes_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::BringIntoView_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::BringToFront_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::Callback_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::CancelInteractions_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::Collapse_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::DebugAction_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::DebugFrame_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::DebugProperty_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::DebugTime_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::EvaluateJS_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::GiveFocus_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::Hide_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::JSEventArgs_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::LoadHtml_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::LoadUrl_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::Pause_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::PlaybackAction_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::PlayTo_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::Pulse_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::PulseBackward_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::PulseForward_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::RaiseUserEvent_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::ReleaseFocus_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::ReleasePage_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::Reload_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::Resume_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::SendToBack_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::Set_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::Show_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::Stop_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::StopLoading_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::Toggle_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::TransitionLayout_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::TransitionState_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::TriggerAction_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::UserEventArg_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Actions::WebViewNavAction_typeof,
        (uType*(*)())&::g::Fuse::Triggers::AddingAnimation_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Android_typeof,
        (uType*(*)())&::g::Fuse::Triggers::BusyTask_typeof,
        (uType*(*)())&::g::Fuse::Triggers::BusyTaskModule__ConstructorClosure_typeof,
        (uType*(*)())&::g::Fuse::Triggers::BusyTaskModule_typeof,
        (uType*(*)())&::g::Fuse::Triggers::ContainingText_typeof,
        (uType*(*)())&::g::Fuse::Triggers::InteractionCompleted_typeof,
        (uType*(*)())&::g::Fuse::Triggers::iOS_typeof,
        (uType*(*)())&::g::Fuse::Triggers::IScrolledLengths__ContentSizeLength_typeof,
        (uType*(*)())&::g::Fuse::Triggers::IScrolledLengths__PixelsLength_typeof,
        (uType*(*)())&::g::Fuse::Triggers::IScrolledLengths__PointsLength_typeof,
        (uType*(*)())&::g::Fuse::Triggers::IScrolledLengths__ScrollViewSizeLength_typeof,
        (uType*(*)())&::g::Fuse::Triggers::IScrolledLengths_typeof,
        (uType*(*)())&::g::Fuse::Triggers::LayoutAnimation_typeof,
        (uType*(*)())&::g::Fuse::Triggers::LayoutTransition__PositionChangeMode_typeof,
        (uType*(*)())&::g::Fuse::Triggers::LayoutTransition__ResizeChangeMode_typeof,
        (uType*(*)())&::g::Fuse::Triggers::LayoutTransition__ScaleChangeMode_typeof,
        (uType*(*)())&::g::Fuse::Triggers::LayoutTransition__WorldPositionChangeMode_typeof,
        (uType*(*)())&::g::Fuse::Triggers::LayoutTransition_typeof,
        (uType*(*)())&::g::Fuse::Triggers::LayoutTransitioned_typeof,
        (uType*(*)())&::g::Fuse::Triggers::LayoutTransitionedArgs_typeof,
        (uType*(*)())&::g::Fuse::Triggers::OnBackButton_typeof,
        (uType*(*)())&::g::Fuse::Triggers::OnKeyPress_typeof,
        (uType*(*)())&::g::Fuse::Triggers::OnUserEvent_typeof,
        (uType*(*)())&::g::Fuse::Triggers::PageBeginLoading_typeof,
        (uType*(*)())&::g::Fuse::Triggers::PageLoaded_typeof,
        (uType*(*)())&::g::Fuse::Triggers::ProgressAnimation_typeof,
        (uType*(*)())&::g::Fuse::Triggers::PullToReload_typeof,
        (uType*(*)())&::g::Fuse::Triggers::PulseTrigger_typeof,
        (uType*(*)())&::g::Fuse::Triggers::RangeAnimation_typeof,
        (uType*(*)())&::g::Fuse::Triggers::RemovingAnimation_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Scrolled_typeof,
        (uType*(*)())&::g::Fuse::Triggers::ScrolledArgs_typeof,
        (uType*(*)())&::g::Fuse::Triggers::ScrollingAnimation_typeof,
        (uType*(*)())&::g::Fuse::Triggers::ScrollRegion_typeof,
        (uType*(*)())&::g::Fuse::Triggers::State_typeof,
        (uType*(*)())&::g::Fuse::Triggers::StateGroup__GotoImpl_typeof,
        (uType*(*)())&::g::Fuse::Triggers::StateGroup_typeof,
        (uType*(*)())&::g::Fuse::Triggers::TextInputActionTriggered_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Timeline_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Transition_typeof,
        (uType*(*)())&::g::Fuse::Triggers::TransitionGroup_typeof,
        (uType*(*)())&::g::Fuse::Triggers::Trigger_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileBool_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileBusy_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileCompleted_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileContainsText_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileDisabled_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileEnabled_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileEnabledDisabledTrigger_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileFailed_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileFalse_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileFloat_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileFocused_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileFocusWithin_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileInteracting_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileKeyboardVisible__RelativeToKeyboardMode_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileKeyboardVisible_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileLoading_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileNotFocused_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhilePageLoading_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhilePaused_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhilePlaying_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileScrollable_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileScrolled_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileString_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileTrigger_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileTrue_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileValue_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileValueStatic_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileVisible_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileVisibleInScrollView_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileWindowAspect_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileWindowLandscape_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileWindowPortrait_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WhileWindowSize_typeof,
        (uType*(*)())&::g::Fuse::Triggers::WindowSizeTrigger_typeof,
        (uType*(*)())&::g::Fuse::UnhandledExceptionArgs_typeof,
        (uType*(*)())&::g::Fuse::UpdateAction_typeof,
        (uType*(*)())&::g::Fuse::UpdateDispatcher_typeof,
        (uType*(*)())&::g::Fuse::UpdateListener_typeof,
        (uType*(*)())&::g::Fuse::UpdateManager_typeof,
        (uType*(*)())&::g::Fuse::UserEvent_typeof,
        (uType*(*)())&::g::Fuse::UserEventArgs_typeof,
        (uType*(*)())&::g::Fuse::UserEventDispatch_typeof,
        (uType*(*)())&::g::Fuse::ViewportHelpers_typeof,
        (uType*(*)())&::g::Fuse::Visual__HitTestRecord_typeof,
        (uType*(*)())&::g::Fuse::Visual__InteractionItem_typeof,
        (uType*(*)())&::g::Fuse::Visual__ParameterProperty_typeof,
        (uType*(*)())&::g::Fuse::Visual_typeof,
        (uType*(*)())&::g::Fuse::VisualBounds_typeof,
        (uType*(*)())&::g::Fuse::VisualEvent_typeof,
        (uType*(*)())&::g::Fuse::VisualEventArgs_typeof,
        (uType*(*)())&::g::Fuse::VisualListCache_typeof,
        (uType*(*)())&::g::Fuse::WrapException_typeof,
        (uType*(*)())&::g::FuseAndroid_bundle_typeof,
        (uType*(*)())&::g::FuseControls_bundle_typeof,
        (uType*(*)())&::g::FuseControlsNative_bundle_typeof,
        (uType*(*)())&::g::FuseControlsNavigation_FuseControlsShape_Color_Property_typeof,
        (uType*(*)())&::g::FuseControlsPrimitives_bundle_typeof,
        (uType*(*)())&::g::FuseControlsPrimitives_FuseControlsButtonBase_Text_Property_typeof,
        (uType*(*)())&::g::FuseControlsPrimitives_FuseControlsShape_Fill_Property_typeof,
        (uType*(*)())&::g::FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property_typeof,
        (uType*(*)())&::g::FuseControlsPrimitives_FuseControlsTextControl_Value_Property_typeof,
        (uType*(*)())&::g::FuseControlsPrimitives_FuseControlsToggleControl_Value_Property_typeof,
        (uType*(*)())&::g::FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property_typeof,
        (uType*(*)())&::g::FuseControlsPrimitives_FuseDrawingStroke_Brush_Property_typeof,
        (uType*(*)())&::g::FuseControlsPrimitives_FuseDrawingStroke_Color_Property_typeof,
        (uType*(*)())&::g::FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property_typeof,
        (uType*(*)())&::g::FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property_typeof,
        (uType*(*)())&::g::FuseControlsPrimitives_FuseElementsElement_Opacity_Property_typeof,
        (uType*(*)())&::g::FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property_typeof,
        (uType*(*)())&::g::FuseControlsScrollView_FuseControlsScrollViewBase_KeepFocusInView_Property_typeof,
        (uType*(*)())&::g::FuseControlsScrollView_FuseControlsScrollViewBase_UserScroll_Property_typeof,
        (uType*(*)())&::g::FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property_typeof,
        (uType*(*)())&::g::FuseControlsScrollView_FuseTriggersWhileBool_Value_Property_typeof,
        (uType*(*)())&::g::FuseControlsVideo_bundle_typeof,
        (uType*(*)())&::g::FuseCore_bundle_typeof,
        (uType*(*)())&::g::FuseDrawing_bundle_typeof,
        (uType*(*)())&::g::FuseDrawingPolygons_bundle_typeof,
        (uType*(*)())&::g::FuseDrawingPrimitives_bundle_typeof,
        (uType*(*)())&::g::FuseEffects_bundle_typeof,
        (uType*(*)())&::g::FuseElements_bundle_typeof,
        (uType*(*)())&::g::FuseJS::Base64_typeof,
        (uType*(*)())&::g::FuseJS::Bundle__ReadClosure_typeof,
        (uType*(*)())&::g::FuseJS::Bundle_typeof,
        (uType*(*)())&::g::FuseJS::Environment_typeof,
        (uType*(*)())&::g::FuseJS::FileReaderImpl__FileReadCommand_typeof,
        (uType*(*)())&::g::FuseJS::FileReaderImpl_typeof,
        (uType*(*)())&::g::FuseJS::Globals_typeof,
        (uType*(*)())&::g::FuseJS::Latin1Helpers_typeof,
        (uType*(*)())&::g::FuseJS::Lifecycle_typeof,
        (uType*(*)())&::g::FuseJS::RaiseEvent_typeof,
        (uType*(*)())&::g::FuseJS::UserEvents_typeof,
        (uType*(*)())&::g::FuseReactive_bundle_typeof,
        (uType*(*)())&::g::FuseText_bundle_typeof,
        (uType*(*)())&::g::HashableWeakReference_typeof,
        (uType*(*)())&::g::MainView__Template_typeof,
        (uType*(*)())&::g::MainView_typeof,
        (uType*(*)())&::g::ObjC::Helpers_typeof,
        (uType*(*)())&::g::ObjC::ID_typeof,
        (uType*(*)())&::g::OpenGL::GL_typeof,
        (uType*(*)())&::g::OpenGL::GLBufferHandle_typeof,
        (uType*(*)())&::g::OpenGL::GLFramebufferHandle_typeof,
        (uType*(*)())&::g::OpenGL::GLProgramHandle_typeof,
        (uType*(*)())&::g::OpenGL::GLRenderbufferHandle_typeof,
        (uType*(*)())&::g::OpenGL::GLShaderHandle_typeof,
        (uType*(*)())&::g::OpenGL::GLTextureHandle_typeof,
        (uType*(*)())&::g::Outracks::Simulator::AggregateConnectError_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Application_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Apply_typeof,
        (uType*(*)())&::g::Outracks::Simulator::ApplyFirst_typeof,
        (uType*(*)())&::g::Outracks::Simulator::ApplySecond_typeof,
        (uType*(*)())&::g::Outracks::Simulator::ArrayStream_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Bundle_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Bytecode::AddEventHandler_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Bytecode::BindVariable_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Bytecode::BlobLiteral_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Bytecode::BooleanLiteral_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Bytecode::CallDynamicMethod_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Bytecode::CallLambda_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Bytecode::CallStaticMethod_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Bytecode::EnumLiteral_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Bytecode::Expression_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Bytecode::ExpressionIdRegistry_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Bytecode::Instantiate_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Bytecode::IsType_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Bytecode::Lambda_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Bytecode::Literal_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Bytecode::LiteralIdRegistry_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Bytecode::LogicalOr_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Bytecode::MethodGroup_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Bytecode::NamespaceName_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Bytecode::NoOperation_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Bytecode::NumberLiteral_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Bytecode::Optional_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Bytecode::Optional1_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Bytecode::OptionalExtensions_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Bytecode::Parameter_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Bytecode::ReadProperty_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Bytecode::ReadStaticField_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Bytecode::ReadVariable_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Bytecode::RemoveEventHandler_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Bytecode::Return_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Bytecode::Signature_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Bytecode::Statement_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Bytecode::StatementIdRegistry_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Bytecode::StaticMemberName_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Bytecode::StringLiteral_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Bytecode::TypeMemberName_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Bytecode::TypeName_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Bytecode::TypeNameParser_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Bytecode::TypeNameTokenizer_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Bytecode::Variable_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Bytecode::WriteProperty_typeof,
        (uType*(*)())&::g::Outracks::Simulator::BytecodeCache_typeof,
        (uType*(*)())&::g::Outracks::Simulator::ByteFileSource_typeof,
        (uType*(*)())&::g::Outracks::Simulator::ChangeIp_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Closure_typeof,
        (uType*(*)())&::g::Outracks::Simulator::ConcurrentQueue_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Connected_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Connecting_typeof,
        (uType*(*)())&::g::Outracks::Simulator::ConnectingToHost_typeof,
        (uType*(*)())&::g::Outracks::Simulator::ConnectingToProxy_typeof,
        (uType*(*)())&::g::Outracks::Simulator::ConnectionLost_typeof,
        (uType*(*)())&::g::Outracks::Simulator::ConnectToEndpointClosure_typeof,
        (uType*(*)())&::g::Outracks::Simulator::ConnectToFirstRespondingEndpoint_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Context_typeof,
        (uType*(*)())&::g::Outracks::Simulator::DeveloperMenu_typeof,
        (uType*(*)())&::g::Outracks::Simulator::DeviceInfo_typeof,
        (uType*(*)())&::g::Outracks::Simulator::DiagnosticItem_typeof,
        (uType*(*)())&::g::Outracks::Simulator::DiagnosticShower_typeof,
        (uType*(*)())&::g::Outracks::Simulator::DialogButton_typeof,
        (uType*(*)())&::g::Outracks::Simulator::DummyApplication_typeof,
        (uType*(*)())&::g::Outracks::Simulator::EnumerableHitTestExtension__CollectHitNodesClosure_typeof,
        (uType*(*)())&::g::Outracks::Simulator::EnumerableHitTestExtension_typeof,
        (uType*(*)())&::g::Outracks::Simulator::ErrorToast_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Exceptions_typeof,
        (uType*(*)())&::g::Outracks::Simulator::FailedToConnect_typeof,
        (uType*(*)())&::g::Outracks::Simulator::FailedToConnectToEndPoint_typeof,
        (uType*(*)())&::g::Outracks::Simulator::FailedToConnectToProxy_typeof,
        (uType*(*)())&::g::Outracks::Simulator::FailedToConnectToSimulator_typeof,
        (uType*(*)())&::g::Outracks::Simulator::FakeApp_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Faulted_typeof,
        (uType*(*)())&::g::Outracks::Simulator::FileCache_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Flasher_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Forget_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Forget1_typeof,
        (uType*(*)())&::g::Outracks::Simulator::ForgetAction_typeof,
        (uType*(*)())&::g::Outracks::Simulator::GeneratedApplication_typeof,
        (uType*(*)())&::g::Outracks::Simulator::GetSimulatorEndpoint_typeof,
        (uType*(*)())&::g::Outracks::Simulator::GoOffline_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Idle_typeof,
        (uType*(*)())&::g::Outracks::Simulator::ImmutableList_typeof,
        (uType*(*)())&::g::Outracks::Simulator::IndentString_typeof,
        (uType*(*)())&::g::Outracks::Simulator::InvalidDataException_typeof,
        (uType*(*)())&::g::Outracks::Simulator::List_typeof,
        (uType*(*)())&::g::Outracks::Simulator::LoadingScreen_typeof,
        (uType*(*)())&::g::Outracks::Simulator::ModalDialog_typeof,
        (uType*(*)())&::g::Outracks::Simulator::NonExhaustiveMatch_typeof,
        (uType*(*)())&::g::Outracks::Simulator::OfflineSimulatorClient_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Protocol::DebugLog_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Protocol::Error_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Protocol::ExceptionInfo_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Protocol::Execute_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Protocol::MessageFromClient_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Protocol::MessageToClient_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Protocol::RegisterName_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Protocol::Reify_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Protocol::SetSelection_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Protocol::UnhandledException_typeof,
        (uType*(*)())&::g::Outracks::Simulator::ProxyClient_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Reflection::DelegateReflection_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Reflection::Native::CppEvent_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Reflection::Native::CppProperty_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Reflection::Native::NativeReflection_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Reflection::Native::ReflectionCache_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Reflection::Native::ReflectionExtensions_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Reflection::Native::ReflectionHelpers_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Reflection::Native::SimpleTypeMap_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Reflection::Native::TryInvokeExtension_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Reifying_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Running_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Runtime::Environment_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Runtime::LambdaClosure_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Runtime::LazyProperty_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Runtime::LazyPropertyStorage_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Runtime::MemberNotFound_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Runtime::ObjectPropertyRegistry_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Runtime::ObjectTagRegistry_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Runtime::ScopeClosure_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Runtime::Selection_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Runtime::SimulatedObjectTypeRegistry_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Runtime::TypeNotFound_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Runtime::UnambiguousMethodNotFound_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Runtime::UxProperty_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Runtime::UxTemplate_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Runtime::VariableNotBound_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Runtime::VirtualMachine_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Serialization_typeof,
        (uType*(*)())&::g::Outracks::Simulator::ShowingModalDialog_typeof,
        (uType*(*)())&::g::Outracks::Simulator::ShowingPrompt_typeof,
        (uType*(*)())&::g::Outracks::Simulator::SimulatorClient_typeof,
        (uType*(*)())&::g::Outracks::Simulator::State_typeof,
        (uType*(*)())&::g::Outracks::Simulator::StringSplitting_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Task_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Tasks_typeof,
        (uType*(*)())&::g::Outracks::Simulator::TaskThread_typeof,
        (uType*(*)())&::g::Outracks::Simulator::Uninitialized_typeof,
        (uType*(*)())&::g::Outracks::Simulator::UserAppState_typeof,
        (uType*(*)())&::g::Outracks::Simulator::WaitForFirstResult_typeof,
        (uType*(*)())&::g::OutracksSimulatorClientUno_bundle_typeof,
        (uType*(*)())&::g::OutracksSimulatorClientUno_FuseControlsShape_Color_Property_typeof,
        (uType*(*)())&::g::OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property_typeof,
        (uType*(*)())&::g::OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property_typeof,
        (uType*(*)())&::g::OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property_typeof,
        (uType*(*)())&::g::OutracksSimulatorClientUno_FuseTriggersWhileBool_Value_Property_typeof,
        (uType*(*)())&::g::OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property_typeof,
        (uType*(*)())&::g::OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property_typeof,
        (uType*(*)())&::g::OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property_typeof,
        (uType*(*)())&::g::OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property_typeof,
        (uType*(*)())&::g::PageWithTitle_typeof,
        (uType*(*)())&::g::Polyfills::Window::WindowModule_typeof,
        (uType*(*)())&::g::Share_typeof,
        (uType*(*)())&::g::ShareSheet_bundle_typeof,
        (uType*(*)())&::g::ShareSheet_FuseControlsPage_Title_Property_typeof,
        (uType*(*)())&::g::ShareSheet_FuseControlsPanel_Color_Property_typeof,
        (uType*(*)())&::g::ShareSheet_FuseControlsRectangle_CornerRadius_Property_typeof,
        (uType*(*)())&::g::ShareSheet_FuseControlsShape_Color_Property_typeof,
        (uType*(*)())&::g::ShareSheet_FuseControlsTextControl_TextColor_Property_typeof,
        (uType*(*)())&::g::ShareSheet_FuseControlsTextControl_Value_Property_typeof,
        (uType*(*)())&::g::ShareSheet_FuseEffectsBlur_Radius_Property_typeof,
        (uType*(*)())&::g::ShareSheet_FuseElementsElement_Height_Property_typeof,
        (uType*(*)())&::g::ShareSheet_FuseElementsElement_Opacity_Property_typeof,
        (uType*(*)())&::g::ShareSheet_FuseReactiveEach_Items_Property_typeof,
        (uType*(*)())&::g::ShareSheet_PageWithTitle_HeaderColor_Property_typeof,
        (uType*(*)())&::g::ShareSheet_PageWithTitle_HeaderTextColor_Property_typeof,
        (uType*(*)())&::g::ShareSheet_PageWithTitle_Instructions_Property_typeof,
        (uType*(*)())&::g::Uno::AggregateException_typeof,
        (uType*(*)())&::g::Uno::Application_typeof,
        (uType*(*)())&::g::Uno::ArgumentException_typeof,
        (uType*(*)())&::g::Uno::ArgumentNullException_typeof,
        (uType*(*)())&::g::Uno::ArgumentOutOfRangeException_typeof,
        (uType*(*)())&::g::Uno::Array_typeof,
        (uType*(*)())&::g::Uno::Attribute_typeof,
        (uType*(*)())&::g::Uno::Bool_typeof,
        (uType*(*)())&::g::Uno::Buffer_typeof,
        (uType*(*)())&::g::Uno::Byte_typeof,
        (uType*(*)())&::g::Uno::Byte2_typeof,
        (uType*(*)())&::g::Uno::Byte4_typeof,
        (uType*(*)())&::g::Uno::Char_typeof,
        (uType*(*)())&::g::Uno::Collections::Dictionary__Bucket_typeof,
        (uType*(*)())&::g::Uno::Collections::Dictionary__Enumerator_typeof,
        (uType*(*)())&::g::Uno::Collections::Dictionary__KeyCollection__Enumerator_typeof,
        (uType*(*)())&::g::Uno::Collections::Dictionary__KeyCollection_typeof,
        (uType*(*)())&::g::Uno::Collections::Dictionary__ValueCollection__Enumerator_typeof,
        (uType*(*)())&::g::Uno::Collections::Dictionary__ValueCollection_typeof,
        (uType*(*)())&::g::Uno::Collections::Dictionary_typeof,
        (uType*(*)())&::g::Uno::Collections::EmptyEnumerable_typeof,
        (uType*(*)())&::g::Uno::Collections::EmptyEnumerator_typeof,
        (uType*(*)())&::g::Uno::Collections::EnumerableExtensions__LinkedList_typeof,
        (uType*(*)())&::g::Uno::Collections::EnumerableExtensions_typeof,
        (uType*(*)())&::g::Uno::Collections::HashSet__Enumerator_typeof,
        (uType*(*)())&::g::Uno::Collections::HashSet_typeof,
        (uType*(*)())&::g::Uno::Collections::IListExtensions_typeof,
        (uType*(*)())&::g::Uno::Collections::KeyValuePair_typeof,
        (uType*(*)())&::g::Uno::Collections::LinkedList__Enumerator_typeof,
        (uType*(*)())&::g::Uno::Collections::LinkedList_typeof,
        (uType*(*)())&::g::Uno::Collections::LinkedListNode_typeof,
        (uType*(*)())&::g::Uno::Collections::List__Enumerator_typeof,
        (uType*(*)())&::g::Uno::Collections::List_typeof,
        (uType*(*)())&::g::Uno::Collections::ObservableList_typeof,
        (uType*(*)())&::g::Uno::Collections::OfTypeEnumerable_typeof,
        (uType*(*)())&::g::Uno::Collections::OfTypeEnumerator_typeof,
        (uType*(*)())&::g::Uno::Collections::OrderByCompare_typeof,
        (uType*(*)())&::g::Uno::Collections::PriorityQueue_typeof,
        (uType*(*)())&::g::Uno::Collections::PriorityQueueItem_typeof,
        (uType*(*)())&::g::Uno::Collections::Queue__Enumerator_typeof,
        (uType*(*)())&::g::Uno::Collections::Queue_typeof,
        (uType*(*)())&::g::Uno::Collections::ReadOnlyCollection_typeof,
        (uType*(*)())&::g::Uno::Collections::SelectEnumerable_typeof,
        (uType*(*)())&::g::Uno::Collections::SelectEnumerator_typeof,
        (uType*(*)())&::g::Uno::Collections::Stack__Enumerator_typeof,
        (uType*(*)())&::g::Uno::Collections::Stack_typeof,
        (uType*(*)())&::g::Uno::Collections::UnionEnumerable_typeof,
        (uType*(*)())&::g::Uno::Collections::UnionEnumerator_typeof,
        (uType*(*)())&::g::Uno::Collections::WhereEnumerable_typeof,
        (uType*(*)())&::g::Uno::Collections::WhereEnumerator_typeof,
        (uType*(*)())&::g::Uno::Color_typeof,
        (uType*(*)())&::g::Uno::ColorHelper_typeof,
        (uType*(*)())&::g::Uno::Compiler::CallerFilePathAttribute_typeof,
        (uType*(*)())&::g::Uno::Compiler::CallerLineNumberAttribute_typeof,
        (uType*(*)())&::g::Uno::Compiler::CallerMemberNameAttribute_typeof,
        (uType*(*)())&::g::Uno::Compiler::CallerPackageNameAttribute_typeof,
        (uType*(*)())&::g::Uno::Compiler::ExportTargetInterop::Android::ForeignFixedNameAttribute_typeof,
        (uType*(*)())&::g::Uno::Compiler::ExportTargetInterop::DontCopyStructAttribute_typeof,
        (uType*(*)())&::g::Uno::Compiler::ExportTargetInterop::DontExportAttribute_typeof,
        (uType*(*)())&::g::Uno::Compiler::ExportTargetInterop::Foreign::ObjC::Object_typeof,
        (uType*(*)())&::g::Uno::Compiler::ExportTargetInterop::OptionalAttribute_typeof,
        (uType*(*)())&::g::Uno::Compiler::ExportTargetInterop::StaticAttribute_typeof,
        (uType*(*)())&::g::Uno::Compiler::ExportTargetInterop::TargetSpecificImplementationAttribute_typeof,
        (uType*(*)())&::g::Uno::Compiler::ExportTargetInterop::TargetSpecificTypeAttribute_typeof,
        (uType*(*)())&::g::Uno::Compiler::HideFromCodeCompleterAttribute_typeof,
        (uType*(*)())&::g::Uno::Compiler::IgnoreMainClassAttribute_typeof,
        (uType*(*)())&::g::Uno::Compiler::ImportServices::FilenameAttribute_typeof,
        (uType*(*)())&::g::Uno::Compiler::MainClassAttribute_typeof,
        (uType*(*)())&::g::Uno::Compiler::ShaderGenerator::ShaderStageInlineAttribute_typeof,
        (uType*(*)())&::g::Uno::Compiler::UxGeneratedAttribute_typeof,
        (uType*(*)())&::g::Uno::Content::Fonts::BitmapFont__CharPair_typeof,
        (uType*(*)())&::g::Uno::Content::Fonts::BitmapFont__GlyphInfo_typeof,
        (uType*(*)())&::g::Uno::Content::Fonts::BitmapFont_typeof,
        (uType*(*)())&::g::Uno::Content::Fonts::CppFontFace_typeof,
        (uType*(*)())&::g::Uno::Content::Fonts::CppFontFaceHandle_typeof,
        (uType*(*)())&::g::Uno::Content::Fonts::DefaultTextTransform_typeof,
        (uType*(*)())&::g::Uno::Content::Fonts::FontFace_typeof,
        (uType*(*)())&::g::Uno::Content::Fonts::FontFaceHelpers_typeof,
        (uType*(*)())&::g::Uno::Content::Fonts::RenderedGlyph_typeof,
        (uType*(*)())&::g::Uno::Content::Fonts::SdfFontShader_typeof,
        (uType*(*)())&::g::Uno::Content::Fonts::SpriteFontShader_typeof,
        (uType*(*)())&::g::Uno::Content::Fonts::TextRenderer_typeof,
        (uType*(*)())&::g::Uno::Content::Fonts::TextShader_typeof,
        (uType*(*)())&::g::Uno::Content::Fonts::TextShaderData_typeof,
        (uType*(*)())&::g::Uno::Content::Fonts::TextTransform_typeof,
        (uType*(*)())&::g::Uno::Content::Images::Bitmap_typeof,
        (uType*(*)())&::g::Uno::Content::Models::IndexArray_typeof,
        (uType*(*)())&::g::Uno::Content::Models::ModelMesh_typeof,
        (uType*(*)())&::g::Uno::Content::Models::VertexAttributeArray_typeof,
        (uType*(*)())&::g::Uno::Content::Splines::KeyframedSpline__Key_typeof,
        (uType*(*)())&::g::Uno::Content::Splines::KeyframedSpline_typeof,
        (uType*(*)())&::g::Uno::Content::Splines::LinearSplineFloat_typeof,
        (uType*(*)())&::g::Uno::Content::Splines::LinearSplineFloat2_typeof,
        (uType*(*)())&::g::Uno::Content::Splines::LinearSplineFloat3_typeof,
        (uType*(*)())&::g::Uno::Content::Splines::LinearSplineFloat4_typeof,
        (uType*(*)())&::g::Uno::Content::Splines::LinearSplineFloat4x4_typeof,
        (uType*(*)())&::g::Uno::Content::Splines::Spline_typeof,
        (uType*(*)())&::g::Uno::Data::Xml::AttributeHandleConverter_typeof,
        (uType*(*)())&::g::Uno::Data::Xml::TargetSpecificXmlNode_typeof,
        (uType*(*)())&::g::Uno::Data::Xml::ValidationHelper_typeof,
        (uType*(*)())&::g::Uno::Data::Xml::XmlAttribute_typeof,
        (uType*(*)())&::g::Uno::Data::Xml::XmlAttributeCollection_typeof,
        (uType*(*)())&::g::Uno::Data::Xml::XmlAttributeHandle_typeof,
        (uType*(*)())&::g::Uno::Data::Xml::XmlCharacterData_typeof,
        (uType*(*)())&::g::Uno::Data::Xml::XmlComment_typeof,
        (uType*(*)())&::g::Uno::Data::Xml::XmlDeclaration_typeof,
        (uType*(*)())&::g::Uno::Data::Xml::XmlDocument_typeof,
        (uType*(*)())&::g::Uno::Data::Xml::XmlDocumentElement_typeof,
        (uType*(*)())&::g::Uno::Data::Xml::XmlElement_typeof,
        (uType*(*)())&::g::Uno::Data::Xml::XmlEncodingHelper_typeof,
        (uType*(*)())&::g::Uno::Data::Xml::XmlException_typeof,
        (uType*(*)())&::g::Uno::Data::Xml::XmlLinkedNode_typeof,
        (uType*(*)())&::g::Uno::Data::Xml::XmlLinkedNodeCollection_typeof,
        (uType*(*)())&::g::Uno::Data::Xml::XmlNode_typeof,
        (uType*(*)())&::g::Uno::Data::Xml::XmlNodeCollectionBase_typeof,
        (uType*(*)())&::g::Uno::Data::Xml::XmlNodeHandle_typeof,
        (uType*(*)())&::g::Uno::Data::Xml::XmlNodeHandleConverter_typeof,
        (uType*(*)())&::g::Uno::Data::Xml::XmlNodeImpl_typeof,
        (uType*(*)())&::g::Uno::Data::Xml::XmlProcessingInstruction_typeof,
        (uType*(*)())&::g::Uno::Data::Xml::XmlText_typeof,
        (uType*(*)())&::g::Uno::Data::Xml::XmlValue_typeof,
        (uType*(*)())&::g::Uno::DateTime_typeof,
        (uType*(*)())&::g::Uno::Delegate_typeof,
        (uType*(*)())&::g::Uno::Diagnostics::AllocateEvent_typeof,
        (uType*(*)())&::g::Uno::Diagnostics::AlwaysProfileAttribute_typeof,
        (uType*(*)())&::g::Uno::Diagnostics::Clock_typeof,
        (uType*(*)())&::g::Uno::Diagnostics::Debug_typeof,
        (uType*(*)())&::g::Uno::Diagnostics::EnterEvent_typeof,
        (uType*(*)())&::g::Uno::Diagnostics::ExitEvent_typeof,
        (uType*(*)())&::g::Uno::Diagnostics::FreeEvent_typeof,
        (uType*(*)())&::g::Uno::Diagnostics::IdMap_typeof,
        (uType*(*)())&::g::Uno::Diagnostics::NeverProfileAttribute_typeof,
        (uType*(*)())&::g::Uno::Diagnostics::Profile_typeof,
        (uType*(*)())&::g::Uno::Diagnostics::ProfileData_typeof,
        (uType*(*)())&::g::Uno::Diagnostics::ProfileEvent_typeof,
        (uType*(*)())&::g::Uno::Double_typeof,
        (uType*(*)())&::g::Uno::Enum_typeof,
        (uType*(*)())&::g::Uno::EventArgs_typeof,
        (uType*(*)())&::g::Uno::Exception_typeof,
        (uType*(*)())&::g::Uno::FakeTime_typeof,
        (uType*(*)())&::g::Uno::FlagsAttribute_typeof,
        (uType*(*)())&::g::Uno::Float_typeof,
        (uType*(*)())&::g::Uno::Float2_typeof,
        (uType*(*)())&::g::Uno::Float2x2_typeof,
        (uType*(*)())&::g::Uno::Float3_typeof,
        (uType*(*)())&::g::Uno::Float3x3_typeof,
        (uType*(*)())&::g::Uno::Float4_typeof,
        (uType*(*)())&::g::Uno::Float4x4_typeof,
        (uType*(*)())&::g::Uno::FormatException_typeof,
        (uType*(*)())&::g::Uno::GC_typeof,
        (uType*(*)())&::g::Uno::Generic_typeof,
        (uType*(*)())&::g::Uno::Geometry::Box_typeof,
        (uType*(*)())&::g::Uno::Geometry::Collision_typeof,
        (uType*(*)())&::g::Uno::Geometry::Collision2D_typeof,
        (uType*(*)())&::g::Uno::Geometry::CubicBezier_typeof,
        (uType*(*)())&::g::Uno::Geometry::Ray_typeof,
        (uType*(*)())&::g::Uno::Geometry::Triangle2D_typeof,
        (uType*(*)())&::g::Uno::Geometry::Vertex_typeof,
        (uType*(*)())&::g::Uno::Geometry::VertexEnumerable_typeof,
        (uType*(*)())&::g::Uno::Geometry::VertexEnumerator_typeof,
        (uType*(*)())&::g::Uno::Graphics::DeviceBuffer_typeof,
        (uType*(*)())&::g::Uno::Graphics::FormatHelpers_typeof,
        (uType*(*)())&::g::Uno::Graphics::Framebuffer_typeof,
        (uType*(*)())&::g::Uno::Graphics::GraphicsContext_typeof,
        (uType*(*)())&::g::Uno::Graphics::IndexBuffer_typeof,
        (uType*(*)())&::g::Uno::Graphics::IndexTypeHelpers_typeof,
        (uType*(*)())&::g::Uno::Graphics::RenderTarget_typeof,
        (uType*(*)())&::g::Uno::Graphics::SamplerState_typeof,
        (uType*(*)())&::g::Uno::Graphics::Texture2D_typeof,
        (uType*(*)())&::g::Uno::Graphics::TextureCube_typeof,
        (uType*(*)())&::g::Uno::Graphics::TextureHelpers_typeof,
        (uType*(*)())&::g::Uno::Graphics::VertexAttributeInfo_typeof,
        (uType*(*)())&::g::Uno::Graphics::VertexAttributeTypeHelpers_typeof,
        (uType*(*)())&::g::Uno::Graphics::VertexBuffer_typeof,
        (uType*(*)())&::g::Uno::Graphics::VideoTexture_typeof,
        (uType*(*)())&::g::Uno::IndexOutOfRangeException_typeof,
        (uType*(*)())&::g::Uno::Int_typeof,
        (uType*(*)())&::g::Uno::Int2_typeof,
        (uType*(*)())&::g::Uno::Int3_typeof,
        (uType*(*)())&::g::Uno::Int4_typeof,
        (uType*(*)())&::g::Uno::IntPtr_typeof,
        (uType*(*)())&::g::Uno::InvalidCastException_typeof,
        (uType*(*)())&::g::Uno::InvalidOperationException_typeof,
        (uType*(*)())&::g::Uno::IO::BinaryReader_typeof,
        (uType*(*)())&::g::Uno::IO::BinaryWriter_typeof,
        (uType*(*)())&::g::Uno::IO::Bundle_typeof,
        (uType*(*)())&::g::Uno::IO::BundleFile_typeof,
        (uType*(*)())&::g::Uno::IO::CppXliStream_typeof,
        (uType*(*)())&::g::Uno::IO::CppXliStreamHandle_typeof,
        (uType*(*)())&::g::Uno::IO::Directory_typeof,
        (uType*(*)())&::g::Uno::IO::EndOfStreamException_typeof,
        (uType*(*)())&::g::Uno::IO::File_typeof,
        (uType*(*)())&::g::Uno::IO::FileSystemEnumerable_typeof,
        (uType*(*)())&::g::Uno::IO::FileSystemEnumerator_typeof,
        (uType*(*)())&::g::Uno::IO::FileSystemEnumeratorHandle_typeof,
        (uType*(*)())&::g::Uno::IO::FileSystemEnumeratorImpl_typeof,
        (uType*(*)())&::g::Uno::IO::FileSystemImpl_typeof,
        (uType*(*)())&::g::Uno::IO::IOException_typeof,
        (uType*(*)())&::g::Uno::IO::MemoryStream_typeof,
        (uType*(*)())&::g::Uno::IO::Path_typeof,
        (uType*(*)())&::g::Uno::IO::Stream_typeof,
        (uType*(*)())&::g::Uno::IO::StreamReader_typeof,
        (uType*(*)())&::g::Uno::IO::StreamWriter_typeof,
        (uType*(*)())&::g::Uno::IO::StringReader_typeof,
        (uType*(*)())&::g::Uno::IO::StringWriter_typeof,
        (uType*(*)())&::g::Uno::IO::TextReader_typeof,
        (uType*(*)())&::g::Uno::IO::TextWriter_typeof,
        (uType*(*)())&::g::Uno::Long_typeof,
        (uType*(*)())&::g::Uno::Math_typeof,
        (uType*(*)())&::g::Uno::Matrix_typeof,
        (uType*(*)())&::g::Uno::Net::Dns_typeof,
        (uType*(*)())&::g::Uno::Net::EndPoint_typeof,
        (uType*(*)())&::g::Uno::Net::Http::AbsolutePathParser_typeof,
        (uType*(*)())&::g::Uno::Net::Http::HashParser_typeof,
        (uType*(*)())&::g::Uno::Net::Http::HostInfo_typeof,
        (uType*(*)())&::g::Uno::Net::Http::HostInfoParser_typeof,
        (uType*(*)())&::g::Uno::Net::Http::HttpDefaultDispatcher_typeof,
        (uType*(*)())&::g::Uno::Net::Http::HttpMessageCache_typeof,
        (uType*(*)())&::g::Uno::Net::Http::HttpMessageHandler__StaticData_typeof,
        (uType*(*)())&::g::Uno::Net::Http::HttpMessageHandler_typeof,
        (uType*(*)())&::g::Uno::Net::Http::HttpMessageHandlerRequest__DispatchClosure_typeof,
        (uType*(*)())&::g::Uno::Net::Http::HttpMessageHandlerRequest__DispatchClosure1_typeof,
        (uType*(*)())&::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof,
        (uType*(*)())&::g::Uno::Net::Http::HttpStatusReasonPhrase_typeof,
        (uType*(*)())&::g::Uno::Net::Http::Implementation::iOSHttpRequest_typeof,
        (uType*(*)())&::g::Uno::Net::Http::Implementation::iOSHttpRequestHandle_typeof,
        (uType*(*)())&::g::Uno::Net::Http::Implementation::iOSHttpSharedCache_typeof,
        (uType*(*)())&::g::Uno::Net::Http::InvalidResponseTypeException_typeof,
        (uType*(*)())&::g::Uno::Net::Http::InvalidStateException_typeof,
        (uType*(*)())&::g::Uno::Net::Http::QueryParser_typeof,
        (uType*(*)())&::g::Uno::Net::Http::SchemeParser_typeof,
        (uType*(*)())&::g::Uno::Net::Http::SchemeParserResult_typeof,
        (uType*(*)())&::g::Uno::Net::Http::UriFormatException_typeof,
        (uType*(*)())&::g::Uno::Net::Http::UriScheme_typeof,
        (uType*(*)())&::g::Uno::Net::Http::UserInfoParser_typeof,
        (uType*(*)())&::g::Uno::Net::IPAddress_typeof,
        (uType*(*)())&::g::Uno::Net::IPEndPoint_typeof,
        (uType*(*)())&::g::Uno::Net::NetworkHelpers_typeof,
        (uType*(*)())&::g::Uno::Net::Sockets::NetworkStream_typeof,
        (uType*(*)())&::g::Uno::Net::Sockets::Socket__SocketHandle_typeof,
        (uType*(*)())&::g::Uno::Net::Sockets::Socket_typeof,
        (uType*(*)())&::g::Uno::Net::Sockets::SocketException_typeof,
        (uType*(*)())&::g::Uno::Net::Sockets::SocketHelpers_typeof,
        (uType*(*)())&::g::Uno::NotImplementedException_typeof,
        (uType*(*)())&::g::Uno::NotSupportedException_typeof,
        (uType*(*)())&::g::Uno::NullReferenceException_typeof,
        (uType*(*)())&::g::Uno::ObjectDisposedException_typeof,
        (uType*(*)())&::g::Uno::ObsoleteAttribute_typeof,
        (uType*(*)())&::g::Uno::OverflowException_typeof,
        (uType*(*)())&::g::Uno::Platform::ClosingEventArgs_typeof,
        (uType*(*)())&::g::Uno::Platform::FrameChangedEventArgs_typeof,
        (uType*(*)())&::g::Uno::Platform::iOS::Application_typeof,
        (uType*(*)())&::g::Uno::Platform::iOS::StatusBar_typeof,
        (uType*(*)())&::g::Uno::Platform::KeyEventArgs_typeof,
        (uType*(*)())&::g::Uno::Platform::PointerEventArgs_typeof,
        (uType*(*)())&::g::Uno::Platform::SystemUI_typeof,
        (uType*(*)())&::g::Uno::Platform::SystemUIWillResizeEventArgs_typeof,
        (uType*(*)())&::g::Uno::Platform::TextInputEventArgs_typeof,
        (uType*(*)())&::g::Uno::Platform::TimerEventArgs_typeof,
        (uType*(*)())&::g::Uno::Platform::ViewNativeHandle_typeof,
        (uType*(*)())&::g::Uno::Platform::Window_typeof,
        (uType*(*)())&::g::Uno::Platform2::Application_typeof,
        (uType*(*)())&::g::Uno::Platform2::Display__PrivateState_typeof,
        (uType*(*)())&::g::Uno::Platform2::Display_typeof,
        (uType*(*)())&::g::Uno::Platform2::Implementation::InvokedFromNativeCodeAttribute_typeof,
        (uType*(*)())&::g::Uno::Quaternion_typeof,
        (uType*(*)())&::g::Uno::Rect_typeof,
        (uType*(*)())&::g::Uno::Recti_typeof,
        (uType*(*)())&::g::Uno::Reflection::CppField_typeof,
        (uType*(*)())&::g::Uno::Reflection::CppFunction_typeof,
        (uType*(*)())&::g::Uno::Reflection::CppReflection_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::ArrayCopyImpl_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::ArraySortImpl_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::BufferImpl_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::ClockImpl_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::DebugImpl_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::GenericEqualsImpl_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::GraphicsContextHandle_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::GraphicsContextImpl_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::Internal::ArrayEnumerable_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::Internal::ArrayEnumerator_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::Internal::ArrayList_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::Internal::BootstrapHints_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::Internal::Bootstrapper_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::Internal::BufferConverters_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::Internal::BufferReader_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::Internal::FormatStringItem_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::Internal::FormatStringLiteral_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::Internal::FormatStringToken_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::Internal::FormatStringTokenizer_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::Internal::NumericFormatter_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::Internal::WindowHelpers_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::PlatformWindowHandle_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::PlatformWindowImpl_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLCompiledProgram_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLException_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLHelpers_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLInterop_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof,
        (uType*(*)())&::g::Uno::Runtime::Implementation::TextEncodingImpl_typeof,
        (uType*(*)())&::g::Uno::SByte_typeof,
        (uType*(*)())&::g::Uno::SByte2_typeof,
        (uType*(*)())&::g::Uno::SByte4_typeof,
        (uType*(*)())&::g::Uno::Short_typeof,
        (uType*(*)())&::g::Uno::Short2_typeof,
        (uType*(*)())&::g::Uno::Short4_typeof,
        (uType*(*)())&::g::Uno::String_typeof,
        (uType*(*)())&::g::Uno::Testing::NamedTestMethod_typeof,
        (uType*(*)())&::g::Uno::Testing::Registry_typeof,
        (uType*(*)())&::g::Uno::Testing::TestAttribute_typeof,
        (uType*(*)())&::g::Uno::Text::Ascii_typeof,
        (uType*(*)())&::g::Uno::Text::Base64_typeof,
        (uType*(*)())&::g::Uno::Text::Decoder_typeof,
        (uType*(*)())&::g::Uno::Text::Encoding_typeof,
        (uType*(*)())&::g::Uno::Text::StringBuilder_typeof,
        (uType*(*)())&::g::Uno::Text::StringBuilderElement_typeof,
        (uType*(*)())&::g::Uno::Text::Utf8_typeof,
        (uType*(*)())&::g::Uno::Text::UTF8Decoder_typeof,
        (uType*(*)())&::g::Uno::Text::UTF8Encoding_typeof,
        (uType*(*)())&::g::Uno::Threading::AutoResetEvent_typeof,
        (uType*(*)())&::g::Uno::Threading::CancellationToken_typeof,
        (uType*(*)())&::g::Uno::Threading::CancellationTokenSource_typeof,
        (uType*(*)())&::g::Uno::Threading::ConcurrentDictionary_typeof,
        (uType*(*)())&::g::Uno::Threading::ConcurrentQueue_typeof,
        (uType*(*)())&::g::Uno::Threading::Future_typeof,
        (uType*(*)())&::g::Uno::Threading::Future1__Closure_typeof,
        (uType*(*)())&::g::Uno::Threading::Future1_typeof,
        (uType*(*)())&::g::Uno::Threading::IDispatcherExtensions__Arg1Invoke_typeof,
        (uType*(*)())&::g::Uno::Threading::IDispatcherExtensions__Arg1InvokeFunc_typeof,
        (uType*(*)())&::g::Uno::Threading::IDispatcherExtensions__Arg2Invoke_typeof,
        (uType*(*)())&::g::Uno::Threading::IDispatcherExtensions_typeof,
        (uType*(*)())&::g::Uno::Threading::LockGuard_typeof,
        (uType*(*)())&::g::Uno::Threading::MainThreadAttribute_typeof,
        (uType*(*)())&::g::Uno::Threading::ManualResetEvent_typeof,
        (uType*(*)())&::g::Uno::Threading::Monitor_typeof,
        (uType*(*)())&::g::Uno::Threading::Mutex_typeof,
        (uType*(*)())&::g::Uno::Threading::PosixAutoResetEvent_typeof,
        (uType*(*)())&::g::Uno::Threading::PosixManualResetEvent_typeof,
        (uType*(*)())&::g::Uno::Threading::POSIXMutex_typeof,
        (uType*(*)())&::g::Uno::Threading::POSIXThread__ReleasingLauncher_typeof,
        (uType*(*)())&::g::Uno::Threading::POSIXThread_typeof,
        (uType*(*)())&::g::Uno::Threading::Promise_typeof,
        (uType*(*)())&::g::Uno::Threading::SyncDispatcher_typeof,
        (uType*(*)())&::g::Uno::Threading::Task_typeof,
        (uType*(*)())&::g::Uno::Threading::TaskFuture_typeof,
        (uType*(*)())&::g::Uno::Threading::Thread_typeof,
        (uType*(*)())&::g::Uno::Threading::ThreadPool__DefaultWorkItem_typeof,
        (uType*(*)())&::g::Uno::Threading::ThreadPool__ParameterizedWorkItem_typeof,
        (uType*(*)())&::g::Uno::Threading::ThreadPool__WorkItem_typeof,
        (uType*(*)())&::g::Uno::Threading::ThreadPool_typeof,
        (uType*(*)())&::g::Uno::Threading::ThreadPoolTaskScheduler_typeof,
        (uType*(*)())&::g::Uno::Time::Calendars::Era_typeof,
        (uType*(*)())&::g::Uno::Time::Calendars::GregorianYearMonthDayCalculator_typeof,
        (uType*(*)())&::g::Uno::Time::Calendars::TimeOfDayCalculator_typeof,
        (uType*(*)())&::g::Uno::Time::Calendars::WeekYearCalculator_typeof,
        (uType*(*)())&::g::Uno::Time::Calendars::YearMonthDayCalculator_typeof,
        (uType*(*)())&::g::Uno::Time::CalendarSystem_typeof,
        (uType*(*)())&::g::Uno::Time::Constants_typeof,
        (uType*(*)())&::g::Uno::Time::Converter_typeof,
        (uType*(*)())&::g::Uno::Time::DateTimeZone_typeof,
        (uType*(*)())&::g::Uno::Time::DeviceTimeZone_typeof,
        (uType*(*)())&::g::Uno::Time::Duration_typeof,
        (uType*(*)())&::g::Uno::Time::FixedDateTimeZone_typeof,
        (uType*(*)())&::g::Uno::Time::HashCodeHelper_typeof,
        (uType*(*)())&::g::Uno::Time::Instant_typeof,
        (uType*(*)())&::g::Uno::Time::LocalDate_typeof,
        (uType*(*)())&::g::Uno::Time::LocalDateTime_typeof,
        (uType*(*)())&::g::Uno::Time::LocalTime_typeof,
        (uType*(*)())&::g::Uno::Time::Offset_typeof,
        (uType*(*)())&::g::Uno::Time::OffsetDateTime_typeof,
        (uType*(*)())&::g::Uno::Time::Preconditions_typeof,
        (uType*(*)())&::g::Uno::Time::Text::FixedFormatPattern_typeof,
        (uType*(*)())&::g::Uno::Time::Text::LocalDatePattern__LocalDateBucket_typeof,
        (uType*(*)())&::g::Uno::Time::Text::LocalDatePattern_typeof,
        (uType*(*)())&::g::Uno::Time::Text::LocalDateTimePattern__LocalDateTimeBucket_typeof,
        (uType*(*)())&::g::Uno::Time::Text::LocalDateTimePattern_typeof,
        (uType*(*)())&::g::Uno::Time::Text::LocalTimePattern__LocalTimeBucket_typeof,
        (uType*(*)())&::g::Uno::Time::Text::LocalTimePattern_typeof,
        (uType*(*)())&::g::Uno::Time::Text::NumberPart_typeof,
        (uType*(*)())&::g::Uno::Time::Text::OffsetDateTimePattern__OffsetDateTimeBucket_typeof,
        (uType*(*)())&::g::Uno::Time::Text::OffsetDateTimePattern_typeof,
        (uType*(*)())&::g::Uno::Time::Text::OffsetPattern__OffsetBucket_typeof,
        (uType*(*)())&::g::Uno::Time::Text::OffsetPattern_typeof,
        (uType*(*)())&::g::Uno::Time::Text::OffsetPatternPart_typeof,
        (uType*(*)())&::g::Uno::Time::Text::ParseResult_typeof,
        (uType*(*)())&::g::Uno::Time::Text::PatternPart_typeof,
        (uType*(*)())&::g::Uno::Time::Text::RangeNumberPart_typeof,
        (uType*(*)())&::g::Uno::Time::Text::SeparatorPart_typeof,
        (uType*(*)())&::g::Uno::Time::Text::SignPart_typeof,
        (uType*(*)())&::g::Uno::Time::ZonedDateTime_typeof,
        (uType*(*)())&::g::Uno::Tuple_typeof,
        (uType*(*)())&::g::Uno::Tuple2_typeof,
        (uType*(*)())&::g::Uno::Type_typeof,
        (uType*(*)())&::g::Uno::UInt_typeof,
        (uType*(*)())&::g::Uno::ULong_typeof,
        (uType*(*)())&::g::Uno::UShort_typeof,
        (uType*(*)())&::g::Uno::UShort2_typeof,
        (uType*(*)())&::g::Uno::UShort4_typeof,
        (uType*(*)())&::g::Uno::UX::AddOperator_typeof,
        (uType*(*)())&::g::Uno::UX::BinaryOperator_typeof,
        (uType*(*)())&::g::Uno::UX::BoolValue_typeof,
        (uType*(*)())&::g::Uno::UX::BundleFileSource_typeof,
        (uType*(*)())&::g::Uno::UX::ConditionalOperator_typeof,
        (uType*(*)())&::g::Uno::UX::DivideOperator_typeof,
        (uType*(*)())&::g::Uno::UX::EqualOperator_typeof,
        (uType*(*)())&::g::Uno::UX::FileSource_typeof,
        (uType*(*)())&::g::Uno::UX::GreaterOrEqualOperator_typeof,
        (uType*(*)())&::g::Uno::UX::GreaterThanOperator_typeof,
        (uType*(*)())&::g::Uno::UX::LessOrEqualOperator_typeof,
        (uType*(*)())&::g::Uno::UX::LessThanOperator_typeof,
        (uType*(*)())&::g::Uno::UX::LogicalAndOperator_typeof,
        (uType*(*)())&::g::Uno::UX::LogicalOrOperator_typeof,
        (uType*(*)())&::g::Uno::UX::MaxFunction_typeof,
        (uType*(*)())&::g::Uno::UX::MinFunction_typeof,
        (uType*(*)())&::g::Uno::UX::MultiplyOperator_typeof,
        (uType*(*)())&::g::Uno::UX::NameTable_typeof,
        (uType*(*)())&::g::Uno::UX::NegateOperator_typeof,
        (uType*(*)())&::g::Uno::UX::NotEqualOperator_typeof,
        (uType*(*)())&::g::Uno::UX::NullCoalesceOperator_typeof,
        (uType*(*)())&::g::Uno::UX::NumberValue_typeof,
        (uType*(*)())&::g::Uno::UX::Operator_typeof,
        (uType*(*)())&::g::Uno::UX::Property_typeof,
        (uType*(*)())&::g::Uno::UX::Property1_typeof,
        (uType*(*)())&::g::Uno::UX::PropertyObject_typeof,
        (uType*(*)())&::g::Uno::UX::Resource_typeof,
        (uType*(*)())&::g::Uno::UX::Selector_typeof,
        (uType*(*)())&::g::Uno::UX::SelectorRegistry_typeof,
        (uType*(*)())&::g::Uno::UX::Size_typeof,
        (uType*(*)())&::g::Uno::UX::Size2_typeof,
        (uType*(*)())&::g::Uno::UX::Size2Value_typeof,
        (uType*(*)())&::g::Uno::UX::Size3Value_typeof,
        (uType*(*)())&::g::Uno::UX::Size4Value_typeof,
        (uType*(*)())&::g::Uno::UX::SizeValue_typeof,
        (uType*(*)())&::g::Uno::UX::StreamExtensions_typeof,
        (uType*(*)())&::g::Uno::UX::StringConcatOperator_typeof,
        (uType*(*)())&::g::Uno::UX::StringFunction_typeof,
        (uType*(*)())&::g::Uno::UX::StringValue_typeof,
        (uType*(*)())&::g::Uno::UX::SubtractOperator_typeof,
        (uType*(*)())&::g::Uno::UX::Template_typeof,
        (uType*(*)())&::g::Uno::UX::ToLowerFunction_typeof,
        (uType*(*)())&::g::Uno::UX::ToUpperFunction_typeof,
        (uType*(*)())&::g::Uno::UX::UnaryOperator_typeof,
        (uType*(*)())&::g::Uno::UX::UXAutoNameTableAttribute_typeof,
        (uType*(*)())&::g::Uno::UX::UXComponentsAttribute_typeof,
        (uType*(*)())&::g::Uno::UX::UXConstructorAttribute_typeof,
        (uType*(*)())&::g::Uno::UX::UXContentAttribute_typeof,
        (uType*(*)())&::g::Uno::UX::UXFileNameAttribute_typeof,
        (uType*(*)())&::g::Uno::UX::UXFreestandingAttribute_typeof,
        (uType*(*)())&::g::Uno::UX::UXGlobalModuleAttribute_typeof,
        (uType*(*)())&::g::Uno::UX::UXGlobalResourceAttribute_typeof,
        (uType*(*)())&::g::Uno::UX::UXLineNumberAttribute_typeof,
        (uType*(*)())&::g::Uno::UX::UXNameAttribute_typeof,
        (uType*(*)())&::g::Uno::UX::UXPrimaryAttribute_typeof,
        (uType*(*)())&::g::Uno::UX::UXSourceFileNameAttribute_typeof,
        (uType*(*)())&::g::Uno::UX::UXValueBindingArgumentAttribute_typeof,
        (uType*(*)())&::g::Uno::UX::UXValueBindingTargetAttribute_typeof,
        (uType*(*)())&::g::Uno::UX::Value_typeof,
        (uType*(*)())&::g::Uno::UX::ValueChangedArgs_typeof,
        (uType*(*)())&::g::Uno::UX::Vector2Value_typeof,
        (uType*(*)())&::g::Uno::UX::Vector3Value_typeof,
        (uType*(*)())&::g::Uno::UX::Vector4Value_typeof,
        (uType*(*)())&::g::Uno::UX::VectorOperator_typeof,
        (uType*(*)())&::g::Uno::UX::VectorValue_typeof,
        (uType*(*)())&::g::Uno::Vector_typeof,
        (uType*(*)())&::g::Uno::WeakReference_typeof,
        (uType*(*)())&::g::Uno::WeakReferenceAttribute_typeof,
        (uType*(*)())&::g::UnoCore_bundle_typeof,
        (uType*(*)())&::g::WeakDictionary_typeof,
        NULL
    };

    uInitRtti(factories);
}

#include <Outracks.Simulator.GeneratedApplication.h>

void uStartApp()
{
    if (_BaseArgs)
    {
        _CommandLineArgs = uArray::New(::g::Uno::String_typeof()->Array(), _BaseArgs->Length());

        for (int i = 0; i < _BaseArgs->Length(); i++)
            _CommandLineArgs->Strong<uString*>(i) = uStringFromXliString((*_BaseArgs)[i]);
    }

    ::g::Outracks::Simulator::GeneratedApplication::New3();
}

/** @} */
