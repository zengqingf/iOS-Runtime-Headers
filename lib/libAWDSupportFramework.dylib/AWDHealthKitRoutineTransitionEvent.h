/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDHealthKitRoutineTransitionEvent : PBCodable <NSCopying> {
    long long _endDate;
    AWDHealthKitRoutineLocation *_from;
    struct { 
        unsigned int endDate : 1; 
        unsigned int startDate : 1; 
        unsigned int timestamp : 1; 
        unsigned int mode : 1; 
    } _has;
    int _mode;
    long long _startDate;
    unsigned long long _timestamp;
    AWDHealthKitRoutineLocation *_to;
}

@property (nonatomic) long long endDate;
@property (nonatomic, retain) AWDHealthKitRoutineLocation *from;
@property (nonatomic) BOOL hasEndDate;
@property (nonatomic, readonly) BOOL hasFrom;
@property (nonatomic) BOOL hasMode;
@property (nonatomic) BOOL hasStartDate;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic, readonly) BOOL hasTo;
@property (nonatomic) int mode;
@property (nonatomic) long long startDate;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, retain) AWDHealthKitRoutineLocation *to;

- (int)StringAsMode:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)endDate;
- (id)from;
- (BOOL)hasEndDate;
- (BOOL)hasFrom;
- (BOOL)hasMode;
- (BOOL)hasStartDate;
- (BOOL)hasTimestamp;
- (BOOL)hasTo;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)mode;
- (id)modeAsString:(int)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setEndDate:(long long)arg1;
- (void)setFrom:(id)arg1;
- (void)setHasEndDate:(BOOL)arg1;
- (void)setHasMode:(BOOL)arg1;
- (void)setHasStartDate:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setMode:(int)arg1;
- (void)setStartDate:(long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTo:(id)arg1;
- (long long)startDate;
- (unsigned long long)timestamp;
- (id)to;
- (void)writeTo:(id)arg1;

@end
