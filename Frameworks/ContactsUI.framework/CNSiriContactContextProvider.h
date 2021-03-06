/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNSiriContactContextProvider : NSObject <AFContextProvider> {
    CNContact *_contact;
    CNContactStore *_store;
}

- (void).cxx_destruct;
- (void)_removeContextProviderOnMainThread;
- (BOOL)allowContextProvider:(id)arg1;
- (id)contextManager;
- (void)dealloc;
- (id)getCurrentContext;
- (id)initWithContact:(id)arg1 store:(id)arg2;
- (void)setEnabled:(BOOL)arg1;

@end
