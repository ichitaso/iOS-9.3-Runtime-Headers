/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class UITextField;

@interface GKTableSectionTextField : NSObject <GKTableSection> {
    UITextField *_textField;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _backgroundInsets;
    float _headerHeight;
}

@property(retain) UITextField * textField;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } backgroundInsets;
@property float headerHeight;
@property(getter=isLoading) BOOL loading;


- (int)tableView:(id)arg1 numberOfColumnsForRow:(int)arg2;
- (id)tableView:(id)arg1 prepareContents:(id)arg2 forCell:(id)arg3 atIndexPath:(id)arg4;
- (id)tableView:(id)arg1 reuseIdentifierForRow:(int)arg2;
- (int)sectionRowCountInTableView:(id)arg1;
- (float)sectionHeaderHeightInTableView:(id)arg1;
- (void)setBackgroundInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })backgroundInsets;
- (void)setTextField:(id)arg1;
- (void)setHeaderHeight:(float)arg1;
- (float)headerHeight;
- (id)textField;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)init;
- (void)dealloc;

@end
