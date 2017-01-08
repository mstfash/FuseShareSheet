package com.foreign;

// fuse defined imports
import com.uno.UnoObject;
import com.uno.BoolArray;
import com.uno.ByteArray;
import com.uno.CharArray;
import com.uno.DoubleArray;
import com.uno.FloatArray;
import com.uno.IntArray;
import com.uno.LongArray;
import com.uno.ObjectArray;
import com.uno.ShortArray;
import com.uno.StringArray;
import com.Bindings.UnoHelper;
import com.Bindings.UnoWrapped;
import com.Bindings.ExternedBlockHost;

// user defined imports
import android.content.Intent;
import com.fuse.Activity;

public class Share
{
    static void debug_log(Object message)
    {
        android.util.Log.d("ShareSheet", (message==null ? "null" : message.toString()));
    }

    public static void SendIntent291()
    {
        Intent sendIntent = new Intent();
                sendIntent.setAction(Intent.ACTION_SEND);
                sendIntent.putExtra(Intent.EXTRA_TEXT, "This is my text to send.");
                sendIntent.setType("text/plain");
                Activity.getRootActivity().startActivity(Intent.createChooser(sendIntent, "Share via..."));
    }
    
}
