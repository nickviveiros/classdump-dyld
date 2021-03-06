/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:05:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PowerlogPlugins/PLBluetoothLogger.bundle/PLBluetoothLogger
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <PLBluetoothLogger/PLBluetoothLogger-Structs.h>
#import <PowerlogLoggerSupport/PLLogger.h>

@interface PLBluetoothLogger : PLLogger {

	BOOL keepSessionAlive;
	BTSessionImplRef session;
	BTLocalDeviceImplRef localBluetoothDevice;
	long lastLogTime;

}
-(BOOL)fmPowered;
-(void)logBTDebug:(id)arg1 ;
-(BOOL)modulePowered;
-(BOOL)nikePowered;
-(void)logBTpowerstats;
-(BOOL)isConnectable;
-(void)logBTPower:(unsigned short)arg1 withrx:(unsigned short)arg2 withsleep:(unsigned short)arg3 withothers:(unsigned short)arg4 ;
-(BTLocalDeviceImplRef)localBluetoothDevice;
-(void)attachSession;
-(BOOL)bluetoothPresent;
-(void)sessionAttached:(BTSessionImplRef)arg1 withResult:(int)arg2 ;
-(void)sessionTerminated:(BTSessionImplRef)arg1 withResult:(int)arg2 ;
-(void)detachSession;
-(BOOL)isConnected;
-(void)dealloc;
-(id)init;
-(void)log;
-(BOOL)isDiscoverable;
@end

