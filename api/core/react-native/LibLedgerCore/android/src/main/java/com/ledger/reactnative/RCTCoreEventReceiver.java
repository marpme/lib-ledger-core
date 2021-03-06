// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from emitter.djinni

package com.ledger.reactnative;

import co.ledger.core.Event;
import co.ledger.core.EventReceiver;
import com.facebook.react.bridge.Promise;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactContext;
import com.facebook.react.bridge.ReactContextBaseJavaModule;
import com.facebook.react.bridge.ReactMethod;
import com.facebook.react.bridge.WritableNativeArray;
import com.facebook.react.bridge.WritableNativeMap;
import java.text.DateFormat;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Date;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;
import java.util.Optional;
import java.util.UUID;

/**Class respresenting an event receiver */
public class RCTCoreEventReceiver extends ReactContextBaseJavaModule {

    private final ReactApplicationContext reactContext;
    private Map<String, EventReceiverImpl> javaObjects;
    public Map<String, EventReceiverImpl> getJavaObjects()
    {
        return javaObjects;
    }

    public RCTCoreEventReceiver(ReactApplicationContext reactContext)
    {
        super(reactContext);
        this.reactContext = reactContext;
        this.javaObjects = new HashMap<String, EventReceiverImpl>();
    }

    @Override
    public String getName()
    {
        return "RCTCoreEventReceiver";
    }
    @ReactMethod
    public void newInstance(Promise promise)
    {
        EventReceiverImpl newInstance = new EventReceiverImpl(this.reactContext);
        String uuid = UUID.randomUUID().toString();
        this.javaObjects.put(uuid, newInstance);
        WritableNativeMap finalResult = new WritableNativeMap();
        finalResult.putString("type","RCTCoreEventReceiver");
        finalResult.putString("uid",uuid);
        promise.resolve(finalResult);
    }
    @ReactMethod
    public void release(Map<String, String> currentInstance, Promise promise)
    {
        String uid = currentInstance.get("uid");
        if (uid.length() > 0)
        {
            this.javaObjects.remove(uid);
            promise.resolve(0);
        }
        else
        {
            promise.reject("Failed to release instance of RCTCoreEventReceiver", "First parameter of RCTCoreEventReceiver::release should be an instance of RCTCoreEventReceiver");
        }
    }
    @ReactMethod
    public void log(Promise promise)
    {
        WritableNativeArray result = new WritableNativeArray();
        for (Map.Entry<String, EventReceiverImpl> elem : this.javaObjects.entrySet())
        {
            result.pushString(elem.getKey());
        }
        promise.resolve(result);
    }
    @ReactMethod
    public void flush(Promise promise)
    {
        this.javaObjects.clear();
        promise.resolve(0);
    }

    /**
     *Method triggered when an event occurs
     *@param event, Event object that triggers this method
     */
    @ReactMethod
    public void onEvent(Map<String, String> currentInstance, HashMap <String, String> event, Promise promise) {
        try
        {
            String sUid = currentInstance.get("uid");

            EventReceiverImpl currentInstanceObj = this.javaObjects.get(sUid);

            RCTCoreEvent rctParam_event = this.reactContext.getNativeModule(RCTCoreEvent.class);
            Event javaParam_0 = rctParam_event.getJavaObjects().get(event.get("uid"));
            currentInstanceObj.onEvent(javaParam_0);
        }
        catch(Exception e)
        {
            promise.reject(e.toString(), e.getMessage());
        }
    }
}
