// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Text/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Text.Batch.h>
#include <Fuse.Text.Quad.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
namespace g{namespace Fuse{namespace Text{struct Font;}}}
namespace g{namespace Fuse{namespace Text{struct GlyphAtlas;}}}
namespace g{namespace Fuse{namespace Text{struct PositionedRun;}}}
namespace g{namespace Fuse{namespace Text{struct Renderer;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace Threading{struct Mutex;}}}
namespace g{namespace Uno{struct Buffer;}}
namespace g{namespace Uno{struct Float4;}}
namespace g{namespace Uno{struct Float4x4;}}
namespace g{namespace Uno{struct Int2;}}

namespace g{
namespace Fuse{
namespace Text{

// public sealed class Renderer :1487
// {
struct Renderer_type : uType
{
    ::g::Uno::IDisposable interface0;
};

Renderer_type* Renderer_typeof();
void Renderer__ctor__fn(Renderer* __this, ::g::Fuse::Text::Font* font, ::g::Uno::Collections::List* positionedRuns, int* approximateGlyphCount);
void Renderer__CreateIndexBufferData_fn(int* length, ::g::Uno::Buffer** __retval);
void Renderer__CreateVertexBufferData_fn(::g::Uno::Collections::List* quads, ::g::Uno::Int2* texSize, ::g::Uno::Buffer** __retval);
void Renderer__Dispose_fn(Renderer* __this);
void Renderer__DisposeBatches_fn(Renderer* __this);
void Renderer__Draw_fn(Renderer* __this, ::g::Uno::Float4* color, ::g::Uno::Float4x4* pixelToClipSpaceMatrix);
void Renderer__GetBatches_fn(Renderer* __this, ::g::Uno::Collections::List** __retval);
void Renderer__GetTexturedQuads_fn(Renderer* __this, ::g::Uno::Collections::List** __retval);
void Renderer__init_DrawCalls_fn(Renderer* __this);
void Renderer__New1_fn(::g::Fuse::Text::Font* font, ::g::Uno::Collections::List* positionedRuns, int* approximateGlyphCount, Renderer** __retval);
void Renderer__RecreateGlyphAtlas_fn(int* version);
void Renderer__TexturedQuads_fn(::g::Fuse::Text::Font* font, ::g::Uno::Collections::List* positionedRuns, int* approximateGlyphCount, ::g::Uno::Collections::List** __retval);

struct Renderer : uObject
{
    int _approximateGlyphCount;
    uStrong< ::g::Uno::Collections::List*> _batches;
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_5eb093de;
    uStrong< ::g::Fuse::Text::Font*> _font;
    static uSStrong< ::g::Fuse::Text::GlyphAtlas*> _glyphAtlas_;
    static uSStrong< ::g::Fuse::Text::GlyphAtlas*>& _glyphAtlas() { return Renderer_typeof()->Init(), _glyphAtlas_; }
    static uSStrong< ::g::Uno::Threading::Mutex*> _glyphAtlasMutex_;
    static uSStrong< ::g::Uno::Threading::Mutex*>& _glyphAtlasMutex() { return Renderer_typeof()->Init(), _glyphAtlasMutex_; }
    static int _glyphAtlasVersion_;
    static int& _glyphAtlasVersion() { return Renderer_typeof()->Init(), _glyphAtlasVersion_; }
    static ::g::Uno::Int2 _minimumGlyphAtlasSize_;
    static ::g::Uno::Int2& _minimumGlyphAtlasSize() { return Renderer_typeof()->Init(), _minimumGlyphAtlasSize_; }
    uStrong< ::g::Uno::Collections::List*> _positionedRuns;
    uStrong< ::g::Uno::Collections::List*> _texturedQuads;
    int _version;

    void ctor_(::g::Fuse::Text::Font* font, ::g::Uno::Collections::List* positionedRuns, int approximateGlyphCount);
    void Dispose();
    void DisposeBatches();
    void Draw(::g::Uno::Float4 color, ::g::Uno::Float4x4 pixelToClipSpaceMatrix);
    ::g::Uno::Collections::List* GetBatches();
    ::g::Uno::Collections::List* GetTexturedQuads();
    void init_DrawCalls();
    static ::g::Uno::Buffer* CreateIndexBufferData(int length);
    static ::g::Uno::Buffer* CreateVertexBufferData(::g::Uno::Collections::List* quads, ::g::Uno::Int2 texSize);
    static Renderer* New1(::g::Fuse::Text::Font* font, ::g::Uno::Collections::List* positionedRuns, int approximateGlyphCount);
    static void RecreateGlyphAtlas(int version);
    static ::g::Uno::Collections::List* TexturedQuads(::g::Fuse::Text::Font* font, ::g::Uno::Collections::List* positionedRuns, int approximateGlyphCount);
};
// }

}}} // ::g::Fuse::Text
