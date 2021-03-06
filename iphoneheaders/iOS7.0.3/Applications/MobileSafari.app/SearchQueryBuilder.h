/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:00:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSString, SearchEngineInfo;

@interface SearchQueryBuilder : NSObject {

	NSString* queryString;
	SearchEngineInfo* engineInfo;

}
+(id)searchQueryBuilderWithXWebSearchURL:(id)arg1 ;
+(id)searchQueryBuilderWithQuery:(id)arg1 ;
-(id)searchEngineInfo;
-(BOOL)searchEngineIsDefault;
-(id)initWithSearchEngineInfo:(id)arg1 queryString:(id)arg2 ;
-(id)initWithQueryString:(id)arg1 ;
-(id)initWithXWebSearchURL:(id)arg1 ;
-(void)dealloc;
-(id)searchURL;
-(id)queryString;
@end

