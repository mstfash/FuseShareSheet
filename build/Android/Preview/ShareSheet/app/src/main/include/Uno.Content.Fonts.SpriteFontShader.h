// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/content/fonts/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Content.Fonts.TextShader.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h>
namespace g{namespace Uno{namespace Content{namespace Fonts{struct SpriteFontShader;}}}}
namespace g{namespace Uno{namespace Content{namespace Fonts{struct TextShaderData;}}}}

namespace g{
namespace Uno{
namespace Content{
namespace Fonts{

// public sealed class SpriteFontShader :639
// {
::g::Uno::Content::Fonts::TextShader_type* SpriteFontShader_typeof();
void SpriteFontShader__ctor_1_fn(SpriteFontShader* __this);
void SpriteFontShader__Draw_fn(SpriteFontShader* __this, ::g::Uno::Content::Fonts::TextShaderData* data);
void SpriteFontShader__init_DrawCalls_fn(SpriteFontShader* __this);
void SpriteFontShader__New1_fn(SpriteFontShader** __retval);

struct SpriteFontShader : ::g::Uno::Content::Fonts::TextShader
{
    ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall _draw_6b7396b4;

    void ctor_1();
    void init_DrawCalls();
    static SpriteFontShader* New1();
};
// }

}}}} // ::g::Uno::Content::Fonts
