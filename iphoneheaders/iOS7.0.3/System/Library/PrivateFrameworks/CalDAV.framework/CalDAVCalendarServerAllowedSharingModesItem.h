/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:50 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItemWithNoChildren;

@interface CalDAVCalendarServerAllowedSharingModesItem : CoreDAVItem {

	CoreDAVItemWithNoChildren* _canBePublished;
	CoreDAVItemWithNoChildren* _canBeShared;

}

@property (retain) CoreDAVItemWithNoChildren * canBePublished;              //@synthesize canBePublished=_canBePublished - In the implementation block
@property (retain) CoreDAVItemWithNoChildren * canBeShared;                 //@synthesize canBeShared=_canBeShared - In the implementation block
-(void)setCanBeShared:(id)arg1 ;
-(void)setCanBePublished:(id)arg1 ;
-(id)canBePublished;
-(id)canBeShared;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)initWithNameSpace:(id)arg1 andName:(id)arg2 ;
-(id)copyParseRules;
@end
