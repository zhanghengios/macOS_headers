//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FinderKit/FI_TViewController.h>

@class FI_TBrowserContainerController, FI_TContainerLayoutManager;

__attribute__((visibility("hidden")))
@interface FI_TBrowserContentViewController : FI_TViewController
{
    struct TNSWeakPtr<FI_TBrowserContainerController, void> _weakBrowserContainerController;
    struct TNSRef<NSMutableArray<NSLayoutConstraint *>, void> _layoutConstraints;
    struct TNSRef<FI_TContainerLayoutManager, void> _containerLayoutManager;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)removeBrowserContainerView;
- (void)addBrowserContainerView;
- (double)statusBarHeight;
- (_Bool)isStatusBarVisible;
- (_Bool)isInBrowseMode;
@property(retain, nonatomic) FI_TContainerLayoutManager *containerLayoutManager;
@property(nonatomic) __weak FI_TBrowserContainerController *browserContainerController; // @dynamic browserContainerController;
- (id)initWithContentView:(id)arg1 containerLayoutManager:(id)arg2;
- (void)initCommon;
- (void)aboutToTearDown;

@end

