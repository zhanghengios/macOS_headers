//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUAdManagerConfigurationProvider-Protocol.h>

@class NSString;
@protocol NUAdManagerConfiguration;

@interface NUFetchedAdManagerConfigurationProvider : NSObject <NUAdManagerConfigurationProvider>
{
    NSObject<NUAdManagerConfiguration> *_configuration;
}

@property(readonly, copy, nonatomic) NSObject<NUAdManagerConfiguration> *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (void)fetchConfigurationWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithConfiguration:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

