/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@class CAShapeLayer;

@interface NetTopoDeviceConnectionLayer : NetTopoObjectLayer  {
    CAShapeLayer *_connectionLineLayer;
    struct CGPath { } *_hitTestPath;
    struct CGColor { } *_lineColorEthernet;
    struct CGColor { } *_lineColorWiFi;
    struct CGColor { } *_selectedLineColor;
    struct CGColor { } *_clearColor;
    struct CGColor { } *_whiteColor;
    unsigned int _upstreamDeviceSpatialRelationship;
    unsigned int _connectionStyle;
    struct CGPoint { 
        float x; 
        float y; 
    } _upstreamConnectionPoint;
    struct CGPoint { 
        float x; 
        float y; 
    } _downstreamConnectionPoint;
    unsigned int _upstreamConnectionSide;
    struct CGPoint { 
        float x; 
        float y; 
    } _siblingMergePoint;
    unsigned int _connectionMediumFallback;
    struct CGPath { } *_arrowhead;
}

@property unsigned int upstreamDeviceSpatialRelationship;
@property unsigned int connectionStyle;
@property(readonly) unsigned int connectionMedium;
@property unsigned int connectionMediumFallback;
@property struct CGPoint { float x1; float x2; } upstreamConnectionPoint;
@property struct CGPoint { float x1; float x2; } downstreamConnectionPoint;
@property unsigned int upstreamConnectionSide;
@property struct CGPoint { float x1; float x2; } siblingMergePoint;
@property(readonly) struct CGPath { }* hitTestPath;


- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (void)layoutSublayers;
- (void)setNeedsDisplay;
- (struct CGPath { }*)hitTestPath;
- (unsigned int)connectionMediumFallback;
- (void)setSiblingMergePoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })siblingMergePoint;
- (struct CGPoint { float x1; float x2; })upstreamConnectionPoint;
- (struct CGPoint { float x1; float x2; })downstreamConnectionPoint;
- (struct CGPath { }*)newConnectionPathWithOffset:(float)arg1;
- (void)addCurvedArrowConnectionToPath:(struct CGPath { }*)arg1 withOffset:(float)arg2;
- (void)addSideWindingConnectionToPath:(struct CGPath { }*)arg1 withOffset:(float)arg2;
- (unsigned int)connectionStyle;
- (void)addBottomWindingConnectionToPath:(struct CGPath { }*)arg1 withOffset:(float)arg2;
- (unsigned int)upstreamConnectionSide;
- (unsigned int)connectionMedium;
- (unsigned int)upstreamDeviceSpatialRelationship;
- (void)setConnectionStyle:(unsigned int)arg1;
- (void)setConnectionMediumFallback:(unsigned int)arg1;
- (void)setDownstreamConnectionPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setUpstreamConnectionSide:(unsigned int)arg1;
- (void)setUpstreamConnectionPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setUpstreamDeviceSpatialRelationship:(unsigned int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })getUserInteractionBounds;
- (id)describeOne:(id)arg1 uiLayer:(id)arg2 indent:(unsigned int)arg3;
- (void)setSelected:(BOOL)arg1;
- (BOOL)isSelected;
- (id)debugDescription;
- (id)init;
- (void)dealloc;

@end
