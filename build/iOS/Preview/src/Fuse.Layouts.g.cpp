// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.LayoutControl.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.AlignmentHelpers.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.SimpleAlignment.h>
#include <Fuse.InvalidateLayoutReason.h>
#include <Fuse.Layer.h>
#include <Fuse.LayoutDependent.h>
#include <Fuse.LayoutParams.h>
#include <Fuse.LayoutRole.h>
#include <Fuse.Layouts.CircleLayout.h>
#include <Fuse.Layouts.Column.h>
#include <Fuse.Layouts.ColumnLayout.h>
#include <Fuse.Layouts.ColumnLayoutSizing.h>
#include <Fuse.Layouts.DefaultLayout.h>
#include <Fuse.Layouts.DefinitionBase.CreationType.h>
#include <Fuse.Layouts.DefinitionBase.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Layouts.DockLayout.h>
#include <Fuse.Layouts.FlowDirection.h>
#include <Fuse.Layouts.GridChildOrder.h>
#include <Fuse.Layouts.GridLayout.h>
#include <Fuse.Layouts.Layout.h>
#include <Fuse.Layouts.Layouts.h>
#include <Fuse.Layouts.Metric.h>
#include <Fuse.Layouts.Orientation.h>
#include <Fuse.Layouts.Row.h>
#include <Fuse.Layouts.StackLayout.h>
#include <Fuse.Layouts.StackLayoutMode.h>
#include <Fuse.Layouts.WrapLayout.h>
#include <Fuse.Node.h>
#include <Fuse.Properties.h>
#include <Fuse.PropertyHandle.h>
#include <Fuse.Visual.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.Char.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.IListExtensions.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.ObservableList-1.h>
#include <Uno.Delegate.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Vector.h>
static uString* STRINGS[10];
static uType* TYPES[52];

namespace g{
namespace Fuse{
namespace Layouts{

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Panels/0.42.4/layouts/$.uno
// -------------------------------------------------------------------------------------------------------

// public sealed class CircleLayout :34
// {
static void CircleLayout_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[1] = ::g::Fuse::Visual_typeof();
    ::TYPES[2] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetFields(2,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Layouts::CircleLayout, _endAngle), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Layouts::CircleLayout, _itemSpacing), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Layouts::CircleLayout, _radius), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Layouts::CircleLayout, _startAngle), 0);
    type->Reflection.SetFunctions(9,
        new uFunction("get_EndAngleDegrees", NULL, (void*)CircleLayout__get_EndAngleDegrees_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_EndAngleDegrees", NULL, (void*)CircleLayout__set_EndAngleDegrees_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_ItemSpacingDegrees", NULL, (void*)CircleLayout__get_ItemSpacingDegrees_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_ItemSpacingDegrees", NULL, (void*)CircleLayout__set_ItemSpacingDegrees_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)CircleLayout__New2_fn, 0, true, type, 0),
        new uFunction("get_Radius", NULL, (void*)CircleLayout__get_Radius_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Radius", NULL, (void*)CircleLayout__set_Radius_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_StartAngleDegrees", NULL, (void*)CircleLayout__get_StartAngleDegrees_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_StartAngleDegrees", NULL, (void*)CircleLayout__set_StartAngleDegrees_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
}

::g::Fuse::Layouts::Layout_type* CircleLayout_typeof()
{
    static uSStrong< ::g::Fuse::Layouts::Layout_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Layouts::Layout_typeof();
    options.FieldCount = 6;
    options.ObjectSize = sizeof(CircleLayout);
    options.TypeSize = sizeof(::g::Fuse::Layouts::Layout_type);
    type = (::g::Fuse::Layouts::Layout_type*)uClassType::New("Fuse.Layouts.CircleLayout", options);
    type->fp_build_ = CircleLayout_build;
    type->fp_ctor_ = (void*)CircleLayout__New2_fn;
    type->fp_ArrangePaddingBox = (void(*)(::g::Fuse::Layouts::Layout*, uObject*, ::g::Uno::Float4*, ::g::Fuse::LayoutParams*))CircleLayout__ArrangePaddingBox_fn;
    type->fp_GetContentSize = (void(*)(::g::Fuse::Layouts::Layout*, uObject*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))CircleLayout__GetContentSize_fn;
    return type;
}

// public generated CircleLayout() :34
void CircleLayout__ctor_2_fn(CircleLayout* __this)
{
    __this->ctor_2();
}

// internal override sealed void ArrangePaddingBox(Uno.Collections.IList<Fuse.Node> elements, float4 padding, Fuse.LayoutParams lp) :114
void CircleLayout__ArrangePaddingBox_fn(CircleLayout* __this, uObject* elements, ::g::Uno::Float4* padding, ::g::Fuse::LayoutParams* lp)
{
    uStackFrame __("Fuse.Layouts.CircleLayout", "ArrangePaddingBox(Uno.Collections.IList<Fuse.Node>,float4,Fuse.LayoutParams)");
    ::g::Fuse::LayoutParams lp_ = *lp;
    ::g::Uno::Float4 padding_ = *padding;
    ::g::Fuse::Node* ret2;
    ::g::Fuse::Node* ret3;
    ::g::Fuse::LayoutParams nlp = lp_.CloneAndDerive();
    nlp.RemoveSize1(padding_);
    int c = 0;

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(elements), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/])); ++i)
    {
        ::g::Fuse::Visual* e = uAs< ::g::Fuse::Visual*>((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(elements), ::TYPES[2/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret2), ret2), ::TYPES[1/*Fuse.Visual*/]);

        if (e == NULL)
            continue;

        if (__this->ArrangeMarginBoxSpecial(e, padding_, lp_))
            continue;

        c++;
    }

    float angleRange = __this->_endAngle - __this->_startAngle;
    float step = angleRange / (float)c;
    float arcSize = (step - __this->_itemSpacing) / 2.0f;
    float fitRadius = (__this->Radius() * ::g::Uno::Math::Sin1(arcSize)) / (::g::Uno::Math::Sin1(arcSize) + 1.0f);
    ::g::Uno::Float2 elementRadius = ::g::Uno::Float2__op_Multiply1(::g::Uno::Float2__op_Division1(nlp.Size(), 2.0f), __this->Radius() - fitRadius);
    ::g::Uno::Float2 elementSize = ::g::Uno::Float2__op_Multiply1(nlp.Size(), fitRadius);
    float angle = __this->_startAngle;
    nlp.SetSize(elementSize, true, true);

    for (int i1 = 0; i1 < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(elements), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/])); ++i1)
    {
        ::g::Fuse::Visual* e1 = uAs< ::g::Fuse::Visual*>((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(elements), ::TYPES[2/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i1), &ret3), ret3), ::TYPES[1/*Fuse.Visual*/]);

        if (!__this->AffectsLayout(e1))
            continue;

        float x = (::g::Uno::Math::Cos1(angle) * elementRadius.X) + (lp_.Size().X / 2.0f);
        float y = (::g::Uno::Math::Sin1(angle) * elementRadius.Y) + (lp_.Size().Y / 2.0f);
        ::g::Uno::Float2 p = ::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__op_Addition2(::g::Uno::Float2__New2(padding_.X, padding_.Y), ::g::Uno::Float2__New2(x, y)), ::g::Uno::Float2__op_Division1(elementSize, 2.0f));
        uPtr(e1)->ArrangeMarginBox(p, nlp);
        angle = angle + step;
    }
}

// public float get_EndAngleDegrees() :94
void CircleLayout__get_EndAngleDegrees_fn(CircleLayout* __this, float* __retval)
{
    *__retval = __this->EndAngleDegrees();
}

// public void set_EndAngleDegrees(float value) :95
void CircleLayout__set_EndAngleDegrees_fn(CircleLayout* __this, float* value)
{
    __this->EndAngleDegrees(*value);
}

// internal override sealed float2 GetContentSize(Uno.Collections.IList<Fuse.Node> elements, Fuse.LayoutParams lp) :102
void CircleLayout__GetContentSize_fn(CircleLayout* __this, uObject* elements, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    return *__retval = ::g::Uno::Float2__New1(0.0f), void();
}

// public float get_ItemSpacingDegrees() :57
void CircleLayout__get_ItemSpacingDegrees_fn(CircleLayout* __this, float* __retval)
{
    *__retval = __this->ItemSpacingDegrees();
}

// public void set_ItemSpacingDegrees(float value) :58
void CircleLayout__set_ItemSpacingDegrees_fn(CircleLayout* __this, float* value)
{
    __this->ItemSpacingDegrees(*value);
}

// public generated CircleLayout New() :34
void CircleLayout__New2_fn(CircleLayout** __retval)
{
    *__retval = CircleLayout::New2();
}

// public float get_Radius() :41
void CircleLayout__get_Radius_fn(CircleLayout* __this, float* __retval)
{
    *__retval = __this->Radius();
}

// public void set_Radius(float value) :42
void CircleLayout__set_Radius_fn(CircleLayout* __this, float* value)
{
    __this->Radius(*value);
}

// public float get_StartAngleDegrees() :76
void CircleLayout__get_StartAngleDegrees_fn(CircleLayout* __this, float* __retval)
{
    *__retval = __this->StartAngleDegrees();
}

// public void set_StartAngleDegrees(float value) :77
void CircleLayout__set_StartAngleDegrees_fn(CircleLayout* __this, float* value)
{
    __this->StartAngleDegrees(*value);
}

// public generated CircleLayout() [instance] :34
void CircleLayout::ctor_2()
{
    _radius = 1.0f;
    _itemSpacing = 0.0f;
    _startAngle = 0.0f;
    _endAngle = 6.28318548f;
    ctor_1();
}

// public float get_EndAngleDegrees() [instance] :94
float CircleLayout::EndAngleDegrees()
{
    return ::g::Uno::Math::RadiansToDegrees1(_endAngle);
}

// public void set_EndAngleDegrees(float value) [instance] :95
void CircleLayout::EndAngleDegrees(float value)
{
    uStackFrame __("Fuse.Layouts.CircleLayout", "set_EndAngleDegrees(float)");
    _endAngle = ::g::Uno::Math::DegreesToRadians1(value);
    InvalidateLayout();
}

// public float get_ItemSpacingDegrees() [instance] :57
float CircleLayout::ItemSpacingDegrees()
{
    return ::g::Uno::Math::RadiansToDegrees1(_itemSpacing);
}

// public void set_ItemSpacingDegrees(float value) [instance] :58
void CircleLayout::ItemSpacingDegrees(float value)
{
    uStackFrame __("Fuse.Layouts.CircleLayout", "set_ItemSpacingDegrees(float)");
    _itemSpacing = ::g::Uno::Math::DegreesToRadians1(value);
    InvalidateLayout();
}

// public float get_Radius() [instance] :41
float CircleLayout::Radius()
{
    return _radius;
}

// public void set_Radius(float value) [instance] :42
void CircleLayout::Radius(float value)
{
    uStackFrame __("Fuse.Layouts.CircleLayout", "set_Radius(float)");
    _radius = value;
    InvalidateLayout();
}

// public float get_StartAngleDegrees() [instance] :76
float CircleLayout::StartAngleDegrees()
{
    return ::g::Uno::Math::RadiansToDegrees1(_startAngle);
}

// public void set_StartAngleDegrees(float value) [instance] :77
void CircleLayout::StartAngleDegrees(float value)
{
    uStackFrame __("Fuse.Layouts.CircleLayout", "set_StartAngleDegrees(float)");
    _startAngle = ::g::Uno::Math::DegreesToRadians1(value);
    InvalidateLayout();
}

// public generated CircleLayout New() [static] :34
CircleLayout* CircleLayout::New2()
{
    CircleLayout* obj1 = (CircleLayout*)uNew(CircleLayout_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Panels/0.42.4/layouts/$.uno
// -------------------------------------------------------------------------------------------------------

// public sealed class Column :982
// {
static void Column_build(uType* type)
{
    type->SetFields(8);
    type->Reflection.SetFunctions(6,
        new uFunction(".ctor", NULL, (void*)Column__New2_fn, 0, true, type, 0),
        new uFunction(".ctor", NULL, (void*)Column__New3_fn, 0, true, type, 2, ::g::Uno::Float_typeof(), ::g::Fuse::Layouts::Metric_typeof()),
        new uFunction("get_Width", NULL, (void*)Column__get_Width_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Width", NULL, (void*)Column__set_Width_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_WidthMetric", NULL, (void*)Column__get_WidthMetric_fn, 0, false, ::g::Fuse::Layouts::Metric_typeof(), 0),
        new uFunction("set_WidthMetric", NULL, (void*)Column__set_WidthMetric_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Layouts::Metric_typeof()));
}

uType* Column_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Layouts::DefinitionBase_typeof();
    options.FieldCount = 8;
    options.ObjectSize = sizeof(Column);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Layouts.Column", options);
    type->fp_build_ = Column_build;
    type->fp_ctor_ = (void*)Column__New2_fn;
    return type;
}

// public Column() :984
void Column__ctor_4_fn(Column* __this)
{
    __this->ctor_4();
}

// public Column(float width, Fuse.Layouts.Metric metric) :986
void Column__ctor_5_fn(Column* __this, float* width, int* metric)
{
    __this->ctor_5(*width, *metric);
}

// private Column(Fuse.Layouts.Column copy, Fuse.Layouts.DefinitionBase.CreationType creation) :989
void Column__ctor_6_fn(Column* __this, Column* copy, int* creation)
{
    __this->ctor_6(copy, *creation);
}

// public Column New() :984
void Column__New2_fn(Column** __retval)
{
    *__retval = Column::New2();
}

// public Column New(float width, Fuse.Layouts.Metric metric) :986
void Column__New3_fn(float* width, int* metric, Column** __retval)
{
    *__retval = Column::New3(*width, *metric);
}

// private Column New(Fuse.Layouts.Column copy, Fuse.Layouts.DefinitionBase.CreationType creation) :989
void Column__New4_fn(Column* copy, int* creation, Column** __retval)
{
    *__retval = Column::New4(copy, *creation);
}

// public float get_Width() :1000
void Column__get_Width_fn(Column* __this, float* __retval)
{
    *__retval = __this->Width();
}

// public void set_Width(float value) :1001
void Column__set_Width_fn(Column* __this, float* value)
{
    __this->Width(*value);
}

// public Fuse.Layouts.Metric get_WidthMetric() :994
void Column__get_WidthMetric_fn(Column* __this, int* __retval)
{
    *__retval = __this->WidthMetric();
}

// public void set_WidthMetric(Fuse.Layouts.Metric value) :995
void Column__set_WidthMetric_fn(Column* __this, int* value)
{
    __this->WidthMetric(*value);
}

// public Column() [instance] :984
void Column::ctor_4()
{
    ctor_1();
}

// public Column(float width, Fuse.Layouts.Metric metric) [instance] :986
void Column::ctor_5(float width, int metric)
{
    ctor_2(width, metric);
}

// private Column(Fuse.Layouts.Column copy, Fuse.Layouts.DefinitionBase.CreationType creation) [instance] :989
void Column::ctor_6(Column* copy, int creation)
{
    ctor_3(copy, creation);
}

// public float get_Width() [instance] :1000
float Column::Width()
{
    return Extent();
}

// public void set_Width(float value) [instance] :1001
void Column::Width(float value)
{
    Extent(value);
}

// public Fuse.Layouts.Metric get_WidthMetric() [instance] :994
int Column::WidthMetric()
{
    return Metric();
}

// public void set_WidthMetric(Fuse.Layouts.Metric value) [instance] :995
void Column::WidthMetric(int value)
{
    Metric(value);
}

// public Column New() [static] :984
Column* Column::New2()
{
    Column* obj1 = (Column*)uNew(Column_typeof());
    obj1->ctor_4();
    return obj1;
}

// public Column New(float width, Fuse.Layouts.Metric metric) [static] :986
Column* Column::New3(float width, int metric)
{
    Column* obj2 = (Column*)uNew(Column_typeof());
    obj2->ctor_5(width, metric);
    return obj2;
}

// private Column New(Fuse.Layouts.Column copy, Fuse.Layouts.DefinitionBase.CreationType creation) [static] :989
Column* Column::New4(Column* copy, int creation)
{
    Column* obj3 = (Column*)uNew(Column_typeof());
    obj3->ctor_6(copy, creation);
    return obj3;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Panels/0.42.4/layouts/$.uno
// -------------------------------------------------------------------------------------------------------

// public sealed class ColumnLayout :184
// {
static void ColumnLayout_build(uType* type)
{
    ::TYPES[3] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[5] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[1] = ::g::Fuse::Visual_typeof();
    ::TYPES[6] = ::g::Uno::Float_typeof()->Array();
    type->SetFields(2,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Layouts::ColumnLayout, _columnCount), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Layouts::ColumnLayout, _columnSize), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Layouts::ColumnLayout, _columnSpacing), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Layouts::ColumnLayout, _hasColumnCount), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Layouts::ColumnLayout, _hasColumnSize), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Layouts::ColumnLayout, _itemSpacing), 0,
        ::g::Fuse::Layouts::Orientation_typeof(), offsetof(::g::Fuse::Layouts::ColumnLayout, _orientation), 0,
        ::g::Fuse::Layouts::ColumnLayoutSizing_typeof(), offsetof(::g::Fuse::Layouts::ColumnLayout, _sizing), 0);
    type->Reflection.SetFunctions(13,
        new uFunction("get_ColumnCount", NULL, (void*)ColumnLayout__get_ColumnCount_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_ColumnCount", NULL, (void*)ColumnLayout__set_ColumnCount_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("get_ColumnSize", NULL, (void*)ColumnLayout__get_ColumnSize_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_ColumnSize", NULL, (void*)ColumnLayout__set_ColumnSize_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_ColumnSpacing", NULL, (void*)ColumnLayout__get_ColumnSpacing_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_ColumnSpacing", NULL, (void*)ColumnLayout__set_ColumnSpacing_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_ItemSpacing", NULL, (void*)ColumnLayout__get_ItemSpacing_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_ItemSpacing", NULL, (void*)ColumnLayout__set_ItemSpacing_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)ColumnLayout__New2_fn, 0, true, type, 0),
        new uFunction("get_Orientation", NULL, (void*)ColumnLayout__get_Orientation_fn, 0, false, ::g::Fuse::Layouts::Orientation_typeof(), 0),
        new uFunction("set_Orientation", NULL, (void*)ColumnLayout__set_Orientation_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Layouts::Orientation_typeof()),
        new uFunction("get_Sizing", NULL, (void*)ColumnLayout__get_Sizing_fn, 0, false, ::g::Fuse::Layouts::ColumnLayoutSizing_typeof(), 0),
        new uFunction("set_Sizing", NULL, (void*)ColumnLayout__set_Sizing_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Layouts::ColumnLayoutSizing_typeof()));
}

::g::Fuse::Layouts::Layout_type* ColumnLayout_typeof()
{
    static uSStrong< ::g::Fuse::Layouts::Layout_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Layouts::Layout_typeof();
    options.FieldCount = 10;
    options.ObjectSize = sizeof(ColumnLayout);
    options.TypeSize = sizeof(::g::Fuse::Layouts::Layout_type);
    type = (::g::Fuse::Layouts::Layout_type*)uClassType::New("Fuse.Layouts.ColumnLayout", options);
    type->fp_build_ = ColumnLayout_build;
    type->fp_ctor_ = (void*)ColumnLayout__New2_fn;
    type->fp_ArrangePaddingBox = (void(*)(::g::Fuse::Layouts::Layout*, uObject*, ::g::Uno::Float4*, ::g::Fuse::LayoutParams*))ColumnLayout__ArrangePaddingBox_fn;
    type->fp_GetContentSize = (void(*)(::g::Fuse::Layouts::Layout*, uObject*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))ColumnLayout__GetContentSize_fn;
    return type;
}

// public generated ColumnLayout() :184
void ColumnLayout__ctor_2_fn(ColumnLayout* __this)
{
    __this->ctor_2();
}

// private float2 Arrange(Uno.Collections.IList<Fuse.Node> visuals, Fuse.LayoutParams lp, [bool doArrange], [float4 padding]) :387
void ColumnLayout__Arrange_fn(ColumnLayout* __this, uObject* visuals, ::g::Fuse::LayoutParams* lp, bool* doArrange, ::g::Uno::Float4* padding, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Arrange(visuals, *lp, *doArrange, *padding);
}

// internal override sealed void ArrangePaddingBox(Uno.Collections.IList<Fuse.Node> visuals, float4 padding, Fuse.LayoutParams lp) :382
void ColumnLayout__ArrangePaddingBox_fn(ColumnLayout* __this, uObject* visuals, ::g::Uno::Float4* padding, ::g::Fuse::LayoutParams* lp)
{
    uStackFrame __("Fuse.Layouts.ColumnLayout", "ArrangePaddingBox(Uno.Collections.IList<Fuse.Node>,float4,Fuse.LayoutParams)");
    ::g::Fuse::LayoutParams lp_ = *lp;
    ::g::Uno::Float4 padding_ = *padding;
    __this->Arrange(visuals, lp_, true, padding_);
}

// public int get_ColumnCount() :232
void ColumnLayout__get_ColumnCount_fn(ColumnLayout* __this, int* __retval)
{
    *__retval = __this->ColumnCount();
}

// public void set_ColumnCount(int value) :233
void ColumnLayout__set_ColumnCount_fn(ColumnLayout* __this, int* value)
{
    __this->ColumnCount(*value);
}

// public float get_ColumnSize() :268
void ColumnLayout__get_ColumnSize_fn(ColumnLayout* __this, float* __retval)
{
    *__retval = __this->ColumnSize();
}

// public void set_ColumnSize(float value) :269
void ColumnLayout__set_ColumnSize_fn(ColumnLayout* __this, float* value)
{
    __this->ColumnSize(*value);
}

// public float get_ColumnSpacing() :287
void ColumnLayout__get_ColumnSpacing_fn(ColumnLayout* __this, float* __retval)
{
    *__retval = __this->ColumnSpacing();
}

// public void set_ColumnSpacing(float value) :288
void ColumnLayout__set_ColumnSpacing_fn(ColumnLayout* __this, float* value)
{
    __this->ColumnSpacing(*value);
}

// internal override sealed float2 GetContentSize(Uno.Collections.IList<Fuse.Node> visuals, Fuse.LayoutParams lp) :377
void ColumnLayout__GetContentSize_fn(ColumnLayout* __this, uObject* visuals, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Layouts.ColumnLayout", "GetContentSize(Uno.Collections.IList<Fuse.Node>,Fuse.LayoutParams)");
    ::g::Fuse::LayoutParams lp_ = *lp;
    return *__retval = __this->Arrange(visuals, lp_, false, ::g::Uno::Float4__New1(0.0f)), void();
}

// public float get_ItemSpacing() :305
void ColumnLayout__get_ItemSpacing_fn(ColumnLayout* __this, float* __retval)
{
    *__retval = __this->ItemSpacing();
}

// public void set_ItemSpacing(float value) :306
void ColumnLayout__set_ItemSpacing_fn(ColumnLayout* __this, float* value)
{
    __this->ItemSpacing(*value);
}

// private int LeastAt(float[] c) :352
void ColumnLayout__LeastAt_fn(ColumnLayout* __this, uArray* c, int* __retval)
{
    *__retval = __this->LeastAt(c);
}

// private float Max(float[] c) :369
void ColumnLayout__Max_fn(ColumnLayout* __this, uArray* c, float* __retval)
{
    *__retval = __this->Max(c);
}

// public generated ColumnLayout New() :184
void ColumnLayout__New2_fn(ColumnLayout** __retval)
{
    *__retval = ColumnLayout::New2();
}

// public Fuse.Layouts.Orientation get_Orientation() :203
void ColumnLayout__get_Orientation_fn(ColumnLayout* __this, int* __retval)
{
    *__retval = __this->Orientation();
}

// public void set_Orientation(Fuse.Layouts.Orientation value) :204
void ColumnLayout__set_Orientation_fn(ColumnLayout* __this, int* value)
{
    __this->Orientation(*value);
}

// public Fuse.Layouts.ColumnLayoutSizing get_Sizing() :341
void ColumnLayout__get_Sizing_fn(ColumnLayout* __this, int* __retval)
{
    *__retval = __this->Sizing();
}

// public void set_Sizing(Fuse.Layouts.ColumnLayoutSizing value) :342
void ColumnLayout__set_Sizing_fn(ColumnLayout* __this, int* value)
{
    __this->Sizing(*value);
}

// public generated ColumnLayout() [instance] :184
void ColumnLayout::ctor_2()
{
    _orientation = 1;
    _columnCount = 2;
    _columnSpacing = 0.0f;
    _itemSpacing = 0.0f;
    ctor_1();
}

