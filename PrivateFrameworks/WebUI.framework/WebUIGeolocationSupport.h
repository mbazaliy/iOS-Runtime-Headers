/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@class NSMutableDictionary;

@interface WebUIGeolocationSupport : NSObject {
    struct Deque<GeolocationChallengeData, 0> { 
        unsigned int m_start; 
        unsigned int m_end; 
        struct VectorBuffer<GeolocationChallengeData, 0> { 
            struct GeolocationChallengeData {} *m_buffer; 
            unsigned int m_capacity; 
            unsigned int m_size; 
        } m_buffer; 
    struct HashMap<WTF::RetainPtr<UIAlertView>, GeolocationChallengeData, WTF::PtrHash<WTF::RetainPtr<UIAlertView> >, WTF::HashTraits<WTF::RetainPtr<UIAlertView> >, WTF::HashTraits<GeolocationChallengeData> > { 
        struct HashTable<WTF::RetainPtr<UIAlertView>, WTF::KeyValuePair<WTF::RetainPtr<UIAlertView>, GeolocationChallengeData>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::RetainPtr<UIAlertView>, GeolocationChallengeData> >, WTF::PtrHash<WTF::RetainPtr<UIAlertView> >, WTF::HashMapValueTraits<WTF::HashTraits<WTF::RetainPtr<UIAlertView> >, WTF::HashTraits<GeolocationChallengeData> >, WTF::HashTraits<WTF::RetainPtr<UIAlertView> > > { 
            struct KeyValuePair<WTF::RetainPtr<UIAlertView>, GeolocationChallengeData> {} *m_table; 
            int m_tableSize; 
            int m_tableSizeMask; 
            int m_keyCount; 
            int m_deletedCount; 
        } m_impl; 
    } _activeChallenges;
    } _challenges;
    NSMutableDictionary *_sites;
}

+ (void)initialize;
+ (id)sharedWebUIGeolocationSupport;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_decidePolicyForGeolocationRequestFromOrigin:(id)arg1 requestingURL:(id)arg2 window:(id)arg3 listener:(id)arg4;
- (void)_executeNextChallenge;
- (int)_getChallengeCountFromHistoryForToken:(id)arg1 requestingURL:(id)arg2;
- (id)_siteFileInContainerDirectory:(id)arg1 creatingIntermediateDirectoriesIfNecessary:(BOOL)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)clearAllCaches;
- (void)clearCache;
- (void)dealloc;
- (void)decidePolicyForGeolocationRequestFromOrigin:(id)arg1 requestingURL:(id)arg2 window:(id)arg3 listener:(id)arg4;
- (id)init;
- (void)load;
- (void)save;
- (id)siteFile;
- (void)webView:(id)arg1 decidePolicyForGeolocationRequestFromOrigin:(id)arg2 frame:(id)arg3 listener:(id)arg4;

@end
