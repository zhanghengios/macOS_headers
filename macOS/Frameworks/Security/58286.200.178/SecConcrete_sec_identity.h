//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Security/OS_sec_identity-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SecConcrete_sec_identity : NSObject <OS_sec_identity>
{
    struct OpaqueSecIdentityRef *identity;
    struct __CFArray *certs;
}

- (void)dealloc;
- (id)initWithIdentityAndCertificates:(struct OpaqueSecIdentityRef *)arg1 certificates:(struct __CFArray *)arg2;
- (id)initWithIdentity:(struct OpaqueSecIdentityRef *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

