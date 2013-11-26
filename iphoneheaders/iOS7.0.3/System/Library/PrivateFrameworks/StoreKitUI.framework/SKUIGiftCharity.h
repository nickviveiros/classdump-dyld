/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:55 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString, NSArray, SKUIArtwork;

@interface SKUIGiftCharity : NSObject {

	NSString* _amountDisclaimer;
	NSArray* _amounts;
	NSString* _description;
	NSString* _identifier;
	NSString* _legalText;
	NSString* _legalText2;
	SKUIArtwork* _logoArtwork;
	NSString* _name;

}

@property (nonatomic,readonly) NSString * amountDisclaimer;                //@synthesize amountDisclaimer=_amountDisclaimer - In the implementation block
@property (nonatomic,readonly) NSString * charityDescription;              //@synthesize description=_description - In the implementation block
@property (nonatomic,readonly) NSString * legalText;                       //@synthesize legalText=_legalText - In the implementation block
@property (nonatomic,readonly) NSString * legalText2;                      //@synthesize legalText2=_legalText2 - In the implementation block
@property (nonatomic,readonly) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSArray * donationAmounts;                  //@synthesize amounts=_amounts - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) SKUIArtwork * logoArtwork;                  //@synthesize logoArtwork=_logoArtwork - In the implementation block
-(id)name;
-(id)identifier;
-(id)logoArtwork;
-(id)initWithCharityDictionary:(id)arg1 ;
-(id)amountDisclaimer;
-(id)charityDescription;
-(id)donationAmounts;
-(id)legalText;
-(id)legalText2;
-(void).cxx_destruct;
@end
