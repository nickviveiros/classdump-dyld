/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:24 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/EMSheetMapper.h>

@class EDChartSheet;

@interface EMChartsheetMapper : EMSheetMapper {

	EDChartSheet* mChartSheet;
	CGRect mBox;

}
-(int)width;
-(id).cxx_construct;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)initWithChartSheet:(id)arg1 parent:(id)arg2 ;
-(int)preprocessWidthWithState:(id)arg1 ;
-(int)preprocessHeightWithState:(id)arg1 ;
@end
