/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:18 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AddressBookUI/ABCardGroupItem.h>

@class NSMutableArray, NSArray;

@interface ABCardActionGroupItem : ABCardGroupItem {

	NSMutableArray* _actions;

}

@property (nonatomic,readonly) NSArray * actions;              //@synthesize actions=_actions - In the implementation block
+(id)actionGroupItemWithAction:(id)arg1 ;
+(id)actionGroupItemWithActions:(id)arg1 ;
-(id)initWithAction:(id)arg1 ;
-(Class)cellClass;
-(void)addAction:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)actions;
@end
