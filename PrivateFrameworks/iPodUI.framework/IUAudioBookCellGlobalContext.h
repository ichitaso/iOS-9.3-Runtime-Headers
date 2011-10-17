/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@interface IUAudioBookCellGlobalContext : IUDetailedCellGlobalContext  {
    unsigned int _numberOfParts;
    unsigned int _showAuthors : 1;
    unsigned int _showChapterIndices : 1;
    unsigned int _usePartIndicesForTitle : 1;
}

@property unsigned int numberOfParts;
@property BOOL showAuthors;
@property BOOL showChapterIndices;
@property BOOL usePartIndicesForTitle;


- (BOOL)showChapterIndices;
- (unsigned int)numberOfParts;
- (BOOL)usePartIndicesForTitle;
- (void)setUsePartIndicesForTitle:(BOOL)arg1;
- (void)setShowChapterIndices:(BOOL)arg1;
- (void)setNumberOfParts:(unsigned int)arg1;
- (void)setShowAuthors:(BOOL)arg1;
- (BOOL)showAuthors;

@end
