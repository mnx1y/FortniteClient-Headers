//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  3 2018 14:07:36).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSHTTPURLResponse;

@interface FHttpResponseAppleWrapper : NSObject
{
    TArray_e98fc9dd Payload;
    _Bool bIsReady;
    _Bool bHadError;
    int BytesWritten;
    NSHTTPURLResponse *Response;
}

@property int BytesWritten; // @synthesize BytesWritten;
@property _Bool bHadError; // @synthesize bHadError;
@property _Bool bIsReady; // @synthesize bIsReady;
@property(retain) NSHTTPURLResponse *Response; // @synthesize Response;
- (id).cxx_construct;
- (void).cxx_destruct;
- (int)getBytesWritten;
- (TArray_e98fc9dd *)getPayload;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (void)dealloc;
- (id)init;

@end

