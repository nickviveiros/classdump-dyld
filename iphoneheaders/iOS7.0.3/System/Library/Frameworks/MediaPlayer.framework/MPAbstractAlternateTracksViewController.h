/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:26 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MediaPlayer/MPViewController.h>

@interface MPAbstractAlternateTracksViewController : MPViewController {

	unsigned _selectedTracks[2];
	unsigned _previousTracks[2];

}
-(id)alternateTracks;
-(void)saveChanges;
-(unsigned)countOfGroups;
-(id)arrayForGroup:(int)arg1 ;
-(unsigned)indexForGroup:(int)arg1 ;
-(unsigned)typeForGroup:(int)arg1 ;
-(void)addLoadingUI;
-(void)removeLoadingUI;
-(void)_alternateTypesChangedNotification:(id)arg1 ;
-(BOOL)_hasAudioGroup;
-(BOOL)_hasSubtitlesGroup;
-(void)dealloc;
-(void)reloadData;
-(id)init;
@end
