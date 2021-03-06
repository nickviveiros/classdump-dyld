/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:19:09 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/webinspectord
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol TCPServerDelegate, OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSMutableArray;

@interface TCPServer : NSObject {

	<TCPServerDelegate>* _delegate;
	int _listenSocket;
	NSObject<OS_dispatch_queue>* _serverQueue;
	NSObject<OS_dispatch_source>* _serverSource;
	NSMutableArray* _connections;

}

@property (nonatomic,readonly) <TCPServerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)connectionClosed:(id)arg1 ;
-(BOOL)_createListenDispatchSource;
-(id)initWithLaunchdSocketName:(const char*)arg1 delegate:(id)arg2 ;
-(void)dealloc;
-(id)delegate;
-(id)initWithPort:(unsigned short)arg1 delegate:(id)arg2 ;
-(id)_initWithDelegate:(id)arg1 ;
-(BOOL)_listenOnPort:(unsigned short)arg1 ;
@end

