/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOAddressCorrectionUpdateResponse : PBCodable <NSCopying> {
    struct { 
        unsigned int retryScheduleInDays : 1; 
    } _has;
    unsigned int _retryScheduleInDays;
}

@property BOOL hasRetryScheduleInDays;
@property unsigned int retryScheduleInDays;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasRetryScheduleInDays;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)retryScheduleInDays;
- (void)setHasRetryScheduleInDays:(BOOL)arg1;
- (void)setRetryScheduleInDays:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
