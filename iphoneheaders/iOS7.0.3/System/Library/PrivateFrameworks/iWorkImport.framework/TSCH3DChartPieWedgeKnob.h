/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:34 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHChartPieWedgeKnob.h>

@class TSCH3DPickedPoint, TSCH3DProjector;

@interface TSCH3DChartPieWedgeKnob : TSCHChartPieWedgeKnob {

	TSCH3DPickedPoint* mPickedPoint;
	TSCH3DProjector* mProjector;
	float mStartExplosion;

}

@property (nonatomic,readonly) TSCH3DPickedPoint * pickedPoint; 
@property (nonatomic,readonly) TSCH3DProjector * projector; 
@property (nonatomic,readonly) float startExplosion; 
-(id)pickedPoint;
-(BOOL)overlapsWithKnob:(id)arg1 ;
-(BOOL)obscuresKnob:(id)arg1 ;
-(id)projector;
-(float)startExplosion;
-(BOOL)isHitByUnscaledPoint:(CGPoint)arg1 andRep:(id)arg2 returningDistance:(float*)arg3 seriesIndexHit:(unsigned*)arg4 ;
-(void)dealloc;
-(void)reset;
@end

