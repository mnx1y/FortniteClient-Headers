//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  3 2018 14:07:36).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBDisplayAdAdapter.h"

#import "FBAdViewDelegate-Protocol.h"

@class FBAdViewInternal, NSString, UIViewController;

@interface FBANBannerAdAdapter : FBDisplayAdAdapter <FBAdViewDelegate>
{
}

- (void)adViewWillLogImpression:(id)arg1;
- (void)adView:(id)arg1 didFailWithError:(id)arg2;
- (void)adViewDidLoad:(id)arg1;
- (void)adViewDidFinishHandlingClick:(id)arg1;
- (void)adViewDidClick:(id)arg1;
- (_Bool)startAdFromRootViewController:(id)arg1 animated:(_Bool)arg2;
- (_Bool)startAdFromRootViewController:(id)arg1;
- (void)loadAdData:(id)arg1 forSize:(struct FBAdSize)arg2 forOrientation:(long long)arg3 forPlacement:(id)arg4 placementDefinition:(id)arg5 rewardData:(id)arg6;
- (id)getAdNetwork;

// Remaining properties
@property(retain, nonatomic) FBAdViewInternal *adView; // @dynamic adView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UIViewController *viewControllerForPresentingModalView;

@end
