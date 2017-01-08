// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.FuseTextRenderer.AsyncMeasurer.h>
#include <Fuse.Controls.FuseTextRenderer.CacheState.h>
#include <Fuse.Controls.FuseTextRenderer.EverythingCached.h>
#include <Fuse.Controls.FuseTextRenderer.Helpers.h>
#include <Fuse.Controls.FuseTextRenderer.LogicalRunsCached.h>
#include <Fuse.Controls.FuseTextRenderer.MeasurementsCached.h>
#include <Fuse.Controls.FuseTextRenderer.NothingCached.h>
#include <Fuse.Controls.FuseTextRenderer.RendererCached.h>
#include <Fuse.Controls.FuseTextRenderer.TextControlData.h>
#include <Fuse.Controls.FuseTextRenderer.TextRenderer.h>
#include <Fuse.Controls.FuseTextRenderer.Tolerances.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextTruncation.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.DrawContext.h>
#include <Fuse.Font.h>
#include <Fuse.GraphicsWorker.h>
#include <Fuse.ICommonViewport.h>
#include <Fuse.Internal.Cache-2.h>
#include <Fuse.Internal.FontFaceDescriptor.h>
#include <Fuse.InvalidateLayoutReason.h>
#include <Fuse.IViewport.h>
#include <Fuse.LayoutParams.h>
#include <Fuse.Node.h>
#include <Fuse.Text.Bidirectional.Run.h>
#include <Fuse.Text.Bidirectional.Runs.h>
#include <Fuse.Text.FallingBackFontFace.h>
#include <Fuse.Text.Font.h>
#include <Fuse.Text.FontFace.h>
#include <Fuse.Text.LazyFontFace.h>
#include <Fuse.Text.Measure.h>
#include <Fuse.Text.PositionedRun.h>
#include <Fuse.Text.Renderer.h>
#include <Fuse.Text.Shape.h>
#include <Fuse.Text.ShapedRun.h>
#include <Fuse.Text.Substring.h>
#include <Fuse.Text.Truncate.h>
#include <Fuse.Text.Wrap.h>
#include <Fuse.Triggers.BusyTask.h>
#include <Fuse.Triggers.BusyTaskActivity.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.Visual.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Func-2.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.Matrix.h>
#include <Uno.Rect.h>
#include <Uno.String.h>
#include <Uno.Threading.IDispatcher.h>
#include <Uno.Threading.IDispatcherExtensions.h>
static uString* STRINGS[4];
static uType* TYPES[13];

namespace g{
namespace Fuse{
namespace Controls{
namespace FuseTextRenderer{

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/textcontrols/fusetextrenderer/$.uno
// ---------------------------------------------------------------------------------------------------------------------------------

// internal sealed class AsyncMeasurer :690
// {
static void AsyncMeasurer_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Threading::IDispatcherExtensions_typeof()->MakeMethod(0/*Invoke1<Fuse.Controls.FuseTextRenderer.CacheState>*/, ::g::Fuse::Controls::FuseTextRenderer::CacheState_typeof(), NULL);
    type->SetFields(0,
        ::g::Fuse::Controls::FuseTextRenderer::TextControlData_typeof(), offsetof(::g::Fuse::Controls::FuseTextRenderer::AsyncMeasurer, _data), 0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Controls::FuseTextRenderer::CacheState_typeof(), NULL), offsetof(::g::Fuse::Controls::FuseTextRenderer::AsyncMeasurer, _done), 0,
        ::g::Fuse::Controls::FuseTextRenderer::CacheState_typeof(), offsetof(::g::Fuse::Controls::FuseTextRenderer::AsyncMeasurer, _state), 0);
}

uType* AsyncMeasurer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(AsyncMeasurer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.FuseTextRenderer.AsyncMeasurer", options);
    type->fp_build_ = AsyncMeasurer_build;
    return type;
}

// public AsyncMeasurer(Fuse.Controls.FuseTextRenderer.CacheState state, Fuse.Controls.FuseTextRenderer.TextControlData data, Uno.Action<Fuse.Controls.FuseTextRenderer.CacheState> done) :696
void AsyncMeasurer__ctor__fn(AsyncMeasurer* __this, ::g::Fuse::Controls::FuseTextRenderer::CacheState* state, ::g::Fuse::Controls::FuseTextRenderer::TextControlData* data, uDelegate* done)
{
    __this->ctor_(state, *data, done);
}

// public AsyncMeasurer New(Fuse.Controls.FuseTextRenderer.CacheState state, Fuse.Controls.FuseTextRenderer.TextControlData data, Uno.Action<Fuse.Controls.FuseTextRenderer.CacheState> done) :696
void AsyncMeasurer__New1_fn(::g::Fuse::Controls::FuseTextRenderer::CacheState* state, ::g::Fuse::Controls::FuseTextRenderer::TextControlData* data, uDelegate* done, AsyncMeasurer** __retval)
{
    *__retval = AsyncMeasurer::New1(state, *data, done);
}

// public void Run() :703
void AsyncMeasurer__Run_fn(AsyncMeasurer* __this)
{
    __this->Run();
}

// public AsyncMeasurer(Fuse.Controls.FuseTextRenderer.CacheState state, Fuse.Controls.FuseTextRenderer.TextControlData data, Uno.Action<Fuse.Controls.FuseTextRenderer.CacheState> done) [instance] :696
void AsyncMeasurer::ctor_(::g::Fuse::Controls::FuseTextRenderer::CacheState* state, ::g::Fuse::Controls::FuseTextRenderer::TextControlData data, uDelegate* done)
{
    _state = state;
    _data = data;
    _done = done;
}

// public void Run() [instance] :703
void AsyncMeasurer::Run()
{
    uStackFrame __("Fuse.Controls.FuseTextRenderer.AsyncMeasurer", "Run()");
    ::g::Uno::Float2 measurements;
    _state = uPtr(_state)->GetMeasurements(_data, &measurements);
    ::g::Uno::Threading::IDispatcherExtensions__Invoke1_fn(::TYPES[0/*Uno.Threading.IDispatcherExtensions.Invoke1<Fuse.Controls.FuseTextRenderer.CacheState>*/], ::g::Fuse::UpdateManager::Dispatcher(), _done, _state);
}

// public AsyncMeasurer New(Fuse.Controls.FuseTextRenderer.CacheState state, Fuse.Controls.FuseTextRenderer.TextControlData data, Uno.Action<Fuse.Controls.FuseTextRenderer.CacheState> done) [static] :696
AsyncMeasurer* AsyncMeasurer::New1(::g::Fuse::Controls::FuseTextRenderer::CacheState* state, ::g::Fuse::Controls::FuseTextRenderer::TextControlData data, uDelegate* done)
{
    AsyncMeasurer* obj1 = (AsyncMeasurer*)uNew(AsyncMeasurer_typeof());
    obj1->ctor_(state, data, done);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/textcontrols/fusetextrenderer/$.uno
// ---------------------------------------------------------------------------------------------------------------------------------

// internal abstract class CacheState :129
// {
static void CacheState_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(CacheState_type, interface0));
}

CacheState_type* CacheState_typeof()
{
    static uSStrong<CacheState_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(CacheState);
    options.TypeSize = sizeof(CacheState_type);
    type = (CacheState_type*)uClassType::New("Fuse.Controls.FuseTextRenderer.CacheState", options);
    type->fp_build_ = CacheState_build;
    type->fp_Dispose = CacheState__Dispose_fn;
    type->fp_TryGetMeasurements = CacheState__TryGetMeasurements_fn;
    type->fp_TryGetRenderer1 = CacheState__TryGetRenderer1_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))CacheState__Dispose_fn;
    return type;
}

// protected generated CacheState() :129
void CacheState__ctor__fn(CacheState* __this)
{
    __this->ctor_();
}

// public virtual void Dispose() :166
void CacheState__Dispose_fn(CacheState* __this)
{
}

// public Fuse.Controls.FuseTextRenderer.CacheState GetBounds(Fuse.Controls.FuseTextRenderer.TextControlData data, Uno.Rect& bounds) :137
void CacheState__GetBounds_fn(CacheState* __this, ::g::Fuse::Controls::FuseTextRenderer::TextControlData* data, ::g::Uno::Rect* bounds, CacheState** __retval)
{
    *__retval = __this->GetBounds(*data, bounds);
}

// public Fuse.Controls.FuseTextRenderer.CacheState GetRenderer(Fuse.Controls.FuseTextRenderer.TextControlData data, Fuse.Text.Renderer& renderer) :149
void CacheState__GetRenderer_fn(CacheState* __this, ::g::Fuse::Controls::FuseTextRenderer::TextControlData* data, ::g::Fuse::Text::Renderer** renderer, CacheState** __retval)
{
    *__retval = __this->GetRenderer(*data, renderer);
}

// public virtual bool TryGetMeasurements(Fuse.Controls.FuseTextRenderer.TextControlData data, float2& measurements) :132
void CacheState__TryGetMeasurements_fn(CacheState* __this, ::g::Fuse::Controls::FuseTextRenderer::TextControlData* data, ::g::Uno::Float2* measurements, bool* __retval)
{
    *measurements = uDefault< ::g::Uno::Float2>();
    return *__retval = false, void();
}

// public bool TryGetRenderer(Fuse.Controls.FuseTextRenderer.TextControlData data, Fuse.Text.Renderer& renderer) :160
void CacheState__TryGetRenderer_fn(CacheState* __this, ::g::Fuse::Controls::FuseTextRenderer::TextControlData* data, ::g::Fuse::Text::Renderer** renderer, bool* __retval)
{
    *__retval = __this->TryGetRenderer(*data, renderer);
}

// public virtual bool TryGetRenderer(Fuse.Controls.FuseTextRenderer.TextControlData data, Fuse.Text.Renderer& renderer, Uno.Collections.List<Fuse.Text.PositionedRun>& positionedRuns) :154
void CacheState__TryGetRenderer1_fn(CacheState* __this, ::g::Fuse::Controls::FuseTextRenderer::TextControlData* data, ::g::Fuse::Text::Renderer** renderer, ::g::Uno::Collections::List** positionedRuns, bool* __retval)
{
    *renderer = NULL;
    *positionedRuns = NULL;
    return *__retval = false, void();
}

// protected generated CacheState() [instance] :129
void CacheState::ctor_()
{
}

// public Fuse.Controls.FuseTextRenderer.CacheState GetBounds(Fuse.Controls.FuseTextRenderer.TextControlData data, Uno.Rect& bounds) [instance] :137
CacheState* CacheState::GetBounds(::g::Fuse::Controls::FuseTextRenderer::TextControlData data, ::g::Uno::Rect* bounds)
{
    uStackFrame __("Fuse.Controls.FuseTextRenderer.CacheState", "GetBounds(Fuse.Controls.FuseTextRenderer.TextControlData,Uno.Rect&)");
    ::g::Uno::Float2 size;
    CacheState* result = GetMeasurements(data, &size);
    *bounds = ::g::Fuse::Text::Measure::AlignedRectForSize(size, data.PixelWidth, ::g::Fuse::Controls::FuseTextRenderer::Helpers::ToAlignmentNumber(data.TextAlignment));
    return result;
}

// public Fuse.Controls.FuseTextRenderer.CacheState GetRenderer(Fuse.Controls.FuseTextRenderer.TextControlData data, Fuse.Text.Renderer& renderer) [instance] :149
CacheState* CacheState::GetRenderer(::g::Fuse::Controls::FuseTextRenderer::TextControlData data, ::g::Fuse::Text::Renderer** renderer)
{
    uStackFrame __("Fuse.Controls.FuseTextRenderer.CacheState", "GetRenderer(Fuse.Controls.FuseTextRenderer.TextControlData,Fuse.Text.Renderer&)");
    ::g::Uno::Collections::List* positionedRuns;
    return GetRenderer1(data, renderer, &positionedRuns);
}

