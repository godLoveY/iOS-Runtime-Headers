/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class ISDataProvider, NSCountedSet, NSData, NSDictionary, NSHTTPURLResponse, NSMutableData, NSString, NSURL, NSURLConnection;

@interface ISURLOperation : ISOperation {
    NSData *_body;
    NSUInteger _cachePolicy;
    NSURLConnection *_connection;
    NSDictionary *_customHeaders;
    NSMutableData *_dataBuffer;
    ISDataProvider *_dataProvider;
    NSString *_method;
    NSUInteger _minimumNetworkType;
    NSInteger _networkRetryCount;
    NSDictionary *_queryStringDictionary;
    NSCountedSet *_redirectURLs;
    NSHTTPURLResponse *_response;
    NSURL *_url;
    BOOL _waitForMinimumNetworkType;
}

@property(retain) NSURL *url; /* unknown property attribute: V_url */
@property BOOL shouldWaitForMinimumNetworkType; /* unknown property attribute: V_waitForMinimumNetworkType */
@property(retain) NSHTTPURLResponse *response; /* unknown property attribute: V_response */
@property(retain) NSDictionary *queryStringDictionary; /* unknown property attribute: V_queryStringDictionary */
@property NSUInteger minimumNetworkType; /* unknown property attribute: V_minimumNetworkType */
@property(retain) NSString *method; /* unknown property attribute: V_method */
@property(retain) ISDataProvider *dataProvider; /* unknown property attribute: V_dataProvider */
@property(retain) NSDictionary *customHeaders; /* unknown property attribute: V_customHeaders */
@property NSUInteger cachePolicy; /* unknown property attribute: V_cachePolicy */
@property(retain) NSData *body; /* unknown property attribute: V_body */
@property <ISURLOperationDelegate> *delegate;

+ (id)copyUserAgent;

- (id)_copyAcceptLanguageString;
- (id)_copyQueryStringDictionaryForRedirect:(id)arg1;
- (void)_logHeadersForRequest:(id)arg1;
- (void)_networkTypeChanged:(id)arg1;
- (void)_retry;
- (void)_run;
- (void)_sendOutputToDelegate:(id)arg1;
- (void)_sendResponseToDelegate:(id)arg1;
- (void)_stopConnection;
- (void)_updateProgress;
- (BOOL)_waitForMinimumNetworkTypeWithError:(id*)arg1;
- (id)body;
- (NSUInteger)cachePolicy;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connectionDidFinishLoading:(id)arg1;
- (id)createRequest;
- (id)customHeaders;
- (id)dataProvider;
- (void)dealloc;
- (BOOL)handleRedirectFromDataProvider:(id)arg1;
- (void)handleResponse:(id)arg1;
- (id)init;
- (id)method;
- (NSUInteger)minimumNetworkType;
- (id)queryStringDictionary;
- (id)response;
- (void)run;
- (void)setBody:(id)arg1;
- (void)setCachePolicy:(NSUInteger)arg1;
- (void)setCustomHeaders:(id)arg1;
- (void)setDataProvider:(id)arg1;
- (void)setMethod:(id)arg1;
- (void)setMinimumNetworkType:(NSUInteger)arg1;
- (void)setQueryStringDictionary:(id)arg1;
- (void)setResponse:(id)arg1;
- (void)setShouldWaitForMinimumNetworkType:(BOOL)arg1;
- (void)setUrl:(id)arg1;
- (BOOL)shouldWaitForMinimumNetworkType;
- (id)url;

@end