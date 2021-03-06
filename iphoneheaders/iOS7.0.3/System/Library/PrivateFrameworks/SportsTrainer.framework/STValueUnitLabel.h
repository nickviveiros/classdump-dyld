/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:07:59 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SportsTrainer.framework/SportsTrainer
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SportsTrainer/SportsTrainer-Structs.h>
#import <UIKit/UIView.h>

@class UILabel;

@interface STValueUnitLabel : UIView {

	UILabel* _leftLabel;
	UILabel* _rightLabel;
	float _labelSpacing;
	int _textAlignment;
	unsigned _reversesLabels : 1;
	unsigned _forceLayout : 1;
	unsigned _verticalArrangement : 1;

}

@property (nonatomic,readonly) UILabel * leftLabel;                 //@synthesize leftLabel=_leftLabel - In the implementation block
@property (nonatomic,readonly) UILabel * rightLabel;                //@synthesize rightLabel=_rightLabel - In the implementation block
@property (assign,nonatomic) float labelSpacing;                    //@synthesize labelSpacing=_labelSpacing - In the implementation block
@property (assign,nonatomic) int textAlignment;                     //@synthesize textAlignment=_textAlignment - In the implementation block
@property (assign,nonatomic) BOOL reversesLabels; 
@property (assign,nonatomic) BOOL verticalArrangement; 
-(void)setReversesLabels:(BOOL)arg1 ;
-(void)setVerticalArrangement:(BOOL)arg1 ;
-(BOOL)verticalArrangement;
-(void)_sizeLabelsToFit;
-(BOOL)_labelsNeedSizing;
-(BOOL)reversesLabels;
-(id)rightLabel;
-(id)leftLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setNeedsDisplay;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)sizeToFit;
-(void)setTextAlignment:(int)arg1 ;
-(int)textAlignment;
-(float)labelSpacing;
-(void)setLabelSpacing:(float)arg1 ;
@end

