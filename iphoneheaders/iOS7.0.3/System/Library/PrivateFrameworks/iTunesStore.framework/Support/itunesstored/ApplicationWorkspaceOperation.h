/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:09 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface ApplicationWorkspaceOperation : NSObject {

	long long _downloadID;

}

@property (nonatomic,readonly) long long downloadID;              //@synthesize downloadID=_downloadID - In the implementation block
-(void)runWithCompletionBlock:(/*^block*/ id)arg1 ;
-(id)initWithDownloadIdentifier:(long long)arg1 ;
-(long long)downloadID;
@end
