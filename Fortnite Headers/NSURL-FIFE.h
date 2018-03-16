//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  3 2018 14:07:36).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSURL.h>

@interface NSURL (FIFE)
- (_Bool)isFIFEUrl;
- (id)FIFEURLRequestingCenteredCropToDimensions:(struct CGSize)arg1;
- (id)FIFEURLRequestingSmartCropToDimensions:(struct CGSize)arg1;
- (id)FIFEURLRequestingSmartCropToMaxSize:(double)arg1;
- (id)FIFEURLRequestingDimensions:(struct CGSize)arg1;
- (id)FIFEURLRequestingExactDimensions:(struct CGSize)arg1;
- (id)FIFEURLRequestingMaxSize:(double)arg1;
- (id)URLByRemovingFIFEInfo;
- (id)FIFEArgumentsString;
- (struct CGSize)maximumFIFEImageSize;
- (id)FIFEURLWithArguments:(id)arg1;
- (id)FIFELegacyURLWithArgumentsString:(id)arg1;
- (id)legacyFIFEArgumentsString;
- (id)URLByAppendingTrailingSlash;
- (_Bool)isLegacyFIFEURLWithArguments;
- (_Bool)isLegacyFIFEURL;
- (unsigned long long)numberOfPathComponentsInLegacyFIFEURL;
@end

