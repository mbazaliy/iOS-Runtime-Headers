/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@class NSString, SBKTransaction;

@interface SBKStoreError : NSError {
    SBKTransaction *_transaction;
}

@property(readonly) NSString * currentStoreAccountName;
@property(readonly) BOOL isAccountsChangedError;
@property(readonly) BOOL isAuthenticationError;
@property(readonly) BOOL isClampError;
@property(readonly) BOOL isRecoverableError;
@property(readonly) BOOL isTransactionCancelledError;
@property(readonly) BOOL isTransactionMissingInformationError;
@property(readonly) NSString * previousStoreAccountName;
@property(readonly) double retrySeconds;
@property(retain) SBKTransaction * transaction;

+ (id)delegateCancelledErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;
+ (id)keyValueStoreDisabledErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;
+ (id)keyValueStoreErrorWithCode:(int)arg1 localizedDescription:(id)arg2 transaction:(id)arg3 underlyingError:(id)arg4;
+ (id)killSwitchErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;
+ (id)networkingBlockedErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;
+ (id)noStoreAccountErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;
+ (id)serverClampErrorWithTransaction:(id)arg1 retrySeconds:(double)arg2 underlyingError:(id)arg3;
+ (id)storeAccountMismatchErrorWithPreviousStoreAccountName:(id)arg1 currentStoreAccountName:(id)arg2 transaction:(id)arg3 underlyingError:(id)arg4;
+ (id)storeAccountSessionExpiredWithTransaction:(id)arg1 underlyingError:(id)arg2;
+ (id)storeGenericErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;
+ (id)storeLoggedOutErrorWithPreviousStoreAccountName:(id)arg1 transaction:(id)arg2 underlyingError:(id)arg3;
+ (id)storeValidationErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;
+ (id)transactionCancelledErrorWithTransaction:(id)arg1 code:(int)arg2 underlyingError:(id)arg3;
+ (id)transactionCancelledErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;
+ (id)transactionMissingDomainErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;
+ (id)transactionMissingURLErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;
+ (id)transactionTimeoutErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;
+ (id)unknownErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;
+ (id)userCancelledSignInErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;
+ (id)userClampErrorWithTransaction:(id)arg1 retrySeconds:(double)arg2 underlyingError:(id)arg3;
+ (id)userEnteredWrongCredentialsErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentStoreAccountName;
- (id)description;
- (BOOL)isAccountsChangedError;
- (BOOL)isAuthenticationError;
- (BOOL)isClampError;
- (BOOL)isRecoverableError;
- (BOOL)isTransactionCancelledError;
- (BOOL)isTransactionMissingInformationError;
- (id)previousStoreAccountName;
- (double)retrySeconds;
- (void)setTransaction:(id)arg1;
- (id)transaction;

@end
