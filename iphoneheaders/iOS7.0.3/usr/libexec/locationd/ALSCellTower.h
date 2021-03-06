/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:19:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/locationd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class ALSLocation;

@interface ALSCellTower : PBCodable {

	int _arfcn;
	int _cellID;
	int _lacID;
	ALSLocation* _location;
	int _mcc;
	int _mnc;
	int _psc;
	SCD_Struct_CR3 _has;

}

@property (assign,nonatomic) int mcc;                             //@synthesize mcc=_mcc - In the implementation block
@property (assign,nonatomic) int mnc;                             //@synthesize mnc=_mnc - In the implementation block
@property (assign,nonatomic) int cellID;                          //@synthesize cellID=_cellID - In the implementation block
@property (assign,nonatomic) int lacID;                           //@synthesize lacID=_lacID - In the implementation block
@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) ALSLocation * location;              //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) BOOL hasArfcn; 
@property (assign,nonatomic) int arfcn;                           //@synthesize arfcn=_arfcn - In the implementation block
@property (assign,nonatomic) BOOL hasPsc; 
@property (assign,nonatomic) int psc;                             //@synthesize psc=_psc - In the implementation block
-(int)mcc;
-(int)mnc;
-(int)lacID;
-(BOOL)hasArfcn;
-(int)arfcn;
-(BOOL)hasPsc;
-(void)setMcc:(int)arg1 ;
-(void)setMnc:(int)arg1 ;
-(void)setLacID:(int)arg1 ;
-(void)setArfcn:(int)arg1 ;
-(void)setPsc:(int)arg1 ;
-(void)setHasArfcn:(BOOL)arg1 ;
-(void)setHasPsc:(BOOL)arg1 ;
-(void)setCellID:(int)arg1 ;
-(int)cellID;
-(int)psc;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)location;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasLocation;
-(void)setLocation:(id)arg1 ;
@end

