//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class CKUpdate, NSError, SSPurchase, SSPurchaseResponse, SUAppStoreUpdate;

@protocol ISUpdateDelegate
- (void)appUpdatePurchase:(SSPurchase *)arg1 didFinishWithSuccess:(BOOL)arg2 response:(SSPurchaseResponse *)arg3 error:(NSError *)arg4;
- (void)appUpdate:(CKUpdate *)arg1 wasCancelledWithError:(NSError *)arg2;
- (void)osUpdate:(SUAppStoreUpdate *)arg1 wasCancelledWithError:(NSError *)arg2;
@end

