//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class PXLoadingStatusManager, PXOperationStatus;

@protocol PXLoadingStatusManagerDelegate <NSObject>

@optional
- (void)loadingStatusManager:(PXLoadingStatusManager *)arg1 didUpdateLoadingStatus:(PXOperationStatus *)arg2 forItem:(id)arg3;
@end

