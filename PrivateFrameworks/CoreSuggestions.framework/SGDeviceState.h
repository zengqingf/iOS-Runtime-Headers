/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface SGDeviceState : NSObject

+ (void)blockUntilFirstUnlock;
+ (id)currentOsBuild;
+ (BOOL)isClassCLocked;
+ (BOOL)isConstrainedDevice;
+ (BOOL)isDeviceFormattedForProtection;
+ (BOOL)isUnlocked;
+ (int)lockState;
+ (void)registerForLockStateChangeNotifications:(id /* block */)arg1;
+ (void)runBlockWhenDeviceIsReadyForSuggestions:(id /* block */)arg1;

@end
