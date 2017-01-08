// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ITransformMode.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.TranslationModes.SizeMode.h>
namespace g{namespace Fuse{struct Translation;}}
namespace g{namespace Fuse{struct TranslationModes__WidthMode;}}
namespace g{namespace Uno{struct Float3;}}

namespace g{
namespace Fuse{

// private sealed class TranslationModes.WidthMode :10046
// {
::g::Fuse::TranslationModes__SizeMode_type* TranslationModes__WidthMode_typeof();
void TranslationModes__WidthMode__ctor_1_fn(TranslationModes__WidthMode* __this);
void TranslationModes__WidthMode__GetAbsVector_fn(TranslationModes__WidthMode* __this, ::g::Fuse::Translation* t, ::g::Uno::Float3* __retval);
void TranslationModes__WidthMode__New2_fn(TranslationModes__WidthMode** __retval);

struct TranslationModes__WidthMode : ::g::Fuse::TranslationModes__SizeMode
{
    void ctor_1();
    static TranslationModes__WidthMode* New2();
};
// }

}} // ::g::Fuse
