/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:28 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UITableViewCell.h>

@class UIImageView;

@interface PHStarkGenericTableViewCell : UITableViewCell {

	BOOL _showsChevron;
	BOOL _hidesChevronWhenUnhighlighted;
	UIImageView* _chevronImageView;

}

@property (assign,nonatomic) BOOL showsChevron;                               //@synthesize showsChevron=_showsChevron - In the implementation block
@property (assign,nonatomic) BOOL hidesChevronWhenUnhighlighted;              //@synthesize hidesChevronWhenUnhighlighted=_hidesChevronWhenUnhighlighted - In the implementation block
@property (retain) UIImageView * chevronImageView;                            //@synthesize chevronImageView=_chevronImageView - In the implementation block
-(void)setShowsChevron:(BOOL)arg1 ;
-(BOOL)showsChevron;
-(id)chevronImageView;
-(void)setHidesChevronWhenUnhighlighted:(BOOL)arg1 ;
-(BOOL)hidesChevronWhenUnhighlighted;
-(void)setChevronImageView:(id)arg1 ;
-(void)dealloc;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
@end
