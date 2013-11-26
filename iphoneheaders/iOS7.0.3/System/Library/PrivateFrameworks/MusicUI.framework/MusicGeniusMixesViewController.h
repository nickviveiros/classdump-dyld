/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:21 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MediaPlayerUI/MPUDataSourceViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@class UICollectionView, UIPageControl;

@interface MusicGeniusMixesViewController : MPUDataSourceViewController <UICollectionViewDataSource, UICollectionViewDelegate> {

	UICollectionView* _collectionView;
	BOOL _isVisible;
	UIPageControl* _pageControl;

}
-(void)_networkTypeDidChangeNotification:(id)arg1 ;
-(void)_defaultMediaLibraryDidChangeNotification:(id)arg1 ;
-(void)_itemWillChangeNotification:(id)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)contentScrollView;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)_updateNavigationPrompt;
-(BOOL)music_beginPlaybackForVisibleContent;
-(void)_pageControlAction:(id)arg1 ;
-(void)_cellPlayButtonAction:(id)arg1 ;
-(id)initWithDataSource:(id)arg1 ;
-(void).cxx_destruct;
@end
