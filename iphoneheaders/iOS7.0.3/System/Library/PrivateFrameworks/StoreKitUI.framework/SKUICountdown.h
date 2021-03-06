/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:34 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSURL, NSDate, NSString, UIColor, SKUIArtworkList;

@interface SKUICountdown : NSObject {

	BOOL _isLoaded;
	BOOL _flapped;
	int _type;
	NSURL* _URL;
	NSDate* _endDate;
	unsigned _dateFormat;
	NSDate* _startDate;
	int _rate;
	NSString* _numberFormat;
	UIColor* _fontColor;
	UIColor* _flapTopColor;
	UIColor* _flapBottomColor;
	SKUIArtworkList* _artworkList;
	SKUIArtworkList* _endArtworkList;
	long long _initialValue;
	long long _finalValue;

}

@property (assign,nonatomic) int type;                                      //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSURL * URL;                                     //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSDate * endDate;                                //@synthesize endDate=_endDate - In the implementation block
@property (assign,nonatomic) unsigned dateFormat;                           //@synthesize dateFormat=_dateFormat - In the implementation block
@property (nonatomic,copy) NSDate * startDate;                              //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) long long initialValue;                        //@synthesize initialValue=_initialValue - In the implementation block
@property (assign,nonatomic) long long finalValue;                          //@synthesize finalValue=_finalValue - In the implementation block
@property (assign,nonatomic) int rate;                                      //@synthesize rate=_rate - In the implementation block
@property (nonatomic,copy) NSString * numberFormat;                         //@synthesize numberFormat=_numberFormat - In the implementation block
@property (nonatomic,copy) UIColor * fontColor;                             //@synthesize fontColor=_fontColor - In the implementation block
@property (nonatomic,copy) UIColor * flapTopColor;                          //@synthesize flapTopColor=_flapTopColor - In the implementation block
@property (nonatomic,copy) UIColor * flapBottomColor;                       //@synthesize flapBottomColor=_flapBottomColor - In the implementation block
@property (assign,getter=isFlapped,nonatomic) BOOL flapped;                 //@synthesize flapped=_flapped - In the implementation block
@property (nonatomic,retain) SKUIArtworkList * artworkList;                 //@synthesize artworkList=_artworkList - In the implementation block
@property (nonatomic,retain) SKUIArtworkList * endArtworkList;              //@synthesize endArtworkList=_endArtworkList - In the implementation block
-(void)setType:(int)arg1 ;
-(int)type;
-(void)setDateFormat:(unsigned)arg1 ;
-(id)URL;
-(void)setURL:(id)arg1 ;
-(BOOL)isLoaded;
-(id)numberFormat;
-(void)setNumberFormat:(id)arg1 ;
-(id)startDate;
-(id)endDate;
-(int)rate;
-(void)setStartDate:(id)arg1 ;
-(void)setEndDate:(id)arg1 ;
-(id)artworkList;
-(BOOL)isFlapped;
-(id)flapTopColor;
-(id)flapBottomColor;
-(long long)initialValue;
-(long long)finalValue;
-(void)updateWithDictionary:(id)arg1 ;
-(id)initWithCountdownDictionary:(id)arg1 ;
-(void)setFlapped:(BOOL)arg1 ;
-(void)setFinalValue:(long long)arg1 ;
-(void)setFlapTopColor:(id)arg1 ;
-(void)setFlapBottomColor:(id)arg1 ;
-(void)setArtworkList:(id)arg1 ;
-(void)setEndArtworkList:(id)arg1 ;
-(void)setInitialValue:(long long)arg1 ;
-(id)endArtworkList;
-(id)fontColor;
-(void)setFontColor:(id)arg1 ;
-(void).cxx_destruct;
-(void)setRate:(int)arg1 ;
-(unsigned)dateFormat;
@end

