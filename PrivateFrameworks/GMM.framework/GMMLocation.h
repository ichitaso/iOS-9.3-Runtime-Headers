/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSString;

@interface GMMLocation : NSObject  {
    int _responseCode;
    struct MapPoint { int x1; int x2; int x3; int x4; } *_point;
    int _accuracy;
    int _confidence;
    NSString *_geo_string;
}

@property int responseCode;
@property struct MapPoint { int x1; int x2; int x3; int x4; }* point;
@property int accuracy;
@property int confidence;
@property(retain) NSString * geo_string;


- (int)responseCode;
- (id)geo_string;
- (int)accuracy;
- (void)setGeo_string:(id)arg1;
- (void)setConfidence:(int)arg1;
- (void)setAccuracy:(int)arg1;
- (void)setResponseCode:(int)arg1;
- (void)setPoint:(struct MapPoint { int x1; int x2; int x3; int x4; }*)arg1;
- (struct MapPoint { int x1; int x2; int x3; int x4; }*)point;
- (void)dealloc;
- (int)confidence;

@end
