//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface LWMounter : NSObject
{
}

+ (id)sharedMounter;
- (void)mountStartupVolumesFromPrefs;
- (BOOL)lwMountWithArrayOfPaths:(id)arg1;
- (id)lwMountURLAtPathWithCurrentUserAuthentication:(id)arg1 path:(id)arg2 flags:(unsigned long long)arg3 mountResult:(int *)arg4;
- (BOOL)shouldLaunchNonManagedPrefs:(id)arg1;
- (BOOL)mountLoginItemsForUser:(struct __CFString *)arg1 host:(struct __CFString *)arg2;
- (BOOL)mountMCXItemsUsingManagedPrefsDict:(id)arg1;
- (id)shortName;

@end

