/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DSageLightingPackageData.h>

@protocol TSCH3DSageLightingPackageData <TSCH3DLightingPackageData>@end


@class NSDictionary, NSArray;

@interface TSCH3DSageLightingPackageData : NSObject <TSCH3DSageLightingPackageData> {

	NSDictionary* mPackage;
	NSArray* mLights;

}
+(id)dataWithDictionary:(id)arg1 ;
-(id)packageName;
-(int)typeAtIndex:(unsigned)arg1 ;
-(Vector3)positionAtIndex:(unsigned)arg1 ;
-(Vector3)directionAtIndex:(unsigned)arg1 ;
-(float)cutOffAngleAtIndex:(unsigned)arg1 ;
-(float)dropOffRateAtIndex:(unsigned)arg1 ;
-(Color)ambientColorAtIndex:(unsigned)arg1 ;
-(Color)diffuseColorAtIndex:(unsigned)arg1 ;
-(Color)specularColorAtIndex:(unsigned)arg1 ;
-(float)intensityAtIndex:(unsigned)arg1 ;
-(Vector3)attenuationAtIndex:(unsigned)arg1 ;
-(int)coordinateSpaceAtIndex:(unsigned)arg1 ;
-(BOOL)enabledAtIndex:(unsigned)arg1 ;
-(Color)colorAtIndex:(unsigned)arg1 redKey:(id)arg2 greenKey:(id)arg3 blueKey:(id)arg4 ;
-(void)dealloc;
-(unsigned)count;
-(id)initWithDictionary:(id)arg1 ;
-(id)nameAtIndex:(unsigned)arg1 ;
@end
