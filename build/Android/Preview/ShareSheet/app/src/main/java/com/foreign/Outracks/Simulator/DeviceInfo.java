package com.foreign.Outracks.Simulator;

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
import android.os.Build;

public class DeviceInfo
{
    static void debug_log(Object message)
    {
        android.util.Log.d("ShareSheet", (message==null ? "null" : message.toString()));
    }

    public static String GetGUID289()
    {
        return Build.SERIAL;
    }
    
    public static String GetName290()
    {
        return Build.MODEL;
    }
    
}
