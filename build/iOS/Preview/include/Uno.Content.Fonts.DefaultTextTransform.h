// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/UnoCore/0.42.5/source/uno/content/fonts/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Content.Fonts.TextTransform.h>
#include <Uno.Float4x4.h>
namespace g{namespace Uno{namespace Content{namespace Fonts{struct DefaultTextTransform;}}}}

namespace g{
namespace Uno{
namespace Content{
namespace Fonts{

// public sealed class DefaultTextTransform :301
// {
::g::Uno::Content::Fonts::TextTransform_type* DefaultTextTransform_typeof();
void DefaultTextTransform__ctor_1_fn(DefaultTextTransform* __this);
void DefaultTextTransform__get_Matrix_fn(DefaultTextTransform* __this, ::g::Uno::Float4x4* __retval);
void DefaultTextTransform__set_Matrix_fn(DefaultTextTransform* __this, ::g::Uno::Float4x4* value);
void DefaultTextTransform__New1_fn(DefaultTextTransform** __retval);
void DefaultTextTransform__ResolveClipSpaceMatrix_fn(DefaultTextTransform* __this, ::g::Uno::Float4x4* __retval);

struct DefaultTextTransform : ::g::Uno::Content::Fonts::TextTransform
{
    ::g::Uno::Float4x4 _matrix;

    void ctor_1();
    static DefaultTextTransform* New1();
};
// }

}}}} // ::g::Uno::Content::Fonts
