/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:36 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/XPCObjects.framework/XPCObjects
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSSecureCoding.h>

@interface XPCMachSendRight : NSObject <NSSecureCoding> {

	unsigned _sendRight;

}
+(BOOL)supportsSecureCoding;
+(id)wrapSendRight:(unsigned)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned)sendRight;
@end

