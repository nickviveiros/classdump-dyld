/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:47 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <IMCore/IMChatItem.h>

@class NSString, NSArray;

@interface IMStatusChatItem : IMChatItem

@property (nonatomic,readonly) NSString * formatString; 
@property (nonatomic,readonly) NSArray * handles; 
@property (nonatomic,readonly) int statusType; 
-(id)description;
-(id)stringValue;
-(id)handles;
-(id)formatString;
-(id)initWithFormat:(id)arg1 handles:(id)arg2 date:(id)arg3 statusType:(int)arg4 ;
-(int)statusType;
-(id)initWithString:(id)arg1 date:(id)arg2 statusType:(int)arg3 ;
@end
