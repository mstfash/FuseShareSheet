// This file was generated based on '/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Panels/0.42.4/layouts/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Layouts.DefinitionBase.h>
namespace g{namespace Fuse{namespace Layouts{struct Column;}}}

namespace g{
namespace Fuse{
namespace Layouts{

// public sealed class Column :982
// {
uType* Column_typeof();
void Column__ctor_4_fn(Column* __this);
void Column__ctor_5_fn(Column* __this, float* width, int* metric);
void Column__ctor_6_fn(Column* __this, Column* copy, int* creation);
void Column__New2_fn(Column** __retval);
void Column__New3_fn(float* width, int* metric, Column** __retval);
void Column__New4_fn(Column* copy, int* creation, Column** __retval);
void Column__get_Width_fn(Column* __this, float* __retval);
void Column__set_Width_fn(Column* __this, float* value);
void Column__get_WidthMetric_fn(Column* __this, int* __retval);
void Column__set_WidthMetric_fn(Column* __this, int* value);

struct Column : ::g::Fuse::Layouts::DefinitionBase
{
    void ctor_4();
    void ctor_5(float width, int metric);
    void ctor_6(Column* copy, int creation);
    float Width();
    void Width(float value);
    int WidthMetric();
    void WidthMetric(int value);
    static Column* New2();
    static Column* New3(float width, int metric);
    static Column* New4(Column* copy, int creation);
};
// }

}}} // ::g::Fuse::Layouts
