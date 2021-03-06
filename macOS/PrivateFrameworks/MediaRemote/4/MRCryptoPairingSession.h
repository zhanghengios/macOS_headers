//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, _MRDeviceInfoMessageProtobuf;

@interface MRCryptoPairingSession : NSObject
{
    _MRDeviceInfoMessageProtobuf *_device;
    unsigned long long _role;
    id <MRCryptoPairingSessionDelegate> _delegate;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(nonatomic) __weak id <MRCryptoPairingSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long role; // @synthesize role=_role;
@property(readonly, nonatomic) _MRDeviceInfoMessageProtobuf *device; // @synthesize device=_device;
- (void).cxx_destruct;
- (BOOL)deleteIdentityWithError:(id *)arg1;
- (id)decryptData:(id)arg1 withError:(id *)arg2;
- (id)encryptData:(id)arg1 withError:(id *)arg2;
- (void)handlePairingFailureWithStatus:(int)arg1;
- (void)handlePairingExchangeData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)updatePeer;
- (id)removePeer;
- (void)close;
- (void)open;
@property(readonly, nonatomic) NSArray *pairedDevices;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
@property(readonly, nonatomic, getter=isPaired) BOOL paired;
- (id)init;
- (id)initWithRole:(unsigned long long)arg1 device:(id)arg2;

@end

