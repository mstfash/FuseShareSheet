[Uno.Compiler.UxGenerated]
public partial class PageWithTitle: Fuse.Controls.Page
{
    float4 _field_HeaderColor;
    [global::Uno.UX.UXOriginSetter("SetHeaderColor")]
    public float4 HeaderColor
    {
        get { return _field_HeaderColor; }
        set { SetHeaderColor(value, null); }
    }
    public void SetHeaderColor(float4 value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_HeaderColor)
        {
            _field_HeaderColor = value;
            OnPropertyChanged("HeaderColor", origin);
        }
    }
    float4 _field_HeaderTextColor;
    [global::Uno.UX.UXOriginSetter("SetHeaderTextColor")]
    public float4 HeaderTextColor
    {
        get { return _field_HeaderTextColor; }
        set { SetHeaderTextColor(value, null); }
    }
    public void SetHeaderTextColor(float4 value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_HeaderTextColor)
        {
            _field_HeaderTextColor = value;
            OnPropertyChanged("HeaderTextColor", origin);
        }
    }
    string _field_Instructions;
    [global::Uno.UX.UXOriginSetter("SetInstructions")]
    public string Instructions
    {
        get { return _field_Instructions; }
        set { SetInstructions(value, null); }
    }
    public void SetInstructions(string value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_Instructions)
        {
            _field_Instructions = value;
            OnPropertyChanged("Instructions", origin);
        }
    }
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<string> this_Title_inst;
    global::Uno.UX.Property<float4> temp_TextColor_inst;
    global::Uno.UX.Property<float4> this_HeaderTextColor_inst;
    global::Uno.UX.Property<float4> temp1_Color_inst;
    global::Uno.UX.Property<float4> this_HeaderColor_inst;
    global::Uno.UX.Property<string> temp2_Value_inst;
    global::Uno.UX.Property<string> this_Instructions_inst;
    static PageWithTitle()
    {
    }
    [global::Uno.UX.UXConstructor]
    public PageWithTitle()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp = new Fuse.Controls.Text();
        temp_Value_inst = new ShareSheet_FuseControlsTextControl_Value_Property(temp, __selector0);
        this_Title_inst = new ShareSheet_FuseControlsPage_Title_Property(this, __selector1);
        temp_TextColor_inst = new ShareSheet_FuseControlsTextControl_TextColor_Property(temp, __selector2);
        this_HeaderTextColor_inst = new ShareSheet_PageWithTitle_HeaderTextColor_Property(this, __selector3);
        var temp1 = new Fuse.Controls.Panel();
        temp1_Color_inst = new ShareSheet_FuseControlsPanel_Color_Property(temp1, __selector4);
        this_HeaderColor_inst = new ShareSheet_PageWithTitle_HeaderColor_Property(this, __selector5);
        var temp2 = new Fuse.Controls.Text();
        temp2_Value_inst = new ShareSheet_FuseControlsTextControl_Value_Property(temp2, __selector0);
        this_Instructions_inst = new ShareSheet_PageWithTitle_Instructions_Property(this, __selector6);
        var temp3 = new Fuse.Layouts.DockLayout();
        var temp4 = new Fuse.Controls.StackPanel();
        var temp5 = new Fuse.Reactive.PropertyBinding(temp_Value_inst, this_Title_inst);
        var temp6 = new Fuse.Reactive.PropertyBinding(temp_TextColor_inst, this_HeaderTextColor_inst);
        var temp7 = new Fuse.Reactive.PropertyBinding(temp1_Color_inst, this_HeaderColor_inst);
        var temp8 = new Fuse.Controls.Panel();
        var temp9 = new Fuse.Navigation.WhileActive();
        var temp10 = new Fuse.Animations.Move();
        var temp11 = new Fuse.Reactive.PropertyBinding(temp2_Value_inst, this_Instructions_inst);
        this.HitTestMode = Fuse.Elements.HitTestMode.LocalBoundsAndChildren;
        this.Name = __selector7;
        global::Fuse.Controls.DockPanel.SetDock(temp4, Fuse.Layouts.Dock.Top);
        temp4.Children.Add(temp1);
        temp1.Height = new Uno.UX.Size(45f, Uno.UX.Unit.Unspecified);
        temp1.Children.Add(temp);
        temp1.Bindings.Add(temp7);
        temp.FontSize = 22f;
        temp.Alignment = Fuse.Elements.Alignment.Center;
        temp.Bindings.Add(temp5);
        temp.Bindings.Add(temp6);
        temp8.Color = float4(0f, 0f, 0f, 0.5333334f);
        temp8.Height = new Uno.UX.Size(10f, Uno.UX.Unit.Percent);
        temp8.Alignment = Fuse.Elements.Alignment.Bottom;
        temp8.Children.Add(temp9);
        temp8.Children.Add(temp2);
        temp9.Threshold = 0.4f;
        temp9.Invert = true;
        temp9.Animators.Add(temp10);
        temp10.Y = 1f;
        temp10.Duration = 0.4;
        temp10.RelativeTo = Fuse.TranslationModes.Size;
        temp10.Easing = Fuse.Animations.Easing.CircularInOut;
        temp2.TextColor = float4(1f, 1f, 1f, 1f);
        temp2.Alignment = Fuse.Elements.Alignment.Center;
        temp2.Margin = float4(20f, 20f, 20f, 20f);
        temp2.Bindings.Add(temp11);
        this.Layout = temp3;
        this.Children.Add(temp4);
        this.Children.Add(temp8);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "Title";
    static global::Uno.UX.Selector __selector2 = "TextColor";
    static global::Uno.UX.Selector __selector3 = "HeaderTextColor";
    static global::Uno.UX.Selector __selector4 = "Color";
    static global::Uno.UX.Selector __selector5 = "HeaderColor";
    static global::Uno.UX.Selector __selector6 = "Instructions";
    static global::Uno.UX.Selector __selector7 = "self";
}
