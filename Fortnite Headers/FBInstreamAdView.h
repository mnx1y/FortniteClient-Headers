//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  3 2018 14:07:36).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FBDisplayAdControllerDelegate-Protocol.h"

@class FBDisplayAdController, NSString;
@protocol FBInstreamAdViewDelegate;

@interface FBInstreamAdView : UIView <FBDisplayAdControllerDelegate>
{
    _Bool _loaded;
    _Bool _started;
    id <FBInstreamAdViewDelegate> _delegate;
    NSString *_placementID;
    FBDisplayAdController *_adController;
    UIView *_instreamVideoAdView;
}

@property(nonatomic, getter=isStarted) _Bool started; // @synthesize started=_started;
@property(nonatomic, getter=isLoaded) _Bool loaded; // @synthesize loaded=_loaded;
@property(retain, nonatomic) UIView *instreamVideoAdView; // @synthesize instreamVideoAdView=_instreamVideoAdView;
@property(retain, nonatomic) FBDisplayAdController *adController; // @synthesize adController=_adController;
@property(copy, nonatomic) NSString *placementID; // @synthesize placementID=_placementID;
@property(nonatomic) __weak id <FBInstreamAdViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)displayAdController:(id)arg1 clickThruWithURL:(id)arg2;
- (void)displayAdControllerImpression:(id)arg1;
- (void)displayAdController:(id)arg1 presentedView:(id)arg2;
- (void)displayAdController:(id)arg1 didFailWithError:(id)arg2;
- (void)displayAdControllerStopped:(id)arg1;
- (void)displayAdControllerLoaded:(id)arg1;
@property(readonly, nonatomic, getter=isAdValid) _Bool adValid;
- (_Bool)showAdFromRootViewController:(id)arg1;
- (void)loadAd;
- (id)initWithPlacementID:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

