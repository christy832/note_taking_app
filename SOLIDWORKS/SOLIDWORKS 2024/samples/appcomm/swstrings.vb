'$c4   DKC 04/04/2006 Added WeldmentTableFeat feature name string.
'$c3   DKC 03/22/2006 Updated for Sw2007 and synchronized with swconst.idl
'$c2   DKC 04/22/2005 Updated for Sw2006 and synchronized with swconst.idl
'$c1   JSP 06/11/2003 defined strings not in swconst.tlb for the api
Module SwStrings

' Body Features
    Public Const swTnChamfer As String = "Chamfer"
    Public Const swTnFillet As String = "Fillet"
    Public Const swTnCavity As String = "Cavity"
    Public Const swTnDraft As String = "Draft"
    Public Const swTnMirrorSolid As String = "MirrorSolid"
    Public Const swTnCirPattern As String = "CirPattern"
    Public Const swTnLPattern As String = "LPattern"
    Public Const swTnMirrorPattern As String = "MirrorPattern"
    Public Const swTnShell As String = "Shell"
    Public Const swTnBlend As String = "Blend"
    Public Const swTnBlendCut As String = "BlendCut"
    Public Const swTnExtrusion As String = "Extrusion"
    Public Const swTnBoss As String = "Boss"
    Public Const swTnCut As String = "Cut"
    Public Const swTnRefCurve As String = "RefCurve"
    Public Const swTnRevolution As String = "Revolution"
    Public Const swTnRevCut As String = "RevCut"
    Public Const swTnSweep As String = "Sweep"
    Public Const swTnSweepCut As String = "SweepCut"
    Public Const swTnStock As String = "Stock"
    Public Const swTnSurfCut As String = "SurfCut"
    Public Const swTnThicken As String = "Thicken"
    Public Const swTnThickenCut As String = "ThickenCut"
    Public Const swTnVarFillet As String = "VarFillet"
    Public Const swTnSketchHole As String = "SketchHole"
    Public Const swTnHoleWzd As String = "HoleWzd"
    Public Const swTnImported As String = "Imported"
    Public Const swTnBaseBody As String = "BaseBody"
    Public Const swTnDerivedLPattern As String = "DerivedLPattern"
    Public Const swTnCosmeticThread As String = "CosmeticThread"

' Sheet Metal features
    Public Const swTnSheetMetal As String = "SheetMetal"
    Public Const swTnFlattenBends As String = "FlattenBends"
    Public Const swTnProcessBends As String = "ProcessBends"
    Public Const swTnOneBend As String = "OneBend"
    Public Const swTnBaseFlange As String = "SMBaseFlange"
    Public Const swTnSketchBend As String = "SketchBend"
    Public Const swTnSM3dBend As String = "SM3dBend"
    Public Const swTnEdgeFlange As String = "EdgeFlange"
    Public Const swTnFlatPattern As String = "FlatPattern"

' Drawing Related
    Public Const swTnCenterMark As String = "CenterMark"
    Public Const swTnDrSheet As String = "DrSheet"
    Public Const swTnAbsoluteView As String = "AbsoluteView"
    Public Const swTnDetailView As String = "DetailView"
    Public Const swTnRelativeView As String = "RelativeView"
    Public Const swTnSectionPartView As String = "SectionPartView"
    Public Const swTnSectionAssemView As String = "SectionAssemView"
    Public Const swTnUnfoldedView As String = "UnfoldedView"
    Public Const swTnAuxiliaryView As String = "AuxiliaryView"
    Public Const swTnDetailCircle As String = "DetailCircle"
    Public Const swTnDrSectionLine As String = "DrSectionLine"
    Public Const swTnBomTableFeature As String = "BomFeat"
    Public Const swTnHoleTableFeature As String = "HoleTableFeat"
    Public Const swTnRevisionTableFeature As String = "RevisionTableFeat"
    Public Const swTnWeldmentTableFeature As String = "WeldmentTableFeat"
    Public Const swTnGeneralTableAnchor As String = "GeneralTableAnchor"
    Public Const swTnHoleTableAnchor As String = "HoleTableAnchor"
    Public Const swTnWeldmentTableAnchor As String = "WeldmentTableAnchor"
    Public Const swTnRevisionTableAnchor As String = "RevisionTableAnchor"
    Public Const swTnBomTableAnchor As String = "BomTemplate"

' Assembly Related
    Public Const swTnMateCoincident As String = "MateCoincident"
    Public Const swTnMateConcentric As String = "MateConcentric"
    Public Const swTnMateDistanceDim As String = "MateDistanceDim"
    Public Const swTnMateParallel As String = "MateParallel"
    Public Const swTnMateTangent As String = "MateTangent"
    Public Const swTnReference As String = "Reference"

' Reference Geometry
    Public Const swTnRefPlane As String = "RefPlane"
    Public Const swTnRefAxis As String = "RefAxis"
    Public Const swTnReferenceCurve As String = "ReferenceCurve"
    Public Const swTnRefSurface As String = "RefSurface"
    Public Const swTnCoordinateSystem As String = "CoordSys"

' Folder features
    Public Const swTnFeatureFolder As String = "FtrFolder"
    Public Const swTnSurfaceBodyFolder As String = "SurfaceBodyFolder"
    Public Const swTnSolidBodyFolder As String = "SolidBodyFolder"
    Public Const swTnCutListFolder As String = "CutListFolder"
    Public Const swTnSubWeldFolder As String = "SubWeldFolder"
    Public Const swTnSubAtomFolder As String = "SubAtomFolder"
    Public Const swTnSimulationFolder As String = "AEMSimFeature"
    Public Const swTnCommentsFolder As String = "CommentsFolder"
    Public Const swTnBlocksFolder As String = "BlockFolder"
    Public Const swTnDocsFolder As String = "DocsFolder"

' Other Miscellaneous features
    Public Const swTnAttribute As String = "Attribute"
    Public Const swTnProfileFeature As String = "ProfileFeature"
    Public Const swTnPartConfiguration As String = "PartConfiguration"
    Public Const swTnConfiguration As String = "Configuration"
    Public Const swTnSketchBlockDefinition As String = "SketchBlockDef"

' Symbol markers
    Public Const SYMBOL_MARKER_START As String = "<"
    Public Const SYMBOL_MARKER_END As String = ">"
    Public Const SYMBOL_MARKER_SPACE As String = "-"
    Public Const TIME_ORIGIN As String = "1990, 1, 1, 0, 0, 0"
End Module
