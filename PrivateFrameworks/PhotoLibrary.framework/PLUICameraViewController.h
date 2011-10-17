/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLUICameraViewController : PLCameraViewController <UIImagePickerCameraViewController> {
    int _previousStatusBarStyle;
    int _newStatusBarStyle;
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    } _previewViewTransform;
}


- (void)setAllowsEditing:(BOOL)arg1;
- (BOOL)_displaysFullScreen;
- (void)_setImagePickerMediaTypes:(id)arg1;
- (int)_imagePickerStatusBarStyle;
- (void)_setCameraFlashMode:(int)arg1;
- (int)_cameraFlashMode;
- (void)_setCameraCaptureMode:(unsigned int)arg1;
- (unsigned int)_cameraCaptureMode;
- (void)_setCameraDevice:(unsigned int)arg1;
- (unsigned int)_cameraDevice;
- (void)_stopVideoCapture;
- (BOOL)_startVideoCapture;
- (void)_takePicture;
- (void)_setCameraViewTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })_cameraViewTransform;
- (void)_setCameraOverlayView:(id)arg1;
- (id)_cameraOverlayView;
- (void)_setShowsCameraControls:(BOOL)arg1;
- (BOOL)_showsCameraControls;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (BOOL)cameraViewShouldShowPreviewAfterSelection:(id)arg1;
- (void)cameraView:(id)arg1 videoSavedToPath:(id)arg2 editingInfo:(id)arg3;
- (void)cameraView:(id)arg1 photoSaved:(id)arg2;
- (void)cameraViewCancelled:(id)arg1;
- (void)_adjustContentSizeForOrientation:(int)arg1;
- (void)_windowOrientationWillChange:(id)arg1;
- (void)setWantsImageData:(BOOL)arg1;
- (void)_editabilityChanged:(id)arg1;
- (id)_cameraView;
- (id)init;
- (void)dealloc;

@end
