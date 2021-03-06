//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TMAInspectorPaneController.h"

#import "NSMenuDelegate-Protocol.h"

@class NSObjectController, NSPopUpButton, NSStepper, NSString, NSTextField, TMACellCurrencyTransformer, TMAInspectorCheckBoxButton;

@interface TMACellNumberInspectorPaneController : TMAInspectorPaneController <NSMenuDelegate>
{
    int mInspectorFormatType;
    TMACellCurrencyTransformer *mCurrencyMap;
    BOOL mBindingsEngaged;
    NSTextField *mDecimalLabel;
    NSPopUpButton *mNegStylePopUpButton;
    NSObjectController *mCellInspectorPropertyVendorObjectController;
    NSTextField *mDecimalTextField;
    NSStepper *mDecimalPlaceStepper;
    NSPopUpButton *mCurrencyPopUpButton;
    TMAInspectorCheckBoxButton *_thousandsSeparatorCheckBox;
    TMAInspectorCheckBoxButton *_accountingStyleCheckBox;
    NSTextField *_currencyLabel;
}

@property NSTextField *currencyLabel; // @synthesize currencyLabel=_currencyLabel;
@property TMAInspectorCheckBoxButton *accountingStyleCheckBox; // @synthesize accountingStyleCheckBox=_accountingStyleCheckBox;
@property TMAInspectorCheckBoxButton *thousandsSeparatorCheckBox; // @synthesize thousandsSeparatorCheckBox=_thousandsSeparatorCheckBox;
@property NSPopUpButton *currencyPopUpButton; // @synthesize currencyPopUpButton=mCurrencyPopUpButton;
@property NSStepper *decimalPlaceStepper; // @synthesize decimalPlaceStepper=mDecimalPlaceStepper;
@property NSTextField *decimalTextField; // @synthesize decimalTextField=mDecimalTextField;
@property NSObjectController *cellInspectorPropertyVendorObjectController; // @synthesize cellInspectorPropertyVendorObjectController=mCellInspectorPropertyVendorObjectController;
@property NSPopUpButton *negStylePopUpButton; // @synthesize negStylePopUpButton=mNegStylePopUpButton;
@property NSTextField *decimalLabel; // @synthesize decimalLabel=mDecimalLabel;
@property int inspectorFormatType; // @synthesize inspectorFormatType=mInspectorFormatType;
- (void)menuDidClose:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (void)menuItemSelected:(id)arg1;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)loadView;
- (void)p_populateCurrencyMenuWithCurrencyCode:(id)arg1;
- (void)p_populateCurrencyMenu;
- (void)p_populateNegStyleMenu;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

