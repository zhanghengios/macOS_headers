//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@interface WBSHistoryServiceObject : NSObject <NSSecureCoding>
{
    long long _databaseID;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) long long databaseID; // @synthesize databaseID=_databaseID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDatabaseID:(long long)arg1;

@end

