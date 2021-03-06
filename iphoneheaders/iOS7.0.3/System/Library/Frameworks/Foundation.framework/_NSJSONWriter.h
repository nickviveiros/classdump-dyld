/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:21 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@class NSOutputStream;

@interface _NSJSONWriter : NSObject {

	NSOutputStream* outputStream;
	int kind;
	char* dataBuffer;
	unsigned dataBufferLen;
	unsigned dataLen;
	BOOL freeDataBuffer;
	char* tempBuffer;
	unsigned tempBufferLen;
	int totalDataWritten;

}
-(void)resizeTemporaryBuffer:(unsigned long)arg1 ;
-(id)dataWithRootObject:(id)arg1 options:(unsigned)arg2 error:(id*)arg3 ;
-(int)writeRootObject:(id)arg1 toStream:(id)arg2 options:(unsigned)arg3 error:(id*)arg4 ;
-(int)appendString:(id)arg1 range:(NSRange)arg2 ;
-(void)dealloc;
-(id)init;
-(void)finalize;
@end

