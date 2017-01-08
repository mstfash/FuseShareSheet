// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/textcontrols/fusetextrenderer/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace FuseTextRenderer{struct TextControlData;}}}}
namespace g{namespace Fuse{namespace Controls{namespace FuseTextRenderer{struct Tolerances;}}}}
namespace g{namespace Fuse{namespace Controls{struct TextControl;}}}
namespace g{namespace Fuse{namespace Text{struct Font;}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace FuseTextRenderer{

// internal struct TextControlData :10
// {
uStructType* TextControlData_typeof();
void TextControlData__ctor__fn(TextControlData* __this, ::g::Fuse::Text::Font* font, ::g::Fuse::Controls::TextControl* control, float* pixelWidth);
void TextControlData__New1_fn(::g::Fuse::Text::Font* font, ::g::Fuse::Controls::TextControl* control, float* pixelWidth, TextControlData* __retval);
void TextControlData__Subsumes_fn(TextControlData* __this, TextControlData* other, ::g::Fuse::Controls::FuseTextRenderer::Tolerances* tolerances, bool* __retval);

struct TextControlData
{
    uStrong< ::g::Fuse::Text::Font*> Font;
    uStrong<uString*> RenderValue;
    int TextWrapping;
    int TextTruncation;
    int TextAlignment;
    float LineSpacing;
    float PixelWidth;

    void ctor_(::g::Fuse::Text::Font* font, ::g::Fuse::Controls::TextControl* control, float pixelWidth);
    bool Subsumes(TextControlData other, ::g::Fuse::Controls::FuseTextRenderer::Tolerances tolerances);
};

TextControlData TextControlData__New1(::g::Fuse::Text::Font* font, ::g::Fuse::Controls::TextControl* control, float pixelWidth);
// }

}}}} // ::g::Fuse::Controls::FuseTextRenderer
