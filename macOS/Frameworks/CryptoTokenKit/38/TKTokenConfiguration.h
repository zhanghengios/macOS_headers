//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSString, TKTokenConfigurationProxy, TKTokenID;

@interface TKTokenConfiguration : NSObject
{
    TKTokenConfigurationProxy *_proxy;
    NSArray *_keychainItems;
    TKTokenID *_tokenID;
}

+ (id)interfaceForProtocol;
@property(readonly, nonatomic) TKTokenID *tokenID; // @synthesize tokenID=_tokenID;
- (void).cxx_destruct;
- (id)certificateForObjectID:(id)arg1 error:(id *)arg2;
- (id)keyForObjectID:(id)arg1 error:(id *)arg2;
@property(copy, nonatomic) NSArray *keychainItems;
@property(copy, nonatomic) NSData *configurationData;
- (id)beginTransaction;
@property(readonly, nonatomic) NSString *instanceID;
- (id)initWithTokenID:(id)arg1 proxy:(id)arg2;

@end

