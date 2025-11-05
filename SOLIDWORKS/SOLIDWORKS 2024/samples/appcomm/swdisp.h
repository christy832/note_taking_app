// Machine generated IDispatch wrapper class(es) created with ClassWizard
/////////////////////////////////////////////////////////////////////////////
// ISldWorks wrapper class

class ISldWorks : public COleDispatchDriver
{
public:
	ISldWorks() {}		// Calls COleDispatchDriver default constructor
	ISldWorks(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISldWorks(const ISldWorks& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetActiveDoc();
	LPDISPATCH GetIActiveDoc();
	LPDISPATCH OpenDoc(LPCTSTR Name, long Type);
	LPDISPATCH IOpenDoc(LPCTSTR Name, long Type);
	LPDISPATCH ActivateDoc(LPCTSTR Name);
	LPDISPATCH IActivateDoc(LPCTSTR Name);
	void SendMsgToUser(LPCTSTR Message);
	LPDISPATCH Frame();
	LPDISPATCH IFrameObject();
	void ExitApp();
	void CloseDoc(LPCTSTR Name);
	LPDISPATCH NewPart();
	LPDISPATCH INewPart();
	LPDISPATCH NewAssembly();
	LPDISPATCH INewAssembly();
	LPDISPATCH NewDrawing(long TemplateToUse);
	LPDISPATCH INewDrawing(long TemplateToUse);
	long DateCode();
	CString RevisionNumber();
	BOOL LoadFile(LPCTSTR FileName);
	BOOL AddFileOpenItem(LPCTSTR CallbackFcnAndModule, LPCTSTR Description);
	BOOL AddFileSaveAsItem(LPCTSTR CallbackFcnAndModule, LPCTSTR Description, long Type);
	void PreSelectDwgTemplateSize(long TemplateToUse, LPCTSTR TemplateName);
	void DocumentVisible(BOOL Visible, long Type);
	LPDISPATCH DefineAttribute(LPCTSTR Name);
	LPDISPATCH IDefineAttribute(LPCTSTR Name);
	BOOL GetVisible();
	void SetVisible(BOOL bNewValue);
	BOOL GetUserControl();
	void SetUserControl(BOOL bNewValue);
	void DisplayStatusBar(BOOL OnOff);
	void CreateNewWindow();
	void ArrangeIcons();
	void ArrangeWindows(long Style);
	void QuitDoc(LPCTSTR Name);
	LPDISPATCH GetModeler();
	LPDISPATCH IGetModeler();
	LPDISPATCH GetEnvironment();
	LPDISPATCH IGetEnvironment();
	LPDISPATCH NewDrawing2(long TemplateToUse, LPCTSTR TemplateName, long PaperSize, double Width, double Height);
	LPDISPATCH INewDrawing2(long TemplateToUse, LPCTSTR TemplateName, long PaperSize, double Width, double Height);
	BOOL SetOptions(LPCTSTR Message);
	BOOL PreviewDoc(long* HWnd, LPCTSTR FullName);
	CString GetSearchFolders(long FolderType);
	BOOL SetSearchFolders(long FolderType, LPCTSTR Folders);
	BOOL GetUserPreferenceToggle(long UserPreferenceToggle);
	void SetUserPreferenceToggle(long UserPreferenceValue, BOOL OnFlag);
	double GetUserPreferenceDoubleValue(long UserPreferenceValue);
	BOOL SetUserPreferenceDoubleValue(long UserPreferenceValue, double Value);
	CString GetActivePrinter();
	void SetActivePrinter(LPCTSTR lpszNewValue);
	BOOL LoadFile2(LPCTSTR FileName, LPCTSTR ArgString);
	long GetUserPreferenceIntegerValue(long UserPreferenceValue);
	BOOL SetUserPreferenceIntegerValue(long UserPreferenceValue, long Value);
	BOOL RemoveMenuPopupItem(long DocType, long SelectType, LPCTSTR Item, LPCTSTR CallbackFcnAndModule, LPCTSTR CustomNames, long Unused);
	BOOL RemoveMenu(long DocType, LPCTSTR MenuItemString, LPCTSTR CallbackFcnAndModule);
	BOOL RemoveFileOpenItem(LPCTSTR CallbackFcnAndModule, LPCTSTR Description);
	BOOL RemoveFileSaveAsItem(LPCTSTR CallbackFcnAndModule, LPCTSTR Description, long Type);
	BOOL ReplaceReferencedDocument(LPCTSTR ReferencingDocument, LPCTSTR ReferencedDocument, LPCTSTR NewReference);
	long AddMenuItem(long DocType, LPCTSTR Menu, long Postion, LPCTSTR CallbackModuleAndFcn);
	long AddMenuPopupItem(long DocType, long SelType, LPCTSTR Item, LPCTSTR CallbackFcnAndModule, LPCTSTR CustomNames);
	BOOL RemoveUserMenu(long DocType, long MenuIdIn, LPCTSTR ModuleName);
	long AddToolbar(LPCTSTR ModuleName, LPCTSTR Title, long SmallBitmapHandle, long LargeBitmapHandle);
	BOOL AddToolbarCommand(LPCTSTR ModuleName, long ToolbarId, long ToolbarIndex, LPCTSTR CommandString);
	BOOL ShowToolbar(LPCTSTR ModuleName, long ToolbarId);
	BOOL HideToolbar(LPCTSTR ModuleName, long ToolbarId);
	BOOL RemoveToolbar(LPCTSTR Module, long ToolbarId);
	BOOL GetToolbarState(LPCTSTR Module, long ToolbarId, long ToolbarState);
	CString GetUserPreferenceStringListValue(long UserPreference);
	void SetUserPreferenceStringListValue(long UserPreference, LPCTSTR Value);
	BOOL EnableStereoDisplay(BOOL BEnable);
	BOOL IEnableStereoDisplay(BOOL BEnable);
	VARIANT GetDocumentDependencies(LPCTSTR Document, long Traverseflag, long Searchflag);
	CString IGetDocumentDependencies(LPCTSTR Document, long Traverseflag, long Searchflag);
	long GetDocumentDependenciesCount(LPCTSTR Document, long Traverseflag, long Searchflag);
	LPDISPATCH OpenDocSilent(LPCTSTR FileName, long Type, long* Errors);
	LPDISPATCH IOpenDocSilent(LPCTSTR FileName, long Type, long* Errors);
	long CallBack(LPCTSTR CallBackFunc, long DefaultRetVal, LPCTSTR CallBackArgs);
	long SendMsgToUser2(LPCTSTR Message, long Icon, long Buttons);
	LPUNKNOWN EnumDocuments();
	long LoadAddIn(LPCTSTR FileName);
	long UnloadAddIn(LPCTSTR FileName);
	BOOL RecordLine(LPCTSTR Text);
	VARIANT VersionHistory(LPCTSTR FileName);
	CString IVersionHistory(LPCTSTR FileName);
	long IGetVersionHistoryCount(LPCTSTR FileName);
	BOOL AllowFailedFeatureCreation(BOOL YesNo);
	LPDISPATCH GetFirstDocument();
	CString GetCurrentWorkingDirectory();
	BOOL SetCurrentWorkingDirectory(LPCTSTR CurrentWorkingDirectory);
	CString GetDataFolder(BOOL BShowErrorMsg);
	BOOL GetSelectionFilter(long SelType);
	void SetSelectionFilter(long SelType, BOOL State);
	LPDISPATCH ActivateDoc2(LPCTSTR Name, BOOL Silent, long* Errors);
	LPDISPATCH IActivateDoc2(LPCTSTR Name, BOOL Silent, long* Errors);
	BOOL GetMouseDragMode(long Command);
	CString GetCurrentLanguage();
	LPDISPATCH IGetFirstDocument();
	BOOL SanityCheck(long SwItemToCheck, long* P1, long* P2);
	long AddMenu(long DocType, LPCTSTR Menu, long Position);
	long CheckpointConvertedDocument(LPCTSTR DocName);
	LPDISPATCH OpenDoc2(LPCTSTR FileName, long Type, BOOL ReadOnly, BOOL ViewOnly, BOOL Silent, long* Errors);
	LPDISPATCH IOpenDoc2(LPCTSTR FileName, long Type, BOOL ReadOnly, BOOL ViewOnly, BOOL Silent, long* Errors);
	VARIANT GetMassProperties(LPCTSTR FilePathName, LPCTSTR ConfigurationName);
	BOOL IGetMassProperties(LPCTSTR FilePathName, LPCTSTR ConfigurationName, double* MPropsData);
	CString GetLocalizedMenuName(long MenuId);
	VARIANT GetDocumentDependencies2(LPCTSTR Document, BOOL Traverseflag, BOOL Searchflag, BOOL AddReadOnlyInfo);
	CString IGetDocumentDependencies2(LPCTSTR Document, BOOL Traverseflag, BOOL Searchflag, BOOL AddReadOnlyInfo);
	long IGetDocumentDependenciesCount2(LPCTSTR Document, BOOL Traverseflag, BOOL Searchflag, BOOL AddReadOnlyInfo);
	VARIANT GetSelectionFilters();
	void SetSelectionFilters(const VARIANT& SelType, BOOL State);
	BOOL GetApplySelectionFilter();
	void SetApplySelectionFilter(BOOL State);
	LPDISPATCH NewDocument(LPCTSTR TemplateName, long PaperSize, double Width, double Height);
	LPDISPATCH INewDocument(LPCTSTR TemplateName, long PaperSize, double Width, double Height);
	CString GetDocumentTemplate(long Mode, LPCTSTR TemplateName, long PaperSize, double Width, double Height);
	long IGetSelectionFiltersCount();
	long IGetSelectionFilters();
	void ISetSelectionFilters(long Count, long* SelType, BOOL State);
	CString GetCurrSolidWorksRegSubKey();
	void SolidWorksExplorer();
	CString GetUserPreferenceStringValue(long UserPreference);
	BOOL SetUserPreferenceStringValue(long UserPreference, LPCTSTR Value);
	CString GetCurrentMacroPathName();
	LPDISPATCH GetOpenDocumentByName(LPCTSTR DocumentName);
	LPDISPATCH IGetOpenDocumentByName(LPCTSTR DocumentName);
	void GetCurrentKernelVersions(BSTR* Version1, BSTR* Version2, BSTR* Version3);
	CString CreatePrunedModelArchive(LPCTSTR Pathname, LPCTSTR ZipPathName);
	LPDISPATCH OpenDoc3(LPCTSTR FileName, long Type, BOOL ReadOnly, BOOL ViewOnly, BOOL RapidDraft, BOOL Silent, long* Errors);
	LPDISPATCH IOpenDoc3(LPCTSTR FileName, long Type, BOOL ReadOnly, BOOL ViewOnly, BOOL RapidDraft, BOOL Silent, long* Errors);
	long AddToolbar2(LPCTSTR ModuleNameIn, LPCTSTR TitleIn, long SmallBitmapHandleIn, long LargeBitmapHandleIn, long MenuPosIn, long DecTemplateTypeIn);
	LPDISPATCH OpenModelConfiguration(LPCTSTR Pathname, LPCTSTR ConfigName);
	long GetToolbarDock(LPCTSTR ModuleIn, long ToolbarIDIn);
	void SetToolbarDock(LPCTSTR ModuleIn, long ToolbarIDIn, long DocStatePosIn);
	LPDISPATCH GetMathUtility();
	LPDISPATCH IGetMathUtility();
	LPDISPATCH OpenDoc4(LPCTSTR FileName, long Type, long Options, LPCTSTR Configuration, long* Errors);
	LPDISPATCH IOpenDoc4(LPCTSTR FileName, long Type, long Options, LPCTSTR Configuration, long* Errors);
	BOOL IsRapidDraft(LPCTSTR FileName);
	VARIANT GetTemplateSizes(LPCTSTR FileName);
	BOOL IGetTemplateSizes(LPCTSTR FileName, long* PaperSize, double* Width, double* Height);
	LPDISPATCH GetColorTable();
	LPDISPATCH IGetColorTable();
	void SetMissingReferencePathName(LPCTSTR FileName);
	LPDISPATCH GetUserUnit(long UnitType);
	LPDISPATCH IGetUserUnit(long UnitType);
	BOOL SetMouseDragMode(long Command);
	void SetPromptFilename(LPCTSTR FileName);
	BOOL SetAddinCallbackInfo(long ModuleHandle, LPDISPATCH AddinCallbacks, long Cookie);
	BOOL AddMenuItem2(long DocumentType, long Cookie, LPCTSTR MenuItem, long Position, LPCTSTR MenuCallback, LPCTSTR MenuEnableMethod, LPCTSTR HintString);
	long AddToolbar3(long Cookie, LPCTSTR Title, long SmallBitmapResourceID, long LargeBitmapResourceID, long MenuPositionForToolbar, long DocumentType);
	BOOL RemoveToolbar2(long Cookie, long ToolbarId);
	BOOL AddToolbarCommand2(long Cookie, long ToolbarId, long ToolbarIndex, LPCTSTR ButtonCallback, LPCTSTR ButtonEnableMethod, LPCTSTR ToolTip, LPCTSTR HintString);
	BOOL ShowToolbar2(long Cookie, long ToolbarId);
	BOOL HideToolbar2(long Cookie, long ToolbarId);
	BOOL GetToolbarState2(long Cookie, long ToolbarId, long ToolbarState);
	long GetToolbarDock2(long Cookie, long ToolbarId);
	BOOL SetToolbarDock2(long Cookie, long ToolbarId, long DockingState);
	LPDISPATCH GetIActiveDoc2();
	LPDISPATCH IActivateDoc3(LPCTSTR Name, BOOL Silent, long* Errors);
	LPDISPATCH IGetFirstDocument2();
	LPDISPATCH INewDocument2(LPCTSTR TemplateName, long PaperSize, double Width, double Height);
	LPDISPATCH IGetOpenDocumentByName2(LPCTSTR DocumentName);
	LPDISPATCH IOpenDoc5(LPCTSTR FileName, long Type, long Options, LPCTSTR Configuration, long* Errors);
	LPUNKNOWN EnumDocuments2();
	LPDISPATCH CreatePropertyManagerPage(LPCTSTR Title, long Options, LPDISPATCH Handler, long* Errors);
	LPDISPATCH ICreatePropertyManagerPage(LPCTSTR Title, long Options, LPDISPATCH Handler, long* Errors);
	LPDISPATCH GetAddInObject(LPCTSTR Clsid);
	long GetProcessID();
	LPDISPATCH OpenDoc6(LPCTSTR FileName, long Type, long Options, LPCTSTR Configuration, long* Errors, long* Warnings);
	BOOL AddFileOpenItem2(long Cookie, LPCTSTR MethodName, LPCTSTR Description, LPCTSTR Extension);
	BOOL RemoveFileOpenItem2(long Cookie, LPCTSTR MethodName, LPCTSTR Description, LPCTSTR Extension);
	BOOL AddFileSaveAsItem2(long Cookie, LPCTSTR MethodName, LPCTSTR Description, LPCTSTR Extension, long DocumentType);
	BOOL RemoveFileSaveAsItem2(long Cookie, LPCTSTR MethodName, LPCTSTR Description, LPCTSTR Extension, long DocumentType);
	BOOL AddMenuPopupItem2(long DocumentType, long Cookie, long SelectType, LPCTSTR PopupItemName, LPCTSTR MenuCallback, LPCTSTR MenuEnableMethod, LPCTSTR HintString, LPCTSTR CustomNames);
	BOOL RemoveMenuPopupItem2(long DocumentType, long Cookie, long SelectType, LPCTSTR PopupItemName, LPCTSTR MenuCallback, LPCTSTR MenuEnableMethod, LPCTSTR HintString, LPCTSTR CustomNames);
	VARIANT GetMassProperties2(LPCTSTR FilePathName, LPCTSTR ConfigurationName, long Accuracy);
	BOOL IGetMassProperties2(LPCTSTR FilePathName, LPCTSTR ConfigurationName, double* MPropsData, long Accuracy);
	BOOL RunMacro(LPCTSTR FilePathName, LPCTSTR ModuleName, LPCTSTR ProcedureName);
	long GetConfigurationCount(LPCTSTR FilePathName);
	VARIANT GetConfigurationNames(LPCTSTR FilePathName);
	CString IGetConfigurationNames(LPCTSTR FilePathName, long Count);
	LPDISPATCH GetPreviewBitmap(LPCTSTR FilePathName, LPCTSTR ConfigName);
	CString GetExecutablePath();
	long GetEdition();
	long MoveDocument(LPCTSTR SourceDoc, LPCTSTR DestDoc, const VARIANT& FromChildren, const VARIANT& ToChildren, long Option);
	long CopyDocument(LPCTSTR SourceDoc, LPCTSTR DestDoc, const VARIANT& FromChildren, const VARIANT& ToChildren, long Option);
	long IMoveDocument(LPCTSTR SourceDoc, LPCTSTR DestDoc, long ChildCount, BSTR* FromChildren, BSTR* ToChildren, long Option);
	long ICopyDocument(LPCTSTR SourceDoc, LPCTSTR DestDoc, long ChildCount, BSTR* FromChildren, BSTR* ToChildren, long Option);
	long AddToolbar4(long Cookie, LPCTSTR Title, LPCTSTR SmallBitmapImage, LPCTSTR LargeBitmapImage, long MenuPositionForToolbar, long DocumentType);
	CString GetActiveConfigurationName(LPCTSTR FilePathName);
	VARIANT Command(long Command, const VARIANT& Args);
	VARIANT GetRecentFiles();
	void ShowBubbleTooltip(long PointAt, LPCTSTR FlashButtonIDs, long TitleResID, LPCTSTR TitleString, LPCTSTR MessageString);
	CString GetMaterialSchemaPathName();
	VARIANT GetMaterialDatabases();
	long GetMaterialDatabaseCount();
	CString IGetMaterialDatabases(long Count);
	LPDISPATCH CreateTaskpaneView(long* Bitmap, LPCTSTR ToolTip, LPDISPATCH PHandler);
	void ShowBubbleTooltipAt(long PointX, long PointY, long ArrowPos, LPCTSTR TitleString, LPCTSTR MessageString, LPCTSTR UrlLoc);
	void InstallQuickTipGuide(LPDISPATCH PInterface);
	void UnInstallQuickTipGuide(LPDISPATCH PInterface);
	void RefreshQuickTipWindow();
	long GetLastToolbarID();
	LPDISPATCH CreatePMPage(long DialogId, LPCTSTR Title, LPDISPATCH Handler);
	long GetUserTypeLibReferenceCount();
	VARIANT GetUserTypeLibReferences();
	void SetUserTypeLibReferences(const VARIANT& newValue);
	CString IGetUserTypeLibReferences(long NCount);
	void ISetUserTypeLibReferences(long NCount, BSTR* BstrTlbRef);
	BOOL RemoveUserTypeLibReferences(const VARIANT& VTlbRef);
	BOOL IRemoveUserTypeLibReferences(long NCount, BSTR* BstrTlbRef);
	BOOL GetUserControlBackground();
	void SetUserControlBackground(BOOL bNewValue);
	CString GetOpenFileName(LPCTSTR DialogTitle, LPCTSTR InitialFileName, LPCTSTR FileFilter, long* OpenOptions, BSTR* ConfigName, BSTR* DisplayName);
	void ShowTooltip(LPCTSTR ToolbarName, long ButtonID, long SelectIDMask1, long SelectIDMask2, LPCTSTR TitleString, LPCTSTR MessageString);
	BOOL AddMenuItem3(long DocumentType, long Cookie, LPCTSTR MenuItem, long Position, LPCTSTR MenuCallback, LPCTSTR MenuEnableMethod, LPCTSTR HintString, LPCTSTR BitmapFilePath);
	long GetLatestSupportedFileVersion();
	void GetOpenedFileInfo(BSTR* FileName, long* Options);
	LPDISPATCH GetOpenDocument(LPCTSTR DocName);
	LPDISPATCH CreateTaskpaneView2(LPCTSTR Bitmap, LPCTSTR ToolTip);
	LPDISPATCH GetCommandManager(long Cookie);
	void SetSWOEMString(LPCTSTR OemString);
};
/////////////////////////////////////////////////////////////////////////////
// IModelDoc wrapper class

class IModelDoc : public COleDispatchDriver
{
public:
	IModelDoc() {}		// Calls COleDispatchDriver default constructor
	IModelDoc(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IModelDoc(const IModelDoc& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetSelectionManager();
	LPDISPATCH GetISelectionManager();
	void SetSelectionManager(LPDISPATCH newValue);
	LPDISPATCH GetActiveView();
	LPDISPATCH GetIActiveView();
	void SetActiveView(LPDISPATCH newValue);
	long GetLengthUnit();
	void SetLengthUnit(long nNewValue);
	CString GetLightSourceUserName(long Id);
	void SetLightSourceUserName(long Id, LPCTSTR lpszNewValue);
	VARIANT GetLightSourcePropertyValues(long Id);
	void SetLightSourcePropertyValues(long Id, const VARIANT& newValue);
	CString GetSceneName();
	void SetSceneName(LPCTSTR lpszNewValue);
	CString GetSceneUserName();
	void SetSceneUserName(LPCTSTR lpszNewValue);
	void FeatureFillet(double R1, BOOL Propagate, BOOL Ftyp, BOOL VarRadTyp, long OverflowType);
	void GridOptions(BOOL DispGrid, double GridSpacing, BOOL Snap, BOOL DotStyle, short NMajor, short NMinor, BOOL Align2edge, BOOL AngleSnap, double AngleUnit, BOOL MinorAuto);
	void SetUnits(short UType, short FractBase, short FractDenom, short SigDigits, BOOL RoundToFraction);
	void LBDownAt(long Flags, double X, double Y, double Z);
	void LBUpAt(long Flags, double X, double Y, double Z);
	void DragTo(long Flags, double X, double Y, double Z);
	void SelectAt(long Flags, double X, double Y, double Z);
	void CreateLineVB(double X1, double Y1, double Z1, double X2, double Y2, double Z2);
	BOOL CreateLine(const VARIANT& P1, const VARIANT& P2);
	void CreateCenterLineVB(double X1, double Y1, double Z1, double X2, double Y2, double Z2);
	BOOL CreateCenterLine(const VARIANT& P1, const VARIANT& P2);
	void CreateArcVB(double P1x, double P1y, double P1z, double P2x, double P2y, double P2z, double P3x, double P3y, double P3z, short Dir);
	BOOL CreateArc(const VARIANT& P1, const VARIANT& P2, const VARIANT& P3, short Dir);
	void CreateCircleVB(double P1x, double P1y, double P1z, double Radius);
	BOOL CreateCircleByRadius(const VARIANT& P1, double Radius);
	VARIANT GetLines();
	void SketchTrim(long Op, long SelEnd, double X, double Y);
	void SketchOffsetEdges(double Val);
	void SketchRectangle(double Val1, double Val2, double Z1, double Val3, double Val4, double Z2, BOOL Val5);
	void SketchPoint(double X, double Y, double Z);
	void FeatureCut(BOOL Sd, BOOL Flip, BOOL Dir, long T1, long T2, double D1, double D2, BOOL Dchk1, BOOL Dchk2, BOOL Ddir1, BOOL Ddir2, double Dang1, double Dang2, BOOL OffsetReverse1, BOOL OffsetReverse2);
	void FeatureBoss(BOOL Sd, BOOL Flip, BOOL Dir, long T1, long T2, double D1, double D2, BOOL Dchk1, BOOL Dchk2, BOOL Ddir1, BOOL Ddir2, double Dang1, double Dang2, BOOL OffsetReverse1, BOOL OffsetReverse2);
	void SimpleHole(BOOL Sd, BOOL Flip, BOOL Dir, long T1, long T2, double D1, double D2, BOOL Dchk1, BOOL Dchk2, BOOL Ddir1, BOOL Ddir2, double Dang1, double Dang2, BOOL OffsetReverse1, BOOL OffsetReverse2);
	void FeatureLinearPattern(long Num1, double Spacing1, long Num2, double Spacing2, BOOL FlipDir1, BOOL FlipDir2, LPCTSTR DName1, LPCTSTR DName2);
	void NameView(LPCTSTR VName);
	void ShowNamedView(LPCTSTR VName);
	void CreatePlaneAtOffset(double Val, BOOL FlipDir);
	void Toolbars(BOOL M, BOOL Vw, BOOL SkMain, BOOL Sk, BOOL Feat, BOOL Constr, BOOL Macro);
	void CreatePlaneAtAngle(double Val, BOOL FlipDir);
	void SetParamValue(double Val);
	void AddRelation(LPCTSTR RelStr);
	void DeleteAllRelations();
	void HoleWizard(double Depth, short EndType, BOOL Flip, BOOL Dir, long HType, double D1, double D2, double D3, double D4, double D5, double D6, double D7, double D8, double D9, double D10, double D11, double D12);
	BOOL SaveAs(LPCTSTR NewName);
	void ActivateSelectedFeature();
	void SelectByName(long Flags, LPCTSTR IdStr);
	void SketchAddConstraints(LPCTSTR IdStr);
	void SketchConstraintsDel(long ConstrInd, LPCTSTR IdStr);
	void SketchConstraintsDelAll();
	void Lock();
	void UnLock();
	void InsertFeatureShell(double Thickness, BOOL Outward);
	void SketchFillet(double Rad);
	void FeatureChamfer(double Width, double Angle, BOOL Flip);
	void InsertMfDraft(double Angle, BOOL FlipDir, BOOL IsEdgeDraft, long PropType);
	void ParentChildRelationship();
	void SketchSpline(long MorePts, double X, double Y, double Z);
	void SelectSketchPoint(double X, double Y, long Incidence);
	void SelectSketchLine(double X0, double Y0, long Inc0, double X1, double Y1, long Inc1);
	void SelectSketchArc(double X0, double Y0, long Inc0, double X1, double Y1, long Inc1, double XC, double YC, long IncC, long RotDir);
	void SelectSketchSpline(long Size, double X0, double Y0, long Inc0, double X1, double Y1, long Inc1, double XC, double YC, long IncC);
	BOOL CreateTangentArc(double P1x, double P1y, double P1z, double P2x, double P2y, double P2z);
	BOOL Create3PointArc(double P1x, double P1y, double P1z, double P2x, double P2y, double P2z, double P3x, double P3y, double P3z);
	BOOL CreateArcByCenter(double P1x, double P1y, double P1z, double P2x, double P2y, double P2z, double P3x, double P3y, double P3z);
	BOOL CreateCircle(double P1x, double P1y, double P1z, double P2x, double P2y, double P2z);
	BOOL AddDimension(double X, double Y, double Z);
	BOOL AddHorizontalDimension(double X, double Y, double Z);
	BOOL AddVerticalDimension(double X, double Y, double Z);
	BOOL SelectSketchItem(long SelOpt, LPCTSTR Name, double X, double Y, double Z);
	void ClearSelection();
	void Select(LPCTSTR SelID, LPCTSTR SelParams, double X, double Y, double Z);
	void AndSelect(LPCTSTR SelID, LPCTSTR SelParams, double X, double Y, double Z);
	BOOL CreatePoint(double PointX, double PointY, double PointZ);
	BOOL CreateLineDB(double Sx, double Sy, double Sz, double Ex, double Ey, double Ez);
	BOOL CreateArcDB(double X1, double Y1, double Z1, double X2, double Y2, double Z2, double X3, double Y3, double Z3, short Dir);
	BOOL CreateCircleDB(double Cx, double Cy, double Cz, double Radius);
	BOOL CreatePointDB(double X, double Y, double Z);
	CString GetTitle();
	CString GetPathName();
	long GetType();
	void InsertObject();
	void EditClearAll();
	void EditCopy();
	void EditCut();
	void ObjectDisplayContent();
	void ObjectDisplayAsIcon();
	void ObjectResetsize();
	void WindowRedraw();
	void SetPickMode();
	void ViewRotateminusx();
	void ViewRotateminusy();
	void ViewRotateminusz();
	void ViewRotateplusx();
	void ViewRotateplusy();
	void ViewRotateplusz();
	void ViewTranslateminusx();
	void ViewTranslateminusy();
	void ViewTranslateplusx();
	void ViewTranslateplusy();
	void ViewRotXMinusNinety();
	void ViewRotYMinusNinety();
	void ViewRotYPlusNinety();
	void ViewZoomin();
	void ViewZoomout();
	void ViewDisplayHiddenremoved();
	void ViewDisplayWireframe();
	void ViewDisplayShaded();
	void ViewRwShading();
	void ViewOglShading();
	void ViewZoomtofit();
	void ViewRotate();
	void ViewTranslate();
	void ViewZoomto();
	void ViewDisplayHiddengreyed();
	void ViewDisplayFaceted();
	void ViewConstraint();
	void UserFavors();
	void FeatureCirPattern(long Num, double Spacing, BOOL FlipDir, LPCTSTR DName);
	void EditSketch();
	void FeatEdit();
	void FeatEditDef();
	void InsertPoint();
	void InsertFamilyTableNew();
	void InsertFamilyTableEdit();
	void ToolsMacro();
	void ToolsGrid();
	void SketchCenterline();
	void SketchAlign();
	void SketchArc();
	void SketchTangentArc();
	void SketchCircle();
	void SketchUndo();
	void UserPreferences();
	void Lights();
	void SketchConstrainCoincident();
	void SketchConstrainConcentric();
	void SketchConstrainPerp();
	void SketchConstrainTangent();
	void SketchConstrainParallel();
	void SketchUseEdge();
	void SketchUseEdgeCtrline();
	void SketchMirror();
	void Save();
	void Close();
	void ViewDispRefaxes();
	void ViewDispRefplanes();
	void InsertSketch();
	void InsertProtrusionSwept(BOOL Propagate, BOOL Alignment, BOOL KeepNormalConstant);
	void InsertProtrusionBlend(BOOL Closed);
	void ToolsMassProps();
	void PropertySheet();
	void BlankRefGeom();
	void UnBlankRefGeom();
	void EditDelete();
	void InsertProjectedSketch();
	BOOL CreatePlaneFixed(const VARIANT& P1, const VARIANT& P2, const VARIANT& P3, BOOL UseGlobal);
	void DebugCheckBody();
	void DimPreferences();
	void UnblankSketch();
	void EditSketchOrSingleSketchFeature();
	void DebugCheckIgesGeom();
	void BlankSketch();
	double GetDefaultTextHeight();
	BOOL IsActive(LPCTSTR CompStr);
	BOOL CreateEllipse(const VARIANT& Center, const VARIANT& Major, const VARIANT& Minor);
	BOOL CreateEllipseVB(double CenterX, double CenterY, double CenterZ, double MajorX, double MajorY, double MajorZ, double MinorX, double MinorY, double MinorZ);
	BOOL CreateEllipticalArcByCenter(const VARIANT& Center, const VARIANT& Major, const VARIANT& Minor, const VARIANT& Start, const VARIANT& End);
	BOOL CreateEllipticalArcByCenterVB(double CenterX, double CenterY, double CenterZ, double MajorX, double MajorY, double MajorZ, double MinorX, double MinorY, double MinorZ, double StartX, double StartY, double StartZ, double EndX, 
		double EndY, double EndZ);
	LPDISPATCH GetActiveSketch();
	LPDISPATCH IGetActiveSketch();
	long GetTessellationQuality();
	void SetTessellationQuality(long QualityNum);
	LPDISPATCH Parameter(LPCTSTR StringIn);
	LPDISPATCH IParameter(LPCTSTR StringIn);
	BOOL SelectByID(LPCTSTR SelID, LPCTSTR SelParams, double X, double Y, double Z);
	BOOL AndSelectByID(LPCTSTR SelID, LPCTSTR SelParams, double X, double Y, double Z);
	void Insert3DSketch();
	CString GetLightSourceName(long Id);
	BOOL AddLightSource(LPCTSTR IdName, long LTyp, LPCTSTR UserName);
	long AddLightSourceExtProperty(long Id, const VARIANT& PropertyExtension);
	void ResetLightSourceExtProperty(long Id);
	void DeleteLightSource(long Id);
	VARIANT GetLightSourceExtProperty(long Id, long PropertyId);
	long AddLightToScene(LPCTSTR LpszNewValue);
	long AddSceneExtProperty(const VARIANT& PropertyExtension);
	void ResetSceneExtProperty();
	VARIANT GetSceneExtProperty(long PropertyId);
	void FileSummaryInfo();
	VARIANT GetGridSettings();
	void ToolsSketchTranslate();
	void ToolsDistance();
	void SkToolsAutoConstr();
	void ToolsSketchScale();
	void Paste();
	void ToolsConfiguration();
	void EntityProperties();
	BOOL GetArcCentersDisplayed();
	void SetArcCentersDisplayed(BOOL Setting);
	void AutoSolveToggle();
	double IGetLines();
	long GetLineCount();
	void ICreateEllipse(double* Center, double* Major, double* Minor);
	void ICreateEllipticalArcByCenter(double* Center, double* Major, double* Minor, double* Start, double* End);
	double GetILightSourcePropertyValues(long Id);
	void SetILightSourcePropertyValues(long Id, double* newValue);
	void InsertCutSwept(BOOL Propagate, BOOL Alignment, BOOL KeepNormalConstant);
	void InsertCutBlend(BOOL Closed);
	void InsertHelix(BOOL Reversed, BOOL Clockwised, BOOL Tapered, BOOL Outward, long Helixdef, double Height, double Pitch, double Revolution, double TaperAngle, double Startangle);
	void ICreateLine(double* P1, double* P2);
	void ICreateCenterLine(double* P1, double* P2);
	void ICreateArc(double* P1, double* P2, double* P3, short Dir);
	void ICreateCircleByRadius(double* P1, double Radius);
	void GraphicsRedraw();
	BOOL GetVisibilityOfConstructPlanes();
	BOOL GetDisplayWhenAdded();
	void SetDisplayWhenAdded(BOOL Setting);
	BOOL GetAddToDB();
	void SetAddToDB(BOOL Setting);
	BOOL DeSelectByID(LPCTSTR SelID, LPCTSTR SelParams, double X, double Y, double Z);
	BOOL GetVisible();
	void SetVisible(BOOL bNewValue);
	void PrintDirect();
	void PrintPreview();
	void Quit();
	void CreatePlaneThru3Points();
	void ViewRotXPlusNinety();
	VARIANT GetUnits();
	void SetAngularUnits(short UType, short FractBase, short FractDenom, short SigDigits);
	VARIANT GetAngularUnits();
	short IGetUnits();
	void ISetAngularUnits(short UType, short FractBase, short FractDenom, short SigDigits);
	short IGetAngularUnits();
	void ShowConfiguration(LPCTSTR ConfigurationName);
	void ResetConfiguration();
	void AddConfiguration(LPCTSTR Name, LPCTSTR Comment, LPCTSTR AlternateName, BOOL SuppressByDefault, BOOL HideByDefault, BOOL MinFeatureManager, BOOL InheritProperties, unsigned long Flags);
	void DeleteConfiguration(LPCTSTR ConfigurationName);
	void EditConfiguration(LPCTSTR Name, LPCTSTR NewName, LPCTSTR Comment, LPCTSTR AlternateName, BOOL SuppressByDefault, BOOL HideByDefault, BOOL MinFeatureManager, BOOL InheritProperties, unsigned long Flags);
	void CreatePlanePerCurveAndPassPoint(BOOL OrigAtCurve);
	LPDISPATCH CreateFeatureMgrView(long* Bitmap);
	BOOL AddFeatureMgrView(long* Bitmap, long* AppView);
	VARIANT GetStandardViewRotation(long ViewId);
	double IGetStandardViewRotation(long ViewId);
	void FeatureExtruRefSurface(BOOL Sd, BOOL Flip, BOOL Dir, long T1, long T2, double D1, double D2, BOOL Dchk1, BOOL Dchk2, BOOL Ddir1, BOOL Ddir2, double Dang1, double Dang2, BOOL OffsetReverse1, BOOL OffsetReverse2);
	LPUNKNOWN IGet3rdPartyStorage(LPCTSTR StringIn, BOOL IsStoring);
	void DeleteFeatureMgrView(long* AppView);
	VARIANT GetMassProperties();
	BOOL IGetMassProperties(double* MPropsData);
	long GetLightSourceCount();
	long GetLightSourceIdFromName(LPCTSTR LightName);
	void SetNextSelectionGroupId(long Id);
	void ISetNextSelectionGroupId(long Id);
	LPDISPATCH InsertMidSurfaceExt(double Placement, BOOL KnitFlag);
	LPDISPATCH IInsertMidSurfaceExt(double Placement, BOOL KnitFlag);
	void ICreatePlaneFixed(double* P1, double* P2, double* P3, BOOL UseGlobal);
	BOOL SelectByMark(LPCTSTR SelID, LPCTSTR SelParams, double X, double Y, double Z, long Mark);
	BOOL AndSelectByMark(LPCTSTR SelID, LPCTSTR SelParams, double X, double Y, double Z, long Mark);
	VARIANT GetDependencies(long Traverseflag, long Searchflag);
	CString IGetDependencies(long Traverseflag, long Searchflag);
	long GetNumDependencies(long Traverseflag, long Searchflag);
	long IGetNumDependencies(long Traverseflag, long Searchflag);
	LPDISPATCH FirstFeature();
	LPDISPATCH IFirstFeature();
	void UnderiveSketch();
	void DeriveSketch();
	BOOL IsExploded();
	BOOL DeleteSelection(BOOL ConfirmFlag);
	BOOL DeleteNamedView(LPCTSTR ViewName);
	BOOL SetLightSourceName(long Id, LPCTSTR NewName);
	void Insert3DSplineCurve(BOOL CurveClosed);
	BOOL SetLightSourcePropertyValuesVB(LPCTSTR IdName, long LType, double Diff, long RgbColor, double Dist, double DirX, double DirY, double DirZ, double SpotDirX, double SpotDirY, double SpotDirZ, double SpotAngle, double FallOff0, 
		double FallOff1, double FallOff2, double Ambient, double Specular, double SpotExponent, BOOL BDisable);
	LPDISPATCH ICreateFeatureMgrView(long* Bitmap);
	BOOL SelectedEdgeProperties(LPCTSTR EdgeName);
	BOOL SelectedFaceProperties(long RgbColor, double Ambient, double Diffuse, double Specular, double Shininess, double Transparency, double Emission, BOOL UsePartProps, LPCTSTR FaceName);
	BOOL SelectedFeatureProperties(long RgbColor, double Ambient, double Diffuse, double Specular, double Shininess, double Transparency, double Emission, BOOL UsePartProps, BOOL Suppressed, LPCTSTR FeatureName);
	void InsertSplitLineSil();
	void InsertSplitLineProject(BOOL IsDirectional, BOOL FlipDir);
	void InsertRib(BOOL Is2Sided, BOOL ReverseThicknessDir, double Thickness, long ReferenceEdgeIndex, BOOL ReverseMaterialDir, BOOL IsDrafted, BOOL DraftOutward, double DraftAngle);
	BOOL AddRadialDimension(double X, double Y, double Z);
	BOOL AddDiameterDimension(double X, double Y, double Z);
	VARIANT GetModelViewNames();
	CString IGetModelViewNames();
	long GetModelViewCount();
	double GetUserPreferenceDoubleValue(long UserPreferenceValue);
	BOOL SetUserPreferenceDoubleValue(long UserPreferenceValue, double Value);
	void ViewDisplayCurvature();
	void Scale();
	void AddIns();
	BOOL InsertCurveFile(LPCTSTR FileName);
	void InsertCurveFileBegin();
	BOOL InsertCurveFilePoint(double X, double Y, double Z);
	BOOL InsertCurveFileEnd();
	BOOL ChangeSketchPlane();
	void ViewOrientationUndo();
	void PrintOut(long FromPage, long ToPage, long NumCopies, BOOL Collate, LPCTSTR Printer, double Scale, BOOL PrintToFile);
	void SketchOffsetEntities(double Offset, BOOL Flip);
	void InsertLibraryFeature(LPCTSTR LibFeatPartNameIn);
	void SketchModifyTranslate(double StartX, double StartY, double EndX, double EndY);
	void SketchModifyRotate(double CenterX, double CenterY, double Angle);
	void SketchModifyFlip(long AxisFlag);
	BOOL SketchModifyScale(double ScaleFactor);
	LPDISPATCH GetActiveConfiguration();
	LPDISPATCH IGetActiveConfiguration();
	BOOL GetUserPreferenceToggle(long UserPreferenceToggle);
	BOOL SetUserPreferenceToggle(long UserPreferenceValue, BOOL OnFlag);
	void InsertSweepRefSurface(BOOL Propagate, short TwistCtrlOption, BOOL KeepTangency, BOOL ForceNonRational);
	void InsertLoftRefSurface(BOOL Closed, BOOL KeepTangency, BOOL ForceNonRational);
	void InsertProtrusionSwept2(BOOL Propagate, BOOL Alignment, short TwistCtrlOption, BOOL KeepTangency, BOOL ForceNonRational);
	void InsertProtrusionBlend2(BOOL Closed, BOOL KeepTangency, BOOL ForceNonRational);
	void InsertCutSwept2(BOOL Propagate, BOOL Alignment, short TwistCtrlOption, BOOL KeepTangency, BOOL ForceNonRational);
	void InsertCutBlend2(BOOL Closed, BOOL KeepTangency, BOOL ForceNonRational);
	BOOL IsEditingSelf();
	void ShowNamedView2(LPCTSTR VName, long ViewId);
	void InsertDome(double Height, BOOL ReverseDir, BOOL DoEllipticSurface);
	CString GetMaterialUserName();
	void SetMaterialUserName(LPCTSTR lpszNewValue);
	CString GetMaterialIdName();
	void SetMaterialIdName(LPCTSTR lpszNewValue);
	VARIANT GetMaterialPropertyValues();
	void SetMaterialPropertyValues(const VARIANT& newValue);
	double GetIMaterialPropertyValues();
	void SetIMaterialPropertyValues(double* newValue);
	long AddPropertyExtension(const VARIANT& PropertyExtension);
	VARIANT GetPropertyExtension(long Id);
	void ResetPropertyExtension();
	long GetUpdateStamp();
	void ViewZoomTo2(double X1, double Y1, double Z1, double X2, double Y2, double Z2);
	void ScreenRotate();
	short GetPrintSetup(long SetupType);
	void SetPrintSetup(long SetupType, short nNewValue);
	void GraphicsRedraw2();
	void InsertCosmeticThread(short Type, double Depth, double Length, LPCTSTR Note);
	void HideCosmeticThread();
	void ShowCosmeticThread();
	void SimpleHole2(double Dia, BOOL Sd, BOOL Flip, BOOL Dir, long T1, long T2, double D1, double D2, BOOL Dchk1, BOOL Dchk2, BOOL Ddir1, BOOL Ddir2, double Dang1, double Dang2, BOOL OffsetReverse1, BOOL OffsetReverse2);
	void IRelease3rdPartyStorage(LPCTSTR StringIn);
	long FeatureRevolve2(double Angle, BOOL ReverseDir, double Angle2, long RevType, long Options);
	long FeatureRevolveCut2(double Angle, BOOL ReverseDir, double Angle2, long RevType, long Options);
	void SetSaveFlag();
	CString GetExternalReferenceName();
	BOOL SelectByRay(const VARIANT& DoubleInfoIn, long TypeWanted);
	BOOL ISelectByRay(double* PointIn, double* VectorIn, double RadiusIn, long TypeWanted);
	void SetSceneBkgDIB(long L_dib);
	CString GetSceneBkgImageFileName();
	void SetSceneBkgImageFileName(LPCTSTR lpszNewValue);
	void InsertBkgImage(LPCTSTR NewName);
	void DeleteBkgImage();
	void InsertSplinePoint(double X, double Y, double Z);
	void InsertLoftRefSurface2(BOOL Closed, BOOL KeepTangency, BOOL ForceNonRational, double TessToleranceFactor, short StartMatchingType, short EndMatchingType);
	void InsertProtrusionBlend3(BOOL Closed, BOOL KeepTangency, BOOL ForceNonRational, double TessToleranceFactor, short StartMatchingType, short EndMatchingType);
	void InsertCutBlend3(BOOL Closed, BOOL KeepTangency, BOOL ForceNonRational, double TessToleranceFactor, short StartMatchingType, short EndMatchingType);
	void AlignDimensions();
	void BreakDimensionAlignment();
	void SketchFillet1(double Rad);
	void FeatureChamferType(short ChamferType, double Width, double Angle, BOOL Flip, double OtherDist, double VertexChamDist1, double VertexChamDist2, double VertexChamDist3);
	void FeatureCutThin(BOOL Sd, BOOL Flip, BOOL Dir, long T1, long T2, double D1, double D2, BOOL Dchk1, BOOL Dchk2, BOOL Ddir1, BOOL Ddir2, double Dang1, double Dang2, BOOL OffsetReverse1, BOOL OffsetReverse2, double Thk1, double Thk2, 
		double EndThk, long RevThinDir, long CapEnds, BOOL AddBends, double BendRad);
	void FeatureBossThin(BOOL Sd, BOOL Flip, BOOL Dir, long T1, long T2, double D1, double D2, BOOL Dchk1, BOOL Dchk2, BOOL Ddir1, BOOL Ddir2, double Dang1, double Dang2, BOOL OffsetReverse1, BOOL OffsetReverse2, double Thk1, double Thk2, 
		double EndThk, long RevThinDir, long CapEnds, BOOL AddBends, double BendRad);
	BOOL InsertDatumTargetSymbol(LPCTSTR Datum1, LPCTSTR Datum2, LPCTSTR Datum3, short AreaStyle, BOOL AreaOutside, double Value1, double Value2, LPCTSTR ValueStr1, LPCTSTR ValueStr2, BOOL ArrowsSmart, short ArrowStyle, short LeaderLineStyle, 
		BOOL LeaderBent, BOOL ShowArea, BOOL ShowSymbol);
	BOOL EditDatumTargetSymbol(LPCTSTR Datum1, LPCTSTR Datum2, LPCTSTR Datum3, short AreaStyle, BOOL AreaOutside, double Value1, double Value2, LPCTSTR ValueStr1, LPCTSTR ValueStr2, BOOL ArrowsSmart, short ArrowStyle, short LeaderLineStyle, 
		BOOL LeaderBent, BOOL ShowArea, BOOL ShowSymbol);
	void InsertBOMBalloon();
	LPDISPATCH FeatureReferenceCurve(long NumOfCurves, const VARIANT& BaseCurves, BOOL Merge, LPCTSTR FromFileName, long* ErrorCode);
	// method 'IFeatureReferenceCurve' not emitted because of invalid return type or parameter type
	void FontBold(BOOL Bold);
	void FontItalic(BOOL Italic);
	void FontUnderline(BOOL Underline);
	void FontFace(LPCTSTR Face);
	void FontPoints(short Points);
	void FontUnits(double Units);
	BOOL SketchSplineByEqnParams(const VARIANT& ParamsIn);
	void AlignParallelDimensions();
	void SetBlockingState(long StateIn);
	void ResetBlockingState();
	long GetSceneBkgDIB();
	void InsertHatchedFace();
	LPDISPATCH GetColorTable();
	LPDISPATCH IGetColorTable();
	void InsertSweepRefSurface2(BOOL Propagate, short TwistCtrlOption, BOOL KeepTangency, BOOL ForceNonRational, short StartMatchingType, short EndMatchingType);
	void InsertProtrusionSwept3(BOOL Propagate, BOOL Alignment, short TwistCtrlOption, BOOL KeepTangency, BOOL ForceNonRational, short StartMatchingType, short EndMatchingType);
	void InsertCutSwept3(BOOL Propagate, BOOL Alignment, short TwistCtrlOption, BOOL KeepTangency, BOOL ForceNonRational, short StartMatchingType, short EndMatchingType);
	BOOL IsOpenedViewOnly();
	BOOL IsOpenedReadOnly();
	void ViewZoomToSelection();
	void FeatureBossThicken(double Thickness, long Direction, long FaceIndex);
	void FeatureCutThicken(double Thickness, long Direction, long FaceIndex);
	BOOL InsertAxis();
	void EditUndo(unsigned long NSteps);
	void SelectMidpoint();
	long ISketchSplineByEqnParams(long* PropArray, double* KnotsArray, double* CntrlPntCoordArray);
	VARIANT VersionHistory();
	CString IVersionHistory();
	long IGetVersionHistoryCount();
	void Rebuild(long Options);
	void InsertFeatureShellAddThickness(double Thickness);
	void InsertOffsetSurface(double Thickness, BOOL Reverse);
	void SimplifySpline(double ToleranceIn);
	CString GetSummaryInfo(long FieldId);
	void SetSummaryInfo(long FieldId, LPCTSTR lpszNewValue);
	CString GetCustomInfo(LPCTSTR FieldName);
	void SetCustomInfo(LPCTSTR FieldName, LPCTSTR lpszNewValue);
	long GetCustomInfoCount();
	CString GetCustomInfoType(LPCTSTR FieldName);
	VARIANT GetCustomInfoNames();
	CString IGetCustomInfoNames();
	BOOL AddCustomInfo(LPCTSTR FieldName, LPCTSTR FieldType, LPCTSTR FieldValue);
	BOOL DeleteCustomInfo(LPCTSTR FieldName);
	void PrintOut2(long FromPage, long ToPage, long NumCopies, BOOL Collate, LPCTSTR Printer, double Scale, BOOL PrintToFile, LPCTSTR PtfName);
	BOOL SetReadOnlyState(BOOL SetReadOnly);
	BOOL InsertFamilyTableOpen(LPCTSTR FileName);
	BOOL MultiSelectByRay(const VARIANT& DoubleInfoIn, long TypeWanted, BOOL Append);
	BOOL IMultiSelectByRay(double* PointIn, double* VectorIn, double RadiusIn, long TypeWanted, BOOL Append);
	void InsertNewNote3(LPCTSTR UpperText, BOOL NoLeader, BOOL BentLeader, short ArrowStyle, short LeaderSide, double Angle, short BalloonStyle, short BalloonFit, BOOL SmartArrow);
	void InsertWeldSymbol2(LPCTSTR Dim1, LPCTSTR Symbol, LPCTSTR Dim2, BOOL Symmetric, BOOL FieldWeld, BOOL ShowOtherSide, BOOL DashOnTop, BOOL Peripheral, BOOL HasProcess, LPCTSTR ProcessValue);
	BOOL InsertSurfaceFinishSymbol2(long SymType, long LeaderType, double LocX, double LocY, double LocZ, long LaySymbol, long ArrowType, LPCTSTR MachAllowance, LPCTSTR OtherVals, LPCTSTR ProdMethod, LPCTSTR SampleLen, LPCTSTR MaxRoughness, 
		LPCTSTR MinRoughness, LPCTSTR RoughnessSpacing);
	long SaveSilent();
	long SaveAsSilent(LPCTSTR NewName, BOOL SaveAsCopy);
	BOOL AddCustomInfo2(LPCTSTR FieldName, long FieldType, LPCTSTR FieldValue);
	long GetCustomInfoType2(LPCTSTR FieldName);
	BOOL InsertRefPoint();
	long FeatureFillet2(double R1, BOOL Propagate, BOOL Ftyp, BOOL VarRadTyp, long OverflowType, long NRadii, const VARIANT& Radii);
	long IFeatureFillet2(double R1, BOOL Propagate, BOOL Ftyp, BOOL VarRadTyp, long OverflowType, long NRadii, double* Radii);
	LPDISPATCH GetFirstAnnotation();
	LPDISPATCH IGetFirstAnnotation();
	BOOL InsertCoordinateSystem(BOOL XFlippedIn, BOOL YFlippedIn, BOOL ZFlippedIn);
	BOOL GetToolbarVisibility(long Toolbar);
	void SetToolbarVisibility(long Toolbar, BOOL Visibility);
	void ViewDispCoordinateSystems();
	void ViewDispTempRefaxes();
	void ViewDispRefPoints();
	void ViewDispOrigins();
	VARIANT GetCoordinateSystemXformByName(LPCTSTR NameIn);
	double IGetCoordinateSystemXformByName(LPCTSTR NameIn);
	CString GetCurrentCoordinateSystemName();
	LPUNKNOWN EnumModelViews();
	BOOL InsertCompositeCurve();
	void SketchParabola(double Val1, double Val2, double Z1, double Val3, double Val4, double Z2, double Val5, double Val6, double Z3, double Val7, double Val8, double Z4);
	void InsertRadiateSurface(double Distance, BOOL FlipDir, BOOL TangentPropagate);
	void InsertSewRefSurface();
	long InsertShape(long PressureOn, long TangentsOn, double PressureGain, double TangentGain, double CurveSpringGain, double Alpha, double Beta, double Gamma, double Delta, long Degree, long Split, long Tuning);
	void InsertMfDraft2(double Angle, BOOL FlipDir, BOOL IsEdgeDraft, long PropType, BOOL StepDraft);
	long GetConfigurationCount();
	VARIANT GetConfigurationNames();
	CString IGetConfigurationNames(long* Count);
	void FeatureCut2(BOOL Sd, BOOL Flip, BOOL Dir, long T1, long T2, double D1, double D2, BOOL Dchk1, BOOL Dchk2, BOOL Ddir1, BOOL Ddir2, double Dang1, double Dang2, BOOL OffsetReverse1, BOOL OffsetReverse2, long KeepPieceIndex);
	void InsertCutSurface(BOOL Flip, long KeepPieceIndex);
	LPDISPATCH GetDetailingDefaults();
	LPDISPATCH IGetDetailingDefaults();
	long ListExternalFileReferencesCount(BOOL UseSearchRules);
	VARIANT ListExternalFileReferences(BOOL UseSearchRules);
	CString IListExternalFileReferences(BOOL UseSearchRules, long NumRefs);
	BOOL SketchSplineByEqnParams2(const VARIANT& ParamsIn);
	LPDISPATCH GetFirstModelView();
	LPDISPATCH IGetFirstModelView();
	BOOL InsertPlanarRefSurface();
	LPDISPATCH GetNext();
	BOOL GetSaveFlag();
	BOOL AddCustomInfo3(LPCTSTR Configuration, LPCTSTR FieldName, long FieldType, LPCTSTR FieldValue);
	CString GetCustomInfo2(LPCTSTR Configuration, LPCTSTR FieldName);
	void SetCustomInfo2(LPCTSTR Configuration, LPCTSTR FieldName, LPCTSTR lpszNewValue);
	BOOL DeleteCustomInfo2(LPCTSTR Configuration, LPCTSTR FieldName);
	long GetCustomInfoCount2(LPCTSTR Configuration);
	VARIANT GetCustomInfoNames2(LPCTSTR Configuration);
	CString IGetCustomInfoNames2(LPCTSTR Configuration);
	long GetCustomInfoType3(LPCTSTR Configuration, LPCTSTR FieldName);
	BOOL GetConsiderLeadersAsLines();
	BOOL SetConsiderLeadersAsLines(BOOL LeadersAsLines);
	void InsertRevolvedRefSurface(double Angle, BOOL ReverseDir, double Angle2, long RevType);
	long GetBendState();
	long SetBendState(long BendState);
	BOOL GetShowFeatureErrorDialog();
	void SetShowFeatureErrorDialog(BOOL bNewValue);
	void ClearUndoList();
	long GetFeatureManagerWidth();
	long SetFeatureManagerWidth(long Width);
	LPDISPATCH InsertProjectedSketch2(long Reverse);
	LPDISPATCH IInsertProjectedSketch2(long Reverse);
	long GetFeatureCount();
	LPDISPATCH FeatureByPositionReverse(long Num);
	LPDISPATCH IFeatureByPositionReverse(long Num);
	long RayIntersections(const VARIANT& BodiesIn, const VARIANT& BasePointsIn, const VARIANT& VectorsIn, long Options, double HitRadius, double Offset);
	long IRayIntersections(LPDISPATCH* BodiesIn, long NumBodies, double* BasePointsIn, double* VectorsIn, long NumRays, long Options, double HitRadius, double Offset);
	VARIANT GetRayIntersectionsPoints();
	double IGetRayIntersectionsPoints();
	VARIANT GetRayIntersectionsTopology();
	LPUNKNOWN IGetRayIntersectionsTopology();
	void EditSeedFeat();
	BOOL EditSuppress();
	BOOL EditUnsuppress();
	BOOL EditUnsuppressDependent();
	BOOL EditRollback();
	long Save2(BOOL Silent);
	long SaveAs2(LPCTSTR NewName, long SaveAsVersion, BOOL SaveAsCopy, BOOL Silent);
	void SetPopupMenuMode(long ModeIn);
	long GetPopupMenuMode();
	void CloseFamilyTable();
	void CreatePlaneAtSurface(long InterIndex, BOOL ProjOpt, BOOL ReverseDir, BOOL NormalPlane, double Angle);
	void SketchOffset(double Offset, BOOL ContourMode);
	BOOL CreateLinearSketchStepAndRepeat(long NumX, long NumY, double SpacingX, double SpacingY, double AngleX, double AngleY, LPCTSTR DeleteInstances);
	BOOL SetAmbientLightProperties(LPCTSTR Name, double Ambient, double Diffuse, double Specular, long Colour, BOOL Enabled, BOOL Fixed);
	BOOL GetAmbientLightProperties(LPCTSTR Name, double* Ambient, double* Diffuse, double* Specular, long* Colour, BOOL* Enabled, BOOL* Fixed);
	BOOL SetPointLightProperties(LPCTSTR Name, double Ambient, double Diffuse, double Specular, long Colour, BOOL Enabled, BOOL Fixed, double X, double Y, double Z);
	BOOL GetPointLightProperties(LPCTSTR Name, double* Ambient, double* Diffuse, double* Specular, long* Colour, BOOL* Enabled, BOOL* Fixed, double* X, double* Y, double* Z);
	BOOL SetDirectionLightProperties(LPCTSTR Name, double Ambient, double Diffuse, double Specular, long Colour, BOOL Enabled, BOOL Fixed, double X, double Y, double Z);
	BOOL GetDirectionLightProperties(LPCTSTR Name, double* Ambient, double* Diffuse, double* Specular, long* Colour, BOOL* Enabled, BOOL* Fixed, double* X, double* Y, double* Z);
	BOOL SetSpotlightProperties(LPCTSTR Name, double Ambient, double Diffuse, double Specular, long Colour, BOOL Enabled, BOOL Fixed, double Posx, double Posy, double Posz, double Targetx, double Targety, double Targetz, double ConeAngle);
	BOOL GetSpotlightProperties(LPCTSTR Name, double* Ambient, double* Diffuse, double* Specular, long* Colour, BOOL* Enabled, BOOL* Fixed, double* X, double* Y, double* Z, double* Targetx, double* Targety, double* Targetz, double* ConeAngle);
	void SplitOpenSegment(double X, double Y, double Z);
	void AutoInferToggle();
	void SketchRectangleAtAnyAngle(double Val1, double Val2, double Z1, double Val3, double Val4, double Z2, double Val3x, double Val3y, double Z3, BOOL Val5);
	BOOL CreateCircularSketchStepAndRepeat(double ArcRadius, double ArcAngle, long PatternNum, double PatternSpacing, BOOL PatternRotate, LPCTSTR DeleteInstances);
	void SplitClosedSegment(double X0, double Y0, double Z0, double X1, double Y1, double Z1);
	BOOL IsLightLockedToModel(long LightId);
	BOOL LockLightToModel(long LightId, BOOL Fix);
	long FeatureFillet3(double R1, BOOL Propagate, long Ftyp, BOOL VarRadTyp, long OverflowType, long NRadii, const VARIANT& Radii, BOOL UseHelpPoint, BOOL UseTangentHoldLine);
	long IFeatureFillet3(double R1, BOOL Propagate, long Ftyp, BOOL VarRadTyp, long OverflowType, long NRadii, double* Radii, BOOL UseHelpPoint, BOOL UseTangentHoldLine);
	void InsertConnectionPoint();
	void InsertRoutePoint();
	void FeatureBossThicken2(double Thickness, long Direction, long FaceIndex, BOOL FillVolume);
	void FeatureCutThicken2(double Thickness, long Direction, long FaceIndex, BOOL FillVolume);
	LPDISPATCH GetConfigurationByName(LPCTSTR Name);
	LPDISPATCH IGetConfigurationByName(LPCTSTR Name);
	LPDISPATCH CreatePoint2(double PointX, double PointY, double PointZ);
	LPDISPATCH ICreatePoint2(double PointX, double PointY, double PointZ);
	LPDISPATCH CreateLine2(double P1x, double P1y, double P1z, double P2x, double P2y, double P2z);
	LPDISPATCH ICreateLine2(double P1x, double P1y, double P1z, double P2x, double P2y, double P2z);
	LPDISPATCH GetActiveSketch2();
	LPDISPATCH IGetActiveSketch2();
	void DrawLightIcons();
	LPDISPATCH GetLayerManager();
	LPDISPATCH IGetLayerManager();
	LPDISPATCH CreateCircle2(double XC, double YC, double Zc, double Xp, double Yp, double Zp);
	LPDISPATCH ICreateCircle2(double XC, double YC, double Zc, double Xp, double Yp, double Zp);
	LPDISPATCH CreateCircleByRadius2(double XC, double YC, double Zc, double Radius);
	LPDISPATCH ICreateCircleByRadius2(double XC, double YC, double Zc, double Radius);
	LPDISPATCH CreateArc2(double XC, double YC, double Zc, double Xp1, double Yp1, double Zp1, double Xp2, double Yp2, double Zp2, short Direction);
	LPDISPATCH ICreateArc2(double XC, double YC, double Zc, double Xp1, double Yp1, double Zp1, double Xp2, double Yp2, double Zp2, short Direction);
	LPDISPATCH CreateEllipse2(double CenterX, double CenterY, double CenterZ, double MajorX, double MajorY, double MajorZ, double MinorX, double MinorY, double MinorZ);
	LPDISPATCH ICreateEllipse2(double CenterX, double CenterY, double CenterZ, double MajorX, double MajorY, double MajorZ, double MinorX, double MinorY, double MinorZ);
	LPDISPATCH CreateEllipticalArc2(double CenterX, double CenterY, double CenterZ, double MajorX, double MajorY, double MajorZ, double MinorX, double MinorY, double MinorZ, double StartX, double StartY, double StartZ, double EndX, double EndY, 
		double EndZ);
	LPDISPATCH ICreateEllipticalArc2(double CenterX, double CenterY, double CenterZ, double MajorX, double MajorY, double MajorZ, double MinorX, double MinorY, double MinorZ, double StartX, double StartY, double StartZ, double EndX, double EndY, 
		double EndZ);
	LPDISPATCH CreateSpline(const VARIANT& PointData);
	LPDISPATCH ICreateSpline(long PointCount, double* PointData);
	void ViewZoomtofit2();
	void SetInferenceMode(BOOL InferenceMode);
	BOOL GetInferenceMode();
	BOOL SetTitle2(LPCTSTR NewTitle);
	BOOL SketchFillet2(double Rad, short ConstrainedCorners);
	BOOL IsTessellationValid();
	void EditRoute();
	void FileReload();
	LPDISPATCH GetDesignTable();
	LPDISPATCH IGetDesignTable();
	CString GetEntityName(LPDISPATCH Entity);
	CString IGetEntityName(LPDISPATCH Entity);
	LPDISPATCH IGetNext();
	BOOL ShowConfiguration2(LPCTSTR ConfigurationName);
	BOOL AddConfiguration2(LPCTSTR Name, LPCTSTR Comment, LPCTSTR AlternateName, BOOL SuppressByDefault, BOOL HideByDefault, BOOL MinFeatureManager, BOOL InheritProperties, unsigned long Flags);
	BOOL DeleteConfiguration2(LPCTSTR ConfigurationName);
	BOOL EditConfiguration2(LPCTSTR Name, LPCTSTR NewName, LPCTSTR Comment, LPCTSTR AlternateName, BOOL SuppressByDefault, BOOL HideByDefault, BOOL MinFeatureManager, BOOL InheritProperties, unsigned long Flags);
	LPDISPATCH CreateSplineByEqnParams(const VARIANT& ParamsIn);
	LPDISPATCH ICreateSplineByEqnParams(long* PropArray, double* KnotsArray, double* CntrlPntCoordArray);
	LPDISPATCH CreateFeatureMgrView2(long* Bitmap, LPCTSTR ToolTip);
	LPDISPATCH ICreateFeatureMgrView2(long* Bitmap, LPCTSTR ToolTip);
	BOOL AddFeatureMgrView2(long* Bitmap, long* AppView, LPCTSTR ToolTip);
	void FeatureCut3(BOOL Sd, BOOL Flip, BOOL Dir, long T1, long T2, double D1, double D2, BOOL Dchk1, BOOL Dchk2, BOOL Ddir1, BOOL Ddir2, double Dang1, double Dang2, BOOL OffsetReverse1, BOOL OffsetReverse2, long KeepPieceIndex);
	LPDISPATCH GetFirstAnnotation2();
	LPDISPATCH IGetFirstAnnotation2();
	void InsertExtendSurface(BOOL ExtendLinear, long EndCondition, double Distance);
	void InsertTangencySurface(BOOL OneSide, BOOL IsFlip);
	VARIANT CreateSplinesByEqnParams(const VARIANT& ParamsIn);
	LPUNKNOWN ICreateSplinesByEqnParams(long* PropArray, double* KnotsArray, double* CntrlPntCoordArray);
	VARIANT CreateClippedSplines(const VARIANT& ParamsIn, double X1, double Y1, double X2, double Y2);
	LPUNKNOWN ICreateClippedSplines(long* PropArray, double* KnotsArray, double* CntrlPntCoordArray, double X1, double Y1, double X2, double Y2);
	BOOL EditSuppress2();
	BOOL EditUnsuppress2();
	BOOL EditUnsuppressDependent2();
	BOOL EditRollback2();
	void HideDimension();
	void ShowFeatureDimensions();
	void HideFeatureDimensions();
	void Sketch3DIntersections();
	long FeatureFillet4(double R1, BOOL Propagate, BOOL UniformRadius, long Ftyp, BOOL VarRadTyp, long OverflowType, long NRadii, const VARIANT& Radii, BOOL UseHelpPoint, BOOL UseTangentHoldLine, BOOL CornerType, long SetbackDistCount, 
		const VARIANT& SetBackDistances);
	long IFeatureFillet4(double R1, BOOL Propagate, BOOL UniformRadius, long Ftyp, BOOL VarRadTyp, long OverflowType, long NRadii, double* Radii, BOOL UseHelpPoint, BOOL UseTangentHoldLine, BOOL CornerType, long SetbackDistCount, 
		double* SetBackDistances);
	void InsertDeleteFace();
	VARIANT GetDependencies2(BOOL Traverseflag, BOOL Searchflag, BOOL AddReadOnlyInfo);
	CString IGetDependencies2(BOOL Traverseflag, BOOL Searchflag, BOOL AddReadOnlyInfo);
	long IGetNumDependencies2(BOOL Traverseflag, BOOL Searchflag, BOOL AddReadOnlyInfo);
	void InsertScale(double ScaleFactor_x, double ScaleFactor_y, double ScaleFactor_z, BOOL IsUniform, long ScaleType);
	void LockAllExternalReferences();
	void UnlockAllExternalReferences();
	void BreakAllExternalReferences();
	BOOL EditDimensionProperties(long TolType, double TolMax, double TolMin, LPCTSTR TolMaxFit, LPCTSTR TolMinFit, BOOL UseDocPrec, long Precision, long ArrowsIn, BOOL UseDocArrows, long Arrow1, long Arrow2);
	BOOL SketchPolygon(double XCenter, double YCenter, double XEdge, double YEdge, long NSides, BOOL BInscribed);
	long GetBlockingState();
	LPDISPATCH CreateFeatureMgrView3(long* Bitmap, LPCTSTR ToolTip, long WhichPane);
	LPDISPATCH ICreateFeatureMgrView3(long* Bitmap, LPCTSTR ToolTip, long WhichPane);
	BOOL AddFeatureMgrView3(long* Bitmap, long* AppView, LPCTSTR ToolTip, long WhichPane);
	LPDISPATCH CreatePlaneAtOffset2(double Val, BOOL FlipDir);
	LPDISPATCH ICreatePlaneAtOffset2(double Val, BOOL FlipDir);
	LPDISPATCH CreatePlaneAtAngle2(double Val, BOOL FlipDir);
	LPDISPATCH ICreatePlaneAtAngle2(double Val, BOOL FlipDir);
	LPDISPATCH CreatePlaneThru3Points2();
	LPDISPATCH ICreatePlaneThru3Points2();
	LPDISPATCH CreatePlanePerCurveAndPassPoint2(BOOL OrigAtCurve);
	LPDISPATCH ICreatePlanePerCurveAndPassPoint2(BOOL OrigAtCurve);
	LPDISPATCH CreatePlaneAtSurface2(long InterIndex, BOOL ProjOpt, BOOL ReverseDir, BOOL NormalPlane, double Angle);
	LPDISPATCH ICreatePlaneAtSurface2(long InterIndex, BOOL ProjOpt, BOOL ReverseDir, BOOL NormalPlane, double Angle);
	long GetUserPreferenceIntegerValue(long UserPreferenceValue);
	BOOL SetUserPreferenceIntegerValue(long UserPreferenceValue, long Value);
	LPDISPATCH GetUserPreferenceTextFormat(long UserPreferenceValue);
	LPDISPATCH IGetUserPreferenceTextFormat(long UserPreferenceValue);
	BOOL SetUserPreferenceTextFormat(long UserPreferenceValue, LPDISPATCH Value);
	BOOL ISetUserPreferenceTextFormat(long UserPreferenceValue, LPDISPATCH Value);
	void InsertRib2(BOOL Is2Sided, BOOL ReverseThicknessDir, double Thickness, long ReferenceEdgeIndex, BOOL ReverseMaterialDir, BOOL IsDrafted, BOOL DraftOutward, double DraftAngle, BOOL IsNormToSketch);
	BOOL InsertObjectFromFile(LPCTSTR FilePath, BOOL CreateLink, double Xx, double Yy, double Zz);
	void InspectCurvature();
	void RemoveInspectCurvature();
	LPDISPATCH InsertDatumTag2();
	LPDISPATCH IInsertDatumTag2();
	long ActivateFeatureMgrView(long* AppView);
	void FeatureSketchDrivenPattern(BOOL UseCentroid);
	void HideShowBodies();
	void HideSolidBody();
	void ShowSolidBody();
	void InsertFramePoint(double Xx, double Yy, double Zz);
	void LockFramePoint();
	void UnlockFramePoint();
	LPDISPATCH InsertGtol();
	LPDISPATCH IInsertGtol();
	BOOL DeActivateFeatureMgrView(long* AppView);
	LPDISPATCH InsertNote(LPCTSTR Text);
	LPDISPATCH IInsertNote(LPCTSTR Text);
	void SetSaveAsFileName(LPCTSTR FileName);
	void ClosePrintPreview();
	void HideComponent2();
	void ShowComponent2();
	BOOL SaveBMP(LPCTSTR FileNameIn, long WidthIn, long HeightIn);
	void InsertSketch2(BOOL UpdateEditRebuild);
	void Insert3DSketch2(BOOL UpdateEditRebuild);
	void InsertDeleteHole();
	void PreTrimSurface(BOOL BMutualTrimIn);
	void PostTrimSurface(BOOL BSewSurfaceIn);
	void SketchConvertIsoCurves(double PercentRatio, BOOL VORuDir, BOOL DoConstrain, BOOL SkipHoles);
	void SelectLoop();
	void InsertSheetMetalBaseFlange(double Thickness, BOOL ThickenDir, double Radius, double ExtrudeDist1, double ExtrudeDist2, BOOL FlipExtruDir, long EndCondition1, long EndCondition2, long DirToUse);
	void InsertSheetMetalFold();
	void InsertSheetMetalUnfold();
	void InsertSheetMetalMiterFlange(BOOL UseReliefRatio, BOOL UseDefaultGap, BOOL UseAutoRelief, double GlobalRadius, double RipGap, double AutoReliefRatio, double AutoReliefWidth, double AutoReliefDepth, long ReliefType, long RipLocation, 
		BOOL TrimSideBends);
	void CreateGroup();
	void RemoveItemsFromGroup();
	void RemoveGroups();
	LPDISPATCH InsertBOMBalloon2(long Style, long Size, long UpperTextStyle, LPCTSTR UpperText, long LowerTextStyle, LPCTSTR LowerText);
	LPDISPATCH IInsertBOMBalloon2(long Style, long Size, long UpperTextStyle, LPCTSTR UpperText, long LowerTextStyle, LPCTSTR LowerText);
	void EditRedo(unsigned long NSteps);
	void InsertProtrusionBlend4(BOOL Closed, BOOL KeepTangency, BOOL ForceNonRational, double TessToleranceFactor, short StartMatchingType, short EndMatchingType, BOOL IsThinBody, double Thickness1, double Thickness2, short ThinType);
	void InsertCutBlend4(BOOL Closed, BOOL KeepTangency, BOOL ForceNonRational, double TessToleranceFactor, short StartMatchingType, short EndMatchingType, BOOL IsThinBody, double Thickness1, double Thickness2, short ThinType);
	void InsertProtrusionSwept4(BOOL Propagate, BOOL Alignment, short TwistCtrlOption, BOOL KeepTangency, BOOL ForceNonRational, short StartMatchingType, short EndMatchingType, BOOL IsThinBody, double Thickness1, double Thickness2, 
		short ThinType);
	void InsertCutSwept4(BOOL Propagate, BOOL Alignment, short TwistCtrlOption, BOOL KeepTangency, BOOL ForceNonRational, short StartMatchingType, short EndMatchingType, BOOL IsThinBody, double Thickness1, double Thickness2, short ThinType);
	void SelectTangency();
	BOOL InsertBendTableOpen(LPCTSTR FileName);
	BOOL InsertBendTableNew(LPCTSTR FileName, LPCTSTR Units, LPCTSTR Type);
	void InsertBendTableEdit();
	void DeleteBendTable();
	void InsertSheetMetal3dBend(double Angle, double Radius, BOOL FlipDir, short BendPos);
	BOOL CreateTangentArc2(double P1x, double P1y, double P1z, double P2x, double P2y, double P2z, long ArcTypeIn);
	VARIANT GetMassProperties2(long* Status);
	double IGetMassProperties2(long* Status);
	void SketchChamfer(double AngleORdist, double Dist1, long Options);
	void FeatureCut4(BOOL Sd, BOOL Flip, BOOL Dir, long T1, long T2, double D1, double D2, BOOL Dchk1, BOOL Dchk2, BOOL Ddir1, BOOL Ddir2, double Dang1, double Dang2, BOOL OffsetReverse1, BOOL OffsetReverse2, long KeepPieceIndex, BOOL NormalCut);
	LPDISPATCH GetPropertyManagerPage(long DialogId, LPCTSTR Title, LPUNKNOWN Handler);
	void AlignOrdinate();
	void EditOrdinate();
	BOOL ReattachOrdinate();
	LPDISPATCH EditBalloonProperties(long Style, long Size, long UpperTextStyle, LPCTSTR UpperText, long LowerTextStyle, LPCTSTR LowerText);
	BOOL EditDimensionProperties2(long TolType, double TolMax, double TolMin, LPCTSTR TolMaxFit, LPCTSTR TolMinFit, BOOL UseDocPrec, long Precision, long ArrowsIn, BOOL UseDocArrows, long Arrow1, long Arrow2, LPCTSTR PrefixText, 
		LPCTSTR SuffixText, BOOL ShowValue, LPCTSTR CalloutText1, LPCTSTR CalloutText2, BOOL CenterText);
	void InsertSheetMetalClosedCorner();
	BOOL SketchUseEdge2(BOOL Chain);
	BOOL SketchOffsetEntities2(double Offset, BOOL BothDirections, BOOL Chain);
	BOOL SketchOffset2(double Offset, BOOL BothDirections, BOOL Chain);
	LPDISPATCH AddDimension2(double X, double Y, double Z);
	LPDISPATCH IAddDimension2(double X, double Y, double Z);
	LPDISPATCH AddHorizontalDimension2(double X, double Y, double Z);
	LPDISPATCH IAddHorizontalDimension2(double X, double Y, double Z);
	LPDISPATCH AddVerticalDimension2(double X, double Y, double Z);
	LPDISPATCH IAddVerticalDimension2(double X, double Y, double Z);
	LPDISPATCH AddRadialDimension2(double X, double Y, double Z);
	LPDISPATCH IAddRadialDimension2(double X, double Y, double Z);
	LPDISPATCH AddDiameterDimension2(double X, double Y, double Z);
	LPDISPATCH IAddDiameterDimension2(double X, double Y, double Z);
	LPDISPATCH GetUserUnit(long UnitType);
	LPDISPATCH IGetUserUnit(long UnitType);
	LPDISPATCH InsertWeldSymbol3();
	LPDISPATCH IInsertWeldSymbol3();
	long SaveAs3(LPCTSTR NewName, long SaveAsVersion, long Options);
	CString GetUserPreferenceStringValue(long UserPreference);
	BOOL SetUserPreferenceStringValue(long UserPreference, LPCTSTR Value);
	void DeleteDesignTable();
	BOOL EditRebuild3();
	BOOL ForceRebuild3(BOOL TopOnly);
};
/////////////////////////////////////////////////////////////////////////////
// ISelectionMgr wrapper class

class ISelectionMgr : public COleDispatchDriver
{
public:
	ISelectionMgr() {}		// Calls COleDispatchDriver default constructor
	ISelectionMgr(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISelectionMgr(const ISelectionMgr& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetSelectedObjectCount();
	long GetSelectedObjectType(long AtIndex);
	LPDISPATCH GetSelectedObject(long AtIndex);
	LPUNKNOWN IGetSelectedObject(long AtIndex);
	VARIANT GetSelectionPoint(long AtIndex);
	VARIANT GetSelectionPointInSketchSpace(long AtIndex);
	LPDISPATCH GetSelectedObject2(long AtIndex);
	LPUNKNOWN IGetSelectedObject2(long AtIndex);
	BOOL IsInEditTarget(long AtIndex);
	LPDISPATCH GetSelectedObjectsComponent(long AtIndex);
	LPDISPATCH IGetSelectedObjectsComponent(long AtIndex);
	LPDISPATCH GetSelectedObject3(long AtIndex);
	LPUNKNOWN IGetSelectedObject3(long AtIndex);
	long GetSelectedObjectType2(long AtIndex);
	double IGetSelectionPoint(long AtIndex);
	double IGetSelectionPointInSketchSpace(long AtIndex);
	long GetSelectedObjectMark(long AtIndex);
	BOOL SetSelectedObjectMark(long AtIndex, long Mark, long Action);
	long DeSelect(const VARIANT& AtIndex);
	long IDeSelect(long Count, long* AtIndex);
	LPDISPATCH IGetSelectedObjectsComponent2(long AtIndex);
	LPDISPATCH CreateCallout();
	LPDISPATCH GetSelectedObjectsDrawingView(long AtIndex);
	BOOL GetEnableContourSelection();
	void SetEnableContourSelection(BOOL bNewValue);
	BOOL SetSelectionPoint(long AtIndex, double X, double Y, double Z);
	LPDISPATCH GetSelectedObject4(long AtIndex);
	LPUNKNOWN IGetSelectedObject4(long AtIndex);
	LPDISPATCH GetSelectedObject5(long AtIndex);
	LPDISPATCH GetSelectedObjectsComponent2(long AtIndex);
	LPDISPATCH CreateSelectData();
	LPDISPATCH GetSelectedObjectLoop(long AtIndex);
	long GetSelectionColor(long Mark);
	void SetSelectionColor(long Mark, long nNewValue);
	void ClearSelectionColors();
	long GetSelectedObjectCount2(long Mark);
	long GetSelectedObjectType3(long Index, long Mark);
	LPDISPATCH GetSelectedObject6(long Index, long Mark);
	VARIANT GetSelectionPoint2(long Index, long Mark);
	double IGetSelectionPoint2(long Index, long Mark);
	BOOL SetSelectionPoint2(long Index, long Mark, double X, double Y, double Z);
	VARIANT GetSelectionPointInSketchSpace2(long Index, long Mark);
	double IGetSelectionPointInSketchSpace2(long Index, long Mark);
	BOOL IsInEditTarget2(long Index, long Mark);
	LPDISPATCH GetSelectedObjectsComponent3(long Index, long Mark);
	long DeSelect2(const VARIANT& AtIndex, long Mark);
	long IDeSelect2(long Count, long* AtIndex, long Mark);
	LPDISPATCH GetSelectedObjectsDrawingView2(long Index, long Mark);
	LPDISPATCH GetSelectedObjectLoop2(long Index, long Mark);
	BOOL SetCallout(long Index, LPDISPATCH PCallout);
};
/////////////////////////////////////////////////////////////////////////////
// IComponent wrapper class

class IComponent : public COleDispatchDriver
{
public:
	IComponent() {}		// Calls COleDispatchDriver default constructor
	IComponent(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IComponent(const IComponent& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	VARIANT GetChildren();
	// method 'IGetChildren' not emitted because of invalid return type or parameter type
	long IGetChildrenCount();
	VARIANT GetXform();
	double IGetXform();
	LPDISPATCH GetBody();
	LPDISPATCH IGetBody();
	VARIANT GetMaterialPropertyValues();
	void SetMaterialPropertyValues(const VARIANT& newValue);
	double GetIMaterialPropertyValues();
	void SetIMaterialPropertyValues(double* newValue);
	long AddPropertyExtension(const VARIANT& PropertyExtension);
	VARIANT GetPropertyExtension(long Id);
	void ResetPropertyExtension();
	CString GetMaterialIdName();
	BOOL SetMaterialIdName(LPCTSTR Name);
	CString GetMaterialUserName();
	BOOL SetMaterialUserName(LPCTSTR Name);
	VARIANT GetSectionedBodies(LPDISPATCH ViewIn);
	VARIANT GetBox(BOOL IncludeRefPlanes, BOOL IncludeSketches);
	double IGetBox(BOOL IncludeRefPlanes, BOOL IncludeSketches);
	BOOL SetXform(const VARIANT& XformIn);
	BOOL ISetXform(double* XformIn);
	LPDISPATCH GetModelDoc();
	LPDISPATCH IGetModelDoc();
	BOOL IsFixed();
	LPUNKNOWN EnumRelatedBodies();
	BOOL IsSuppressed();
	LPUNKNOWN EnumSectionedBodies(LPDISPATCH ViewIn);
	BOOL IsHidden(BOOL ConsiderSuppressed);
	CString GetName();
	void SetReferencedConfiguration(LPCTSTR lpszNewValue);
	CString GetReferencedConfiguration();
	long GetSuppression();
	long SetSuppression(long State);
	long GetVisible();
	void SetVisible(long nNewValue);
	CString GetPathName();
	BOOL SetXformAndSolve(const VARIANT& XformIn);
	BOOL ISetXformAndSolve(double* XformIn);
	VARIANT GetTessTriangles(BOOL NoConversion);
	float IGetTessTriangles(BOOL NoConversion);
	long IGetTessTriangleCount();
	VARIANT GetTessNorms();
	float IGetTessNorms();
	VARIANT GetTessTriStrips(BOOL NoConversion);
	float IGetTessTriStrips(BOOL NoConversion);
	long IGetTessTriStripSize();
	VARIANT GetTessTriStripNorms();
	float IGetTessTriStripNorms();
	VARIANT GetTessTriStripEdges();
	long IGetTessTriStripEdges();
	long IGetTessTriStripEdgeSize();
	long IsDisplayDataOutOfDate();
	long GetConstrainedStatus();
	BOOL RemoveMaterialProperty();
	long IGetTemporaryBodyID();
	LPDISPATCH FindAttribute(LPDISPATCH AttributeDef, long WhichOne);
	LPDISPATCH IFindAttribute(LPDISPATCH AttributeDef, long WhichOne);
	BOOL Select(BOOL AppendFlag);
	BOOL SelectByMark(BOOL AppendFlag, long Mark);
	BOOL DeSelect();
	CString GetName2();
	void SetName2(LPCTSTR lpszNewValue);
	long GetSolving();
};
/////////////////////////////////////////////////////////////////////////////
// IBody wrapper class

class IBody : public COleDispatchDriver
{
public:
	IBody() {}		// Calls COleDispatchDriver default constructor
	IBody(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IBody(const IBody& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetFirstFace();
	LPDISPATCH IGetFirstFace();
	long GetFaceCount();
	LPDISPATCH CreateNewSurface();
	LPDISPATCH ICreateNewSurface();
	BOOL CreateBodyFromSurfaces();
	LPDISPATCH CreatePlanarSurface(const VARIANT& VRootPoint, const VARIANT& VNormal);
	LPDISPATCH ICreatePlanarSurface(const VARIANT& VRootPoint, const VARIANT& VNormal);
	LPDISPATCH CreateRevolutionSurface(LPDISPATCH ProfileCurve, const VARIANT& AxisPoint, const VARIANT& AxisDirection, const VARIANT& ProfileEndPtParams);
	LPDISPATCH ICreateRevolutionSurface(LPDISPATCH ProfileCurve, const VARIANT& AxisPoint, const VARIANT& AxisDirection, const VARIANT& ProfileEndPtParams);
	LPDISPATCH CreateBsplineSurface(const VARIANT& Props, const VARIANT& UKnots, const VARIANT& VKnots, const VARIANT& CtrlPtCoords);
	LPDISPATCH ICreateBsplineSurface(const VARIANT& Props, const VARIANT& UKnots, const VARIANT& VKnots, const VARIANT& CtrlPtCoords);
	BOOL CreateTrimmedSurface();
	LPDISPATCH AddProfileLine(const VARIANT& RootPoint, const VARIANT& Direction);
	LPDISPATCH IAddProfileLine(const VARIANT& RootPoint, const VARIANT& Direction);
	LPDISPATCH AddProfileArc(const VARIANT& Center, const VARIANT& Axis, double Radius, const VARIANT& StartPoint, const VARIANT& EndPoint);
	LPDISPATCH IAddProfileArc(const VARIANT& Center, const VARIANT& Axis, double Radius, const VARIANT& StartPoint, const VARIANT& EndPoint);
	LPDISPATCH AddProfileBspline(const VARIANT& Props, const VARIANT& Knots, const VARIANT& CtrlPtCoords);
	LPDISPATCH IAddProfileBspline(const VARIANT& Props, const VARIANT& Knots, const VARIANT& CtrlPtCoords);
	LPDISPATCH CreateExtrusionSurface(LPDISPATCH ProfileCurve, const VARIANT& AxisDirection);
	LPDISPATCH ICreateExtrusionSurface(LPDISPATCH ProfileCurve, const VARIANT& AxisDirection);
	LPDISPATCH GetFirstSelectedFace();
	LPDISPATCH IGetFirstSelectedFace();
	LPDISPATCH GetNextSelectedFace();
	LPDISPATCH IGetNextSelectedFace();
	long GetSelectedFaceCount();
	BOOL CreateBoundedSurface(BOOL UOpt, BOOL VOpt, const VARIANT& UvParams);
	long GetIgesErrorCount();
	long GetIgesErrorCode(long Index);
	LPDISPATCH Copy();
	LPDISPATCH ICopy();
	LPUNKNOWN EnumFaces();
	LPDISPATCH CreateBodyFromFaces(long NumOfFaces, const VARIANT& FaceList);
	LPDISPATCH ICreateBodyFromFaces(long NumOfFaces, const VARIANT& FaceList);
	BOOL DeleteFaces(long NumOfFaces, const VARIANT& FaceList);
	void Display(LPDISPATCH Part, long Color);
	void IDisplay(LPDISPATCH Part, long Color);
	void Hide(LPDISPATCH Part);
	void IHide(LPDISPATCH Part);
	LPDISPATCH ICreatePlanarSurfaceDLL(double* RootPoint, double* Normal);
	LPDISPATCH ICreateRevolutionSurfaceDLL(LPDISPATCH ProfileCurve, double* AxisPoint, double* AxisDirection, double* ProfileEndPtParams);
	LPDISPATCH IAddProfileLineDLL(double* RootPoint, double* Direction);
	LPDISPATCH IAddProfileArcDLL(double* Center, double* Axis, double Radius, double* StartPoint, double* EndPoint);
	LPDISPATCH ICreateBsplineSurfaceDLL(long* Properties, double* UKnotArray, double* VKnotArray, double* ControlPointCoordArray);
	LPDISPATCH IAddProfileBsplineDLL(long* Properties, double* KnotArray, double* ControlPointCoordArray);
	LPDISPATCH ICreateExtrusionSurfaceDLL(LPDISPATCH ProfileCurve, double* AxisDirection);
	void ICreateBoundedSurface(BOOL UOpt, BOOL VOpt, double* UvParams);
	void ICombineVolumes(LPDISPATCH ToolBody);
	long ISectionBySheet(LPDISPATCH Sheet, long NumMaxSections, LPDISPATCH* SectionedBodies);
	void IGetBodyBox(double* BoxCorners);
	void SetIgesInfo(LPCTSTR SystemName, double Granularity, BOOL AttemptKnitting);
	void DisplayWireFrameXOR(LPDISPATCH Part, long Color);
	void IDisplayWireFrameXOR(LPDISPATCH Part, long Color);
	void Save(LPUNKNOWN StreamIn);
	void ISave(LPUNKNOWN StreamIn);
	LPDISPATCH CreateBlendSurface(LPDISPATCH Surface1, double Range1, LPDISPATCH Surface2, double Range2, const VARIANT& StartVec, const VARIANT& EndVec, long HaveHelpVec, const VARIANT& HelpVec, long HaveHelpBox, const VARIANT& HelpBox);
	LPDISPATCH ICreateBlendSurface(LPDISPATCH Surface1, double Range1, LPDISPATCH Surface2, double Range2, double* StartVec, double* EndVec, long HaveHelpVec, double* HelpVec, long HaveHelpBox, double* HelpBox);
	LPDISPATCH CreateOffsetSurface(LPDISPATCH SurfaceIn, double Distance);
	LPDISPATCH ICreateOffsetSurface(LPDISPATCH SurfaceIn, double Distance);
	BOOL RemoveRedundantTopology();
	VARIANT GetIntersectionEdges(LPDISPATCH ToolBodyIn);
	// method 'IGetIntersectionEdges' not emitted because of invalid return type or parameter type
	long IGetIntersectionEdgeCount(LPDISPATCH ToolBodyIn);
	void RemoveFacesFromSheet(long NumOfFaces, const VARIANT& FacesToRemove);
	// method 'IRemoveFacesFromSheet' not emitted because of invalid return type or parameter type
	void ICreatePlanarTrimSurfaceDLL(long VertexCount, double* Points, double* Normal);
	VARIANT GetMaterialPropertyValues();
	void SetMaterialPropertyValues(const VARIANT& newValue);
	double GetIMaterialPropertyValues();
	void SetIMaterialPropertyValues(double* newValue);
	long AddPropertyExtension(const VARIANT& PropertyExtension);
	VARIANT GetPropertyExtension(long Id);
	void ResetPropertyExtension();
	CString GetMaterialIdName();
	BOOL SetMaterialIdName(LPCTSTR Name);
	CString GetMaterialUserName();
	BOOL SetMaterialUserName(LPCTSTR Name);
	VARIANT GetMassProperties(double Density);
	double IGetMassProperties(double Density);
	LPDISPATCH ICreatePsplineSurfaceDLL(long Dim, long Uorder, long VOrder, long Ncol, long Nrow, double* Coeffs, long Basis, double* Xform, double ScaleFactor);
	BOOL SetXform(const VARIANT& XformIn);
	BOOL ISetXform(double* XformIn);
	LPDISPATCH CreateTempBodyFromSurfaces();
	LPDISPATCH ICreateTempBodyFromSurfaces();
	VARIANT Operations(long OperationType, LPDISPATCH ToolBody, long NumMaxSections);
	long IOperations(long OperationType, LPDISPATCH ToolBody, long NumMaxSections, LPDISPATCH* ResultingBodies);
	LPDISPATCH GetSheetBody(long Index);
	LPDISPATCH IGetSheetBody(long Index);
	LPDISPATCH GetProcessedBody();
	LPDISPATCH IGetProcessedBody();
	LPDISPATCH GetProcessedBodyWithSelFace();
	LPDISPATCH IGetProcessedBodyWithSelFace();
	long Check();
	VARIANT GetExcessBodyArray();
	// method 'IGetExcessBodyArray' not emitted because of invalid return type or parameter type
	long IGetExcessBodyCount();
	BOOL CreateBaseFeature(LPDISPATCH BodyIn);
	BOOL ICreateBaseFeature(LPDISPATCH BodyIn);
	long DeleteFaces2(long NumOfFaces, const VARIANT& FaceList, long Option);
	long IDeleteFaces2(long NumOfFaces, LPDISPATCH* FaceList, long Option);
	LPDISPATCH IAddVertexPoint(double* Point);
	LPDISPATCH AddVertexPoint(const VARIANT& Point);
	BOOL GetExtremePoint(double X, double Y, double Z, double* Outx, double* Outy, double* Outz);
	long GetType();
	void IDeleteFaces3(long NumOfFaces, LPDISPATCH* FaceList, long Option, BOOL DoLocalCheck, BOOL* LocalCheckResult);
	void SetCurrentSurface(LPDISPATCH SurfaceIn);
	void ISetCurrentSurface(LPDISPATCH SurfaceIn);
	BOOL DraftBody(long NumOfFaces, const VARIANT& FaceList, const VARIANT& EdgeList, double DraftAngle, const VARIANT& Dir);
	BOOL IDraftBody(long NumOfFaces, LPDISPATCH* FaceList, LPDISPATCH* EdgeList, double DraftAngle, double* Dir);
	BOOL DeleteBlends(long NumOfFaces, const VARIANT& FaceList);
	BOOL IDeleteBlends(long NumOfFaces, LPDISPATCH* FaceList);
	VARIANT Operations2(long OperationType, LPDISPATCH ToolBody, long* ErrorCode);
	LPUNKNOWN IOperations2(long OperationType, LPDISPATCH ToolBody, long* ErrorCode);
	VARIANT GetBodyBox();
	BOOL DeleteBlends2(long NumOfFaces, const VARIANT& FaceList, BOOL DoLocalCheck);
	BOOL IDeleteBlends2(long NumOfFaces, LPDISPATCH* FaceList, BOOL DoLocalCheck);
	LPDISPATCH GetTessellation(const VARIANT& FaceList);
	LPDISPATCH IGetTessellation(long NumOfFaces, LPDISPATCH* FaceList);
	BOOL GetVisible();
	VARIANT MatchedBoolean(long OperationType, LPDISPATCH ToolBody, long NumOfMatchingFaces, const VARIANT& FaceList1, const VARIANT& FaceList2, long* ErrorCode);
	LPUNKNOWN IMatchedBoolean(long OperationType, LPDISPATCH ToolBody, long NumOfMatchingFaces, LPDISPATCH* FaceList1, LPDISPATCH* FaceList2, long* ErrorCode);
	long GetEdgeCount();
};
/////////////////////////////////////////////////////////////////////////////
// IFace wrapper class

class IFace : public COleDispatchDriver
{
public:
	IFace() {}		// Calls COleDispatchDriver default constructor
	IFace(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IFace(const IFace& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	VARIANT GetNormal();
	void SetNormal(const VARIANT& newValue);
	CString GetMaterialUserName();
	void SetMaterialUserName(LPCTSTR lpszNewValue);
	CString GetMaterialIdName();
	void SetMaterialIdName(LPCTSTR lpszNewValue);
	VARIANT GetMaterialPropertyValues();
	void SetMaterialPropertyValues(const VARIANT& newValue);
	double GetINormal();
	void SetINormal(double* newValue);
	LPDISPATCH GetNextFace();
	LPDISPATCH IGetNextFace();
	LPDISPATCH GetSurface();
	LPDISPATCH IGetSurface();
	long GetEdgeCount();
	VARIANT GetEdges();
	// method 'IGetEdges' not emitted because of invalid return type or parameter type
	LPDISPATCH GetFeature();
	LPDISPATCH IGetFeature();
	long GetFeatureId();
	VARIANT GetTrimCurves(BOOL WantCubic);
	VARIANT GetUVBounds();
	BOOL FaceInSurfaceSense();
	long GetLoopCount();
	LPDISPATCH GetFirstLoop();
	LPDISPATCH IGetFirstLoop();
	BOOL IsSame(LPDISPATCH FaceIn);
	BOOL IIsSame(LPDISPATCH FaceIn);
	long AddPropertyExtension(const VARIANT& PropertyExtension);
	VARIANT GetPropertyExtension(long Id);
	void ResetPropertyExtension();
	VARIANT GetTessTriangles(BOOL NoConversion);
	VARIANT GetTessNorms();
	VARIANT GetTessTriStrips(BOOL NoConversion);
	VARIANT GetTessTriStripNorms();
	LPUNKNOWN EnumLoops();
	LPUNKNOWN EnumEdges();
	LPDISPATCH GetBody();
	LPDISPATCH IGetBody();
	float IGetTessTriangles(BOOL NoConversion);
	float IGetTessNorms();
	long GetTessTriangleCount();
	float IGetTessTriStrips(BOOL NoConversion);
	float IGetTessTriStripNorms();
	long GetTessTriStripSize();
	double IGetUVBounds();
	VARIANT GetClosestPointOn(double X, double Y, double Z);
	double IGetClosestPointOn(double X, double Y, double Z);
	void Highlight(BOOL State);
	void IHighlight(BOOL State);
	VARIANT GetTrimCurveTopology();
	// method 'IGetTrimCurveTopology' not emitted because of invalid return type or parameter type
	long GetTrimCurveTopologyCount();
	VARIANT GetTrimCurveTopologyTypes();
	long IGetTrimCurveTopologyTypes();
	BOOL RemoveRedundantTopology();
	LPDISPATCH CreateSheetBodyByFaceExtension(const VARIANT& BoxLowIn, const VARIANT& BoxHighIn);
	LPDISPATCH ICreateSheetBodyByFaceExtension(double* BoxLowIn, double* BoxHighIn);
	double GetArea();
	VARIANT GetBox();
	double IGetBox();
	LPDISPATCH RemoveInnerLoops(long NumOfLoops, const VARIANT& InnerLoopsIn);
	LPDISPATCH IRemoveInnerLoops(long NumOfLoops, LPDISPATCH* InnerLoopsIn);
	LPDISPATCH CreateSheetBody();
	LPDISPATCH ICreateSheetBody();
	VARIANT GetSilhoutteEdges(double* Root, double* Normal);
	// method 'IGetSilhoutteEdges' not emitted because of invalid return type or parameter type
	long IGetSilhoutteEdgeCount(double* Root, double* Normal);
	long IGetTrimCurveSize(BOOL WantCubic);
	double IGetTrimCurve();
	double GetIMaterialPropertyValues();
	void SetIMaterialPropertyValues(double* newValue);
	long GetFaceId();
	void SetFaceId(long IdIn);
	long IGetTrimCurveSize2(long WantCubic, long WantNRational);
	VARIANT GetSilhoutteEdgesVB(double Xroot, double Yroot, double Zroot, double Xnormal, double Ynormal, double Znormal);
	void RemoveFaceId(long IdIn);
	VARIANT GetTrimCurves2(BOOL WantCubic, BOOL WantNRational);
	long GetShellType();
	// method 'IGetFacetData' not emitted because of invalid return type or parameter type
	VARIANT GetTessTriStripEdges();
	long IGetTessTriStripEdges();
	long IGetTessTriStripEdgeSize();
	BOOL RemoveMaterialProperty();
	LPDISPATCH GetPatternSeedFeature();
	LPDISPATCH IGetPatternSeedFeature();
};
/////////////////////////////////////////////////////////////////////////////
// ISurface wrapper class

class ISurface : public COleDispatchDriver
{
public:
	ISurface() {}		// Calls COleDispatchDriver default constructor
	ISurface(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISurface(const ISurface& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	VARIANT GetPlaneParams();
	VARIANT GetCylinderParams();
	VARIANT GetConeParams();
	VARIANT GetSphereParams();
	VARIANT GetTorusParams();
	BOOL IsPlane();
	BOOL IsCylinder();
	BOOL IsCone();
	long Identity();
	BOOL IsSphere();
	BOOL IsTorus();
	BOOL IsParametric();
	BOOL IsBlending();
	BOOL IsOffset();
	BOOL IsSwept();
	BOOL IsRevolved();
	BOOL IsForeign();
	VARIANT Parameterization();
	VARIANT Evaluate(double UParam, double VParam, long NumUDeriv, long NumVDeriv);
	VARIANT GetBSurfParams(BOOL WantCubicRational, const VARIANT& VP0);
	BOOL AddTrimmingLoop(long NCrvs, const VARIANT& VOrder, const VARIANT& VDim, const VARIANT& VPeriodic, const VARIANT& VNumKnots, const VARIANT& VNumCtrlPoints, const VARIANT& VKnots, const VARIANT& VCtrlPointDbls);
	LPDISPATCH CreateNewCurve();
	LPDISPATCH ICreateNewCurve();
	VARIANT GetRevsurfParams();
	VARIANT GetExtrusionsurfParams();
	LPDISPATCH GetProfileCurve();
	LPDISPATCH IGetProfileCurve();
	VARIANT ReverseEvaluate(double PositionX, double PositionY, double PositionZ);
	double GetIPlaneParams();
	double GetICylinderParams();
	double GetIConeParams();
	double GetISphereParams();
	double GetITorusParams();
	double IReverseEvaluate(double PositionX, double PositionY, double PositionZ);
	double IGetRevsurfParams();
	double IGetExtrusionsurfParams();
	double IParameterization();
	double IEvaluate(double UParam, double VParam, long NumUDeriv, long NumVDeriv);
	double IGetBSurfParams();
	long IGetBSurfParamsSize(BOOL WantCubicRational, double* Range);
	void IAddTrimmingLoop(long CurveCount, long* Order, long* Dim, long* Periodic, long* NumKnots, long* NumCtrlPoints, double* Knots, double* CtrlPointDbls);
	VARIANT EvaluateAtPoint(double PositionX, double PositionY, double PositionZ);
	double IEvaluateAtPoint(double PositionX, double PositionY, double PositionZ);
	double GetOffsetSurfParams();
	long IGetBSurfParamsSize2(BOOL WantCubic, BOOL WantNonRational, double* Range);
	LPDISPATCH Copy();
	LPDISPATCH ICopy();
	LPDISPATCH CreateTrimmedSheet(const VARIANT& Curves);
	LPDISPATCH ICreateTrimmedSheet(long NCurves, LPDISPATCH* Curves);
	BOOL AddTrimmingLoop2(long NCrvs, const VARIANT& VOrder, const VARIANT& VDim, const VARIANT& VPeriodic, const VARIANT& VNumKnots, const VARIANT& VNumCtrlPoints, const VARIANT& VKnots, const VARIANT& VCtrlPointDbls, const VARIANT& UvRange);
	void IAddTrimmingLoop2(long CurveCount, long* Order, long* Dim, long* Periodic, long* NumKnots, long* NumCtrlPoints, double* Knots, double* CtrlPointDbls, double* UvRange);
	VARIANT GetBSurfParams2(BOOL WantCubic, BOOL WantNonRational, const VARIANT& VP0, double Tolerance, BOOL* Sense);
	long IGetBSurfParamsSize3(BOOL WantCubic, BOOL WantNonRational, double* Range, double Tolerance, BOOL* Sense);
	VARIANT GetClosestPointOn(double X, double Y, double Z);
	double IGetClosestPointOn(double X, double Y, double Z);
	double GetOffsetSurfParams2(LPDISPATCH* BaseSurf, BOOL* Sense);
	double IGetOffsetSurfParams2(LPDISPATCH* BaseSurf, BOOL* Sense);
	long GetIntersectSurfaceCount(LPDISPATCH OtherSurface);
	BOOL IIntersectSurface(LPDISPATCH OtherSurf, long CurveCount, LPDISPATCH* CurveArray, double* BoundsArray);
	BOOL IntersectSurface(LPDISPATCH OtherSurf, VARIANT* CurveArray, VARIANT* BoundsArray);
	long GetIntersectCurveCount(LPDISPATCH OtherCurve, double* CurveBound);
	BOOL IIntersectCurve(LPDISPATCH OtherCurve, double* CurveBound, long PointCount, double* PointArray, double* TArray, double* UvArray);
	BOOL IntersectCurve(LPDISPATCH OtherCurve, const VARIANT& CurveBound, VARIANT* PointArray, VARIANT* TArray, VARIANT* UvArray);
	LPDISPATCH MakeIsoCurve(BOOL UorV, double UvValue);
	LPDISPATCH IMakeIsoCurve(BOOL UorV, double UvValue);
	LPDISPATCH ICreateTrimmedSheet2(long NCurves, LPDISPATCH* Curves);
	BOOL MakeIsoCurves(const VARIANT& UvRange, const VARIANT& Dir, double Angle, double Tol, VARIANT* Curves, VARIANT* CurveBounds);
	long IGetMakeIsoCurvesCount(double* UvRange, double* Dir, double Angle, double Tol);
	BOOL IMakeIsoCurves(double* UvRange, double* Dir, double Angle, double Tol, long CurveCount, LPDISPATCH* Curves, double* CurveBounds);
	long GetIntersectCurveCount2(LPDISPATCH OtherCurve, double* CurveBound);
	BOOL IIntersectCurve2(LPDISPATCH OtherCurve, double* CurveBound, long PointCount, double* PointArray, double* TArray, double* UvArray);
	BOOL IntersectCurve2(LPDISPATCH OtherCurve, const VARIANT& CurveBound, VARIANT* PointArray, VARIANT* TArray, VARIANT* UvArray);
};
/////////////////////////////////////////////////////////////////////////////
// ICurve wrapper class

class ICurve : public COleDispatchDriver
{
public:
	ICurve() {}		// Calls COleDispatchDriver default constructor
	ICurve(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ICurve(const ICurve& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	VARIANT GetLineParams();
	VARIANT GetCircleParams();
	long Identity();
	BOOL IsCircle();
	BOOL IsLine();
	BOOL IsBcurve();
	VARIANT GetBCurveParams(BOOL WantCubicIn);
	VARIANT ConvertLineToBcurve(const VARIANT& StartPoint, const VARIANT& EndPoint);
	VARIANT ConvertArcToBcurve(const VARIANT& Center, const VARIANT& Axis, const VARIANT& Start, const VARIANT& End);
	LPDISPATCH ReverseCurve();
	LPDISPATCH IReverseCurve();
	VARIANT GetPCurveParams();
	double GetILineParams();
	double GetICircleParams();
	double IGetBCurveParams();
	long IGetBCurveParamsSize(BOOL WantCubicIn);
	long IConvertLineToBcurveSize(double* StartPoint, double* EndPoint);
	long IConvertArcToBcurveSize(double* Center, double* Axis, double* Start, double* End);
	double IGetPCurveParams();
	long IGetPCurveParamsSize();
	double GetLength(double StartParam, double EndParam);
	long IConvertPcurveToBcurveSize(long Dim, long Order, long Nsegs, double* Coeffs, long Basis, double* Xform, double ScaleFactor);
	VARIANT GetSplinePts(const VARIANT& ParamsArrayIn);
	double IGetSplinePts();
	long IGetSplinePtsSize(long* PropArray, double* KnotsArray, double* CntrlPntCoordArray);
	long IGetBCurveParamsSize2(BOOL WantCubic, BOOL WantNRational);
	LPDISPATCH Copy();
	LPDISPATCH ICopy();
	VARIANT GetTessPts(double ChordTolerance, double LengthTolerance, const VARIANT& StartPoint, const VARIANT& EndPoint);
	double IGetTessPts(double ChordTolerance, double LengthTolerance, double* StartPoint, double* EndPoint);
	long IGetTessPtsSize(double ChordTolerance, double LengthTolerance, double* StartPoint, double* EndPoint);
	VARIANT IntersectCurve(LPDISPATCH OtherCurve, const VARIANT& ThisStartPoint, const VARIANT& ThisEndPoint, const VARIANT& OtherStartPoint, const VARIANT& OtherEndPoint);
	double IIntersectCurve(LPDISPATCH OtherCurve, double* ThisStartPoint, double* ThisEndPoint, double* OtherStartPoint, double* OtherEndPoint);
	long IIntersectCurveSize(LPDISPATCH OtherCurve, double* ThisStartPoint, double* ThisEndPoint, double* OtherStartPoint, double* OtherEndPoint);
	LPDISPATCH CreateTrimmedCurve(double X1, double Y1, double Z1, double X2, double Y2, double Z2);
	LPDISPATCH ICreateTrimmedCurve(double* Start, double* End);
	BOOL IsEllipse();
	VARIANT GetEllipseParams();
	void IGetEllipseParams(double* ParamArray);
	VARIANT Evaluate(double Parameter);
	double IEvaluate(double Parameter);
	VARIANT GetClosestPointOn(double X, double Y, double Z);
	double IGetClosestPointOn(double X, double Y, double Z);
	BOOL GetEndParams(double* Start, double* End, BOOL* IsClosed, BOOL* IsPeriodic);
	double GetLength2(double StartParam, double EndParam);
	LPDISPATCH MakeBsplineCurve();
	LPDISPATCH CreateWireBody();
	LPDISPATCH GetBaseCurve();
	BOOL IsTrimmedCurve();
	LPDISPATCH CreateTrimmedCurve2(double X1, double Y1, double Z1, double X2, double Y2, double Z2);
	LPDISPATCH CreateSurfaceCurve(LPDISPATCH Surf, long* Error);
	void ApplyTransform(LPDISPATCH Xform);
};
/////////////////////////////////////////////////////////////////////////////
// IBody2 wrapper class

class IBody2 : public COleDispatchDriver
{
public:
	IBody2() {}		// Calls COleDispatchDriver default constructor
	IBody2(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IBody2(const IBody2& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetFirstFace();
	LPDISPATCH IGetFirstFace();
	long GetFaceCount();
	LPDISPATCH CreateNewSurface();
	LPDISPATCH ICreateNewSurface();
	BOOL CreateBodyFromSurfaces();
	LPDISPATCH CreatePlanarSurface(const VARIANT& VRootPoint, const VARIANT& VNormal);
	LPDISPATCH ICreatePlanarSurface(const VARIANT& VRootPoint, const VARIANT& VNormal);
	LPDISPATCH CreateRevolutionSurface(LPDISPATCH ProfileCurve, const VARIANT& AxisPoint, const VARIANT& AxisDirection, const VARIANT& ProfileEndPtParams);
	LPDISPATCH ICreateRevolutionSurface(LPDISPATCH ProfileCurve, const VARIANT& AxisPoint, const VARIANT& AxisDirection, const VARIANT& ProfileEndPtParams);
	LPDISPATCH CreateBsplineSurface(const VARIANT& Props, const VARIANT& UKnots, const VARIANT& VKnots, const VARIANT& CtrlPtCoords);
	LPDISPATCH ICreateBsplineSurface(const VARIANT& Props, const VARIANT& UKnots, const VARIANT& VKnots, const VARIANT& CtrlPtCoords);
	BOOL CreateTrimmedSurface();
	LPDISPATCH AddProfileLine(const VARIANT& RootPoint, const VARIANT& Direction);
	LPDISPATCH IAddProfileLine(const VARIANT& RootPoint, const VARIANT& Direction);
	LPDISPATCH AddProfileArc(const VARIANT& Center, const VARIANT& Axis, double Radius, const VARIANT& StartPoint, const VARIANT& EndPoint);
	LPDISPATCH IAddProfileArc(const VARIANT& Center, const VARIANT& Axis, double Radius, const VARIANT& StartPoint, const VARIANT& EndPoint);
	LPDISPATCH AddProfileBspline(const VARIANT& Props, const VARIANT& Knots, const VARIANT& CtrlPtCoords);
	LPDISPATCH IAddProfileBspline(const VARIANT& Props, const VARIANT& Knots, const VARIANT& CtrlPtCoords);
	LPDISPATCH CreateExtrusionSurface(LPDISPATCH ProfileCurve, const VARIANT& AxisDirection);
	LPDISPATCH ICreateExtrusionSurface(LPDISPATCH ProfileCurve, const VARIANT& AxisDirection);
	LPDISPATCH GetFirstSelectedFace();
	LPDISPATCH IGetFirstSelectedFace();
	LPDISPATCH GetNextSelectedFace();
	LPDISPATCH IGetNextSelectedFace();
	long GetSelectedFaceCount();
	BOOL CreateBoundedSurface(BOOL UOpt, BOOL VOpt, const VARIANT& UvParams);
	long GetIgesErrorCount();
	long GetIgesErrorCode(long Index);
	LPDISPATCH Copy();
	LPDISPATCH ICopy();
	LPUNKNOWN EnumFaces();
	LPDISPATCH CreateBodyFromFaces(long NumOfFaces, const VARIANT& FaceList);
	LPDISPATCH ICreateBodyFromFaces(long NumOfFaces, const VARIANT& FaceList);
	BOOL DeleteFaces(long NumOfFaces, const VARIANT& FaceList);
	void Display(LPDISPATCH Part, long Color);
	void IDisplay(LPDISPATCH Part, long Color);
	void Hide(LPDISPATCH Part);
	void IHide(LPDISPATCH Part);
	LPDISPATCH ICreatePlanarSurfaceDLL(double* RootPoint, double* Normal);
	LPDISPATCH ICreateRevolutionSurfaceDLL(LPDISPATCH ProfileCurve, double* AxisPoint, double* AxisDirection, double* ProfileEndPtParams);
	LPDISPATCH IAddProfileLineDLL(double* RootPoint, double* Direction);
	LPDISPATCH IAddProfileArcDLL(double* Center, double* Axis, double Radius, double* StartPoint, double* EndPoint);
	LPDISPATCH ICreateBsplineSurfaceDLL(long* Properties, double* UKnotArray, double* VKnotArray, double* ControlPointCoordArray);
	LPDISPATCH IAddProfileBsplineDLL(long* Properties, double* KnotArray, double* ControlPointCoordArray);
	LPDISPATCH ICreateExtrusionSurfaceDLL(LPDISPATCH ProfileCurve, double* AxisDirection);
	void ICreateBoundedSurface(BOOL UOpt, BOOL VOpt, double* UvParams);
	void ICombineVolumes(LPDISPATCH ToolBody);
	long ISectionBySheet(LPDISPATCH Sheet, long NumMaxSections, LPDISPATCH* SectionedBodies);
	void IGetBodyBox(double* BoxCorners);
	void SetIgesInfo(LPCTSTR SystemName, double Granularity, BOOL AttemptKnitting);
	void DisplayWireFrameXOR(LPDISPATCH Part, long Color);
	void IDisplayWireFrameXOR(LPDISPATCH Part, long Color);
	void Save(LPUNKNOWN StreamIn);
	void ISave(LPUNKNOWN StreamIn);
	LPDISPATCH CreateBlendSurface(LPDISPATCH Surface1, double Range1, LPDISPATCH Surface2, double Range2, const VARIANT& StartVec, const VARIANT& EndVec, long HaveHelpVec, const VARIANT& HelpVec, long HaveHelpBox, const VARIANT& HelpBox);
	LPDISPATCH ICreateBlendSurface(LPDISPATCH Surface1, double Range1, LPDISPATCH Surface2, double Range2, double* StartVec, double* EndVec, long HaveHelpVec, double* HelpVec, long HaveHelpBox, double* HelpBox);
	LPDISPATCH CreateOffsetSurface(LPDISPATCH SurfaceIn, double Distance);
	LPDISPATCH ICreateOffsetSurface(LPDISPATCH SurfaceIn, double Distance);
	BOOL RemoveRedundantTopology();
	VARIANT GetIntersectionEdges(LPDISPATCH ToolBodyIn);
	LPDISPATCH IGetIntersectionEdges(LPDISPATCH ToolBodyIn);
	long IGetIntersectionEdgeCount(LPDISPATCH ToolBodyIn);
	void RemoveFacesFromSheet(long NumOfFaces, const VARIANT& FacesToRemove);
	void IRemoveFacesFromSheet(long NumOfFaces, LPDISPATCH* FacesToRemove);
	void ICreatePlanarTrimSurfaceDLL(long VertexCount, double* Points, double* Normal);
	VARIANT GetMaterialPropertyValues();
	void SetMaterialPropertyValues(const VARIANT& newValue);
	double GetIMaterialPropertyValues();
	void SetIMaterialPropertyValues(double* newValue);
	long AddPropertyExtension(const VARIANT& PropertyExtension);
	VARIANT GetPropertyExtension(long Id);
	void ResetPropertyExtension();
	CString GetMaterialIdName();
	BOOL SetMaterialIdName(LPCTSTR Name);
	CString GetMaterialUserName();
	BOOL SetMaterialUserName(LPCTSTR Name);
	VARIANT GetMassProperties(double Density);
	double IGetMassProperties(double Density);
	LPDISPATCH ICreatePsplineSurfaceDLL(long Dim, long Uorder, long VOrder, long Ncol, long Nrow, double* Coeffs, long Basis, double* Xform, double ScaleFactor);
	BOOL SetXform(const VARIANT& XformIn);
	BOOL ISetXform(double* XformIn);
	LPDISPATCH CreateTempBodyFromSurfaces();
	LPDISPATCH ICreateTempBodyFromSurfaces();
	VARIANT Operations(long OperationType, LPDISPATCH ToolBody, long NumMaxSections);
	long IOperations(long OperationType, LPDISPATCH ToolBody, long NumMaxSections, LPDISPATCH* ResultingBodies);
	LPDISPATCH GetSheetBody(long Index);
	LPDISPATCH IGetSheetBody(long Index);
	LPDISPATCH GetProcessedBody();
	LPDISPATCH IGetProcessedBody();
	LPDISPATCH GetProcessedBodyWithSelFace();
	LPDISPATCH IGetProcessedBodyWithSelFace();
	long Check();
	VARIANT GetExcessBodyArray();
	LPDISPATCH IGetExcessBodyArray();
	long IGetExcessBodyCount();
	BOOL CreateBaseFeature(LPDISPATCH BodyIn);
	BOOL ICreateBaseFeature(LPDISPATCH BodyIn);
	long DeleteFaces2(long NumOfFaces, const VARIANT& FaceList, long Option);
	long IDeleteFaces2(long NumOfFaces, LPDISPATCH* FaceList, long Option);
	LPDISPATCH IAddVertexPoint(double* Point);
	LPDISPATCH AddVertexPoint(const VARIANT& Point);
	BOOL GetExtremePoint(double X, double Y, double Z, double* Outx, double* Outy, double* Outz);
	long GetType();
	void IDeleteFaces3(long NumOfFaces, LPDISPATCH* FaceList, long Option, BOOL DoLocalCheck, BOOL* LocalCheckResult);
	void SetCurrentSurface(LPDISPATCH SurfaceIn);
	void ISetCurrentSurface(LPDISPATCH SurfaceIn);
	BOOL DraftBody(long NumOfFaces, const VARIANT& FaceList, const VARIANT& EdgeList, double DraftAngle, const VARIANT& Dir);
	BOOL IDraftBody(long NumOfFaces, LPDISPATCH* FaceList, LPDISPATCH* EdgeList, double DraftAngle, double* Dir);
	BOOL DeleteBlends(long NumOfFaces, const VARIANT& FaceList);
	BOOL IDeleteBlends(long NumOfFaces, LPDISPATCH* FaceList);
	VARIANT Operations2(long OperationType, LPDISPATCH ToolBody, long* ErrorCode);
	LPUNKNOWN IOperations2(long OperationType, LPDISPATCH ToolBody, long* ErrorCode);
	VARIANT GetBodyBox();
	BOOL DeleteBlends2(long NumOfFaces, const VARIANT& FaceList, BOOL DoLocalCheck);
	BOOL IDeleteBlends2(long NumOfFaces, LPDISPATCH* FaceList, BOOL DoLocalCheck);
	LPDISPATCH GetTessellation(const VARIANT& FaceList);
	LPDISPATCH IGetTessellation(long NumOfFaces, LPDISPATCH* FaceList);
	BOOL GetVisible();
	VARIANT MatchedBoolean(long OperationType, LPDISPATCH ToolBody, long NumOfMatchingFaces, const VARIANT& FaceList1, const VARIANT& FaceList2, long* ErrorCode);
	LPUNKNOWN IMatchedBoolean(long OperationType, LPDISPATCH ToolBody, long NumOfMatchingFaces, LPDISPATCH* FaceList1, LPDISPATCH* FaceList2, long* ErrorCode);
	long GetEdgeCount();
	LPDISPATCH CreateRuledSurface(LPDISPATCH Curve1, LPDISPATCH Curve2, const VARIANT& ApexPoint);
	LPDISPATCH ICreateRuledSurface(LPDISPATCH Curve1, LPDISPATCH Curve2, double* ApexPoint);
	LPDISPATCH AddProfileBsplineByPts(long NumPoints, const VARIANT& PointArray);
	LPDISPATCH IAddProfileBsplineByPts(long NumPoints, double* PointArray);
	VARIANT GetEdges();
	LPDISPATCH IGetEdges(long Count);
	BOOL ApplyTransform(LPDISPATCH Xform);
	BOOL Select(BOOL Append, long Mark);
	BOOL DeSelect();
	VARIANT MatchedBoolean2(long OperationType, const VARIANT& ToolBody, long NumOfMatchingFaces, const VARIANT& FaceList1, const VARIANT& FaceList2, long* ErrorCode);
	LPUNKNOWN IMatchedBoolean2(long OperationType, long ToolBodyCount, LPDISPATCH* ToolBodyArr, long NumOfMatchingFaces, LPDISPATCH* FaceList1, LPDISPATCH* FaceList2, long* ErrorCode);
	void HideBody(BOOL BHide);
	BOOL GetIsSafe();
	LPDISPATCH GetSafeBody();
	LPDISPATCH GetProcessedBody2(double MaxUAngle, double MaxVAngle);
	LPDISPATCH FindAttribute(LPDISPATCH AttributeDef, long WhichOne);
	VARIANT MatchedBoolean3(long OperationType, const VARIANT& ToolBody, long NumOfMatchingFaces, const VARIANT& FaceList1, const VARIANT& FaceList2, long* ErrorCode);
	LPUNKNOWN IMatchedBoolean3(long OperationType, long ToolBodyCount, LPDISPATCH* ToolBodyArr, long NumOfMatchingFaces, LPDISPATCH* FaceList1, LPDISPATCH* FaceList2, long* ErrorCode);
	CString GetSelectionId();
	VARIANT GetMaterialPropertyValues2();
	void SetMaterialPropertyValues2(const VARIANT& newValue);
	double GetIMaterialPropertyValues2();
	void SetIMaterialPropertyValues2(double* newValue);
	long AddPropertyExtension2(const VARIANT& PropertyExtension);
	VARIANT GetPropertyExtension2(long Id);
	void ResetPropertyExtension2();
	CString GetMaterialIdName2();
	BOOL SetMaterialIdName2(LPCTSTR Name);
	CString GetMaterialUserName2();
	BOOL SetMaterialUserName2(LPCTSTR Name);
	double IGetMaterialPropertyValuesForFace(LPDISPATCH FaceIn);
	void Display2(LPDISPATCH Part, long Color, long Option);
	BOOL IsTemporaryBody();
	long Check2();
	BOOL CreatePlanarTrimSurfaceDLL(const VARIANT& Points, const VARIANT& Normal);
	BOOL DeleteFaces3(const VARIANT& FaceList, long Option, BOOL DoLocalCheck, BOOL* LocalCheckResult);
	LPDISPATCH Diagnose();
	LPDISPATCH GetCheck3();
	VARIANT DeleteFacesMakeSheetBodies(const VARIANT& FaceList);
	long IDeleteFacesMakeSheetBodiesCount(long FaceCount, LPDISPATCH* FaceList);
	LPDISPATCH IDeleteFacesMakeSheetBodies(long FaceCount, LPDISPATCH* FaceList, long SheetCount);
	LPDISPATCH GetTexture(LPCTSTR Config_name);
	BOOL SetTexture(LPCTSTR Config_name, LPDISPATCH TextureIn);
	BOOL RemoveTexture(LPCTSTR Config_name);
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	LPDISPATCH MakeOffset(double Distance, BOOL Direction);
	LPDISPATCH ExtendSurface(const VARIANT& EdgesToExtend, BOOL ExtendLinear, long EndCondition, double Dist, LPDISPATCH PUpToVtx, LPDISPATCH PUpToFace);
	LPDISPATCH IExtendSurface(long EdgeCount, LPDISPATCH* EdgesToExtend, BOOL ExtendLinear, long EndCondition, double Dist, LPDISPATCH PUpToVtx, LPDISPATCH PUpToFace);
	LPDISPATCH OffsetPlanarWireBody(double Distance, LPDISPATCH Normal, long Option);
	VARIANT AddConstantFillets(double Radius, const VARIANT& EdgesToFillet);
};
/////////////////////////////////////////////////////////////////////////////
// IFace2 wrapper class

class IFace2 : public COleDispatchDriver
{
public:
	IFace2() {}		// Calls COleDispatchDriver default constructor
	IFace2(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IFace2(const IFace2& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	VARIANT GetNormal();
	void SetNormal(const VARIANT& newValue);
	CString GetMaterialUserName();
	void SetMaterialUserName(LPCTSTR lpszNewValue);
	CString GetMaterialIdName();
	void SetMaterialIdName(LPCTSTR lpszNewValue);
	VARIANT GetMaterialPropertyValues();
	void SetMaterialPropertyValues(const VARIANT& newValue);
	double GetINormal();
	void SetINormal(double* newValue);
	LPDISPATCH GetNextFace();
	LPDISPATCH IGetNextFace();
	LPDISPATCH GetSurface();
	LPDISPATCH IGetSurface();
	long GetEdgeCount();
	VARIANT GetEdges();
	LPDISPATCH IGetEdges();
	LPDISPATCH GetFeature();
	LPDISPATCH IGetFeature();
	long GetFeatureId();
	VARIANT GetTrimCurves(BOOL WantCubic);
	VARIANT GetUVBounds();
	BOOL FaceInSurfaceSense();
	long GetLoopCount();
	LPDISPATCH GetFirstLoop();
	LPDISPATCH IGetFirstLoop();
	BOOL IsSame(LPDISPATCH FaceIn);
	BOOL IIsSame(LPDISPATCH FaceIn);
	long AddPropertyExtension(const VARIANT& PropertyExtension);
	VARIANT GetPropertyExtension(long Id);
	void ResetPropertyExtension();
	VARIANT GetTessTriangles(BOOL NoConversion);
	VARIANT GetTessNorms();
	VARIANT GetTessTriStrips(BOOL NoConversion);
	VARIANT GetTessTriStripNorms();
	LPUNKNOWN EnumLoops();
	LPUNKNOWN EnumEdges();
	LPDISPATCH GetBody();
	LPDISPATCH IGetBody();
	float IGetTessTriangles(BOOL NoConversion);
	float IGetTessNorms();
	long GetTessTriangleCount();
	float IGetTessTriStrips(BOOL NoConversion);
	float IGetTessTriStripNorms();
	long GetTessTriStripSize();
	double IGetUVBounds();
	VARIANT GetClosestPointOn(double X, double Y, double Z);
	double IGetClosestPointOn(double X, double Y, double Z);
	void Highlight(BOOL State);
	void IHighlight(BOOL State);
	VARIANT GetTrimCurveTopology();
	LPDISPATCH IGetTrimCurveTopology();
	long GetTrimCurveTopologyCount();
	VARIANT GetTrimCurveTopologyTypes();
	long IGetTrimCurveTopologyTypes();
	BOOL RemoveRedundantTopology();
	LPDISPATCH CreateSheetBodyByFaceExtension(const VARIANT& BoxLowIn, const VARIANT& BoxHighIn);
	LPDISPATCH ICreateSheetBodyByFaceExtension(double* BoxLowIn, double* BoxHighIn);
	double GetArea();
	VARIANT GetBox();
	double IGetBox();
	LPDISPATCH RemoveInnerLoops(long NumOfLoops, const VARIANT& InnerLoopsIn);
	LPDISPATCH IRemoveInnerLoops(long NumOfLoops, LPDISPATCH* InnerLoopsIn);
	LPDISPATCH CreateSheetBody();
	LPDISPATCH ICreateSheetBody();
	VARIANT GetSilhoutteEdges(double* Root, double* Normal);
	LPDISPATCH IGetSilhoutteEdges(double* Root, double* Normal);
	long IGetSilhoutteEdgeCount(double* Root, double* Normal);
	long IGetTrimCurveSize(BOOL WantCubic);
	double IGetTrimCurve();
	double GetIMaterialPropertyValues();
	void SetIMaterialPropertyValues(double* newValue);
	long GetFaceId();
	void SetFaceId(long IdIn);
	long IGetTrimCurveSize2(long WantCubic, long WantNRational);
	VARIANT GetSilhoutteEdgesVB(double Xroot, double Yroot, double Zroot, double Xnormal, double Ynormal, double Znormal);
	void RemoveFaceId(long IdIn);
	VARIANT GetTrimCurves2(BOOL WantCubic, BOOL WantNRational);
	long GetShellType();
	void IGetFacetData(long FacetMesh, long* NFacets, long* NStrips, long* StripVertexNums, float* VertexCoords, float* NormalCoords);
	VARIANT GetTessTriStripEdges();
	long IGetTessTriStripEdges();
	long IGetTessTriStripEdgeSize();
	BOOL RemoveMaterialProperty();
	LPDISPATCH GetPatternSeedFeature();
	LPDISPATCH IGetPatternSeedFeature();
	void SetMaterialPropertyValues2(const VARIANT& Material_values, long Config_opt, const VARIANT& Config_names);
	void ISetMaterialPropertyValues2(double* Material_values, long Config_opt, long Config_count, BSTR* Config_names);
	VARIANT GetMaterialPropertyValues2(long Config_opt, const VARIANT& Config_names);
	double IGetMaterialPropertyValues2(long Config_opt, long Config_count, BSTR* Config_names);
	float IGetTessTextures();
	BOOL RemoveMaterialProperty2(long Config_opt, const VARIANT& Config_names);
	BOOL IRemoveMaterialProperty2(long Config_opt, long Config_count, BSTR* Config_names);
	void ImprintCurve(LPDISPATCH Curve, VARIANT* NewEdges, VARIANT* NewFaces);
	void ImprintCurveCount(LPDISPATCH Curve, long* NewEdgeCount, long* NewFaceCount);
	void IImprintCurve(LPDISPATCH Curve, long NewEdgeCount, LPDISPATCH* NewEdges, long NewFaceCount, LPDISPATCH* NewFaces);
	LPDISPATCH GetCheck();
	BOOL AttachSurface(LPDISPATCH SurfIn, BOOL SenseIn);
	BOOL DetachSurface();
	LPDISPATCH GetTexture(LPCTSTR Config_name);
	BOOL SetTexture(LPCTSTR Config_name, LPDISPATCH TextureIn);
	BOOL RemoveTexture(LPCTSTR Config_name);
	VARIANT GetTessTextures();
};
/////////////////////////////////////////////////////////////////////////////
// IEdge wrapper class

class IEdge : public COleDispatchDriver
{
public:
	IEdge() {}		// Calls COleDispatchDriver default constructor
	IEdge(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IEdge(const IEdge& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetCurve();
	LPDISPATCH IGetCurve();
	VARIANT GetCurveParams();
	double IGetCurveParams();
	VARIANT Evaluate(double Parameter);
	double IEvaluate(double Parameter);
	VARIANT GetParameter(double X, double Y, double Z);
	double IGetParameter(double X, double Y, double Z);
	BOOL EdgeInFaceSense(LPDISPATCH Facedisp);
	BOOL IEdgeInFaceSense(LPDISPATCH Facedisp);
	VARIANT GetTwoAdjacentFaces();
	void IGetTwoAdjacentFaces(LPDISPATCH* Face1, LPDISPATCH* Face2);
	LPUNKNOWN EnumCoEdges();
	LPDISPATCH GetStartVertex();
	LPDISPATCH IGetStartVertex();
	LPDISPATCH GetEndVertex();
	LPDISPATCH IGetEndVertex();
	VARIANT GetClosestPointOn(double X, double Y, double Z);
	double IGetClosestPointOn(double X, double Y, double Z);
	BOOL RemoveRedundantTopology();
	long GetId();
	void SetId(long IdIn);
	void RemoveId();
	VARIANT GetCurveParams2();
	double IGetCurveParams2();
	BOOL IsParamReversed();
	void Highlight(BOOL State);
	VARIANT GetCoEdges();
	BOOL IEdgeInFaceSense2(LPDISPATCH Facedisp);
	VARIANT GetTwoAdjacentFaces2();
	void IGetTwoAdjacentFaces2(LPDISPATCH* Face1, LPDISPATCH* Face2);
	void Display(long Width, double Red, double Green, double Blue, BOOL HighlightState);
	long GetTangentEdgesCount();
	LPDISPATCH IGetTangentEdges(long Count);
	VARIANT GetTangentEdges();
	LPDISPATCH CreateWireBody();
	LPDISPATCH GetBody();
	LPDISPATCH GetCheck();
};
/////////////////////////////////////////////////////////////////////////////
// ICoEdge wrapper class

class ICoEdge : public COleDispatchDriver
{
public:
	ICoEdge() {}		// Calls COleDispatchDriver default constructor
	ICoEdge(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ICoEdge(const ICoEdge& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetEdge();
	LPDISPATCH IGetEdge();
	LPDISPATCH GetNext();
	LPDISPATCH IGetNext();
	LPDISPATCH GetLoop();
	LPDISPATCH IGetLoop();
	BOOL GetSense();
	LPDISPATCH GetPartner();
	LPDISPATCH IGetPartner();
	VARIANT GetCurveParams();
	VARIANT Evaluate(double Param);
	double IGetCurveParams();
	double IEvaluate(double Param);
	LPDISPATCH GetCurve();
	LPDISPATCH IGetCurve();
	LPDISPATCH IGetLoop2();
};
/////////////////////////////////////////////////////////////////////////////
// ILoop wrapper class

class ILoop : public COleDispatchDriver
{
public:
	ILoop() {}		// Calls COleDispatchDriver default constructor
	ILoop(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ILoop(const ILoop& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetNext();
	LPDISPATCH IGetNext();
	VARIANT GetEdges();
	// method 'IGetEdges' not emitted because of invalid return type or parameter type
	long GetEdgeCount();
	BOOL IsOuter();
	LPDISPATCH GetFirstCoEdge();
	LPDISPATCH IGetFirstCoEdge();
	LPUNKNOWN EnumEdges();
	LPUNKNOWN EnumCoEdges();
	LPDISPATCH GetFace();
	LPDISPATCH IGetFace();
	VARIANT SweepPlanarLoop(double X, double Y, double Z, double DraftAngle);
	LPDISPATCH ISweepPlanarLoop(double X, double Y, double Z, double DraftAngle, LPDISPATCH* StopFacesOut);
	VARIANT RevolvePlanarLoop(double X, double Y, double Z, double Axisx, double Axisy, double Axisz, double RevAngle);
	LPDISPATCH IRevolvePlanarLoop(double X, double Y, double Z, double Axisx, double Axisy, double Axisz, double RevAngle, LPDISPATCH* StopFacesOut);
};
/////////////////////////////////////////////////////////////////////////////
// ILoop2 wrapper class

class ILoop2 : public COleDispatchDriver
{
public:
	ILoop2() {}		// Calls COleDispatchDriver default constructor
	ILoop2(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ILoop2(const ILoop2& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetNext();
	LPDISPATCH IGetNext();
	VARIANT GetEdges();
	LPDISPATCH IGetEdges();
	long GetEdgeCount();
	BOOL IsOuter();
	LPDISPATCH GetFirstCoEdge();
	LPDISPATCH IGetFirstCoEdge();
	LPUNKNOWN EnumEdges();
	LPUNKNOWN EnumCoEdges();
	LPDISPATCH GetFace();
	LPDISPATCH IGetFace();
	VARIANT SweepPlanarLoop(double X, double Y, double Z, double DraftAngle);
	LPDISPATCH ISweepPlanarLoop(double X, double Y, double Z, double DraftAngle, LPDISPATCH* StopFacesOut);
	VARIANT RevolvePlanarLoop(double X, double Y, double Z, double Axisx, double Axisy, double Axisz, double RevAngle);
	LPDISPATCH IRevolvePlanarLoop(double X, double Y, double Z, double Axisx, double Axisy, double Axisz, double RevAngle, LPDISPATCH* StopFacesOut);
	BOOL IsSingular();
	long GetVertexCount();
	VARIANT GetVertices();
	void IGetVertices(long NumVertices, LPDISPATCH* Vertices);
};
/////////////////////////////////////////////////////////////////////////////
// IVertex wrapper class

class IVertex : public COleDispatchDriver
{
public:
	IVertex() {}		// Calls COleDispatchDriver default constructor
	IVertex(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IVertex(const IVertex& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	VARIANT GetPoint();
	double IGetPoint();
	LPUNKNOWN EnumEdges();
	VARIANT GetClosestPointOn(double X, double Y, double Z);
	double IGetClosestPointOn(double X, double Y, double Z);
	LPUNKNOWN EnumEdgesOriented();
	VARIANT GetEdges();
	VARIANT GetEdgesOriented();
	VARIANT GetAdjacentFaces();
	long IGetAdjacentFacesCount();
	LPDISPATCH IGetAdjacentFaces(long NFaceCount);
};
/////////////////////////////////////////////////////////////////////////////
// IFaultEntity wrapper class

class IFaultEntity : public COleDispatchDriver
{
public:
	IFaultEntity() {}		// Calls COleDispatchDriver default constructor
	IFaultEntity(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IFaultEntity(const IFaultEntity& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetCount();
	LPDISPATCH GetEntity(long Index);
	long GetErrorCode(long Index);
};
/////////////////////////////////////////////////////////////////////////////
// IEntity wrapper class

class IEntity : public COleDispatchDriver
{
public:
	IEntity() {}		// Calls COleDispatchDriver default constructor
	IEntity(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IEntity(const IEntity& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long CreateStringAttributeDefinition(LPCTSTR IdentifierString);
	BOOL CreateStringAttribute(long DefinitionTag, LPCTSTR StringValue);
	CString FindStringAttribute(long DefinitionTag);
	BOOL RemoveStringAttribute(long DefinitionTag);
	LPDISPATCH FindAttribute(LPDISPATCH AttributeDef, long WhichOne);
	LPDISPATCH IFindAttribute(LPDISPATCH AttributeDef, long WhichOne);
	BOOL Select(BOOL AppendFlag);
	long GetType();
	LPDISPATCH GetComponent();
	LPDISPATCH IGetComponent();
	BOOL SelectByMark(BOOL AppendFlag, long Mark);
	CString GetModelName();
	void SetModelName(LPCTSTR lpszNewValue);
	void DeleteModelName();
	BOOL DeSelect();
	LPDISPATCH IGetComponent2();
	BOOL Select2(BOOL Append, long Mark);
	BOOL Select3(BOOL Append, long Mark, LPDISPATCH Callout);
	BOOL GetIsSafe();
	LPDISPATCH GetSafeEntity();
	BOOL Select4(BOOL Append, LPDISPATCH Data);
	LPDISPATCH GetDrawingComponent(LPDISPATCH View);
};
/////////////////////////////////////////////////////////////////////////////
// IAttributeDef wrapper class

class IAttributeDef : public COleDispatchDriver
{
public:
	IAttributeDef() {}		// Calls COleDispatchDriver default constructor
	IAttributeDef(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IAttributeDef(const IAttributeDef& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH CreateInstance(LPDISPATCH OwnerDoc, LPDISPATCH OwnerEntity, LPCTSTR NameIn);
	LPDISPATCH ICreateInstance(LPDISPATCH OwnerDoc, LPDISPATCH OwnerEntity, LPCTSTR NameIn);
	BOOL AddParameter(LPCTSTR NameIn, long Type, double DefaultValue, long Options);
	BOOL SetOption(long WhichOption, long OptionValue);
	long GetOption(long WhichOption);
	BOOL AddCallback(long WhichCallback, LPCTSTR CallbackFcnAndModule, long WhichOption);
	BOOL Register();
	LPDISPATCH CreateInstance2(LPDISPATCH OwnerDoc, LPDISPATCH OwnerEntity, LPCTSTR NameIn, long Options);
	LPDISPATCH ICreateInstance2(LPDISPATCH OwnerDoc, LPDISPATCH OwnerEntity, LPCTSTR NameIn, long Options);
	LPDISPATCH CreateInstance3(LPDISPATCH OwnerDoc, LPDISPATCH OwnerComp, LPDISPATCH OwnerEntity, LPCTSTR NameIn, long Options, long ConfigurationOption);
	LPDISPATCH ICreateInstance3(LPDISPATCH OwnerDoc, LPDISPATCH OwnerComp, LPDISPATCH OwnerEntity, LPCTSTR NameIn, long Options, long ConfigurationOption);
	LPDISPATCH ICreateInstance4(LPDISPATCH OwnerDoc, LPDISPATCH OwnerComp, LPDISPATCH OwnerEntity, LPCTSTR NameIn, long Options, long ConfigurationOption);
	LPDISPATCH CreateInstance4(LPDISPATCH OwnerDoc, LPDISPATCH OwnerObj, LPCTSTR NameIn, long Options, long ConfigurationOption);
	LPDISPATCH CreateInstance5(LPDISPATCH OwnerDoc, LPDISPATCH OwnerObj, LPCTSTR NameIn, long Options, long ConfigurationOption);
};
/////////////////////////////////////////////////////////////////////////////
// IAttribute wrapper class

class IAttribute : public COleDispatchDriver
{
public:
	IAttribute() {}		// Calls COleDispatchDriver default constructor
	IAttribute(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IAttribute(const IAttribute& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetParameter(LPCTSTR NameIn);
	LPDISPATCH IGetParameter(LPCTSTR NameIn);
	LPDISPATCH GetEntity();
	LPDISPATCH IGetEntity();
	LPDISPATCH GetDefinition();
	LPDISPATCH IGetDefinition();
	CString GetName();
	BOOL GetEntityState(long WhichState);
	LPDISPATCH GetComponent();
	LPDISPATCH IGetComponent();
	LPDISPATCH IGetComponent2();
	LPDISPATCH GetEntity2();
	LPDISPATCH IGetEntity2();
	LPDISPATCH GetBody();
	BOOL Delete(BOOL BuildTree);
};
/////////////////////////////////////////////////////////////////////////////
// IParameter wrapper class

class IParameter : public COleDispatchDriver
{
public:
	IParameter() {}		// Calls COleDispatchDriver default constructor
	IParameter(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IParameter(const IParameter& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	double GetDoubleValue();
	BOOL SetDoubleValue(double Value);
	long GetType();
	CString GetName();
	long GetOption(long WhichOption);
	BOOL SetOption(long WhichOption, long OptionValue);
	CString GetStringValue();
	BOOL SetStringValue(LPCTSTR StringValue);
	void GetVector(double* X, double* Y, double* Z);
	BOOL SetVector(double X, double Y, double Z);
	VARIANT GetVectorVB();
	BOOL SetDoubleValue2(double Value, long ConfigurationOption, LPCTSTR ConfigurationName);
	BOOL SetStringValue2(LPCTSTR StringValue, long ConfigurationOption, LPCTSTR ConfigurationName);
	BOOL SetVector2(double X, double Y, double Z, long ConfigurationOption, LPCTSTR ConfigurationName);
};
/////////////////////////////////////////////////////////////////////////////
// IComponent2 wrapper class

class IComponent2 : public COleDispatchDriver
{
public:
	IComponent2() {}		// Calls COleDispatchDriver default constructor
	IComponent2(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IComponent2(const IComponent2& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	VARIANT GetChildren();
	LPDISPATCH IGetChildren();
	long IGetChildrenCount();
	VARIANT GetXform();
	double IGetXform();
	LPDISPATCH GetBody();
	LPDISPATCH IGetBody();
	VARIANT GetMaterialPropertyValues();
	void SetMaterialPropertyValues(const VARIANT& newValue);
	double GetIMaterialPropertyValues();
	void SetIMaterialPropertyValues(double* newValue);
	long AddPropertyExtension(const VARIANT& PropertyExtension);
	VARIANT GetPropertyExtension(long Id);
	void ResetPropertyExtension();
	CString GetMaterialIdName();
	BOOL SetMaterialIdName(LPCTSTR Name);
	CString GetMaterialUserName();
	BOOL SetMaterialUserName(LPCTSTR Name);
	VARIANT GetSectionedBodies(LPDISPATCH ViewIn);
	VARIANT GetBox(BOOL IncludeRefPlanes, BOOL IncludeSketches);
	double IGetBox(BOOL IncludeRefPlanes, BOOL IncludeSketches);
	BOOL SetXform(const VARIANT& XformIn);
	BOOL ISetXform(double* XformIn);
	LPDISPATCH GetModelDoc();
	LPDISPATCH IGetModelDoc();
	BOOL IsFixed();
	LPUNKNOWN EnumRelatedBodies();
	BOOL IsSuppressed();
	LPUNKNOWN EnumSectionedBodies(LPDISPATCH ViewIn);
	BOOL IsHidden(BOOL ConsiderSuppressed);
	CString GetName();
	void SetReferencedConfiguration(LPCTSTR lpszNewValue);
	CString GetReferencedConfiguration();
	long GetSuppression();
	long SetSuppression(long State);
	long GetVisible();
	void SetVisible(long nNewValue);
	CString GetPathName();
	BOOL SetXformAndSolve(const VARIANT& XformIn);
	BOOL ISetXformAndSolve(double* XformIn);
	VARIANT GetTessTriangles(BOOL NoConversion);
	float IGetTessTriangles(BOOL NoConversion);
	long IGetTessTriangleCount();
	VARIANT GetTessNorms();
	float IGetTessNorms();
	VARIANT GetTessTriStrips(BOOL NoConversion);
	float IGetTessTriStrips(BOOL NoConversion);
	long IGetTessTriStripSize();
	VARIANT GetTessTriStripNorms();
	float IGetTessTriStripNorms();
	VARIANT GetTessTriStripEdges();
	long IGetTessTriStripEdges();
	long IGetTessTriStripEdgeSize();
	long IsDisplayDataOutOfDate();
	long GetConstrainedStatus();
	BOOL RemoveMaterialProperty();
	long IGetTemporaryBodyID();
	LPDISPATCH FindAttribute(LPDISPATCH AttributeDef, long WhichOne);
	LPDISPATCH IFindAttribute(LPDISPATCH AttributeDef, long WhichOne);
	BOOL Select(BOOL AppendFlag);
	BOOL SelectByMark(BOOL AppendFlag, long Mark);
	BOOL DeSelect();
	CString GetName2();
	void SetName2(LPCTSTR lpszNewValue);
	long GetSolving();
	void ListExternalFileReferences(VARIANT* ModelPathName, VARIANT* ComponentPathName, VARIANT* Feature, VARIANT* DataType, VARIANT* Status, VARIANT* RefEntity, VARIANT* FeatCom);
	long ListExternalFileReferencesCount();
	void IListExternalFileReferences(long NumRefs, BSTR* ModelPathName, BSTR* CompPathName, BSTR* Feature, BSTR* DataType, long* Status, BSTR* RefEntity, BSTR* FeatComp);
	long ReplaceReference(LPCTSTR FileName);
	BOOL Select2(BOOL Append, long Mark);
	LPDISPATCH GetCorrespondingEntity(LPDISPATCH Entity);
	LPDISPATCH IGetCorrespondingEntity(LPDISPATCH PEntity);
	BOOL IsEnvelope();
	LPDISPATCH GetTransform();
	void SetTransform(LPDISPATCH newValue);
	BOOL SetTransformAndSolve(LPDISPATCH XformIn);
	LPDISPATCH GetParent();
	LPDISPATCH FirstFeature();
	LPDISPATCH GetPresentationTransform();
	void SetPresentationTransform(LPDISPATCH newValue);
	void RemovePresentationTransform();
	LPUNKNOWN EnumBodies(long BodyType);
	VARIANT GetBodies(long BodyType);
	LPDISPATCH GetTotalTransform(BOOL IncludePresentationXform);
	LPDISPATCH GetTransform2();
	void SetTransform2(LPDISPATCH newValue);
	BOOL SetTransformAndSolve2(LPDISPATCH XformIn);
	double IGetMaterialPropertyValuesForFace(LPDISPATCH FaceIn);
	LPDISPATCH GetDrawingComponent(LPDISPATCH ViewIn);
	void SetMaterialPropertyValues2(const VARIANT& Material_values, long Config_opt, const VARIANT& Config_names);
	void ISetMaterialPropertyValues2(double* Material_values, long Config_opt, long Config_count, BSTR* Config_names);
	VARIANT GetMaterialPropertyValues2(long Config_opt, const VARIANT& Config_names);
	double IGetMaterialPropertyValues2(long Config_opt, long Config_count, BSTR* Config_names);
	void SetVisibility(long State, long Config_opt, const VARIANT& Config_names);
	void ISetVisibility(long State, long Config_opt, long Config_count, BSTR* Config_names);
	VARIANT GetVisibility(long Config_opt, const VARIANT& Config_names);
	long IGetVisibility(long Config_opt, long Config_count, BSTR* Config_names);
	LPDISPATCH FeatureByName(LPCTSTR Name);
	BOOL RemoveMaterialProperty2(long Config_opt, const VARIANT& Config_names);
	BOOL IRemoveMaterialProperty2(long Config_opt, long Config_count, BSTR* Config_names);
	void ListExternalFileReferences2(VARIANT* ModelPathName, VARIANT* ComponentPathName, VARIANT* Feature, VARIANT* DataType, VARIANT* Status, VARIANT* RefEntity, VARIANT* FeatCom, long* ConfigOption, BSTR* ConfigName);
	void IListExternalFileReferences2(long NumRefs, BSTR* ModelPathName, BSTR* CompPathName, BSTR* Feature, BSTR* DataType, long* Status, BSTR* RefEntity, BSTR* FeatComp, long* ConfigOption, BSTR* ConfigName);
	void UpdateExternalFileReferences(long ConfigOption, LPCTSTR ConfigName, long UpdateStatus);
	long SetSuppression2(long State);
	LPDISPATCH GetTexture(LPCTSTR Config_name);
	BOOL SetTexture(LPCTSTR Config_name, LPDISPATCH TextureIn);
	BOOL RemoveTexture(LPCTSTR Config_name);
	BOOL GetExcludeFromBOM();
	void SetExcludeFromBOM(BOOL bNewValue);
	LPDISPATCH GetCorresponding(LPDISPATCH InputObject);
	BOOL Select3(BOOL Append, LPDISPATCH Data);
};
/////////////////////////////////////////////////////////////////////////////
// IModelDoc2 wrapper class

class IModelDoc2 : public COleDispatchDriver
{
public:
	IModelDoc2() {}		// Calls COleDispatchDriver default constructor
	IModelDoc2(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IModelDoc2(const IModelDoc2& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetSelectionManager();
	LPDISPATCH GetISelectionManager();
	void SetSelectionManager(LPDISPATCH newValue);
	LPDISPATCH GetActiveView();
	LPDISPATCH GetIActiveView();
	void SetActiveView(LPDISPATCH newValue);
	long GetLengthUnit();
	void SetLengthUnit(long nNewValue);
	CString GetLightSourceUserName(long Id);
	void SetLightSourceUserName(long Id, LPCTSTR lpszNewValue);
	VARIANT GetLightSourcePropertyValues(long Id);
	void SetLightSourcePropertyValues(long Id, const VARIANT& newValue);
	CString GetSceneName();
	void SetSceneName(LPCTSTR lpszNewValue);
	CString GetSceneUserName();
	void SetSceneUserName(LPCTSTR lpszNewValue);
	void FeatureFillet(double R1, BOOL Propagate, BOOL Ftyp, BOOL VarRadTyp, long OverflowType);
	void GridOptions(BOOL DispGrid, double GridSpacing, BOOL Snap, BOOL DotStyle, short NMajor, short NMinor, BOOL Align2edge, BOOL AngleSnap, double AngleUnit, BOOL MinorAuto);
	void SetUnits(short UType, short FractBase, short FractDenom, short SigDigits, BOOL RoundToFraction);
	void LBDownAt(long Flags, double X, double Y, double Z);
	void LBUpAt(long Flags, double X, double Y, double Z);
	void DragTo(long Flags, double X, double Y, double Z);
	void SelectAt(long Flags, double X, double Y, double Z);
	void CreateLineVB(double X1, double Y1, double Z1, double X2, double Y2, double Z2);
	BOOL CreateLine(const VARIANT& P1, const VARIANT& P2);
	void CreateCenterLineVB(double X1, double Y1, double Z1, double X2, double Y2, double Z2);
	BOOL CreateCenterLine(const VARIANT& P1, const VARIANT& P2);
	void CreateArcVB(double P1x, double P1y, double P1z, double P2x, double P2y, double P2z, double P3x, double P3y, double P3z, short Dir);
	BOOL CreateArc(const VARIANT& P1, const VARIANT& P2, const VARIANT& P3, short Dir);
	void CreateCircleVB(double P1x, double P1y, double P1z, double Radius);
	BOOL CreateCircleByRadius(const VARIANT& P1, double Radius);
	VARIANT GetLines();
	void SketchTrim(long Op, long SelEnd, double X, double Y);
	void SketchOffsetEdges(double Val);
	void SketchRectangle(double Val1, double Val2, double Z1, double Val3, double Val4, double Z2, BOOL Val5);
	void SketchPoint(double X, double Y, double Z);
	void FeatureCut(BOOL Sd, BOOL Flip, BOOL Dir, long T1, long T2, double D1, double D2, BOOL Dchk1, BOOL Dchk2, BOOL Ddir1, BOOL Ddir2, double Dang1, double Dang2, BOOL OffsetReverse1, BOOL OffsetReverse2);
	void FeatureBoss(BOOL Sd, BOOL Flip, BOOL Dir, long T1, long T2, double D1, double D2, BOOL Dchk1, BOOL Dchk2, BOOL Ddir1, BOOL Ddir2, double Dang1, double Dang2, BOOL OffsetReverse1, BOOL OffsetReverse2);
	void SimpleHole(BOOL Sd, BOOL Flip, BOOL Dir, long T1, long T2, double D1, double D2, BOOL Dchk1, BOOL Dchk2, BOOL Ddir1, BOOL Ddir2, double Dang1, double Dang2, BOOL OffsetReverse1, BOOL OffsetReverse2);
	void FeatureLinearPattern(long Num1, double Spacing1, long Num2, double Spacing2, BOOL FlipDir1, BOOL FlipDir2, LPCTSTR DName1, LPCTSTR DName2);
	void NameView(LPCTSTR VName);
	void ShowNamedView(LPCTSTR VName);
	void CreatePlaneAtOffset(double Val, BOOL FlipDir);
	void Toolbars(BOOL M, BOOL Vw, BOOL SkMain, BOOL Sk, BOOL Feat, BOOL Constr, BOOL Macro);
	void CreatePlaneAtAngle(double Val, BOOL FlipDir);
	void SetParamValue(double Val);
	void AddRelation(LPCTSTR RelStr);
	void DeleteAllRelations();
	void HoleWizard(double Depth, short EndType, BOOL Flip, BOOL Dir, long HType, double D1, double D2, double D3, double D4, double D5, double D6, double D7, double D8, double D9, double D10, double D11, double D12);
	BOOL SaveAs(LPCTSTR NewName);
	void ActivateSelectedFeature();
	void SelectByName(long Flags, LPCTSTR IdStr);
	void SketchAddConstraints(LPCTSTR IdStr);
	void SketchConstraintsDel(long ConstrInd, LPCTSTR IdStr);
	void SketchConstraintsDelAll();
	void Lock();
	void UnLock();
	void InsertFeatureShell(double Thickness, BOOL Outward);
	void SketchFillet(double Rad);
	void FeatureChamfer(double Width, double Angle, BOOL Flip);
	void InsertMfDraft(double Angle, BOOL FlipDir, BOOL IsEdgeDraft, long PropType);
	void ParentChildRelationship();
	void SketchSpline(long MorePts, double X, double Y, double Z);
	void SelectSketchPoint(double X, double Y, long Incidence);
	void SelectSketchLine(double X0, double Y0, long Inc0, double X1, double Y1, long Inc1);
	void SelectSketchArc(double X0, double Y0, long Inc0, double X1, double Y1, long Inc1, double XC, double YC, long IncC, long RotDir);
	void SelectSketchSpline(long Size, double X0, double Y0, long Inc0, double X1, double Y1, long Inc1, double XC, double YC, long IncC);
	BOOL CreateTangentArc(double P1x, double P1y, double P1z, double P2x, double P2y, double P2z);
	BOOL Create3PointArc(double P1x, double P1y, double P1z, double P2x, double P2y, double P2z, double P3x, double P3y, double P3z);
	BOOL CreateArcByCenter(double P1x, double P1y, double P1z, double P2x, double P2y, double P2z, double P3x, double P3y, double P3z);
	BOOL CreateCircle(double P1x, double P1y, double P1z, double P2x, double P2y, double P2z);
	BOOL AddDimension(double X, double Y, double Z);
	BOOL AddHorizontalDimension(double X, double Y, double Z);
	BOOL AddVerticalDimension(double X, double Y, double Z);
	BOOL SelectSketchItem(long SelOpt, LPCTSTR Name, double X, double Y, double Z);
	void ClearSelection();
	void Select(LPCTSTR SelID, LPCTSTR SelParams, double X, double Y, double Z);
	void AndSelect(LPCTSTR SelID, LPCTSTR SelParams, double X, double Y, double Z);
	BOOL CreatePoint(double PointX, double PointY, double PointZ);
	BOOL CreateLineDB(double Sx, double Sy, double Sz, double Ex, double Ey, double Ez);
	BOOL CreateArcDB(double X1, double Y1, double Z1, double X2, double Y2, double Z2, double X3, double Y3, double Z3, short Dir);
	BOOL CreateCircleDB(double Cx, double Cy, double Cz, double Radius);
	BOOL CreatePointDB(double X, double Y, double Z);
	CString GetTitle();
	CString GetPathName();
	long GetType();
	void InsertObject();
	void EditClearAll();
	void EditCopy();
	void EditCut();
	void ObjectDisplayContent();
	void ObjectDisplayAsIcon();
	void ObjectResetsize();
	void WindowRedraw();
	void SetPickMode();
	void ViewRotateminusx();
	void ViewRotateminusy();
	void ViewRotateminusz();
	void ViewRotateplusx();
	void ViewRotateplusy();
	void ViewRotateplusz();
	void ViewTranslateminusx();
	void ViewTranslateminusy();
	void ViewTranslateplusx();
	void ViewTranslateplusy();
	void ViewRotXMinusNinety();
	void ViewRotYMinusNinety();
	void ViewRotYPlusNinety();
	void ViewZoomin();
	void ViewZoomout();
	void ViewDisplayHiddenremoved();
	void ViewDisplayWireframe();
	void ViewDisplayShaded();
	void ViewRwShading();
	void ViewOglShading();
	void ViewZoomtofit();
	void ViewRotate();
	void ViewTranslate();
	void ViewZoomto();
	void ViewDisplayHiddengreyed();
	void ViewDisplayFaceted();
	void ViewConstraint();
	void UserFavors();
	void FeatureCirPattern(long Num, double Spacing, BOOL FlipDir, LPCTSTR DName);
	void EditSketch();
	void FeatEdit();
	void FeatEditDef();
	void InsertPoint();
	void InsertFamilyTableNew();
	void InsertFamilyTableEdit();
	void ToolsMacro();
	void ToolsGrid();
	void SketchCenterline();
	void SketchAlign();
	void SketchArc();
	void SketchTangentArc();
	void SketchCircle();
	void SketchUndo();
	void UserPreferences();
	void Lights();
	void SketchConstrainCoincident();
	void SketchConstrainConcentric();
	void SketchConstrainPerp();
	void SketchConstrainTangent();
	void SketchConstrainParallel();
	void SketchUseEdge();
	void SketchUseEdgeCtrline();
	void SketchMirror();
	void Save();
	void Close();
	void ViewDispRefaxes();
	void ViewDispRefplanes();
	void InsertSketch();
	void InsertProtrusionSwept(BOOL Propagate, BOOL Alignment, BOOL KeepNormalConstant);
	void InsertProtrusionBlend(BOOL Closed);
	void ToolsMassProps();
	void PropertySheet();
	void BlankRefGeom();
	void UnBlankRefGeom();
	void EditDelete();
	void InsertProjectedSketch();
	BOOL CreatePlaneFixed(const VARIANT& P1, const VARIANT& P2, const VARIANT& P3, BOOL UseGlobal);
	void DebugCheckBody();
	void DimPreferences();
	void UnblankSketch();
	void EditSketchOrSingleSketchFeature();
	void DebugCheckIgesGeom();
	void BlankSketch();
	double GetDefaultTextHeight();
	BOOL IsActive(LPCTSTR CompStr);
	BOOL CreateEllipse(const VARIANT& Center, const VARIANT& Major, const VARIANT& Minor);
	BOOL CreateEllipseVB(double CenterX, double CenterY, double CenterZ, double MajorX, double MajorY, double MajorZ, double MinorX, double MinorY, double MinorZ);
	BOOL CreateEllipticalArcByCenter(const VARIANT& Center, const VARIANT& Major, const VARIANT& Minor, const VARIANT& Start, const VARIANT& End);
	BOOL CreateEllipticalArcByCenterVB(double CenterX, double CenterY, double CenterZ, double MajorX, double MajorY, double MajorZ, double MinorX, double MinorY, double MinorZ, double StartX, double StartY, double StartZ, double EndX, 
		double EndY, double EndZ);
	LPDISPATCH GetActiveSketch();
	LPDISPATCH IGetActiveSketch();
	long GetTessellationQuality();
	void SetTessellationQuality(long QualityNum);
	LPDISPATCH Parameter(LPCTSTR StringIn);
	LPDISPATCH IParameter(LPCTSTR StringIn);
	BOOL SelectByID(LPCTSTR SelID, LPCTSTR SelParams, double X, double Y, double Z);
	BOOL AndSelectByID(LPCTSTR SelID, LPCTSTR SelParams, double X, double Y, double Z);
	void Insert3DSketch();
	CString GetLightSourceName(long Id);
	BOOL AddLightSource(LPCTSTR IdName, long LTyp, LPCTSTR UserName);
	long AddLightSourceExtProperty(long Id, const VARIANT& PropertyExtension);
	void ResetLightSourceExtProperty(long Id);
	void DeleteLightSource(long Id);
	VARIANT GetLightSourceExtProperty(long Id, long PropertyId);
	long AddLightToScene(LPCTSTR LpszNewValue);
	long AddSceneExtProperty(const VARIANT& PropertyExtension);
	void ResetSceneExtProperty();
	VARIANT GetSceneExtProperty(long PropertyId);
	void FileSummaryInfo();
	VARIANT GetGridSettings();
	void ToolsSketchTranslate();
	void ToolsDistance();
	void SkToolsAutoConstr();
	void ToolsSketchScale();
	void Paste();
	void ToolsConfiguration();
	void EntityProperties();
	BOOL GetArcCentersDisplayed();
	void SetArcCentersDisplayed(BOOL Setting);
	void AutoSolveToggle();
	double IGetLines();
	long GetLineCount();
	void ICreateEllipse(double* Center, double* Major, double* Minor);
	void ICreateEllipticalArcByCenter(double* Center, double* Major, double* Minor, double* Start, double* End);
	double GetILightSourcePropertyValues(long Id);
	void SetILightSourcePropertyValues(long Id, double* newValue);
	void InsertCutSwept(BOOL Propagate, BOOL Alignment, BOOL KeepNormalConstant);
	void InsertCutBlend(BOOL Closed);
	void InsertHelix(BOOL Reversed, BOOL Clockwised, BOOL Tapered, BOOL Outward, long Helixdef, double Height, double Pitch, double Revolution, double TaperAngle, double Startangle);
	void ICreateLine(double* P1, double* P2);
	void ICreateCenterLine(double* P1, double* P2);
	void ICreateArc(double* P1, double* P2, double* P3, short Dir);
	void ICreateCircleByRadius(double* P1, double Radius);
	void GraphicsRedraw();
	BOOL GetVisibilityOfConstructPlanes();
	BOOL GetDisplayWhenAdded();
	void SetDisplayWhenAdded(BOOL Setting);
	BOOL GetAddToDB();
	void SetAddToDB(BOOL Setting);
	BOOL DeSelectByID(LPCTSTR SelID, LPCTSTR SelParams, double X, double Y, double Z);
	BOOL GetVisible();
	void SetVisible(BOOL bNewValue);
	void PrintDirect();
	void PrintPreview();
	void Quit();
	void CreatePlaneThru3Points();
	void ViewRotXPlusNinety();
	VARIANT GetUnits();
	void SetAngularUnits(short UType, short FractBase, short FractDenom, short SigDigits);
	VARIANT GetAngularUnits();
	short IGetUnits();
	void ISetAngularUnits(short UType, short FractBase, short FractDenom, short SigDigits);
	short IGetAngularUnits();
	void ShowConfiguration(LPCTSTR ConfigurationName);
	void ResetConfiguration();
	void AddConfiguration(LPCTSTR Name, LPCTSTR Comment, LPCTSTR AlternateName, BOOL SuppressByDefault, BOOL HideByDefault, BOOL MinFeatureManager, BOOL InheritProperties, unsigned long Flags);
	void DeleteConfiguration(LPCTSTR ConfigurationName);
	void EditConfiguration(LPCTSTR Name, LPCTSTR NewName, LPCTSTR Comment, LPCTSTR AlternateName, BOOL SuppressByDefault, BOOL HideByDefault, BOOL MinFeatureManager, BOOL InheritProperties, unsigned long Flags);
	void CreatePlanePerCurveAndPassPoint(BOOL OrigAtCurve);
	LPDISPATCH CreateFeatureMgrView(long* Bitmap);
	BOOL AddFeatureMgrView(long* Bitmap, long* AppView);
	VARIANT GetStandardViewRotation(long ViewId);
	double IGetStandardViewRotation(long ViewId);
	void FeatureExtruRefSurface(BOOL Sd, BOOL Flip, BOOL Dir, long T1, long T2, double D1, double D2, BOOL Dchk1, BOOL Dchk2, BOOL Ddir1, BOOL Ddir2, double Dang1, double Dang2, BOOL OffsetReverse1, BOOL OffsetReverse2);
	LPUNKNOWN IGet3rdPartyStorage(LPCTSTR StringIn, BOOL IsStoring);
	void DeleteFeatureMgrView(long* AppView);
	VARIANT GetMassProperties();
	BOOL IGetMassProperties(double* MPropsData);
	long GetLightSourceCount();
	long GetLightSourceIdFromName(LPCTSTR LightName);
	void SetNextSelectionGroupId(long Id);
	void ISetNextSelectionGroupId(long Id);
	LPDISPATCH InsertMidSurfaceExt(double Placement, BOOL KnitFlag);
	LPDISPATCH IInsertMidSurfaceExt(double Placement, BOOL KnitFlag);
	void ICreatePlaneFixed(double* P1, double* P2, double* P3, BOOL UseGlobal);
	BOOL SelectByMark(LPCTSTR SelID, LPCTSTR SelParams, double X, double Y, double Z, long Mark);
	BOOL AndSelectByMark(LPCTSTR SelID, LPCTSTR SelParams, double X, double Y, double Z, long Mark);
	VARIANT GetDependencies(long Traverseflag, long Searchflag);
	CString IGetDependencies(long Traverseflag, long Searchflag);
	long GetNumDependencies(long Traverseflag, long Searchflag);
	long IGetNumDependencies(long Traverseflag, long Searchflag);
	LPDISPATCH FirstFeature();
	LPDISPATCH IFirstFeature();
	void UnderiveSketch();
	void DeriveSketch();
	BOOL IsExploded();
	BOOL DeleteSelection(BOOL ConfirmFlag);
	BOOL DeleteNamedView(LPCTSTR ViewName);
	BOOL SetLightSourceName(long Id, LPCTSTR NewName);
	void Insert3DSplineCurve(BOOL CurveClosed);
	BOOL SetLightSourcePropertyValuesVB(LPCTSTR IdName, long LType, double Diff, long RgbColor, double Dist, double DirX, double DirY, double DirZ, double SpotDirX, double SpotDirY, double SpotDirZ, double SpotAngle, double FallOff0, 
		double FallOff1, double FallOff2, double Ambient, double Specular, double SpotExponent, BOOL BDisable);
	LPDISPATCH ICreateFeatureMgrView(long* Bitmap);
	BOOL SelectedEdgeProperties(LPCTSTR EdgeName);
	BOOL SelectedFaceProperties(long RgbColor, double Ambient, double Diffuse, double Specular, double Shininess, double Transparency, double Emission, BOOL UsePartProps, LPCTSTR FaceName);
	BOOL SelectedFeatureProperties(long RgbColor, double Ambient, double Diffuse, double Specular, double Shininess, double Transparency, double Emission, BOOL UsePartProps, BOOL Suppressed, LPCTSTR FeatureName);
	void InsertSplitLineSil();
	void InsertSplitLineProject(BOOL IsDirectional, BOOL FlipDir);
	void InsertRib(BOOL Is2Sided, BOOL ReverseThicknessDir, double Thickness, long ReferenceEdgeIndex, BOOL ReverseMaterialDir, BOOL IsDrafted, BOOL DraftOutward, double DraftAngle);
	BOOL AddRadialDimension(double X, double Y, double Z);
	BOOL AddDiameterDimension(double X, double Y, double Z);
	VARIANT GetModelViewNames();
	CString IGetModelViewNames();
	long GetModelViewCount();
	double GetUserPreferenceDoubleValue(long UserPreferenceValue);
	BOOL SetUserPreferenceDoubleValue(long UserPreferenceValue, double Value);
	void ViewDisplayCurvature();
	void Scale();
	void AddIns();
	BOOL InsertCurveFile(LPCTSTR FileName);
	void InsertCurveFileBegin();
	BOOL InsertCurveFilePoint(double X, double Y, double Z);
	BOOL InsertCurveFileEnd();
	BOOL ChangeSketchPlane();
	void ViewOrientationUndo();
	void PrintOut(long FromPage, long ToPage, long NumCopies, BOOL Collate, LPCTSTR Printer, double Scale, BOOL PrintToFile);
	void SketchOffsetEntities(double Offset, BOOL Flip);
	void InsertLibraryFeature(LPCTSTR LibFeatPartNameIn);
	void SketchModifyTranslate(double StartX, double StartY, double EndX, double EndY);
	void SketchModifyRotate(double CenterX, double CenterY, double Angle);
	void SketchModifyFlip(long AxisFlag);
	BOOL SketchModifyScale(double ScaleFactor);
	LPDISPATCH GetActiveConfiguration();
	LPDISPATCH IGetActiveConfiguration();
	BOOL GetUserPreferenceToggle(long UserPreferenceToggle);
	BOOL SetUserPreferenceToggle(long UserPreferenceValue, BOOL OnFlag);
	void InsertSweepRefSurface(BOOL Propagate, short TwistCtrlOption, BOOL KeepTangency, BOOL ForceNonRational);
	void InsertLoftRefSurface(BOOL Closed, BOOL KeepTangency, BOOL ForceNonRational);
	void InsertProtrusionSwept2(BOOL Propagate, BOOL Alignment, short TwistCtrlOption, BOOL KeepTangency, BOOL ForceNonRational);
	void InsertProtrusionBlend2(BOOL Closed, BOOL KeepTangency, BOOL ForceNonRational);
	void InsertCutSwept2(BOOL Propagate, BOOL Alignment, short TwistCtrlOption, BOOL KeepTangency, BOOL ForceNonRational);
	void InsertCutBlend2(BOOL Closed, BOOL KeepTangency, BOOL ForceNonRational);
	BOOL IsEditingSelf();
	void ShowNamedView2(LPCTSTR VName, long ViewId);
	void InsertDome(double Height, BOOL ReverseDir, BOOL DoEllipticSurface);
	CString GetMaterialUserName();
	void SetMaterialUserName(LPCTSTR lpszNewValue);
	CString GetMaterialIdName();
	void SetMaterialIdName(LPCTSTR lpszNewValue);
	VARIANT GetMaterialPropertyValues();
	void SetMaterialPropertyValues(const VARIANT& newValue);
	double GetIMaterialPropertyValues();
	void SetIMaterialPropertyValues(double* newValue);
	long AddPropertyExtension(const VARIANT& PropertyExtension);
	VARIANT GetPropertyExtension(long Id);
	void ResetPropertyExtension();
	long GetUpdateStamp();
	void ViewZoomTo2(double X1, double Y1, double Z1, double X2, double Y2, double Z2);
	void ScreenRotate();
	short GetPrintSetup(long SetupType);
	void SetPrintSetup(long SetupType, short nNewValue);
	void GraphicsRedraw2();
	void InsertCosmeticThread(short Type, double Depth, double Length, LPCTSTR Note);
	void HideCosmeticThread();
	void ShowCosmeticThread();
	void SimpleHole2(double Dia, BOOL Sd, BOOL Flip, BOOL Dir, long T1, long T2, double D1, double D2, BOOL Dchk1, BOOL Dchk2, BOOL Ddir1, BOOL Ddir2, double Dang1, double Dang2, BOOL OffsetReverse1, BOOL OffsetReverse2);
	void IRelease3rdPartyStorage(LPCTSTR StringIn);
	long FeatureRevolve2(double Angle, BOOL ReverseDir, double Angle2, long RevType, long Options);
	long FeatureRevolveCut2(double Angle, BOOL ReverseDir, double Angle2, long RevType, long Options);
	void SetSaveFlag();
	CString GetExternalReferenceName();
	BOOL SelectByRay(const VARIANT& DoubleInfoIn, long TypeWanted);
	BOOL ISelectByRay(double* PointIn, double* VectorIn, double RadiusIn, long TypeWanted);
	void SetSceneBkgDIB(long L_dib);
	CString GetSceneBkgImageFileName();
	void SetSceneBkgImageFileName(LPCTSTR lpszNewValue);
	void InsertBkgImage(LPCTSTR NewName);
	void DeleteBkgImage();
	void InsertSplinePoint(double X, double Y, double Z);
	void InsertLoftRefSurface2(BOOL Closed, BOOL KeepTangency, BOOL ForceNonRational, double TessToleranceFactor, short StartMatchingType, short EndMatchingType);
	void InsertProtrusionBlend3(BOOL Closed, BOOL KeepTangency, BOOL ForceNonRational, double TessToleranceFactor, short StartMatchingType, short EndMatchingType);
	void InsertCutBlend3(BOOL Closed, BOOL KeepTangency, BOOL ForceNonRational, double TessToleranceFactor, short StartMatchingType, short EndMatchingType);
	void AlignDimensions();
	void BreakDimensionAlignment();
	void SketchFillet1(double Rad);
	void FeatureChamferType(short ChamferType, double Width, double Angle, BOOL Flip, double OtherDist, double VertexChamDist1, double VertexChamDist2, double VertexChamDist3);
	void FeatureCutThin(BOOL Sd, BOOL Flip, BOOL Dir, long T1, long T2, double D1, double D2, BOOL Dchk1, BOOL Dchk2, BOOL Ddir1, BOOL Ddir2, double Dang1, double Dang2, BOOL OffsetReverse1, BOOL OffsetReverse2, double Thk1, double Thk2, 
		double EndThk, long RevThinDir, long CapEnds, BOOL AddBends, double BendRad);
	void FeatureBossThin(BOOL Sd, BOOL Flip, BOOL Dir, long T1, long T2, double D1, double D2, BOOL Dchk1, BOOL Dchk2, BOOL Ddir1, BOOL Ddir2, double Dang1, double Dang2, BOOL OffsetReverse1, BOOL OffsetReverse2, double Thk1, double Thk2, 
		double EndThk, long RevThinDir, long CapEnds, BOOL AddBends, double BendRad);
	BOOL InsertDatumTargetSymbol(LPCTSTR Datum1, LPCTSTR Datum2, LPCTSTR Datum3, short AreaStyle, BOOL AreaOutside, double Value1, double Value2, LPCTSTR ValueStr1, LPCTSTR ValueStr2, BOOL ArrowsSmart, short ArrowStyle, short LeaderLineStyle, 
		BOOL LeaderBent, BOOL ShowArea, BOOL ShowSymbol);
	BOOL EditDatumTargetSymbol(LPCTSTR Datum1, LPCTSTR Datum2, LPCTSTR Datum3, short AreaStyle, BOOL AreaOutside, double Value1, double Value2, LPCTSTR ValueStr1, LPCTSTR ValueStr2, BOOL ArrowsSmart, short ArrowStyle, short LeaderLineStyle, 
		BOOL LeaderBent, BOOL ShowArea, BOOL ShowSymbol);
	void InsertBOMBalloon();
	LPDISPATCH FeatureReferenceCurve(long NumOfCurves, const VARIANT& BaseCurves, BOOL Merge, LPCTSTR FromFileName, long* ErrorCode);
	LPDISPATCH IFeatureReferenceCurve(long NumOfCurves, LPDISPATCH* BaseCurves, BOOL Merge, LPCTSTR FromFileName, long* ErrorCode);
	void FontBold(BOOL Bold);
	void FontItalic(BOOL Italic);
	void FontUnderline(BOOL Underline);
	void FontFace(LPCTSTR Face);
	void FontPoints(short Points);
	void FontUnits(double Units);
	BOOL SketchSplineByEqnParams(const VARIANT& ParamsIn);
	void AlignParallelDimensions();
	void SetBlockingState(long StateIn);
	void ResetBlockingState();
	long GetSceneBkgDIB();
	void InsertHatchedFace();
	LPDISPATCH GetColorTable();
	LPDISPATCH IGetColorTable();
	void InsertSweepRefSurface2(BOOL Propagate, short TwistCtrlOption, BOOL KeepTangency, BOOL ForceNonRational, short StartMatchingType, short EndMatchingType);
	void InsertProtrusionSwept3(BOOL Propagate, BOOL Alignment, short TwistCtrlOption, BOOL KeepTangency, BOOL ForceNonRational, short StartMatchingType, short EndMatchingType);
	void InsertCutSwept3(BOOL Propagate, BOOL Alignment, short TwistCtrlOption, BOOL KeepTangency, BOOL ForceNonRational, short StartMatchingType, short EndMatchingType);
	BOOL IsOpenedViewOnly();
	BOOL IsOpenedReadOnly();
	void ViewZoomToSelection();
	void FeatureBossThicken(double Thickness, long Direction, long FaceIndex);
	void FeatureCutThicken(double Thickness, long Direction, long FaceIndex);
	BOOL InsertAxis();
	void EditUndo(unsigned long NSteps);
	void SelectMidpoint();
	long ISketchSplineByEqnParams(long* PropArray, double* KnotsArray, double* CntrlPntCoordArray);
	VARIANT VersionHistory();
	CString IVersionHistory();
	long IGetVersionHistoryCount();
	void Rebuild(long Options);
	void InsertFeatureShellAddThickness(double Thickness);
	void InsertOffsetSurface(double Thickness, BOOL Reverse);
	void SimplifySpline(double ToleranceIn);
	CString GetSummaryInfo(long FieldId);
	void SetSummaryInfo(long FieldId, LPCTSTR lpszNewValue);
	CString GetCustomInfo(LPCTSTR FieldName);
	void SetCustomInfo(LPCTSTR FieldName, LPCTSTR lpszNewValue);
	long GetCustomInfoCount();
	CString GetCustomInfoType(LPCTSTR FieldName);
	VARIANT GetCustomInfoNames();
	CString IGetCustomInfoNames();
	BOOL AddCustomInfo(LPCTSTR FieldName, LPCTSTR FieldType, LPCTSTR FieldValue);
	BOOL DeleteCustomInfo(LPCTSTR FieldName);
	void PrintOut2(long FromPage, long ToPage, long NumCopies, BOOL Collate, LPCTSTR Printer, double Scale, BOOL PrintToFile, LPCTSTR PtfName);
	BOOL SetReadOnlyState(BOOL SetReadOnly);
	BOOL InsertFamilyTableOpen(LPCTSTR FileName);
	BOOL MultiSelectByRay(const VARIANT& DoubleInfoIn, long TypeWanted, BOOL Append);
	BOOL IMultiSelectByRay(double* PointIn, double* VectorIn, double RadiusIn, long TypeWanted, BOOL Append);
	void InsertNewNote3(LPCTSTR UpperText, BOOL NoLeader, BOOL BentLeader, short ArrowStyle, short LeaderSide, double Angle, short BalloonStyle, short BalloonFit, BOOL SmartArrow);
	void InsertWeldSymbol2(LPCTSTR Dim1, LPCTSTR Symbol, LPCTSTR Dim2, BOOL Symmetric, BOOL FieldWeld, BOOL ShowOtherSide, BOOL DashOnTop, BOOL Peripheral, BOOL HasProcess, LPCTSTR ProcessValue);
	BOOL InsertSurfaceFinishSymbol2(long SymType, long LeaderType, double LocX, double LocY, double LocZ, long LaySymbol, long ArrowType, LPCTSTR MachAllowance, LPCTSTR OtherVals, LPCTSTR ProdMethod, LPCTSTR SampleLen, LPCTSTR MaxRoughness, 
		LPCTSTR MinRoughness, LPCTSTR RoughnessSpacing);
	long SaveSilent();
	long SaveAsSilent(LPCTSTR NewName, BOOL SaveAsCopy);
	BOOL AddCustomInfo2(LPCTSTR FieldName, long FieldType, LPCTSTR FieldValue);
	long GetCustomInfoType2(LPCTSTR FieldName);
	BOOL InsertRefPoint();
	long FeatureFillet2(double R1, BOOL Propagate, BOOL Ftyp, BOOL VarRadTyp, long OverflowType, long NRadii, const VARIANT& Radii);
	long IFeatureFillet2(double R1, BOOL Propagate, BOOL Ftyp, BOOL VarRadTyp, long OverflowType, long NRadii, double* Radii);
	LPDISPATCH GetFirstAnnotation();
	LPDISPATCH IGetFirstAnnotation();
	BOOL InsertCoordinateSystem(BOOL XFlippedIn, BOOL YFlippedIn, BOOL ZFlippedIn);
	BOOL GetToolbarVisibility(long Toolbar);
	void SetToolbarVisibility(long Toolbar, BOOL Visibility);
	void ViewDispCoordinateSystems();
	void ViewDispTempRefaxes();
	void ViewDispRefPoints();
	void ViewDispOrigins();
	VARIANT GetCoordinateSystemXformByName(LPCTSTR NameIn);
	double IGetCoordinateSystemXformByName(LPCTSTR NameIn);
	CString GetCurrentCoordinateSystemName();
	LPUNKNOWN EnumModelViews();
	BOOL InsertCompositeCurve();
	void SketchParabola(double Val1, double Val2, double Z1, double Val3, double Val4, double Z2, double Val5, double Val6, double Z3, double Val7, double Val8, double Z4);
	void InsertRadiateSurface(double Distance, BOOL FlipDir, BOOL TangentPropagate);
	void InsertSewRefSurface();
	long InsertShape(long PressureOn, long TangentsOn, double PressureGain, double TangentGain, double CurveSpringGain, double Alpha, double Beta, double Gamma, double Delta, long Degree, long Split, long Tuning);
	void InsertMfDraft2(double Angle, BOOL FlipDir, BOOL IsEdgeDraft, long PropType, BOOL StepDraft);
	long GetConfigurationCount();
	VARIANT GetConfigurationNames();
	CString IGetConfigurationNames(long* Count);
	void FeatureCut2(BOOL Sd, BOOL Flip, BOOL Dir, long T1, long T2, double D1, double D2, BOOL Dchk1, BOOL Dchk2, BOOL Ddir1, BOOL Ddir2, double Dang1, double Dang2, BOOL OffsetReverse1, BOOL OffsetReverse2, long KeepPieceIndex);
	void InsertCutSurface(BOOL Flip, long KeepPieceIndex);
	LPDISPATCH GetDetailingDefaults();
	LPDISPATCH IGetDetailingDefaults();
	long ListExternalFileReferencesCount(BOOL UseSearchRules);
	VARIANT ListExternalFileReferences(BOOL UseSearchRules);
	CString IListExternalFileReferences(BOOL UseSearchRules, long NumRefs);
	BOOL SketchSplineByEqnParams2(const VARIANT& ParamsIn);
	LPDISPATCH GetFirstModelView();
	LPDISPATCH IGetFirstModelView();
	BOOL InsertPlanarRefSurface();
	LPDISPATCH GetNext();
	BOOL GetSaveFlag();
	BOOL AddCustomInfo3(LPCTSTR Configuration, LPCTSTR FieldName, long FieldType, LPCTSTR FieldValue);
	CString GetCustomInfo2(LPCTSTR Configuration, LPCTSTR FieldName);
	void SetCustomInfo2(LPCTSTR Configuration, LPCTSTR FieldName, LPCTSTR lpszNewValue);
	BOOL DeleteCustomInfo2(LPCTSTR Configuration, LPCTSTR FieldName);
	long GetCustomInfoCount2(LPCTSTR Configuration);
	VARIANT GetCustomInfoNames2(LPCTSTR Configuration);
	CString IGetCustomInfoNames2(LPCTSTR Configuration);
	long GetCustomInfoType3(LPCTSTR Configuration, LPCTSTR FieldName);
	BOOL GetConsiderLeadersAsLines();
	BOOL SetConsiderLeadersAsLines(BOOL LeadersAsLines);
	void InsertRevolvedRefSurface(double Angle, BOOL ReverseDir, double Angle2, long RevType);
	long GetBendState();
	long SetBendState(long BendState);
	BOOL GetShowFeatureErrorDialog();
	void SetShowFeatureErrorDialog(BOOL bNewValue);
	void ClearUndoList();
	long GetFeatureManagerWidth();
	long SetFeatureManagerWidth(long Width);
	LPDISPATCH InsertProjectedSketch2(long Reverse);
	LPDISPATCH IInsertProjectedSketch2(long Reverse);
	long GetFeatureCount();
	LPDISPATCH FeatureByPositionReverse(long Num);
	LPDISPATCH IFeatureByPositionReverse(long Num);
	long RayIntersections(const VARIANT& BodiesIn, const VARIANT& BasePointsIn, const VARIANT& VectorsIn, long Options, double HitRadius, double Offset);
	long IRayIntersections(LPDISPATCH* BodiesIn, long NumBodies, double* BasePointsIn, double* VectorsIn, long NumRays, long Options, double HitRadius, double Offset);
	VARIANT GetRayIntersectionsPoints();
	double IGetRayIntersectionsPoints();
	VARIANT GetRayIntersectionsTopology();
	LPUNKNOWN IGetRayIntersectionsTopology();
	void EditSeedFeat();
	BOOL EditSuppress();
	BOOL EditUnsuppress();
	BOOL EditUnsuppressDependent();
	BOOL EditRollback();
	long Save2(BOOL Silent);
	long SaveAs2(LPCTSTR NewName, long SaveAsVersion, BOOL SaveAsCopy, BOOL Silent);
	void SetPopupMenuMode(long ModeIn);
	long GetPopupMenuMode();
	void CloseFamilyTable();
	void CreatePlaneAtSurface(long InterIndex, BOOL ProjOpt, BOOL ReverseDir, BOOL NormalPlane, double Angle);
	void SketchOffset(double Offset, BOOL ContourMode);
	BOOL CreateLinearSketchStepAndRepeat(long NumX, long NumY, double SpacingX, double SpacingY, double AngleX, double AngleY, LPCTSTR DeleteInstances);
	BOOL SetAmbientLightProperties(LPCTSTR Name, double Ambient, double Diffuse, double Specular, long Colour, BOOL Enabled, BOOL Fixed);
	BOOL GetAmbientLightProperties(LPCTSTR Name, double* Ambient, double* Diffuse, double* Specular, long* Colour, BOOL* Enabled, BOOL* Fixed);
	BOOL SetPointLightProperties(LPCTSTR Name, double Ambient, double Diffuse, double Specular, long Colour, BOOL Enabled, BOOL Fixed, double X, double Y, double Z);
	BOOL GetPointLightProperties(LPCTSTR Name, double* Ambient, double* Diffuse, double* Specular, long* Colour, BOOL* Enabled, BOOL* Fixed, double* X, double* Y, double* Z);
	BOOL SetDirectionLightProperties(LPCTSTR Name, double Ambient, double Diffuse, double Specular, long Colour, BOOL Enabled, BOOL Fixed, double X, double Y, double Z);
	BOOL GetDirectionLightProperties(LPCTSTR Name, double* Ambient, double* Diffuse, double* Specular, long* Colour, BOOL* Enabled, BOOL* Fixed, double* X, double* Y, double* Z);
	BOOL SetSpotlightProperties(LPCTSTR Name, double Ambient, double Diffuse, double Specular, long Colour, BOOL Enabled, BOOL Fixed, double Posx, double Posy, double Posz, double Targetx, double Targety, double Targetz, double ConeAngle);
	BOOL GetSpotlightProperties(LPCTSTR Name, double* Ambient, double* Diffuse, double* Specular, long* Colour, BOOL* Enabled, BOOL* Fixed, double* X, double* Y, double* Z, double* Targetx, double* Targety, double* Targetz, double* ConeAngle);
	void SplitOpenSegment(double X, double Y, double Z);
	void AutoInferToggle();
	void SketchRectangleAtAnyAngle(double Val1, double Val2, double Z1, double Val3, double Val4, double Z2, double Val3x, double Val3y, double Z3, BOOL Val5);
	BOOL CreateCircularSketchStepAndRepeat(double ArcRadius, double ArcAngle, long PatternNum, double PatternSpacing, BOOL PatternRotate, LPCTSTR DeleteInstances);
	void SplitClosedSegment(double X0, double Y0, double Z0, double X1, double Y1, double Z1);
	BOOL IsLightLockedToModel(long LightId);
	BOOL LockLightToModel(long LightId, BOOL Fix);
	long FeatureFillet3(double R1, BOOL Propagate, long Ftyp, BOOL VarRadTyp, long OverflowType, long NRadii, const VARIANT& Radii, BOOL UseHelpPoint, BOOL UseTangentHoldLine);
	long IFeatureFillet3(double R1, BOOL Propagate, long Ftyp, BOOL VarRadTyp, long OverflowType, long NRadii, double* Radii, BOOL UseHelpPoint, BOOL UseTangentHoldLine);
	void InsertConnectionPoint();
	void InsertRoutePoint();
	void FeatureBossThicken2(double Thickness, long Direction, long FaceIndex, BOOL FillVolume);
	void FeatureCutThicken2(double Thickness, long Direction, long FaceIndex, BOOL FillVolume);
	LPDISPATCH GetConfigurationByName(LPCTSTR Name);
	LPDISPATCH IGetConfigurationByName(LPCTSTR Name);
	LPDISPATCH CreatePoint2(double PointX, double PointY, double PointZ);
	LPDISPATCH ICreatePoint2(double PointX, double PointY, double PointZ);
	LPDISPATCH CreateLine2(double P1x, double P1y, double P1z, double P2x, double P2y, double P2z);
	LPDISPATCH ICreateLine2(double P1x, double P1y, double P1z, double P2x, double P2y, double P2z);
	LPDISPATCH GetActiveSketch2();
	LPDISPATCH IGetActiveSketch2();
	void DrawLightIcons();
	LPDISPATCH GetLayerManager();
	LPDISPATCH IGetLayerManager();
	LPDISPATCH CreateCircle2(double XC, double YC, double Zc, double Xp, double Yp, double Zp);
	LPDISPATCH ICreateCircle2(double XC, double YC, double Zc, double Xp, double Yp, double Zp);
	LPDISPATCH CreateCircleByRadius2(double XC, double YC, double Zc, double Radius);
	LPDISPATCH ICreateCircleByRadius2(double XC, double YC, double Zc, double Radius);
	LPDISPATCH CreateArc2(double XC, double YC, double Zc, double Xp1, double Yp1, double Zp1, double Xp2, double Yp2, double Zp2, short Direction);
	LPDISPATCH ICreateArc2(double XC, double YC, double Zc, double Xp1, double Yp1, double Zp1, double Xp2, double Yp2, double Zp2, short Direction);
	LPDISPATCH CreateEllipse2(double CenterX, double CenterY, double CenterZ, double MajorX, double MajorY, double MajorZ, double MinorX, double MinorY, double MinorZ);
	LPDISPATCH ICreateEllipse2(double CenterX, double CenterY, double CenterZ, double MajorX, double MajorY, double MajorZ, double MinorX, double MinorY, double MinorZ);
	LPDISPATCH CreateEllipticalArc2(double CenterX, double CenterY, double CenterZ, double MajorX, double MajorY, double MajorZ, double MinorX, double MinorY, double MinorZ, double StartX, double StartY, double StartZ, double EndX, double EndY, 
		double EndZ);
	LPDISPATCH ICreateEllipticalArc2(double CenterX, double CenterY, double CenterZ, double MajorX, double MajorY, double MajorZ, double MinorX, double MinorY, double MinorZ, double StartX, double StartY, double StartZ, double EndX, double EndY, 
		double EndZ);
	LPDISPATCH CreateSpline(const VARIANT& PointData);
	LPDISPATCH ICreateSpline(long PointCount, double* PointData);
	void ViewZoomtofit2();
	void SetInferenceMode(BOOL InferenceMode);
	BOOL GetInferenceMode();
	BOOL SetTitle2(LPCTSTR NewTitle);
	BOOL SketchFillet2(double Rad, short ConstrainedCorners);
	BOOL IsTessellationValid();
	void EditRoute();
	void FileReload();
	LPDISPATCH GetDesignTable();
	LPDISPATCH IGetDesignTable();
	CString GetEntityName(LPDISPATCH Entity);
	CString IGetEntityName(LPDISPATCH Entity);
	LPDISPATCH IGetNext();
	BOOL ShowConfiguration2(LPCTSTR ConfigurationName);
	BOOL AddConfiguration2(LPCTSTR Name, LPCTSTR Comment, LPCTSTR AlternateName, BOOL SuppressByDefault, BOOL HideByDefault, BOOL MinFeatureManager, BOOL InheritProperties, unsigned long Flags);
	BOOL DeleteConfiguration2(LPCTSTR ConfigurationName);
	BOOL EditConfiguration2(LPCTSTR Name, LPCTSTR NewName, LPCTSTR Comment, LPCTSTR AlternateName, BOOL SuppressByDefault, BOOL HideByDefault, BOOL MinFeatureManager, BOOL InheritProperties, unsigned long Flags);
	LPDISPATCH CreateSplineByEqnParams(const VARIANT& ParamsIn);
	LPDISPATCH ICreateSplineByEqnParams(long* PropArray, double* KnotsArray, double* CntrlPntCoordArray);
	LPDISPATCH CreateFeatureMgrView2(long* Bitmap, LPCTSTR ToolTip);
	LPDISPATCH ICreateFeatureMgrView2(long* Bitmap, LPCTSTR ToolTip);
	BOOL AddFeatureMgrView2(long* Bitmap, long* AppView, LPCTSTR ToolTip);
	void FeatureCut3(BOOL Sd, BOOL Flip, BOOL Dir, long T1, long T2, double D1, double D2, BOOL Dchk1, BOOL Dchk2, BOOL Ddir1, BOOL Ddir2, double Dang1, double Dang2, BOOL OffsetReverse1, BOOL OffsetReverse2, long KeepPieceIndex);
	LPDISPATCH GetFirstAnnotation2();
	LPDISPATCH IGetFirstAnnotation2();
	void InsertExtendSurface(BOOL ExtendLinear, long EndCondition, double Distance);
	void InsertTangencySurface(BOOL OneSide, BOOL IsFlip);
	VARIANT CreateSplinesByEqnParams(const VARIANT& ParamsIn);
	LPUNKNOWN ICreateSplinesByEqnParams(long* PropArray, double* KnotsArray, double* CntrlPntCoordArray);
	VARIANT CreateClippedSplines(const VARIANT& ParamsIn, double X1, double Y1, double X2, double Y2);
	LPUNKNOWN ICreateClippedSplines(long* PropArray, double* KnotsArray, double* CntrlPntCoordArray, double X1, double Y1, double X2, double Y2);
	BOOL EditSuppress2();
	BOOL EditUnsuppress2();
	BOOL EditUnsuppressDependent2();
	BOOL EditRollback2();
	void HideDimension();
	void ShowFeatureDimensions();
	void HideFeatureDimensions();
	void Sketch3DIntersections();
	long FeatureFillet4(double R1, BOOL Propagate, BOOL UniformRadius, long Ftyp, BOOL VarRadTyp, long OverflowType, long NRadii, const VARIANT& Radii, BOOL UseHelpPoint, BOOL UseTangentHoldLine, BOOL CornerType, long SetbackDistCount, 
		const VARIANT& SetBackDistances);
	long IFeatureFillet4(double R1, BOOL Propagate, BOOL UniformRadius, long Ftyp, BOOL VarRadTyp, long OverflowType, long NRadii, double* Radii, BOOL UseHelpPoint, BOOL UseTangentHoldLine, BOOL CornerType, long SetbackDistCount, 
		double* SetBackDistances);
	void InsertDeleteFace();
	VARIANT GetDependencies2(BOOL Traverseflag, BOOL Searchflag, BOOL AddReadOnlyInfo);
	CString IGetDependencies2(BOOL Traverseflag, BOOL Searchflag, BOOL AddReadOnlyInfo);
	long IGetNumDependencies2(BOOL Traverseflag, BOOL Searchflag, BOOL AddReadOnlyInfo);
	void InsertScale(double ScaleFactor_x, double ScaleFactor_y, double ScaleFactor_z, BOOL IsUniform, long ScaleType);
	void LockAllExternalReferences();
	void UnlockAllExternalReferences();
	void BreakAllExternalReferences();
	BOOL EditDimensionProperties(long TolType, double TolMax, double TolMin, LPCTSTR TolMaxFit, LPCTSTR TolMinFit, BOOL UseDocPrec, long Precision, long ArrowsIn, BOOL UseDocArrows, long Arrow1, long Arrow2);
	BOOL SketchPolygon(double XCenter, double YCenter, double XEdge, double YEdge, long NSides, BOOL BInscribed);
	long GetBlockingState();
	LPDISPATCH CreateFeatureMgrView3(long* Bitmap, LPCTSTR ToolTip, long WhichPane);
	LPDISPATCH ICreateFeatureMgrView3(long* Bitmap, LPCTSTR ToolTip, long WhichPane);
	BOOL AddFeatureMgrView3(long* Bitmap, long* AppView, LPCTSTR ToolTip, long WhichPane);
	LPDISPATCH CreatePlaneAtOffset2(double Val, BOOL FlipDir);
	LPDISPATCH ICreatePlaneAtOffset2(double Val, BOOL FlipDir);
	LPDISPATCH CreatePlaneAtAngle2(double Val, BOOL FlipDir);
	LPDISPATCH ICreatePlaneAtAngle2(double Val, BOOL FlipDir);
	LPDISPATCH CreatePlaneThru3Points2();
	LPDISPATCH ICreatePlaneThru3Points2();
	LPDISPATCH CreatePlanePerCurveAndPassPoint2(BOOL OrigAtCurve);
	LPDISPATCH ICreatePlanePerCurveAndPassPoint2(BOOL OrigAtCurve);
	LPDISPATCH CreatePlaneAtSurface2(long InterIndex, BOOL ProjOpt, BOOL ReverseDir, BOOL NormalPlane, double Angle);
	LPDISPATCH ICreatePlaneAtSurface2(long InterIndex, BOOL ProjOpt, BOOL ReverseDir, BOOL NormalPlane, double Angle);
	long GetUserPreferenceIntegerValue(long UserPreferenceValue);
	BOOL SetUserPreferenceIntegerValue(long UserPreferenceValue, long Value);
	LPDISPATCH GetUserPreferenceTextFormat(long UserPreferenceValue);
	LPDISPATCH IGetUserPreferenceTextFormat(long UserPreferenceValue);
	BOOL SetUserPreferenceTextFormat(long UserPreferenceValue, LPDISPATCH Value);
	BOOL ISetUserPreferenceTextFormat(long UserPreferenceValue, LPDISPATCH Value);
	void InsertRib2(BOOL Is2Sided, BOOL ReverseThicknessDir, double Thickness, long ReferenceEdgeIndex, BOOL ReverseMaterialDir, BOOL IsDrafted, BOOL DraftOutward, double DraftAngle, BOOL IsNormToSketch);
	BOOL InsertObjectFromFile(LPCTSTR FilePath, BOOL CreateLink, double Xx, double Yy, double Zz);
	void InspectCurvature();
	void RemoveInspectCurvature();
	LPDISPATCH InsertDatumTag2();
	LPDISPATCH IInsertDatumTag2();
	long ActivateFeatureMgrView(long* AppView);
	void FeatureSketchDrivenPattern(BOOL UseCentroid);
	void HideShowBodies();
	void HideSolidBody();
	void ShowSolidBody();
	void InsertFramePoint(double Xx, double Yy, double Zz);
	void LockFramePoint();
	void UnlockFramePoint();
	LPDISPATCH InsertGtol();
	LPDISPATCH IInsertGtol();
	BOOL DeActivateFeatureMgrView(long* AppView);
	LPDISPATCH InsertNote(LPCTSTR Text);
	LPDISPATCH IInsertNote(LPCTSTR Text);
	void SetSaveAsFileName(LPCTSTR FileName);
	void ClosePrintPreview();
	void HideComponent2();
	void ShowComponent2();
	BOOL SaveBMP(LPCTSTR FileNameIn, long WidthIn, long HeightIn);
	void InsertSketch2(BOOL UpdateEditRebuild);
	void Insert3DSketch2(BOOL UpdateEditRebuild);
	void InsertDeleteHole();
	void PreTrimSurface(BOOL BMutualTrimIn);
	void PostTrimSurface(BOOL BSewSurfaceIn);
	void SketchConvertIsoCurves(double PercentRatio, BOOL VORuDir, BOOL DoConstrain, BOOL SkipHoles);
	void SelectLoop();
	void InsertSheetMetalBaseFlange(double Thickness, BOOL ThickenDir, double Radius, double ExtrudeDist1, double ExtrudeDist2, BOOL FlipExtruDir, long EndCondition1, long EndCondition2, long DirToUse);
	void InsertSheetMetalFold();
	void InsertSheetMetalUnfold();
	void InsertSheetMetalMiterFlange(BOOL UseReliefRatio, BOOL UseDefaultGap, BOOL UseAutoRelief, double GlobalRadius, double RipGap, double AutoReliefRatio, double AutoReliefWidth, double AutoReliefDepth, long ReliefType, long RipLocation, 
		BOOL TrimSideBends);
	void CreateGroup();
	void RemoveItemsFromGroup();
	void RemoveGroups();
	LPDISPATCH InsertBOMBalloon2(long Style, long Size, long UpperTextStyle, LPCTSTR UpperText, long LowerTextStyle, LPCTSTR LowerText);
	LPDISPATCH IInsertBOMBalloon2(long Style, long Size, long UpperTextStyle, LPCTSTR UpperText, long LowerTextStyle, LPCTSTR LowerText);
	void EditRedo(unsigned long NSteps);
	void InsertProtrusionBlend4(BOOL Closed, BOOL KeepTangency, BOOL ForceNonRational, double TessToleranceFactor, short StartMatchingType, short EndMatchingType, BOOL IsThinBody, double Thickness1, double Thickness2, short ThinType);
	void InsertCutBlend4(BOOL Closed, BOOL KeepTangency, BOOL ForceNonRational, double TessToleranceFactor, short StartMatchingType, short EndMatchingType, BOOL IsThinBody, double Thickness1, double Thickness2, short ThinType);
	void InsertProtrusionSwept4(BOOL Propagate, BOOL Alignment, short TwistCtrlOption, BOOL KeepTangency, BOOL ForceNonRational, short StartMatchingType, short EndMatchingType, BOOL IsThinBody, double Thickness1, double Thickness2, 
		short ThinType);
	void InsertCutSwept4(BOOL Propagate, BOOL Alignment, short TwistCtrlOption, BOOL KeepTangency, BOOL ForceNonRational, short StartMatchingType, short EndMatchingType, BOOL IsThinBody, double Thickness1, double Thickness2, short ThinType);
	void SelectTangency();
	BOOL InsertBendTableOpen(LPCTSTR FileName);
	BOOL InsertBendTableNew(LPCTSTR FileName, LPCTSTR Units, LPCTSTR Type);
	void InsertBendTableEdit();
	void DeleteBendTable();
	void InsertSheetMetal3dBend(double Angle, double Radius, BOOL FlipDir, short BendPos);
	BOOL CreateTangentArc2(double P1x, double P1y, double P1z, double P2x, double P2y, double P2z, long ArcTypeIn);
	VARIANT GetMassProperties2(long* Status);
	double IGetMassProperties2(long* Status);
	void SketchChamfer(double AngleORdist, double Dist1, long Options);
	void FeatureCut4(BOOL Sd, BOOL Flip, BOOL Dir, long T1, long T2, double D1, double D2, BOOL Dchk1, BOOL Dchk2, BOOL Ddir1, BOOL Ddir2, double Dang1, double Dang2, BOOL OffsetReverse1, BOOL OffsetReverse2, long KeepPieceIndex, BOOL NormalCut);
	LPDISPATCH GetPropertyManagerPage(long DialogId, LPCTSTR Title, LPUNKNOWN Handler);
	void AlignOrdinate();
	void EditOrdinate();
	BOOL ReattachOrdinate();
	LPDISPATCH EditBalloonProperties(long Style, long Size, long UpperTextStyle, LPCTSTR UpperText, long LowerTextStyle, LPCTSTR LowerText);
	BOOL EditDimensionProperties2(long TolType, double TolMax, double TolMin, LPCTSTR TolMaxFit, LPCTSTR TolMinFit, BOOL UseDocPrec, long Precision, long ArrowsIn, BOOL UseDocArrows, long Arrow1, long Arrow2, LPCTSTR PrefixText, 
		LPCTSTR SuffixText, BOOL ShowValue, LPCTSTR CalloutText1, LPCTSTR CalloutText2, BOOL CenterText);
	void InsertSheetMetalClosedCorner();
	BOOL SketchUseEdge2(BOOL Chain);
	BOOL SketchOffsetEntities2(double Offset, BOOL BothDirections, BOOL Chain);
	BOOL SketchOffset2(double Offset, BOOL BothDirections, BOOL Chain);
	LPDISPATCH AddDimension2(double X, double Y, double Z);
	LPDISPATCH IAddDimension2(double X, double Y, double Z);
	LPDISPATCH AddHorizontalDimension2(double X, double Y, double Z);
	LPDISPATCH IAddHorizontalDimension2(double X, double Y, double Z);
	LPDISPATCH AddVerticalDimension2(double X, double Y, double Z);
	LPDISPATCH IAddVerticalDimension2(double X, double Y, double Z);
	LPDISPATCH AddRadialDimension2(double X, double Y, double Z);
	LPDISPATCH IAddRadialDimension2(double X, double Y, double Z);
	LPDISPATCH AddDiameterDimension2(double X, double Y, double Z);
	LPDISPATCH IAddDiameterDimension2(double X, double Y, double Z);
	LPDISPATCH GetUserUnit(long UnitType);
	LPDISPATCH IGetUserUnit(long UnitType);
	LPDISPATCH InsertWeldSymbol3();
	LPDISPATCH IInsertWeldSymbol3();
	long SaveAs3(LPCTSTR NewName, long SaveAsVersion, long Options);
	CString GetUserPreferenceStringValue(long UserPreference);
	BOOL SetUserPreferenceStringValue(long UserPreference, LPCTSTR Value);
	void DeleteDesignTable();
	BOOL EditRebuild3();
	BOOL ForceRebuild3(BOOL TopOnly);
	long FeatureFillet5(long Options, double R1, long Ftyp, long OverflowType, const VARIANT& Radii, const VARIANT& SetBackDistances, const VARIANT& PointRadiusArray);
	long IFeatureFillet5(long Options, double R1, long Ftyp, long OverflowType, long NRadii, double* Radii, long SetbackDistCount, double* SetBackDistances, long PointCount, double* PointRadiusArray);
	void InsertSheetMetalBreakCorner(long Type, double Distance);
	void InsertSheetMetalHem(long Type, long Position, BOOL Reverse, double DLength, double DGap, double DRad, double DAngle, double DMiterGap);
	LPDISPATCH CreatePlaneAtOffset3(double Val, BOOL FlipDir, BOOL AutoSize);
	LPDISPATCH ICreatePlaneAtOffset3(double Val, BOOL FlipDir, BOOL AutoSize);
	LPDISPATCH CreatePlaneAtAngle3(double Val, BOOL FlipDir, BOOL AutoSize);
	LPDISPATCH ICreatePlaneAtAngle3(double Val, BOOL FlipDir, BOOL AutoSize);
	LPDISPATCH CreatePlaneThru3Points3(BOOL AutoSize);
	LPDISPATCH ICreatePlaneThru3Points3(BOOL AutoSize);
	LPDISPATCH CreatePlaneThruPtParallelToPlane(BOOL AutoSize);
	LPDISPATCH ICreatePlaneThruPtParallelToPlane(BOOL AutoSize);
	LPDISPATCH CreatePlaneThruLineAndPt(BOOL AutoSize);
	LPDISPATCH ICreatePlaneThruLineAndPt(BOOL AutoSize);
	LPDISPATCH CreatePlanePerCurveAndPassPoint3(BOOL OrigAtCurve, BOOL AutoSize);
	LPDISPATCH ICreatePlanePerCurveAndPassPoint3(BOOL OrigAtCurve, BOOL AutoSize);
	LPDISPATCH CreatePlaneAtSurface3(short InterIndex, BOOL ProjOpt, BOOL ReverseDir, BOOL NormalPlane, double Angle, BOOL AutoSize);
	LPDISPATCH ICreatePlaneAtSurface3(short InterIndex, BOOL ProjOpt, BOOL ReverseDir, BOOL NormalPlane, double Angle, BOOL AutoSize);
	BOOL InsertAxis2(BOOL AutoSize);
	BOOL InsertSketchPicture(LPCTSTR FileName);
	void GetZebraStripeData(double* Size, double* Ratio, long* Color1, long* Color2);
	void SetZebraStripeData(double Size, double Ratio, long Color1, long Color2);
	void InsertSketchPictureData(short Width, short Height, long PDataIn);
	void FeatureCurvePattern(long Num1, double Spacing1, long Num2, double Spacing2, BOOL FlipDir1, BOOL FlipDir2, BOOL EqualSpacing1, BOOL EqualSpacing2, BOOL UseCentroid, BOOL AlignToSeed, BOOL OffsetCurve, BOOL PatternSeedOnly);
	void InsertFeatureReplaceFace();
	void InsertRip(double Gap);
	LPDISPATCH InsertSheetMetalEdgeFlange(LPDISPATCH FlangeEdge, LPDISPATCH SketchFeat, long BooleanOptions, double DAngle, double DRadius, long BendPosition, double DOffsetDist, long ReliefType, double DReliefRatio, double DReliefWidth, 
		double DReliefDepth);
	LPDISPATCH IInsertSheetMetalEdgeFlange(LPDISPATCH FlangeEdge, LPDISPATCH SketchFeat, long BooleanOptions, double DAngle, double DRadius, long BendPosition, double DOffsetDist, long ReliefType, double DReliefRatio, double DReliefWidth, 
		double DReliefDepth);
	LPDISPATCH InsertSketchText(double Ptx, double Pty, double Ptz, LPCTSTR Text, long Alignment, long FlipDirection, long HorizontalMirror, long WidthFactor, long SpaceBetweenChars);
	LPDISPATCH IInsertSketchText(double Ptx, double Pty, double Ptz, LPCTSTR Text, long Alignment, long FlipDirection, long HorizontalMirror, long WidthFactor, long SpaceBetweenChars);
	void DissolveSketchText();
	void MoldDraftAnalysis(double Angle, long Options, const VARIANT& Colors, long Shows);
	void InsertSheetMetalJog(double Angle, double Radius, double OffsetDist, BOOL FlipDir, BOOL FixProjLen, short DimPos, short BendPos);
	LPDISPATCH InsertSketchForEdgeFlange(LPDISPATCH FlangeEdge, double DAngle, BOOL FlipDir);
	LPDISPATCH IInsertSketchForEdgeFlange(LPDISPATCH FlangeEdge, double DAngle, BOOL FlipDir);
	void ClearSelection2(BOOL All);
	void ListExternalFileReferences2(VARIANT* ModelPathName, VARIANT* ComponentPathName, VARIANT* Feature, VARIANT* DataType, VARIANT* Status, VARIANT* RefEntity, VARIANT* FeatCom);
	long ListExternalFileReferencesCount2();
	void IListExternalFileReferences2(long NumRefs, BSTR* ModelPathName, BSTR* CompPathName, BSTR* Feature, BSTR* DataType, long* Status, BSTR* RefEntity, BSTR* FeatComp);
	BOOL InsertDeleteFace2(long Refill);
	void AddLoftSection();
	LPDISPATCH InsertMacroFeature(LPCTSTR CmdFile, LPCTSTR CmdModule, LPCTSTR CmdProcedure, const VARIANT& ParamNames, const VARIANT& ParamTypes, const VARIANT& ParamValues, LPCTSTR PmFile, LPCTSTR PmModule, LPCTSTR PmProcedure);
	LPDISPATCH IInsertMacroFeature(LPCTSTR CmdFile, LPCTSTR CmdModule, LPCTSTR CmdProcedure, long ParamCount, BSTR* ParamNames, long* ParamTypes, BSTR* ParamValues, LPCTSTR PmFile, LPCTSTR PmModule, LPCTSTR PmProcedure);
	void ListAuxiliaryExternalFileReferences(VARIANT* Feature, VARIANT* ExternalFileName);
	long ListAuxiliaryExternalFileReferencesCount();
	void IListAuxiliaryExternalFileReferences(long NumRefs, BSTR* Feature, BSTR* ExternalFileName);
	void FeatureCut5(BOOL Sd, BOOL Flip, BOOL Dir, long T1, long T2, double D1, double D2, BOOL Dchk1, BOOL Dchk2, BOOL Ddir1, BOOL Ddir2, double Dang1, double Dang2, BOOL OffsetReverse1, BOOL OffsetReverse2, BOOL TranslateSurface1, 
		BOOL TranslateSurface2, long KeepPieceIndex, BOOL NormalCut);
	void FeatureBoss2(BOOL Sd, BOOL Flip, BOOL Dir, long T1, long T2, double D1, double D2, BOOL Dchk1, BOOL Dchk2, BOOL Ddir1, BOOL Ddir2, double Dang1, double Dang2, BOOL OffsetReverse1, BOOL OffsetReverse2, BOOL TranslateSurface1, 
		BOOL TranslateSurface2);
	BOOL DissolveLibraryFeature();
	void FeatureExtruRefSurface2(BOOL Sd, BOOL Flip, BOOL Dir, long T1, long T2, double D1, double D2, BOOL Dchk1, BOOL Dchk2, BOOL Ddir1, BOOL Ddir2, double Dang1, double Dang2, BOOL OffsetReverse1, BOOL OffsetReverse2, BOOL TranslateSurface1, 
		BOOL TranslateSurface2);
	void FeatureCutThin2(BOOL Sd, BOOL Flip, BOOL Dir, long T1, long T2, double D1, double D2, BOOL Dchk1, BOOL Dchk2, BOOL Ddir1, BOOL Ddir2, double Dang1, double Dang2, BOOL OffsetReverse1, BOOL OffsetReverse2, BOOL TranslateSurface1, 
		BOOL TranslateSurface2, double Thk1, double Thk2, double EndThk, long RevThinDir, long CapEnds, BOOL AddBends, double BendRad);
	void FeatureBossThin2(BOOL Sd, BOOL Flip, BOOL Dir, long T1, long T2, double D1, double D2, BOOL Dchk1, BOOL Dchk2, BOOL Ddir1, BOOL Ddir2, double Dang1, double Dang2, BOOL OffsetReverse1, BOOL OffsetReverse2, BOOL TranslateSurface1, 
		BOOL TranslateSurface2, double Thk1, double Thk2, double EndThk, long RevThinDir, long CapEnds, BOOL AddBends, double BendRad);
	void SimpleHole3(double Dia, BOOL Sd, BOOL Flip, BOOL Dir, long T1, long T2, double D1, double D2, BOOL Dchk1, BOOL Dchk2, BOOL Ddir1, BOOL Ddir2, double Dang1, double Dang2, BOOL OffsetReverse1, BOOL OffsetReverse2, BOOL TranslateSurface1, 
		BOOL TranslateSurface2);
	void EditUndo2(long Steps);
	void EditRedo2(long Steps);
	LPDISPATCH AddConfiguration3(LPCTSTR Name, LPCTSTR Comment, LPCTSTR AlternateName, long Options);
	LPDISPATCH IAddConfiguration3(LPCTSTR Name, LPCTSTR Comment, LPCTSTR AlternateName, long Options);
	BOOL EditConfiguration3(LPCTSTR Name, LPCTSTR NewName, LPCTSTR Comment, LPCTSTR AlternateName, long Options);
	LPDISPATCH GetEquationMgr();
	double ClosestDistance(LPDISPATCH Object1, LPDISPATCH Object2, VARIANT* Point1, VARIANT* Point2);
	double IClosestDistance(LPDISPATCH Object1, LPDISPATCH Object2, double* Point1, double* Point2);
	long ReloadOrReplace(BOOL ReadOnly, LPCTSTR ReplaceFileName, BOOL DiscardChanges);
	double GetFeatureManagerSplitterPosition();
	void SetFeatureManagerSplitterPosition(double newValue);
	CString GetCustomInfoValue(LPCTSTR Configuration, LPCTSTR FieldName);
	CString GetPrinter();
	void SetPrinter(LPCTSTR lpszNewValue);
	LPDISPATCH GetPageSetup();
	LPDISPATCH GetIPageSetup();
	LPDISPATCH InsertStackedBalloon(long Style, long Size, long UpperTextStyle, LPCTSTR UpperText, long LowerTextStyle, LPCTSTR LowerText);
	BOOL SaveAs4(LPCTSTR Name, long Version, long Options, long* Errors, long* Warnings);
	BOOL Save3(long Options, long* Errors, long* Warnings);
	LPDISPATCH CreatePlaneFixed2(const VARIANT& P1, const VARIANT& P2, const VARIANT& P3, BOOL UseGlobal);
	LPDISPATCH ICreatePlaneFixed2(double* P1, double* P2, double* P3, BOOL UseGlobal);
	BOOL GetLargeAssemblyMode();
	void SetLargeAssemblyMode(BOOL bNewValue);
	long AddOrEditConfiguration(LPCTSTR ConfigName, const VARIANT& Params, const VARIANT& Values);
	long IAddOrEditConfiguration(LPCTSTR ConfigName, long ParamCount, BSTR* ParamNames, BSTR* ParamValues);
	long ForceReleaseLocks();
	LPDISPATCH GetFeatureManager();
	LPDISPATCH GetModelViewManager();
	LPDISPATCH GetExtension();
	LPDISPATCH GetConfigurationManager();
	LPDISPATCH GetSketchManager();
	BOOL EditDimensionProperties3(long TolType, double TolMax, double TolMin, LPCTSTR TolMaxFit, LPCTSTR TolMinFit, BOOL UseDocPrec, long Precision, long ArrowsIn, BOOL UseDocArrows, long Arrow1, long Arrow2, LPCTSTR PrefixText, 
		LPCTSTR SuffixText, BOOL ShowValue, LPCTSTR CalloutText1, LPCTSTR CalloutText2, BOOL CenterText, long ConfigOption, const VARIANT& ConfigNames);
	BOOL IEditDimensionProperties3(long TolType, double TolMax, double TolMin, LPCTSTR TolMaxFit, LPCTSTR TolMinFit, BOOL UseDocPrec, long Precision, long ArrowsIn, BOOL UseDocArrows, long Arrow1, long Arrow2, LPCTSTR PrefixText, 
		LPCTSTR SuffixText, BOOL ShowValue, LPCTSTR CalloutText1, LPCTSTR CalloutText2, BOOL CenterText, long ConfigOption, long Count, BSTR* ConfigNames);
	void InsertEditHelixVPBegin(BOOL Reversed, BOOL Clockwised, BOOL Tapered, BOOL Outward, long Helixdef, double Height, double Pitch, double Revolution, double TaperAngle, double Startangle, BOOL isRevHeight);
	void AddHelixVPRecord(double rev_height, double Diameter, double Pitch);
	void InsertHelixVPEnd();
	void EditHelixVPEnd();
};
/////////////////////////////////////////////////////////////////////////////
// IModelView wrapper class

class IModelView : public COleDispatchDriver
{
public:
	IModelView() {}		// Calls COleDispatchDriver default constructor
	IModelView(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IModelView(const IModelView& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	VARIANT GetXform();
	void SetXform(const VARIANT& newValue);
	VARIANT GetOrientation();
	void SetOrientation(const VARIANT& newValue);
	VARIANT GetTranslation();
	void SetTranslation(const VARIANT& newValue);
	double GetScale();
	void SetScale(double newValue);
	double GetIXform();
	void SetIXform(double* newValue);
	double GetIOrientation();
	void SetIOrientation(double* newValue);
	double GetITranslation();
	void SetITranslation(double* newValue);
	long GetViewHWnd();
	void StartDynamics();
	void StopDynamics();
	void AddPerspective();
	void RemovePerspective();
	BOOL HasPerspective();
	VARIANT GetEyePoint();
	void IGetEyePoint(double* Eyept);
	double GetViewPlaneDistance();
	void InitializeShading();
	VARIANT GetOrientation2();
	void SetOrientation2(const VARIANT& newValue);
	VARIANT GetTranslation2();
	void SetTranslation2(const VARIANT& newValue);
	double GetIOrientation2();
	void SetIOrientation2(double* newValue);
	double GetITranslation2();
	void SetITranslation2(double* newValue);
	BOOL GetDisplayState(long DisplayType);
	long GetViewDIB();
	void ZoomByFactor(double Factor);
	void TranslateBy(double X, double Y);
	void RotateAboutCenter(double XAngle, double YAngle);
	void RotateAboutPoint(double XAngle, double YAngle, double Ptx, double Pty, double Ptz);
	void RotateAboutAxis(double Angle, double Ptx, double Pty, double Ptz, double AxisVecX, double AxisVecY, double AxisVecZ);
	BOOL SetEyePoint(const VARIANT& Eyept);
	BOOL ISetEyePoint(double* Eyept);
	BOOL SetStereoSeparation(const VARIANT& DfSeparation);
	BOOL ISetStereoSeparation(double* DfSeparation);
	VARIANT GetStereoSeparation();
	double IGetStereoSeparation();
	void GetDIBHeader(long Ldib);
	void GetStripsOfDIB(long Ldib, long NScanLinesPerStrip, long StripIndex);
	void SetFrameLeft(long nNewValue);
	void SetFrameTop(long nNewValue);
	void SetFrameWidth(long nNewValue);
	void SetFrameHeight(long nNewValue);
	void SetFrameState(long nNewValue);
	double GetObjectSizesAway();
	void SetObjectSizesAway(double newValue);
	long GetDynamicMode();
	void DrawHighlightedItems();
	LPDISPATCH GetNext();
	LPDISPATCH IGetNext();
	double GetScale2();
	void SetScale2(double newValue);
	long GetHlrQuality();
	void SetHlrQuality(long nNewValue);
	BOOL GetXorHighlight();
	void SetXorHighlight(BOOL bNewValue);
	BOOL GetDisplayZebraStripes();
	void SetDisplayZebraStripes(BOOL bNewValue);
	LPDISPATCH GetTransform();
	void SetTransform(LPDISPATCH newValue);
	LPDISPATCH GetOrientation3();
	void SetOrientation3(LPDISPATCH newValue);
	LPDISPATCH GetTranslation3();
	void SetTranslation3(LPDISPATCH newValue);
	void ProjectModelPoint(double X, double Y, double Z, double* XOut, double* YOut, double* ZOut);
	void UnprojectModelPoint(double X, double Y, double Z, double* XOut, double* YOut, double* ZOut);
	BOOL GetSuppressWaitCursorDuringRedraw();
	void SetSuppressWaitCursorDuringRedraw(BOOL bNewValue);
	long GetFrameLeft();
	long GetFrameTop();
	long GetFrameWidth();
	long GetFrameHeight();
	long GetFrameState();
	void DrawTransparentFeatureTree();
	long GetDisplayMode();
	void SetDisplayMode(long nNewValue);
	BOOL GetEnableGraphicsUpdate();
	void SetEnableGraphicsUpdate(BOOL bNewValue);
	LPDISPATCH GetCamera();
	void SetCamera(LPDISPATCH newValue);
	BOOL SetCameraByName(LPCTSTR Name);
};
/////////////////////////////////////////////////////////////////////////////
// IMathTransform wrapper class

class IMathTransform : public COleDispatchDriver
{
public:
	IMathTransform() {}		// Calls COleDispatchDriver default constructor
	IMathTransform(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IMathTransform(const IMathTransform& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH Multiply(LPDISPATCH TransformObjIn);
	LPDISPATCH IMultiply(LPDISPATCH TransformObjIn);
	VARIANT GetArrayData();
	void SetArrayData(const VARIANT& newValue);
	double GetIArrayData();
	void SetIArrayData(double* newValue);
	void GetData(LPDISPATCH* XAxisObjOut, LPDISPATCH* YAxisObjOut, LPDISPATCH* ZAxisObjOut, LPDISPATCH* TransformObjOut, double* ScaleOut);
	void IGetData(LPDISPATCH* XAxisObjOut, LPDISPATCH* YAxisObjOut, LPDISPATCH* ZAxisObjOut, LPDISPATCH* TransformObjOut, double* ScaleOut);
	void SetData(LPDISPATCH XAxisObjIn, LPDISPATCH YAxisObjIn, LPDISPATCH ZAxisObjIn, LPDISPATCH TransformObjIn, double ScaleValIn);
	void ISetData(LPDISPATCH XAxisObjIn, LPDISPATCH YAxisObjIn, LPDISPATCH ZAxisObjIn, LPDISPATCH TransformObjIn, double ScaleValIn);
	LPDISPATCH Inverse();
	LPDISPATCH IInverse();
	void GetData2(LPDISPATCH* XAxisObjOut, LPDISPATCH* YAxisObjOut, LPDISPATCH* ZAxisObjOut, LPDISPATCH* TransformObjOut, double* ScaleOut);
	void IGetData2(LPDISPATCH* XAxisObjOut, LPDISPATCH* YAxisObjOut, LPDISPATCH* ZAxisObjOut, LPDISPATCH* TransformObjOut, double* ScaleOut);
};
/////////////////////////////////////////////////////////////////////////////
// IMathVector wrapper class

class IMathVector : public COleDispatchDriver
{
public:
	IMathVector() {}		// Calls COleDispatchDriver default constructor
	IMathVector(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IMathVector(const IMathVector& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH MultiplyTransform(LPDISPATCH TransformObjIn);
	LPDISPATCH IMultiplyTransform(LPDISPATCH TransformObjIn);
	VARIANT GetArrayData();
	void SetArrayData(const VARIANT& newValue);
	double GetIArrayData();
	void SetIArrayData(double* newValue);
	LPDISPATCH Add(LPDISPATCH VectorObjIn);
	LPDISPATCH IAdd(LPDISPATCH VectorObjIn);
	LPDISPATCH Subtract(LPDISPATCH VectorObjIn);
	LPDISPATCH ISubtract(LPDISPATCH VectorObjIn);
	LPDISPATCH Scale(double ValueIn);
	LPDISPATCH IScale(double ValueIn);
	double GetLength();
	double Dot(LPDISPATCH VectorObjIn);
	double IDot(LPDISPATCH VectorObjIn);
	LPDISPATCH Cross(LPDISPATCH VectorObjIn);
	LPDISPATCH ICross(LPDISPATCH VectorObjIn);
	LPDISPATCH ConvertToPoint();
	LPDISPATCH IConvertToPoint();
	LPDISPATCH Normalise();
};
/////////////////////////////////////////////////////////////////////////////
// IMathPoint wrapper class

class IMathPoint : public COleDispatchDriver
{
public:
	IMathPoint() {}		// Calls COleDispatchDriver default constructor
	IMathPoint(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IMathPoint(const IMathPoint& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH MultiplyTransform(LPDISPATCH TransformObjIn);
	LPDISPATCH IMultiplyTransform(LPDISPATCH TransformObjIn);
	VARIANT GetArrayData();
	void SetArrayData(const VARIANT& newValue);
	double GetIArrayData();
	void SetIArrayData(double* newValue);
	LPDISPATCH AddVector(LPDISPATCH VectorObjIn);
	LPDISPATCH IAddVector(LPDISPATCH VectorObjIn);
	LPDISPATCH SubtractVector(LPDISPATCH VectorObjIn);
	LPDISPATCH ISubtractVector(LPDISPATCH VectorObjIn);
	LPDISPATCH Subtract(LPDISPATCH PointObjIn);
	LPDISPATCH ISubtract(LPDISPATCH PointObjIn);
	LPDISPATCH Scale(double ValueIn);
	LPDISPATCH IScale(double ValueIn);
	LPDISPATCH ConvertToVector();
	LPDISPATCH IConvertToVector();
};
/////////////////////////////////////////////////////////////////////////////
// ICamera wrapper class

class ICamera : public COleDispatchDriver
{
public:
	ICamera() {}		// Calls COleDispatchDriver default constructor
	ICamera(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ICamera(const ICamera& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetId();
	long AddPropertyExtension(const VARIANT& PropertyExtension);
	void ResetPropertyExtension();
	VARIANT GetPropertyExtension(long PropertyId);
	LPDISPATCH GetPosition();
	LPDISPATCH GetViewVector();
	LPDISPATCH GetUpVector();
	double GetFocalDistance();
	BOOL GetPerspective();
	void SetPerspective(BOOL bNewValue);
	double GetFieldOfViewWidth();
	void SetFieldOfViewWidth(double newValue);
	double GetFieldOfViewDepth();
	void SetFieldOfViewDepth(double newValue);
	double GetFieldOfViewAngle();
	void SetFieldOfViewAngle(double newValue);
	BOOL GetDepthOfFieldEnabled();
	void SetDepthOfFieldEnabled(BOOL bNewValue);
	double GetAperture();
	void SetAperture(double newValue);
};
/////////////////////////////////////////////////////////////////////////////
// ISketch wrapper class

class ISketch : public COleDispatchDriver
{
public:
	ISketch() {}		// Calls COleDispatchDriver default constructor
	ISketch(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISketch(const ISketch& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	VARIANT GetModelToSketchXform();
	void SetModelToSketchXform(const VARIANT& newValue);
	VARIANT GetLines();
	double IGetLines();
	long GetLineCount();
	VARIANT GetArcs();
	double IGetArcs();
	long GetArcCount();
	VARIANT GetPolylines();
	double IGetPolylines();
	long GetPolyLineCount(long* PointCount);
	VARIANT GetSplines();
	double IGetSplines();
	long GetSplineCount(long* PointCount);
	VARIANT GetEllipses();
	double IGetEllipses();
	long GetEllipseCount();
	double GetIModelToSketchXform();
	VARIANT GetUserPoints();
	double IGetUserPoints();
	long GetUserPointsCount();
	VARIANT GetSplinesInterpolate();
	double IGetSplinesInterpolate();
	long GetSplineInterpolateCount(long* PointCount);
	BOOL GetAutomaticSolve();
	BOOL SetAutomaticSolve(BOOL SolveFlag);
	long ConstrainAll();
	VARIANT GetSplineParams();
	double IGetSplineParams();
	long GetSplineParamsCount(long* Size);
	VARIANT GetParabolas();
	double IGetParabolas();
	long GetParabolaCount();
	VARIANT GetEllipses2();
	double IGetEllipses2();
	VARIANT GetSketchPoints();
	LPUNKNOWN IEnumSketchPoints();
	VARIANT GetSketchSegments();
	LPUNKNOWN IEnumSketchSegments();
	BOOL Is3D();
	long GetSketchPointsCount();
	VARIANT GetSketchHatches();
	LPUNKNOWN IEnumSketchHatches();
	VARIANT GetSplineParams2();
	double IGetSplineParams2();
	long GetSplineParamsCount2(long* Size);
	VARIANT GetSketchTextSegments();
	LPUNKNOWN IEnumSketchTextSegments();
	long GetConstrainedStatus();
	BOOL SetEntityCount(long EntityType, long EntityCount);
	long CheckFeatureUse(long FeatureType, long* OpenCount, long* ClosedCount);
	BOOL MergePoints(double Distance);
	LPDISPATCH GetReferenceEntity(long* LEntityType);
	long GetContourEdgeCount();
	VARIANT GetContourEdges(const VARIANT& Xform);
	LPDISPATCH IGetContourEdges(double* Xform, long EdgeCount);
	LPDISPATCH GetModelToSketchTransform();
	void SetModelToSketchTransform(LPDISPATCH newValue);
	long AutoDimension(long EntitiesToDimension, long HorizontalScheme, long HorizontalPlacement, long VerticalScheme, long VerticalPlacement);
	long GetLineCount2(short CrossHatchOption);
	VARIANT GetLines2(short CrossHatchOption);
	double IGetLines2(short CrossHatchOption, long ArraySize);
	VARIANT GetArcs2();
	double IGetArcs2(long ArraySize);
	VARIANT GetUserPoints2();
	double IGetUserPoints2(long ArraySize);
	VARIANT GetEllipses3();
	double IGetEllipses3(long ArraySize);
	VARIANT GetParabolas2();
	double IGetParabolas2(long ArraySize);
	BOOL IsShared();
	LPDISPATCH GetRelationManager();
	long AutoDimension2(long EntitiesToDimension, long HorizontalScheme, long HorizontalPlacement, long VerticalScheme, long VerticalPlacement);
	BOOL GetDetachSegmentOnDrag();
	BOOL SetDetachSegmentOnDrag(BOOL Detach);
	void AutoTraceSketchPicture();
};
/////////////////////////////////////////////////////////////////////////////
// ISketchPoint wrapper class

class ISketchPoint : public COleDispatchDriver
{
public:
	ISketchPoint() {}		// Calls COleDispatchDriver default constructor
	ISketchPoint(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISketchPoint(const ISketchPoint& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	double GetX();
	double GetY();
	double GetZ();
	double GetCoords();
	VARIANT GetId();
	long IGetID();
	BOOL Select(BOOL AppendFlag);
	BOOL SelectByMark(BOOL AppendFlag, long Mark);
	BOOL DeSelect();
	CString GetLayer();
	void SetLayer(LPCTSTR lpszNewValue);
	long GetLayerOverride();
	void SetLayerOverride(long nNewValue);
	long GetColor();
	void SetColor(long nNewValue);
	BOOL SetCoords(double Xx, double Yy, double Zz);
	VARIANT GetFramePointTangent(BOOL* Status);
	double IGetFramePointTangent(BOOL* Status);
	BOOL SetFramePointTangent(const VARIANT& ToVector);
	BOOL ISetFramePointTangent(double* ToVector);
	LPDISPATCH GetSketch();
	BOOL Select2(BOOL Append, long Mark);
	BOOL Select3(BOOL Append, long Mark, LPDISPATCH Callout);
	VARIANT GetRelations();
	long GetRelationsCount();
	LPDISPATCH IGetRelations(long Count);
	long GetStatus();
	void SetStatus(long nNewValue);
	BOOL Select4(BOOL Append, LPDISPATCH Data);
	long GetType();
	void SetType(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// ICallout wrapper class

class ICallout : public COleDispatchDriver
{
public:
	ICallout() {}		// Calls COleDispatchDriver default constructor
	ICallout(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ICallout(const ICallout& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CString GetLabel();
	void SetLabel(LPCTSTR lpszNewValue);
	long GetTargetStyle();
	void SetTargetStyle(long nNewValue);
	BOOL GetTextBox();
	void SetTextBox(BOOL bNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// ISketchRelation wrapper class

class ISketchRelation : public COleDispatchDriver
{
public:
	ISketchRelation() {}		// Calls COleDispatchDriver default constructor
	ISketchRelation(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISketchRelation(const ISketchRelation& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	VARIANT GetEntities();
	long GetEntitiesCount();
	LPDISPATCH IGetEntities(long NumEntities);
	long GetRelationType();
	VARIANT GetEntitiesType();
	long IGetEntitiesType(long NumEntities);
	VARIANT GetDefinitionEntities();
	LPDISPATCH IGetDefinitionEntities(long NumEntities);
};
/////////////////////////////////////////////////////////////////////////////
// ISelectData wrapper class

class ISelectData : public COleDispatchDriver
{
public:
	ISelectData() {}		// Calls COleDispatchDriver default constructor
	ISelectData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISelectData(const ISelectData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	double GetX();
	void SetX(double newValue);
	double GetY();
	void SetY(double newValue);
	double GetZ();
	void SetZ(double newValue);
	long GetMark();
	void SetMark(long nNewValue);
	LPDISPATCH GetView();
	void SetView(LPDISPATCH newValue);
	LPDISPATCH GetCallout();
	void SetCallout(LPDISPATCH newValue);
};
/////////////////////////////////////////////////////////////////////////////
// IView wrapper class

class IView : public COleDispatchDriver
{
public:
	IView() {}		// Calls COleDispatchDriver default constructor
	IView(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IView(const IView& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetSuppressState();
	void SetSuppressState(long nNewValue);
	LPDISPATCH GetNextView();
	LPDISPATCH IGetNextView();
	VARIANT GetLines();
	VARIANT GetOutline();
	VARIANT GetXform();
	VARIANT GetArcs();
	VARIANT GetUserPoints();
	VARIANT GetPolylines();
	VARIANT GetSplines();
	VARIANT GetDimensionInfo();
	VARIANT GetDimensionString();
	LPDISPATCH GetFirstNote();
	LPDISPATCH IGetFirstNote();
	LPDISPATCH GetFirstGTOL();
	LPDISPATCH IGetFirstGTOL();
	double IGetLines();
	double IGetOutline();
	double IGetXform();
	double IGetArcs();
	double IGetUserPoints();
	double IGetPolylines();
	double IGetSplines();
	double IGetDimensionInfo();
	CString IGetDimensionString();
	long GetLineCount();
	long GetArcCount();
	long GetUserPointsCount();
	long GetPolyLineCount(long* PointCount);
	long GetSplineCount(long* PointCount);
	long GetDimensionCount();
	VARIANT GetEllipses();
	double IGetEllipses();
	long GetEllipseCount();
	long GetDisplayMode();
	void SetDisplayMode(long DisplayIn);
	BOOL GetDisplayTangentEdges();
	void SetDisplayTangentEdges(BOOL DisplayIn);
	long GetCenterMarkCount();
	VARIANT GetCenterMarkInfo();
	double IGetCenterMarkInfo();
	long GetSectionLineCount(long* Size);
	VARIANT GetSectionLineInfo();
	VARIANT GetSectionLineStrings();
	double IGetSectionLineInfo();
	CString IGetSectionLineStrings();
	void UpdateViewDisplayGeometry();
	long GetDetailCircleCount();
	VARIANT GetDetailCircleInfo();
	double IGetDetailCircleInfo();
	VARIANT GetDetailCircleStrings();
	CString IGetDetailCircleStrings();
	VARIANT GetDimensionIds();
	CString IGetDimensionIds();
	VARIANT GetDimensionDisplayInfo();
	double IGetDimensionDisplayInfo();
	VARIANT GetDimensionDisplayString();
	CString IGetDimensionDisplayString();
	VARIANT GetArcs2();
	double IGetArcs2();
	VARIANT GetEllipses2();
	double IGetEllipses2();
	VARIANT GetViewXform();
	double IGetViewXform();
	LPDISPATCH GetFirstSFSymbol();
	LPDISPATCH IGetFirstSFSymbol();
	LPDISPATCH GetFirstDatumTag();
	LPDISPATCH IGetFirstDatumTag();
	LPDISPATCH GetFirstDatumTargetSym();
	LPDISPATCH IGetFirstDatumTargetSym();
	LPDISPATCH GetFirstWeldSymbol();
	LPDISPATCH IGetFirstWeldSymbol();
	long GetDatumPointsCount();
	VARIANT GetDatumPoints();
	double IGetDatumPoints();
	void UseDefaultAlignment();
	void RemoveAlignment();
	void AlignVerticalTo(LPCTSTR ViewNameIn);
	void AlignHorizontalTo(LPCTSTR ViewNameIn);
	LPDISPATCH GetDisplayData();
	LPDISPATCH IGetDisplayData();
	long GetPolyLineCount2(long* PointCount);
	VARIANT GetPolylines2();
	double IGetPolylines2();
	BOOL ShowExploded(BOOL ShowIt);
	BOOL IsExploded();
	void SetReferencedConfiguration(LPCTSTR lpszNewValue);
	CString GetReferencedConfiguration();
	LPDISPATCH GetFirstCThread();
	LPDISPATCH IGetFirstCThread();
	BOOL CreateViewArrow(LPCTSTR DrawingViewNameIn, LPCTSTR ArrowNameIn);
	void ModifyViewArrow(LPCTSTR DrawingViewNameIn, LPCTSTR ArrowNameIn);
	void MoveViewArrow(LPCTSTR DrawingViewNameIn, double Dx, double Dy, double Dz);
	VARIANT GetPolylines3();
	double IGetPolylines3();
	long GetPolyLineCount3(long* PointCount);
	LPDISPATCH GetFirstDisplayDimension();
	LPDISPATCH IGetFirstDisplayDimension();
	LPDISPATCH GetSketch();
	LPDISPATCH IGetSketch();
	VARIANT GetLines2();
	double IGetLines2();
	VARIANT GetSplines2();
	double IGetSplines2();
	VARIANT GetArcs3();
	double IGetArcs3();
	VARIANT GetEllipses3();
	double IGetEllipses3();
	LPDISPATCH GetBomTable();
	LPDISPATCH IGetBomTable();
	long GetUseSheetScale();
	void SetUseSheetScale(long nNewValue);
	double GetScaleDecimal();
	void SetScaleDecimal(double newValue);
	VARIANT GetScaleRatio();
	void SetScaleRatio(const VARIANT& newValue);
	double GetIScaleRatio();
	void SetIScaleRatio(double* newValue);
	VARIANT GetPosition();
	void SetPosition(const VARIANT& newValue);
	double GetIPosition();
	void SetIPosition(double* newValue);
	BOOL SetXform(const VARIANT& Transform);
	BOOL ISetXform(double* Transform);
	long GetAlignment();
	CString GetReferencedModelName();
	LPDISPATCH GetFirstAnnotation();
	LPDISPATCH IGetFirstAnnotation();
	LPDISPATCH GetFirstCustomSymbol();
	LPDISPATCH IGetFirstCustomSymbol();
	VARIANT GetDimensionInfo2();
	double IGetDimensionInfo2();
	VARIANT GetParabolas();
	double IGetParabolas();
	long GetParabolaCount();
	VARIANT GetEllipses4();
	double IGetEllipses4();
	VARIANT GetLines3();
	double IGetLines3();
	VARIANT GetArcs4();
	double IGetArcs4();
	VARIANT GetSplines3();
	double IGetSplines3();
	VARIANT GetEllipses5();
	double IGetEllipses5();
	VARIANT GetParabolas2();
	double IGetParabolas2();
	VARIANT GetUserPoints2();
	double IGetUserPoints2();
	VARIANT GetDimensionInfo3();
	double IGetDimensionInfo3();
	VARIANT GetDatumPoints2();
	double IGetDatumPoints2();
	CString GetName();
	long GetType();
	BOOL GetProjectedDimensions();
	void SetProjectedDimensions(BOOL bNewValue);
	BOOL HasDesignTable();
	VARIANT GetDesignTableExtent();
	double IGetDesignTableExtent();
	LPDISPATCH GetDisplayData2();
	LPDISPATCH IGetDisplayData2();
	LPDISPATCH GetFirstAnnotation2();
	LPDISPATCH IGetFirstAnnotation2();
	long GetDimensionCount2();
	VARIANT GetDimensionInfo4();
	double IGetDimensionInfo4();
	VARIANT GetDimensionString2();
	CString IGetDimensionString2();
	VARIANT GetDimensionIds2();
	CString IGetDimensionIds2();
	VARIANT GetDimensionDisplayInfo2();
	double IGetDimensionDisplayInfo2();
	VARIANT GetDimensionDisplayString2();
	CString IGetDimensionDisplayString2();
	LPDISPATCH GetFirstDisplayDimension2();
	LPDISPATCH IGetFirstDisplayDimension2();
	VARIANT GetPolylines4();
	double IGetPolylines4();
	long GetPolyLineCount4(long* PointCount);
	BOOL IsModelLoaded();
	long LoadModel();
	long GetDisplayTangentEdges2();
	void SetDisplayTangentEdges2(long DisplayIn);
	VARIANT GetSectionLines();
	LPDISPATCH IGetSectionLines();
	LPDISPATCH GetSection();
	LPDISPATCH IGetSection();
	VARIANT GetHiddenComponents();
	LPUNKNOWN EnumHiddenComponents();
	LPUNKNOWN EnumSectionLines();
	LPDISPATCH GetDisplayData3();
	LPDISPATCH IGetDisplayData3();
	long GetDimensionCount3();
	VARIANT GetDimensionInfo5();
	double IGetDimensionInfo5();
	VARIANT GetDimensionString3();
	CString IGetDimensionString3();
	VARIANT GetDimensionIds3();
	CString IGetDimensionIds3();
	VARIANT GetDimensionDisplayInfo3();
	double IGetDimensionDisplayInfo3();
	VARIANT GetDimensionDisplayString3();
	CString IGetDimensionDisplayString3();
	LPDISPATCH GetFirstDisplayDimension3();
	LPDISPATCH IGetFirstDisplayDimension3();
	BOOL IsCropped();
	double GetAngle();
	void SetAngle(double newValue);
	VARIANT GetDetailCircles();
	LPDISPATCH IGetDetailCircles(long NumDetailCircles);
	LPDISPATCH GetProjectionArrow();
	LPDISPATCH IGetProjectionArrow();
	LPDISPATCH GetDetail();
	LPDISPATCH IGetDetail();
	LPDISPATCH GetBaseView();
	LPDISPATCH IGetBaseView();
	LPUNKNOWN EnumHiddenComponents2();
	LPDISPATCH GetFirstMultiJogLeader();
	LPDISPATCH IGetFirstMultiJogLeader();
	BOOL GetVisible();
	void SetVisible(BOOL Visible, BOOL DependentsToo);
	LPDISPATCH GetFirstDowelSymbol();
	LPDISPATCH IGetFirstDowelSymbol();
	LPDISPATCH InsertBomTable(LPCTSTR Template, double Xloc, double Yloc, long* Errors);
	LPDISPATCH IInsertBomTable(LPCTSTR Template, double Xloc, double Yloc, long* Errors);
	BOOL SelectEntity(LPDISPATCH Entity, BOOL AppendFlag);
	BOOL ISelectEntity(LPDISPATCH Entity, BOOL AppendFlag);
	BOOL IsModelOutOfDate();
	LPDISPATCH GetModelToViewTransform();
	void SetModelToViewTransform(LPDISPATCH newValue);
	long GetDisplayMode2();
	BOOL GetFacettedHlrDisplay();
	BOOL GetDisplayEdgesInShadedMode();
	BOOL SetDisplayMode2(long Mode, BOOL Facetted, BOOL Edges);
	VARIANT GetPolylines5(short CrossHatchOption);
	double IGetPolylines5(short CrossHatchOption, long ArraySize);
	long GetPolyLineCount5(short CrossHatchOption, long* PointCount);
	long GetLineCount2(short CrossHatchOption);
	VARIANT GetLines4(short CrossHatchOption);
	double IGetLines4(short CrossHatchOption, long ArraySize);
	LPDISPATCH GetFirstBlockInstance();
	long GetSectionLineCount2(long* Size);
	VARIANT GetSectionLineInfo2();
	double IGetSectionLineInfo2(long ArraySize);
	long GetDetailCircleCount2(long* Size);
	VARIANT GetDetailCircleInfo2();
	double IGetDetailCircleInfo2(long ArraySize);
	BOOL IsBroken();
	long GetBreakLineCount(long* Size);
	VARIANT GetBreakLines();
	LPDISPATCH IGetBreakLines(long Count);
	LPDISPATCH InsertBreak(long Orientation, double Position1, double Position2, long Style);
	VARIANT GetBreakLineInfo();
	double IGetBreakLineInfo(long ArraySize);
	long GetFaceHatchCount();
	VARIANT GetFaceHatches();
	LPDISPATCH IGetFaceHatches(long NumFacesHatches);
	long GetCenterMarkCount2(long* Size);
	VARIANT GetCenterMarks();
	LPDISPATCH IGetCenterMarks(long Count);
	LPDISPATCH GetFirstCenterMark();
	LPDISPATCH GetCenterLineSketch();
	long GetDimensionDisplayInfoSize();
	VARIANT GetDimensionDisplayInfo4();
	double IGetDimensionDisplayInfo4(long ArraySize);
	LPDISPATCH GetFirstCenterLine();
	LPDISPATCH GetFirstDisplayDimension4();
	LPDISPATCH GetFirstTableAnnotation();
	LPDISPATCH GetRootDrawingComponent();
	LPDISPATCH GetReferencedDocument();
	LPDISPATCH InsertHoleTable(BOOL UseAnchorPoint, double X, double Y, long AnchorType, LPCTSTR TableTemplate);
	LPDISPATCH InsertBomTable2(BOOL UseAnchorPoint, double X, double Y, long AnchorType, long BomType, LPCTSTR Configuration, LPCTSTR TableTemplate);
	LPDISPATCH GetFirstDatumOrigin();
	BOOL GetUseParentDisplayMode();
	BOOL SetDisplayMode3(BOOL UseParent, long Mode, BOOL Facetted, BOOL Edges);
	BOOL AlignWithView(long AlignType, LPDISPATCH BaseView);
	BOOL GetUseParentScale();
	void SetUseParentScale(BOOL bNewValue);
	long Crop();
	BOOL IsPerspectiveView();
	long GetAnnotationCount();
	VARIANT GetAnnotations();
	LPDISPATCH IGetAnnotations(long NumAnnotations);
	long GetDimensionCount4();
	long GetDimensionDisplayInfoSize2();
	VARIANT GetDimensionDisplayInfo5();
	double IGetDimensionDisplayInfo5(long ArraySize);
	VARIANT GetDimensionDisplayString4();
	CString IGetDimensionDisplayString4();
	VARIANT GetDimensionIds4();
	CString IGetDimensionIds4();
	VARIANT GetDimensionInfo6();
	double IGetDimensionInfo6();
	VARIANT GetDimensionString4();
	CString IGetDimensionString4();
	LPDISPATCH GetFirstDisplayDimension5();
	LPDISPATCH GetFirstAnnotation3();
	BOOL IsLightweight();
	void SetResolvedToLightweight();
	void SetLightweightToResolved();
	LPDISPATCH GetFirstWeldBead();
	BOOL GetFocusLocked();
	void SetFocusLocked(BOOL bNewValue);
	CString GetName2();
	BOOL SetName2(LPCTSTR Name);
	long GetVisibleComponentCount();
	VARIANT GetVisibleComponents();
	LPDISPATCH IGetVisibleComponents(long ViewComponentCount);
	long GetVisibleEntityCount(LPDISPATCH LpViewComponent, long EntityType);
	VARIANT GetVisibleEntities(LPDISPATCH LpViewComponent, long EntityType);
	LPDISPATCH IGetVisibleEntities(LPDISPATCH LpViewComponent, long EntityType, long ViewEntityCount);
	double IGetPolyLinesAndCurves(short CrossHatchOption, long ArraySize);
	long GetPolyLinesAndCurvesCount(short CrossHatchOption, long* PointCount);
	BOOL GetShowSheetMetalBendNotes();
	void SetShowSheetMetalBendNotes(BOOL bNewValue);
	LPDISPATCH GetSheet();
	long GetDependentViewCount(BOOL AllViews, long SpecificViewType);
	VARIANT GetDependentViews(BOOL AllViews, long SpecificViewType);
	LPDISPATCH IGetDependentViews(BOOL AllViews, long SpecificViewType, long DependentViewCount);
	VARIANT GetPolyLinesAndCurves(short CrossHatchOption);
};
/////////////////////////////////////////////////////////////////////////////
// INote wrapper class

class INote : public COleDispatchDriver
{
public:
	INote() {}		// Calls COleDispatchDriver default constructor
	INote(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	INote(const INote& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetNext();
	LPDISPATCH IGetNext();
	CString GetText();
	double GetHeight();
	VARIANT GetAttachPos();
	VARIANT GetFontInfo();
	VARIANT GetLeaderInfo();
	BOOL IsAttached();
	BOOL HasExtraLeader();
	BOOL HasBalloon();
	VARIANT GetBalloonInfo();
	VARIANT GetTextPoint();
	VARIANT GetArrowHeadInfo();
	double IGetAttachPos();
	double IGetFontInfo();
	double IGetLeaderInfo(long* PointCount);
	double IGetBalloonInfo();
	double IGetTextPoint();
	double IGetArrowHeadInfo();
	VARIANT GetUpperRight();
	double IGetUpperRight();
	VARIANT GetExtent();
	double IGetExtent();
	BOOL IsCompoundNote();
	BOOL AddText(LPCTSTR Txt, double X, double Y, double Z);
	long GetTextCount();
	CString GetTextAtIndex(long Index);
	double GetHeightAtIndex(long Index);
	VARIANT GetTextOffsetAtIndex(long Index);
	double IGetTextOffsetAtIndex(long Index);
	void BeginSketchEdit();
	void EndSketchEdit();
	VARIANT GetExtentAtIndex(long Index);
	double IGetExtentAtIndex(long Index);
	void SetTextOffsetAtIndex(long Index, double X, double Y, double Z);
	LPDISPATCH GetSketch();
	LPDISPATCH IGetSketch();
	BOOL SetTextAtIndex(long Index, LPCTSTR Txt);
	BOOL SetText(LPCTSTR Txt);
	BOOL SetZeroLengthLeader(BOOL Flag);
	void SetHeight(double HeightIn);
	long GetHeightInPoints();
	void SetHeightInPoints(long HeightIn);
	CString GetName();
	BOOL SetName(LPCTSTR NameIn);
	double GetTextHeightAtIndex(long Index);
	VARIANT GetTextPositionAtIndex(long Index);
	double IGetTextPositionAtIndex(long Index);
	double GetTextAngleAtIndex(long Index);
	long GetTextRefPositionAtIndex(long Index);
	long GetTextInvertAtIndex(long Index);
	long GetLineCount();
	VARIANT GetLineAtIndex(long Index);
	double IGetLineAtIndex(long Index);
	long GetArcCount();
	VARIANT GetArcAtIndex(long Index);
	double IGetArcAtIndex(long Index);
	long GetArrowHeadCount();
	VARIANT GetArrowHeadAtIndex(long Index);
	double IGetArrowHeadAtIndex(long Index);
	long GetTriangleCount();
	VARIANT GetTriangleAtIndex(long Index);
	double IGetTriangleAtIndex(long Index);
	CString GetTextFontAtIndex(long Index);
	void SetTextPoint(double X, double Y, double Z);
	double GetTextLineSpacingAtIndex(long Index);
	long GetLeaderCount();
	VARIANT GetLeaderAtIndex(long Index);
	double IGetLeaderAtIndex(long Index, long* PointCount);
	LPDISPATCH GetTextFormat();
	LPDISPATCH IGetTextFormat();
	BOOL SetTextFormat(long TextFormatType, LPDISPATCH TextFormat);
	BOOL ISetTextFormat(long TextFormatType, LPDISPATCH TextFormat);
	LPDISPATCH GetTextFormatAtIndex(long Index);
	LPDISPATCH IGetTextFormatAtIndex(long Index);
	void SetTextFormatAtIndex(long Index, LPDISPATCH TextFormat);
	void ISetTextFormatAtIndex(long Index, LPDISPATCH TextFormat);
	long GetTextJustification();
	void SetTextJustification(long Justification);
	long GetTextJustificationAtIndex(long Index);
	void SetTextJustificationAtIndex(long Index, long Justification);
	BOOL GetUseDocTextFormat();
	CString GetHyperlinkText();
	BOOL SetHyperlinkText(LPCTSTR Text);
	LPDISPATCH GetAnnotation();
	LPDISPATCH IGetAnnotation();
	double GetAngle();
	void SetAngle(double newValue);
	long GetBalloonStyle();
	long GetBalloonSize();
	BOOL SetBalloon(long Style, long Size);
	long IGetTextTokenCount();
	VARIANT GetTextTokens(VARIANT* Positions, VARIANT* Widths, VARIANT* Heights);
	CString IGetTextTokens(double* Positions, double* Widths, double* Heights);
	BOOL IsBomBalloon();
	long GetBomBalloonTextStyle(BOOL WhichOne);
	CString GetBomBalloonText(BOOL WhichOne);
	BOOL SetBomBalloonText(long UpperTextStyle, LPCTSTR UpperText, long LowerTextStyle, LPCTSTR LowerText);
	BOOL GetReadOnly();
	void SetReadOnly(BOOL bNewValue);
	CString GetPromptText();
	void SetPromptText(LPCTSTR lpszNewValue);
	CString GetTagName();
	void SetTagName(LPCTSTR lpszNewValue);
	BOOL GetVisible();
	void SetVisible(BOOL bNewValue);
	BOOL IsAttribute();
	BOOL IsStackedBalloon();
	BOOL IsStackedBalloonMaster();
	LPDISPATCH GetBalloonStack();
	CString GetPropertyLinkedText();
	void SetPropertyLinkedText(LPCTSTR lpszNewValue);
	VARIANT GetTextPoint2();
	LPDISPATCH IGetTextPoint2();
	BOOL GetTextRightToLeft();
	void SetTextRightToLeft(BOOL bNewValue);
	BOOL GetIsBendLineNote();
};
/////////////////////////////////////////////////////////////////////////////
// ITextFormat wrapper class

class ITextFormat : public COleDispatchDriver
{
public:
	ITextFormat() {}		// Calls COleDispatchDriver default constructor
	ITextFormat(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ITextFormat(const ITextFormat& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	VARIANT GetAllValues();
	double IGetAllValues(long Count);
	BOOL GetItalic();
	void SetItalic(BOOL bNewValue);
	BOOL GetUnderline();
	void SetUnderline(BOOL bNewValue);
	BOOL GetStrikeout();
	void SetStrikeout(BOOL bNewValue);
	BOOL GetBold();
	void SetBold(BOOL bNewValue);
	double GetEscapement();
	void SetEscapement(double newValue);
	double GetLineSpacing();
	void SetLineSpacing(double newValue);
	double GetCharHeight();
	void SetCharHeight(double newValue);
	long GetCharHeightInPts();
	void SetCharHeightInPts(long nNewValue);
	BOOL IsHeightSpecifiedInPts();
	CString GetTypeFaceName();
	void SetTypeFaceName(LPCTSTR lpszNewValue);
	double GetWidthFactor();
	void SetWidthFactor(double newValue);
	double GetObliqueAngle();
	void SetObliqueAngle(double newValue);
	double GetLineLength();
	void SetLineLength(double newValue);
	BOOL GetVertical();
	void SetVertical(BOOL bNewValue);
	BOOL GetBackWards();
	void SetBackWards(BOOL bNewValue);
	BOOL GetUpsideDown();
	void SetUpsideDown(BOOL bNewValue);
	double GetCharSpacingFactor();
	void SetCharSpacingFactor(double newValue);
};
/////////////////////////////////////////////////////////////////////////////
// IAnnotation wrapper class

class IAnnotation : public COleDispatchDriver
{
public:
	IAnnotation() {}		// Calls COleDispatchDriver default constructor
	IAnnotation(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IAnnotation(const IAnnotation& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetNext();
	LPDISPATCH IGetNext();
	LPDISPATCH GetDisplayData();
	LPDISPATCH IGetDisplayData();
	long GetType();
	LPDISPATCH GetSpecificAnnotation();
	LPUNKNOWN IGetSpecificAnnotation();
	VARIANT GetPosition();
	double IGetPosition();
	BOOL SetPosition(double X, double Y, double Z);
	long GetLeaderCount();
	VARIANT GetLeaderPointsAtIndex(long Index);
	double IGetLeaderPointsAtIndex(long Index, long PointCount);
	long GetArrowHeadStyleAtIndex(long Index);
	long SetArrowHeadStyleAtIndex(long Index, long ArrowHeadStyle);
	BOOL GetLeader();
	BOOL GetBentLeader();
	long GetLeaderSide();
	BOOL GetSmartArrowHeadStyle();
	long SetLeader(BOOL Leader, long LeaderSide, BOOL SmartArrowHeadStyle, BOOL BentLeader);
	CString GetName();
	BOOL SetName(LPCTSTR NameIn);
	VARIANT GetVisualProperties();
	long IGetVisualProperties();
	CString GetLayer();
	void SetLayer(LPCTSTR lpszNewValue);
	long GetLayerOverride();
	void SetLayerOverride(long nNewValue);
	long GetColor();
	void SetColor(long nNewValue);
	long GetStyle();
	void SetStyle(long nNewValue);
	long GetWidth();
	void SetWidth(long nNewValue);
	long IGetAttachedEntityCount();
	VARIANT GetAttachedEntities();
	LPUNKNOWN IGetAttachedEntities();
	VARIANT GetAttachedEntityTypes();
	long IGetAttachedEntityTypes();
	LPDISPATCH GetNext2();
	LPDISPATCH IGetNext2();
	long GetVisible();
	void SetVisible(long nNewValue);
	long GetTextFormatCount();
	BOOL GetUseDocTextFormat(long Index);
	LPDISPATCH GetTextFormat(long Index);
	LPDISPATCH IGetTextFormat(long Index);
	BOOL SetTextFormat(long Index, BOOL UseDoc, LPDISPATCH TextFormat);
	BOOL ISetTextFormat(long Index, BOOL UseDoc, LPDISPATCH TextFormat);
	BOOL GetLeaderPerpendicular();
	BOOL GetLeaderAllAround();
	long SetLeader2(BOOL Leader, long LeaderSide, BOOL SmartArrowHeadStyle, BOOL BentLeader, BOOL Perpendicular, BOOL AllAround);
	BOOL Select(BOOL AppendFlag);
	BOOL SelectByMark(BOOL AppendFlag, long Mark);
	BOOL DeSelect();
	BOOL Select2(BOOL Append, long Mark);
	BOOL Select3(BOOL Append, LPDISPATCH Data);
	long GetAttachedEntityCount2();
	VARIANT GetAttachedEntities2();
	LPDISPATCH GetOwner();
	void SetOwner(LPDISPATCH newValue);
	long GetOwnerType();
	void SetOwnerType(long nNewValue);
	LPDISPATCH GetNext3();
	BOOL GetDashedLeader();
	long GetLeaderStyle();
	long SetLeader3(long LeaderStyle, long LeaderSide, BOOL SmartArrowHeadStyle, BOOL Perpendicular, BOOL AllAround, BOOL Dashed);
};
/////////////////////////////////////////////////////////////////////////////
// IDisplayData wrapper class

class IDisplayData : public COleDispatchDriver
{
public:
	IDisplayData() {}		// Calls COleDispatchDriver default constructor
	IDisplayData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IDisplayData(const IDisplayData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetTextCount();
	CString GetTextAtIndex(long Index);
	double GetTextHeightAtIndex(long Index);
	VARIANT GetTextPositionAtIndex(long Index);
	double IGetTextPositionAtIndex(long Index);
	double GetTextAngleAtIndex(long Index);
	long GetTextRefPositionAtIndex(long Index);
	long GetTextInvertAtIndex(long Index);
	CString GetTextFontAtIndex(long Index);
	long GetLineCount();
	VARIANT GetLineAtIndex(long Index);
	double IGetLineAtIndex(long Index);
	long GetArcCount();
	VARIANT GetArcAtIndex(long Index);
	double IGetArcAtIndex(long Index);
	long GetArrowHeadCount();
	VARIANT GetArrowHeadAtIndex(long Index);
	double IGetArrowHeadAtIndex(long Index);
	long GetTriangleCount();
	VARIANT GetTriangleAtIndex(long Index);
	double IGetTriangleAtIndex(long Index);
	long GetPolyLineCount();
	long GetPolylineSizeAtIndex(long Index);
	VARIANT GetPolylineAtIndex(long Index);
	double IGetPolylineAtIndex(long Index);
	long GetEllipseCount();
	VARIANT GetEllipseAtIndex(long Index);
	double IGetEllipseAtIndex(long Index);
	double GetTextLineSpacingAtIndex(long Index);
	VARIANT GetLineAtIndex2(long Index);
	double IGetLineAtIndex2(long Index);
	VARIANT GetArcAtIndex2(long Index);
	double IGetArcAtIndex2(long Index);
	long GetPolylineSizeAtIndex2(long Index);
	VARIANT GetPolylineAtIndex2(long Index);
	double IGetPolylineAtIndex2(long Index);
	VARIANT GetEllipseAtIndex2(long Index);
	double IGetEllipseAtIndex2(long Index);
	long GetParabolaCount();
	VARIANT GetParabolaAtIndex(long Index);
	double IGetParabolaAtIndex(long Index);
	long GetPolygonCount();
	long GetPolygonSizeAtIndex(long Index);
	VARIANT GetPolygonAtIndex(long Index);
	double IGetPolygonAtIndex(long Index);
	long GetTextInBoxStyleAtIndex(long Index);
	double GetTextInBoxWidthAtIndex(long Index);
	double GetTextInBoxHeightAtIndex(long Index);
};
/////////////////////////////////////////////////////////////////////////////
// IBalloonStack wrapper class

class IBalloonStack : public COleDispatchDriver
{
public:
	IBalloonStack() {}		// Calls COleDispatchDriver default constructor
	IBalloonStack(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IBalloonStack(const IBalloonStack& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetMaster();
	long GetCount();
	VARIANT GetStack();
	LPDISPATCH IGetStack(long Count);
	long GetLength();
	void SetLength(long nNewValue);
	long GetDirection();
	void SetDirection(long nNewValue);
	LPDISPATCH AddTo(long UpperTextStyle, LPCTSTR UpperText, long LowerTextStyle, LPCTSTR LowerText);
};
/////////////////////////////////////////////////////////////////////////////
// IGtol wrapper class

class IGtol : public COleDispatchDriver
{
public:
	IGtol() {}		// Calls COleDispatchDriver default constructor
	IGtol(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IGtol(const IGtol& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	void SetFrameValues(short FrameNumber, LPCTSTR Tol1, LPCTSTR Tol2, LPCTSTR Datum1, LPCTSTR Datum2, LPCTSTR Datum3);
	void SetFrameSymbols(short FrameNumber, short GCS, BOOL TolDia1, short TolMC1, BOOL TolDia2, short TolMC2, short DatumMC1, short DatumMC2, short DatumMC3);
	void SetPTZHeight(LPCTSTR PtzHt, BOOL DisplayIn);
	void SetDatumIdentifier(LPCTSTR DatumIdentifier);
	LPDISPATCH GetNextGTOL();
	LPDISPATCH IGetNextGTOL();
	VARIANT GetFrameValues(short FrameNumber);
	VARIANT GetFrameSymbols(short FrameNumber);
	CString GetPTZHeight();
	CString GetDatumIdentifier();
	double GetHeight();
	VARIANT GetAttachPos();
	VARIANT GetFontInfo();
	VARIANT GetLeaderInfo();
	BOOL IsAttached();
	BOOL HasExtraLeader();
	VARIANT GetTextPoint();
	VARIANT GetArrowHeadInfo();
	double IGetAttachPos();
	double IGetFontInfo();
	double IGetLeaderInfo(long* PointCount);
	double IGetTextPoint();
	double IGetArrowHeadInfo();
	CString GetSymName(short SymIdx);
	CString GetSymDesc(short SymIdx);
	VARIANT GetSymText(short SymIdx);
	VARIANT GetSymEdgeCounts(short SymIdx);
	VARIANT GetSymLines(short SymIdx);
	VARIANT GetSymArcs(short SymIdx);
	VARIANT GetSymCircles(short SymIdx);
	VARIANT GetSymTextPoints(short SymIdx);
	short IGetSymEdgeCounts(short SymIdx);
	double IGetSymLines(short SymIdx);
	double IGetSymArcs(short SymIdx);
	double IGetSymCircles(short SymIdx);
	double IGetSymTextPoints(short SymIdx);
	long GetTextCount();
	CString GetTextAtIndex(long Index);
	double GetTextHeightAtIndex(long Index);
	VARIANT GetTextPositionAtIndex(long Index);
	double IGetTextPositionAtIndex(long Index);
	double GetTextAngleAtIndex(long Index);
	long GetTextRefPositionAtIndex(long Index);
	long GetTextInvertAtIndex(long Index);
	long GetLineCount();
	VARIANT GetLineAtIndex(long Index);
	double IGetLineAtIndex(long Index);
	long GetArcCount();
	VARIANT GetArcAtIndex(long Index);
	double IGetArcAtIndex(long Index);
	long GetArrowHeadCount();
	VARIANT GetArrowHeadAtIndex(long Index);
	double IGetArrowHeadAtIndex(long Index);
	long GetTriangleCount();
	VARIANT GetTriangleAtIndex(long Index);
	double IGetTriangleAtIndex(long Index);
	CString IGetFrameValues(short FrameNumber);
	short IGetFrameSymbols(short FrameNumber);
	CString IGetSymText(short SymIdx);
	void SetFrameSymbols2(short FrameNumber, LPCTSTR GCS, BOOL TolDia1, LPCTSTR TolMC1, BOOL TolDia2, LPCTSTR TolMC2, LPCTSTR DatumMC1, LPCTSTR DatumMC2, LPCTSTR DatumMC3);
	CString GetTextFont();
	long GetLeaderCount();
	VARIANT GetLeaderAtIndex(long Index);
	double IGetLeaderAtIndex(long Index, long* PointCount);
	void SetPosition(double X, double Y, double Z);
	BOOL GetUseDocTextFormat();
	LPDISPATCH GetTextFormat();
	LPDISPATCH IGetTextFormat();
	BOOL SetTextFormat(long TextFormatType, LPDISPATCH TextFormat);
	BOOL ISetTextFormat(long TextFormatType, LPDISPATCH TextFormat);
	BOOL GetCompositeFrame();
	void SetCompositeFrame(BOOL Composite);
	BOOL GetBetweenTwoPoints();
	CString GetBetweenTwoPointsText(long Index);
	void SetBetweenTwoPoints(BOOL Between, LPCTSTR TextFrom, LPCTSTR TextTo);
	BOOL GetAllAround();
	long GetLeaderSide();
	void SetLeader(BOOL Leader, long LeaderSide, BOOL BentLeader, BOOL AllAround);
	LPDISPATCH GetAnnotation();
	LPDISPATCH IGetAnnotation();
	VARIANT GetFrameSymbols2(short FrameNumber);
	CString IGetFrameSymbols2(short FrameNumber);
	VARIANT GetFrameDiameterSymbols(short FrameNumber);
	BOOL IGetFrameDiameterSymbols(short FrameNumber);
	short GetFrameCount();
	VARIANT GetLeaderAtIndex2(long Index);
	double IGetLeaderAtIndex2(long Index, long* PointCount);
};
/////////////////////////////////////////////////////////////////////////////
// ISFSymbol wrapper class

class ISFSymbol : public COleDispatchDriver
{
public:
	ISFSymbol() {}		// Calls COleDispatchDriver default constructor
	ISFSymbol(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISFSymbol(const ISFSymbol& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetNext();
	LPDISPATCH IGetNext();
	long GetTextCount();
	CString GetTextAtIndex(long Index);
	double GetTextHeightAtIndex(long Index);
	VARIANT GetTextPositionAtIndex(long Index);
	double IGetTextPositionAtIndex(long Index);
	double GetTextAngleAtIndex(long Index);
	long GetLineCount();
	VARIANT GetLineAtIndex(long Index);
	double IGetLineAtIndex(long Index);
	long GetArcCount();
	VARIANT GetArcAtIndex(long Index);
	double IGetArcAtIndex(long Index);
	long GetArrowHeadCount();
	VARIANT GetArrowHeadAtIndex(long Index);
	double IGetArrowHeadAtIndex(long Index);
	long GetTextRefPositionAtIndex(long Index);
	long GetTextInvertAtIndex(long Index);
	CString GetTextFontAtIndex(long Index);
	long GetTriangleCount();
	VARIANT GetTriangleAtIndex(long Index);
	double IGetTriangleAtIndex(long Index);
	BOOL IsAttached();
	BOOL HasExtraLeader();
	long GetLeaderCount();
	VARIANT GetLeaderAtIndex(long Index);
	double IGetLeaderAtIndex(long Index, long* PointCount);
	double IGetArrowHeadInfo();
	VARIANT GetArrowHeadInfo();
	LPDISPATCH GetAnnotation();
	LPDISPATCH IGetAnnotation();
	long GetSymbolType();
	BOOL SetSymbolType(long SymbolType);
	long GetDirectionOfLay();
	BOOL SetDirectionOfLay(long Direction);
	CString GetText(long WhichOne);
	BOOL SetText(long WhichOne, LPCTSTR Text);
	BOOL GetRotated();
	void SetRotated(BOOL bNewValue);
	BOOL GetGrinding();
	void SetGrinding(BOOL bNewValue);
	double GetAngle();
	BOOL SetAngle(double Angle);
	long GetOrientation();
	void SetOrientation(long nNewValue);
	long GetSymbol();
	long GetSymbolSurfaceTexture();
	BOOL GetSymbolAllAround();
	BOOL SetSymbol(long Symbol, long SurfaceTexture, BOOL AllAround);
	BOOL GetGOSTNotation();
	void SetGOSTNotation(BOOL bNewValue);
	BOOL GetGOSTDefaultSymbol();
	void SetGOSTDefaultSymbol(BOOL bNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// IDatumTag wrapper class

class IDatumTag : public COleDispatchDriver
{
public:
	IDatumTag() {}		// Calls COleDispatchDriver default constructor
	IDatumTag(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IDatumTag(const IDatumTag& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetNext();
	LPDISPATCH IGetNext();
	long GetTextCount();
	CString GetTextAtIndex(long Index);
	double GetTextHeightAtIndex(long Index);
	VARIANT GetTextPositionAtIndex(long Index);
	double IGetTextPositionAtIndex(long Index);
	double GetTextAngleAtIndex(long Index);
	long GetTextRefPositionAtIndex(long Index);
	long GetTextInvertAtIndex(long Index);
	long GetLineCount();
	VARIANT GetLineAtIndex(long Index);
	double IGetLineAtIndex(long Index);
	long GetArcCount();
	VARIANT GetArcAtIndex(long Index);
	double IGetArcAtIndex(long Index);
	long GetArrowHeadCount();
	VARIANT GetArrowHeadAtIndex(long Index);
	double IGetArrowHeadAtIndex(long Index);
	long GetTriangleCount();
	VARIANT GetTriangleAtIndex(long Index);
	double IGetTriangleAtIndex(long Index);
	LPDISPATCH GetAnnotation();
	LPDISPATCH IGetAnnotation();
	CString GetLabel();
	BOOL SetLabel(LPCTSTR Label);
	BOOL GetFilledTriangle();
	void SetFilledTriangle(BOOL bNewValue);
	BOOL GetShoulder();
	void SetShoulder(BOOL bNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// IDatumTargetSym wrapper class

class IDatumTargetSym : public COleDispatchDriver
{
public:
	IDatumTargetSym() {}		// Calls COleDispatchDriver default constructor
	IDatumTargetSym(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IDatumTargetSym(const IDatumTargetSym& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetNext();
	LPDISPATCH IGetNext();
	long GetTextCount();
	CString GetTextAtIndex(long Index);
	double GetTextHeightAtIndex(long Index);
	VARIANT GetTextPositionAtIndex(long Index);
	double IGetTextPositionAtIndex(long Index);
	double GetTextAngleAtIndex(long Index);
	long GetTextRefPositionAtIndex(long Index);
	long GetTextInvertAtIndex(long Index);
	long GetLineCount();
	VARIANT GetLineAtIndex(long Index);
	double IGetLineAtIndex(long Index);
	long GetArcCount();
	VARIANT GetArcAtIndex(long Index);
	double IGetArcAtIndex(long Index);
	long GetArrowHeadCount();
	VARIANT GetArrowHeadAtIndex(long Index);
	double IGetArrowHeadAtIndex(long Index);
	long GetTriangleCount();
	VARIANT GetTriangleAtIndex(long Index);
	double IGetTriangleAtIndex(long Index);
	LPDISPATCH GetAnnotation();
	LPDISPATCH IGetAnnotation();
	long GetTargetShape();
	CString GetTargetAreaSize(long WhichOne);
	BOOL SetTargetArea(long Shape, LPCTSTR Size1, LPCTSTR Size2);
	BOOL GetDisplaySymbol();
	BOOL GetDisplayTargetArea();
	BOOL GetDisplaySizeOutside();
	BOOL SetDisplay(BOOL Symbol, BOOL TargetArea, BOOL SizeOutside);
	CString GetDatumReferenceLabel(long WhichOne);
	BOOL SetDatumReferenceLabel(long WhichOne, LPCTSTR Text);
};
/////////////////////////////////////////////////////////////////////////////
// IWeldSymbol wrapper class

class IWeldSymbol : public COleDispatchDriver
{
public:
	IWeldSymbol() {}		// Calls COleDispatchDriver default constructor
	IWeldSymbol(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IWeldSymbol(const IWeldSymbol& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetNext();
	LPDISPATCH IGetNext();
	long GetTextCount();
	CString GetTextAtIndex(long Index);
	double GetTextHeightAtIndex(long Index);
	VARIANT GetTextPositionAtIndex(long Index);
	double IGetTextPositionAtIndex(long Index);
	double GetTextAngleAtIndex(long Index);
	long GetTextRefPositionAtIndex(long Index);
	long GetTextInvertAtIndex(long Index);
	long GetLineCount();
	VARIANT GetLineAtIndex(long Index);
	double IGetLineAtIndex(long Index);
	long GetArcCount();
	VARIANT GetArcAtIndex(long Index);
	double IGetArcAtIndex(long Index);
	long GetArrowHeadCount();
	VARIANT GetArrowHeadAtIndex(long Index);
	double IGetArrowHeadAtIndex(long Index);
	long GetTriangleCount();
	VARIANT GetTriangleAtIndex(long Index);
	double IGetTriangleAtIndex(long Index);
	BOOL IsAttached();
	BOOL HasExtraLeader();
	long GetLeaderCount();
	VARIANT GetLeaderAtIndex(long Index);
	double IGetLeaderAtIndex(long Index, long* PointCount);
	double IGetArrowHeadInfo();
	VARIANT GetArrowHeadInfo();
	LPDISPATCH GetAnnotation();
	LPDISPATCH IGetAnnotation();
	CString GetText(long WhichText);
	long GetContour(BOOL Top);
	long GetSymmetric();
	BOOL GetPeripheral();
	long GetFieldWeld();
	BOOL GetProcess();
	BOOL GetProcessReference();
	BOOL GetStagger();
	BOOL SetText(BOOL Top, LPCTSTR Left, LPCTSTR Symbol, LPCTSTR Right, LPCTSTR Stagger, long Contour);
	BOOL SetSymmetric(long Symmetric);
	BOOL SetPeripheral(BOOL Peripheral);
	BOOL SetFieldWeld(long FieldWeld);
	BOOL SetProcess(BOOL Process, LPCTSTR Text, BOOL Reference);
	BOOL SetStagger(BOOL Stagger);
};
/////////////////////////////////////////////////////////////////////////////
// ICThread wrapper class

class ICThread : public COleDispatchDriver
{
public:
	ICThread() {}		// Calls COleDispatchDriver default constructor
	ICThread(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ICThread(const ICThread& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetNext();
	LPDISPATCH IGetNext();
	LPDISPATCH GetDisplayData();
	LPDISPATCH IGetDisplayData();
	LPDISPATCH GetAnnotation();
	LPDISPATCH IGetAnnotation();
	LPDISPATCH GetThreadCallout();
	VARIANT GetPatternedTransforms();
	long GetPatternedTransformsCount();
	LPDISPATCH IGetPatternedTransforms(long Count);
};
/////////////////////////////////////////////////////////////////////////////
// IDisplayDimension wrapper class

class IDisplayDimension : public COleDispatchDriver
{
public:
	IDisplayDimension() {}		// Calls COleDispatchDriver default constructor
	IDisplayDimension(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IDisplayDimension(const IDisplayDimension& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetNext();
	LPDISPATCH IGetNext();
	LPDISPATCH GetDisplayData();
	LPDISPATCH IGetDisplayData();
	long GetWitnessVisibility();
	void SetWitnessVisibility(long nNewValue);
	long GetLeaderVisibility();
	void SetLeaderVisibility(long nNewValue);
	BOOL GetBrokenLeader();
	void SetBrokenLeader(BOOL bNewValue);
	BOOL GetSmartWitness();
	void SetSmartWitness(BOOL bNewValue);
	BOOL GetShowParenthesis();
	void SetShowParenthesis(BOOL bNewValue);
	long GetArrowSide();
	void SetArrowSide(long nNewValue);
	BOOL GetShowDimensionValue();
	void SetShowDimensionValue(BOOL bNewValue);
	CString GetText(long WhichText);
	void SetText(long WhichText, LPCTSTR Text);
	LPDISPATCH GetDimension();
	LPDISPATCH IGetDimension();
	BOOL GetUseDocTextFormat();
	LPDISPATCH GetTextFormat();
	LPDISPATCH IGetTextFormat();
	BOOL SetTextFormat(long TextFormatType, LPDISPATCH TextFormat);
	BOOL ISetTextFormat(long TextFormatType, LPDISPATCH TextFormat);
	LPDISPATCH GetAnnotation();
	LPDISPATCH IGetAnnotation();
	BOOL GetSolidLeader();
	void SetSolidLeader(BOOL bNewValue);
	BOOL GetDiametric();
	void SetDiametric(BOOL bNewValue);
	BOOL GetDisplayAsLinear();
	void SetDisplayAsLinear(BOOL bNewValue);
	BOOL GetUseDocSecondArrow();
	BOOL GetSecondArrow();
	void SetSecondArrow(BOOL UseDoc, BOOL SecondArrow);
	BOOL GetShortenedRadius();
	void SetShortenedRadius(BOOL bNewValue);
	BOOL GetDimensionToInside();
	void SetDimensionToInside(BOOL bNewValue);
	BOOL GetUseDocDual();
	void SetDual(BOOL UseDoc);
	BOOL GetUseDocArrowHeadStyle();
	long GetArrowHeadStyle();
	void SetArrowHeadStyle(BOOL UseDoc, long ArrowHeadStyle);
	BOOL GetCenterText();
	void SetCenterText(BOOL bNewValue);
	BOOL GetInspection();
	void SetInspection(BOOL bNewValue);
	BOOL GetUseDocPrecision();
	long GetPrimaryPrecision();
	long GetAlternatePrecision();
	long GetPrimaryTolPrecision();
	long GetAlternateTolPrecision();
	long SetPrecision(BOOL UseDoc, long Primary, long Alternate, long PrimaryTol, long AlternateTol);
	BOOL GetAutoArcLengthLeader();
	long GetArcLengthLeader();
	long SetArcLengthLeader(BOOL AutoLeader, long LeaderType);
	BOOL GetUseDocUnits();
	long GetUnits();
	long GetFractionBase();
	long GetFractionValue();
	BOOL GetRoundToFraction();
	long SetUnits(BOOL UseDoc, long UType, long FractBase, long FractDenom, BOOL RoundToFraction);
	BOOL GetUseDocBrokenLeader();
	long GetBrokenLeader2();
	long SetBrokenLeader2(BOOL UseDoc, long Broken);
	LPDISPATCH GetNext2();
	LPDISPATCH IGetNext2();
	long GetType();
	double GetScale2();
	void SetScale2(double newValue);
	BOOL GetDisplayAsChain();
	void SetDisplayAsChain(BOOL bNewValue);
	LPDISPATCH GetNext3();
	LPDISPATCH IGetNext3();
	BOOL AddDisplayEnt(long Type, const VARIANT& Data);
	BOOL IAddDisplayEnt(long Type, double* Data);
	BOOL AddDisplayText(LPCTSTR Text, const VARIANT& Position, LPDISPATCH Format, long Attachment, double WidthFactor);
	BOOL IAddDisplayText(LPCTSTR Text, double* Position, LPDISPATCH Format, long Attachment, double WidthFactor);
	BOOL GetJogged();
	void SetJogged(BOOL bNewValue);
	BOOL AutoJogOrdinate();
	BOOL GetIsLinked();
	LPDISPATCH GetNext4();
	long GetHorizontalJustification();
	void SetHorizontalJustification(long nNewValue);
	long GetVerticalJustification();
	void SetVerticalJustification(long nNewValue);
	CString GetLinkedText();
	long SetLinkedText(LPCTSTR BstrLinkedText);
	long Unlink();
	BOOL GetMarkedForDrawing();
	void SetMarkedForDrawing(BOOL bNewValue);
	long GetPrimaryPrecision2();
	long GetAlternatePrecision2();
	long GetPrimaryTolPrecision2();
	long GetAlternateTolPrecision2();
	long SetPrecision2(long Primary, long Dual, long PrimaryTol, long DualTol);
	long GetType2();
	BOOL GetUseDocBentLeaderLength();
	double GetBentLeaderLength();
	BOOL SetBentLeaderLength(BOOL UseDoc, double Length);
	BOOL GetShowTolParenthesis();
	void SetShowTolParenthesis(BOOL bNewValue);
	LPDISPATCH GetDefinitionTransform();
	BOOL GetOffsetText();
	void SetOffsetText(BOOL bNewValue);
	LPDISPATCH GetNext5();
	double GetMaxWitnessLineLength();
	void SetMaxWitnessLineLength(double newValue);
	BOOL GetGridBubble();
	void SetGridBubble(BOOL bNewValue);
	BOOL GetElevation();
	void SetElevation(BOOL bNewValue);
	long GetEndSymbol();
	void SetEndSymbol(long nNewValue);
	BOOL GetOverride();
	double GetOverrideValue();
	BOOL SetOverride(BOOL Override, double Value);
};
/////////////////////////////////////////////////////////////////////////////
// IDimension wrapper class

class IDimension : public COleDispatchDriver
{
public:
	IDimension() {}		// Calls COleDispatchDriver default constructor
	IDimension(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IDimension(const IDimension& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	double GetValue();
	void SetValue(double newValue);
	double GetSystemValue();
	void SetSystemValue(double newValue);
	double GetUserValueIn(LPDISPATCH Doc);
	double IGetUserValueIn(LPDISPATCH Doc);
	void SetUserValueIn(LPDISPATCH Doc, double NewValue);
	void ISetUserValueIn(LPDISPATCH Doc, double NewValue);
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	long GetToleranceType();
	BOOL SetToleranceType(long NewType);
	VARIANT GetToleranceValues();
	double IGetToleranceValues();
	BOOL SetToleranceValues(double TolMin, double TolMax);
	VARIANT GetToleranceFontInfo();
	double IGetToleranceFontInfo();
	BOOL SetToleranceFontInfo(long UseFontScale, double TolScale, double TolHeight);
	CString GetToleranceFitValues();
	BOOL SetToleranceFitValues(LPCTSTR NewLValue, LPCTSTR NewUValue);
	BOOL GetReadOnly();
	void SetReadOnly(BOOL bNewValue);
	CString GetFullName();
	long GetDrivenState();
	void SetDrivenState(long nNewValue);
	BOOL IsReference();
	BOOL IsAppliedToAllConfigurations();
	long SetSystemValue2(double NewValue, long WhichConfigurations);
	long SetValue2(double NewValue, long WhichConfigurations);
	long SetUserValueIn2(LPDISPATCH Doc, double NewValue, long WhichConfigurations);
	long ISetUserValueIn2(LPDISPATCH Doc, double NewValue, long WhichConfigurations);
	long GetArcEndCondition(long Index);
	long SetArcEndCondition(long Index, long Condition);
	double GetValue2(LPCTSTR ConfigName);
	double GetSystemValue2(LPCTSTR ConfigName);
	double IGetUserValueIn2(LPDISPATCH Doc);
	long ISetUserValueIn3(LPDISPATCH Doc, double NewValue, long WhichConfigurations);
	long GetType();
	long ISetValue3(double NewValue, long WhichConfigurations, long Config_count, BSTR* Config_names);
	long SetValue3(double NewValue, long WhichConfigurations, const VARIANT& Config_names);
	double IGetValue3(long WhichConfigurations, long Config_count, BSTR* Config_names);
	VARIANT GetValue3(long WhichConfigurations, const VARIANT& Config_names);
	LPDISPATCH GetDimensionLineDirection();
	void SetDimensionLineDirection(LPDISPATCH newValue);
	LPDISPATCH GetExtensionLineDirection();
	void SetExtensionLineDirection(LPDISPATCH newValue);
	VARIANT GetReferencePoints();
	void SetReferencePoints(const VARIANT& newValue);
	long GetReferencePointsCount();
	LPDISPATCH IGetReferencePoints(long PointsCount);
	void ISetReferencePoints(long PointsCount, LPDISPATCH* RefPoints);
	long SetSystemValue3(double NewValue, long WhichConfigurations, const VARIANT& Config_names);
	long ISetSystemValue3(double NewValue, long WhichConfigurations, long Config_count, BSTR* Config_names);
	VARIANT GetSystemValue3(long WhichConfigurations, const VARIANT& Config_names);
	double IGetSystemValue3(long WhichConfigurations, long Config_count, BSTR* Config_names);
	LPDISPATCH GetFeatureOwner();
	LPDISPATCH GetTolerance();
};
/////////////////////////////////////////////////////////////////////////////
// IFeature wrapper class

class IFeature : public COleDispatchDriver
{
public:
	IFeature() {}		// Calls COleDispatchDriver default constructor
	IFeature(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IFeature(const IFeature& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	LPDISPATCH Parameter(LPCTSTR Name);
	LPDISPATCH IParameter(LPCTSTR Name);
	LPDISPATCH GetNextFeature();
	LPDISPATCH IGetNextFeature();
	CString GetTypeName();
	LPDISPATCH GetSpecificFeature();
	LPUNKNOWN IGetSpecificFeature();
	BOOL GetUIState(long StateType);
	void SetUIState(long StateType, BOOL Flag);
	CString GetMaterialUserName();
	BOOL SetMaterialUserName(LPCTSTR Name);
	CString GetMaterialIdName();
	BOOL SetMaterialIdName(LPCTSTR Name);
	VARIANT GetMaterialPropertyValues();
	BOOL SetMaterialPropertyValues(const VARIANT& MaterialPropertyValues);
	long AddPropertyExtension(const VARIANT& PropertyExtension);
	VARIANT GetPropertyExtension(long Id);
	void ResetPropertyExtension();
	LPDISPATCH GetFirstSubFeature();
	LPDISPATCH IGetFirstSubFeature();
	LPDISPATCH GetNextSubFeature();
	LPDISPATCH IGetNextSubFeature();
	double IGetMaterialPropertyValues();
	BOOL ISetMaterialPropertyValues(double* MaterialPropertyValues);
	BOOL IsSuppressed();
	long GetUpdateStamp();
	BOOL SetBody(LPDISPATCH BodyIn);
	BOOL ISetBody(LPDISPATCH BodyIn);
	LPDISPATCH GetBody();
	LPDISPATCH IGetBody();
	LPUNKNOWN EnumDisplayDimensions();
	LPDISPATCH GetDefinition();
	LPUNKNOWN IGetDefinition();
	BOOL ModifyDefinition(LPDISPATCH Data, LPDISPATCH TopDoc, LPDISPATCH Component);
	BOOL IModifyDefinition(LPUNKNOWN Data, LPDISPATCH TopDoc, LPDISPATCH Component);
	long GetFaceCount();
	VARIANT GetFaces();
	LPDISPATCH IGetFaces(long* FaceCount);
	LPDISPATCH GetFirstDisplayDimension();
	LPDISPATCH GetNextDisplayDimension(LPDISPATCH DispIn);
	long GetErrorCode();
	long IGetChildCount();
	VARIANT GetChildren();
	LPDISPATCH IGetChildren();
	long IGetParentCount();
	VARIANT GetParents();
	LPDISPATCH IGetParents();
	BOOL SetBody2(LPDISPATCH BodyIn, BOOL ApplyUserIds);
	BOOL ISetBody2(LPDISPATCH BodyIn, BOOL ApplyUserIds);
	CString GetImportedFileName();
	BOOL SetImportedFileName(LPCTSTR ImpName);
	BOOL SetSuppression(long SuppressState);
	BOOL RemoveMaterialProperty();
	BOOL Select(BOOL AppendFlag);
	BOOL SelectByMark(BOOL AppendFlag, long Mark);
	BOOL DeSelect();
	BOOL GetBox(VARIANT* BBox);
	BOOL IGetBox(double* BBox);
	BOOL IModifyDefinition2(LPUNKNOWN Data, LPDISPATCH TopDoc, LPDISPATCH Component);
	LPDISPATCH IGetFaces2(long* FaceCount);
	LPDISPATCH IGetBody2();
	BOOL ISetBody3(LPDISPATCH BodyIn, BOOL ApplyUserIds);
	void ListExternalFileReferences(VARIANT* ModelPathName, VARIANT* ComponentPathName, VARIANT* Feature, VARIANT* DataType, VARIANT* Status, VARIANT* RefEntity, VARIANT* FeatCom);
	long ListExternalFileReferencesCount();
	void IListExternalFileReferences(long NumRefs, BSTR* ModelPathName, BSTR* CompPathName, BSTR* Feature, BSTR* DataType, long* Status, BSTR* RefEntity, BSTR* FeatComp);
	BOOL Select2(BOOL Append, long Mark);
	BOOL IsRolledBack();
	BOOL IsBase();
	CString GetDescription();
	void SetDescription(LPCTSTR lpszNewValue);
	BOOL MakeSubFeature(LPDISPATCH SubFeature);
	CString GetCreatedBy();
	CString GetDateCreated();
	CString GetDateModified();
	BOOL IsBase2();
	LPDISPATCH GetSpecificFeature2();
	void SetMaterialPropertyValues2(const VARIANT& Material_values, long Config_opt, const VARIANT& Config_names);
	void ISetMaterialPropertyValues2(double* Material_values, long Config_opt, long Config_count, BSTR* Config_names);
	VARIANT GetMaterialPropertyValues2(long Config_opt, const VARIANT& Config_names);
	double IGetMaterialPropertyValues2(long Config_opt, long Config_count, BSTR* Config_names);
	BOOL SetSuppression2(long SuppressionState, long Config_opt, const VARIANT& Config_names);
	BOOL ISetSuppression2(long SuppressionState, long Config_opt, long Config_count, BSTR* Config_names);
	VARIANT IsSuppressed2(long Config_opt, const VARIANT& Config_names);
	BOOL IIsSuppressed2(long Config_opt, long Config_count, BSTR* Config_names);
	LPDISPATCH GetCustomPropertyManager();
	BOOL RemoveMaterialProperty2(long Config_opt, const VARIANT& Config_names);
	BOOL IRemoveMaterialProperty2(long Config_opt, long Config_count, BSTR* Config_names);
	void ListExternalFileReferences2(VARIANT* ModelPathName, VARIANT* ComponentPathName, VARIANT* Feature, VARIANT* DataType, VARIANT* Status, VARIANT* RefEntity, VARIANT* FeatCom, long* ConfigOption, BSTR* ConfigName);
	void IListExternalFileReferences2(long NumRefs, BSTR* ModelPathName, BSTR* CompPathName, BSTR* Feature, BSTR* DataType, long* Status, BSTR* RefEntity, BSTR* FeatComp, long* ConfigOption, BSTR* ConfigName);
	void UpdateExternalFileReferences(long ConfigOption, LPCTSTR ConfigName, long UpdateStatus);
	long GetVisible();
	LPDISPATCH GetTexture(LPCTSTR Config_name);
	BOOL SetTexture(BOOL BAllConfig, LPCTSTR Config_name, LPDISPATCH TextureIn);
	BOOL RemoveTexture(BOOL BAllConfig, LPCTSTR Config_name);
	long GetAffectedFaceCount();
	VARIANT GetAffectedFaces();
	LPDISPATCH IGetAffectedFaces(long* NCount);
	long GetCreatedVersion();
	long GetModifiedVersion();
};
/////////////////////////////////////////////////////////////////////////////
// ICustomPropertyManager wrapper class

class ICustomPropertyManager : public COleDispatchDriver
{
public:
	ICustomPropertyManager() {}		// Calls COleDispatchDriver default constructor
	ICustomPropertyManager(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ICustomPropertyManager(const ICustomPropertyManager& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetOwner();
	long GetCount();
	VARIANT GetNames();
	CString IGetNames(long Count);
	CString GetType(LPCTSTR FieldName);
	CString Get(LPCTSTR FieldName);
	long Set(LPCTSTR FieldName, LPCTSTR FieldValue);
	long Add(LPCTSTR FieldName, LPCTSTR FieldType, LPCTSTR FieldValue);
	long Delete(LPCTSTR FieldName);
	void Get2(LPCTSTR FieldName, BSTR* ValOut, BSTR* ReesolvedValOut);
};
/////////////////////////////////////////////////////////////////////////////
// ITexture wrapper class

class ITexture : public COleDispatchDriver
{
public:
	ITexture() {}		// Calls COleDispatchDriver default constructor
	ITexture(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ITexture(const ITexture& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CString GetMaterialName();
	void SetMaterialName(LPCTSTR lpszNewValue);
	double GetScaleFactor();
	void SetScaleFactor(double newValue);
	double GetAngle();
	void SetAngle(double newValue);
	BOOL GetBlendColor();
	void SetBlendColor(BOOL bNewValue);
	CString GetSystemTextureName(LPCTSTR FileNameIn, BOOL* Res);
};
/////////////////////////////////////////////////////////////////////////////
// IDimensionTolerance wrapper class

class IDimensionTolerance : public COleDispatchDriver
{
public:
	IDimensionTolerance() {}		// Calls COleDispatchDriver default constructor
	IDimensionTolerance(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IDimensionTolerance(const IDimensionTolerance& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetType();
	void SetType(long nNewValue);
	double GetMinValue();
	double GetMaxValue();
	BOOL SetValues(double MinValue, double MaxValue);
	BOOL GetFontUseDimension();
	BOOL GetFontUseScale();
	double GetFontScale();
	double GetFontHeight();
	BOOL SetFont(BOOL UseDimension, BOOL UseScale, double Value);
	BOOL GetShowParenthesis();
	void SetShowParenthesis(BOOL bNewValue);
	CString GetHoleFitValue();
	CString GetShaftFitValue();
	BOOL SetFitValues(LPCTSTR HoleFit, LPCTSTR ShaftFit);
	BOOL GetFitFontUseDimension();
	BOOL GetFitFontUseScale();
	double GetFitFontScale();
	double GetFitFontHeight();
	BOOL SetFitFont(BOOL UseDimension, BOOL UseScale, double Value);
	long GetFitDisplayStyle();
	void SetFitDisplayStyle(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// IBomTable wrapper class

class IBomTable : public COleDispatchDriver
{
public:
	IBomTable() {}		// Calls COleDispatchDriver default constructor
	IBomTable(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IBomTable(const IBomTable& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	VARIANT GetExtent();
	double IGetExtent();
	long GetRowCount();
	long GetColumnCount();
	CString GetHeaderText(long Col);
	CString GetEntryText(long Row, long Col);
	void Attach();
	void Detach();
	double GetColumnWidth(long Col);
	double GetRowHeight(long Row);
	VARIANT GetEntryValue(long Row, long Col);
	BOOL Attach2();
	LPDISPATCH GetDisplayData();
	LPDISPATCH IGetDisplayData();
	BOOL IsVisible();
	BOOL Attach3();
	long GetTotalRowCount();
	long GetTotalColumnCount();
	BOOL Select(BOOL Append, long Mark);
	BOOL DeSelect();
};
/////////////////////////////////////////////////////////////////////////////
// ICustomSymbol wrapper class

class ICustomSymbol : public COleDispatchDriver
{
public:
	ICustomSymbol() {}		// Calls COleDispatchDriver default constructor
	ICustomSymbol(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ICustomSymbol(const ICustomSymbol& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetNext();
	LPDISPATCH IGetNext();
	long GetTextCount();
	CString GetTextAtIndex(long Index);
	double GetTextHeightAtIndex(long Index);
	VARIANT GetTextPositionAtIndex(long Index);
	double IGetTextPositionAtIndex(long Index);
	double GetTextAngleAtIndex(long Index);
	long GetTextRefPositionAtIndex(long Index);
	long GetTextInvertAtIndex(long Index);
	long GetLineCount();
	VARIANT GetLineAtIndex(long Index);
	double IGetLineAtIndex(long Index);
	long GetArcCount();
	VARIANT GetArcAtIndex(long Index);
	double IGetArcAtIndex(long Index);
	long GetArrowHeadCount();
	VARIANT GetArrowHeadAtIndex(long Index);
	double IGetArrowHeadAtIndex(long Index);
	long GetTriangleCount();
	VARIANT GetTriangleAtIndex(long Index);
	double IGetTriangleAtIndex(long Index);
	LPDISPATCH GetSketch();
	LPDISPATCH IGetSketch();
	VARIANT GetSketchPosition();
	double IGetSketchPosition();
	BOOL IsAttached();
	BOOL HasExtraLeader();
	long GetLeaderCount();
	VARIANT GetLeaderAtIndex(long Index);
	double IGetLeaderAtIndex(long Index, long* PointCount);
	double IGetArrowHeadInfo();
	VARIANT GetArrowHeadInfo();
	LPDISPATCH GetAnnotation();
	LPDISPATCH IGetAnnotation();
	double GetAngle();
	void SetAngle(double newValue);
	double GetScale2();
	void SetScale2(double newValue);
	CString GetText(long Index);
	BOOL SetText(long Index, LPCTSTR Text);
	long GetTextJustificationAtIndex(long Index);
	void SetTextJustificationAtIndex(long Index, long Justification);
	double GetTextLineSpacingAtIndex(long Index);
	BOOL GetTextVisible();
	void SetTextVisible(BOOL bNewValue);
	long GetNoteCount();
	VARIANT GetNotes();
	LPDISPATCH IGetNotes(long Count);
};
/////////////////////////////////////////////////////////////////////////////
// IDrSection wrapper class

class IDrSection : public COleDispatchDriver
{
public:
	IDrSection() {}		// Calls COleDispatchDriver default constructor
	IDrSection(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IDrSection(const IDrSection& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetView();
	LPDISPATCH IGetView();
	LPDISPATCH GetSectionView();
	LPDISPATCH IGetSectionView();
	CString GetLabel();
	BOOL SetLabel(LPCTSTR Label);
	BOOL GetUseDocTextFormat();
	LPDISPATCH GetTextFormat();
	LPDISPATCH IGetTextFormat();
	BOOL SetTextFormat(BOOL UseDoc, LPDISPATCH TextFormat);
	BOOL ISetTextFormat(BOOL UseDoc, LPDISPATCH TextFormat);
	BOOL GetReversedCutDirection();
	void SetReversedCutDirection(BOOL Reversed);
	BOOL GetScaleWithModelChanges();
	void SetScaleWithModelChanges(BOOL ScaleWithChanges);
	BOOL GetPartialSection();
	void SetPartialSection(BOOL Partial);
	BOOL GetDisplayOnlySurfaceCut();
	void SetDisplayOnlySurfaceCut(BOOL Display);
	BOOL IsAligned();
	CString GetName();
	VARIANT GetTextInfo();
	double IGetTextInfo();
	VARIANT GetArrowInfo();
	double IGetArrowInfo();
	VARIANT GetExcludedComponents();
	LPUNKNOWN EnumExcludedComponents();
	BOOL GetAutoHatch();
	void SetAutoHatch(BOOL AutoHatch);
	long IGetLineSegmentCount();
	VARIANT GetLineInfo();
	double IGetLineInfo();
	LPUNKNOWN EnumExcludedComponents2();
	CString GetLayer();
	void SetLayer(LPCTSTR lpszNewValue);
	long SetLabel2(LPCTSTR Label);
	BOOL SetExcludedComponents(const VARIANT& VComponents);
	BOOL ISetExcludedComponents(long Number, LPDISPATCH* LpComps);
	BOOL GetDontCutAllInstances(LPDISPATCH LpComp);
	BOOL SetDontCutAllInstances(LPDISPATCH LpComp, BOOL VbCut);
	BOOL SetLineInfo(const VARIANT& VLineInfo);
	BOOL ISetLineInfo(long Count, double* PLineInfo);
	BOOL GetExcludeFasteners();
	void SetExcludeFasteners(BOOL bNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// IDetailCircle wrapper class

class IDetailCircle : public COleDispatchDriver
{
public:
	IDetailCircle() {}		// Calls COleDispatchDriver default constructor
	IDetailCircle(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IDetailCircle(const IDetailCircle& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetView();
	LPDISPATCH GetDetailView();
	CString GetLabel();
	LPDISPATCH GetTextFormat();
	CString GetName();
	VARIANT GetArrowInfo();
	double IGetArrowInfo();
	long GetStyle();
	long GetDisplay();
	VARIANT GetConnectingLine();
	double IGetConnectingLine();
	BOOL HasFullOutline();
	VARIANT GetLeaderInfo();
	double IGetLeaderInfo();
	BOOL GetUseDocTextFormat();
	BOOL SetTextFormat(BOOL UseDoc, LPDISPATCH TextFormat);
	CString GetLayer();
	void SetLayer(LPCTSTR lpszNewValue);
	BOOL SetLabel(LPCTSTR Label);
	BOOL SetName(LPCTSTR Name);
	BOOL SetStyle(long Style);
	BOOL SetDisplay(long Display);
	BOOL SetFullOutline(BOOL FullOutline);
	void SetPinPosition(BOOL bNewValue);
	BOOL GetPinPosition();
	void SetScaleHatchPattern(BOOL bNewValue);
	BOOL GetScaleHatchPattern();
	BOOL Select(BOOL Append, LPDISPATCH Data);
	BOOL SetParameters(double XPosition, double YPosition, double Radius);
};
/////////////////////////////////////////////////////////////////////////////
// IProjectionArrow wrapper class

class IProjectionArrow : public COleDispatchDriver
{
public:
	IProjectionArrow() {}		// Calls COleDispatchDriver default constructor
	IProjectionArrow(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IProjectionArrow(const IProjectionArrow& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetView();
	LPDISPATCH IGetView();
	LPDISPATCH GetProjectedView();
	LPDISPATCH IGetProjectedView();
	CString GetLabel();
	BOOL SetLabel(LPCTSTR Label);
	BOOL GetUseDocTextFormat();
	LPDISPATCH GetTextFormat();
	LPDISPATCH IGetTextFormat();
	VARIANT GetCoordinates();
	double IGetCoordinates();
};
/////////////////////////////////////////////////////////////////////////////
// IMultiJogLeader wrapper class

class IMultiJogLeader : public COleDispatchDriver
{
public:
	IMultiJogLeader() {}		// Calls COleDispatchDriver default constructor
	IMultiJogLeader(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IMultiJogLeader(const IMultiJogLeader& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetNext();
	LPDISPATCH IGetNext();
	long GetLineCount();
	VARIANT GetLineAtIndex(long Index);
	double IGetLineAtIndex(long Index);
	long GetArrowHeadCount();
	VARIANT GetArrowHeadAtIndex(long Index);
	double IGetArrowHeadAtIndex(long Index);
	LPDISPATCH GetAnnotation();
	LPDISPATCH IGetAnnotation();
	LPDISPATCH GetDisplayData();
	LPDISPATCH IGetDisplayData();
};
/////////////////////////////////////////////////////////////////////////////
// IDowelSymbol wrapper class

class IDowelSymbol : public COleDispatchDriver
{
public:
	IDowelSymbol() {}		// Calls COleDispatchDriver default constructor
	IDowelSymbol(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IDowelSymbol(const IDowelSymbol& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetNext();
	LPDISPATCH IGetNext();
	LPDISPATCH GetAnnotation();
	LPDISPATCH IGetAnnotation();
	BOOL GetFlipped();
	void SetFlipped(BOOL bNewValue);
	VARIANT GetArcPoints();
	double IGetArcPoints();
};
/////////////////////////////////////////////////////////////////////////////
// IBlockInstance wrapper class

class IBlockInstance : public COleDispatchDriver
{
public:
	IBlockInstance() {}		// Calls COleDispatchDriver default constructor
	IBlockInstance(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IBlockInstance(const IBlockInstance& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetNext();
	LPDISPATCH GetAnnotation();
	LPDISPATCH GetDefinition();
	double GetAngle();
	void SetAngle(double newValue);
	double GetScale2();
	void SetScale2(double newValue);
	long GetAttributeCount();
	VARIANT GetAttributes();
	LPDISPATCH IGetAttributes(long NumAttribs);
	CString GetAttributeValue(LPCTSTR TagName);
	BOOL SetAttributeValue(LPCTSTR TagName, LPCTSTR Value);
	long GetTextDisplay();
	void SetTextDisplay(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// IBlockDefinition wrapper class

class IBlockDefinition : public COleDispatchDriver
{
public:
	IBlockDefinition() {}		// Calls COleDispatchDriver default constructor
	IBlockDefinition(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IBlockDefinition(const IBlockDefinition& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	long GetBlockInstanceCount();
	VARIANT GetBlockInstances();
	LPDISPATCH IGetBlockInstances(long Count);
	BOOL GetUseExternalFile();
	long SetUseExternalFile(BOOL UseFile);
	CString GetExternalFileName();
	long SetExternalFileName(LPCTSTR FileName);
	LPDISPATCH InsertInstance(double X, double Y, double Angle, double Scale);
	VARIANT GetBasePoint();
	double IGetBasePoint();
	BOOL SetBasePoint(const VARIANT& BasePoint);
	BOOL ISetBasePoint(double* BasePoint);
	LPDISPATCH GetSketch();
	long GetNoteCount();
	VARIANT GetNotes();
	LPDISPATCH IGetNotes(long NumNotes);
	long GetDimensionCount();
	VARIANT GetDimensions();
	LPDISPATCH IGetDimensions(long NumDimensions);
};
/////////////////////////////////////////////////////////////////////////////
// IBreakLine wrapper class

class IBreakLine : public COleDispatchDriver
{
public:
	IBreakLine() {}		// Calls COleDispatchDriver default constructor
	IBreakLine(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IBreakLine(const IBreakLine& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetView();
	long GetStyle();
	void SetStyle(long nNewValue);
	CString GetLayer();
	void SetLayer(LPCTSTR lpszNewValue);
	long GetOrientation();
	double GetPosition(long Index);
	BOOL SetPosition(double Position1, double Position2);
	BOOL Select(BOOL Append, LPDISPATCH Data);
};
/////////////////////////////////////////////////////////////////////////////
// IFaceHatch wrapper class

class IFaceHatch : public COleDispatchDriver
{
public:
	IFaceHatch() {}		// Calls COleDispatchDriver default constructor
	IFaceHatch(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IFaceHatch(const IFaceHatch& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CString GetPattern();
	void SetPattern(LPCTSTR lpszNewValue);
	double GetScale();
	void SetScale(double newValue);
	double GetAngle();
	void SetAngle(double newValue);
	LPDISPATCH GetFace();
	void SetFace(LPDISPATCH newValue);
	CString GetLayer();
	void SetLayer(LPCTSTR lpszNewValue);
	long GetColor();
	void SetColor(long nNewValue);
	CString GetDefinition();
	void SetDefinition(LPCTSTR lpszNewValue);
	BOOL GetSolidFill();
	void SetSolidFill(BOOL bNewValue);
	double GetScale2();
	void SetScale2(double newValue);
	long GetPatternId();
	void SetPatternId(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// ICenterMark wrapper class

class ICenterMark : public COleDispatchDriver
{
public:
	ICenterMark() {}		// Calls COleDispatchDriver default constructor
	ICenterMark(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ICenterMark(const ICenterMark& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	double GetRotationAngle();
	void SetRotationAngle(double newValue);
	BOOL GetUseDocDisplaySettings();
	void SetUseDocDisplaySettings(BOOL bNewValue);
	BOOL GetShowLines();
	void SetShowLines(BOOL bNewValue);
	double GetSize();
	void SetSize(double newValue);
	LPDISPATCH GetNext();
	LPDISPATCH GetAnnotation();
	long GetStyle();
	long GetConnectionLines();
	void SetConnectionLines(long nNewValue);
	BOOL GetCenterLineFont();
	void SetCenterLineFont(BOOL bNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// ICenterLine wrapper class

class ICenterLine : public COleDispatchDriver
{
public:
	ICenterLine() {}		// Calls COleDispatchDriver default constructor
	ICenterLine(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ICenterLine(const ICenterLine& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetNext();
	LPDISPATCH GetAnnotation();
};
/////////////////////////////////////////////////////////////////////////////
// ITableAnnotation wrapper class

class ITableAnnotation : public COleDispatchDriver
{
public:
	ITableAnnotation() {}		// Calls COleDispatchDriver default constructor
	ITableAnnotation(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ITableAnnotation(const ITableAnnotation& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetNext();
	LPDISPATCH GetAnnotation();
	long GetType();
	long GetBorderLineWeight();
	void SetBorderLineWeight(long nNewValue);
	long GetGridLineWeight();
	void SetGridLineWeight(long nNewValue);
	long GetAnchorType();
	void SetAnchorType(long nNewValue);
	BOOL GetUseDocTextFormat();
	LPDISPATCH GetTextFormat();
	BOOL SetTextFormat(BOOL UseDoc, LPDISPATCH TextFormat);
	long GetTextVerticalJustification();
	void SetTextVerticalJustification(long nNewValue);
	long GetTextHorizontalJustification();
	void SetTextHorizontalJustification(long nNewValue);
	long GetColumnCount();
	long GetRowCount();
	long GetHeaderStyle();
	long GetHeaderCount();
	BOOL SetHeader(long Style, long Count);
	long GetSplitInformation(long* Index, long* Count, long* RangeStart, long* RangeEnd);
	LPDISPATCH Split(long Where, long Index);
	BOOL Merge(long Where);
	BOOL InsertColumn(long Where, long Index, LPCTSTR Name);
	BOOL InsertRow(long Where, long Index);
	BOOL MoveColumn(long Source, long Where, long Destination);
	BOOL MoveRow(long Source, long Where, long Destination);
	BOOL DeleteColumn(long Index);
	BOOL DeleteRow(long Index);
	void GetCellRange(long* FirstRow, long* LastRow, long* FirstColumn, long* LastColumn);
	void SetCellRange(long FirstRow, long LastRow, long FirstColumn, long LastColumn);
	double GetColumnWidth(long Index);
	double SetColumnWidth(long Index, double Width, long Options);
	double GetRowHeight(long Index);
	double SetRowHeight(long Index, double Height, long Options);
	long GetColumnType(long Index);
	BOOL SetColumnType(long Index, long Type);
	CString GetColumnTitle(long Index);
	BOOL SetColumnTitle(long Index, LPCTSTR Title);
	CString GetText(long Row, long Column);
	void SetText(long Row, long Column, LPCTSTR lpszNewValue);
	BOOL GetCellUseDocTextFormat(long Row, long Column);
	LPDISPATCH GetCellTextFormat(long Row, long Column);
	BOOL SetCellTextFormat(long Row, long Column, BOOL UseDoc, LPDISPATCH TextFormat);
	long GetCellTextHorizontalJustification(long Row, long Column);
	void SetCellTextHorizontalJustification(long Row, long Column, long nNewValue);
	long GetCellTextVerticalJustification(long Row, long Column);
	void SetCellTextVerticalJustification(long Row, long Column, long nNewValue);
	BOOL MergeCells(long RowStart, long ColumnStart, long RowEnd, long ColumnEnd);
	BOOL UnmergeCells(long Row, long Column);
	BOOL IsCellMerged(long Row, long Column, long* WithRow, long* WithColumn);
	BOOL IsCellTextEditable(long Row, long Column);
	CString GetTitle();
	void SetTitle(LPCTSTR lpszNewValue);
	BOOL GetTitleVisible();
	void SetTitleVisible(BOOL bNewValue);
	BOOL SaveAsTemplate(LPCTSTR FileName);
	BOOL SaveAsText(LPCTSTR FileName, LPCTSTR Separator);
	BOOL GetAnchored();
	void SetAnchored(BOOL bNewValue);
	LPDISPATCH GetGeneralTableFeature();
};
/////////////////////////////////////////////////////////////////////////////
// IGeneralTableFeature wrapper class

class IGeneralTableFeature : public COleDispatchDriver
{
public:
	IGeneralTableFeature() {}		// Calls COleDispatchDriver default constructor
	IGeneralTableFeature(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IGeneralTableFeature(const IGeneralTableFeature& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetFeature();
	long GetTableAnnotationCount();
	VARIANT GetTableAnnotations();
	LPDISPATCH IGetTableAnnotations(long Count);
};
/////////////////////////////////////////////////////////////////////////////
// IDrawingComponent wrapper class

class IDrawingComponent : public COleDispatchDriver
{
public:
	IDrawingComponent() {}		// Calls COleDispatchDriver default constructor
	IDrawingComponent(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IDrawingComponent(const IDrawingComponent& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetView();
	BOOL IsRoot();
	LPDISPATCH GetComponent();
	long GetChildrenCount();
	VARIANT GetChildren();
	LPDISPATCH IGetChildren(long Count);
	void SetLayer(LPCTSTR lpszNewValue);
	CString GetLayer();
	void SetLayerOverride(long nNewValue);
	long GetLayerOverride();
	void SetVisible(BOOL bNewValue);
	BOOL GetVisible();
	void SetStyle(long nNewValue);
	long GetStyle();
	void SetWidth(long nNewValue);
	long GetWidth();
	BOOL Select(BOOL Append, LPDISPATCH Data);
	BOOL DeSelect();
	CString GetName();
};
/////////////////////////////////////////////////////////////////////////////
// IHoleTableAnnotation wrapper class

class IHoleTableAnnotation : public COleDispatchDriver
{
public:
	IHoleTableAnnotation() {}		// Calls COleDispatchDriver default constructor
	IHoleTableAnnotation(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IHoleTableAnnotation(const IHoleTableAnnotation& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetHoleTable();
};
/////////////////////////////////////////////////////////////////////////////
// IHoleTable wrapper class

class IHoleTable : public COleDispatchDriver
{
public:
	IHoleTable() {}		// Calls COleDispatchDriver default constructor
	IHoleTable(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IHoleTable(const IHoleTable& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetFeature();
	long GetTableAnnotationCount();
	VARIANT GetTableAnnotations();
	LPDISPATCH IGetTableAnnotations(long Count);
	LPDISPATCH GetDatumOrigin();
	long AddHole();
	BOOL GetHoleCentersVisible();
	void SetHoleCentersVisible(BOOL bNewValue);
	BOOL GetCombineTags();
	void SetCombineTags(BOOL bNewValue);
	BOOL GetCombineSameSize();
	void SetCombineSameSize(BOOL bNewValue);
	long GetTagStyle();
	void SetTagStyle(long nNewValue);
	BOOL GetHoleLocationUseDocPrecision();
	long GetHoleLocationPrecision();
	BOOL SetHoleLocationPrecision(BOOL UseDoc, long Precision);
	BOOL GetHoleTagsVisible();
	void SetHoleTagsVisible(BOOL bNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// IDatumOrigin wrapper class

class IDatumOrigin : public COleDispatchDriver
{
public:
	IDatumOrigin() {}		// Calls COleDispatchDriver default constructor
	IDatumOrigin(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IDatumOrigin(const IDatumOrigin& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetNext();
	LPDISPATCH GetAnnotation();
	CString GetXLabel();
	void SetXLabel(LPCTSTR lpszNewValue);
	CString GetYLabel();
	void SetYLabel(LPCTSTR lpszNewValue);
	LPDISPATCH GetTable();
	BOOL Reattach();
	VARIANT GetAxisPoints();
	double IGetAxisPoints();
	BOOL SetAxisPoints(const VARIANT& PointData);
	BOOL ISetAxisPoints(double* PointData);
	VARIANT GetAxisPoints2();
	double IGetAxisPoints2();
};
/////////////////////////////////////////////////////////////////////////////
// IBomTableAnnotation wrapper class

class IBomTableAnnotation : public COleDispatchDriver
{
public:
	IBomTableAnnotation() {}		// Calls COleDispatchDriver default constructor
	IBomTableAnnotation(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IBomTableAnnotation(const IBomTableAnnotation& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetBomFeature();
	BOOL GetColumnUseTitleAsPartNumber(long Index);
	BOOL SetColumnUseTitleAsPartNumber(long Index, BOOL UseTitle);
	CString GetColumnCustomProperty(long Index);
	BOOL SetColumnCustomProperty(long Index, LPCTSTR CustomProp);
	long GetAllCustomPropertiesCount();
	VARIANT GetAllCustomProperties();
	CString IGetAllCustomProperties(long Count);
};
/////////////////////////////////////////////////////////////////////////////
// IBomFeature wrapper class

class IBomFeature : public COleDispatchDriver
{
public:
	IBomFeature() {}		// Calls COleDispatchDriver default constructor
	IBomFeature(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IBomFeature(const IBomFeature& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetFeature();
	long GetTableAnnotationCount();
	VARIANT GetTableAnnotations();
	LPDISPATCH IGetTableAnnotations(long Count);
	long GetTableType();
	void SetTableType(long nNewValue);
	CString GetConfiguration();
	void SetConfiguration(LPCTSTR lpszNewValue);
	BOOL GetKeepMissingItems();
	void SetKeepMissingItems(BOOL bNewValue);
	BOOL GetStrikeoutMissingItems();
	void SetStrikeoutMissingItems(BOOL bNewValue);
	long GetZeroQuantityDisplay();
	void SetZeroQuantityDisplay(long nNewValue);
	long GetSequenceStartNumber();
	void SetSequenceStartNumber(long nNewValue);
	long GetConfigurationCount(BOOL OnlyVisible);
	VARIANT GetConfigurations(BOOL OnlyVisible, VARIANT* Visible);
	CString IGetConfigurations(BOOL OnlyVisible, long Count, BOOL* Visible);
	BOOL SetConfigurations(BOOL OnlyVisible, const VARIANT& Visible, const VARIANT& Names);
	BOOL ISetConfigurations(BOOL OnlyVisible, long Count, BOOL* Visible, BSTR* Names);
	BOOL GetDisplayAsOneItem();
	void SetDisplayAsOneItem(BOOL bNewValue);
	BOOL GetKeepCurrentItemNumbers();
	void SetKeepCurrentItemNumbers(BOOL bNewValue);
	BOOL FollowAssemblyOrder();
	BOOL GetFollowAssemblyOrder2();
	void SetFollowAssemblyOrder2(BOOL bNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// IWeldBead wrapper class

class IWeldBead : public COleDispatchDriver
{
public:
	IWeldBead() {}		// Calls COleDispatchDriver default constructor
	IWeldBead(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IWeldBead(const IWeldBead& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetNext();
	LPDISPATCH GetAnnotation();
};
/////////////////////////////////////////////////////////////////////////////
// ISheet wrapper class

class ISheet : public COleDispatchDriver
{
public:
	ISheet() {}		// Calls COleDispatchDriver default constructor
	ISheet(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISheet(const ISheet& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetBomTable();
	LPDISPATCH IGetBomTable();
	CString GetName();
	void SetName(LPCTSTR NameIn);
	CString GetTemplateName();
	void SetTemplateName(LPCTSTR NameIn);
	VARIANT GetProperties();
	double IGetProperties();
	void SetProperties(long PaperSz, long Templ, double Scale1, double Scale2, BOOL FirstAngle, double Width, double Height);
	long GetCustomColorsCount();
	long IGetCustomColors();
	long GetOLEObjectCount();
	VARIANT GetOLEObjectSettings(long Index, long* ByteCount, long* Aspect);
	BOOL IGetOLEObjectSettings(long Index, long* ByteCount, long* Aspect, double* Position);
	VARIANT GetOLEObjectData(long Index);
	// method 'IGetOLEObjectData' not emitted because of invalid return type or parameter type
	BOOL CreateOLEObject(long Aspect, const VARIANT& Position, const VARIANT& Buffer);
	// method 'ICreateOLEObject' not emitted because of invalid return type or parameter type
	LPDISPATCH GetPageSetup();
	LPDISPATCH GetIPageSetup();
	BOOL SetScale(double Numerator, double Denominator, BOOL ScaleAnnoPosition, BOOL ScaleAnnoTextHeight);
	CString GetCustomPropertyView();
	void SetCustomPropertyView(LPCTSTR lpszNewValue);
	LPDISPATCH InsertRevisionTable(BOOL UseAnchorPoint, double X, double Y, long AnchorType, LPCTSTR TableTemplate);
	LPDISPATCH GetRevisionTable();
	LPDISPATCH GetTemplateSketch();
	BOOL GetSheetFormatVisible();
	void SetSheetFormatVisible(BOOL bNewValue);
	BOOL GetFocusLocked();
	void SetFocusLocked(BOOL bNewValue);
	CString GetSheetFormatName();
	BOOL SetSheetFormatName(LPCTSTR Name);
};
/////////////////////////////////////////////////////////////////////////////
// IPageSetup wrapper class

class IPageSetup : public COleDispatchDriver
{
public:
	IPageSetup() {}		// Calls COleDispatchDriver default constructor
	IPageSetup(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IPageSetup(const IPageSetup& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL GetScaleToFit();
	void SetScaleToFit(BOOL bNewValue);
	double GetScale2();
	void SetScale2(double newValue);
	long GetOrientation();
	void SetOrientation(long nNewValue);
	CString GetLeftHeader();
	void SetLeftHeader(LPCTSTR lpszNewValue);
	CString GetCenterHeader();
	void SetCenterHeader(LPCTSTR lpszNewValue);
	CString GetRightHeader();
	void SetRightHeader(LPCTSTR lpszNewValue);
	BOOL SetHeader(LPCTSTR Left, LPCTSTR Center, LPCTSTR Right);
	CString GetLeftFooter();
	void SetLeftFooter(LPCTSTR lpszNewValue);
	CString GetCenterFooter();
	void SetCenterFooter(LPCTSTR lpszNewValue);
	CString GetRightFooter();
	void SetRightFooter(LPCTSTR lpszNewValue);
	BOOL SetFooter(LPCTSTR Left, LPCTSTR Center, LPCTSTR Right);
	LPDISPATCH GetHeaderTextFormat();
	LPDISPATCH GetFooterTextFormat();
	CString GetHeaderFooterString(long WhichOne);
	BOOL GetUsePageSetupOnSheets();
	void SetUsePageSetupOnSheets(BOOL bNewValue);
	long GetPrinterPaperSize();
	void SetPrinterPaperSize(long nNewValue);
	long GetPrinterPaperLength();
	void SetPrinterPaperLength(long nNewValue);
	long GetPrinterPaperWidth();
	void SetPrinterPaperWidth(long nNewValue);
	long GetPrinterPaperSource();
	void SetPrinterPaperSource(long nNewValue);
	BOOL GetUseDefaultResolution();
	long GetResolution();
	BOOL SetResolution(BOOL UseDefault, long DPI);
};
/////////////////////////////////////////////////////////////////////////////
// IRevisionTableAnnotation wrapper class

class IRevisionTableAnnotation : public COleDispatchDriver
{
public:
	IRevisionTableAnnotation() {}		// Calls COleDispatchDriver default constructor
	IRevisionTableAnnotation(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IRevisionTableAnnotation(const IRevisionTableAnnotation& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetRevisionTableFeature();
	LPDISPATCH GetSheet();
	long AddRevision(LPCTSTR Revision);
	BOOL DeleteRevision(long RevisionId, BOOL DeleteSymbols);
	CString GetCurrentRevision();
	CString GetRevisionForId(long RevisionId);
	long GetRowNumberForId(long RevisionId);
	long GetIdForRowNumber(long RowIndex);
	long GetRevisionSymbolCount(long RevisionId);
	VARIANT GetRevisionSymbols(long RevisionId);
	LPDISPATCH IGetRevisionSymbols(long RevisionId, long Count);
	CString GetColumnCustomProperty(long Index);
	BOOL SetColumnCustomProperty(long Index, LPCTSTR CustomProp);
	long GetAllCustomPropertiesCount();
	VARIANT GetAllCustomProperties();
	CString IGetAllCustomProperties(long Count);
};
/////////////////////////////////////////////////////////////////////////////
// IRevisionTableFeature wrapper class

class IRevisionTableFeature : public COleDispatchDriver
{
public:
	IRevisionTableFeature() {}		// Calls COleDispatchDriver default constructor
	IRevisionTableFeature(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IRevisionTableFeature(const IRevisionTableFeature& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetFeature();
	long GetTableAnnotationCount();
	VARIANT GetTableAnnotations();
	LPDISPATCH IGetTableAnnotations(long Count);
};
/////////////////////////////////////////////////////////////////////////////
// ISketchSegment wrapper class

class ISketchSegment : public COleDispatchDriver
{
public:
	ISketchSegment() {}		// Calls COleDispatchDriver default constructor
	ISketchSegment(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISketchSegment(const ISketchSegment& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CString GetLayer();
	void SetLayer(LPCTSTR lpszNewValue);
	long GetLayerOverride();
	void SetLayerOverride(long nNewValue);
	long GetColor();
	void SetColor(long nNewValue);
	long GetStyle();
	void SetStyle(long nNewValue);
	long GetWidth();
	void SetWidth(long nNewValue);
	long GetType();
	VARIANT GetId();
	long IGetID();
	BOOL Select(BOOL AppendFlag);
	BOOL SelectByMark(BOOL AppendFlag, long Mark);
	BOOL DeSelect();
	BOOL GetConstructionGeometry();
	void SetConstructionGeometry(BOOL bNewValue);
	LPDISPATCH GetCurve();
	LPDISPATCH IGetCurve();
	LPDISPATCH GetSketch();
	VARIANT GetConstraints();
	long IGetConstraintsCount();
	CString IGetConstraints();
	double GetLength();
	BOOL Select2(BOOL Append, long Mark);
	BOOL Select3(BOOL Append, long Mark, LPDISPATCH Callout);
	VARIANT GetRelations();
	long GetRelationsCount();
	LPDISPATCH IGetRelations(long Count);
	long GetStatus();
	void SetStatus(long nNewValue);
	BOOL Select4(BOOL Append, LPDISPATCH Data);
	LPDISPATCH CreateWireBody();
};
/////////////////////////////////////////////////////////////////////////////
// ISketchHatch wrapper class

class ISketchHatch : public COleDispatchDriver
{
public:
	ISketchHatch() {}		// Calls COleDispatchDriver default constructor
	ISketchHatch(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISketchHatch(const ISketchHatch& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	VARIANT GetId();
	long IGetID();
	BOOL Select(BOOL AppendFlag);
	BOOL SelectByMark(BOOL AppendFlag, long Mark);
	BOOL DeSelect();
	CString GetLayer();
	void SetLayer(LPCTSTR lpszNewValue);
	long GetLayerOverride();
	void SetLayerOverride(long nNewValue);
	long GetColor();
	void SetColor(long nNewValue);
	CString GetPattern();
	void SetPattern(LPCTSTR lpszNewValue);
	double GetScale();
	void SetScale(double newValue);
	double GetAngle();
	void SetAngle(double newValue);
	LPDISPATCH GetFace();
	LPDISPATCH IGetFace();
	LPDISPATCH GetSketch();
	double GetScale2();
	void SetScale2(double newValue);
	LPDISPATCH IGetFace2();
	BOOL Select2(BOOL Append, long Mark);
	BOOL Select3(BOOL Append, long Mark, LPDISPATCH Callout);
	BOOL GetSolidFill();
	void SetSolidFill(BOOL bNewValue);
	BOOL Select4(BOOL Append, LPDISPATCH Data);
	long GetPatternId();
	void SetPatternId(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// ISketchRelationManager wrapper class

class ISketchRelationManager : public COleDispatchDriver
{
public:
	ISketchRelationManager() {}		// Calls COleDispatchDriver default constructor
	ISketchRelationManager(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISketchRelationManager(const ISketchRelationManager& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	VARIANT GetRelations(long Filter);
	long GetRelationsCount(long Filter);
	LPDISPATCH IGetRelations(long Filter, long Count);
	LPDISPATCH AddRelation(const VARIANT& Entities, long RelationType);
	LPDISPATCH IAddRelation(long NumEntities, LPDISPATCH* EntityArray, long RelationType);
	BOOL DeleteAllRelations();
	BOOL DeleteRelation(LPDISPATCH ThisRelation);
	VARIANT GetAllowedRelations(const VARIANT& Entities);
	long IGetAllowedRelationsCount(long NumEntities, LPDISPATCH* EntityArray);
	long IGetAllowedRelations(long NumEntities, LPDISPATCH* EntityArray, long NumAllowedRelations);
};
/////////////////////////////////////////////////////////////////////////////
// IMidSurface2 wrapper class

class IMidSurface2 : public COleDispatchDriver
{
public:
	IMidSurface2() {}		// Calls COleDispatchDriver default constructor
	IMidSurface2(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IMidSurface2(const IMidSurface2& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetFacePairCount();
	LPDISPATCH GetFirstFacePair(double* Thickness, LPDISPATCH* PartnerFaceDisp);
	LPDISPATCH IGetFirstFacePair(double* Thickness, LPDISPATCH* PartnerFaceDisp);
	LPDISPATCH GetNextFacePair(double* Thickness, LPDISPATCH* PartnerFaceDisp);
	LPDISPATCH IGetNextFacePair(double* Thickness, LPDISPATCH* PartnerFaceDisp);
	LPDISPATCH GetFirstNeutralSheet();
	LPDISPATCH IGetFirstNeutralSheet();
	LPDISPATCH GetNextNeutralSheet();
	LPDISPATCH IGetNextNeutralSheet();
	long GetNeutralSheetCount();
	long GetFaceCount();
	LPDISPATCH GetFirstFace(LPDISPATCH* FromFace1Disp, LPDISPATCH* FromFace2Disp, double* Thickness);
	LPDISPATCH IGetFirstFace(LPDISPATCH* FromFace1Disp, LPDISPATCH* FromFace2Disp, double* Thickness);
	LPDISPATCH GetNextFace(LPDISPATCH* FromFace1Disp, LPDISPATCH* FromFace2Disp, double* Thickness);
	LPDISPATCH IGetNextFace(LPDISPATCH* FromFace1Disp, LPDISPATCH* FromFace2Disp, double* Thickness);
	LPDISPATCH EdgeGetFace(LPDISPATCH EdgeInDisp);
	LPDISPATCH IEdgeGetFace(LPDISPATCH EdgeInDisp);
	LPDISPATCH IGetFirstFaceArray(LPDISPATCH* FromFrontFaceListDisp, long* SizeOfFrontFaceList, LPDISPATCH* FromFaceBackListDisp, long* SizeOfBackFaceList, double* Thickness);
	LPDISPATCH IGetNextFaceArray(LPDISPATCH* FromFrontFaceListDisp, long* SizeOfFrontFaceList, LPDISPATCH* FromFaceBackListDisp, long* SizeOfBackFaceList, double* Thickness);
	VARIANT GetFirstFaceArray(double* Thickness);
	VARIANT GetNextFaceArray(double* Thickness);
};
/////////////////////////////////////////////////////////////////////////////
// IFeatMgrView wrapper class

class IFeatMgrView : public COleDispatchDriver
{
public:
	IFeatMgrView() {}		// Calls COleDispatchDriver default constructor
	IFeatMgrView(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IFeatMgrView(const IFeatMgrView& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetFeatMgrViewWnd();
	LPDISPATCH GetControl();
	LPUNKNOWN IGetControl();
	long ActivateView();
	BOOL DeActivateView();
	BOOL DeleteView();
};
/////////////////////////////////////////////////////////////////////////////
// IConfiguration wrapper class

class IConfiguration : public COleDispatchDriver
{
public:
	IConfiguration() {}		// Calls COleDispatchDriver default constructor
	IConfiguration(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IConfiguration(const IConfiguration& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetRootComponent();
	LPDISPATCH IGetRootComponent();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	CString GetComment();
	void SetComment(LPCTSTR lpszNewValue);
	CString GetAlternateName();
	void SetAlternateName(LPCTSTR lpszNewValue);
	BOOL GetUseAlternateNameInBOM();
	void SetUseAlternateNameInBOM(BOOL bNewValue);
	BOOL GetSuppressNewFeatures();
	void SetSuppressNewFeatures(BOOL bNewValue);
	BOOL GetHideNewComponentModels();
	void SetHideNewComponentModels(BOOL bNewValue);
	BOOL GetSuppressNewComponentModels();
	void SetSuppressNewComponentModels(BOOL bNewValue);
	BOOL GetShowChildComponentsInBOM();
	void SetShowChildComponentsInBOM(BOOL bNewValue);
	long GetNumberOfExplodeSteps();
	LPDISPATCH GetExplodeStep(long ExplodeStepIndex);
	LPDISPATCH IGetExplodeStep(long ExplodeStepIndex);
	LPDISPATCH AddExplodeStep(double ExplDist, BOOL ReverseDir, BOOL RigidSubassembly, BOOL ExplodeRelated);
	LPDISPATCH IAddExplodeStep(double ExplDist, BOOL ReverseDir, BOOL RigidSubassembly, BOOL ExplodeRelated);
	BOOL DeleteExplodeStep(LPCTSTR ExplodeStepName);
	CString GetStreamName();
	LPDISPATCH IGetRootComponent2();
	BOOL GetComponentSuppressionState(LPCTSTR CompName);
	CString GetComponentConfigName(LPCTSTR CompName);
	BOOL GetLock();
	void SetLock(BOOL bNewValue);
	long GetCustomProperties(VARIANT* PropNames, VARIANT* PropValues, VARIANT* PropTypes);
	long GetCustomPropertiesCount();
	void IGetCustomProperties(long NumProps, BSTR* PropNames, BSTR* PropValues, long* PropTypes);
	BOOL SetColor(long ColorIn);
	CString GetDescription();
	void SetDescription(LPCTSTR lpszNewValue);
	BOOL IsDerived();
	LPDISPATCH GetParent();
	VARIANT GetChildren();
	long GetChildrenCount();
	LPDISPATCH IGetChildren(long NumChildren);
	BOOL Select(BOOL AppendFlag);
	long GetBOMPartNoSource();
	void SetBOMPartNoSource(long nNewValue);
	long GetParameterCount();
	void GetParameters(VARIANT* Params, VARIANT* Values);
	void IGetParameters(long NParamCount, BSTR* Params, BSTR* Values);
	void SetParameters(VARIANT* Params, VARIANT* Values);
	void ISetParameters(long NParamCount, BSTR* Params, BSTR* Values);
	BOOL Select2(BOOL AppendFlag, LPDISPATCH SelectData);
	BOOL GetDisplayStates(VARIANT* DisplayStateVar);
	long GetDisplayStatesCount();
	BOOL IGetDisplayStates(long Count, BSTR* DisplayStateArr);
	BOOL CreateDisplayState(LPCTSTR DisplayStateName);
	BOOL ApplyDisplayState(LPCTSTR DisplayStateName);
	BOOL DeleteDisplayState(LPCTSTR DisplayStateName);
	BOOL RenameDisplayState(LPCTSTR OldDisplayStateName, LPCTSTR NewDisplayStateName);
	BOOL CopyDisplayStateFromConfiguration(LPDISPATCH CopyFromConfig, LPCTSTR DisplayStateNameToCopy);
};
/////////////////////////////////////////////////////////////////////////////
// IExplodeStep wrapper class

class IExplodeStep : public COleDispatchDriver
{
public:
	IExplodeStep() {}		// Calls COleDispatchDriver default constructor
	IExplodeStep(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IExplodeStep(const IExplodeStep& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetNumOfComponents();
	CString GetComponentName(long Index);
	VARIANT GetComponentXform();
	double IGetComponentXform();
	LPDISPATCH GetComponent(long Index);
	LPDISPATCH IGetComponent(long Index);
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	BOOL IsSubAssemblyRigid();
};
/////////////////////////////////////////////////////////////////////////////
// IReferenceCurve wrapper class

class IReferenceCurve : public COleDispatchDriver
{
public:
	IReferenceCurve() {}		// Calls COleDispatchDriver default constructor
	IReferenceCurve(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IReferenceCurve(const IReferenceCurve& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetSegmentCount();
	LPDISPATCH GetFirstSegment();
	LPDISPATCH IGetFirstSegment();
	LPDISPATCH GetNextSegment();
	LPDISPATCH IGetNextSegment();
	BOOL SetColor(long ColorIn);
	BOOL SetVisible(BOOL Visible);
};
/////////////////////////////////////////////////////////////////////////////
// IColorTable wrapper class

class IColorTable : public COleDispatchDriver
{
public:
	IColorTable() {}		// Calls COleDispatchDriver default constructor
	IColorTable(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IColorTable(const IColorTable& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetCount();
	CString GetNameAtIndex(long Index);
	long GetColorRefAtIndex(long Index);
	long GetStandardCount();
	void SetColorRefAtIndex(long Index, long ColorRef, long ApplyTo);
	long GetBasicColorCount();
	VARIANT GetBasicColors();
	long IGetBasicColors(long ColorCount);
	long GetCustomColorCount();
	VARIANT GetCustomColors();
	long IGetCustomColors(long ColorCount);
	BOOL SetCustomColor(long Index, long ColorRef);
};
/////////////////////////////////////////////////////////////////////////////
// IDetailingDefaults wrapper class

class IDetailingDefaults : public COleDispatchDriver
{
public:
	IDetailingDefaults() {}		// Calls COleDispatchDriver default constructor
	IDetailingDefaults(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IDetailingDefaults(const IDetailingDefaults& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	VARIANT GetAllValues();
	double IGetAllValues(long Count);
	LPDISPATCH GetTextFormat();
	LPDISPATCH IGetTextFormat();
	void SetTextFormat(LPDISPATCH TextFormat);
	void ISetTextFormat(LPDISPATCH TextFormat);
	LPDISPATCH GetDimensionTextFormat();
	LPDISPATCH IGetDimensionTextFormat();
	void SetDimensionTextFormat(LPDISPATCH TextFormat);
	void ISetDimensionTextFormat(LPDISPATCH TextFormat);
	LPDISPATCH GetSectionTextFormat();
	LPDISPATCH IGetSectionTextFormat();
	void SetSectionTextFormat(LPDISPATCH TextFormat);
	void ISetSectionTextFormat(LPDISPATCH TextFormat);
	LPDISPATCH GetDetailTextFormat();
	LPDISPATCH IGetDetailTextFormat();
	void SetDetailTextFormat(LPDISPATCH TextFormat);
	void ISetDetailTextFormat(LPDISPATCH TextFormat);
};
/////////////////////////////////////////////////////////////////////////////
// ILayerMgr wrapper class

class ILayerMgr : public COleDispatchDriver
{
public:
	ILayerMgr() {}		// Calls COleDispatchDriver default constructor
	ILayerMgr(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ILayerMgr(const ILayerMgr& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long AddLayer(LPCTSTR NameIn, LPCTSTR DescIn, long ColorIn, long StyleIn, long WidthIn);
	long SetCurrentLayer(LPCTSTR NameIn);
	CString GetCurrentLayer();
	LPDISPATCH GetLayer(LPCTSTR NameIn);
	LPDISPATCH IGetLayer(LPCTSTR NameIn);
	long GetCount();
	VARIANT GetLayerList();
	CString IGetLayerList();
	LPDISPATCH GetLayerById(short LayerId);
	LPDISPATCH IGetLayerById(short LayerId);
	BOOL DeleteLayer(LPCTSTR Name);
};
/////////////////////////////////////////////////////////////////////////////
// ILayer wrapper class

class ILayer : public COleDispatchDriver
{
public:
	ILayer() {}		// Calls COleDispatchDriver default constructor
	ILayer(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ILayer(const ILayer& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CString GetName();
	long GetColor();
	long GetStyle();
	long GetWidth();
	BOOL GetVisible();
	void SetVisible(BOOL bNewValue);
	CString GetDescription();
	void SetDescription(LPCTSTR lpszNewValue);
	long GetId();
	void SetName(LPCTSTR lpszNewValue);
	void SetColor(long nNewValue);
	void SetStyle(long nNewValue);
	void SetWidth(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// IDesignTable wrapper class

class IDesignTable : public COleDispatchDriver
{
public:
	IDesignTable() {}		// Calls COleDispatchDriver default constructor
	IDesignTable(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IDesignTable(const IDesignTable& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetRowCount();
	long GetColumnCount();
	CString GetHeaderText(long Col);
	CString GetEntryText(long Row, long Col);
	BOOL Attach();
	void Detach();
	VARIANT GetEntryValue(long Row, long Col);
	CString GetTitle();
	long GetTotalRowCount();
	long GetTotalColumnCount();
	long GetVisibleRowCount();
	long GetVisibleColumnCount();
	void SetEntryText(long Row, long Col, LPCTSTR TextIn);
	BOOL AddRow(const VARIANT& CellValues);
	BOOL UpdateModel();
	long GetStartRowNumber();
	long GetStartColumnNumber();
	long GetVisibleTopRowNumber();
	long GetVisibleLeftColumnNumber();
	void SetRowChanged(long RowIndex);
	BOOL GetRowHidden(long Row);
	BOOL GetColumnHidden(long Col);
	void EditFeature();
	void EditTable();
	BOOL UpdateFeature();
	BOOL UpdateTable(long Type, BOOL Close);
	long GetSourceType();
	void SetSourceType(long nNewValue);
	BOOL GetUpdatable();
	void SetUpdatable(BOOL bNewValue);
	BOOL GetLinkToFile();
	void SetLinkToFile(BOOL bNewValue);
	BOOL GetAutoAddNewParams();
	void SetAutoAddNewParams(BOOL bNewValue);
	BOOL GetAutoAddNewConfigs();
	void SetAutoAddNewConfigs(BOOL bNewValue);
	BOOL GetWarn();
	void SetWarn(BOOL bNewValue);
	CString GetFileName();
	void SetFileName(LPCTSTR lpszNewValue);
	BOOL SaveAsExcelFile(LPCTSTR Value);
	BOOL IsActive();
};
/////////////////////////////////////////////////////////////////////////////
// IRefPlane wrapper class

class IRefPlane : public COleDispatchDriver
{
public:
	IRefPlane() {}		// Calls COleDispatchDriver default constructor
	IRefPlane(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IRefPlane(const IRefPlane& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	VARIANT GetRefPlaneParams();
	double IGetRefPlaneParams();
	LPDISPATCH GetTransform();
	VARIANT GetBoundingBox();
	LPDISPATCH IGetBoundingBox();
};
/////////////////////////////////////////////////////////////////////////////
// IPropertyManagerPage wrapper class

class IPropertyManagerPage : public COleDispatchDriver
{
public:
	IPropertyManagerPage() {}		// Calls COleDispatchDriver default constructor
	IPropertyManagerPage(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IPropertyManagerPage(const IPropertyManagerPage& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long SetButtons(long ButtonTypes);
	long SetGroupRange(long FirstGroupId, long FirstCheckId, long GroupCount);
	long Show();
	long GetDialogWindow(long* Status);
	BOOL GetGroupVisible(long GroupId, long* Status);
	long SetGroupVisible(long GroupId, BOOL Visible);
	BOOL GetGroupExpanded(long GroupId, long* Status);
	long SetGroupExpanded(long GroupId, BOOL Expanded);
	BOOL GetPinned();
	void SetPinned(BOOL bNewValue);
	BOOL GetAllowMultiSelect(long* Status);
	long SetAllowMultiSelect(BOOL Allow);
};
/////////////////////////////////////////////////////////////////////////////
// IUserUnit wrapper class

class IUserUnit : public COleDispatchDriver
{
public:
	IUserUnit() {}		// Calls COleDispatchDriver default constructor
	IUserUnit(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IUserUnit(const IUserUnit& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetFractionBase();
	void SetFractionBase(long nNewValue);
	long GetFractionValue();
	void SetFractionValue(long nNewValue);
	BOOL GetRoundToFraction();
	void SetRoundToFraction(BOOL bNewValue);
	long GetSignificantDigits();
	void SetSignificantDigits(long nNewValue);
	BOOL GetDisplayLeadingZero();
	void SetDisplayLeadingZero(BOOL bNewValue);
	BOOL GetPadZero();
	void SetPadZero(BOOL bNewValue);
	CString GetSeparatorCharacter();
	void SetSeparatorCharacter(LPCTSTR lpszNewValue);
	double GetConversionFactor();
	BOOL IsMetric();
	CString GetFullUnitName(BOOL Plural);
	CString ConvertToUserUnit(double ValueIn, BOOL ShowUsernames, BOOL NameInEnglish);
	BOOL ConvertToSystemValue(LPCTSTR UnitText, double* ComputedValue);
	double ConvertDoubleToSystemValue(double UserValue);
	CString GetUnitsString(BOOL InEnglish);
	long GetUnitType();
	long GetSpecificUnitType();
	void SetSpecificUnitType(long nNewValue);
	double GetUserAngleTolerance();
};
/////////////////////////////////////////////////////////////////////////////
// ISketchText wrapper class

class ISketchText : public COleDispatchDriver
{
public:
	ISketchText() {}		// Calls COleDispatchDriver default constructor
	ISketchText(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISketchText(const ISketchText& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	VARIANT GetEdges();
	LPUNKNOWN EnumEdges();
	CString GetText();
	void SetText(LPCTSTR lpszNewValue);
	VARIANT GetCoordinates();
	double IGetCoordinates();
	BOOL SetCoordinates(double X, double Y, double Z);
	BOOL GetUseDocTextFormat();
	LPDISPATCH GetTextFormat();
	LPDISPATCH IGetTextFormat();
	BOOL SetTextFormat(BOOL UseDoc, LPDISPATCH TextFormat);
	BOOL ISetTextFormat(BOOL UseDoc, LPDISPATCH TextFormat);
};
/////////////////////////////////////////////////////////////////////////////
// IEquationMgr wrapper class

class IEquationMgr : public COleDispatchDriver
{
public:
	IEquationMgr() {}		// Calls COleDispatchDriver default constructor
	IEquationMgr(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IEquationMgr(const IEquationMgr& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL GetSuppression(long Index);
	void SetSuppression(long Index, BOOL bNewValue);
	long Add(long Index, LPCTSTR Equation);
	long Delete(long Index);
	long ChangeSuppressionForAllConfigurations(long Index, BOOL State);
	long ChangeSuppressionForConfiguration(long Index, LPCTSTR ConfigName, BOOL State);
	long GetStatus();
	double GetValue(long Index);
	CString GetEquation(long Index);
	void SetEquation(long Index, LPCTSTR lpszNewValue);
	long GetCount();
};
/////////////////////////////////////////////////////////////////////////////
// IFeatureManager wrapper class

class IFeatureManager : public COleDispatchDriver
{
public:
	IFeatureManager() {}		// Calls COleDispatchDriver default constructor
	IFeatureManager(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IFeatureManager(const IFeatureManager& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH CreateCustomBendAllowance();
	LPDISPATCH InsertSheetMetalBaseFlange(double Thickness, BOOL ThickenDir, double Radius, double ExtrudeDist1, double ExtrudeDist2, BOOL FlipExtruDir, long EndCondition1, long EndCondition2, long DirToUse, LPDISPATCH PCBA, 
		BOOL UseDefaultRelief, long ReliefType, double ReliefWidth, double ReliefDepth, double ReliefRatio, BOOL UseReliefRatio);
	LPDISPATCH InsertDeleteBody();
	LPDISPATCH FeatureExtrusion(BOOL Sd, BOOL Flip, BOOL Dir, long T1, long T2, double D1, double D2, BOOL Dchk1, BOOL Dchk2, BOOL Ddir1, BOOL Ddir2, double Dang1, double Dang2, BOOL OffsetReverse1, BOOL OffsetReverse2, BOOL TranslateSurface1, 
		BOOL TranslateSurface2, BOOL Merge, BOOL UseFeatScope, BOOL UseAutoSelect);
	LPDISPATCH FeatureExtrusionThin(BOOL Sd, BOOL Flip, BOOL Dir, long T1, long T2, double D1, double D2, BOOL Dchk1, BOOL Dchk2, BOOL Ddir1, BOOL Ddir2, double Dang1, double Dang2, BOOL OffsetReverse1, BOOL OffsetReverse2, 
		BOOL TranslateSurface1, BOOL TranslateSurface2, BOOL Merge, double Thk1, double Thk2, double EndThk, long RevThinDir, long CapEnds, BOOL AddBends, double BendRad, BOOL UseFeatScope, BOOL UseAutoSelect);
	LPDISPATCH FeatureCut(BOOL Sd, BOOL Flip, BOOL Dir, long T1, long T2, double D1, double D2, BOOL Dchk1, BOOL Dchk2, BOOL Ddir1, BOOL Ddir2, double Dang1, double Dang2, BOOL OffsetReverse1, BOOL OffsetReverse2, BOOL TranslateSurface1, 
		BOOL TranslateSurface2, BOOL NormalCut, BOOL UseFeatScope, BOOL UseAutoSelect);
	LPDISPATCH FeatureCutThin(BOOL Sd, BOOL Flip, BOOL Dir, long T1, long T2, double D1, double D2, BOOL Dchk1, BOOL Dchk2, BOOL Ddir1, BOOL Ddir2, double Dang1, double Dang2, BOOL OffsetReverse1, BOOL OffsetReverse2, BOOL TranslateSurface1, 
		BOOL TranslateSurface2, double Thk1, double Thk2, double EndThk, long RevThinDir, long CapEnds, BOOL AddBends, double BendRad, BOOL UseFeatScope, BOOL UseAutoSelect);
	LPDISPATCH FeatureRevolve(double Angle, BOOL ReverseDir, double Angle2, long RevType, long Options, BOOL Merge, BOOL UseFeatScope, BOOL UseAutoSel);
	LPDISPATCH FeatureRevolveCut(double Angle, BOOL ReverseDir, double Angle2, long RevType, long Options, BOOL UseFeatScope, BOOL UseAutoSelect);
	LPDISPATCH FeatureRevolveThin(double Angle, BOOL ReverseDir, double Angle2, long RevType, double Thickness1, double Thickness2, long ReverseThinDir, BOOL Merge, BOOL UseFeatScope, BOOL UseAutoSelect);
	LPDISPATCH FeatureRevolveThinCut(double Angle, BOOL ReverseDir, double Angle2, long RevType, double Thickness1, double Thickness2, long ReverseThinDir, BOOL UseFeatScope, BOOL UseAutoSelect);
	LPDISPATCH FeatureBossThicken(double Thickness, long Direction, long FaceIndex, BOOL FillVolume, BOOL Merge, BOOL UseFeatScope, BOOL UseAutoSelect);
	LPDISPATCH FeatureCutThicken(double Thickness, long Direction, long FaceIndex, BOOL FillVolume, BOOL UseFeatScope, BOOL UseAutoSelect);
	LPDISPATCH InsertProtrusionSwept(BOOL Propagate, BOOL Alignment, short TwistCtrlOption, BOOL KeepTangency, BOOL ForceNonRational, short StartMatchingType, short EndMatchingType, BOOL IsThinBody, double Thickness1, double Thickness2, 
		short ThinType, BOOL Merge, BOOL UseFeatScope, BOOL UseAutoSelect);
	LPDISPATCH InsertCutSwept(BOOL Propagate, BOOL Alignment, short TwistCtrlOption, BOOL KeepTangency, BOOL ForceNonRational, short StartMatchingType, short EndMatchingType, BOOL IsThinBody, double Thickness1, double Thickness2, short ThinType, 
		BOOL UseFeatScope, BOOL UseAutoSelect);
	LPDISPATCH InsertProtrusionBlend(BOOL Closed, BOOL KeepTangency, BOOL ForceNonRational, double TessToleranceFactor, short StartMatchingType, short EndMatchingType, double StartTangentLength, double EndTangentLength, BOOL StartTangentDir, 
		BOOL EndTangentDir, BOOL IsThinBody, double Thickness1, double Thickness2, short ThinType, BOOL Merge, BOOL UseFeatScope, BOOL UseAutoSelect);
	LPDISPATCH InsertCutBlend(BOOL Closed, BOOL KeepTangency, BOOL ForceNonRational, double TessToleranceFactor, short StartMatchingType, short EndMatchingType, BOOL IsThinBody, double Thickness1, double Thickness2, short ThinType, 
		BOOL UseFeatScope, BOOL UseAutoSelect);
	LPDISPATCH HoleWizard(long GenericHoleType, long StandardIndex, long FastenerTypeIndex, LPCTSTR SSize, short EndType, double Diameter, double Depth, double Value1, double Value2, double Value3, double Value4, double Value5, double Value6, 
		double Value7, double Value8, double Value9, double Value10, double Value11, double Value12);
	LPDISPATCH InsertMacroFeature(LPCTSTR BaseName, LPCTSTR ProgId, const VARIANT& MacroMethods, const VARIANT& ParamNames, const VARIANT& ParamTypes, const VARIANT& ParamValues, LPDISPATCH EditBody, long Options);
	LPDISPATCH IInsertMacroFeature(LPCTSTR BaseName, LPCTSTR ProgId, BSTR* MacroMethods, long ParamCount, BSTR* ParamNames, long* ParamTypes, BSTR* ParamValues, LPDISPATCH EditBody, long Options);
	BOOL GetEnableFeatureTree();
	void SetEnableFeatureTree(BOOL bNewValue);
	void UpdateFeatureTree();
	BOOL InsertFeatureTreeFolder();
	LPDISPATCH InsertSheetMetalCornerTrim(long InternalCornerFlag, long BreakType, double BreakDist, long ReliefType, double Param);
	BOOL GetShowFeatureName();
	void SetShowFeatureName(BOOL bNewValue);
	BOOL GetShowFeatureDescription();
	void SetShowFeatureDescription(BOOL bNewValue);
	LPDISPATCH InsertFillSurface(long Resolution);
	BOOL EditRollback(long Location, LPCTSTR Feature);
	LPDISPATCH InsertSheetMetalLoftedBend(long ThickDirType, double Thickness);
	void MakeStyledCurves(double Tol, long Mode);
	void HideBodies();
	void ShowBodies();
	LPDISPATCH InsertMirrorFeature(BOOL BMirrorBody, BOOL BGeometryPattern, BOOL BMerge, BOOL BKnit);
	LPDISPATCH InsertMoveCopyBody(double TransX, double TransY, double TransZ, double TransDist, double RotPointX, double RotPointY, double RotPointZ, double RotAngleX, double RotAngleY, double RotAngleZ, BOOL BCopy, long NumCopies);
	LPDISPATCH GetDocument();
	LPDISPATCH InsertCombineFeature(long OperationType, LPDISPATCH MainBody, const VARIANT& ToolVar);
	LPDISPATCH IInsertCombineFeature(long OperationType, LPDISPATCH MainBody, long ToolsCount, LPDISPATCH* ToolsArr);
	LPDISPATCH InsertDwgOrDxfFile(LPCTSTR FileName);
	LPDISPATCH FeatureLinearPattern(long Num1, double Spacing1, long Num2, double Spacing2, BOOL FlipDir1, BOOL FlipDir2, LPCTSTR DName1, LPCTSTR DName2);
	LPDISPATCH FeatureCircularPattern(long Num, double Spacing, BOOL FlipDir, LPCTSTR DName);
	LPDISPATCH InsertTableDrivenPattern(LPCTSTR FileName, const VARIANT& PointVar, BOOL UseCentrod, BOOL GeomPatt);
	LPDISPATCH IInsertTableDrivenPattern(LPCTSTR FileName, long Count, double* PointArr, BOOL UseCentrod, BOOL GeomPatt);
	CString InsertCosmeticThread(short Type, double Depth, double Length, LPCTSTR Note);
	LPDISPATCH InsertScale(short Type, BOOL Uniform, double Xscale, double YScale, double ZScale);
	LPDISPATCH InsertFeatureTreeFolder2(long Type);
	LPDISPATCH InsertMoveCopyBody2(double TransX, double TransY, double TransZ, double TransDist, double RotPointX, double RotPointY, double RotPointZ, double RotAngleX, double RotAngleY, double RotAngleZ, BOOL BCopy, long NumCopies);
	LPDISPATCH FeatureSketchDrivenPattern(BOOL UseCentroid, BOOL BGeomPatt);
	LPDISPATCH InsertDerivedPattern();
	LPDISPATCH InsertGussetFeature(double Depth, short DirType, short LocType, BOOL BIsProfile, double ProfileD1, double ProfileD2, double ProfileD3, double ProfileAngle, double ProfileD4, BOOL BOffset, double DProfileOffset, long CrvIndex, 
		BOOL BReverseDir, BOOL BReverseFace, BOOL BUseLenDim);
	LPDISPATCH InsertSubWeldFolder();
	LPDISPATCH InsertMoldPartingLine(BOOL BFlipDir);
	LPDISPATCH InsertMoldShutOffSurface();
	LPDISPATCH InsertWeldmentFeature();
	LPDISPATCH InsertMultiFaceDraft(double Angle, BOOL FlipDir, BOOL EdgeDraft, long PropType, BOOL IsStepDraft, BOOL IsBodyDraft);
	LPDISPATCH InsertRuledSurfaceFromEdge(long Type, double Length, BOOL FlipPullDir, BOOL FlipDir, BOOL TrimAndSew, double Angle, BOOL CoordInput, double X, double Y, double Z);
	BOOL MakeStyledCurves2(double Tolerance, long Mode);
	BOOL InsertSaveOutBodies();
	LPDISPATCH InsertMoldCoreCavitySolids(double Dist1, double Dist2, BOOL Setback, double Angle);
	LPDISPATCH InsertMacroFeature2(LPCTSTR BaseName, LPCTSTR ProgId, const VARIANT& MacroMethods, const VARIANT& ParamNames, const VARIANT& ParamTypes, const VARIANT& ParamValues, const VARIANT& DimTypes, const VARIANT& DimValues, 
		LPDISPATCH EditBody, const VARIANT& IconFiles, long Options);
	LPDISPATCH IInsertMacroFeature2(LPCTSTR BaseName, LPCTSTR ProgId, BSTR* MacroMethods, long ParamCount, BSTR* ParamNames, long* ParamTypes, BSTR* ParamValues, long DimCount, long* DimTypes, double* DimCountValues, LPDISPATCH EditBody, 
		long IconCount, BSTR* IconFiles, long Options);
	void MoldUndercutDetect(long ColUndercut, long ColBase, BOOL BCoordInput, double Dx, double Dy, double Dz);
	BOOL PreTrimSurface(BOOL BMutualTrimIn, BOOL BSplitSystemIn, BOOL BSplitLinearIn, BOOL BRemovePickedIn);
	LPDISPATCH PostTrimSurface(BOOL BSewSurfaceIn);
	LPDISPATCH InsertStructuralWeldment(LPCTSTR Path, long EndCond, double Angle);
	LPDISPATCH InsertWeldmentTrimFeature(long EndCond);
	LPDISPATCH InsertWrapFeature(long Type, double Thickness, BOOL ReverseDir);
	LPDISPATCH InsertFilletBeadFeature(short Type1, double Size1, double Length1, double Pitch, short Type2, double Size2, double Length2, long Flag, long EdgeNum1, const VARIANT& DeSelEdge1, long EdgeNum2, const VARIANT& DeSelEdge2);
	LPDISPATCH InsertEndCapFeature(double Depth, BOOL BIsGivenOffset, BOOL BIsChamfer, double OffsetValue, double WallThicknessRatio, double ChamferValue);
	VARIANT InsertReferencePoint(long NRefPointType, long NRefPointAlongCurveType, double DDistance_or_Percent, long NumberOfRefPoints);
	LPDISPATCH IInsertReferencePoint(long NRefPointType, long NRefPointAlongCurveType, double DDistance_or_Percent, long NumberOfRefPoints);
	LPDISPATCH InsertProtrusionSwept2(BOOL Propagate, BOOL Alignment, short TwistCtrlOption, BOOL KeepTangency, BOOL ForceNonRational, short StartMatchingType, short EndMatchingType, BOOL IsThinBody, double Thickness1, double Thickness2, 
		short ThinType, short PathAlign, BOOL Merge, BOOL UseFeatScope, BOOL UseAutoSelect);
	LPDISPATCH InsertCutSwept2(BOOL Propagate, BOOL Alignment, short TwistCtrlOption, BOOL KeepTangency, BOOL ForceNonRational, short StartMatchingType, short EndMatchingType, BOOL IsThinBody, double Thickness1, double Thickness2, short ThinType, 
		short PathAlign, BOOL UseFeatScope, BOOL UseAutoSelect);
	LPDISPATCH InsertSweepSurface(BOOL Propagate, short TwistCtrlOption, BOOL KeepTangency, BOOL ForceNonRational, short StartMatchingType, short EndMatchingType, short PathAlign);
	LPDISPATCH SimpleHole(double Dia, BOOL Sd, BOOL Flip, BOOL Dir, long T1, long T2, double D1, double D2, BOOL Dchk1, BOOL Dchk2, BOOL Ddir1, BOOL Ddir2, double Dang1, double Dang2, BOOL OffsetReverse1, BOOL OffsetReverse2, 
		BOOL TranslateSurface1, BOOL TranslateSurface2, BOOL UseFeatScope, BOOL UseAutoSelect);
	LPDISPATCH InsertMoldPartingSurface(long Radiate, BOOL ReverseAlignment, BOOL ReverseOffset, double OffsetDistance, double Angle, long Smooth, double SmoothDistance, BOOL Knit);
	LPDISPATCH InsertRuledSurfaceFromEdge2(long Type, double Length, BOOL FlipPullDir, BOOL FlipDir, BOOL TrimAndSew, double Angle, BOOL CoordInput, double X, double Y, double Z, BOOL BConnectSurface);
	LPDISPATCH InsertWeldmentCutList();
	LPDISPATCH InsertUntrimSurface(long FaceUntrimType, long EdgeUntrimType, double Distance, BOOL BMerge);
	LPDISPATCH InsertCosmeticThread2(short Type, double Depth, double Length, LPCTSTR Note);
	LPDISPATCH InsertStructuralWeldment2(LPCTSTR Path, long EndCond, double Angle, BOOL Merge);
	LPDISPATCH InsertSheetMetalMiterFlange(BOOL UseDefaultRadius, double GlobalRadius, double RipGap, BOOL UseDefaultRelief, BOOL UseReliefRatio, double ReliefRatio, double ReliefWidth, double ReliefDepth, long ReliefType, BOOL TrimSideBends, 
		long FlangePos, double OffsetDist1, double OffsetDist2, LPDISPATCH PCBA);
	LPDISPATCH InsertSubFolder();
	LPDISPATCH InsertFeatureChamfer(long Options, long ChamferType, double Width, double Angle, double OtherDist, double VertexChamDist1, double VertexChamDist2, double VertexChamDist3);
	BOOL MoveToFolder(LPCTSTR MoveToFeat, LPCTSTR MoveFromFeat, BOOL IsFolder);
	LPDISPATCH InsertMateReference(LPCTSTR BstrMateReferenceName, LPDISPATCH PrimaryReferenceEntity, long PrimaryReferenceType, long PrimaryReferenceAlignment, LPDISPATCH SecondaryReferenceEntity, long SecondaryReferenceType, 
		long SecondaryReferenceAlignment, LPDISPATCH TertiaryReferenceEntity, long TertiaryReferenceType, long TertiaryReferenceAlignment);
	LPDISPATCH FeatureFillet(long Options, double R1, long Ftyp, long OverflowType, const VARIANT& Radii, const VARIANT& SetBackDistances, const VARIANT& PointRadiusArray);
	LPDISPATCH IFeatureFillet(long Options, double R1, long Ftyp, long OverflowType, long NRadii, double* Radii, long SetbackDistCount, double* SetBackDistances, long PointCount, double* PointRadiusArray);
	LPDISPATCH InsertProtrusionSwept3(BOOL Propagate, BOOL Alignment, short TwistCtrlOption, BOOL KeepTangency, BOOL BAdvancedSmoothing, short StartMatchingType, short EndMatchingType, BOOL IsThinBody, double Thickness1, double Thickness2, 
		short ThinType, short PathAlign, BOOL Merge, BOOL UseFeatScope, BOOL UseAutoSelect, double TwistAngle, BOOL BMergeSmoothFaces);
	LPDISPATCH InsertCutSwept3(BOOL Propagate, BOOL Alignment, short TwistCtrlOption, BOOL KeepTangency, BOOL BAdvancedSmoothing, short StartMatchingType, short EndMatchingType, BOOL IsThinBody, double Thickness1, double Thickness2, 
		short ThinType, short PathAlign, BOOL UseFeatScope, BOOL UseAutoSelect, double TwistAngle, BOOL BMergeSmoothFaces);
	LPDISPATCH InsertSweepSurface2(BOOL Propagate, short TwistCtrlOption, BOOL KeepTangency, BOOL BAdvancedSmoothing, short StartMatchingType, short EndMatchingType, short PathAlign, BOOL UseFeatScope, BOOL UseAutoSelect, double TwistAngle, 
		BOOL BMergeSmoothFaces);
	LPDISPATCH InsertSheetMetalHem(long Type, long Position, BOOL Reverse, double DLength, double DGap, double DRad, double DAngle, double DMiterGap, LPDISPATCH PCBA);
	LPDISPATCH InsertSheetMetalEdgeFlange(LPDISPATCH FlangeEdge, LPDISPATCH SketchFeat, long BooleanOptions, double DAngle, double DRadius, long BendPosition, double DOffsetDist, long ReliefType, double DReliefRatio, double DReliefWidth, 
		double DReliefDepth, long FlangeSharpType, LPDISPATCH PCBA);
	LPDISPATCH InsertSheetMetal3dBend(double Angle, BOOL BUseDefaultRadius, double Radius, BOOL FlipDir, short BendPos, LPDISPATCH PCBA);
	LPDISPATCH InsertEdgeMerge(double Angular_tolerance, double Edge_length_tolerance);
	void MoldUndercutDetect2(long ColUndercut1, long ColUndercut2, long ColOccluded, long ColStraddle, long ColBase, BOOL BCoordInput, double Dx, double Dy, double Dz);
	LPDISPATCH InsertIndent(double Thickness, double Clearance, BOOL Exclude, BOOL ClrDir, BOOL Cut, BOOL CutDir);
	LPDISPATCH FeatureLinearPattern2(long Num1, double Spacing1, long Num2, double Spacing2, BOOL FlipDir1, BOOL FlipDir2, LPCTSTR DName1, LPCTSTR DName2, BOOL GeometryPattern);
	LPDISPATCH FeatureCircularPattern2(long Num, double Spacing, BOOL FlipDir, LPCTSTR DName, BOOL GeometryPattern);
	LPDISPATCH InsertSplitLineIntersect(long CompleteOption);
	LPDISPATCH InsertFlexFeature(double RotX, double RotY, double RotZ, double TanX, double TanY, double TanZ, double RadX, double RadY, double RadZ, double Angle, double PivotX, double PivotY, double PivotZ, long Type, double LeftTrim, 
		double RightTrim, BOOL HardEdges);
	LPDISPATCH FeatureExtrusion2(BOOL Sd, BOOL Flip, BOOL Dir, long T1, long T2, double D1, double D2, BOOL Dchk1, BOOL Dchk2, BOOL Ddir1, BOOL Ddir2, double Dang1, double Dang2, BOOL OffsetReverse1, BOOL OffsetReverse2, BOOL TranslateSurface1, 
		BOOL TranslateSurface2, BOOL Merge, BOOL UseFeatScope, BOOL UseAutoSelect, long T0, double StartOffset, BOOL FlipStartOffset);
	LPDISPATCH InsertMoveFace(long MoveType, BOOL ReverseDir, double Angle, double Distance);
	CString GetFeatureName(long NameID);
	BOOL IsNameUsed(long Type, LPCTSTR Name);
	BOOL GetEnableFeatureTreeWindow();
	void SetEnableFeatureTreeWindow(BOOL bNewValue);
	LPDISPATCH HoleWizard2(long GenericHoleType, long StandardIndex, long FastenerTypeIndex, LPCTSTR SSize, short EndType, double Diameter, double Depth, double Value1, double Value2, double Value3, double Value4, double Value5, double Value6, 
		double Value7, double Value8, double Value9, double Value10, double Value11, double Value12, LPCTSTR ThreadClass, BOOL RevDir, BOOL UseFeatScope, BOOL UseAutoSelect);
	LPDISPATCH CreateDefinition(long Type);
	LPDISPATCH CreateFeature(LPDISPATCH FeatureData);
	LPDISPATCH InsertNetBlend(short Type, short nCurvesDir1, short nCurvesDir2, BOOL hasCenterline, double tessTolFactor, BOOL wantsSolid, BOOL mergeBody, BOOL featureScope, BOOL autoSelect, BOOL thin, double Thickness1, double Thickness2, 
		BOOL reverseThickness, short thinSolidType, BOOL useSharedThickness, BOOL CapEnds, double endThickness, BOOL autoFillet, double filletRadius, BOOL ForceNonRational);
	LPDISPATCH SetNetBlendCurveData(short Direction, short curveIndex, short tangentType, double signedDraftAngle, double signedTangentLength, BOOL tangentLengthApplyAll);
	LPDISPATCH SetNetBlendDirectionData(short Direction, short influenceType, short trimCurves, BOOL blendClosed, BOOL splitSurfaces);
	LPDISPATCH SetNetBlendCenterlineData(BOOL combineWithDir2, short twistType, short pathAlignmentType, short twistAngleType, double TwistAngle);
	LPDISPATCH CreateFormTool();
	LPDISPATCH ConvertLoftOrSweepToNetBlend();
};
/////////////////////////////////////////////////////////////////////////////
// ICustomBendAllowance wrapper class

class ICustomBendAllowance : public COleDispatchDriver
{
public:
	ICustomBendAllowance() {}		// Calls COleDispatchDriver default constructor
	ICustomBendAllowance(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ICustomBendAllowance(const ICustomBendAllowance& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetType();
	void SetType(long nNewValue);
	CString GetBendTableFile();
	void SetBendTableFile(LPCTSTR lpszNewValue);
	double GetKFactor();
	void SetKFactor(double newValue);
	double GetBendAllowance();
	void SetBendAllowance(double newValue);
	double GetBendDeduction();
	void SetBendDeduction(double newValue);
};
/////////////////////////////////////////////////////////////////////////////
// IModelViewManager wrapper class

class IModelViewManager : public COleDispatchDriver
{
public:
	IModelViewManager() {}		// Calls COleDispatchDriver default constructor
	IModelViewManager(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IModelViewManager(const IModelViewManager& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPUNKNOWN AddControl(LPCTSTR Name, LPCTSTR ControlName, LPCTSTR BstrLicKey);
	LPDISPATCH GetControl(LPCTSTR Name);
	LPUNKNOWN IGetControl(LPCTSTR Name);
	BOOL DeleteControlTab(LPCTSTR Name);
	BOOL ActivateControlTab(LPCTSTR Name);
	BOOL ActivateModelTab();
	BOOL IsControlTabActive(LPCTSTR Name);
	BOOL IsModelTabActive();
	LPDISPATCH CreateFeatureMgrView(LPDISPATCH PPicture, LPCTSTR ToolTip, long WhichPane);
	LPDISPATCH CreateFeatureMgrControl(LPDISPATCH PPicture, LPCTSTR Class, LPCTSTR LicKey, LPCTSTR ToolTip, long WhichPane);
	LPDISPATCH GetDocument();
	LPDISPATCH CreateFeatureMgrView2(LPCTSTR BitMapFile, LPCTSTR ToolTip, long WhichPane);
	LPDISPATCH CreateFeatureMgrControl2(LPCTSTR BitMapFile, LPCTSTR Class, LPCTSTR LicKey, LPCTSTR ToolTip, long WhichPane);
	long GetFeatureMgrViewHWnd(long FeatMgrViewPane);
	LPDISPATCH CreateManipulator(long Type, LPDISPATCH PHandler);
	LPUNKNOWN AddControl2(LPCTSTR Name, LPCTSTR ControlName, LPCTSTR BstrLicKey);
	LPDISPATCH CreateFeatureMgrControl3(LPCTSTR BitMapFile, LPCTSTR Class, LPCTSTR LicKey, LPCTSTR ToolTip, long WhichPane);
};
/////////////////////////////////////////////////////////////////////////////
// IManipulator wrapper class

class IManipulator : public COleDispatchDriver
{
public:
	IManipulator() {}		// Calls COleDispatchDriver default constructor
	IManipulator(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IManipulator(const IManipulator& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL GetVisible();
	void SetVisible(BOOL bNewValue);
	void Show(LPDISPATCH PModelDoc);
	void Remove();
	LPDISPATCH GetSpecificManipulator();
};
/////////////////////////////////////////////////////////////////////////////
// IModelDocExtension wrapper class

class IModelDocExtension : public COleDispatchDriver
{
public:
	IModelDocExtension() {}		// Calls COleDispatchDriver default constructor
	IModelDocExtension(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IModelDocExtension(const IModelDocExtension& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetDocument();
	VARIANT GetMassProperties(long Accuracy, long* Status);
	double IGetMassProperties(long Accuracy, long* Status);
	BOOL InsertDwgOrDxfFile(LPCTSTR FileName);
	void PrintOut(long FromPage, long ToPage, long Copies, BOOL Collate, LPCTSTR Printer, LPCTSTR PrintFileName);
	BOOL SelectByID(LPCTSTR Name, LPCTSTR Type, double X, double Y, double Z, BOOL Append, long Mark, LPDISPATCH Callout);
	LPUNKNOWN IGet3rdPartyStorageStore(LPCTSTR SubStorageName, BOOL IsStoring);
	BOOL IRelease3rdPartyStorageStore(LPCTSTR SubStorageName);
	long GetUsePageSetup();
	void SetUsePageSetup(long nNewValue);
	LPDISPATCH GetAppPageSetup();
	VARIANT GetSectionProperties(const VARIANT& Sections);
	double IGetSectionProperties(long Count, LPUNKNOWN* Sections);
	LPDISPATCH CreateMassProperty();
	LPDISPATCH GetCoordinateSystemTransformByName(LPCTSTR NameIn);
	void SetMaterialPropertyValues(const VARIANT& Material_property_values, long Config_opt, const VARIANT& Config_names);
	void ISetMaterialPropertyValues(double* Material_values, long Config_opt, long Config_count, BSTR* Config_names);
	VARIANT GetMaterialPropertyValues(long Config_opt, const VARIANT& Config_names);
	double IGetMaterialPropertyValues(long Config_opt, long Config_count, BSTR* Config_names);
	void PrintOut2(const VARIANT& PageArray, long Copies, BOOL Collate, LPCTSTR Printer, LPCTSTR PrintFileName);
	void IPrintOut2(long ArraySize, long* PageArray, long Copies, BOOL Collate, LPCTSTR Printer, LPCTSTR PrintFileName);
	VARIANT GetPersistReference(LPDISPATCH DispObj);
	long GetPersistReferenceCount(LPDISPATCH DispObj);
	// method 'IGetPersistReference' not emitted because of invalid return type or parameter type
	LPDISPATCH GetObjectByPersistReference(const VARIANT& PersistId);
	// method 'IGetObjectByPersistReference' not emitted because of invalid return type or parameter type
	LPUNKNOWN GetStream(long StreamType, BOOL* ReadOnly);
	BOOL ReleaseStream(long StreamType);
	LPDISPATCH GetLastFeatureAdded();
	long IMultiSelect(long Count, LPUNKNOWN* Objects, BOOL AppendFlag, LPDISPATCH Data);
	long MultiSelect(const VARIANT& Objects, BOOL AppendFlag, LPDISPATCH Data);
	double GetParameterValue(LPCTSTR DimName, long Reserved);
	long SetParameterValue(LPCTSTR DimName, double Value, long Reserved);
	void MoveOrCopy(BOOL Copy, long NumCopies, BOOL KeepRelations, double BaseX, double BaseY, double BaseZ, double DestX, double DestY, double DestZ);
	void RotateOrCopy(BOOL Copy, long NumCopies, BOOL KeepRelations, double BaseX, double BaseY, double BaseZ, double DestX, double DestY, double DestZ, double Angle);
	void ScaleOrCopy(BOOL Copy, long NumCopies, double BaseX, double BaseY, double BaseZ, double Scale);
	BOOL ApplyTexture(long Scale, double Angle, LPCTSTR TextureFilename, BOOL BlendColor);
	BOOL RemoveTexture();
	BOOL RemoveMaterialProperty(long Config_opt, const VARIANT& Config_names);
	BOOL IRemoveMaterialProperty(long Config_opt, long Config_count, BSTR* Config_names);
	void RemoveModelColorizer(LPDISPATCH PInterface);
	void InstallModelColorizer(LPDISPATCH PInterface);
	BOOL HasDesignTable();
	void ListExternalFileReferences(VARIANT* ModelPathName, VARIANT* ComponentPathName, VARIANT* Feature, VARIANT* DataType, VARIANT* Status, VARIANT* RefEntity, VARIANT* FeatCom, long* ConfigOption, BSTR* ConfigName);
	long ListExternalFileReferencesCount();
	void IListExternalFileReferences(long NumRefs, BSTR* ModelPathName, BSTR* CompPathName, BSTR* Feature, BSTR* DataType, long* Status, BSTR* RefEntity, BSTR* FeatComp, long* ConfigOption, BSTR* ConfigName);
	void UpdateExternalFileReferences(long ConfigOption, LPCTSTR ConfigName, long UpdateStatus);
	BOOL GetNeedsRebuild();
	LPDISPATCH InsertSurfaceFinishSymbol3(long SymType, long LeaderType, double LocX, double LocY, double LocZ, long LaySymbol, long ArrowType, LPCTSTR MachAllowance, LPCTSTR OtherVals, LPCTSTR ProdMethod, LPCTSTR SampleLen, LPCTSTR MaxRoughness, 
		LPCTSTR MinRoughness, LPCTSTR RoughnessSpacing);
	LPDISPATCH InsertDatumTargetSymbol2(LPCTSTR Datum1, LPCTSTR Datum2, LPCTSTR Datum3, short AreaStyle, BOOL AreaOutside, double Value1, double Value2, LPCTSTR ValueStr1, LPCTSTR ValueStr2, BOOL ArrowsSmart, short ArrowStyle, 
		short LeaderLineStyle, BOOL LeaderBent, BOOL ShowArea, BOOL ShowSymbol);
	LPDISPATCH GetTexture(LPCTSTR Config_name);
	BOOL SetTexture(LPCTSTR Config_name, LPDISPATCH TextureIn);
	BOOL RemoveTexture2(LPCTSTR Config_name);
	LPDISPATCH CreateTexture(LPCTSTR MatName, double Scale, double Angle, BOOL Blend);
	LPDISPATCH GetObjectByPersistReference2(const VARIANT& PersistId, long* ErrorCode);
	// method 'IGetObjectByPersistReference2' not emitted because of invalid return type or parameter type
	long GetAnnotationCount();
	VARIANT GetAnnotations();
	LPDISPATCH IGetAnnotations(long NumAnnotations);
	BOOL GetViewDisplayRealView();
	void SetViewDisplayRealView(BOOL bNewValue);
	LPDISPATCH InsertAnnotationFavorite(LPCTSTR BstrFileName, double X, double Y, double Z);
	BOOL InsertAttachment(LPCTSTR FileName, BOOL Linked);
	BOOL DeleteAttachment(LPCTSTR FileName);
	long GetAttachmentCount();
	VARIANT GetAttachments(VARIANT* LinkedVar);
	CString IGetAttachments(long NumAttachments, BOOL* LinkedArr);
	VARIANT GetSectionProperties2(const VARIANT& Sections);
	double IGetSectionProperties2(long Count, LPUNKNOWN* Sections);
	BOOL SelectByID2(LPCTSTR Name, LPCTSTR Type, double X, double Y, double Z, BOOL Append, long Mark, LPDISPATCH Callout, long SelectOption);
	LPDISPATCH CreateOLEObject(long Aspect, const VARIANT& Position, const VARIANT& Buffer, long* ErrorCode);
	// method 'ICreateOLEObject' not emitted because of invalid return type or parameter type
	long GetOLEObjectCount(long Options);
	VARIANT GetOLEObjects(long Options);
	void IGetOLEObjects(long Options, long OleObjectCount, LPDISPATCH* LpOleObjects);
	LPDISPATCH InsertCamera();
	long GetCameraCount();
	LPDISPATCH GetCameraById(long CameraId);
	LPDISPATCH InsertObjectFromFile(LPCTSTR FilePath, BOOL CreateLink, long Aspect, double XPos, double YPos, double ZPos);
};
/////////////////////////////////////////////////////////////////////////////
// IMassProperty wrapper class

class IMassProperty : public COleDispatchDriver
{
public:
	IMassProperty() {}		// Calls COleDispatchDriver default constructor
	IMassProperty(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IMassProperty(const IMassProperty& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL GetUseSystemUnits();
	void SetUseSystemUnits(BOOL bNewValue);
	double GetMass();
	double GetVolume();
	double GetDensity();
	double GetSurfaceArea();
	VARIANT GetCenterOfMass();
	double IGetCenterOfMass();
	VARIANT GetPrincipleAxesOfInertia(long Axis);
	double IGetPrincipleAxesOfInertia(long Axis);
	VARIANT GetPrincipleMomentsOfInertia();
	double IGetPrincipleMomentsOfInertia();
	VARIANT GetMomentOfInertia(long WhereTaken);
	double IGetMomentOfInertia(long WhereTaken);
	BOOL SetCoordinateSystem(LPDISPATCH Coords);
	BOOL AddBodies(const VARIANT& BodyListIn);
	BOOL IAddBodies(long NumBodies, LPDISPATCH* BodyListIn);
	BOOL SetAssignedMassProp(double Mass, double Center_x, double Center_y, double Center_z, long Config_opt, const VARIANT& Config_names);
	BOOL ISetAssignedMassProp(double Mass, double Center_x, double Center_y, double Center_z, long Config_opt, long ConfigNum, BSTR* Config_names);
	BOOL GetUserAssigned();
	void SetUserAssigned(BOOL bNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// ISwOLEObject wrapper class

class ISwOLEObject : public COleDispatchDriver
{
public:
	ISwOLEObject() {}		// Calls COleDispatchDriver default constructor
	ISwOLEObject(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISwOLEObject(const ISwOLEObject& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CString GetFileName();
	CString GetClsid();
	BOOL GetIsLinked();
	long GetBufferSize();
	VARIANT GetBuffer();
	// method 'IGetBuffer' not emitted because of invalid return type or parameter type
	long GetAspect();
	VARIANT GetBoundaries();
	void SetBoundaries(const VARIANT& newValue);
	void IGetBoundaries(double* Boundary);
	void ISetBoundaries(double* Boundary);
	BOOL Select(BOOL Append);
	void Refresh();
	LPDISPATCH SetActive(BOOL Active);
};
/////////////////////////////////////////////////////////////////////////////
// IConfigurationManager wrapper class

class IConfigurationManager : public COleDispatchDriver
{
public:
	IConfigurationManager() {}		// Calls COleDispatchDriver default constructor
	IConfigurationManager(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IConfigurationManager(const IConfigurationManager& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetDocument();
	BOOL GetConfigurationParams(LPCTSTR ConfigName, VARIANT* Params, VARIANT* Values);
	BOOL IGetConfigurationParams(LPCTSTR ConfigName, long ParamCount, BSTR* ParamNames, BSTR* ParamValues);
	long GetConfigurationParamsCount(LPCTSTR ConfigName);
	LPDISPATCH AddConfiguration(LPCTSTR Name, LPCTSTR Comment, LPCTSTR AlternateName, long Options, LPCTSTR ParentConfigName, LPCTSTR Description);
	BOOL SetConfigurationParams(LPCTSTR ConfigName, VARIANT* ParamNames, VARIANT* ParamValues);
	BOOL ISetConfigurationParams(LPCTSTR ConfigName, long ParamCount, BSTR* ParamNames, BSTR* ParamValues);
	LPDISPATCH GetActiveConfiguration();
};
/////////////////////////////////////////////////////////////////////////////
// ISketchManager wrapper class

class ISketchManager : public COleDispatchDriver
{
public:
	ISketchManager() {}		// Calls COleDispatchDriver default constructor
	ISketchManager(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISketchManager(const ISketchManager& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetDocument();
	BOOL SketchOffset(double Offset, BOOL BothDirections, BOOL Chain, BOOL CapEnds, BOOL MakeConstruction, BOOL AddDimensions);
	LPDISPATCH PerimeterCircle(double X1, double Y1, double X2, double Y2, double X3, double Y3);
	BOOL GetDynamicMirror();
	BOOL SetDynamicMirror(BOOL DynamicMirror);
	BOOL SketchUseEdge(BOOL Chain);
	long GetSketchBlockDefinitionCount();
	VARIANT GetSketchBlockDefinitions();
	LPDISPATCH IGetSketchBlockDefinitions(long BlockDefCount);
	BOOL MakeSketchBlockDefinitionFromSelected();
	BOOL MakeSketchBlockDefinitionFromFile(LPCTSTR FileName, LPDISPATCH LpInsertionPoint, BOOL BLinkToFile, double DScale, double DAngle);
	BOOL MakeSketchBlockDefinitionFromSketch(LPDISPATCH LpSketch);
	BOOL InsertSketchBlockInstance(LPDISPATCH LpSketchBlockDef, LPDISPATCH LpInsertionPoint, double DScale, double DAngle);
	void EditSketchBlock();
	void RebuildSketchBlock();
	void AcceptSketchBlock(BOOL RebuildBlock);
	void ExplodeSketchBlockInstance(LPDISPATCH LpSketchBlockInstance);
};
/////////////////////////////////////////////////////////////////////////////
// ISketchBlockDefinition wrapper class

class ISketchBlockDefinition : public COleDispatchDriver
{
public:
	ISketchBlockDefinition() {}		// Calls COleDispatchDriver default constructor
	ISketchBlockDefinition(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISketchBlockDefinition(const ISketchBlockDefinition& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetInstanceCount();
	VARIANT GetInstances();
	LPDISPATCH IGetInstances(long InstanceCount);
	BOOL GetLinkToFile();
	void SetLinkToFile(BOOL bNewValue);
	CString GetFileName();
	void SetFileName(LPCTSTR lpszNewValue);
	LPDISPATCH GetInsertionPoint();
	void SetInsertionPoint(LPDISPATCH newValue);
	LPDISPATCH GetLeaderPoint();
	void SetLeaderPoint(LPDISPATCH newValue);
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// ISketchBlockInstance wrapper class

class ISketchBlockInstance : public COleDispatchDriver
{
public:
	ISketchBlockInstance() {}		// Calls COleDispatchDriver default constructor
	ISketchBlockInstance(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISketchBlockInstance(const ISketchBlockInstance& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetDefinition();
	void SetDefinition(LPDISPATCH newValue);
	LPDISPATCH GetInsertionPoint();
	void SetInsertionPoint(LPDISPATCH newValue);
	LPDISPATCH GetLeaderPoint();
	void SetLeaderPoint(LPDISPATCH newValue);
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	double GetAngle();
	void SetAngle(double newValue);
	double GetScale2();
	void SetScale2(double newValue);
	LPDISPATCH GetMathTransform();
	void SetMathTransform(LPDISPATCH newValue);
	BOOL Select(BOOL Append, LPDISPATCH Data);
	LPDISPATCH GetSketch();
	LPDISPATCH GetParentInstance();
	long GetChildInstanceCount();
	VARIANT GetChildInstances();
	LPDISPATCH IGetChildInstances(long ChildInstanceCount);
};
/////////////////////////////////////////////////////////////////////////////
// IPartDoc wrapper class

class IPartDoc : public COleDispatchDriver
{
public:
	IPartDoc() {}		// Calls COleDispatchDriver default constructor
	IPartDoc(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IPartDoc(const IPartDoc& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CString GetMaterialUserName();
	void SetMaterialUserName(LPCTSTR lpszNewValue);
	CString GetMaterialIdName();
	void SetMaterialIdName(LPCTSTR lpszNewValue);
	VARIANT GetMaterialPropertyValues();
	void SetMaterialPropertyValues(const VARIANT& newValue);
	LPDISPATCH FirstFeature();
	LPDISPATCH IFirstFeature();
	LPDISPATCH FeatureByName(LPCTSTR Name);
	LPDISPATCH IFeatureByName(LPCTSTR Name);
	LPDISPATCH FeatureById(long Id);
	LPDISPATCH IFeatureById(long Id);
	LPDISPATCH Body();
	LPDISPATCH IBodyObject();
	void FeatureExtrusion(BOOL Sd, BOOL Flip, BOOL Dir, long T1, long T2, double D1, double D2, BOOL Dchk1, BOOL Dchk2, BOOL Ddir1, BOOL Ddir2, double Dang1, double Dang2, BOOL OffsetReverse1, BOOL OffsetReverse2);
	void FeatureRevolve(double Angle, BOOL ReverseDir, double Angle2, long RevType);
	void FeatureRevolveCut(double Angle, BOOL ReverseDir, double Angle2, long RevType);
	VARIANT GetTessTriangles(BOOL NoConversion);
	VARIANT GetTessNorms();
	LPDISPATCH GetProcessedBody();
	LPDISPATCH IGetProcessedBody();
	VARIANT GetPartBox(BOOL NoConversion);
	LPDISPATCH CreateNewBody();
	LPDISPATCH ICreateNewBody();
	void EditRebuild();
	void ForceRebuild();
	void EditUnsuppressDependent();
	void EditRollforward();
	void InsertStockTurned();
	void EditUnsuppress();
	void MakeSection();
	void Dumpfacets();
	void FeatureStock();
	void EditRollback();
	void EditSuppress();
	long AddPropertyExtension(const VARIANT& PropertyExtension);
	VARIANT GetPropertyExtension(long Id);
	void MirrorFeature();
	void ResetPropertyExtension();
	LPDISPATCH GetProcessedBodyWithSelFace();
	LPDISPATCH IGetProcessedBodyWithSelFace();
	VARIANT GetTessTriStrips(BOOL NoConversion);
	VARIANT GetTessTriStripNorms();
	void MirrorPart();
	float IGetTessTriangles(BOOL NoConversion);
	float IGetTessNorms();
	long GetTessTriangleCount();
	double IGetPartBox(BOOL NoConversion);
	float IGetTessTriStrips(BOOL NoConversion);
	float IGetTessTriStripNorms();
	long GetTessTriStripSize();
	LPDISPATCH GetEntityByName(LPCTSTR Name, long EntityType);
	LPDISPATCH IGetEntityByName(LPCTSTR Name, long EntityType);
	CString GetEntityName(LPDISPATCH Entity);
	CString IGetEntityName(LPDISPATCH Entity);
	BOOL SetEntityName(LPDISPATCH Entity, LPCTSTR StringValue);
	BOOL ISetEntityName(LPDISPATCH Entity, LPCTSTR StringValue);
	BOOL ReorderFeature(LPCTSTR FeatureToMove, LPCTSTR MoveAfterFeature);
	LPUNKNOWN EnumRelatedBodies();
	LPDISPATCH GetSectionedBody(LPDISPATCH ViewIn);
	LPDISPATCH IGetSectionedBody(LPDISPATCH ViewIn);
	LPUNKNOWN EnumRelatedSectionedBodies(LPDISPATCH ViewIn);
	double GetIMaterialPropertyValues();
	void SetIMaterialPropertyValues(double* newValue);
	void FeatureRevolveThin(double Angle, BOOL ReverseDir, double Angle2, long RevType, double Thickness1, double Thickness2, long ReverseThinDir);
	void FeatureRevolveThinCut(double Angle, BOOL ReverseDir, double Angle2, long RevType, double Thickness1, double Thickness2, long ReverseThinDir);
	void FeatureExtrusionThin(BOOL Sd, BOOL Flip, BOOL Dir, long T1, long T2, double D1, double D2, BOOL Dchk1, BOOL Dchk2, BOOL Ddir1, BOOL Ddir2, double Dang1, double Dang2, BOOL OffsetReverse1, BOOL OffsetReverse2, double Thk1, double Thk2, 
		double EndThk, long RevThinDir, long CapEnds, BOOL AddBends, double BendRad);
	BOOL InsertBends(double Radius, LPCTSTR UseBendTable, double UseKfactor, double UseBendAllowance, BOOL UseAutoRelief, double OffsetRatio);
	LPDISPATCH CreateFeatureFromBody(LPDISPATCH Body);
	LPDISPATCH ICreateFeatureFromBody(LPDISPATCH Body);
	LPDISPATCH CreateFeatureFromBody2(LPDISPATCH Body, BOOL MakeRefSurface);
	LPDISPATCH ICreateFeatureFromBody2(LPDISPATCH Body, BOOL MakeRefSurface);
	long ImportDiagnosis(BOOL CloseAllGaps, BOOL RemoveFaces, BOOL FixFaces, long Options);
	BOOL DeleteEntityName(LPDISPATCH Entity);
	BOOL IDeleteEntityName(LPDISPATCH Entity);
	VARIANT GetTessTriStripEdges();
	long IGetTessTriStripEdges();
	long IGetTessTriStripEdgeSize();
	LPUNKNOWN EnumBodies(long BodyType);
	VARIANT GetBodies(long BodyType);
	VARIANT GetRelatedBodies();
	VARIANT GetRelatedSectionedBodies(LPDISPATCH ViewIn);
	BOOL InsertBends2(double Radius, LPCTSTR UseBendTable, double UseKfactor, double UseBendAllowance, BOOL UseAutoRelief, double OffsetRatio, BOOL DoFlatten);
	LPDISPATCH CreateFeatureFromBody3(LPDISPATCH Body, BOOL MakeRefSurface, long Options);
	LPDISPATCH ICreateFeatureFromBody3(LPDISPATCH Body, BOOL MakeRefSurface, long Options);
	LPDISPATCH GetMateReferenceEntity();
	void FeatureExtrusion2(BOOL Sd, BOOL Flip, BOOL Dir, long T1, long T2, double D1, double D2, BOOL Dchk1, BOOL Dchk2, BOOL Ddir1, BOOL Ddir2, double Dang1, double Dang2, BOOL OffsetReverse1, BOOL OffsetReverse2, BOOL Merge);
	void FeatureExtrusionThin2(BOOL Sd, BOOL Flip, BOOL Dir, long T1, long T2, double D1, double D2, BOOL Dchk1, BOOL Dchk2, BOOL Ddir1, BOOL Ddir2, double Dang1, double Dang2, BOOL OffsetReverse1, BOOL OffsetReverse2, BOOL Merge, double Thk1, 
		double Thk2, double EndThk, long RevThinDir, long CapEnds, BOOL AddBends, double BendRad);
	VARIANT CreateSurfaceFeatureFromBody(LPDISPATCH Body, long Options);
	long ICreateSurfaceFeatureFromBodyCount(LPDISPATCH Body, long Options);
	LPDISPATCH ICreateSurfaceFeatureFromBody();
	LPDISPATCH IBodyObject2();
	LPDISPATCH IGetProcessedBody2();
	LPDISPATCH ICreateNewBody2();
	LPDISPATCH IGetProcessedBodyWithSelFace2();
	LPDISPATCH IGetSectionedBody2(LPDISPATCH ViewIn);
	LPDISPATCH ICreateFeatureFromBody4(LPDISPATCH Body, BOOL MakeRefSurface, long Options);
	long ICreateSurfaceFeatureFromBodyCount2(LPDISPATCH Body, long Options);
	LPUNKNOWN EnumRelatedBodies2();
	LPUNKNOWN EnumRelatedSectionedBodies2(LPDISPATCH ViewIn);
	LPUNKNOWN EnumBodies2(long BodyType);
	long GetNamedEntitiesCount();
	VARIANT GetNamedEntities();
	LPDISPATCH IGetNamedEntities(long Count);
	LPDISPATCH GetCorrespondingEntity(LPDISPATCH Entity);
	LPDISPATCH IGetCorrespondingEntity(LPDISPATCH PEntity);
	BOOL InsertBasePart(LPCTSTR FileName);
	void FeatureExtrusion3(BOOL Sd, BOOL Flip, BOOL Dir, long T1, long T2, double D1, double D2, BOOL Dchk1, BOOL Dchk2, BOOL Ddir1, BOOL Ddir2, double Dang1, double Dang2, BOOL OffsetReverse1, BOOL OffsetReverse2, BOOL TranslateSurface1, 
		BOOL TranslateSurface2, BOOL Merge);
	void FeatureExtrusionThin3(BOOL Sd, BOOL Flip, BOOL Dir, long T1, long T2, double D1, double D2, BOOL Dchk1, BOOL Dchk2, BOOL Ddir1, BOOL Ddir2, double Dang1, double Dang2, BOOL OffsetReverse1, BOOL OffsetReverse2, BOOL TranslateSurface1, 
		BOOL TranslateSurface2, BOOL Merge, double Thk1, double Thk2, double EndThk, long RevThinDir, long CapEnds, BOOL AddBends, double BendRad);
	BOOL InsertMirrorFeature(BOOL GeometryPattern);
	BOOL InsertMirrorAll();
	void FeatureRevolve2(double Angle, BOOL ReverseDir, double Angle2, long RevType, BOOL Merge);
	void FeatureRevolveThin2(double Angle, BOOL ReverseDir, double Angle2, long RevType, double Thickness1, double Thickness2, long ReverseThinDir, BOOL Merge);
	BOOL InsertCombineFeature(long OperationType, LPDISPATCH MainBody, const VARIANT& ToolVar);
	BOOL IInsertCombineFeature(long OperationType, LPDISPATCH MainBody, long ToolsCount, LPDISPATCH* ToolsArr);
	LPUNKNOWN EnumBodies3(long BodyType, BOOL BVisibleOnly);
	VARIANT GetBodies2(long BodyType, BOOL BVisibleOnly);
	void SetLineStyle(LPCTSTR StyleName);
	void SetLineWidth(long Width);
	void SetLineColor(long Color);
	LPDISPATCH InsertPart(LPCTSTR FileName, BOOL ImportPlane, BOOL ImportAxis, BOOL ImportCThread);
	void SaveToFile();
	CString GetMaterialPropertyName(BSTR* Database);
	void SetMaterialPropertyName(LPCTSTR Database, LPCTSTR Name);
	BOOL SaveToFile2(LPCTSTR Name, long Options, long* Errors, long* Warnings);
	CString GetMaterialPropertyName2(LPCTSTR ConfigName, BSTR* Database);
	void SetMaterialPropertyName2(LPCTSTR ConfigName, LPCTSTR Database, LPCTSTR Name);
	LPDISPATCH GetCorresponding(LPDISPATCH InputObject);
};
/////////////////////////////////////////////////////////////////////////////
// ITessellation wrapper class

class ITessellation : public COleDispatchDriver
{
public:
	ITessellation() {}		// Calls COleDispatchDriver default constructor
	ITessellation(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ITessellation(const ITessellation& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	double GetMaxFacetWidth();
	void SetMaxFacetWidth(double newValue);
	double GetCurveChordTolerance();
	void SetCurveChordTolerance(double newValue);
	double GetCurveChordAngleTolerance();
	void SetCurveChordAngleTolerance(double newValue);
	double GetSurfacePlaneTolerance();
	void SetSurfacePlaneTolerance(double newValue);
	double GetSurfacePlaneAngleTolerance();
	void SetSurfacePlaneAngleTolerance(double newValue);
	BOOL GetNeedVertexNormal();
	void SetNeedVertexNormal(BOOL bNewValue);
	BOOL GetNeedVertexParams();
	void SetNeedVertexParams(BOOL bNewValue);
	BOOL GetNeedFaceFacetMap();
	void SetNeedFaceFacetMap(BOOL bNewValue);
	BOOL GetNeedEdgeFinMap();
	void SetNeedEdgeFinMap(BOOL bNewValue);
	BOOL GetNeedErrorList();
	void SetNeedErrorList(BOOL bNewValue);
	BOOL Tessellate();
	long GetFacetCount();
	long GetFinCount();
	long GetVertexCount();
	VARIANT GetFacetFins(long FacetId);
	long IGetFacetFinsCount(long FacetId);
	long IGetFacetFins(long FacetId);
	long GetFinCoFin(long FinId);
	VARIANT GetFinVertices(long FinId);
	long IGetFinVertices(long FinId);
	VARIANT GetVertexPoint(long VertexId);
	double IGetVertexPoint(long VertexId);
	VARIANT GetVertexNormal(long VertexId);
	double IGetVertexNormal(long VertexId);
	VARIANT GetVertexParams(long VertexId);
	double IGetVertexParams(long VertexId);
	VARIANT GetFaceFacets(LPDISPATCH Facedisp);
	long IGetFaceFacetsCount(LPDISPATCH FaceObj);
	long IGetFaceFacets(LPDISPATCH FaceObj);
	LPDISPATCH GetFacetFace(long FacetId);
	LPDISPATCH IGetFacetFace(long FacetId);
	VARIANT GetEdgeFins(LPDISPATCH EdgeDisp);
	long IGetEdgeFinsCount(LPDISPATCH EdgeObj);
	long IGetEdgeFins(LPDISPATCH EdgeObj);
	LPDISPATCH GetFinEdge(long FinId);
	LPDISPATCH IGetFinEdge(long FinId);
	void GetErrorList(VARIANT* FaceErrArray, VARIANT* FacetErrArray, VARIANT* VertexPointErrArray, VARIANT* VertexNormalErrArray, VARIANT* VertexParamsErrArray);
	void IGetErrorListCount(long* FaceErrArrayCount, long* FacetErrArrayCount, long* VertexPointErrArrayCount, long* VertexNormalErrArrayCount, long* VertexParamsErrArrayCount);
	void IGetErrorList(LPDISPATCH* FaceErrArray, long* FacetErrArray, long* VertexPointErrArray, long* VertexNormalErrArray, long* VertexParamsErrArray);
	long IGetFaceFacetsCount2(LPDISPATCH FaceObj);
	long IGetFaceFacets2(LPDISPATCH FaceObj);
	LPDISPATCH IGetFacetFace2(long FacetId);
	void IGetErrorList2(LPDISPATCH* FaceErrArray, long* FacetErrArray, long* VertexPointErrArray, long* VertexNormalErrArray, long* VertexParamsErrArray);
	double GetMinFacetWidth();
	void SetMinFacetWidth(double newValue);
	long GetMatchType();
	void SetMatchType(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// IDiagnoseResult wrapper class

class IDiagnoseResult : public COleDispatchDriver
{
public:
	IDiagnoseResult() {}		// Calls COleDispatchDriver default constructor
	IDiagnoseResult(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IDiagnoseResult(const IDiagnoseResult& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetGapsCount();
	long GetCoEdgesCountAtGap(long Index);
	LPDISPATCH IGetCoEdgesAtGap(long Index, long CoEdgeCount);
	VARIANT GetCoEdgesAtGap(long Index);
};
/////////////////////////////////////////////////////////////////////////////
// IMidSurface wrapper class

class IMidSurface : public COleDispatchDriver
{
public:
	IMidSurface() {}		// Calls COleDispatchDriver default constructor
	IMidSurface(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IMidSurface(const IMidSurface& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetFacePairCount();
	LPDISPATCH GetFirstFacePair(double* Thickness, LPDISPATCH* PartnerFaceDisp);
	LPDISPATCH IGetFirstFacePair(double* Thickness, LPDISPATCH* PartnerFaceDisp);
	LPDISPATCH GetNextFacePair(double* Thickness, LPDISPATCH* PartnerFaceDisp);
	LPDISPATCH IGetNextFacePair(double* Thickness, LPDISPATCH* PartnerFaceDisp);
	LPDISPATCH GetFirstNeutralSheet();
	LPDISPATCH IGetFirstNeutralSheet();
	LPDISPATCH GetNextNeutralSheet();
	LPDISPATCH IGetNextNeutralSheet();
	long GetNeutralSheetCount();
	long GetFaceCount();
	LPDISPATCH GetFirstFace(LPDISPATCH* FromFace1Disp, LPDISPATCH* FromFace2Disp, double* Thickness);
	LPDISPATCH IGetFirstFace(LPDISPATCH* FromFace1Disp, LPDISPATCH* FromFace2Disp, double* Thickness);
	LPDISPATCH GetNextFace(LPDISPATCH* FromFace1Disp, LPDISPATCH* FromFace2Disp, double* Thickness);
	LPDISPATCH IGetNextFace(LPDISPATCH* FromFace1Disp, LPDISPATCH* FromFace2Disp, double* Thickness);
	LPDISPATCH EdgeGetFace(LPDISPATCH EdgeInDisp);
	LPDISPATCH IEdgeGetFace(LPDISPATCH EdgeInDisp);
	// method 'IGetFirstFaceArray' not emitted because of invalid return type or parameter type
	// method 'IGetNextFaceArray' not emitted because of invalid return type or parameter type
	VARIANT GetFirstFaceArray(double* Thickness);
	VARIANT GetNextFaceArray(double* Thickness);
};
/////////////////////////////////////////////////////////////////////////////
// IFrame wrapper class

class IFrame : public COleDispatchDriver
{
public:
	IFrame() {}		// Calls COleDispatchDriver default constructor
	IFrame(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IFrame(const IFrame& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL AddMenuItem(LPCTSTR Menu, LPCTSTR Item, long Position, LPCTSTR CallbackFcnAndModule);
	BOOL AddMenu(LPCTSTR Menu, long Position);
	long GetMenuState(LPCTSTR MenuItemString);
	void RenameMenu(LPCTSTR MenuItemString, LPCTSTR NewName);
	void RemoveMenu(LPCTSTR MenuItemString);
	BOOL AddMenuPopupItem(long DocType, long SelectType, LPCTSTR Item, LPCTSTR CallbackFcnAndModule, LPCTSTR CustomNames, long Unused);
	LPDISPATCH GetStatusBarPane();
	void SetStatusBarText(LPCTSTR MessageString);
	long GetHWnd();
	long GetSubMenuCount(long DocType, LPCTSTR FullMenuName);
	VARIANT GetSubMenus(long DocType, LPCTSTR FullMenuName);
	CString IGetSubMenus(long DocType, LPCTSTR FullMenuName, long NumSubMenus);
	BOOL AddMenuItem2(LPCTSTR Menu, LPCTSTR Item, long Position, LPCTSTR CallbackFcnAndModule, LPCTSTR BitmapFileName);
};
/////////////////////////////////////////////////////////////////////////////
// IStatusBarPane wrapper class

class IStatusBarPane : public COleDispatchDriver
{
public:
	IStatusBarPane() {}		// Calls COleDispatchDriver default constructor
	IStatusBarPane(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IStatusBarPane(const IStatusBarPane& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL GetVisible();
	void SetVisible(BOOL bNewValue);
	CString GetText();
	void SetText(LPCTSTR lpszNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// IAssemblyDoc wrapper class

class IAssemblyDoc : public COleDispatchDriver
{
public:
	IAssemblyDoc() {}		// Calls COleDispatchDriver default constructor
	IAssemblyDoc(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IAssemblyDoc(const IAssemblyDoc& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL AddComponent(LPCTSTR CompName, double X, double Y, double Z);
	void FeatureExtrusion();
	void EditRebuild();
	void ToolsCheckInterference();
	LPDISPATCH GetFirstMember();
	LPDISPATCH GetSelectedMember();
	LPDISPATCH IGetFirstMember();
	LPDISPATCH IGetSelectedMember();
	void ViewCollapseAssembly();
	void ViewExplodeAssembly();
	void TranslateComponent();
	void InsertNewPart();
	void RotateComponent();
	void FileDeriveComponentPart();
	void InsertCavity();
	void HideComponent();
	void ShowComponent();
	void FixComponent();
	void UnfixComponent();
	void EditAssembly();
	void EditPart();
	void OpenCompFile();
	void UpdateFeatureScope();
	void AddMate(long MateType, long Align, BOOL Flip, double Dist, double Angle);
	void CompConfigProperties(BOOL M_suppressed, BOOL M_show_component, BOOL M_fdetail);
	BOOL AddToFeatureScope(LPCTSTR CompName);
	BOOL RemoveFromFeatureScope(LPCTSTR CompName);
	void EditExplodeParameters();
	void RotateComponentAxis();
	void ViewFeatureManagerByFeatures();
	void ComponentReload();
	void ViewFeatureManagerByDependencies();
	void AssemblyPartToggle();
	LPDISPATCH FeatureByName(LPCTSTR Name);
	LPDISPATCH IFeatureByName(LPCTSTR Name);
	void InsertJoin();
	void UpdateBox();
	void InsertWeld(LPCTSTR Type, LPCTSTR Shape, double TopDelta, double BottomDelta, double Radius, LPCTSTR Part);
	void ForceRebuild();
	LPDISPATCH GetEditTarget();
	LPDISPATCH IGetEditTarget();
	void InsertCavity2(double ScaleFactor, long ScaleType);
	BOOL AutoExplode();
	BOOL ShowExploded(BOOL ShowIt);
	LPDISPATCH AddComponent2(LPCTSTR CompName, double X, double Y, double Z);
	LPDISPATCH IAddComponent2(LPCTSTR CompName, double X, double Y, double Z);
	void EditMate(long MateType, long Align, BOOL Flip, double Dist, double Angle);
	BOOL InsertDerivedPattern();
	long ResolveAllLightWeightComponents(BOOL WarnUser);
	long GetLightWeightComponentCount();
	void InsertCavity3(double ScaleFactor, long ScaleType, long KeepPieceIndex);
	long ComponentReload2(LPDISPATCH Component, BOOL ReadOnly, long Options);
	long IComponentReload2(LPDISPATCH Component, BOOL ReadOnly, long Options);
	BOOL CompConfigProperties2(long Suppression, BOOL Visibility, BOOL FeatureDetails);
	long AddPipePenetration();
	BOOL AddPipingFitting(LPCTSTR Pathname, LPCTSTR ConfigName, short AlignmentIndex);
	BOOL IsComponentTreeValid();
	void ForceRebuild2(BOOL TopOnly);
	BOOL SetDroppedFileConfigName(LPCTSTR ConfigName);
	VARIANT AddComponents(const VARIANT& Names, const VARIANT& Transforms);
	LPDISPATCH IAddComponents(long* Count, BSTR* Names, double* Transforms);
	long EditPart2(BOOL Silent, BOOL AllowReadOnly, long* Information);
	void InsertCavity4(double ScaleFactor_x, double ScaleFactor_y, double ScaleFactor_z, BOOL IsUniform, long ScaleType, long KeepPieceIndex);
	void ToolsCheckInterference2(long NumComponents, const VARIANT& LpComponents, BOOL CoincidentInterference, VARIANT* PComp, VARIANT* PFace);
	void IToolsCheckInterference2(long NumComponents, LPDISPATCH* LpComponents, BOOL CoincidentInterference, VARIANT* PComp, VARIANT* PFace);
	LPDISPATCH GetDroppedAtEntity();
	BOOL CompConfigProperties3(long Suppression, long Solving, BOOL Visibility, BOOL FeatureDetails);
	LPDISPATCH IGetEditTarget2();
	LPDISPATCH IAddComponent3(LPCTSTR CompName, double X, double Y, double Z);
	long IComponentReload3(LPDISPATCH Component, BOOL ReadOnly, long Options);
	LPDISPATCH IAddComponents2(long* Count, BSTR* Names, double* Transforms);
	void IToolsCheckInterference3(long NumComponents, LPDISPATCH* LpComponents, BOOL CoincidentInterference, VARIANT* PComp, VARIANT* PFace);
	BOOL SetDroppedFileName(LPCTSTR FileName);
	LPDISPATCH GetDragOperator();
	LPDISPATCH IGetDragOperator();
	void ViewFeatureManagerFeatureDetail(BOOL Detail);
	BOOL InsertJoin2(BOOL HideParts, BOOL ForceContact);
	BOOL DissolveSubAssembly();
	BOOL GetEnablePresentation();
	void SetEnablePresentation(BOOL bNewValue);
	BOOL SetComponentState(long SuppressionState, const VARIANT& CompArr, long ConfigOption, LPCTSTR WhichConfig, BOOL SaveClosedDocs);
	BOOL ISetComponentState(long SuppressionState, long NumComps, LPDISPATCH* CompArr, long ConfigOption, LPCTSTR WhichConfig, BOOL SaveClosedDocs);
	BOOL ReplaceComponents(LPCTSTR FileName, LPCTSTR ConfigName, BOOL ReplaceAllInstance, BOOL ReAttachMates);
	VARIANT GetVisibleComponentsInView();
	long GetVisibleComponentsInViewCount();
	LPDISPATCH IGetVisibleComponentsInView(long Count);
	void MakeLightWeight();
	VARIANT GetBox(long Options);
	double IGetBox(long Options);
	long GetFeatureScopeCount(LPDISPATCH FeatureIn);
	VARIANT GetFeatureScope(LPDISPATCH FeatureIn);
	LPDISPATCH IGetFeatureScope(LPDISPATCH FeatureIn, long NumComponents);
	LPDISPATCH AddComponent4(LPCTSTR CompName, LPCTSTR ConfigName, double X, double Y, double Z);
	long InsertNewPart2(LPCTSTR FilePathIn, LPDISPATCH Face_or_Plane_to_select);
	LPDISPATCH AddMate2(long MateTypeFromEnum, long AlignFromEnum, BOOL Flip, double Distance, double DistanceAbsUpperLimit, double DistanceAbsLowerLimit, double GearRatioNumerator, double GearRatioDenominator, double Angle, 
		double AngleAbsUpperLimit, double AngleAbsLowerLimit, long* ErrorStatus);
	void EditMate2(long MateTypeFromEnum, long AlignFromEnum, BOOL Flip, double Distance, double DistanceAbsUpperLimit, double DistanceAbsLowerLimit, double GearRatioNumerator, double GearRatioDenominator, double Angle, double AngleAbsUpperLimit, 
		double AngleAbsLowerLimit, long* ErrorStatus);
	BOOL DissolveComponentPattern();
	void GetPhysicalSimulationComponents(double InDuration, long* OutCount, VARIANT* OutComponents, VARIANT* OutTransforms, VARIANT* OutStepStartTimes, VARIANT* OutStepDurations, double* OutTotalPhysSimDuration);
	void SetComponentVisibility(BOOL Visibility, long Config_opt, const VARIANT& Config_names);
	void ISetComponentVisibility(BOOL Visibility, long Config_opt, long Config_count, BSTR* Config_names);
	void ForceUpdateElectricalData(long Stream);
	BOOL CompConfigProperties4(long Suppression, long Solving, BOOL Visibility, BOOL UseNamedRefConfig, LPCTSTR RefConfigName, BOOL ExcludeFromBOM);
	LPDISPATCH AddComponentConfiguration(LPCTSTR Name, LPCTSTR Comment, LPCTSTR AlternateName, long Options);
	BOOL GetEnableAssemblyRebuild();
	void SetEnableAssemblyRebuild(BOOL bNewValue);
	LPDISPATCH AddMate3(long MateTypeFromEnum, long AlignFromEnum, BOOL Flip, double Distance, double DistanceAbsUpperLimit, double DistanceAbsLowerLimit, double GearRatioNumerator, double GearRatioDenominator, double Angle, 
		double AngleAbsUpperLimit, double AngleAbsLowerLimit, BOOL ForPositioningOnly, long* ErrorStatus);
	LPDISPATCH GetRouteApp();
	LPDISPATCH GetSimulation();
	LPDISPATCH GetAdvancedSelection();
};
/////////////////////////////////////////////////////////////////////////////
// IMember wrapper class

class IMember : public COleDispatchDriver
{
public:
	IMember() {}		// Calls COleDispatchDriver default constructor
	IMember(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IMember(const IMember& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
};
/////////////////////////////////////////////////////////////////////////////
// IDragOperator wrapper class

class IDragOperator : public COleDispatchDriver
{
public:
	IDragOperator() {}		// Calls COleDispatchDriver default constructor
	IDragOperator(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IDragOperator(const IDragOperator& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL GetIsRelaxationEval();
	void SetIsRelaxationEval(BOOL bNewValue);
	short GetDragMode();
	void SetDragMode(short nNewValue);
	BOOL GetIsDragSpecific();
	void SetIsDragSpecific(BOOL bNewValue);
	short GetTransformType();
	void SetTransformType(short nNewValue);
	BOOL GetIsDragByRay();
	void SetIsDragByRay(BOOL bNewValue);
	BOOL GetCollisionDetectionEnabled();
	void SetCollisionDetectionEnabled(BOOL bNewValue);
	BOOL GetHighlightClashes();
	void SetHighlightClashes(BOOL bNewValue);
	BOOL GetHearClashes();
	void SetHearClashes(BOOL bNewValue);
	BOOL GetApplyToThisConfiguration();
	void SetApplyToThisConfiguration(BOOL bNewValue);
	BOOL GetIgnoreComplexSurfaces();
	void SetIgnoreComplexSurfaces(BOOL bNewValue);
	BOOL GetSmartMating();
	void SetSmartMating(BOOL bNewValue);
	BOOL GetDynamicClearanceEnabled();
	void SetDynamicClearanceEnabled(BOOL bNewValue);
	BOOL AddComponent(LPDISPATCH PDisp, BOOL AppendFlag);
	BOOL IAddComponent(LPDISPATCH PComp, BOOL AppendFlag);
	BOOL BeginDrag();
	BOOL EndDrag();
	BOOL Drag(LPDISPATCH PXform);
	BOOL IDrag(LPDISPATCH PXform);
	long AddDynamicClearance(LPDISPATCH Comp1, LPDISPATCH Comp2, double Value, BOOL AppendFlag, BOOL ShowDim);
	long IAddDynamicClearance(LPDISPATCH Comp1, LPDISPATCH Comp2, double Value, BOOL AppendFlag, BOOL ShowDim);
	double GetClearance(long NIndex);
	BOOL CollisionDetection(const VARIANT& EntityArray, BOOL PartOnly, BOOL StopAt);
	BOOL ICollisionDetection(long Count, LPDISPATCH* ComponentArray, BOOL PartOnly, BOOL StopAt);
	BOOL GetDragPoint(VARIANT* Point);
	BOOL SetDragPoint(const VARIANT& Point);
	BOOL IGetDragPoint(double* Point);
	BOOL ISetDragPoint(double* Point);
	BOOL DragAsUI(LPDISPATCH PXform);
	BOOL GetDragCorrected();
	BOOL GetUseAbsoluteTransform();
	void SetUseAbsoluteTransform(BOOL bNewValue);
	BOOL GetGraphicsRedrawEnabled();
	void SetGraphicsRedrawEnabled(BOOL bNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// IMate2 wrapper class

class IMate2 : public COleDispatchDriver
{
public:
	IMate2() {}		// Calls COleDispatchDriver default constructor
	IMate2(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IMate2(const IMate2& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetMateEntityCount();
	LPDISPATCH MateEntity(long Index);
	long GetType();
	long GetAlignment();
	BOOL GetCanBeFlipped();
	LPDISPATCH GetDisplayDimension();
	double GetMaximumVariation();
	double GetMinimumVariation();
	BOOL GetFlipped();
	void SetFlipped(BOOL bNewValue);
	LPDISPATCH GetDisplayDimension2(long Index);
};
/////////////////////////////////////////////////////////////////////////////
// IMateEntity2 wrapper class

class IMateEntity2 : public COleDispatchDriver
{
public:
	IMateEntity2() {}		// Calls COleDispatchDriver default constructor
	IMateEntity2(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IMateEntity2(const IMateEntity2& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetEntityParamsSize();
	VARIANT GetEntityParams();
	double IGetEntityParams(long NParamsSize);
	LPDISPATCH GetReference();
	long GetReferenceType();
	LPDISPATCH GetReferenceComponent();
};
/////////////////////////////////////////////////////////////////////////////
// ISimulation wrapper class

class ISimulation : public COleDispatchDriver
{
public:
	ISimulation() {}		// Calls COleDispatchDriver default constructor
	ISimulation(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISimulation(const ISimulation& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetFeature();
	BOOL GetStatus();
	double GetDuration();
	long GetFrames();
	long GetTimestamp();
	BOOL ResetComponents();
};
/////////////////////////////////////////////////////////////////////////////
// IAdvancedSelectionCriteria wrapper class

class IAdvancedSelectionCriteria : public COleDispatchDriver
{
public:
	IAdvancedSelectionCriteria() {}		// Calls COleDispatchDriver default constructor
	IAdvancedSelectionCriteria(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IAdvancedSelectionCriteria(const IAdvancedSelectionCriteria& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long AddItem(LPCTSTR Property_, long Condition, LPCTSTR Value, BOOL IsAnd);
	BOOL DeleteItem(long Index);
	BOOL SaveCriteria(LPCTSTR CriteriaFileName);
	BOOL LoadCriteria(LPCTSTR CriteriaFileName);
	long GetItem(long Index, BSTR* Property_, long* Condition, BSTR* Value, BOOL* IsAnd);
	long GetItemCount();
	BOOL Select();
};
/////////////////////////////////////////////////////////////////////////////
// IDrawingDoc wrapper class

class IDrawingDoc : public COleDispatchDriver
{
public:
	IDrawingDoc() {}		// Calls COleDispatchDriver default constructor
	IDrawingDoc(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IDrawingDoc(const IDrawingDoc& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	void NewNote(LPCTSTR Text, double Height);
	void NewSheet(LPCTSTR Name, short PaperSize, short TemplateIn, double Scale1, double Scale2);
	void SetupSheet(LPCTSTR Name, short PaperSize, short TemplateIn, double Scale1, double Scale2);
	LPDISPATCH NewGtol();
	LPDISPATCH INewGtol();
	LPDISPATCH EditSelectedGtol();
	LPDISPATCH IEditSelectedGtol();
	BOOL CreateLinearDim(const VARIANT& P0, const VARIANT& P1, const VARIANT& P2, const VARIANT& P3, const VARIANT& P4, double Angle, double ArrowSize, LPCTSTR Text, double TextHeight, double WitnessGap, double WitnessOvershoot);
	BOOL CreateAngDim(const VARIANT& VP0, const VARIANT& VP1, const VARIANT& VP2, const VARIANT& VP3, const VARIANT& VP4, const VARIANT& VP5, const VARIANT& VP6, double ArrowSize, LPCTSTR Text, double TextHeight, double WitnessGap, 
		double WitnessOvershoot);
	BOOL CreateDiamDim(double DimVal, const VARIANT& VP0, const VARIANT& VP1, const VARIANT& VP2, const VARIANT& VP3, double ArrowSize, LPCTSTR Text, double TextHeight, double WitnessGap, double WitnessOvershoot);
	CString CreateViewport(double LowerLeftX, double LowerLeftY, double UpperRightX, double UpperRightY, short SketchSize);
	BOOL ActivateView(LPCTSTR ViewName);
	BOOL Create1stAngleViews(LPCTSTR ModelName);
	BOOL Create3rdAngleViews(LPCTSTR ModelName);
	BOOL CreateDrawViewFromModelView(LPCTSTR ModelName, LPCTSTR ViewName, double LocX, double LocY, double LocZ);
	BOOL CreateUnfoldedViewAt(double X, double Y, double Z);
	BOOL CreateText(LPCTSTR TextString, double TextX, double TextY, double TextZ, double TextHeight, double TextAngle);
	void EditRebuild();
	void ViewFullPage();
	void CreateSectionView();
	void SheetNext();
	void Dimensions();
	void InsertGroup();
	void SheetPrevious();
	void AlignVert();
	void AlignHorz();
	void InsertRefDim();
	void MakeSectionLine();
	void InsertBaseDim();
	void EditSketch();
	void CreateDetailView();
	void CreateAuxiliaryView();
	void StartDrawing();
	void EndDrawing();
	LPDISPATCH GetFirstView();
	LPDISPATCH IGetFirstView();
	VARIANT GetInsertionPoint();
	void AttachDimensions();
	void InsertModelDimensions(long Option);
	void EditTemplate();
	void InsertOrdinate();
	void UnsuppressView();
	void HideShowDrawingViews();
	void SuppressView();
	void AlignOrdinate();
	void SketchDim();
	void CenterMark();
	void EditSheet();
	void InsertHorizontalOrdinate();
	void EditOrdinate();
	void InsertVerticalOrdinate();
	void ChangeOrdDir();
	long GetLineFontCount();
	CString GetLineFontName(long Index);
	VARIANT GetLineFontInfo(long Index);
	void ICreateLinearDim(double* P0, double* P1, double* P2, double* P3, double* P4, double Angle, double ArrowSize, LPCTSTR Text, double TextHeight, double WitnessGap, double WitnessOvershoot);
	void ICreateAngDim(double* P0, double* P1, double* P2, double* P3, double* P4, double* P5, double* P6, double ArrowSize, LPCTSTR Text, double TextHeight, double WitnessGap, double WitnessOvershoot);
	void ICreateDiamDim(double DimValue, double* P0, double* P1, double* P2, double* P3, double ArrowSize, LPCTSTR Text, double TextHeight, double WitnessGap, double WitnessOvershoot);
	double IGetInsertionPoint();
	LPDISPATCH CreateCompoundNote(double Height, double X, double Y, double Z);
	LPDISPATCH ICreateCompoundNote(double Height, double X, double Y, double Z);
	BOOL CreateOrdinateDim(const VARIANT& P0, const VARIANT& P1, const VARIANT& P2, const VARIANT& P3, const VARIANT& P4, double Angle, double ArrowSize, LPCTSTR Text, double TextHeight, double WitnessGap, double WitnessOvershoot);
	void ICreateOrdinateDim(double* P0, double* P1, double* P2, double* P3, double* P4, double Angle, double ArrowSize, LPCTSTR Text, double TextHeight, double WitnessGap, double WitnessOvershoot);
	void InsertNewNote(LPCTSTR Text, BOOL NoLeader, BOOL BalloonNote, BOOL BentLeader, short ArrowStyle, short LeaderSide);
	BOOL AddCenterMark(double CmSize, BOOL CmShowLines);
	void InsertWeldSymbol(LPCTSTR Dim1, LPCTSTR Symbol, LPCTSTR Dim2, BOOL Symmetric, BOOL FieldWeld, BOOL ShowOtherSide, BOOL DashOnTop, BOOL Peripheral, BOOL HasProcess, LPCTSTR ProcessValue);
	BOOL InsertSurfaceFinishSymbol(long SymType, long LeaderType, double LocX, double LocY, double LocZ, long LaySymbol, long ArrowType, LPCTSTR MachAllowance, LPCTSTR OtherVals, LPCTSTR ProdMethod, LPCTSTR SampleLen, LPCTSTR MaxRoughness, 
		LPCTSTR MinRoughness, LPCTSTR RoughnessSpacing);
	BOOL ModifySurfaceFinishSymbol(long SymType, long LeaderType, double LocX, double LocY, double LocZ, long LaySymbol, long ArrowType, LPCTSTR MachAllowance, LPCTSTR OtherVals, LPCTSTR ProdMethod, LPCTSTR SampleLen, LPCTSTR MaxRoughness, 
		LPCTSTR MinRoughness, LPCTSTR RoughnessSpacing);
	LPDISPATCH GetCurrentSheet();
	LPDISPATCH IGetCurrentSheet();
	void CreateConstructionGeometry();
	void ViewDisplayHidden();
	void InsertBreakHorizontal();
	void ViewDisplayWireframe();
	void BreakLineZigZagCut();
	void BreakView();
	void ViewDisplayHiddengreyed();
	void ViewTangentEdges();
	void BreakLineSplineCut();
	void InsertBreakVertical();
	void UnBreakView();
	void BreakLineStraightCut();
	void InsertDatumTag();
	void ToggleGrid();
	void FlipSectionLine();
	LPDISPATCH FeatureByName(LPCTSTR Name);
	LPDISPATCH IFeatureByName(LPCTSTR Name);
	BOOL NewSheet2(LPCTSTR Name, long PaperSize, long TemplateIn, double Scale1, double Scale2, BOOL FirstAngle, LPCTSTR TemplateName, double Width, double Height);
	BOOL CreateLinearDim2(const VARIANT& P0, const VARIANT& P1, const VARIANT& P2, const VARIANT& P3, const VARIANT& P4, double Val, long PrimPrec, LPCTSTR Text, const VARIANT& TextPoint, double Angle, double TextHeight, LPCTSTR Prefix, 
		LPCTSTR Suffix, LPCTSTR Callout1, LPCTSTR Callout2, long TolType, LPCTSTR TolMin, LPCTSTR TolMax, long TolPrec, double ArrowSize, long ArrowStyle, long ArrowDir, double WitnessGap, double WitnessOvershoot, BOOL DualDisplay, long DualPrec);
	void ICreateLinearDim2(double* P0, double* P1, double* P2, double* P3, double* P4, double Val, long PrimPrec, LPCTSTR Text, double* TextPoint, double Angle, double TextHeight, LPCTSTR Prefix, LPCTSTR Suffix, LPCTSTR Callout1, 
		LPCTSTR Callout2, long TolType, LPCTSTR TolMin, LPCTSTR TolMax, long TolPrec, double ArrowSize, long ArrowStyle, long ArrowDir, double WitnessGap, double WitnessOvershoot, BOOL DualDisplay, long DualPrecision);
	BOOL CreateAngDim2(const VARIANT& VP0, const VARIANT& VP1, const VARIANT& VP2, const VARIANT& VP3, const VARIANT& VP4, const VARIANT& VP5, const VARIANT& VP6, double ArrowSize, LPCTSTR Text, double TextHeight, double WitnessGap, 
		double WitnessOvershoot, const VARIANT& VTextPoint);
	void ICreateAngDim2(double* P0, double* P1, double* P2, double* P3, double* P4, double* P5, double* P6, double ArrowSize, LPCTSTR Text, double TextHeight, double WitnessGap, double WitnessOvershoot, double* TextPoint);
	BOOL CreateDiamDim2(double DimVal, const VARIANT& VP0, const VARIANT& VP1, const VARIANT& VP2, const VARIANT& VP3, double ArrowSize, LPCTSTR Text, double TextHeight, double WitnessGap, double WitnessOvershoot, const VARIANT& VTextPoint);
	void ICreateDiamDim2(double DimValue, double* P0, double* P1, double* P2, double* P3, double ArrowSize, LPCTSTR Text, double TextHeight, double WitnessGap, double WitnessOvershoot, double* TextPoint);
	BOOL CreateOrdinateDim2(const VARIANT& P0, const VARIANT& P1, const VARIANT& P2, const VARIANT& P3, const VARIANT& P4, double Angle, double ArrowSize, LPCTSTR Text, double TextHeight, double WitnessGap, double WitnessOvershoot, 
		const VARIANT& P5);
	void ICreateOrdinateDim2(double* P0, double* P1, double* P2, double* P3, double* P4, double Angle, double ArrowSize, LPCTSTR Text, double TextHeight, double WitnessGap, double WitnessOvershoot, double* P5);
	void InsertNewNote2(LPCTSTR UpperText, LPCTSTR LowerText, BOOL NoLeader, BOOL BentLeader, short ArrowStyle, short LeaderSide, double Angle, short BalloonStyle, short BalloonFit, short UpperNoteContent, short LowerNoteContent);
	void DragModelDimension(LPCTSTR ViewName, short DropEffect, double X, double Y, double Z);
	CString CreateViewport2(double LowerLeftX, double LowerLeftY, double UpperRightX, double UpperRightY, short SketchSize, double Scale);
	void SetupSheet2(LPCTSTR Name, short PaperSize, short TemplateIn, double Scale1, double Scale2, long SkPointsFlag);
	void OnComponentProperties();
	long GetLineFontCount2();
	CString GetLineFontName2(long Index);
	VARIANT GetLineFontInfo2(long Index);
	void SetLineStyle(LPCTSTR StyleName);
	void SetLineWidth(long Width);
	void SetLineColor(long Color);
	void ShowEdge();
	void HideEdge();
	void AddHoleCallout();
	long GetPenCount();
	VARIANT GetPenInfo();
	long IGetPenInfo();
	long GetLineFontId(long Index);
	BOOL CreateAuxiliaryViewAt(double X, double Y, double Z, BOOL NotAligned);
	BOOL CreateDetailViewAt(double X, double Y, double Z);
	BOOL CreateSectionViewAt(double X, double Y, double Z, BOOL NotAligned, BOOL IsOffsetSection);
	BOOL CreateUnfoldedViewAt2(double X, double Y, double Z, BOOL NotAligned);
	BOOL SetupSheet3(LPCTSTR Name, long PaperSize, long TemplateIn, double Scale1, double Scale2, BOOL FirstAngle, LPCTSTR TemplateName, double Width, double Height);
	BOOL InsertModelAnnotations(long Option, BOOL AllTypes, long Types, BOOL AllViews);
	void InsertCustomSymbol(LPCTSTR SymbolPath);
	long GetSheetCount();
	VARIANT GetSheetNames();
	CString IGetSheetNames(long* Count);
	BOOL ActivateSheet(LPCTSTR Name);
	LPDISPATCH CreateText2(LPCTSTR TextString, double TextX, double TextY, double TextZ, double TextHeight, double TextAngle);
	LPDISPATCH ICreateText2(LPCTSTR TextString, double TextX, double TextY, double TextZ, double TextHeight, double TextAngle);
	BOOL NewSheet3(LPCTSTR Name, long PaperSize, long TemplateIn, double Scale1, double Scale2, BOOL FirstAngle, LPCTSTR TemplateName, double Width, double Height, LPCTSTR PropertyViewName);
	BOOL SetupSheet4(LPCTSTR Name, long PaperSize, long TemplateIn, double Scale1, double Scale2, BOOL FirstAngle, LPCTSTR TemplateName, double Width, double Height, LPCTSTR PropertyViewName);
	LPDISPATCH CreateLinearDim3(const VARIANT& P0, const VARIANT& P1, const VARIANT& P2, const VARIANT& P3, const VARIANT& P4, double Val, long PrimPrec, LPCTSTR Text, const VARIANT& TextPoint, double Angle, double TextHeight, LPCTSTR Prefix, 
		LPCTSTR Suffix, LPCTSTR Callout1, LPCTSTR Callout2, long TolType, LPCTSTR TolMin, LPCTSTR TolMax, long TolPrec, double ArrowSize, long ArrowStyle, long ArrowDir, double WitnessGap, double WitnessOvershoot, BOOL DualDisplay, long DualPrec);
	LPDISPATCH ICreateLinearDim3(double* P0, double* P1, double* P2, double* P3, double* P4, double Val, long PrimPrec, LPCTSTR Text, double* TextPoint, double Angle, double TextHeight, LPCTSTR Prefix, LPCTSTR Suffix, LPCTSTR Callout1, 
		LPCTSTR Callout2, long TolType, LPCTSTR TolMin, LPCTSTR TolMax, long TolPrec, double ArrowSize, long ArrowStyle, long ArrowDir, double WitnessGap, double WitnessOvershoot, BOOL DualDisplay, long DualPrecision);
	LPDISPATCH CreateAngDim3(const VARIANT& VP0, const VARIANT& VP1, const VARIANT& VP2, const VARIANT& VP3, const VARIANT& VP4, const VARIANT& VP5, const VARIANT& VP6, double ArrowSize, LPCTSTR Text, double TextHeight, double WitnessGap, 
		double WitnessOvershoot, const VARIANT& VTextPoint);
	LPDISPATCH ICreateAngDim3(double* P0, double* P1, double* P2, double* P3, double* P4, double* P5, double* P6, double ArrowSize, LPCTSTR Text, double TextHeight, double WitnessGap, double WitnessOvershoot, double* TextPoint);
	LPDISPATCH CreateDiamDim3(double DimVal, const VARIANT& VP0, const VARIANT& VP1, const VARIANT& VP2, const VARIANT& VP3, double ArrowSize, LPCTSTR Text, double TextHeight, double WitnessGap, double WitnessOvershoot, const VARIANT& VTextPoint);
	LPDISPATCH ICreateDiamDim3(double DimValue, double* P0, double* P1, double* P2, double* P3, double ArrowSize, LPCTSTR Text, double TextHeight, double WitnessGap, double WitnessOvershoot, double* TextPoint);
	LPDISPATCH CreateOrdinateDim3(const VARIANT& P0, const VARIANT& P1, const VARIANT& P2, const VARIANT& P3, const VARIANT& P4, double Angle, double ArrowSize, LPCTSTR Text, double TextHeight, double WitnessGap, double WitnessOvershoot, 
		const VARIANT& P5);
	LPDISPATCH ICreateOrdinateDim3(double* P0, double* P1, double* P2, double* P3, double* P4, double Angle, double ArrowSize, LPCTSTR Text, double TextHeight, double WitnessGap, double WitnessOvershoot, double* P5);
	void ForceRebuild();
	BOOL AddOrdinateDimension(long DimType, double LocX, double LocY, double LocZ);
	BOOL CreateLayer(LPCTSTR LayerName, LPCTSTR LayerDesc, long LayerColor, long LayerStyle, long LayerWidth, BOOL BOn);
	BOOL SetCurrentLayer(LPCTSTR LayerName);
	BOOL DrawingViewRotate(double NewAngle);
	BOOL CreateDetailViewAt2(double X, double Y, double Z);
	void RestoreRotation();
	BOOL GetEditSheet();
	void TranslateDrawing(double DeltaX, double DeltaY);
	BOOL Create1stAngleViews2(LPCTSTR ModelName);
	BOOL Create3rdAngleViews2(LPCTSTR ModelName);
	void HideShowDimensions();
	LPDISPATCH CreateLinearDim4(const VARIANT& P0, const VARIANT& P1, const VARIANT& P2, const VARIANT& P3, const VARIANT& P4, const VARIANT& TextPoint, double Val, double Angle, double TextHeight);
	LPDISPATCH ICreateLinearDim4(double* P0, double* P1, double* P2, double* P3, double* P4, double* TextPoint, double Val, double Angle, double TextHeight);
	LPDISPATCH CreateDiamDim4(const VARIANT& P0, const VARIANT& P1, const VARIANT& P2, const VARIANT& P3, const VARIANT& TextPoint, double Val, double TextHeight);
	LPDISPATCH ICreateDiamDim4(double* P0, double* P1, double* P2, double* P3, double* TextPoint, double Val, double TextHeight);
	LPDISPATCH CreateOrdinateDim4(const VARIANT& P0, const VARIANT& P1, const VARIANT& P2, const VARIANT& P3, const VARIANT& P4, const VARIANT& P5, double Val, double Angle, double TextHeight);
	LPDISPATCH ICreateOrdinateDim4(double* P0, double* P1, double* P2, double* P3, double* P4, double* P5, double Val, double Angle, double TextHeight);
	LPDISPATCH CreateAngDim4(const VARIANT& P0, const VARIANT& P1, const VARIANT& P2, const VARIANT& P3, const VARIANT& P4, const VARIANT& P5, const VARIANT& P6, const VARIANT& TextPoint, double TextHeight);
	LPDISPATCH ICreateAngDim4(double* P0, double* P1, double* P2, double* P3, double* P4, double* P5, double* P6, double* TextPoint, double TextHeight);
	LPDISPATCH CreateDetailViewAt3(double X, double Y, double Z, long Style, double Scale1, double Scale2, LPCTSTR LabelIn, long Showtype, BOOL FullOutline);
	LPDISPATCH ICreateDetailViewAt3(double X, double Y, double Z, long Style, double Scale1, double Scale2, LPCTSTR LabelIn, long Showtype, BOOL FullOutline);
	LPDISPATCH CreateSectionViewAt2(double X, double Y, double Z, BOOL NotAligned, BOOL IsOffsetSection, LPCTSTR Label, BOOL Chgdirection, BOOL Scwithmodel, BOOL Partial, BOOL Dispsurfcut);
	LPDISPATCH ICreateSectionViewAt2(double X, double Y, double Z, BOOL NotAligned, BOOL IsOffsetSection, LPCTSTR Label, BOOL Chgdirection, BOOL Scwithmodel, BOOL Partial, BOOL Dispsurfcut);
	LPDISPATCH CreateAuxiliaryViewAt2(double X, double Y, double Z, BOOL NotAligned, LPCTSTR Label, BOOL Showarrow, BOOL Flip);
	LPDISPATCH ICreateAuxiliaryViewAt2(double X, double Y, double Z, BOOL NotAligned, LPCTSTR Label, BOOL Showarrow, BOOL Flip);
	void MakeCustomSymbol();
	void ExplodeCustomSymbol();
	void SaveCustomSymbol(LPCTSTR FileNameIn);
	BOOL CreateBreakOutSection(double Depth);
	void InsertThreadCallout();
	BOOL CreateFlatPatternViewFromModelView(LPCTSTR ModelName, LPCTSTR ConfigName, double LocX, double LocY, double LocZ);
	BOOL ChangeRefConfigurationOfFlatPatternView(LPCTSTR ModelName, LPCTSTR ConfigName);
	LPDISPATCH AddHoleCallout2(double X, double Y, double Z);
	LPDISPATCH IAddHoleCallout2(double X, double Y, double Z);
	void EditCenterMarkProperties(double Angle, double Size, BOOL Lines, BOOL DocSettings);
	LPDISPATCH InsertDowelSymbol();
	LPDISPATCH IInsertDowelSymbol();
	void InsertMultiJogLeader();
	BOOL GetHiddenViewsVisible();
	void SetHiddenViewsVisible(BOOL bNewValue);
	LPDISPATCH AddChamferDim(double X, double Y, double Z);
	LPDISPATCH IAddChamferDim(double X, double Y, double Z);
	LPDISPATCH MakeCustomSymbol2();
	LPDISPATCH IMakeCustomSymbol2();
	LPDISPATCH InsertCustomSymbol2(LPCTSTR FileName);
	LPDISPATCH IInsertCustomSymbol2(LPCTSTR FileName);
	LPDISPATCH CreateCustomSymbol(const VARIANT& Segments, const VARIANT& Points, const VARIANT& Notes);
	LPDISPATCH ICreateCustomSymbol(long SegmentCount, LPDISPATCH* Segments, long PointCount, LPDISPATCH* Points, long NoteCount, LPDISPATCH* Notes);
	void ViewDisplayShaded();
	void ChangeComponentLayer(LPCTSTR LayerName, BOOL AllViews);
	BOOL GetAutomaticViewUpdate();
	void SetAutomaticViewUpdate(BOOL bNewValue);
	LPDISPATCH GetActiveDrawingView();
	LPDISPATCH GetIActiveDrawingView();
	LPDISPATCH InsertCenterMark(BOOL UseDoc, double Size, BOOL ShowLines, double Angle);
	BOOL CreateFlatPatternViewFromModelView2(LPCTSTR ModelName, LPCTSTR ConfigName, double LocX, double LocY, double LocZ, BOOL HideBendLines);
	void ViewHlrQuality();
	void ViewModelEdges();
	long GetBlockDefinitionCount();
	VARIANT GetBlockDefinitions();
	LPDISPATCH IGetBlockDefinitions(long Count);
	LPDISPATCH GetBlockDefinition(LPCTSTR Name);
	LPDISPATCH MakeBlockDefinition(LPCTSTR Name, LPCTSTR XRefFileName, BOOL Instance);
	LPDISPATCH CreateBlockDefinition(LPCTSTR Name, LPCTSTR XRefFileName, BOOL Instance, const VARIANT& Segments, const VARIANT& Points, const VARIANT& Notes, const VARIANT& Dimensions, const VARIANT& Blocks);
	LPDISPATCH ICreateBlockDefinition(LPCTSTR Name, LPCTSTR XRefFileName, BOOL Instance, long SegmentCount, LPDISPATCH* Segments, long PointCount, LPDISPATCH* Points, long NoteCount, LPDISPATCH* Notes, long DimensionCount, LPDISPATCH* Dimensions, 
		long BlockCount, LPDISPATCH* Blocks);
	LPDISPATCH InsertBlock(LPCTSTR FileName, double X, double Y, double Angle, double Scale);
	BOOL SaveBlock(LPCTSTR FileName);
	BOOL ExplodeBlockInstance();
	LPDISPATCH InsertCenterMark2(long Style, BOOL Propagate);
	BOOL InsertCenterLine();
	long AddOrdinateDimension2(long DimType, double LocX, double LocY, double LocZ);
	LPDISPATCH InsertTableAnnotation(double X, double Y, long AnchorType, long Rows, long Columns);
	BOOL InsertModelInPredefinedView(LPCTSTR ModelName);
	LPDISPATCH InsertRevisionSymbol(double X, double Y);
	VARIANT AutoBalloon(long Layout);
	LPDISPATCH CreateSectionViewAt3(double X, double Y, double Z, BOOL NotAligned, BOOL IsOffsetSection, LPCTSTR Label, BOOL Chgdirection, BOOL Scwithmodel, BOOL Partial, BOOL Dispsurfcut, const VARIANT& ExcludedComponents);
	LPDISPATCH ICreateSectionViewAt3(double X, double Y, double Z, BOOL NotAligned, BOOL IsOffsetSection, LPCTSTR Label, BOOL Chgdirection, BOOL Scwithmodel, BOOL Partial, BOOL Dispsurfcut, long NumExcludedComponents, 
		LPDISPATCH* PExcludedComponents);
	BOOL InsertModelAnnotations2(long Option, BOOL AllTypes, long Types, BOOL AllViews, BOOL DuplicateDims, BOOL HiddenFeatureDims);
	BOOL GetEditBlock();
	LPDISPATCH InsertCenterLine2();
	LPDISPATCH InsertMultiJogLeader2(const VARIANT& Points);
	LPDISPATCH IInsertMultiJogLeader2(long PointsCount, LPDISPATCH* Points);
	long AutoDimension(long EntitiesToDimension, long HorizontalScheme, long HorizontalPlacement, long VerticalScheme, long VerticalPlacement);
	VARIANT InsertModelAnnotations3(long Option, long Types, BOOL AllViews, BOOL DuplicateDims, BOOL HiddenFeatureDims, BOOL UsePlacementInSketch);
	LPDISPATCH CreateUnfoldedViewAt3(double X, double Y, double Z, BOOL NotAligned);
	LPDISPATCH CreateDrawViewFromModelView2(LPCTSTR ModelName, LPCTSTR ViewName, double LocX, double LocY, double LocZ);
	LPDISPATCH CreateSectionViewAt4(double X, double Y, double Z, LPCTSTR SectionLabel, long Options, const VARIANT& ExcludedComponents);
	LPDISPATCH ICreateSectionViewAt4(double X, double Y, double Z, LPCTSTR SectionLabel, long Options, long NumExcludedComponents, LPDISPATCH* ExcludedComponents);
	VARIANT AutoBalloon2(long Layout, BOOL IgnoreMultiple);
	LPDISPATCH CreateViewport3(double LowerLeftX, double LowerLeftY, short SketchSize, double Scale);
	LPDISPATCH CreateDrawViewFromModelView3(LPCTSTR ModelName, LPCTSTR ViewName, double LocX, double LocY, double LocZ);
	LPDISPATCH InsertMultiJogLeader3(const VARIANT& Points, long StartPointArrowStyle, long EndPointArrowStyle);
	LPDISPATCH IInsertMultiJogLeader3(long PointsCount, LPDISPATCH* Points, long StartPointArrowStyle, long EndPointArrowStyle);
	LPDISPATCH InsertTableAnnotation2(BOOL UseAnchorPoint, double X, double Y, long AnchorType, LPCTSTR TableTemplate, long Rows, long Columns);
};
/////////////////////////////////////////////////////////////////////////////
// IModeler wrapper class

class IModeler : public COleDispatchDriver
{
public:
	IModeler() {}		// Calls COleDispatchDriver default constructor
	IModeler(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IModeler(const IModeler& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH CreateBodyFromBox(const VARIANT& BoxDimArray);
	LPDISPATCH ICreateBodyFromBox(double* BoxDimArray);
	BOOL SetTolerances(long* ToleranceIDArray, double* ToleranceValueArray, long NumTol);
	BOOL UnsetTolerances(long* ToleranceIDArray, long NumTol);
	LPDISPATCH Restore(LPUNKNOWN StreamIn);
	LPDISPATCH IRestore(LPUNKNOWN StreamIn);
	BOOL SetInitKnitGapWidth(double InitGapWidth);
	double GetInitKnitGapWidth();
	LPDISPATCH CreateBodyFromCyl(const VARIANT& CylDimArray);
	LPDISPATCH ICreateBodyFromCyl(double* CylDimArray);
	LPDISPATCH CreateBodyFromCone(const VARIANT& ConeDimArray);
	LPDISPATCH ICreateBodyFromCone(double* ConeDimArray);
	LPDISPATCH CreateBrepBody(long Type, long NTopologies, const VARIANT& Topologies, const VARIANT& EdgeToleranceArray, const VARIANT& VertexToleranceArray, const VARIANT& PointArray, const VARIANT& CurveArray, const VARIANT& SurfaceArray, 
		long NRelations, const VARIANT& Parents, const VARIANT& Children, const VARIANT& Senses);
	LPDISPATCH ICreateBrepBody(long Type, long NTopologies, long* Topologies, double* EdgeTolArray, double* VertexTolArray, double* PointArray, LPDISPATCH* CurveArray, LPDISPATCH* SurfaceArray, long NRelations, long* Parents, long* Children, 
		long* Senses);
	LPDISPATCH CreatePlanarSurface(const VARIANT& VRootPoint, const VARIANT& VNormal);
	LPDISPATCH ICreatePlanarSurface(double* RootPoint, double* Normal);
	LPDISPATCH CreateExtrusionSurface(LPDISPATCH ProfileCurve, const VARIANT& AxisDirection);
	LPDISPATCH ICreateExtrusionSurface(LPDISPATCH ProfileCurve, double* AxisDirection);
	LPDISPATCH CreateRevolutionSurface(LPDISPATCH ProfileCurve, const VARIANT& AxisPoint, const VARIANT& AxisDirection, const VARIANT& ProfileEndPtParams);
	LPDISPATCH ICreateRevolutionSurface(LPDISPATCH ProfileCurve, double* AxisPoint, double* AxisDirection, double* ProfileEndPtParams);
	LPDISPATCH CreateBsplineSurface(const VARIANT& Props, const VARIANT& UKnots, const VARIANT& VKnots, const VARIANT& CtrlPtCoords);
	LPDISPATCH ICreateBsplineSurface(long* Properties, double* UKnotArray, double* VKnotArray, double* ControlPointCoordArray);
	LPDISPATCH CreateOffsetSurface(LPDISPATCH SurfaceIn, double Distance);
	LPDISPATCH ICreateOffsetSurface(LPDISPATCH SurfaceIn, double Distance);
	LPDISPATCH CreateLine(const VARIANT& RootPoint, const VARIANT& Direction);
	LPDISPATCH ICreateLine(double* RootPoint, double* Direction);
	LPDISPATCH CreateArc(const VARIANT& Center, const VARIANT& Axis, double Radius, const VARIANT& StartPoint, const VARIANT& EndPoint);
	LPDISPATCH ICreateArc(double* Center, double* Axis, double Radius, double* StartPoint, double* EndPoint);
	LPDISPATCH CreateBsplineCurve(const VARIANT& Props, const VARIANT& Knots, const VARIANT& CtrlPtCoords);
	LPDISPATCH ICreateBsplineCurve(long* Properties, double* KnotArray, double* ControlPointCoordArray);
	LPDISPATCH CreatePCurve(LPDISPATCH Surface, const VARIANT& Props, const VARIANT& Knots, const VARIANT& CtrlPtCoords);
	LPDISPATCH ICreatePCurve(LPDISPATCH Surface, long* Props, double* Knots, double* CtrlPtCoords);
	VARIANT CreateBodiesFromSheets(const VARIANT& Sheets, long Options, long* Error);
	long ICreateBodiesFromSheets(long NSheets, LPUNKNOWN* Sheets, long Options, long* NResults, LPUNKNOWN* Results);
	LPDISPATCH ICreateBodyFromFaces(long NumOfFaces, LPDISPATCH* Faces, BOOL DoLocalCheck, BOOL* LocalCheckResult);
	double FindTwoEdgeMaxDeviation(LPDISPATCH LpEdge1, LPDISPATCH LpEdge2);
	double IFindTwoEdgeMaxDeviation(LPDISPATCH PEdge1, LPDISPATCH PEdge2);
	LPDISPATCH CreateConicalSurface(const VARIANT& Center, const VARIANT& Direction, double Radius, double SemiAngle);
	LPDISPATCH ICreateConicalSurface(double* Center, double* Direction, double Radius, double SemiAngle);
	LPDISPATCH CreateCylindricalSurface(const VARIANT& Center, const VARIANT& Direction, double Radius);
	LPDISPATCH ICreateCylindricalSurface(double* Center, double* Direction, double Radius);
	LPDISPATCH CreateSphericalSurface(const VARIANT& Center, double Radius);
	LPDISPATCH ICreateSphericalSurface(double* Center, double Radius);
	LPDISPATCH CreateToroidalSurface(const VARIANT& Center, const VARIANT& Axis, const VARIANT& RefDirection, double MajorRadius, double MinorRadius);
	LPDISPATCH ICreateToroidalSurface(double* Center, double* Axis, double* RefDirection, double MajorRadius, double MinorRadius);
	LPDISPATCH CreateBodyFromFaces2(long NumOfFaces, const VARIANT& Faces, long ActionType, BOOL DoLocalCheck, BOOL* LocalCheckResult);
	LPDISPATCH ICreateBodyFromFaces2(long NumOfFaces, LPDISPATCH* Faces, long ActionType, BOOL DoLocalCheck, BOOL* LocalCheckResult);
	double SetToleranceValue(long ToleranceID, double NewToleranceValue);
	double GetToleranceValue(long ToleranceID);
	LPDISPATCH CreateSheetFromSurface(LPDISPATCH SurfaceIn, const VARIANT& UvRange);
	LPDISPATCH ICreateSheetFromSurface(LPDISPATCH SurfaceIn, double* UvRange);
	BOOL ImprintingFaces(const VARIANT& TargetFaceArray, const VARIANT& ToolFaceArray, long Options, VARIANT* TargetEdges, VARIANT* ToolEdges, VARIANT* TargetVertices, VARIANT* ToolVertices);
	void IImprintingFaces(LPDISPATCH* TargetEdges, LPDISPATCH* ToolEdges, LPDISPATCH* TargetVertices, LPDISPATCH* ToolVertices);
	BOOL IImprintingFacesCount(long NTargetFaces, LPDISPATCH* TargetFaceArray, long NToolFaces, LPDISPATCH* ToolFaceArray, long Options, long* NTargetEdges, long* NtoolEdges, long* NtargetVertices, long* ToolVertices);
	LPDISPATCH CreateSweptSurface(LPDISPATCH CurveIn, const VARIANT& Dir);
	LPDISPATCH ICreateSweptSurface(LPDISPATCH CurveIn, double* Dir);
	BOOL ReplaceSurfaces(long NFaces, const VARIANT& FaceArray, const VARIANT& NewSurfArray, const VARIANT& SenseArray, double Tolerance);
	BOOL IReplaceSurfaces(long NFaces, LPDISPATCH* FaceArray, LPDISPATCH* NewSurfArray, long* SenseArray, double Tolerance);
	VARIANT SplitFaceOnParam(LPDISPATCH Facedisp, long UVFlag, double Parameter, BOOL* Status);
	long ISplitFaceOnParamCount(LPDISPATCH Facedisp, long UVFlag, double Parameter, BOOL* Status);
	LPDISPATCH ISplitFaceOnParam();
	BOOL CheckInterference(LPDISPATCH Body1, LPDISPATCH Body2, BOOL CoincidentInterference, VARIANT* Body1InterferedFaceArray, VARIANT* Body2InterferedFaceArray, VARIANT* IntersectedBodyArray);
	BOOL ICheckInterferenceCount(LPDISPATCH Body1, LPDISPATCH Body2, BOOL CoincidentInterference, long* Body1InterferedFaceCount, long* Body2InterferedFaceCount, long* IntersectedBodyCount);
	void ICheckInterference(LPDISPATCH* Body1InterferedFaceArray, LPDISPATCH* Body2InterferedFaceArray, LPDISPATCH* IntersectedBodyArray);
	LPDISPATCH CreateRuledSurface(LPDISPATCH Curve1In, LPDISPATCH Curve2In, const VARIANT& Apex);
	LPDISPATCH ICreateRuledSurface(LPDISPATCH Curve1In, LPDISPATCH Curve2In, double* Apex);
	LPDISPATCH CreateCylindricalSurface2(const VARIANT& Center, const VARIANT& Direction, const VARIANT& RefDirection, double Radius);
	LPDISPATCH ICreateCylindricalSurface2(double* Center, double* Direction, double* RefDirection, double Radius);
	LPDISPATCH CreateSphericalSurface2(const VARIANT& Center, const VARIANT& Axis, const VARIANT& RefDir, double Radius);
	LPDISPATCH ICreateSphericalSurface2(double* Center, double* Axis, double* RefDir, double Radius);
	LPDISPATCH ICreateBodyFromBox2(double* BoxDimArray);
	LPDISPATCH IRestore2(LPUNKNOWN StreamIn);
	LPDISPATCH ICreateBodyFromCyl2(double* CylDimArray);
	LPDISPATCH ICreateBodyFromCone2(double* ConeDimArray);
	LPDISPATCH ICreateBrepBody2(long Type, long NTopologies, long* Topologies, double* EdgeTolArray, double* VertexTolArray, double* PointArray, LPDISPATCH* CurveArray, LPDISPATCH* SurfaceArray, long NRelations, long* Parents, long* Children, 
		long* Senses);
	LPDISPATCH ICreateSheetFromSurface2(LPDISPATCH SurfaceIn, double* UvRange);
	BOOL ICheckInterferenceCount2(LPDISPATCH Body1, LPDISPATCH Body2, BOOL CoincidentInterference, long* Body1InterferedFaceCount, long* Body2InterferedFaceCount, long* IntersectedBodyCount);
	LPDISPATCH ICreateBodyFromFaces3(long NumOfFaces, LPDISPATCH* Faces, long ActionType, BOOL DoLocalCheck, BOOL* LocalCheckResult);
	BOOL IImprintingFacesCount2(long NTargetFaces, LPDISPATCH* TargetFaceArray, long NToolFaces, LPDISPATCH* ToolFaceArray, long Options, long* NTargetEdges, long* NtoolEdges, long* NtargetVertices, long* ToolVertices);
	BOOL IReplaceSurfaces2(long NFaces, LPDISPATCH* FaceArray, LPDISPATCH* NewSurfArray, long* SenseArray, double Tolerance);
	long ISplitFaceOnParamCount2(LPDISPATCH Facedisp, long UVFlag, double Parameter, BOOL* Status);
	LPDISPATCH ISplitFaceOnParam2();
	void ICheckInterference2(LPDISPATCH* Body1InterferedFaceArray, LPDISPATCH* Body2InterferedFaceArray, LPDISPATCH* IntersectedBodyArray);
	LPDISPATCH CreatePlanarSurface2(const VARIANT& VRootPoint, const VARIANT& VNormal, const VARIANT& VRef);
	LPDISPATCH ICreatePlanarSurface2(double* RootPoint, double* Normal, double* Ref);
	LPDISPATCH CreateConicalSurface2(const VARIANT& Center, const VARIANT& Direction, const VARIANT& RefDirection, double Radius, double SemiAngle);
	LPDISPATCH ICreateConicalSurface2(double* Center, double* Direction, double* RefDirection, double Radius, double SemiAngle);
	long CopyWizardHole(LPDISPATCH SourceHole, LPDISPATCH DestinationHole, BOOL RebuildOwner);
	long ICopyWizardHole(LPDISPATCH SourceHole, LPDISPATCH DestinationHole, BOOL RebuildOwner);
	BOOL DeleteFacesFromSheetBody(const VARIANT& FaceVar);
	BOOL IDeleteFacesFromSheetBody(long Count, LPDISPATCH* FaceVar);
	LPDISPATCH CreateWireBody(const VARIANT& EntVar, long Option);
	LPDISPATCH ICreateWireBody(long Count, LPDISPATCH* EntArr, long Option);
	LPDISPATCH CreateBrepBody3(long Type, long NTopologies, const VARIANT& Topologies, const VARIANT& EdgeToleranceArray, const VARIANT& VertexToleranceArray, const VARIANT& PointArray, const VARIANT& CurveArray1, 
		const VARIANT& CurveSurfaceArray1, const VARIANT& CurveArray2, const VARIANT& CurveSurfaceArray2, const VARIANT& SurfaceArray, long NRelations, const VARIANT& Parents, const VARIANT& Children, const VARIANT& Senses, long Option);
	LPDISPATCH ICreateBrepBody3(long Type, long NTopologies, long* Topologies, double* EdgeTolArray, double* VertexTolArray, double* PointArray, LPDISPATCH* CurveArra1, LPDISPATCH* CurveSurfaceArray1, LPDISPATCH* CurveArray2, 
		LPDISPATCH* CurveSurfaceArray2, LPDISPATCH* SurfaceArray, long NRelations, long* Parents, long* Children, long* Senses, long Option);
	LPDISPATCH CreateSheetFromFaces(const VARIANT& FaceArr);
	LPDISPATCH ICreateSheetFromFaces(long FaceCount, LPDISPATCH* FaceArr);
	LPDISPATCH CreateSpring();
	long GetBodyOutline(const VARIANT& BodyVar, LPDISPATCH Direction, double Tolerance, VARIANT* CurvesOut, VARIANT* TopolEntities, VARIANT* Outline);
	LPDISPATCH MergeCurves(const VARIANT& CurveVar);
	LPDISPATCH IMergeCurves(long CurveCount, LPDISPATCH* CurveArr);
	LPDISPATCH CreateSweptBody(LPDISPATCH PModDoc, BOOL Propagate, BOOL Alignment, short TwistCtrlOption, BOOL KeepTangency, BOOL BAdvancedSmoothing, short StartMatchingType, short EndMatchingType, BOOL IsThinBody, double Thickness1, 
		double Thickness2, short ThinType, short PathAlign, double TwistAngle, BOOL BMergeSmoothFaces);
	BOOL GetGeneralTopology();
	void SetGeneralTopology(BOOL bNewValue);
	long GetManifoldBodiesCount(LPDISPATCH NonManifoldIn);
	VARIANT MakeManifoldBodies(LPDISPATCH NonManifoldIn);
	LPDISPATCH IMakeManifoldBodies(LPDISPATCH NonManifoldIn, long Count);
};
/////////////////////////////////////////////////////////////////////////////
// ISpring wrapper class

class ISpring : public COleDispatchDriver
{
public:
	ISpring() {}		// Calls COleDispatchDriver default constructor
	ISpring(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISpring(const ISpring& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetSpringType();
	void SetSpringType(long nNewValue);
	double GetRevolution();
	void SetRevolution(double newValue);
	double GetStartingEndLength();
	void SetStartingEndLength(double newValue);
	double GetEndingEndLength();
	void SetEndingEndLength(double newValue);
	double GetStartingRevolution();
	void SetStartingRevolution(double newValue);
	double GetEndingRevolution();
	void SetEndingRevolution(double newValue);
	double GetStartingPitch();
	void SetStartingPitch(double newValue);
	double GetEndingPitch();
	void SetEndingPitch(double newValue);
	double GetTolerance();
	void SetTolerance(double newValue);
	double GetPitch();
	void SetPitch(double newValue);
	long GetProfileType();
	void SetProfileType(long nNewValue);
	VARIANT GetProfileParameters();
	void SetProfileParameters(const VARIANT& newValue);
	long GetStartingEndType();
	void SetStartingEndType(long nNewValue);
	long GetEndingEndType();
	void SetEndingEndType(long nNewValue);
	BOOL GetClockwise();
	void SetClockwise(BOOL bNewValue);
	BOOL GetReverseDirection();
	void SetReverseDirection(BOOL bNewValue);
	long GetGroundType();
	void SetGroundType(long nNewValue);
	LPDISPATCH GetBaseProfile();
	void SetBaseProfile(LPDISPATCH newValue);
	LPDISPATCH GetSectionProfile();
	void SetSectionProfile(LPDISPATCH newValue);
	double GetTaperAngle();
	void SetTaperAngle(double newValue);
	BOOL GetTaperOutward();
	void SetTaperOutward(BOOL bNewValue);
	LPDISPATCH GetSectionProfileCenter();
	void SetSectionProfileCenter(LPDISPATCH newValue);
	LPDISPATCH GetSpringBody();
	VARIANT GetProfilePoints();
	double GetHeight();
	void SetHeight(double newValue);
	long GetDefineType();
	void SetDefineType(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// IEnvironment wrapper class

class IEnvironment : public COleDispatchDriver
{
public:
	IEnvironment() {}		// Calls COleDispatchDriver default constructor
	IEnvironment(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IEnvironment(const IEnvironment& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	VARIANT GetSymEdgeCounts(LPCTSTR SymId);
	short IGetSymEdgeCounts(LPCTSTR SymId);
	VARIANT GetSymLines(LPCTSTR SymId);
	double IGetSymLines(LPCTSTR SymId);
	VARIANT GetSymArcs(LPCTSTR SymId);
	double IGetSymArcs(LPCTSTR SymId);
	VARIANT GetSymCircles(LPCTSTR SymId);
	double IGetSymCircles(LPCTSTR SymId);
	VARIANT GetSymTextPoints(LPCTSTR SymId);
	double IGetSymTextPoints(LPCTSTR SymId);
	VARIANT GetSymText(LPCTSTR SymId);
	VARIANT GetSymTriangles(LPCTSTR SymId);
	double IGetSymTriangles(LPCTSTR SymId);
};
/////////////////////////////////////////////////////////////////////////////
// IMathUtility wrapper class

class IMathUtility : public COleDispatchDriver
{
public:
	IMathUtility() {}		// Calls COleDispatchDriver default constructor
	IMathUtility(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IMathUtility(const IMathUtility& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH CreateTransform(const VARIANT& ArrayDataIn);
	LPDISPATCH ICreateTransform(double* ArrayDataIn);
	LPDISPATCH CreateTransformRotateAxis(LPDISPATCH PointObjIn, LPDISPATCH VectorObjIn, double Angle);
	LPDISPATCH ICreateTransformRotateAxis(LPDISPATCH PointObjIn, LPDISPATCH VectorObjIn, double Angle);
	LPDISPATCH CreatePoint(const VARIANT& ArrayDataIn);
	LPDISPATCH ICreatePoint(double* ArrayDataIn);
	LPDISPATCH CreateVector(const VARIANT& ArrayDataIn);
	LPDISPATCH ICreateVector(double* ArrayDataIn);
	LPDISPATCH ComposeTransform(LPDISPATCH XVec, LPDISPATCH YVec, LPDISPATCH ZVec, LPDISPATCH TransVec, double Scale);
};
/////////////////////////////////////////////////////////////////////////////
// IPropertyManagerPage2 wrapper class

class IPropertyManagerPage2 : public COleDispatchDriver
{
public:
	IPropertyManagerPage2() {}		// Calls COleDispatchDriver default constructor
	IPropertyManagerPage2(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IPropertyManagerPage2(const IPropertyManagerPage2& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL SetTitleBitmap(long ModuleHandle, long Identifier);
	LPDISPATCH AddGroupBox(long Id, LPCTSTR Caption, long Options);
	LPDISPATCH IAddGroupBox(long Id, LPCTSTR Caption, long Options);
	LPDISPATCH AddControl(long Id, short ControlType, LPCTSTR Caption, short LeftAlign, long Options, LPCTSTR Tip);
	LPDISPATCH IAddControl(long Id, short ControlType, LPCTSTR Caption, short LeftAlign, long Options, LPCTSTR Tip);
	BOOL SetMessage(LPCTSTR Message, long Visibility);
	long Show();
	void Close(BOOL Okay);
	BOOL EnableButton(long WhichOne, BOOL Enable);
	BOOL GetPinned();
	void SetPinned(BOOL bNewValue);
	void SetTitleBitmap2(LPCTSTR FilePathName);
	LPDISPATCH AddTab(long Id, LPCTSTR Caption, LPCTSTR Bitmap, long Options);
};
/////////////////////////////////////////////////////////////////////////////
// IPropertyManagerPageGroup wrapper class

class IPropertyManagerPageGroup : public COleDispatchDriver
{
public:
	IPropertyManagerPageGroup() {}		// Calls COleDispatchDriver default constructor
	IPropertyManagerPageGroup(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IPropertyManagerPageGroup(const IPropertyManagerPageGroup& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL GetVisible();
	void SetVisible(BOOL bNewValue);
	BOOL GetExpanded();
	void SetExpanded(BOOL bNewValue);
	LPDISPATCH AddControl(long Id, short ControlType, LPCTSTR Caption, short LeftAlign, long Options, LPCTSTR Tip);
	LPDISPATCH IAddControl(long Id, short ControlType, LPCTSTR Caption, short LeftAlign, long Options, LPCTSTR Tip);
	BOOL GetChecked();
	void SetChecked(BOOL bNewValue);
	CString GetCaption();
	void SetCaption(LPCTSTR lpszNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// IPropertyManagerPageControl wrapper class

class IPropertyManagerPageControl : public COleDispatchDriver
{
public:
	IPropertyManagerPageControl() {}		// Calls COleDispatchDriver default constructor
	IPropertyManagerPageControl(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IPropertyManagerPageControl(const IPropertyManagerPageControl& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL GetVisible();
	void SetVisible(BOOL bNewValue);
	BOOL GetEnabled();
	void SetEnabled(BOOL bNewValue);
	BOOL SetStandardPictureLabel(long Bitmap);
	BOOL SetPictureLabelByName(LPCTSTR ColorBitmap, LPCTSTR MaskBitmap);
	CString GetTip();
	void SetTip(LPCTSTR lpszNewValue);
	short GetLeft();
	void SetLeft(short nNewValue);
	short GetWidth();
	void SetWidth(short nNewValue);
	short GetTop();
	void SetTop(short nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// IPropertyManagerPageTab wrapper class

class IPropertyManagerPageTab : public COleDispatchDriver
{
public:
	IPropertyManagerPageTab() {}		// Calls COleDispatchDriver default constructor
	IPropertyManagerPageTab(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IPropertyManagerPageTab(const IPropertyManagerPageTab& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CString GetCaption();
	void SetCaption(LPCTSTR lpszNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// ITaskpaneView wrapper class

class ITaskpaneView : public COleDispatchDriver
{
public:
	ITaskpaneView() {}		// Calls COleDispatchDriver default constructor
	ITaskpaneView(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ITaskpaneView(const ITaskpaneView& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetTaskpaneViewWnd();
	LPDISPATCH GetControl();
	LPUNKNOWN IGetControl();
	LPUNKNOWN AddControl(LPCTSTR ClassName, LPCTSTR LicKey);
	BOOL ShowView();
	BOOL HideView();
	BOOL DeleteView();
};
/////////////////////////////////////////////////////////////////////////////
// IPtnrPMPage wrapper class

class IPtnrPMPage : public COleDispatchDriver
{
public:
	IPtnrPMPage() {}		// Calls COleDispatchDriver default constructor
	IPtnrPMPage(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IPtnrPMPage(const IPtnrPMPage& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long SetButtons(long ButtonTypes);
	long SetGroupRange(long FirstGroupId, long FirstCheckId, long GroupCount);
	long Show();
	long GetDialogWindow(long* Status);
	BOOL GetGroupVisible(long GroupId, long* Status);
	long SetGroupVisible(long GroupId, BOOL Visible);
	BOOL GetGroupExpanded(long GroupId, long* Status);
	long SetGroupExpanded(long GroupId, BOOL Expanded);
	long SetToolTips(long ControlAndToolTipCount, long* ControlAndToolTips);
	long RecalculateVerticalSpacing();
	long ShowControl(long ControlID, long DividerID, BOOL Show);
	long AddPage();
	long CreatePage(long HHandle);
	long IsPageActive(BOOL* Active);
	long SetControlTip(long ControlID, LPCTSTR TipString);
	long GetControlTip(long ControlID, BSTR* TipString);
	long SwitchPage(long PageId);
	long GetTotalNumberOfPages(long* NumberOfPages);
	long GetPageIndex(long* PageIndex);
	long GetPageNumber(long* PageNumber);
	long SetPageNumber(long PageNumber);
	long GetCurrentPageNumber(long* PageNumber);
	long SetButtonEnabled(long ButtonType, BOOL BEnabled);
	long Redraw();
};
/////////////////////////////////////////////////////////////////////////////
// ICommandManager wrapper class

class ICommandManager : public COleDispatchDriver
{
public:
	ICommandManager() {}		// Calls COleDispatchDriver default constructor
	ICommandManager(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ICommandManager(const ICommandManager& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH CreateCommandGroup(LPCTSTR Title, long Position);
	BOOL RemoveCommandGroup(LPCTSTR Title);
	LPDISPATCH GetCommandGroup(LPCTSTR Title);
	long GetNumberOfGroups();
	// method 'IGetGroups' not emitted because of invalid return type or parameter type
	VARIANT GetGroups();
	LPDISPATCH AddContextMenu(LPCTSTR Title);
};
/////////////////////////////////////////////////////////////////////////////
// ICommandGroup wrapper class

class ICommandGroup : public COleDispatchDriver
{
public:
	ICommandGroup() {}		// Calls COleDispatchDriver default constructor
	ICommandGroup(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ICommandGroup(const ICommandGroup& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long AddCommandItem(LPCTSTR Name, long Position, LPCTSTR HintString, LPCTSTR ToolTip, long ImageListIndex, LPCTSTR CallbackFunction, LPCTSTR EnableMethod);
	long AddSpacer(long Position);
	void GetNumberOfGroupItems(long* NumGroups);
	BOOL Activate();
	CString GetLargeMainIcon();
	void SetLargeMainIcon(LPCTSTR lpszNewValue);
	CString GetSmallMainIcon();
	void SetSmallMainIcon(LPCTSTR lpszNewValue);
	CString GetLargeIconList();
	void SetLargeIconList(LPCTSTR lpszNewValue);
	CString GetSmallIconList();
	void SetSmallIconList(LPCTSTR lpszNewValue);
	long GetShowInDocumentType();
	void SetShowInDocumentType(long nNewValue);
	long GetSelectType();
	void SetSelectType(long nNewValue);
	long GetDockingState();
	BOOL GetIsPopup();
	LPDISPATCH AddPopupItem(LPCTSTR Name, long Position, LPCTSTR HintString, LPCTSTR ToolTip, long ImageListIndex, LPCTSTR EnableMethod);
	void SetCustomNames(LPCTSTR lpszNewValue);
	CString GetCustomNames();
	BOOL GetHasToolbar();
	void SetHasToolbar(BOOL bNewValue);
	BOOL GetHasMenu();
	void SetHasMenu(BOOL bNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// IRefPoint wrapper class

class IRefPoint : public COleDispatchDriver
{
public:
	IRefPoint() {}		// Calls COleDispatchDriver default constructor
	IRefPoint(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IRefPoint(const IRefPoint& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetRefPoint();
};
/////////////////////////////////////////////////////////////////////////////
// IRefAxis wrapper class

class IRefAxis : public COleDispatchDriver
{
public:
	IRefAxis() {}		// Calls COleDispatchDriver default constructor
	IRefAxis(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IRefAxis(const IRefAxis& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	VARIANT GetRefAxisParams();
	double IGetRefAxisParams();
};
/////////////////////////////////////////////////////////////////////////////
// IMate wrapper class

class IMate : public COleDispatchDriver
{
public:
	IMate() {}		// Calls COleDispatchDriver default constructor
	IMate(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IMate(const IMate& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	VARIANT GetMateParams();
	void IGetMateParams(long* MateType, long* AlignFlag, long* CanBeFlipped);
	VARIANT GetMateDimensionValue();
	double IGetMateDimensionValue();
	VARIANT GetMateEntities();
	void IGetMateEntities(LPDISPATCH* Entity1, LPDISPATCH* Entity2);
	LPDISPATCH GetEntity(long WhichOne);
	LPDISPATCH IGetEntity(long WhichOne);
};
/////////////////////////////////////////////////////////////////////////////
// IMateEntity wrapper class

class IMateEntity : public COleDispatchDriver
{
public:
	IMateEntity() {}		// Calls COleDispatchDriver default constructor
	IMateEntity(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IMateEntity(const IMateEntity& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetMember();
	LPDISPATCH IGetMember();
	long GetEntityType();
	VARIANT GetEntityParams();
	double IGetEntityParams();
	LPDISPATCH GetComponent();
	LPDISPATCH IGetComponent();
	CString GetComponentName();
	LPDISPATCH IGetComponent2();
};
/////////////////////////////////////////////////////////////////////////////
// ISWPropertySheet wrapper class

class ISWPropertySheet : public COleDispatchDriver
{
public:
	ISWPropertySheet() {}		// Calls COleDispatchDriver default constructor
	ISWPropertySheet(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISWPropertySheet(const ISWPropertySheet& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long AddPage(long Page);
	long RemovePage(long Page);
	long AddActivePage(LPCTSTR Title, LPCTSTR ProgId, LPCTSTR LicenseKey);
	LPUNKNOWN GetControl(long PageIndex);
};
/////////////////////////////////////////////////////////////////////////////
// IRibFeatureData wrapper class

class IRibFeatureData : public COleDispatchDriver
{
public:
	IRibFeatureData() {}		// Calls COleDispatchDriver default constructor
	IRibFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IRibFeatureData(const IRibFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL GetIsTwoSided();
	void SetIsTwoSided(BOOL bNewValue);
	BOOL GetReverseThicknessDir();
	void SetReverseThicknessDir(BOOL bNewValue);
	double GetThickness();
	void SetThickness(double newValue);
	long GetRefSketchIndex();
	void SetRefSketchIndex(long nNewValue);
	long NextReference();
	BOOL GetFlipSide();
	void SetFlipSide(BOOL bNewValue);
	BOOL GetEnableDraft();
	void SetEnableDraft(BOOL bNewValue);
	BOOL GetDraftOutward();
	void SetDraftOutward(BOOL bNewValue);
	double GetDraftAngle();
	void SetDraftAngle(double newValue);
};
/////////////////////////////////////////////////////////////////////////////
// IDomeFeatureData wrapper class

class IDomeFeatureData : public COleDispatchDriver
{
public:
	IDomeFeatureData() {}		// Calls COleDispatchDriver default constructor
	IDomeFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IDomeFeatureData(const IDomeFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	double GetHeight();
	void SetHeight(double newValue);
	BOOL GetReverseDir();
	void SetReverseDir(BOOL bNewValue);
	BOOL GetElliptical();
	void SetElliptical(BOOL bNewValue);
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	BOOL IAccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
	LPDISPATCH GetFace();
	void SetFace(LPDISPATCH newValue);
	LPDISPATCH GetIFace();
	void SetIFace(LPDISPATCH newValue);
};
/////////////////////////////////////////////////////////////////////////////
// ISketchLine wrapper class

class ISketchLine : public COleDispatchDriver
{
public:
	ISketchLine() {}		// Calls COleDispatchDriver default constructor
	ISketchLine(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISketchLine(const ISketchLine& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	VARIANT GetStartPoint();
	double IGetStartPoint();
	VARIANT GetEndPoint();
	double IGetEndPoint();
	LPDISPATCH GetStartPoint2();
	LPDISPATCH IGetStartPoint2();
	LPDISPATCH GetEndPoint2();
	LPDISPATCH IGetEndPoint2();
};
/////////////////////////////////////////////////////////////////////////////
// ISketchArc wrapper class

class ISketchArc : public COleDispatchDriver
{
public:
	ISketchArc() {}		// Calls COleDispatchDriver default constructor
	ISketchArc(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISketchArc(const ISketchArc& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	VARIANT GetStartPoint();
	double IGetStartPoint();
	VARIANT GetEndPoint();
	double IGetEndPoint();
	VARIANT GetCenterPoint();
	double IGetCenterPoint();
	long IsCircle();
	long GetRotationDir();
	LPDISPATCH GetStartPoint2();
	LPDISPATCH IGetStartPoint2();
	LPDISPATCH GetEndPoint2();
	LPDISPATCH IGetEndPoint2();
	LPDISPATCH GetCenterPoint2();
	LPDISPATCH IGetCenterPoint2();
	double GetRadius();
	BOOL SetRadius(double Radius);
	VARIANT GetNormalVector();
	double IGetNormalVector();
};
/////////////////////////////////////////////////////////////////////////////
// ISketchEllipse wrapper class

class ISketchEllipse : public COleDispatchDriver
{
public:
	ISketchEllipse() {}		// Calls COleDispatchDriver default constructor
	ISketchEllipse(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISketchEllipse(const ISketchEllipse& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	VARIANT GetStartPoint();
	double IGetStartPoint();
	VARIANT GetEndPoint();
	double IGetEndPoint();
	VARIANT GetCenterPoint();
	double IGetCenterPoint();
	VARIANT GetMajorPoint();
	double IGetMajorPoint();
	VARIANT GetMinorPoint();
	double IGetMinorPoint();
	LPDISPATCH GetStartPoint2();
	LPDISPATCH IGetStartPoint2();
	LPDISPATCH GetEndPoint2();
	LPDISPATCH IGetEndPoint2();
	LPDISPATCH GetCenterPoint2();
	LPDISPATCH IGetCenterPoint2();
	LPDISPATCH GetMajorPoint2();
	LPDISPATCH IGetMajorPoint2();
	LPDISPATCH GetMinorPoint2();
	LPDISPATCH IGetMinorPoint2();
};
/////////////////////////////////////////////////////////////////////////////
// ISketchParabola wrapper class

class ISketchParabola : public COleDispatchDriver
{
public:
	ISketchParabola() {}		// Calls COleDispatchDriver default constructor
	ISketchParabola(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISketchParabola(const ISketchParabola& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	VARIANT GetStartPoint();
	double IGetStartPoint();
	VARIANT GetEndPoint();
	double IGetEndPoint();
	VARIANT GetFocalPoint();
	double IGetFocalPoint();
	VARIANT GetApexPoint();
	double IGetApexPoint();
	LPDISPATCH GetStartPoint2();
	LPDISPATCH IGetStartPoint2();
	LPDISPATCH GetEndPoint2();
	LPDISPATCH IGetEndPoint2();
	LPDISPATCH GetFocalPoint2();
	LPDISPATCH IGetFocalPoint2();
	LPDISPATCH GetApexPoint2();
	LPDISPATCH IGetApexPoint2();
};
/////////////////////////////////////////////////////////////////////////////
// ISketchSpline wrapper class

class ISketchSpline : public COleDispatchDriver
{
public:
	ISketchSpline() {}		// Calls COleDispatchDriver default constructor
	ISketchSpline(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISketchSpline(const ISketchSpline& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetPointCount();
	VARIANT GetPoints();
	double IGetPoints();
	VARIANT GetPoints2();
	LPUNKNOWN IEnumPoints();
};
/////////////////////////////////////////////////////////////////////////////
// ILightDialog wrapper class

class ILightDialog : public COleDispatchDriver
{
public:
	ILightDialog() {}		// Calls COleDispatchDriver default constructor
	ILightDialog(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ILightDialog(const ILightDialog& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL AddSubDialog(long Page);
	long GetLightId();
};
/////////////////////////////////////////////////////////////////////////////
// ISimpleHoleFeatureData wrapper class

class ISimpleHoleFeatureData : public COleDispatchDriver
{
public:
	ISimpleHoleFeatureData() {}		// Calls COleDispatchDriver default constructor
	ISimpleHoleFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISimpleHoleFeatureData(const ISimpleHoleFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	BOOL IAccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
	BOOL GetReverseDirection();
	void SetReverseDirection(BOOL bNewValue);
	BOOL GetDraftWhileExtruding();
	void SetDraftWhileExtruding(BOOL bNewValue);
	BOOL GetDraftOutward();
	void SetDraftOutward(BOOL bNewValue);
	BOOL GetReverseOffset();
	void SetReverseOffset(BOOL bNewValue);
	long GetType();
	void SetType(long nNewValue);
	double GetDiameter();
	void SetDiameter(double newValue);
	double GetDepth();
	void SetDepth(double newValue);
	double GetDraftAngle();
	void SetDraftAngle(double newValue);
	double GetSurfaceOffset();
	void SetSurfaceOffset(double newValue);
	LPDISPATCH GetFace();
	void SetFace(LPDISPATCH newValue);
	LPDISPATCH GetIFace();
	void SetIFace(LPDISPATCH newValue);
	LPDISPATCH GetVertex();
	void SetVertex(LPDISPATCH newValue);
	LPDISPATCH GetIVertex();
	void SetIVertex(LPDISPATCH newValue);
};
/////////////////////////////////////////////////////////////////////////////
// IWizardHoleFeatureData wrapper class

class IWizardHoleFeatureData : public COleDispatchDriver
{
public:
	IWizardHoleFeatureData() {}		// Calls COleDispatchDriver default constructor
	IWizardHoleFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IWizardHoleFeatureData(const IWizardHoleFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	BOOL IAccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
	long GetType();
	void SetType(long nNewValue);
	double GetDiameter();
	void SetDiameter(double newValue);
	double GetCounterBoreDiameter();
	void SetCounterBoreDiameter(double newValue);
	double GetCounterDrillDiameter();
	void SetCounterDrillDiameter(double newValue);
	double GetCounterSinkDiameter();
	void SetCounterSinkDiameter(double newValue);
	double GetMinorDiameter();
	void SetMinorDiameter(double newValue);
	double GetMajorDiameter();
	void SetMajorDiameter(double newValue);
	double GetHoleDiameter();
	void SetHoleDiameter(double newValue);
	double GetThruHoleDiameter();
	void SetThruHoleDiameter(double newValue);
	double GetTapDrillDiameter();
	void SetTapDrillDiameter(double newValue);
	double GetThruTapDrillDiameter();
	void SetThruTapDrillDiameter(double newValue);
	double GetNearCounterSinkDiameter();
	void SetNearCounterSinkDiameter(double newValue);
	double GetMidCounterSinkDiameter();
	void SetMidCounterSinkDiameter(double newValue);
	double GetFarCounterSinkDiameter();
	void SetFarCounterSinkDiameter(double newValue);
	double GetThreadDiameter();
	void SetThreadDiameter(double newValue);
	double GetDepth();
	void SetDepth(double newValue);
	double GetCounterBoreDepth();
	void SetCounterBoreDepth(double newValue);
	double GetCounterDrillDepth();
	void SetCounterDrillDepth(double newValue);
	double GetHoleDepth();
	void SetHoleDepth(double newValue);
	double GetThruHoleDepth();
	void SetThruHoleDepth(double newValue);
	double GetTapDrillDepth();
	void SetTapDrillDepth(double newValue);
	double GetThruTapDrillDepth();
	void SetThruTapDrillDepth(double newValue);
	double GetThreadDepth();
	void SetThreadDepth(double newValue);
	double GetCounterDrillAngle();
	void SetCounterDrillAngle(double newValue);
	double GetCounterSinkAngle();
	void SetCounterSinkAngle(double newValue);
	double GetDrillAngle();
	void SetDrillAngle(double newValue);
	double GetNearCounterSinkAngle();
	void SetNearCounterSinkAngle(double newValue);
	double GetMidCounterSinkAngle();
	void SetMidCounterSinkAngle(double newValue);
	double GetFarCounterSinkAngle();
	void SetFarCounterSinkAngle(double newValue);
	double GetThreadAngle();
	void SetThreadAngle(double newValue);
	double GetHeadClearance();
	void SetHeadClearance(double newValue);
	LPDISPATCH GetFace();
	void SetFace(LPDISPATCH newValue);
	LPDISPATCH GetIFace();
	void SetIFace(LPDISPATCH newValue);
	LPDISPATCH GetVertex();
	void SetVertex(LPDISPATCH newValue);
	LPDISPATCH GetIVertex();
	void SetIVertex(LPDISPATCH newValue);
	long GetEndCondition();
	void SetEndCondition(long nNewValue);
	CString GetStandard();
	void SetStandard(LPCTSTR lpszNewValue);
	CString GetFastenerType();
	void SetFastenerType(LPCTSTR lpszNewValue);
	CString GetFastenerSize();
	void SetFastenerSize(LPCTSTR lpszNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// IChamferFeatureData wrapper class

class IChamferFeatureData : public COleDispatchDriver
{
public:
	IChamferFeatureData() {}		// Calls COleDispatchDriver default constructor
	IChamferFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IChamferFeatureData(const IChamferFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	double GetEdgeChamferDistance(long Side);
	void SetEdgeChamferDistance(long Side, double Distance);
	double GetVertexChamferDistance(long Side);
	void SetVertexChamferDistance(long Side, double Distance);
	long GetType();
	void SetType(long nNewValue);
	double GetEdgeChamferAngle();
	void SetEdgeChamferAngle(double newValue);
};
/////////////////////////////////////////////////////////////////////////////
// IDraftFeatureData wrapper class

class IDraftFeatureData : public COleDispatchDriver
{
public:
	IDraftFeatureData() {}		// Calls COleDispatchDriver default constructor
	IDraftFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IDraftFeatureData(const IDraftFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetType();
	void SetType(long nNewValue);
	double GetAngle();
	void SetAngle(double newValue);
	BOOL GetReverseDirection();
	void SetReverseDirection(BOOL bNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// ISimpleFilletFeatureData wrapper class

class ISimpleFilletFeatureData : public COleDispatchDriver
{
public:
	ISimpleFilletFeatureData() {}		// Calls COleDispatchDriver default constructor
	ISimpleFilletFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISimpleFilletFeatureData(const ISimpleFilletFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetType();
	double GetDefaultRadius();
	void SetDefaultRadius(double newValue);
	long GetOverflowType();
	void SetOverflowType(long nNewValue);
	BOOL GetIsMultipleRadius();
	void SetIsMultipleRadius(BOOL bNewValue);
	BOOL GetRoundCorners();
	void SetRoundCorners(BOOL bNewValue);
	BOOL GetPropagateToTangentFaces();
	void SetPropagateToTangentFaces(BOOL bNewValue);
	long GetFilletItemsCount();
	LPDISPATCH GetFilletItemAtIndex(long Index);
	LPUNKNOWN IGetFilletItemAtIndex(long Index);
	double GetRadius(LPDISPATCH PFilletItem);
	double IGetRadius(LPUNKNOWN PFilletItem);
	void SetRadius(LPDISPATCH PFilletItem, double Radius);
	void ISetRadius(LPUNKNOWN PFilletItem, double Radius);
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	BOOL IAccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
};
/////////////////////////////////////////////////////////////////////////////
// IVariableFilletFeatureData wrapper class

class IVariableFilletFeatureData : public COleDispatchDriver
{
public:
	IVariableFilletFeatureData() {}		// Calls COleDispatchDriver default constructor
	IVariableFilletFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IVariableFilletFeatureData(const IVariableFilletFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	double GetDefaultRadius();
	void SetDefaultRadius(double newValue);
	long GetOverflowType();
	void SetOverflowType(long nNewValue);
	long GetTransitionType();
	void SetTransitionType(long nNewValue);
	BOOL GetPropagateToTangentFaces();
	void SetPropagateToTangentFaces(BOOL bNewValue);
	long GetFilletEdgeCount();
	LPDISPATCH GetFilletEdgeAtIndex(long Index);
	LPDISPATCH IGetFilletEdgeAtIndex(long Index);
	double GetRadius(LPDISPATCH PFilletItem);
	double IGetRadius(LPDISPATCH PFilletItem);
	void SetRadius(LPDISPATCH PFilletItem, double Radius);
	void ISetRadius(LPDISPATCH PFilletItem, double Radius);
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	BOOL IAccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
};
/////////////////////////////////////////////////////////////////////////////
// IExtrudeFeatureData wrapper class

class IExtrudeFeatureData : public COleDispatchDriver
{
public:
	IExtrudeFeatureData() {}		// Calls COleDispatchDriver default constructor
	IExtrudeFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IExtrudeFeatureData(const IExtrudeFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetEndCondition(BOOL Forward);
	void SetEndCondition(BOOL Forward, long EndCondition);
	double GetDepth(BOOL Forward);
	void SetDepth(BOOL Forward, double Depth);
	double GetWallThickness(BOOL Forward);
	void SetWallThickness(BOOL Forward, double WallThickness);
	BOOL GetDraftWhileExtruding(BOOL Forward);
	void SetDraftWhileExtruding(BOOL Forward, BOOL DraftWhileExtrude);
	BOOL GetDraftOutward(BOOL Forward);
	void SetDraftOutward(BOOL Forward, BOOL DraftOutward);
	double GetDraftAngle(BOOL Forward);
	void SetDraftAngle(BOOL Forward, double DraftAngle);
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	BOOL IAccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
	LPDISPATCH GetFace(BOOL Forward);
	void SetFace(BOOL Forward, LPDISPATCH Face);
	LPDISPATCH IGetFace(BOOL Forward);
	void ISetFace(BOOL Forward, LPDISPATCH Face);
	LPDISPATCH GetVertex(BOOL Forward);
	void SetVertex(BOOL Forward, LPDISPATCH Face);
	LPDISPATCH IGetVertex(BOOL Forward);
	void ISetVertex(BOOL Forward, LPDISPATCH Face);
	BOOL GetReverseDirection();
	void SetReverseDirection(BOOL bNewValue);
	BOOL GetBothDirections();
	void SetBothDirections(BOOL bNewValue);
	BOOL GetFlipSideToCut();
	void SetFlipSideToCut(BOOL bNewValue);
	BOOL IsBossFeature();
	BOOL IsThinFeature();
	BOOL IsBaseExtrude();
	long GetThinWallType();
	void SetThinWallType(long nNewValue);
	BOOL GetCapEnds();
	void SetCapEnds(BOOL bNewValue);
	double GetCapThickness();
	void SetCapThickness(double newValue);
};
/////////////////////////////////////////////////////////////////////////////
// IRevolveFeatureData wrapper class

class IRevolveFeatureData : public COleDispatchDriver
{
public:
	IRevolveFeatureData() {}		// Calls COleDispatchDriver default constructor
	IRevolveFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IRevolveFeatureData(const IRevolveFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	double GetRevolutionAngle(BOOL Forward);
	void SetRevolutionAngle(BOOL Forward, double Angle);
	double GetWallThickness(BOOL Forward);
	void SetWallThickness(BOOL Forward, double WallThickness);
	long GetType();
	void SetType(long nNewValue);
	BOOL GetReverseDirection();
	void SetReverseDirection(BOOL bNewValue);
	BOOL IsBossFeature();
	BOOL IsThinFeature();
};
/////////////////////////////////////////////////////////////////////////////
// IMirrorPatternFeatureData wrapper class

class IMirrorPatternFeatureData : public COleDispatchDriver
{
public:
	IMirrorPatternFeatureData() {}		// Calls COleDispatchDriver default constructor
	IMirrorPatternFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IMirrorPatternFeatureData(const IMirrorPatternFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	BOOL IAccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
	LPDISPATCH GetPlane();
	void SetPlane(LPDISPATCH newValue);
	long GetMirrorPlaneType();
	VARIANT GetPatternFeatureArray();
	void SetPatternFeatureArray(const VARIANT& newValue);
	long GetPatternFeatureCount();
	LPDISPATCH IGetPatternFeatureArray();
	void ISetPatternFeatureArray(long FeatCount, LPDISPATCH* ArrayDataIn);
	BOOL GetGeometryPattern();
	void SetGeometryPattern(BOOL bNewValue);
	BOOL IAccessSelections2(LPDISPATCH TopDoc, LPDISPATCH Component);
	VARIANT GetMirrorFaceArray();
	void SetMirrorFaceArray(const VARIANT& newValue);
	long GetMirrorFaceCount();
	LPDISPATCH IGetMirrorFaceArray();
	void ISetMirrorFaceArray(long FaceCount, LPDISPATCH* ArrayDataIn);
};
/////////////////////////////////////////////////////////////////////////////
// ICircularPatternFeatureData wrapper class

class ICircularPatternFeatureData : public COleDispatchDriver
{
public:
	ICircularPatternFeatureData() {}		// Calls COleDispatchDriver default constructor
	ICircularPatternFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ICircularPatternFeatureData(const ICircularPatternFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	BOOL IAccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
	LPDISPATCH GetAxis();
	void SetAxis(LPDISPATCH newValue);
	long GetAxisType();
	BOOL GetReverseDirection();
	void SetReverseDirection(BOOL bNewValue);
	double GetSpacing();
	void SetSpacing(double newValue);
	long GetTotalInstances();
	void SetTotalInstances(long nNewValue);
	BOOL GetEqualSpacing();
	void SetEqualSpacing(BOOL bNewValue);
	BOOL GetVarySketch();
	void SetVarySketch(BOOL bNewValue);
	BOOL GetGeometryPattern();
	void SetGeometryPattern(BOOL bNewValue);
	VARIANT GetPatternFeatureArray();
	void SetPatternFeatureArray(const VARIANT& newValue);
	long GetPatternFeatureCount();
	LPDISPATCH IGetPatternFeatureArray();
	void ISetPatternFeatureArray(long FeatCount, LPDISPATCH* ArrayDataIn);
	VARIANT GetSkippedItemArray();
	void SetSkippedItemArray(const VARIANT& newValue);
	long GetSkippedItemCount();
	long IGetSkippedItemArray();
	void ISetSkippedItemArray(long FeatCount, long* ArrayDataIn);
	BOOL IAccessSelections2(LPDISPATCH TopDoc, LPDISPATCH Component);
	VARIANT GetPatternFaceArray();
	void SetPatternFaceArray(const VARIANT& newValue);
	long GetPatternFaceCount();
	LPDISPATCH IGetPatternFaceArray();
	void ISetPatternFaceArray(long FaceCount, LPDISPATCH* ArrayDataIn);
	VARIANT GetPatternBodyArray();
	void SetPatternBodyArray(const VARIANT& newValue);
	long GetPatternBodyCount();
	LPDISPATCH IGetPatternBodyArray();
	void ISetPatternBodyArray(long BodyCount, LPDISPATCH* ArrayDataIn);
};
/////////////////////////////////////////////////////////////////////////////
// ILinearPatternFeatureData wrapper class

class ILinearPatternFeatureData : public COleDispatchDriver
{
public:
	ILinearPatternFeatureData() {}		// Calls COleDispatchDriver default constructor
	ILinearPatternFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ILinearPatternFeatureData(const ILinearPatternFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	BOOL IAccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
	LPDISPATCH GetD1Axis();
	void SetD1Axis(LPDISPATCH newValue);
	LPDISPATCH GetD2Axis();
	void SetD2Axis(LPDISPATCH newValue);
	long GetD1AxisType();
	long GetD2AxisType();
	BOOL GetD1ReverseDirection();
	void SetD1ReverseDirection(BOOL bNewValue);
	BOOL GetD2ReverseDirection();
	void SetD2ReverseDirection(BOOL bNewValue);
	double GetD1Spacing();
	void SetD1Spacing(double newValue);
	double GetD2Spacing();
	void SetD2Spacing(double newValue);
	long GetD1TotalInstances();
	void SetD1TotalInstances(long nNewValue);
	long GetD2TotalInstances();
	void SetD2TotalInstances(long nNewValue);
	BOOL GetVarySketch();
	void SetVarySketch(BOOL bNewValue);
	BOOL GetGeometryPattern();
	void SetGeometryPattern(BOOL bNewValue);
	VARIANT GetPatternFeatureArray();
	void SetPatternFeatureArray(const VARIANT& newValue);
	long GetPatternFeatureCount();
	LPDISPATCH IGetPatternFeatureArray();
	void ISetPatternFeatureArray(long FeatCount, LPDISPATCH* ArrayDataIn);
	VARIANT GetSkippedItemArray();
	void SetSkippedItemArray(const VARIANT& newValue);
	long GetSkippedItemCount();
	long IGetSkippedItemArray();
	void ISetSkippedItemArray(long FeatCount, long* ArrayDataIn);
	BOOL IAccessSelections2(LPDISPATCH TopDoc, LPDISPATCH Component);
	VARIANT GetPatternFaceArray();
	void SetPatternFaceArray(const VARIANT& newValue);
	long GetPatternFaceCount();
	LPDISPATCH IGetPatternFaceArray();
	void ISetPatternFaceArray(long FaceCount, LPDISPATCH* ArrayDataIn);
	BOOL GetD2PatternSeedOnly();
	void SetD2PatternSeedOnly(BOOL bNewValue);
	BOOL IsDirection2Specified();
	VARIANT GetPatternBodyArray();
	void SetPatternBodyArray(const VARIANT& newValue);
	long GetPatternBodyCount();
	LPDISPATCH IGetPatternBodyArray();
	void ISetPatternBodyArray(long BodyCount, LPDISPATCH* ArrayDataIn);
};
/////////////////////////////////////////////////////////////////////////////
// ITablePatternFeatureData wrapper class

class ITablePatternFeatureData : public COleDispatchDriver
{
public:
	ITablePatternFeatureData() {}		// Calls COleDispatchDriver default constructor
	ITablePatternFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ITablePatternFeatureData(const ITablePatternFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	BOOL IAccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
	LPDISPATCH GetCoordinateSystem();
	void SetCoordinateSystem(LPDISPATCH newValue);
	LPDISPATCH GetReferencePoint();
	void SetReferencePoint(LPDISPATCH newValue);
	long GetReferencePointType();
	BOOL GetUseCentroid();
	void SetUseCentroid(BOOL bNewValue);
	BOOL SavePointsToFile(LPCTSTR FileName);
	BOOL LoadPointsFromFile(LPCTSTR FileName);
	VARIANT GetBasePoint();
	double IGetBasePoint();
	BOOL GetGeometryPattern();
	void SetGeometryPattern(BOOL bNewValue);
	VARIANT GetPatternFeatureArray();
	void SetPatternFeatureArray(const VARIANT& newValue);
	long GetPatternFeatureCount();
	LPDISPATCH IGetPatternFeatureArray();
	void ISetPatternFeatureArray(long FeatCount, LPDISPATCH* ArrayDataIn);
	VARIANT GetPointArray();
	void SetPointArray(const VARIANT& newValue);
	long GetPointCount();
	double IGetPointArray();
	void ISetPointArray(long FeatCount, double* ArrayDataIn);
	BOOL IAccessSelections2(LPDISPATCH TopDoc, LPDISPATCH Component);
	VARIANT GetPatternFaceArray();
	void SetPatternFaceArray(const VARIANT& newValue);
	long GetPatternFaceCount();
	LPDISPATCH IGetPatternFaceArray();
	void ISetPatternFaceArray(long FaceCount, LPDISPATCH* ArrayDataIn);
	VARIANT GetPatternBodyArray();
	void SetPatternBodyArray(const VARIANT& newValue);
	long GetPatternBodyCount();
	LPDISPATCH IGetPatternBodyArray();
	void ISetPatternBodyArray(long BodyCount, LPDISPATCH* ArrayDataIn);
	VARIANT GetSkippedItemArray();
	void SetSkippedItemArray(const VARIANT& newValue);
	long GetSkippedItemCount();
	long IGetSkippedItemArray(long Count);
	void ISetSkippedItemArray(long Count, long* ArrayDataIn);
};
/////////////////////////////////////////////////////////////////////////////
// ISketchPatternFeatureData wrapper class

class ISketchPatternFeatureData : public COleDispatchDriver
{
public:
	ISketchPatternFeatureData() {}		// Calls COleDispatchDriver default constructor
	ISketchPatternFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISketchPatternFeatureData(const ISketchPatternFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	BOOL IAccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
	LPDISPATCH GetSketch();
	void SetSketch(LPDISPATCH newValue);
	LPDISPATCH GetReferencePoint();
	void SetReferencePoint(LPDISPATCH newValue);
	long GetReferencePointType();
	BOOL GetUseCentroid();
	void SetUseCentroid(BOOL bNewValue);
	VARIANT GetBasePoint();
	double IGetBasePoint();
	BOOL GetGeometryPattern();
	void SetGeometryPattern(BOOL bNewValue);
	VARIANT GetPatternFeatureArray();
	void SetPatternFeatureArray(const VARIANT& newValue);
	long GetPatternFeatureCount();
	LPDISPATCH IGetPatternFeatureArray();
	void ISetPatternFeatureArray(long FeatCount, LPDISPATCH* ArrayDataIn);
	BOOL IAccessSelections2(LPDISPATCH TopDoc, LPDISPATCH Component);
	VARIANT GetPatternFaceArray();
	void SetPatternFaceArray(const VARIANT& newValue);
	long GetPatternFaceCount();
	LPDISPATCH IGetPatternFaceArray();
	void ISetPatternFaceArray(long FaceCount, LPDISPATCH* ArrayDataIn);
	VARIANT GetPatternBodyArray();
	void SetPatternBodyArray(const VARIANT& newValue);
	long GetPatternBodyCount();
	LPDISPATCH IGetPatternBodyArray();
	void ISetPatternBodyArray(long BodyCount, LPDISPATCH* ArrayDataIn);
};
/////////////////////////////////////////////////////////////////////////////
// IMirrorSolidFeatureData wrapper class

class IMirrorSolidFeatureData : public COleDispatchDriver
{
public:
	IMirrorSolidFeatureData() {}		// Calls COleDispatchDriver default constructor
	IMirrorSolidFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IMirrorSolidFeatureData(const IMirrorSolidFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	BOOL IAccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
	LPDISPATCH GetFace();
	void SetFace(LPDISPATCH newValue);
	BOOL IAccessSelections2(LPDISPATCH TopDoc, LPDISPATCH Component);
	VARIANT GetPatternBodyArray();
	void SetPatternBodyArray(const VARIANT& newValue);
	long GetPatternBodyCount();
	LPDISPATCH IGetPatternBodyArray();
	void ISetPatternBodyArray(long BodyCount, LPDISPATCH* ArrayDataIn);
	BOOL GetMerge();
	void SetMerge(BOOL bNewValue);
	BOOL GetKnitSurface();
	void SetKnitSurface(BOOL bNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// ISheetMetalFeatureData wrapper class

class ISheetMetalFeatureData : public COleDispatchDriver
{
public:
	ISheetMetalFeatureData() {}		// Calls COleDispatchDriver default constructor
	ISheetMetalFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISheetMetalFeatureData(const ISheetMetalFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	BOOL IAccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
	double GetBendRadius();
	void SetBendRadius(double newValue);
	double GetThickness();
	void SetThickness(double newValue);
	LPDISPATCH GetFixedReference();
	void SetFixedReference(LPDISPATCH newValue);
	long GetBendAllowanceType();
	void SetBendAllowanceType(long nNewValue);
	CString GetBendTableFile();
	void SetBendTableFile(LPCTSTR lpszNewValue);
	double GetKFactor();
	void SetKFactor(double newValue);
	double GetBendAllowance();
	void SetBendAllowance(double newValue);
	BOOL GetUseAutoRelief();
	void SetUseAutoRelief(BOOL bNewValue);
	long GetAutoReliefType();
	void SetAutoReliefType(long nNewValue);
	double GetReliefRatio();
	void SetReliefRatio(double newValue);
	BOOL IAccessSelections2(LPDISPATCH TopDoc, LPDISPATCH Component);
	LPDISPATCH GetCustomBendAllowance();
	void SetCustomBendAllowance(LPDISPATCH PBendData);
};
/////////////////////////////////////////////////////////////////////////////
// IOneBendFeatureData wrapper class

class IOneBendFeatureData : public COleDispatchDriver
{
public:
	IOneBendFeatureData() {}		// Calls COleDispatchDriver default constructor
	IOneBendFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IOneBendFeatureData(const IOneBendFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	BOOL IAccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
	double GetBendRadius();
	void SetBendRadius(double newValue);
	long GetBendAllowanceType();
	void SetBendAllowanceType(long nNewValue);
	CString GetBendTableFile();
	void SetBendTableFile(LPCTSTR lpszNewValue);
	double GetKFactor();
	void SetKFactor(double newValue);
	double GetBendAllowance();
	void SetBendAllowance(double newValue);
	BOOL GetUseAutoRelief();
	void SetUseAutoRelief(BOOL bNewValue);
	long GetAutoReliefType();
	void SetAutoReliefType(long nNewValue);
	BOOL GetUseDefaultBendRadius();
	void SetUseDefaultBendRadius(BOOL bNewValue);
	BOOL GetUseDefaultBendAllowance();
	void SetUseDefaultBendAllowance(BOOL bNewValue);
	BOOL GetUseDefaultBendRelief();
	void SetUseDefaultBendRelief(BOOL bNewValue);
	BOOL GetBendDown();
	void SetBendDown(BOOL bNewValue);
	double GetBendAngle();
	void SetBendAngle(double newValue);
	long GetBendOrder();
	void SetBendOrder(long nNewValue);
	double GetReliefWidth();
	void SetReliefWidth(double newValue);
	double GetReliefDepth();
	void SetReliefDepth(double newValue);
	BOOL IAccessSelections2(LPDISPATCH TopDoc, LPDISPATCH Component);
	long GetType();
	LPDISPATCH GetCustomBendAllowance();
	void SetCustomBendAllowance(LPDISPATCH PBendData);
	BOOL GetSimplifyGeometry();
	void SetSimplifyGeometry(BOOL bNewValue);
	BOOL GetUseReliefRatio();
	void SetUseReliefRatio(BOOL bNewValue);
	double GetReliefRatio();
	void SetReliefRatio(double newValue);
	LPDISPATCH GetFlatPatternSketchSegment();
};
/////////////////////////////////////////////////////////////////////////////
// IBendsFeatureData wrapper class

class IBendsFeatureData : public COleDispatchDriver
{
public:
	IBendsFeatureData() {}		// Calls COleDispatchDriver default constructor
	IBendsFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IBendsFeatureData(const IBendsFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	BOOL IAccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
	double GetBendRadius();
	void SetBendRadius(double newValue);
	long GetBendAllowanceType();
	void SetBendAllowanceType(long nNewValue);
	CString GetBendTableFile();
	void SetBendTableFile(LPCTSTR lpszNewValue);
	double GetKFactor();
	void SetKFactor(double newValue);
	double GetBendAllowance();
	void SetBendAllowance(double newValue);
	BOOL GetUseDefaultBendRadius();
	void SetUseDefaultBendRadius(BOOL bNewValue);
	BOOL GetUseDefaultBendAllowance();
	void SetUseDefaultBendAllowance(BOOL bNewValue);
	BOOL IAccessSelections2(LPDISPATCH TopDoc, LPDISPATCH Component);
	LPDISPATCH GetCustomBendAllowance();
	void SetCustomBendAllowance(LPDISPATCH PBendData);
};
/////////////////////////////////////////////////////////////////////////////
// IBaseFlangeFeatureData wrapper class

class IBaseFlangeFeatureData : public COleDispatchDriver
{
public:
	IBaseFlangeFeatureData() {}		// Calls COleDispatchDriver default constructor
	IBaseFlangeFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IBaseFlangeFeatureData(const IBaseFlangeFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	BOOL IAccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
	long GetOffsetDirections();
	void SetOffsetDirections(long nNewValue);
	long GetD1OffsetType();
	void SetD1OffsetType(long nNewValue);
	long GetD2OffsetType();
	void SetD2OffsetType(long nNewValue);
	long GetD1OffsetReferenceType();
	long GetD2OffsetReferenceType();
	LPDISPATCH GetD1OffsetReference();
	void SetD1OffsetReference(LPDISPATCH newValue);
	LPDISPATCH GetD2OffsetReference();
	void SetD2OffsetReference(LPDISPATCH newValue);
	double GetD1OffsetDistance();
	void SetD1OffsetDistance(double newValue);
	double GetD2OffsetDistance();
	void SetD2OffsetDistance(double newValue);
	double GetThickness();
	void SetThickness(double newValue);
	BOOL GetReverseThickness();
	void SetReverseThickness(BOOL bNewValue);
	double GetBendRadius();
	void SetBendRadius(double newValue);
	BOOL GetReverseDirection();
	void SetReverseDirection(BOOL bNewValue);
	BOOL IAccessSelections2(LPDISPATCH TopDoc, LPDISPATCH Component);
	BOOL GetD1ReverseOffset();
	void SetD1ReverseOffset(BOOL bNewValue);
	BOOL GetD2ReverseOffset();
	void SetD2ReverseOffset(BOOL bNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// IEdgeFlangeFeatureData wrapper class

class IEdgeFlangeFeatureData : public COleDispatchDriver
{
public:
	IEdgeFlangeFeatureData() {}		// Calls COleDispatchDriver default constructor
	IEdgeFlangeFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IEdgeFlangeFeatureData(const IEdgeFlangeFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	BOOL IAccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
	LPDISPATCH GetEdge();
	void SetEdge(LPDISPATCH newValue);
	BOOL GetUseDefaultBendRadius();
	void SetUseDefaultBendRadius(BOOL bNewValue);
	double GetBendRadius();
	void SetBendRadius(double newValue);
	double GetBendAngle();
	void SetBendAngle(double newValue);
	long GetOffsetType();
	void SetOffsetType(long nNewValue);
	LPDISPATCH GetOffsetReference();
	void SetOffsetReference(LPDISPATCH newValue);
	BOOL GetReverseOffset();
	void SetReverseOffset(BOOL bNewValue);
	double GetOffsetDistance();
	void SetOffsetDistance(double newValue);
	long GetOffsetDimType();
	void SetOffsetDimType(long nNewValue);
	long GetPositionType();
	void SetPositionType(long nNewValue);
	BOOL GetUsePositionTrimSideBends();
	void SetUsePositionTrimSideBends(BOOL bNewValue);
	BOOL GetUsePositionOffset();
	void SetUsePositionOffset(BOOL bNewValue);
	long GetPositionOffsetType();
	void SetPositionOffsetType(long nNewValue);
	long GetPositionReferenceType();
	LPDISPATCH GetPositionOffsetReference();
	void SetPositionOffsetReference(LPDISPATCH newValue);
	double GetPositionOffsetDistance();
	void SetPositionOffsetDistance(double newValue);
	BOOL GetReversePositionOffset();
	void SetReversePositionOffset(BOOL bNewValue);
	long GetAutoReliefType();
	void SetAutoReliefType(long nNewValue);
	BOOL GetUseReliefRatio();
	void SetUseReliefRatio(BOOL bNewValue);
	double GetReliefRatio();
	void SetReliefRatio(double newValue);
	double GetReliefWidth();
	void SetReliefWidth(double newValue);
	double GetReliefDepth();
	void SetReliefDepth(double newValue);
	long GetReliefTearType();
	void SetReliefTearType(long nNewValue);
	BOOL IAccessSelections2(LPDISPATCH TopDoc, LPDISPATCH Component);
	LPDISPATCH GetCustomBendAllowance();
	void SetCustomBendAllowance(LPDISPATCH PBendData);
	BOOL GetUseDefaultBendAllowance();
	void SetUseDefaultBendAllowance(BOOL bNewValue);
	BOOL GetUseDefaultBendRelief();
	void SetUseDefaultBendRelief(BOOL bNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// IMiterFlangeFeatureData wrapper class

class IMiterFlangeFeatureData : public COleDispatchDriver
{
public:
	IMiterFlangeFeatureData() {}		// Calls COleDispatchDriver default constructor
	IMiterFlangeFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IMiterFlangeFeatureData(const IMiterFlangeFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	BOOL IAccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
	VARIANT GetEdges();
	void SetEdges(const VARIANT& newValue);
	long IGetEdgesCount();
	LPDISPATCH IGetEdges();
	void ISetEdges(long EdgeCount, LPDISPATCH* EdgeArray);
	BOOL GetUseDefaultBendRadius();
	void SetUseDefaultBendRadius(BOOL bNewValue);
	double GetBendRadius();
	void SetBendRadius(double newValue);
	long GetPositionType();
	void SetPositionType(long nNewValue);
	BOOL GetUsePositionTrimSideBends();
	void SetUsePositionTrimSideBends(BOOL bNewValue);
	double GetGapDistance();
	void SetGapDistance(double newValue);
	BOOL IAccessSelections2(LPDISPATCH TopDoc, LPDISPATCH Component);
	double GetStartOffset();
	void SetStartOffset(double newValue);
	double GetEndOffset();
	void SetEndOffset(double newValue);
	long GetReliefType();
	void SetReliefType(long nNewValue);
	BOOL GetUseReliefRatio();
	void SetUseReliefRatio(BOOL bNewValue);
	double GetReliefRatio();
	void SetReliefRatio(double newValue);
	double GetReliefWidth();
	void SetReliefWidth(double newValue);
	double GetReliefDepth();
	void SetReliefDepth(double newValue);
	LPDISPATCH GetCustomBendAllowance();
	void SetCustomBendAllowance(LPDISPATCH PBendData);
	BOOL GetUseDefaultBendAllowance();
	void SetUseDefaultBendAllowance(BOOL bNewValue);
	BOOL GetUseDefaultBendRelief();
	void SetUseDefaultBendRelief(BOOL bNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// ISketchedBendFeatureData wrapper class

class ISketchedBendFeatureData : public COleDispatchDriver
{
public:
	ISketchedBendFeatureData() {}		// Calls COleDispatchDriver default constructor
	ISketchedBendFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISketchedBendFeatureData(const ISketchedBendFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	BOOL IAccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
	LPDISPATCH GetFixedFace(double* X, double* Y, double* Z);
	void SetFixedFace(double X, double Y, double Z, LPDISPATCH EdgeArray);
	long GetPositionType();
	void SetPositionType(long nNewValue);
	BOOL GetReverseDirection();
	void SetReverseDirection(BOOL bNewValue);
	double GetBendAngle();
	void SetBendAngle(double newValue);
	BOOL GetUseDefaultBendRadius();
	void SetUseDefaultBendRadius(BOOL bNewValue);
	double GetBendRadius();
	void SetBendRadius(double newValue);
	BOOL IAccessSelections2(LPDISPATCH TopDoc, LPDISPATCH Component);
	LPDISPATCH GetCustomBendAllowance();
	void SetCustomBendAllowance(LPDISPATCH PBendData);
	BOOL GetUseDefaultBendAllowance();
	void SetUseDefaultBendAllowance(BOOL bNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// IClosedCornerFeatureData wrapper class

class IClosedCornerFeatureData : public COleDispatchDriver
{
public:
	IClosedCornerFeatureData() {}		// Calls COleDispatchDriver default constructor
	IClosedCornerFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IClosedCornerFeatureData(const IClosedCornerFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	BOOL IAccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
	VARIANT GetFaces();
	void SetFaces(const VARIANT& newValue);
	long IGetFacesCount();
	LPDISPATCH IGetFaces();
	void ISetFaces(long FaceCount, LPDISPATCH* FaceArray);
	long GetCornerType();
	void SetCornerType(long nNewValue);
	BOOL IAccessSelections2(LPDISPATCH TopDoc, LPDISPATCH Component);
};
/////////////////////////////////////////////////////////////////////////////
// IFoldsFeatureData wrapper class

class IFoldsFeatureData : public COleDispatchDriver
{
public:
	IFoldsFeatureData() {}		// Calls COleDispatchDriver default constructor
	IFoldsFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IFoldsFeatureData(const IFoldsFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	BOOL IAccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
	LPDISPATCH GetFixedFace();
	void SetFixedFace(LPDISPATCH newValue);
	VARIANT GetBends();
	void SetBends(const VARIANT& newValue);
	long IGetBendsCount();
	LPDISPATCH IGetBends();
	void ISetBends(long FaceCount, LPDISPATCH* FaceArray);
	BOOL IAccessSelections2(LPDISPATCH TopDoc, LPDISPATCH Component);
};
/////////////////////////////////////////////////////////////////////////////
// IFlatPatternFeatureData wrapper class

class IFlatPatternFeatureData : public COleDispatchDriver
{
public:
	IFlatPatternFeatureData() {}		// Calls COleDispatchDriver default constructor
	IFlatPatternFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IFlatPatternFeatureData(const IFlatPatternFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	BOOL IAccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
	LPDISPATCH GetFixedFace();
	void SetFixedFace(LPDISPATCH newValue);
	BOOL GetMergeFace();
	void SetMergeFace(BOOL bNewValue);
	BOOL IAccessSelections2(LPDISPATCH TopDoc, LPDISPATCH Component);
	BOOL GetCornerTreatment();
	void SetCornerTreatment(BOOL bNewValue);
	long GetCornerTrimReliefType();
	void SetCornerTrimReliefType(long nNewValue);
	double GetCornerTrimReliefDistance();
	void SetCornerTrimReliefDistance(double newValue);
	long GetBreakCornerType();
	void SetBreakCornerType(long nNewValue);
	double GetBreakCornerRadius();
	void SetBreakCornerRadius(double newValue);
	BOOL GetAddCornerTrim(LPDISPATCH* PFeat);
	void SetAddCornerTrim(BOOL BCT);
	BOOL GetBreakCorners(LPDISPATCH* PFeat);
	void SetBreakCorners(BOOL BBreakCorner);
	double GetCornerTrimRatioToThickness();
	void SetCornerTrimRatioToThickness(double newValue);
	BOOL GetUseRatioToThickness();
	void SetUseRatioToThickness(BOOL bNewValue);
	BOOL GetSimplifyBends();
	void SetSimplifyBends(BOOL bNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// ILocalLinearPatternFeatureData wrapper class

class ILocalLinearPatternFeatureData : public COleDispatchDriver
{
public:
	ILocalLinearPatternFeatureData() {}		// Calls COleDispatchDriver default constructor
	ILocalLinearPatternFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ILocalLinearPatternFeatureData(const ILocalLinearPatternFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	BOOL IAccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
	LPDISPATCH GetD1Axis();
	void SetD1Axis(LPDISPATCH newValue);
	LPDISPATCH GetD2Axis();
	void SetD2Axis(LPDISPATCH newValue);
	long GetD1AxisType();
	long GetD2AxisType();
	BOOL GetD1ReverseDirection();
	void SetD1ReverseDirection(BOOL bNewValue);
	BOOL GetD2ReverseDirection();
	void SetD2ReverseDirection(BOOL bNewValue);
	double GetD1Spacing();
	void SetD1Spacing(double newValue);
	double GetD2Spacing();
	void SetD2Spacing(double newValue);
	long GetD1TotalInstances();
	void SetD1TotalInstances(long nNewValue);
	long GetD2TotalInstances();
	void SetD2TotalInstances(long nNewValue);
	VARIANT GetSeedComponentArray();
	void SetSeedComponentArray(const VARIANT& newValue);
	long GetSeedComponentCount();
	LPDISPATCH IGetSeedComponentArray();
	void ISetSeedComponentArray(long FeatCount, LPDISPATCH* ArrayDataIn);
	VARIANT GetSkippedItemArray();
	void SetSkippedItemArray(const VARIANT& newValue);
	long GetSkippedItemCount();
	long IGetSkippedItemArray();
	void ISetSkippedItemArray(long FeatCount, long* ArrayDataIn);
	BOOL IAccessSelections2(LPDISPATCH TopDoc, LPDISPATCH Component);
};
/////////////////////////////////////////////////////////////////////////////
// ILocalCircularPatternFeatureData wrapper class

class ILocalCircularPatternFeatureData : public COleDispatchDriver
{
public:
	ILocalCircularPatternFeatureData() {}		// Calls COleDispatchDriver default constructor
	ILocalCircularPatternFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ILocalCircularPatternFeatureData(const ILocalCircularPatternFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	BOOL IAccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
	LPDISPATCH GetAxis();
	void SetAxis(LPDISPATCH newValue);
	long GetAxisType();
	BOOL GetReverseDirection();
	void SetReverseDirection(BOOL bNewValue);
	double GetSpacing();
	void SetSpacing(double newValue);
	long GetTotalInstances();
	void SetTotalInstances(long nNewValue);
	VARIANT GetSeedComponentArray();
	void SetSeedComponentArray(const VARIANT& newValue);
	long GetSeedComponentCount();
	LPDISPATCH IGetSeedComponentArray();
	void ISetSeedComponentArray(long FeatCount, LPDISPATCH* ArrayDataIn);
	VARIANT GetSkippedItemArray();
	void SetSkippedItemArray(const VARIANT& newValue);
	long GetSkippedItemCount();
	long IGetSkippedItemArray();
	void ISetSkippedItemArray(long FeatCount, long* ArrayDataIn);
	BOOL IAccessSelections2(LPDISPATCH TopDoc, LPDISPATCH Component);
};
/////////////////////////////////////////////////////////////////////////////
// IDerivedPatternFeatureData wrapper class

class IDerivedPatternFeatureData : public COleDispatchDriver
{
public:
	IDerivedPatternFeatureData() {}		// Calls COleDispatchDriver default constructor
	IDerivedPatternFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IDerivedPatternFeatureData(const IDerivedPatternFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	BOOL IAccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
	LPDISPATCH GetPatternFeature();
	void SetPatternFeature(LPDISPATCH newValue);
	VARIANT GetSeedComponentArray();
	void SetSeedComponentArray(const VARIANT& newValue);
	long GetSeedComponentCount();
	LPDISPATCH IGetSeedComponentArray();
	void ISetSeedComponentArray(long FeatCount, LPDISPATCH* ArrayDataIn);
	VARIANT GetSkippedItemArray();
	void SetSkippedItemArray(const VARIANT& newValue);
	long GetSkippedItemCount();
	long IGetSkippedItemArray();
	void ISetSkippedItemArray(long FeatCount, long* ArrayDataIn);
	BOOL IAccessSelections2(LPDISPATCH TopDoc, LPDISPATCH Component);
};
/////////////////////////////////////////////////////////////////////////////
// IPropertyManagerPageLabel wrapper class

class IPropertyManagerPageLabel : public COleDispatchDriver
{
public:
	IPropertyManagerPageLabel() {}		// Calls COleDispatchDriver default constructor
	IPropertyManagerPageLabel(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IPropertyManagerPageLabel(const IPropertyManagerPageLabel& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CString GetCaption();
	void SetCaption(LPCTSTR lpszNewValue);
	long GetStyle();
	void SetStyle(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// IPropertyManagerPageCheckbox wrapper class

class IPropertyManagerPageCheckbox : public COleDispatchDriver
{
public:
	IPropertyManagerPageCheckbox() {}		// Calls COleDispatchDriver default constructor
	IPropertyManagerPageCheckbox(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IPropertyManagerPageCheckbox(const IPropertyManagerPageCheckbox& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL GetChecked();
	void SetChecked(BOOL bNewValue);
	CString GetCaption();
	void SetCaption(LPCTSTR lpszNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// IPropertyManagerPageButton wrapper class

class IPropertyManagerPageButton : public COleDispatchDriver
{
public:
	IPropertyManagerPageButton() {}		// Calls COleDispatchDriver default constructor
	IPropertyManagerPageButton(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IPropertyManagerPageButton(const IPropertyManagerPageButton& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CString GetCaption();
	void SetCaption(LPCTSTR lpszNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// IPropertyManagerPageOption wrapper class

class IPropertyManagerPageOption : public COleDispatchDriver
{
public:
	IPropertyManagerPageOption() {}		// Calls COleDispatchDriver default constructor
	IPropertyManagerPageOption(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IPropertyManagerPageOption(const IPropertyManagerPageOption& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL GetChecked();
	void SetChecked(BOOL bNewValue);
	CString GetCaption();
	void SetCaption(LPCTSTR lpszNewValue);
	long GetStyle();
	void SetStyle(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// IPropertyManagerPageTextbox wrapper class

class IPropertyManagerPageTextbox : public COleDispatchDriver
{
public:
	IPropertyManagerPageTextbox() {}		// Calls COleDispatchDriver default constructor
	IPropertyManagerPageTextbox(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IPropertyManagerPageTextbox(const IPropertyManagerPageTextbox& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CString GetText();
	void SetText(LPCTSTR lpszNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// IPropertyManagerPageCombobox wrapper class

class IPropertyManagerPageCombobox : public COleDispatchDriver
{
public:
	IPropertyManagerPageCombobox() {}		// Calls COleDispatchDriver default constructor
	IPropertyManagerPageCombobox(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IPropertyManagerPageCombobox(const IPropertyManagerPageCombobox& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	void AddItems(const VARIANT& Texts);
	void IAddItems(short TextCount, BSTR* Texts);
	void Clear();
	short GetCurrentSelection();
	void SetCurrentSelection(short nNewValue);
	short GetHeight();
	void SetHeight(short nNewValue);
	CString GetItemText(short Item);
	long GetStyle();
	void SetStyle(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// IPropertyManagerPageActiveX wrapper class

class IPropertyManagerPageActiveX : public COleDispatchDriver
{
public:
	IPropertyManagerPageActiveX() {}		// Calls COleDispatchDriver default constructor
	IPropertyManagerPageActiveX(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IPropertyManagerPageActiveX(const IPropertyManagerPageActiveX& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	short GetHeight();
	void SetHeight(short nNewValue);
	BOOL SetClass(LPCTSTR ClassID, LPCTSTR LicenseKey);
	LPDISPATCH GetControl();
	LPUNKNOWN IGetControl();
};
/////////////////////////////////////////////////////////////////////////////
// IPropertyManagerPageBitmapButton wrapper class

class IPropertyManagerPageBitmapButton : public COleDispatchDriver
{
public:
	IPropertyManagerPageBitmapButton() {}		// Calls COleDispatchDriver default constructor
	IPropertyManagerPageBitmapButton(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IPropertyManagerPageBitmapButton(const IPropertyManagerPageBitmapButton& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL GetChecked();
	void SetChecked(BOOL bNewValue);
	BOOL GetIsCheckable();
	void SetIsCheckable(BOOL bNewValue);
	BOOL SetBitmaps(long ModuleHandle, long BitmapUp, long BitmapDown, long BitmapDisabled);
	BOOL SetStandardBitmaps(long Bitmap);
	BOOL SetBitmapsByName(LPCTSTR BitmapUp, LPCTSTR BitmapDown, LPCTSTR BitmapDisabled);
};
/////////////////////////////////////////////////////////////////////////////
// IProjectionCurveFeatureData wrapper class

class IProjectionCurveFeatureData : public COleDispatchDriver
{
public:
	IProjectionCurveFeatureData() {}		// Calls COleDispatchDriver default constructor
	IProjectionCurveFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IProjectionCurveFeatureData(const IProjectionCurveFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	BOOL IAccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
	BOOL GetReverse();
	void SetReverse(BOOL bNewValue);
	VARIANT GetFaceArray();
	void SetFaceArray(const VARIANT& newValue);
	long GetFaceArrayCount();
	LPDISPATCH IGetFaceArray(long FaceCount);
	void ISetFaceArray(long FaceCount, LPDISPATCH* ArrayDataIn);
	LPDISPATCH GetSketch();
	void SetSketch(LPDISPATCH newValue);
	BOOL IAccessSelections2(LPDISPATCH TopDoc, LPDISPATCH Component);
};
/////////////////////////////////////////////////////////////////////////////
// IScaleFeatureData wrapper class

class IScaleFeatureData : public COleDispatchDriver
{
public:
	IScaleFeatureData() {}		// Calls COleDispatchDriver default constructor
	IScaleFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IScaleFeatureData(const IScaleFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	void GetScale(double* X, double* Y, double* Z, BOOL* Uniform);
	void SetScale(double X, double Y, double Z, BOOL Uniform);
	double GetScaleX();
	void SetScaleX(double newValue);
	double GetScaleY();
	void SetScaleY(double newValue);
	double GetScaleZ();
	void SetScaleZ(double newValue);
	long GetType();
	void SetType(long nNewValue);
	BOOL GetIsUniform();
	void SetIsUniform(BOOL bNewValue);
	LPDISPATCH GetCoordinateSystem();
	void SetCoordinateSystem(LPDISPATCH newValue);
	BOOL IAccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
	long GetBodiesCount();
	VARIANT GetBodies();
	void SetBodies(const VARIANT& newValue);
	LPDISPATCH IGetBodies(long Count);
	void ISetBodies(long Count, LPDISPATCH* BodyArr);
	double GetScaleUniform();
	void SetScaleUniform(double newValue);
};
/////////////////////////////////////////////////////////////////////////////
// IShellFeatureData wrapper class

class IShellFeatureData : public COleDispatchDriver
{
public:
	IShellFeatureData() {}		// Calls COleDispatchDriver default constructor
	IShellFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IShellFeatureData(const IShellFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL IAccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
	double GetThickness();
	void SetThickness(double newValue);
	long GetDirection();
	void SetDirection(long nNewValue);
	long GetFacesRemovedCount();
	LPDISPATCH IGetFacesRemoved(long Count);
	void ISetFacesRemoved(long Count, LPDISPATCH* FaceArray);
	VARIANT GetFacesRemoved();
	void SetFacesRemoved(const VARIANT& newValue);
	long GetMultipleThicknessFacesCount();
	LPDISPATCH IGetMultipleThicknessFaces(long Count);
	void ISetMultipleThicknessFaces(long Count, LPDISPATCH* FaceArray);
	VARIANT GetMultipleThicknessFaces();
	void SetMultipleThicknessFaces(const VARIANT& newValue);
	double GetMultipleThicknessAtIndex(long Index);
	void SetMultipleThicknessAtIndex(long Index, double Thickness);
};
/////////////////////////////////////////////////////////////////////////////
// ISweepFeatureData wrapper class

class ISweepFeatureData : public COleDispatchDriver
{
public:
	ISweepFeatureData() {}		// Calls COleDispatchDriver default constructor
	ISweepFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISweepFeatureData(const ISweepFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL IAccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
	LPDISPATCH GetProfile();
	void SetProfile(LPDISPATCH newValue);
	LPDISPATCH GetPath();
	void SetPath(LPDISPATCH newValue);
	short GetTwistControlType();
	void SetTwistControlType(short nNewValue);
	BOOL GetMaintainTangency();
	void SetMaintainTangency(BOOL bNewValue);
	BOOL GetAdvancedSmoothing();
	void SetAdvancedSmoothing(BOOL bNewValue);
	BOOL GetAlignWithEndFaces();
	void SetAlignWithEndFaces(BOOL bNewValue);
	LPDISPATCH IGetGuideCurves(short Count);
	void ISetGuideCurves(short Count, LPDISPATCH* PDisp);
	VARIANT GetGuideCurves();
	void SetGuideCurves(const VARIANT& newValue);
	short GetStartTangencyType();
	void SetStartTangencyType(short nNewValue);
	short GetEndTangencyType();
	void SetEndTangencyType(short nNewValue);
	BOOL IsThinFeature();
	short GetThinWallType();
	void SetThinWallType(short nNewValue);
	double GetWallThickness(BOOL Forward);
	void SetWallThickness(BOOL Forward, double WallThickness);
	short GetGuideCurvesCount();
	BOOL IsBossFeature();
	LPDISPATCH GetStartDirectionVector();
	void SetStartDirectionVector(LPDISPATCH newValue);
	LPDISPATCH GetEndDirectionVector();
	void SetEndDirectionVector(LPDISPATCH newValue);
	BOOL GetTangentPropagation();
	void SetTangentPropagation(BOOL bNewValue);
	long GetPathType();
	VARIANT GetGuideCurvesType();
	long IGetGuideCurvesType(long Count);
	BOOL GetMerge();
	void SetMerge(BOOL bNewValue);
	BOOL GetFeatureScope();
	void SetFeatureScope(BOOL bNewValue);
	BOOL GetAutoSelect();
	void SetAutoSelect(BOOL bNewValue);
	VARIANT GetFeatureScopeBodies();
	void SetFeatureScopeBodies(const VARIANT& newValue);
	long GetFeatureScopeBodiesCount();
	LPDISPATCH IGetFeatureScopeBodies(long Count);
	void ISetFeatureScopeBodies(long Count, LPDISPATCH* BodyArr);
	BOOL GetMergeSmoothFaces();
	void SetMergeSmoothFaces(BOOL bNewValue);
	double GetTwistAngle();
	void SetTwistAngle(double Angle);
	long GetPathAlignmentType();
	void SetPathAlignmentType(long nNewValue);
	LPDISPATCH GetPathAlignmentDirectionVector(long* Type);
	void SetPathAlignmentDirectionVector(LPDISPATCH Dir);
};
/////////////////////////////////////////////////////////////////////////////
// ILoftFeatureData wrapper class

class ILoftFeatureData : public COleDispatchDriver
{
public:
	ILoftFeatureData() {}		// Calls COleDispatchDriver default constructor
	ILoftFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ILoftFeatureData(const ILoftFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL IAccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
	short GetProfileCount();
	LPDISPATCH IGetProfiles(short Count);
	void ISetProfiles(short Count, LPDISPATCH* PDisp);
	VARIANT GetProfiles();
	void SetProfiles(const VARIANT& newValue);
	short GetGuideTangencyType(short GuideIndex);
	void SetGuideTangencyType(short GuideIndex, short TangType);
	BOOL GetMaintainTangency();
	void SetMaintainTangency(BOOL bNewValue);
	BOOL GetAdvancedSmoothing();
	void SetAdvancedSmoothing(BOOL bNewValue);
	BOOL GetClose();
	void SetClose(BOOL bNewValue);
	short GetGuideCurvesCount();
	LPDISPATCH IGetGuideCurves(short Count);
	void ISetGuideCurves(short Count, LPDISPATCH* PDisp);
	VARIANT GetGuideCurves();
	void SetGuideCurves(const VARIANT& newValue);
	short GetStartTangencyType();
	void SetStartTangencyType(short nNewValue);
	short GetEndTangencyType();
	void SetEndTangencyType(short nNewValue);
	BOOL IsThinFeature();
	short GetThinWallType();
	void SetThinWallType(short nNewValue);
	double GetWallThickness(BOOL Forward);
	void SetWallThickness(BOOL Forward, double WallThickness);
	BOOL IsBossFeature();
	LPDISPATCH GetStartDirectionVector();
	void SetStartDirectionVector(LPDISPATCH newValue);
	double GetStartTangentLength();
	void SetStartTangentLength(double newValue);
	BOOL GetReverseStartTangentDirection();
	void SetReverseStartTangentDirection(BOOL bNewValue);
	LPDISPATCH GetEndDirectionVector();
	void SetEndDirectionVector(LPDISPATCH newValue);
	double GetEndTangentLength();
	void SetEndTangentLength(double newValue);
	BOOL GetReverseEndTangentDirection();
	void SetReverseEndTangentDirection(BOOL bNewValue);
	LPDISPATCH GetCenterLine();
	void SetCenterLine(LPDISPATCH newValue);
	VARIANT GetGuideCurvesType();
	long IGetGuideCurvesType(long Count);
	BOOL GetMerge();
	void SetMerge(BOOL bNewValue);
	BOOL GetFeatureScope();
	void SetFeatureScope(BOOL bNewValue);
	BOOL GetAutoSelect();
	void SetAutoSelect(BOOL bNewValue);
	VARIANT GetFeatureScopeBodies();
	void SetFeatureScopeBodies(const VARIANT& newValue);
	long GetFeatureScopeBodiesCount();
	LPDISPATCH IGetFeatureScopeBodies(long Count);
	void ISetFeatureScopeBodies(long Count, LPDISPATCH* BodyArr);
	double GetNumberOfSections();
	void SetNumberOfSections(double newValue);
	BOOL GetStartConstraintApplyToAll();
	void SetStartConstraintApplyToAll(BOOL bNewValue);
	BOOL GetEndConstraintApplyToAll();
	void SetEndConstraintApplyToAll(BOOL bNewValue);
	long GetGuideCurveInfluence();
	void SetGuideCurveInfluence(long nNewValue);
	double GetStartConstraintDraftAngle();
	void SetStartConstraintDraftAngle(double newValue);
	BOOL GetStartConstraintDraftAngleDirection();
	void SetStartConstraintDraftAngleDirection(BOOL bNewValue);
	double GetEndConstraintDraftAngle();
	void SetEndConstraintDraftAngle(double newValue);
	BOOL GetEndConstraintDraftAngleDirection();
	void SetEndConstraintDraftAngleDirection(BOOL bNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// IThickenFeatureData wrapper class

class IThickenFeatureData : public COleDispatchDriver
{
public:
	IThickenFeatureData() {}		// Calls COleDispatchDriver default constructor
	IThickenFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IThickenFeatureData(const IThickenFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL IAccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
	LPDISPATCH GetSurface();
	void SetSurface(LPDISPATCH newValue);
	double GetThickness();
	void SetThickness(double newValue);
	short GetThicknessSide();
	void SetThicknessSide(short nNewValue);
	BOOL GetFillVolume();
	void SetFillVolume(BOOL bNewValue);
	BOOL GetMerge();
	void SetMerge(BOOL bNewValue);
	BOOL GetFeatureScope();
	void SetFeatureScope(BOOL bNewValue);
	BOOL GetAutoSelect();
	void SetAutoSelect(BOOL bNewValue);
	VARIANT GetFeatureScopeBodies();
	void SetFeatureScopeBodies(const VARIANT& newValue);
	long GetFeatureScopeBodiesCount();
	LPDISPATCH IGetFeatureScopeBodies(long Count);
	void ISetFeatureScopeBodies(long Count, LPDISPATCH* BodyArr);
	BOOL IsBossFeature();
};
/////////////////////////////////////////////////////////////////////////////
// ISurfaceCutFeatureData wrapper class

class ISurfaceCutFeatureData : public COleDispatchDriver
{
public:
	ISurfaceCutFeatureData() {}		// Calls COleDispatchDriver default constructor
	ISurfaceCutFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISurfaceCutFeatureData(const ISurfaceCutFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL IAccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
	LPDISPATCH GetSurfaceForCut();
	void SetSurfaceForCut(LPDISPATCH newValue);
	BOOL GetFlip();
	void SetFlip(BOOL bNewValue);
	short GetBodyIndexKept();
};
/////////////////////////////////////////////////////////////////////////////
// IReplaceFaceFeatureData wrapper class

class IReplaceFaceFeatureData : public COleDispatchDriver
{
public:
	IReplaceFaceFeatureData() {}		// Calls COleDispatchDriver default constructor
	IReplaceFaceFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IReplaceFaceFeatureData(const IReplaceFaceFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL IAccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
	long GetReplacementSurfacesCount();
	LPDISPATCH IGetReplacementSurfaces(long Count);
	void ISetReplacementSurfaces(long Count, LPDISPATCH* SurfDisp);
	VARIANT GetReplacementSurfaces();
	void SetReplacementSurfaces(const VARIANT& newValue);
	long GetFacesForReplacementCount();
	LPDISPATCH IGetFacesForReplacement(long Count);
	void ISetFacesForReplacement(long Count, LPDISPATCH* SurfDisp);
	VARIANT GetFacesForReplacement();
	void SetFacesForReplacement(const VARIANT& newValue);
};
/////////////////////////////////////////////////////////////////////////////
// IMacroFeatureData wrapper class

class IMacroFeatureData : public COleDispatchDriver
{
public:
	IMacroFeatureData() {}		// Calls COleDispatchDriver default constructor
	IMacroFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IMacroFeatureData(const IMacroFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	BOOL IAccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
	CString GetMacroFileName();
	void SetMacroFileName(LPCTSTR lpszNewValue);
	CString GetModuleName();
	void SetModuleName(LPCTSTR lpszNewValue);
	CString GetProcedureName();
	void SetProcedureName(LPCTSTR lpszNewValue);
	VARIANT GetModuleNames();
	long GetModuleCount();
	void IGetModuleNames(long ModuleCount, BSTR* ModuleNames);
	VARIANT GetProcedureNames(LPCTSTR ModuleName);
	long GetProcedureCount(LPCTSTR ModuleName);
	void IGetProcedureNames(LPCTSTR ModuleName, long ProcedureCount, BSTR* ProcedureNames);
	CString GetPropertyManagerHandleMacroFileName();
	void SetPropertyManagerHandleMacroFileName(LPCTSTR lpszNewValue);
	CString GetPropertyManagerHandleModuleName();
	void SetPropertyManagerHandleModuleName(LPCTSTR lpszNewValue);
	CString GetPropertyManagerHandleProcedureName();
	void SetPropertyManagerHandleProcedureName(LPCTSTR lpszNewValue);
	VARIANT GetPropertyManagerHandleModuleNames();
	long GetPropertyManagerHandleModuleCount();
	void IGetPropertyManagerHandleModuleNames(long ModuleCount, BSTR* ModuleNames);
	VARIANT GetPropertyManagerHandleProcedureNames(LPCTSTR ModuleName);
	long GetPropertyManagerHandleProcedureCount(LPCTSTR ModuleName);
	void IGetPropertyManagerHandleProcedureNames(LPCTSTR ModuleName, long ProcedureCount, BSTR* ProcedureNames);
	void GetSelections(VARIANT* Objects, VARIANT* ObjectTypes, VARIANT* SelMarks);
	void SetSelections(const VARIANT& Objects, const VARIANT& SelMarks);
	long GetSelectionCount();
	void IGetSelections(long SelCount, LPDISPATCH* Objects, long* ObjectTypes, long* SelMarks);
	void ISetSelections(long SelCount, LPDISPATCH* Objects, long* SelMarks);
	void GetParameters(VARIANT* ParamNames, VARIANT* ParamTypes, VARIANT* ParamValues);
	void SetParameters(const VARIANT& ParamNames, const VARIANT& ParamTypes, const VARIANT& ParamValues);
	long GetParameterCount();
	void IGetParameters(long ParamCount, BSTR* ParamNames, long* ParamTypes, BSTR* ParamValues);
	void ISetParameters(long ParamCount, BSTR* ParamNames, long* ParamTypes, BSTR* ParamValues);
	void GetIntegerByName(LPCTSTR ParamName, long* ParamValue);
	void SetIntegerByName(LPCTSTR ParamName, long ParamValue);
	void GetDoubleByName(LPCTSTR ParamName, double* ParamValue);
	void SetDoubleByName(LPCTSTR ParamName, double ParamValue);
	void GetStringByName(LPCTSTR ParamName, BSTR* ParamValue);
	void SetStringByName(LPCTSTR ParamName, LPCTSTR ParamValue);
	LPDISPATCH GetEditBody();
	void SetEditBody(LPDISPATCH newValue);
	BOOL GetFaceUserId(LPDISPATCH Face, long* Id1, long* Id2);
	BOOL SetFaceUserId(LPDISPATCH Face, long Id1, long Id2);
	BOOL GetEdgeUserId(LPDISPATCH Edge, long* Id1, long* Id2);
	BOOL SetEdgeUserId(LPDISPATCH Edge, long Id1, long Id2);
	void GetSelections2(VARIANT* Objects, VARIANT* ObjectTypes, VARIANT* SelMarks, VARIANT* DrViews);
	void SetSelections2(const VARIANT& Objects, const VARIANT& SelMarks, const VARIANT& DrViews);
	void IGetSelections2(long SelCount, LPDISPATCH* Objects, long* ObjectTypes, long* SelMarks, LPDISPATCH* DrViews);
	void ISetSelections2(long SelCount, LPDISPATCH* Objects, long* SelMarks, LPDISPATCH* DrViews);
	long GetFaceIdType(LPDISPATCH Face);
	long GetEdgeIdType(LPDISPATCH Edge);
	void GetEntitiesNeedUserId(LPDISPATCH Body, VARIANT* Faces, VARIANT* Edges);
	void GetEntitiesNeedUserIdCount(LPDISPATCH Body, long* FaceCount, long* EdgeCount);
	void IGetEntitiesNeedUserId(LPDISPATCH Body, long FaceCount, LPDISPATCH* Faces, long EdgeCount, LPDISPATCH* Edges);
	BOOL IsCOMFeature();
	CString GetProgId();
	CString GetSecurityHandleMacroFileName();
	void SetSecurityHandleMacroFileName(LPCTSTR lpszNewValue);
	CString GetSecurityHandleModuleName();
	void SetSecurityHandleModuleName(LPCTSTR lpszNewValue);
	CString GetSecurityHandleProcedureName();
	void SetSecurityHandleProcedureName(LPCTSTR lpszNewValue);
	CString GetBaseName();
	VARIANT GetDisplayDimensions();
	long GetDisplayDimensionCount();
	void IGetDisplayDimensions(long DimCount, LPDISPATCH* Dims);
	VARIANT GetIconFiles();
	void SetIconFiles(const VARIANT& newValue);
	long GetIconFileCount();
	void IGetIconFiles(long IconCount, BSTR* IconFiles);
	void ISetIconFiles(long IconCount, BSTR* IconFiles);
	LPDISPATCH GetPatternTransform();
	void GetSelections3(VARIANT* Objects, VARIANT* ObjectTypes, VARIANT* SelMarks, VARIANT* DrViews, VARIANT* ComponentXForms);
	void IGetSelections3(long SelCount, LPDISPATCH* Objects, long* ObjectTypes, long* SelMarks, LPDISPATCH* DrViews, LPDISPATCH* ComponentXForms);
	LPDISPATCH GetEditTargetTransform();
	LPDISPATCH GetFeatureTransform();
	void SetFeatureTransform(LPDISPATCH newValue);
	VARIANT GetParents();
	void SetParents(const VARIANT& newValue);
	long GetParentsCount();
	void IGetParents(long ParentCount, LPDISPATCH* PFeatures);
	void ISetParents(long ParentCount, LPDISPATCH* PFeatures);
};
/////////////////////////////////////////////////////////////////////////////
// ICurveDrivenPatternFeatureData wrapper class

class ICurveDrivenPatternFeatureData : public COleDispatchDriver
{
public:
	ICurveDrivenPatternFeatureData() {}		// Calls COleDispatchDriver default constructor
	ICurveDrivenPatternFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ICurveDrivenPatternFeatureData(const ICurveDrivenPatternFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	BOOL IAccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
	LPDISPATCH GetD1Direction();
	void SetD1Direction(LPDISPATCH newValue);
	LPDISPATCH GetD2Direction();
	void SetD2Direction(LPDISPATCH newValue);
	BOOL GetD1ReverseDirection();
	void SetD1ReverseDirection(BOOL bNewValue);
	BOOL GetD2ReverseDirection();
	void SetD2ReverseDirection(BOOL bNewValue);
	long GetD1InstanceCount();
	void SetD1InstanceCount(long nNewValue);
	long GetD2InstanceCount();
	void SetD2InstanceCount(long nNewValue);
	BOOL GetD1IsEqualSpaced();
	void SetD1IsEqualSpaced(BOOL bNewValue);
	BOOL GetD2IsEqualSpaced();
	void SetD2IsEqualSpaced(BOOL bNewValue);
	double GetD1Spacing();
	void SetD1Spacing(double newValue);
	double GetD2Spacing();
	void SetD2Spacing(double newValue);
	BOOL GetDir2Specified();
	void SetDir2Specified(BOOL bNewValue);
	BOOL GetD2PatternSeedOnly();
	void SetD2PatternSeedOnly(BOOL bNewValue);
	long GetD1CurveMethod();
	void SetD1CurveMethod(long nNewValue);
	long GetD1AlignmentMethod();
	void SetD1AlignmentMethod(long nNewValue);
	VARIANT GetSkippedItemArray();
	void SetSkippedItemArray(const VARIANT& newValue);
	long GetSkippedItemCount();
	long IGetSkippedItemArray();
	void ISetSkippedItemArray(long FeatCount, long* ArrayDataIn);
	VARIANT GetPatternFeatureArray();
	void SetPatternFeatureArray(const VARIANT& newValue);
	long GetPatternFeatureCount();
	LPDISPATCH IGetPatternFeatureArray();
	void ISetPatternFeatureArray(long FeatCount, LPDISPATCH* ArrayDataIn);
	BOOL GetGeometryPattern();
	void SetGeometryPattern(BOOL bNewValue);
	BOOL GetVarySketch();
	void SetVarySketch(BOOL bNewValue);
	VARIANT GetPatternFaceArray();
	void SetPatternFaceArray(const VARIANT& newValue);
	long GetPatternFaceCount();
	LPDISPATCH IGetPatternFaceArray();
	void ISetPatternFaceArray(long FaceCount, LPDISPATCH* ArrayDataIn);
	VARIANT GetPatternBodyArray();
	void SetPatternBodyArray(const VARIANT& newValue);
	long GetPatternBodyCount();
	LPDISPATCH IGetPatternBodyArray();
	void ISetPatternBodyArray(long BodyCount, LPDISPATCH* ArrayDataIn);
};
/////////////////////////////////////////////////////////////////////////////
// IRipFeatureData wrapper class

class IRipFeatureData : public COleDispatchDriver
{
public:
	IRipFeatureData() {}		// Calls COleDispatchDriver default constructor
	IRipFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IRipFeatureData(const IRipFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	BOOL IAccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
	long GetEdgesCount();
	VARIANT GetEdges();
	void SetEdges(const VARIANT& newValue);
	LPDISPATCH IGetEdges(long EdgeCount);
	void ISetEdges(long EdgeCount, LPDISPATCH* EdgeArr);
	double GetGap();
	void SetGap(double newValue);
	long GetDirection(LPDISPATCH Edge);
	void SetDirection(LPDISPATCH Edge, long Dir);
};
/////////////////////////////////////////////////////////////////////////////
// IHemFeatureData wrapper class

class IHemFeatureData : public COleDispatchDriver
{
public:
	IHemFeatureData() {}		// Calls COleDispatchDriver default constructor
	IHemFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IHemFeatureData(const IHemFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	BOOL IAccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
	long GetEdgesCount();
	VARIANT GetEdges();
	void SetEdges(const VARIANT& newValue);
	LPDISPATCH IGetEdges(long EdgeCount);
	void ISetEdges(long EdgeCount, LPDISPATCH* EdgeArr);
	double GetMiterGap();
	void SetMiterGap(double newValue);
	BOOL GetReverseDirection();
	void SetReverseDirection(BOOL bNewValue);
	long GetBendPosition();
	void SetBendPosition(long nNewValue);
	long GetType();
	void SetType(long nNewValue);
	double GetLength();
	void SetLength(double newValue);
	double GetGapDistance();
	void SetGapDistance(double newValue);
	double GetAngle();
	void SetAngle(double newValue);
	double GetRadius();
	void SetRadius(double newValue);
	LPDISPATCH GetCustomBendAllowance();
	void SetCustomBendAllowance(LPDISPATCH PBendData);
	BOOL GetUseDefaultBendAllowance();
	void SetUseDefaultBendAllowance(BOOL bNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// IBreakCornerFeatureData wrapper class

class IBreakCornerFeatureData : public COleDispatchDriver
{
public:
	IBreakCornerFeatureData() {}		// Calls COleDispatchDriver default constructor
	IBreakCornerFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IBreakCornerFeatureData(const IBreakCornerFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	BOOL IAccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
	VARIANT GetEntities();
	void SetEntities(const VARIANT& newValue);
	long GetEntitiesCount();
	LPDISPATCH IGetEntities(long Count);
	void ISetEntities(long EntCount, LPDISPATCH* EntArray);
	long GetBreakType();
	void SetBreakType(long nNewValue);
	double GetDistance();
	void SetDistance(double newValue);
};
/////////////////////////////////////////////////////////////////////////////
// IJogFeatureData wrapper class

class IJogFeatureData : public COleDispatchDriver
{
public:
	IJogFeatureData() {}		// Calls COleDispatchDriver default constructor
	IJogFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IJogFeatureData(const IJogFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	BOOL IAccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
	LPDISPATCH GetFixedFace();
	void SetFixedFace(LPDISPATCH newValue);
	BOOL GetUseDefaultBendRadius();
	void SetUseDefaultBendRadius(BOOL bNewValue);
	double GetBendRadius();
	void SetBendRadius(double newValue);
	double GetJogAngle();
	void SetJogAngle(double newValue);
	long GetOffsetType();
	void SetOffsetType(long nNewValue);
	LPDISPATCH GetOffsetReference();
	void SetOffsetReference(LPDISPATCH newValue);
	BOOL GetReverseOffset();
	void SetReverseOffset(BOOL bNewValue);
	BOOL GetReverseDirection();
	void SetReverseDirection(BOOL bNewValue);
	double GetOffsetDistance();
	void SetOffsetDistance(double newValue);
	long GetDimensionPositionType();
	void SetDimensionPositionType(long nNewValue);
	BOOL GetFixProjectedLength();
	void SetFixProjectedLength(BOOL bNewValue);
	long GetJogPositionType();
	void SetJogPositionType(long nNewValue);
	VARIANT GetFixedPoint();
	void SetFixedPoint(const VARIANT& newValue);
	double IGetFixedPoint();
	void ISetFixedPoint(double* Point);
	long GetOffsetReferenceType();
	LPDISPATCH GetCustomBendAllowance();
	void SetCustomBendAllowance(LPDISPATCH PBendData);
	BOOL GetUseDefaultBendAllowance();
	void SetUseDefaultBendAllowance(BOOL bNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// ISurfExtrudeFeatureData wrapper class

class ISurfExtrudeFeatureData : public COleDispatchDriver
{
public:
	ISurfExtrudeFeatureData() {}		// Calls COleDispatchDriver default constructor
	ISurfExtrudeFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISurfExtrudeFeatureData(const ISurfExtrudeFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	BOOL IAccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
	long GetEndCondition(BOOL Forward);
	void SetEndCondition(BOOL Forward, long EndCondition);
	double GetDepth(BOOL Forward);
	void SetDepth(BOOL Forward, double Depth);
	LPDISPATCH GetFace(BOOL Forward);
	void SetFace(BOOL Forward, LPDISPATCH Face);
	LPDISPATCH IGetFace(BOOL Forward);
	void ISetFace(BOOL Forward, LPDISPATCH Face);
	LPDISPATCH GetVertex(BOOL Forward);
	void SetVertex(BOOL Forward, LPDISPATCH Vtx);
	LPDISPATCH IGetVertex(BOOL Forward);
	void ISetVertex(BOOL Forward, LPDISPATCH Vtx);
	BOOL GetReverseDirection();
	void SetReverseDirection(BOOL bNewValue);
	BOOL GetBothDirections();
	void SetBothDirections(BOOL bNewValue);
	BOOL GetReverseOffset(BOOL Fwd);
	void SetReverseOffset(BOOL Fwd, BOOL RevOffset);
	BOOL GetTranslateSurface(BOOL Fwd);
	void SetTranslateSurface(BOOL Fwd, BOOL Trans);
};
/////////////////////////////////////////////////////////////////////////////
// ISurfRevolveFeatureData wrapper class

class ISurfRevolveFeatureData : public COleDispatchDriver
{
public:
	ISurfRevolveFeatureData() {}		// Calls COleDispatchDriver default constructor
	ISurfRevolveFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISurfRevolveFeatureData(const ISurfRevolveFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	double GetRevolutionAngle(BOOL Forward);
	void SetRevolutionAngle(BOOL Forward, double Angle);
	long GetType();
	void SetType(long nNewValue);
	BOOL GetReverseDirection();
	void SetReverseDirection(BOOL bNewValue);
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	BOOL IAccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
};
/////////////////////////////////////////////////////////////////////////////
// ISurfaceOffsetFeatureData wrapper class

class ISurfaceOffsetFeatureData : public COleDispatchDriver
{
public:
	ISurfaceOffsetFeatureData() {}		// Calls COleDispatchDriver default constructor
	ISurfaceOffsetFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISurfaceOffsetFeatureData(const ISurfaceOffsetFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	VARIANT GetFaces();
	void SetFaces(const VARIANT& newValue);
	long GetFacesCount();
	LPDISPATCH IGetFaces(long Count);
	void ISetFaces(long Count, LPDISPATCH* FaceArr);
	double GetDistance();
	void SetDistance(double newValue);
	BOOL GetFlip();
	void SetFlip(BOOL bNewValue);
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	BOOL IAccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
};
/////////////////////////////////////////////////////////////////////////////
// ISurfaceKnitFeatureData wrapper class

class ISurfaceKnitFeatureData : public COleDispatchDriver
{
public:
	ISurfaceKnitFeatureData() {}		// Calls COleDispatchDriver default constructor
	ISurfaceKnitFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISurfaceKnitFeatureData(const ISurfaceKnitFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	BOOL IAccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
	long GetEntitiesCount();
	VARIANT GetEntities();
	void SetEntities(const VARIANT& newValue);
	LPDISPATCH IGetEntities(long Count);
	void ISetEntities(long Count, LPDISPATCH* FaceArr);
	LPDISPATCH GetSeedFace();
	void SetSeedFace(LPDISPATCH newValue);
};
/////////////////////////////////////////////////////////////////////////////
// ISurfaceExtendFeatureData wrapper class

class ISurfaceExtendFeatureData : public COleDispatchDriver
{
public:
	ISurfaceExtendFeatureData() {}		// Calls COleDispatchDriver default constructor
	ISurfaceExtendFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISurfaceExtendFeatureData(const ISurfaceExtendFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetItemsCount();
	VARIANT GetItems();
	void SetItems(const VARIANT& newValue);
	LPDISPATCH IGetItems(long Count);
	void ISetItems(long Count, LPDISPATCH* ItemArr);
	long GetEndCondition();
	void SetEndCondition(long nNewValue);
	LPDISPATCH GetFace();
	void SetFace(LPDISPATCH newValue);
	LPDISPATCH GetIFace();
	void SetIFace(LPDISPATCH newValue);
	LPDISPATCH GetVertex();
	void SetVertex(LPDISPATCH newValue);
	LPDISPATCH GetIVertex();
	void SetIVertex(LPDISPATCH newValue);
	double GetDistance();
	void SetDistance(double newValue);
	long GetType();
	void SetType(long nNewValue);
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	BOOL IAccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
	long GetPropagatingEdgesCount();
	VARIANT GetPropagatingEdges();
	void SetPropagatingEdges(const VARIANT& newValue);
	LPDISPATCH IGetPropagatingEdges(long Count);
	void ISetPropagatingEdges(long Count, LPDISPATCH* EdgeArr);
};
/////////////////////////////////////////////////////////////////////////////
// ISurfacePlanarFeatureData wrapper class

class ISurfacePlanarFeatureData : public COleDispatchDriver
{
public:
	ISurfacePlanarFeatureData() {}		// Calls COleDispatchDriver default constructor
	ISurfacePlanarFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISurfacePlanarFeatureData(const ISurfacePlanarFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	BOOL IAccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
	long GetBoundingEntitiesCount();
	LPDISPATCH IGetBoundingEntities(long Count);
	LPDISPATCH ISetBoundingEntities(long Count);
	VARIANT GetBoundingEntities();
	void SetBoundingEntities(const VARIANT& newValue);
};
/////////////////////////////////////////////////////////////////////////////
// ISurfaceTrimFeatureData wrapper class

class ISurfaceTrimFeatureData : public COleDispatchDriver
{
public:
	ISurfaceTrimFeatureData() {}		// Calls COleDispatchDriver default constructor
	ISurfaceTrimFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISurfaceTrimFeatureData(const ISurfaceTrimFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	BOOL IAccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
	long GetType();
	long GetTrimToolsCount();
	LPDISPATCH IGetTrimTools(long Count);
	void ISetTrimTools(long Count, LPDISPATCH* DispArr);
	VARIANT GetTrimTools();
	void SetTrimTools(const VARIANT& newValue);
	long GetPiecesToKeepCount();
	LPDISPATCH IGetPiecesToKeep(long Count);
	void ISetPiecesToKeep(long Count, LPDISPATCH* BodyArr);
	VARIANT GetPiecesToKeep();
	void SetPiecesToKeep(const VARIANT& newValue);
};
/////////////////////////////////////////////////////////////////////////////
// ISurfaceRadiateFeatureData wrapper class

class ISurfaceRadiateFeatureData : public COleDispatchDriver
{
public:
	ISurfaceRadiateFeatureData() {}		// Calls COleDispatchDriver default constructor
	ISurfaceRadiateFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISurfaceRadiateFeatureData(const ISurfaceRadiateFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	BOOL IAccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
	LPDISPATCH GetDirectionReference();
	void SetDirectionReference(LPDISPATCH newValue);
	BOOL GetFlip();
	void SetFlip(BOOL bNewValue);
	BOOL GetPropagateToTangentFaces();
	void SetPropagateToTangentFaces(BOOL bNewValue);
	double GetDistance();
	void SetDistance(double newValue);
	long GetRadiatedEntitiesCount();
	LPDISPATCH IGetRadiatedEntities(long Count);
	void ISetRadiatedEntities(long Count, LPDISPATCH* DispArr);
	VARIANT GetRadiatedEntities();
	void SetRadiatedEntities(const VARIANT& newValue);
};
/////////////////////////////////////////////////////////////////////////////
// IRefPlaneFeatureData wrapper class

class IRefPlaneFeatureData : public COleDispatchDriver
{
public:
	IRefPlaneFeatureData() {}		// Calls COleDispatchDriver default constructor
	IRefPlaneFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IRefPlaneFeatureData(const IRefPlaneFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	BOOL IAccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
	long GetType();
	void SetType(long nNewValue);
	BOOL GetAutoSize();
	void SetAutoSize(BOOL bNewValue);
	double GetAngle();
	void SetAngle(double newValue);
	double GetDistance();
	void SetDistance(double newValue);
	BOOL GetReverseDirection();
	void SetReverseDirection(BOOL bNewValue);
	BOOL GetOriginOnCurve();
	void SetOriginOnCurve(BOOL bNewValue);
	VARIANT GetSelections();
	void SetSelections(const VARIANT& newValue);
	long GetSelectionsCount();
	LPDISPATCH IGetSelections(long Count);
	void ISetSelections(long Count, LPDISPATCH* Entities);
	long GetProjectionType();
	void SetProjectionType(long nNewValue);
	BOOL GetUseNormalPlane();
	void SetUseNormalPlane(BOOL bNewValue);
	long GetSolutionIndex();
	void SetSolutionIndex(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// IRefPointFeatureData wrapper class

class IRefPointFeatureData : public COleDispatchDriver
{
public:
	IRefPointFeatureData() {}		// Calls COleDispatchDriver default constructor
	IRefPointFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IRefPointFeatureData(const IRefPointFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	BOOL IAccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
	long GetType();
	void SetType(long nNewValue);
	long GetAlongCurveOption();
	void SetAlongCurveOption(long nNewValue);
	double GetDistance();
	void SetDistance(double newValue);
	VARIANT GetSelections();
	void SetSelections(const VARIANT& newValue);
	long GetSelectionsCount();
	LPDISPATCH IGetSelections(long Count);
	void ISetSelections(long Count, LPDISPATCH* Entities);
};
/////////////////////////////////////////////////////////////////////////////
// IRuledSurfaceFeatureData wrapper class

class IRuledSurfaceFeatureData : public COleDispatchDriver
{
public:
	IRuledSurfaceFeatureData() {}		// Calls COleDispatchDriver default constructor
	IRuledSurfaceFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IRuledSurfaceFeatureData(const IRuledSurfaceFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
	long GetType();
	void SetType(long nNewValue);
	double GetDistance();
	void SetDistance(double newValue);
	long GetDirectionReference(LPDISPATCH* Ref1, long* Type1, LPDISPATCH* Ref2, long* Type2);
	void SetDirectionReference(LPDISPATCH Ref1, LPDISPATCH Ref2);
	double GetAngle();
	void SetAngle(double newValue);
	BOOL GetUseVector();
	void SetUseVector(BOOL bNewValue);
	void GetEdges(VARIANT* Edges, VARIANT* SideFlags);
	void SetEdges(const VARIANT& Edges, const VARIANT& SideFlags);
	long GetEdgesCount();
	void IGetEdges(long Count, LPDISPATCH* Entities, long* SideFlags);
	void ISetEdges(long Count, LPDISPATCH* Entities, long* SideFlags);
	BOOL GetTrimAndKnit();
	void SetTrimAndKnit(BOOL bNewValue);
	BOOL GetConnect();
	void SetConnect(BOOL bNewValue);
	LPDISPATCH GetDirectionVector();
	void SetDirectionVector(LPDISPATCH newValue);
};
/////////////////////////////////////////////////////////////////////////////
// ICavityFeatureData wrapper class

class ICavityFeatureData : public COleDispatchDriver
{
public:
	ICavityFeatureData() {}		// Calls COleDispatchDriver default constructor
	ICavityFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ICavityFeatureData(const ICavityFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
	long GetScaleType();
	void SetScaleType(long nNewValue);
	double GetUniformScale();
	void SetUniformScale(double newValue);
	BOOL GetUseUniformScale();
	void SetUseUniformScale(BOOL bNewValue);
	void GetScale(double* Xscale, double* YScale, double* ZScale);
	void SetScale(double Xscale, double YScale, double ZScale);
	VARIANT GetComponents();
	void SetComponents(const VARIANT& newValue);
	long GetComponentsCount();
	void IGetComponents(long Count, LPDISPATCH* Comps);
	void ISetComponents(long Count, LPDISPATCH* Comps);
};
/////////////////////////////////////////////////////////////////////////////
// ILoftedBendsFeatureData wrapper class

class ILoftedBendsFeatureData : public COleDispatchDriver
{
public:
	ILoftedBendsFeatureData() {}		// Calls COleDispatchDriver default constructor
	ILoftedBendsFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ILoftedBendsFeatureData(const ILoftedBendsFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL IAccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
	long GetProfileCount();
	LPDISPATCH IGetProfiles(long Count);
	void ISetProfiles(long Count, LPDISPATCH* PDisp);
	VARIANT GetProfiles();
	void SetProfiles(const VARIANT& newValue);
	double GetThickness();
	void SetThickness(double newValue);
	BOOL GetDirection();
	void SetDirection(BOOL bNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// IReferencePointCurveFeatureData wrapper class

class IReferencePointCurveFeatureData : public COleDispatchDriver
{
public:
	IReferencePointCurveFeatureData() {}		// Calls COleDispatchDriver default constructor
	IReferencePointCurveFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IReferencePointCurveFeatureData(const IReferencePointCurveFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
	BOOL GetClosedCurve();
	void SetClosedCurve(BOOL bNewValue);
	long GetThroughPointCount();
	VARIANT GetThroughPoints(VARIANT* Type);
	void SetThroughPoints(const VARIANT& Pts);
	LPDISPATCH IGetThroughPoints(long Count, long* Type);
	void ISetThroughPoints(long Count, LPDISPATCH* Pts);
};
/////////////////////////////////////////////////////////////////////////////
// IFreePointCurveFeatureData wrapper class

class IFreePointCurveFeatureData : public COleDispatchDriver
{
public:
	IFreePointCurveFeatureData() {}		// Calls COleDispatchDriver default constructor
	IFreePointCurveFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IFreePointCurveFeatureData(const IFreePointCurveFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	VARIANT GetPointArray();
	void SetPointArray(const VARIANT& newValue);
	long GetPointCount();
	double IGetPointArray();
	void ISetPointArray(long FeatCount, double* ArrayDataIn);
	BOOL SavePointsToFile(LPCTSTR FileName);
	BOOL LoadPointsFromFile(LPCTSTR FileName);
};
/////////////////////////////////////////////////////////////////////////////
// ICompositeCurveFeatureData wrapper class

class ICompositeCurveFeatureData : public COleDispatchDriver
{
public:
	ICompositeCurveFeatureData() {}		// Calls COleDispatchDriver default constructor
	ICompositeCurveFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ICompositeCurveFeatureData(const ICompositeCurveFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
	long GetEntitiesToJoinCount();
	VARIANT GetEntitiesToJoin(VARIANT* Type);
	void SetEntitiesToJoin(const VARIANT& EntVar);
	LPDISPATCH IGetEntitiesToJoin(long Count, long* Type);
	void ISetEntitiesToJoin(long Count, LPDISPATCH* Ents);
};
/////////////////////////////////////////////////////////////////////////////
// IHelixFeatureData wrapper class

class IHelixFeatureData : public COleDispatchDriver
{
public:
	IHelixFeatureData() {}		// Calls COleDispatchDriver default constructor
	IHelixFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IHelixFeatureData(const IHelixFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetDefinedBy();
	void SetDefinedBy(long nNewValue);
	double GetHeight();
	void SetHeight(double newValue);
	double GetPitch();
	void SetPitch(double newValue);
	double GetRevolution();
	void SetRevolution(double newValue);
	double GetStartingAngle();
	void SetStartingAngle(double newValue);
	BOOL GetReverseDirection();
	void SetReverseDirection(BOOL bNewValue);
	BOOL GetClockwise();
	void SetClockwise(BOOL bNewValue);
	BOOL GetTaper();
	void SetTaper(BOOL bNewValue);
	double GetTaperAngle();
	void SetTaperAngle(double newValue);
	BOOL GetTaperOutward();
	void SetTaperOutward(BOOL bNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// IImportedCurveFeatureData wrapper class

class IImportedCurveFeatureData : public COleDispatchDriver
{
public:
	IImportedCurveFeatureData() {}		// Calls COleDispatchDriver default constructor
	IImportedCurveFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IImportedCurveFeatureData(const IImportedCurveFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	VARIANT GetCurves();
	void SetCurves(const VARIANT& newValue);
	long GetCurveCount();
	LPDISPATCH IGetCurves(long Count);
	void ISetCurves(long Count, LPDISPATCH* DispArr);
	void SetBody(LPDISPATCH DispBody);
};
/////////////////////////////////////////////////////////////////////////////
// ICosmeticThreadFeatureData wrapper class

class ICosmeticThreadFeatureData : public COleDispatchDriver
{
public:
	ICosmeticThreadFeatureData() {}		// Calls COleDispatchDriver default constructor
	ICosmeticThreadFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ICosmeticThreadFeatureData(const ICosmeticThreadFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	BOOL IAccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
	long GetApplyThread();
	void SetApplyThread(long nNewValue);
	double GetBlindDepth();
	void SetBlindDepth(double newValue);
	double GetDiameter();
	void SetDiameter(double newValue);
	long GetDiameterType();
	CString GetThreadCallout();
	void SetThreadCallout(LPCTSTR lpszNewValue);
	LPDISPATCH GetEdge();
	void SetEdge(LPDISPATCH newValue);
	VARIANT GetPatternedTransforms();
	long GetPatternedTransformsCount();
	LPDISPATCH IGetPatternedTransforms(long Count);
};
/////////////////////////////////////////////////////////////////////////////
// ISketchRegion wrapper class

class ISketchRegion : public COleDispatchDriver
{
public:
	ISketchRegion() {}		// Calls COleDispatchDriver default constructor
	ISketchRegion(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISketchRegion(const ISketchRegion& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetSketch();
	long GetEdgesCount();
	VARIANT GetEdges();
	LPDISPATCH IGetEdges(long Count);
	BOOL Select(BOOL Append, long Mark);
	BOOL DeSelect();
	BOOL Select2(BOOL Append, LPDISPATCH Data);
};
/////////////////////////////////////////////////////////////////////////////
// ISketchContour wrapper class

class ISketchContour : public COleDispatchDriver
{
public:
	ISketchContour() {}		// Calls COleDispatchDriver default constructor
	ISketchContour(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISketchContour(const ISketchContour& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetSketch();
	long GetEdgesCount();
	VARIANT GetEdges();
	LPDISPATCH IGetEdges(long Count);
	long GetSketchSegmentsCount();
	VARIANT GetSketchSegments();
	LPDISPATCH IGetSketchSegments(long Count);
	BOOL Select(BOOL Append, long Mark);
	BOOL DeSelect();
	BOOL Select2(BOOL Append, LPDISPATCH Data);
};
/////////////////////////////////////////////////////////////////////////////
// IMateInPlace wrapper class

class IMateInPlace : public COleDispatchDriver
{
public:
	IMateInPlace() {}		// Calls COleDispatchDriver default constructor
	IMateInPlace(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IMateInPlace(const IMateInPlace& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetMateEntityCount();
	LPDISPATCH GetMateEntity(long NIndex);
	long GetMateEntityType(long NIndex);
	CString GetMateComponentName(long NIndex);
	LPDISPATCH GetComponent();
};
/////////////////////////////////////////////////////////////////////////////
// IRefAxisFeatureData wrapper class

class IRefAxisFeatureData : public COleDispatchDriver
{
public:
	IRefAxisFeatureData() {}		// Calls COleDispatchDriver default constructor
	IRefAxisFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IRefAxisFeatureData(const IRefAxisFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	BOOL IAccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
	long GetType();
	void SetType(long nNewValue);
	VARIANT GetSelections(VARIANT* EntitiesTypeVar);
	BOOL SetSelections(const VARIANT& EntitiesVar);
	long GetSelectionsCount();
	LPDISPATCH IGetSelections(long Count, long* TypeArr);
	BOOL ISetSelections(long Count, LPDISPATCH* EntArr);
};
/////////////////////////////////////////////////////////////////////////////
// IEdgePoint wrapper class

class IEdgePoint : public COleDispatchDriver
{
public:
	IEdgePoint() {}		// Calls COleDispatchDriver default constructor
	IEdgePoint(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IEdgePoint(const IEdgePoint& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	double GetPosition();
	void SetPosition(double newValue);
	BOOL Select(BOOL BAppend, long SelMark);
	void GetPointCoordinates(double* X, double* Y, double* Z);
	LPDISPATCH GetEntity();
	void SetEntity(LPDISPATCH newValue);
};
/////////////////////////////////////////////////////////////////////////////
// IMateReference wrapper class

class IMateReference : public COleDispatchDriver
{
public:
	IMateReference() {}		// Calls COleDispatchDriver default constructor
	IMateReference(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IMateReference(const IMateReference& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	CString GetName();
	long GetReferenceEntityCount();
	LPDISPATCH GetReferenceEntity(long Index);
	long GetReferenceType(long Index);
	long GetReferenceAlignment(long Index);
	BOOL Edit(LPCTSTR BstrMateReferenceName, LPDISPATCH PrimaryReferenceEntity, long PrimaryReferenceType, long PrimaryReferenceAlignment, LPDISPATCH SecondaryReferenceEntity, long SecondaryReferenceType, long SecondaryReferenceAlignment, 
		LPDISPATCH TertiaryReferenceEntity, long TertiaryReferenceType, long TertiaryReferenceAlignment);
};
/////////////////////////////////////////////////////////////////////////////
// IPartingLineFeatureData wrapper class

class IPartingLineFeatureData : public COleDispatchDriver
{
public:
	IPartingLineFeatureData() {}		// Calls COleDispatchDriver default constructor
	IPartingLineFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IPartingLineFeatureData(const IPartingLineFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
	LPDISPATCH GetPullDirectionBase();
	void SetPullDirectionBase(LPDISPATCH newValue);
	long GetPullDirectionType();
	BOOL GetPullDirection();
	void SetPullDirection(BOOL bNewValue);
	VARIANT GetPartingLines();
	void SetPartingLines(const VARIANT& newValue);
	long GetPartingLinesCount();
	LPDISPATCH IGetPartingLines(long Count);
	void ISetPartingLines(long Count, LPDISPATCH* EntIn);
	BOOL DraftAnalysis(double Angle);
	long GetFacesByTypeCount(long Type);
	VARIANT GetFacesByType(long Type);
	LPDISPATCH IGetFacesByType(long Type, long Count);
	long Status();
	double GetAngle();
	void SetAngle(double newValue);
	BOOL GetSplitFaces();
	void SetSplitFaces(BOOL bNewValue);
	VARIANT GetEntitiesToSplit(VARIANT* TypeArr);
	void SetEntitiesToSplit(const VARIANT& PVar);
	long GetEntitiesToSplitCount();
	LPDISPATCH IGetEntitiesToSplit(long Count, long* TypeArr);
	void ISetEntitiesToSplit(long Count, LPDISPATCH* EntIn);
};
/////////////////////////////////////////////////////////////////////////////
// IPartingSurfaceFeatureData wrapper class

class IPartingSurfaceFeatureData : public COleDispatchDriver
{
public:
	IPartingSurfaceFeatureData() {}		// Calls COleDispatchDriver default constructor
	IPartingSurfaceFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IPartingSurfaceFeatureData(const IPartingSurfaceFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
	LPDISPATCH GetPullDirectionBase();
	void SetPullDirectionBase(LPDISPATCH newValue);
	long GetPullDirectionType();
	BOOL GetReverseAlignment();
	void SetReverseAlignment(BOOL bNewValue);
	VARIANT GetPartingLines();
	void SetPartingLines(const VARIANT& newValue);
	long GetPartingLinesType();
	long GetPartingLinesCount();
	LPDISPATCH IGetPartingLines(long Count);
	void ISetPartingLines(long Count, LPDISPATCH* EntIn);
	long GetPartingType();
	void SetPartingType(long nNewValue);
	double GetOffsetDistance();
	void SetOffsetDistance(double newValue);
	BOOL GetReverseOffsetDirection();
	void SetReverseOffsetDirection(BOOL bNewValue);
	double GetOffsetAngle();
	void SetOffsetAngle(double newValue);
	long GetTransitionType();
	void SetTransitionType(long nNewValue);
	double GetTransitionDistance();
	void SetTransitionDistance(double newValue);
	BOOL GetKnit();
	void SetKnit(BOOL bNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// IDeleteBodyFeatureData wrapper class

class IDeleteBodyFeatureData : public COleDispatchDriver
{
public:
	IDeleteBodyFeatureData() {}		// Calls COleDispatchDriver default constructor
	IDeleteBodyFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IDeleteBodyFeatureData(const IDeleteBodyFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
	long GetBodiesCount();
	VARIANT GetBodies();
	void SetBodies(const VARIANT& newValue);
	LPDISPATCH IGetBodies(long Count);
	void ISetBodies(long Count, LPDISPATCH* Bodies);
};
/////////////////////////////////////////////////////////////////////////////
// IShutOffSurfaceFeatureData wrapper class

class IShutOffSurfaceFeatureData : public COleDispatchDriver
{
public:
	IShutOffSurfaceFeatureData() {}		// Calls COleDispatchDriver default constructor
	IShutOffSurfaceFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IShutOffSurfaceFeatureData(const IShutOffSurfaceFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
	VARIANT GetEdges();
	void SetEdges(const VARIANT& newValue);
	long GetEdgeCount();
	LPDISPATCH IGetEdges(long Count);
	void ISetEdges(long Count, LPDISPATCH* EdgeArr);
	long GetLoopCount();
	VARIANT GetLoopEdges(long Index);
	long GetLoopEdgeCount(long Index);
	LPDISPATCH IGetLoopEdges(long Index, long Count);
	long GetLoopPatchType(long Index);
	void SetLoopPatchType(long Index, long nNewValue);
	LPDISPATCH GetFaceTangentTo(long Index);
	void FlipFaceTangentTo(long Index);
	long Status();
	void SetAllPatchTypes(long Type);
	BOOL GetKnit();
	void SetKnit(BOOL bNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// IToolingSplitFeatureData wrapper class

class IToolingSplitFeatureData : public COleDispatchDriver
{
public:
	IToolingSplitFeatureData() {}		// Calls COleDispatchDriver default constructor
	IToolingSplitFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IToolingSplitFeatureData(const IToolingSplitFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
	double GetDepth(long Dir);
	void SetDepth(long Dir, double newValue);
	BOOL GetInterlockSurface();
	void SetInterlockSurface(BOOL bNewValue);
	double GetAngle();
	void SetAngle(double newValue);
	VARIANT GetCoreSurfaces();
	void SetCoreSurfaces(const VARIANT& newValue);
	VARIANT GetCavitySurfaces();
	void SetCavitySurfaces(const VARIANT& newValue);
	VARIANT GetPartingSurfaces();
	void SetPartingSurfaces(const VARIANT& newValue);
	long GetCoreSurfacesCount();
	LPDISPATCH IGetCoreSurfaces(long Count);
	void ISetCoreSurfaces(long Count, LPDISPATCH* BodyArr);
	long GetCavitySurfacesCount();
	LPDISPATCH IGetCavitySurfaces(long Count);
	void ISetCavitySurfaces(long Count, LPDISPATCH* BodyArr);
	long GetPartingSurfacesCount();
	LPDISPATCH IGetPartingSurfaces(long Count);
	void ISetPartingSurfaces(long Count, LPDISPATCH* BodyArr);
};
/////////////////////////////////////////////////////////////////////////////
// ISplitBodyFeatureData wrapper class

class ISplitBodyFeatureData : public COleDispatchDriver
{
public:
	ISplitBodyFeatureData() {}		// Calls COleDispatchDriver default constructor
	ISplitBodyFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISplitBodyFeatureData(const ISplitBodyFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
	VARIANT GetTrimTools();
	void SetTrimTools(const VARIANT& newValue);
	long GetTrimToolsCount();
	LPDISPATCH IGetTrimTools(long Count);
	void ISetTrimTools(long Count, LPDISPATCH* DispArr);
	void GetSplitBodies(VARIANT* BodyVar, VARIANT* PathVar, VARIANT* FlagVar);
	void SetSplitBodies(const VARIANT& PathVar, const VARIANT& FlagVar);
	long GetSplitBodiesCount();
	void IGetSplitBodies(long Count, LPDISPATCH* BodyArr, BSTR* PathArr, BOOL* FlagArr);
	void ISetSplitBodies(long Count, BSTR* PathArr, BOOL* FlagArr);
	long GetState();
	void SetState(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// ITriadManipulator wrapper class

class ITriadManipulator : public COleDispatchDriver
{
public:
	ITriadManipulator() {}		// Calls COleDispatchDriver default constructor
	ITriadManipulator(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ITriadManipulator(const ITriadManipulator& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetDoNotShow();
	void SetDoNotShow(long nNewValue);
	LPDISPATCH GetOrigin();
	void SetOrigin(LPDISPATCH newValue);
	LPDISPATCH GetXAxis();
	void SetXAxis(LPDISPATCH newValue);
	LPDISPATCH GetYAxis();
	void SetYAxis(LPDISPATCH newValue);
	LPDISPATCH GetZAxis();
	void SetZAxis(LPDISPATCH newValue);
	void UpdateScale(double Scale);
	BOOL UpdatePosition();
	void SetCursor(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// IJoinFeatureData wrapper class

class IJoinFeatureData : public COleDispatchDriver
{
public:
	IJoinFeatureData() {}		// Calls COleDispatchDriver default constructor
	IJoinFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IJoinFeatureData(const IJoinFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
	long GetJoinedPartsCount();
	VARIANT GetJoinedParts();
	void SetJoinedParts(const VARIANT& newValue);
	LPDISPATCH IGetJoinedParts(long Count);
	void ISetJoinedParts(long Count, LPDISPATCH* Parts);
	BOOL GetHideParts();
	void SetHideParts(BOOL bNewValue);
	BOOL GetForceSurfaceContact();
	void SetForceSurfaceContact(BOOL bNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// IFillSurfaceFeatureData wrapper class

class IFillSurfaceFeatureData : public COleDispatchDriver
{
public:
	IFillSurfaceFeatureData() {}		// Calls COleDispatchDriver default constructor
	IFillSurfaceFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IFillSurfaceFeatureData(const IFillSurfaceFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	VARIANT GetPatchBoundary(VARIANT* EntType);
	BOOL SetPatchBoundary(const VARIANT& PatchVar);
	long GetPatchBoundaryCount();
	LPDISPATCH IGetPatchBoundary(long Count, long* EntType);
	BOOL ISetPatchBoundary(long Count, LPDISPATCH* DispArr);
	LPDISPATCH GetAlternateFace();
	LPDISPATCH ToggleAlternateFace();
	long GetCurvatureControl(LPDISPATCH EntityIn);
	BOOL SetCurvatureControl(LPDISPATCH EntityIn, long ControlType, BOOL BAll);
	BOOL GetReverseSurface();
	void SetReverseSurface(BOOL bNewValue);
	BOOL GetOptimizeSurface();
	void SetOptimizeSurface(BOOL bNewValue);
	VARIANT GetConstraintCurves(VARIANT* TypeArr);
	void SetConstraintCurves(const VARIANT& ConstraintVar);
	long GetConstraintCurvesCount();
	LPDISPATCH IGetConstraintCurves(long Count, long* TypeArr);
	void ISetConstraintCurves(long Count, LPDISPATCH* DispArr);
	long GetResolutionControl();
	void SetResolutionControl(long nNewValue);
	BOOL GetMerge();
	void SetMerge(BOOL bNewValue);
	BOOL GetTryToFormSolid();
	void SetTryToFormSolid(BOOL bNewValue);
	BOOL GetReverseDirection();
	void SetReverseDirection(BOOL bNewValue);
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	BOOL IAccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
};
/////////////////////////////////////////////////////////////////////////////
// IMoveCopyBodyFeatureData wrapper class

class IMoveCopyBodyFeatureData : public COleDispatchDriver
{
public:
	IMoveCopyBodyFeatureData() {}		// Calls COleDispatchDriver default constructor
	IMoveCopyBodyFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IMoveCopyBodyFeatureData(const IMoveCopyBodyFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL AccessSelections(LPDISPATCH PTopDoc, LPDISPATCH PComponent);
	void ReleaseSelectionAccess();
	long GetBodiesCount();
	VARIANT GetBodies();
	void SetBodies(const VARIANT& newValue);
	LPDISPATCH IGetBodies(long NCount);
	void ISetBodies(long NCount, LPDISPATCH* PBodies);
	long GetTransformType();
	void SetTransformType(long nNewValue);
	BOOL GetCopy();
	void SetCopy(BOOL bNewValue);
	long GetNumberOfCopies();
	void SetNumberOfCopies(long nNewValue);
	LPDISPATCH GetTransformReferenceEntity();
	void SetTransformReferenceEntity(LPDISPATCH newValue);
	LPDISPATCH GetTranslateToVertex();
	void SetTranslateToVertex(LPDISPATCH newValue);
	double GetTransformValue();
	void SetTransformValue(double newValue);
	double GetRotationOriginX();
	void SetRotationOriginX(double newValue);
	double GetRotationOriginY();
	void SetRotationOriginY(double newValue);
	double GetRotationOriginZ();
	void SetRotationOriginZ(double newValue);
	double GetTransformX();
	void SetTransformX(double newValue);
	double GetTransformY();
	void SetTransformY(double newValue);
	double GetTransformZ();
	void SetTransformZ(double newValue);
	LPDISPATCH AddMate(const VARIANT& MateEntVar, long MateTypeFromEnum, long AlignFromEnum, double Distance, double Angle, long* ErrorStatus);
	LPDISPATCH IAddMate(long Nsize, LPDISPATCH* MateEntArr, long MateTypeFromEnum, long AlignFromEnum, double Distance, double Angle, long* ErrorStatus);
};
/////////////////////////////////////////////////////////////////////////////
// ISplitLineFeatureData wrapper class

class ISplitLineFeatureData : public COleDispatchDriver
{
public:
	ISplitLineFeatureData() {}		// Calls COleDispatchDriver default constructor
	ISplitLineFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISplitLineFeatureData(const ISplitLineFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
	long GetType();
	LPDISPATCH GetPullDirectionBase();
	void SetPullDirectionBase(LPDISPATCH newValue);
	long GetPullDirectionType();
	BOOL GetReverseDirection();
	void SetReverseDirection(BOOL bNewValue);
	BOOL GetSingleDirection();
	void SetSingleDirection(BOOL bNewValue);
	VARIANT GetFaces();
	void SetFaces(const VARIANT& newValue);
	long GetFacesCount();
	LPDISPATCH IGetFaces(long Count);
	void ISetFaces(long Count, LPDISPATCH* EntIn);
	LPDISPATCH GetSketch();
	void SetSketch(LPDISPATCH newValue);
	VARIANT GetContours();
	void SetContours(const VARIANT& newValue);
	long GetContoursCount();
	LPDISPATCH IGetContours(long Count);
	void ISetContours(long Count, LPDISPATCH* Contours);
	double GetAngle();
	void SetAngle(double newValue);
	VARIANT GetSplitTools();
	void SetSplitTools(const VARIANT& newValue);
	long GetSplitToolsCount();
	LPDISPATCH IGetSplitTools(long Count);
	void ISetSplitTools(long Count, LPDISPATCH* DispArr);
	BOOL GetSplitAll();
	void SetSplitAll(BOOL bNewValue);
	long GetSplitType();
	void SetSplitType(long nNewValue);
	VARIANT GetSplitTargets();
	void SetSplitTargets(const VARIANT& newValue);
	long GetSplitTargetsCount();
	LPDISPATCH IGetSplitTargets(long Count);
	void ISetSplitTargets(long Count, LPDISPATCH* DispArr);
};
/////////////////////////////////////////////////////////////////////////////
// IWrapSketchFeatureData wrapper class

class IWrapSketchFeatureData : public COleDispatchDriver
{
public:
	IWrapSketchFeatureData() {}		// Calls COleDispatchDriver default constructor
	IWrapSketchFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IWrapSketchFeatureData(const IWrapSketchFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
	long GetType();
	void SetType(long nNewValue);
	LPDISPATCH GetFace();
	void SetFace(LPDISPATCH newValue);
	double GetThickness();
	void SetThickness(double newValue);
	BOOL GetReverseDirection();
	void SetReverseDirection(BOOL bNewValue);
	LPDISPATCH GetPullDirection();
	void SetPullDirection(LPDISPATCH newValue);
	LPDISPATCH GetSourceSketch();
	void SetSourceSketch(LPDISPATCH newValue);
};
/////////////////////////////////////////////////////////////////////////////
// IStructuralMemberFeatureData wrapper class

class IStructuralMemberFeatureData : public COleDispatchDriver
{
public:
	IStructuralMemberFeatureData() {}		// Calls COleDispatchDriver default constructor
	IStructuralMemberFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IStructuralMemberFeatureData(const IStructuralMemberFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
	VARIANT GetPathSegments();
	void SetPathSegments(const VARIANT& newValue);
	long GetPathSegmentsCount();
	LPDISPATCH IGetPathSegments(long Count);
	void ISetPathSegments(long Count, LPDISPATCH* SegArr);
	BOOL GetApplyCornerTreatment();
	void SetApplyCornerTreatment(BOOL bNewValue);
	long GetCornerTreatmentType();
	void SetCornerTreatmentType(long nNewValue);
	double GetRotationAngle();
	void SetRotationAngle(double newValue);
	LPDISPATCH GetLocateProfilePoint();
	void SetLocateProfilePoint(LPDISPATCH newValue);
	VARIANT GetConnectionPoints();
	long GetConnectionPointsCount();
	LPDISPATCH IGetConnectionPoints(long Count);
	long GetConnectionType(LPDISPATCH AtPoint);
	void SetConnectionType(LPDISPATCH AtPoint, long nNewValue);
	CString GetWeldmentProfilePath();
	void SetWeldmentProfilePath(LPCTSTR lpszNewValue);
	LPDISPATCH GetPathSegmentAt(LPDISPATCH PBodyIn);
};
/////////////////////////////////////////////////////////////////////////////
// IEndCapFeatureData wrapper class

class IEndCapFeatureData : public COleDispatchDriver
{
public:
	IEndCapFeatureData() {}		// Calls COleDispatchDriver default constructor
	IEndCapFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IEndCapFeatureData(const IEndCapFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
	LPDISPATCH GetFace();
	void SetFace(LPDISPATCH newValue);
	double GetThickness();
	void SetThickness(double newValue);
	BOOL GetUseThicknessRatioForOffset();
	void SetUseThicknessRatioForOffset(BOOL bNewValue);
	double GetThicknessRatioForOffset();
	void SetThicknessRatioForOffset(double newValue);
	double GetOffsetDistance();
	void SetOffsetDistance(double newValue);
	BOOL GetUseChamferCorners();
	void SetUseChamferCorners(BOOL bNewValue);
	double GetChamferDistance();
	void SetChamferDistance(double newValue);
};
/////////////////////////////////////////////////////////////////////////////
// IGussetFeatureData wrapper class

class IGussetFeatureData : public COleDispatchDriver
{
public:
	IGussetFeatureData() {}		// Calls COleDispatchDriver default constructor
	IGussetFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IGussetFeatureData(const IGussetFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
	BOOL GetSupportingFaces(LPDISPATCH* PFace1, LPDISPATCH* PFace2);
	BOOL SetSupportingFaces(LPDISPATCH PFace1, LPDISPATCH PFace2);
	BOOL GetFlipProfileDistanceParameters();
	void SetFlipProfileDistanceParameters(BOOL bNewValue);
	long GetProfileType();
	void SetProfileType(long nNewValue);
	double GetProfileDistance1();
	void SetProfileDistance1(double newValue);
	double GetProfileDistance2();
	void SetProfileDistance2(double newValue);
	double GetProfileDistance3();
	void SetProfileDistance3(double newValue);
	double GetProfileDistance4();
	void SetProfileDistance4(double newValue);
	double GetProfileAngle();
	void SetProfileAngle(double newValue);
	long GetThicknessType();
	void SetThicknessType(long nNewValue);
	double GetThickness();
	void SetThickness(double newValue);
	long GetProfileLocation();
	void SetProfileLocation(long nNewValue);
	BOOL GetOffsetUsed();
	void SetOffsetUsed(BOOL bNewValue);
	double GetProfileOffsetDistance();
	void SetProfileOffsetDistance(double newValue);
	BOOL GetFlipOffsetDirection();
	void SetFlipOffsetDirection(BOOL bNewValue);
	BOOL GetUseAngle();
	void SetUseAngle(BOOL bNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// ICombineBodiesFeatureData wrapper class

class ICombineBodiesFeatureData : public COleDispatchDriver
{
public:
	ICombineBodiesFeatureData() {}		// Calls COleDispatchDriver default constructor
	ICombineBodiesFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ICombineBodiesFeatureData(const ICombineBodiesFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL AccessSelections(LPDISPATCH PTopDoc, LPDISPATCH PComponent);
	void ReleaseSelectionAccess();
	LPDISPATCH GetMainBody();
	void SetMainBody(LPDISPATCH newValue);
	long GetBodiesToCombineCount();
	VARIANT GetBodiesToCombine();
	void SetBodiesToCombine(const VARIANT& newValue);
	LPDISPATCH IGetBodiesToCombine(long NCount);
	void ISetBodiesToCombine(long NCount, LPDISPATCH* PBodiesToCombine);
	long GetOperationType();
	void SetOperationType(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// ILibraryFeatureData wrapper class

class ILibraryFeatureData : public COleDispatchDriver
{
public:
	ILibraryFeatureData() {}		// Calls COleDispatchDriver default constructor
	ILibraryFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ILibraryFeatureData(const ILibraryFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL AccessSelections(LPDISPATCH PTopDoc, LPDISPATCH PComponent);
	void ReleaseSelectionAccess();
	LPDISPATCH GetPlacementPlane(long* Type);
	void SetPlacementPlane(LPDISPATCH PDispIn);
	CString GetConfigurationName();
	void SetConfigurationName(LPCTSTR lpszNewValue);
	BOOL GetLinkToLibraryPart();
	void SetLinkToLibraryPart(BOOL bNewValue);
	BOOL GetOverrideDimension();
	void SetOverrideDimension(BOOL bNewValue);
	VARIANT GetReferences(VARIANT* RefType);
	void SetReferences(const VARIANT& RefVar);
	long GetReferencesCount();
	LPDISPATCH IGetReferences(long Count, long* RefType);
	void ISetReferences(long Count, LPDISPATCH* RefVar);
	VARIANT GetDimensions(long Type, VARIANT* DimName);
	BOOL SetDimension(long Type, LPCTSTR DimName, double DimVal);
	long GetDimensionsCount(long Type);
	double IGetDimensions(long Type, long Count, BSTR* DimName);
	long GetConfigurationCount();
	VARIANT GetAllConfigurationNames();
	CString IGetAllConfigurationNames(long Count);
};
/////////////////////////////////////////////////////////////////////////////
// ISimulationGravityFeatureData wrapper class

class ISimulationGravityFeatureData : public COleDispatchDriver
{
public:
	ISimulationGravityFeatureData() {}		// Calls COleDispatchDriver default constructor
	ISimulationGravityFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISimulationGravityFeatureData(const ISimulationGravityFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetDirectionReference();
	void SetDirectionReference(LPDISPATCH newValue);
	BOOL GetReverseDirection();
	void SetReverseDirection(BOOL bNewValue);
	double GetStrength();
	void SetStrength(double newValue);
};
/////////////////////////////////////////////////////////////////////////////
// ISimulationMotorFeatureData wrapper class

class ISimulationMotorFeatureData : public COleDispatchDriver
{
public:
	ISimulationMotorFeatureData() {}		// Calls COleDispatchDriver default constructor
	ISimulationMotorFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISimulationMotorFeatureData(const ISimulationMotorFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetDirectionReference();
	void SetDirectionReference(LPDISPATCH newValue);
	BOOL GetReverseDirection();
	void SetReverseDirection(BOOL bNewValue);
	double GetVelocity();
	void SetVelocity(double newValue);
	long GetMotorType();
};
/////////////////////////////////////////////////////////////////////////////
// ISimulationLinearSpringFeatureData wrapper class

class ISimulationLinearSpringFeatureData : public COleDispatchDriver
{
public:
	ISimulationLinearSpringFeatureData() {}		// Calls COleDispatchDriver default constructor
	ISimulationLinearSpringFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISimulationLinearSpringFeatureData(const ISimulationLinearSpringFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	void GetEndPoints(LPDISPATCH* PDirDisp1, LPDISPATCH* PDirDisp2, long* Type1, long* Type2);
	void SetEndPoints(LPDISPATCH PDirDisp1, LPDISPATCH PDirDisp2);
	double GetFreeLength();
	void SetFreeLength(double newValue);
	double GetSpringConstant();
	void SetSpringConstant(double newValue);
};
/////////////////////////////////////////////////////////////////////////////
// IWeldmentTrimExtendFeatureData wrapper class

class IWeldmentTrimExtendFeatureData : public COleDispatchDriver
{
public:
	IWeldmentTrimExtendFeatureData() {}		// Calls COleDispatchDriver default constructor
	IWeldmentTrimExtendFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IWeldmentTrimExtendFeatureData(const IWeldmentTrimExtendFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL AccessSelections(LPDISPATCH PTopDoc, LPDISPATCH PComponent);
	void ReleaseSelectionAccess();
	long GetCornerType();
	void SetCornerType(long nNewValue);
	long GetBodiesToBeTrimmedCount();
	VARIANT GetBodiesToBeTrimmed();
	void SetBodiesToBeTrimmed(const VARIANT& newValue);
	LPDISPATCH IGetBodiesToBeTrimmed(long Count);
	void ISetBodiesToBeTrimmed(long Count, LPDISPATCH* BodiesIn);
	long GetTrimmingBoundaryCount();
	VARIANT GetTrimmingBoundary(long* Type);
	void SetTrimmingBoundary(const VARIANT& TrimBoundVar);
	LPDISPATCH IGetTrimmingBoundary(long Count, long* Type);
	void ISetTrimmingBoundary(long Count, LPDISPATCH* TrimBoundArr);
};
/////////////////////////////////////////////////////////////////////////////
// IWeldmentBeadFeatureData wrapper class

class IWeldmentBeadFeatureData : public COleDispatchDriver
{
public:
	IWeldmentBeadFeatureData() {}		// Calls COleDispatchDriver default constructor
	IWeldmentBeadFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IWeldmentBeadFeatureData(const IWeldmentBeadFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL AccessSelections(LPDISPATCH PTopDoc, LPDISPATCH PComponent);
	void ReleaseSelectionAccess();
	long GetBeadType(long Side);
	void SetBeadType(long Side, long nNewValue);
	double GetBeadSize(long Side);
	void SetBeadSize(long Side, double newValue);
	double GetBeadLength(long Side);
	void SetBeadLength(long Side, double newValue);
	double GetBeadPitch(long Side);
	void SetBeadPitch(long Side, double newValue);
	BOOL GetTangentPropagation();
	void SetTangentPropagation(BOOL bNewValue);
	VARIANT GetFaces(long Side, VARIANT* FaceSet1);
	BOOL SetFaces(long Side, const VARIANT& FaceSet1, const VARIANT& FaceSet2);
	long GetFacesCount(long Side, long* FaceSet1Count);
	LPDISPATCH IGetFaces(long Side, long Count1, LPDISPATCH* FaceSet1, long Count2);
	BOOL ISetFaces(long Side, long Count1, LPDISPATCH* FaceSet1, long Count2, LPDISPATCH* FaceSet2);
	long GetVirtualEdgesCount(long Side);
	VARIANT GetVirtualEdges(long Side);
	void SetVirtualEdges(long Side, const VARIANT& EdgesIn);
	LPDISPATCH IGetVirtualEdges(long Side, long Count);
	void ISetVirtualEdges(long Side, long Count, LPDISPATCH* EdgesIn);
	BOOL GetUseOtherSide();
	void SetUseOtherSide(BOOL bNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// IBodyFolder wrapper class

class IBodyFolder : public COleDispatchDriver
{
public:
	IBodyFolder() {}		// Calls COleDispatchDriver default constructor
	IBodyFolder(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IBodyFolder(const IBodyFolder& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	LPDISPATCH GetFeature();
	long GetType();
	long GetBodyCount();
	VARIANT GetBodies();
	LPDISPATCH IGetBodies(long Count);
};
/////////////////////////////////////////////////////////////////////////////
// ICoreFeatureData wrapper class

class ICoreFeatureData : public COleDispatchDriver
{
public:
	ICoreFeatureData() {}		// Calls COleDispatchDriver default constructor
	ICoreFeatureData(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ICoreFeatureData(const ICoreFeatureData& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL AccessSelections(LPDISPATCH PTopDoc, LPDISPATCH PComponent);
	void ReleaseSelectionAccess();
	LPDISPATCH GetBoundingSketch();
	void SetBoundingSketch(LPDISPATCH newValue);
	BOOL GetReverseDirection();
	void SetReverseDirection(BOOL bNewValue);
	long GetExtractionDirection(long* Type1, LPDISPATCH* PDir1, long* Type2, LPDISPATCH* PDir2);
	BOOL SetExtractionDirection(LPDISPATCH PDir1, LPDISPATCH PDir2);
	LPDISPATCH GetTargetBody();
	void SetTargetBody(LPDISPATCH newValue);
	BOOL GetUseDraft();
	void SetUseDraft(BOOL bNewValue);
	double GetDraftAngle();
	void SetDraftAngle(double newValue);
	BOOL GetDraftOutward();
	void SetDraftOutward(BOOL bNewValue);
	long GetEndCondition(long Index);
	void SetEndCondition(long Index, long nNewValue);
	double GetDepth(long Index);
	void SetDepth(long Index, double newValue);
	BOOL GetCapEnds();
	void SetCapEnds(BOOL bNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// DSldWorksEvents wrapper class

class DSldWorksEvents : public COleDispatchDriver
{
public:
	DSldWorksEvents() {}		// Calls COleDispatchDriver default constructor
	DSldWorksEvents(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	DSldWorksEvents(const DSldWorksEvents& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long FileOpenNotify(LPCTSTR FileName);
	long FileNewNotify(LPDISPATCH newDoc, long DocType);
	long DestroyNotify();
	long ActiveDocChangeNotify();
	long ActiveModelDocChangeNotify();
	long PropertySheetCreateNotify(LPDISPATCH Sheet, long sheetType);
	long NonNativeFileOpenNotify(LPCTSTR FileName);
	long LightSheetCreateNotify(LPDISPATCH NewSheet, long sheetType, long LightId);
	long DocumentConversionNotify(LPCTSTR FileName);
	long DocumentLoadNotify(LPCTSTR docTitle, LPCTSTR docPath);
	long FileNewNotify2(LPDISPATCH newDoc, long DocType, LPCTSTR TemplateName);
	long FileOpenNotify2(LPCTSTR FileName);
	long ReferenceNotFoundNotify(LPCTSTR FileName);
	long PromptForFilenameNotify(long openOrSave, LPCTSTR suggestedFileName, long DocType, long cause);
	long BeginTranslationNotify(LPCTSTR FileName, long Options);
	long EndTranslationNotify(LPCTSTR FileName, long Options);
	long OnIdleNotify();
	long FileOpenPreNotify(LPCTSTR FileName);
	long FileOpenPostNotify(LPCTSTR FileName);
	long ReferencedFilePreNotify(LPCTSTR FileName);
	long BeginRecordNotify();
	long EndRecordNotify();
};
/////////////////////////////////////////////////////////////////////////////
// DPartDocEvents wrapper class

class DPartDocEvents : public COleDispatchDriver
{
public:
	DPartDocEvents() {}		// Calls COleDispatchDriver default constructor
	DPartDocEvents(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	DPartDocEvents(const DPartDocEvents& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long RegenNotify();
	long DestroyNotify();
	long RegenPostNotify();
	long ViewNewNotify();
	long NewSelectionNotify();
	long FileSaveNotify(LPCTSTR FileName);
	long FileSaveAsNotify(LPCTSTR FileName);
	long LoadFromStorageNotify();
	long SaveToStorageNotify();
	long ActiveConfigChangeNotify();
	long ActiveConfigChangePostNotify();
	long ViewNewNotify2(LPDISPATCH viewBeingAdded);
	long LightingDialogCreateNotify(LPDISPATCH dialog);
	long AddItemNotify(long EntityType, LPCTSTR itemName);
	long RenameItemNotify(long EntityType, LPCTSTR oldName, LPCTSTR NewName);
	long DeleteItemNotify(long EntityType, LPCTSTR itemName);
	long ModifyNotify();
	long FileReloadNotify();
	long AddCustomPropertyNotify(LPCTSTR propName, LPCTSTR Configuration, LPCTSTR Value, long valueType);
	long ChangeCustomPropertyNotify(LPCTSTR propName, LPCTSTR Configuration, LPCTSTR oldValue, LPCTSTR NewValue, long valueType);
	long DeleteCustomPropertyNotify(LPCTSTR propName, LPCTSTR Configuration, LPCTSTR Value, long valueType);
	long FeatureEditPreNotify(LPDISPATCH EditFeature);
	long FeatureSketchEditPreNotify(LPDISPATCH EditFeature, LPDISPATCH featureSketch);
	long FileSaveAsNotify2(LPCTSTR FileName);
	long DeleteSelectionPreNotify();
	long FileReloadPreNotify();
	long BodyVisibleChangeNotify();
	long RegenPostNotify2(LPDISPATCH stopFeature);
	long FileSavePostNotify(long saveType, LPCTSTR FileName);
	long LoadFromStorageStoreNotify();
	long SaveToStorageStoreNotify();
	long FeatureManagerTreeRebuildNotify();
	long FileDropPostNotify(LPCTSTR FileName);
	long DynamicHighlightNotify(BOOL bHighlightState);
	long DimensionChangeNotify(LPDISPATCH displayDim);
	long FileReloadCancelNotify(long ErrorCode);
	long FileSavePostCancelNotify();
	long SketchSolveNotify(LPCTSTR featName);
	long DeleteItemPreNotify(long EntityType, LPCTSTR itemName);
};
/////////////////////////////////////////////////////////////////////////////
// DDrawingDocEvents wrapper class

class DDrawingDocEvents : public COleDispatchDriver
{
public:
	DDrawingDocEvents() {}		// Calls COleDispatchDriver default constructor
	DDrawingDocEvents(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	DDrawingDocEvents(const DDrawingDocEvents& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long RegenNotify();
	long DestroyNotify();
	long RegenPostNotify();
	long ViewNewNotify();
	long NewSelectionNotify();
	long FileSaveNotify(LPCTSTR FileName);
	long FileSaveAsNotify(LPCTSTR FileName);
	long LoadFromStorageNotify();
	long SaveToStorageNotify();
	long ActiveConfigChangeNotify();
	long ActiveConfigChangePostNotify();
	long ViewNewNotify2(LPDISPATCH viewBeingAdded);
	long AddItemNotify(long EntityType, LPCTSTR itemName);
	long RenameItemNotify(long EntityType, LPCTSTR oldName, LPCTSTR NewName);
	long DeleteItemNotify(long EntityType, LPCTSTR itemName);
	long ModifyNotify();
	long FileReloadNotify();
	long AddCustomPropertyNotify(LPCTSTR propName, LPCTSTR Configuration, LPCTSTR Value, long valueType);
	long ChangeCustomPropertyNotify(LPCTSTR propName, LPCTSTR Configuration, LPCTSTR oldValue, LPCTSTR NewValue, long valueType);
	long DeleteCustomPropertyNotify(LPCTSTR propName, LPCTSTR Configuration, LPCTSTR Value, long valueType);
	long FileSaveAsNotify2(LPCTSTR FileName);
	long DeleteSelectionPreNotify();
	long FileReloadPreNotify();
	long FileSavePostNotify(long saveType, LPCTSTR FileName);
	long LoadFromStorageStoreNotify();
	long SaveToStorageStoreNotify();
	long FeatureManagerTreeRebuildNotify();
	long ViewCreatePreNotify(LPDISPATCH modelDocBeingAdded);
	long DynamicHighlightNotify(BOOL bHighlightState);
	long DimensionChangeNotify(LPDISPATCH displayDim);
	long FileReloadCancelNotify(long ErrorCode);
	long FileSavePostCancelNotify();
	long SketchSolveNotify(LPCTSTR featName);
	long DeleteItemPreNotify(long EntityType, LPCTSTR itemName);
};
/////////////////////////////////////////////////////////////////////////////
// DAssemblyDocEvents wrapper class

class DAssemblyDocEvents : public COleDispatchDriver
{
public:
	DAssemblyDocEvents() {}		// Calls COleDispatchDriver default constructor
	DAssemblyDocEvents(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	DAssemblyDocEvents(const DAssemblyDocEvents& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long RegenNotify();
	long DestroyNotify();
	long RegenPostNotify();
	long ViewNewNotify();
	long NewSelectionNotify();
	long FileSaveNotify(LPCTSTR FileName);
	long FileSaveAsNotify(LPCTSTR FileName);
	long LoadFromStorageNotify();
	long SaveToStorageNotify();
	long ActiveConfigChangeNotify();
	long ActiveConfigChangePostNotify();
	long BeginInContextEditNotify(LPDISPATCH docBeingEdited, long DocType);
	long EndInContextEditNotify(LPDISPATCH docBeingEdited, long DocType);
	long ViewNewNotify2(LPDISPATCH viewBeingAdded);
	long LightingDialogCreateNotify(LPDISPATCH dialog);
	long AddItemNotify(long EntityType, LPCTSTR itemName);
	long RenameItemNotify(long EntityType, LPCTSTR oldName, LPCTSTR NewName);
	long DeleteItemNotify(long EntityType, LPCTSTR itemName);
	long ModifyNotify();
	long ComponentStateChangeNotify(LPDISPATCH componentModel, short oldCompState, short newCompState);
	long FileDropNotify(LPCTSTR FileName);
	long FileReloadNotify();
	long ComponentStateChangeNotify2(LPDISPATCH componentModel, LPCTSTR CompName, short oldCompState, short newCompState);
	long AddCustomPropertyNotify(LPCTSTR propName, LPCTSTR Configuration, LPCTSTR Value, long valueType);
	long ChangeCustomPropertyNotify(LPCTSTR propName, LPCTSTR Configuration, LPCTSTR oldValue, LPCTSTR NewValue, long valueType);
	long DeleteCustomPropertyNotify(LPCTSTR propName, LPCTSTR Configuration, LPCTSTR Value, long valueType);
	long FeatureEditPreNotify(LPDISPATCH EditFeature);
	long FeatureSketchEditPreNotify(LPDISPATCH EditFeature, LPDISPATCH featureSketch);
	long FileSaveAsNotify2(LPCTSTR FileName);
	long InterferenceNotify(VARIANT* PComp, VARIANT* PFace);
	long DeleteSelectionPreNotify();
	long FileReloadPreNotify();
	long ComponentMoveNotify();
	long ComponentVisibleChangeNotify();
	long BodyVisibleChangeNotify();
	long FileDropPreNotify(LPCTSTR FileName);
	long FileSavePostNotify(long saveType, LPCTSTR FileName);
	long LoadFromStorageStoreNotify();
	long SaveToStorageStoreNotify();
	long FeatureManagerTreeRebuildNotify();
	long AssemblyElectricalDataUpdateNotify(long saveType);
	long ComponentMoveNotify2(VARIANT* Components);
	long DynamicHighlightNotify(BOOL bHighlightState);
	long ComponentVisualPropertiesChangeNotify(LPDISPATCH Component);
	long ComponentDisplayStateChangeNotify(LPDISPATCH Component);
	long DimensionChangeNotify(LPDISPATCH displayDim);
	long FileReloadCancelNotify(long ErrorCode);
	long FileSavePostCancelNotify();
	long SketchSolveNotify(LPCTSTR featName);
	long DeleteItemPreNotify(long EntityType, LPCTSTR itemName);
};
/////////////////////////////////////////////////////////////////////////////
// DModelViewEvents wrapper class

class DModelViewEvents : public COleDispatchDriver
{
public:
	DModelViewEvents() {}		// Calls COleDispatchDriver default constructor
	DModelViewEvents(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	DModelViewEvents(const DModelViewEvents& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long RepaintNotify(long paintType);
	long ViewChangeNotify(const VARIANT& View);
	long DestroyNotify();
	long RepaintPostNotify();
	long BufferSwapNotify();
	long DestroyNotify2(long destroyType);
};
/////////////////////////////////////////////////////////////////////////////
// DFeatMgrViewEvents wrapper class

class DFeatMgrViewEvents : public COleDispatchDriver
{
public:
	DFeatMgrViewEvents() {}		// Calls COleDispatchDriver default constructor
	DFeatMgrViewEvents(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	DFeatMgrViewEvents(const DFeatMgrViewEvents& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long ActivateNotify(VARIANT* View);
	long DeactivateNotify(VARIANT* View);
	long DestroyNotify(VARIANT* View);
};
/////////////////////////////////////////////////////////////////////////////
// DSWPropertySheetEvents wrapper class

class DSWPropertySheetEvents : public COleDispatchDriver
{
public:
	DSWPropertySheetEvents() {}		// Calls COleDispatchDriver default constructor
	DSWPropertySheetEvents(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	DSWPropertySheetEvents(const DSWPropertySheetEvents& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long DestroyNotify();
	long HelpNotify(long PageIndex);
	long OnOKNotify();
	long OnCancelNotify();
	long CreateControlNotify(long PageIndex, LPDISPATCH ControlDispatch);
};
/////////////////////////////////////////////////////////////////////////////
// ISdmDoc wrapper class

class ISdmDoc : public COleDispatchDriver
{
public:
	ISdmDoc() {}		// Calls COleDispatchDriver default constructor
	ISdmDoc(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISdmDoc(const ISdmDoc& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
};
/////////////////////////////////////////////////////////////////////////////
// IPropertyManagerPageListbox wrapper class

class IPropertyManagerPageListbox : public COleDispatchDriver
{
public:
	IPropertyManagerPageListbox() {}		// Calls COleDispatchDriver default constructor
	IPropertyManagerPageListbox(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IPropertyManagerPageListbox(const IPropertyManagerPageListbox& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	void AddItems(const VARIANT& Texts);
	void IAddItems(short TextCount, BSTR* Texts);
	void Clear();
	short GetCurrentSelection();
	void SetCurrentSelection(short nNewValue);
	short GetHeight();
	void SetHeight(short nNewValue);
	CString GetItemText(short Item);
	long GetStyle();
	void SetStyle(long nNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// IPropertyManagerPageNumberbox wrapper class

class IPropertyManagerPageNumberbox : public COleDispatchDriver
{
public:
	IPropertyManagerPageNumberbox() {}		// Calls COleDispatchDriver default constructor
	IPropertyManagerPageNumberbox(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IPropertyManagerPageNumberbox(const IPropertyManagerPageNumberbox& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	double GetValue();
	void SetValue(double newValue);
	void SetRange(long Units, double Minimum, double Maximum, double Increment, BOOL Inclusive);
};
/////////////////////////////////////////////////////////////////////////////
// IPropertyManagerPageSelectionbox wrapper class

class IPropertyManagerPageSelectionbox : public COleDispatchDriver
{
public:
	IPropertyManagerPageSelectionbox() {}		// Calls COleDispatchDriver default constructor
	IPropertyManagerPageSelectionbox(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IPropertyManagerPageSelectionbox(const IPropertyManagerPageSelectionbox& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	short GetHeight();
	void SetHeight(short nNewValue);
	long GetMark();
	void SetMark(long nNewValue);
	BOOL GetSingleEntityOnly();
	void SetSingleEntityOnly(BOOL bNewValue);
	void SetSelectionFilters(const VARIANT& Filters);
	void ISetSelectionFilters(short FilterCount, long* Filters);
	BOOL GetSelectionFocus();
	void SetSelectionFocus();
	BOOL SetSelectionColor(BOOL Special, long Color);
	BOOL SetCalloutLabel(LPCTSTR Label);
	LPDISPATCH GetCallout();
	long GetStyle();
	void SetStyle(long nNewValue);
	long GetItemCount();
	long GetCurrentSelection();
	void SetCurrentSelection(long nNewValue);
	long GetSelectionIndex(long Item);
	BOOL GetAllowSelectInMultipleBoxes();
	void SetAllowSelectInMultipleBoxes(BOOL bNewValue);
	BOOL GetAllowMultipleSelectOfSameEntity();
	void SetAllowMultipleSelectOfSameEntity(BOOL bNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// IRibFeatureData2 wrapper class

class IRibFeatureData2 : public COleDispatchDriver
{
public:
	IRibFeatureData2() {}		// Calls COleDispatchDriver default constructor
	IRibFeatureData2(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IRibFeatureData2(const IRibFeatureData2& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL GetIsTwoSided();
	void SetIsTwoSided(BOOL bNewValue);
	BOOL GetReverseThicknessDir();
	void SetReverseThicknessDir(BOOL bNewValue);
	double GetThickness();
	void SetThickness(double newValue);
	long GetRefSketchIndex();
	void SetRefSketchIndex(long nNewValue);
	long NextReference();
	BOOL GetFlipSide();
	void SetFlipSide(BOOL bNewValue);
	BOOL GetEnableDraft();
	void SetEnableDraft(BOOL bNewValue);
	BOOL GetDraftOutward();
	void SetDraftOutward(BOOL bNewValue);
	double GetDraftAngle();
	void SetDraftAngle(double newValue);
	long GetExtrusionDirection();
	void SetExtrusionDirection(long nNewValue);
	long GetType();
	void SetType(long nNewValue);
	LPDISPATCH GetBody();
	void SetBody(LPDISPATCH newValue);
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	BOOL IAccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
};
/////////////////////////////////////////////////////////////////////////////
// IDomeFeatureData2 wrapper class

class IDomeFeatureData2 : public COleDispatchDriver
{
public:
	IDomeFeatureData2() {}		// Calls COleDispatchDriver default constructor
	IDomeFeatureData2(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IDomeFeatureData2(const IDomeFeatureData2& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	double GetHeight();
	void SetHeight(double newValue);
	BOOL GetReverseDir();
	void SetReverseDir(BOOL bNewValue);
	BOOL GetElliptical();
	void SetElliptical(BOOL bNewValue);
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	BOOL IAccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
	LPDISPATCH GetFace();
	void SetFace(LPDISPATCH newValue);
	LPDISPATCH GetIFace();
	void SetIFace(LPDISPATCH newValue);
	LPDISPATCH GetConstraintPointOrSketch();
	void SetConstraintPointOrSketch(LPDISPATCH newValue);
	LPDISPATCH GetDirection();
	void SetDirection(LPDISPATCH newValue);
};
/////////////////////////////////////////////////////////////////////////////
// ISimpleHoleFeatureData2 wrapper class

class ISimpleHoleFeatureData2 : public COleDispatchDriver
{
public:
	ISimpleHoleFeatureData2() {}		// Calls COleDispatchDriver default constructor
	ISimpleHoleFeatureData2(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISimpleHoleFeatureData2(const ISimpleHoleFeatureData2& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	BOOL IAccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
	BOOL GetReverseDirection();
	void SetReverseDirection(BOOL bNewValue);
	BOOL GetDraftWhileExtruding();
	void SetDraftWhileExtruding(BOOL bNewValue);
	BOOL GetDraftOutward();
	void SetDraftOutward(BOOL bNewValue);
	BOOL GetReverseOffset();
	void SetReverseOffset(BOOL bNewValue);
	long GetType();
	void SetType(long nNewValue);
	double GetDiameter();
	void SetDiameter(double newValue);
	double GetDepth();
	void SetDepth(double newValue);
	double GetDraftAngle();
	void SetDraftAngle(double newValue);
	double GetSurfaceOffset();
	void SetSurfaceOffset(double newValue);
	LPDISPATCH GetFace();
	void SetFace(LPDISPATCH newValue);
	LPDISPATCH GetIFace();
	void SetIFace(LPDISPATCH newValue);
	LPDISPATCH GetVertex();
	void SetVertex(LPDISPATCH newValue);
	LPDISPATCH GetIVertex();
	void SetIVertex(LPDISPATCH newValue);
	LPDISPATCH GetEndConditionReference(long* ReferenceType);
	void SetEndConditionReference(LPDISPATCH PDisp);
	BOOL GetFeatureScope();
	void SetFeatureScope(BOOL bNewValue);
	BOOL GetAutoSelect();
	void SetAutoSelect(BOOL bNewValue);
	VARIANT GetFeatureScopeBodies();
	void SetFeatureScopeBodies(const VARIANT& newValue);
	long GetFeatureScopeBodiesCount();
	LPDISPATCH IGetFeatureScopeBodies(long Count);
	void ISetFeatureScopeBodies(long Count, LPDISPATCH* BodyArr);
	long GetDirectionReference(LPDISPATCH* Ref1, long* Type1, LPDISPATCH* Ref2, long* Type2);
	BOOL SetDirectionReference(LPDISPATCH Ref1, LPDISPATCH Ref2);
};
/////////////////////////////////////////////////////////////////////////////
// IWizardHoleFeatureData2 wrapper class

class IWizardHoleFeatureData2 : public COleDispatchDriver
{
public:
	IWizardHoleFeatureData2() {}		// Calls COleDispatchDriver default constructor
	IWizardHoleFeatureData2(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IWizardHoleFeatureData2(const IWizardHoleFeatureData2& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	BOOL IAccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
	long GetType();
	void SetType(long nNewValue);
	double GetDiameter();
	void SetDiameter(double newValue);
	double GetCounterBoreDiameter();
	void SetCounterBoreDiameter(double newValue);
	double GetCounterDrillDiameter();
	void SetCounterDrillDiameter(double newValue);
	double GetCounterSinkDiameter();
	void SetCounterSinkDiameter(double newValue);
	double GetMinorDiameter();
	void SetMinorDiameter(double newValue);
	double GetMajorDiameter();
	void SetMajorDiameter(double newValue);
	double GetHoleDiameter();
	void SetHoleDiameter(double newValue);
	double GetThruHoleDiameter();
	void SetThruHoleDiameter(double newValue);
	double GetTapDrillDiameter();
	void SetTapDrillDiameter(double newValue);
	double GetThruTapDrillDiameter();
	void SetThruTapDrillDiameter(double newValue);
	double GetNearCounterSinkDiameter();
	void SetNearCounterSinkDiameter(double newValue);
	double GetMidCounterSinkDiameter();
	void SetMidCounterSinkDiameter(double newValue);
	double GetFarCounterSinkDiameter();
	void SetFarCounterSinkDiameter(double newValue);
	double GetThreadDiameter();
	void SetThreadDiameter(double newValue);
	double GetDepth();
	void SetDepth(double newValue);
	double GetCounterBoreDepth();
	void SetCounterBoreDepth(double newValue);
	double GetCounterDrillDepth();
	void SetCounterDrillDepth(double newValue);
	double GetHoleDepth();
	void SetHoleDepth(double newValue);
	double GetThruHoleDepth();
	void SetThruHoleDepth(double newValue);
	double GetTapDrillDepth();
	void SetTapDrillDepth(double newValue);
	double GetThruTapDrillDepth();
	void SetThruTapDrillDepth(double newValue);
	double GetThreadDepth();
	void SetThreadDepth(double newValue);
	double GetCounterDrillAngle();
	void SetCounterDrillAngle(double newValue);
	double GetCounterSinkAngle();
	void SetCounterSinkAngle(double newValue);
	double GetDrillAngle();
	void SetDrillAngle(double newValue);
	double GetNearCounterSinkAngle();
	void SetNearCounterSinkAngle(double newValue);
	double GetMidCounterSinkAngle();
	void SetMidCounterSinkAngle(double newValue);
	double GetFarCounterSinkAngle();
	void SetFarCounterSinkAngle(double newValue);
	double GetThreadAngle();
	void SetThreadAngle(double newValue);
	double GetHeadClearance();
	void SetHeadClearance(double newValue);
	LPDISPATCH GetFace();
	void SetFace(LPDISPATCH newValue);
	LPDISPATCH GetIFace();
	void SetIFace(LPDISPATCH newValue);
	LPDISPATCH GetVertex();
	void SetVertex(LPDISPATCH newValue);
	LPDISPATCH GetIVertex();
	void SetIVertex(LPDISPATCH newValue);
	long GetEndCondition();
	void SetEndCondition(long nNewValue);
	CString GetStandard();
	void SetStandard(LPCTSTR lpszNewValue);
	CString GetFastenerType();
	void SetFastenerType(LPCTSTR lpszNewValue);
	CString GetFastenerSize();
	void SetFastenerSize(LPCTSTR lpszNewValue);
	long GetHeadClearanceType();
	void SetHeadClearanceType(long nNewValue);
	long GetCosmeticThreadType();
	void SetCosmeticThreadType(long nNewValue);
	LPDISPATCH GetEndConditionReference(long* ReferenceType);
	void SetEndConditionReference(LPDISPATCH PDisp);
	long GetSketchPointCount();
	VARIANT GetSketchPoints();
	LPDISPATCH IGetSketchPoints(long NCount);
	long GetHoleFit();
	void SetHoleFit(long nNewValue);
	double GetOffsetDistance();
	void SetOffsetDistance(double newValue);
	long GetThreadEndCondition();
	void SetThreadEndCondition(long nNewValue);
	long GetTapType();
	void SetTapType(long nNewValue);
	void InitializeHole(long GenericHoleType, long StdIndex, long FastnerType, LPCTSTR SSize, long EndType);
	BOOL GetReverseDirection();
	void SetReverseDirection(BOOL bNewValue);
	CString GetThreadClass();
	void SetThreadClass(LPCTSTR lpszNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// IChamferFeatureData2 wrapper class

class IChamferFeatureData2 : public COleDispatchDriver
{
public:
	IChamferFeatureData2() {}		// Calls COleDispatchDriver default constructor
	IChamferFeatureData2(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IChamferFeatureData2(const IChamferFeatureData2& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	double GetEdgeChamferDistance(long Side);
	void SetEdgeChamferDistance(long Side, double Distance);
	double GetVertexChamferDistance(long Side);
	void SetVertexChamferDistance(long Side, double Distance);
	long GetType();
	void SetType(long nNewValue);
	double GetEdgeChamferAngle();
	void SetEdgeChamferAngle(double newValue);
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	BOOL IAccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
	long GetFaceCount();
	LPDISPATCH IGetFaces(long FaceCount);
	void ISetFaces(long Count, LPDISPATCH* FaceList);
	VARIANT GetFaces();
	void SetFaces(const VARIANT& newValue);
	long GetEdgeCount();
	LPDISPATCH IGetEdges(long Count);
	void ISetEdges(long Count, LPDISPATCH* EdgeList);
	VARIANT GetEdges();
	void SetEdges(const VARIANT& newValue);
	LPDISPATCH GetVertex();
	void SetVertex(LPDISPATCH newValue);
	long GetLoopCount();
	LPDISPATCH IGetLoops(long Count);
	void ISetLoops(long Count, LPDISPATCH* LoopList);
	VARIANT GetLoops();
	void SetLoops(const VARIANT& newValue);
	BOOL GetEqualDistance();
	void SetEqualDistance(BOOL bNewValue);
	LPDISPATCH GetIVertex();
	void SetIVertex(LPDISPATCH newValue);
	BOOL GetKeepFeatures();
	void SetKeepFeatures(BOOL bNewValue);
	BOOL GetIsFlipped(LPDISPATCH Entity);
	void SetIsFlipped(LPDISPATCH Entity, BOOL Flip);
	BOOL GetTangentPropagation();
	void SetTangentPropagation(BOOL bNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// IDraftFeatureData2 wrapper class

class IDraftFeatureData2 : public COleDispatchDriver
{
public:
	IDraftFeatureData2() {}		// Calls COleDispatchDriver default constructor
	IDraftFeatureData2(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IDraftFeatureData2(const IDraftFeatureData2& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetType();
	void SetType(long nNewValue);
	double GetAngle();
	void SetAngle(double newValue);
	BOOL GetReverseDirection();
	void SetReverseDirection(BOOL bNewValue);
	BOOL IAccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
	short GetFacesToDraftCount();
	LPDISPATCH IGetFacesToDraft(short Count);
	void ISetFacesToDraft(short Count, LPDISPATCH* FaceArray);
	VARIANT GetFacesToDraft();
	void SetFacesToDraft(const VARIANT& newValue);
	short GetPartingLinesCount();
	LPDISPATCH IGetPartingLines(short Count);
	void ISetPartingLines(short Count, LPDISPATCH* LineArray);
	VARIANT GetPartingLines();
	void SetPartingLines(const VARIANT& newValue);
	LPDISPATCH GetNeutralPlane();
	void SetNeutralPlane(LPDISPATCH newValue);
	LPDISPATCH GetDirectionPull();
	void SetDirectionPull(LPDISPATCH newValue);
	short GetFacePropagation();
	void SetFacePropagation(short nNewValue);
	BOOL GetOtherFacesFlagAtIndex(short Index);
	void SetOtherFacesFlagAtIndex(short Index, BOOL Flag);
	short GetDraftedEntityCount();
	LPDISPATCH IGetDraftedEntities(short Count);
	VARIANT GetDraftedEntities();
	short GetStepType();
	void SetStepType(short nNewValue);
	BOOL GetAllowReducedAngle();
	void SetAllowReducedAngle(BOOL bNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// ISimpleFilletFeatureData2 wrapper class

class ISimpleFilletFeatureData2 : public COleDispatchDriver
{
public:
	ISimpleFilletFeatureData2() {}		// Calls COleDispatchDriver default constructor
	ISimpleFilletFeatureData2(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ISimpleFilletFeatureData2(const ISimpleFilletFeatureData2& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetType();
	double GetDefaultRadius();
	void SetDefaultRadius(double newValue);
	long GetOverflowType();
	void SetOverflowType(long nNewValue);
	BOOL GetIsMultipleRadius();
	void SetIsMultipleRadius(BOOL bNewValue);
	BOOL GetRoundCorners();
	void SetRoundCorners(BOOL bNewValue);
	BOOL GetPropagateToTangentFaces();
	void SetPropagateToTangentFaces(BOOL bNewValue);
	long GetFilletItemsCount();
	LPDISPATCH GetFilletItemAtIndex(long Index);
	LPUNKNOWN IGetFilletItemAtIndex(long Index);
	double GetRadius(LPDISPATCH PFilletItem);
	double IGetRadius(LPUNKNOWN PFilletItem);
	void SetRadius(LPDISPATCH PFilletItem, double Radius);
	void ISetRadius(LPUNKNOWN PFilletItem, double Radius);
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	BOOL IAccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
	BOOL GetKeepFeatures();
	void SetKeepFeatures(BOOL bNewValue);
	long GetEdgeCount();
	LPDISPATCH IGetEdges(long Count);
	void ISetEdges(long Count, LPDISPATCH* EdgeList);
	VARIANT GetEdges();
	void SetEdges(const VARIANT& newValue);
	long GetFaceCount(long WhichFaceList);
	LPDISPATCH IGetFaces(long WhichFaceList, long Count);
	void ISetFaces(long WhichFaceList, long Count, LPDISPATCH* FaceList);
	VARIANT GetFaces(long WhichFaceList);
	void SetFaces(long WhichFaceList, const VARIANT& FaceList);
	long GetLoopCount();
	LPDISPATCH IGetLoops(long Count);
	void ISetLoops(long Count, LPDISPATCH* LoopList);
	VARIANT GetLoops();
	void SetLoops(const VARIANT& newValue);
	long GetFeatureCount();
	LPDISPATCH IGetFeatures(long Count);
	void ISetFeatures(long Count, LPDISPATCH* FeatList);
	VARIANT GetFeatures();
	void SetFeatures(const VARIANT& newValue);
	long GetHoldLineCount();
	LPDISPATCH IGetHoldLines(long Count);
	void ISetHoldLines(long Count, LPDISPATCH* PList);
	VARIANT GetHoldLines();
	void SetHoldLines(const VARIANT& newValue);
	BOOL GetCurvatureContinuous();
	void SetCurvatureContinuous(BOOL bNewValue);
	LPDISPATCH GetHelpPoint();
	void SetHelpPoint(LPDISPATCH newValue);
	BOOL GetOmitAttachedEdges();
	void SetOmitAttachedEdges(BOOL bNewValue);
	VARIANT GetSetbackVertices();
	VARIANT GetSetbackVertexDistance(LPDISPATCH Vtx, VARIANT* EdgeVar);
	BOOL SetSetbackVertices(const VARIANT& VertVar);
	BOOL SetSetbackVertexDistance(LPDISPATCH Vtx, const VARIANT& EdgeVar, const VARIANT& DistVar);
	long GetSetbackVerticesCount();
	LPDISPATCH IGetSetbackVertices(long Count);
	long GetSetbackDistanceCount(LPDISPATCH Vtx);
	double IGetSetbackVertexDistance(long Count, LPDISPATCH Vtx, LPDISPATCH* EdgeArr);
	BOOL ISetSetbackVertices(long Count, LPDISPATCH* VertArr);
	BOOL ISetSetbackVertexDistance(long Count, LPDISPATCH Vtx, LPDISPATCH* EdgeArr, double* DistArr);
	BOOL GetConstantWidth();
	void SetConstantWidth(BOOL bNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// IVariableFilletFeatureData2 wrapper class

class IVariableFilletFeatureData2 : public COleDispatchDriver
{
public:
	IVariableFilletFeatureData2() {}		// Calls COleDispatchDriver default constructor
	IVariableFilletFeatureData2(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IVariableFilletFeatureData2(const IVariableFilletFeatureData2& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	double GetDefaultRadius();
	void SetDefaultRadius(double newValue);
	long GetOverflowType();
	void SetOverflowType(long nNewValue);
	long GetTransitionType();
	void SetTransitionType(long nNewValue);
	BOOL GetPropagateToTangentFaces();
	void SetPropagateToTangentFaces(BOOL bNewValue);
	long GetFilletEdgeCount();
	LPDISPATCH GetFilletEdgeAtIndex(long Index);
	LPDISPATCH IGetFilletEdgeAtIndex(long Index);
	double GetRadius(LPDISPATCH PFilletItem);
	double IGetRadius(LPDISPATCH PFilletItem);
	void SetRadius(LPDISPATCH PFilletItem, double Radius);
	void ISetRadius(LPDISPATCH PFilletItem, double Radius);
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	BOOL IAccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
	double GetRadius2(LPDISPATCH PFilletItem, BOOL* IsAssigned);
	long GetControlPointsCount();
	double GetControlPointRadiusAtIndex(long Index, double* Location, LPDISPATCH* PEdge);
	void SetControlPointRadiusAtIndex(long Index, double Location, double Radius);
	VARIANT GetSetbackVertices();
	VARIANT GetSetbackVertexDistance(LPDISPATCH Vtx, VARIANT* EdgeVar);
	BOOL SetSetbackVertices(const VARIANT& VertVar);
	BOOL SetSetbackVertexDistance(LPDISPATCH Vtx, const VARIANT& EdgeVar, const VARIANT& DistVar);
	long GetSetbackVerticesCount();
	LPDISPATCH IGetSetbackVertices(long Count);
	long GetSetbackDistanceCount(LPDISPATCH Vtx);
	double IGetSetbackVertexDistance(long Count, LPDISPATCH Vtx, LPDISPATCH* EdgeArr);
	BOOL ISetSetbackVertices(long Count, LPDISPATCH* VertArr);
	BOOL ISetSetbackVertexDistance(long Count, LPDISPATCH Vtx, LPDISPATCH* EdgeArr, double* DistArr);
};
/////////////////////////////////////////////////////////////////////////////
// IExtrudeFeatureData2 wrapper class

class IExtrudeFeatureData2 : public COleDispatchDriver
{
public:
	IExtrudeFeatureData2() {}		// Calls COleDispatchDriver default constructor
	IExtrudeFeatureData2(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IExtrudeFeatureData2(const IExtrudeFeatureData2& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetEndCondition(BOOL Forward);
	void SetEndCondition(BOOL Forward, long EndCondition);
	double GetDepth(BOOL Forward);
	void SetDepth(BOOL Forward, double Depth);
	double GetWallThickness(BOOL Forward);
	void SetWallThickness(BOOL Forward, double WallThickness);
	BOOL GetDraftWhileExtruding(BOOL Forward);
	void SetDraftWhileExtruding(BOOL Forward, BOOL DraftWhileExtrude);
	BOOL GetDraftOutward(BOOL Forward);
	void SetDraftOutward(BOOL Forward, BOOL DraftOutward);
	double GetDraftAngle(BOOL Forward);
	void SetDraftAngle(BOOL Forward, double DraftAngle);
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	BOOL IAccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
	LPDISPATCH GetFace(BOOL Forward);
	void SetFace(BOOL Forward, LPDISPATCH Face);
	LPDISPATCH IGetFace(BOOL Forward);
	void ISetFace(BOOL Forward, LPDISPATCH Face);
	LPDISPATCH GetVertex(BOOL Forward);
	void SetVertex(BOOL Forward, LPDISPATCH Face);
	LPDISPATCH IGetVertex(BOOL Forward);
	void ISetVertex(BOOL Forward, LPDISPATCH Face);
	BOOL GetReverseDirection();
	void SetReverseDirection(BOOL bNewValue);
	BOOL GetBothDirections();
	void SetBothDirections(BOOL bNewValue);
	BOOL GetFlipSideToCut();
	void SetFlipSideToCut(BOOL bNewValue);
	BOOL IsBossFeature();
	BOOL IsThinFeature();
	BOOL IsBaseExtrude();
	long GetThinWallType();
	void SetThinWallType(long nNewValue);
	BOOL GetCapEnds();
	void SetCapEnds(BOOL bNewValue);
	double GetCapThickness();
	void SetCapThickness(double newValue);
	BOOL GetMerge();
	void SetMerge(BOOL bNewValue);
	BOOL GetFeatureScope();
	void SetFeatureScope(BOOL bNewValue);
	BOOL GetAutoSelect();
	void SetAutoSelect(BOOL bNewValue);
	VARIANT GetFeatureScopeBodies();
	void SetFeatureScopeBodies(const VARIANT& newValue);
	long GetFeatureScopeBodiesCount();
	LPDISPATCH IGetFeatureScopeBodies(long Count);
	void ISetFeatureScopeBodies(long Count, LPDISPATCH* BodyArr);
	BOOL GetReverseOffset(BOOL Fwd);
	void SetReverseOffset(BOOL Fwd, BOOL ValIn);
	BOOL GetTranslateSurface(BOOL Fwd);
	void SetTranslateSurface(BOOL Fwd, BOOL ValIn);
	LPDISPATCH GetEndConditionReference(BOOL Forward, long* ReferenceType);
	void SetEndConditionReference(BOOL Forward, LPDISPATCH PDisp);
	VARIANT GetContours();
	void SetContours(const VARIANT& newValue);
	long GetContoursCount();
	LPDISPATCH IGetContours(long Count);
	void ISetContours(long Count, LPDISPATCH* Contours);
	long GetDirectionReference(LPDISPATCH* Ref1, long* Type1, LPDISPATCH* Ref2, long* Type2);
	void SetDirectionReference(LPDISPATCH Ref1, LPDISPATCH Ref2);
	BOOL GetAutoFilletCorners();
	double GetAutoFilletRadius();
	BOOL SetAutoFillet(BOOL autoFillet, double Radius);
	long GetFromType();
	void SetFromType(long nNewValue);
	void GetFromEntity(LPDISPATCH* FromEntity, long* Type);
	void SetFromEntity(LPDISPATCH FromEntity);
	double GetFromOffsetDistance();
	void SetFromOffsetDistance(double newValue);
	BOOL GetFromOffsetReverse();
	void SetFromOffsetReverse(BOOL bNewValue);
};
/////////////////////////////////////////////////////////////////////////////
// IRevolveFeatureData2 wrapper class

class IRevolveFeatureData2 : public COleDispatchDriver
{
public:
	IRevolveFeatureData2() {}		// Calls COleDispatchDriver default constructor
	IRevolveFeatureData2(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	IRevolveFeatureData2(const IRevolveFeatureData2& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	double GetRevolutionAngle(BOOL Forward);
	void SetRevolutionAngle(BOOL Forward, double Angle);
	double GetWallThickness(BOOL Forward);
	void SetWallThickness(BOOL Forward, double WallThickness);
	long GetType();
	void SetType(long nNewValue);
	BOOL GetReverseDirection();
	void SetReverseDirection(BOOL bNewValue);
	BOOL IsBossFeature();
	BOOL IsThinFeature();
	long GetThinWallType();
	void SetThinWallType(long nNewValue);
	BOOL GetMerge();
	void SetMerge(BOOL bNewValue);
	BOOL GetFeatureScope();
	void SetFeatureScope(BOOL bNewValue);
	BOOL GetAutoSelect();
	void SetAutoSelect(BOOL bNewValue);
	VARIANT GetFeatureScopeBodies();
	void SetFeatureScopeBodies(const VARIANT& newValue);
	long GetFeatureScopeBodiesCount();
	LPDISPATCH IGetFeatureScopeBodies(long Count);
	void ISetFeatureScopeBodies(long Count, LPDISPATCH* BodyArr);
	BOOL AccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	BOOL IAccessSelections(LPDISPATCH TopDoc, LPDISPATCH Component);
	void ReleaseSelectionAccess();
	VARIANT GetContours();
	void SetContours(const VARIANT& newValue);
	long GetContoursCount();
	LPDISPATCH IGetContours(long Count);
	void ISetContours(long Count, LPDISPATCH* Contours);
	LPDISPATCH GetAxis();
	void SetAxis(LPDISPATCH newValue);
	long GetAxisType();
};
/////////////////////////////////////////////////////////////////////////////
// ILight wrapper class

class ILight : public COleDispatchDriver
{
public:
	ILight() {}		// Calls COleDispatchDriver default constructor
	ILight(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	ILight(const ILight& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetId();
};
/////////////////////////////////////////////////////////////////////////////
// DTaskpaneViewEvents wrapper class

class DTaskpaneViewEvents : public COleDispatchDriver
{
public:
	DTaskpaneViewEvents() {}		// Calls COleDispatchDriver default constructor
	DTaskpaneViewEvents(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	DTaskpaneViewEvents(const DTaskpaneViewEvents& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long TaskPaneActivateNotify();
	long TaskPaneDeactivateNotify();
	long TaskPaneDestroyNotify();
};
