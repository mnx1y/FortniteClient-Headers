//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  3 2018 14:07:36).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class BFCancellationToken;

@interface BFCancellationTokenRegistration : NSObject
{
    _Bool _disposed;
    BFCancellationToken *_token;
    CDUnknownBlockType _cancellationObserverBlock;
    NSObject *_lock;
}

+ (id)registrationWithToken:(id)arg1 delegate:(CDUnknownBlockType)arg2;
@property(nonatomic) _Bool disposed; // @synthesize disposed=_disposed;
@property(retain, nonatomic) NSObject *lock; // @synthesize lock=_lock;
@property(copy, nonatomic) CDUnknownBlockType cancellationObserverBlock; // @synthesize cancellationObserverBlock=_cancellationObserverBlock;
@property(nonatomic) __weak BFCancellationToken *token; // @synthesize token=_token;
- (void).cxx_destruct;
- (void)throwIfDisposed;
- (void)notifyDelegate;
- (void)dispose;
- (id)init;

@end

