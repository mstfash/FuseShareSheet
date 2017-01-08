// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Panels/0.42.4/layouts/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Layouts.DefinitionBase.h>
namespace g{namespace Fuse{namespace Layouts{struct Row;}}}

namespace g{
namespace Fuse{
namespace Layouts{

// public sealed class Row :1007
// {
uType* Row_typeof();
void Row__ctor_4_fn(Row* __this);
void Row__ctor_5_fn(Row* __this, float* height, int* metric);
void Row__ctor_6_fn(Row* __this, Row* copy, int* creation);
void Row__get_Height_fn(Row* __this, float* __retval);
void Row__set_Height_fn(Row* __this, float* value);
void Row__get_HeightMetric_fn(Row* __this, int* __retval);
void Row__set_HeightMetric_fn(Row* __this, int* value);
void Row__New2_fn(Row** __retval);
void Row__New3_fn(float* height, int* metric, Row** __retval);
void Row__New4_fn(Row* copy, int* creation, Row** __retval);

struct Row : ::g::Fuse::Layouts::DefinitionBase
{
    void ctor_4();
    void ctor_5(float height, int metric);
    void ctor_6(Row* copy, int creation);
    float Height();
    void Height(float value);
    int HeightMetric();
    void HeightMetric(int value);
    static Row* New2();
    static Row* New3(float height, int metric);
    static Row* New4(Row* copy, int creation);
};
// }

}}} // ::g::Fuse::Layouts
