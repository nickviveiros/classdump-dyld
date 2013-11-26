/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:28 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <GameKitServices/GameKitServices-Structs.h>
@interface GKAsyncSocket : NSObject

@property (assign,nonatomic) NSObject<OS_dispatch_queue> * targetQueue; 
@property (nonatomic,copy) id receiveDataHandler; 
@property (nonatomic,copy) id connectedHandler; 
@property (nonatomic,retain) id socketName; 
+(id)allocWithZone:(NSZoneRef)arg1 ;
-(id)syncQueue;
-(void)invalidate;
-(void)setReceiveDataHandler:(/*^block*/ id)arg1 ;
-(void)sendData:(id)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
-(void)setConnectedHandler:(/*^block*/ id)arg1 ;
-(void)setSocketName:(id)arg1 ;
-(void)tcpConnectSockAddr:(const sockaddr*)arg1 port:(unsigned short)arg2 ;
-(id)socketName;
-(void)tcpAttachSocketDescriptor:(int)arg1 ;
-(/*^block*/ id)receiveDataHandler;
-(id)targetQueue;
-(/*^block*/ id)connectedHandler;
-(void)setSyncQueue:(id)arg1 ;
-(void)setTargetQueue:(id)arg1 ;
@end
