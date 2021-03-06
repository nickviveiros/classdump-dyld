/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:19:02 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/locationd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSMutableDictionary, NSObject;

@interface CLBackgroundTaskAgent : NSObject {

	NSMutableDictionary* _handlers;
	NSObject<OS_xpc_object>* _queuedJobs;

}
+(void)initialize;
+(id)sharedAgent;
-(void)attachName:(id)arg1 toHandler:(/*^block*/ id)arg2 dispatchQueue:(id)arg3 ;
-(void)setJob:(id)arg1 forName:(id)arg2 ;
-(id)copyJobForName:(id)arg1 ;
-(void)removeJobForName:(id)arg1 ;
-(void)removeJobs;
-(void)dealloc;
-(id)init;
@end

