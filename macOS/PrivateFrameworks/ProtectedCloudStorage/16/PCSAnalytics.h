//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SFAnalytics.h"

@interface PCSAnalytics : SFAnalytics
{
}

+ (id)logger;
+ (id)databasePath;
- (id)dateOfLastSuccessForEvent:(struct NSString *)arg1;
- (void)noteEvent:(struct NSString *)arg1;
- (void)logUnrecoverableError:(id)arg1 forEvent:(struct NSString *)arg2 withAttributes:(id)arg3;
- (void)logRecoverableError:(id)arg1 forEvent:(struct NSString *)arg2 withAttributes:(id)arg3;
- (void)logSuccessForEvent:(struct NSString *)arg1;

@end

