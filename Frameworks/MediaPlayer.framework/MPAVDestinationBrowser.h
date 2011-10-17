/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAVDestinationBrowser : NSObject  {
    BOOL _scansForDestinationsWhenEnteringForeground;
    BOOL _isScanning;
    int _retainCount;
}

@property BOOL scansForDestinationsWhenEnteringForeground;


- (BOOL)scansForDestinationsWhenEnteringForeground;
- (void)beginScanningForDestinations;
- (void)endScanningForDestinations;
- (void)setScansForDestinationsWhenEnteringForeground:(BOOL)arg1;
- (void)_endScanningForDestinationsNotification:(id)arg1;
- (void)_beginScanningForDestinationsNotification:(id)arg1;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (unsigned int)retainCount;
- (id)retain;
- (id)init;
- (oneway void)release;
- (void)dealloc;

@end