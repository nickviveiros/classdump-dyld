/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:42 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Message/MFWebAttachmentSource.h>

@class NSURL, MFMimeBody, MFMimePart, NSData, MFLock, NSMutableDictionary, MFAttachmentManager;

@interface MFWebMessageDocument : MFWebAttachmentSource {

	unsigned _uniqueId;
	NSURL* _baseURL;
	MFMimeBody* _mimeBody;
	MFMimePart* _htmlPart;
	NSData* _htmlData;
	MFLock* _lock;
	NSMutableDictionary* _partsByURL;
	NSMutableDictionary* _partsByFilename;
	unsigned long _preferredEncoding;
	MFAttachmentManager* _attachmentManager;

}

@property (readonly) NSURL * baseURL;                                              //@synthesize baseURL=_baseURL - In the implementation block
@property (readonly) MFMimeBody * mimeBody;                                        //@synthesize mimeBody=_mimeBody - In the implementation block
@property (readonly) MFMimePart * mimePart;                                        //@synthesize htmlPart=_htmlPart - In the implementation block
@property (readonly) NSData * htmlData;                                            //@synthesize htmlData=_htmlData - In the implementation block
@property (assign) unsigned long preferredEncoding;                                //@synthesize preferredEncoding=_preferredEncoding - In the implementation block
@property (nonatomic,retain) MFAttachmentManager * attachmentManager;              //@synthesize attachmentManager=_attachmentManager - In the implementation block
+(id)sourceForURL:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)baseURL;
-(id)mimeBody;
-(unsigned long)preferredEncoding;
-(void)setPreferredEncoding:(unsigned long)arg1 ;
-(id)mimePart;
-(id)attachmentForCID:(id)arg1 ;
-(id)attachmentForURL:(id)arg1 ;
-(id)preferredCharacterSet;
-(id)initWithMimePart:(id)arg1 ;
-(id)_initWithMimePart:(id)arg1 htmlData:(id)arg2 ;
-(id)mimePartForURL:(id)arg1 ;
-(id)htmlData;
-(id)attachmentManager;
-(id)initWithMimeBody:(id)arg1 ;
-(id)initWithMimePart:(id)arg1 htmlData:(id)arg2 encoding:(unsigned long)arg3 ;
-(id)attachmentsInDocument;
-(id)fileWrapper;
-(void)setAttachmentManager:(id)arg1 ;
@end

