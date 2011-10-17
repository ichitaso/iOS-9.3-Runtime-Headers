/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class GEORoute, NSMutableArray, MKRouteStep, NSDictionary, NSString, MKDate, NSArray;

@interface MKRoute : NSObject <MKOverlay> {
    GEORoute *_route;
    int _mode;
    struct { double x1; double x2; } *_mapPoints;
    double *_distancesFromStart;
    double *_distancesFromEnd;
    unsigned int _pointCount;
    NSMutableArray *_steps;
    NSMutableArray *_simplifiedSteps;
    MKRouteStep *_step;
    MKRouteStep *_previousStep;
    MKRouteStep *_highlightedStep;
    unsigned int *_simplifiedPointIndexes;
    unsigned int _simplifiedPointCount;
    struct { double x1; double x2; } *_simplifiedPoints;
    NSMutableArray *_segmentBoundingPolygons;
    BOOL _displaysDistanceInMetric;
    struct { 
        struct { 
            double x; 
            double y; 
        } origin; 
        struct { 
            double width; 
            double height; 
        } size; 
    } _boundingMapRect;
    struct { 
        double latitude; 
        double longitude; 
    } _coordinate;
    struct { 
        double latitude; 
        double longitude; 
    } _preferredCoordinate;
    float _coordinateOffset;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _uniqueRange;
    int _orientation;
    int _preferredOrientation;
    NSArray *_viaWaypoints;
    NSString *_key;
}

@property(readonly) NSDictionary * dictionaryRepresentation;
@property(readonly) int mode;
@property(readonly) struct { double x1; double x2; }* points;
@property(readonly) struct { double x1; double x2; }* mapPoints;
@property(readonly) double* distancesFromStart;
@property(readonly) double* distancesFromEnd;
@property(readonly) unsigned int pointCount;
@property(readonly) struct { double x1; double x2; } startCoordinate;
@property(readonly) struct { double x1; double x2; } endCoordinate;
@property(readonly) struct { double x1; double x2; } midPoint;
@property(readonly) NSArray * steps;
@property(readonly) NSArray * simplifiedSteps;
@property(retain) MKRouteStep * step;
@property(readonly) MKRouteStep * previousStep;
@property(retain) MKRouteStep * highlightedStep;
@property(readonly) MKRouteStep * firstMiddleStep;
@property(readonly) MKRouteStep * lastMiddleStep;
@property(readonly) unsigned int* simplifiedPointIndexes;
@property(readonly) unsigned int simplifiedPointCount;
@property(readonly) struct { double x1; double x2; }* simplifiedPoints;
@property(readonly) unsigned int simplifiedSegmentCount;
@property(readonly) NSString * name;
@property(readonly) NSString * expandedDistance;
@property(readonly) int durationSeconds;
@property(readonly) NSString * expandedTravelTime;
@property(readonly) NSString * expandedTravelTimeWithTraffic;
@property(readonly) NSString * abbreviatedTravelTime;
@property(readonly) NSString * abbreviatedTravelTimeWithTraffic;
@property(readonly) MKDate * departureDate;
@property(readonly) MKDate * arrivalDate;
@property(readonly) NSString * cost;
@property(readonly) BOOL hasTraffic;
@property(readonly) BOOL isComplete;
@property(readonly) BOOL displaysDistanceInMetric;
@property(retain) NSArray * viaWaypoints;
@property(readonly) NSString * key;
@property struct { double x1; double x2; } coordinate;
@property struct { double x1; double x2; } preferredCoordinate;
@property float coordinateOffset;
@property struct _NSRange { unsigned int x1; unsigned int x2; } uniqueRange;
@property int orientation;
@property int preferredOrientation;
@property(readonly) NSString * title;
@property(readonly) NSString * subtitle;
@property(readonly) struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } boundingMapRect;

+ (id)_nameForMode:(int)arg1;

- (BOOL)isComplete;
- (struct { double x1; double x2; }*)points;
- (unsigned int)pointCount;
- (BOOL)hasTraffic;
- (id)viaWaypoints;
- (void)setViaWaypoints:(id)arg1;
- (id)steps;
- (id)cost;
- (int)durationSeconds;
- (struct { double x1; double x2; })coordinate;
- (id)step;
- (void)setStep:(id)arg1;
- (id)key;
- (id)dictionaryRepresentation;
- (void)setOrientation:(int)arg1;
- (int)mode;
- (id)title;
- (id)name;
- (int)orientation;
- (BOOL)displaysDistanceInMetric;
- (void)setPreferredOrientation:(int)arg1;
- (int)preferredOrientation;
- (struct _NSRange { unsigned int x1; unsigned int x2; })uniqueRange;
- (void)setCoordinateOffset:(float)arg1;
- (float)coordinateOffset;
- (void)setPreferredCoordinate:(struct { double x1; double x2; })arg1;
- (struct { double x1; double x2; })preferredCoordinate;
- (unsigned int)simplifiedPointCount;
- (unsigned int*)simplifiedPointIndexes;
- (id)highlightedStep;
- (id)previousStep;
- (double*)distancesFromEnd;
- (double*)distancesFromStart;
- (struct { double x1; double x2; }*)mapPoints;
- (id)boundingPolygonForSimplifiedSegmentIndex:(unsigned int)arg1;
- (struct { double x1; double x2; }*)simplifiedPoints;
- (unsigned int)simplifiedSegmentCount;
- (double)shortestMapPointDistanceToMapPoint:(struct { double x1; double x2; })arg1;
- (id)boundingPolygonForStep:(id)arg1;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })boundingRectForStep:(id)arg1;
- (struct { double x1; double x2; })midPoint;
- (struct { double x1; double x2; })endCoordinate;
- (struct { double x1; double x2; })startCoordinate;
- (id)arrivalDate;
- (id)departureDate;
- (id)abbreviatedTravelTimeWithTraffic;
- (id)expandedTravelTimeWithTraffic;
- (id)abbreviatedTravelTimeForInterval:(int)arg1;
- (id)abbreviatedTravelTime;
- (id)expandedTravelTime;
- (id)expandedDistance;
- (id)lastMiddleStep;
- (id)firstMiddleStep;
- (id)simplifiedSteps;
- (id)_initWithResponse:(id)arg1 routeIndex:(unsigned int)arg2 startInstructions:(id)arg3 endInstructions:(id)arg4;
- (void)resetStep;
- (void)setUniqueRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (BOOL)intersectsMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })boundingMapRect;
- (id)_timeForSeconds:(unsigned int)arg1 withTraffic:(BOOL)arg2 abbreviated:(BOOL)arg3;
- (void)setHighlightedStep:(id)arg1;
- (void)_createSteps;
- (BOOL)_createTransitStepsWithEndInstructions:(id)arg1 forResponse:(id)arg2;
- (id)GEORoute;
- (void)setCoordinate:(struct { double x1; double x2; })arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;

@end
