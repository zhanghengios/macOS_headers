//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"
#import "NSObject.h"

@class INIntentDescription, NSBundle, NSString, PBCodable;

@protocol INIntentExport <NSObject, JSExport>
+ (INIntentDescription *)intentDescription;
+ (NSString *)typeName;
@property(readonly, nonatomic) NSString *typeName;
@property(readonly, nonatomic) NSString *intentId;
@property(copy) NSString *identifier;
@property(readonly, nonatomic) NSString *launchId;
@property(readonly, nonatomic) NSString *utteranceString;
@property(copy, nonatomic) PBCodable *backingStore;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(NSString *)arg2;
- (void)trimDataAgainstTCCForAuditToken:(CDStruct_6ad76789)arg1 bundle:(NSBundle *)arg2;
- (id)init;
@end

