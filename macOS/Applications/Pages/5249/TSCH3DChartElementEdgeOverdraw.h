//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TSCH3DPrefilteredLineRenderer, TSCH3DSceneRenderPipeline;

@interface TSCH3DChartElementEdgeOverdraw : NSObject
{
    BOOL mPreprocessed;
    TSCH3DPrefilteredLineRenderer *mRenderer;
    TSCH3DSceneRenderPipeline *mRenderingPipeline;
    box_80622335 mTexturePortion;
}

- (id).cxx_construct;
- (void)processPipeline:(id)arg1 lineRenderer:(id)arg2;
@property(readonly, nonatomic) TSCH3DSceneRenderPipeline *renderingPipeline; // @synthesize renderingPipeline=mRenderingPipeline;
@property(readonly, nonatomic) TSCH3DPrefilteredLineRenderer *renderer; // @synthesize renderer=mRenderer;
- (void)preprocessPipeline:(id)arg1;
- (void)renderOverdrawEdges:(id)arg1 modelView:(tmat4x4_3074befe *)arg2;
@property(nonatomic) box_80622335 *texturePortion;
- (void)dealloc;

@end

