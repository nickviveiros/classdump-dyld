/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Symbolication/Symbolication-Structs.h>
#import <Symbolication/VMUMemoryView.h>

@interface VMUMemoryView_Native : NSObject <VMUMemoryView> {

	VMURange _addressRange;
	unsigned long _cursor;
	char* _data;
	id _gcKeepAlive;

}
-(long long)int64;
-(id)description;
-(unsigned long long)cursor;
-(void)setCursor:(unsigned long long)arg1 ;
-(id)readBytes:(unsigned long)arg1 ;
-(id)stringWithEncoding:(unsigned)arg1 size:(unsigned long)arg2 ;
-(VMURange)addressRange;
-(void)advanceCursor:(unsigned long long)arg1 ;
-(nlist_64)nlist_64;
-(nlist_64)nlist;
-(id)stringWithEncoding:(unsigned)arg1 offset:(unsigned long long)arg2 ;
-(unsigned short)uint16;
-(unsigned)uint32;
-(id)stringWithEncoding:(unsigned)arg1 ;
-(unsigned long long)ULEB128;
-(unsigned char)uint8;
-(long long)LEB128;
-(unsigned long long)uint64;
-(BOOL)int8;
-(dyld_image_info_64)dyldImageInfo64;
-(dyld_image_info_64)dyldImageInfo;
-(int)int32;
-(void)rewindCursor:(unsigned long long)arg1 ;
-(BOOL)isCursorPointerAligned;
-(void)pointerAlignCursor;
-(short)int16;
-(id)arrayOfInt8:(unsigned long)arg1 ;
-(id)arrayOfInt16:(unsigned long)arg1 ;
-(id)arrayOfInt32:(unsigned long)arg1 ;
-(id)arrayOfInt64:(unsigned long)arg1 ;
-(id)arrayOfUInt8:(unsigned long)arg1 ;
-(id)arrayOfUInt16:(unsigned long)arg1 ;
-(id)arrayOfUInt32:(unsigned long)arg1 ;
-(id)arrayOfUInt64:(unsigned long)arg1 ;
-(BOOL)charAtOffset:(unsigned long long)arg1 ;
-(id)initWithAddressRange:(VMURange)arg1 data:(char*)arg2 memory:(id)arg3 ;
@end

