//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  3 2018 14:07:36).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface GIDCallbackQueue : NSObject
{
    _Bool _firing;
    int _pending;
    NSMutableArray *_queue;
    GIDCallbackQueue *_strongSelf;
}

- (void).cxx_destruct;
- (void)fire;
- (void)addCallback:(CDUnknownBlockType)arg1;
- (void)reset;
- (void)next;
- (void)wait;
- (id)init;

@end