// private float2 Arrange(Uno.Collections.IList<Fuse.Node> visuals, Fuse.LayoutParams lp, [bool doArrange], [float4 padding]) [instance] :387
::g::Uno::Float2 ColumnLayout::Arrange(uObject* visuals, ::g::Fuse::LayoutParams lp, bool doArrange, ::g::Uno::Float4 padding)
{
    uStackFrame __("Fuse.Layouts.ColumnLayout", "Arrange(Uno.Collections.IList<Fuse.Node>,Fuse.LayoutParams,[bool],[float4])");
    ::g::Fuse::Node* ret4;
    ::g::Fuse::Node* ret5;
    bool vert = Orientation() == 1;
    int columnCount = ColumnCount();
    float columnSize = ColumnSize();
    float columnSpace = columnSize + ColumnSpacing();
    bool useColumnSize = _hasColumnSize;
    ::g::Uno::Float2 avail = lp.GetAvailableSize();
    avail = ::g::Uno::Float2__op_Subtraction2(avail, ::g::Uno::Float2__op_Addition2(::g::Uno::Float2__New2(padding.X, padding.Y), ::g::Uno::Float2__New2(padding.Z, padding.W)));

    if (!useColumnSize && ((vert && !lp.HasX()) || (!vert && !lp.HasY())))
    {
        ::g::Uno::Float2 mx = ::g::Uno::Float2__New1(0.0f);

        for (uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(visuals), ::TYPES[3/*Uno.Collections.IEnumerable<Fuse.Node>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[4/*Uno.Collections.IEnumerator*/])); )
        {
            ::g::Fuse::Node* n = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[5/*Uno.Collections.IEnumerator<Fuse.Node>*/]), &ret4), ret4);
            ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(n, ::TYPES[1/*Fuse.Visual*/]);

            if (!AffectsLayout(v))
                continue;

            ::g::Uno::Float2 c = uPtr(v)->GetMarginSize(::g::Fuse::LayoutParams__CreateEmpty());
            mx = ::g::Uno::Math::Max3(mx, c);
        }

        columnSize = vert ? mx.X : mx.Y;
        columnSpace = columnSize + ColumnSpacing();
        useColumnSize = true;
    }

    if (useColumnSize)
    {
        if (!_hasColumnCount)
        {
            if (vert)
                columnCount = (int)::g::Uno::Math::Floor1((avail.X + ColumnSpacing()) / columnSpace);
            else
                columnCount = (int)::g::Uno::Math::Floor1((avail.Y + ColumnSpacing()) / columnSpace);
        }

        if (Sizing() == 1)
        {
            columnSpace = ((vert ? avail.X : avail.Y) + ColumnSpacing()) / (float)columnCount;
            columnSize = columnSpace - ColumnSpacing();
        }
    }
    else
    {
        columnSpace = ((vert ? avail.X : avail.Y) + ColumnSpacing()) / (float)columnCount;
        columnSize = columnSpace - ColumnSpacing();
    }

    if (columnCount < 1)
        columnCount = 1;

    uArray* at = uArray::New(::TYPES[6/*float[]*/], columnCount);

    for (uObject* enum2 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(visuals), ::TYPES[3/*Uno.Collections.IEnumerable<Fuse.Node>*/])); ::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum2), ::TYPES[4/*Uno.Collections.IEnumerator*/])); )
    {
        ::g::Fuse::Node* n1 = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum2), ::TYPES[5/*Uno.Collections.IEnumerator<Fuse.Node>*/]), &ret5), ret5);
        ::g::Fuse::Visual* v1 = uAs< ::g::Fuse::Visual*>(n1, ::TYPES[1/*Fuse.Visual*/]);

        if (v1 == NULL)
            continue;

        ::g::Uno::Float2 avs = ::g::Uno::Float2__New2(vert ? columnSize : 0.0f, vert ? 0.0f : columnSize);
        int col = LeastAt(at);
        ::g::Uno::Float2 nsz;

        if (uPtr(at)->Item<float>(col) > 0.0f)
            uPtr(at)->Item<float>(col) = uPtr(at)->Item<float>(col) + ItemSpacing();

        if (doArrange)
        {
            if (ArrangeMarginBoxSpecial(v1, padding, lp))
                continue;

            ::g::Uno::Float2 pos = vert ? ::g::Uno::Float2__New2(padding.X + ((float)col * columnSpace), padding.Y + uPtr(at)->Item<float>(col)) : ::g::Uno::Float2__New2(padding.X + uPtr(at)->Item<float>(col), padding.Y + ((float)col * columnSpace));
            nsz = uPtr(v1)->ArrangeMarginBox(pos, ::g::Fuse::LayoutParams__CreateXY(avs, vert, !vert));
        }
        else if (AffectsLayout(v1))
            nsz = uPtr(v1)->GetMarginSize(::g::Fuse::LayoutParams__CreateXY(avs, vert, !vert));
        else
            continue;

        uPtr(at)->Item<float>(col) = uPtr(at)->Item<float>(col) + (vert ? nsz.Y : nsz.X);
    }

    if (doArrange)
    {
        if (!_hasColumnSize)
            _columnSize = columnSize;

        if (!_hasColumnCount)
            _columnCount = columnCount;
    }

    float size = ((float)columnCount * columnSpace) - ColumnSpacing();
    ::g::Uno::Float2 q = vert ? ::g::Uno::Float2__New2(size, Max(at)) : ::g::Uno::Float2__New2(Max(at), size);
    return q;
}

// public int get_ColumnCount() [instance] :232
int ColumnLayout::ColumnCount()
{
    return _columnCount;
}

// public void set_ColumnCount(int value) [instance] :233
void ColumnLayout::ColumnCount(int value)
{
    uStackFrame __("Fuse.Layouts.ColumnLayout", "set_ColumnCount(int)");

    if (!_hasColumnCount || (_columnCount != value))
    {
        _columnCount = value;
        _hasColumnCount = true;
        InvalidateLayout();
    }
}

// public float get_ColumnSize() [instance] :268
float ColumnLayout::ColumnSize()
{
    return _columnSize;
}

// public void set_ColumnSize(float value) [instance] :269
void ColumnLayout::ColumnSize(float value)
{
    uStackFrame __("Fuse.Layouts.ColumnLayout", "set_ColumnSize(float)");

    if (!_hasColumnSize || (_columnSize != value))
    {
        _hasColumnSize = true;
        _columnSize = value;
        InvalidateLayout();
    }
}

// public float get_ColumnSpacing() [instance] :287
float ColumnLayout::ColumnSpacing()
{
    return _columnSpacing;
}

// public void set_ColumnSpacing(float value) [instance] :288
void ColumnLayout::ColumnSpacing(float value)
{
    uStackFrame __("Fuse.Layouts.ColumnLayout", "set_ColumnSpacing(float)");

    if (_columnSpacing != value)
    {
        _columnSpacing = value;
        InvalidateLayout();
    }
}

// public float get_ItemSpacing() [instance] :305
float ColumnLayout::ItemSpacing()
{
    return _itemSpacing;
}

// public void set_ItemSpacing(float value) [instance] :306
void ColumnLayout::ItemSpacing(float value)
{
    uStackFrame __("Fuse.Layouts.ColumnLayout", "set_ItemSpacing(float)");

    if (_itemSpacing != value)
    {
        _itemSpacing = value;
        InvalidateLayout();
    }
}

// private int LeastAt(float[] c) [instance] :352
int ColumnLayout::LeastAt(uArray* c)
{
    uStackFrame __("Fuse.Layouts.ColumnLayout", "LeastAt(float[])");
    float sz = uPtr(c)->Item<float>(0);
    int i = 0;

    for (int j = 1; j < c->Length(); j++)
        if (uPtr(c)->Item<float>(j) < sz)
        {
            sz = uPtr(c)->Item<float>(j);
            i = j;
        }

    return i;
}

// private float Max(float[] c) [instance] :369
float ColumnLayout::Max(uArray* c)
{
    uStackFrame __("Fuse.Layouts.ColumnLayout", "Max(float[])");
    float mx = uPtr(c)->Item<float>(0);

    for (int j = 1; j < c->Length(); j++)
        mx = ::g::Uno::Math::Max1(mx, uPtr(c)->Item<float>(j));

    return mx;
}

// public Fuse.Layouts.Orientation get_Orientation() [instance] :203
int ColumnLayout::Orientation()
{
    return _orientation;
}

// public void set_Orientation(Fuse.Layouts.Orientation value) [instance] :204
void ColumnLayout::Orientation(int value)
{
    uStackFrame __("Fuse.Layouts.ColumnLayout", "set_Orientation(Fuse.Layouts.Orientation)");

    if (_orientation != value)
    {
        _orientation = value;
        InvalidateLayout();
    }
}

// public Fuse.Layouts.ColumnLayoutSizing get_Sizing() [instance] :341
int ColumnLayout::Sizing()
{
    return _sizing;
}

// public void set_Sizing(Fuse.Layouts.ColumnLayoutSizing value) [instance] :342
void ColumnLayout::Sizing(int value)
{
    uStackFrame __("Fuse.Layouts.ColumnLayout", "set_Sizing(Fuse.Layouts.ColumnLayoutSizing)");

    if (_sizing != value)
    {
        _sizing = value;
        InvalidateLayout();
    }
}

// public generated ColumnLayout New() [static] :184
ColumnLayout* ColumnLayout::New2()
{
    ColumnLayout* obj3 = (ColumnLayout*)uNew(ColumnLayout_typeof());
    obj3->ctor_2();
    return obj3;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Panels/0.42.4/layouts/$.uno
// -------------------------------------------------------------------------------------------------------

// public enum ColumnLayoutSizing :164
uEnumType* ColumnLayoutSizing_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Layouts.ColumnLayoutSizing", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Fixed", 0LL,
        "Fill", 1LL);
    return type;
}

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Panels/0.42.4/layouts/$.uno
// -------------------------------------------------------------------------------------------------------

// internal enum DefinitionBase.CreationType :826
uEnumType* DefinitionBase__CreationType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Layouts.DefinitionBase.CreationType", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Explicit", 0LL,
        "Parsed", 1LL,
        "Count", 2LL,
        "Implied", 3LL);
    return type;
}

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Panels/0.42.4/layouts/$.uno
// -------------------------------------------------------------------------------------------------------

// public sealed class DefaultLayout :510
// {
static void DefaultLayout_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[1] = ::g::Fuse::Visual_typeof();
    ::TYPES[2] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetFields(2);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)DefaultLayout__New2_fn, 0, true, type, 0));
}

::g::Fuse::Layouts::Layout_type* DefaultLayout_typeof()
{
    static uSStrong< ::g::Fuse::Layouts::Layout_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Layouts::Layout_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(DefaultLayout);
    options.TypeSize = sizeof(::g::Fuse::Layouts::Layout_type);
    type = (::g::Fuse::Layouts::Layout_type*)uClassType::New("Fuse.Layouts.DefaultLayout", options);
    type->fp_build_ = DefaultLayout_build;
    type->fp_ctor_ = (void*)DefaultLayout__New2_fn;
    type->fp_ArrangePaddingBox = (void(*)(::g::Fuse::Layouts::Layout*, uObject*, ::g::Uno::Float4*, ::g::Fuse::LayoutParams*))DefaultLayout__ArrangePaddingBox_fn;
    type->fp_GetContentSize = (void(*)(::g::Fuse::Layouts::Layout*, uObject*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))DefaultLayout__GetContentSize_fn;
    type->fp_IsMarginBoxDependent = (void(*)(::g::Fuse::Layouts::Layout*, ::g::Fuse::Visual*, int*))DefaultLayout__IsMarginBoxDependent_fn;
    return type;
}

// public generated DefaultLayout() :510
void DefaultLayout__ctor_2_fn(DefaultLayout* __this)
{
    __this->ctor_2();
}

// internal override sealed void ArrangePaddingBox(Uno.Collections.IList<Fuse.Node> elements, float4 padding, Fuse.LayoutParams lp) :551
void DefaultLayout__ArrangePaddingBox_fn(DefaultLayout* __this, uObject* elements, ::g::Uno::Float4* padding, ::g::Fuse::LayoutParams* lp)
{
    uStackFrame __("Fuse.Layouts.DefaultLayout", "ArrangePaddingBox(Uno.Collections.IList<Fuse.Node>,float4,Fuse.LayoutParams)");
    ::g::Fuse::LayoutParams lp_ = *lp;
    ::g::Uno::Float4 padding_ = *padding;
    ::g::Fuse::Node* ret2;
    ::g::Fuse::LayoutParams av = lp_.CloneAndDerive();
    av.RemoveSize(::g::Uno::Float2__op_Addition2(::g::Uno::Float2__New2(padding_.X, padding_.Y), ::g::Uno::Float2__New2(padding_.Z, padding_.W)));

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(elements), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/])); i++)
    {
        ::g::Fuse::Visual* e = uAs< ::g::Fuse::Visual*>((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(elements), ::TYPES[2/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret2), ret2), ::TYPES[1/*Fuse.Visual*/]);

        if (e == NULL)
            continue;

        if (!__this->ArrangeMarginBoxSpecial(e, padding_, lp_))
            uPtr(e)->ArrangeMarginBox(::g::Uno::Float2__New2(padding_.X, padding_.Y), av);
    }
}

// internal override sealed float2 GetContentSize(Uno.Collections.IList<Fuse.Node> elements, Fuse.LayoutParams lp) :512
void DefaultLayout__GetContentSize_fn(DefaultLayout* __this, uObject* elements, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Layouts.DefaultLayout", "GetContentSize(Uno.Collections.IList<Fuse.Node>,Fuse.LayoutParams)");
    ::g::Fuse::LayoutParams lp_ = *lp;
    ::g::Uno::Float2 size = __this->GetElementsSize(elements, lp_);
    return *__retval = size, void();
}

// private float2 GetElementsSize(Uno.Collections.IList<Fuse.Node> elements, Fuse.LayoutParams lp) :538
void DefaultLayout__GetElementsSize_fn(DefaultLayout* __this, uObject* elements, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetElementsSize(elements, *lp);
}

// internal override sealed Fuse.LayoutDependent IsMarginBoxDependent(Fuse.Visual child) :566
void DefaultLayout__IsMarginBoxDependent_fn(DefaultLayout* __this, ::g::Fuse::Visual* child, int* __retval)
{
    return *__retval = 2, void();
}

// public generated DefaultLayout New() :510
void DefaultLayout__New2_fn(DefaultLayout** __retval)
{
    *__retval = DefaultLayout::New2();
}

// public generated DefaultLayout() [instance] :510
void DefaultLayout::ctor_2()
{
    ctor_1();
}

// private float2 GetElementsSize(Uno.Collections.IList<Fuse.Node> elements, Fuse.LayoutParams lp) [instance] :538
::g::Uno::Float2 DefaultLayout::GetElementsSize(uObject* elements, ::g::Fuse::LayoutParams lp)
{
    uStackFrame __("Fuse.Layouts.DefaultLayout", "GetElementsSize(Uno.Collections.IList<Fuse.Node>,Fuse.LayoutParams)");
    ::g::Fuse::Node* ret3;
    ::g::Uno::Float2 ds = ::g::Uno::Float2__New1(0.0f);

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(elements), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/])); i++)
    {
        ::g::Fuse::Visual* e = uAs< ::g::Fuse::Visual*>((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(elements), ::TYPES[2/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret3), ret3), ::TYPES[1/*Fuse.Visual*/]);

        if (!AffectsLayout(e))
            continue;

        ds = ::g::Uno::Math::Max3(ds, uPtr(e)->GetMarginSize(lp));
    }

    return ds;
}

// public generated DefaultLayout New() [static] :510
DefaultLayout* DefaultLayout::New2()
{
    DefaultLayout* obj1 = (DefaultLayout*)uNew(DefaultLayout_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Panels/0.42.4/layouts/$.uno
// -------------------------------------------------------------------------------------------------------

// public abstract class DefinitionBase :790
// {
static void DefinitionBase_build(uType* type)
{
    ::STRINGS[0] = uString::Const("auto");
    ::STRINGS[1] = uString::Const("default");
    ::STRINGS[2] = uString::Const("*");
    ::STRINGS[3] = uString::Const("");
    ::STRINGS[4] = uString::Const(", ");
    ::TYPES[7] = type->MakeMethod(0/*Copy<Fuse.Layouts.DefinitionBase>*/, type, NULL);
    ::TYPES[8] = ::g::Uno::Exception_typeof();
    ::TYPES[9] = ::g::Uno::Collections::ICollection_typeof();
    ::TYPES[10] = ::g::Uno::Char_typeof()->Array();
    ::TYPES[11] = ::g::Uno::Float_typeof();
    ::TYPES[12] = ::g::Uno::Collections::IList_typeof();
    ::TYPES[13] = ::g::Uno::Action_typeof();
    type->MethodTypes[2]->SetPrecalc(
        ::TYPES[9/*Uno.Collections.ICollection`1*/]->MakeType(type->MethodTypes[2]->U(0), NULL),
        type->MakeMethod(1/*Parse<T>*/, type->MethodTypes[2]->U(0), NULL));
    type->MethodTypes[3]->SetPrecalc(
        ::TYPES[9/*Uno.Collections.ICollection`1*/]->MakeType(type->MethodTypes[3]->U(0), NULL),
        ::TYPES[12/*Uno.Collections.IList`1*/]->MakeType(type->MethodTypes[3]->U(0), NULL));
    type->SetFields(1,
        ::TYPES[11/*float*/], offsetof(::g::Fuse::Layouts::DefinitionBase, _actualOffset), 0,
        ::TYPES[11/*float*/], offsetof(::g::Fuse::Layouts::DefinitionBase, _extent), 0,
        ::g::Fuse::Layouts::Metric_typeof(), offsetof(::g::Fuse::Layouts::DefinitionBase, _metric), 0,
        ::TYPES[11/*float*/], offsetof(::g::Fuse::Layouts::DefinitionBase, ActualExtent), 0,
        DefinitionBase__CreationType_typeof(), offsetof(::g::Fuse::Layouts::DefinitionBase, Creation), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Layouts::DefinitionBase, HasActualExtent), 0,
        ::TYPES[13/*Uno.Action*/], offsetof(::g::Fuse::Layouts::DefinitionBase, Changed1), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("get_ActualOffset", NULL, (void*)DefinitionBase__get_ActualOffset_fn, 0, false, ::TYPES[11/*float*/], 0),
        new uFunction("get_Extent", NULL, (void*)DefinitionBase__get_Extent_fn, 0, false, ::TYPES[11/*float*/], 0),
        new uFunction("set_Extent", NULL, (void*)DefinitionBase__set_Extent_fn, 0, false, uVoid_typeof(), 1, ::TYPES[11/*float*/]),
        new uFunction("get_Metric", NULL, (void*)DefinitionBase__get_Metric_fn, 0, false, ::g::Fuse::Layouts::Metric_typeof(), 0),
        new uFunction("set_Metric", NULL, (void*)DefinitionBase__set_Metric_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Layouts::Metric_typeof()));
}

uType* DefinitionBase_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyObject_typeof();
    options.FieldCount = 8;
    options.MethodTypeCount = 4;
    options.ObjectSize = sizeof(DefinitionBase);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Layouts.DefinitionBase", options);
    type->MethodTypes[0] = type->NewMethodType(1, 0);
    type->MethodTypes[1] = type->NewMethodType(1, 0);
    type->MethodTypes[2] = type->NewMethodType(1, 2);
    type->MethodTypes[3] = type->NewMethodType(1, 2);
    type->fp_build_ = DefinitionBase_build;
    return type;
}

// protected DefinitionBase() :795
void DefinitionBase__ctor_1_fn(DefinitionBase* __this)
{
    __this->ctor_1();
}

// protected DefinitionBase(float extent, Fuse.Layouts.Metric metric) :797
void DefinitionBase__ctor_2_fn(DefinitionBase* __this, float* extent, int* metric)
{
    __this->ctor_2(*extent, *metric);
}

// internal DefinitionBase(Fuse.Layouts.DefinitionBase copy, Fuse.Layouts.DefinitionBase.CreationType creation) :803
void DefinitionBase__ctor_3_fn(DefinitionBase* __this, DefinitionBase* copy, int* creation)
{
    __this->ctor_3(copy, *creation);
}

// public float get_ActualOffset() :819
void DefinitionBase__get_ActualOffset_fn(DefinitionBase* __this, float* __retval)
{
    *__retval = __this->ActualOffset();
}

// internal void set_ActualOffset(float value) :820
void DefinitionBase__set_ActualOffset_fn(DefinitionBase* __this, float* value)
{
    __this->ActualOffset(*value);
}

// internal generated void add_Changed(Uno.Action value) :792
void DefinitionBase__add_Changed_fn(DefinitionBase* __this, uDelegate* value)
{
    __this->add_Changed(value);
}

// internal generated void remove_Changed(Uno.Action value) :792
void DefinitionBase__remove_Changed_fn(DefinitionBase* __this, uDelegate* value)
{
    __this->remove_Changed(value);
}

// internal void Copy<T>(T copy, Fuse.Layouts.DefinitionBase.CreationType creation) :808
void DefinitionBase__Copy_fn(DefinitionBase* __this, uType* __type, DefinitionBase* copy, int* creation)
{
    __this->Copy(__type, copy, *creation);
}

// public float get_Extent() :866
void DefinitionBase__get_Extent_fn(DefinitionBase* __this, float* __retval)
{
    *__retval = __this->Extent();
}

// public void set_Extent(float value) :867
void DefinitionBase__set_Extent_fn(DefinitionBase* __this, float* value)
{
    __this->Extent(*value);
}

// internal bool get_IsImplied() :846
void DefinitionBase__get_IsImplied_fn(DefinitionBase* __this, bool* __retval)
{
    *__retval = __this->IsImplied();
}

// public Fuse.Layouts.Metric get_Metric() :852
void DefinitionBase__get_Metric_fn(DefinitionBase* __this, int* __retval)
{
    *__retval = __this->Metric();
}

// public void set_Metric(Fuse.Layouts.Metric value) :853
void DefinitionBase__set_Metric_fn(DefinitionBase* __this, int* value)
{
    __this->Metric(*value);
}

// protected internal void OnChanged() :793
void DefinitionBase__OnChanged_fn(DefinitionBase* __this)
{
    __this->OnChanged();
}

// protected internal static T Parse<T>(string data) :890
void DefinitionBase__Parse_fn(uType* __type, uString* data, DefinitionBase** __retval)
{
    *__retval = DefinitionBase::Parse(__type, data);
}

// protected internal static void Parse<T>(string data, Uno.Collections.IList<T> output) :880
void DefinitionBase__Parse1_fn(uType* __type, uString* data, uObject* output)
{
    DefinitionBase::Parse1(__type, data, output);
}

// internal string Serialize() :932
void DefinitionBase__Serialize_fn(DefinitionBase* __this, uString** __retval)
{
    *__retval = __this->Serialize();
}

// internal static string Serialize<T>(Uno.Collections.IList<T> columns) :943
void DefinitionBase__Serialize1_fn(uType* __type, uObject* columns, uString** __retval)
{
    *__retval = DefinitionBase::Serialize1(__type, columns);
}

// internal bool get_UsesDefault() :842
void DefinitionBase__get_UsesDefault_fn(DefinitionBase* __this, bool* __retval)
{
    *__retval = __this->UsesDefault();
}

// protected DefinitionBase() [instance] :795
void DefinitionBase::ctor_1()
{
    _metric = 1;
    _extent = 1.0f;
    ctor_();
}

// protected DefinitionBase(float extent, Fuse.Layouts.Metric metric) [instance] :797
void DefinitionBase::ctor_2(float extent, int metric)
{
    _metric = 1;
    _extent = 1.0f;
    ctor_();
    _extent = extent;
    _metric = metric;
}

// internal DefinitionBase(Fuse.Layouts.DefinitionBase copy, Fuse.Layouts.DefinitionBase.CreationType creation) [instance] :803
void DefinitionBase::ctor_3(DefinitionBase* copy, int creation)
{
    uStackFrame __("Fuse.Layouts.DefinitionBase", ".ctor(Fuse.Layouts.DefinitionBase,Fuse.Layouts.DefinitionBase.CreationType)");
    _metric = 1;
    _extent = 1.0f;
    ctor_();
    Copy(::TYPES[7/*Fuse.Layouts.DefinitionBase.Copy<Fuse.Layouts.DefinitionBase>*/], copy, creation);
}

// public float get_ActualOffset() [instance] :819
float DefinitionBase::ActualOffset()
{
    return _actualOffset;
}

// internal void set_ActualOffset(float value) [instance] :820
void DefinitionBase::ActualOffset(float value)
{
    _actualOffset = value;
}

// internal generated void add_Changed(Uno.Action value) [instance] :792
void DefinitionBase::add_Changed(uDelegate* value)
{
    uStackFrame __("Fuse.Layouts.DefinitionBase", "add_Changed(Uno.Action)");
    Changed1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Changed1, value), ::TYPES[13/*Uno.Action*/]);
}

// internal generated void remove_Changed(Uno.Action value) [instance] :792
void DefinitionBase::remove_Changed(uDelegate* value)
{
    uStackFrame __("Fuse.Layouts.DefinitionBase", "remove_Changed(Uno.Action)");
    Changed1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Changed1, value), ::TYPES[13/*Uno.Action*/]);
}

// internal void Copy<T>(T copy, Fuse.Layouts.DefinitionBase.CreationType creation) [instance] :808
void DefinitionBase::Copy(uType* __type, DefinitionBase* copy, int creation)
{
    uStackFrame __("Fuse.Layouts.DefinitionBase", "Copy`1(T,Fuse.Layouts.DefinitionBase.CreationType)");
    Metric(uPtr(copy)->Metric());
    Extent(copy->Extent());
    Creation = creation;
}

// public float get_Extent() [instance] :866
float DefinitionBase::Extent()
{
    return _extent;
}

// public void set_Extent(float value) [instance] :867
void DefinitionBase::Extent(float value)
{
    uStackFrame __("Fuse.Layouts.DefinitionBase", "set_Extent(float)");

    if (_extent != value)
    {
        _extent = ::g::Uno::Math::Max1(0.0f, value);
        OnChanged();
    }
}

// internal bool get_IsImplied() [instance] :846
bool DefinitionBase::IsImplied()
{
    return Creation == 3;
}

// public Fuse.Layouts.Metric get_Metric() [instance] :852
int DefinitionBase::Metric()
{
    return _metric;
}

// public void set_Metric(Fuse.Layouts.Metric value) [instance] :853
void DefinitionBase::Metric(int value)
{
    uStackFrame __("Fuse.Layouts.DefinitionBase", "set_Metric(Fuse.Layouts.Metric)");

    if (_metric != value)
    {
        _metric = value;
        OnChanged();
    }
}

// protected internal void OnChanged() [instance] :793
void DefinitionBase::OnChanged()
{
    uStackFrame __("Fuse.Layouts.DefinitionBase", "OnChanged()");

    if (::g::Uno::Delegate::op_Inequality(Changed1, NULL))
        uPtr(Changed1)->InvokeVoid();
}

// internal string Serialize() [instance] :932
uString* DefinitionBase::Serialize()
{
    uStackFrame __("Fuse.Layouts.DefinitionBase", "Serialize()");

    switch (Metric())
    {
        case 2:
            return ::STRINGS[0/*"auto"*/];
        case 1:
            return ::g::Uno::String::op_Addition(uBox(::TYPES[11/*float*/], Extent()), ::STRINGS[2/*"*"*/]);
        case 3:
            return ::STRINGS[1/*"default"*/];
        default:
            return ::g::Uno::Float::ToString(Extent(), ::TYPES[11/*float*/]);
    }
}

// internal bool get_UsesDefault() [instance] :842
bool DefinitionBase::UsesDefault()
{
    return (Creation == 2) || (Creation == 3);
}

