/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:09 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class MFMessageLibrary, NSString;

@interface MFMessageDetails : NSObject {

	MFMessageLibrary* library;
	unsigned libraryID;
	unsigned long long messageFlags;
	unsigned long uid;
	unsigned long encoding;
	BOOL isInvalid;
	unsigned mailboxID;
	long long conversationHash;
	unsigned dateReceived;
	unsigned dateSent;
	NSString* externalID;

}
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned long)uid;
-(unsigned long long)messageFlags;
-(double)dateReceivedAsTimeIntervalSince1970;
-(double)dateSentAsTimeIntervalSince1970;
-(unsigned)libraryID;
-(unsigned)mailboxID;
-(id)messageID;
-(id)remoteID;
-(id)mailbox;
-(id)copyMessageInfo;
-(id)externalID;
@end
