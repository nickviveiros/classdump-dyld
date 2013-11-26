/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/AdSheet.app/AdSheet
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AdSheet/ADJavaScriptObject.h>
#import <AddressBookUI/ABNewPersonViewControllerDelegate.h>
#import <AdSheet/ADContactsJSO_Bindings.h>

@class NSDictionary;

@interface ADContactsJSO : ADJavaScriptObject <ABNewPersonViewControllerDelegate, ADContactsJSO_Bindings> {

	BOOL _readyToPresent;
	void* _contactRecord;

}

@property (assign,nonatomic) void* contactRecord;                   //@synthesize contactRecord=_contactRecord - In the implementation block
@property (nonatomic,readonly) BOOL readyToPresent;                 //@synthesize readyToPresent=_readyToPresent - In the implementation block
@property (nonatomic,copy) NSDictionary * contactInfo; 
+(void)initializeInContext:(id)arg1 ;
-(void)setContactRecord:(void*)arg1 ;
-(void)presentComposer;
-(BOOL)readyToPresent;
-(id)contactInfo;
-(void)setContactInfo:(id)arg1 ;
-(void*)contactRecord;
-(void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(void*)arg2 ;
-(void)dealloc;
@end
