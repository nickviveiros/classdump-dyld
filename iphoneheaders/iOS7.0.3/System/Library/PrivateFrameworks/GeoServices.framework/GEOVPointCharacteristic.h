/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:13 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class GEOVLaneCharacteristic;

@interface GEOVPointCharacteristic : PBCodable {

	GEOVLaneCharacteristic* _laneCharacteristic;
	int _roadLaneCount;
	int _roadOffset;
	int _sectionIndex;
	int _vertexIndex;
	int _zLevel;
	BOOL _brunnelEntry;
	BOOL _castShadow;
	BOOL _cropped;
	BOOL _shouldDrawLanes;
	SCD_Struct_GE83 _has;

}

@property (assign,nonatomic) BOOL hasSectionIndex; 
@property (assign,nonatomic) int sectionIndex;                                         //@synthesize sectionIndex=_sectionIndex - In the implementation block
@property (assign,nonatomic) BOOL hasVertexIndex; 
@property (assign,nonatomic) int vertexIndex;                                          //@synthesize vertexIndex=_vertexIndex - In the implementation block
@property (assign,nonatomic) BOOL hasRoadLaneCount; 
@property (assign,nonatomic) int roadLaneCount;                                        //@synthesize roadLaneCount=_roadLaneCount - In the implementation block
@property (assign,nonatomic) BOOL hasRoadOffset; 
@property (assign,nonatomic) int roadOffset;                                           //@synthesize roadOffset=_roadOffset - In the implementation block
@property (assign,nonatomic) BOOL hasZLevel; 
@property (assign,nonatomic) int zLevel;                                               //@synthesize zLevel=_zLevel - In the implementation block
@property (assign,nonatomic) BOOL hasCropped; 
@property (assign,nonatomic) BOOL cropped;                                             //@synthesize cropped=_cropped - In the implementation block
@property (nonatomic,readonly) BOOL hasLaneCharacteristic; 
@property (nonatomic,retain) GEOVLaneCharacteristic * laneCharacteristic;              //@synthesize laneCharacteristic=_laneCharacteristic - In the implementation block
@property (assign,nonatomic) BOOL hasShouldDrawLanes; 
@property (assign,nonatomic) BOOL shouldDrawLanes;                                     //@synthesize shouldDrawLanes=_shouldDrawLanes - In the implementation block
@property (assign,nonatomic) BOOL hasCastShadow; 
@property (assign,nonatomic) BOOL castShadow;                                          //@synthesize castShadow=_castShadow - In the implementation block
@property (assign,nonatomic) BOOL hasBrunnelEntry; 
@property (assign,nonatomic) BOOL brunnelEntry;                                        //@synthesize brunnelEntry=_brunnelEntry - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)hasRoadLaneCount;
-(int)roadLaneCount;
-(void)setRoadLaneCount:(int)arg1 ;
-(void)setHasRoadLaneCount:(BOOL)arg1 ;
-(void)setLaneCharacteristic:(id)arg1 ;
-(BOOL)hasSectionIndex;
-(BOOL)hasVertexIndex;
-(int)vertexIndex;
-(void)setVertexIndex:(int)arg1 ;
-(BOOL)hasRoadOffset;
-(int)roadOffset;
-(void)setRoadOffset:(int)arg1 ;
-(BOOL)hasZLevel;
-(int)zLevel;
-(void)setZLevel:(int)arg1 ;
-(BOOL)hasCropped;
-(BOOL)cropped;
-(void)setCropped:(BOOL)arg1 ;
-(BOOL)hasLaneCharacteristic;
-(id)laneCharacteristic;
-(BOOL)hasShouldDrawLanes;
-(BOOL)shouldDrawLanes;
-(void)setShouldDrawLanes:(BOOL)arg1 ;
-(BOOL)hasCastShadow;
-(BOOL)castShadow;
-(void)setCastShadow:(BOOL)arg1 ;
-(BOOL)hasBrunnelEntry;
-(BOOL)brunnelEntry;
-(void)setBrunnelEntry:(BOOL)arg1 ;
-(void)setHasSectionIndex:(BOOL)arg1 ;
-(void)setHasVertexIndex:(BOOL)arg1 ;
-(void)setHasRoadOffset:(BOOL)arg1 ;
-(void)setHasZLevel:(BOOL)arg1 ;
-(void)setHasCropped:(BOOL)arg1 ;
-(void)setHasShouldDrawLanes:(BOOL)arg1 ;
-(void)setHasCastShadow:(BOOL)arg1 ;
-(void)setHasBrunnelEntry:(BOOL)arg1 ;
-(int)sectionIndex;
-(void)setSectionIndex:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

