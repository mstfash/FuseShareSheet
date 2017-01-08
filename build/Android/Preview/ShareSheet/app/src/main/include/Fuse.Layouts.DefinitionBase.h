// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Panels/0.42.4/layouts/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.PropertyObject.h>
namespace g{namespace Fuse{namespace Layouts{struct DefinitionBase;}}}

namespace g{
namespace Fuse{
namespace Layouts{

// public abstract class DefinitionBase :790
// {
uType* DefinitionBase_typeof();
void DefinitionBase__ctor_1_fn(DefinitionBase* __this);
void DefinitionBase__ctor_2_fn(DefinitionBase* __this, float* extent, int* metric);
void DefinitionBase__ctor_3_fn(DefinitionBase* __this, DefinitionBase* copy, int* creation);
void DefinitionBase__get_ActualOffset_fn(DefinitionBase* __this, float* __retval);
void DefinitionBase__set_ActualOffset_fn(DefinitionBase* __this, float* value);
void DefinitionBase__add_Changed_fn(DefinitionBase* __this, uDelegate* value);
void DefinitionBase__remove_Changed_fn(DefinitionBase* __this, uDelegate* value);
void DefinitionBase__Copy_fn(DefinitionBase* __this, uType* __type, DefinitionBase* copy, int* creation);
void DefinitionBase__get_Extent_fn(DefinitionBase* __this, float* __retval);
void DefinitionBase__set_Extent_fn(DefinitionBase* __this, float* value);
void DefinitionBase__get_IsImplied_fn(DefinitionBase* __this, bool* __retval);
void DefinitionBase__get_Metric_fn(DefinitionBase* __this, int* __retval);
void DefinitionBase__set_Metric_fn(DefinitionBase* __this, int* value);
void DefinitionBase__OnChanged_fn(DefinitionBase* __this);
void DefinitionBase__Parse_fn(uType* __type, uString* data, DefinitionBase** __retval);
void DefinitionBase__Parse1_fn(uType* __type, uString* data, uObject* output);
void DefinitionBase__Serialize_fn(DefinitionBase* __this, uString** __retval);
void DefinitionBase__Serialize1_fn(uType* __type, uObject* columns, uString** __retval);
void DefinitionBase__get_UsesDefault_fn(DefinitionBase* __this, bool* __retval);

struct DefinitionBase : ::g::Uno::UX::PropertyObject
{
    float _actualOffset;
    float _extent;
    int _metric;
    float ActualExtent;
    int Creation;
    bool HasActualExtent;
    uStrong<uDelegate*> Changed1;

    void ctor_1();
    void ctor_2(float extent, int metric);
    void ctor_3(DefinitionBase* copy, int creation);
    float ActualOffset();
    void ActualOffset(float value);
    void add_Changed(uDelegate* value);
    void remove_Changed(uDelegate* value);
    void Copy(uType* __type, DefinitionBase* copy, int creation);
    float Extent();
    void Extent(float value);
    bool IsImplied();
    int Metric();
    void Metric(int value);
    void OnChanged();
    uString* Serialize();
    bool UsesDefault();
    static DefinitionBase* Parse(uType* __type, uString* data);
    static void Parse1(uType* __type, uString* data, uObject* output);
    static uString* Serialize1(uType* __type, uObject* columns);
};
// }

}}} // ::g::Fuse::Layouts
