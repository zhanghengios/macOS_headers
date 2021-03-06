//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class ITItemList, Item;

@protocol IITItemListDelegate
- (void)itemListWantsRefresh:(ITItemList *)arg1;
- (void)itemListDidDisposeAllItems:(ITItemList *)arg1;
- (void)itemList:(ITItemList *)arg1 didDisposeItem:(Item *)arg2;
- (void)itemListInsertAnimationDidFadeIn:(ITItemList *)arg1;
- (void)itemListInsertAnimationDidUnheal:(ITItemList *)arg1;
- (void)itemListRemoveAnimationDidHeal:(ITItemList *)arg1;
- (void)itemListRemoveAnimationDidFadeOut:(ITItemList *)arg1;
@end