// public bool TryGetRenderer(Fuse.Controls.FuseTextRenderer.TextControlData data, Fuse.Text.Renderer& renderer) [instance] :160
bool CacheState::TryGetRenderer(::g::Fuse::Controls::FuseTextRenderer::TextControlData data, ::g::Fuse::Text::Renderer** renderer)
{
    uStackFrame __("Fuse.Controls.FuseTextRenderer.CacheState", "TryGetRenderer(Fuse.Controls.FuseTextRenderer.TextControlData,Fuse.Text.Renderer&)");
    ::g::Uno::Collections::List* positionedRuns;
    return TryGetRenderer1(data, renderer, &positionedRuns);
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/textcontrols/fusetextrenderer/$.uno
// ---------------------------------------------------------------------------------------------------------------------------------

// internal sealed class EverythingCached :359
// {
static void EverythingCached_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Controls::FuseTextRenderer::CacheState_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Controls::FuseTextRenderer::TextControlData_typeof(), offsetof(::g::Fuse::Controls::FuseTextRenderer::EverythingCached, _data), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Controls::FuseTextRenderer::EverythingCached, _measurements), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Text::PositionedRun_typeof(), NULL), offsetof(::g::Fuse::Controls::FuseTextRenderer::EverythingCached, _positionedRuns), 0,
        ::g::Fuse::Controls::FuseTextRenderer::LogicalRunsCached_typeof(), offsetof(::g::Fuse::Controls::FuseTextRenderer::EverythingCached, _previousState), 0,
        ::g::Fuse::Text::Renderer_typeof(), offsetof(::g::Fuse::Controls::FuseTextRenderer::EverythingCached, _renderer), 0,
        ::g::Fuse::Controls::FuseTextRenderer::Tolerances_typeof(), offsetof(::g::Fuse::Controls::FuseTextRenderer::EverythingCached, _tolerances), 0);
}

::g::Fuse::Controls::FuseTextRenderer::CacheState_type* EverythingCached_typeof()
{
    static uSStrong< ::g::Fuse::Controls::FuseTextRenderer::CacheState_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::FuseTextRenderer::CacheState_typeof();
    options.FieldCount = 6;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(EverythingCached);
    options.TypeSize = sizeof(::g::Fuse::Controls::FuseTextRenderer::CacheState_type);
    type = (::g::Fuse::Controls::FuseTextRenderer::CacheState_type*)uClassType::New("Fuse.Controls.FuseTextRenderer.EverythingCached", options);
    type->fp_build_ = EverythingCached_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::FuseTextRenderer::CacheState*))EverythingCached__Dispose_fn;
    type->fp_GetMeasurements = (void(*)(::g::Fuse::Controls::FuseTextRenderer::CacheState*, ::g::Fuse::Controls::FuseTextRenderer::TextControlData*, ::g::Uno::Float2*, ::g::Fuse::Controls::FuseTextRenderer::CacheState**))EverythingCached__GetMeasurements_fn;
    type->fp_GetRenderer1 = (void(*)(::g::Fuse::Controls::FuseTextRenderer::CacheState*, ::g::Fuse::Controls::FuseTextRenderer::TextControlData*, ::g::Fuse::Text::Renderer**, ::g::Uno::Collections::List**, ::g::Fuse::Controls::FuseTextRenderer::CacheState**))EverythingCached__GetRenderer1_fn;
    type->fp_TryGetMeasurements = (void(*)(::g::Fuse::Controls::FuseTextRenderer::CacheState*, ::g::Fuse::Controls::FuseTextRenderer::TextControlData*, ::g::Uno::Float2*, bool*))EverythingCached__TryGetMeasurements_fn;
    type->fp_TryGetRenderer1 = (void(*)(::g::Fuse::Controls::FuseTextRenderer::CacheState*, ::g::Fuse::Controls::FuseTextRenderer::TextControlData*, ::g::Fuse::Text::Renderer**, ::g::Uno::Collections::List**, bool*))EverythingCached__TryGetRenderer1_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))EverythingCached__Dispose_fn;
    return type;
}

// public EverythingCached(Fuse.Controls.FuseTextRenderer.LogicalRunsCached previousState, Fuse.Controls.FuseTextRenderer.TextControlData data, Uno.Collections.List<Uno.Collections.List<Fuse.Text.ShapedRun>> wrappedRuns, Fuse.Controls.FuseTextRenderer.Tolerances tolerances, float2 measurements, Fuse.Text.Renderer renderer, Uno.Collections.List<Fuse.Text.PositionedRun> positionedRuns) :368
void EverythingCached__ctor_1_fn(EverythingCached* __this, ::g::Fuse::Controls::FuseTextRenderer::LogicalRunsCached* previousState, ::g::Fuse::Controls::FuseTextRenderer::TextControlData* data, ::g::Uno::Collections::List* wrappedRuns, ::g::Fuse::Controls::FuseTextRenderer::Tolerances* tolerances, ::g::Uno::Float2* measurements, ::g::Fuse::Text::Renderer* renderer, ::g::Uno::Collections::List* positionedRuns)
{
    __this->ctor_1(previousState, *data, wrappedRuns, *tolerances, *measurements, renderer, positionedRuns);
}

// public override sealed void Dispose() :436
void EverythingCached__Dispose_fn(EverythingCached* __this)
{
    uStackFrame __("Fuse.Controls.FuseTextRenderer.EverythingCached", "Dispose()");
    uPtr(__this->_renderer)->Dispose();
}

// public override sealed Fuse.Controls.FuseTextRenderer.CacheState GetMeasurements(Fuse.Controls.FuseTextRenderer.TextControlData data, float2& measurements) :385
void EverythingCached__GetMeasurements_fn(EverythingCached* __this, ::g::Fuse::Controls::FuseTextRenderer::TextControlData* data, ::g::Uno::Float2* measurements, ::g::Fuse::Controls::FuseTextRenderer::CacheState** __retval)
{
    uStackFrame __("Fuse.Controls.FuseTextRenderer.EverythingCached", "GetMeasurements(Fuse.Controls.FuseTextRenderer.TextControlData,float2&)");
    ::g::Fuse::Controls::FuseTextRenderer::TextControlData data_ = *data;

    if (__this->TryGetMeasurements(data_, measurements))
        return *__retval = __this, void();
    else
        return *__retval = uPtr(__this->_previousState)->GetMeasurements(data_, measurements), void();
}

// public override sealed Fuse.Controls.FuseTextRenderer.CacheState GetRenderer(Fuse.Controls.FuseTextRenderer.TextControlData data, Fuse.Text.Renderer& renderer, Uno.Collections.List<Fuse.Text.PositionedRun>& positionedRuns) :409
void EverythingCached__GetRenderer1_fn(EverythingCached* __this, ::g::Fuse::Controls::FuseTextRenderer::TextControlData* data, ::g::Fuse::Text::Renderer** renderer, ::g::Uno::Collections::List** positionedRuns, ::g::Fuse::Controls::FuseTextRenderer::CacheState** __retval)
{
    uStackFrame __("Fuse.Controls.FuseTextRenderer.EverythingCached", "GetRenderer(Fuse.Controls.FuseTextRenderer.TextControlData,Fuse.Text.Renderer&,Uno.Collections.List<Fuse.Text.PositionedRun>&)");
    ::g::Fuse::Controls::FuseTextRenderer::TextControlData data_ = *data;

    if (__this->TryGetRenderer1(data_, renderer, positionedRuns))
        return *__retval = __this, void();
    else
        return *__retval = uPtr(__this->_previousState)->GetRenderer1(data_, renderer, positionedRuns), void();
}

// public EverythingCached New(Fuse.Controls.FuseTextRenderer.LogicalRunsCached previousState, Fuse.Controls.FuseTextRenderer.TextControlData data, Uno.Collections.List<Uno.Collections.List<Fuse.Text.ShapedRun>> wrappedRuns, Fuse.Controls.FuseTextRenderer.Tolerances tolerances, float2 measurements, Fuse.Text.Renderer renderer, Uno.Collections.List<Fuse.Text.PositionedRun> positionedRuns) :368
void EverythingCached__New1_fn(::g::Fuse::Controls::FuseTextRenderer::LogicalRunsCached* previousState, ::g::Fuse::Controls::FuseTextRenderer::TextControlData* data, ::g::Uno::Collections::List* wrappedRuns, ::g::Fuse::Controls::FuseTextRenderer::Tolerances* tolerances, ::g::Uno::Float2* measurements, ::g::Fuse::Text::Renderer* renderer, ::g::Uno::Collections::List* positionedRuns, EverythingCached** __retval)
{
    *__retval = EverythingCached::New1(previousState, *data, wrappedRuns, *tolerances, *measurements, renderer, positionedRuns);
}

// public override sealed bool TryGetMeasurements(Fuse.Controls.FuseTextRenderer.TextControlData data, float2& measurements) :397
void EverythingCached__TryGetMeasurements_fn(EverythingCached* __this, ::g::Fuse::Controls::FuseTextRenderer::TextControlData* data, ::g::Uno::Float2* measurements, bool* __retval)
{
    ::g::Fuse::Controls::FuseTextRenderer::TextControlData data_ = *data;

    if (!data_.Subsumes(__this->_data, __this->_tolerances))
    {
        *measurements = uDefault< ::g::Uno::Float2>();
        return *__retval = false, void();
    }

    *measurements = __this->_measurements;
    return *__retval = true, void();
}

// public override sealed bool TryGetRenderer(Fuse.Controls.FuseTextRenderer.TextControlData data, Fuse.Text.Renderer& renderer, Uno.Collections.List<Fuse.Text.PositionedRun>& positionedRuns) :421
void EverythingCached__TryGetRenderer1_fn(EverythingCached* __this, ::g::Fuse::Controls::FuseTextRenderer::TextControlData* data, ::g::Fuse::Text::Renderer** renderer, ::g::Uno::Collections::List** positionedRuns, bool* __retval)
{
    ::g::Fuse::Controls::FuseTextRenderer::TextControlData data_ = *data;

    if (!data_.Subsumes(__this->_data, __this->_tolerances))
    {
        *renderer = NULL;
        *positionedRuns = NULL;
        return *__retval = false, void();
    }

    *renderer = __this->_renderer;
    *positionedRuns = __this->_positionedRuns;
    return *__retval = true, void();
}

// public EverythingCached(Fuse.Controls.FuseTextRenderer.LogicalRunsCached previousState, Fuse.Controls.FuseTextRenderer.TextControlData data, Uno.Collections.List<Uno.Collections.List<Fuse.Text.ShapedRun>> wrappedRuns, Fuse.Controls.FuseTextRenderer.Tolerances tolerances, float2 measurements, Fuse.Text.Renderer renderer, Uno.Collections.List<Fuse.Text.PositionedRun> positionedRuns) [instance] :368
void EverythingCached::ctor_1(::g::Fuse::Controls::FuseTextRenderer::LogicalRunsCached* previousState, ::g::Fuse::Controls::FuseTextRenderer::TextControlData data, ::g::Uno::Collections::List* wrappedRuns, ::g::Fuse::Controls::FuseTextRenderer::Tolerances tolerances, ::g::Uno::Float2 measurements, ::g::Fuse::Text::Renderer* renderer, ::g::Uno::Collections::List* positionedRuns)
{
    ctor_();
    _previousState = previousState;
    _data = data;
    _tolerances = tolerances;
    _measurements = measurements;
    _renderer = renderer;
    _positionedRuns = positionedRuns;
}

// public EverythingCached New(Fuse.Controls.FuseTextRenderer.LogicalRunsCached previousState, Fuse.Controls.FuseTextRenderer.TextControlData data, Uno.Collections.List<Uno.Collections.List<Fuse.Text.ShapedRun>> wrappedRuns, Fuse.Controls.FuseTextRenderer.Tolerances tolerances, float2 measurements, Fuse.Text.Renderer renderer, Uno.Collections.List<Fuse.Text.PositionedRun> positionedRuns) [static] :368
EverythingCached* EverythingCached::New1(::g::Fuse::Controls::FuseTextRenderer::LogicalRunsCached* previousState, ::g::Fuse::Controls::FuseTextRenderer::TextControlData data, ::g::Uno::Collections::List* wrappedRuns, ::g::Fuse::Controls::FuseTextRenderer::Tolerances tolerances, ::g::Uno::Float2 measurements, ::g::Fuse::Text::Renderer* renderer, ::g::Uno::Collections::List* positionedRuns)
{
    EverythingCached* obj1 = (EverythingCached*)uNew(EverythingCached_typeof());
    obj1->ctor_1(previousState, data, wrappedRuns, tolerances, measurements, renderer, positionedRuns);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/textcontrols/fusetextrenderer/$.uno
// ---------------------------------------------------------------------------------------------------------------------------------

// internal static class Helpers :64
// {
static void Helpers_build(uType* type)
{
    ::STRINGS[0] = uString::Const("TextAlignment not supported");
    ::STRINGS[1] = uString::Const("TextTruncation not supported");
}

uClassType* Helpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.FuseTextRenderer.Helpers", options);
    type->fp_build_ = Helpers_build;
    return type;
}

