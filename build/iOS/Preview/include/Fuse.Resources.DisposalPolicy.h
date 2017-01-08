// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/FuseCore/0.42.4/resources/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Resources{struct DisposalPolicy;}}}

namespace g{
namespace Fuse{
namespace Resources{

// internal abstract class DisposalPolicy :106
// {
struct DisposalPolicy_type : uType
{
    void(*fp_CanDispose)(::g::Fuse::Resources::DisposalPolicy*, int*, bool*, bool*);
    void(*fp_Clone)(::g::Fuse::Resources::DisposalPolicy*, ::g::Fuse::Resources::DisposalPolicy**);
    void(*fp_MarkUsed)(::g::Fuse::Resources::DisposalPolicy*);
};

DisposalPolicy_type* DisposalPolicy_typeof();
void DisposalPolicy__ctor__fn(DisposalPolicy* __this);

struct DisposalPolicy : uObject
{
    void ctor_();
    bool CanDispose(int dr, bool pinned) { bool __retval; return (((DisposalPolicy_type*)__type)->fp_CanDispose)(this, &dr, &pinned, &__retval), __retval; }
    DisposalPolicy* Clone() { DisposalPolicy* __retval; return (((DisposalPolicy_type*)__type)->fp_Clone)(this, &__retval), __retval; }
    void MarkUsed() { (((DisposalPolicy_type*)__type)->fp_MarkUsed)(this); }
};
// }

}}} // ::g::Fuse::Resources
