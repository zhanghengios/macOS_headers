//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HIDDevice, HIDManager, NSArray, NSString;

@interface HIDDisplayInterface : NSObject
{
    HIDManager *_manager;
    HIDDevice *_deviceRef;
    NSString *_containerID;
    unsigned long long _registryID;
}

@property(readonly) unsigned long long registryID; // @synthesize registryID=_registryID;
@property(readonly) NSString *containerID; // @synthesize containerID=_containerID;
- (void).cxx_destruct;
@property(readonly) NSArray *capabilities;
- (BOOL)extract:(id)arg1 error:(id *)arg2;
- (BOOL)commit:(id)arg1 error:(id *)arg2;
- (void)setDevice:(id)arg1;
- (id)device;
- (id)getHIDDevices;
- (id)getHIDDevicesForMatching:(id)arg1;
- (id)getDeviceElements:(id)arg1;
- (BOOL)hasMatchingContainerID:(id)arg1 containerID:(id)arg2;
- (id)extractContainerIDFromService:(unsigned int)arg1;
- (void)dealloc;
- (id)initWithMatching:(id)arg1;
- (id)initWithService:(unsigned int)arg1;
- (id)initWithContainerID:(id)arg1;
- (id)description;

@end

