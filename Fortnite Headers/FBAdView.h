//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  3 2018 14:07:36).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FBDisplayAdControllerDelegate-Protocol.h"

@class FBDisplayAdAdapter, FBDisplayAdController, NSString, UIViewController;
@protocol FBAdViewDelegate;

@interface FBAdView : UIView <FBDisplayAdControllerDelegate>
{
    _Bool _initialized;
    NSString *_placementID;
    UIViewController *_rootViewController;
    id <FBAdViewDelegate> _delegate;
    UIView *_adView;
    FBDisplayAdController *_adController;
    FBDisplayAdAdapter *_adapter;
    UIViewController *_viewController;
    struct FBAdSize _adSize;
    struct CGSize _actualAdSize;
}

@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) struct CGSize actualAdSize; // @synthesize actualAdSize=_actualAdSize;
@property(retain, nonatomic) FBDisplayAdAdapter *adapter; // @synthesize adapter=_adapter;
@property(nonatomic, getter=isInitialized) _Bool initialized; // @synthesize initialized=_initialized;
@property(nonatomic) struct FBAdSize adSize; // @synthesize adSize=_adSize;
@property(retain, nonatomic) FBDisplayAdController *adController; // @synthesize adController=_adController;
@property(nonatomic) __weak UIView *adView; // @synthesize adView=_adView;
@property(nonatomic) __weak id <FBAdViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(copy, nonatomic) NSString *placementID; // @synthesize placementID=_placementID;
- (void).cxx_destruct;
- (void)displayAdControllerUserClosed:(id)arg1;
- (void)displayAdController:(id)arg1 clickThruWithURL:(id)arg2;
- (void)displayAdControllerImpression:(id)arg1;
- (void)displayAdController:(id)arg1 didFailWithError:(id)arg2;
- (void)displayAdControllerStopped:(id)arg1;
- (void)displayAdControllerLoaded:(id)arg1;
- (void)displayAdController:(id)arg1 presentedView:(id)arg2;
- (void)updateInitialAdViewSize:(struct FBAdSize)arg1;
- (void)clearSubviews;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (_Bool)isAdValid;
- (void)disableAutoRefresh;
- (void)loadAd;
- (id)initWithPlacementID:(id)arg1 adSize:(struct FBAdSize)arg2 rootViewController:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

