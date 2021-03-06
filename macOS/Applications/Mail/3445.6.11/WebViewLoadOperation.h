//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSData, NSInvocation, NSURLRequest, WebView;

@interface WebViewLoadOperation : NSOperation
{
    BOOL _isExecuting;
    BOOL _isFinished;
    WebView *_webView;
    NSData *_data;
    NSURLRequest *_urlRequest;
    NSInvocation *_loadInvocation;
    NSInvocation *_didLoadInvocation;
}

+ (BOOL)automaticallyNotifiesObserversOfIsFinished;
+ (BOOL)automaticallyNotifiesObserversOfIsExecuting;
@property(readonly, nonatomic) NSInvocation *didLoadInvocation; // @synthesize didLoadInvocation=_didLoadInvocation;
@property(readonly, nonatomic) NSInvocation *loadInvocation; // @synthesize loadInvocation=_loadInvocation;
@property(readonly, nonatomic) NSURLRequest *urlRequest; // @synthesize urlRequest=_urlRequest;
@property(readonly, copy, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, nonatomic) WebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (void)_webViewDidLoad:(id)arg1;
- (void)_end;
- (void)cancel;
- (void)main;
- (void)start;
- (BOOL)isFinished;
- (void)_setIsExecuting:(BOOL)arg1;
- (BOOL)isExecuting;
- (BOOL)isConcurrent;
- (id)description;
- (void)dealloc;
- (id)init;
- (void)_webViewLoadOperationCommonInitWithWebView:(id)arg1;
- (id)initWithWebView:(id)arg1 loadInvocation:(id)arg2 didLoadInvocation:(id)arg3;
- (id)initWithWebView:(id)arg1 loadInvocation:(id)arg2;
- (id)initWithWebView:(id)arg1 urlRequest:(id)arg2;
- (id)initWithWebView:(id)arg1 data:(id)arg2;

@end

