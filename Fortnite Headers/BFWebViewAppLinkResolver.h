//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  3 2018 14:07:36).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "BFAppLinkResolving-Protocol.h"

@class NSString;

@interface BFWebViewAppLinkResolver : NSObject <BFAppLinkResolving>
{
}

+ (id)sharedInstance;
- (id)appLinkFromALData:(id)arg1 destination:(id)arg2;
- (id)getALDataFromLoadedPage:(id)arg1;
- (id)parseALData:(id)arg1;
- (id)appLinkFromURLInBackground:(id)arg1;
- (id)followRedirects:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

