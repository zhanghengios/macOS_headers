//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@class SXFullscreenCanvasViewController;
@protocol UIViewControllerTransitionCoordinator;

@protocol SXFullscreenCanvasViewControllerDelegate <NSObject>
- (void)fullScreenCanvasViewControllerWantsToDismiss:(SXFullscreenCanvasViewController *)arg1;

@optional
- (void)fullscreenCanvasViewController:(SXFullscreenCanvasViewController *)arg1 willTransitionToSize:(struct CGSize)arg2 withTransitionCoordinator:(id <UIViewControllerTransitionCoordinator>)arg3;
@end

