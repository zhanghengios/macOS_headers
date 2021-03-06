//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface iTermStackNode : NSObject
{
    NSMutableDictionary *_edges;
    NSString *_name;
    long long _divisor;
}

@property(readonly, nonatomic) long long divisor; // @synthesize divisor=_divisor;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)namesSortedByCount;
- (void)appendToString:(id)arg1 indentation:(id)arg2;
- (id)indentationForLevel:(long long)arg1;
- (id)addFrame:(id)arg1 divisor:(long long)arg2;
- (id)initWithName:(id)arg1 divisor:(long long)arg2;

@end

