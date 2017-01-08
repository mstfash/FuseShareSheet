// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/textcontrols/fusetextrenderer/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace FuseTextRenderer{struct CacheState;}}}}
namespace g{namespace Fuse{namespace Controls{namespace FuseTextRenderer{struct TextControlData;}}}}
namespace g{namespace Fuse{namespace Text{struct PositionedRun;}}}
namespace g{namespace Fuse{namespace Text{struct Renderer;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace FuseTextRenderer{

// internal abstract class CacheState :129
// {
struct CacheState_type : uType
{
    ::g::Uno::IDisposable interface0;
    void(*fp_Dispose)(::g::Fuse::Controls::FuseTextRenderer::CacheState*);
    void(*fp_GetMeasurements)(::g::Fuse::Controls::FuseTextRenderer::CacheState*, ::g::Fuse::Controls::FuseTextRenderer::TextControlData*, ::g::Uno::Float2*, ::g::Fuse::Controls::FuseTextRenderer::CacheState**);
    void(*fp_GetRenderer1)(::g::Fuse::Controls::FuseTextRenderer::CacheState*, ::g::Fuse::Controls::FuseTextRenderer::TextControlData*, ::g::Fuse::Text::Renderer**, ::g::Uno::Collections::List**, ::g::Fuse::Controls::FuseTextRenderer::CacheState**);
    void(*fp_TryGetMeasurements)(::g::Fuse::Controls::FuseTextRenderer::CacheState*, ::g::Fuse::Controls::FuseTextRenderer::TextControlData*, ::g::Uno::Float2*, bool*);
    void(*fp_TryGetRenderer1)(::g::Fuse::Controls::FuseTextRenderer::CacheState*, ::g::Fuse::Controls::FuseTextRenderer::TextControlData*, ::g::Fuse::Text::Renderer**, ::g::Uno::Collections::List**, bool*);
};

CacheState_type* CacheState_typeof();
void CacheState__ctor__fn(CacheState* __this);
void CacheState__Dispose_fn(CacheState* __this);
void CacheState__GetBounds_fn(CacheState* __this, ::g::Fuse::Controls::FuseTextRenderer::TextControlData* data, ::g::Uno::Rect* bounds, CacheState** __retval);
void CacheState__GetRenderer_fn(CacheState* __this, ::g::Fuse::Controls::FuseTextRenderer::TextControlData* data, ::g::Fuse::Text::Renderer** renderer, CacheState** __retval);
void CacheState__TryGetMeasurements_fn(CacheState* __this, ::g::Fuse::Controls::FuseTextRenderer::TextControlData* data, ::g::Uno::Float2* measurements, bool* __retval);
void CacheState__TryGetRenderer_fn(CacheState* __this, ::g::Fuse::Controls::FuseTextRenderer::TextControlData* data, ::g::Fuse::Text::Renderer** renderer, bool* __retval);
void CacheState__TryGetRenderer1_fn(CacheState* __this, ::g::Fuse::Controls::FuseTextRenderer::TextControlData* data, ::g::Fuse::Text::Renderer** renderer, ::g::Uno::Collections::List** positionedRuns, bool* __retval);

struct CacheState : uObject
{
    void ctor_();
    void Dispose() { (((CacheState_type*)__type)->fp_Dispose)(this); }
    CacheState* GetBounds(::g::Fuse::Controls::FuseTextRenderer::TextControlData data, ::g::Uno::Rect* bounds);
    CacheState* GetMeasurements(::g::Fuse::Controls::FuseTextRenderer::TextControlData data, ::g::Uno::Float2* measurements);
    CacheState* GetRenderer(::g::Fuse::Controls::FuseTextRenderer::TextControlData data, ::g::Fuse::Text::Renderer** renderer);
    CacheState* GetRenderer1(::g::Fuse::Controls::FuseTextRenderer::TextControlData data, ::g::Fuse::Text::Renderer** renderer, ::g::Uno::Collections::List** positionedRuns);
    bool TryGetMeasurements(::g::Fuse::Controls::FuseTextRenderer::TextControlData data, ::g::Uno::Float2* measurements);
    bool TryGetRenderer(::g::Fuse::Controls::FuseTextRenderer::TextControlData data, ::g::Fuse::Text::Renderer** renderer);
    bool TryGetRenderer1(::g::Fuse::Controls::FuseTextRenderer::TextControlData data, ::g::Fuse::Text::Renderer** renderer, ::g::Uno::Collections::List** positionedRuns);
    static void Dispose(CacheState* __this) { CacheState__Dispose_fn(__this); }
    static bool TryGetMeasurements(CacheState* __this, ::g::Fuse::Controls::FuseTextRenderer::TextControlData data, ::g::Uno::Float2* measurements);
    static bool TryGetRenderer1(CacheState* __this, ::g::Fuse::Controls::FuseTextRenderer::TextControlData data, ::g::Fuse::Text::Renderer** renderer, ::g::Uno::Collections::List** positionedRuns);
};

}}}} // ::g::Fuse::Controls::FuseTextRenderer

#include <Fuse.Controls.FuseTextRenderer.TextControlData.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace FuseTextRenderer{

inline CacheState* CacheState::GetMeasurements(::g::Fuse::Controls::FuseTextRenderer::TextControlData data, ::g::Uno::Float2* measurements) { CacheState* __retval; return (((CacheState_type*)__type)->fp_GetMeasurements)(this, &data, measurements, &__retval), __retval; }
inline CacheState* CacheState::GetRenderer1(::g::Fuse::Controls::FuseTextRenderer::TextControlData data, ::g::Fuse::Text::Renderer** renderer, ::g::Uno::Collections::List** positionedRuns) { CacheState* __retval; return (((CacheState_type*)__type)->fp_GetRenderer1)(this, &data, renderer, positionedRuns, &__retval), __retval; }
inline bool CacheState::TryGetMeasurements(::g::Fuse::Controls::FuseTextRenderer::TextControlData data, ::g::Uno::Float2* measurements) { bool __retval; return (((CacheState_type*)__type)->fp_TryGetMeasurements)(this, &data, measurements, &__retval), __retval; }
inline bool CacheState::TryGetRenderer1(::g::Fuse::Controls::FuseTextRenderer::TextControlData data, ::g::Fuse::Text::Renderer** renderer, ::g::Uno::Collections::List** positionedRuns) { bool __retval; return (((CacheState_type*)__type)->fp_TryGetRenderer1)(this, &data, renderer, positionedRuns, &__retval), __retval; }
inline bool CacheState::TryGetMeasurements(CacheState* __this, ::g::Fuse::Controls::FuseTextRenderer::TextControlData data, ::g::Uno::Float2* measurements) { bool __retval; return CacheState__TryGetMeasurements_fn(__this, &data, measurements, &__retval), __retval; }
inline bool CacheState::TryGetRenderer1(CacheState* __this, ::g::Fuse::Controls::FuseTextRenderer::TextControlData data, ::g::Fuse::Text::Renderer** renderer, ::g::Uno::Collections::List** positionedRuns) { bool __retval; return CacheState__TryGetRenderer1_fn(__this, &data, renderer, positionedRuns, &__retval), __retval; }
// }

}}}} // ::g::Fuse::Controls::FuseTextRenderer
