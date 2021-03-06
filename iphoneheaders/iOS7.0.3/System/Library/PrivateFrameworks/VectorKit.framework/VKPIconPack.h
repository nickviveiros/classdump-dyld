/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface VKPIconPack : PBCodable {

	NSMutableArray* _atlas;
	NSMutableArray* _icons;
	unsigned _identifier;

}

@property (assign,nonatomic) unsigned identifier;                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * atlas;              //@synthesize atlas=_atlas - In the implementation block
@property (nonatomic,retain) NSMutableArray * icons;              //@synthesize icons=_icons - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned)identifier;
-(id)dictionaryRepresentation;
-(void)setIdentifier:(unsigned)arg1 ;
-(void)setIcons:(id)arg1 ;
-(id)icons;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)atlasAtIndex:(unsigned)arg1 ;
-(void)setAtlas:(id)arg1 ;
-(void)addAtlas:(id)arg1 ;
-(void)addIcons:(id)arg1 ;
-(unsigned)atlasCount;
-(void)clearAtlas;
-(unsigned)iconsCount;
-(void)clearIcons;
-(id)iconsAtIndex:(unsigned)arg1 ;
-(id)atlas;
@end