// public static Fuse.Text.Renderer GetRenderer(Fuse.Controls.FuseTextRenderer.TextControlData data, Uno.Collections.List<Uno.Collections.List<Fuse.Text.ShapedRun>> wrappedRuns, Uno.Collections.List<Fuse.Text.PositionedRun>& positionedRuns) :102
void Helpers__GetRenderer_fn(::g::Fuse::Controls::FuseTextRenderer::TextControlData* data, ::g::Uno::Collections::List* wrappedRuns, ::g::Uno::Collections::List** positionedRuns, ::g::Fuse::Text::Renderer** __retval)
{
    *__retval = Helpers::GetRenderer(*data, wrappedRuns, positionedRuns);
}

// public static float2 Measure(Fuse.Controls.FuseTextRenderer.TextControlData data, Uno.Collections.List<Uno.Collections.List<Fuse.Text.ShapedRun>> wrappedRuns) :95
void Helpers__Measure_fn(::g::Fuse::Controls::FuseTextRenderer::TextControlData* data, ::g::Uno::Collections::List* wrappedRuns, ::g::Uno::Float2* __retval)
{
    *__retval = Helpers::Measure(*data, wrappedRuns);
}

// public static float ToAlignmentNumber(Fuse.Controls.TextAlignment alignment) :117
void Helpers__ToAlignmentNumber_fn(int* alignment, float* __retval)
{
    *__retval = Helpers::ToAlignmentNumber(*alignment);
}

// public static Uno.Collections.List<Uno.Collections.List<Fuse.Text.ShapedRun>> Wrap(Fuse.Controls.FuseTextRenderer.TextControlData data, Uno.Collections.List<Uno.Collections.List<Fuse.Text.Bidirectional.Run>> logicalRuns, Fuse.Controls.FuseTextRenderer.Tolerances& tolerances) :66
void Helpers__Wrap_fn(::g::Fuse::Controls::FuseTextRenderer::TextControlData* data, ::g::Uno::Collections::List* logicalRuns, ::g::Fuse::Controls::FuseTextRenderer::Tolerances* tolerances, ::g::Uno::Collections::List** __retval)
{
    *__retval = Helpers::Wrap(*data, logicalRuns, tolerances);
}

// public static Fuse.Text.Renderer GetRenderer(Fuse.Controls.FuseTextRenderer.TextControlData data, Uno.Collections.List<Uno.Collections.List<Fuse.Text.ShapedRun>> wrappedRuns, Uno.Collections.List<Fuse.Text.PositionedRun>& positionedRuns) [static] :102
::g::Fuse::Text::Renderer* Helpers::GetRenderer(::g::Fuse::Controls::FuseTextRenderer::TextControlData data, ::g::Uno::Collections::List* wrappedRuns, ::g::Uno::Collections::List** positionedRuns)
{
    uStackFrame __("Fuse.Controls.FuseTextRenderer.Helpers", "GetRenderer(Fuse.Controls.FuseTextRenderer.TextControlData,Uno.Collections.List<Uno.Collections.List<Fuse.Text.ShapedRun>>,Uno.Collections.List<Fuse.Text.PositionedRun>&)");
    ::g::Uno::Collections::List* visualLines = ::g::Fuse::Text::Bidirectional::Runs::GetVisual2(wrappedRuns);
    *positionedRuns = ::g::Fuse::Text::Shape::PositionLines(data.Font, data.PixelWidth, data.LineSpacing, Helpers::ToAlignmentNumber(data.TextAlignment), visualLines);
    return ::g::Fuse::Text::Renderer::New1(data.Font, *positionedRuns, uPtr(data.RenderValue)->Length());
}

// public static float2 Measure(Fuse.Controls.FuseTextRenderer.TextControlData data, Uno.Collections.List<Uno.Collections.List<Fuse.Text.ShapedRun>> wrappedRuns) [static] :95
::g::Uno::Float2 Helpers::Measure(::g::Fuse::Controls::FuseTextRenderer::TextControlData data, ::g::Uno::Collections::List* wrappedRuns)
{
    uStackFrame __("Fuse.Controls.FuseTextRenderer.Helpers", "Measure(Fuse.Controls.FuseTextRenderer.TextControlData,Uno.Collections.List<Uno.Collections.List<Fuse.Text.ShapedRun>>)");
    return ::g::Fuse::Text::Measure::Lines(data.Font, data.LineSpacing, wrappedRuns);
}

// public static float ToAlignmentNumber(Fuse.Controls.TextAlignment alignment) [static] :117
float Helpers::ToAlignmentNumber(int alignment)
{
    uStackFrame __("Fuse.Controls.FuseTextRenderer.Helpers", "ToAlignmentNumber(Fuse.Controls.TextAlignment)");

    switch (alignment)
    {
        case 0:
            return 0.0f;
        case 1:
            return 0.5f;
        case 2:
            return 1.0f;
        default:
            U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"TextAlignme...*/]));
    }
}

// public static Uno.Collections.List<Uno.Collections.List<Fuse.Text.ShapedRun>> Wrap(Fuse.Controls.FuseTextRenderer.TextControlData data, Uno.Collections.List<Uno.Collections.List<Fuse.Text.Bidirectional.Run>> logicalRuns, Fuse.Controls.FuseTextRenderer.Tolerances& tolerances) [static] :66
::g::Uno::Collections::List* Helpers::Wrap(::g::Fuse::Controls::FuseTextRenderer::TextControlData data, ::g::Uno::Collections::List* logicalRuns, ::g::Fuse::Controls::FuseTextRenderer::Tolerances* tolerances)
{
    uStackFrame __("Fuse.Controls.FuseTextRenderer.Helpers", "Wrap(Fuse.Controls.FuseTextRenderer.TextControlData,Uno.Collections.List<Uno.Collections.List<Fuse.Text.Bidirectional.Run>>,Fuse.Controls.FuseTextRenderer.Tolerances&)");
    *tolerances = ::g::Fuse::Controls::FuseTextRenderer::Tolerances__New1(0);
    ::g::Uno::Collections::List* shapedRuns = ::g::Fuse::Text::Shape::ShapeLines(data.Font, logicalRuns);
    ::g::Uno::Collections::List* wrappedLines = (data.TextWrapping == 1) ? (::g::Uno::Collections::List*)::g::Fuse::Text::Wrap::Lines(data.Font, shapedRuns, data.PixelWidth + ::g::Fuse::Controls::FuseTextRenderer::Tolerances::Epsilon(), &(*tolerances).MinWrap, &(*tolerances).MaxWrap) : shapedRuns;

    switch (data.TextTruncation)
    {
        case 1:
            return wrappedLines;
        case 0:
        {
            ::g::Uno::Collections::List* result = ::g::Fuse::Text::Truncate::Lines(data.Font, wrappedLines, data.PixelWidth + ::g::Fuse::Controls::FuseTextRenderer::Tolerances::Epsilon(), &(*tolerances).MinTruncation, &(*tolerances).MaxTruncation);
            return result;
            break;
        }
        default:
            U_THROW(::g::Uno::Exception::New2(::STRINGS[1/*"TextTruncat...*/]));
    }
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/textcontrols/fusetextrenderer/$.uno
// ---------------------------------------------------------------------------------------------------------------------------------

// internal sealed class LogicalRunsCached :195
// {
static void LogicalRunsCached_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Controls::FuseTextRenderer::CacheState_type, interface0));
    type->SetFields(0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Text::Bidirectional::Run_typeof(), NULL), NULL), offsetof(::g::Fuse::Controls::FuseTextRenderer::LogicalRunsCached, _logicalRuns), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Controls::FuseTextRenderer::LogicalRunsCached, _renderValue), 0);
}

::g::Fuse::Controls::FuseTextRenderer::CacheState_type* LogicalRunsCached_typeof()
{
    static uSStrong< ::g::Fuse::Controls::FuseTextRenderer::CacheState_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::FuseTextRenderer::CacheState_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(LogicalRunsCached);
    options.TypeSize = sizeof(::g::Fuse::Controls::FuseTextRenderer::CacheState_type);
    type = (::g::Fuse::Controls::FuseTextRenderer::CacheState_type*)uClassType::New("Fuse.Controls.FuseTextRenderer.LogicalRunsCached", options);
    type->fp_build_ = LogicalRunsCached_build;
    type->fp_GetMeasurements = (void(*)(::g::Fuse::Controls::FuseTextRenderer::CacheState*, ::g::Fuse::Controls::FuseTextRenderer::TextControlData*, ::g::Uno::Float2*, ::g::Fuse::Controls::FuseTextRenderer::CacheState**))LogicalRunsCached__GetMeasurements_fn;
    type->fp_GetRenderer1 = (void(*)(::g::Fuse::Controls::FuseTextRenderer::CacheState*, ::g::Fuse::Controls::FuseTextRenderer::TextControlData*, ::g::Fuse::Text::Renderer**, ::g::Uno::Collections::List**, ::g::Fuse::Controls::FuseTextRenderer::CacheState**))LogicalRunsCached__GetRenderer1_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::FuseTextRenderer::CacheState__Dispose_fn;
    return type;
}

// public LogicalRunsCached(string renderValue) :200
void LogicalRunsCached__ctor_1_fn(LogicalRunsCached* __this, uString* renderValue)
{
    __this->ctor_1(renderValue);
}

// public override sealed Fuse.Controls.FuseTextRenderer.CacheState GetMeasurements(Fuse.Controls.FuseTextRenderer.TextControlData data, float2& measurements) :206
void LogicalRunsCached__GetMeasurements_fn(LogicalRunsCached* __this, ::g::Fuse::Controls::FuseTextRenderer::TextControlData* data, ::g::Uno::Float2* measurements, ::g::Fuse::Controls::FuseTextRenderer::CacheState** __retval)
{
    uStackFrame __("Fuse.Controls.FuseTextRenderer.LogicalRunsCached", "GetMeasurements(Fuse.Controls.FuseTextRenderer.TextControlData,float2&)");
    ::g::Fuse::Controls::FuseTextRenderer::TextControlData data_ = *data;

    if (::g::Uno::String::op_Inequality(data_.RenderValue, __this->_renderValue))
        return *__retval = ::g::Fuse::Controls::FuseTextRenderer::NothingCached::New1()->GetMeasurements(data_, measurements), void();

    ::g::Fuse::Controls::FuseTextRenderer::Tolerances tolerances;
    ::g::Uno::Collections::List* wrappedRuns = ::g::Fuse::Controls::FuseTextRenderer::Helpers::Wrap(data_, __this->_logicalRuns, &tolerances);
    *measurements = ::g::Fuse::Controls::FuseTextRenderer::Helpers::Measure(data_, wrappedRuns);
    return *__retval = ::g::Fuse::Controls::FuseTextRenderer::MeasurementsCached::New1(__this, data_, wrappedRuns, tolerances, *measurements), void();
}

// public override sealed Fuse.Controls.FuseTextRenderer.CacheState GetRenderer(Fuse.Controls.FuseTextRenderer.TextControlData data, Fuse.Text.Renderer& renderer, Uno.Collections.List<Fuse.Text.PositionedRun>& positionedRuns) :217
void LogicalRunsCached__GetRenderer1_fn(LogicalRunsCached* __this, ::g::Fuse::Controls::FuseTextRenderer::TextControlData* data, ::g::Fuse::Text::Renderer** renderer, ::g::Uno::Collections::List** positionedRuns, ::g::Fuse::Controls::FuseTextRenderer::CacheState** __retval)
{
    uStackFrame __("Fuse.Controls.FuseTextRenderer.LogicalRunsCached", "GetRenderer(Fuse.Controls.FuseTextRenderer.TextControlData,Fuse.Text.Renderer&,Uno.Collections.List<Fuse.Text.PositionedRun>&)");
    ::g::Fuse::Controls::FuseTextRenderer::TextControlData data_ = *data;

    if (::g::Uno::String::op_Inequality(data_.RenderValue, __this->_renderValue))
        return *__retval = ::g::Fuse::Controls::FuseTextRenderer::NothingCached::New1()->GetRenderer1(data_, renderer, positionedRuns), void();

    ::g::Fuse::Controls::FuseTextRenderer::Tolerances tolerances;
    ::g::Uno::Collections::List* wrappedRuns = ::g::Fuse::Controls::FuseTextRenderer::Helpers::Wrap(data_, __this->_logicalRuns, &tolerances);
    *renderer = ::g::Fuse::Controls::FuseTextRenderer::Helpers::GetRenderer(data_, wrappedRuns, positionedRuns);
    return *__retval = ::g::Fuse::Controls::FuseTextRenderer::RendererCached::New1(__this, data_, wrappedRuns, tolerances, *renderer, *positionedRuns), void();
}

