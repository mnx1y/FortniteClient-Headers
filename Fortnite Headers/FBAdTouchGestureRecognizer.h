//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  3 2018 14:07:36).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILongPressGestureRecognizer.h>

@protocol FBAdTouchGestureRecognizerDelegate;

@interface FBAdTouchGestureRecognizer : UILongPressGestureRecognizer
{
}

- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)init;

// Remaining properties
@property(nonatomic) __weak id <FBAdTouchGestureRecognizerDelegate> delegate; // @dynamic delegate;

@end

