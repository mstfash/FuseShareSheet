// This file was generated based on /Users/mostafa/Desktop/ShareSheet/build/Android/Preview/preamble/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.Template.h>
namespace g{namespace Outracks{namespace Simulator{namespace Runtime{struct UxTemplate;}}}}

namespace g{
namespace Outracks{
namespace Simulator{
namespace Runtime{

// public sealed class UxTemplate :10
// {
::g::Uno::UX::Template_type* UxTemplate_typeof();
void UxTemplate__ctor_1_fn(UxTemplate* __this, uDelegate* create, uString* matchCase, bool* isDefault);
void UxTemplate__New1_fn(UxTemplate* __this, uObject** __retval);
void UxTemplate__New2_fn(uDelegate* create, uString* matchCase, bool* isDefault, UxTemplate** __retval);

struct UxTemplate : ::g::Uno::UX::Template
{
    uStrong<uDelegate*> _create;

    void ctor_1(uDelegate* create, uString* matchCase, bool isDefault);
    static UxTemplate* New2(uDelegate* create, uString* matchCase, bool isDefault);
};
// }

}}}} // ::g::Outracks::Simulator::Runtime
