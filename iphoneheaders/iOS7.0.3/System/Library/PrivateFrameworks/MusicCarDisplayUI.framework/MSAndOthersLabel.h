/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:49 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MusicCarDisplayUI/MusicCarDisplayUI-Structs.h>
#import <UIKit/UIView.h>

@class UIFont, UIColor, NSArray, NSString;

@interface MSAndOthersLabel : UIView {

	UIFont* _font;
	UIColor* _textColor;
	NSArray* _items;
	NSString* _separator;
	NSString* _andOthers;
	NSString* _truncatedItemsString;

}

@property (nonatomic,retain) UIFont * font;                      //@synthesize font=_font - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) NSArray * items;                    //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) NSString * separator;               //@synthesize separator=_separator - In the implementation block
@property (nonatomic,retain) NSString * andOthers;               //@synthesize andOthers=_andOthers - In the implementation block
@property (nonatomic,readonly) float actualHeight; 
@property (nonatomic,readonly) float desiredHeight; 
-(void)setSeparator:(id)arg1 ;
-(float)desiredHeight;
-(void)drawRect:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setFont:(id)arg1 ;
-(id)font;
-(id)items;
-(void)setItems:(id)arg1 ;
-(void)setTextColor:(id)arg1 ;
-(id)textColor;
-(void)_truncateItemsToFit;
-(int)_stringDrawingOptions;
-(float)actualHeight;
-(id)andOthers;
-(void)setAndOthers:(id)arg1 ;
-(id)_textAttributes;
-(void).cxx_destruct;
-(id)separator;
@end

