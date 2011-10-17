/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class UIView, <MKAnnotation>, UICalloutView, NSString, UIImage;

@interface MKAnnotationViewInternal : NSObject  {
    <MKAnnotation> *annotation;
    UICalloutView *calloutView;
    UIView *leftCalloutAccessoryView;
    UIView *rightCalloutAccessoryView;
    NSString *reuseIdentifier;
    UIImage *image;
    unsigned int mapType;
    unsigned int zIndex;
    struct CGPoint { 
        float x; 
        float y; 
    } centerOffset;
    struct CGPoint { 
        float x; 
        float y; 
    } calloutOffset;
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    } mapTransform;
    unsigned int dragState;
    struct { 
        unsigned int disabled : 1; 
        unsigned int selected : 1; 
        unsigned int canShowCallout : 1; 
        unsigned int isHighlighted : 1; 
        unsigned int canDisplayDisclosureInCallout : 1; 
        unsigned int canDisplayPlacemarkInCallout : 1; 
        unsigned int canDisplayStreetViewInCallout : 1; 
        unsigned int draggable : 1; 
    } flags;
}



@end
