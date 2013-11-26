/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:42 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSMutableDictionary, NSNumber, NSString, NSDictionary;

@interface ATStoreInfo : NSObject {

	NSMutableDictionary* _downloadDictionary;
	NSMutableDictionary* _assetDictionary;

}

@property (nonatomic,retain) NSNumber * adamID; 
@property (nonatomic,retain) NSNumber * DSID; 
@property (nonatomic,retain) NSNumber * collectionID; 
@property (nonatomic,retain) NSNumber * versionID; 
@property (nonatomic,retain) NSNumber * drmFree; 
@property (nonatomic,retain) NSNumber * sagaID; 
@property (nonatomic,retain) NSNumber * matchStatus; 
@property (nonatomic,retain) NSNumber * redownloadStatus; 
@property (nonatomic,retain) NSString * appleID; 
@property (nonatomic,retain) NSString * storefrontID; 
@property (nonatomic,retain) NSString * XID; 
@property (nonatomic,retain) NSString * flavor; 
@property (nonatomic,retain) NSString * dimensions; 
@property (nonatomic,retain) NSString * podcastEpisodeGUID; 
@property (readonly) NSDictionary * downloadDictionary;                  //@synthesize downloadDictionary=_downloadDictionary - In the implementation block
@property (readonly) NSDictionary * assetDictionary;                     //@synthesize assetDictionary=_assetDictionary - In the implementation block
-(id)appleID;
-(void)setAppleID:(id)arg1 ;
-(id)adamID;
-(void)dealloc;
-(id)init;
-(id)dimensions;
-(id)DSID;
-(void)setVersionID:(id)arg1 ;
-(void)setStorefrontID:(id)arg1 ;
-(id)storefrontID;
-(void)setXID:(id)arg1 ;
-(id)XID;
-(void)setSagaID:(id)arg1 ;
-(id)sagaID;
-(void)setMatchStatus:(id)arg1 ;
-(id)matchStatus;
-(void)setRedownloadStatus:(id)arg1 ;
-(id)redownloadStatus;
-(void)setFlavor:(id)arg1 ;
-(id)flavor;
-(void)setDimensions:(id)arg1 ;
-(void)setDrmFree:(id)arg1 ;
-(id)drmFree;
-(id)downloadDictionary;
-(id)assetDictionary;
-(void)setDSID:(id)arg1 ;
-(id)collectionID;
-(void)setCollectionID:(id)arg1 ;
-(id)podcastEpisodeGUID;
-(void)setPodcastEpisodeGUID:(id)arg1 ;
-(id)versionID;
-(void)setAdamID:(id)arg1 ;
@end
