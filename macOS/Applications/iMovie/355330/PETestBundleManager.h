//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface PETestBundleManager : NSObject
{
    NSMutableArray *_plugins;
    NSString *_dirPath;
}

+ (id)sharedInstance;
+ (void)initialize;
- (unsigned long long)pluginCount;
- (void)setPluginDirectoryPath:(id)arg1;
- (id)pluginDirectoryPath;
- (id)plugins;
- (BOOL)loadPluginsInDirectory:(id)arg1;
- (BOOL)pluginDirectoryExists:(id)arg1;
- (BOOL)loadPlugins;
- (void)dealloc;
- (id)init;

@end

