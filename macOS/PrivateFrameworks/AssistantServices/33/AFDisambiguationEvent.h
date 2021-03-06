//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSDate, NSString;

@interface AFDisambiguationEvent : NSObject <NSSecureCoding>
{
    NSString *_itemIdentifier;
    long long _selectionType;
    NSDate *_date;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) long long selectionType; // @synthesize selectionType=_selectionType;
@property(copy, nonatomic) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

