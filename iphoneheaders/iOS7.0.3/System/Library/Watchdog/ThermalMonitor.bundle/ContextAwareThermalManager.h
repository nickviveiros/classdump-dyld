/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:11:46 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Watchdog/ThermalMonitor.bundle/ThermalMonitor
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <ThermalMonitor/ThermalMonitor-Structs.h>
@class NSObject;

@interface ContextAwareThermalManager : NSObject {

	NSObject<OS_dispatch_queue>* catmQueue;
	NSObject<OS_dispatch_source>* theTimer;
	CFArrayRef ctxObjects;

}
+(id)sharedInstance;
-(id)createNewContext:(int)arg1 ;
-(bool)isContextTriggered:(int)arg1 ;
-(int)getContextState:(int)arg1 ;
-(void)updateSystemPowerState:(BOOL)arg1 ;
-(void)iterateAndUpdateContexts;
-(void)dealloc;
-(id)init;
@end

