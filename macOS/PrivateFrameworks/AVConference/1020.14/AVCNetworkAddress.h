//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface AVCNetworkAddress : NSObject
{
    NSString *ip;
    NSString *interfaceName;
    unsigned short port;
    BOOL isIPv6;
}

@property(nonatomic) BOOL isIPv6; // @synthesize isIPv6;
@property(nonatomic) unsigned short port; // @synthesize port;
@property(copy, nonatomic) NSString *ip; // @synthesize ip;
@property(copy, nonatomic) NSString *interfaceName; // @synthesize interfaceName;
- (void)dealloc;
- (id)init;

@end

