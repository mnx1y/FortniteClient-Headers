//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  3 2018 14:07:36).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, NSURL;

@protocol FBSDKBridgeAPIProtocol <NSObject>
- (NSDictionary *)responseParametersForActionID:(NSString *)arg1 queryParameters:(NSDictionary *)arg2 cancelled:(_Bool *)arg3 error:(id *)arg4;
- (NSURL *)requestURLWithActionID:(NSString *)arg1 scheme:(NSString *)arg2 methodName:(NSString *)arg3 methodVersion:(NSString *)arg4 parameters:(NSDictionary *)arg5 error:(id *)arg6;
@end

