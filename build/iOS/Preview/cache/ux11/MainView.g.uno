[Uno.Compiler.UxGenerated]
public partial class MainView: Fuse.App
{
    [Uno.Compiler.UxGenerated]
    public partial class Template: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MainView __parent;
        [Uno.WeakReference] internal readonly MainView __parentInstance;
        public Template(MainView parent, MainView parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<float> self_Opacity_inst;
        global::Uno.UX.Property<float4> self_Color_inst;
        global::Uno.UX.Property<Uno.UX.Size> self_Height_inst;
        static Template()
        {
        }
        public override object New()
        {
            var self = new Fuse.Controls.Rectangle();
            self_Opacity_inst = new ShareSheet_FuseElementsElement_Opacity_Property(self, __selector0);
            self_Color_inst = new ShareSheet_FuseControlsShape_Color_Property(self, __selector1);
            self_Height_inst = new ShareSheet_FuseElementsElement_Height_Property(self, __selector2);
            var temp = new Fuse.Triggers.AddingAnimation();
            var temp1 = new Fuse.Animations.Change<float>(self_Opacity_inst);
            var temp2 = new Fuse.Reactive.DataBinding<float4>(self_Color_inst, "color");
            var temp3 = new Fuse.Reactive.DataBinding<Uno.UX.Size>(self_Height_inst, "height");
            self.CornerRadius = float4(5f, 5f, 5f, 5f);
            self.Margin = float4(5f, 5f, 5f, 5f);
            self.Name = __selector3;
            temp.Animators.Add(temp1);
            temp1.Value = 0f;
            temp1.Duration = 0.3;
            self.Children.Add(temp);
            self.Bindings.Add(temp2);
            self.Bindings.Add(temp3);
            return self;
        }
        static global::Uno.UX.Selector __selector0 = "Opacity";
        static global::Uno.UX.Selector __selector1 = "Color";
        static global::Uno.UX.Selector __selector2 = "Height";
        static global::Uno.UX.Selector __selector3 = "item";
    }
    global::Uno.UX.Property<float4> myRectangle_Color_inst;
    global::Uno.UX.Property<float4> myRectangle_CornerRadius_inst;
    global::Uno.UX.Property<object> temp_Items_inst;
    global::Uno.UX.Property<float> myBlur_Radius_inst;
    internal Fuse.Controls.Rectangle myRectangle;
    internal Fuse.Reactive.EventBinding temp_eb0;
    internal Fuse.Effects.Blur myBlur;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "myRectangle",
        "myBlur"
    };
    static MainView()
    {
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Animations.Easing.Linear, "Linear");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Animations.Easing.QuadraticIn, "QuadraticIn");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Animations.Easing.QuadraticOut, "QuadraticOut");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Animations.Easing.QuadraticInOut, "QuadraticInOut");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Animations.Easing.CubicIn, "CubicIn");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Animations.Easing.CubicOut, "CubicOut");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Animations.Easing.CubicInOut, "CubicInOut");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Animations.Easing.QuarticIn, "QuarticIn");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Animations.Easing.QuarticOut, "QuarticOut");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Animations.Easing.QuarticInOut, "QuarticInOut");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Animations.Easing.QuinticIn, "QuinticIn");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Animations.Easing.QuinticOut, "QuinticOut");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Animations.Easing.QuinticInOut, "QuinticInOut");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Animations.Easing.SinusoidalIn, "SinusoidalIn");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Animations.Easing.SinusoidalOut, "SinusoidalOut");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Animations.Easing.SinusoidalInOut, "SinusoidalInOut");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Animations.Easing.ExponentialIn, "ExponentialIn");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Animations.Easing.ExponentialOut, "ExponentialOut");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Animations.Easing.ExponentialInOut, "ExponentialInOut");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Animations.Easing.CircularIn, "CircularIn");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Animations.Easing.CircularOut, "CircularOut");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Animations.Easing.CircularInOut, "CircularInOut");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Animations.Easing.ElasticIn, "ElasticIn");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Animations.Easing.ElasticOut, "ElasticOut");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Animations.Easing.ElasticInOut, "ElasticInOut");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Animations.Easing.BackIn, "BackIn");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Animations.Easing.BackOut, "BackOut");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Animations.Easing.BackInOut, "BackInOut");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Animations.Easing.BounceIn, "BounceIn");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Animations.Easing.BounceOut, "BounceOut");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Animations.Easing.BounceInOut, "BounceInOut");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Drawing.Colors.Transparent, "Transparent");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Drawing.Brushes.Transparent, "Transparent");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Drawing.Colors.Black, "Black");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Drawing.Brushes.Black, "Black");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Drawing.Colors.Silver, "Silver");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Drawing.Brushes.Silver, "Silver");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Drawing.Colors.Gray, "Gray");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Drawing.Brushes.Gray, "Gray");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Drawing.Colors.White, "White");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Drawing.Brushes.White, "White");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Drawing.Colors.Maroon, "Maroon");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Drawing.Brushes.Maroon, "Maroon");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Drawing.Colors.Red, "Red");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Drawing.Brushes.Red, "Red");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Drawing.Colors.Purple, "Purple");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Drawing.Brushes.Purple, "Purple");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Drawing.Colors.Fuchsia, "Fuchsia");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Drawing.Brushes.Fuchsia, "Fuchsia");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Drawing.Colors.Green, "Green");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Drawing.Brushes.Green, "Green");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Drawing.Colors.Lime, "Lime");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Drawing.Brushes.Lime, "Lime");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Drawing.Colors.Olive, "Olive");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Drawing.Brushes.Olive, "Olive");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Drawing.Colors.Yellow, "Yellow");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Drawing.Brushes.Yellow, "Yellow");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Drawing.Colors.Navy, "Navy");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Drawing.Brushes.Navy, "Navy");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Drawing.Colors.Blue, "Blue");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Drawing.Brushes.Blue, "Blue");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Drawing.Colors.Teal, "Teal");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Drawing.Brushes.Teal, "Teal");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Drawing.Colors.Aqua, "Aqua");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Drawing.Brushes.Aqua, "Aqua");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Elements.TransformOrigins.TopLeft, "TopLeft");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Elements.TransformOrigins.Center, "Center");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Elements.TransformOrigins.Anchor, "Anchor");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Elements.TransformOrigins.HorizontalBoxCenter, "HorizontalBoxCenter");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Elements.TransformOrigins.VerticalBoxCenter, "VerticalBoxCenter");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Elements.TranslationModes.TransformOriginOffset, "TransformOriginOffset");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Elements.TranslationModes.PositionOffset, "PositionOffset");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Elements.TranslationModes.SizeFactor, "SizeFactor");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Elements.TranslationModes.Size, "Size");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.TranslationModes.Size, "Size");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Triggers.Actions.GiveFocus.Singleton, "GiveFocus");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Triggers.WhileKeyboardVisible.Keyboard, "Keyboard");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Triggers.LayoutTransition.PositionLayoutChange, "LayoutChange");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Triggers.LayoutTransition.SizeLayoutChange, "LayoutChange");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Triggers.LayoutTransition.WorldPositionChange, "WorldPositionChange");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Triggers.LayoutTransition.PositionChange, "PositionChange");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Triggers.LayoutTransition.ResizeSizeChange, "SizeChange");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Triggers.LayoutTransition.ScalingSizeChange, "SizeChange");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Triggers.IScrolledLengths.Points, "Points");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Triggers.IScrolledLengths.Pixels, "Pixels");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Triggers.IScrolledLengths.ContentSize, "ContentSize");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Triggers.IScrolledLengths.ScrollViewSize, "ScrollViewSize");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Resources.MemoryPolicy.PreloadRetain, "PreloadRetain");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Resources.MemoryPolicy.UnloadUnused, "UnloadUnused");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.Font.PlatformDefault, "PlatformDefault");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.ScalingModes.Identity, "Identity");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.TranslationModes.Local, "Local");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.TranslationModes.ParentSize, "ParentSize");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.TranslationModes.Width, "Width");
        global::Uno.UX.Resource.SetGlobalKey(Fuse.TranslationModes.Height, "Height");
    }
    [global::Uno.UX.UXConstructor]
    public MainView()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp1 = new Fuse.Reactive.FuseJS.Http();
        var temp2 = new Fuse.Reactive.FuseJS.TimerModule();
        var temp3 = new Fuse.Triggers.BusyTaskModule();
        var temp4 = new Fuse.FileSystem.FileSystemModule();
        var temp5 = new Fuse.Storage.StorageModule();
        var temp6 = new Polyfills.Window.WindowModule();
        var temp7 = new FuseJS.Globals();
        var temp8 = new FuseJS.Lifecycle();
        var temp9 = new FuseJS.Environment();
        var temp10 = new FuseJS.Base64();
        var temp11 = new FuseJS.Bundle();
        var temp12 = new FuseJS.FileReaderImpl();
        var temp13 = new FuseJS.UserEvents();
        var temp14 = new Share();
        myRectangle = new Fuse.Controls.Rectangle();
        myRectangle_Color_inst = new ShareSheet_FuseControlsShape_Color_Property(myRectangle, __selector0);
        myRectangle_CornerRadius_inst = new ShareSheet_FuseControlsRectangle_CornerRadius_Property(myRectangle, __selector1);
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new Fuse.Reactive.Each();
        temp_Items_inst = new ShareSheet_FuseReactiveEach_Items_Property(temp, __selector2);
        myBlur = new Fuse.Effects.Blur();
        myBlur_Radius_inst = new ShareSheet_FuseEffectsBlur_Radius_Property(myBlur, __selector3);
        var temp15 = new Fuse.Controls.ClientPanel();
        var temp16 = new Fuse.Controls.PageControl();
        var temp17 = new PageWithTitle();
        var temp18 = new Fuse.Controls.Panel();
        var temp19 = new Fuse.Gestures.WhilePressed();
        var temp20 = new Fuse.Animations.Rotate();
        var temp21 = new Fuse.Animations.Scale();
        var temp22 = new Fuse.Animations.Change<float4>(myRectangle_Color_inst);
        var temp23 = new Fuse.Animations.Change<float4>(myRectangle_CornerRadius_inst);
        var temp24 = new PageWithTitle();
        var temp25 = new Fuse.Reactive.JavaScript(__g_nametable);
        var temp26 = new Fuse.Controls.Panel();
        var temp27 = new Fuse.Controls.ScrollView();
        var temp28 = new Fuse.Controls.Panel();
        var temp29 = new Fuse.Layouts.ColumnLayout();
        var item = new Template(this, this);
        var temp30 = new Fuse.Reactive.DataBinding<object>(temp_Items_inst, "items");
        temp_eb0 = new Fuse.Reactive.EventBinding("addItem");
        var temp31 = new PageWithTitle();
        var temp32 = new Fuse.Controls.Grid();
        var temp33 = new Fuse.Controls.Image();
        var temp34 = new Fuse.Controls.Slider();
        var temp35 = new Fuse.Triggers.ProgressAnimation();
        var temp36 = new Fuse.Animations.Change<float>(myBlur_Radius_inst);
        temp15.Children.Add(temp16);
        temp16.Children.Add(temp17);
        temp16.Children.Add(temp24);
        temp16.Children.Add(temp31);
        temp17.Title = "Basic animation";
        temp17.Color = float4(0.9960784f, 0.9921569f, 0.9882353f, 1f);
        temp17.HeaderColor = float4(0.3490196f, 0.372549f, 1f, 1f);
        temp17.HeaderTextColor = float4(1f, 1f, 1f, 1f);
        temp17.Instructions = "Tap and hold the rectangle";
        temp17.Children.Add(temp18);
        temp18.Children.Add(myRectangle);
        myRectangle.CornerRadius = float4(0f, 0f, 0f, 0f);
        myRectangle.Color = float4(0.282353f, 0.5803922f, 0.8980392f, 1f);
        myRectangle.Width = new Uno.UX.Size(80f, Uno.UX.Unit.Unspecified);
        myRectangle.Height = new Uno.UX.Size(80f, Uno.UX.Unit.Unspecified);
        myRectangle.Name = __selector4;
        myRectangle.Children.Add(temp19);
        temp19.Animators.Add(temp20);
        temp19.Animators.Add(temp21);
        temp19.Animators.Add(temp22);
        temp19.Animators.Add(temp23);
        temp20.Degrees = 45f;
        temp20.Duration = 0.5;
        temp20.Easing = Fuse.Animations.Easing.CubicInOut;
        temp21.Factor = 2f;
        temp21.Duration = 0.5;
        temp21.Easing = Fuse.Animations.Easing.CubicInOut;
        temp22.Value = float4(0.9882353f, 0.3176471f, 0.5215687f, 1f);
        temp22.Duration = 0.3;
        temp23.Value = float4(15f, 15f, 15f, 15f);
        temp23.Duration = 0.3;
        temp24.Title = "Logic with JavaScript";
        temp24.Color = float4(1f, 1f, 1f, 1f);
        temp24.HeaderColor = float4(0.9647059f, 0.5607843f, 0.8431373f, 1f);
        temp24.HeaderTextColor = float4(1f, 1f, 1f, 1f);
        temp24.Instructions = "Tap the screen to add items";
        temp24.Children.Add(temp25);
        temp24.Children.Add(temp26);
        temp25.Code = "var Observable = require('FuseJS/Observable');\n\t\t\t\t\titems = Observable();\n\t\t\t\t\tfunction addItem(){\n\t\t\t\t\t\titems.add({\n\t\t\t\t\t\t\tcolor : [Math.random(), Math.random(), Math.random(), 1],\n\t\t\t\t\t\t\theight : (Math.random() + 1.0) * 80\n\t\t\t\t\t\t});\n\t\t\t\t\t}\n\t\t\t\t\tmodule.exports = {\n\t\t\t\t\t\titems : items,\n\t\t\t\t\t\taddItem : addItem\n\t\t\t\t\t};";
        temp25.LineNumber = 37;
        temp25.FileName = "MainView.ux";
        global::Fuse.Gestures.Tapped.AddHandler(temp26, temp_eb0.OnEvent);
        temp26.Children.Add(temp27);
        temp26.Bindings.Add(temp_eb0);
        temp27.Children.Add(temp28);
        temp28.Layout = temp29;
        temp28.Children.Add(temp);
        temp29.ColumnCount = 3;
        temp.Templates.Add(item);
        temp.Bindings.Add(temp30);
        temp31.Title = "Realtime effects";
        temp31.Color = float4(1f, 1f, 1f, 1f);
        temp31.HeaderColor = float4(0.172549f, 0.682353f, 0.2470588f, 1f);
        temp31.HeaderTextColor = float4(1f, 1f, 1f, 1f);
        temp31.Instructions = "Use the slider to blur the logo";
        temp31.Children.Add(temp32);
        temp32.RowCount = 2;
        temp32.Children.Add(temp33);
        temp32.Children.Add(temp34);
        temp33.Color = float4(0f, 0f, 0f, 1f);
        temp33.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Assets/FuseLogo.png"));
        temp33.Children.Add(myBlur);
        myBlur.Radius = 0f;
        myBlur.Name = __selector5;
        temp34.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp34.Margin = float4(40f, 0f, 40f, 0f);
        temp34.Children.Add(temp35);
        temp35.Animators.Add(temp36);
        temp36.Value = 10f;
        __g_nametable.This = this;
        __g_nametable.Objects.Add(myRectangle);
        __g_nametable.Objects.Add(myBlur);
        this.Children.Add(temp15);
    }
    static global::Uno.UX.Selector __selector0 = "Color";
    static global::Uno.UX.Selector __selector1 = "CornerRadius";
    static global::Uno.UX.Selector __selector2 = "Items";
    static global::Uno.UX.Selector __selector3 = "Radius";
    static global::Uno.UX.Selector __selector4 = "myRectangle";
    static global::Uno.UX.Selector __selector5 = "myBlur";
}
