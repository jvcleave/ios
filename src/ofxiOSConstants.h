//
//  ofxiOSConstants.h
//  iOS+OFLib
//
//  Created by Lukasz Karluk on 25/09/2014.
//  http://julapy.com
//

#pragma once

// iOS Device Types.
//-------------------------------------------------------------------------------
enum ofxiOSDeviceType {
    OFXIOS_DEVICE_IPHONE = 0,
    OFXIOS_DEVICE_IPODTOUCH,
    OFXIOS_DEVICE_IPAD,
    OFXIOS_DEVICE_UNKNOWN
};


// iOS Renderer Types.
//-------------------------------------------------------------------------------
enum ofxiOSRendererType {
    OFXIOS_RENDERER_ES1 = 1,
    OFXIOS_RENDERER_ES2 = 2,
    OFXIOS_RENDERER_ES3 = 3
};