// protected internal static T Parse<T>(string data) [static] :890
DefinitionBase* DefinitionBase::Parse(uType* __type, uString* data)
{
    uType* __types[] = {
        __type->U(0),
    };
    uStackFrame __("Fuse.Layouts.DefinitionBase", "Parse`1(string)");

    try
    {
        uString* t = ::g::Uno::String::ToLower(uPtr(::g::Uno::String::Trim(uPtr(data))));
        DefinitionBase* n = (DefinitionBase*)__types[0]->New();
        n->Creation = 1;

        if ((uPtr(t)->Length() > 0) && (uPtr(t)->Item(uPtr(t)->Length() - 1) == '*'))
        {
            uString* k = ::g::Uno::String::Trim(uPtr(::g::Uno::String::Substring1(uPtr(t), 0, uPtr(t)->Length() - 1)));
            uPtr(n)->Extent(::g::Uno::Float::Parse(k));
            n->Metric(1);
        }
        else if (::g::Uno::String::op_Equality(t, ::STRINGS[0/*"auto"*/]))
        {
            uPtr(n)->Extent(1.0f);
            n->Metric(2);
        }
        else if (::g::Uno::String::op_Equality(t, ::STRINGS[1/*"default"*/]))
        {
            uPtr(n)->Extent(1.0f);
            n->Metric(3);
        }
        else
        {
            uPtr(n)->Extent(::g::Uno::Float::Parse(t));
            n->Metric(0);
        }

        return n;
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        DefinitionBase* n1 = (DefinitionBase*)__types[0]->New();
        n1->Extent(0.0f);
        n1->Metric(0);
        n1->Creation = 1;
        return n1;
    }
}

// protected internal static void Parse<T>(string data, Uno.Collections.IList<T> output) [static] :880
void DefinitionBase::Parse1(uType* __type, uString* data, uObject* output)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.ICollection<T>*/),
        __type->Precalced(1/*Fuse.Layouts.DefinitionBase.Parse<T>*/),
    };
    uStackFrame __("Fuse.Layouts.DefinitionBase", "Parse`1(string,Uno.Collections.IList<T>)");
    ::g::Uno::Collections::ICollection::Clear(uInterface(uPtr(output), __types[0]));

    if (::g::Uno::String::op_Equality(data, NULL))
        return;

    uArray* s = ::g::Uno::String::Split(uPtr(data), uArray::Init<int>(::TYPES[10/*char[]*/], 1, ','));

    for (int i = 0; i < uPtr(s)->Length(); i++)
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(output), __types[0]), (DefinitionBase*)DefinitionBase::Parse(__types[1], uPtr(s)->Strong<uString*>(i)));
}

// internal static string Serialize<T>(Uno.Collections.IList<T> columns) [static] :943
uString* DefinitionBase::Serialize1(uType* __type, uObject* columns)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.ICollection<T>*/),
        __type->Precalced(1/*Uno.Collections.IList<T>*/),
    };
    uStackFrame __("Fuse.Layouts.DefinitionBase", "Serialize`1(Uno.Collections.IList<T>)");
    DefinitionBase* ret1;
    uString* s = ::STRINGS[3/*""*/];

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(columns), __types[0])); i++)
    {
        if (i > 0)
            s = ::g::Uno::String::op_Addition2(s, ::STRINGS[4/*", "*/]);

        s = ::g::Uno::String::op_Addition2(s, uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(columns), __types[1]), uCRef<int>(i), &ret1), ret1))->Serialize());
    }

    return s;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Panels/0.42.4/layouts/$.uno
// -------------------------------------------------------------------------------------------------------

// public enum Dock :589
uEnumType* Dock_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Layouts.Dock", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "Left", 0LL,
        "Right", 1LL,
        "Top", 2LL,
        "Bottom", 3LL,
        "Fill", 4LL);
    return type;
}

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Panels/0.42.4/layouts/$.uno
// -------------------------------------------------------------------------------------------------------

// public sealed class DockLayout :594
// {
// static DockLayout() :594
static void DockLayout__cctor_1_fn(uType* __type)
{
    DockLayout::_dockProperty_ = ::g::Fuse::Properties::CreateHandle();
}

static void DockLayout_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[1] = ::g::Fuse::Visual_typeof();
    ::TYPES[2] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetFields(2,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Layouts::DockLayout::_dockProperty_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(4,
        new uFunction("GetDock", NULL, (void*)DockLayout__GetDock_fn, 0, true, ::g::Fuse::Layouts::Dock_typeof(), 1, ::TYPES[1/*Fuse.Visual*/]),
        new uFunction(".ctor", NULL, (void*)DockLayout__New2_fn, 0, true, type, 0),
        new uFunction("ResetDock", NULL, (void*)DockLayout__ResetDock_fn, 0, true, uVoid_typeof(), 1, ::TYPES[1/*Fuse.Visual*/]),
        new uFunction("SetDock", NULL, (void*)DockLayout__SetDock_fn, 0, true, uVoid_typeof(), 2, ::TYPES[1/*Fuse.Visual*/], ::g::Fuse::Layouts::Dock_typeof()));
}

::g::Fuse::Layouts::Layout_type* DockLayout_typeof()
{
    static uSStrong< ::g::Fuse::Layouts::Layout_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Layouts::Layout_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(DockLayout);
    options.TypeSize = sizeof(::g::Fuse::Layouts::Layout_type);
    type = (::g::Fuse::Layouts::Layout_type*)uClassType::New("Fuse.Layouts.DockLayout", options);
    type->fp_build_ = DockLayout_build;
    type->fp_ctor_ = (void*)DockLayout__New2_fn;
    type->fp_cctor_ = DockLayout__cctor_1_fn;
    type->fp_ArrangePaddingBox = (void(*)(::g::Fuse::Layouts::Layout*, uObject*, ::g::Uno::Float4*, ::g::Fuse::LayoutParams*))DockLayout__ArrangePaddingBox_fn;
    type->fp_GetContentSize = (void(*)(::g::Fuse::Layouts::Layout*, uObject*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))DockLayout__GetContentSize_fn;
    return type;
}

// public generated DockLayout() :594
void DockLayout__ctor_2_fn(DockLayout* __this)
{
    __this->ctor_2();
}

// internal override sealed void ArrangePaddingBox(Uno.Collections.IList<Fuse.Node> elements, float4 padding, Fuse.LayoutParams lp) :688
void DockLayout__ArrangePaddingBox_fn(DockLayout* __this, uObject* elements, ::g::Uno::Float4* padding, ::g::Fuse::LayoutParams* lp)
{
    uStackFrame __("Fuse.Layouts.DockLayout", "ArrangePaddingBox(Uno.Collections.IList<Fuse.Node>,float4,Fuse.LayoutParams)");
    ::g::Uno::Float4 padding_ = *padding;
    ::g::Fuse::LayoutParams lp_ = *lp;
    ::g::Fuse::Node* ret2;
    ::g::Fuse::Node* ret3;
    ::g::Uno::Float2 availablePosition = ::g::Uno::Float2__New2(padding_.X, padding_.Y);
    ::g::Uno::Float2 availableSize = ::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__op_Subtraction2(lp_.Size(), ::g::Uno::Float2__New2(padding_.X, padding_.Y)), ::g::Uno::Float2__New2(padding_.Z, padding_.W));
    ::g::Fuse::LayoutParams nlp = lp_.CloneAndDerive();
    nlp.SetRelativeSize(lp_.Size(), lp_.HasX(), lp_.HasY());

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(elements), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/])); i++)
    {
        ::g::Fuse::Visual* c = uAs< ::g::Fuse::Visual*>((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(elements), ::TYPES[2/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret2), ret2), ::TYPES[1/*Fuse.Visual*/]);

        if (c == NULL)
            continue;

        if (__this->ArrangeMarginBoxSpecial(c, padding_, lp_))
            continue;

        int d = DockLayout::GetDock(c);
        bool horz = (d == 0) || (d == 1);
        nlp.SetSize(availableSize, !horz, horz);
        ::g::Uno::Float2 desiredSize = uPtr(c)->GetMarginSize(nlp);

        switch (d)
        {
            case 0:
            {
                desiredSize.Y = availableSize.Y;
                nlp.SetSize(desiredSize, true, true);
                uPtr(c)->ArrangeMarginBox(availablePosition, nlp);
                availablePosition.X = (availablePosition.X + desiredSize.X);
                availableSize.X = (availableSize.X - desiredSize.X);
                break;
            }
            case 1:
            {
                desiredSize.Y = availableSize.Y;
                nlp.SetSize(desiredSize, true, true);
                uPtr(c)->ArrangeMarginBox(::g::Uno::Float2__New2((availablePosition.X + availableSize.X) - desiredSize.X, availablePosition.Y), nlp);
                availableSize.X = (availableSize.X - desiredSize.X);
                break;
            }
            case 2:
            {
                desiredSize.X = availableSize.X;
                nlp.SetSize(desiredSize, true, true);
                uPtr(c)->ArrangeMarginBox(availablePosition, nlp);
                availablePosition.Y = (availablePosition.Y + desiredSize.Y);
                availableSize.Y = (availableSize.Y - desiredSize.Y);
                break;
            }
            case 3:
            {
                desiredSize.X = availableSize.X;
                nlp.SetSize(desiredSize, true, true);
                uPtr(c)->ArrangeMarginBox(::g::Uno::Float2__New2(availablePosition.X, (availablePosition.Y + availableSize.Y) - desiredSize.Y), nlp);
                availableSize.Y = (availableSize.Y - desiredSize.Y);
                break;
            }
            case 4:
                break;
        }

        availableSize = ::g::Uno::Math::Max3(availableSize, ::g::Uno::Float2__New1(0.0f));
    }

    nlp.SetSize(availableSize, true, true);

    for (int i1 = 0; i1 < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(elements), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/])); ++i1)
    {
        ::g::Fuse::Visual* c1 = uAs< ::g::Fuse::Visual*>((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(elements), ::TYPES[2/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i1), &ret3), ret3), ::TYPES[1/*Fuse.Visual*/]);

        if (!__this->AffectsLayout(c1))
            continue;

        if (DockLayout::GetDock(c1) != 4)
            continue;

        uPtr(c1)->ArrangeMarginBox(availablePosition, nlp);
    }
}

// internal override sealed float2 GetContentSize(Uno.Collections.IList<Fuse.Node> elements, Fuse.LayoutParams lp) :621
void DockLayout__GetContentSize_fn(DockLayout* __this, uObject* elements, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Layouts.DockLayout", "GetContentSize(Uno.Collections.IList<Fuse.Node>,Fuse.LayoutParams)");
    ::g::Fuse::LayoutParams lp_ = *lp;
    ::g::Fuse::LayoutParams nlp = lp_.CloneAndDerive();
    nlp.SetRelativeSize(lp_.Size(), lp_.HasX(), lp_.HasY());
    return *__retval = __this->MeasureSubtree(elements, 0, nlp), void();
}

// public static Fuse.Layouts.Dock GetDock(Fuse.Visual elm) :605
void DockLayout__GetDock_fn(::g::Fuse::Visual* elm, int* __retval)
{
    *__retval = DockLayout::GetDock(elm);
}

// private float2 MeasureSubtree(Uno.Collections.IList<Fuse.Node> elements, int childIndex, Fuse.LayoutParams lp) :629
void DockLayout__MeasureSubtree_fn(DockLayout* __this, uObject* elements, int* childIndex, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    *__retval = __this->MeasureSubtree(elements, *childIndex, *lp);
}

// public generated DockLayout New() :594
void DockLayout__New2_fn(DockLayout** __retval)
{
    *__retval = DockLayout::New2();
}

// public static void ResetDock(Fuse.Visual elm) :615
void DockLayout__ResetDock_fn(::g::Fuse::Visual* elm)
{
    DockLayout::ResetDock(elm);
}

// public static void SetDock(Fuse.Visual elm, Fuse.Layouts.Dock dock) :599
void DockLayout__SetDock_fn(::g::Fuse::Visual* elm, int* dock)
{
    DockLayout::SetDock(elm, *dock);
}

uSStrong< ::g::Fuse::PropertyHandle*> DockLayout::_dockProperty_;

// public generated DockLayout() [instance] :594
void DockLayout::ctor_2()
{
    ctor_1();
}

// private float2 MeasureSubtree(Uno.Collections.IList<Fuse.Node> elements, int childIndex, Fuse.LayoutParams lp) [instance] :629
::g::Uno::Float2 DockLayout::MeasureSubtree(uObject* elements, int childIndex, ::g::Fuse::LayoutParams lp)
{
    uStackFrame __("Fuse.Layouts.DockLayout", "MeasureSubtree(Uno.Collections.IList<Fuse.Node>,int,Fuse.LayoutParams)");
    ::g::Fuse::Node* ret4;
    ::g::Fuse::Node* ret5;
    ::g::Fuse::Visual* c = NULL;

    if (childIndex >= ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(elements), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/])))
    {
        ::g::Uno::Float2 mx = ::g::Uno::Float2__New1(0.0f);

        for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(elements), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/])); ++i)
        {
            c = uAs< ::g::Fuse::Visual*>((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(elements), ::TYPES[2/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret4), ret4), ::TYPES[1/*Fuse.Visual*/]);

            if (!AffectsLayout(c))
                continue;

            if (DockLayout::GetDock(c) == 4)
            {
                ::g::Uno::Float2 sz = uPtr(c)->GetMarginSize(lp);
                mx = ::g::Uno::Math::Max3(sz, mx);
            }
        }

        return mx;
    }

    c = uAs< ::g::Fuse::Visual*>((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(elements), ::TYPES[2/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(childIndex), &ret5), ret5), ::TYPES[1/*Fuse.Visual*/]);

    if (c == NULL)
        return MeasureSubtree(elements, childIndex + 1, lp);

    switch (DockLayout::GetDock(c))
    {
        case 0:
        case 1:
        {
            ::g::Fuse::LayoutParams nlp = lp.Clone();
            nlp.RetainXY(false, nlp.HasY());
            ::g::Uno::Float2 cds = uPtr(c)->GetMarginSize(nlp);
            lp.RemoveSize(::g::Uno::Float2__New2(cds.X, 0.0f));
            ::g::Uno::Float2 subtree = MeasureSubtree(elements, childIndex + 1, lp);
            return ::g::Uno::Float2__New2(cds.X + subtree.X, ::g::Uno::Math::Max1(cds.Y, subtree.Y));
        }
        case 2:
        case 3:
        {
            ::g::Fuse::LayoutParams nlp1 = lp.Clone();
            nlp1.RetainXY(nlp1.HasX(), false);
            ::g::Uno::Float2 cds1 = uPtr(c)->GetMarginSize(nlp1);
            lp.RemoveSize(::g::Uno::Float2__New2(0.0f, cds1.Y));
            ::g::Uno::Float2 subtree1 = MeasureSubtree(elements, childIndex + 1, lp);
            return ::g::Uno::Float2__New2(::g::Uno::Math::Max1(cds1.X, subtree1.X), cds1.Y + subtree1.Y);
        }
        case 4:
            return MeasureSubtree(elements, childIndex + 1, lp);
    }

    return ::g::Uno::Float2__New1(0.0f);
}

// public static Fuse.Layouts.Dock GetDock(Fuse.Visual elm) [static] :605
int DockLayout::GetDock(::g::Fuse::Visual* elm)
{
    uStackFrame __("Fuse.Layouts.DockLayout", "GetDock(Fuse.Visual)");
    DockLayout_typeof()->Init();
    uObject* val;

    if (uPtr(uPtr(elm)->Properties())->TryGet(DockLayout::_dockProperty(), &val))
        return uUnbox<int>(::g::Fuse::Layouts::Dock_typeof(), val);

    return 4;
}

// public generated DockLayout New() [static] :594
DockLayout* DockLayout::New2()
{
    DockLayout* obj1 = (DockLayout*)uNew(DockLayout_typeof());
    obj1->ctor_2();
    return obj1;
}

// public static void ResetDock(Fuse.Visual elm) [static] :615
void DockLayout::ResetDock(::g::Fuse::Visual* elm)
{
    uStackFrame __("Fuse.Layouts.DockLayout", "ResetDock(Fuse.Visual)");
    DockLayout_typeof()->Init();
    uPtr(uPtr(elm)->Properties())->Clear(DockLayout::_dockProperty());
    elm->InvalidateLayout(2);
}

// public static void SetDock(Fuse.Visual elm, Fuse.Layouts.Dock dock) [static] :599
void DockLayout::SetDock(::g::Fuse::Visual* elm, int dock)
{
    uStackFrame __("Fuse.Layouts.DockLayout", "SetDock(Fuse.Visual,Fuse.Layouts.Dock)");
    DockLayout_typeof()->Init();
    uPtr(uPtr(elm)->Properties())->Set(DockLayout::_dockProperty(), uBox<int>(::g::Fuse::Layouts::Dock_typeof(), dock));
    elm->InvalidateLayout(2);
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Panels/0.42.4/layouts/$.uno
// -------------------------------------------------------------------------------------------------------

// public enum FlowDirection :2406
uEnumType* FlowDirection_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Layouts.FlowDirection", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "LeftToRight", 0LL,
        "RightToLeft", 1LL);
    return type;
}

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Panels/0.42.4/layouts/$.uno
// -------------------------------------------------------------------------------------------------------

// public enum GridChildOrder :1032
uEnumType* GridChildOrder_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Layouts.GridChildOrder", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "RowMajor", 0LL,
        "ColumnMajor", 1LL);
    return type;
}

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Panels/0.42.4/layouts/$.uno
// -------------------------------------------------------------------------------------------------------

// public sealed class GridLayout :1038
// {
// static GridLayout() :1038
static void GridLayout__cctor_1_fn(uType* __type)
{
    ::g::Fuse::Layouts::Row* collection2;
    ::g::Fuse::Layouts::Column* collection1;
    GridLayout::_staticDefaultRow_ = (collection2 = ::g::Fuse::Layouts::Row::New2(), uPtr(collection2)->Metric(3), 3, uPtr(collection2)->Extent(1.0f), 1.0f, collection2);
    GridLayout::_staticDefaultColumn_ = (collection1 = ::g::Fuse::Layouts::Column::New2(), uPtr(collection1)->Metric(3), 3, uPtr(collection1)->Extent(1.0f), 1.0f, collection1);
    GridLayout::_rowProperty_ = ::g::Fuse::Properties::CreateHandle();
    GridLayout::_actualRowProperty_ = ::g::Fuse::Properties::CreateHandle();
    GridLayout::_rowSpanProperty_ = ::g::Fuse::Properties::CreateHandle();
    GridLayout::_columnProperty_ = ::g::Fuse::Properties::CreateHandle();
    GridLayout::_actualColumnProperty_ = ::g::Fuse::Properties::CreateHandle();
    GridLayout::_columnSpanProperty_ = ::g::Fuse::Properties::CreateHandle();
}

