//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  3 2018 14:07:36).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData;

@interface FBSDKCrypto : NSObject
{
    NSData *_encryptionKeyData;
    NSData *_macKeyData;
}

+ (id)randomString:(unsigned long long)arg1;
+ (id)randomBytes:(unsigned long long)arg1;
+ (id)makeMasterKey;
- (void).cxx_destruct;
- (id)_macForIV:(id)arg1 cipherData:(id)arg2 additionalDataToSign:(id)arg3;
- (id)decrypt:(id)arg1 additionalSignedData:(id)arg2;
- (id)encrypt:(id)arg1 additionalDataToSign:(id)arg2;
- (void)dealloc;
- (id)initWithEncryptionKey:(id)arg1 macKey:(id)arg2;
- (id)initWithMasterKey:(id)arg1;

@end

