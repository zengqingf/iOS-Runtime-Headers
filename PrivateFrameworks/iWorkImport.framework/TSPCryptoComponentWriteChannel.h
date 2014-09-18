/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class <TSPComponentWriteChannel>, NSString;

@interface TSPCryptoComponentWriteChannel : NSObject <TSPComponentWriteChannel> {
    struct { 
        unsigned int ctx[96]; 
    char *_buffer;
    } _ccHmacContext;
    struct _CCCryptor { } *_cryptor;
    <TSPComponentWriteChannel> *_writeChannel;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_writeData:(id)arg1 updateHmac:(bool)arg2;
- (void)close;
- (void)dealloc;
- (id)initWithWriteChannel:(id)arg1 encryptionKey:(id)arg2;
- (void)writeData:(id)arg1;

@end