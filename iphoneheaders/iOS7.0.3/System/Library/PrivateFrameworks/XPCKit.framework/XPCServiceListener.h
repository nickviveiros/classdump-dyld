/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:35 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/XPCKit.framework/XPCKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol XPCServiceListenerDelegate, OS_dispatch_queue, OS_xpc_object;
@class NSString, NSObject, NSMutableSet;

@interface XPCServiceListener : NSObject {

	NSString* _serviceName;
	<XPCServiceListenerDelegate>* _delegate;
	NSObject<OS_dispatch_queue>* _workQueue;
	NSObject<OS_xpc_object>* _listener;
	NSMutableSet* _serviceConnections;
	unsigned long _clientCount;

}

@property (nonatomic,readonly) NSString * serviceName;                               //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,readonly) <XPCServiceListenerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject<OS_dispatch_queue> * workQueue;                //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSObject<OS_xpc_object> * listener;                     //@synthesize listener=_listener - In the implementation block
@property (nonatomic,retain) NSMutableSet * serviceConnections;                      //@synthesize serviceConnections=_serviceConnections - In the implementation block
@property (assign,nonatomic) unsigned long clientCount;                              //@synthesize clientCount=_clientCount - In the implementation block
-(void)setListener:(id)arg1 ;
-(id)serviceName;
-(id)debugDescription;
-(id)delegate;
-(void)start;
-(id)workQueue;
-(void)shutDownCompletionBlock:(/*^block*/ id)arg1 ;
-(void)setWorkQueue:(id)arg1 ;
-(id)listener;
-(void).cxx_destruct;
-(void)serviceConnectionDidDisconnect:(id)arg1 ;
-(void)workQueueHandleIncomingConnection:(id)arg1 ;
-(void)_workQueueShutDownServiceConnections:(id)arg1 index:(unsigned)arg2 completionBlock:(/*^block*/ id)arg3 ;
-(id)initWithServiceName:(id)arg1 queue:(id)arg2 delegate:(id)arg3 ;
-(id)serviceConnections;
-(void)setServiceConnections:(id)arg1 ;
-(unsigned long)clientCount;
-(void)setClientCount:(unsigned long)arg1 ;
@end

