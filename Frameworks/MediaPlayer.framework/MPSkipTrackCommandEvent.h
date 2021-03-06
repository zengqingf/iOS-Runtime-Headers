/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPSkipTrackCommandEvent : MPRemoteCommandEvent {
    BOOL _requestingDefermentToPlaybackQueuePosition;
}

@property (getter=isRequestingDefermentToPlaybackQueuePosition, nonatomic, readonly) BOOL requestingDefermentToPlaybackQueuePosition;

- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;
- (BOOL)isRequestingDefermentToPlaybackQueuePosition;

@end