static void GridLayout_build(uType* type)
{
    ::STRINGS[5] = uString::Const("RowCount and ColumnCount must be >= 1");
    ::STRINGS[6] = uString::Const("/Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Panels/0.42.4/layouts/$.uno");
    ::STRINGS[7] = uString::Const("ModifyCount");
    ::TYPES[14] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Layouts::Row_typeof(), NULL);
    ::TYPES[15] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Layouts::Row_typeof(), NULL);
    ::TYPES[16] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Layouts::Column_typeof(), NULL);
    ::TYPES[17] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Layouts::Column_typeof(), NULL);
    ::TYPES[13] = ::g::Uno::Action_typeof();
    ::TYPES[9] = ::g::Uno::Collections::ICollection_typeof();
    ::TYPES[12] = ::g::Uno::Collections::IList_typeof();
    ::TYPES[0] = ::TYPES[9/*Uno.Collections.ICollection`1*/]->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[1] = ::g::Fuse::Visual_typeof();
    ::TYPES[2] = ::TYPES[12/*Uno.Collections.IList`1*/]->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[18] = type->MakeMethod(9/*UserCount<Fuse.Layouts.Column>*/, ::g::Fuse::Layouts::Column_typeof(), NULL);
    ::TYPES[19] = type->MakeMethod(9/*UserCount<Fuse.Layouts.Row>*/, ::g::Fuse::Layouts::Row_typeof(), NULL);
    ::TYPES[20] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Int_typeof(), NULL);
    ::TYPES[21] = type->MakeMethod(8/*TrimPad<Fuse.Layouts.Row>*/, ::g::Fuse::Layouts::Row_typeof(), NULL);
    ::TYPES[22] = type->MakeMethod(8/*TrimPad<Fuse.Layouts.Column>*/, ::g::Fuse::Layouts::Column_typeof(), NULL);
    ::TYPES[23] = type->MakeMethod(2/*CalcInitialExtents<Fuse.Layouts.Column>*/, ::g::Fuse::Layouts::Column_typeof(), NULL);
    ::TYPES[24] = type->MakeMethod(2/*CalcInitialExtents<Fuse.Layouts.Row>*/, ::g::Fuse::Layouts::Row_typeof(), NULL);
    ::TYPES[25] = type->MakeMethod(4/*GetTotalProportion<Fuse.Layouts.Column>*/, ::g::Fuse::Layouts::Column_typeof(), NULL);
    ::TYPES[26] = type->MakeMethod(4/*GetTotalProportion<Fuse.Layouts.Row>*/, ::g::Fuse::Layouts::Row_typeof(), NULL);
    ::TYPES[27] = type->MakeMethod(1/*CalcFill<Fuse.Layouts.Column>*/, ::g::Fuse::Layouts::Column_typeof(), NULL);
    ::TYPES[28] = type->MakeMethod(1/*CalcFill<Fuse.Layouts.Row>*/, ::g::Fuse::Layouts::Row_typeof(), NULL);
    ::TYPES[29] = type->MakeMethod(3/*CalcTotalExtentAndOffset<Fuse.Layouts.Column>*/, ::g::Fuse::Layouts::Column_typeof(), NULL);
    ::TYPES[30] = type->MakeMethod(3/*CalcTotalExtentAndOffset<Fuse.Layouts.Row>*/, ::g::Fuse::Layouts::Row_typeof(), NULL);
    ::TYPES[31] = ::g::Fuse::Layouts::DefinitionBase_typeof();
    ::TYPES[32] = ::g::Uno::Collections::IListExtensions_typeof();
    ::TYPES[33] = type->MakeMethod(0/*AddListeners<Fuse.Layouts.Row>*/, ::g::Fuse::Layouts::Row_typeof(), NULL);
    ::TYPES[34] = type->MakeMethod(0/*AddListeners<Fuse.Layouts.Column>*/, ::g::Fuse::Layouts::Column_typeof(), NULL);
    ::TYPES[35] = type->MakeMethod(7/*RemoveListeners<Fuse.Layouts.Row>*/, ::g::Fuse::Layouts::Row_typeof(), NULL);
    ::TYPES[36] = type->MakeMethod(7/*RemoveListeners<Fuse.Layouts.Column>*/, ::g::Fuse::Layouts::Column_typeof(), NULL);
    ::TYPES[37] = ::TYPES[9/*Uno.Collections.ICollection`1*/]->MakeType(::g::Fuse::Layouts::Column_typeof(), NULL);
    ::TYPES[38] = type->MakeMethod(5/*ModifyCount<Fuse.Layouts.Column>*/, ::g::Fuse::Layouts::Column_typeof(), NULL);
    ::TYPES[39] = ::TYPES[31/*Fuse.Layouts.DefinitionBase*/]->MakeMethod(3/*Serialize<Fuse.Layouts.Column>*/, ::g::Fuse::Layouts::Column_typeof(), NULL);
    ::TYPES[40] = ::TYPES[31/*Fuse.Layouts.DefinitionBase*/]->MakeMethod(2/*Parse<Fuse.Layouts.Column>*/, ::g::Fuse::Layouts::Column_typeof(), NULL);
    ::TYPES[41] = ::TYPES[31/*Fuse.Layouts.DefinitionBase*/]->MakeMethod(1/*Parse<Fuse.Layouts.Column>*/, ::g::Fuse::Layouts::Column_typeof(), NULL);
    ::TYPES[42] = type->MakeMethod(6/*ModifyDefault<Fuse.Layouts.Column>*/, ::g::Fuse::Layouts::Column_typeof(), NULL);
    ::TYPES[43] = ::TYPES[31/*Fuse.Layouts.DefinitionBase*/]->MakeMethod(1/*Parse<Fuse.Layouts.Row>*/, ::g::Fuse::Layouts::Row_typeof(), NULL);
    ::TYPES[44] = type->MakeMethod(6/*ModifyDefault<Fuse.Layouts.Row>*/, ::g::Fuse::Layouts::Row_typeof(), NULL);
    ::TYPES[45] = ::TYPES[9/*Uno.Collections.ICollection`1*/]->MakeType(::g::Fuse::Layouts::Row_typeof(), NULL);
    ::TYPES[46] = type->MakeMethod(5/*ModifyCount<Fuse.Layouts.Row>*/, ::g::Fuse::Layouts::Row_typeof(), NULL);
    ::TYPES[47] = ::TYPES[31/*Fuse.Layouts.DefinitionBase*/]->MakeMethod(3/*Serialize<Fuse.Layouts.Row>*/, ::g::Fuse::Layouts::Row_typeof(), NULL);
    ::TYPES[48] = ::TYPES[31/*Fuse.Layouts.DefinitionBase*/]->MakeMethod(2/*Parse<Fuse.Layouts.Row>*/, ::g::Fuse::Layouts::Row_typeof(), NULL);
    type->MethodTypes[0]->SetPrecalc(
        ::TYPES[9/*Uno.Collections.ICollection`1*/]->MakeType(type->MethodTypes[0]->U(0), NULL),
        ::TYPES[12/*Uno.Collections.IList`1*/]->MakeType(type->MethodTypes[0]->U(0), NULL));
    type->MethodTypes[1]->SetPrecalc(
        ::TYPES[9/*Uno.Collections.ICollection`1*/]->MakeType(type->MethodTypes[1]->U(0), NULL),
        ::TYPES[12/*Uno.Collections.IList`1*/]->MakeType(type->MethodTypes[1]->U(0), NULL));
    type->MethodTypes[2]->SetPrecalc(
        ::TYPES[9/*Uno.Collections.ICollection`1*/]->MakeType(type->MethodTypes[2]->U(0), NULL),
        ::TYPES[12/*Uno.Collections.IList`1*/]->MakeType(type->MethodTypes[2]->U(0), NULL));
    type->MethodTypes[3]->SetPrecalc(
        ::TYPES[9/*Uno.Collections.ICollection`1*/]->MakeType(type->MethodTypes[3]->U(0), NULL),
        ::TYPES[12/*Uno.Collections.IList`1*/]->MakeType(type->MethodTypes[3]->U(0), NULL));
    type->MethodTypes[4]->SetPrecalc(
        ::TYPES[9/*Uno.Collections.ICollection`1*/]->MakeType(type->MethodTypes[4]->U(0), NULL),
        ::TYPES[12/*Uno.Collections.IList`1*/]->MakeType(type->MethodTypes[4]->U(0), NULL));
    type->MethodTypes[5]->SetPrecalc(
        ::TYPES[9/*Uno.Collections.ICollection`1*/]->MakeType(type->MethodTypes[5]->U(0), NULL),
        ::TYPES[31/*Fuse.Layouts.DefinitionBase*/]->MakeMethod(0/*Copy<T>*/, type->MethodTypes[5]->U(0), NULL),
        ::TYPES[32/*Uno.Collections.IListExtensions*/]->MakeMethod(2/*RemoveLast<T>*/, type->MethodTypes[5]->U(0), NULL),
        ::TYPES[12/*Uno.Collections.IList`1*/]->MakeType(type->MethodTypes[5]->U(0), NULL));
    type->MethodTypes[6]->SetPrecalc(
        ::TYPES[31/*Fuse.Layouts.DefinitionBase*/]->MakeMethod(0/*Copy<T>*/, type->MethodTypes[6]->U(0), NULL));
    type->MethodTypes[7]->SetPrecalc(
        ::TYPES[9/*Uno.Collections.ICollection`1*/]->MakeType(type->MethodTypes[7]->U(0), NULL),
        ::TYPES[12/*Uno.Collections.IList`1*/]->MakeType(type->MethodTypes[7]->U(0), NULL));
    type->MethodTypes[8]->SetPrecalc(
        ::TYPES[9/*Uno.Collections.ICollection`1*/]->MakeType(type->MethodTypes[8]->U(0), NULL),
        ::TYPES[31/*Fuse.Layouts.DefinitionBase*/]->MakeMethod(0/*Copy<T>*/, type->MethodTypes[8]->U(0), NULL),
        ::TYPES[12/*Uno.Collections.IList`1*/]->MakeType(type->MethodTypes[8]->U(0), NULL));
    type->MethodTypes[9]->SetPrecalc(
        ::TYPES[9/*Uno.Collections.ICollection`1*/]->MakeType(type->MethodTypes[9]->U(0), NULL),
        ::TYPES[12/*Uno.Collections.IList`1*/]->MakeType(type->MethodTypes[9]->U(0), NULL));
    type->SetFields(2,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Layouts::GridLayout, _cellSpacing), 0,
        ::g::Fuse::Layouts::GridChildOrder_typeof(), offsetof(::g::Fuse::Layouts::GridLayout, _childOrder), 0,
        ::TYPES[16/*Uno.Collections.ObservableList<Fuse.Layouts.Column>*/], offsetof(::g::Fuse::Layouts::GridLayout, _columns), 0,
        ::g::Fuse::Elements::Alignment_typeof(), offsetof(::g::Fuse::Layouts::GridLayout, _contentAlignment), 0,
        ::g::Fuse::Layouts::Column_typeof(), offsetof(::g::Fuse::Layouts::GridLayout, _defaultColumn), 0,
        ::g::Fuse::Layouts::Row_typeof(), offsetof(::g::Fuse::Layouts::GridLayout, _defaultRow), 0,
        ::TYPES[14/*Uno.Collections.ObservableList<Fuse.Layouts.Row>*/], offsetof(::g::Fuse::Layouts::GridLayout, _rows), 0,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Layouts::GridLayout::_actualColumnProperty_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Layouts::GridLayout::_actualRowProperty_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Layouts::GridLayout::_columnProperty_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Layouts::GridLayout::_columnSpanProperty_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Layouts::GridLayout::_rowProperty_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Layouts::GridLayout::_rowSpanProperty_, uFieldFlagsStatic,
        ::g::Fuse::Layouts::Column_typeof(), (uintptr_t)&::g::Fuse::Layouts::GridLayout::_staticDefaultColumn_, uFieldFlagsStatic,
        ::g::Fuse::Layouts::Row_typeof(), (uintptr_t)&::g::Fuse::Layouts::GridLayout::_staticDefaultRow_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(33,
        new uFunction("get_CellSpacing", NULL, (void*)GridLayout__get_CellSpacing_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_CellSpacing", NULL, (void*)GridLayout__set_CellSpacing_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_ChildOrder", NULL, (void*)GridLayout__get_ChildOrder_fn, 0, false, ::g::Fuse::Layouts::GridChildOrder_typeof(), 0),
        new uFunction("set_ChildOrder", NULL, (void*)GridLayout__set_ChildOrder_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Layouts::GridChildOrder_typeof()),
        new uFunction("get_ColumnCount", NULL, (void*)GridLayout__get_ColumnCount_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_ColumnCount", NULL, (void*)GridLayout__set_ColumnCount_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("get_ColumnList", NULL, (void*)GridLayout__get_ColumnList_fn, 0, false, ::TYPES[12/*Uno.Collections.IList`1*/]->MakeType(::g::Fuse::Layouts::Column_typeof(), NULL), 0),
        new uFunction("get_Columns", NULL, (void*)GridLayout__get_Columns_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Columns", NULL, (void*)GridLayout__set_Columns_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_ContentAlignment", NULL, (void*)GridLayout__get_ContentAlignment_fn, 0, false, ::g::Fuse::Elements::Alignment_typeof(), 0),
        new uFunction("set_ContentAlignment", NULL, (void*)GridLayout__set_ContentAlignment_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::Alignment_typeof()),
        new uFunction("get_DefaultColumn", NULL, (void*)GridLayout__get_DefaultColumn_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_DefaultColumn", NULL, (void*)GridLayout__set_DefaultColumn_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_DefaultRow", NULL, (void*)GridLayout__get_DefaultRow_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_DefaultRow", NULL, (void*)GridLayout__set_DefaultRow_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("GetColumn", NULL, (void*)GridLayout__GetColumn_fn, 0, true, ::g::Uno::Int_typeof(), 1, ::TYPES[1/*Fuse.Visual*/]),
        new uFunction("GetColumnSpan", NULL, (void*)GridLayout__GetColumnSpan_fn, 0, true, ::g::Uno::Int_typeof(), 1, ::TYPES[1/*Fuse.Visual*/]),
        new uFunction("GetRow", NULL, (void*)GridLayout__GetRow_fn, 0, true, ::g::Uno::Int_typeof(), 1, ::TYPES[1/*Fuse.Visual*/]),
        new uFunction("GetRowSpan", NULL, (void*)GridLayout__GetRowSpan_fn, 0, true, ::g::Uno::Int_typeof(), 1, ::TYPES[1/*Fuse.Visual*/]),
        new uFunction(".ctor", NULL, (void*)GridLayout__New2_fn, 0, true, type, 0),
        new uFunction("ResetColumn", NULL, (void*)GridLayout__ResetColumn_fn, 0, true, uVoid_typeof(), 1, ::TYPES[1/*Fuse.Visual*/]),
        new uFunction("ResetColumnSpan", NULL, (void*)GridLayout__ResetColumnSpan_fn, 0, true, uVoid_typeof(), 1, ::TYPES[1/*Fuse.Visual*/]),
        new uFunction("ResetRow", NULL, (void*)GridLayout__ResetRow_fn, 0, true, uVoid_typeof(), 1, ::TYPES[1/*Fuse.Visual*/]),
        new uFunction("ResetRowSpan", NULL, (void*)GridLayout__ResetRowSpan_fn, 0, true, uVoid_typeof(), 1, ::TYPES[1/*Fuse.Visual*/]),
        new uFunction("get_RowCount", NULL, (void*)GridLayout__get_RowCount_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("set_RowCount", NULL, (void*)GridLayout__set_RowCount_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("get_RowList", NULL, (void*)GridLayout__get_RowList_fn, 0, false, ::TYPES[12/*Uno.Collections.IList`1*/]->MakeType(::g::Fuse::Layouts::Row_typeof(), NULL), 0),
        new uFunction("get_Rows", NULL, (void*)GridLayout__get_Rows_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Rows", NULL, (void*)GridLayout__set_Rows_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("SetColumn", NULL, (void*)GridLayout__SetColumn_fn, 0, true, uVoid_typeof(), 2, ::TYPES[1/*Fuse.Visual*/], ::g::Uno::Int_typeof()),
        new uFunction("SetColumnSpan", NULL, (void*)GridLayout__SetColumnSpan_fn, 0, true, uVoid_typeof(), 2, ::TYPES[1/*Fuse.Visual*/], ::g::Uno::Int_typeof()),
        new uFunction("SetRow", NULL, (void*)GridLayout__SetRow_fn, 0, true, uVoid_typeof(), 2, ::TYPES[1/*Fuse.Visual*/], ::g::Uno::Int_typeof()),
        new uFunction("SetRowSpan", NULL, (void*)GridLayout__SetRowSpan_fn, 0, true, uVoid_typeof(), 2, ::TYPES[1/*Fuse.Visual*/], ::g::Uno::Int_typeof()));
}

::g::Fuse::Layouts::Layout_type* GridLayout_typeof()
{
    static uSStrong< ::g::Fuse::Layouts::Layout_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Layouts::Layout_typeof();
    options.FieldCount = 17;
    options.MethodTypeCount = 10;
    options.ObjectSize = sizeof(GridLayout);
    options.TypeSize = sizeof(::g::Fuse::Layouts::Layout_type);
    type = (::g::Fuse::Layouts::Layout_type*)uClassType::New("Fuse.Layouts.GridLayout", options);
    type->MethodTypes[0] = type->NewMethodType(1, 2);
    type->MethodTypes[1] = type->NewMethodType(1, 2);
    type->MethodTypes[2] = type->NewMethodType(1, 2);
    type->MethodTypes[3] = type->NewMethodType(1, 2);
    type->MethodTypes[4] = type->NewMethodType(1, 2);
    type->MethodTypes[5] = type->NewMethodType(1, 4);
    type->MethodTypes[6] = type->NewMethodType(1, 1);
    type->MethodTypes[7] = type->NewMethodType(1, 2);
    type->MethodTypes[8] = type->NewMethodType(1, 3);
    type->MethodTypes[9] = type->NewMethodType(1, 2);
    type->fp_build_ = GridLayout_build;
    type->fp_ctor_ = (void*)GridLayout__New2_fn;
    type->fp_cctor_ = GridLayout__cctor_1_fn;
    type->fp_ArrangePaddingBox = (void(*)(::g::Fuse::Layouts::Layout*, uObject*, ::g::Uno::Float4*, ::g::Fuse::LayoutParams*))GridLayout__ArrangePaddingBox_fn;
    type->fp_GetContentSize = (void(*)(::g::Fuse::Layouts::Layout*, uObject*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))GridLayout__GetContentSize_fn;
    type->fp_IsMarginBoxDependent = (void(*)(::g::Fuse::Layouts::Layout*, ::g::Fuse::Visual*, int*))GridLayout__IsMarginBoxDependent_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Layouts::Layout*))GridLayout__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Layouts::Layout*))GridLayout__OnUnrooted_fn;
    return type;
}

// public GridLayout() :1451
void GridLayout__ctor_2_fn(GridLayout* __this)
{
    __this->ctor_2();
}

// private bool AddListener(Fuse.Layouts.DefinitionBase item) :1478
void GridLayout__AddListener_fn(GridLayout* __this, ::g::Fuse::Layouts::DefinitionBase* item, bool* __retval)
{
    *__retval = __this->AddListener(item);
}

// private void AddListeners<T>(Uno.Collections.IList<T> list) :1496
void GridLayout__AddListeners_fn(GridLayout* __this, uType* __type, uObject* list)
{
    __this->AddListeners(__type, list);
}

// internal override sealed void ArrangePaddingBox(Uno.Collections.IList<Fuse.Node> elements, float4 padding, Fuse.LayoutParams lp) :1807
void GridLayout__ArrangePaddingBox_fn(GridLayout* __this, uObject* elements, ::g::Uno::Float4* padding, ::g::Fuse::LayoutParams* lp)
{
    uStackFrame __("Fuse.Layouts.GridLayout", "ArrangePaddingBox(Uno.Collections.IList<Fuse.Node>,float4,Fuse.LayoutParams)");
    ::g::Fuse::LayoutParams lp_ = *lp;
    ::g::Uno::Float4 padding_ = *padding;
    ::g::Fuse::Node* ret5;
    ::g::Fuse::Layouts::Column* ret6;
    ::g::Fuse::Layouts::Column* ret7;
    ::g::Fuse::Layouts::Row* ret8;
    ::g::Fuse::Layouts::Row* ret9;
    ::g::Uno::Float2 remainSize = ::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__op_Subtraction2(lp_.Size(), ::g::Uno::Float2__New2(padding_.X, padding_.Y)), ::g::Uno::Float2__New2(padding_.Z, padding_.W));
    ::g::Uno::Float2 measured = __this->Measure(elements, ::g::Fuse::LayoutParams__Create(remainSize));
    ::g::Uno::Float2 off = ::g::Uno::Float2__New1(0.0f);
    int eca = __this->EffectiveContentAlignment();

    switch (::g::Fuse::Elements::AlignmentHelpers::GetHorizontalSimpleAlign(eca))
    {
        case 0:
        {
            off.X = padding_.X;
            break;
        }
        case 1:
        {
            off.X = (((remainSize.X / 2.0f) - (measured.X / 2.0f)) + padding_.X);
            break;
        }
        case 2:
        {
            off.X = ((lp_.X() - measured.X) - padding_.Z);
            break;
        }
    }

    switch (::g::Fuse::Elements::AlignmentHelpers::GetVerticalSimpleAlign(eca))
    {
        case 0:
        {
            off.Y = padding_.Y;
            break;
        }
        case 1:
        {
            off.Y = (((remainSize.Y / 2.0f) - (measured.Y / 2.0f)) + padding_.Y);
            break;
        }
        case 2:
        {
            off.Y = ((lp_.Y() - measured.Y) - padding_.W);
            break;
        }
    }

    float effectiveCellSpacing = __this->EffectiveCellSpacing();
    ::g::Fuse::LayoutParams nlp = lp_.CloneAndDerive();

    for (int nx = 0; nx < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(elements), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/])); nx++)
    {
        ::g::Fuse::Visual* child = uAs< ::g::Fuse::Visual*>((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(elements), ::TYPES[2/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(nx), &ret5), ret5), ::TYPES[1/*Fuse.Visual*/]);

        if (child == NULL)
            continue;

        if (__this->ArrangeMarginBoxSpecial(child, padding_, lp_))
            continue;

        int column = __this->GetActualColumn(child);
        int row = __this->GetActualRow(child);
        int rowSpan = GridLayout::GetRowSpan(child);
        int columnSpan = GridLayout::GetColumnSpan(child);
        float x = 0.0f;
        float y = 0.0f;
        float w = remainSize.X;
        float h = remainSize.Y;

        if ((column >= 0) && (column < uPtr(__this->_columns)->Count()))
        {
            ::g::Fuse::Layouts::Column* c = (::g::Uno::Collections::ObservableList__get_Item_fn(uPtr(__this->_columns), uCRef<int>(column), &ret6), ret6);
            x = uPtr(c)->ActualOffset();
            w = c->ActualExtent;

            for (int s = column + 1; s < ::g::Uno::Math::Min8(uPtr(__this->_columns)->Count(), column + columnSpan); ++s)
                w = w + (uPtr((::g::Uno::Collections::ObservableList__get_Item_fn(uPtr(__this->_columns), uCRef<int>(s), &ret7), ret7))->ActualExtent + effectiveCellSpacing);
        }

        if ((row >= 0) && (row < uPtr(__this->_rows)->Count()))
        {
            ::g::Fuse::Layouts::Row* r = (::g::Uno::Collections::ObservableList__get_Item_fn(uPtr(__this->_rows), uCRef<int>(row), &ret8), ret8);
            y = uPtr(r)->ActualOffset();
            h = r->ActualExtent;

            for (int s1 = row + 1; s1 < ::g::Uno::Math::Min8(uPtr(__this->_rows)->Count(), row + rowSpan); ++s1)
                h = h + (uPtr((::g::Uno::Collections::ObservableList__get_Item_fn(uPtr(__this->_rows), uCRef<int>(s1), &ret9), ret9))->ActualExtent + effectiveCellSpacing);
        }

        nlp.SetSize(::g::Uno::Float2__New2(w, h), true, true);
        uPtr(child)->ArrangeMarginBox(::g::Uno::Float2__op_Addition2(off, ::g::Uno::Float2__New2(x, y)), nlp);
    }
}

// private void CalcActualPositions(Uno.Collections.IList<Fuse.Node> elements) :1282
void GridLayout__CalcActualPositions_fn(GridLayout* __this, uObject* elements)
{
    __this->CalcActualPositions(elements);
}

// private void CalcAuto(Uno.Collections.IList<Fuse.Node> elements, float& availableWidth, float& availableHeight, bool secondPass, bool hasFirstHorzSize, bool hasFirstVertSize, bool expandWidth, bool expandHeight) :1664
void GridLayout__CalcAuto_fn(GridLayout* __this, uObject* elements, float* availableWidth, float* availableHeight, bool* secondPass, bool* hasFirstHorzSize, bool* hasFirstVertSize, bool* expandWidth, bool* expandHeight)
{
    __this->CalcAuto(elements, availableWidth, availableHeight, *secondPass, *hasFirstHorzSize, *hasFirstVertSize, *expandWidth, *expandHeight);
}

// private void CalcFill<T>(Uno.Collections.IList<T> list, float available, float proportion, bool expand) :1555
void GridLayout__CalcFill_fn(GridLayout* __this, uType* __type, uObject* list, float* available, float* proportion, bool* expand)
{
    __this->CalcFill(__type, list, *available, *proportion, *expand);
}

// private void CalcInitialExtents<T>(Uno.Collections.IList<T> list, bool expand, float& used, bool& hasAuto) :1575
void GridLayout__CalcInitialExtents_fn(GridLayout* __this, uType* __type, uObject* list, bool* expand, float* used, bool* hasAuto)
{
    __this->CalcInitialExtents(__type, list, *expand, used, hasAuto);
}

// private float CalcTotalExtentAndOffset<T>(Uno.Collections.IList<T> list, float effectiveCellSpacing) :1598
void GridLayout__CalcTotalExtentAndOffset_fn(GridLayout* __this, uType* __type, uObject* list, float* effectiveCellSpacing, float* __retval)
{
    *__retval = __this->CalcTotalExtentAndOffset(__type, list, *effectiveCellSpacing);
}

// public float get_CellSpacing() :1190
void GridLayout__get_CellSpacing_fn(GridLayout* __this, float* __retval)
{
    *__retval = __this->CellSpacing();
}

// public void set_CellSpacing(float value) :1191
void GridLayout__set_CellSpacing_fn(GridLayout* __this, float* value)
{
    __this->CellSpacing(*value);
}

// private void Changed() :1457
void GridLayout__Changed_fn(GridLayout* __this)
{
    __this->Changed();
}

// public Fuse.Layouts.GridChildOrder get_ChildOrder() :1056
void GridLayout__get_ChildOrder_fn(GridLayout* __this, int* __retval)
{
    *__retval = __this->ChildOrder();
}

// public void set_ChildOrder(Fuse.Layouts.GridChildOrder value) :1057
void GridLayout__set_ChildOrder_fn(GridLayout* __this, int* value)
{
    __this->ChildOrder(*value);
}

// public int get_ColumnCount() :1169
void GridLayout__get_ColumnCount_fn(GridLayout* __this, int* __retval)
{
    *__retval = __this->ColumnCount();
}

// public void set_ColumnCount(int value) :1170
void GridLayout__set_ColumnCount_fn(GridLayout* __this, int* value)
{
    __this->ColumnCount(*value);
}

// public Uno.Collections.IList<Fuse.Layouts.Column> get_ColumnList() :1143
void GridLayout__get_ColumnList_fn(GridLayout* __this, uObject** __retval)
{
    *__retval = __this->ColumnList();
}

// public string get_Columns() :1147
void GridLayout__get_Columns_fn(GridLayout* __this, uString** __retval)
{
    *__retval = __this->Columns();
}

// public void set_Columns(string value) :1148
void GridLayout__set_Columns_fn(GridLayout* __this, uString* value)
{
    __this->Columns(value);
}

// public Fuse.Elements.Alignment get_ContentAlignment() :1204
void GridLayout__get_ContentAlignment_fn(GridLayout* __this, int* __retval)
{
    *__retval = __this->ContentAlignment();
}

// public void set_ContentAlignment(Fuse.Elements.Alignment value) :1205
void GridLayout__set_ContentAlignment_fn(GridLayout* __this, int* value)
{
    __this->ContentAlignment(*value);
}

// public string get_DefaultColumn() :1159
void GridLayout__get_DefaultColumn_fn(GridLayout* __this, uString** __retval)
{
    *__retval = __this->DefaultColumn();
}

// public void set_DefaultColumn(string value) :1160
void GridLayout__set_DefaultColumn_fn(GridLayout* __this, uString* value)
{
    __this->DefaultColumn(value);
}

// public string get_DefaultRow() :1071
void GridLayout__get_DefaultRow_fn(GridLayout* __this, uString** __retval)
{
    *__retval = __this->DefaultRow();
}

// public void set_DefaultRow(string value) :1072
void GridLayout__set_DefaultRow_fn(GridLayout* __this, uString* value)
{
    __this->DefaultRow(value);
}

// private void DefinitionAdded(Fuse.Layouts.DefinitionBase r) :1462
void GridLayout__DefinitionAdded_fn(GridLayout* __this, ::g::Fuse::Layouts::DefinitionBase* r)
{
    __this->DefinitionAdded(r);
}

// private void DefinitionRemoved(Fuse.Layouts.DefinitionBase r) :1470
void GridLayout__DefinitionRemoved_fn(GridLayout* __this, ::g::Fuse::Layouts::DefinitionBase* r)
{
    __this->DefinitionRemoved(r);
}

// private float get_EffectiveCellSpacing() :1529
void GridLayout__get_EffectiveCellSpacing_fn(GridLayout* __this, float* __retval)
{
    *__retval = __this->EffectiveCellSpacing();
}

// private Fuse.Elements.Alignment get_EffectiveContentAlignment() :1793
void GridLayout__get_EffectiveContentAlignment_fn(GridLayout* __this, int* __retval)
{
    *__retval = __this->EffectiveContentAlignment();
}

// private Fuse.Layouts.Metric EffectiveMetric(Fuse.Layouts.Metric src, bool expand) :1536
void GridLayout__EffectiveMetric_fn(GridLayout* __this, int* src, bool* expand, int* __retval)
{
    *__retval = __this->EffectiveMetric(*src, *expand);
}

// private int GetActualColumn(Fuse.Visual elm) :1411
void GridLayout__GetActualColumn_fn(GridLayout* __this, ::g::Fuse::Visual* elm, int* __retval)
{
    *__retval = __this->GetActualColumn(elm);
}

// private int GetActualRow(Fuse.Visual elm) :1235
void GridLayout__GetActualRow_fn(GridLayout* __this, ::g::Fuse::Visual* elm, int* __retval)
{
    *__retval = __this->GetActualRow(elm);
}

// private float2 GetAutoSize(Fuse.Visual child, int x0, int y0, bool expandX, bool expandY, bool& knowX, bool& knowY, bool& autoX, bool& autoY) :1614
void GridLayout__GetAutoSize_fn(GridLayout* __this, ::g::Fuse::Visual* child, int* x0, int* y0, bool* expandX, bool* expandY, bool* knowX, bool* knowY, bool* autoX, bool* autoY, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetAutoSize(child, *x0, *y0, *expandX, *expandY, knowX, knowY, autoX, autoY);
}

// public static int GetColumn(Fuse.Visual elm) :1275
void GridLayout__GetColumn_fn(::g::Fuse::Visual* elm, int* __retval)
{
    *__retval = GridLayout::GetColumn(elm);
}

// private Fuse.Layouts.Column GetColumnData(int column) :1173
void GridLayout__GetColumnData_fn(GridLayout* __this, int* column, ::g::Fuse::Layouts::Column** __retval)
{
    *__retval = __this->GetColumnData(*column);
}

// public static int GetColumnSpan(Fuse.Visual elm) :1432
void GridLayout__GetColumnSpan_fn(::g::Fuse::Visual* elm, int* __retval)
{
    *__retval = GridLayout::GetColumnSpan(elm);
}

// internal override sealed float2 GetContentSize(Uno.Collections.IList<Fuse.Node> elements, Fuse.LayoutParams lp) :1522
void GridLayout__GetContentSize_fn(GridLayout* __this, uObject* elements, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Layouts.GridLayout", "GetContentSize(Uno.Collections.IList<Fuse.Node>,Fuse.LayoutParams)");
    ::g::Fuse::LayoutParams lp_ = *lp;
    return *__retval = __this->Measure(elements, lp_), void();
}

// public static int GetRow(Fuse.Visual elm) :1228
void GridLayout__GetRow_fn(::g::Fuse::Visual* elm, int* __retval)
{
    *__retval = GridLayout::GetRow(elm);
}

// private Fuse.Layouts.Row GetRowData(int row) :1180
void GridLayout__GetRowData_fn(GridLayout* __this, int* row, ::g::Fuse::Layouts::Row** __retval)
{
    *__retval = __this->GetRowData(*row);
}

// public static int GetRowSpan(Fuse.Visual elm) :1256
void GridLayout__GetRowSpan_fn(::g::Fuse::Visual* elm, int* __retval)
{
    *__retval = GridLayout::GetRowSpan(elm);
}

// private float GetTotalProportion<T>(Uno.Collections.IList<T> list, bool expand) :1543
void GridLayout__GetTotalProportion_fn(GridLayout* __this, uType* __type, uObject* list, bool* expand, float* __retval)
{
    *__retval = __this->GetTotalProportion(__type, list, *expand);
}

// internal override sealed Fuse.LayoutDependent IsMarginBoxDependent(Fuse.Visual child) :1888
void GridLayout__IsMarginBoxDependent_fn(GridLayout* __this, ::g::Fuse::Visual* child, int* __retval)
{
    uStackFrame __("Fuse.Layouts.GridLayout", "IsMarginBoxDependent(Fuse.Visual)");
    ::g::Fuse::Layouts::Column* c = __this->GetColumnData(__this->GetActualColumn(child));
    ::g::Fuse::Layouts::Row* r = __this->GetRowData(__this->GetActualRow(child));

    if ((c == NULL) || (r == NULL))
        return *__retval = 0, void();

    return *__retval = ((__this->EffectiveMetric(uPtr(c)->Metric(), false) != 2) && (__this->EffectiveMetric(uPtr(r)->Metric(), false) != 2)) ? 0 : 4, void();
}

// private float2 Measure(Uno.Collections.IList<Fuse.Node> elements, Fuse.LayoutParams lp) :1722
void GridLayout__Measure_fn(GridLayout* __this, uObject* elements, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Measure(elements, *lp);
}

