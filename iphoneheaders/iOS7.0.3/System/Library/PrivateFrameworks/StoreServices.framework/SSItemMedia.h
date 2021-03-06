/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:41 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSURL;

@interface SSItemMedia : NSObject {

	int _duration;
	int _fullDuration;
	long long _mediaFileSize;
	NSString* _mediaKind;
	BOOL _protected;
	NSURL* _url;

}

@property (nonatomic,readonly) int durationInMilliseconds;                               //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy) NSString * mediaKind;                                         //@synthesize mediaKind=_mediaKind - In the implementation block
@property (getter=isProtectedMedia,nonatomic,readonly) BOOL protectedMedia;              //@synthesize protected=_protected - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                                              //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) int fullDurationInMilliseconds;                           //@synthesize fullDuration=_fullDuration - In the implementation block
@property (nonatomic,readonly) long long mediaFileSize;                                  //@synthesize mediaFileSize=_mediaFileSize - In the implementation block
-(id)mediaKind;
-(void)setMediaKind:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)URL;
-(id)initWithStoreOfferDictionary:(id)arg1 ;
-(BOOL)isProtectedMedia;
-(long long)mediaFileSize;
-(int)fullDurationInMilliseconds;
-(int)durationInMilliseconds;
@end