// public LogicalRunsCached New(string renderValue) :200
void LogicalRunsCached__New1_fn(uString* renderValue, LogicalRunsCached** __retval)
{
    *__retval = LogicalRunsCached::New1(renderValue);
}

// public LogicalRunsCached(string renderValue) [instance] :200
void LogicalRunsCached::ctor_1(uString* renderValue)
{
    uStackFrame __("Fuse.Controls.FuseTextRenderer.LogicalRunsCached", ".ctor(string)");
    ctor_();
    _renderValue = renderValue;
    _logicalRuns = ::g::Fuse::Text::Wrap::ActualLineBreaks(::g::Fuse::Text::Bidirectional::Runs::GetLogical(::g::Fuse::Text::Substring::New1(renderValue)));
}

// public LogicalRunsCached New(string renderValue) [static] :200
LogicalRunsCached* LogicalRunsCached::New1(uString* renderValue)
{
    LogicalRunsCached* obj1 = (LogicalRunsCached*)uNew(LogicalRunsCached_typeof());
    obj1->ctor_1(renderValue);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/textcontrols/fusetextrenderer/$.uno
// ---------------------------------------------------------------------------------------------------------------------------------

// internal sealed class MeasurementsCached :229
// {
static void MeasurementsCached_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Controls::FuseTextRenderer::CacheState_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Controls::FuseTextRenderer::TextControlData_typeof(), offsetof(::g::Fuse::Controls::FuseTextRenderer::MeasurementsCached, _data), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Controls::FuseTextRenderer::MeasurementsCached, _measurements), 0,
        ::g::Fuse::Controls::FuseTextRenderer::LogicalRunsCached_typeof(), offsetof(::g::Fuse::Controls::FuseTextRenderer::MeasurementsCached, _previousState), 0,
        ::g::Fuse::Controls::FuseTextRenderer::Tolerances_typeof(), offsetof(::g::Fuse::Controls::FuseTextRenderer::MeasurementsCached, _tolerances), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Text::ShapedRun_typeof(), NULL), NULL), offsetof(::g::Fuse::Controls::FuseTextRenderer::MeasurementsCached, _wrappedRuns), 0);
}

::g::Fuse::Controls::FuseTextRenderer::CacheState_type* MeasurementsCached_typeof()
{
    static uSStrong< ::g::Fuse::Controls::FuseTextRenderer::CacheState_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::FuseTextRenderer::CacheState_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(MeasurementsCached);
    options.TypeSize = sizeof(::g::Fuse::Controls::FuseTextRenderer::CacheState_type);
    type = (::g::Fuse::Controls::FuseTextRenderer::CacheState_type*)uClassType::New("Fuse.Controls.FuseTextRenderer.MeasurementsCached", options);
    type->fp_build_ = MeasurementsCached_build;
    type->fp_GetMeasurements = (void(*)(::g::Fuse::Controls::FuseTextRenderer::CacheState*, ::g::Fuse::Controls::FuseTextRenderer::TextControlData*, ::g::Uno::Float2*, ::g::Fuse::Controls::FuseTextRenderer::CacheState**))MeasurementsCached__GetMeasurements_fn;
    type->fp_GetRenderer1 = (void(*)(::g::Fuse::Controls::FuseTextRenderer::CacheState*, ::g::Fuse::Controls::FuseTextRenderer::TextControlData*, ::g::Fuse::Text::Renderer**, ::g::Uno::Collections::List**, ::g::Fuse::Controls::FuseTextRenderer::CacheState**))MeasurementsCached__GetRenderer1_fn;
    type->fp_TryGetMeasurements = (void(*)(::g::Fuse::Controls::FuseTextRenderer::CacheState*, ::g::Fuse::Controls::FuseTextRenderer::TextControlData*, ::g::Uno::Float2*, bool*))MeasurementsCached__TryGetMeasurements_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::FuseTextRenderer::CacheState__Dispose_fn;
    return type;
}

// public MeasurementsCached(Fuse.Controls.FuseTextRenderer.LogicalRunsCached previousState, Fuse.Controls.FuseTextRenderer.TextControlData data, Uno.Collections.List<Uno.Collections.List<Fuse.Text.ShapedRun>> wrappedRuns, Fuse.Controls.FuseTextRenderer.Tolerances tolerances, float2 measurements) :237
void MeasurementsCached__ctor_1_fn(MeasurementsCached* __this, ::g::Fuse::Controls::FuseTextRenderer::LogicalRunsCached* previousState, ::g::Fuse::Controls::FuseTextRenderer::TextControlData* data, ::g::Uno::Collections::List* wrappedRuns, ::g::Fuse::Controls::FuseTextRenderer::Tolerances* tolerances, ::g::Uno::Float2* measurements)
{
    __this->ctor_1(previousState, *data, wrappedRuns, *tolerances, *measurements);
}

// public override sealed Fuse.Controls.FuseTextRenderer.CacheState GetMeasurements(Fuse.Controls.FuseTextRenderer.TextControlData data, float2& measurements) :246
void MeasurementsCached__GetMeasurements_fn(MeasurementsCached* __this, ::g::Fuse::Controls::FuseTextRenderer::TextControlData* data, ::g::Uno::Float2* measurements, ::g::Fuse::Controls::FuseTextRenderer::CacheState** __retval)
{
    uStackFrame __("Fuse.Controls.FuseTextRenderer.MeasurementsCached", "GetMeasurements(Fuse.Controls.FuseTextRenderer.TextControlData,float2&)");
    ::g::Fuse::Controls::FuseTextRenderer::TextControlData data_ = *data;

    if (__this->TryGetMeasurements(data_, measurements))
        return *__retval = __this, void();
    else
        return *__retval = uPtr(__this->_previousState)->GetMeasurements(data_, measurements), void();
}

// public override sealed Fuse.Controls.FuseTextRenderer.CacheState GetRenderer(Fuse.Controls.FuseTextRenderer.TextControlData data, Fuse.Text.Renderer& renderer, Uno.Collections.List<Fuse.Text.PositionedRun>& positionedRuns) :270
void MeasurementsCached__GetRenderer1_fn(MeasurementsCached* __this, ::g::Fuse::Controls::FuseTextRenderer::TextControlData* data, ::g::Fuse::Text::Renderer** renderer, ::g::Uno::Collections::List** positionedRuns, ::g::Fuse::Controls::FuseTextRenderer::CacheState** __retval)
{
    uStackFrame __("Fuse.Controls.FuseTextRenderer.MeasurementsCached", "GetRenderer(Fuse.Controls.FuseTextRenderer.TextControlData,Fuse.Text.Renderer&,Uno.Collections.List<Fuse.Text.PositionedRun>&)");
    ::g::Fuse::Controls::FuseTextRenderer::TextControlData data_ = *data;

    if (!data_.Subsumes(__this->_data, __this->_tolerances))
        return *__retval = uPtr(__this->_previousState)->GetRenderer1(data_, renderer, positionedRuns), void();

    *renderer = ::g::Fuse::Controls::FuseTextRenderer::Helpers::GetRenderer(data_, __this->_wrappedRuns, positionedRuns);
    return *__retval = ::g::Fuse::Controls::FuseTextRenderer::EverythingCached::New1(__this->_previousState, data_, __this->_wrappedRuns, __this->_tolerances, __this->_measurements, *renderer, *positionedRuns), void();
}

// public MeasurementsCached New(Fuse.Controls.FuseTextRenderer.LogicalRunsCached previousState, Fuse.Controls.FuseTextRenderer.TextControlData data, Uno.Collections.List<Uno.Collections.List<Fuse.Text.ShapedRun>> wrappedRuns, Fuse.Controls.FuseTextRenderer.Tolerances tolerances, float2 measurements) :237
void MeasurementsCached__New1_fn(::g::Fuse::Controls::FuseTextRenderer::LogicalRunsCached* previousState, ::g::Fuse::Controls::FuseTextRenderer::TextControlData* data, ::g::Uno::Collections::List* wrappedRuns, ::g::Fuse::Controls::FuseTextRenderer::Tolerances* tolerances, ::g::Uno::Float2* measurements, MeasurementsCached** __retval)
{
    *__retval = MeasurementsCached::New1(previousState, *data, wrappedRuns, *tolerances, *measurements);
}

// public override sealed bool TryGetMeasurements(Fuse.Controls.FuseTextRenderer.TextControlData data, float2& measurements) :258
void MeasurementsCached__TryGetMeasurements_fn(MeasurementsCached* __this, ::g::Fuse::Controls::FuseTextRenderer::TextControlData* data, ::g::Uno::Float2* measurements, bool* __retval)
{
    ::g::Fuse::Controls::FuseTextRenderer::TextControlData data_ = *data;

    if (!data_.Subsumes(__this->_data, __this->_tolerances))
    {
        *measurements = uDefault< ::g::Uno::Float2>();
        return *__retval = false, void();
    }

    *measurements = __this->_measurements;
    return *__retval = true, void();
}

// public MeasurementsCached(Fuse.Controls.FuseTextRenderer.LogicalRunsCached previousState, Fuse.Controls.FuseTextRenderer.TextControlData data, Uno.Collections.List<Uno.Collections.List<Fuse.Text.ShapedRun>> wrappedRuns, Fuse.Controls.FuseTextRenderer.Tolerances tolerances, float2 measurements) [instance] :237
void MeasurementsCached::ctor_1(::g::Fuse::Controls::FuseTextRenderer::LogicalRunsCached* previousState, ::g::Fuse::Controls::FuseTextRenderer::TextControlData data, ::g::Uno::Collections::List* wrappedRuns, ::g::Fuse::Controls::FuseTextRenderer::Tolerances tolerances, ::g::Uno::Float2 measurements)
{
    ctor_();
    _previousState = previousState;
    _data = data;
    _wrappedRuns = wrappedRuns;
    _tolerances = tolerances;
    _measurements = measurements;
}

// public MeasurementsCached New(Fuse.Controls.FuseTextRenderer.LogicalRunsCached previousState, Fuse.Controls.FuseTextRenderer.TextControlData data, Uno.Collections.List<Uno.Collections.List<Fuse.Text.ShapedRun>> wrappedRuns, Fuse.Controls.FuseTextRenderer.Tolerances tolerances, float2 measurements) [static] :237
MeasurementsCached* MeasurementsCached::New1(::g::Fuse::Controls::FuseTextRenderer::LogicalRunsCached* previousState, ::g::Fuse::Controls::FuseTextRenderer::TextControlData data, ::g::Uno::Collections::List* wrappedRuns, ::g::Fuse::Controls::FuseTextRenderer::Tolerances tolerances, ::g::Uno::Float2 measurements)
{
    MeasurementsCached* obj1 = (MeasurementsCached*)uNew(MeasurementsCached_typeof());
    obj1->ctor_1(previousState, data, wrappedRuns, tolerances, measurements);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/textcontrols/fusetextrenderer/$.uno
// ---------------------------------------------------------------------------------------------------------------------------------

// internal sealed class NothingCached :169
// {
static void NothingCached_build(uType* type)
{
    ::TYPES[1] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Text::PositionedRun_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Controls::FuseTextRenderer::CacheState_type, interface0));
}

