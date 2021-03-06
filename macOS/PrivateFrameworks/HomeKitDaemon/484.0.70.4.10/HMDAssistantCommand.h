//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SAObjects/SAHACommand.h>

#import <HomeKitDaemon/AFServiceCommand-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDAssistantCommandHelper, HMDAssistantGather, HMDHome, HMDHomeManager, NSArray, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDAssistantCommand : SAHACommand <AFServiceCommand, HMFLogging>
{
    BOOL _completionHandlerCalled;
    HMDHomeManager *_homeManager;
    HMDAssistantGather *_gather;
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_homeKitObjects;
    long long _numberOfHomes;
    NSString *_primaryHomeName;
    NSUUID *_primaryHomeUUID;
    NSString *_currentHomeName;
    NSUUID *_currentHomeUUID;
    HMDAssistantCommandHelper *_assistantCommandHelper;
    HMDHome *_home;
    unsigned long long _startTime;
}

+ (void)initialize;
+ (id)logCategory;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) HMDHome *home; // @synthesize home=_home;
@property(nonatomic) BOOL completionHandlerCalled; // @synthesize completionHandlerCalled=_completionHandlerCalled;
@property(retain, nonatomic) HMDAssistantCommandHelper *assistantCommandHelper; // @synthesize assistantCommandHelper=_assistantCommandHelper;
@property(retain, nonatomic) NSUUID *currentHomeUUID; // @synthesize currentHomeUUID=_currentHomeUUID;
@property(retain, nonatomic) NSString *currentHomeName; // @synthesize currentHomeName=_currentHomeName;
@property(retain, nonatomic) NSUUID *primaryHomeUUID; // @synthesize primaryHomeUUID=_primaryHomeUUID;
@property(retain, nonatomic) NSString *primaryHomeName; // @synthesize primaryHomeName=_primaryHomeName;
@property(nonatomic) long long numberOfHomes; // @synthesize numberOfHomes=_numberOfHomes;
@property(retain, nonatomic) NSArray *homeKitObjects; // @synthesize homeKitObjects=_homeKitObjects;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) HMDAssistantGather *gather; // @synthesize gather=_gather;
@property(nonatomic) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
- (void).cxx_destruct;
- (void)performWithGather:(id)arg1 queue:(id)arg2 msgDispatcher:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)handleGetColor:(id)arg1 forObjects:(id)arg2 serviceType:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)handleSetColor:(id)arg1 forObjects:(id)arg2 service:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)readRequestsForCharacteristic:(id)arg1;
- (id)addStatusCharacteristicsIfNeeded:(id)arg1;
- (void)addLinkedServiceCharacteristicsFor:(id)arg1 toCollection:(id)arg2 assistantObjects:(id)arg3;
- (void)addBridgedAcessoryCharacteristicsFor:(id)arg1 toCollection:(id)arg2 assistantObjects:(id)arg3;
- (id)addCharacteristicsFromRelatedServicesFor:(id)arg1 assistantObjects:(id)arg2;
- (void)addCharacteristicWithType:(id)arg1 fromService:(id)arg2 toCollection:(id)arg3 assistantObjects:(id)arg4;
- (void)addActivationCharacteristicsIfNeeded:(id)arg1 forCharacteristic:(id)arg2;
- (void)addIfNeededActivationCharacteristic:(id)arg1 fromService:(id)arg2 toCollection:(id)arg3;
- (id)handleReadWriteResponses:(id)arg1 error:(id)arg2 forAction:(id)arg3 inServiceType:(id)arg4 results:(id)arg5 forObjects:(id)arg6;
- (BOOL)populateColorResult:(id)arg1 serviceType:(id)arg2 service:(id)arg3 action:(id)arg4 responses:(id)arg5 forObjects:(id)arg6;
- (id)parseColorEncoding:(id)arg1;
- (void)handleCommandWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)handleUpdateActionTypes:(id)arg1 serviceType:(id)arg2 forObjects:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)updateValue:(id)arg1 forAction:(id)arg2;
- (id)updateValueToBoundary:(id)arg1 valueType:(id)arg2 fudgeMinimum:(BOOL)arg3 metadata:(id)arg4;
- (void)handleSetActionTypes:(id)arg1 serviceType:(id)arg2 forObjects:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)compareForBoundary:(id)arg1 withMetadata:(id)arg2;
- (id)compareCurrentValue:(id)arg1 newValue:(id)arg2 withMetadata:(id)arg3;
- (void)handleGetActionTypes:(id)arg1 serviceType:(id)arg2 forObjects:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (BOOL)populateResult:(id)arg1 fromResponse:(id)arg2 responses:(id)arg3 forAction:(id)arg4 serviceType:(id)arg5 forObjects:(id)arg6;
- (void)handleGetMetadataActionTypes:(id)arg1 serviceType:(id)arg2 forObjects:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)executeActionSet:(id)arg1 action:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)returnResults:(id)arg1 serviceType:(id)arg2 forAction:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)reportUnlockRequired:(CDUnknownBlockType)arg1;
- (void)reportResults:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)reportOutcome:(id)arg1 results:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_logEvent:(id)arg1;
- (id)filterObjects:(id)arg1 forCharacteristics:(id)arg2;
- (id)filterObjects:(id)arg1 forCharacteristicTypes:(id)arg2;
- (id)objectsWithSearchFilter:(id)arg1 inHome:(id)arg2 overrideServiceTypeIfNeeded:(id *)arg3;
- (id)getoverridingHomeUUIDFromName:(id)arg1;
- (id)filterObjects:(id)arg1 byCharacteristicType:(id)arg2;
- (id)filterObjects:(id)arg1 byAttribute:(id)arg2 forActionType:(id)arg3;
- (id)filterObjects:(id)arg1 forGroup:(id)arg2;
- (id)filterObjects:(id)arg1 forRoom:(id)arg2 andZone:(id)arg3;
- (id)objectsWithIdentifierList:(id)arg1;
- (id)adjustGetValue:(id)arg1 type:(id)arg2 units:(id)arg3 attribute:(id)arg4;
- (id)adjustSetValue:(id)arg1 type:(id)arg2 units:(id)arg3 attribute:(id)arg4;
- (BOOL)isAttributeValue:(id)arg1 equalTo:(id)arg2;
- (id)setValue:(id)arg1 format:(id)arg2 units:(id)arg3;
- (id)getValueOfType:(id)arg1 action:(id)arg2;
- (id)convertValue:(id)arg1 fromUnits:(id)arg2 toUnits:(id)arg3;
- (id)getReportingUnits:(id)arg1 hapCharacteristicType:(id)arg2 attribute:(id)arg3;
- (id)getLocaleUnits:(id)arg1;
- (id)entityFromActionSet:(id)arg1;
- (BOOL)populateResultWithEntity:(id)arg1 action:(id)arg2 entity:(id)arg3;
- (BOOL)populateResult:(id)arg1 withObject:(id)arg2 serviceType:(id)arg3 action:(id)arg4;
- (BOOL)populateResult:(id)arg1 withService:(id)arg2 serviceType:(id)arg3 characteristic:(id)arg4 resultAttribute:(id)arg5 action:(id)arg6;
- (id)serviceFromObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

