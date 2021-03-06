/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class AVAssetCacheInternal, NSURL;

@interface AVAssetCache : NSObject {

	AVAssetCacheInternal* _priv;

}

@property (assign,nonatomic) long long maxSize; 
@property (assign,nonatomic) long long maxEntrySize; 
@property (nonatomic,readonly) long long currentSize; 
@property (nonatomic,readonly) NSURL * URL; 
+(id)assetCacheWithURL:(id)arg1 ;
-(long long)maxEntrySize;
-(long long)currentSize;
-(long long)sizeOfEntryForKey:(id)arg1 ;
-(void)removeEntryForKey:(id)arg1 ;
-(void)dealloc;
-(id)allKeys;
-(long long)maxSize;
-(void)setMaxSize:(long long)arg1 ;
-(id)URL;
-(id)initWithURL:(id)arg1 ;
-(void)setMaxEntrySize:(long long)arg1 ;
-(void)finalize;
@end

