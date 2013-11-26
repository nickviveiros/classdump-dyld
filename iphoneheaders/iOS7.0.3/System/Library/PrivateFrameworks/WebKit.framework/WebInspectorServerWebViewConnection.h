/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:44 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class WebInspectorRemoteChannel, WebInspectorServerWebViewConnectionController, NSString, NSNumber;

@interface WebInspectorServerWebViewConnection : NSObject {

	WebInspectorRemoteChannel* _channel;
	WebInspectorServerWebViewConnectionController* _controller;
	NSString* _connectionIdentifier;
	NSString* _destination;
	NSNumber* _identifier;

}
-(void)dealloc;
-(id)identifier;
-(void)sendMessageToFrontend:(id)arg1 ;
-(void)clearChannel;
-(void)sendMessageToBackend:(id)arg1 ;
-(id)initWithController:(id)arg1 connectionIdentifier:(id)arg2 destination:(id)arg3 identifier:(id)arg4 ;
-(BOOL)setupChannel;
-(id)connectionIdentifier;
-(void)receivedData:(id)arg1 ;
-(void)receivedDidClose:(id)arg1 ;
@end
