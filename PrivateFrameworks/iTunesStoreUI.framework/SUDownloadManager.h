/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, SSDownloadManager, SUClientInterface;

@interface SUDownloadManager : NSObject {
    NSArray *_cachedDownloads;
    SUClientInterface *_clientInterface;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SSDownloadManager *_downloadManager;
    NSMutableDictionary *_downloadsByID;
}

@property(readonly) SSDownloadManager * downloadManager;
@property(readonly) NSArray * downloads;

- (void)_finishPreflightWithCompletionBlock:(id)arg1;
- (void)_reloadDownloadManager;
- (void)_removeObject:(id)arg1 fromArray:(id*)arg2;
- (void)dealloc;
- (BOOL)deleteDownload:(id)arg1;
- (id)downloadForDownloadIdentifier:(long long)arg1;
- (id)downloadManager;
- (id)downloads;
- (id)initWithDownloadManager:(id)arg1 clientInterface:(id)arg2;
- (id)initWithDownloadManager:(id)arg1;
- (void)preflightWithCompletionBlock:(id)arg1;
- (void)reloadDownloadManager;

@end