::g::Fuse::Controls::FuseTextRenderer::CacheState_type* NothingCached_typeof()
{
    static uSStrong< ::g::Fuse::Controls::FuseTextRenderer::CacheState_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::FuseTextRenderer::CacheState_typeof();
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NothingCached);
    options.TypeSize = sizeof(::g::Fuse::Controls::FuseTextRenderer::CacheState_type);
    type = (::g::Fuse::Controls::FuseTextRenderer::CacheState_type*)uClassType::New("Fuse.Controls.FuseTextRenderer.NothingCached", options);
    type->fp_build_ = NothingCached_build;
    type->fp_ctor_ = (void*)NothingCached__New1_fn;
    type->fp_GetMeasurements = (void(*)(::g::Fuse::Controls::FuseTextRenderer::CacheState*, ::g::Fuse::Controls::FuseTextRenderer::TextControlData*, ::g::Uno::Float2*, ::g::Fuse::Controls::FuseTextRenderer::CacheState**))NothingCached__GetMeasurements_fn;
    type->fp_GetRenderer1 = (void(*)(::g::Fuse::Controls::FuseTextRenderer::CacheState*, ::g::Fuse::Controls::FuseTextRenderer::TextControlData*, ::g::Fuse::Text::Renderer**, ::g::Uno::Collections::List**, ::g::Fuse::Controls::FuseTextRenderer::CacheState**))NothingCached__GetRenderer1_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::FuseTextRenderer::CacheState__Dispose_fn;
    return type;
}

// public generated NothingCached() :169
void NothingCached__ctor_1_fn(NothingCached* __this)
{
    __this->ctor_1();
}

// public override sealed Fuse.Controls.FuseTextRenderer.CacheState GetMeasurements(Fuse.Controls.FuseTextRenderer.TextControlData data, float2& measurements) :171
void NothingCached__GetMeasurements_fn(NothingCached* __this, ::g::Fuse::Controls::FuseTextRenderer::TextControlData* data, ::g::Uno::Float2* measurements, ::g::Fuse::Controls::FuseTextRenderer::CacheState** __retval)
{
    uStackFrame __("Fuse.Controls.FuseTextRenderer.NothingCached", "GetMeasurements(Fuse.Controls.FuseTextRenderer.TextControlData,float2&)");
    ::g::Fuse::Controls::FuseTextRenderer::TextControlData data_ = *data;

    if (::g::Uno::String::op_Equality(data_.RenderValue, NULL))
    {
        *measurements = uDefault< ::g::Uno::Float2>();
        return *__retval = __this, void();
    }

    return *__retval = ::g::Fuse::Controls::FuseTextRenderer::LogicalRunsCached::New1(data_.RenderValue)->GetMeasurements(data_, measurements), void();
}

// public override sealed Fuse.Controls.FuseTextRenderer.CacheState GetRenderer(Fuse.Controls.FuseTextRenderer.TextControlData data, Fuse.Text.Renderer& renderer, Uno.Collections.List<Fuse.Text.PositionedRun>& positionedRuns) :182
void NothingCached__GetRenderer1_fn(NothingCached* __this, ::g::Fuse::Controls::FuseTextRenderer::TextControlData* data, ::g::Fuse::Text::Renderer** renderer, ::g::Uno::Collections::List** positionedRuns, ::g::Fuse::Controls::FuseTextRenderer::CacheState** __retval)
{
    uStackFrame __("Fuse.Controls.FuseTextRenderer.NothingCached", "GetRenderer(Fuse.Controls.FuseTextRenderer.TextControlData,Fuse.Text.Renderer&,Uno.Collections.List<Fuse.Text.PositionedRun>&)");
    ::g::Fuse::Controls::FuseTextRenderer::TextControlData data_ = *data;

    if (::g::Uno::String::op_Equality(data_.RenderValue, NULL))
    {
        *renderer = NULL;
        *positionedRuns = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[1/*Uno.Collections.List<Fuse.Text.PositionedRun>*/]);
        return *__retval = __this, void();
    }

    return *__retval = ::g::Fuse::Controls::FuseTextRenderer::LogicalRunsCached::New1(data_.RenderValue)->GetRenderer1(data_, renderer, positionedRuns), void();
}

// public generated NothingCached New() :169
void NothingCached__New1_fn(NothingCached** __retval)
{
    *__retval = NothingCached::New1();
}

// public generated NothingCached() [instance] :169
void NothingCached::ctor_1()
{
    ctor_();
}

// public generated NothingCached New() [static] :169
NothingCached* NothingCached::New1()
{
    NothingCached* obj1 = (NothingCached*)uNew(NothingCached_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/textcontrols/fusetextrenderer/$.uno
// ---------------------------------------------------------------------------------------------------------------------------------

// internal sealed class RendererCached :287
// {
static void RendererCached_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Controls::FuseTextRenderer::CacheState_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Controls::FuseTextRenderer::TextControlData_typeof(), offsetof(::g::Fuse::Controls::FuseTextRenderer::RendererCached, _data), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Text::PositionedRun_typeof(), NULL), offsetof(::g::Fuse::Controls::FuseTextRenderer::RendererCached, _positionedRuns), 0,
        ::g::Fuse::Controls::FuseTextRenderer::LogicalRunsCached_typeof(), offsetof(::g::Fuse::Controls::FuseTextRenderer::RendererCached, _previousState), 0,
        ::g::Fuse::Text::Renderer_typeof(), offsetof(::g::Fuse::Controls::FuseTextRenderer::RendererCached, _renderer), 0,
        ::g::Fuse::Controls::FuseTextRenderer::Tolerances_typeof(), offsetof(::g::Fuse::Controls::FuseTextRenderer::RendererCached, _tolerances), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Text::ShapedRun_typeof(), NULL), NULL), offsetof(::g::Fuse::Controls::FuseTextRenderer::RendererCached, _wrappedRuns), 0);
}

::g::Fuse::Controls::FuseTextRenderer::CacheState_type* RendererCached_typeof()
{
    static uSStrong< ::g::Fuse::Controls::FuseTextRenderer::CacheState_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::FuseTextRenderer::CacheState_typeof();
    options.FieldCount = 6;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(RendererCached);
    options.TypeSize = sizeof(::g::Fuse::Controls::FuseTextRenderer::CacheState_type);
    type = (::g::Fuse::Controls::FuseTextRenderer::CacheState_type*)uClassType::New("Fuse.Controls.FuseTextRenderer.RendererCached", options);
    type->fp_build_ = RendererCached_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Controls::FuseTextRenderer::CacheState*))RendererCached__Dispose_fn;
    type->fp_GetMeasurements = (void(*)(::g::Fuse::Controls::FuseTextRenderer::CacheState*, ::g::Fuse::Controls::FuseTextRenderer::TextControlData*, ::g::Uno::Float2*, ::g::Fuse::Controls::FuseTextRenderer::CacheState**))RendererCached__GetMeasurements_fn;
    type->fp_GetRenderer1 = (void(*)(::g::Fuse::Controls::FuseTextRenderer::CacheState*, ::g::Fuse::Controls::FuseTextRenderer::TextControlData*, ::g::Fuse::Text::Renderer**, ::g::Uno::Collections::List**, ::g::Fuse::Controls::FuseTextRenderer::CacheState**))RendererCached__GetRenderer1_fn;
    type->fp_TryGetRenderer1 = (void(*)(::g::Fuse::Controls::FuseTextRenderer::CacheState*, ::g::Fuse::Controls::FuseTextRenderer::TextControlData*, ::g::Fuse::Text::Renderer**, ::g::Uno::Collections::List**, bool*))RendererCached__TryGetRenderer1_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))RendererCached__Dispose_fn;
    return type;
}

// public RendererCached(Fuse.Controls.FuseTextRenderer.LogicalRunsCached previousState, Fuse.Controls.FuseTextRenderer.TextControlData data, Uno.Collections.List<Uno.Collections.List<Fuse.Text.ShapedRun>> wrappedRuns, Fuse.Controls.FuseTextRenderer.Tolerances tolerances, Fuse.Text.Renderer renderer, Uno.Collections.List<Fuse.Text.PositionedRun> positionedRuns) :296
void RendererCached__ctor_1_fn(RendererCached* __this, ::g::Fuse::Controls::FuseTextRenderer::LogicalRunsCached* previousState, ::g::Fuse::Controls::FuseTextRenderer::TextControlData* data, ::g::Uno::Collections::List* wrappedRuns, ::g::Fuse::Controls::FuseTextRenderer::Tolerances* tolerances, ::g::Fuse::Text::Renderer* renderer, ::g::Uno::Collections::List* positionedRuns)
{
    __this->ctor_1(previousState, *data, wrappedRuns, *tolerances, renderer, positionedRuns);
}

// public override sealed void Dispose() :353
void RendererCached__Dispose_fn(RendererCached* __this)
{
    uStackFrame __("Fuse.Controls.FuseTextRenderer.RendererCached", "Dispose()");
    uPtr(__this->_renderer)->Dispose();
}

// public override sealed Fuse.Controls.FuseTextRenderer.CacheState GetMeasurements(Fuse.Controls.FuseTextRenderer.TextControlData data, float2& measurements) :306
void RendererCached__GetMeasurements_fn(RendererCached* __this, ::g::Fuse::Controls::FuseTextRenderer::TextControlData* data, ::g::Uno::Float2* measurements, ::g::Fuse::Controls::FuseTextRenderer::CacheState** __retval)
{
    uStackFrame __("Fuse.Controls.FuseTextRenderer.RendererCached", "GetMeasurements(Fuse.Controls.FuseTextRenderer.TextControlData,float2&)");
    ::g::Fuse::Controls::FuseTextRenderer::TextControlData data_ = *data;

    if (!data_.Subsumes(__this->_data, __this->_tolerances))
    {
        __this->Dispose();
        return *__retval = uPtr(__this->_previousState)->GetMeasurements(data_, measurements), void();
    }

    *measurements = ::g::Fuse::Controls::FuseTextRenderer::Helpers::Measure(data_, __this->_wrappedRuns);
    return *__retval = ::g::Fuse::Controls::FuseTextRenderer::EverythingCached::New1(__this->_previousState, data_, __this->_wrappedRuns, __this->_tolerances, *measurements, __this->_renderer, __this->_positionedRuns), void();
}

// public override sealed Fuse.Controls.FuseTextRenderer.CacheState GetRenderer(Fuse.Controls.FuseTextRenderer.TextControlData data, Fuse.Text.Renderer& renderer, Uno.Collections.List<Fuse.Text.PositionedRun>& positionedRuns) :325
void RendererCached__GetRenderer1_fn(RendererCached* __this, ::g::Fuse::Controls::FuseTextRenderer::TextControlData* data, ::g::Fuse::Text::Renderer** renderer, ::g::Uno::Collections::List** positionedRuns, ::g::Fuse::Controls::FuseTextRenderer::CacheState** __retval)
{
    uStackFrame __("Fuse.Controls.FuseTextRenderer.RendererCached", "GetRenderer(Fuse.Controls.FuseTextRenderer.TextControlData,Fuse.Text.Renderer&,Uno.Collections.List<Fuse.Text.PositionedRun>&)");
    ::g::Fuse::Controls::FuseTextRenderer::TextControlData data_ = *data;

    if (__this->TryGetRenderer1(data_, renderer, positionedRuns))
        return *__retval = __this, void();
    else
        return *__retval = uPtr(__this->_previousState)->GetRenderer1(data_, renderer, positionedRuns), void();
}

// public RendererCached New(Fuse.Controls.FuseTextRenderer.LogicalRunsCached previousState, Fuse.Controls.FuseTextRenderer.TextControlData data, Uno.Collections.List<Uno.Collections.List<Fuse.Text.ShapedRun>> wrappedRuns, Fuse.Controls.FuseTextRenderer.Tolerances tolerances, Fuse.Text.Renderer renderer, Uno.Collections.List<Fuse.Text.PositionedRun> positionedRuns) :296
void RendererCached__New1_fn(::g::Fuse::Controls::FuseTextRenderer::LogicalRunsCached* previousState, ::g::Fuse::Controls::FuseTextRenderer::TextControlData* data, ::g::Uno::Collections::List* wrappedRuns, ::g::Fuse::Controls::FuseTextRenderer::Tolerances* tolerances, ::g::Fuse::Text::Renderer* renderer, ::g::Uno::Collections::List* positionedRuns, RendererCached** __retval)
{
    *__retval = RendererCached::New1(previousState, *data, wrappedRuns, *tolerances, renderer, positionedRuns);
}

