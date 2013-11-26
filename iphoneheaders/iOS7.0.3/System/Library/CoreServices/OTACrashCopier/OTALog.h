/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:26 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/OTACrashCopier
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString;

@interface OTALog : NSObject {

	NSString* _path;

}

@property (retain) NSString * path;              //@synthesize path=_path - In the implementation block
-(void)moveToDirectory:(id)arg1 ;
-(void)deleteLog;
-(void)purgeLogCache;
-(unsigned long long)sizeOnDisk;
-(BOOL)isValidForSubmission;
-(unsigned)extendedSize;
-(id)submissionExtension;
-(id)encodedRepresentation;
-(id)preferredArchiveFilenamePrefix;
-(id)preferredArchiveFilename;
-(void)dealloc;
-(id)description;
-(id)path;
-(void)setPath:(id)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(void)moveToPath:(id)arg1 ;
@end
