//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  3 2018 14:07:36).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBNativeAd, NSError;

@protocol FBNativeAdDelegate <NSObject>

@optional
- (void)nativeAdDidFinishHandlingClick:(FBNativeAd *)arg1;
- (void)nativeAdDidClick:(FBNativeAd *)arg1;
- (void)nativeAd:(FBNativeAd *)arg1 didFailWithError:(NSError *)arg2;
- (void)nativeAdWillLogImpression:(FBNativeAd *)arg1;
- (void)nativeAdDidLoad:(FBNativeAd *)arg1;
@end
