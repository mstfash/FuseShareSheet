// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/resources/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Resources.DisposalPolicy.h>
namespace g{namespace Fuse{namespace Resources{struct ExpirationDisposalPolicy;}}}

namespace g{
namespace Fuse{
namespace Resources{

// internal sealed class ExpirationDisposalPolicy :113
// {
::g::Fuse::Resources::DisposalPolicy_type* ExpirationDisposalPolicy_typeof();
void ExpirationDisposalPolicy__ctor_1_fn(ExpirationDisposalPolicy* __this);
void ExpirationDisposalPolicy__CanDispose_fn(ExpirationDisposalPolicy* __this, int* dr, bool* pinned, bool* __retval);
void ExpirationDisposalPolicy__Clone_fn(ExpirationDisposalPolicy* __this, ::g::Fuse::Resources::DisposalPolicy** __retval);
void ExpirationDisposalPolicy__MarkUsed_fn(ExpirationDisposalPolicy* __this);
void ExpirationDisposalPolicy__New1_fn(ExpirationDisposalPolicy** __retval);
void ExpirationDisposalPolicy__get_Timeout_fn(ExpirationDisposalPolicy* __this, double* __retval);
void ExpirationDisposalPolicy__set_Timeout_fn(ExpirationDisposalPolicy* __this, double* value);

struct ExpirationDisposalPolicy : ::g::Fuse::Resources::DisposalPolicy
{
    double lastUsedFrameTime;
    double _Timeout;

    void ctor_1();
    double Timeout();
    void Timeout(double value);
    static ExpirationDisposalPolicy* New1();
};
// }

}}} // ::g::Fuse::Resources
