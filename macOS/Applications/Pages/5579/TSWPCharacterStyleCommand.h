//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSWPStorageActionCommand.h"

#import "TSDCommandInducedForPropagation-Protocol.h"

@class NSArray, TSWPCharacterStyle;

@interface TSWPCharacterStyleCommand : TSWPStorageActionCommand <TSDCommandInducedForPropagation>
{
    TSWPCharacterStyle *_characterStyle;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *otherSerializationClasses;
- (void)p_registerStyleChange:(id)arg1;
- (int)persistenceKind;
- (void)didCommitWithTransaction:(struct TSWPStorageTransaction *)arg1 changedRange:(struct _NSRange)arg2;
- (void)didUndoRedoWithTransaction:(struct TSWPStorageTransaction *)arg1 isUndo:(BOOL)arg2;
- (struct _NSRange)doCommitWithNewTransaction:(struct TSWPStorageTransaction *)arg1;
- (id)actionString;
- (id)initWithStorage:(id)arg1 selection:(id)arg2 characterStyle:(id)arg3;

// Remaining properties
@property(readonly, nonatomic) NSArray *objectsBeingModified;

@end

