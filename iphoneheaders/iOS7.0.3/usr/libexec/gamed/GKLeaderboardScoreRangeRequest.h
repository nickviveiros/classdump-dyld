/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:18:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/gamed
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <gamed/gamed-Structs.h>
#import <GameCenterFoundation/GKLeaderboardScoreRequest.h>

@interface GKLeaderboardScoreRangeRequest : GKLeaderboardScoreRequest {

	NSRange _range;

}

@property (assign,nonatomic) NSRange range;              //@synthesize range=_range - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSRange)range;
-(void)setRange:(NSRange)arg1 ;
@end

