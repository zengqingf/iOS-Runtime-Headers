/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOShortSessionUsageLogMessage : PBCodable <NSCopying> {
    struct { 
        unsigned int sessionId : 1; 
        unsigned int relativeTimestamp : 1; 
        unsigned int sequenceNumber : 1; 
    } _has;
    GEOPlaceDataCacheLogMessage *_placeDataCacheLogMessage;
    double _relativeTimestamp;
    unsigned int _sequenceNumber;
    struct { 
        unsigned long long _high; 
        unsigned long long _low; 
    } _sessionId;
    GEOStateTimingUsageLogMessage *_stateTimingLogMessage;
    GEOSuggestionsUsageLogMessage *_suggestionsLogMessage;
    GEOTileSetStateUsageLogMessage *_tileSetStateUsageLogMessage;
    GEOABExperimentAssignment *_tilesAbExperimentAssignment;
    GEOUserActionUsageLogMessage *_userActionLogMessage;
}

@property (nonatomic, readonly) BOOL hasPlaceDataCacheLogMessage;
@property (nonatomic) BOOL hasRelativeTimestamp;
@property (nonatomic) BOOL hasSequenceNumber;
@property (nonatomic) BOOL hasSessionId;
@property (nonatomic, readonly) BOOL hasStateTimingLogMessage;
@property (nonatomic, readonly) BOOL hasSuggestionsLogMessage;
@property (nonatomic, readonly) BOOL hasTileSetStateUsageLogMessage;
@property (nonatomic, readonly) BOOL hasTilesAbExperimentAssignment;
@property (nonatomic, readonly) BOOL hasUserActionLogMessage;
@property (nonatomic, retain) GEOPlaceDataCacheLogMessage *placeDataCacheLogMessage;
@property (nonatomic) double relativeTimestamp;
@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic) struct { unsigned long long x1; unsigned long long x2; } sessionId;
@property (nonatomic, retain) GEOStateTimingUsageLogMessage *stateTimingLogMessage;
@property (nonatomic, retain) GEOSuggestionsUsageLogMessage *suggestionsLogMessage;
@property (nonatomic, retain) GEOTileSetStateUsageLogMessage *tileSetStateUsageLogMessage;
@property (nonatomic, retain) GEOABExperimentAssignment *tilesAbExperimentAssignment;
@property (nonatomic, retain) GEOUserActionUsageLogMessage *userActionLogMessage;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasPlaceDataCacheLogMessage;
- (BOOL)hasRelativeTimestamp;
- (BOOL)hasSequenceNumber;
- (BOOL)hasSessionId;
- (BOOL)hasStateTimingLogMessage;
- (BOOL)hasSuggestionsLogMessage;
- (BOOL)hasTileSetStateUsageLogMessage;
- (BOOL)hasTilesAbExperimentAssignment;
- (BOOL)hasUserActionLogMessage;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)placeDataCacheLogMessage;
- (BOOL)readFrom:(id)arg1;
- (double)relativeTimestamp;
- (unsigned int)sequenceNumber;
- (struct { unsigned long long x1; unsigned long long x2; })sessionId;
- (void)setHasRelativeTimestamp:(BOOL)arg1;
- (void)setHasSequenceNumber:(BOOL)arg1;
- (void)setHasSessionId:(BOOL)arg1;
- (void)setPlaceDataCacheLogMessage:(id)arg1;
- (void)setRelativeTimestamp:(double)arg1;
- (void)setSequenceNumber:(unsigned int)arg1;
- (void)setSessionId:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setStateTimingLogMessage:(id)arg1;
- (void)setSuggestionsLogMessage:(id)arg1;
- (void)setTileSetStateUsageLogMessage:(id)arg1;
- (void)setTilesAbExperimentAssignment:(id)arg1;
- (void)setUserActionLogMessage:(id)arg1;
- (id)stateTimingLogMessage;
- (id)suggestionsLogMessage;
- (id)tileSetStateUsageLogMessage;
- (id)tilesAbExperimentAssignment;
- (id)userActionLogMessage;
- (void)writeTo:(id)arg1;

@end
