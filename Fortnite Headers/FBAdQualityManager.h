//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  3 2018 14:07:36).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBAdQualityStatistics, FBAdQualityViewabilityMeasurement, NSArray, UIView;

@interface FBAdQualityManager : NSObject
{
    FBAdQualityStatistics *_statistics;
    UIView *_targetView;
    NSArray *_tests;
    FBAdQualityViewabilityMeasurement *_viewabilityMeasurement;
}

+ (id)managerWithTargetView:(id)arg1 rules:(id)arg2;
@property(retain, nonatomic) FBAdQualityViewabilityMeasurement *viewabilityMeasurement; // @synthesize viewabilityMeasurement=_viewabilityMeasurement;
@property(retain, nonatomic) NSArray *tests; // @synthesize tests=_tests;
@property(retain, nonatomic) UIView *targetView; // @synthesize targetView=_targetView;
@property(readonly, nonatomic) FBAdQualityStatistics *statistics; // @synthesize statistics=_statistics;
- (void).cxx_destruct;
- (void)registerProgress:(double)arg1 volume:(float)arg2;
- (void)resetStatistics;
- (id)init;
- (id)initWithTargetView:(id)arg1 rules:(id)arg2;

@end

