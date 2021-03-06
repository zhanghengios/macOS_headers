//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "AKAuthorizationPaneAutomaticResizeDelegate.h"

@class AKAuthorizationPaneContext, NSLayoutConstraint, NSMutableArray, NSStackView, NSString;

@interface AKAuthorizationPaneViewController : NSViewController <AKAuthorizationPaneAutomaticResizeDelegate>
{
    id <AKAuthorizationPaneViewControllerDelegate><AKAuthorizationPaneAutomaticResizeDelegate> _paneDelegate;
    id <AKAuthorizationEditableDataSources> _editableDataSources;
    NSStackView *_paneHeaderStackView;
    NSStackView *_paneFooterStackView;
    AKAuthorizationPaneContext *_headerPaneContext;
    AKAuthorizationPaneContext *_footerPaneContext;
    NSMutableArray *_mutableConstraints;
    NSLayoutConstraint *_headerWidthConstraint;
    NSLayoutConstraint *_footerWidthConstraint;
}

@property(readonly) NSLayoutConstraint *footerWidthConstraint; // @synthesize footerWidthConstraint=_footerWidthConstraint;
@property(readonly) NSLayoutConstraint *headerWidthConstraint; // @synthesize headerWidthConstraint=_headerWidthConstraint;
@property(retain) NSMutableArray *mutableConstraints; // @synthesize mutableConstraints=_mutableConstraints;
@property(retain) AKAuthorizationPaneContext *footerPaneContext; // @synthesize footerPaneContext=_footerPaneContext;
@property(retain) AKAuthorizationPaneContext *headerPaneContext; // @synthesize headerPaneContext=_headerPaneContext;
@property(readonly) NSStackView *paneFooterStackView; // @synthesize paneFooterStackView=_paneFooterStackView;
@property(readonly) NSStackView *paneHeaderStackView; // @synthesize paneHeaderStackView=_paneHeaderStackView;
@property __weak id <AKAuthorizationEditableDataSources> editableDataSources; // @synthesize editableDataSources=_editableDataSources;
@property __weak id <AKAuthorizationPaneViewControllerDelegate><AKAuthorizationPaneAutomaticResizeDelegate> paneDelegate; // @synthesize paneDelegate=_paneDelegate;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)_newStackView;
- (id)_newContainerView;
- (void)setAutomaticResizeDelay:(double)arg1;
- (void)endAutomaticResizeDisabled;
- (void)beginAutomaticResizeDisabled;
- (BOOL)isAutomaticResizeDisabled;
- (void)_setupContexts;
- (void)loadView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

