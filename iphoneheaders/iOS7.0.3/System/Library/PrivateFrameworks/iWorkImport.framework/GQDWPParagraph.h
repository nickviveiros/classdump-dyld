/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:08 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQDWPInlineList.h>

@class GQDSStyle;

@interface GQDWPParagraph : GQDWPInlineList {

	GQDSStyle* mParaStyle;
	long mListLevel;
	BOOL mRestartList;
	BOOL mContinue;
	BOOL mIsHidden;

}
-(BOOL)isBlank;
-(int)readAttributesFromReader:(xmlTextReaderRef)arg1 processor:(id)arg2 ;
-(id)paragraphStyle;
-(BOOL)restartList;
-(BOOL)cont;
-(void)dealloc;
-(BOOL)isHidden;
-(long)listLevel;
@end

