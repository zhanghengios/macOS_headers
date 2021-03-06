//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KNKPFAssetExporter;

@interface KNKPFAnimationExporter : NSObject
{
    KNKPFAssetExporter *_assetExporter;
}

- (void).cxx_destruct;
- (BOOL)exportAnimation:(id)arg1 onLayer:(id)arg2 intoArray:(id)arg3 error:(id *)arg4;
- (BOOL)exportBasicAnimation:(id)arg1 fromAnimation:(id)arg2 onLayer:(id)arg3 error:(id *)arg4;
- (BOOL)exportKeyframeAnimation:(id)arg1 fromAnimation:(id)arg2;
- (void)exportCommonProperties:(id)arg1 fromAnimation:(id)arg2;
- (id)exportTimingFunction:(id)arg1;
- (long long)animationCurve:(id)arg1;
- (id)timingControlPointsFromTimingFunction:(id)arg1;
- (id)initWithExporter:(id)arg1;

@end

