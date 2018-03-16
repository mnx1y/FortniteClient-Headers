//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jan  3 2018 14:07:36).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FNFAtomManager-Protocol.h"

@class FBAssetLinearReader, FNFDashPlaylistData, FNFDataBlockDistributor, NSDictionary;
@protocol FNFAtomManagerDelegate;

@interface FNFDashAtomManager : NSObject <FNFAtomManager>
{
    id <FNFAtomManagerDelegate> _delegate;
    FNFDataBlockDistributor *_dataBlockDistributors[2];
    FBAssetLinearReader *_readers[2];
    struct FNFMP4MoovAtomProvider _atomProviders[2];
    struct FNFMp4FrameMetadataCompressor _frames[2];
    struct vector<unsigned int, std::__1::allocator<unsigned int>> _gopKeyframeIndices;
    _Bool _moovAtomParsed[2];
    _Bool _parsedHeaders[2];
    _Bool _allHeadersParsed;
    FNFDashPlaylistData *_playlistData;
    CDStruct_1b6d18a9 _duration;
    struct opaqueCMFormatDescription *_formatDesc;
    struct AudioStreamBasicDescription _asbd;
    NSDictionary *_audioStreamExtraParameters;
    int _trackId[2];
    unsigned int _timescale[2];
    unsigned long long _initialTime;
    _Bool _initialTimeSet;
    int _segmentsParsed[2];
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)currentOffsetForTrack:(long long)arg1;
- (unsigned long long)timescale;
- (_Bool)_advanceToNextGopKeyframe;
- (void)_handleWarning:(id)arg1;
- (void)_advanceAudioToMatchVideo;
- (void)_attemptToParseMoofAtomsForTrack:(long long)arg1;
- (void)_attemptToParseInitializationAtomsForTrack:(long long)arg1;
- (struct FNFSeekStatus)_segmentedSeekStatusForTime:(CDStruct_1b6d18a9)arg1 shouldUpdateOffset:(_Bool)arg2 shouldSeekAudio:(_Bool)arg3 newOffset:(unsigned long long)arg4;
- (void)_resetDataForSeekBack;
- (_Bool)parsedHeaders;
- (_Bool)parsedHeaderForTrack:(long long)arg1;
- (unsigned long long)moovAtomSize;
- (CDStruct_1b6d18a9)duration;
- (id)audioStreamExtraParameters;
- (struct AudioStreamBasicDescription)asbd;
- (struct opaqueCMFormatDescription *)formatDesc;
- (CDStruct_1b6d18a9)nextAbsoluteAudioTime;
- (CDStruct_1b6d18a9)videoDuration;
- (CDStruct_1b6d18a9)currentVideoPts;
- (unsigned long long)offsetForTimeInSeconds:(float)arg1 track:(long long)arg2;
- (_Bool)offsetIsAtLeastLargestOffset:(unsigned long long)arg1 track:(long long)arg2;
- (CDStruct_1b6d18a9)timeLoadedForOffset:(unsigned long long)arg1 track:(long long)arg2;
- (void)advanceFrameForTrack:(long long)arg1;
- (_Bool)trackHasMoreFrames:(long long)arg1 isFullyDownloaded:(_Bool)arg2;
- (_Bool)containsAudio;
- (const char *)currentFrameDataForTrack:(long long)arg1;
- (struct FNFFrameMetadata)currentFrameMetadataForTrack:(long long)arg1;
- (void)setDashPlaylistData:(id)arg1;
- (struct FNFSeekStatus)_segmentedSeekToPosition:(CDStruct_1b6d18a9)arg1;
- (int)_videoSegmentIndexForTime:(CDStruct_1b6d18a9)arg1;
- (struct FNFSeekStatus)_fragmentedSeekToPosition:(CDStruct_1b6d18a9)arg1;
- (struct FNFSeekStatus)seekToPosition:(CDStruct_1b6d18a9)arg1;
- (_Bool)shouldResetAssetToBeginning;
- (id)dataBlockDistributorForTrack:(long long)arg1;
- (void)createNewDataBlockDistributors;
- (void)parseAtomForTrack:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (id)description;
- (id)init;

@end
