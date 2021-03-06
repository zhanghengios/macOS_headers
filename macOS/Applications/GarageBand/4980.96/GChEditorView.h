//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "GChChordView.h"

@class GChDatabase, NSMutableArray;

@interface GChEditorView : GChChordView
{
    GChDatabase *gchDatabase;
    struct CGRect partRect;
    long long firstShownFret0;
    NSMutableArray *selectedChordElems;
    struct CGRect rubberbandRect;
}

- (void)mouseMoved:(id)arg1;
- (void)flagsChanged:(id)arg1;
- (void)updateCursorForPoint:(struct CGPoint)arg1 optionalStateChange:(BOOL)arg2 isRightClick:(BOOL)arg3;
- (void)rightMouseDown:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseDownForEvent:(id)arg1 optionalStateChange:(BOOL)arg2 isRightClick:(BOOL)arg3;
- (BOOL)clickOnChordElem:(id)arg1 stringIndex:(int)arg2 optionalStateChange:(BOOL)arg3 isRightClick:(BOOL)arg4;
- (void)postMouseMovedEvent;
- (BOOL)resizeSpotForChordElem:(id)arg1 stringIndex:(int)arg2 trackingRightSide:(BOOL)arg3;
- (BOOL)moveSpotFromPoint:(struct CGPoint)arg1 chordElem:(id)arg2 stringIndex:(int)arg3 absFretIndex:(int)arg4;
- (void)removeAllSelectedChordElems;
- (void)addToSelectedChordElems:(id)arg1;
- (void)changeFretNumAction:(id)arg1;
- (void)changeFingerNumAction:(id)arg1;
- (void)removeElemsInBarreShadows;
- (void)removeOverlapedElemsForChordElem:(id)arg1;
- (int)hitPartForPoint:(struct CGPoint)arg1 stringIndex:(int *)arg2 absFretIndex:(int *)arg3 chordElem:(id *)arg4;
- (BOOL)getPoint:(struct CGPoint *)arg1 stringIndex:(int)arg2 absFretIndex:(int)arg3;
- (BOOL)getSpotForPoint:(struct CGPoint)arg1 stringIndex:(int *)arg2 absFretIndex:(int *)arg3;
- (void)setFirstShownFret:(long long)arg1;
- (long long)firstShownFret;
- (void)performLocalUndo;
- (BOOL)performKeyEquivalent:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)resizeWithOldSuperviewSize:(struct CGSize)arg1;
- (void)updatePartFromBounds;
- (struct CGRect)chordsAreaBound;
- (void)editedSetIsFavorite:(BOOL)arg1;
- (BOOL)editedHasOpenStrings;
- (BOOL)editedIsFavorite;
- (void)editedSetBassNote:(BOOL)arg1;
- (BOOL)editedBassNote;
- (void)editedSetRootNote:(BOOL)arg1;
- (BOOL)editedRootNote;
- (BOOL)editedChordType;
- (unsigned char)editedTransposeIndex;
- (id)autoreleasedChordRange;
- (void)setNumberOfFrets:(long long)arg1;
- (void)clearChordRange;
- (void)setNewChordToEdit:(id)arg1;
- (void)setExistingChord:(id)arg1;
- (id)fingerImageCacheAsSelected:(BOOL)arg1;
- (void)editorWindowDidLoad:(id)arg1;
- (id)gchDatabase;
- (void)setGChDatabase:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

