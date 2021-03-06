//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoPrintProduct/NSObject-Protocol.h>

@class KHDBDatabase, KHDBModel, NSMutableDictionary, NSString;

@protocol KHJSONGeneratorProtocol <NSObject>
- (NSMutableDictionary *)JSONDictionary;
- (NSString *)JSONRepresentation;

@optional
+ (KHDBModel *)modifyModelFromJSON:(NSMutableDictionary *)arg1 inDatabase:(KHDBDatabase *)arg2 bundlePath:(NSString *)arg3;
+ (KHDBModel *)generateModelFromJSON:(NSMutableDictionary *)arg1 inDatabase:(KHDBDatabase *)arg2 bundlePath:(NSString *)arg3;
@end

