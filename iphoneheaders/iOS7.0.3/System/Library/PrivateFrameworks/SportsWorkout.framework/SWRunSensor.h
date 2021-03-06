/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:08:01 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SportsWorkout/SWAccessory.h>

@protocol SWRunSensorPacketObserver;
@interface SWRunSensor : SWAccessory {

	<SWRunSensorPacketObserver>* _packetObserver;

}

@property (nonatomic,@dynamic,readonly) unsigned remainingBatteryLifetimeInHours; 
+(unsigned)remainingHoursConsideredToBeLowBattery;
-(void)setPacketObserver:(id)arg1 ;
@end

