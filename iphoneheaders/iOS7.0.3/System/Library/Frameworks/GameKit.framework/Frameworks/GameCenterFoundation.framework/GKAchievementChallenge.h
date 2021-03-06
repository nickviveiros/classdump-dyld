/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:27 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterFoundation/GKChallenge.h>

@class GKAchievement;

@interface GKAchievementChallenge : GKChallenge {

	GKAchievement* _achievement;

}

@property (nonatomic,retain) GKAchievement * achievement;              //@synthesize achievement=_achievement - In the implementation block
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
-(void)setInternal:(id)arg1 ;
-(id)detailGoalTextForPlayer:(id)arg1 withAchievement:(id)arg2 ;
-(void)setAchievement:(id)arg1 ;
-(id)achievement;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(BOOL)detailsLoaded;
-(void)loadDetailsWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)titleText;
@end