// private void ModifyCount<T>(Uno.Collections.IList<T> list, int count, T primordial) :1109
void GridLayout__ModifyCount_fn(GridLayout* __this, uType* __type, uObject* list, int* count, ::g::Fuse::Layouts::DefinitionBase* primordial)
{
    __this->ModifyCount(__type, list, *count, primordial);
}

// private void ModifyDefault<T>(Uno.Collections.ObservableList<T> list, T primordial) :1079
void GridLayout__ModifyDefault_fn(GridLayout* __this, uType* __type, ::g::Uno::Collections::ObservableList* list, ::g::Fuse::Layouts::DefinitionBase* primordial)
{
    __this->ModifyDefault(__type, list, primordial);
}

// public GridLayout New() :1451
void GridLayout__New2_fn(GridLayout** __retval)
{
    *__retval = GridLayout::New2();
}

// protected override sealed void OnRooted() :1508
void GridLayout__OnRooted_fn(GridLayout* __this)
{
    uStackFrame __("Fuse.Layouts.GridLayout", "OnRooted()");
    ::g::Fuse::Layouts::Layout__OnRooted_fn(__this);
    __this->AddListeners(::TYPES[33/*Fuse.Layouts.GridLayout.AddListeners<Fuse.Layouts.Row>*/], (uObject*)__this->_rows);
    __this->AddListeners(::TYPES[34/*Fuse.Layouts.GridLayout.AddListeners<Fuse.Layouts.Column>*/], (uObject*)__this->_columns);
}

// protected override sealed void OnUnrooted() :1515
void GridLayout__OnUnrooted_fn(GridLayout* __this)
{
    uStackFrame __("Fuse.Layouts.GridLayout", "OnUnrooted()");
    ::g::Fuse::Layouts::Layout__OnUnrooted_fn(__this);
    __this->RemoveListeners(::TYPES[35/*Fuse.Layouts.GridLayout.RemoveListeners<Fuse.Layouts.Row>*/], (uObject*)__this->_rows);
    __this->RemoveListeners(::TYPES[36/*Fuse.Layouts.GridLayout.RemoveListeners<Fuse.Layouts.Column>*/], (uObject*)__this->_columns);
}

// private bool RemoveListener(Fuse.Layouts.DefinitionBase item) :1486
void GridLayout__RemoveListener_fn(GridLayout* __this, ::g::Fuse::Layouts::DefinitionBase* item, bool* __retval)
{
    *__retval = __this->RemoveListener(item);
}

// private void RemoveListeners<T>(Uno.Collections.IList<T> list) :1502
void GridLayout__RemoveListeners_fn(GridLayout* __this, uType* __type, uObject* list)
{
    __this->RemoveListeners(__type, list);
}

// public static void ResetColumn(Fuse.Visual elm) :1420
void GridLayout__ResetColumn_fn(::g::Fuse::Visual* elm)
{
    GridLayout::ResetColumn(elm);
}

// public static void ResetColumnSpan(Fuse.Visual elm) :1442
void GridLayout__ResetColumnSpan_fn(::g::Fuse::Visual* elm)
{
    GridLayout::ResetColumnSpan(elm);
}

// public static void ResetRow(Fuse.Visual elm) :1244
void GridLayout__ResetRow_fn(::g::Fuse::Visual* elm)
{
    GridLayout::ResetRow(elm);
}

// public static void ResetRowSpan(Fuse.Visual elm) :1263
void GridLayout__ResetRowSpan_fn(::g::Fuse::Visual* elm)
{
    GridLayout::ResetRowSpan(elm);
}

// public int get_RowCount() :1095
void GridLayout__get_RowCount_fn(GridLayout* __this, int* __retval)
{
    *__retval = __this->RowCount();
}

// public void set_RowCount(int value) :1096
void GridLayout__set_RowCount_fn(GridLayout* __this, int* value)
{
    __this->RowCount(*value);
}

// public Uno.Collections.IList<Fuse.Layouts.Row> get_RowList() :1041
void GridLayout__get_RowList_fn(GridLayout* __this, uObject** __retval)
{
    *__retval = __this->RowList();
}

// public string get_Rows() :1045
void GridLayout__get_Rows_fn(GridLayout* __this, uString** __retval)
{
    *__retval = __this->Rows();
}

// public void set_Rows(string value) :1046
void GridLayout__set_Rows_fn(GridLayout* __this, uString* value)
{
    __this->Rows(value);
}

// public static void SetColumn(Fuse.Visual elm, int col) :1269
void GridLayout__SetColumn_fn(::g::Fuse::Visual* elm, int* col)
{
    GridLayout::SetColumn(elm, *col);
}

// public static void SetColumnSpan(Fuse.Visual elm, int span) :1426
void GridLayout__SetColumnSpan_fn(::g::Fuse::Visual* elm, int* span)
{
    GridLayout::SetColumnSpan(elm, *span);
}

// public static void SetRow(Fuse.Visual elm, int row) :1222
void GridLayout__SetRow_fn(::g::Fuse::Visual* elm, int* row)
{
    GridLayout::SetRow(elm, *row);
}

// public static void SetRowSpan(Fuse.Visual elm, int span) :1250
void GridLayout__SetRowSpan_fn(::g::Fuse::Visual* elm, int* span)
{
    GridLayout::SetRowSpan(elm, *span);
}

// private void TrimPad<T>(Uno.Collections.IList<T> list, int count, T primordial) :1393
void GridLayout__TrimPad_fn(GridLayout* __this, uType* __type, uObject* list, int* count, ::g::Fuse::Layouts::DefinitionBase* primordial)
{
    __this->TrimPad(__type, list, *count, primordial);
}

// private int UserCount<T>(Uno.Collections.IList<T> list) :1100
void GridLayout__UserCount_fn(GridLayout* __this, uType* __type, uObject* list, int* __retval)
{
    *__retval = __this->UserCount(__type, list);
}

uSStrong< ::g::Fuse::PropertyHandle*> GridLayout::_actualColumnProperty_;
uSStrong< ::g::Fuse::PropertyHandle*> GridLayout::_actualRowProperty_;
uSStrong< ::g::Fuse::PropertyHandle*> GridLayout::_columnProperty_;
uSStrong< ::g::Fuse::PropertyHandle*> GridLayout::_columnSpanProperty_;
uSStrong< ::g::Fuse::PropertyHandle*> GridLayout::_rowProperty_;
uSStrong< ::g::Fuse::PropertyHandle*> GridLayout::_rowSpanProperty_;
uSStrong< ::g::Fuse::Layouts::Column*> GridLayout::_staticDefaultColumn_;
uSStrong< ::g::Fuse::Layouts::Row*> GridLayout::_staticDefaultRow_;

// public GridLayout() [instance] :1451
void GridLayout::ctor_2()
{
    uStackFrame __("Fuse.Layouts.GridLayout", ".ctor()");
    _defaultRow = GridLayout::_staticDefaultRow();
    _defaultColumn = GridLayout::_staticDefaultColumn();
    _cellSpacing = 0.0f;
    ctor_1();
    _rows = ((::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[14/*Uno.Collections.ObservableList<Fuse.Layouts.Row>*/], uDelegate::New(::TYPES[15/*Uno.Action<Fuse.Layouts.Row>*/], (void*)GridLayout__DefinitionAdded_fn, this), uDelegate::New(::TYPES[15/*Uno.Action<Fuse.Layouts.Row>*/], (void*)GridLayout__DefinitionRemoved_fn, this)));
    _columns = ((::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[16/*Uno.Collections.ObservableList<Fuse.Layouts.Column>*/], uDelegate::New(::TYPES[17/*Uno.Action<Fuse.Layouts.Column>*/], (void*)GridLayout__DefinitionAdded_fn, this), uDelegate::New(::TYPES[17/*Uno.Action<Fuse.Layouts.Column>*/], (void*)GridLayout__DefinitionRemoved_fn, this)));
}

// private bool AddListener(Fuse.Layouts.DefinitionBase item) [instance] :1478
bool GridLayout::AddListener(::g::Fuse::Layouts::DefinitionBase* item)
{
    uStackFrame __("Fuse.Layouts.GridLayout", "AddListener(Fuse.Layouts.DefinitionBase)");

    if (uPtr(item)->Creation != 0)
        return false;

    uPtr(item)->add_Changed(uDelegate::New(::TYPES[13/*Uno.Action*/], (void*)GridLayout__Changed_fn, this));
    return true;
}

// private void AddListeners<T>(Uno.Collections.IList<T> list) [instance] :1496
void GridLayout::AddListeners(uType* __type, uObject* list)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.ICollection<T>*/),
        __type->Precalced(1/*Uno.Collections.IList<T>*/),
    };
    uStackFrame __("Fuse.Layouts.GridLayout", "AddListeners`1(Uno.Collections.IList<T>)");
    ::g::Fuse::Layouts::DefinitionBase* ret4;

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(list), __types[0])); ++i)
        AddListener((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(list), __types[1]), uCRef<int>(i), &ret4), ret4));
}

// private void CalcActualPositions(Uno.Collections.IList<Fuse.Node> elements) [instance] :1282
void GridLayout::CalcActualPositions(uObject* elements)
{
    uStackFrame __("Fuse.Layouts.GridLayout", "CalcActualPositions(Uno.Collections.IList<Fuse.Node>)");
    ::g::Fuse::Node* ret10;
    ::g::Fuse::Node* ret11;
    int ret12;
    int ret13;
    bool rowMajor = ChildOrder() == 0;
    int minorCount = ::g::Uno::Math::Max8(1, rowMajor ? UserCount(::TYPES[18/*Fuse.Layouts.GridLayout.UserCount<Fuse.Layouts.Column>*/], ColumnList()) : UserCount(::TYPES[19/*Fuse.Layouts.GridLayout.UserCount<Fuse.Layouts.Row>*/], RowList()));

    for (int nx = 0; nx < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(elements), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/])); nx++)
    {
        ::g::Fuse::Visual* e = uAs< ::g::Fuse::Visual*>((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(elements), ::TYPES[2/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(nx), &ret10), ret10), ::TYPES[1/*Fuse.Visual*/]);

        if (!AffectsLayout(e))
            continue;

        if (rowMajor)
            minorCount = ::g::Uno::Math::Max8(minorCount, GridLayout::GetColumn(e) + GridLayout::GetColumnSpan(e));
        else
            minorCount = ::g::Uno::Math::Max8(minorCount, GridLayout::GetRow(e) + GridLayout::GetRowSpan(e));
    }

    ::g::Uno::Collections::List* majorAvail = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New2(::TYPES[20/*Uno.Collections.List<int>*/], minorCount);

    for (int c = 0; c < minorCount; c++)
        ::g::Uno::Collections::List__Add_fn(uPtr(majorAvail), uCRef<int>(0));

    int rowAt = 0;
    int colAt = 0;
    int maxRow = 0;
    int maxCol = 0;

    for (int nx1 = 0; nx1 < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(elements), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/])); nx1++)
    {
        ::g::Fuse::Visual* elm = uAs< ::g::Fuse::Visual*>((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(elements), ::TYPES[2/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(nx1), &ret11), ret11), ::TYPES[1/*Fuse.Visual*/]);

        if (!AffectsLayout(elm))
            continue;

        uObject* v;
        bool haveCol = false, haveRow = false;

        if (uPtr(uPtr(elm)->Properties())->TryGet(GridLayout::_columnProperty(), &v))
        {
            colAt = uUnbox<int>(::g::Uno::Int_typeof(), v);
            haveCol = true;
        }

        if (uPtr(uPtr(elm)->Properties())->TryGet(GridLayout::_rowProperty(), &v))
        {
            rowAt = uUnbox<int>(::g::Uno::Int_typeof(), v);
            haveRow = true;
        }

        if (haveRow && !haveCol)
            colAt = 0;

        if (haveCol && !haveRow)
            rowAt = 0;

        if (!haveRow && !haveCol)
        {
            if (rowMajor)

                while (rowAt < (::g::Uno::Collections::List__get_Item_fn(uPtr(majorAvail), uCRef<int>(colAt), &ret12), ret12))
                {
                    colAt++;

                    if (colAt >= minorCount)
                    {
                        rowAt++;
                        colAt = 0;
                    }
                }
            else

                while (colAt < (::g::Uno::Collections::List__get_Item_fn(uPtr(majorAvail), uCRef<int>(rowAt), &ret13), ret13))
                {
                    rowAt++;

                    if (rowAt >= minorCount)
                    {
                        colAt++;
                        rowAt = 0;
                    }
                }
        }

        uPtr(uPtr(elm)->Properties())->Set(GridLayout::_actualRowProperty(), uBox<int>(::g::Uno::Int_typeof(), rowAt));
        uPtr(elm->Properties())->Set(GridLayout::_actualColumnProperty(), uBox<int>(::g::Uno::Int_typeof(), colAt));
        int xs = GridLayout::GetColumnSpan(elm);
        int ys = GridLayout::GetRowSpan(elm);
        maxRow = ::g::Uno::Math::Max8(maxRow, rowAt + ys);
        maxCol = ::g::Uno::Math::Max8(maxCol, colAt + xs);

        if (rowMajor)

            for (int c1 = colAt; c1 < ::g::Uno::Math::Min8(minorCount, colAt + xs); c1++)
                ::g::Uno::Collections::List__set_Item_fn(uPtr(majorAvail), uCRef<int>(c1), uCRef<int>(rowAt + ys));
        else

            for (int c2 = rowAt; c2 < ::g::Uno::Math::Min8(minorCount, rowAt + ys); c2++)
                ::g::Uno::Collections::List__set_Item_fn(uPtr(majorAvail), uCRef<int>(c2), uCRef<int>(colAt + xs));
    }

    TrimPad(::TYPES[21/*Fuse.Layouts.GridLayout.TrimPad<Fuse.Layouts.Row>*/], (uObject*)_rows, maxRow, _defaultRow);
    TrimPad(::TYPES[22/*Fuse.Layouts.GridLayout.TrimPad<Fuse.Layouts.Column>*/], (uObject*)_columns, maxCol, _defaultColumn);
}

// private void CalcAuto(Uno.Collections.IList<Fuse.Node> elements, float& availableWidth, float& availableHeight, bool secondPass, bool hasFirstHorzSize, bool hasFirstVertSize, bool expandWidth, bool expandHeight) [instance] :1664
void GridLayout::CalcAuto(uObject* elements, float* availableWidth, float* availableHeight, bool secondPass, bool hasFirstHorzSize, bool hasFirstVertSize, bool expandWidth, bool expandHeight)
{
    uStackFrame __("Fuse.Layouts.GridLayout", "CalcAuto(Uno.Collections.IList<Fuse.Node>,float&,float&,bool,bool,bool,bool,bool)");
    ::g::Fuse::Node* ret14;

    for (int nx = 0; nx < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(elements), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/])); nx++)
    {
        ::g::Fuse::Visual* child = uAs< ::g::Fuse::Visual*>((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(elements), ::TYPES[2/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(nx), &ret14), ret14), ::TYPES[1/*Fuse.Visual*/]);

        if (!AffectsLayout(child))
            continue;

        int x = GetActualColumn(child);
        int y = GetActualRow(child);
        ::g::Fuse::Layouts::Column* colData = GetColumnData(x);

        if (colData == NULL)
            continue;

        ::g::Fuse::Layouts::Row* rowData = GetRowData(y);

        if (rowData == NULL)
            continue;

        bool sizeMatch = ((EffectiveMetric(uPtr(rowData)->Metric(), expandWidth) == 1) && !hasFirstVertSize) || ((EffectiveMetric(uPtr(colData)->Metric(), expandHeight) == 1) && !hasFirstHorzSize);

        if (sizeMatch != secondPass)
            continue;

        bool knowX = false;
        bool knowY = false;
        bool autoX = false;
        bool autoY = false;
        ::g::Uno::Float2 knowSize = GetAutoSize(child, x, y, expandWidth, expandHeight, &knowX, &knowY, &autoX, &autoY);

        if (!autoX && !autoY)
            continue;

        ::g::Fuse::LayoutParams clp = ::g::Fuse::LayoutParams__CreateXY(knowSize, knowX && !autoX, knowY && !autoY);
        ::g::Uno::Float2 cds = uPtr(child)->GetMarginSize(clp);

        if (autoX)
        {
            float w = ::g::Uno::Math::Max1(uPtr(colData)->ActualExtent, cds.X);
            *availableWidth = *availableWidth - (w - colData->ActualExtent);
            colData->ActualExtent = w;
            colData->HasActualExtent = true;
        }

        if (autoY)
        {
            float h = ::g::Uno::Math::Max1(uPtr(rowData)->ActualExtent, cds.Y);
            *availableHeight = *availableHeight - (h - rowData->ActualExtent);
            rowData->ActualExtent = h;
            rowData->HasActualExtent = true;
        }
    }

    *availableWidth = ::g::Uno::Math::Max1(*availableWidth, 0.0f);
    *availableHeight = ::g::Uno::Math::Max1(*availableHeight, 0.0f);
}

// private void CalcFill<T>(Uno.Collections.IList<T> list, float available, float proportion, bool expand) [instance] :1555
void GridLayout::CalcFill(uType* __type, uObject* list, float available, float proportion, bool expand)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.ICollection<T>*/),
        __type->Precalced(1/*Uno.Collections.IList<T>*/),
    };
    uStackFrame __("Fuse.Layouts.GridLayout", "CalcFill`1(Uno.Collections.IList<T>,float,float,bool)");
    ::g::Fuse::Layouts::DefinitionBase* ret15;
    float extraWidth = 0.0f;
    float colWidth = available / proportion;

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(list), __types[0])); i++)
    {
        ::g::Fuse::Layouts::DefinitionBase* c = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(list), __types[1]), uCRef<int>(i), &ret15), ret15);

        if (EffectiveMetric(uPtr(c)->Metric(), expand) != 1)
            continue;

        float w = Snap((uPtr(c)->Extent() * colWidth) + extraWidth);
        extraWidth = extraWidth + ((c->Extent() * colWidth) - w);
        c->ActualExtent = w;
        c->HasActualExtent = true;
    }
}

// private void CalcInitialExtents<T>(Uno.Collections.IList<T> list, bool expand, float& used, bool& hasAuto) [instance] :1575
void GridLayout::CalcInitialExtents(uType* __type, uObject* list, bool expand, float* used, bool* hasAuto)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.ICollection<T>*/),
        __type->Precalced(1/*Uno.Collections.IList<T>*/),
    };
    uStackFrame __("Fuse.Layouts.GridLayout", "CalcInitialExtents`1(Uno.Collections.IList<T>,bool,float&,bool&)");
    ::g::Fuse::Layouts::DefinitionBase* ret16;
    *hasAuto = false;
    *used = 0.0f;

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(list), __types[0])); i++)
    {
        ::g::Fuse::Layouts::DefinitionBase* c = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(list), __types[1]), uCRef<int>(i), &ret16), ret16);
        uPtr(c)->ActualExtent = 0.0f;
        c->HasActualExtent = false;

        if ((c != NULL) && (EffectiveMetric(c->Metric(), expand) == 0))
        {
            uPtr(c)->ActualExtent = uPtr(c)->Extent();
            c->HasActualExtent = true;
            *used = *used + c->Extent();
        }

        if (EffectiveMetric(c->Metric(), expand) == 2)
            *hasAuto = true;
    }
}

// private float CalcTotalExtentAndOffset<T>(Uno.Collections.IList<T> list, float effectiveCellSpacing) [instance] :1598
float GridLayout::CalcTotalExtentAndOffset(uType* __type, uObject* list, float effectiveCellSpacing)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.ICollection<T>*/),
        __type->Precalced(1/*Uno.Collections.IList<T>*/),
    };
    uStackFrame __("Fuse.Layouts.GridLayout", "CalcTotalExtentAndOffset`1(Uno.Collections.IList<T>,float)");
    ::g::Fuse::Layouts::DefinitionBase* ret17;
    float total = 0.0f;

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(list), __types[0])); i++)
    {
        if (i > 0)
            total = total + effectiveCellSpacing;

        ::g::Fuse::Layouts::DefinitionBase* c = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(list), __types[1]), uCRef<int>(i), &ret17), ret17);
        uPtr(c)->ActualOffset(total);
        total = total + c->ActualExtent;
    }

    return total;
}

// public float get_CellSpacing() [instance] :1190
float GridLayout::CellSpacing()
{
    return _cellSpacing;
}

// public void set_CellSpacing(float value) [instance] :1191
void GridLayout::CellSpacing(float value)
{
    uStackFrame __("Fuse.Layouts.GridLayout", "set_CellSpacing(float)");

    if (_cellSpacing != value)
    {
        _cellSpacing = value;
        Changed();
    }
}

// private void Changed() [instance] :1457
void GridLayout::Changed()
{
    uStackFrame __("Fuse.Layouts.GridLayout", "Changed()");
    InvalidateLayout();
}

// public Fuse.Layouts.GridChildOrder get_ChildOrder() [instance] :1056
int GridLayout::ChildOrder()
{
    return _childOrder;
}

// public void set_ChildOrder(Fuse.Layouts.GridChildOrder value) [instance] :1057
void GridLayout::ChildOrder(int value)
{
    uStackFrame __("Fuse.Layouts.GridLayout", "set_ChildOrder(Fuse.Layouts.GridChildOrder)");

    if (_childOrder != value)
    {
        _childOrder = value;
        Changed();
    }
}

// public int get_ColumnCount() [instance] :1169
int GridLayout::ColumnCount()
{
    uStackFrame __("Fuse.Layouts.GridLayout", "get_ColumnCount()");
    return ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(ColumnList()), ::TYPES[37/*Uno.Collections.ICollection<Fuse.Layouts.Column>*/]));
}

// public void set_ColumnCount(int value) [instance] :1170
void GridLayout::ColumnCount(int value)
{
    uStackFrame __("Fuse.Layouts.GridLayout", "set_ColumnCount(int)");
    ModifyCount(::TYPES[38/*Fuse.Layouts.GridLayout.ModifyCount<Fuse.Layouts.Column>*/], (uObject*)_columns, value, _defaultColumn);
}

// public Uno.Collections.IList<Fuse.Layouts.Column> get_ColumnList() [instance] :1143
uObject* GridLayout::ColumnList()
{
    uStackFrame __("Fuse.Layouts.GridLayout", "get_ColumnList()");
    return (uObject*)_columns;
}

// public string get_Columns() [instance] :1147
uString* GridLayout::Columns()
{
    uStackFrame __("Fuse.Layouts.GridLayout", "get_Columns()");
    return ::g::Fuse::Layouts::DefinitionBase::Serialize1(::TYPES[39/*Fuse.Layouts.DefinitionBase.Serialize<Fuse.Layouts.Column>*/], ColumnList());
}

// public void set_Columns(string value) [instance] :1148
void GridLayout::Columns(uString* value)
{
    uStackFrame __("Fuse.Layouts.GridLayout", "set_Columns(string)");
    ::g::Fuse::Layouts::DefinitionBase::Parse1(::TYPES[40/*Fuse.Layouts.DefinitionBase.Parse<Fuse.Layouts.Column>*/], value, ColumnList());
    Changed();
}

// public Fuse.Elements.Alignment get_ContentAlignment() [instance] :1204
int GridLayout::ContentAlignment()
{
    return _contentAlignment;
}

// public void set_ContentAlignment(Fuse.Elements.Alignment value) [instance] :1205
void GridLayout::ContentAlignment(int value)
{
    uStackFrame __("Fuse.Layouts.GridLayout", "set_ContentAlignment(Fuse.Elements.Alignment)");

    if (_contentAlignment != value)
    {
        _contentAlignment = value;
        Changed();
    }
}

// public string get_DefaultColumn() [instance] :1159
uString* GridLayout::DefaultColumn()
{
    uStackFrame __("Fuse.Layouts.GridLayout", "get_DefaultColumn()");
    return uPtr(_defaultColumn)->Serialize();
}

// public void set_DefaultColumn(string value) [instance] :1160
void GridLayout::DefaultColumn(uString* value)
{
    uStackFrame __("Fuse.Layouts.GridLayout", "set_DefaultColumn(string)");
    _defaultColumn = ((::g::Fuse::Layouts::Column*)::g::Fuse::Layouts::DefinitionBase::Parse(::TYPES[41/*Fuse.Layouts.DefinitionBase.Parse<Fuse.Layouts.Column>*/], value));
    ModifyDefault(::TYPES[42/*Fuse.Layouts.GridLayout.ModifyDefault<Fuse.Layouts.Column>*/], _columns, _defaultColumn);
}

// public string get_DefaultRow() [instance] :1071
uString* GridLayout::DefaultRow()
{
    uStackFrame __("Fuse.Layouts.GridLayout", "get_DefaultRow()");
    return uPtr(_defaultRow)->Serialize();
}

// public void set_DefaultRow(string value) [instance] :1072
void GridLayout::DefaultRow(uString* value)
{
    uStackFrame __("Fuse.Layouts.GridLayout", "set_DefaultRow(string)");
    _defaultRow = ((::g::Fuse::Layouts::Row*)::g::Fuse::Layouts::DefinitionBase::Parse(::TYPES[43/*Fuse.Layouts.DefinitionBase.Parse<Fuse.Layouts.Row>*/], value));
    ModifyDefault(::TYPES[44/*Fuse.Layouts.GridLayout.ModifyDefault<Fuse.Layouts.Row>*/], _rows, _defaultRow);
}

// private void DefinitionAdded(Fuse.Layouts.DefinitionBase r) [instance] :1462
void GridLayout::DefinitionAdded(::g::Fuse::Layouts::DefinitionBase* r)
{
    uStackFrame __("Fuse.Layouts.GridLayout", "DefinitionAdded(Fuse.Layouts.DefinitionBase)");

    if (!IsRootingStarted())
        return;

    if (AddListener(r))
        Changed();
}

// private void DefinitionRemoved(Fuse.Layouts.DefinitionBase r) [instance] :1470
void GridLayout::DefinitionRemoved(::g::Fuse::Layouts::DefinitionBase* r)
{
    uStackFrame __("Fuse.Layouts.GridLayout", "DefinitionRemoved(Fuse.Layouts.DefinitionBase)");

    if (!IsRootingStarted())
        return;

    if (RemoveListener(r))
        Changed();
}

// private float get_EffectiveCellSpacing() [instance] :1529
float GridLayout::EffectiveCellSpacing()
{
    return SnapUp(CellSpacing());
}

