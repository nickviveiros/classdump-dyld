/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:41 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileTimer.app/MobileTimer
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <MobileTimer/StateManagement.h>
#import <MobileTimer/StopWatchControlsTarget.h>

@class MTStopwatchControlsView, StopwatchPadControls, UITableView, CADisplayLink, NSDate, NSMutableArray, NSTimer;

@interface StopWatchViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, StateManagement, StopWatchControlsTarget> {

	MTStopwatchControlsView* _lapControls;
	StopwatchPadControls* _padControls;
	UITableView* _lapTimeTable;
	CADisplayLink* _displayLink;
	NSDate* _startTime;
	double _offset;
	double _currentInterval;
	double _previousLapsTotalInterval;
	NSMutableArray* _laps;
	BOOL _isTimerRunning;
	NSTimer* _restoreIdleTimerTimer;
	int _mode;

}
-(void)handleLocaleChange;
-(void)_restoreIdleTimer;
-(void)_clearAllLaps;
-(void)_addLap:(double)arg1 ;
-(double)_timeAdjustedFor30fpsDisplay:(double)arg1 ;
-(unsigned)_placeholderCellCount;
-(double)runningTotalForLap:(int)arg1 ;
-(void)startLapTimer;
-(void)resumeLapTimer;
-(void)pauseLapTimer;
-(void)lapLapTimer;
-(void)resetLapTimer;
-(void)_tick:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)loadView;
-(void)viewDidUnload;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(id)defaultPNGName;
-(void)setMode:(int)arg1 ;
-(void)_startTimer;
-(void)_stopTimer;
-(void)saveState;
-(void)reloadState;
-(Class)tableCellClass;
@end
