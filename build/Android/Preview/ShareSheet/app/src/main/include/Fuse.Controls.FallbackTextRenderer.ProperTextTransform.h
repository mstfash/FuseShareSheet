// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/textcontrols/fallbacktextrenderer/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Content.Fonts.TextTransform.h>
#include <Uno.Float4x4.h>
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextRenderer{struct ProperTextTransform;}}}}
namespace g{namespace Fuse{struct DrawContext;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace FallbackTextRenderer{

// internal sealed class ProperTextTransform :184
// {
::g::Uno::Content::Fonts::TextTransform_type* ProperTextTransform_typeof();
void ProperTextTransform__ctor_1_fn(ProperTextTransform* __this);
void ProperTextTransform__get_CullFace_fn(ProperTextTransform* __this, int* __retval);
void ProperTextTransform__get_Matrix_fn(ProperTextTransform* __this, ::g::Uno::Float4x4* __retval);
void ProperTextTransform__set_Matrix_fn(ProperTextTransform* __this, ::g::Uno::Float4x4* value);
void ProperTextTransform__New1_fn(ProperTextTransform** __retval);
void ProperTextTransform__ResolveClipSpaceMatrix_fn(ProperTextTransform* __this, ::g::Uno::Float4x4* __retval);

struct ProperTextTransform : ::g::Uno::Content::Fonts::TextTransform
{
    ::g::Uno::Float4x4 _matrix;
    uStrong< ::g::Fuse::DrawContext*> DrawContext;

    void ctor_1();
    static ProperTextTransform* New1();
};
// }

}}}} // ::g::Fuse::Controls::FallbackTextRenderer
