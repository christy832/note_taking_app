//$c4	DKC 04/04/2006 Added WeldmentTableFeat feature name string.
//$c3   DKC 03/22/2006 Updated for Sw2007 and synchronized with swconst.idl
//$c2   DKC 04/22/2005 Updated for Sw2006 and synchronized with swconst.idl
//$c1   JSP 06/11/2003 defined strings not in swconst.tlb for the api
namespace swconst
{
	public class SwStrings
	{
	// Body Features
		public const string swTnChamfer = "Chamfer";
		public const string swTnFillet = "Fillet";
		public const string swTnCavity = "Cavity";
		public const string swTnDraft = "Draft";
		public const string swTnMirrorSolid = "MirrorSolid";
		public const string swTnCirPattern = "CirPattern";
		public const string swTnLPattern = "LPattern";
		public const string swTnMirrorPattern = "MirrorPattern";
		public const string swTnShell = "Shell";
		public const string swTnBlend = "Blend";
		public const string swTnBlendCut = "BlendCut";
		public const string swTnExtrusion = "Extrusion";
		public const string swTnBoss = "Boss";
		public const string swTnCut = "Cut";
		public const string swTnRefCurve = "RefCurve";
		public const string swTnRevolution = "Revolution";
		public const string swTnRevCut = "RevCut";
		public const string swTnSweep = "Sweep";
		public const string swTnSweepCut = "SweepCut";
		public const string swTnStock = "Stock";
		public const string swTnSurfCut = "SurfCut";
		public const string swTnThicken = "Thicken";
		public const string swTnThickenCut = "ThickenCut";
		public const string swTnVarFillet = "VarFillet";
		public const string swTnSketchHole = "SketchHole";
		public const string swTnHoleWzd = "HoleWzd";
		public const string swTnImported = "Imported";
		public const string swTnBaseBody = "BaseBody";
		public const string swTnDerivedLPattern = "DerivedLPattern";
		public const string swTnCosmeticThread = "CosmeticThread";

	// Sheet Metal features
		public const string swTnSheetMetal = "SheetMetal";
		public const string swTnFlattenBends = "FlattenBends";
		public const string swTnProcessBends = "ProcessBends";
		public const string swTnOneBend = "OneBend";
		public const string swTnBaseFlange = "SMBaseFlange";
		public const string swTnSketchBend = "SketchBend";
		public const string swTnSM3dBend = "SM3dBend";
		public const string swTnEdgeFlange = "EdgeFlange";
		public const string swTnFlatPattern = "FlatPattern";

	// Drawing Related
		public const string swTnCenterMark = "CenterMark";
		public const string swTnDrSheet = "DrSheet";
		public const string swTnAbsoluteView = "AbsoluteView";
		public const string swTnDetailView = "DetailView";
		public const string swTnRelativeView = "RelativeView";
		public const string swTnSectionPartView = "SectionPartView";
		public const string swTnSectionAssemView = "SectionAssemView";
		public const string swTnUnfoldedView = "UnfoldedView";
		public const string swTnAuxiliaryView = "AuxiliaryView";
		public const string swTnDetailCircle = "DetailCircle";
		public const string swTnDrSectionLine = "DrSectionLine";
		public const string swTnBomTableFeature = "BomFeat";
		public const string swTnHoleTableFeature = "HoleTableFeat";
		public const string swTnRevisionTableFeature = "RevisionTableFeat";
		public const string swTnWeldmentTableFeature = "WeldmentTableFeat";
		public const string swTnGeneralTableAnchor = "GeneralTableAnchor";
		public const string swTnHoleTableAnchor = "HoleTableAnchor";
		public const string swTnWeldmentTableAnchor = "WeldmentTableAnchor";
		public const string swTnRevisionTableAnchor = "RevisionTableAnchor";
		public const string swTnBomTableAnchor = "BomTemplate";

	// Assembly Related
		public const string swTnMateCoincident = "MateCoincident";
		public const string swTnMateConcentric = "MateConcentric";
		public const string swTnMateDistanceDim = "MateDistanceDim";
		public const string swTnMateParallel = "MateParallel";
		public const string swTnMateTangent = "MateTangent";
		public const string swTnReference = "Reference";

	// Reference Geometry
		public const string swTnRefPlane = "RefPlane";
		public const string swTnRefAxis = "RefAxis";
		public const string swTnReferenceCurve = "ReferenceCurve";
		public const string swTnRefSurface = "RefSurface";
		public const string swTnCoordinateSystem = "CoordSys";

	// Folder features
		public const string swTnFeatureFolder = "FtrFolder";
		public const string swTnSurfaceBodyFolder = "SurfaceBodyFolder";
		public const string swTnSolidBodyFolder = "SolidBodyFolder";
		public const string swTnCutListFolder = "CutListFolder";
		public const string swTnSubWeldFolder = "SubWeldFolder";
		public const string swTnSubAtomFolder = "SubAtomFolder";
		public const string swTnSimulationFolder = "AEMSimFeature";
		public const string swTnCommentsFolder = "CommentsFolder";
		public const string swTnBlocksFolder = "BlockFolder";
		public const string swTnDocsFolder = "DocsFolder";

	// Other Miscellaneous features
		public const string swTnAttribute = "Attribute";
		public const string swTnProfileFeature = "ProfileFeature";
		public const string swTnPartConfiguration = "PartConfiguration";
		public const string swTnConfiguration = "Configuration";
		public const string swTnSketchBlockDefinition = "SketchBlockDef";

	// Symbol markers
		public const char SYMBOL_MARKER_START		= '<';
		public const char SYMBOL_MARKER_END		= '>';
		public const char SYMBOL_MARKER_SPACE		= '-';

	// This is the beginning of time. Used to initialize su_CTime.
		//#define TIME_ORIGIN		1990, 1, 1, 0, 0, 0
	}
}