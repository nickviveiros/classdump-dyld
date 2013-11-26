/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:41 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <UIKit/UIView.h>

@protocol QLGenericViewDelegate;
@class UIView, UIImageView, UILabel, UIButton, NSError, , NSString, NSAttributedString;

@interface QLGenericView : UIView {

	UIView* _containerView;
	UIImageView* _iconView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIButton* _showArchiveContentButton;
	NSError* _error;
	<QLGenericViewDelegate>* delegate;

}

@property (copy) NSString * title; 
@property (copy) NSString * subtitle; 
@property (copy) NSAttributedString * attributedSubtitle; 
@property (assign) BOOL showArchiveButton; 
@property (assign) <QLGenericViewDelegate> * delegate; 
-(void)showArchiveContents:(id)arg1 ;
-(void)setShowArchiveButton:(BOOL)arg1 ;
-(void)_updateContainerFrameForOrientation:(int)arg1 ;
-(void)setAttributedSubtitle:(id)arg1 ;
-(id)attributedSubtitle;
-(BOOL)showArchiveButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(id)delegate;
-(id)title;
-(void)setSubtitle:(id)arg1 ;
-(id)subtitle;
@end
