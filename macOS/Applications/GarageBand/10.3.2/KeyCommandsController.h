//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SmallDialogController.h"

#import "NSOutlineViewDataSource.h"

@class CommandsOutline, MASearchField, NSArray, NSButton, NSMenu, NSPopUpButton, NSSegmentedControl, NSString, NSTableView, NSTextField, NSView;

@interface KeyCommandsController : SmallDialogController <NSOutlineViewDataSource>
{
    NSView *container;
    NSPopUpButton *optionsPopUpButton;
    NSSegmentedControl *showModeButton;
    NSButton *showCustomizedButton;
    NSButton *showMultiUsedButton;
    NSButton *showConflictsButton;
    NSButton *showModifiersButton;
    MASearchField *searchField;
    CommandsOutline *commands;
    NSTextField *key;
    NSButton *learnKey;
    NSButton *learnScanCode;
    NSButton *deleteKey;
    NSView *touchBarButtonContainer;
    NSTextField *touchBarButton;
    NSTextField *touchBarLabel;
    NSPopUpButton *touchBarColor;
    NSButton *learnTouchBar;
    NSButton *deleteTouchBar;
    NSView *assignmentsContainer;
    NSTableView *assignments;
    NSButton *learnAssignment;
    NSButton *deleteAssignment;
    NSMenu *searchFieldRecentsMenu;
    NSTextField *comment;
    unsigned long long _currentModifiers;
    NSArray *_dataSourceCache;
    NSArray *findWords;
}

+ (id)nibName;
+ (id)sharedController;
- (BOOL)allowMakeFirstResponder:(id)arg1;
- (BOOL)allowEvent:(id)arg1;
- (BOOL)doKeyDown:(id)arg1;
- (int)endKeyDown:(struct TAST *)arg1 other:(struct TAST *)arg2;
- (id)commands;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (void)splitView:(id)arg1 resizeSubviewsWithOldSize:(struct CGSize)arg2;
- (void)showAll:(BOOL)arg1;
- (void)cancelSearch;
- (void)allChanged;
- (void)currBefChanged;
- (BOOL)findInUse;
- (BOOL)learningTouchBar;
- (BOOL)learningScan;
- (BOOL)learningKeyOrScan;
- (BOOL)scrollToBefGruppe:(short)arg1 befehl:(short)arg2;
- (short)befehl;
- (short)befGruppe;
- (void)click_deleteAssignment:(id)arg1;
- (void)click_learnAssignment:(id)arg1;
- (void)assignmentsDoubleClick:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 toolTipForCell:(id)arg2 rect:(struct CGRect *)arg3 tableColumn:(id)arg4 row:(long long)arg5 mouseLocation:(struct CGPoint)arg6;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (struct Assign_Host *)assignmentAtRow:(long long)arg1;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)click_deleteTouchBarButton:(id)arg1;
- (void)click_learnTouchBarButton:(id)arg1;
- (void)change_touchBarColor:(id)arg1;
- (void)change_touchBarLabel:(id)arg1;
- (void)click_delete:(id)arg1;
- (void)click_learn:(id)arg1;
- (void)updateHeaderViewMenu;
- (void)toggleColumn:(id)arg1;
- (void)toggleColumnWithIdentifier:(id)arg1;
- (void)toggleColumnWithIndex:(long long)arg1;
- (BOOL)outlineView:(id)arg1 shouldExpandItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldCollapseItem:(id)arg2;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (BOOL)outlineView:(id)arg1 shouldSelectItem:(id)arg2;
- (id)outlineView:(id)arg1 toolTipForCell:(id)arg2 rect:(struct CGRect *)arg3 tableColumn:(id)arg4 item:(id)arg5 mouseLocation:(struct CGPoint)arg6;
- (BOOL)outlineView:(id)arg1 shouldEditTableColumn:(id)arg2 item:(id)arg3;
- (void)outlineView:(id)arg1 quickHelpForCell:(id)arg2 tableColumn:(id)arg3 item:(id)arg4;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (void)invalidateDataSourceCache;
- (id)dataSourceCache;
- (void)change_search:(id)arg1;
- (void)flagsChanged:(id)arg1;
- (void)change_showButton:(id)arg1;
- (void)menuInitialize:(id)arg1;
- (void)menuExpandCollapseAll:(id)arg1;
- (void)collapseOrExpandAll:(BOOL)arg1;
- (void)menuScrollToSelection:(id)arg1;
- (void)menuCopy:(id)arg1;
- (_Bool)befehlFiltered:(const struct BEFEHL *)arg1;
- (BOOL)befehlShown:(const struct BEFEHL *)arg1 gruppe:(const struct BEFGRUPPE *)arg2;
- (void)menuSaveAs:(id)arg1;
- (void)menuSave:(id)arg1;
- (void)menuImport:(id)arg1;
- (void)handleLearnModeChanged:(id)arg1;
- (void)updateCommands:(BOOL)arg1 preserveOldExpandState:(BOOL)arg2 scrollToSamePosition:(BOOL)arg3;
- (void)updateCommands:(BOOL)arg1;
- (void)updateUI;
- (void)updateOptionsMenu;
- (BOOL)validateMenuItem:(id)arg1;
- (id)presetsSubMenu:(BOOL)arg1;
- (long long)checkmarkForPath:(id)arg1;
- (void)selectKeyCommand:(id)arg1;
- (void)presetMenuAction:(id)arg1;
- (id)selectedIDs;
- (id)localizedKeyCommandsFileNameForPath:(id)arg1;
- (void)updateEditor;
- (void)updateComment;
- (id)appendToCommentString:(id)arg1 forBefehl:(id)arg2 touchBar:(BOOL)arg3;
- (id)appendToCommentString:(id)arg1 withFormat:(id)arg2 forTast:(const struct TAST *)arg3;
- (id)appendConflictsDescriptionToString:(id)arg1 conflicts:(id)arg2 touchBar:(BOOL)arg3 separatorString:(id)arg4;
- (id)befContainerConflicts:(id)arg1 touchBar:(BOOL)arg2;
- (void)updateAssigns;
- (void)iterateSelection:(CDUnknownBlockType)arg1;
- (struct TAST *)selectedTast:(BOOL)arg1;
- (const struct BEFEHL *)selectedBefehl;
- (id)selectedBefContainer;
- (void)updateLearnMode;
- (void)awakeFromNib;
- (id)tableColumnHiddenKey:(id)arg1;
- (void)windowDidResignKey:(id)arg1;
- (void)windowDidBecomeKey:(id)arg1;
- (void)windowDidMove:(id)arg1;
- (void)minimizeToScreenIfNeccessary;
- (void)ensureButtonsAreNotCutOff:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)cancelLearn;
- (void)cancelLearnKey;
- (void)willBecomeVisible;
- (void)windowDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

