//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  3 2018 14:07:36).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBAdDataModel.h"

@class NSNumber, NSString, NSURL;

@interface FBHTMLAdDataModel : FBAdDataModel
{
    NSString *_markup;
    NSString *_activationCommand;
    NSURL *_nativeImpressionReportURL;
    long long _orientation;
    NSNumber *_isTablet;
    NSNumber *_isVideo;
    NSNumber *_adHeight;
    NSNumber *_adWidth;
}

@property(readonly, nonatomic) NSNumber *adWidth; // @synthesize adWidth=_adWidth;
@property(readonly, nonatomic) NSNumber *adHeight; // @synthesize adHeight=_adHeight;
@property(readonly, nonatomic) NSNumber *isVideo; // @synthesize isVideo=_isVideo;
@property(readonly, nonatomic) NSNumber *isTablet; // @synthesize isTablet=_isTablet;
@property(readonly, nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(readonly, copy, nonatomic) NSURL *nativeImpressionReportURL; // @synthesize nativeImpressionReportURL=_nativeImpressionReportURL;
@property(readonly, copy, nonatomic) NSString *activationCommand; // @synthesize activationCommand=_activationCommand;
@property(readonly, copy, nonatomic) NSString *markup; // @synthesize markup=_markup;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (id)initWithMetadata:(id)arg1;

@end