// private Fuse.Elements.Alignment get_EffectiveContentAlignment() [instance] :1793
int GridLayout::EffectiveContentAlignment()
{
    uStackFrame __("Fuse.Layouts.GridLayout", "get_EffectiveContentAlignment()");
    int ca = ContentAlignment();

    if (ca == 0)
    {
        if (Container != NULL)
            ca = uPtr(Container)->Alignment();
        else
            ca = 5;
    }

    return ca;
}

// private Fuse.Layouts.Metric EffectiveMetric(Fuse.Layouts.Metric src, bool expand) [instance] :1536
int GridLayout::EffectiveMetric(int src, bool expand)
{
    if (src == 3)
        return expand ? 1 : 2;

    return src;
}

// private int GetActualColumn(Fuse.Visual elm) [instance] :1411
int GridLayout::GetActualColumn(::g::Fuse::Visual* elm)
{
    uStackFrame __("Fuse.Layouts.GridLayout", "GetActualColumn(Fuse.Visual)");
    uObject* v;

    if (uPtr(uPtr(elm)->Properties())->TryGet(GridLayout::_actualColumnProperty(), &v))
        return uUnbox<int>(::g::Uno::Int_typeof(), v);

    return -1;
}

// private int GetActualRow(Fuse.Visual elm) [instance] :1235
int GridLayout::GetActualRow(::g::Fuse::Visual* elm)
{
    uStackFrame __("Fuse.Layouts.GridLayout", "GetActualRow(Fuse.Visual)");
    uObject* v;

    if (uPtr(uPtr(elm)->Properties())->TryGet(GridLayout::_actualRowProperty(), &v))
        return uUnbox<int>(::g::Uno::Int_typeof(), v);

    return -1;
}

// private float2 GetAutoSize(Fuse.Visual child, int x0, int y0, bool expandX, bool expandY, bool& knowX, bool& knowY, bool& autoX, bool& autoY) [instance] :1614
::g::Uno::Float2 GridLayout::GetAutoSize(::g::Fuse::Visual* child, int x0, int y0, bool expandX, bool expandY, bool* knowX, bool* knowY, bool* autoX, bool* autoY)
{
    uStackFrame __("Fuse.Layouts.GridLayout", "GetAutoSize(Fuse.Visual,int,int,bool,bool,bool&,bool&,bool&,bool&)");
    int xs = GridLayout::GetColumnSpan(child);
    int ys = GridLayout::GetRowSpan(child);
    ::g::Uno::Float2 sz = ::g::Uno::Float2__New1(0.0f);
    *knowX = true;
    *knowY = true;
    *autoX = xs == 1;
    *autoY = ys == 1;

    for (int x = x0; x < (x0 + xs); x++)
    {
        ::g::Fuse::Layouts::Column* colData = GetColumnData(x);

        if ((colData == NULL) || (EffectiveMetric(uPtr(colData)->Metric(), expandX) == 2))
            *knowX = false;
        else
        {
            *autoX = false;

            if (!uPtr(colData)->HasActualExtent)
                *knowX = false;
            else
                sz.X = (sz.X + uPtr(colData)->ActualExtent);
        }

        for (int y = y0; y < (y0 + ys); y++)
        {
            ::g::Fuse::Layouts::Row* rowData = GetRowData(y);

            if ((rowData == NULL) || (EffectiveMetric(uPtr(rowData)->Metric(), expandY) == 2))
                *knowY = false;
            else
            {
                *autoY = false;

                if (!uPtr(rowData)->HasActualExtent)
                    *knowY = false;
                else
                    sz.Y = (sz.Y + uPtr(rowData)->ActualExtent);
            }
        }
    }

    return sz;
}

// private Fuse.Layouts.Column GetColumnData(int column) [instance] :1173
::g::Fuse::Layouts::Column* GridLayout::GetColumnData(int column)
{
    uStackFrame __("Fuse.Layouts.GridLayout", "GetColumnData(int)");
    ::g::Fuse::Layouts::Column* ret18;

    if ((column >= 0) && (column < uPtr(_columns)->Count()))
        return (::g::Uno::Collections::ObservableList__get_Item_fn(uPtr(_columns), uCRef<int>(column), &ret18), ret18);

    return NULL;
}

// private Fuse.Layouts.Row GetRowData(int row) [instance] :1180
::g::Fuse::Layouts::Row* GridLayout::GetRowData(int row)
{
    uStackFrame __("Fuse.Layouts.GridLayout", "GetRowData(int)");
    ::g::Fuse::Layouts::Row* ret19;

    if ((row >= 0) && (row < uPtr(_rows)->Count()))
        return (::g::Uno::Collections::ObservableList__get_Item_fn(uPtr(_rows), uCRef<int>(row), &ret19), ret19);

    return NULL;
}

// private float GetTotalProportion<T>(Uno.Collections.IList<T> list, bool expand) [instance] :1543
float GridLayout::GetTotalProportion(uType* __type, uObject* list, bool expand)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.ICollection<T>*/),
        __type->Precalced(1/*Uno.Collections.IList<T>*/),
    };
    uStackFrame __("Fuse.Layouts.GridLayout", "GetTotalProportion`1(Uno.Collections.IList<T>,bool)");
    ::g::Fuse::Layouts::DefinitionBase* ret20;
    float total = 0.0f;

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(list), __types[0])); i++)
    {
        ::g::Fuse::Layouts::DefinitionBase* c = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(list), __types[1]), uCRef<int>(i), &ret20), ret20);

        if (EffectiveMetric(uPtr(c)->Metric(), expand) == 1)
            total = total + uPtr(c)->Extent();
    }

    return total;
}

// private float2 Measure(Uno.Collections.IList<Fuse.Node> elements, Fuse.LayoutParams lp) [instance] :1722
::g::Uno::Float2 GridLayout::Measure(uObject* elements, ::g::Fuse::LayoutParams lp)
{
    uStackFrame __("Fuse.Layouts.GridLayout", "Measure(Uno.Collections.IList<Fuse.Node>,Fuse.LayoutParams)");
    float effectiveCellSpacing = EffectiveCellSpacing();
    CalcActualPositions(elements);
    bool fillHorizontal = lp.HasX();
    bool fillVertical = lp.HasY();
    float availableWidth = lp.X() - (effectiveCellSpacing * (float)::g::Uno::Math::Max8(0, uPtr(_columns)->Count() - 1));
    float availableHeight = lp.Y() - (effectiveCellSpacing * (float)::g::Uno::Math::Max8(0, uPtr(_rows)->Count() - 1));
    bool expandWidth = fillHorizontal;
    bool expandHeight = fillVertical;
    bool hasAutoCol;
    float usedWidth;
    CalcInitialExtents(::TYPES[23/*Fuse.Layouts.GridLayout.CalcInitialExtents<Fuse.Layouts.Column>*/], (uObject*)_columns, expandWidth, &usedWidth, &hasAutoCol);
    bool hasAutoRow;
    float usedHeight;
    CalcInitialExtents(::TYPES[24/*Fuse.Layouts.GridLayout.CalcInitialExtents<Fuse.Layouts.Row>*/], (uObject*)_rows, expandHeight, &usedHeight, &hasAutoRow);
    availableWidth = ::g::Uno::Math::Max1(availableWidth - usedWidth, 0.0f);
    availableHeight = ::g::Uno::Math::Max1(availableHeight - usedHeight, 0.0f);
    float widthProportion = GetTotalProportion(::TYPES[25/*Fuse.Layouts.GridLayout.GetTotalProportion<Fuse.Layouts.Column>*/], (uObject*)_columns, expandWidth);
    float heightProportion = GetTotalProportion(::TYPES[26/*Fuse.Layouts.GridLayout.GetTotalProportion<Fuse.Layouts.Row>*/], (uObject*)_rows, expandHeight);
    bool hasFirstHorzSize = false;

    if (!hasAutoCol && fillHorizontal)
    {
        CalcFill(::TYPES[27/*Fuse.Layouts.GridLayout.CalcFill<Fuse.Layouts.Column>*/], (uObject*)_columns, availableWidth, widthProportion, expandWidth);
        hasFirstHorzSize = true;
    }

    bool hasFirstVertSize = false;

    if (!hasAutoRow && fillVertical)
    {
        CalcFill(::TYPES[28/*Fuse.Layouts.GridLayout.CalcFill<Fuse.Layouts.Row>*/], (uObject*)_rows, availableHeight, heightProportion, expandHeight);
        hasFirstVertSize = true;
    }

    CalcAuto(elements, &availableWidth, &availableHeight, false, hasFirstHorzSize, hasFirstVertSize, expandWidth, expandHeight);

    if (fillHorizontal && !hasFirstHorzSize)
        CalcFill(::TYPES[27/*Fuse.Layouts.GridLayout.CalcFill<Fuse.Layouts.Column>*/], (uObject*)_columns, availableWidth, widthProportion, expandWidth);

    if (fillVertical && !hasFirstVertSize)
        CalcFill(::TYPES[28/*Fuse.Layouts.GridLayout.CalcFill<Fuse.Layouts.Row>*/], (uObject*)_rows, availableHeight, heightProportion, expandHeight);

    CalcAuto(elements, &availableWidth, &availableHeight, true, hasFirstHorzSize, hasFirstVertSize, expandWidth, expandHeight);
    float totalWidth = CalcTotalExtentAndOffset(::TYPES[29/*Fuse.Layouts.GridLayout.CalcTotalExtentAndOffset<Fuse.Layouts.Column>*/], (uObject*)_columns, effectiveCellSpacing);
    float totalHeight = CalcTotalExtentAndOffset(::TYPES[30/*Fuse.Layouts.GridLayout.CalcTotalExtentAndOffset<Fuse.Layouts.Row>*/], (uObject*)_rows, effectiveCellSpacing);
    return ::g::Uno::Float2__New2(totalWidth, totalHeight);
}

// private void ModifyCount<T>(Uno.Collections.IList<T> list, int count, T primordial) [instance] :1109
void GridLayout::ModifyCount(uType* __type, uObject* list, int count, ::g::Fuse::Layouts::DefinitionBase* primordial)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.ICollection<T>*/),
        __type->U(0),
        __type->Precalced(1/*Fuse.Layouts.DefinitionBase.Copy<T>*/),
        __type->Precalced(2/*Uno.Collections.IListExtensions.RemoveLast<T>*/),
        __type->Precalced(3/*Uno.Collections.IList<T>*/),
    };
    uStackFrame __("Fuse.Layouts.GridLayout", "ModifyCount`1(Uno.Collections.IList<T>,int,T)");
    ::g::Fuse::Layouts::DefinitionBase* ret21;
    ::g::Fuse::Layouts::DefinitionBase* ret22;
    ::g::Fuse::Layouts::DefinitionBase* ret23;

    if (count == ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(list), __types[0])))
        return;

    if (count < 0)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[5/*"RowCount an...*/], this, ::STRINGS[6/*"/Users/most...*/], 1119, ::STRINGS[7/*"ModifyCount"*/]);
        return;
    }

    while (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(list), __types[0])) < count)
    {
        ::g::Fuse::Layouts::DefinitionBase* n = (::g::Fuse::Layouts::DefinitionBase*)__types[1]->New();
        n->Copy(__types[2], primordial, 2);
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(list), __types[0]), n);
    }

    while (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(list), __types[0])) > count)
        ::g::Uno::Collections::IListExtensions__RemoveLast_fn(__types[3], list, &ret21);

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(list), __types[0])); ++i)
        if (uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(list), __types[4]), uCRef<int>(i), &ret22), ret22))->IsImplied())
            uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(list), __types[4]), uCRef<int>(i), &ret23), ret23))->Creation = 2;

    Changed();
}

// private void ModifyDefault<T>(Uno.Collections.ObservableList<T> list, T primordial) [instance] :1079
void GridLayout::ModifyDefault(uType* __type, ::g::Uno::Collections::ObservableList* list, ::g::Fuse::Layouts::DefinitionBase* primordial)
{
    uType* __types[] = {
        __type->U(0),
        __type->Precalced(0/*Fuse.Layouts.DefinitionBase.Copy<T>*/),
    };
    uStackFrame __("Fuse.Layouts.GridLayout", "ModifyDefault`1(Uno.Collections.ObservableList<T>,T)");
    ::g::Fuse::Layouts::DefinitionBase* ret24;
    ::g::Fuse::Layouts::DefinitionBase* ret25;

    for (int i = 0; i < uPtr(list)->Count(); ++i)
        if (uPtr((::g::Uno::Collections::ObservableList__get_Item_fn(uPtr(list), uCRef<int>(i), &ret24), ret24))->UsesDefault())
        {
            ::g::Fuse::Layouts::DefinitionBase* n = (::g::Fuse::Layouts::DefinitionBase*)__types[0]->New();
            n->Copy(__types[1], primordial, uPtr((::g::Uno::Collections::ObservableList__get_Item_fn(uPtr(list), uCRef<int>(i), &ret25), ret25))->Creation);
            ::g::Uno::Collections::ObservableList__ReplaceAt_fn(list, uCRef<int>(i), n);
        }

    Changed();
}

// private bool RemoveListener(Fuse.Layouts.DefinitionBase item) [instance] :1486
bool GridLayout::RemoveListener(::g::Fuse::Layouts::DefinitionBase* item)
{
    uStackFrame __("Fuse.Layouts.GridLayout", "RemoveListener(Fuse.Layouts.DefinitionBase)");

    if (uPtr(item)->Creation != 0)
        return false;

    uPtr(item)->remove_Changed(uDelegate::New(::TYPES[13/*Uno.Action*/], (void*)GridLayout__Changed_fn, this));
    return true;
}

// private void RemoveListeners<T>(Uno.Collections.IList<T> list) [instance] :1502
void GridLayout::RemoveListeners(uType* __type, uObject* list)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.ICollection<T>*/),
        __type->Precalced(1/*Uno.Collections.IList<T>*/),
    };
    uStackFrame __("Fuse.Layouts.GridLayout", "RemoveListeners`1(Uno.Collections.IList<T>)");
    ::g::Fuse::Layouts::DefinitionBase* ret26;

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(list), __types[0])); ++i)
        RemoveListener((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(list), __types[1]), uCRef<int>(i), &ret26), ret26));
}

// public int get_RowCount() [instance] :1095
int GridLayout::RowCount()
{
    uStackFrame __("Fuse.Layouts.GridLayout", "get_RowCount()");
    return ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(RowList()), ::TYPES[45/*Uno.Collections.ICollection<Fuse.Layouts.Row>*/]));
}

// public void set_RowCount(int value) [instance] :1096
void GridLayout::RowCount(int value)
{
    uStackFrame __("Fuse.Layouts.GridLayout", "set_RowCount(int)");
    ModifyCount(::TYPES[46/*Fuse.Layouts.GridLayout.ModifyCount<Fuse.Layouts.Row>*/], (uObject*)_rows, value, _defaultRow);
}

// public Uno.Collections.IList<Fuse.Layouts.Row> get_RowList() [instance] :1041
uObject* GridLayout::RowList()
{
    uStackFrame __("Fuse.Layouts.GridLayout", "get_RowList()");
    return (uObject*)_rows;
}

// public string get_Rows() [instance] :1045
uString* GridLayout::Rows()
{
    uStackFrame __("Fuse.Layouts.GridLayout", "get_Rows()");
    return ::g::Fuse::Layouts::DefinitionBase::Serialize1(::TYPES[47/*Fuse.Layouts.DefinitionBase.Serialize<Fuse.Layouts.Row>*/], RowList());
}

// public void set_Rows(string value) [instance] :1046
void GridLayout::Rows(uString* value)
{
    uStackFrame __("Fuse.Layouts.GridLayout", "set_Rows(string)");
    ::g::Fuse::Layouts::DefinitionBase::Parse1(::TYPES[48/*Fuse.Layouts.DefinitionBase.Parse<Fuse.Layouts.Row>*/], value, RowList());
    Changed();
}

// private void TrimPad<T>(Uno.Collections.IList<T> list, int count, T primordial) [instance] :1393
void GridLayout::TrimPad(uType* __type, uObject* list, int count, ::g::Fuse::Layouts::DefinitionBase* primordial)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.ICollection<T>*/),
        __type->U(0),
        __type->Precalced(1/*Fuse.Layouts.DefinitionBase.Copy<T>*/),
        __type->Precalced(2/*Uno.Collections.IList<T>*/),
    };
    uStackFrame __("Fuse.Layouts.GridLayout", "TrimPad`1(Uno.Collections.IList<T>,int,T)");
    ::g::Fuse::Layouts::DefinitionBase* ret27;

    while (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(list), __types[0])) < count)
    {
        ::g::Fuse::Layouts::DefinitionBase* n = (::g::Fuse::Layouts::DefinitionBase*)__types[1]->New();
        n->Copy(__types[2], primordial, 3);
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(list), __types[0]), n);
    }

    for (int i = ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(list), __types[0])) - 1; i >= count; --i)
    {
        if (!uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(list), __types[3]), uCRef<int>(i), &ret27), ret27))->IsImplied())
            break;

        ::g::Uno::Collections::IList::RemoveAt(uInterface(uPtr(list), __types[3]), i);
    }
}

// private int UserCount<T>(Uno.Collections.IList<T> list) [instance] :1100
int GridLayout::UserCount(uType* __type, uObject* list)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.ICollection<T>*/),
        __type->Precalced(1/*Uno.Collections.IList<T>*/),
    };
    uStackFrame __("Fuse.Layouts.GridLayout", "UserCount`1(Uno.Collections.IList<T>)");
    ::g::Fuse::Layouts::DefinitionBase* ret28;
    int c = ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(list), __types[0]));

    while ((c > 0) && uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(list, __types[1]), uCRef<int>(c - 1), &ret28), ret28))->IsImplied())
        c--;

    return c;
}

// public static int GetColumn(Fuse.Visual elm) [static] :1275
int GridLayout::GetColumn(::g::Fuse::Visual* elm)
{
    uStackFrame __("Fuse.Layouts.GridLayout", "GetColumn(Fuse.Visual)");
    GridLayout_typeof()->Init();
    uObject* v;

    if (uPtr(uPtr(elm)->Properties())->TryGet(GridLayout::_columnProperty(), &v))
        return uUnbox<int>(::g::Uno::Int_typeof(), v);
    else
        return 0;
}

// public static int GetColumnSpan(Fuse.Visual elm) [static] :1432
int GridLayout::GetColumnSpan(::g::Fuse::Visual* elm)
{
    uStackFrame __("Fuse.Layouts.GridLayout", "GetColumnSpan(Fuse.Visual)");
    GridLayout_typeof()->Init();
    uObject* v;

    if (uPtr(uPtr(elm)->Properties())->TryGet(GridLayout::_columnSpanProperty(), &v))
        return uUnbox<int>(::g::Uno::Int_typeof(), v);

    return 1;
}

// public static int GetRow(Fuse.Visual elm) [static] :1228
int GridLayout::GetRow(::g::Fuse::Visual* elm)
{
    uStackFrame __("Fuse.Layouts.GridLayout", "GetRow(Fuse.Visual)");
    GridLayout_typeof()->Init();
    uObject* v;

    if (uPtr(uPtr(elm)->Properties())->TryGet(GridLayout::_rowProperty(), &v))
        return uUnbox<int>(::g::Uno::Int_typeof(), v);
    else
        return 0;
}

// public static int GetRowSpan(Fuse.Visual elm) [static] :1256
int GridLayout::GetRowSpan(::g::Fuse::Visual* elm)
{
    uStackFrame __("Fuse.Layouts.GridLayout", "GetRowSpan(Fuse.Visual)");
    GridLayout_typeof()->Init();
    uObject* v;

    if (uPtr(uPtr(elm)->Properties())->TryGet(GridLayout::_rowSpanProperty(), &v))
        return uUnbox<int>(::g::Uno::Int_typeof(), v);
    else
        return 1;
}

// public GridLayout New() [static] :1451
GridLayout* GridLayout::New2()
{
    GridLayout* obj3 = (GridLayout*)uNew(GridLayout_typeof());
    obj3->ctor_2();
    return obj3;
}

// public static void ResetColumn(Fuse.Visual elm) [static] :1420
void GridLayout::ResetColumn(::g::Fuse::Visual* elm)
{
    uStackFrame __("Fuse.Layouts.GridLayout", "ResetColumn(Fuse.Visual)");
    GridLayout_typeof()->Init();
    uPtr(uPtr(elm)->Properties())->Clear(GridLayout::_columnProperty());
    ::g::Fuse::Layouts::Layout::InvalidateAncestorLayout(elm);
}

// public static void ResetColumnSpan(Fuse.Visual elm) [static] :1442
void GridLayout::ResetColumnSpan(::g::Fuse::Visual* elm)
{
    uStackFrame __("Fuse.Layouts.GridLayout", "ResetColumnSpan(Fuse.Visual)");
    GridLayout_typeof()->Init();
    uPtr(uPtr(elm)->Properties())->Clear(GridLayout::_columnSpanProperty());
    ::g::Fuse::Layouts::Layout::InvalidateAncestorLayout(elm);
}

// public static void ResetRow(Fuse.Visual elm) [static] :1244
void GridLayout::ResetRow(::g::Fuse::Visual* elm)
{
    uStackFrame __("Fuse.Layouts.GridLayout", "ResetRow(Fuse.Visual)");
    GridLayout_typeof()->Init();
    uPtr(uPtr(elm)->Properties())->Clear(GridLayout::_rowProperty());
    ::g::Fuse::Layouts::Layout::InvalidateAncestorLayout(elm);
}

// public static void ResetRowSpan(Fuse.Visual elm) [static] :1263
void GridLayout::ResetRowSpan(::g::Fuse::Visual* elm)
{
    uStackFrame __("Fuse.Layouts.GridLayout", "ResetRowSpan(Fuse.Visual)");
    GridLayout_typeof()->Init();
    uPtr(uPtr(elm)->Properties())->Clear(GridLayout::_rowSpanProperty());
    ::g::Fuse::Layouts::Layout::InvalidateAncestorLayout(elm);
}

// public static void SetColumn(Fuse.Visual elm, int col) [static] :1269
void GridLayout::SetColumn(::g::Fuse::Visual* elm, int col)
{
    uStackFrame __("Fuse.Layouts.GridLayout", "SetColumn(Fuse.Visual,int)");
    GridLayout_typeof()->Init();
    uPtr(uPtr(elm)->Properties())->Set(GridLayout::_columnProperty(), uBox<int>(::g::Uno::Int_typeof(), col));
    ::g::Fuse::Layouts::Layout::InvalidateAncestorLayout(elm);
}

// public static void SetColumnSpan(Fuse.Visual elm, int span) [static] :1426
void GridLayout::SetColumnSpan(::g::Fuse::Visual* elm, int span)
{
    uStackFrame __("Fuse.Layouts.GridLayout", "SetColumnSpan(Fuse.Visual,int)");
    GridLayout_typeof()->Init();
    uPtr(uPtr(elm)->Properties())->Set(GridLayout::_columnSpanProperty(), uBox<int>(::g::Uno::Int_typeof(), span));
    ::g::Fuse::Layouts::Layout::InvalidateAncestorLayout(elm);
}

// public static void SetRow(Fuse.Visual elm, int row) [static] :1222
void GridLayout::SetRow(::g::Fuse::Visual* elm, int row)
{
    uStackFrame __("Fuse.Layouts.GridLayout", "SetRow(Fuse.Visual,int)");
    GridLayout_typeof()->Init();
    uPtr(uPtr(elm)->Properties())->Set(GridLayout::_rowProperty(), uBox<int>(::g::Uno::Int_typeof(), row));
    ::g::Fuse::Layouts::Layout::InvalidateAncestorLayout(elm);
}

