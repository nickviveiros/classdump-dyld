/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:59:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/MNNavigator.h>

@interface MNDriveNavigator : MNNavigator {

	BOOL _exitedVehicle;
	int _vehicleExitConfidence;
	SCD_Struct_Si10 _vehicleExitCoordinate;

}
-(id)_newMapMatcher;
-(BOOL)_checkForArrival:(id)arg1 ;
-(BOOL)_allowNavigatorSwitchToTransportType:(int)arg1 atLocation:(id)arg2 ;
-(void)_updateDetectedMotionAtLocation:(id)arg1 ;
-(Class)_guidanceManagerClass;
-(int)_transportType;
@end

