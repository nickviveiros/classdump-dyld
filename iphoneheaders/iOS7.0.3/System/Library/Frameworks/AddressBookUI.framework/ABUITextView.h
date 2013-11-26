/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:27 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <UIKit/UITextView.h>

@class UIColor, ABSwellTextView;

@interface ABUITextView : UITextView {

	float _lastContentHeight;
	BOOL _isHighlighted;
	UIColor* _savedTextColor;
	UIColor* _highlightedTextColor;
	UIColor* _shadowColor;
	CGSize _shadowOffset;
	BOOL _disallowsSetContentOffset;
	BOOL _informParentOfContentSizeChange;
	NSRange _pinnedCursorPosition;
	ABSwellTextView* _parent;

}

@property (assign,nonatomic) ABSwellTextView * parent;                           //@synthesize parent=_parent - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;              //@synthesize isHighlighted=_isHighlighted - In the implementation block
@property (nonatomic,retain) UIColor * highlightedTextColor;                     //@synthesize highlightedTextColor=_highlightedTextColor - In the implementation block
@property (nonatomic,retain) UIColor * shadowColor;                              //@synthesize shadowColor=_shadowColor - In the implementation block
@property (assign,nonatomic) CGSize shadowOffset;                                //@synthesize shadowOffset=_shadowOffset - In the implementation block
@property (assign,nonatomic) BOOL disallowsSetContentOffset;                     //@synthesize disallowsSetContentOffset=_disallowsSetContentOffset - In the implementation block
-(void)_updateStylesheet;
-(void)setDisallowsSetContentOffset:(BOOL)arg1 ;
-(void)_secretSetFrame:(CGRect)arg1 ;
-(BOOL)disallowsSetContentOffset;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(BOOL)becomeFirstResponder;
-(void)setShadowColor:(id)arg1 ;
-(void)setShadowOffset:(CGSize)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)setContentSize:(CGSize)arg1 ;
-(CGSize)shadowOffset;
-(id)shadowColor;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)isHighlighted;
-(void)setTextColor:(id)arg1 ;
-(void)_beginPinningInputViews;
-(void)_endPinningInputViews;
-(id)highlightedTextColor;
-(void)setHighlightedTextColor:(id)arg1 ;
-(void)setParent:(id)arg1 ;
-(id)parent;
@end
