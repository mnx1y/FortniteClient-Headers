//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  3 2018 14:07:36).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface FBAdQualityRule : NSObject
{
    _Bool _continuous;
    float _viewableRatio;
    CDUnknownBlockType _endCallback;
    double _viewableSeconds;
}

+ (id)ruleWithViewableRatio:(float)arg1 viewableSeconds:(double)arg2 continuous:(_Bool)arg3 endCallback:(CDUnknownBlockType)arg4;
+ (id)mrcRuleWithEndCallback:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) double viewableSeconds; // @synthesize viewableSeconds=_viewableSeconds;
@property(readonly, nonatomic) float viewableRatio; // @synthesize viewableRatio=_viewableRatio;
@property(readonly, copy, nonatomic) CDUnknownBlockType endCallback; // @synthesize endCallback=_endCallback;
@property(readonly, nonatomic, getter=isContinuous) _Bool continuous; // @synthesize continuous=_continuous;
- (void).cxx_destruct;
- (id)init;
- (id)initWithViewableRatio:(float)arg1 viewableSeconds:(double)arg2 continuous:(_Bool)arg3 endCallback:(CDUnknownBlockType)arg4;

@end

