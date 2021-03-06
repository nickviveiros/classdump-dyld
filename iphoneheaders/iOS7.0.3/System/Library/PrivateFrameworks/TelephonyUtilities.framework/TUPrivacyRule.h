/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:50 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSCoding.h>

@class TUPhoneNumber, NSString;

@interface TUPrivacyRule : NSObject <NSCoding> {

	int _type;
	TUPhoneNumber* _phoneNumber;
	NSString* _email;

}

@property (nonatomic,readonly) int type;                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) TUPhoneNumber * phoneNumber;              //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,readonly) NSString * email;                         //@synthesize email=_email - In the implementation block
+(id)ruleForPhoneNumber:(id)arg1 ;
+(id)ruleForEmail:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)type;
-(id)phoneNumber;
-(id)email;
-(id)initForPhoneNumber:(id)arg1 ;
-(id)initForEmail:(id)arg1 ;
@end

