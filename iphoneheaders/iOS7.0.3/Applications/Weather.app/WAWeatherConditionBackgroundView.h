/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:01:08 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Weather.app/Weather
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Weather/Weather-Structs.h>
#import <UIKit/UIView.h>

@protocol OS_dispatch_source;
@class WADynamicWeatherBackground, NSArray, WADynamicWeatherBackgroundInteractiveTransaction, NSObject, UIImageView, WAWeatherCondition;

@interface WAWeatherConditionBackgroundView : UIView {

	int _activeIndex;
	WADynamicWeatherBackground* _background;
	float _scrollOffset;
	NSArray* _cities;
	WADynamicWeatherBackgroundInteractiveTransaction* _crossfadeTransaction;
	NSObject<OS_dispatch_source>* _crossfadeEffectTimer;
	UIImageView* _introductionImageView;
	WAWeatherCondition* _leftCondition;
	WAWeatherCondition* _rightCondition;

}

@property (nonatomic,readonly) NSArray * conditions; 
@property (nonatomic,readonly) WADynamicWeatherBackground * background;                                            //@synthesize background=_background - In the implementation block
@property (assign,nonatomic) float scrollOffset;                                                                   //@synthesize scrollOffset=_scrollOffset - In the implementation block
@property (nonatomic,retain) NSArray * cities;                                                                     //@synthesize cities=_cities - In the implementation block
@property (nonatomic,retain) WADynamicWeatherBackgroundInteractiveTransaction * crossfadeTransaction;              //@synthesize crossfadeTransaction=_crossfadeTransaction - In the implementation block
@property (nonatomic,retain) NSObject<OS_dispatch_source> * crossfadeEffectTimer;                                  //@synthesize crossfadeEffectTimer=_crossfadeEffectTimer - In the implementation block
@property (nonatomic,retain) UIImageView * introductionImageView;                                                  //@synthesize introductionImageView=_introductionImageView - In the implementation block
@property (nonatomic,retain) WAWeatherCondition * leftCondition;                                                   //@synthesize leftCondition=_leftCondition - In the implementation block
@property (nonatomic,retain) WAWeatherCondition * rightCondition;                                                  //@synthesize rightCondition=_rightCondition - In the implementation block
-(void)refreshConditions;
-(void)prepareToResume;
-(void)prepareToSuspend;
-(void)saveImageForKeyCondition;
-(id)relinquishConditionViewForCityAtIndex:(int)arg1 ;
-(void)useConditionView:(id)arg1 activeCityIndex:(unsigned)arg2 ;
-(void)setCities:(id)arg1 activeCityIndex:(int)arg2 ;
-(void)pauseOffscreenConditions;
-(void)setScrollEnded;
-(void)setScrollOffset:(float)arg1 ;
-(void)setCities:(id)arg1 activeCityIndex:(int)arg2 animationDuration:(double)arg3 ;
-(void)updateConditionsAboutCityIndex:(int)arg1 ;
-(void)_cityDidUpdate:(id)arg1 ;
-(id)_conditions;
-(void)setLeftCondition:(id)arg1 ;
-(void)setRightCondition:(id)arg1 ;
-(void)setCities:(id)arg1 activeCityIndex:(int)arg2 activeCityLiveConditionOnly:(BOOL)arg3 animationDuration:(double)arg4 ;
-(void)setCities:(id)arg1 ;
-(void)_setCondition:(id)arg1 atIndex:(unsigned)arg2 ;
-(id)_conditionAtIndex:(unsigned)arg1 ;
-(void)_removeSideLayers;
-(void)_addBackAllLayers;
-(id)crossfadeTransaction;
-(void)setCrossfadeTransaction:(id)arg1 ;
-(id)crossfadeEffectTimer;
-(void)setCrossfadeEffectTimer:(id)arg1 ;
-(id)introductionImageView;
-(void)setIntroductionImageView:(id)arg1 ;
-(id)leftCondition;
-(id)rightCondition;
-(float)scrollOffset;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)background;
-(id)cities;
-(id)conditions;
@end

