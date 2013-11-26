/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:08:54 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VisualVoicemail.framework/vmd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol VMDAccountConcrete <NSObject>
@required
-(BOOL)isSubscribed;
-(id)identifier;
-(unsigned)unreadCount;
-(unsigned)capabilities;
-(BOOL)mailboxRequiresSetup;
-(void)setProvisionalPassword:(id)arg1;
-(int)mailboxUsage;
-(BOOL)isOnline;
-(void)synchronize:(BOOL)arg1;
-(BOOL)isMessageWaiting;
-(void)displayPasswordRequestIfNecessary;
-(unsigned)trashedCount;
-(void)updateLoggingSettings;
-(BOOL)isOfflineDueToRoaming;
-(void)clearActivationError;
-(id)provisionalPassword;
-(void)handlePasswordRequestCancellation;
-(void)handlePasswordNotificationResponse:(id)arg1;
-(int)maximumGreetingDuration;
-(int)minimumPasswordLength;
-(int)maximumPasswordLength;
-(BOOL)passwordChangeRequiresEnteringOldPassword;
-(int)mailboxGreetingType;
-(BOOL)taskOfTypeExists:(int)arg1;
-(BOOL)headerChangesPending;
-(BOOL)synchronizationPending;
-(BOOL)greetingFetchExistsProgressiveLoadInProgress:(BOOL*)arg1;
-(void)changePassword:(id)arg1 fromPassword:(id)arg2;
-(void)retrieveGreeting;
-(BOOL)greetingAvailable;
-(void)setGreetingType:(int)arg1 withData:(id)arg2 duration:(unsigned)arg3;
-(id)voicemailWithIdentifier:(long long)arg1;
-(id)allVoicemailsWithFlags:(unsigned)arg1 withoutFlags:(unsigned)arg2 sinceIdentifier:(long long)arg3;
-(void)progressiveDataLengthsForVoicemail:(id)arg1 expected:(unsigned*)arg2 current:(unsigned*)arg3;
-(BOOL)dataForVoicemailPending:(id)arg1 progressiveLoadInProgress:(BOOL*)arg2;
-(void)retrieveDataForVoicemail:(id)arg1;
-(void)moveVoicemailToTrash:(id)arg1;
-(void)moveVoicemailFromTrash:(id)arg1;
-(unsigned)countOfVoicemailsWithFlags:(unsigned)arg1 withoutFlags:(unsigned)arg2;
-(long long)identifierOfLastInsert;
-(id)greetingPath;
@end
