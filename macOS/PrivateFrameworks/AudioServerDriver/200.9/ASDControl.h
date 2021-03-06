//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AudioServerDriver/ASDObject.h>

@interface ASDControl : ASDObject
{
    unsigned int _controlElement;
    unsigned int _controlScope;
}

@property(nonatomic) unsigned int controlScope; // @synthesize controlScope=_controlScope;
@property(nonatomic) unsigned int controlElement; // @synthesize controlElement=_controlElement;
- (BOOL)isKindOfAudioClass:(unsigned int)arg1;
- (BOOL)getProperty:(const struct AudioObjectPropertyAddress *)arg1 withQualifierSize:(unsigned int)arg2 qualifierData:(const void *)arg3 dataSize:(unsigned int *)arg4 andData:(const void *)arg5 forClient:(int)arg6;
- (unsigned int)dataSizeForProperty:(const struct AudioObjectPropertyAddress *)arg1 withQualifierSize:(unsigned int)arg2 andQualifierData:(const void *)arg3;
- (BOOL)hasProperty:(const struct AudioObjectPropertyAddress *)arg1;
- (id)initWithElement:(unsigned int)arg1 inScope:(unsigned int)arg2 withPlugin:(id)arg3;
- (id)initWithPlugin:(id)arg1;

@end