// public static void SetRowSpan(Fuse.Visual elm, int span) [static] :1250
void GridLayout::SetRowSpan(::g::Fuse::Visual* elm, int span)
{
    uStackFrame __("Fuse.Layouts.GridLayout", "SetRowSpan(Fuse.Visual,int)");
    GridLayout_typeof()->Init();
    uPtr(uPtr(elm)->Properties())->Set(GridLayout::_rowSpanProperty(), uBox<int>(::g::Uno::Int_typeof(), span));
    ::g::Fuse::Layouts::Layout::InvalidateAncestorLayout(elm);
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Panels/0.42.4/layouts/$.uno
// -------------------------------------------------------------------------------------------------------

// public abstract class Layout :1919
// {
// static Layout() :1919
static void Layout__cctor__fn(uType* __type)
{
    Layout::_fillPaddingProperty_ = ::g::Fuse::Properties::CreateHandle();
}

static void Layout_build(uType* type)
{
    ::STRINGS[8] = uString::Const("Only a single container is supported for Layout");
    ::STRINGS[9] = uString::Const("Removing an invalid container from Layout");
    ::TYPES[1] = ::g::Fuse::Visual_typeof();
    ::TYPES[49] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[50] = ::g::Fuse::Controls::LayoutControl_typeof();
    type->SetFields(1,
        ::TYPES[50/*Fuse.Controls.LayoutControl*/], offsetof(::g::Fuse::Layouts::Layout, Container), 0,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&::g::Fuse::Layouts::Layout::_fillPaddingProperty_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(3,
        new uFunction("GetFillPadding", NULL, (void*)Layout__GetFillPadding_fn, 0, true, ::g::Uno::Bool_typeof(), 1, ::TYPES[1/*Fuse.Visual*/]),
        new uFunction("ResetFillPadding", NULL, (void*)Layout__ResetFillPadding_fn, 0, true, uVoid_typeof(), 1, ::TYPES[1/*Fuse.Visual*/]),
        new uFunction("SetFillPadding", NULL, (void*)Layout__SetFillPadding_fn, 0, true, uVoid_typeof(), 2, ::TYPES[1/*Fuse.Visual*/], ::g::Uno::Bool_typeof()));
}

Layout_type* Layout_typeof()
{
    static uSStrong<Layout_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyObject_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Layout);
    options.TypeSize = sizeof(Layout_type);
    type = (Layout_type*)uClassType::New("Fuse.Layouts.Layout", options);
    type->fp_build_ = Layout_build;
    type->fp_cctor_ = Layout__cctor__fn;
    type->fp_IsMarginBoxDependent = Layout__IsMarginBoxDependent_fn;
    type->fp_OnRooted = Layout__OnRooted_fn;
    type->fp_OnUnrooted = Layout__OnUnrooted_fn;
    return type;
}

// internal Layout() :1924
void Layout__ctor_1_fn(Layout* __this)
{
    __this->ctor_1();
}

// internal static void AdjustAlignBox(Fuse.Visual node, float2 sz, float4 box, Fuse.Elements.Alignment align) :2110
void Layout__AdjustAlignBox_fn(::g::Fuse::Visual* node, ::g::Uno::Float2* sz, ::g::Uno::Float4* box, int* align)
{
    Layout::AdjustAlignBox(node, *sz, *box, *align);
}

// protected bool AffectsLayout(Fuse.Node n) :1985
void Layout__AffectsLayout_fn(Layout* __this, ::g::Fuse::Node* n, bool* __retval)
{
    *__retval = __this->AffectsLayout(n);
}

// protected bool ArrangeMarginBoxSpecial(Fuse.Node n, float4 padding, Fuse.LayoutParams lp) :1998
void Layout__ArrangeMarginBoxSpecial_fn(Layout* __this, ::g::Fuse::Node* n, ::g::Uno::Float4* padding, ::g::Fuse::LayoutParams* lp, bool* __retval)
{
    *__retval = __this->ArrangeMarginBoxSpecial(n, *padding, *lp);
}

// public static bool GetFillPadding(Fuse.Visual n) :1936
void Layout__GetFillPadding_fn(::g::Fuse::Visual* n, bool* __retval)
{
    *__retval = Layout::GetFillPadding(n);
}

// private static Fuse.Controls.LayoutControl GetLayoutControl(Fuse.Visual elm) :2083
void Layout__GetLayoutControl_fn(::g::Fuse::Visual* elm, ::g::Fuse::Controls::LayoutControl** __retval)
{
    *__retval = Layout::GetLayoutControl(elm);
}

// protected static void InvalidateAncestorLayout(Fuse.Visual child) :2032
void Layout__InvalidateAncestorLayout_fn(::g::Fuse::Visual* child)
{
    Layout::InvalidateAncestorLayout(child);
}

// protected void InvalidateLayout() :2045
void Layout__InvalidateLayout_fn(Layout* __this)
{
    __this->InvalidateLayout();
}

// private static void InvalidateLayout(Fuse.Visual elm) :2095
void Layout__InvalidateLayout1_fn(::g::Fuse::Visual* elm)
{
    Layout::InvalidateLayout1(elm);
}

// internal virtual Fuse.LayoutDependent IsMarginBoxDependent(Fuse.Visual child) :2039
void Layout__IsMarginBoxDependent_fn(Layout* __this, ::g::Fuse::Visual* child, int* __retval)
{
    return *__retval = 4, void();
}

// internal bool get_IsRootingStarted() :1980
void Layout__get_IsRootingStarted_fn(Layout* __this, bool* __retval)
{
    *__retval = __this->IsRootingStarted();
}

// protected virtual void OnRooted() :1963
void Layout__OnRooted_fn(Layout* __this)
{
}

// protected virtual void OnUnrooted() :1975
void Layout__OnUnrooted_fn(Layout* __this)
{
}

// public static void ResetFillPadding(Fuse.Visual n) :1947
void Layout__ResetFillPadding_fn(::g::Fuse::Visual* n)
{
    Layout::ResetFillPadding(n);
}

// internal void Rooted(Fuse.Controls.LayoutControl element) :1955
void Layout__Rooted_fn(Layout* __this, ::g::Fuse::Controls::LayoutControl* element)
{
    __this->Rooted(element);
}

// public static void SetFillPadding(Fuse.Visual n, bool f) :1929
void Layout__SetFillPadding_fn(::g::Fuse::Visual* n, bool* f)
{
    Layout::SetFillPadding(n, *f);
}

// private static float SimpleOff(float sz, float2 range, Fuse.Elements.SimpleAlignment align) :2123
void Layout__SimpleOff_fn(float* sz, ::g::Uno::Float2* range, int* align, float* __retval)
{
    *__retval = Layout::SimpleOff(*sz, *range, *align);
}

// protected float Snap(float p) :2078
void Layout__Snap_fn(Layout* __this, float* p, float* __retval)
{
    *__retval = __this->Snap(*p);
}

// protected float2 Snap(float2 p) :2071
void Layout__Snap1_fn(Layout* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Snap1(*p);
}

// protected bool get_SnapToPixels() :2053
void Layout__get_SnapToPixels_fn(Layout* __this, bool* __retval)
{
    *__retval = __this->SnapToPixels();
}

// protected float SnapUp(float p) :2066
void Layout__SnapUp_fn(Layout* __this, float* p, float* __retval)
{
    *__retval = __this->SnapUp(*p);
}

// protected float2 SnapUp(float2 p) :2059
void Layout__SnapUp1_fn(Layout* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->SnapUp1(*p);
}

// internal void Unrooted(Fuse.Controls.LayoutControl element) :1967
void Layout__Unrooted_fn(Layout* __this, ::g::Fuse::Controls::LayoutControl* element)
{
    __this->Unrooted(element);
}

uSStrong< ::g::Fuse::PropertyHandle*> Layout::_fillPaddingProperty_;

// internal Layout() [instance] :1924
void Layout::ctor_1()
{
    ctor_();
}

// protected bool AffectsLayout(Fuse.Node n) [instance] :1985
bool Layout::AffectsLayout(::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.Layouts.Layout", "AffectsLayout(Fuse.Node)");
    ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(n, ::TYPES[1/*Fuse.Visual*/]);
    return (v != NULL) && ((uPtr(v)->LayoutRole() == 0) || (uPtr(v)->LayoutRole() == 1));
}

// protected bool ArrangeMarginBoxSpecial(Fuse.Node n, float4 padding, Fuse.LayoutParams lp) [instance] :1998
bool Layout::ArrangeMarginBoxSpecial(::g::Fuse::Node* n, ::g::Uno::Float4 padding, ::g::Fuse::LayoutParams lp)
{
    uStackFrame __("Fuse.Layouts.Layout", "ArrangeMarginBoxSpecial(Fuse.Node,float4,Fuse.LayoutParams)");
    ::g::Fuse::Visual* e = uAs< ::g::Fuse::Visual*>(n, ::TYPES[1/*Fuse.Visual*/]);

    if (e == NULL)
        return false;

    int lr = uPtr(e)->LayoutRole();

    if (lr == 3)
    {
        ::g::Fuse::Elements::Element* elm = uAs< ::g::Fuse::Elements::Element*>(e, ::TYPES[49/*Fuse.Elements.Element*/]);

        if (e != NULL)
            uPtr(elm)->RequestLayout();

        return true;
    }

    if (lr == 2)
    {
        bool b = Layout::GetFillPadding(e);
        ::g::Uno::Float2 p = b ? ::g::Uno::Float2__New1(0.0f) : ::g::Uno::Float2__New2(padding.X, padding.Y);
        ::g::Uno::Float2 s = b ? lp.Size() : ::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__op_Subtraction2(lp.Size(), ::g::Uno::Float2__New2(padding.X, padding.Y)), ::g::Uno::Float2__New2(padding.Z, padding.W));
        ::g::Fuse::LayoutParams nlp = lp.CloneAndDerive();
        nlp.SetSize(s, true, true);
        uPtr(e)->ArrangeMarginBox(p, nlp);
        return true;
    }

    return false;
}

// protected void InvalidateLayout() [instance] :2045
void Layout::InvalidateLayout()
{
    uStackFrame __("Fuse.Layouts.Layout", "InvalidateLayout()");

    if (Container != NULL)
        uPtr(Container)->InvalidateLayout(2);
}

// internal bool get_IsRootingStarted() [instance] :1980
bool Layout::IsRootingStarted()
{
    return Container != NULL;
}

// internal void Rooted(Fuse.Controls.LayoutControl element) [instance] :1955
void Layout::Rooted(::g::Fuse::Controls::LayoutControl* element)
{
    uStackFrame __("Fuse.Layouts.Layout", "Rooted(Fuse.Controls.LayoutControl)");

    if (Container != NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[8/*"Only a sing...*/]));

    Container = element;
    OnRooted();
}

// protected float Snap(float p) [instance] :2078
float Layout::Snap(float p)
{
    uStackFrame __("Fuse.Layouts.Layout", "Snap(float)");
    return Snap1(::g::Uno::Float2__New1(p)).X;
}

// protected float2 Snap(float2 p) [instance] :2071
::g::Uno::Float2 Layout::Snap1(::g::Uno::Float2 p)
{
    uStackFrame __("Fuse.Layouts.Layout", "Snap(float2)");

    if (SnapToPixels())
        return uPtr(Container)->InternSnap(p);

    return p;
}

// protected bool get_SnapToPixels() [instance] :2053
bool Layout::SnapToPixels()
{
    uStackFrame __("Fuse.Layouts.Layout", "get_SnapToPixels()");
    return (Container != NULL) && uPtr(Container)->SnapToPixels();
}

// protected float SnapUp(float p) [instance] :2066
float Layout::SnapUp(float p)
{
    uStackFrame __("Fuse.Layouts.Layout", "SnapUp(float)");
    return SnapUp1(::g::Uno::Float2__New1(p)).X;
}

// protected float2 SnapUp(float2 p) [instance] :2059
::g::Uno::Float2 Layout::SnapUp1(::g::Uno::Float2 p)
{
    uStackFrame __("Fuse.Layouts.Layout", "SnapUp(float2)");

    if (SnapToPixels())
        return uPtr(Container)->InternSnapUp(p);

    return p;
}

// internal void Unrooted(Fuse.Controls.LayoutControl element) [instance] :1967
void Layout::Unrooted(::g::Fuse::Controls::LayoutControl* element)
{
    uStackFrame __("Fuse.Layouts.Layout", "Unrooted(Fuse.Controls.LayoutControl)");

    if (element != Container)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[9/*"Removing an...*/]));

    OnUnrooted();
    Container = NULL;
}

// internal static void AdjustAlignBox(Fuse.Visual node, float2 sz, float4 box, Fuse.Elements.Alignment align) [static] :2110
void Layout::AdjustAlignBox(::g::Fuse::Visual* node, ::g::Uno::Float2 sz, ::g::Uno::Float4 box, int align)
{
    uStackFrame __("Fuse.Layouts.Layout", "AdjustAlignBox(Fuse.Visual,float2,float4,Fuse.Elements.Alignment)");
    Layout_typeof()->Init();
    ::g::Uno::Float2 pos = uPtr(node)->MarginBoxPosition();
    int ha = ::g::Fuse::Elements::AlignmentHelpers::GetHorizontalSimpleAlign(align);

    if (ha != 0)
        pos.X = Layout::SimpleOff(sz.X, ::g::Uno::Float2__New2(box.X, box.Z), ha);

    int va = ::g::Fuse::Elements::AlignmentHelpers::GetVerticalSimpleAlign(align);

    if (va != 0)
        pos.Y = Layout::SimpleOff(sz.Y, ::g::Uno::Float2__New2(box.Y, box.W), va);

    node->AdjustMarginBoxPosition(pos);
}

// public static bool GetFillPadding(Fuse.Visual n) [static] :1936
bool Layout::GetFillPadding(::g::Fuse::Visual* n)
{
    uStackFrame __("Fuse.Layouts.Layout", "GetFillPadding(Fuse.Visual)");
    Layout_typeof()->Init();
    uObject* v;

    if (uPtr(uPtr(n)->Properties())->TryGet(Layout::_fillPaddingProperty(), &v))
        return uUnbox<bool>(::g::Uno::Bool_typeof(), v);

    return (uPtr(n)->Layer() == 1) || (uPtr(n)->Layer() == 0);
}

// private static Fuse.Controls.LayoutControl GetLayoutControl(Fuse.Visual elm) [static] :2083
::g::Fuse::Controls::LayoutControl* Layout::GetLayoutControl(::g::Fuse::Visual* elm)
{
    uStackFrame __("Fuse.Layouts.Layout", "GetLayoutControl(Fuse.Visual)");
    Layout_typeof()->Init();

    while (elm != NULL)
    {
        if (uIs(elm, ::TYPES[50/*Fuse.Controls.LayoutControl*/]))
            return uAs< ::g::Fuse::Controls::LayoutControl*>(elm, ::TYPES[50/*Fuse.Controls.LayoutControl*/]);

        elm = uPtr(elm)->Parent();
    }

    return NULL;
}

// protected static void InvalidateAncestorLayout(Fuse.Visual child) [static] :2032
void Layout::InvalidateAncestorLayout(::g::Fuse::Visual* child)
{
    uStackFrame __("Fuse.Layouts.Layout", "InvalidateAncestorLayout(Fuse.Visual)");
    Layout_typeof()->Init();

    if (uPtr(child)->Parent() != NULL)
        uPtr(uPtr(child)->Parent())->InvalidateLayout(2);
}

// private static void InvalidateLayout(Fuse.Visual elm) [static] :2095
void Layout::InvalidateLayout1(::g::Fuse::Visual* elm)
{
    uStackFrame __("Fuse.Layouts.Layout", "InvalidateLayout(Fuse.Visual)");
    Layout_typeof()->Init();
    ::g::Fuse::Controls::LayoutControl* p = Layout::GetLayoutControl(elm);

    if (p != NULL)
        uPtr(p)->InvalidateLayout(2);
}

// public static void ResetFillPadding(Fuse.Visual n) [static] :1947
void Layout::ResetFillPadding(::g::Fuse::Visual* n)
{
    uStackFrame __("Fuse.Layouts.Layout", "ResetFillPadding(Fuse.Visual)");
    Layout_typeof()->Init();
    uPtr(uPtr(n)->Properties())->Clear(Layout::_fillPaddingProperty());
    Layout::InvalidateLayout1(n);
}

// public static void SetFillPadding(Fuse.Visual n, bool f) [static] :1929
void Layout::SetFillPadding(::g::Fuse::Visual* n, bool f)
{
    uStackFrame __("Fuse.Layouts.Layout", "SetFillPadding(Fuse.Visual,bool)");
    Layout_typeof()->Init();
    uPtr(uPtr(n)->Properties())->Set(Layout::_fillPaddingProperty(), uBox(::g::Uno::Bool_typeof(), f));
    Layout::InvalidateLayout1(n);
}

// private static float SimpleOff(float sz, float2 range, Fuse.Elements.SimpleAlignment align) [static] :2123
float Layout::SimpleOff(float sz, ::g::Uno::Float2 range, int align)
{
    uStackFrame __("Fuse.Layouts.Layout", "SimpleOff(float,float2,Fuse.Elements.SimpleAlignment)");
    Layout_typeof()->Init();

    if (align == 1)
        return ((range.Item(1) + range.Item(0)) / 2.0f) - (sz / 2.0f);
    else if (align == 2)
        return range.Item(1) - sz;
    else
        return range.Item(0);
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Panels/0.42.4/layouts/$.uno
// -------------------------------------------------------------------------------------------------------

// public static class Layouts :2134
// {
// static Layouts() :2134
static void Layouts__cctor__fn(uType* __type)
{
    Layouts::Default_ = ::g::Fuse::Layouts::DefaultLayout::New2();
}

static void Layouts_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Layouts::Layout_typeof(), (uintptr_t)&::g::Fuse::Layouts::Layouts::Default_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("Default", 0));
}

uClassType* Layouts_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Layouts.Layouts", options);
    type->fp_build_ = Layouts_build;
    type->fp_cctor_ = Layouts__cctor__fn;
    return type;
}

uSStrong< ::g::Fuse::Layouts::Layout*> Layouts::Default_;
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Panels/0.42.4/layouts/$.uno
// -------------------------------------------------------------------------------------------------------

// public enum Metric :958
uEnumType* Metric_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Layouts.Metric", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Absolute", 0LL,
        "Proportion", 1LL,
        "Auto", 2LL,
        "Default", 3LL);
    return type;
}

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Panels/0.42.4/layouts/$.uno
// -------------------------------------------------------------------------------------------------------

// public enum Orientation :2155
uEnumType* Orientation_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Layouts.Orientation", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Horizontal", 0LL,
        "Vertical", 1LL);
    return type;
}

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Panels/0.42.4/layouts/$.uno
// -------------------------------------------------------------------------------------------------------

// public sealed class Row :1007
// {
static void Row_build(uType* type)
{
    type->SetFields(8);
    type->Reflection.SetFunctions(6,
        new uFunction("get_Height", NULL, (void*)Row__get_Height_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Height", NULL, (void*)Row__set_Height_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_HeightMetric", NULL, (void*)Row__get_HeightMetric_fn, 0, false, ::g::Fuse::Layouts::Metric_typeof(), 0),
        new uFunction("set_HeightMetric", NULL, (void*)Row__set_HeightMetric_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Layouts::Metric_typeof()),
        new uFunction(".ctor", NULL, (void*)Row__New2_fn, 0, true, type, 0),
        new uFunction(".ctor", NULL, (void*)Row__New3_fn, 0, true, type, 2, ::g::Uno::Float_typeof(), ::g::Fuse::Layouts::Metric_typeof()));
}

uType* Row_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Layouts::DefinitionBase_typeof();
    options.FieldCount = 8;
    options.ObjectSize = sizeof(Row);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Layouts.Row", options);
    type->fp_build_ = Row_build;
    type->fp_ctor_ = (void*)Row__New2_fn;
    return type;
}

// public Row() :1009
void Row__ctor_4_fn(Row* __this)
{
    __this->ctor_4();
}

// public Row(float height, Fuse.Layouts.Metric metric) :1011
void Row__ctor_5_fn(Row* __this, float* height, int* metric)
{
    __this->ctor_5(*height, *metric);
}

// private Row(Fuse.Layouts.Row copy, Fuse.Layouts.DefinitionBase.CreationType creation) :1014
void Row__ctor_6_fn(Row* __this, Row* copy, int* creation)
{
    __this->ctor_6(copy, *creation);
}

// public float get_Height() :1025
void Row__get_Height_fn(Row* __this, float* __retval)
{
    *__retval = __this->Height();
}

// public void set_Height(float value) :1026
void Row__set_Height_fn(Row* __this, float* value)
{
    __this->Height(*value);
}

// public Fuse.Layouts.Metric get_HeightMetric() :1019
void Row__get_HeightMetric_fn(Row* __this, int* __retval)
{
    *__retval = __this->HeightMetric();
}

// public void set_HeightMetric(Fuse.Layouts.Metric value) :1020
void Row__set_HeightMetric_fn(Row* __this, int* value)
{
    __this->HeightMetric(*value);
}

// public Row New() :1009
void Row__New2_fn(Row** __retval)
{
    *__retval = Row::New2();
}

// public Row New(float height, Fuse.Layouts.Metric metric) :1011
void Row__New3_fn(float* height, int* metric, Row** __retval)
{
    *__retval = Row::New3(*height, *metric);
}

// private Row New(Fuse.Layouts.Row copy, Fuse.Layouts.DefinitionBase.CreationType creation) :1014
void Row__New4_fn(Row* copy, int* creation, Row** __retval)
{
    *__retval = Row::New4(copy, *creation);
}

// public Row() [instance] :1009
void Row::ctor_4()
{
    ctor_1();
}

// public Row(float height, Fuse.Layouts.Metric metric) [instance] :1011
void Row::ctor_5(float height, int metric)
{
    ctor_2(height, metric);
}

// private Row(Fuse.Layouts.Row copy, Fuse.Layouts.DefinitionBase.CreationType creation) [instance] :1014
void Row::ctor_6(Row* copy, int creation)
{
    uStackFrame __("Fuse.Layouts.Row", ".ctor(Fuse.Layouts.Row,Fuse.Layouts.DefinitionBase.CreationType)");
    ctor_3(copy, creation);
}

// public float get_Height() [instance] :1025
float Row::Height()
{
    return Extent();
}

// public void set_Height(float value) [instance] :1026
void Row::Height(float value)
{
    uStackFrame __("Fuse.Layouts.Row", "set_Height(float)");
    Extent(value);
}

// public Fuse.Layouts.Metric get_HeightMetric() [instance] :1019
int Row::HeightMetric()
{
    return Metric();
}

// public void set_HeightMetric(Fuse.Layouts.Metric value) [instance] :1020
void Row::HeightMetric(int value)
{
    uStackFrame __("Fuse.Layouts.Row", "set_HeightMetric(Fuse.Layouts.Metric)");
    Metric(value);
}

// public Row New() [static] :1009
Row* Row::New2()
{
    Row* obj1 = (Row*)uNew(Row_typeof());
    obj1->ctor_4();
    return obj1;
}

// public Row New(float height, Fuse.Layouts.Metric metric) [static] :1011
Row* Row::New3(float height, int metric)
{
    Row* obj2 = (Row*)uNew(Row_typeof());
    obj2->ctor_5(height, metric);
    return obj2;
}

// private Row New(Fuse.Layouts.Row copy, Fuse.Layouts.DefinitionBase.CreationType creation) [static] :1014
Row* Row::New4(Row* copy, int creation)
{
    Row* obj3 = (Row*)uNew(Row_typeof());
    obj3->ctor_6(copy, creation);
    return obj3;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Panels/0.42.4/layouts/$.uno
// -------------------------------------------------------------------------------------------------------

// public sealed class StackLayout :2167
// {
static void StackLayout_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[1] = ::g::Fuse::Visual_typeof();
    ::TYPES[2] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetFields(2,
        ::g::Fuse::Elements::Alignment_typeof(), offsetof(::g::Fuse::Layouts::StackLayout, _contentAlignment), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Layouts::StackLayout, _itemSpacing), 0,
        ::g::Fuse::Layouts::StackLayoutMode_typeof(), offsetof(::g::Fuse::Layouts::StackLayout, _mode), 0,
        ::g::Fuse::Layouts::Orientation_typeof(), offsetof(::g::Fuse::Layouts::StackLayout, _orientation), 0);
    type->Reflection.SetFunctions(10,
        new uFunction("get_ContentAlignment", NULL, (void*)StackLayout__get_ContentAlignment_fn, 0, false, ::g::Fuse::Elements::Alignment_typeof(), 0),
        new uFunction("set_ContentAlignment", NULL, (void*)StackLayout__set_ContentAlignment_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::Alignment_typeof()),
        new uFunction("get_ItemSpacing", NULL, (void*)StackLayout__get_ItemSpacing_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_ItemSpacing", NULL, (void*)StackLayout__set_ItemSpacing_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Mode", NULL, (void*)StackLayout__get_Mode_fn, 0, false, ::g::Fuse::Layouts::StackLayoutMode_typeof(), 0),
        new uFunction("set_Mode", NULL, (void*)StackLayout__set_Mode_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Layouts::StackLayoutMode_typeof()),
        new uFunction(".ctor", NULL, (void*)StackLayout__New2_fn, 0, true, type, 0),
        new uFunction("get_Orientation", NULL, (void*)StackLayout__get_Orientation_fn, 0, false, ::g::Fuse::Layouts::Orientation_typeof(), 0),
        new uFunction("set_Orientation", NULL, (void*)StackLayout__set_Orientation_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Layouts::Orientation_typeof()),
        new uFunction("ResetOrientation", NULL, (void*)StackLayout__ResetOrientation_fn, 0, false, uVoid_typeof(), 0));
}

::g::Fuse::Layouts::Layout_type* StackLayout_typeof()
{
    static uSStrong< ::g::Fuse::Layouts::Layout_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Layouts::Layout_typeof();
    options.FieldCount = 6;
    options.ObjectSize = sizeof(StackLayout);
    options.TypeSize = sizeof(::g::Fuse::Layouts::Layout_type);
    type = (::g::Fuse::Layouts::Layout_type*)uClassType::New("Fuse.Layouts.StackLayout", options);
    type->fp_build_ = StackLayout_build;
    type->fp_ctor_ = (void*)StackLayout__New2_fn;
    type->fp_ArrangePaddingBox = (void(*)(::g::Fuse::Layouts::Layout*, uObject*, ::g::Uno::Float4*, ::g::Fuse::LayoutParams*))StackLayout__ArrangePaddingBox_fn;
    type->fp_GetContentSize = (void(*)(::g::Fuse::Layouts::Layout*, uObject*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))StackLayout__GetContentSize_fn;
    return type;
}

// public generated StackLayout() :2167
void StackLayout__ctor_2_fn(StackLayout* __this)
{
    __this->ctor_2();
}

// internal override sealed void ArrangePaddingBox(Uno.Collections.IList<Fuse.Node> elements, float4 padding, Fuse.LayoutParams lp) :2331
void StackLayout__ArrangePaddingBox_fn(StackLayout* __this, uObject* elements, ::g::Uno::Float4* padding, ::g::Fuse::LayoutParams* lp)
{
    uStackFrame __("Fuse.Layouts.StackLayout", "ArrangePaddingBox(Uno.Collections.IList<Fuse.Node>,float4,Fuse.LayoutParams)");
    ::g::Uno::Float4 padding_ = *padding;
    ::g::Fuse::LayoutParams lp_ = *lp;
    ::g::Fuse::Node* ret2;
    ::g::Fuse::Node* ret3;
    float d = 0.0f;
    int orientation = __this->Orientation();
    ::g::Uno::Float2 paddingOffset = ::g::Uno::Float2__New2(padding_.X, padding_.Y);
    ::g::Uno::Float2 pad = ::g::Uno::Float2__op_Addition2(::g::Uno::Float2__New2(padding_.X, padding_.Y), ::g::Uno::Float2__New2(padding_.Z, padding_.W));
    ::g::Fuse::LayoutParams nlp = lp_.CloneAndDerive();
    nlp.RemoveSize(pad);
    ::g::Uno::Float2 axis;

    if (orientation == 1)
    {
        nlp.RetainXY(true, false);
        axis = ::g::Uno::Float2__New2(0.0f, 1.0f);
    }
    else
    {
        nlp.RetainXY(false, true);
        axis = ::g::Uno::Float2__New2(1.0f, 0.0f);
    }

    float effectiveSpacing = __this->EffectiveItemSpacing();
    bool hasItem = false;

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(elements), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/])); i++)
    {
        ::g::Fuse::Visual* c = uAs< ::g::Fuse::Visual*>((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(elements), ::TYPES[2/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret2), ret2), ::TYPES[1/*Fuse.Visual*/]);

        if (c == NULL)
            continue;

        if (__this->ArrangeMarginBoxSpecial(c, padding_, lp_))
            continue;

        if (hasItem)
            d = d + effectiveSpacing;

        ::g::Uno::Float2 cds = uPtr(c)->ArrangeMarginBox(::g::Uno::Float2__op_Addition2(::g::Uno::Float2__op_Multiply1(axis, d), paddingOffset), nlp);
        d = d + ::g::Uno::Vector::Dot(cds, axis);
        hasItem = true;
    }

    int sa = __this->EffectiveContentAlignment();

    if (sa != 0)
    {
        float off;

        if (sa == 2)
            off = ::g::Uno::Vector::Dot(::g::Uno::Float2__op_Subtraction2(lp_.Size(), pad), axis) - d;
        else
            off = (::g::Uno::Vector::Dot(::g::Uno::Float2__op_Subtraction2(lp_.Size(), pad), axis) / 2.0f) - (d / 2.0f);

        for (int i1 = 0; i1 < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(elements), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/])); i1++)
        {
            ::g::Fuse::Visual* e = uAs< ::g::Fuse::Visual*>((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(elements), ::TYPES[2/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i1), &ret3), ret3), ::TYPES[1/*Fuse.Visual*/]);

            if (__this->AffectsLayout(e))
            {
                ::g::Uno::Float2 old = uPtr(e)->MarginBoxPosition();
                e->AdjustMarginBoxPosition(::g::Uno::Float2__op_Addition2(old, ::g::Uno::Float2__op_Multiply1(axis, off)));
            }
        }
    }
}

