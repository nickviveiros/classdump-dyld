/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:47 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_xpc_object;
@class NSObject;

@interface BKSXPCReply : NSObject {

	NSObject<OS_xpc_object>* _message;

}
+(id)messageWithReply:(id)arg1 ;
-(void)dealloc;
-(id)message;
-(id)initWithReply:(id)arg1 ;
-(long long)messageKind;
-(void)sendReply:(/*^block*/ id)arg1 ;
@end
