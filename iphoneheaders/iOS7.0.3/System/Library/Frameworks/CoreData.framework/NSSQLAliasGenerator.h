/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:49 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface NSSQLAliasGenerator : NSObject {

	unsigned _nextTableAlias;
	unsigned _nextVariableAlias;
	unsigned _nextTempTableAlias;
	NSString* _tableBase;
	NSString* _variableBase;

}
-(id)initWithNestingLevel:(unsigned)arg1 ;
-(id)generateTableAlias;
-(id)generateSubqueryVariableAlias;
-(id)generateTempTableName;
-(void)dealloc;
-(id)init;
@end

