/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:23 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSString.h>

@class NSString;

@interface NSLocalizableString : NSString {

	NSString* _stringsFileKey;
	NSString* _developmentLanguageString;

}

@property (readonly) NSString * stringsFileKey; 
@property (readonly) NSString * developmentLanguageString; 
+(id)localizableStringWithStringsFileKey:(id)arg1 developmentLanguageString:(id)arg2 ;
-(id)initWithStringsFileKey:(id)arg1 developmentLanguageString:(id)arg2 ;
-(id)stringsFileKey;
-(void)setStringsFileKey:(id)arg1 ;
-(id)developmentLanguageString;
-(void)setDevelopmentLanguageString:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned)length;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(Class)classForCoder;
-(unsigned short)characterAtIndex:(unsigned)arg1 ;
-(id)awakeAfterUsingCoder:(id)arg1 ;
@end

