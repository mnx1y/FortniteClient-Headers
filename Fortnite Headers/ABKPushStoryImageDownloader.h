//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  3 2018 14:07:36).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ABKPushStoryPayload, NSURLSession;

@interface ABKPushStoryImageDownloader : NSObject
{
    ABKPushStoryPayload *_pushStoryPayload;
    NSURLSession *_downloadSession;
}

@property(retain) NSURLSession *downloadSession; // @synthesize downloadSession=_downloadSession;
@property(retain) ABKPushStoryPayload *pushStoryPayload; // @synthesize pushStoryPayload=_pushStoryPayload;
- (void).cxx_destruct;
- (void)addAttachmentToPushPayload:(id)arg1 atIndex:(long long)arg2;
- (id)createAttachmentForIndex:(long long)arg1 URL:(id)arg2;
- (id)moveFileFromTemporaryLocation:(id)arg1 forImageLink:(struct _ABKPushStoryImageLink)arg2;
- (void)cancelDownloadingSession;
- (unsigned long long)initBackgroundTask;
- (void)downloadWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithPushStoryPayload:(id)arg1;

@end

