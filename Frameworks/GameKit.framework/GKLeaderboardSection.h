/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKGame, GKPlayer, GKSparseLeaderboard, GKSectionHeader, NSString, NSObject<GKLeaderboardDelegate>, NSMutableDictionary, NSArray;

@interface GKLeaderboardSection : GKInterleavedListTableSection  {
    GKGame *_game;
    GKPlayer *_player;
    NSMutableDictionary *_playerInfo;
    NSString *_categoryID;
    NSArray *_searchPlayers;
    int _timeScope;
    int _playerScope;
    BOOL _allowsFriendSelection;
    BOOL _usesUppercaseTitles;
    NSArray *_leaderboards;
    GKSparseLeaderboard *_friendLeaderboard;
    GKSparseLeaderboard *_globalLeaderboard;
    NSObject<GKLeaderboardDelegate> *_leaderboardDelegate;
    GKSectionHeader *_statusView;
}

@property(retain) GKGame * game;
@property(retain) GKPlayer * player;
@property(retain) NSMutableDictionary * playerInfo;
@property(retain) NSString * categoryID;
@property(retain) NSArray * searchPlayers;
@property BOOL allowsFriendSelection;
@property BOOL usesUppercaseTitles;
@property int timeScope;
@property int playerScope;
@property(retain) NSArray * leaderboards;
@property(retain) GKSparseLeaderboard * friendLeaderboard;
@property(retain) GKSparseLeaderboard * globalLeaderboard;
@property NSObject<GKLeaderboardDelegate> * leaderboardDelegate;
@property(retain) GKSectionHeader * statusView;


- (void)setLeaderboards:(id)arg1;
- (void)setUsesUppercaseTitles:(BOOL)arg1;
- (void)setPlayerInfo:(id)arg1;
- (void)forwardHandlePressGesture:(id)arg1 forTableView:(id)arg2;
- (id)leaderboardForCategoryID:(id)arg1 timeScope:(int)arg2 playerScope:(int)arg3;
- (id)playerInfoForPlayerID:(id)arg1;
- (id)tableView:(id)arg1 indexPathsForLeaderboardRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 inSection:(unsigned int)arg3;
- (BOOL)tableView:(id)arg1 isShowcasedScoreRow:(int)arg2;
- (float)tableView:(id)arg1 baseHeightForScoreRowAtIndexPath:(id)arg2;
- (BOOL)showPortraitForScoreAtRow:(int)arg1;
- (void)updateStatusViewInTableView:(id)arg1;
- (Class)leaderboardCellClass;
- (id)tableView:(id)arg1 scoreCellWithIdentifiers:(id)arg2 atIndexPath:(id)arg3;
- (id)tableView:(id)arg1 statusCellWithIdentifier:(id)arg2 atIndexPath:(id)arg3;
- (id)tableView:(id)arg1 headerCellWithIdentifier:(id)arg2 atIndexPath:(id)arg3;
- (BOOL)canSelectPlayer:(id)arg1;
- (Class)leaderboardCellContentsClass;
- (id)playerDisplayNameForPlayerID:(id)arg1;
- (id)playerForScore:(id)arg1;
- (id)tableView:(id)arg1 prepareContents:(id)arg2 forItem:(id)arg3 column:(int)arg4;
- (BOOL)_shouldApplyExpensiveContentsFromLeaderboard:(id)arg1 toTableView:(id)arg2;
- (id)tableView:(id)arg1 reuseIdentifiersForRow:(int)arg2;
- (id)tableView:(id)arg1 reuseIdentifierForRow:(int)arg2 column:(int)arg3;
- (Class)leaderboardClass;
- (void)loadPlayersForScores:(id)arg1 forLeaderboard:(id)arg2 withCompletionHandler:(id)arg3;
- (void)cachePlayer:(id)arg1;
- (BOOL)isPlayerCached:(id)arg1;
- (id)searchPlayers;
- (void)setSearchPlayers:(id)arg1;
- (id)tableView:(id)arg1 headerTextForLeaderboard:(id)arg2 uppercase:(BOOL)arg3;
- (BOOL)usesUppercaseTitles;
- (id)playerForPlayerID:(id)arg1;
- (id)playerInfo;
- (id)searchableLeaderboard;
- (int)sectionShowcasedScoreCountInTableView:(id)arg1 column:(int)arg2;
- (int)sectionScoreCountInTableView:(id)arg1 column:(int)arg2;
- (void)loadScoresForLeaderboard:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 withCompletionHandler:(id)arg3;
- (void)prepareLeaderboards;
- (id)leaderboards;
- (id)tableView:(id)arg1 itemAtIndex:(int)arg2 column:(int)arg3;
- (int)numberOfContentColumnsInTableView:(id)arg1;
- (int)sectionFooterRowCountInTableView:(id)arg1 column:(int)arg2;
- (int)sectionContentRowCountInTableView:(id)arg1 column:(int)arg2;
- (int)sectionHeaderRowCountInTableView:(id)arg1 column:(int)arg2;
- (int)sectionItemCountInTableView:(id)arg1 column:(int)arg2;
- (int)tableView:(id)arg1 itemIndexForIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectItem:(id)arg2;
- (void)tableView:(id)arg1 showMoreInSection:(int)arg2;
- (id)friendLeaderboard;
- (void)purgeCachedData;
- (void)setGlobalLeaderboard:(id)arg1;
- (void)setFriendLeaderboard:(id)arg1;
- (id)globalLeaderboard;
- (void)setAllowsFriendSelection:(BOOL)arg1;
- (BOOL)allowsFriendSelection;
- (id)tableView:(id)arg1 prepareContents:(id)arg2 forCell:(id)arg3 atIndexPath:(id)arg4;
- (id)tableView:(id)arg1 reuseIdentifierForRow:(int)arg2;
- (void)tableView:(id)arg1 willDrawCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)currentSectionHeaderTitleInTableView:(id)arg1;
- (void)tableView:(id)arg1 prepareExpensiveContentAtIndexPaths:(id)arg2 withCompletionHandler:(id)arg3;
- (int)tableView:(id)arg1 indexOfItemForPlayerID:(id)arg2;
- (int)sectionItemCountInTableView:(id)arg1;
- (id)sectionReuseIdentifierInTableView:(id)arg1;
- (float)sectionHeaderHeightInTableView:(id)arg1;
- (void)filterWithSearchText:(id)arg1;
- (id)tableView:(id)arg1 willSelectIndexPath:(id)arg2;
- (id)tableView:(id)arg1 prepareContents:(id)arg2 forItem:(id)arg3;
- (id)tableView:(id)arg1 itemAtIndex:(int)arg2;
- (void)refreshDataWithCompletionHandlerAndError:(id)arg1;
- (void)setLeaderboardDelegate:(id)arg1;
- (id)leaderboardDelegate;
- (id)initWithGame:(id)arg1;
- (id)statusView;
- (void)setStatusView:(id)arg1;
- (id)game;
- (void)setCategoryID:(id)arg1;
- (void)setGame:(id)arg1;
- (int)playerScope;
- (int)timeScope;
- (void)setPlayerScope:(int)arg1;
- (void)setTimeScope:(int)arg1;
- (id)categoryID;
- (void)setPlayer:(id)arg1;
- (void)didReceiveMemoryWarning:(id)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)player;
- (id)init;
- (void)dealloc;

@end
