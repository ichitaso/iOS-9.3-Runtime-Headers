/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSOperationQueue, NSMutableArray, TIWordSearchOperationGetCandidates;

@interface TIWordSearch : NSObject  {
    NSMutableArray *_candidates;
    NSOperationQueue *_operationQueue;
    TIWordSearchOperationGetCandidates *_operation;
    BOOL _autoCorrects;
    BOOL _shouldLearnAcceptedCandidate;
}

@property BOOL shouldLearnAcceptedCandidate;
@property BOOL autoCorrects;


- (void)clearLearningDictionary;
- (id)initTIWordSearch;
- (void)performAccept:(id)arg1 isPartial:(BOOL)arg2;
- (void)lastAcceptedCandidateCorrected;
- (unsigned int)getCandidateReadingLength:(id)arg1;
- (void)resetPreviousWord;
- (void)performOperationAsync:(id)arg1;
- (void)completeOperationsInQueue;
- (id)createGeometryModelDataFromZephyr:(struct TIInputManagerZephyr { int (**x1)(); struct StaticDictionaryAlphabet { int (**x_2_1_1)(); struct WordTrie { struct ReadOnlyDataFile {} *x_2_2_1; struct ReadOnlyDataFile {} *x_2_2_2; unsigned int x_2_2_3; struct RefPtr<KB::WordTrieNode> { struct WordTrieNode {} *x_4_3_1; } x_2_2_4; struct WordTrieSearch { struct Vector<WTF::RefPtr<KB::WordTrieNode>,0ul> { unsigned int x_1_4_1; struct VectorBuffer<WTF::RefPtr<KB::WordTrieNode>,0ul> { struct RefPtr<KB::WordTrieNode> {} *x_2_5_1; unsigned int x_2_5_2; } x_1_4_2; } x_5_3_1; int x_5_3_2; struct String { unsigned short x_3_4_1; unsigned short x_3_4_2; unsigned short x_3_4_3; unsigned short x_3_4_4; unsigned char x_3_4_5; char *x_3_4_6; BOOL x_3_4_7[16]; } x_5_3_3; struct String { unsigned short x_4_4_1; unsigned short x_4_4_2; unsigned short x_4_4_3; unsigned short x_4_4_4; unsigned char x_4_4_5; char *x_4_4_6; BOOL x_4_4_7[16]; } x_5_3_4; } x_2_2_5; struct WordTrieSearch { struct Vector<WTF::RefPtr<KB::WordTrieNode>,0ul> { unsigned int x_1_4_1; struct VectorBuffer<WTF::RefPtr<KB::WordTrieNode>,0ul> { struct RefPtr<KB::WordTrieNode> {} *x_2_5_1; unsigned int x_2_5_2; } x_1_4_2; } x_6_3_1; int x_6_3_2; struct String { unsigned short x_3_4_1; unsigned short x_3_4_2; unsigned short x_3_4_3; unsigned short x_3_4_4; unsigned char x_3_4_5; char *x_3_4_6; BOOL x_3_4_7[16]; } x_6_3_3; struct String { unsigned short x_4_4_1; unsigned short x_4_4_2; unsigned short x_4_4_3; unsigned short x_4_4_4; unsigned char x_4_4_5; char *x_4_4_6; BOOL x_4_4_7[16]; } x_6_3_4; } x_2_2_6; boolx_2_2_7; boolx_2_2_8; struct TrieArrayCacheSet<KB::TrieArrayCache<KB::PackedTrieSibling, const char*>,const char*> { struct TrieArrayCache<KB::PackedTrieSibling,const char*> { char *x_1_4_1; int x_1_4_2; unsigned char x_1_4_3[256]; struct PackedTrieSibling { union { unsigned int x_1_6_1; struct $_1046 { unsigned int x_2_7_1 : 24; unsigned int x_2_7_2 : 2; unsigned int x_2_7_3 : 2; unsigned int x_2_7_4 : 1; unsigned int x_2_7_5 : 1; unsigned int x_2_7_6 : 1; unsigned int x_2_7_7 : 1; } x_1_6_2; struct $_1047 { unsigned int x_3_7_1 : 8; unsigned int x_3_7_2 : 8; unsigned int x_3_7_3 : 8; unsigned int x_3_7_4 : 8; } x_1_6_3; } x_4_5_1; union { unsigned int x_2_6_1; struct $_1049 { unsigned int x_2_7_1 : 23; unsigned int x_2_7_2 : 1; unsigned int x_2_7_3 : 8; } x_2_6_2; struct $_1050 { unsigned int x_3_7_1 : 8; unsigned int x_3_7_2 : 8; unsigned int x_3_7_3 : 8; unsigned int x_3_7_4 : 8; } x_2_6_3; } x_4_5_2; unsigned char x_4_5_3[4]; } x_1_4_4[256]; unsigned int x_1_4_5; char *x_1_4_6; } x_9_3_1; struct TrieArrayCache<KB::PackedTrieSibling,const char*> { char *x_2_4_1; int x_2_4_2; unsigned char x_2_4_3[256]; struct PackedTrieSibling { union { unsigned int x_1_6_1; struct $_1046 { unsigned int x_2_7_1 : 24; unsigned int x_2_7_2 : 2; unsigned int x_2_7_3 : 2; unsigned int x_2_7_4 : 1; unsigned int x_2_7_5 : 1; unsigned int x_2_7_6 : 1; unsigned int x_2_7_7 : 1; } x_1_6_2; struct $_1047 { unsigned int x_3_7_1 : 8; unsigned int x_3_7_2 : 8; unsigned int x_3_7_3 : 8; unsigned int x_3_7_4 : 8; } x_1_6_3; } x_4_5_1; union { unsigned int x_2_6_1; struct $_1049 { unsigned int x_2_7_1 : 23; unsigned int x_2_7_2 : 1; unsigned int x_2_7_3 : 8; } x_2_6_2; struct $_1050 { unsigned int x_3_7_1 : 8; unsigned int x_3_7_2 : 8; unsigned int x_3_7_3 : 8; unsigned int x_3_7_4 : 8; } x_2_6_3; } x_4_5_2; unsigned char x_4_5_3[4]; } x_2_4_4[256]; unsigned int x_2_4_5; char *x_2_4_6; } x_9_3_2; } x_2_2_9; unsigned int x_2_2_10; unsigned int x_2_2_11; unsigned int x_2_2_12; float x_2_2_13; struct SortKeyByteConverter { int (**x_14_3_1)(); unsigned int x_14_3_2[256]; boolx_14_3_3[256]; struct Hashmap<KB::String,unsigned int> { unsigned int x_4_4_1; unsigned int x_4_4_2; unsigned int x_4_4_3; unsigned int x_4_4_4; unsigned int x_4_4_5; boolx_4_4_6; struct HashTraits<KB::String> { } x_4_4_7; struct Bucket<KB::String,unsigned int> {} *x_4_4_8; struct Bucket<KB::String,unsigned int> {} *x_4_4_9; } x_14_3_4; } x_2_2_14; } x_2_1_2; int x_2_1_3; } x2; struct Vector<KB::Input> { unsigned int x_3_1_1; unsigned int x_3_1_2; struct Input {} *x_3_1_3; } x3; struct String { unsigned short x_4_1_1; unsigned short x_4_1_2; unsigned short x_4_1_3; unsigned short x_4_1_4; unsigned char x_4_1_5; char *x_4_1_6; BOOL x_4_1_7[16]; } x4; struct String { unsigned short x_5_1_1; unsigned short x_5_1_2; unsigned short x_5_1_3; unsigned short x_5_1_4; unsigned char x_5_1_5; char *x_5_1_6; BOOL x_5_1_7[16]; } x5; struct Vector<KB::String> { unsigned int x_6_1_1; unsigned int x_6_1_2; struct String {} *x_6_1_3; } x6; unsigned int x7; unsigned int x8; struct Hashmap<KB::String,KB::Word> { unsigned int x_9_1_1; unsigned int x_9_1_2; unsigned int x_9_1_3; unsigned int x_9_1_4; unsigned int x_9_1_5; boolx_9_1_6; struct HashTraits<KB::String> { } x_9_1_7; struct Bucket<KB::String,KB::Word> {} *x_9_1_8; struct Bucket<KB::String,KB::Word> {} *x_9_1_9; } x9; boolx10; boolx11; boolx12; boolx13; boolx14; boolx15; int x16; struct __CFString {} *x17; struct __CFLocale {} *x18; struct String { unsigned short x_19_1_1; unsigned short x_19_1_2; unsigned short x_19_1_3; unsigned short x_19_1_4; unsigned char x_19_1_5; char *x_19_1_6; BOOL x_19_1_7[16]; } x19; struct String { unsigned short x_20_1_1; unsigned short x_20_1_2; unsigned short x_20_1_3; unsigned short x_20_1_4; unsigned char x_20_1_5; char *x_20_1_6; BOOL x_20_1_7[16]; } x20; struct DynamicDictionary { struct RefPtr<KB::DynamicDictionaryImpl> { struct DynamicDictionaryImpl {} *x_1_2_1; } x_21_1_1; int x_21_1_2; } x21; struct WordinessStore { struct ReadOnlyDataFile {} *x_22_1_1; } x22; struct StrokeBuildManager {} *x23; struct SortedKeyLayout { unsigned int x_24_1_1; unsigned int x_24_1_2; struct KeyArea {} *x_24_1_3; struct KeyArea {} *x_24_1_4[13]; int x_24_1_5; int x_24_1_6; float x_24_1_7; struct CGPoint { float x_8_2_1; float x_8_2_2; } x_24_1_8; struct KeyCharClassifier { unsigned short x_9_2_1; } x_24_1_9; float x_24_1_10; float x_24_1_11; float x_24_1_12; float x_24_1_13; float x_24_1_14; float x_24_1_15; float x_24_1_16; float x_24_1_17; float x_24_1_18; float x_24_1_19; float x_24_1_20; float x_24_1_21; float x_24_1_22; } x24; struct TIKeyLayout {} *x25; struct String { unsigned short x_26_1_1; unsigned short x_26_1_2; unsigned short x_26_1_3; unsigned short x_26_1_4; unsigned char x_26_1_5; char *x_26_1_6; BOOL x_26_1_7[16]; } x26; boolx27; struct LayoutDictionaryContext { struct SortedKeyLayout {} *x_28_1_1; struct WordTrie {} *x_28_1_2; struct DynamicDictionary {} *x_28_1_3; struct Vector<ZT::PriorTouchKeyVectors> { unsigned int x_4_2_1; unsigned int x_4_2_2; struct PriorTouchKeyVectors {} *x_4_2_3; } x_28_1_4; struct Vector<KB::DictionaryCursors> { unsigned int x_5_2_1; unsigned int x_5_2_2; struct DictionaryCursors {} *x_5_2_3; } x_28_1_5; struct SortKeyByteConverter {} *x_28_1_6; unsigned int x_28_1_7; boolx_28_1_8; boolx_28_1_9; struct WordinessStore {} *x_28_1_10; } x28; struct Hashmap<KB::String,KB::FPoint> { unsigned int x_29_1_1; unsigned int x_29_1_2; unsigned int x_29_1_3; unsigned int x_29_1_4; unsigned int x_29_1_5; boolx_29_1_6; struct HashTraits<KB::String> { } x_29_1_7; struct Bucket<KB::String,KB::FPoint> {} *x_29_1_8; struct Bucket<KB::String,KB::FPoint> {} *x_29_1_9; } x29; int x30; boolx31; struct String { unsigned short x_32_1_1; unsigned short x_32_1_2; unsigned short x_32_1_3; unsigned short x_32_1_4; unsigned char x_32_1_5; char *x_32_1_6; BOOL x_32_1_7[16]; } x32; struct Vector<KB::String> { unsigned int x_33_1_1; unsigned int x_33_1_2; struct String {} *x_33_1_3; } x33; id x34; }*)arg1;
- (float)getLoglikelihoodFromZephyr:(struct TIInputManagerZephyr { int (**x1)(); struct StaticDictionaryAlphabet { int (**x_2_1_1)(); struct WordTrie { struct ReadOnlyDataFile {} *x_2_2_1; struct ReadOnlyDataFile {} *x_2_2_2; unsigned int x_2_2_3; struct RefPtr<KB::WordTrieNode> { struct WordTrieNode {} *x_4_3_1; } x_2_2_4; struct WordTrieSearch { struct Vector<WTF::RefPtr<KB::WordTrieNode>,0ul> { unsigned int x_1_4_1; struct VectorBuffer<WTF::RefPtr<KB::WordTrieNode>,0ul> { struct RefPtr<KB::WordTrieNode> {} *x_2_5_1; unsigned int x_2_5_2; } x_1_4_2; } x_5_3_1; int x_5_3_2; struct String { unsigned short x_3_4_1; unsigned short x_3_4_2; unsigned short x_3_4_3; unsigned short x_3_4_4; unsigned char x_3_4_5; char *x_3_4_6; BOOL x_3_4_7[16]; } x_5_3_3; struct String { unsigned short x_4_4_1; unsigned short x_4_4_2; unsigned short x_4_4_3; unsigned short x_4_4_4; unsigned char x_4_4_5; char *x_4_4_6; BOOL x_4_4_7[16]; } x_5_3_4; } x_2_2_5; struct WordTrieSearch { struct Vector<WTF::RefPtr<KB::WordTrieNode>,0ul> { unsigned int x_1_4_1; struct VectorBuffer<WTF::RefPtr<KB::WordTrieNode>,0ul> { struct RefPtr<KB::WordTrieNode> {} *x_2_5_1; unsigned int x_2_5_2; } x_1_4_2; } x_6_3_1; int x_6_3_2; struct String { unsigned short x_3_4_1; unsigned short x_3_4_2; unsigned short x_3_4_3; unsigned short x_3_4_4; unsigned char x_3_4_5; char *x_3_4_6; BOOL x_3_4_7[16]; } x_6_3_3; struct String { unsigned short x_4_4_1; unsigned short x_4_4_2; unsigned short x_4_4_3; unsigned short x_4_4_4; unsigned char x_4_4_5; char *x_4_4_6; BOOL x_4_4_7[16]; } x_6_3_4; } x_2_2_6; boolx_2_2_7; boolx_2_2_8; struct TrieArrayCacheSet<KB::TrieArrayCache<KB::PackedTrieSibling, const char*>,const char*> { struct TrieArrayCache<KB::PackedTrieSibling,const char*> { char *x_1_4_1; int x_1_4_2; unsigned char x_1_4_3[256]; struct PackedTrieSibling { union { unsigned int x_1_6_1; struct $_1046 { unsigned int x_2_7_1 : 24; unsigned int x_2_7_2 : 2; unsigned int x_2_7_3 : 2; unsigned int x_2_7_4 : 1; unsigned int x_2_7_5 : 1; unsigned int x_2_7_6 : 1; unsigned int x_2_7_7 : 1; } x_1_6_2; struct $_1047 { unsigned int x_3_7_1 : 8; unsigned int x_3_7_2 : 8; unsigned int x_3_7_3 : 8; unsigned int x_3_7_4 : 8; } x_1_6_3; } x_4_5_1; union { unsigned int x_2_6_1; struct $_1049 { unsigned int x_2_7_1 : 23; unsigned int x_2_7_2 : 1; unsigned int x_2_7_3 : 8; } x_2_6_2; struct $_1050 { unsigned int x_3_7_1 : 8; unsigned int x_3_7_2 : 8; unsigned int x_3_7_3 : 8; unsigned int x_3_7_4 : 8; } x_2_6_3; } x_4_5_2; unsigned char x_4_5_3[4]; } x_1_4_4[256]; unsigned int x_1_4_5; char *x_1_4_6; } x_9_3_1; struct TrieArrayCache<KB::PackedTrieSibling,const char*> { char *x_2_4_1; int x_2_4_2; unsigned char x_2_4_3[256]; struct PackedTrieSibling { union { unsigned int x_1_6_1; struct $_1046 { unsigned int x_2_7_1 : 24; unsigned int x_2_7_2 : 2; unsigned int x_2_7_3 : 2; unsigned int x_2_7_4 : 1; unsigned int x_2_7_5 : 1; unsigned int x_2_7_6 : 1; unsigned int x_2_7_7 : 1; } x_1_6_2; struct $_1047 { unsigned int x_3_7_1 : 8; unsigned int x_3_7_2 : 8; unsigned int x_3_7_3 : 8; unsigned int x_3_7_4 : 8; } x_1_6_3; } x_4_5_1; union { unsigned int x_2_6_1; struct $_1049 { unsigned int x_2_7_1 : 23; unsigned int x_2_7_2 : 1; unsigned int x_2_7_3 : 8; } x_2_6_2; struct $_1050 { unsigned int x_3_7_1 : 8; unsigned int x_3_7_2 : 8; unsigned int x_3_7_3 : 8; unsigned int x_3_7_4 : 8; } x_2_6_3; } x_4_5_2; unsigned char x_4_5_3[4]; } x_2_4_4[256]; unsigned int x_2_4_5; char *x_2_4_6; } x_9_3_2; } x_2_2_9; unsigned int x_2_2_10; unsigned int x_2_2_11; unsigned int x_2_2_12; float x_2_2_13; struct SortKeyByteConverter { int (**x_14_3_1)(); unsigned int x_14_3_2[256]; boolx_14_3_3[256]; struct Hashmap<KB::String,unsigned int> { unsigned int x_4_4_1; unsigned int x_4_4_2; unsigned int x_4_4_3; unsigned int x_4_4_4; unsigned int x_4_4_5; boolx_4_4_6; struct HashTraits<KB::String> { } x_4_4_7; struct Bucket<KB::String,unsigned int> {} *x_4_4_8; struct Bucket<KB::String,unsigned int> {} *x_4_4_9; } x_14_3_4; } x_2_2_14; } x_2_1_2; int x_2_1_3; } x2; struct Vector<KB::Input> { unsigned int x_3_1_1; unsigned int x_3_1_2; struct Input {} *x_3_1_3; } x3; struct String { unsigned short x_4_1_1; unsigned short x_4_1_2; unsigned short x_4_1_3; unsigned short x_4_1_4; unsigned char x_4_1_5; char *x_4_1_6; BOOL x_4_1_7[16]; } x4; struct String { unsigned short x_5_1_1; unsigned short x_5_1_2; unsigned short x_5_1_3; unsigned short x_5_1_4; unsigned char x_5_1_5; char *x_5_1_6; BOOL x_5_1_7[16]; } x5; struct Vector<KB::String> { unsigned int x_6_1_1; unsigned int x_6_1_2; struct String {} *x_6_1_3; } x6; unsigned int x7; unsigned int x8; struct Hashmap<KB::String,KB::Word> { unsigned int x_9_1_1; unsigned int x_9_1_2; unsigned int x_9_1_3; unsigned int x_9_1_4; unsigned int x_9_1_5; boolx_9_1_6; struct HashTraits<KB::String> { } x_9_1_7; struct Bucket<KB::String,KB::Word> {} *x_9_1_8; struct Bucket<KB::String,KB::Word> {} *x_9_1_9; } x9; boolx10; boolx11; boolx12; boolx13; boolx14; boolx15; int x16; struct __CFString {} *x17; struct __CFLocale {} *x18; struct String { unsigned short x_19_1_1; unsigned short x_19_1_2; unsigned short x_19_1_3; unsigned short x_19_1_4; unsigned char x_19_1_5; char *x_19_1_6; BOOL x_19_1_7[16]; } x19; struct String { unsigned short x_20_1_1; unsigned short x_20_1_2; unsigned short x_20_1_3; unsigned short x_20_1_4; unsigned char x_20_1_5; char *x_20_1_6; BOOL x_20_1_7[16]; } x20; struct DynamicDictionary { struct RefPtr<KB::DynamicDictionaryImpl> { struct DynamicDictionaryImpl {} *x_1_2_1; } x_21_1_1; int x_21_1_2; } x21; struct WordinessStore { struct ReadOnlyDataFile {} *x_22_1_1; } x22; struct StrokeBuildManager {} *x23; struct SortedKeyLayout { unsigned int x_24_1_1; unsigned int x_24_1_2; struct KeyArea {} *x_24_1_3; struct KeyArea {} *x_24_1_4[13]; int x_24_1_5; int x_24_1_6; float x_24_1_7; struct CGPoint { float x_8_2_1; float x_8_2_2; } x_24_1_8; struct KeyCharClassifier { unsigned short x_9_2_1; } x_24_1_9; float x_24_1_10; float x_24_1_11; float x_24_1_12; float x_24_1_13; float x_24_1_14; float x_24_1_15; float x_24_1_16; float x_24_1_17; float x_24_1_18; float x_24_1_19; float x_24_1_20; float x_24_1_21; float x_24_1_22; } x24; struct TIKeyLayout {} *x25; struct String { unsigned short x_26_1_1; unsigned short x_26_1_2; unsigned short x_26_1_3; unsigned short x_26_1_4; unsigned char x_26_1_5; char *x_26_1_6; BOOL x_26_1_7[16]; } x26; boolx27; struct LayoutDictionaryContext { struct SortedKeyLayout {} *x_28_1_1; struct WordTrie {} *x_28_1_2; struct DynamicDictionary {} *x_28_1_3; struct Vector<ZT::PriorTouchKeyVectors> { unsigned int x_4_2_1; unsigned int x_4_2_2; struct PriorTouchKeyVectors {} *x_4_2_3; } x_28_1_4; struct Vector<KB::DictionaryCursors> { unsigned int x_5_2_1; unsigned int x_5_2_2; struct DictionaryCursors {} *x_5_2_3; } x_28_1_5; struct SortKeyByteConverter {} *x_28_1_6; unsigned int x_28_1_7; boolx_28_1_8; boolx_28_1_9; struct WordinessStore {} *x_28_1_10; } x28; struct Hashmap<KB::String,KB::FPoint> { unsigned int x_29_1_1; unsigned int x_29_1_2; unsigned int x_29_1_3; unsigned int x_29_1_4; unsigned int x_29_1_5; boolx_29_1_6; struct HashTraits<KB::String> { } x_29_1_7; struct Bucket<KB::String,KB::FPoint> {} *x_29_1_8; struct Bucket<KB::String,KB::FPoint> {} *x_29_1_9; } x29; int x30; boolx31; struct String { unsigned short x_32_1_1; unsigned short x_32_1_2; unsigned short x_32_1_3; unsigned short x_32_1_4; unsigned char x_32_1_5; char *x_32_1_6; BOOL x_32_1_7[16]; } x32; struct Vector<KB::String> { unsigned int x_33_1_1; unsigned int x_33_1_2; struct String {} *x_33_1_3; } x33; id x34; }*)arg1 keys:(unsigned short*)arg2 length:(int)arg3 touch_index:(int)arg4 totalCount:(int)arg5;
- (BOOL)shouldLearnAcceptedCandidate;
- (void)setShouldLearnAcceptedCandidate:(BOOL)arg1;
- (BOOL)autoCorrects;
- (void)cancel;
- (BOOL)isCancelled;
- (void)_getCandidatesOnThread:(id)arg1;
- (void)acceptCandidate:(id)arg1 isPartial:(BOOL)arg2;
- (void)cancelLastAcceptedCandidate;
- (id)getCandidates:(id)arg1;
- (void)setAutoCorrects:(BOOL)arg1;
- (void)dealloc;

@end
