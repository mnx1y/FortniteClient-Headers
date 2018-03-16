//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  3 2018 14:07:36).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSURLSessionDataDelegate-Protocol.h"

@class NSString, NSURL;

@interface ABKItunesStoreProduct : NSObject <NSURLSessionDataDelegate>
{
    NSURL *_referenceUrl;
    long long _identifier;
}

@property long long identifier; // @synthesize identifier=_identifier;
@property(retain) NSURL *referenceUrl; // @synthesize referenceUrl=_referenceUrl;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)openInAppStoreUsingReferenceURL;
- (id)initWithReferenceURL:(id)arg1 andIdentifier:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

