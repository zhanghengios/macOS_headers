//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UXCollectionViewLayout;

@interface _UXCollectionViewLayoutProxy : NSObject
{
    id <UXCollectionViewLayoutProxyDelegate> _delegate;
    UXCollectionViewLayout *_layout;
}

+ (Class)invalidationContextClass;
+ (Class)layoutAttributesClass;
+ (Class)class;
@property(readonly, nonatomic) UXCollectionViewLayout *layout; // @synthesize layout=_layout;
@property(nonatomic) id <UXCollectionViewLayoutProxyDelegate> delegate; // @synthesize delegate=_delegate;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (Class)class;
- (void)dealloc;
- (id)initWithLayout:(id)arg1;

@end