// public override sealed bool TryGetRenderer(Fuse.Controls.FuseTextRenderer.TextControlData data, Fuse.Text.Renderer& renderer, Uno.Collections.List<Fuse.Text.PositionedRun>& positionedRuns) :337
void RendererCached__TryGetRenderer1_fn(RendererCached* __this, ::g::Fuse::Controls::FuseTextRenderer::TextControlData* data, ::g::Fuse::Text::Renderer** renderer, ::g::Uno::Collections::List** positionedRuns, bool* __retval)
{
    ::g::Fuse::Controls::FuseTextRenderer::TextControlData data_ = *data;

    if (!data_.Subsumes(__this->_data, __this->_tolerances))
    {
        *renderer = NULL;
        *positionedRuns = NULL;
        return *__retval = false, void();
    }

    *renderer = __this->_renderer;
    *positionedRuns = __this->_positionedRuns;
    return *__retval = true, void();
}

// public RendererCached(Fuse.Controls.FuseTextRenderer.LogicalRunsCached previousState, Fuse.Controls.FuseTextRenderer.TextControlData data, Uno.Collections.List<Uno.Collections.List<Fuse.Text.ShapedRun>> wrappedRuns, Fuse.Controls.FuseTextRenderer.Tolerances tolerances, Fuse.Text.Renderer renderer, Uno.Collections.List<Fuse.Text.PositionedRun> positionedRuns) [instance] :296
void RendererCached::ctor_1(::g::Fuse::Controls::FuseTextRenderer::LogicalRunsCached* previousState, ::g::Fuse::Controls::FuseTextRenderer::TextControlData data, ::g::Uno::Collections::List* wrappedRuns, ::g::Fuse::Controls::FuseTextRenderer::Tolerances tolerances, ::g::Fuse::Text::Renderer* renderer, ::g::Uno::Collections::List* positionedRuns)
{
    ctor_();
    _previousState = previousState;
    _data = data;
    _wrappedRuns = wrappedRuns;
    _tolerances = tolerances;
    _renderer = renderer;
    _positionedRuns = positionedRuns;
}

// public RendererCached New(Fuse.Controls.FuseTextRenderer.LogicalRunsCached previousState, Fuse.Controls.FuseTextRenderer.TextControlData data, Uno.Collections.List<Uno.Collections.List<Fuse.Text.ShapedRun>> wrappedRuns, Fuse.Controls.FuseTextRenderer.Tolerances tolerances, Fuse.Text.Renderer renderer, Uno.Collections.List<Fuse.Text.PositionedRun> positionedRuns) [static] :296
RendererCached* RendererCached::New1(::g::Fuse::Controls::FuseTextRenderer::LogicalRunsCached* previousState, ::g::Fuse::Controls::FuseTextRenderer::TextControlData data, ::g::Uno::Collections::List* wrappedRuns, ::g::Fuse::Controls::FuseTextRenderer::Tolerances tolerances, ::g::Fuse::Text::Renderer* renderer, ::g::Uno::Collections::List* positionedRuns)
{
    RendererCached* obj1 = (RendererCached*)uNew(RendererCached_typeof());
    obj1->ctor_1(previousState, data, wrappedRuns, tolerances, renderer, positionedRuns);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/textcontrols/fusetextrenderer/$.uno
// ---------------------------------------------------------------------------------------------------------------------------------

// internal struct TextControlData :10
// {
static void TextControlData_build(uType* type)
{
    ::TYPES[2] = ::g::Fuse::ICommonViewport_typeof();
    type->SetFields(0,
        ::g::Fuse::Text::Font_typeof(), offsetof(::g::Fuse::Controls::FuseTextRenderer::TextControlData, Font), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Controls::FuseTextRenderer::TextControlData, RenderValue), 0,
        ::g::Fuse::Controls::TextWrapping_typeof(), offsetof(::g::Fuse::Controls::FuseTextRenderer::TextControlData, TextWrapping), 0,
        ::g::Fuse::Controls::TextTruncation_typeof(), offsetof(::g::Fuse::Controls::FuseTextRenderer::TextControlData, TextTruncation), 0,
        ::g::Fuse::Controls::TextAlignment_typeof(), offsetof(::g::Fuse::Controls::FuseTextRenderer::TextControlData, TextAlignment), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::FuseTextRenderer::TextControlData, LineSpacing), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::FuseTextRenderer::TextControlData, PixelWidth), 0);
}

uStructType* TextControlData_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ValueSize = sizeof(TextControlData);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Controls.FuseTextRenderer.TextControlData", options);
    type->fp_build_ = TextControlData_build;
    return type;
}

// public TextControlData(Fuse.Text.Font font, Fuse.Controls.TextControl control, float pixelWidth) :20
void TextControlData__ctor__fn(TextControlData* __this, ::g::Fuse::Text::Font* font, ::g::Fuse::Controls::TextControl* control, float* pixelWidth)
{
    __this->ctor_(font, control, *pixelWidth);
}

// public TextControlData New(Fuse.Text.Font font, Fuse.Controls.TextControl control, float pixelWidth) :20
void TextControlData__New1_fn(::g::Fuse::Text::Font* font, ::g::Fuse::Controls::TextControl* control, float* pixelWidth, TextControlData* __retval)
{
    *__retval = TextControlData__New1(font, control, *pixelWidth);
}

// public bool Subsumes(Fuse.Controls.FuseTextRenderer.TextControlData other, Fuse.Controls.FuseTextRenderer.Tolerances tolerances) :31
void TextControlData__Subsumes_fn(TextControlData* __this, TextControlData* other, ::g::Fuse::Controls::FuseTextRenderer::Tolerances* tolerances, bool* __retval)
{
    *__retval = __this->Subsumes(*other, *tolerances);
}

// public TextControlData(Fuse.Text.Font font, Fuse.Controls.TextControl control, float pixelWidth) [instance] :20
void TextControlData::ctor_(::g::Fuse::Text::Font* font, ::g::Fuse::Controls::TextControl* control, float pixelWidth)
{
    uStackFrame __("Fuse.Controls.FuseTextRenderer.TextControlData", ".ctor(Fuse.Text.Font,Fuse.Controls.TextControl,float)");
    Font = font;
    RenderValue = uPtr(control)->RenderValue();
    TextWrapping = control->TextWrapping();
    TextTruncation = control->TextTruncation();
    TextAlignment = control->TextAlignment();
    LineSpacing = (control->LineSpacing() * ::g::Fuse::ICommonViewport::PixelsPerPoint(uInterface(uPtr(control->Viewport()), ::TYPES[2/*Fuse.ICommonViewport*/])));
    PixelWidth = pixelWidth;
}

// public bool Subsumes(Fuse.Controls.FuseTextRenderer.TextControlData other, Fuse.Controls.FuseTextRenderer.Tolerances tolerances) [instance] :31
bool TextControlData::Subsumes(TextControlData other, ::g::Fuse::Controls::FuseTextRenderer::Tolerances tolerances)
{
    uStackFrame __("Fuse.Controls.FuseTextRenderer.TextControlData", "Subsumes(Fuse.Controls.FuseTextRenderer.TextControlData,Fuse.Controls.FuseTextRenderer.Tolerances)");
    return (((((((((Font == other.Font) && ::g::Uno::String::op_Equality(RenderValue, other.RenderValue)) && (TextWrapping == other.TextWrapping)) && (TextTruncation == other.TextTruncation)) && (TextAlignment == other.TextAlignment)) && (::g::Uno::Math::Abs1(LineSpacing - other.LineSpacing) <= ::g::Fuse::Controls::FuseTextRenderer::Tolerances::Epsilon())) && ((tolerances.MinWrap - ::g::Fuse::Controls::FuseTextRenderer::Tolerances::Epsilon()) <= PixelWidth)) && (PixelWidth <= (tolerances.MaxWrap + ::g::Fuse::Controls::FuseTextRenderer::Tolerances::Epsilon()))) && ((tolerances.MinTruncation - ::g::Fuse::Controls::FuseTextRenderer::Tolerances::Epsilon()) <= PixelWidth)) && (PixelWidth <= (tolerances.MaxTruncation + ::g::Fuse::Controls::FuseTextRenderer::Tolerances::Epsilon()));
}

// public TextControlData New(Fuse.Text.Font font, Fuse.Controls.TextControl control, float pixelWidth) [static] :20
TextControlData TextControlData__New1(::g::Fuse::Text::Font* font, ::g::Fuse::Controls::TextControl* control, float pixelWidth)
{
    TextControlData obj1;
    obj1.ctor_(font, control, pixelWidth);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/textcontrols/fusetextrenderer/$.uno
// ---------------------------------------------------------------------------------------------------------------------------------

// internal sealed class TextRenderer :459
// {
// static TextRenderer() :459
static void TextRenderer__cctor__fn(uType* __type)
{
    TextRenderer::_fallbackFontCache_ = ((::g::Fuse::Internal::Cache*)::g::Fuse::Internal::Cache::New1(::TYPES[3/*Fuse.Internal.Cache<Uno.Collections.List<Fuse.Internal.FontFaceDescriptor>, Fuse.Text.FontFace>*/], uDelegate::New(::TYPES[4/*Uno.Func<Uno.Collections.List<Fuse.Internal.FontFaceDescriptor>, Fuse.Text.FontFace>*/], (void*)TextRenderer__GetFallbackFontFace_fn), 10));
    TextRenderer::_fontCache_ = ((::g::Fuse::Internal::Cache*)::g::Fuse::Internal::Cache::New1(::TYPES[5/*Fuse.Internal.Cache<Fuse.Internal.FontFaceDescriptor, Fuse.Text.FontFace>*/], uDelegate::New(::TYPES[6/*Uno.Func<Fuse.Internal.FontFaceDescriptor, Fuse.Text.FontFace>*/], (void*)TextRenderer__GetFontFace_fn), 10));
}

static void TextRenderer_build(uType* type)
{
    ::STRINGS[2] = uString::Const("this._cacheState == null");
    ::STRINGS[3] = uString::Const("/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/textcontrols/fusetextrenderer/$.uno");
    ::TYPES[3] = ::g::Fuse::Internal::Cache_typeof()->MakeType(::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Internal::FontFaceDescriptor_typeof(), NULL), ::g::Fuse::Text::FontFace_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Func1_typeof()->MakeType(::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Internal::FontFaceDescriptor_typeof(), NULL), ::g::Fuse::Text::FontFace_typeof(), NULL);
    ::TYPES[5] = ::g::Fuse::Internal::Cache_typeof()->MakeType(::g::Fuse::Internal::FontFaceDescriptor_typeof(), ::g::Fuse::Text::FontFace_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::Func1_typeof()->MakeType(::g::Fuse::Internal::FontFaceDescriptor_typeof(), ::g::Fuse::Text::FontFace_typeof(), NULL);
    ::TYPES[7] = uObject_typeof()->Array();
    ::TYPES[8] = ::g::Fuse::Internal::CacheItem_typeof()->MakeType(::g::Uno::Int_typeof(), ::g::Fuse::Text::Font_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::ICommonViewport_typeof();
    ::TYPES[9] = ::g::Uno::Action_typeof();
    ::TYPES[10] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Controls::FuseTextRenderer::CacheState_typeof(), NULL);
    ::TYPES[11] = ::g::Fuse::Internal::CacheItem_typeof()->MakeType(::g::Fuse::Internal::FontFaceDescriptor_typeof(), ::g::Fuse::Text::FontFace_typeof(), NULL)->Array();
    ::TYPES[12] = ::g::Fuse::Internal::CacheItem_typeof()->MakeType(::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Internal::FontFaceDescriptor_typeof(), NULL), ::g::Fuse::Text::FontFace_typeof(), NULL);
    type->SetInterfaces(
        ::g::Fuse::Controls::ITextRenderer_typeof(), offsetof(TextRenderer_type, interface0));
    type->SetFields(0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Controls::FuseTextRenderer::TextRenderer, _arrangePosition), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Controls::FuseTextRenderer::TextRenderer, _arrangeSize), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::FuseTextRenderer::TextRenderer, _ascender), 0,
        ::g::Fuse::Triggers::BusyTask_typeof(), offsetof(::g::Fuse::Controls::FuseTextRenderer::TextRenderer, _busyTask), 0,
        ::g::Fuse::Controls::FuseTextRenderer::CacheState_typeof(), offsetof(::g::Fuse::Controls::FuseTextRenderer::TextRenderer, _cacheState), 0,
        ::g::Fuse::Controls::TextControl_typeof(), offsetof(::g::Fuse::Controls::FuseTextRenderer::TextRenderer, _control), 0,
        ::TYPES[8/*Fuse.Internal.CacheItem<int, Fuse.Text.Font>*/], offsetof(::g::Fuse::Controls::FuseTextRenderer::TextRenderer, _font), 0,
        ::TYPES[12/*Fuse.Internal.CacheItem<Uno.Collections.List<Fuse.Internal.FontFaceDescriptor>, Fuse.Text.FontFace>*/], offsetof(::g::Fuse::Controls::FuseTextRenderer::TextRenderer, _fontFace), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Controls::FuseTextRenderer::TextRenderer, _fontSize), 0,
        ::g::Fuse::Font_typeof(), offsetof(::g::Fuse::Controls::FuseTextRenderer::TextRenderer, _fuseFont), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Controls::FuseTextRenderer::TextRenderer, _loadAsync), 0,
        ::TYPES[3/*Fuse.Internal.Cache<Uno.Collections.List<Fuse.Internal.FontFaceDescriptor>, Fuse.Text.FontFace>*/], (uintptr_t)&::g::Fuse::Controls::FuseTextRenderer::TextRenderer::_fallbackFontCache_, uFieldFlagsStatic,
        ::TYPES[5/*Fuse.Internal.Cache<Fuse.Internal.FontFaceDescriptor, Fuse.Text.FontFace>*/], (uintptr_t)&::g::Fuse::Controls::FuseTextRenderer::TextRenderer::_fontCache_, uFieldFlagsStatic);
}

