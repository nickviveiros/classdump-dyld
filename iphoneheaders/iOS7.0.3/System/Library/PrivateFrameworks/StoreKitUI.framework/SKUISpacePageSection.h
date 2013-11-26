/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:55 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIStorePageSection.h>

@class SKUISpacePageComponent;

@interface SKUISpacePageSection : SKUIStorePageSection

@property (nonatomic,@dynamic,readonly) SKUISpacePageComponent * pageComponent; 
-(id)initWithPageComponent:(id)arg1 ;
-(CGSize)cellSizeForIndexPath:(id)arg1 ;
-(int)numberOfCells;
-(void)willAppearInContext:(id)arg1 ;
-(id)cellForIndexPath:(id)arg1 ;
@end
