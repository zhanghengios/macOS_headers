//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PETTransitionEffectValue : NSObject
{
    int mPptType;
    int mPptDirectionDefault;
    CDUnknownFunctionPointerType mKnCreateDirectionOptionsFunc;
}

+ (id)effectValueFrom:(int)arg1 knDirMapperFunc:(CDUnknownFunctionPointerType)arg2 defaultDir:(int)arg3;
@property(nonatomic) CDUnknownFunctionPointerType knCreateDirOptionFunc; // @synthesize knCreateDirOptionFunc=mKnCreateDirectionOptionsFunc;
@property(nonatomic) int pptDefaultDir; // @synthesize pptDefaultDir=mPptDirectionDefault;
@property(nonatomic) int pptType; // @synthesize pptType=mPptType;

@end

