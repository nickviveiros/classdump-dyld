/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:46 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString;

@interface WBSAddressBookValueSpecifier : NSObject {

	NSString* _property;
	NSString* _component;
	NSString* _label;

}

@property (nonatomic,readonly) NSString * property;               //@synthesize property=_property - In the implementation block
@property (nonatomic,readonly) NSString * component;              //@synthesize component=_component - In the implementation block
@property (nonatomic,readonly) NSString * label;                  //@synthesize label=_label - In the implementation block
-(id)property;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)label;
-(id)component;
-(id)initWithProperty:(id)arg1 component:(id)arg2 label:(id)arg3 ;
@end
