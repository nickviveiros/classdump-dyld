/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterUI/GKSplittingDataSource.h>

@class GKGame;

@interface GKTurnBasedMatchesDataSource : GKSplittingDataSource {

	GKGame* _game;
	SEL _detailPressedAction;

}

@property (nonatomic,retain) GKGame * game;                        //@synthesize game=_game - In the implementation block
@property (assign,nonatomic) SEL detailPressedAction;              //@synthesize detailPressedAction=_detailPressedAction - In the implementation block
-(id)game;
-(void)setGame:(id)arg1 ;
-(void)configureDataSource;
-(void)configureCollectionView:(id)arg1 ;
-(void)setDetailPressedAction:(SEL)arg1 ;
-(SEL)detailPressedAction;
-(void)collectionViewWillBecomeActive:(id)arg1 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(unsigned)numberOfMatches;
@end

