//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NetAppsUtilities/NATreeNode.h>

@class NSSet;

@interface NAMutableTreeNode : NATreeNode
{
}

- (void)removeChildrenPassingTest:(CDUnknownBlockType)arg1;
- (void)removeChild:(id)arg1;
- (void)addChildren:(id)arg1;
- (void)addChild:(id)arg1;
@property(copy, nonatomic) NSSet *childNodes; // @dynamic childNodes;

// Remaining properties
@property(retain, nonatomic) id representedObject; // @dynamic representedObject;

@end

