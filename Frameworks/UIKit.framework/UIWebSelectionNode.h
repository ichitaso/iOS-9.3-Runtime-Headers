/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIWebSelectionNode, UIWebSelection, UIWebSelectionGraph;

@interface UIWebSelectionNode : NSObject  {
    UIWebSelectionNode *_fromTopByExpanding;
    UIWebSelectionNode *_fromTopByContracting;
    UIWebSelectionNode *_fromBottomByExpanding;
    UIWebSelectionNode *_fromBottomByContracting;
    UIWebSelectionNode *_fromRightByExpanding;
    UIWebSelectionNode *_fromRightByContracting;
    UIWebSelectionNode *_fromLeftByExpanding;
    UIWebSelectionNode *_fromLeftByContracting;
    UIWebSelectionGraph *_sharedGraph;
    UIWebSelection *_selection;
    BOOL _invalid;
}

@property(retain) UIWebSelection * selection;


- (void)invalidate;
- (int)oppositeEdge:(int)arg1;
- (id)initWithSelection:(id)arg1 inGraph:(id)arg2;
- (id*)nodeByReferenceFromEdge:(int)arg1 outwards:(BOOL)arg2;
- (id)nodeByMovingEdge:(int)arg1 outwards:(BOOL)arg2;
- (void)setSelection:(id)arg1;
- (id)selection;
- (void)dealloc;

@end
