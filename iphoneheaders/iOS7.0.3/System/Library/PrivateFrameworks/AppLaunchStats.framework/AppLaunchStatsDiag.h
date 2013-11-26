/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:42 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AppLaunchStats.framework/AppLaunchStats
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <AppLaunchStats/AppLaunchStats-Structs.h>
@class NSObject;

@interface AppLaunchStatsDiag : NSObject {

	NSObject<OS_dispatch_queue>* APLSDiagQueue;
	NSObject<OS_dispatch_source>* APLSDiagTimer;
	int diagToken;
	bool diagTimerOn;

}
-(id)init;
-(void)dumpDiagnosticIntoFile;
-(void)turnOffDiagnostic;
-(bool)checkDuetDiagState;
-(void)turnOnDiagnostic:(long long)arg1 ;
-(void)base64EncodeFile:(const char*)arg1 dumpfile:(_sFILE*)arg2 ;
-(void)initializeDiag:(bool)arg1 ;
-(void).cxx_destruct;
@end
