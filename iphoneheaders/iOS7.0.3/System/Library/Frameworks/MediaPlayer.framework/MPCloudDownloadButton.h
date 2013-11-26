/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:29 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKit/UIButton.h>

@interface MPCloudDownloadButton : UIButton {

	int _cloudButtonStyle;

}

@property (assign,nonatomic) int cloudButtonStyle;              //@synthesize cloudButtonStyle=_cloudButtonStyle - In the implementation block
+(int)_buttonTypeForCloudDownloadButtonStyle:(int)arg1 ;
+(id)cloudDownloadButtonWithStyle:(int)arg1 ;
+(CGSize)defaultSizeForStyle:(int)arg1 ;
-(void)_touchDownAction:(id)arg1 ;
-(void)_touchEndedAction:(id)arg1 ;
-(void)setCloudButtonStyle:(int)arg1 ;
-(int)cloudButtonStyle;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setHighlighted:(BOOL)arg1 ;
@end
