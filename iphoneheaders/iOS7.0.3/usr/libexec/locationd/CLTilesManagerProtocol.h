/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:42:52 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/locationd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol CLTilesManagerProtocol <CLNotifierServiceProtocol>
@required
-(void)requestTileDownloadByType:(int)arg1 lat:(double)arg2 lon:(double)arg3 seckey:(unsigned long long)arg4 details:(CLTileFileDownloadDetails)arg5;
@end
