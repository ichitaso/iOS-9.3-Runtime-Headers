/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITextChecker : NSObject  {
    id _checker;
    id _reserved;
    int _usdt;
}

+ (void)unlearnWord:(id)arg1;
+ (BOOL)hasLearnedWord:(id)arg1;
+ (void)learnWord:(id)arg1;
+ (id)availableLanguages;
+ (BOOL)_forgetWord:(id)arg1 inDictionary:(id)arg2;
+ (BOOL)_isWord:(id)arg1 inDictionary:(id)arg2;
+ (void)_setWords:(id)arg1 inDictionary:(id)arg2;
+ (id)_wordsInDictionary:(id)arg1;
+ (BOOL)_learnWord:(id)arg1 inDictionary:(id)arg2;
+ (id)dictionaryInfo:(id)arg1;
+ (id)openUserDictionary:(id)arg1;
+ (struct __CFSet { }*)createDictHashTable:(BOOL)arg1;
+ (int)uniqueSpellDocumentTag;

- (BOOL)isWordInUserDictionaries:(id)arg1 caseSensitive:(BOOL)arg2;
- (id)ignoredWords;
- (void)ignoreWord:(id)arg1;
- (id)alternativesForPinyinInputString:(id)arg1;
- (id)stringForInputString:(id)arg1 language:(id)arg2;
- (id)suggestWordInLanguage:(id)arg1;
- (id)completionsForPartialWordRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 inString:(id)arg2 language:(id)arg3;
- (id)correctionForWordRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 inString:(id)arg2 language:(id)arg3;
- (struct _NSRange { unsigned int x1; unsigned int x2; })checkGrammarOfString:(id)arg1 startingAt:(int)arg2 language:(id)arg3 wrap:(BOOL)arg4 details:(id*)arg5;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_chunkAndCheckGrammarInString:(id)arg1 language:(id)arg2 usingChecker:(id)arg3 details:(id*)arg4;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_chunkAndFindMisspelledWordInString:(id)arg1 language:(id)arg2 learnedDictionaries:(id)arg3 wordCount:(int*)arg4 correction:(id*)arg5 usingChecker:(id)arg6;
- (void)_setDocumentDictionaryName:(id)arg1;
- (void)_setLanguageDictionaryName:(id)arg1;
- (int)adjustOffsetToNextWordBoundaryInString:(id)arg1 startingAt:(int)arg2;
- (id)_checker;
- (void)setIgnoredWords:(id)arg1;
- (void)initGlobals;
- (void)initUserPersonalEntries;
- (void)initUserAddressBook;
- (void)initUserDictionaries;
- (id)_nameOfDictionaryForDocumentTag:(int)arg1;
- (id)guessesForWordRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 inString:(id)arg2 language:(id)arg3;
- (struct _NSRange { unsigned int x1; unsigned int x2; })rangeOfMisspelledWordInString:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 startingAt:(int)arg3 wrap:(BOOL)arg4 language:(id)arg5;
- (id)_initWithAsynchronousLoading:(BOOL)arg1;
- (BOOL)_doneLoading;
- (struct _NSRange { unsigned int x1; unsigned int x2; })checkSpellingOfString:(id)arg1 startingAt:(int)arg2 language:(id)arg3 wrap:(BOOL)arg4 correction:(id*)arg5;
- (id)init;
- (void)dealloc;

@end
