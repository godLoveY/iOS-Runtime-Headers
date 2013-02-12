/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSString;

@interface DALocalDBHelper : NSObject {
    NSInteger _abConnectionCount;
    void *_abDB;
    NSInteger _calConnectionCount;
    struct CalDatabase { } *_calDB;
    id _calUnitTestCallbackObject;
    SEL _calUnitTestCallbackSelector;
    NSString *_fakedOutABDBDir;
    NSString *_fakedOutCalDBDir;
    NSInteger _lastSavedABSequenceNumber;
}

+ (id)sharedInstanceForAccountType:(id)arg1 creatingClass:(Class)arg2;

- (BOOL)abCloseDBAndSave:(BOOL)arg1;
- (id)abConstraintPlistPath;
- (void*)abDB;
- (NSInteger)abLastSavedSequenceNumber;
- (void)abOpenDB;
- (BOOL)abSaveDB;
- (void)abSetTestABDBDir:(id)arg1;
- (id)abTestABDBDir;
- (BOOL)calCloseDBAndSave:(BOOL)arg1;
- (struct CalDatabase { }*)calDB;
- (void)calOpenDB;
- (BOOL)calSaveDB;
- (void)calSetTestCalDBDir:(id)arg1;
- (id)calTestCalDBDir;
- (void)calUnitTestsSetCallbackObjectForSave:(id)arg1 callbackSelector:(SEL)arg2;

@end