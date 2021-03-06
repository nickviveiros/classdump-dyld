/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:00:12 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MailServices/MSEmailModel.h>
#import <MessageUI/MFComposeTypeFactoryDelegate.h>

@class NSString, MFComposeBodyField, NSArray, MFMailAccountProxyGenerator, MFMessageHeaders;

@interface MailServicesComposeDelegate : MSEmailModel <MFComposeTypeFactoryDelegate> {

	NSString* _sendingEmailAddress;
	MFComposeBodyField* _bodyField;
	NSArray* _allBccRecipients;
	MFMailAccountProxyGenerator* _accountProxyGenerator;
	MFMessageHeaders* _savedHeaders;

}

@property (nonatomic,retain) MFMessageHeaders * savedHeaders;              //@synthesize savedHeaders=_savedHeaders - In the implementation block
-(id)sendingEmailAddress;
-(id)bodyField;
-(id)attachmentStore;
-(id)toRecipients;
-(id)ccRecipients;
-(id)savedHeaders;
-(void)setCcRecipients:(id)arg1 ;
-(void)setBccRecipients:(id)arg1 ;
-(void)setSendingEmailAddress:(id)arg1 addIfNotPresent:(BOOL)arg2 ;
-(id)sendingAccountProxy;
-(id)accountProxyGenerator;
-(id)bccRecipients;
-(void)setSavedHeaders:(id)arg1 ;
-(id)addInlinedElementToStore:(id)arg1 onlyIfNecessary:(BOOL)arg2 ;
-(BOOL)hasAnyHiddenTrailingEmptyQuote;
-(void)dealloc;
-(void)setToRecipients:(id)arg1 ;
@end

