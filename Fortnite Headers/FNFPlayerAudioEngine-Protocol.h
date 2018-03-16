//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  3 2018 14:07:36).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary;

@protocol FNFPlayerAudioEngine <NSObject>
- (void)setVolume:(float)arg1 rampTime:(float)arg2;
- (CDStruct_1b6d18a9)getCurrentTime;
- (void)invalidate;
- (void)resumeEnqueuingData;
- (void)stopLoadingData;
- (void)reset;
- (void)stop;
- (void)pause;
- (void)playWithStartTime:(CDStruct_1b6d18a9)arg1;
- (void)prepareToPlay;
- (void)setAudioStreamBasicDescription:(struct AudioStreamBasicDescription)arg1 extraParameters:(NSDictionary *)arg2 putDataCallback:(_Bool (^)(struct AudioQueueBuffer *, struct AudioTimeStamp *, struct *))arg3 errorCallback:(void (^)(NSError *))arg4 sampleFrameSize:(unsigned int)arg5;
@end

