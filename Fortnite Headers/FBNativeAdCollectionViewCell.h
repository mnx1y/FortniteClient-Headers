//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  3 2018 14:07:36).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class FBNativeAdView;

@interface FBNativeAdCollectionViewCell : UICollectionViewCell
{
    FBNativeAdView *_nativeAdView;
}

+ (Class)specializeCellForType:(long long)arg1 forAttributes:(id)arg2;
@property(nonatomic) __weak FBNativeAdView *nativeAdView; // @synthesize nativeAdView=_nativeAdView;
- (void).cxx_destruct;
- (void)populate:(id)arg1;
- (id)attributes;
- (long long)type;
- (id)initWithFrame:(struct CGRect)arg1;

@end
