/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@class NSDictionary, NSMutableArray, NSString;

@interface ICPTPIPBonjourServiceProperties : NSObject {
    int _clientSpinLock;
    NSMutableArray *_clients;
    int _clientsSpinLock;
    id _delegate;
    NSString *_hostGUID;
    unsigned int _hostMaxConnections;
    NSString *_hostName;
    unsigned short _hostPort;
    int _hostSecuritylevel;
    struct __CFSocket { } *_hostSocket;
    struct __CFNetService { } *_publishedService;
    NSString *_serviceType;
    NSDictionary *_txtRecordsDict;
}

@property(retain) NSMutableArray * clients;
@property int clientsSpinLock;
@property id delegate;
@property(retain) NSString * hostGUID;
@property unsigned int hostMaxConnections;
@property(retain) NSString * hostName;
@property unsigned short hostPort;
@property int hostSecurityLevel;
@property struct __CFSocket { }* hostSocket;
@property struct __CFNetService { }* publishedService;
@property(retain) NSString * serviceType;
@property(retain) NSDictionary * txtRecordsDict;

- (id)clients;
- (int)clientsSpinLock;
- (void)dealloc;
- (id)delegate;
- (void)finalize;
- (id)hostGUID;
- (unsigned int)hostMaxConnections;
- (id)hostName;
- (unsigned short)hostPort;
- (int)hostSecurityLevel;
- (struct __CFSocket { }*)hostSocket;
- (struct __CFNetService { }*)publishedService;
- (id)serviceType;
- (void)setClients:(id)arg1;
- (void)setClientsSpinLock:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHostGUID:(id)arg1;
- (void)setHostMaxConnections:(unsigned int)arg1;
- (void)setHostName:(id)arg1;
- (void)setHostPort:(unsigned short)arg1;
- (void)setHostSecurityLevel:(int)arg1;
- (void)setHostSocket:(struct __CFSocket { }*)arg1;
- (void)setPublishedService:(struct __CFNetService { }*)arg1;
- (void)setServiceType:(id)arg1;
- (void)setTxtRecordsDict:(id)arg1;
- (id)txtRecordsDict;

@end