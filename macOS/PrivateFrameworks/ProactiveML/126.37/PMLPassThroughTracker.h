//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProactiveML/PMLEvaluationTrackerProtocol-Protocol.h>
#import <ProactiveML/PMLLogRegTrackerProtocol-Protocol.h>

@class NSMutableArray, NSString;

@interface PMLPassThroughTracker : NSObject <PMLLogRegTrackerProtocol, PMLEvaluationTrackerProtocol>
{
    struct NSString *_planId;
    unsigned long long _quantizationNumberOfBuckets;
    NSMutableArray *_results;
}

- (void).cxx_destruct;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)toPlistWithChunks:(id)arg1;
- (id)trackEvaluationMetrics:(id)arg1 minibatchStats:(id)arg2;
- (id)trackGradient:(id)arg1 scaleFactor:(float)arg2 minibatchStats:(id)arg3 evaluationMetrics:(id)arg4 serverIteration:(unsigned long long)arg5;
- (id)trackWeights:(id)arg1 scaleFactor:(float)arg2 minibatchStats:(id)arg3 evaluationMetrics:(id)arg4;
- (id)initWithPlanId:(struct NSString *)arg1 numberOfBuckets:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

