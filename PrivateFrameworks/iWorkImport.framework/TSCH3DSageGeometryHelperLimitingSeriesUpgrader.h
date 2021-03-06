/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DSageGeometryHelperLimitingSeriesUpgrader : TSCH3DAbstractLimitingSeriesUpgrader {
    TSCH3DChartBoundsLayout *mBoundsLayout;
    TSCH3DChartResizerHelper *mResizerHelper;
}

@property (nonatomic, readonly) TSCH3DChartBoundsLayout *boundsLayout;
@property (nonatomic, readonly) TSCH3DChartResizerHelper *resizerHelper;

- (id)boundsLayout;
- (id)boundsLayoutByResizingToLayoutSize:(const struct tvec2<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; }*)arg1;
- (id)containingViewportByResizingScene:(id)arg1 toResizingFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)dealloc;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })oldResizingFrame;
- (id)resizerHelper;
- (id)sceneResetWithLayoutSettings:(struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; unsigned int x7; })arg1;

@end
