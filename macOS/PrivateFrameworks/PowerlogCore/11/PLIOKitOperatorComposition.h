//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, PLOperator;

@interface PLIOKitOperatorComposition : NSObject
{
    unsigned int _notificationRef;
    unsigned int _service;
    unsigned int _iterator;
    unsigned int _conn;
    struct IONotificationPort *_ioNotifyPort;
    NSString *_serviceName;
    NSString *_serviceClassName;
    CDUnknownBlockType _operatorBlock;
    CDUnknownBlockType _matchBlock;
    PLOperator *_operator;
}

+ (id)snapshotFromIOEntry:(unsigned int)arg1;
+ (id)snapshotFromIOEntry:(unsigned int)arg1 forKey:(id)arg2;
@property(retain) PLOperator *operator; // @synthesize operator=_operator;
@property(copy, nonatomic) CDUnknownBlockType matchBlock; // @synthesize matchBlock=_matchBlock;
@property(copy, nonatomic) CDUnknownBlockType operatorBlock; // @synthesize operatorBlock=_operatorBlock;
@property unsigned int conn; // @synthesize conn=_conn;
@property unsigned int iterator; // @synthesize iterator=_iterator;
@property(retain) NSString *serviceClassName; // @synthesize serviceClassName=_serviceClassName;
@property(retain) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property unsigned int service; // @synthesize service=_service;
@property unsigned int notificationRef; // @synthesize notificationRef=_notificationRef;
@property struct IONotificationPort *ioNotifyPort; // @synthesize ioNotifyPort=_ioNotifyPort;
- (void).cxx_destruct;
- (id)properties;
- (id)propertiesForKey:(id)arg1;
- (id)propertiesFromIOEntry:(unsigned int)arg1;
- (id)propertiesFromIOEntry:(unsigned int)arg1 forKey:(id)arg2;
- (id)initWithOperator:(id)arg1 forDynamicServiceClass:(id)arg2 forNotificationType:(char [128])arg3 withMatchBlock:(CDUnknownBlockType)arg4;
- (id)initWithOperator:(id)arg1 forServiceClass:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (id)initWithOperator:(id)arg1 forService:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)initWithOperator:(id)arg1 forServiceClass:(id)arg2;
- (id)initWithOperator:(id)arg1 forService:(id)arg2;

@end

