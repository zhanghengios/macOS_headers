//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <TemplateKit/TLKObject.h>

@class NSString;

@interface TLKMultilineText : TLKObject
{
    NSString *_text;
    unsigned long long _maxLines;
}

+ (id)textWithString:(id)arg1;
@property(nonatomic) unsigned long long maxLines; // @synthesize maxLines=_maxLines;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (id)description;

@end

