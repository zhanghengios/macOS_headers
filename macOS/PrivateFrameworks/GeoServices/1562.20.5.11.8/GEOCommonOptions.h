//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

@interface GEOCommonOptions : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    BOOL _excludeGuidance;
    BOOL _includeSnapScoreMetadataDebug;
    BOOL _includeSummaryForPredictedDestination;
    BOOL _includeTravelTimeAggressive;
    BOOL _includeTravelTimeConservative;
    BOOL _includeTravelTimeEstimate;
    struct {
        unsigned int has_excludeGuidance:1;
        unsigned int has_includeSnapScoreMetadataDebug:1;
        unsigned int has_includeSummaryForPredictedDestination:1;
        unsigned int has_includeTravelTimeAggressive:1;
        unsigned int has_includeTravelTimeConservative:1;
        unsigned int has_includeTravelTimeEstimate:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasIncludeSnapScoreMetadataDebug;
@property(nonatomic) BOOL includeSnapScoreMetadataDebug;
@property(nonatomic) BOOL hasIncludeSummaryForPredictedDestination;
@property(nonatomic) BOOL includeSummaryForPredictedDestination;
@property(nonatomic) BOOL hasExcludeGuidance;
@property(nonatomic) BOOL excludeGuidance;
@property(nonatomic) BOOL hasIncludeTravelTimeConservative;
@property(nonatomic) BOOL includeTravelTimeConservative;
@property(nonatomic) BOOL hasIncludeTravelTimeEstimate;
@property(nonatomic) BOOL includeTravelTimeEstimate;
@property(nonatomic) BOOL hasIncludeTravelTimeAggressive;
@property(nonatomic) BOOL includeTravelTimeAggressive;

@end

