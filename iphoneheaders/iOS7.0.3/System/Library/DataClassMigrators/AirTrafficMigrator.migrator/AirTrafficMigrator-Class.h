/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:31:17 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/DataClassMigrators/AirTrafficMigrator.migrator/AirTrafficMigrator
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <DataMigration/DataClassMigrator.h>

@class ATClientController;

@interface AirTrafficMigrator : DataClassMigrator {

	int _processedClients;
	ATClientController* _controller;

}
-(id)dataClassName;
-(BOOL)performMigration;
-(float)estimatedDuration;
-(float)migrationProgress;
-(void)dealloc;
-(id)init;
@end
