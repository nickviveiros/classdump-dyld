/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:18:52 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/demod
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <demod/MSDDemoUpdateStatusDelegate.h>

@protocol OS_xpc_object;
@class NSObject;

@interface MSDLocalMessageResponder : NSObject <MSDDemoUpdateStatusDelegate> {

	NSObject<OS_xpc_object>* _connection;

}

@property (__weak) NSObject<OS_xpc_object> * connection;              //@synthesize connection=_connection - In the implementation block
+(id)sharedInstance;
-(void)demoUpdateCompleted:(id)arg1 ;
-(void)handleXPCMessage:(id)arg1 ;
-(void)demoUpdateFailed:(id)arg1 ;
-(void)demoUpdateProgress:(id)arg1 ;
-(BOOL)hasEntitlementEnableDemo;
-(id)connection;
-(void)setConnection:(id)arg1 ;
-(void).cxx_destruct;
@end

