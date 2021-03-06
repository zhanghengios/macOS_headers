//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProVideo/PAEFilterDefaultBase.h>

@class NSLock;

@interface PAEFracturedFilter : PAEFilterDefaultBase
{
    struct FracturedParams *_fxParams;
    struct vector<FracturedUtils::FracturedFXPoolItem *, std::__1::allocator<FracturedUtils::FracturedFXPoolItem *>> _fxPool;
    NSLock *_fxPoolLock;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)variesByDuration;
- (BOOL)variesOverTime;
- (BOOL)getOutputWidth:(unsigned long long *)arg1 height:(unsigned long long *)arg2 withInput:(CDStruct_4a07eeda)arg3 withInfo:(CDStruct_f5b31fc1)arg4;
- (BOOL)canThrowRenderOutput:(id)arg1 withInput:(id)arg2 withInfo:(CDStruct_f5b31fc1)arg3;
- (BOOL)addParameters;
- (id)properties;
- (void)onVTBUserInteractionEventNotification:(id)arg1;
- (void)dealloc;
- (id)initWithAPIManager:(id)arg1;

@end

