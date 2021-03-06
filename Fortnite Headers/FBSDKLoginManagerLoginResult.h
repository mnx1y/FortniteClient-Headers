//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  3 2018 14:07:36).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBSDKAccessToken, NSDictionary, NSMutableDictionary, NSSet;

@interface FBSDKLoginManagerLoginResult : NSObject
{
    NSMutableDictionary *_mutableLoggingExtras;
    _Bool _isCancelled;
    _Bool _isSkipped;
    FBSDKAccessToken *_token;
    NSSet *_grantedPermissions;
    NSSet *_declinedPermissions;
}

@property(nonatomic) _Bool isSkipped; // @synthesize isSkipped=_isSkipped;
@property(copy, nonatomic) NSSet *declinedPermissions; // @synthesize declinedPermissions=_declinedPermissions;
@property(copy, nonatomic) NSSet *grantedPermissions; // @synthesize grantedPermissions=_grantedPermissions;
@property(readonly, nonatomic) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
@property(copy, nonatomic) FBSDKAccessToken *token; // @synthesize token=_token;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *loggingExtras;
- (void)addLoggingExtra:(id)arg1 forKey:(id)arg2;
- (id)initWithToken:(id)arg1 isCancelled:(_Bool)arg2 grantedPermissions:(id)arg3 declinedPermissions:(id)arg4;
- (id)init;

@end

