//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  3 2018 14:07:36).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBVideoAdContentView.h"

#import "FBAdChoicesViewDelegate-Protocol.h"
#import "FBInstreamAdVideoViewDelegate-Protocol.h"

@class FBAdChoicesView, FBInstreamAdChoicesIcon, FBInstreamAdVideoView, FBInstreamLearnMoreView, FBInstreamSkipButtonView, FBVideoAdLabel, NSString, UIViewController;

@interface FBInstreamAdContentView : FBVideoAdContentView <FBInstreamAdVideoViewDelegate, FBAdChoicesViewDelegate>
{
    _Bool _destinationAvailable;
    _Bool _paused;
    FBInstreamAdChoicesIcon *_adChoicesIcon;
    FBAdChoicesView *_adChoicesView;
    FBVideoAdLabel *_countdownView;
    unsigned long long _lastRemainingTimeSeconds;
    FBInstreamLearnMoreView *_learnMoreView;
    UIViewController *_rootViewController;
    FBInstreamSkipButtonView *_skipButtonView;
    FBInstreamAdVideoView *_videoView;
    CDStruct_1b6d18a9 _skippableTime;
}

@property(retain, nonatomic) FBInstreamAdVideoView *videoView; // @synthesize videoView=_videoView;
@property(retain, nonatomic) FBInstreamSkipButtonView *skipButtonView; // @synthesize skipButtonView=_skipButtonView;
@property(nonatomic) CDStruct_1b6d18a9 skippableTime; // @synthesize skippableTime=_skippableTime;
@property(retain, nonatomic) UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(nonatomic) _Bool paused; // @synthesize paused=_paused;
@property(retain, nonatomic) FBInstreamLearnMoreView *learnMoreView; // @synthesize learnMoreView=_learnMoreView;
@property(nonatomic) unsigned long long lastRemainingTimeSeconds; // @synthesize lastRemainingTimeSeconds=_lastRemainingTimeSeconds;
@property(nonatomic) _Bool destinationAvailable; // @synthesize destinationAvailable=_destinationAvailable;
@property(retain, nonatomic) FBVideoAdLabel *countdownView; // @synthesize countdownView=_countdownView;
@property(retain, nonatomic) FBAdChoicesView *adChoicesView; // @synthesize adChoicesView=_adChoicesView;
@property(retain, nonatomic) FBInstreamAdChoicesIcon *adChoicesIcon; // @synthesize adChoicesIcon=_adChoicesIcon;
- (void).cxx_destruct;
- (void)videoView:(id)arg1 didFailWithError:(id)arg2;
- (void)videoViewDidEnd:(id)arg1;
- (void)videoViewDidProgress:(id)arg1;
- (void)videoViewTapped:(id)arg1;
- (void)videoViewDidLoad:(id)arg1;
- (void)adChoicesView:(id)arg1 viewControllerDismissed:(id)arg2;
- (void)adChoicesView:(id)arg1 willPresentViewController:(id)arg2;
- (void)updateSkipButtonRemainingTime;
- (void)updateCountdownText;
- (unsigned long long)skipRemainingSeconds;
- (void)skipButtonViewTapped:(id)arg1;
- (void)removeObservers;
- (void)learnMoreViewTapped:(id)arg1;
- (void)cleanLayout;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)addSkipButton;
- (void)addObservers;
- (void)addLearnMoreView;
- (void)addCountdownView;
- (void)addAdChoicesView;
- (CDStruct_1b6d18a9)skipRemainingTime;
- (_Bool)skippable;
- (void)layoutSubviews;
- (CDStruct_1b6d18a9)duration;
- (CDStruct_1b6d18a9)currentTime;
- (void)resume;
- (void)pause;
- (void)startFromRootViewController:(id)arg1;
- (void)loadAdFromDataModel:(id)arg1;
- (_Bool)isInline;
- (_Bool)isAutoplay;
- (float)volume;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

