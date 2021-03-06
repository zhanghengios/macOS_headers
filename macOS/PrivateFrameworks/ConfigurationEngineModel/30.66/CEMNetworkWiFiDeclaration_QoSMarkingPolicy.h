//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray, NSNumber;

@interface CEMNetworkWiFiDeclaration_QoSMarkingPolicy : CEMPayloadBase
{
    NSArray *_payloadQoSMarkingWhitelistedAppIdentifiers;
    NSNumber *_payloadQoSMarkingAppleAudioVideoCalls;
    NSNumber *_payloadQoSMarkingEnabled;
}

+ (id)buildRequiredOnly;
+ (id)buildWithQoSMarkingWhitelistedAppIdentifiers:(id)arg1 withQoSMarkingAppleAudioVideoCalls:(id)arg2 withQoSMarkingEnabled:(id)arg3;
+ (id)allowedPayloadKeys;
@property(copy, nonatomic) NSNumber *payloadQoSMarkingEnabled; // @synthesize payloadQoSMarkingEnabled=_payloadQoSMarkingEnabled;
@property(copy, nonatomic) NSNumber *payloadQoSMarkingAppleAudioVideoCalls; // @synthesize payloadQoSMarkingAppleAudioVideoCalls=_payloadQoSMarkingAppleAudioVideoCalls;
@property(copy, nonatomic) NSArray *payloadQoSMarkingWhitelistedAppIdentifiers; // @synthesize payloadQoSMarkingWhitelistedAppIdentifiers=_payloadQoSMarkingWhitelistedAppIdentifiers;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;

@end

