// This file was generated based on /usr/local/share/uno/Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct Diagnostic;}}
namespace g{namespace Outracks{namespace Simulator{struct DiagnosticItem;}}}
namespace g{namespace Outracks{namespace Simulator{struct DiagnosticShower;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}

namespace g{
namespace Outracks{
namespace Simulator{

// internal sealed class DiagnosticShower :2280
// {
uType* DiagnosticShower_typeof();
void DiagnosticShower__ctor__fn(DiagnosticShower* __this, ::g::Fuse::Diagnostic* diagnosticItem, ::g::Uno::Collections::List* previousDiagnosticItems);
void DiagnosticShower__DisplayDiagnostic_fn(DiagnosticShower* __this, ::g::Fuse::Diagnostic* d);
void DiagnosticShower__New1_fn(::g::Fuse::Diagnostic* diagnosticItem, ::g::Uno::Collections::List* previousDiagnosticItems, DiagnosticShower** __retval);
void DiagnosticShower__Show_fn(DiagnosticShower* __this);

struct DiagnosticShower : uObject
{
    uStrong< ::g::Fuse::Diagnostic*> _diagnosticItem;
    uStrong< ::g::Uno::Collections::List*> _previousDiagnosticItems;

    void ctor_(::g::Fuse::Diagnostic* diagnosticItem, ::g::Uno::Collections::List* previousDiagnosticItems);
    void DisplayDiagnostic(::g::Fuse::Diagnostic* d);
    void Show();
    static DiagnosticShower* New1(::g::Fuse::Diagnostic* diagnosticItem, ::g::Uno::Collections::List* previousDiagnosticItems);
};
// }

}}} // ::g::Outracks::Simulator