TextRenderer_type* TextRenderer_typeof()
{
    static uSStrong<TextRenderer_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 13;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(TextRenderer);
    options.TypeSize = sizeof(TextRenderer_type);
    type = (TextRenderer_type*)uClassType::New("Fuse.Controls.FuseTextRenderer.TextRenderer", options);
    type->fp_build_ = TextRenderer_build;
    type->fp_cctor_ = TextRenderer__cctor__fn;
    type->interface0.fp_GetContentSize = (void(*)(uObject*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))TextRenderer__GetContentSize_fn;
    type->interface0.fp_Draw = (void(*)(uObject*, ::g::Fuse::DrawContext*, ::g::Fuse::Visual*))TextRenderer__Draw_fn;
    type->interface0.fp_Arrange = (void(*)(uObject*, ::g::Uno::Float2*, ::g::Uno::Float2*))TextRenderer__Arrange_fn;
    type->interface0.fp_Invalidate = (void(*)(uObject*))TextRenderer__Invalidate_fn;
    type->interface0.fp_GetRenderBounds = (void(*)(uObject*, ::g::Uno::Rect*))TextRenderer__GetRenderBounds_fn;
    type->interface0.fp_SoftDispose = (void(*)(uObject*))TextRenderer__SoftDispose_fn;
    return type;
}

// public TextRenderer(Fuse.Controls.TextControl control, bool loadAsync) :529
void TextRenderer__ctor__fn(TextRenderer* __this, ::g::Fuse::Controls::TextControl* control, bool* loadAsync)
{
    __this->ctor_(control, *loadAsync);
}

// public void Arrange(float2 position, float2 size) :621
void TextRenderer__Arrange_fn(TextRenderer* __this, ::g::Uno::Float2* position, ::g::Uno::Float2* size)
{
    __this->Arrange(*position, *size);
}

// private void AsyncMeasurementsDone(Fuse.Controls.FuseTextRenderer.CacheState state) :590
void TextRenderer__AsyncMeasurementsDone_fn(TextRenderer* __this, ::g::Fuse::Controls::FuseTextRenderer::CacheState* state)
{
    __this->AsyncMeasurementsDone(state);
}

// private Fuse.Controls.FuseTextRenderer.TextControlData CreateTextControlData() :543
void TextRenderer__CreateTextControlData_fn(TextRenderer* __this, ::g::Fuse::Controls::FuseTextRenderer::TextControlData* __retval)
{
    *__retval = __this->CreateTextControlData();
}

// private Fuse.Controls.FuseTextRenderer.TextControlData CreateTextControlData(float pointWidth) :548
void TextRenderer__CreateTextControlData1_fn(TextRenderer* __this, float* pointWidth, ::g::Fuse::Controls::FuseTextRenderer::TextControlData* __retval)
{
    *__retval = __this->CreateTextControlData1(*pointWidth);
}

// public void Draw(Fuse.DrawContext dc, Fuse.Visual where) :599
void TextRenderer__Draw_fn(TextRenderer* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* where)
{
    __this->Draw(dc, where);
}

// public Fuse.Internal.CacheItem<int, Fuse.Text.Font> get_Font() :506
void TextRenderer__get_Font_fn(TextRenderer* __this, ::g::Fuse::Internal::CacheItem* __retval)
{
    *__retval = __this->Font();
}

// private void set_Font(Fuse.Internal.CacheItem<int, Fuse.Text.Font> value) :507
void TextRenderer__set_Font_fn(TextRenderer* __this, ::g::Fuse::Internal::CacheItem* value)
{
    __this->Font(*value);
}

// private Fuse.Internal.CacheItem<Uno.Collections.List<Fuse.Internal.FontFaceDescriptor>, Fuse.Text.FontFace> get_FontFace() :492
void TextRenderer__get_FontFace_fn(TextRenderer* __this, ::g::Fuse::Internal::CacheItem* __retval)
{
    *__retval = __this->FontFace();
}

// private void set_FontFace(Fuse.Internal.CacheItem<Uno.Collections.List<Fuse.Internal.FontFaceDescriptor>, Fuse.Text.FontFace> value) :493
void TextRenderer__set_FontFace_fn(TextRenderer* __this, ::g::Fuse::Internal::CacheItem* value)
{
    __this->FontFace(*value);
}

// public float2 GetContentSize(Fuse.LayoutParams lp) :554
void TextRenderer__GetContentSize_fn(TextRenderer* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetContentSize(*lp);
}

// private static Fuse.Text.FontFace GetFallbackFontFace(Uno.Collections.List<Fuse.Internal.FontFaceDescriptor> descriptors) :468
void TextRenderer__GetFallbackFontFace_fn(::g::Uno::Collections::List* descriptors, ::g::Fuse::Text::FontFace** __retval)
{
    *__retval = TextRenderer::GetFallbackFontFace(descriptors);
}

// private static Fuse.Text.FontFace GetFontFace(Fuse.Internal.FontFaceDescriptor descriptor) :479
void TextRenderer__GetFontFace_fn(::g::Fuse::Internal::FontFaceDescriptor* descriptor, ::g::Fuse::Text::FontFace** __retval)
{
    *__retval = TextRenderer::GetFontFace(descriptor);
}

// public Uno.Rect GetRenderBounds() :653
void TextRenderer__GetRenderBounds_fn(TextRenderer* __this, ::g::Uno::Rect* __retval)
{
    *__retval = __this->GetRenderBounds();
}

// public void Invalidate() :627
void TextRenderer__Invalidate_fn(TextRenderer* __this)
{
    __this->Invalidate();
}

// public TextRenderer New(Fuse.Controls.TextControl control, bool loadAsync) :529
void TextRenderer__New1_fn(::g::Fuse::Controls::TextControl* control, bool* loadAsync, TextRenderer** __retval)
{
    *__retval = TextRenderer::New1(control, *loadAsync);
}

// public void SoftDispose() :667
void TextRenderer__SoftDispose_fn(TextRenderer* __this)
{
    __this->SoftDispose();
}

// private bool UpdateFont() :633
void TextRenderer__UpdateFont_fn(TextRenderer* __this, bool* __retval)
{
    *__retval = __this->UpdateFont();
}

uSStrong< ::g::Fuse::Internal::Cache*> TextRenderer::_fallbackFontCache_;
uSStrong< ::g::Fuse::Internal::Cache*> TextRenderer::_fontCache_;

// public TextRenderer(Fuse.Controls.TextControl control, bool loadAsync) [instance] :529
void TextRenderer::ctor_(::g::Fuse::Controls::TextControl* control, bool loadAsync)
{
    _cacheState = ::g::Fuse::Controls::FuseTextRenderer::NothingCached::New1();
    _control = control;
    _loadAsync = loadAsync;
}

// public void Arrange(float2 position, float2 size) [instance] :621
void TextRenderer::Arrange(::g::Uno::Float2 position, ::g::Uno::Float2 size)
{
    _arrangePosition = position;
    _arrangeSize = size;
}

// private void AsyncMeasurementsDone(Fuse.Controls.FuseTextRenderer.CacheState state) [instance] :590
void TextRenderer::AsyncMeasurementsDone(::g::Fuse::Controls::FuseTextRenderer::CacheState* state)
{
    uStackFrame __("Fuse.Controls.FuseTextRenderer.TextRenderer", "AsyncMeasurementsDone(Fuse.Controls.FuseTextRenderer.CacheState)");
    ::g::Fuse::Triggers::BusyTask::SetBusy(_control, &_busyTask, 0);
    ::g::Uno::Diagnostics::Debug::Assert(_cacheState == NULL, ::STRINGS[2/*"this._cache...*/], ::STRINGS[3/*"/Users/most...*/], 593, uArray::New(::TYPES[7/*object[]*/], 0));
    _cacheState = state;
    uPtr(_control)->InvalidateLayout(2);
    uPtr(_control)->InvalidateVisual();
}

// private Fuse.Controls.FuseTextRenderer.TextControlData CreateTextControlData() [instance] :543
::g::Fuse::Controls::FuseTextRenderer::TextControlData TextRenderer::CreateTextControlData()
{
    uStackFrame __("Fuse.Controls.FuseTextRenderer.TextRenderer", "CreateTextControlData()");
    return CreateTextControlData1(_arrangeSize.X);
}

// private Fuse.Controls.FuseTextRenderer.TextControlData CreateTextControlData(float pointWidth) [instance] :548
::g::Fuse::Controls::FuseTextRenderer::TextControlData TextRenderer::CreateTextControlData1(float pointWidth)
{
    uStackFrame __("Fuse.Controls.FuseTextRenderer.TextRenderer", "CreateTextControlData(float)");
    return ::g::Fuse::Controls::FuseTextRenderer::TextControlData__New1((::g::Fuse::Text::Font*)Font().Value(::TYPES[8/*Fuse.Internal.CacheItem<int, Fuse.Text.Font>*/]), _control, pointWidth * ::g::Fuse::ICommonViewport::PixelsPerPoint(uInterface(uPtr(uPtr(_control)->Viewport()), ::TYPES[2/*Fuse.ICommonViewport*/])));
}

// public void Draw(Fuse.DrawContext dc, Fuse.Visual where) [instance] :599
void TextRenderer::Draw(::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* where)
{
    uStackFrame __("Fuse.Controls.FuseTextRenderer.TextRenderer", "Draw(Fuse.DrawContext,Fuse.Visual)");

    if (_cacheState == NULL)
        return;

    UpdateFont();
    ::g::Fuse::Text::Renderer* renderer;
    _cacheState = uPtr(_cacheState)->GetRenderer(CreateTextControlData(), &renderer);
    float ascender = _ascender / ::g::Fuse::ICommonViewport::PixelsPerPoint(uInterface(uPtr(uPtr(_control)->Viewport()), ::TYPES[2/*Fuse.ICommonViewport*/]));
    ::g::Uno::Float4x4 pixelToClipSpaceMatrix = ::g::Uno::Matrix::Mul9(::g::Uno::Matrix::Scaling(1.0f / ::g::Fuse::ICommonViewport::PixelsPerPoint(uInterface(uPtr(uPtr(_control)->Viewport()), ::TYPES[2/*Fuse.ICommonViewport*/]))), ::g::Uno::Matrix::Translation1(::g::Uno::Float3__New4(::g::Uno::Float2__op_Addition2(_arrangePosition, ::g::Uno::Float2__New2(0.0f, ascender)), 0.0f)), uPtr(dc)->GetLocalToClipTransform(where));
    uPtr(renderer)->Draw(uPtr(_control)->RenderColor(), pixelToClipSpaceMatrix);
}

// public Fuse.Internal.CacheItem<int, Fuse.Text.Font> get_Font() [instance] :506
::g::Fuse::Internal::CacheItem TextRenderer::Font()
{
    return _font;
}

