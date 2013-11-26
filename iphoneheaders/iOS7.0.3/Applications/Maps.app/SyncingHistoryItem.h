/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:51 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol SyncingHistoryItem <NSObject,NSCopying,MapsSynced>
@property (nonatomic,readonly) BOOL isValid; 
@property (assign,nonatomic) double position; 
@property (nonatomic,copy) NSString * syncIdentifier; 
@property (nonatomic,readonly) SyncedBookmarkRepr * bookmarkRepresentation; 
@required
-(id)initWithBookmarkRepresentation:(id)arg1;
-(BOOL)updateFromBookmarkRepresentation:(id)arg1;
-(id)bookmarkRepresentation;
-(id)syncIdentifier;
-(void)setSyncIdentifier:(id)arg1;
-(BOOL)isValid;
-(void)setPosition:(double)arg1;
-(double)position;
@end
