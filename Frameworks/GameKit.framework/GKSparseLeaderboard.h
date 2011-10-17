/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSArray, GKPlayer, GKScore, GKGame, NSError, NSMutableArray;

@interface GKSparseLeaderboard : GKLeaderboard  {
    GKGame *_game;
    GKPlayer *_player;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _totalRange;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _availableRange;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _displayedRange;
    NSArray *_availableScores;
    NSArray *_showcasedScores;
    unsigned int _maxLoaded;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _currentRange;
    GKScore *_comparePlayerScore;
    NSError *_error;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _oldRange;
    NSMutableArray *_oldScores;
}

@property(retain) GKGame * game;
@property(retain) GKPlayer * player;
@property(readonly) struct _NSRange { unsigned int x1; unsigned int x2; } totalRange;
@property(readonly) struct _NSRange { unsigned int x1; unsigned int x2; } availableRange;
@property struct _NSRange { unsigned int x1; unsigned int x2; } displayedRange;
@property(retain) NSArray * availableScores;
@property(retain) GKScore * comparePlayerScore;
@property(readonly) struct _NSRange { unsigned int x1; unsigned int x2; } loadedRange;
@property(readonly) BOOL displayLocalPlayer;
@property(readonly) BOOL displayComparePlayer;
@property(readonly) BOOL moreScoresAvailable;
@property(readonly) BOOL showcasedScoresAdjacent;
@property(retain) NSError * error;
@property struct _NSRange { unsigned int x1; unsigned int x2; } oldRange;
@property(retain) NSMutableArray * oldScores;

+ (id)unionOldScoreArray:(id)arg1 withScoreArray:(id)arg2;
+ (struct _NSRange { unsigned int x1; unsigned int x2; })rangeForScoreArray:(id)arg1;

- (struct _NSRange { unsigned int x1; unsigned int x2; })oldRange;
- (void)setDisplayedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })availableRange;
- (struct _NSRange { unsigned int x1; unsigned int x2; })totalRange;
- (id)scoresForPlayerIDs:(id)arg1;
- (id)scoreForPlayerID:(id)arg1;
- (void)purgeOldScores;
- (void)loadScoresInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withCompletionHandler:(id)arg2;
- (void)swapScores;
- (BOOL)showcasedScoresAdjacent;
- (struct _NSRange { unsigned int x1; unsigned int x2; })rangeToLoadForRank:(unsigned int)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })loadedRange;
- (id)visibleScoreAtIndex:(unsigned int)arg1;
- (BOOL)moreScoresAvailable;
- (id)availableScores;
- (unsigned int)indexOfScoreForPlayerID:(id)arg1;
- (void)setComparePlayerScore:(id)arg1;
- (void)setOldRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setOldScores:(id)arg1;
- (id)oldScores;
- (void)setAvailableScores:(id)arg1;
- (BOOL)displayComparePlayer;
- (BOOL)displayLocalPlayer;
- (id)scoreAtIndex:(unsigned int)arg1;
- (id)showcasedScoreAtShowcaseIndex:(unsigned int)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })displayedRange;
- (id)comparePlayerScore;
- (void)setError:(id)arg1;
- (id)initWithGame:(id)arg1;
- (id)game;
- (void)setGame:(id)arg1;
- (void)setPlayer:(id)arg1;
- (id)error;
- (id)player;
- (id)description;
- (void)dealloc;

@end