// public Fuse.Elements.Alignment get_ContentAlignment() :2209
void StackLayout__get_ContentAlignment_fn(StackLayout* __this, int* __retval)
{
    *__retval = __this->ContentAlignment();
}

// public void set_ContentAlignment(Fuse.Elements.Alignment value) :2210
void StackLayout__set_ContentAlignment_fn(StackLayout* __this, int* value)
{
    __this->ContentAlignment(*value);
}

// private Fuse.Elements.SimpleAlignment get_EffectiveContentAlignment() :2318
void StackLayout__get_EffectiveContentAlignment_fn(StackLayout* __this, int* __retval)
{
    *__retval = __this->EffectiveContentAlignment();
}

// private float get_EffectiveItemSpacing() :2274
void StackLayout__get_EffectiveItemSpacing_fn(StackLayout* __this, float* __retval)
{
    *__retval = __this->EffectiveItemSpacing();
}

// internal override sealed float2 GetContentSize(Uno.Collections.IList<Fuse.Node> elements, Fuse.LayoutParams lp) :2235
void StackLayout__GetContentSize_fn(StackLayout* __this, uObject* elements, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Layouts.StackLayout", "GetContentSize(Uno.Collections.IList<Fuse.Node>,Fuse.LayoutParams)");
    ::g::Fuse::LayoutParams lp_ = *lp;
    int orientation = __this->Orientation();
    bool vert = orientation == 1;
    ::g::Fuse::LayoutParams nlp = lp_.CloneAndDerive();
    nlp.RetainXY(vert, !vert);
    ::g::Uno::Float2 size = __this->GetElementsSize(elements, nlp);

    if (__this->Mode() == 1)
    {
        bool recalc = false;

        if (orientation == 1)
        {
            if (!nlp.HasX())
            {
                nlp.SetX(size.X);
                recalc = true;
            }
        }
        else
        {
            if (!nlp.HasY())
            {
                nlp.SetY(size.Y);
                recalc = true;
            }
        }

        if (recalc)
            size = __this->GetElementsSize(elements, nlp);
    }

    return *__retval = size, void();
}

// private float2 GetElementsSize(Uno.Collections.IList<Fuse.Node> elements, Fuse.LayoutParams lp) :2281
void StackLayout__GetElementsSize_fn(StackLayout* __this, uObject* elements, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetElementsSize(elements, *lp);
}

// public float get_ItemSpacing() :2195
void StackLayout__get_ItemSpacing_fn(StackLayout* __this, float* __retval)
{
    *__retval = __this->ItemSpacing();
}

// public void set_ItemSpacing(float value) :2196
void StackLayout__set_ItemSpacing_fn(StackLayout* __this, float* value)
{
    __this->ItemSpacing(*value);
}

// public Fuse.Layouts.StackLayoutMode get_Mode() :2223
void StackLayout__get_Mode_fn(StackLayout* __this, int* __retval)
{
    *__retval = __this->Mode();
}

// public void set_Mode(Fuse.Layouts.StackLayoutMode value) :2224
void StackLayout__set_Mode_fn(StackLayout* __this, int* value)
{
    __this->Mode(*value);
}

// public generated StackLayout New() :2167
void StackLayout__New2_fn(StackLayout** __retval)
{
    *__retval = StackLayout::New2();
}

// public Fuse.Layouts.Orientation get_Orientation() :2174
void StackLayout__get_Orientation_fn(StackLayout* __this, int* __retval)
{
    *__retval = __this->Orientation();
}

// public void set_Orientation(Fuse.Layouts.Orientation value) :2175
void StackLayout__set_Orientation_fn(StackLayout* __this, int* value)
{
    __this->Orientation(*value);
}

// public void ResetOrientation() :2185
void StackLayout__ResetOrientation_fn(StackLayout* __this)
{
    __this->ResetOrientation();
}

// public generated StackLayout() [instance] :2167
void StackLayout::ctor_2()
{
    _orientation = 1;
    _itemSpacing = 0.0f;
    ctor_1();
}

// public Fuse.Elements.Alignment get_ContentAlignment() [instance] :2209
int StackLayout::ContentAlignment()
{
    return _contentAlignment;
}

// public void set_ContentAlignment(Fuse.Elements.Alignment value) [instance] :2210
void StackLayout::ContentAlignment(int value)
{
    uStackFrame __("Fuse.Layouts.StackLayout", "set_ContentAlignment(Fuse.Elements.Alignment)");

    if (_contentAlignment != value)
    {
        _contentAlignment = value;
        InvalidateLayout();
    }
}

// private Fuse.Elements.SimpleAlignment get_EffectiveContentAlignment() [instance] :2318
int StackLayout::EffectiveContentAlignment()
{
    uStackFrame __("Fuse.Layouts.StackLayout", "get_EffectiveContentAlignment()");
    int ca = ContentAlignment();

    if ((ca == 0) && (Container != NULL))
        ca = uPtr(Container)->Alignment();

    if (Orientation() == 1)
        return ::g::Fuse::Elements::AlignmentHelpers::GetVerticalSimpleAlign(ca);
    else
        return ::g::Fuse::Elements::AlignmentHelpers::GetHorizontalSimpleAlign(ca);
}

// private float get_EffectiveItemSpacing() [instance] :2274
float StackLayout::EffectiveItemSpacing()
{
    uStackFrame __("Fuse.Layouts.StackLayout", "get_EffectiveItemSpacing()");
    return SnapUp(ItemSpacing());
}

// private float2 GetElementsSize(Uno.Collections.IList<Fuse.Node> elements, Fuse.LayoutParams lp) [instance] :2281
::g::Uno::Float2 StackLayout::GetElementsSize(uObject* elements, ::g::Fuse::LayoutParams lp)
{
    uStackFrame __("Fuse.Layouts.StackLayout", "GetElementsSize(Uno.Collections.IList<Fuse.Node>,Fuse.LayoutParams)");
    ::g::Fuse::Node* ret4;
    int orientation = Orientation();
    ::g::Uno::Float2 desiredSize = ::g::Uno::Float2__New1(0.0f);
    float effectiveSpacing = EffectiveItemSpacing();
    bool firstItem = true;

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(elements), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/])); i++)
    {
        ::g::Fuse::Visual* c = uAs< ::g::Fuse::Visual*>((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(elements), ::TYPES[2/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret4), ret4), ::TYPES[1/*Fuse.Visual*/]);

        if (!AffectsLayout(c))
            continue;

        float spacing = effectiveSpacing;

        if (firstItem)
        {
            spacing = 0.0f;
            firstItem = false;
        }

        ::g::Uno::Float2 cds = uPtr(c)->GetMarginSize(lp);

        if (orientation == 0)
        {
            desiredSize.X = (desiredSize.X + (cds.X + spacing));
            desiredSize.Y = ::g::Uno::Math::Max1(desiredSize.Y, cds.Y);
        }
        else
        {
            desiredSize.X = ::g::Uno::Math::Max1(desiredSize.X, cds.X);
            desiredSize.Y = (desiredSize.Y + (cds.Y + spacing));
        }
    }

    return desiredSize;
}

// public float get_ItemSpacing() [instance] :2195
float StackLayout::ItemSpacing()
{
    return _itemSpacing;
}

// public void set_ItemSpacing(float value) [instance] :2196
void StackLayout::ItemSpacing(float value)
{
    uStackFrame __("Fuse.Layouts.StackLayout", "set_ItemSpacing(float)");

    if (_itemSpacing != value)
    {
        _itemSpacing = value;
        InvalidateLayout();
    }
}

// public Fuse.Layouts.StackLayoutMode get_Mode() [instance] :2223
int StackLayout::Mode()
{
    return _mode;
}

// public void set_Mode(Fuse.Layouts.StackLayoutMode value) [instance] :2224
void StackLayout::Mode(int value)
{
    uStackFrame __("Fuse.Layouts.StackLayout", "set_Mode(Fuse.Layouts.StackLayoutMode)");

    if (_mode != value)
    {
        _mode = value;
        InvalidateLayout();
    }
}

// public Fuse.Layouts.Orientation get_Orientation() [instance] :2174
int StackLayout::Orientation()
{
    return _orientation;
}

// public void set_Orientation(Fuse.Layouts.Orientation value) [instance] :2175
void StackLayout::Orientation(int value)
{
    uStackFrame __("Fuse.Layouts.StackLayout", "set_Orientation(Fuse.Layouts.Orientation)");

    if (_orientation != value)
    {
        _orientation = value;
        InvalidateLayout();
    }
}

// public void ResetOrientation() [instance] :2185
void StackLayout::ResetOrientation()
{
    uStackFrame __("Fuse.Layouts.StackLayout", "ResetOrientation()");
    _orientation = 1;
    InvalidateLayout();
}

// public generated StackLayout New() [static] :2167
StackLayout* StackLayout::New2()
{
    StackLayout* obj1 = (StackLayout*)uNew(StackLayout_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Panels/0.42.4/layouts/$.uno
// -------------------------------------------------------------------------------------------------------

// public enum StackLayoutMode :2161
uEnumType* StackLayoutMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Layouts.StackLayoutMode", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Standard", 0LL,
        "TwoPass", 1LL);
    return type;
}

// /Users/mostafa/Library/Application Support/Fusetools/Packages/Fuse.Controls.Panels/0.42.4/layouts/$.uno
// -------------------------------------------------------------------------------------------------------

// public sealed class WrapLayout :2411
// {
static void WrapLayout_build(uType* type)
{
    ::TYPES[51] = ::g::Uno::Float4_typeof()->Array();
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::Float_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Visual_typeof();
    ::TYPES[2] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetFields(2,
        ::g::Fuse::Layouts::FlowDirection_typeof(), offsetof(::g::Fuse::Layouts::WrapLayout, _flowDirection), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Layouts::WrapLayout, _hasFlowDirection), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Layouts::WrapLayout, _hasItemHeight), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Layouts::WrapLayout, _hasItemWidth), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Layouts::WrapLayout, _hasOrientation), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Layouts::WrapLayout, _itemHeight), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Layouts::WrapLayout, _itemWidth), 0,
        ::g::Fuse::Layouts::Orientation_typeof(), offsetof(::g::Fuse::Layouts::WrapLayout, _orientation), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Layouts::WrapLayout, _ID), 0);
    type->Reflection.SetFunctions(11,
        new uFunction("get_FlowDirection", NULL, (void*)WrapLayout__get_FlowDirection_fn, 0, false, ::g::Fuse::Layouts::FlowDirection_typeof(), 0),
        new uFunction("set_FlowDirection", NULL, (void*)WrapLayout__set_FlowDirection_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Layouts::FlowDirection_typeof()),
        new uFunction("get_ID", NULL, (void*)WrapLayout__get_ID_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_ID", NULL, (void*)WrapLayout__set_ID_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_ItemHeight", NULL, (void*)WrapLayout__get_ItemHeight_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_ItemHeight", NULL, (void*)WrapLayout__set_ItemHeight_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_ItemWidth", NULL, (void*)WrapLayout__get_ItemWidth_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_ItemWidth", NULL, (void*)WrapLayout__set_ItemWidth_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)WrapLayout__New2_fn, 0, true, type, 0),
        new uFunction("get_Orientation", NULL, (void*)WrapLayout__get_Orientation_fn, 0, false, ::g::Fuse::Layouts::Orientation_typeof(), 0),
        new uFunction("set_Orientation", NULL, (void*)WrapLayout__set_Orientation_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Layouts::Orientation_typeof()));
}

::g::Fuse::Layouts::Layout_type* WrapLayout_typeof()
{
    static uSStrong< ::g::Fuse::Layouts::Layout_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Layouts::Layout_typeof();
    options.FieldCount = 11;
    options.ObjectSize = sizeof(WrapLayout);
    options.TypeSize = sizeof(::g::Fuse::Layouts::Layout_type);
    type = (::g::Fuse::Layouts::Layout_type*)uClassType::New("Fuse.Layouts.WrapLayout", options);
    type->fp_build_ = WrapLayout_build;
    type->fp_ctor_ = (void*)WrapLayout__New2_fn;
    type->fp_ArrangePaddingBox = (void(*)(::g::Fuse::Layouts::Layout*, uObject*, ::g::Uno::Float4*, ::g::Fuse::LayoutParams*))WrapLayout__ArrangePaddingBox_fn;
    type->fp_GetContentSize = (void(*)(::g::Fuse::Layouts::Layout*, uObject*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))WrapLayout__GetContentSize_fn;
    return type;
}

// public generated WrapLayout() :2411
void WrapLayout__ctor_2_fn(WrapLayout* __this)
{
    __this->ctor_2();
}

// internal override sealed void ArrangePaddingBox(Uno.Collections.IList<Fuse.Node> elements, float4 padding, Fuse.LayoutParams lp) :2529
void WrapLayout__ArrangePaddingBox_fn(WrapLayout* __this, uObject* elements, ::g::Uno::Float4* padding, ::g::Fuse::LayoutParams* lp)
{
    uStackFrame __("Fuse.Layouts.WrapLayout", "ArrangePaddingBox(Uno.Collections.IList<Fuse.Node>,float4,Fuse.LayoutParams)");
    ::g::Uno::Float4 ind1;
    ::g::Fuse::LayoutParams lp_ = *lp;
    ::g::Fuse::Node* ret3;
    ::g::Fuse::Node* ret4;
    ::g::Uno::Float4 padding_ = *padding;
    float x = 0.0f;
    float y = 0.0f;
    float largestY = 0.0f;
    float largestX = 0.0f;
    float minX = 0.0f;
    bool firstChild = true;
    int lastWrap = 0;
    bool lastWasWrap = false;
    uArray* placements = uArray::New(::TYPES[51/*float4[]*/], ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(elements), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/])));
    uArray* largest = uArray::New(::TYPES[6/*float[]*/], ::g::Uno::Collections::ICollection::Count(uInterface(elements, ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/])));
    ::g::Fuse::LayoutParams nlp = lp_.CloneAndDerive();
    nlp.RetainXY(false, false);

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(elements, ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/])); i++)
    {
        ::g::Fuse::Visual* e = uAs< ::g::Fuse::Visual*>((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(elements), ::TYPES[2/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret3), ret3), ::TYPES[1/*Fuse.Visual*/]);

        if (!__this->AffectsLayout(e))
            continue;

        lastWasWrap = false;
        ::g::Uno::Float2 eSize = uPtr(e)->GetMarginSize(nlp);
        float eX = __this->_hasItemWidth ? __this->ItemWidth() : eSize.X;
        float eY = __this->_hasItemHeight ? __this->ItemHeight() : eSize.Y;

        if (__this->Orientation() == 0)
        {
            if (((x + eX) > lp_.X()) && !firstChild)
            {
                y = y + largestY;

                for (int j = lastWrap; j < i; j++)
                    uPtr(placements)->Item< ::g::Uno::Float4>(j).W = largestY;

                lastWrap = i;
                largestY = 0.0f;
                x = 0.0f;
                lastWasWrap = true;
            }

            largestY = ::g::Uno::Math::Max1(eY, largestY);

            if (__this->FlowDirection() == 0)
                uPtr(placements)->Item< ::g::Uno::Float4>(i) = ::g::Uno::Float4__New2(x, y, eX, eY);
            else
                uPtr(placements)->Item< ::g::Uno::Float4>(i) = ::g::Uno::Float4__New2((lp_.X() - x) - eX, y, eX, eY);

            x = x + eX;
        }
        else
        {
            if (((y + eY) > lp_.Y()) && !firstChild)
            {
                x = x + largestX;

                for (int j1 = lastWrap; j1 < i; j1++)
                {
                    uPtr(placements)->Item< ::g::Uno::Float4>(j1).Z = largestX;

                    if (__this->FlowDirection() == 1)
                    {
                        uPtr(placements)->Item< ::g::Uno::Float4>(j1).X = (uPtr(placements)->Item< ::g::Uno::Float4>(j1).X - largestX);
                        minX = ::g::Uno::Math::Min1(minX, placements->Item< ::g::Uno::Float4>(j1).X);
                    }
                }

                lastWrap = i;
                largestX = 0.0f;
                y = 0.0f;
                lastWasWrap = true;
            }

            largestX = ::g::Uno::Math::Max1(eX, largestX);

            if (__this->FlowDirection() == 0)
                uPtr(placements)->Item< ::g::Uno::Float4>(i) = ::g::Uno::Float4__New2(x, y, eX, eY);
            else
                uPtr(placements)->Item< ::g::Uno::Float4>(i) = ::g::Uno::Float4__New2(lp_.X() - x, y, eX, eY);

            y = y + eY;
        }

        firstChild = false;
    }

    if (((lastWrap == 0) || (lastWrap == (::g::Uno::Collections::ICollection::Count(uInterface(elements, ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/])) - 1))) || !lastWasWrap)

        for (int i1 = lastWrap; i1 < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(elements), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/])); i1++)
        {
            if (__this->Orientation() == 0)
                uPtr(placements)->Item< ::g::Uno::Float4>(i1).W = largestY;
            else
                uPtr(placements)->Item< ::g::Uno::Float4>(i1).Z = largestX;

            if (__this->FlowDirection() == 1)
            {
                uPtr(placements)->Item< ::g::Uno::Float4>(i1).X = (uPtr(placements)->Item< ::g::Uno::Float4>(i1).X - largestX);
                minX = ::g::Uno::Math::Min1(minX, placements->Item< ::g::Uno::Float4>(i1).X);
            }
        }

    ::g::Fuse::LayoutParams elp = lp_.CloneAndDerive();

    for (int i2 = 0; i2 < ::g::Uno::Collections::ICollection::Count(uInterface(elements, ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/])); i2++)
    {
        ::g::Fuse::Visual* element = uAs< ::g::Fuse::Visual*>((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(elements), ::TYPES[2/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i2), &ret4), ret4), ::TYPES[1/*Fuse.Visual*/]);

        if (element == NULL)
            continue;

        if (__this->ArrangeMarginBoxSpecial(element, padding_, lp_))
            continue;

        elp.SetSize(::g::Uno::Float2__New2(uPtr(placements)->Item< ::g::Uno::Float4>(i2).Z, uPtr(placements)->Item< ::g::Uno::Float4>(i2).W), true, true);
        uPtr(element)->ArrangeMarginBox(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__op_Subtraction2((ind1 = placements->Item< ::g::Uno::Float4>(i2), ::g::Uno::Float2__New2(ind1.X, ind1.Y)), ::g::Uno::Float2__New2(uPtr(largest)->Item<float>(i2), 0.0f)), ::g::Uno::Float2__New2(minX, 0.0f)), elp);
    }
}

// public Fuse.Layouts.FlowDirection get_FlowDirection() :2453
void WrapLayout__get_FlowDirection_fn(WrapLayout* __this, int* __retval)
{
    *__retval = __this->FlowDirection();
}

// public void set_FlowDirection(Fuse.Layouts.FlowDirection value) :2454
void WrapLayout__set_FlowDirection_fn(WrapLayout* __this, int* value)
{
    __this->FlowDirection(*value);
}

// internal override sealed float2 GetContentSize(Uno.Collections.IList<Fuse.Node> elements, Fuse.LayoutParams lp) :2463
void WrapLayout__GetContentSize_fn(WrapLayout* __this, uObject* elements, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Layouts.WrapLayout", "GetContentSize(Uno.Collections.IList<Fuse.Node>,Fuse.LayoutParams)");
    ::g::Fuse::LayoutParams lp_ = *lp;
    ::g::Fuse::Node* ret5;
    float max = 0.0f;
    uArray* total = uArray::New(::TYPES[6/*float[]*/], 2);
    float current = 0.0f;
    int x = (__this->Orientation() == 0) ? 0 : 1;
    int y = (__this->Orientation() == 0) ? 1 : 0;
    bool hasSizeFlag = (((__this->Orientation() == 0) && lp_.HasX()) || ((__this->Orientation() == 1) && lp_.HasY())) ? true : false;
    ::g::Uno::Float2 lpav = lp_.GetAvailableSize();
    float availableSize = (__this->Orientation() == 0) ? lpav.X : lpav.Y;
    bool isEmpty = true;

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(elements), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Node>*/])); )
    {
        ::g::Fuse::Visual* e = uAs< ::g::Fuse::Visual*>((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(elements), ::TYPES[2/*Uno.Collections.IList<Fuse.Node>*/]), uCRef<int>(i), &ret5), ret5), ::TYPES[1/*Fuse.Visual*/]);

        if (!__this->AffectsLayout(e))
        {
            i++;
            continue;
        }

        ::g::Uno::Float2 eSize = uPtr(e)->GetMarginSize(::g::Fuse::LayoutParams__CreateEmpty());
        eSize = ::g::Uno::Float2__New2(__this->_hasItemWidth ? __this->ItemWidth() : eSize.X, __this->_hasItemHeight ? __this->ItemHeight() : eSize.Y);
        float eX = (__this->Orientation() == 0) ? eSize.X : eSize.Y;
        float eY = (__this->Orientation() == 0) ? eSize.Y : eSize.X;

        if ((isEmpty && (eX > availableSize)) && hasSizeFlag)
        {
            uPtr(total)->Item<float>(x) = availableSize;
            total->Item<float>(y) = total->Item<float>(y) + ::g::Uno::Math::Max1(max, eY);
            max = 0.0f;
            i++;
            continue;
        }

        if (((current + eX) > availableSize) && hasSizeFlag)
        {
            uPtr(total)->Item<float>(x) = ::g::Uno::Math::Max1(current, uPtr(total)->Item<float>(x));
            total->Item<float>(y) = total->Item<float>(y) + max;
            max = 0.0f;
            current = 0.0f;
            isEmpty = true;
            continue;
        }

        max = ::g::Uno::Math::Max1(eY, max);
        uPtr(total)->Item<float>(x) = ::g::Uno::Math::Max1(current, uPtr(total)->Item<float>(x));
        current = current + eX;
        isEmpty = false;
        i++;
    }

    total->Item<float>(x) = ::g::Uno::Math::Max1(current, total->Item<float>(x));
    total->Item<float>(y) = ::g::Uno::Math::Max1(max, total->Item<float>(y) + max);
    return *__retval = ::g::Uno::Float2__New2(total->Item<float>(0), total->Item<float>(1)), void();
}

// public generated string get_ID() :2461
void WrapLayout__get_ID_fn(WrapLayout* __this, uString** __retval)
{
    *__retval = __this->ID();
}

// public generated void set_ID(string value) :2461
void WrapLayout__set_ID_fn(WrapLayout* __this, uString* value)
{
    __this->ID(value);
}

// public float get_ItemHeight() :2417
void WrapLayout__get_ItemHeight_fn(WrapLayout* __this, float* __retval)
{
    *__retval = __this->ItemHeight();
}

// public void set_ItemHeight(float value) :2418
void WrapLayout__set_ItemHeight_fn(WrapLayout* __this, float* value)
{
    __this->ItemHeight(*value);
}

// public float get_ItemWidth() :2429
void WrapLayout__get_ItemWidth_fn(WrapLayout* __this, float* __retval)
{
    *__retval = __this->ItemWidth();
}

// public void set_ItemWidth(float value) :2430
void WrapLayout__set_ItemWidth_fn(WrapLayout* __this, float* value)
{
    __this->ItemWidth(*value);
}

// public generated WrapLayout New() :2411
void WrapLayout__New2_fn(WrapLayout** __retval)
{
    *__retval = WrapLayout::New2();
}

// public Fuse.Layouts.Orientation get_Orientation() :2441
void WrapLayout__get_Orientation_fn(WrapLayout* __this, int* __retval)
{
    *__retval = __this->Orientation();
}

// public void set_Orientation(Fuse.Layouts.Orientation value) :2442
void WrapLayout__set_Orientation_fn(WrapLayout* __this, int* value)
{
    __this->Orientation(*value);
}

// public generated WrapLayout() [instance] :2411
void WrapLayout::ctor_2()
{
    ctor_1();
}

// public Fuse.Layouts.FlowDirection get_FlowDirection() [instance] :2453
int WrapLayout::FlowDirection()
{
    return _flowDirection;
}

// public void set_FlowDirection(Fuse.Layouts.FlowDirection value) [instance] :2454
void WrapLayout::FlowDirection(int value)
{
    _flowDirection = value;
    _hasFlowDirection = true;
}

// public generated string get_ID() [instance] :2461
uString* WrapLayout::ID()
{
    return _ID;
}

// public generated void set_ID(string value) [instance] :2461
void WrapLayout::ID(uString* value)
{
    _ID = value;
}

// public float get_ItemHeight() [instance] :2417
float WrapLayout::ItemHeight()
{
    return _itemHeight;
}

// public void set_ItemHeight(float value) [instance] :2418
void WrapLayout::ItemHeight(float value)
{
    _itemHeight = value;
    _hasItemHeight = true;
}

// public float get_ItemWidth() [instance] :2429
float WrapLayout::ItemWidth()
{
    return _itemWidth;
}

// public void set_ItemWidth(float value) [instance] :2430
void WrapLayout::ItemWidth(float value)
{
    _itemWidth = value;
    _hasItemWidth = true;
}

// public Fuse.Layouts.Orientation get_Orientation() [instance] :2441
int WrapLayout::Orientation()
{
    return _orientation;
}

// public void set_Orientation(Fuse.Layouts.Orientation value) [instance] :2442
void WrapLayout::Orientation(int value)
{
    _orientation = value;
    _hasOrientation = true;
}

// public generated WrapLayout New() [static] :2411
WrapLayout* WrapLayout::New2()
{
    WrapLayout* obj2 = (WrapLayout*)uNew(WrapLayout_typeof());
    obj2->ctor_2();
    return obj2;
}
// }

}}} // ::g::Fuse::Layouts
