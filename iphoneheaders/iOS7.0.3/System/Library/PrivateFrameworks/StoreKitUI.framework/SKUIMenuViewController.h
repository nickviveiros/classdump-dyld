/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:35 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@protocol SKUIMenuViewControllerDelegate;
@class UIColor, NSArray;

@interface SKUIMenuViewController : UITableViewController {

	UIColor* _borderColor;
	<SKUIMenuViewControllerDelegate>* _delegate;
	int _indexOfCheckedTitle;
	NSArray* _menuTitles;

}

@property (nonatomic,readonly) NSArray * menuTitles;                                          //@synthesize menuTitles=_menuTitles - In the implementation block
@property (assign,nonatomic,__weak) <SKUIMenuViewControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int indexOfCheckedTitle;                                         //@synthesize indexOfCheckedTitle=_indexOfCheckedTitle - In the implementation block
-(void)setDelegate:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)delegate;
-(void)loadView;
-(id)initWithMenuTitles:(id)arg1 ;
-(void)setIndexOfCheckedTitle:(int)arg1 ;
-(id)menuTitles;
-(int)indexOfCheckedTitle;
-(void).cxx_destruct;
@end