// private void set_Font(Fuse.Internal.CacheItem<int, Fuse.Text.Font> value) [instance] :507
void TextRenderer::Font(::g::Fuse::Internal::CacheItem value)
{
    uStackFrame __("Fuse.Controls.FuseTextRenderer.TextRenderer", "set_Font(Fuse.Internal.CacheItem<int, Fuse.Text.Font>)");

    if (::g::Fuse::Internal::CacheItem__op_Inequality(::TYPES[8/*Fuse.Internal.CacheItem<int, Fuse.Text.Font>*/], _font, value))
    {
        if (::g::Fuse::Internal::CacheItem__op_Inequality(::TYPES[8/*Fuse.Internal.CacheItem<int, Fuse.Text.Font>*/], _font, uDefault< ::g::Fuse::Internal::CacheItem>()))
            _font.Dispose(::TYPES[8/*Fuse.Internal.CacheItem<int, Fuse.Text.Font>*/]);

        _font = value;
    }
}

// private Fuse.Internal.CacheItem<Uno.Collections.List<Fuse.Internal.FontFaceDescriptor>, Fuse.Text.FontFace> get_FontFace() [instance] :492
::g::Fuse::Internal::CacheItem TextRenderer::FontFace()
{
    return _fontFace;
}

// private void set_FontFace(Fuse.Internal.CacheItem<Uno.Collections.List<Fuse.Internal.FontFaceDescriptor>, Fuse.Text.FontFace> value) [instance] :493
void TextRenderer::FontFace(::g::Fuse::Internal::CacheItem value)
{
    uStackFrame __("Fuse.Controls.FuseTextRenderer.TextRenderer", "set_FontFace(Fuse.Internal.CacheItem<Uno.Collections.List<Fuse.Internal.FontFaceDescriptor>, Fuse.Text.FontFace>)");

    if (::g::Fuse::Internal::CacheItem__op_Inequality(::TYPES[12/*Fuse.Internal.CacheItem<Uno.Collections.List<Fuse.Internal.FontFaceDescriptor>, Fuse.Text.FontFace>*/], _fontFace, value))
    {
        if (::g::Fuse::Internal::CacheItem__op_Inequality(::TYPES[12/*Fuse.Internal.CacheItem<Uno.Collections.List<Fuse.Internal.FontFaceDescriptor>, Fuse.Text.FontFace>*/], _fontFace, uDefault< ::g::Fuse::Internal::CacheItem>()))
            _fontFace.Dispose(::TYPES[12/*Fuse.Internal.CacheItem<Uno.Collections.List<Fuse.Internal.FontFaceDescriptor>, Fuse.Text.FontFace>*/]);

        _fontFace = value;
    }
}

// public float2 GetContentSize(Fuse.LayoutParams lp) [instance] :554
::g::Uno::Float2 TextRenderer::GetContentSize(::g::Fuse::LayoutParams lp)
{
    uStackFrame __("Fuse.Controls.FuseTextRenderer.TextRenderer", "GetContentSize(Fuse.LayoutParams)");

    if (_cacheState == NULL)
        return ::g::Uno::Float2__New1(0.0f);

    UpdateFont();
    float pointWidth = ::g::Uno::Math::Min1(lp.HasX() ? lp.X() : FLT_INF, lp.HasMaxX() ? lp.MaxX() : FLT_INF);
    ::g::Fuse::Controls::FuseTextRenderer::TextControlData data = CreateTextControlData1(pointWidth);

    if (_loadAsync)
    {
        ::g::Uno::Float2 measurements;

        if (uPtr(_cacheState)->TryGetMeasurements(data, &measurements))
            return ::g::Uno::Float2__op_Division1(measurements, ::g::Fuse::ICommonViewport::PixelsPerPoint(uInterface(uPtr(uPtr(_control)->Viewport()), ::TYPES[2/*Fuse.ICommonViewport*/])));
        else
        {
            ::g::Fuse::GraphicsWorker::Dispatch(uDelegate::New(::TYPES[9/*Uno.Action*/], (void*)::g::Fuse::Controls::FuseTextRenderer::AsyncMeasurer__Run_fn, ::g::Fuse::Controls::FuseTextRenderer::AsyncMeasurer::New1(_cacheState, data, uDelegate::New(::TYPES[10/*Uno.Action<Fuse.Controls.FuseTextRenderer.CacheState>*/], (void*)TextRenderer__AsyncMeasurementsDone_fn, this))));
            _cacheState = NULL;
            ::g::Fuse::Triggers::BusyTask::SetBusy(_control, &_busyTask, 1);
            return ::g::Uno::Float2__New1(0.0f);
        }
    }
    else
    {
        ::g::Uno::Float2 measurements1;
        _cacheState = uPtr(_cacheState)->GetMeasurements(data, &measurements1);
        return ::g::Uno::Float2__op_Division1(measurements1, ::g::Fuse::ICommonViewport::PixelsPerPoint(uInterface(uPtr(uPtr(_control)->Viewport()), ::TYPES[2/*Fuse.ICommonViewport*/])));
    }
}

// public Uno.Rect GetRenderBounds() [instance] :653
::g::Uno::Rect TextRenderer::GetRenderBounds()
{
    uStackFrame __("Fuse.Controls.FuseTextRenderer.TextRenderer", "GetRenderBounds()");

    if (_cacheState == NULL)
        return uDefault< ::g::Uno::Rect>();

    UpdateFont();
    ::g::Uno::Rect bounds;
    _cacheState = uPtr(_cacheState)->GetBounds(CreateTextControlData(), &bounds);
    return ::g::Uno::Rect__Scale(::g::Uno::Rect__Inflate(bounds, 2.0f * uPtr((::g::Fuse::Text::Font*)Font().Value(::TYPES[8/*Fuse.Internal.CacheItem<int, Fuse.Text.Font>*/]))->LineHeight()), 1.0f / ::g::Fuse::ICommonViewport::PixelsPerPoint(uInterface(uPtr(uPtr(_control)->Viewport()), ::TYPES[2/*Fuse.ICommonViewport*/])));
}

// public void Invalidate() [instance] :627
void TextRenderer::Invalidate()
{
    uStackFrame __("Fuse.Controls.FuseTextRenderer.TextRenderer", "Invalidate()");

    if (_cacheState != NULL)
        UpdateFont();
}

// public void SoftDispose() [instance] :667
void TextRenderer::SoftDispose()
{
    uStackFrame __("Fuse.Controls.FuseTextRenderer.TextRenderer", "SoftDispose()");
    _fuseFont = NULL;
    _fontSize = 0;
    Font(uDefault< ::g::Fuse::Internal::CacheItem>());
    FontFace(uDefault< ::g::Fuse::Internal::CacheItem>());

    if (_cacheState != NULL)
    {
        uPtr(_cacheState)->Dispose();
        _cacheState = ::g::Fuse::Controls::FuseTextRenderer::NothingCached::New1();
    }
}

// private bool UpdateFont() [instance] :633
bool TextRenderer::UpdateFont()
{
    uStackFrame __("Fuse.Controls.FuseTextRenderer.TextRenderer", "UpdateFont()");
    ::g::Fuse::Internal::CacheItem ret4;
    int newFontSize = ::g::Uno::Math::Clamp8((int)::g::Uno::Math::Round2(uPtr(_control)->FontSize() * ::g::Fuse::ICommonViewport::PixelsPerPoint(uInterface(uPtr(uPtr(_control)->Viewport()), ::TYPES[2/*Fuse.ICommonViewport*/]))), 4, 400);

    if ((uPtr(_control)->Font() != _fuseFont) || (newFontSize != _fontSize))
    {
        _fuseFont = uPtr(_control)->Font();
        _fontSize = newFontSize;
        FontFace((::g::Fuse::Internal::Cache__Get_fn(uPtr(TextRenderer::_fallbackFontCache()), uPtr(_fuseFont)->Descriptors, &ret4), ret4));
        Font(uPtr((::g::Fuse::Text::FontFace*)FontFace().Value(::TYPES[12/*Fuse.Internal.CacheItem<Uno.Collections.List<Fuse.Internal.FontFaceDescriptor>, Fuse.Text.FontFace>*/]))->GetOfPixelSize(newFontSize));
        _ascender = uPtr((::g::Fuse::Text::Font*)Font().Value(::TYPES[8/*Fuse.Internal.CacheItem<int, Fuse.Text.Font>*/]))->Ascender();
        uPtr(_cacheState)->Dispose();
        _cacheState = ::g::Fuse::Controls::FuseTextRenderer::NothingCached::New1();
        return true;
    }

    return false;
}

// private static Fuse.Text.FontFace GetFallbackFontFace(Uno.Collections.List<Fuse.Internal.FontFaceDescriptor> descriptors) [static] :468
::g::Fuse::Text::FontFace* TextRenderer::GetFallbackFontFace(::g::Uno::Collections::List* descriptors)
{
    uStackFrame __("Fuse.Controls.FuseTextRenderer.TextRenderer", "GetFallbackFontFace(Uno.Collections.List<Fuse.Internal.FontFaceDescriptor>)");
    TextRenderer_typeof()->Init();
    ::g::Fuse::Internal::CacheItem ret2;
    ::g::Fuse::Internal::FontFaceDescriptor* ret3;
    int len = uPtr(descriptors)->Count();
    uArray* fontFaces = uArray::New(::TYPES[11/*Fuse.Internal.CacheItem<Fuse.Internal.FontFaceDescriptor, Fuse.Text.FontFace>[]*/], len);

    for (int i = 0; i < len; ++i)
        uPtr(fontFaces)->Item< ::g::Fuse::Internal::CacheItem>(i) = (::g::Fuse::Internal::Cache__Get_fn(uPtr(TextRenderer::_fontCache()), (::g::Uno::Collections::List__get_Item_fn(uPtr(descriptors), uCRef<int>(i), &ret3), ret3), &ret2), ret2);

    return ::g::Fuse::Text::FallingBackFontFace::New1(fontFaces);
}

// private static Fuse.Text.FontFace GetFontFace(Fuse.Internal.FontFaceDescriptor descriptor) [static] :479
::g::Fuse::Text::FontFace* TextRenderer::GetFontFace(::g::Fuse::Internal::FontFaceDescriptor* descriptor)
{
    TextRenderer_typeof()->Init();
    return ::g::Fuse::Text::LazyFontFace::New1(descriptor);
}

// public TextRenderer New(Fuse.Controls.TextControl control, bool loadAsync) [static] :529
TextRenderer* TextRenderer::New1(::g::Fuse::Controls::TextControl* control, bool loadAsync)
{
    TextRenderer* obj1 = (TextRenderer*)uNew(TextRenderer_typeof());
    obj1->ctor_(control, loadAsync);
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/textcontrols/fusetextrenderer/$.uno
// ---------------------------------------------------------------------------------------------------------------------------------

// internal struct Tolerances :46
// {
// static Tolerances() :46
static void Tolerances__cctor__fn(uType* __type)
{
    Tolerances::Epsilon_ = 0.01f;
}

static void Tolerances_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::FuseTextRenderer::Tolerances, MinWrap), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::FuseTextRenderer::Tolerances, MaxWrap), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::FuseTextRenderer::Tolerances, MinTruncation), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Controls::FuseTextRenderer::Tolerances, MaxTruncation), 0,
        ::g::Uno::Float_typeof(), (uintptr_t)&::g::Fuse::Controls::FuseTextRenderer::Tolerances::Epsilon_, uFieldFlagsStatic);
}

uStructType* Tolerances_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ValueSize = sizeof(Tolerances);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Controls.FuseTextRenderer.Tolerances", options);
    type->fp_build_ = Tolerances_build;
    type->fp_cctor_ = Tolerances__cctor__fn;
    return type;
}

// public Tolerances(int dummy) :55
void Tolerances__ctor__fn(Tolerances* __this, int* dummy)
{
    __this->ctor_(*dummy);
}

// public Tolerances New(int dummy) :55
void Tolerances__New1_fn(int* dummy, Tolerances* __retval)
{
    *__retval = Tolerances__New1(*dummy);
}

float Tolerances::Epsilon_;

// public Tolerances(int dummy) [instance] :55
void Tolerances::ctor_(int dummy)
{
    MinWrap = 0.0f;
    MaxWrap = FLT_INF;
    MinTruncation = 0.0f;
    MaxTruncation = FLT_INF;
}

// public Tolerances New(int dummy) [static] :55
Tolerances Tolerances__New1(int dummy)
{
    Tolerances obj1;
    obj1.ctor_(dummy);
    return obj1;
}
// }

}}}} // ::g::Fuse::Controls::FuseTextRenderer
