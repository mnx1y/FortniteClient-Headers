//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  3 2018 14:07:36).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class FBVideoAdContentView, NSError;

@protocol FBVideoAdContentViewDelegate
- (void)contentView:(FBVideoAdContentView *)arg1 didFailWithError:(NSError *)arg2;
- (void)contentViewDidEnd:(FBVideoAdContentView *)arg1;
- (void)contentViewDidClickthrough:(FBVideoAdContentView *)arg1;
- (void)contentViewDidSkip:(FBVideoAdContentView *)arg1;
- (void)contentViewDidResume:(FBVideoAdContentView *)arg1;
- (void)contentViewDidPause:(FBVideoAdContentView *)arg1;
- (void)contentViewDidProgress:(FBVideoAdContentView *)arg1;
- (void)contentViewDidLoad:(FBVideoAdContentView *)arg1;
@end
