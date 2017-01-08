// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Primitives/0.42.4/textcontrols/fallbacktextedit/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextEdit{struct LineCache;}}}}
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextEdit{struct LineCacheLine;}}}}
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextEdit{struct TextPosition;}}}}
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextEdit{struct TextSpan;}}}}
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextRenderer{struct WordWrapInfo;}}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace FallbackTextEdit{

// internal sealed class LineCache :76
// {
uType* LineCache_typeof();
void LineCache__ctor__fn(LineCache* __this, uDelegate* onTextChanged, uDelegate* invalideLayout, bool* isMultiline);
void LineCache__BoundsToTextPos_fn(LineCache* __this, ::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, int* textAlignment, float* boundsWidth, ::g::Uno::Float2* p, ::g::Fuse::Controls::FallbackTextEdit::TextPosition** __retval);
void LineCache__DecomposeLines_fn(LineCache* __this, uString* text, ::g::Uno::Collections::List** __retval);
void LineCache__DeleteSpan_fn(LineCache* __this, ::g::Fuse::Controls::FallbackTextEdit::TextSpan* s, ::g::Fuse::Controls::FallbackTextEdit::TextPosition** __retval);
void LineCache__End_fn(LineCache* __this, ::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* p, ::g::Fuse::Controls::FallbackTextEdit::TextPosition** __retval);
void LineCache__GetBoundsSize_fn(LineCache* __this, ::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, ::g::Uno::Float2* __retval);
void LineCache__GetFullTextSpan_fn(LineCache* __this, ::g::Fuse::Controls::FallbackTextEdit::TextSpan** __retval);
void LineCache__GetLastTextPos_fn(LineCache* __this, ::g::Fuse::Controls::FallbackTextEdit::TextPosition** __retval);
void LineCache__GetString_fn(LineCache* __this, ::g::Fuse::Controls::FallbackTextEdit::TextSpan* s, uString** __retval);
void LineCache__Home_fn(LineCache* __this, ::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* p, ::g::Fuse::Controls::FallbackTextEdit::TextPosition** __retval);
void LineCache__InsertChar_fn(LineCache* __this, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* p, uChar* c, ::g::Fuse::Controls::FallbackTextEdit::TextPosition** __retval);
void LineCache__InsertNewline_fn(LineCache* __this, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* p, ::g::Fuse::Controls::FallbackTextEdit::TextPosition** __retval);
void LineCache__InvalidateLayout_fn(LineCache* __this);
void LineCache__InvalidateText_fn(LineCache* __this, bool* noChange);
void LineCache__InvalidateVisual_fn(LineCache* __this);
void LineCache__IsWordBreaker_fn(LineCache* __this, uChar* c, bool* __retval);
void LineCache__get_Lines_fn(LineCache* __this, ::g::Uno::Collections::List** __retval);
void LineCache__New1_fn(uDelegate* onTextChanged, uDelegate* invalideLayout, bool* isMultiline, LineCache** __retval);
void LineCache__NextWordLeft_fn(LineCache* __this, uString* str, int* startIdx, int* __retval);
void LineCache__NextWordRight_fn(LineCache* __this, uString* str, int* startIdx, int* __retval);
void LineCache__get_Text_fn(LineCache* __this, uString** __retval);
void LineCache__set_Text_fn(LineCache* __this, uString* value);
void LineCache__TextPosToBounds_fn(LineCache* __this, ::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, int* textAlignment, float* boundsWidth, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* p, ::g::Uno::Float2* __retval);
void LineCache__get_Transform_fn(LineCache* __this, uObject** __retval);
void LineCache__set_Transform_fn(LineCache* __this, uObject* value);
void LineCache__TryBackspace_fn(LineCache* __this, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* p, ::g::Fuse::Controls::FallbackTextEdit::TextPosition** __retval);
void LineCache__TryDelete_fn(LineCache* __this, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* p, ::g::Fuse::Controls::FallbackTextEdit::TextPosition** __retval);
void LineCache__TryMoveDown_fn(LineCache* __this, ::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, int* textAlignment, float* boundsWidth, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* p, ::g::Fuse::Controls::FallbackTextEdit::TextPosition** __retval);
void LineCache__TryMoveLeft_fn(LineCache* __this, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* p, ::g::Fuse::Controls::FallbackTextEdit::TextPosition** __retval);
void LineCache__TryMoveOneWordLeft_fn(LineCache* __this, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* p, ::g::Fuse::Controls::FallbackTextEdit::TextPosition** __retval);
void LineCache__TryMoveOneWordRight_fn(LineCache* __this, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* p, ::g::Fuse::Controls::FallbackTextEdit::TextPosition** __retval);
void LineCache__TryMoveRight_fn(LineCache* __this, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* p, ::g::Fuse::Controls::FallbackTextEdit::TextPosition** __retval);
void LineCache__TryMoveUp_fn(LineCache* __this, ::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, int* textAlignment, float* boundsWidth, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* p, ::g::Fuse::Controls::FallbackTextEdit::TextPosition** __retval);

struct LineCache : uObject
{
    uStrong<uDelegate*> _invalideLayout;
    bool _isMultiline;
    bool _isTextValid;
    uStrong< ::g::Uno::Collections::List*> _lines;
    uStrong<uDelegate*> _onTextChanged;
    uStrong<uString*> _text;
    uStrong<uObject*> _transform;

    void ctor_(uDelegate* onTextChanged, uDelegate* invalideLayout, bool isMultiline);
    ::g::Fuse::Controls::FallbackTextEdit::TextPosition* BoundsToTextPos(::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, int textAlignment, float boundsWidth, ::g::Uno::Float2 p);
    ::g::Uno::Collections::List* DecomposeLines(uString* text);
    ::g::Fuse::Controls::FallbackTextEdit::TextPosition* DeleteSpan(::g::Fuse::Controls::FallbackTextEdit::TextSpan* s);
    ::g::Fuse::Controls::FallbackTextEdit::TextPosition* End(::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* p);
    ::g::Uno::Float2 GetBoundsSize(::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo);
    ::g::Fuse::Controls::FallbackTextEdit::TextSpan* GetFullTextSpan();
    ::g::Fuse::Controls::FallbackTextEdit::TextPosition* GetLastTextPos();
    uString* GetString(::g::Fuse::Controls::FallbackTextEdit::TextSpan* s);
    ::g::Fuse::Controls::FallbackTextEdit::TextPosition* Home(::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* p);
    ::g::Fuse::Controls::FallbackTextEdit::TextPosition* InsertChar(::g::Fuse::Controls::FallbackTextEdit::TextPosition* p, uChar c);
    ::g::Fuse::Controls::FallbackTextEdit::TextPosition* InsertNewline(::g::Fuse::Controls::FallbackTextEdit::TextPosition* p);
    void InvalidateLayout();
    void InvalidateText(bool noChange);
    void InvalidateVisual();
    bool IsWordBreaker(uChar c);
    ::g::Uno::Collections::List* Lines();
    int NextWordLeft(uString* str, int startIdx);
    int NextWordRight(uString* str, int startIdx);
    uString* Text();
    void Text(uString* value);
    ::g::Uno::Float2 TextPosToBounds(::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, int textAlignment, float boundsWidth, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* p);
    uObject* Transform();
    void Transform(uObject* value);
    ::g::Fuse::Controls::FallbackTextEdit::TextPosition* TryBackspace(::g::Fuse::Controls::FallbackTextEdit::TextPosition* p);
    ::g::Fuse::Controls::FallbackTextEdit::TextPosition* TryDelete(::g::Fuse::Controls::FallbackTextEdit::TextPosition* p);
    ::g::Fuse::Controls::FallbackTextEdit::TextPosition* TryMoveDown(::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, int textAlignment, float boundsWidth, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* p);
    ::g::Fuse::Controls::FallbackTextEdit::TextPosition* TryMoveLeft(::g::Fuse::Controls::FallbackTextEdit::TextPosition* p);
    ::g::Fuse::Controls::FallbackTextEdit::TextPosition* TryMoveOneWordLeft(::g::Fuse::Controls::FallbackTextEdit::TextPosition* p);
    ::g::Fuse::Controls::FallbackTextEdit::TextPosition* TryMoveOneWordRight(::g::Fuse::Controls::FallbackTextEdit::TextPosition* p);
    ::g::Fuse::Controls::FallbackTextEdit::TextPosition* TryMoveRight(::g::Fuse::Controls::FallbackTextEdit::TextPosition* p);
    ::g::Fuse::Controls::FallbackTextEdit::TextPosition* TryMoveUp(::g::Fuse::Controls::FallbackTextRenderer::WordWrapInfo* wrapInfo, int textAlignment, float boundsWidth, ::g::Fuse::Controls::FallbackTextEdit::TextPosition* p);
    static LineCache* New1(uDelegate* onTextChanged, uDelegate* invalideLayout, bool isMultiline);
};
// }

}}}} // ::g::Fuse::Controls::FallbackTextEdit
