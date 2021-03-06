/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class <KNDocumentRootDelegate>, KNRecordingSyncMaintainer, KNShow, KNSlidePreviewManager, KNThumbnailManager;

@interface KNDocumentRoot : TSADocumentRoot <TSKModel, TSCHCommandLifecycleDelegate, TSTResolverContainerNameProvider> {
    BOOL mIsObservingRecording;
    KNRecordingSyncMaintainer *mRecordingSyncMaintainer;
    KNShow *mShow;
    KNSlidePreviewManager *mSlidePreviewManager;
    KNThumbnailManager *mThumbnailManager;
}

@property <KNDocumentRootDelegate> * delegate;
@property(retain) KNShow * show;

+ (Class)commandControllerClass;
+ (void)localizeModelObject:(id)arg1 withTemplateBundle:(id)arg2;

- (id)UIStateForChart:(id)arg1;
- (unsigned int)applicationType;
- (void)changeShowSizeTo:(struct CGSize { float x1; float x2; })arg1;
- (id)childEnumerator;
- (id)createViewStateRoot;
- (void)dealloc;
- (void)didCommitChartCommand:(id)arg1;
- (void)documentDidLoad;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1;
- (BOOL)isMultiPageForQuickLook;
- (void)loadFromArchive:(const struct DocumentArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct DocumentArchive {} *x3; struct Reference {} *x4; struct Reference {} *x5; int x6; unsigned int x7[1]; }*)arg1 unarchiver:(id)arg2;
- (id)nameForResolverContainer:(id)arg1;
- (void)p_applicationDidBecomeActive:(id)arg1;
- (void)p_applicationWillResignActive:(id)arg1;
- (void)prepareForSavingAsTemplate;
- (void)preprocessForSaveAsTheme;
- (id)protected_defaultTextPresetOrdering;
- (id)resizeCommandForSlideNode:(id)arg1 fromOldSize:(struct CGSize { float x1; float x2; })arg2;
- (id)resolverContainerForName:(id)arg1 caseSensitive:(BOOL)arg2;
- (id)resolverContainerNameForResolver:(id)arg1;
- (id)resolverContainerNamesMatchingPrefix:(id)arg1;
- (id)resolverMatchingName:(id)arg1 contextContainerName:(id)arg2;
- (id)resolverMatchingName:(id)arg1 contextResolver:(id)arg2;
- (id)resolversMatchingPrefix:(id)arg1;
- (unsigned int)rootSearchTargetCountThroughIndex:(unsigned int)arg1;
- (void)saveToArchive:(struct DocumentArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct DocumentArchive {} *x3; struct Reference {} *x4; struct Reference {} *x5; int x6; unsigned int x7[1]; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setShow:(id)arg1;
- (void)setTheme:(id)arg1;
- (void)setThemeForTemplateImport:(id)arg1;
- (void)setUIState:(id)arg1 forChart:(id)arg2;
- (BOOL)shouldAllowDrawableInGroups:(id)arg1 forImport:(BOOL)arg2;
- (id)show;
- (id)stylesheet;
- (id)theme;
- (void)upgradeTextStylesForUnity;
- (void)willClose;
- (void)willCommitChartCommand:(id)arg1;
- (void)withRootSearchTargetAtIndex:(unsigned int)arg1 executeBlock:(id)arg2;

@end
