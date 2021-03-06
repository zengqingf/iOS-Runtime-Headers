/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactHeaderView : UIView <CNContactPhotoViewDelegate> {
    BOOL _alwaysShowsMonogram;
    NSArray *_contacts;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _contentMargins;
    <CNPresenterDelegate> *_delegate;
    NSMutableArray *_headerConstraints;
    <CNContactHeaderViewDelegate> *_headerDelegate;
    NSDictionary *_nameTextAttributes;
    BOOL _needsReload;
    CNContactPhotoView *_photoView;
    BOOL _shouldUseExpandedContentStyle;
}

@property (nonatomic) BOOL alwaysShowsMonogram;
@property (nonatomic, retain) NSArray *contacts;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } contentMargins;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNPresenterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSMutableArray *headerConstraints;
@property (nonatomic) <CNContactHeaderViewDelegate> *headerDelegate;
@property (nonatomic, copy) NSDictionary *nameTextAttributes;
@property (nonatomic, readonly) CNContactPhotoView *photoView;
@property (nonatomic) BOOL shouldUseExpandedContentStyle;
@property (readonly) Class superclass;

+ (id)descriptorForRequiredKeys;
+ (BOOL)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (BOOL)alwaysShowsMonogram;
- (BOOL)canBecomeFirstResponder;
- (id)contactStoreForPhotoView:(id)arg1;
- (id)contacts;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentMargins;
- (void)dealloc;
- (id)delegate;
- (id)headerConstraints;
- (id)headerDelegate;
- (id)initWithContact:(id)arg1 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 monogrammerStyle:(int)arg3;
- (id)nameTextAttributes;
- (id)photoView;
- (void)photoViewDidUpdate:(id)arg1;
- (void)reloadDataIfNeeded;
- (void)reloadDataPreservingChanges:(BOOL)arg1;
- (void)saveContactPhoto;
- (void)setAlwaysShowsMonogram:(BOOL)arg1;
- (void)setContacts:(id)arg1;
- (void)setContentMargins:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setHeaderConstraints:(id)arg1;
- (void)setHeaderDelegate:(id)arg1;
- (void)setNameTextAttributes:(id)arg1;
- (void)setNeedsReload;
- (void)setShouldUseExpandedContentStyle:(BOOL)arg1;
- (BOOL)shouldOffsetPhotoView;
- (BOOL)shouldUseExpandedContentStyle;
- (struct CGSize { float x1; float x2; })systemLayoutSizeFittingSize:(struct CGSize { float x1; float x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)updateConstraints;
- (void)updateFontSizes;
- (void)updateWithContacts:(id)arg1;
- (void)updateWithNewContact:(id)arg1;
- (id)viewControllerForPhotoView:(id)arg1;

@end
