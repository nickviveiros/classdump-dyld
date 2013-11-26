/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:11:14 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/SpringBoardPlugins/MapsLockScreen.lockbundle/MapsLockScreen
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MapsLockScreen/MapsLockScreen-Structs.h>
#import <UIKit/UIView.h>
#import <MapsLockScreen/MNBannerView.h>

@class SBUIBannerContext, MNBannerItem, MNGuidanceManeuverView, UILabel, UIImageView;

@interface MNBannerSignView : UIView <MNBannerView> {

	MNGuidanceManeuverView* _maneuverView;
	UILabel* _distanceLabel;
	UILabel* _instructionsLabel;
	UIImageView* _shieldImageView;
	CGPoint _shieldCenterPoint;
	SBUIBannerContext* _bannerContext;

}

@property (nonatomic,readonly) SBUIBannerContext * bannerContext;              //@synthesize bannerContext=_bannerContext - In the implementation block
@property (nonatomic,readonly) MNBannerItem * bannerItem; 
-(id)bannerContext;
-(id)bannerItem;
-(void)updateDistanceTextFromItem;
-(void)_outlineSubviews;
-(CGPoint)_centerPointOffset;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithContext:(id)arg1 ;
@end
