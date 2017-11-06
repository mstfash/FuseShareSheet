using Fuse;
using Fuse.Scripting;
using Fuse.Reactive.Resource;
using Uno.UX;

using Uno.Compiler.ExportTargetInterop;

[ForeignInclude(Language.Java, "android.content.Intent")]
[ForeignInclude(Language.Java, "com.fuse.Activity")]
[UXGlobalModule]
public class Share : NativeModule
{
    static readonly Share _instance;

    public Share()
    {
        // Make sure we're only initializing the module once
        if(_instance != null) return;

        _instance = this;
        Resource.SetGlobalKey(_instance, "Share");
        AddMember(new NativeFunction("sendIntent", (NativeCallback)SendIntent));
    }

    static object SendIntent(Context c, object[] args)
    {
        if defined(Android) SendIntent((string)args[0]);
        if defined(iOS) SendIntent((string)args[0]);

        return null;
    }

    [Foreign(Language.Java)]
    static extern(Android) void SendIntent(string data)
    @{
        Intent sendIntent = new Intent();
        sendIntent.setAction(Intent.ACTION_SEND);
        sendIntent.putExtra(Intent.EXTRA_TEXT, data);
        sendIntent.setType("text/plain");
        Activity.getRootActivity().startActivity(Intent.createChooser(sendIntent, "Share via..."));
    @}


    [Foreign(Language.ObjC)]
    static extern(iOS) void SendIntent(string data)
    @{

      NSString *textToShare = data;
        NSArray *itemsToShare = @[textToShare];
        UIActivityViewController *activityVC = [[UIActivityViewController alloc] initWithActivityItems:itemsToShare applicationActivities: nil];
        activityVC.excludedActivityTypes = @[UIActivityTypePrint, UIActivityTypeCopyToPasteboard, UIActivityTypeAssignToContact, UIActivityTypeSaveToCameraRoll]; //or whichever you don't need
        [[[[UIApplication sharedApplication] keyWindow] rootViewController] presentViewController:activityVC animated:YES completion:nil];

    @}

    
}
