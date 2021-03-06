/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@class <SiriUIAudioRoutePickerControllerDelegate>, NSArray, NSString, UIActionSheet, UIViewController;

@interface SiriUIAudioRoutePickerController : NSObject <UIActionSheetDelegate> {
    NSString *_audioCategory;
    <SiriUIAudioRoutePickerControllerDelegate> *_delegate;
    NSArray *_displayedRoutes;
    BOOL _hasRoutesToPick;
    UIActionSheet *_pickerSheet;
    UIViewController *_pickerViewController;
    BOOL _shouldRedisplayPicker;
}

@property <SiriUIAudioRoutePickerControllerDelegate> * delegate;

- (void).cxx_destruct;
- (void)_cleanupPickerSheet;
- (BOOL)_hasPickableRouteOtherThanBuiltIn;
- (BOOL)_overrideIsPicked;
- (id)_pickableRoutes;
- (void)_pickableRoutesChanged:(id)arg1;
- (id)_pickerSheet;
- (void)_routeChanged:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)actionSheet:(id)arg1 willDismissWithButtonIndex:(int)arg2;
- (BOOL)bluetoothIsPicked;
- (void)dealloc;
- (id)delegate;
- (void)dismissPickerAnimated:(BOOL)arg1;
- (BOOL)hasRoutesToPick;
- (id)initWithCategory:(id)arg1;
- (BOOL)pickerIsShowing;
- (void)setDelegate:(id)arg1;
- (void)showPickerFromView:(id)arg1 orientation:(int)arg2 animated:(BOOL)arg3;
- (void)startUpdatingRoutes;
- (void)stopUpdatingRoutes;
- (void)willPresentActionSheet:(id)arg1;

@end
