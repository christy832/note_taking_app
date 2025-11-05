

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 22:14:07 2038
 */
/* Compiler settings for ..\swconst.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0628 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */


#ifndef __swconst_h__
#define __swconst_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef DECLSPEC_XFGVIRT
#if defined(_CONTROL_FLOW_GUARD_XFG)
#define DECLSPEC_XFGVIRT(base, func) __declspec(xfg_virtual(base, func))
#else
#define DECLSPEC_XFGVIRT(base, func)
#endif
#endif

/* Forward Declarations */ 

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_swconst_0000_0000 */
/* [local] */ 

#pragma once


extern RPC_IF_HANDLE __MIDL_itf_swconst_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_swconst_0000_0000_v0_0_s_ifspec;


#ifndef __SwConst_LIBRARY_DEFINED__
#define __SwConst_LIBRARY_DEFINED__

/* library SwConst */
/* [helpstring][version][uuid] */ 

#define swTnChamfer _T("Chamfer")
#define swTnFillet _T("Fillet")
#define swTnCavity _T("Cavity")
#define swTnDraft _T("Draft")
#define swTnMirrorSolid _T("MirrorSolid")
#define swTnCirPattern _T("CirPattern")
#define swTnLPattern _T("LPattern")
#define swTnMirrorPattern _T("MirrorPattern")
#define swTnShell _T("Shell")
#define swTnBlend _T("Blend")
#define swTnBlendCut _T("BlendCut")
#define swTnExtrusion _T("Extrusion")
#define swTnBoss _T("Boss")
#define swTnCut _T("Cut")
#define swTnICE _T("ICE")
#define swTnRefCurve _T("RefCurve")
#define swTnRevolution _T("Revolution")
#define swTnRevCut _T("RevCut")
#define swTnSweep _T("Sweep")
#define swTnSweepCut _T("SweepCut")
#define swTnStock _T("Stock")
#define swTnSurfCut _T("SurfCut")
#define swTnThicken _T("Thicken")
#define swTnThickenCut _T("ThickenCut")
#define swTnVarFillet _T("VarFillet")
#define swTnSketchHole _T("SketchHole")
#define swTnHoleWzd _T("HoleWzd")
#define swTnImported _T("Imported")
#define swTnBaseBody _T("BaseBody")
#define swTnDerivedLPattern _T("DerivedLPattern")
#define swTnCosmeticThread _T("CosmeticThread")
#define swTnSweepThread _T("SweepThread")
#define swTnCurvePattern _T("CurvePattern")
#define swTnSketchPattern _T("SketchPattern")
#define swTnFillPattern _T("APattern")
#define swTnTablePattern _T("TablePattern")
#define swTnDimPattern _T("DimPattern")
#define swTnLocalLPattern _T("LocalLPattern")
#define swTnLocalCirPattern _T("LocalCirPattern")
#define swTnLocalCurvePattern _T("LocalCurvePattern")
#define swTnLocalSketchPattern _T("LocalSketchPattern")
#define swTnLocalChainPattern _T("LocalChainPattern")
#define swTnSheetMetal _T("SheetMetal")
#define swTnFlattenBends _T("FlattenBends")
#define swTnProcessBends _T("ProcessBends")
#define swTnOneBend _T("OneBend")
#define swTnBaseFlange _T("SMBaseFlange")
#define swTnSketchBend _T("SketchBend")
#define swTnCrossBreak _T("CrossBreak")
#define swTnSM3dBend _T("SM3dBend")
#define swTnEdgeFlange _T("EdgeFlange")
#define swTnFlatPattern _T("FlatPattern")
#define swTnBreakCorner _T("BreakCorner")
#define swTnCornerTrim _T("CornerTrim")
#define swTnFormToolInstance _T("FormToolInstance")
#define swTnJog _T("Jog")
#define swTnTabAndSlot  _T("TabAndSlot")
#define swTnNormalCut  _T("NormalCut")
#define swTnCenterMark _T("CenterMark")
#define swTnDrSheet _T("DrSheet")
#define swTnAbsoluteView _T("AbsoluteView")
#define swTnDetailView _T("DetailView")
#define swTnRelativeView _T("RelativeView")
#define swTnSectionPartView _T("SectionPartView")
#define swTnSectionAssemView _T("SectionAssemView")
#define swTnUnfoldedView _T("UnfoldedView")
#define swTnAuxiliaryView _T("AuxiliaryView")
#define swTnDetailCircle _T("DetailCircle")
#define swTnDrSectionLine _T("DrSectionLine")
#define swTnBomTableFeature _T("BomFeat")
#define swTnHoleTableFeature _T("HoleTableFeat")
#define swTnRevisionTableFeature _T("RevisionTableFeat")
#define swTnWeldmentTableFeature _T("WeldmentTableFeat")
#define swTnGeneralTableAnchor _T("GeneralTableAnchor")
#define swTnHoleTableAnchor _T("HoleTableAnchor")
#define swTnWeldmentTableAnchor _T("WeldmentTableAnchor")
#define swTnRevisionTableAnchor _T("RevisionTableAnchor")
#define swTnBomTableAnchor _T("BomTemplate")
#define swTnMateCoincident _T("MateCoincident")
#define swTnMateConcentric _T("MateConcentric")
#define swTnMateDistanceDim _T("MateDistanceDim")
#define swTnMateParallel _T("MateParallel")
#define swTnMateTangent _T("MateTangent")
#define swTnReference _T("Reference")
#define swTnWeldMemberFeat _T("WeldMemberFeat")
#define swTnRefPlane _T("RefPlane")
#define swTnRefAxis _T("RefAxis")
#define swTnReferenceCurve _T("ReferenceCurve")
#define swTnRefSurface _T("RefSurface")
#define swTnCoordinateSystem _T("CoordSys")
#define swTnFeatureFolder _T("FtrFolder")
#define swTnSurfaceBodyFolder _T("SurfaceBodyFolder")
#define swTnSolidBodyFolder _T("SolidBodyFolder")
#define swTnCutListFolder _T("CutListFolder")
#define swTnSubWeldFolder _T("SubWeldFolder")
#define swTnSubAtomFolder _T("SubAtomFolder")
#define swTnSimulationFolder _T("AEMSimFeature")
#define swTnCommentsFolder _T("CommentsFolder")
#define swTnBlocksFolder _T("BlockFolder")
#define swTnDocsFolder _T("DocsFolder")
#define swTnSelectionSetFolder _T("SelectionSetFolder")
#define swTnAttribute _T("Attribute")
#define swTnProfileFeature _T("ProfileFeature")
#define swTnPartConfiguration _T("PartConfiguration")
#define swTnConfiguration _T("Configuration")
#define swTnSketchBlockDefinition _T("SketchBlockDef")
#define swTnSketchPicture _T("SketchBitmap")
#define swTnLibraryFeature _T("LibraryFeature")
#define swTnAEMGravity _T("AEMGravity")
#define swTnAEMLinearForce _T("AEMLinearForce")
#define swTnAEMTorque _T("AEMTorque")
#define swTnAEMLinearMotor _T("AEMLinearMotor")
#define swTnAEMRotationalMotor _T("AEMRotationalMotor")
#define swTnAEMLinearSpring _T("AEMLinearSpring")
#define swTnAEMTorsionalSpring _T("AEMTorsionalSpring")
#define swTnAEMLinearDamper _T("AEMLinearDamper")
#define swTnAEMTorsionalDamper _T("AEMTorsionalDamper")
#define swTnAEM3DContact _T("AEM3DContact")
#define swTn3DProfileFeature 			_T("3DProfileFeature")
#define swTn3DSplineCurve    			_T("3DSplineCurve")
#define swTnAbsoluteView     			_T("AbsoluteView")
#define swTnAEMSimFeature    			_T("AEMSimFeature")
#define swTnAlignGroup       			_T("AlignGroup")
#define swTnAmbientLight     			_T("AmbientLight")
#define swTnAttribute        			_T("Attribute")
#define swTnBending          			_T("Bending")
#define swTnBlendRefSurface  			_T("BlendRefSurface")
#define swTnBlockDef         			_T("BlockDef")
#define swTnBomTemplate      			_T("BomTemplate")
#define swTnBossThin         			_T("BossThin")
#define swTnBreakLine        			_T("BreakLine")
#define swTnCameraFeature    			_T("CameraFeature")
#define swTnCombineBodies    			_T("CombineBodies")
#define swTnComments         			_T("Comments")
#define swTnCompositeCurve   			_T("CompositeCurve")
#define swTnConfigBuilderFeature                     _T("ConfigBuilderFeature")
#define swTnCoordSys					_T("CoordSys")
#define swTnCurveInFile     				_T("CurveInFile")
#define swTnCurvePattern    				_T("CurvePattern")
#define swTnCutThin         				_T("CutThin")
#define swTnDeform          				_T("Deform")
#define swTnDeleteBody      				_T("DeleteBody")
#define swTnDelFace         				_T("DelFace")
#define swTnDerivedCirPattern                        _T("DerivedCirPattern")
#define swTnDesignTableFeature                       _T("DesignTableFeature")
#define swTnDetailCabinet                            _T("DetailCabinet")
#define swTnDirectionLight                           _T("DirectionLight")
#define swTnDome                                     _T("Dome")
#define swTnDrBreakoutSectionLine                    _T("DrBreakoutSectionLine")
#define swTnDrSheet                                  _T("DrSheet")
#define swTnDrTemplate                               _T("DrTemplate")
#define swTnDrViewDetached                           _T("DrViewDetached")
#define swTnEmbedLinkDoc                             _T("EmbedLinkDoc")
#define swTnEmboss                                   _T("Emboss")
#define swTnExplodeLineProfileFeature                _T("ExplodeLineProfileFeature")
#define swTnFeatSolidBodyFolder                      _T("FeatSolidBodyFolder")
#define swTnFeatSurfaceBodyFolder                    _T("FeatSurfaceBodyFolder")
#define swTnFillRefSurface                   	_T("FillRefSurface")
#define swTnFold					_T("Fold")
#define swTnFtrFolder				_T("FtrFolder")
#define swTnGridDetailFolder                 	_T("GridDetailFolder")
#define swTnGridFeature				_T("GridFeature")
#define swTnGusset					_T("Gusset")
#define swTnHelix					_T("Helix")
#define swTnHem					_T("Hem")
#define swTnHoleTableFeat                    	_T("HoleTableFeat")
#define swTnInContextFeatHolder			_T("InContextFeatHolder")
#define swTnInsertedFeatureFolder	        	_T("InsertedFeatureFolder")
#define swTnJournal					_T("Journal")
#define swTnLayoutProfileFeature			_T("LayoutProfileFeature")
#define swTnLiveSection				_T("LiveSection")
#define swTnLiveSectionFolder			_T("LiveSectionFolder")
#define swTnLoalCirPattern                     	_T("LoalCirPattern")
#define swTnLocalLPattern                    	_T("LocalLPattern")
#define swTnLoftedBend				_T("LoftedBend")
#define swTnMateGroup                        	_T("MateGroup")
#define swTnMateInPlace				_T("MateInPlace")
#define swTnMatePerpendicular			_T("MatePerpendicular")
#define swTnMatePlanarAngleDim			_T("MatePlanarAngleDim")
#define swTnMateReferenceGroupFolder                 _T("MateReferenceGroupFolder")
#define swTnMaterialFolder				_T("MaterialFolder")
#define swTnMateSymmetric				_T("MateSymmetric")
#define swTnMateWidth				_T("MateWidth")
#define swTnMidRefSurface				_T("MidRefSurface")
#define swTnMoldCoreCavitySolids                     _T("MoldCoreCavitySolids")
#define swTnMoldPartingGeom				_T("MoldPartingGeom")
#define swTnMoldPartingLine				_T("MoldPartingLine")
#define swTnMoldShutOffSrf				_T("MoldShutOffSrf")
#define swTnMoveCopyBody				_T("MoveCopyBody")
#define swTnOffsetRefSurface				_T("OffsetRefSurface")
#define swTnPLine					_T("PLine")
#define swTnPointLight				_T("PointLight")
#define swTnPosGroupFolder				_T("PosGroupFolder")
#define swTnProfileFtrFolder				_T("ProfileFtrFolder")
#define swTnRadiateRefSurface			_T("RadiateRefSurface")
#define swTnRefAxisFtrFolder				_T("RefAxisFtrFolder")
#define swTnReferenceBrowser				_T("ReferenceBrowser")
#define swTnReferenceEmbedded			_T("ReferenceEmbedded")
#define swTnReferenceInternal			_T("ReferenceInternal")
#define swTnRefPlaneFtrFolder			_T("RefPlaneFtrFolder")
#define swTnRefPoint					_T("RefPoint")
#define swTnReplaceFace				_T("ReplaceFace")
#define swTnRevolutionThin				_T("RevolutionThin")
#define swTnRevolvRefSurf				_T("RevolvRefSurf")
#define swTnRuledSrfFromEdge				_T("RuledSrfFromEdge")
#define swTnScale					_T("Scale")
#define swTnSection					_T("Section")
#define swTnSectionView				_T("SectionView")
#define swTnSewRefSurface				_T("SewRefSurface")
#define swTnShape					_T("Shape")
#define swTnSketchBend				_T("SketchBend")
#define swTnSketchPattern				_T("SketchPattern")
#define swTnSmartComponentFeature	        	_T("SmartComponentFeature")
#define swTnSmartComponentFolder                     _T("SmartComponentFolder")
#define swTnSmartComponentRefFolder	        	_T("SmartComponentRefFolder")
#define swTnSMBaseFlange				_T("SMBaseFlange")
#define swTnSMMiteredFlange				_T("SMMiteredFlange")
#define swTnSplit					_T("Split")
#define swTnSpotLight				_T("SpotLight")
#define swTnSweepRefSurface				_T("SweepRefSurface")
#define swTnTableFolder				_T("TableFolder")
#define swTnTablePattern				_T("TablePattern")
#define swTnToroidalBend				_T("ToroidalBend")
#define swTnTrimRefSurface				_T("TrimRefSurface")
#define swTnUiBend					_T("UiBend")
#define swTnUnFold					_T("UnFold")
#define swTnUnTrimRefSurf				_T("UnTrimRefSurf")
#define swTnViewerBodyFeature			_T("ViewerBodyFeature")
#define swTnVolSweep					_T("VolSweep")
#define swTnVolSweepCut				_T("VolSweepCut")
#define swTnVolSweepRefSurface			_T("VolSweepRefSurface")
#define swTnWeldmentFeature				_T("WeldmentFeature")
#define swTnXMLRulesFeature				_T("XMLRulesFeature")
#define swTnMirrorStock					_T("MirrorStock")
#define swTnSelectionSetNode				_T("SelectionSetNode")
#define swTnMateHinge			_T("MateHinge")
#define swTnMateGearDim			_T("MateGearDim")
#define swTnMateCamTangent			_T("MateCamTangent")
#define swTnMateSlot			_T("MateSlot")
#define swTnMateLinearCoupler			_T("MateLinearCoupler")
#define swTnMateRackPinionDim			_T("MateRackPinionDim")
#define swTnMateScrew			_T("MateScrew")
#define swTnMateUniversalJoint			_T("MateUniversalJoint")
#define swTnMateProfileCenter			_T("MateProfileCenter")
#define swTnMateLock			_T("MateLock")
#define swTnGroundPlane			_T("GroundPlane")
#define swTnBoundingBox			_T("BoundingBox")
#define swTnSMGusset     _T("SMGusset")
#define swTnCornerRelief			_T("CornerRelief")
#define swTnBeltAndChain			_T("Belt")
#define swTnStrctSysFeat				_T("StrctSysFeat")
#define swTnStrctSysGrpFeat			_T("StrctSysGrpFeat")
#define swTnStrctSysMbrFeat			_T("StrctSysMbrFeat")
#define swTnStrctSysCnrMgmtFeat		_T("StrctSysCnrMgmtFeat")
#define swTnStrctSysCnrGrpFeat		_T("StrctSysCnrGrpFeat")
#define swTnStrctSysCnrFeat			_T("StrctSysCnrFeat")
#define swTnMateController			_T("MateController")
#define SYMBOL_MARKER_START		(_T('<'))
#define SYMBOL_MARKER_END		(_T('>'))
#define SYMBOL_MARKER_SPACE		(_T('-'))
/* [uuid] */ 
enum  DECLSPEC_UUID("028BF0C6-C00C-4a25-A41F-21202014595C") swFeatureNameID_e
    {
        swFmChamfer	= 0,
        swFmFillet	= ( swFmChamfer + 1 ) ,
        swFmCavity	= ( swFmFillet + 1 ) ,
        swFmDraft	= ( swFmCavity + 1 ) ,
        swFmMirrorSolid	= ( swFmDraft + 1 ) ,
        swFmCirPattern	= ( swFmMirrorSolid + 1 ) ,
        swFmLPattern	= ( swFmCirPattern + 1 ) ,
        swFmMirrorPattern	= ( swFmLPattern + 1 ) ,
        swFmShell	= ( swFmMirrorPattern + 1 ) ,
        swFmBlend	= ( swFmShell + 1 ) ,
        swFmBlendCut	= ( swFmBlend + 1 ) ,
        swFmExtrusion	= ( swFmBlendCut + 1 ) ,
        swFmBoss	= ( swFmExtrusion + 1 ) ,
        swFmCut	= ( swFmBoss + 1 ) ,
        swFmRefCurve	= ( swFmCut + 1 ) ,
        swFmRevolution	= ( swFmRefCurve + 1 ) ,
        swFmRevCut	= ( swFmRevolution + 1 ) ,
        swFmSweep	= ( swFmRevCut + 1 ) ,
        swFmSweepCut	= ( swFmSweep + 1 ) ,
        swFmStock	= ( swFmSweepCut + 1 ) ,
        swFmSurfCut	= ( swFmStock + 1 ) ,
        swFmThicken	= ( swFmSurfCut + 1 ) ,
        swFmThickenCut	= ( swFmThicken + 1 ) ,
        swFmVarFillet	= ( swFmThickenCut + 1 ) ,
        swFmSketchHole	= ( swFmVarFillet + 1 ) ,
        swFmHoleWzd	= ( swFmSketchHole + 1 ) ,
        swFmImported	= ( swFmHoleWzd + 1 ) ,
        swFmBaseBody	= ( swFmImported + 1 ) ,
        swFmDerivedLPattern	= ( swFmBaseBody + 1 ) ,
        swFmCosmeticThread	= ( swFmDerivedLPattern + 1 ) ,
        swFmSheetMetal	= ( swFmCosmeticThread + 1 ) ,
        swFmFlattenBends	= ( swFmSheetMetal + 1 ) ,
        swFmProcessBends	= ( swFmFlattenBends + 1 ) ,
        swFmOneBend	= ( swFmProcessBends + 1 ) ,
        swFmBaseFlange	= ( swFmOneBend + 1 ) ,
        swFmSketchBend	= ( swFmBaseFlange + 1 ) ,
        swFmSM3dBend	= ( swFmSketchBend + 1 ) ,
        swFmEdgeFlange	= ( swFmSM3dBend + 1 ) ,
        swFmFlatPattern	= ( swFmEdgeFlange + 1 ) ,
        swFmCenterMark	= ( swFmFlatPattern + 1 ) ,
        swFmDrSheet	= ( swFmCenterMark + 1 ) ,
        swFmAbsoluteView	= ( swFmDrSheet + 1 ) ,
        swFmDetailView	= ( swFmAbsoluteView + 1 ) ,
        swFmRelativeView	= ( swFmDetailView + 1 ) ,
        swFmSectionPartView	= ( swFmRelativeView + 1 ) ,
        swFmSectionAssemView	= ( swFmSectionPartView + 1 ) ,
        swFmUnfoldedView	= ( swFmSectionAssemView + 1 ) ,
        swFmAuxiliaryView	= ( swFmUnfoldedView + 1 ) ,
        swFmDetailCircle	= ( swFmAuxiliaryView + 1 ) ,
        swFmDrSectionLine	= ( swFmDetailCircle + 1 ) ,
        swFmBomTableFeature	= ( swFmDrSectionLine + 1 ) ,
        swFmHoleTableFeature	= ( swFmBomTableFeature + 1 ) ,
        swFmRevisionTableFeature	= ( swFmHoleTableFeature + 1 ) ,
        swFmMateCoincident	= ( swFmRevisionTableFeature + 1 ) ,
        swFmMateConcentric	= ( swFmMateCoincident + 1 ) ,
        swFmMateDistanceDim	= ( swFmMateConcentric + 1 ) ,
        swFmMateParallel	= ( swFmMateDistanceDim + 1 ) ,
        swFmMateTangent	= ( swFmMateParallel + 1 ) ,
        swFmReference	= ( swFmMateTangent + 1 ) ,
        swFmRefPlane	= ( swFmReference + 1 ) ,
        swFmRefAxis	= ( swFmRefPlane + 1 ) ,
        swFmReferenceCurve	= ( swFmRefAxis + 1 ) ,
        swFmRefSurface	= ( swFmReferenceCurve + 1 ) ,
        swFmCoordinateSystem	= ( swFmRefSurface + 1 ) ,
        swFmAttribute	= ( swFmCoordinateSystem + 1 ) ,
        swFmProfileFeature	= ( swFmAttribute + 1 ) ,
        swFmFeatureFolder	= ( swFmProfileFeature + 1 ) ,
        swFmSurfaceBodyFolder	= ( swFmFeatureFolder + 1 ) ,
        swFmSolidBodyFolder	= ( swFmSurfaceBodyFolder + 1 ) ,
        swFmLibraryFeature	= ( swFmSolidBodyFolder + 1 ) ,
        swFmBreakCorner	= ( swFmLibraryFeature + 1 ) ,
        swFmCornerTrim	= ( swFmBreakCorner + 1 ) ,
        swFmWeldMemberFeat	= ( swFmCornerTrim + 1 ) ,
        swFmFormToolInstance	= ( swFmWeldMemberFeat + 1 ) ,
        swFmAEMGravity	= ( swFmFormToolInstance + 1 ) ,
        swFmAEMLinearForce	= ( swFmAEMGravity + 1 ) ,
        swFmAEMTorque	= ( swFmAEMLinearForce + 1 ) ,
        swFmAEMLinearMotor	= ( swFmAEMTorque + 1 ) ,
        swFmAEMRotationalMotor	= ( swFmAEMLinearMotor + 1 ) ,
        swFmAEMLinearSpring	= ( swFmAEMRotationalMotor + 1 ) ,
        swFmAEMTorsionalSpring	= ( swFmAEMLinearSpring + 1 ) ,
        swFmAEMLinearMotionSpring	= ( swFmAEMTorsionalSpring + 1 ) ,
        swFmAEMTorsionalMotionSpring	= ( swFmAEMLinearMotionSpring + 1 ) ,
        swFmAEMLinearDamper	= ( swFmAEMTorsionalMotionSpring + 1 ) ,
        swFmAEMTorsionalDamper	= ( swFmAEMLinearDamper + 1 ) ,
        swFmAEM3DContact	= ( swFmAEMTorsionalDamper + 1 ) ,
        swFmCrossBreak	= ( swFmAEM3DContact + 1 ) ,
        swFmSweepThread	= ( swFmCrossBreak + 1 ) ,
        swFmTabAndSlot	= ( swFmSweepThread + 1 ) ,
        swFmMatePerpendicular	= ( swFmTabAndSlot + 1 ) ,
        swFmMateLock	= ( swFmMatePerpendicular + 1 ) ,
        swFmMateCamTangent	= ( swFmMateLock + 1 ) ,
        swFmMateSlot	= ( swFmMateCamTangent + 1 ) ,
        swFmMatePlanarAngleDim	= ( swFmMateSlot + 1 ) ,
        swFmMateHinge	= ( swFmMatePlanarAngleDim + 1 ) ,
        swFmMateRackPinionDim	= ( swFmMateHinge + 1 ) ,
        swFmMateGearDim	= ( swFmMateRackPinionDim + 1 ) ,
        swFmMateScrew	= ( swFmMateGearDim + 1 ) ,
        swFmMateUniversalJoint	= ( swFmMateScrew + 1 ) ,
        swFmMateSymmetric	= ( swFmMateUniversalJoint + 1 ) ,
        swFmMateWidth	= ( swFmMateSymmetric + 1 ) ,
        swFmMateProfileCenter	= ( swFmMateWidth + 1 ) ,
        swFmMateLinearCoupler	= ( swFmMateProfileCenter + 1 ) ,
        swFmCurvePattern	= ( swFmMateLinearCoupler + 1 ) ,
        swFmSketchPattern	= ( swFmCurvePattern + 1 ) ,
        swFmFillPattern	= ( swFmSketchPattern + 1 ) ,
        swFmTablePattern	= ( swFmFillPattern + 1 ) ,
        swFmDimPattern	= ( swFmTablePattern + 1 ) ,
        swFmLocalLPattern	= ( swFmDimPattern + 1 ) ,
        swFmLocalCirPattern	= ( swFmLocalLPattern + 1 ) ,
        swFmLocalCurvePattern	= ( swFmLocalCirPattern + 1 ) ,
        swFmLocalSketchPattern	= ( swFmLocalCurvePattern + 1 ) ,
        swFmLocalChainPattern	= ( swFmLocalSketchPattern + 1 ) ,
        swFmGroundPlane	= ( swFmLocalChainPattern + 1 ) ,
        swFmBoundingBox	= ( swFmGroundPlane + 1 ) ,
        swFmNormalCut	= ( swFmBoundingBox + 1 ) ,
        swFmMirrorComponent	= ( swFmNormalCut + 1 ) ,
        swFmSweptFlange	= ( swFmMirrorComponent + 1 ) ,
        swFmSMGusset	= ( swFmSweptFlange + 1 ) ,
        swFmBeltAndChain	= ( swFmSMGusset + 1 ) ,
        swFmCornerRelief	= ( swFmBeltAndChain + 1 ) ,
        swFmStrctSysFeat	= ( swFmCornerRelief + 1 ) ,
        swFmStrctSysGrpFeat	= ( swFmStrctSysFeat + 1 ) ,
        swFmStrctSysMbrFeat	= ( swFmStrctSysGrpFeat + 1 ) ,
        swFmStrctSysCnrMgmtFeat	= ( swFmStrctSysMbrFeat + 1 ) ,
        swFmStrctSysCnrGrpFeat	= ( swFmStrctSysCnrMgmtFeat + 1 ) ,
        swFmStrctSysCnrFeat	= ( swFmStrctSysCnrGrpFeat + 1 ) ,
        swFmMateController	= ( swFmStrctSysCnrFeat + 1 ) 
    } ;
#define TIME_ORIGIN		1990, 1, 1, 0, 0, 0
/* [uuid] */ 
enum  DECLSPEC_UUID("55A9AAAE-97D1-4621-A5A9-21A67CDCE87A") swDocumentTypes_e
    {
        swDocNONE	= 0,
        swDocPART	= 1,
        swDocASSEMBLY	= 2,
        swDocDRAWING	= 3,
        swDocSDM	= 4,
        swDocLAYOUT	= 5,
        swDocIMPORTED_PART	= 6,
        swDocIMPORTED_ASSEMBLY	= 7
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("2E9AA9B9-A044-4156-9565-1FD8AF4F8288") swObjectEquality
    {
        swObjectNotSame	= 0,
        swObjectSame	= 1,
        swObjectUnsupported	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("81A319FF-3430-4E2F-8981-49F92D6A6A67") swSelectType_e
    {
        swSelNOTHING	= 0,
        swSelEDGES	= 1,
        swSelFACES	= 2,
        swSelVERTICES	= 3,
        swSelDATUMPLANES	= 4,
        swSelDATUMAXES	= 5,
        swSelDATUMPOINTS	= 6,
        swSelOLEITEMS	= 7,
        swSelATTRIBUTES	= 8,
        swSelSKETCHES	= 9,
        swSelSKETCHSEGS	= 10,
        swSelSKETCHPOINTS	= 11,
        swSelDRAWINGVIEWS	= 12,
        swSelGTOLS	= 13,
        swSelDIMENSIONS	= 14,
        swSelNOTES	= 15,
        swSelSECTIONLINES	= 16,
        swSelDETAILCIRCLES	= 17,
        swSelSECTIONTEXT	= 18,
        swSelSHEETS	= 19,
        swSelCOMPONENTS	= 20,
        swSelMATES	= 21,
        swSelBODYFEATURES	= 22,
        swSelREFCURVES	= 23,
        swSelEXTSKETCHSEGS	= 24,
        swSelEXTSKETCHPOINTS	= 25,
        swSelHELIX	= 26,
        swSelREFERENCECURVES	= 26,
        swSelREFSURFACES	= 27,
        swSelCENTERMARKS	= 28,
        swSelINCONTEXTFEAT	= 29,
        swSelMATEGROUP	= 30,
        swSelBREAKLINES	= 31,
        swSelINCONTEXTFEATS	= 32,
        swSelMATEGROUPS	= 33,
        swSelSKETCHTEXT	= 34,
        swSelSFSYMBOLS	= 35,
        swSelDATUMTAGS	= 36,
        swSelCOMPPATTERN	= 37,
        swSelWELDS	= 38,
        swSelCTHREADS	= 39,
        swSelDTMTARGS	= 40,
        swSelPOINTREFS	= 41,
        swSelDCABINETS	= 42,
        swSelEXPLVIEWS	= 43,
        swSelEXPLSTEPS	= 44,
        swSelEXPLLINES	= 45,
        swSelSILHOUETTES	= 46,
        swSelCONFIGURATIONS	= 47,
        swSelOBJHANDLES	= 48,
        swSelARROWS	= 49,
        swSelZONES	= 50,
        swSelREFEDGES	= 51,
        swSelREFFACES	= 52,
        swSelREFSILHOUETTE	= 53,
        swSelBOMS	= 54,
        swSelEQNFOLDER	= 55,
        swSelSKETCHHATCH	= 56,
        swSelIMPORTFOLDER	= 57,
        swSelVIEWERHYPERLINK	= 58,
        swSelMIDPOINTS	= 59,
        swSelCUSTOMSYMBOLS	= 60,
        swSelCOORDSYS	= 61,
        swSelDATUMLINES	= 62,
        swSelROUTECURVES	= 63,
        swSelBOMTEMPS	= 64,
        swSelROUTEPOINTS	= 65,
        swSelCONNECTIONPOINTS	= 66,
        swSelROUTESWEEPS	= 67,
        swSelPOSGROUP	= 68,
        swSelBROWSERITEM	= 69,
        swSelFABRICATEDROUTE	= 70,
        swSelSKETCHPOINTFEAT	= 71,
        swSelEMPTYSPACE	= 72,
        swSelCOMPSDONTOVERRIDE	= 72,
        swSelLIGHTS	= 73,
        swSelWIREBODIES	= 74,
        swSelSURFACEBODIES	= 75,
        swSelSOLIDBODIES	= 76,
        swSelFRAMEPOINT	= 77,
        swSelSURFBODIESFIRST	= 78,
        swSelMANIPULATORS	= 79,
        swSelPICTUREBODIES	= 80,
        swSelSOLIDBODIESFIRST	= 81,
        swSelHOLESERIES	= 83,
        swSelLEADERS	= 84,
        swSelSKETCHBITMAP	= 85,
        swSelDOWELSYMS	= 86,
        swSelEXTSKETCHTEXT	= 88,
        swSelBLOCKINST	= 93,
        swSelFTRFOLDER	= 94,
        swSelSKETCHREGION	= 95,
        swSelSKETCHCONTOUR	= 96,
        swSelBOMFEATURES	= 97,
        swSelANNOTATIONTABLES	= 98,
        swSelBLOCKDEF	= 99,
        swSelCENTERMARKSYMS	= 100,
        swSelSIMULATION	= 101,
        swSelSIMELEMENT	= 102,
        swSelCENTERLINES	= 103,
        swSelHOLETABLEFEATS	= 104,
        swSelHOLETABLEAXES	= 105,
        swSelWELDMENT	= 106,
        swSelSUBWELDFOLDER	= 107,
        swSelEXCLUDEMANIPULATORS	= 111,
        swSelREVISIONTABLE	= 113,
        swSelSUBSKETCHINST	= 114,
        swSelWELDMENTTABLEFEATS	= 116,
        swSelBODYFOLDER	= 118,
        swSelREVISIONTABLEFEAT	= 119,
        swSelSUBATOMFOLDER	= 121,
        swSelWELDBEADS	= 122,
        swSelEMBEDLINKDOC	= 123,
        swSelJOURNAL	= 124,
        swSelDOCSFOLDER	= 125,
        swSelCOMMENTSFOLDER	= 126,
        swSelCOMMENT	= 127,
        swSelSWIFTANNOTATIONS	= 130,
        swSelSWIFTFEATURES	= 132,
        swSelCAMERAS	= 136,
        swSelMATESUPPLEMENT	= 138,
        swSelANNOTATIONVIEW	= 139,
        swSelGENERALTABLEFEAT	= 142,
        swSelDISPLAYSTATE	= 148,
        swSelBELTCHAINFEATS	= 149,
        swSelSUBSKETCHDEF	= 154,
        swSelSWIFTSCHEMA	= 159,
        swSelTITLEBLOCK	= 192,
        swSelTITLEBLOCKTABLEFEAT	= 206,
        swSelOBJGROUP	= 207,
        swSelPLANESECTIONS	= 219,
        swSelCOSMETICWELDS	= 220,
        SwSelMAGNETICLINES	= 225,
        swSelPUNCHTABLEFEATS	= 234,
        swSelREVISIONCLOUDS	= 240,
        swSelBorder	= 254,
        swSelSELECTIONSETFOLDER	= 258,
        swSelSELECTIONSETNODE	= 259,
        swSelGRAPHICSBODY	= 262,
        swSelFACETS	= 268,
        swSelMESHFACETEDGES	= 269,
        swSelMESHFACETVERTICES	= 270,
        swSelMESHSOLIDBODIES	= 274,
        swSelADVSTRUCTMEMBER	= 295,
        swSelEVERYTHING	= -3,
        swSelLOCATIONS	= -2,
        swSelUNSUPPORTED	= -1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("CD51833C-74E3-46f7-8C7A-88C3180E2D18") swMouseNotify_e
    {
        swMouseNotify	= 1,
        swMouseMoveNotify	= 2,
        swMouseLBtnDownNotify	= 3,
        swMouseLBtnUpNotify	= 4,
        swMouseRBtnDownNotify	= 5,
        swMouseRBtnUpNotify	= 6,
        swMouseMBtnDownNotify	= 7,
        swMouseMBtnUpNotify	= 8,
        swMouseLBtnDblClkNotify	= 9,
        swMouseRBtnDblClkNotify	= 10,
        swMouseMBtnDblClkNotify	= 11,
        swMouseSelectNotify	= 12
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("F2EC0E99-29FE-4421-9AE8-7CB6FB77C3DD") swPatternLayoutType_e
    {
        swPatternLayoutCircular	= 0,
        swPatternLayoutSquare	= 1,
        swPatternLayoutPolygon	= 2,
        swPatternLayoutPerforation	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("DE8D5AD7-6D8E-4D5C-AC5A-85E350CBDE32") swPatternLayoutSpacingType_e
    {
        swPatternLayoutTargetSpacing	= 0,
        swPatternLayoutInstances	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("BDFB4122-47AC-41DD-846B-418656E9D60C") swFeaturesToPatternType_e
    {
        swFeaturesToPatternSelectedFeatures	= 0,
        swFeaturesToPatternCreateSeedCut	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("B977EBBA-D1CD-4020-8E26-9EF2001F13F8") swCreateSeedCutType_e
    {
        swCreateSeedCutNone	= 0,
        swCreateSeedCutCircle	= 1,
        swCreateSeedCutSquare	= 2,
        swCreateSeedCutDiamond	= 3,
        swCreateSeedCutPolygon	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("A7316ED7-77C7-44A6-8F66-3E1FAE523FFE") swViewNotify_e
    {
        swViewRepaintNotify	= 1,
        swViewChangeNotify	= 2,
        swViewDestroyNotify	= 3,
        swViewRepaintPostNotify	= 4,
        swViewBufferSwapNotify	= 5,
        swViewDestroyNotify2	= 6,
        swViewPerspectiveViewNotify	= 7,
        swViewRenderLayer0Notify	= 8,
        swViewUserClearSelectionsNotify	= 9,
        swViewPrintNotify	= 10,
        swViewGraphicsRenderPostNotify	= 11,
        swViewDisplayModeChangePreNotify	= 12,
        swViewDisplayModeChangePostNotify	= 13,
        swViewPrintNotify2	= 14
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("D10B86A9-4E9A-4643-883E-26C64F9B826B") swFMViewNotify_e
    {
        swFMViewActivateNotify	= 1,
        swFMViewDeactivateNotify	= 2,
        swFMViewDestroyNotify	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("D767038A-05F6-43F3-A863-0989E8368ACC") swPartNotify_e
    {
        swPartRegenNotify	= 1,
        swPartDestroyNotify	= 2,
        swPartRegenPostNotify	= 3,
        swPartViewNewNotify	= 4,
        swPartNewSelectionNotify	= 5,
        swPartFileSaveNotify	= 6,
        swPartFileSaveAsNotify	= 7,
        swPartLoadFromStorageNotify	= 8,
        swPartSaveToStorageNotify	= 9,
        swPartConfigChangeNotify	= 10,
        swPartConfigChangePostNotify	= 11,
        swPartAutoSaveNotify	= 12,
        swPartAutoSaveToStorageNotify	= 13,
        swPartViewNewNotify2	= 14,
        swPartLightingDialogCreateNotify	= 15,
        swPartAddItemNotify	= 16,
        swPartRenameItemNotify	= 17,
        swPartDeleteItemNotify	= 18,
        swPartModifyNotify	= 19,
        swPartFileReloadNotify	= 20,
        swPartAddCustomPropertyNotify	= 21,
        swPartChangeCustomPropertyNotify	= 22,
        swPartDeleteCustomPropertyNotify	= 23,
        swPartFeatureEditPreNotify	= 24,
        swPartFeatureSketchEditPreNotify	= 25,
        swPartFileSaveAsNotify2	= 26,
        swPartDeleteSelectionPreNotify	= 27,
        swPartFileReloadPreNotify	= 28,
        swPartBodyVisibleChangeNotify	= 29,
        swPartRegenPostNotify2	= 30,
        swPartFileSavePostNotify	= 31,
        swPartLoadFromStorageStoreNotify	= 32,
        swPartSaveToStorageStoreNotify	= 33,
        swPartFeatureManagerTreeRebuildNotify	= 34,
        swPartFileDropPostNotify	= 35,
        swPartDynamicHighlightNotify	= 36,
        swPartDimensionChangeNotify	= 37,
        swPartFileReloadCancelNotify	= 38,
        swPartFileSavePostCancelNotify	= 39,
        swPartSketchSolveNotify	= 40,
        swPartDeleteItemPreNotify	= 41,
        swPartClearSelectionsNotify	= 42,
        swPartEquationEditorPreNotify	= 43,
        swPartEquationEditorPostNotify	= 44,
        swPartOpenDesignTableNotify	= 45,
        swPartCloseDesignTableNotify	= 46,
        swPartPromptBodiesToKeepNotify	= 47,
        swPartAddDvePagePreNotify	= 48,
        swPartUnitsChangeNotify	= 49,
        swPartDestroyNotify2	= 50,
        swPartConfigurationChangeNotify	= 51,
        swPartSuppressionStateChangeNotify	= 52,
        swPartActiveViewChangeNotify	= 53,
        swPartFeatureManagerFilterStringChangeNotify	= 54,
        swPartFlipLoopNotify	= 55,
        swPartFileDropPreNotify	= 56,
        swPartSensorAlertPreNotify	= 57,
        swPartUndoPostNotify	= 58,
        swPartUserSelectionPreNotify	= 59,
        swPartActiveDisplayStateChangePreNotify	= 60,
        swPartActiveDisplayStateChangePostNotify	= 61,
        swPartRedoPostNotify	= 62,
        swPartRedoPreNotify	= 63,
        swPartUndoPreNotify	= 64,
        swPartWeldmentCutListUpdatePostNotify	= 65,
        swPartAutoSaveToStorageStoreNotify	= 66,
        swPartDragStateChangeNotify	= 67,
        swPartInsertTableNotify	= 68,
        swPartModifyTableNotify	= 69,
        swPartUserSelectionPostNotify	= 70,
        swPartCommandManagerTabActivatedPreNotify	= 71,
        swPartPreRenameItemNotify	= 72,
        swPartRenamedDocumentNotify	= 73,
        swPartFeatureManagerTabActivatedPreNotify	= 74,
        swPartFeatureManagerTabActivatedNotify	= 75,
        swPartPublishTo3DPDFNotify	= 76,
        swPartConvertToBodiesPreNotify	= 77,
        swPartConvertToBodiesPostNotify	= 78,
        swPartRenameDisplayTitleNotify	= 79,
        swPartActiveAnnotationViewChangeNotify	= 80,
        swPartDisplayPaneExpandNotify	= 81,
        swPartDisplayPaneCollapseNotify	= 82
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("1DE96FE3-4131-4622-996E-9C387023CAD0") swDrawingNotify_e
    {
        swDrawingRegenNotify	= 1,
        swDrawingDestroyNotify	= 2,
        swDrawingRegenPostNotify	= 3,
        swDrawingViewNewNotify	= 4,
        swDrawingNewSelectionNotify	= 5,
        swDrawingFileSaveNotify	= 6,
        swDrawingFileSaveAsNotify	= 7,
        swDrawingLoadFromStorageNotify	= 8,
        swDrawingSaveToStorageNotify	= 9,
        swDrawingAutoSaveNotify	= 10,
        swDrawingAutoSaveToStorageNotify	= 11,
        swDrawingConfigChangeNotify	= 12,
        swDrawingConfigChangePostNotify	= 13,
        swDrawingViewNewNotify2	= 14,
        swDrawingAddItemNotify	= 15,
        swDrawingRenameItemNotify	= 16,
        swDrawingDeleteItemNotify	= 17,
        swDrawingModifyNotify	= 18,
        swDrawingFileReloadNotify	= 19,
        swDrawingAddCustomPropertyNotify	= 20,
        swDrawingChangeCustomPropertyNotify	= 21,
        swDrawingDeleteCustomPropertyNotify	= 22,
        swDrawingFileSaveAsNotify2	= 23,
        swDrawingDeleteSelectionPreNotify	= 24,
        swDrawingFileReloadPreNotify	= 25,
        swDrawingFileSavePostNotify	= 26,
        swDrawingLoadFromStorageStoreNotify	= 27,
        swDrawingSaveToStorageStoreNotify	= 28,
        swDrawingFeatureManagerTreeRebuildNotify	= 29,
        swDrawingViewCreatePreNotify	= 30,
        swDrawingDynamicHighlightNotify	= 31,
        swDrawingDimensionChangeNotify	= 32,
        swDrawingFileReloadCancelNotify	= 33,
        swDrawingFileSavePostCancelNotify	= 34,
        swDrawingSketchSolveNotify	= 35,
        swDrawingDeleteItemPreNotify	= 36,
        swDrawingClearSelectionsNotify	= 37,
        swDrawingEquationEditorPreNotify	= 38,
        swDrawingEquationEditorPostNotify	= 39,
        swDrawingAddDvePagePreNotify	= 40,
        swDrawingUnitsChangeNotify	= 41,
        swDrawingDestroyNotify2	= 42,
        swDrawingUndoPostNotify	= 43,
        swDrawingUserSelectionPreNotify	= 44,
        swDrawingRedoPostNotify	= 45,
        swDrawingRedoPreNotify	= 46,
        swDrawingUndoPreNotify	= 47,
        swDrawingAutoSaveToStorageStoreNotify	= 48,
        swDrawingInsertTableNotify	= 49,
        swDrawingModifyTableNotify	= 50,
        swDrawingUserSelectionPostNotify	= 51,
        swDrawingActivateSheetPreNotify	= 52,
        swDrawingActivateSheetPostNotify	= 53,
        swDrawingCommandManagerTabActivatedPreNotify	= 54,
        swDrawingFeatureManagerTabActivatedPreNotify	= 55,
        swDrawingFeatureManagerTabActivatedNotify	= 56,
        swDrawingRenameDisplayTitleNotify	= 57,
        swDrawingDisplayPaneExpandNotify	= 58,
        swDrawingDisplayPaneCollapseNotify	= 59
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("BA2AD69F-2FE9-478B-91D3-D7227802DB4E") swAssemblyNotify_e
    {
        swAssemblyRegenNotify	= 1,
        swAssemblyDestroyNotify	= 2,
        swAssemblyRegenPostNotify	= 3,
        swAssemblyViewNewNotify	= 4,
        swAssemblyNewSelectionNotify	= 5,
        swAssemblyFileSaveNotify	= 6,
        swAssemblyFileSaveAsNotify	= 7,
        swAssemblyLoadFromStorageNotify	= 8,
        swAssemblySaveToStorageNotify	= 9,
        swAssemblyConfigChangeNotify	= 10,
        swAssemblyConfigChangePostNotify	= 11,
        swAssemblyAutoSaveNotify	= 12,
        swAssemblyAutoSaveToStorageNotify	= 13,
        swAssemblyBeginInContextEditNotify	= 14,
        swAssemblyEndInContextEditNotify	= 15,
        swAssemblyViewNewNotify2	= 16,
        swAssemblyLightingDialogCreateNotify	= 17,
        swAssemblyAddItemNotify	= 18,
        swAssemblyRenameItemNotify	= 19,
        swAssemblyDeleteItemNotify	= 20,
        swAssemblyModifyNotify	= 21,
        swAssemblyComponentStateChangeNotify	= 22,
        swAssemblyFileDropNotify	= 23,
        swAssemblyFileReloadNotify	= 24,
        swAssemblyComponentStateChangeNotify2	= 25,
        swAssemblyAddCustomPropertyNotify	= 26,
        swAssemblyChangeCustomPropertyNotify	= 27,
        swAssemblyDeleteCustomPropertyNotify	= 28,
        swAssemblyFeatureEditPreNotify	= 29,
        swAssemblyFeatureSketchEditPreNotify	= 30,
        swAssemblyFileSaveAsNotify2	= 31,
        swAssemblyInterferenceNotify	= 32,
        swAssemblyDeleteSelectionPreNotify	= 33,
        swAssemblyFileReloadPreNotify	= 34,
        swAssemblyComponentMoveNotify	= 35,
        swAssemblyComponentVisibleChangeNotify	= 36,
        swAssemblyBodyVisibleChangeNotify	= 37,
        swAssemblyFileDropPreNotify	= 38,
        swAssemblyFileSavePostNotify	= 39,
        swAssemblyLoadFromStorageStoreNotify	= 40,
        swAssemblySaveToStorageStoreNotify	= 41,
        swAssemblyFeatureManagerTreeRebuildNotify	= 42,
        swAssemblyElectricalDataUpdateNotify	= 43,
        swAssemblyComponentMoveNotify2	= 44,
        swAssemblyDynamicHighlightNotify	= 45,
        swAssemblyComponentVisualPropertiesChangeNotify	= 46,
        swAssemblyComponentDisplayStateChangeNotify	= 47,
        swAssemblyDimensionChangeNotify	= 48,
        swAssemblyFileReloadCancelNotify	= 49,
        swAssemblyFileSavePostCancelNotify	= 50,
        swAssemblySketchSolveNotify	= 51,
        swAssemblyDeleteItemPreNotify	= 52,
        swAssemblyClearSelectionsNotify	= 53,
        swAssemblyFileDropPostNotify	= 54,
        swAssemblyEquationEditorPreNotify	= 55,
        swAssemblyEquationEditorPostNotify	= 56,
        swAssemblyOpenDesignTableNotify	= 57,
        swAssemblyCloseDesignTableNotify	= 58,
        swAssemblyPromptBodiesToKeepNotify	= 59,
        swAssemblyAddDvePagePreNotify	= 60,
        swAssemblyUnitsChangeNotify	= 61,
        swAssemblyDestroyNotify2	= 62,
        swAssemblyConfigurationChangeNotify	= 63,
        swAssemblyComponentReorganizeNotify	= 64,
        swAssemblySuppressionStateChangeNotify	= 65,
        swAssemblyActiveViewChangeNotify	= 66,
        swAssemblyFeatureManagerFilterStringChangeNotify	= 67,
        swAssemblyFlipLoopNotify	= 68,
        swAssemblySensorAlertPreNotify	= 69,
        swAssemblyActiveDisplayStateChangePreNotify	= 70,
        swAssemblyActiveDisplayStateChangePostNotify	= 71,
        swAssemblyAddMatePostNotify	= 72,
        swAssemblyComponentConfigurationChangeNotify	= 73,
        swAssemblyUndoPostNotify	= 74,
        swAssemblyUserSelectionPreNotify	= 75,
        swAssemblyRedoPostNotify	= 76,
        swAssemblyRedoPreNotify	= 77,
        swAssemblyUndoPreNotify	= 78,
        swAssemblyComponentReferredDisplayStateChangeNotify	= 79,
        swAssemblySelectiveOpenPostNotify	= 80,
        swAssemblyRegenPostNotify2	= 81,
        swAssemblyAutoSaveToStorageStoreNotify	= 82,
        swAssemblyDragStateChangeNotify	= 83,
        swAssemblyInsertTableNotify	= 84,
        swAssemblyModifyTableNotify	= 85,
        swAssemblyUserSelectionPostNotify	= 86,
        swAssemblyComponentDisplayModeChangePreNotify	= 87,
        swAssemblyComponentDisplayModeChangePostNotify	= 88,
        swAssemblyCommandManagerTabActivatedPreNotify	= 89,
        swAssemblyPreRenameItemNotify	= 90,
        swAssemblyRenamedDocumentNotify	= 91,
        swAssemblyFeatureManagerTabActivatedPreNotify	= 92,
        swAssemblyFeatureManagerTabActivatedNotify	= 93,
        swAssemblyPublishTo3DPDFNotify	= 94,
        swAssemblyAddMatePostNotify2	= 95,
        swAssemblyComponentStateChangeNotify3	= 96,
        swAssemblyRenameDisplayTitleNotify	= 97,
        swAssemblyActiveAnnotationViewChangeNotify	= 98,
        swAssemblyDisplayPaneExpandNotify	= 99,
        swAssemblyDisplayPaneCollapseNotify	= 100,
        swAssemblyLargeDesignReviewStateChangeNotify	= 101
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("52B3516D-F2EF-4B84-83A8-B1CB93F6C772") swAppNotify_e
    {
        swAppFileOpenNotify	= 1,
        swAppFileNewNotify	= 2,
        swAppDestroyNotify	= 3,
        swAppActiveDocChangeNotify	= 4,
        swAppActiveModelDocChangeNotify	= 5,
        swAppPropertySheetCreateNotify	= 6,
        swAppNonNativeFileOpenNotify	= 7,
        swAppLightSheetCreateNotify	= 8,
        swAppDocumentConversionNotify	= 9,
        swAppLightweightComponentOpenNotify	= 10,
        swAppDocumentLoadNotify	= 11,
        swAppFileNewNotify2	= 12,
        swAppFileOpenNotify2	= 13,
        swAppReferenceNotFoundNotify	= 14,
        swAppPromptForFilenameNotify	= 15,
        swAppBeginTranslationNotify	= 16,
        swAppEndTranslationNotify	= 17,
        swAppLightPMCreateNotify	= 18,
        swAppStandardsDatabaseChangeNotify	= 19,
        swAppOnIdleNotify	= 20,
        swAppFileOpenPreNotify	= 21,
        swAppFileOpenPostNotify	= 22,
        swAppReferencedFilePreNotify	= 23,
        swAppBeginRecordNotify	= 24,
        swAppEndRecordNotify	= 25,
        swAppFileNewPreNotify	= 26,
        swAppJournalWriteNotify	= 27,
        swAppDocumentLoadNotify2	= 28,
        swAppCommandCloseNotify	= 29,
        swAppPromptForMultipleFilenamesNotify	= 30,
        swAppCommandOpenPreNotify	= 31,
        swAppFileCloseNotify	= 32,
        swAppBackgroundProcessingStartNotify	= 33,
        swAppBackgroundProcessingEndNotify	= 34,
        swAppInterfaceBrightnessThemeChangeNotify	= 35,
        swAppReferencedFilePreNotify2	= 36,
        swAppBegin3DInterconnectTranslationNotify	= 37,
        swAppEnd3DInterconnectTranslationNotify	= 38,
        swAppTaskPanePinnedNotify	= 39,
        swAppTaskPaneUnpinnedNotify	= 40,
        swAppTaskPaneHideNotify	= 41,
        swAppTaskPaneShowNotify	= 42,
        swAppTaskPaneExpandNotify	= 43,
        swAppTaskPaneCollapseNotify	= 44,
        swAppDisplayPaneActivationNotify	= 45
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("9660B905-402C-4448-9C3B-1938F1110A87") swPropertySheetNotify_e
    {
        swPropertySheetDestroyNotify	= 1,
        swPropertySheetHelpNotify	= 2,
        swPropertySheetOnOKNotify	= 3,
        swPropertySheetOnCancelNotify	= 4,
        swPropertySheetCreateControlNotify	= 5
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("0A275BEB-A561-4352-82A0-4A9BBE3BB4DB") swTaskPaneNotify_e
    {
        swAppTaskPaneActivateNotify	= 1,
        swAppTaskPaneDeactivateNotify	= 2,
        swAppTaskPaneDestroyNotify	= 3,
        swAppTaskPaneToolbarButtonClicked	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("680778D6-1B5B-4FB8-9F0D-E7D6123CD8D0") swDisplayPaneIndex_e
    {
        swDisplayPaneNone	= 0,
        swDisplayPaneLifeCycleTab	= 1,
        swDisplayPaneTab	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("1DD0F701-D1D2-4ea4-85BE-C50A3AE7CBB5") swAppCallBackCmd_e
    {
        swAppIsNewCmd	= 1,
        swAppWhatsNewDescription	= 2,
        swAppHelpContext	= 3,
        swAppIsCmdEnabled	= 4,
        swAppPostNotifyEvent	= 5
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("FB569A2C-0F77-4775-8AE1-B9D299DDF4F9") swSurfaceTypes_e
    {
        PLANE_TYPE	= 4001,
        CYLINDER_TYPE	= 4002,
        CONE_TYPE	= 4003,
        SPHERE_TYPE	= 4004,
        TORUS_TYPE	= 4005,
        BSURF_TYPE	= 4006,
        BLEND_TYPE	= 4007,
        OFFSET_TYPE	= 4008,
        EXTRU_TYPE	= 4009,
        SREV_TYPE	= 4010
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("C874EA3D-349C-45c3-907D-8D11D7160FEE") swCurveTypes_e
    {
        LINE_TYPE	= 3001,
        CIRCLE_TYPE	= 3002,
        ELLIPSE_TYPE	= 3003,
        INTERSECTION_TYPE	= 3004,
        BCURVE_TYPE	= 3005,
        SPCURVE_TYPE	= 3006,
        CONSTPARAM_TYPE	= 3008,
        TRIMMED_TYPE	= 3009
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("EB2E3467-70C2-4163-BCCD-31A0FEE99611") swParamType_e
    {
        swParamTypeDouble	= 0,
        swParamTypeString	= 1,
        swParamTypeInteger	= 2,
        swParamTypeDVector	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("0C060D3B-7126-4862-B9D1-A316264CCB22") swTaskPaneTab_e
    {
        swDesignLibrary	= 1,
        swFileExplorer	= 2,
        swResources	= 3,
        swClipBoard	= 4,
        swCustomProps	= 5,
        swPnID	= 6
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("54715A22-6AD4-489b-914A-176A29D8D81F") swLoadAddinError_e
    {
        swUnknownError	= -1,
        swSuccess	= 0,
        swAddinNotLoaded	= 1,
        swAddinAlreadyLoaded	= 2,
        swFileNotFound	= 3,
        swAddinsDisabled	= 4,
        swLoadConflict	= 5,
        swRegistrationError	= 6,
        swLicenseError	= 7
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("8B577AB7-163C-443d-8608-BEA8945AE796") swMacroMethods_e
    {
        swMethodsWithoutArguments	= 1,
        swMethodsWithArguments	= 2,
        swAllMethods	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("CE9F0E93-751A-4E7E-A7A3-8EACD195CBA1") swQuadant_e
    {
        swQuadUnknown	= 0,
        swQuadPosQ1	= 1,
        swQuadNegQ1	= 2,
        swQuadPosQ2	= 3,
        swQuadNegQ2	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("1D665381-7B81-4FD8-983D-641505CC4AC5") swSheetPrintQuadrant_e
    {
        swSheetPrintQuadNotSet	= 0,
        swSheetPrintQuadQ1	= 1,
        swSheetPrintQuadQ2	= 2,
        swSheetPrintQuadQ3	= 3,
        swSheetPrintQuadQ4	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("302FCC22-A387-4F68-B23A-C0A2905A467F") swEllipsePts_e
    {
        swEllipseStartPt	= 0,
        swEllipseEndPt	= 1,
        swEllipseCenterPt	= 2,
        swEllipseMajorPt	= 3,
        swEllipseMinorPt	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("55B820B7-D2F5-4B5D-953B-58D1779A60C1") swParabolaPts_e
    {
        swParabolaStartPt	= 0,
        swParabolaEndPt	= 1,
        swParabolaFocusPt	= 2,
        swParabolaApexPt	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("8796077D-60BC-4B0C-B2FE-170C12623A5B") swGtolMatCondition_e
    {
        swMcNONE	= 0,
        swMcMMC	= 1,
        swMcRFS	= 2,
        swMcLMC	= 3,
        swMsNONE	= 4,
        swMsPROJTOLZONE	= 5,
        swMsDIA	= 6,
        swMsSPHDIA	= 7,
        swMsRAD	= 8,
        swMsSPHRAD	= 9,
        swMsREF	= 10,
        swMsARCLEN	= 11
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("25F94986-8792-4172-A360-21C89C3EC750") swGtolGeomCharSymbol_e
    {
        swGcsNONE	= 12,
        swGcsSYMMETRY	= 13,
        swGcsSTRAIGHT	= 14,
        swGcsFLAT	= 15,
        swGcsROUND	= 16,
        swGcsCYL	= 17,
        swGcsLINEPROF	= 18,
        swGcsSURFPROF	= 19,
        swGcsANG	= 20,
        swGcsPERP	= 21,
        swGcsPARALLEL	= 22,
        swGcsPOSITION	= 23,
        swGcsCONC	= 24,
        swGcsCIRCRUNOUT	= 25,
        swGcsTOTALRUNOUT	= 26,
        swGcsCIRCOPENRUNOUT	= 27,
        swGcsTOTALOPENRUNOUT	= 28,
        swGcsUBUTTON	= 29,
        swGcsSQUARE	= 30
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("327BF16A-72E5-4ABB-ADFC-4C78DCE0EE54") swSymbol_e
    {
        swSymNONE	= 0,
        swSymDEGREE	= 32,
        swSymPLUSMINUS	= 33,
        swSymCENTERLINE	= 34,
        swSymFREESTATE	= 35,
        swSymSTATISTICAL	= 36,
        swSymTANGENTPLANE	= 37,
        swSymCONTINUOUS	= 38
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("F26A33A6-F4FC-46A1-BE27-D1FFDEC904F2") swMateType_e
    {
        swMateCOINCIDENT	= 0,
        swMateCONCENTRIC	= 1,
        swMatePERPENDICULAR	= 2,
        swMatePARALLEL	= 3,
        swMateTANGENT	= 4,
        swMateDISTANCE	= 5,
        swMateANGLE	= 6,
        swMateUNKNOWN	= 7,
        swMateSYMMETRIC	= 8,
        swMateCAMFOLLOWER	= 9,
        swMateGEAR	= 10,
        swMateWIDTH	= 11,
        swMateLOCKTOSKETCH	= 12,
        swMateRACKPINION	= 13,
        swMateMAXMATES	= 14,
        swMatePATH	= 15,
        swMateLOCK	= 16,
        swMateSCREW	= 17,
        swMateLINEARCOUPLER	= 18,
        swMateUNIVERSALJOINT	= 19,
        swMateCOORDINATE	= 20,
        swMateSLOT	= 21,
        swMateHINGE	= 22,
        swMateSLIDER	= 23,
        swMatePROFILECENTER	= 24,
        swMateMAGNETIC	= 25
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("F3B607D1-BB09-4163-82D8-AEB6B2883913") swDetCircleShowType_e
    {
        swDetCirclePROFILE	= 0,
        swDetCircleCIRCLE	= 1,
        swDetCircleDONTSHOW	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("F8A25644-38E9-46E2-9A1D-3746929A29E3") swDetViewStyle_e
    {
        swDetViewSTANDARD	= 0,
        swDetViewBROKEN	= 1,
        swDetViewLEADER	= 2,
        swDetViewNOLEADER	= 3,
        swDetViewCONNECTED	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("14E5DCE6-F352-4422-A5B3-787137E2A051") swMateAlign_e
    {
        swMateAlignALIGNED	= 0,
        swMateAlignANTI_ALIGNED	= 1,
        swMateAlignCLOSEST	= 2,
        swAlignNONE	= 0,
        swAlignSAME	= 1,
        swAlignAGAINST	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("CD17A96F-EED6-4A76-8875-65DA058B7D20") swDisplayMode_e
    {
        swDisplayModeUNKNOWN	= -1,
        swWIREFRAME	= 0,
        swHIDDEN_GREYED	= 1,
        swHIDDEN	= 2,
        swSHADED	= 3,
        swFACETED_WIREFRAME	= 4,
        swFACETED_HIDDEN_GREYED	= 5,
        swFACETED_HIDDEN	= 6,
        swSHADED_EDGES	= 7,
        swDisplayModeDEFAULT	= 8
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("620D5C7A-AA30-4333-BE36-27195F346F4C") swArrowStyle_e
    {
        swOPEN_ARROWHEAD	= 0,
        swCLOSED_ARROWHEAD	= 1,
        swSLASH_ARROWHEAD	= 2,
        swDOT_ARROWHEAD	= 3,
        swORIGIN_ARROWHEAD	= 4,
        swWIDE_ARROWHEAD	= 5,
        swISOWIDE_ARROWHEAD	= 6,
        swRUS_ARROWHEAD	= 7,
        swCLOSETOP_ARROWHEAD	= 8,
        swCLOSEBOT_ARROWHEAD	= 9,
        swNO_ARROWHEAD	= 10
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("20BC4FBE-33DE-4DC6-9981-2CA9FB1C3180") swLeaderSide_e
    {
        swLS_SMART	= 0,
        swLS_LEFT	= 1,
        swLS_RIGHT	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("056ECF9D-D9C5-4AB2-A19E-C9AF6E9273CF") swSFSymType_e
    {
        swSFBasic	= 0,
        swSFMachining_Req	= 1,
        swSFDont_Machine	= 2,
        swSFJIS_Surface_Texture_1	= 3,
        swSFJIS_Surface_Texture_2	= 4,
        swSFJIS_Surface_Texture_3	= 5,
        swSFJIS_Surface_Texture_4	= 6,
        swSFJIS_No_Machining	= 7,
        swSFJIS_Basic	= 8,
        swSFJIS_Machining_Req	= 9
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("913211CF-C7FE-445D-9FC1-7B74D2C66B5A") swSFLaySym_e
    {
        swSFNone	= 0,
        swSFCircular	= 1,
        swSFCross	= 2,
        swSFMultiDir	= 3,
        swSFParallel	= 4,
        swSFPerp	= 5,
        swSFRadial	= 6,
        swSFParticulate	= 7
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("DB6904DF-15CE-47B9-A383-B81E9B1615E9") swSurfaceFinishSymbolText_e
    {
        swSFSymbolMaterialRemovalAllowance	= 1,
        swSFSymbolProductionMethod	= 2,
        swSFSymbolSamplingLength	= 3,
        swSFSymbolOtherRoughnessValue	= 4,
        swSFSymbolMaximumRoughness	= 5,
        swSFSymbolMinimumRoughness	= 6,
        swSFSymbolRoughnessSpacing	= 7,
        swSFSymbolRoughnessValue1	= 8,
        swSFSymbolRoughnessValue2	= 9,
        swSFSymbolRoughnessValue3	= 10
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("37BA1C7B-248F-4789-A9C5-73FEAD5FDF3F") swSurfaceFinishSymbolOrientation_e
    {
        swSFOrientation_Upright	= 1,
        swSFOrientation_Rotated90	= 2,
        swSFOrientation_Perpendicular	= 3,
        swSFOrientation_PerpendicularFlipped	= 4,
        swSFOrientation_UserDefined	= 5
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("72D1641A-F5BC-4A9A-9FE3-C06722EA7EF4") swLeaderStyle_e
    {
        swNO_LEADER	= 0,
        swSTRAIGHT	= 1,
        swBENT	= 2,
        swUNDERLINED	= 3,
        swAlwaysAttachToBalloon	= 0x1004,
        swSPLINE	= 4,
        swAttachLeaderTop	= 0x100,
        swAttachLeaderCenter	= 0x200,
        swAttachLeaderBottom	= 0x400,
        swAttachLeaderNearest	= 0x800,
        swVDA	= 8
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("9954D56E-85B5-485C-A98B-99834E71B1FA") swBalloonStyle_e
    {
        swBS_None	= 0,
        swBS_Circular	= 1,
        swBS_Triangle	= 2,
        swBS_Hexagon	= 3,
        swBS_Box	= 4,
        swBS_Diamond	= 5,
        swBS_Pentagon	= 6,
        swBS_SplitCirc	= 7,
        swBS_FlagPentagon	= 8,
        swBS_FlagTriangle	= 9,
        swBS_Underline	= 10,
        swBS_Square	= 11,
        swBS_SCircle	= 12,
        swBS_Inspection	= 13,
        swBS_ArcBracket	= 14,
        swBS_RectBracket	= 15,
        swBS_ArclenSym	= 16,
        swBS_FixedSym	= 17,
        swBS_DoubleArrow	= 18,
        swBS_SplitSquare	= 19,
        swBS_Verbose	= 20
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("1D47F505-0A54-421D-818C-D607DC1D9B11") swBalloonFit_e
    {
        swBF_Tightest	= 0,
        swBF_1Char	= 1,
        swBF_2Chars	= 2,
        swBF_3Chars	= 3,
        swBF_4Chars	= 4,
        swBF_5Chars	= 5,
        swBF_UserDef	= 6
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("585EFE98-693E-4cbb-AB5A-B6965775290D") swBendNoteStyle_e
    {
        swAboveBendLine	= 0,
        swBelowBendLine	= 1,
        swWithLeader	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("1490B95D-D033-41AE-80B4-005C6CA5B5C7") swBendDirection_e
    {
        swBendDirection_ERROR	= 0,
        swBendDirection_UP	= 1,
        swBendDirection_DOWN	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("A4CF5124-76DD-4EAA-814A-EF46A57FCA98") swFeatureTreeState_e
    {
        swFlyoutFeatureTree_Hidden	= 0,
        swFlyoutFeatureTree_ShownUnExpanded	= 1,
        swFlyoutFeatureTree_ShownExpanded	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("59C9BD29-0276-43DE-82E5-20011CAE34F9") swBalloonTextContent_e
    {
        swBalloonTextCustom	= 0,
        swBalloonTextItemNumber	= 1,
        swBalloonTextQuantity	= 2,
        swBalloonTextCustomProperties	= 3,
        swBalloonTextComponentReference	= 4,
        swBalloonTextSpoolReference	= 5,
        swBalloonTextPartNumberBOM	= 6,
        swBalloonTextFileName	= 7,
        swBalloonTextCutlistProperties	= 8,
        swBalloonTextViewSheet	= 9,
        swBalloonTextViewSheetWithLabel	= 10,
        swBalloonTextViewZone	= 11,
        swBalloonTextViewViewLetter	= 12
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("99284D1F-C3ED-4DAF-8C18-05B2BFF3EDED") swLengthUnit_e
    {
        swMM	= 0,
        swCM	= 1,
        swMETER	= 2,
        swINCHES	= 3,
        swFEET	= 4,
        swFEETINCHES	= 5,
        swANGSTROM	= 6,
        swNANOMETER	= 7,
        swMICRON	= 8,
        swMIL	= 9,
        swUIN	= 10
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("14CC3C0B-DBBF-4756-9BD2-31472E9C22AC") swAngleUnit_e
    {
        swDEGREES	= 0,
        swDEG_MIN	= 1,
        swDEG_MIN_SEC	= 2,
        swRADIANS	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("84439C3E-F535-4D82-AB85-7C6B898AA93E") swFractionDisplay_e
    {
        swNONE	= 0,
        swDECIMAL	= 1,
        swFRACTION	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("4CEBEC16-6404-48F5-86D9-9B2D7CF43784") swDwgPaperSizes_e
    {
        swDwgPaperAsize	= 0,
        swDwgPaperAsizeVertical	= 1,
        swDwgPaperBsize	= 2,
        swDwgPaperCsize	= 3,
        swDwgPaperDsize	= 4,
        swDwgPaperEsize	= 5,
        swDwgPaperA4size	= 6,
        swDwgPaperA4sizeVertical	= 7,
        swDwgPaperA3size	= 8,
        swDwgPaperA2size	= 9,
        swDwgPaperA1size	= 10,
        swDwgPaperA0size	= 11,
        swDwgPapersUserDefined	= 12
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("575FA184-45D6-483D-B8E8-CB676F573DDA") swDwgTemplates_e
    {
        swDwgTemplateAsize	= 0,
        swDwgTemplateAsizeVertical	= 1,
        swDwgTemplateBsize	= 2,
        swDwgTemplateCsize	= 3,
        swDwgTemplateDsize	= 4,
        swDwgTemplateEsize	= 5,
        swDwgTemplateA4size	= 6,
        swDwgTemplateA4sizeVertical	= 7,
        swDwgTemplateA3size	= 8,
        swDwgTemplateA2size	= 9,
        swDwgTemplateA1size	= 10,
        swDwgTemplateA0size	= 11,
        swDwgTemplateCustom	= 12,
        swDwgTemplateNone	= 13
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("B3B9B3E1-F2B6-4411-A97C-078F14C3D91E") swDwgImportEntitiesPositioning_e
    {
        swDwgEntitiesCentered	= 1,
        swDwgEntitiesSpecifyPosition	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("23BD5340-1C87-4A93-ACA5-C015B58B3A29") swStandardViews_e
    {
        swFrontView	= 1,
        swBackView	= 2,
        swLeftView	= 3,
        swRightView	= 4,
        swTopView	= 5,
        swBottomView	= 6,
        swIsometricView	= 7,
        swTrimetricView	= 8,
        swDimetricView	= 9
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("2FCB9119-CE31-4878-A1F3-415C5C90CCCF") swRepaintTypes_e
    {
        swStandardUpdate	= 0,
        swLightUpdate	= 1,
        swMaterialUpdate	= 2,
        swSectionedUpdate	= 3,
        swExplodedUpdate	= 4,
        swInsertSketchUpdate	= 5,
        swViewDisplayUpdate	= 6,
        swDamageRepairUpdate	= 7,
        swSelectionUpdate	= 8,
        swSectionedExitUpdate	= 9,
        swScrollViewUpdate	= 10
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("229D789B-114B-44C2-8E1C-F0E6A65737E3") swUIStates_e
    {
        swIsHiddenInFeatureMgr	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("13216004-1B1B-475A-854B-3D49F8001BA3") swLineTypes_e
    {
        swLF_VISIBLE	= 0,
        swLF_HIDDEN	= 1,
        swLF_SKETCH	= 2,
        swLF_DETAIL	= 3,
        swLF_SECTION	= 4,
        swLF_DIMENSION	= 5,
        swLF_CENTER	= 6,
        swLF_HATCH	= 7,
        swLF_TANGENT	= 8
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("B02B2821-446F-4C41-9B0B-A83A0E5EF8AB") swTolType_e
    {
        swTolNONE	= 0,
        swTolBASIC	= 1,
        swTolBILAT	= 2,
        swTolLIMIT	= 3,
        swTolSYMMETRIC	= 4,
        swTolMIN	= 5,
        swTolMAX	= 6,
        swTolMETRIC	= 7,
        swTolFIT	= 7,
        swTolFITWITHTOL	= 8,
        swTolFITTOLONLY	= 9,
        swTolBLOCK	= 10,
        swTolGeneral	= 11
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("B7C6A658-31C2-4C08-90EF-36826CB89A66") swFitType_e
    {
        swFitUSER	= 0,
        swFitCLEARANCE	= 1,
        swFitTRANSITIONAL	= 2,
        swFitPRESS	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("00860169-2A5E-4FCF-B8D1-516FB29BC74B") swTolerances_e
    {
        swBSCurveOutputTol	= 0,
        swBSCurveNonRationalOutputTol	= 1,
        swUVCurveOutputTol	= 2,
        swSurfChordTessellationTol	= 3,
        swSurfAngularTessellationTol	= 4,
        swCurveChordTessellationTol	= 5
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("0E90D664-86E0-4698-8E46-7051DF357388") swMateEntityTypes_e
    {
        swMateUnsupported	= 0,
        swMatePoint	= 1,
        swMateLine	= 2,
        swMatePlane	= 3,
        swMateCylinder	= 4,
        swMateCone	= 5,
        swMateSphere	= 6,
        swMateCircle	= 7
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("63399D64-33E5-4489-8D3E-3EDAB25752E6") swAttributeCallbackTypes_e
    {
        swACBDelete	= 0
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("3E2D0898-5C8D-4EA4-8D4F-384B39197BE6") swAttributeCallbackOptions_e
    {
        swACBRequiresCallback	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("4FD820BC-6DFC-4F1F-9449-3B353D2F63D5") swAttributeCallbackReturnValues_e
    {
        swACBDeleteIt	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("3C7D8711-9EB9-4563-AB88-F9262374CB74") swTextPosition_e
    {
        swUPPER_LEFT	= 0,
        swLOWER_LEFT	= 1,
        swCENTER	= 2,
        swUPPER_RIGHT	= 3,
        swLOWER_RIGHT	= 4,
        swUPPER_CENTER	= 5
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("1FDA56BE-C74F-4F33-B3B5-BC378933A611") swTopologyTypes_e
    {
        swTopologyNull	= 0,
        swTopologyCoEdge	= 1,
        swTopologyVertex	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("722086DC-298B-43FD-8D6A-C8EEAA9CDC9F") swAssociatedEntityStates_e
    {
        swIsEntityInvalid	= 0,
        swIsEntitySuppressed	= 1,
        swIsEntityAmbiguous	= 2,
        swIsEntityDeleted	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("98BACD9B-4F4C-4DD5-AD9C-6EC55B1B3A28") swSearchFolderTypes_e
    {
        swDocumentType	= 0
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("A140F015-A916-4BC9-9323-4572D8C71152") swUserPreferenceToggle_e
    {
        swUseFolderSearchRules	= 0,
        swDisplayArcCenterPoints	= 1,
        swDisplayEntityPoints	= 2,
        swIgnoreFeatureColors	= 3,
        swDisplayAxes	= 4,
        swDisplayPlanes	= 5,
        swDisplayOrigins	= 6,
        swDisplayTemporaryAxes	= 7,
        swDxfMapping	= 8,
        swSketchAutomaticRelations	= 9,
        swInputDimValOnCreate	= 10,
        swFullyConstrainedSketchMode	= 11,
        swXTAssemSaveFormat	= 12,
        swDisplayCoordSystems	= 13,
        swExtRefOpenReadOnly	= 14,
        swExtRefNoPromptOrSave	= 15,
        swExtRefMultipleContexts	= 16,
        swExtRefAutoGenNames	= 17,
        swExtRefUpdateCompNames	= 18,
        swDisplayReferencePoints	= 19,
        swDisplayRoutePoints	= 19,
        swUseShadedFaceHighlight	= 20,
        swDXFDontShowMap	= 21,
        swThumbnailGraphics	= 22,
        swUseAlphaTransparency	= 23,
        swDynamicDrawingViewActivation	= 24,
        swAutoLoadPartsLightweight	= 25,
        swIGESStandardSetting	= 26,
        swIGESNurbsSetting	= 27,
        swTiffPrintScaleToFit	= 28,
        swDisplayVirtualSharps	= 29,
        swUpdateMassPropsDuringSave	= 30,
        swDisplayAnnotations	= 31,
        swDisplayFeatureDimensions	= 32,
        swDisplayReferenceDimensions	= 33,
        swDisplayAnnotationsUseAssemblySettings	= 34,
        swDisplayNotes	= 35,
        swDisplayGeometricTolerances	= 36,
        swDisplaySurfaceFinishSymbols	= 37,
        swDisplayWeldSymbols	= 38,
        swDisplayDatums	= 39,
        swDisplayDatumTargets	= 40,
        swDisplayCosmeticThreads	= 41,
        swDetailingDisplayWithBrokenLeaders	= 42,
        swDetailingDualDimensions	= 43,
        swDetailingDisplayDatumsPer1982	= 44,
        swDetailingDisplayAlternateSection	= 45,
        swDetailingCenterMarkShowLines	= 46,
        swDetailingFixedSizeWeldSymbol	= 47,
        swDetailingDimsShowParenthesisByDefault	= 48,
        swDetailingDimsSnapTextToGrid	= 49,
        swDetailingDimsCenterText	= 50,
        swDetailingRadialDimsDisplay2ndOutsideArrow	= 51,
        swDetailingRadialDimsArrowsFollowText	= 52,
        swDetailingDimLeaderOverrideStandard	= 53,
        swDetailingNotesDisplayWithBentLeader	= 54,
        swDisplayTextAtSameSizeAlways	= 55,
        swDisplayOnlyInViewOfCreation	= 56,
        swGridDisplay	= 57,
        swGridDisplayDashed	= 58,
        swGridAutomaticScaling	= 59,
        swSnapToPoints	= 60,
        swSnapToAngle	= 61,
        swUnitsLinearRoundToNearestFraction	= 62,
        swUnitsLinearFeetAndInchesFormat	= 63,
        swFeatureManagerEnsureVisible	= 64,
        swFeatureManagerNameFeatureWhenCreated	= 65,
        swFeatureManagerKeyboardNavigation	= 66,
        swFeatureManagerDynamicHighlight	= 67,
        swColorsGradientPartBackground	= 68,
        swSTLBinaryFormat	= 69,
        swSTLShowInfoOnSave	= 70,
        swSTLDontTranslateToPositive	= 71,
        swSTLComponentsIntoOneFile	= 72,
        swSTLCheckForInterference	= 73,
        swOpenLastUsedDocumentAtStart	= 74,
        swSingleCommandPerPick	= 75,
        swShowDimensionNames	= 76,
        swShowErrorsEveryRebuild	= 77,
        swMaximizeDocumentOnOpen	= 78,
        swEditDesignTableInSeparateWindow	= 80,
        swEnablePropertyManager	= 81,
        swUseSystemSeparatorForDims	= 82,
        swUseEnglishLanguage	= 83,
        swDrawingAutomaticModelDimPlacement	= 84,
        swDrawingDisplayViewBorders	= 85,
        swAutomaticScaling3ViewDrawings	= 86,
        swDrawingAutomaticBomUpdate	= 87,
        swDrawingSelectHiddenEntities	= 88,
        swDrawingCreateDetailAsCircle	= 89,
        swAutomaticDrawingViewUpdate	= 90,
        swDrawingDetailInferCorner	= 91,
        swDrawingDetailInferCenter	= 92,
        swDrawingViewShowContentsWhileDragging	= 93,
        swSketchAlternateSplineCreation	= 94,
        swSketchInferFromModel	= 95,
        swSketchPromptToCloseSketch	= 96,
        swSketchCreateSketchOnNewPart	= 97,
        swSketchOverrideDimensionsOnDrag	= 98,
        swSketchDisplayPlaneWhenShaded	= 99,
        swSketchOverdefiningDimsPromptToSetState	= 100,
        swSketchOverdefiningDimsSetDrivenByDefault	= 101,
        swPerformanceVerifyOnRebuild	= 102,
        swPerformanceDynamicUpdateOnMove	= 103,
        swPerformanceAlwaysGenerateCurvature	= 104,
        swPerformanceWin95ZoomClipping	= 105,
        swIGESDuplicateEntities	= 106,
        swIGESHighTrimCurveAccuracy	= 107,
        swIGESExportSketchEntities	= 108,
        swIGESComponentsIntoOneFile	= 109,
        swIGESFlattenAssemHierarchy	= 110,
        swAlwaysUseDefaultTemplates	= 111,
        swUseSimpleOpenGL	= 112,
        swShowRefGeomName	= 113,
        swUseShadedPreview	= 114,
        swEdgesHiddenEdgeSelectionInWireframe	= 115,
        swEdgesHiddenEdgeSelectionInHLR	= 116,
        swEdgesRepaintAfterSelectionInHLR	= 117,
        swEdgesHighlightFeatureEdges	= 118,
        swEdgesDynamicHighlight	= 119,
        swEdgesHighQualityDisplay	= 120,
        swEdgesOpenEdgesDifferentColor	= 121,
        swEnableConfirmationCorner	= 122,
        swAutoShowPropertyManager	= 123,
        swIncontextFeatureHolderVisibility	= 124,
        swTransparencyHighQualityDynamic	= 125,
        swEdgesShadedEdgesDifferentColor	= 126,
        swEdgesAntiAlias	= 127,
        swPageSetupPrinterUsePrinterMargin	= 128,
        swPageSetupPrinterDrawingScaleToFit	= 129,
        swPageSetupPrinterPartAsmPrintWindow	= 130,
        swDisplayShadowsInShadedMode	= 131,
        swDrawingViewSmoothDynamicMotion	= 132,
        swDrawingEliminateDuplicateDimsOnInsert	= 133,
        swRapidDraftPrintOutOfSynchWaterMark	= 134,
        swDrawingViewAutoHideComponents	= 135,
        swEdgesDisplayShadedPlanes	= 136,
        swPlaneDisplayShowEdges	= 137,
        swPlaneDisplayShowIntersections	= 138,
        swColorsUseSpecifiedEditColors	= 139,
        swEnablePerformanceEmail	= 141,
        swSnapOnlyIfGridDisplayed	= 142,
        swDetailingBalloonsDisplayWithBentLeader	= 143,
        swBOMConfigurationLocked	= 144,
        swBOMConfigurationUseDocumentFont	= 145,
        swBOMConfigurationUseSummaryInfo	= 146,
        swBOMConfigurationAlignBottom	= 147,
        swBOMContentsDisplayAtTop	= 148,
        swBOMControlIdFromAssembly	= 149,
        swBOMControlMissingRows	= 150,
        swBOMControlSplitTable	= 151,
        swAutomaticDrawingViewUpdateDefault	= 152,
        swAutomaticDrawingViewUpdateForceOff	= 153,
        swAnnotationDisplayHideDanglingDim	= 154,
        swDetailingDimBreakAroundArrow	= 155,
        swDetailingDimensionsToleranceUseParentheses	= 156,
        swDetailingDimensionsToleranceUseDimensionFont	= 157,
        swImageQualityApplyToAllReferencedPartDoc	= 158,
        swPrintBackground	= 159,
        swEDrawingsCompression	= 160,
        swImportSolidSurface	= 161,
        swImportFreeCurves	= 162,
        swImport2dCurvesAs2dSketch	= 163,
        swLargeAsmModeAutoLoadLightweight	= 166,
        swLargeAsmModeUpdateMassPropsOnSave	= 167,
        swLargeAsmModeAutoRecover	= 168,
        swLargeAsmModeRemoveDetail	= 169,
        swLargeAsmModeHideAllItems	= 170,
        swLargeAsmModeDynHighlightFeatureMgr	= 171,
        swLargeAsmModeDynHighlightGraphicsView	= 172,
        swLargeAsmModeAntiAliasEdgesFastMode	= 173,
        swLargeAsmModeShadowsShadedMode	= 174,
        swLargeAsmModeTransparencyNormalViewMode	= 175,
        swLargeAsmModeTransparencyDynamicViewMode	= 176,
        swLargeAsmModeShowContentsDragDrawView	= 177,
        swLargeAsmModeSmoothDynamicMotionDrawView	= 178,
        swLargeAsmModeDrawingHLREdgesWhenShaded	= 179,
        swLargeAsmModeAutoHideCompsDrawViewCreation	= 180,
        swLargeAsmModeDrawingAutoLoadModels	= 181,
        swLargeAsmModeAlwaysGenerateCurvature	= 182,
        swImportStepConfigData	= 183,
        swIGESExportSolidAndSurface	= 184,
        swIGESExportFreeCurves	= 185,
        swIGESExportAsWireframe	= 186,
        swDetailingDimensionsAngularToleranceUseParentheses	= 187,
        swDetailingDimensionsToleranceFitTolUseDimensionFont	= 188,
        swDetailingAutoInsertCenterMarks	= 189,
        swDetailingAutoInsertCenterLines	= 190,
        swSTLPreview	= 191,
        swDetailingCenterMarkUseCenterLine	= 192,
        swMaterialPropertySolidFill	= 193,
        swSaveEModelData	= 194,
        swDisplayCurves	= 195,
        swDisplaySketches	= 196,
        swDisplayAllAnnotations	= 197,
        swViewDisplayHideAllTypes	= 198,
        swColorsUseShadedEdgeColor	= 199,
        swViewpointPreserveNormals	= 200,
        swSaveBackupFilesInSameLocationAsOriginal	= 201,
        swNotifySNLNotObtainedForEDrawingsSave	= 202,
        swPerformanceRemoveDetailDuringZoomPanRotate	= 203,
        swDisplayEnableSelectionThroughTransparency	= 204,
        swDisplayReferenceTriad	= 205,
        swDrawingsDefaultDisplayTypeFastHLRHLV	= 206,
        swDrawingsDefaultDisplayTypeHLREdgesWhenShaded	= 207,
        swPerformanceSave	= 208,
        swDetailingAutoUpdateBOM	= 209,
        swImageQualityUseHighQualityEdgeSize	= 210,
        swDrawingSaveShadedData	= 211,
        swEDrawingsOkayToMeasure	= 212,
        swBomTableKeepMissingItems	= 213,
        swBomTableStrikeThroughMissingItems	= 214,
        swRevisionTableUpdateAllLabels	= 215,
        swIGESImportShowLevel	= 216,
        swColorsMatchViewAndFeatureManagerBackground	= 217,
        swEDrawingsSaveShadedDataInDrawings	= 218,
        swDisplayReferencePoints2	= 219,
        swImportMultBodyAsPartData	= 220,
        swEDrawingsExportSTLOkay	= 221,
        swDetailingDisplaySFSymbolsPer2002	= 222,
        swDontCopyQTYColumnNameFromTemplate	= 223,
        swEDrawingsSaveAnimationOkay	= 224,
        swInsertViewForNewDrawing	= 225,
        swInsertComponentForNewAssembly	= 226,
        swCollabTopDocsNoPromptOrSave	= 227,
        swCollabEnableMultiUser	= 228,
        swViewSketchRelations	= 229,
        swDisplayShadedCosmeticThreads	= 230,
        swCollabAddShortcutMenuItems	= 231,
        swCollabCheckReadOnlyModifiedByOthers	= 232,
        swDisplayAllSplineHandles	= 233,
        swAssemblyAllowComponentMoveByDragging	= 234,
        swHoleTableCombineTags	= 235,
        swHoleTableCombineSameSize	= 236,
        swHoleTableHoleCentersVisible	= 237,
        swHoleTableAutomaticUpdate	= 238,
        swDetailingDimOffsetText	= 239,
        swDetailingDetailViewLabels_PerStandard	= 240,
        swDetailingDetailViewLabels_Stacked	= 241,
        swDetailingSectionViewLabels_PerStandard	= 242,
        swDetailingSectionViewLabels_Stacked	= 243,
        swDetailingAuxViewLabels_PerStandard	= 244,
        swDetailingAuxViewLabels_Stacked	= 245,
        swExportVrmlAllComponentsInSingleFile	= 246,
        swDetailingAutoInsertBalloons	= 247,
        swDetailingAutoInsertDimsMarkedForDrawing	= 248,
        swSketchInference	= 249,
        swSketchNoSolveMove	= 250,
        swDetailingDimANSIBentLeader	= 251,
        swUnitsDualLinearRoundToNearestFraction	= 252,
        swUnitsDualLinearFeetAndInchesFormat	= 253,
        swOneConfigOnlyTopLevelBom	= 254,
        swImageQualitySaveTesselationWithPartDoc	= 255,
        swShowSheetMetalBendNotes	= 256,
        swDetailingCThreadDisplayHighQuality	= 257,
        swDetailingDimsPrefixInsideBasicTolBox	= 258,
        swDetailingDimsAutoJogOrdinates	= 259,
        swColorsWireframeHLRShadedSame	= 260,
        swEditMacroAfterRecord	= 261,
        swUseEnglishLanguageFeatureNames	= 262,
        swDrawingDisplayArcCenterPoints	= 263,
        swDrawingDisplayEntityPoints	= 264,
        swDrawingPrintBreaklinesInBrokenView	= 265,
        swSketchSnapsPoints	= 266,
        swSketchSnapsCenterPoints	= 267,
        swSketchSnapsMidPoints	= 268,
        swSketchSnapsQuadrantPoints	= 269,
        swSketchSnapsIntersections	= 270,
        swSketchSnapsNearest	= 271,
        swSketchSnapsTangent	= 272,
        swSketchSnapsPerpendicular	= 273,
        swSketchSnapsParallel	= 274,
        swSketchSnapsHVLines	= 275,
        swSketchSnapsHVPoints	= 276,
        swSketchSnapsLength	= 277,
        swSketchSnapsGrid	= 278,
        swSketchSnapToGridIfDisplayed	= 279,
        swSketchSnapsAngle	= 280,
        swPerformanceSheetMetalIgnoreSelfIntersect	= 281,
        swExternalReferencesDisable	= 282,
        swFileExplorerShowMyDocuments	= 283,
        swFileExplorerShowMyComputer	= 284,
        swFileExplorerShowMyNetworkPlaces	= 285,
        swFileExplorerShowRecentDocuments	= 286,
        swFileExplorerShowHiddenReferencedDocuments	= 287,
        swFileExplorerShowSamples	= 288,
        swBomTableDontAddQTYNextToConfigName	= 289,
        swImportAutoRunImportDiagnosticsPersist	= 290,
        swImportAutoRunImportDiagnostics	= 291,
        swQuickTipsPart	= 292,
        swQuickTipsAssembly	= 293,
        swQuickTipsDrawing	= 294,
        swSketchLineLengthVirtualSharp3d	= 295,
        swSketchShowSplineControlPolygon	= 296,
        swLargeAsmModeEnabled	= 297,
        swLargeAsmModeSuspendAutoRebuild	= 298,
        swLargeAsmModeUseHLREdgesInShaded	= 299,
        swFourViewportProjectionType	= 300,
        swImportIDFAddDrilledHoles	= 301,
        swImportIDFReverseUndersideComponents	= 302,
        swImportStlVrmlTextureInformation	= 303,
        swImportUGToolBodies	= 304,
        swDxfUseSolidworksLayers	= 305,
        swDisplayRelationsShowPropertyManager	= 306,
        swReferenceTriadUseAlternateLabels	= 307,
        swDetailingAutoInsertCenterMarksForHoles	= 308,
        swDetailingAutoInsertCenterMarksForFillets	= 309,
        swDetailingScaleWithDimHeight	= 310,
        swDetailingScaleWithSectionTextHeight	= 311,
        swUserEnableAutoFix	= 312,
        swDisplayLights	= 313,
        swDisplayCameras	= 314,
        swDxfEndPointMerge	= 316,
        swPerformancePreviewDuringOpen	= 317,
        swImportDxfDimsToPartSketch	= 318,
        swAutoSaveEnable	= 319,
        swBackupEnable	= 320,
        swBackupRemoveEnable	= 321,
        swSaveReminderEnable	= 322,
        swPDFExportInColor	= 323,
        swPDFExportEmbedFonts	= 324,
        swPDFExportHighQuality	= 325,
        swPDFExportPrintHeaderFooter	= 326,
        swPDFExportUseCurrentPrintLineWeights	= 327,
        swSketchShadowDrag	= 328,
        swWarnSaveUpdateErrors	= 329,
        swEnablePerformanceFeedback	= 330,
        swShowDrawingViewPalette	= 331,
        swDisplayDimensionsFlatToScreen	= 332,
        swPerformanceAlwaysResolveSubassemblies	= 333,
        swWarnSavingReferencedDoc	= 334,
        swFeatureManagerTransparentFlyout	= 335,
        swDetailingDimsShowBroken	= 336,
        swDetailingDetailViewLabels_AboveView	= 337,
        swDetailingSectionViewLabels_AboveView	= 338,
        swDetailingAuxViewLabels_AboveView	= 339,
        swPreserveRedundantGeometry	= 340,
        swTranslateNameAttribFromKernelBody	= 341,
        swPageSetupHighQuality	= 345,
        swSketchShowSplineOuterComb	= 346,
        swViewShowAnnotationLinkErrors	= 347,
        swViewShowAnnotationLinkVariables	= 348,
        swHideUnitsOfLengthValues	= 349,
        swShowNewsFeedsInTaskPane	= 350,
        swViewReverseWheelZoomDirection	= 351,
        swDrawingMarkAllDimensionsForDrawing	= 352,
        swDrawingShowSheetFormatDialog	= 353,
        swDrawingSheetBackgroundAsPicture	= 354,
        swDisplayNotesFlatToScreen	= 355,
        swDisplayMissingRefsWhenEditFeature	= 356,
        swSearchWhileTyping	= 357,
        swDxfExportSplinesAsSplines	= 358,
        swDetailingDimsFollowDimXpertLayout	= 359,
        swDisplayDimXpertDimensions	= 360,
        swDetailingShowHaloAroundAnnotation	= 361,
        swDetailingImportEntireAssemblyAnnotations	= 362,
        swSearchIncludeContentCentral	= 363,
        swUserEnablePlasticsMode	= 364,
        swDrawingDisableNoteDimensionInference	= 365,
        swEDrawingsSaveAnimationToAllConfigs	= 366,
        swEDrawingsSaveAnimationRecalculate	= 367,
        swPromptForAutoMateFlip	= 368,
        swViewZoomFitAndCenter	= 369,
        swDisplayCameraFOVBox	= 370,
        swSketchAcceptNumericInput	= 372,
        swDisableWeldmentConfigStrings	= 373,
        swDisplayLiveSections	= 374,
        swDetailingAnnotationUseBentLeaders	= 375,
        swDetailingBalloonUseDocBentLeaderLength	= 376,
        swDetailingGtolUseDocBentLeaderLength	= 377,
        swDetailingNoteUseDocBentLeaderLength	= 378,
        swDetailingSFSymbolUseDocBentLeaderLength	= 379,
        swDetailingShowDualDimensionUnits	= 380,
        swDetailingOrdinateDisplayAsChain	= 382,
        swDetailingDatumsAnchorFilled	= 383,
        swDetailingDatumsAnchorShoulder	= 384,
        swEDrawingsSaveBOM	= 385,
        swClearanceShowIgnored	= 386,
        swClearanceIgnoreEqual	= 387,
        swClearanceSubAssyAsComp	= 388,
        swClearanceCreateFasteners	= 389,
        swClearanceMakeTransparent	= 390,
        swClearanceDisplayOption	= 391,
        swStopDebuggingVstaOnExit	= 392,
        swOverrideQuantityColumnName	= 393,
        swAutoSizePropertyManager	= 394,
        swUserEnablePlasticsMode2	= 395,
        swStepExportSplitPeriodic	= 396,
        swStepExportFaceEdgeProps	= 397,
        swSATExportSplitPeriodic	= 398,
        swSATExportFaceEdgeProps	= 399,
        swDXFHighQualityExport	= 400,
        swDetailingNotesLeaderJustificationSnapping	= 401,
        swDetailingAutoInsertCenterMarksForSlots	= 402,
        swStepExportConfigurationData	= 403,
        swImageQualityZoomToFitForPreviewImages	= 404,
        swTiffPrintAllSheets	= 405,
        swTiffPrintUseSheetSize	= 406,
        swDrawingAutoSpaceDimsOnDelete	= 407,
        swDetailingTablesUseTemplateSettings	= 408,
        swSaveNewComponentsToExternalFile	= 409,
        swDoublePrimeMark	= 410,
        swDrawingHideEnds	= 411,
        swCenterLineMarkLinear	= 412,
        swCenterLineMarkCircular	= 413,
        swCenterLineMarkEndsOnlyLinear	= 414,
        swCenterLineMarkEndsOnlyCircular	= 415,
        swPreciseRenderingOfOverlappingGeometry	= 416,
        swEnableMouseGestures	= 417,
        swPartExportFlatPattern	= 418,
        swHoleTableReuseDeleted	= 419,
        swHoleTableAddNewAtEnd	= 420,
        swFlatPatternOpt_SimplifyBends	= 421,
        swFlatPatternOpt_CornerTreatment	= 422,
        swSATExportMultLumpsToSingleBody	= 423,
        swPartDimXpertBlockTolerance	= 424,
        swPartDimXpertLocationInclinedPlane	= 425,
        swPartDimXpertChainHoleDimensionChain	= 426,
        swPartDimXpertChainPocketDimensionChain	= 427,
        swPartDimXpertGeometricApplyMMC	= 428,
        swPartDimXpertGeometricCreateBasicDimension	= 429,
        swPartDimXpertGeometricBasicDimensionChain	= 430,
        swPartDimXpertGeometricPositionAtMMC	= 431,
        swPartDimXpertGeometricPositionComposite	= 432,
        swPartDimXpertGeometricSurfaceProfileComposite	= 433,
        swPartDimXpertDisplayEliminateDuplicates	= 434,
        swPartDimXpertDisplayShowInstanceCount	= 435,
        swDisplayPlaneSections	= 436,
        swDisplaySimulationSymbol	= 437,
        swStoreImagesWithModel	= 438,
        swImageQualityUseOldTangentEdgeDisplay	= 439,
        swAddDimensionsToSketchEntity	= 440,
        swDetailingOrthoViewLabels_PerStandard	= 441,
        swDetailingOrthoViewLabels_AboveView	= 442,
        swDetailingOrthoViewLabelsEnableShow	= 443,
        swUseModelColorInDrawings	= 444,
        swDetailingShowDimensionUnits	= 445,
        swUseFolderAsDefaultSearchLocation	= 446,
        swDetailingAutoInsertCenterMarksForHolesAsm	= 447,
        swDetailingAutoInsertCenterMarksForFilletsAsm	= 448,
        swDetailingAutoInsertCenterMarksForSlotsAsm	= 449,
        swTableHoleDualDimensionDisplay	= 450,
        swTableHoleShowUnitsForDualDisplay	= 451,
        swDXFExportHiddenLayersOn	= 452,
        swDXFExportHiddenLayersWarnIsOn	= 453,
        swDetailingLinkParentViewConfiguration	= 454,
        swLockRecentDocumentsList	= 455,
        swDxfAllSheetsToPaperSpace	= 456,
        swFlatPatternOpt_DisableSplitters	= 457,
        swFlatPatternOpt_WhenFlattenedShowPunches	= 458,
        swFlatPatternOpt_WhenFlattenedShowProfiles	= 459,
        swFlatPatternOpt_WhenFlattenedShowCenters	= 460,
        swUserEnableFreezeBar	= 461,
        swAddDimensionsToLineEntity	= 462,
        swAddDimensionsToRectangleEntity	= 463,
        swAddDimensionsToArcEntity	= 464,
        swAddDimensionsToCircleEntity	= 465,
        swAddDimensionsToSlotEntity	= 466,
        swUseChangedDimensions	= 467,
        swImportDoclessModelInAssem	= 468,
        swAddDrivenDimensions	= 469,
        swExtRefShowXInFeatureTree	= 470,
        swLargeAsmModeUseLargeDesignReview	= 471,
        swTablePunchShowUnitsForDualDisplay	= 472,
        swPunchTableCombineTags	= 473,
        swPunchTableCombineSameSize	= 474,
        swFlatPatternOpt_ShowGrainDirection	= 475,
        swFlatPatternOpt_ShowFixedFace	= 476,
        swAutoNormalToSketchMode	= 477,
        swUseSpeedpakModelColorInDrawings	= 478,
        swTablePunchDualDimensionsDisplay	= 479,
        swDrawingEliminateDuplicateModelNotesOnInsert	= 480,
        swDrawingDisableNoteMergeWhenDragging	= 481,
        swDrawingReuseViewLettersFromDeletedAuxilary	= 482,
        swFeatureManagerEnableTreeFilter	= 483,
        swDxfExportAllSheetsToPaperSpace	= 484,
        swDisplayAmbientOcclusionShadows	= 485,
        swDraftQualityAmbientOcclusion	= 486,
        swQuickViewTransparencyEnabled	= 487,
        swQuickViewTransparencyDynamic	= 488,
        swDetailingDimsShowLeadingZeros	= 489,
        swHoleTableShowAnsiInchSize	= 490,
        swSaveWithoutCostingData	= 491,
        swLoadEnvelopeLightweight	= 492,
        swLoadEnvelopeReadOnly	= 493,
        swDetailingSectionHideShoulders	= 494,
        swLargeAsmModeDismissAutoUpdate	= 495,
        swStepExport3DCurveFeatures	= 497,
        swDetailingAutoInsertDowelSymForHolesPart	= 499,
        swDetailingAutoInsertDowelSymForHolesAsm	= 500,
        swDetailingDimsApplyUpdatedRules	= 501,
        swDetailingAngularRunningDisplayAsChain	= 502,
        swDetailingAngularRunningExtensionLineExtend	= 5030,
        swDetailingAngularRunningRunBidirectionally	= 504,
        swDetailingDimsAutoJogAngularRunning	= 505,
        swDetailingLinearDimPrecisionLinkWithModel	= 506,
        swDetailingAltLinearDimPrecisionLinkWithModel	= 507,
        swDetailingDisplayDualBasicDimensionInOneBox	= 509,
        swAutoScaleTextureSFDecalsToModelSize	= 510,
        swLargeAsmModeAutoCheckUpdateAllComponents	= 511,
        swDisplaySpeedpakGraphicsCircle	= 512,
        swSheetMetalBendNotesUseDocLeaderLength	= 513,
        swSheetMetalBendNotesLeaderJustificationSnapping	= 514,
        swEnableSoundsForSolidWorksEvents	= 515,
        swSearchShowSolidWorksSearchBox	= 516,
        swSearchDissectionScheduleDaily	= 517,
        swDrawingDisplaySketchHatchBehindGeometry	= 518,
        swDetailingRadialDimsDisplayWithSolidLeader	= 519,
        swSketchCreateDimensionOnlyWhenEntered	= 520,
        swPurgeAllBodiesForNonActiveConfigurations	= 521,
        swDetailingAutoInsertDowelSymbols	= 522,
        swDetailingAutoInsertDowelSymbolsAsm	= 523,
        swSaveReminderAutoDismissEnable	= 524,
        swDrawingDisplaySketchPicturesOnSheetBehindGeometry	= 525,
        swDetailingShowUnitsForDualDisplay	= 526,
        swImageQualityWireframeHighCurveQuality	= 527,
        swDetailingCenterOfMassScaleByView	= 528,
        swDisplayCenterOfMassSymbol	= 529,
        swTiffPrintPadText	= 530,
        swUpdateExternFilesDispList	= 531,
        swDrawingsDefaultDisplayTypeHLREdgeQualityWhenShaded	= 532,
        swDrawingSheetsUseDifferentSheetFormat	= 533,
        swDetailingMiscView_PerStandard	= 534,
        swDetailingMiscView_AboveView	= 535,
        swDetailingMiscView_AddViewLabelOnViewCreation	= 536,
        swDetailingHighlightElements	= 537,
        swDetailingAllUpperCase	= 538,
        swDetailingMiscView_RemoveSpaceInScale	= 539,
        swWarnStartingSketchInContextAssembly	= 540,
        swDetailingAuxView_SimplifiedDetailed	= 541,
        swDetailingAuxView_RemoveSpaceInScale	= 543,
        swDetailingAuxView_RotateViewToHorizontalSheet	= 544,
        swDetailingAuxView_RotateClockwiseCounterclockwise	= 545,
        swEdgeQualityShadedEdgeViews	= 546,
        swDetailingSectionView_RemoveSpaceInScale	= 549,
        swColorUseSelectedItemColorsSeedsPatterns	= 550,
        swDimensionsExtensionLineStyleSameAsLeader	= 551,
        swDraftingStandardUppercase	= 552,
        swEdgeQualityWireframeHiddenViews	= 553,
        swDetailingSplitWhenTextIsSolidLeaderAligned	= 555,
        swEdgesDefaultBulkSelection	= 556,
        swDisplayPatternInformationTooltips	= 557,
        swAssemblyUpdateModelGraphicsWhenSavingFiles	= 558,
        swDetailingOrthoView_AddViewLabelOnViewCreation	= 559,
        swDetailingOrthoView_RemoveSpaceInScale	= 560,
        swDetailingSplitDualDimensions	= 561,
        swDetailingDetailView_RemoveSpaceInScale	= 562,
        swEdgesShadedModeDisplayOptimizeForThinParts	= 563,
        swWhileOpeningAssembliesAutoDismissMessages	= 564,
        swDetailingMiscView_DisplayLabelAboveView	= 565,
        swDetailingSplitTextDualDimensions	= 566,
        swDetailingOrthoView_DisplayLabelAboveView	= 567,
        swIGESExportSplitPeriodic	= 568,
        swRebuildSaveNewConfig	= 569,
        swTextSizeUseOperatingSystemScale	= 570,
        swPageSetupScaleDraftEdges	= 571,
        swWeldmentEnableAutomaticCutList	= 572,
        swWeldmentEnableAutomaticUpdate	= 573,
        swDisplayCompAnnotations	= 575,
        swShowZoneLines	= 576,
        swDetailingAngDimensionsRemoveInsignificantZeros	= 577,
        swShowMateReferenceErrors	= 578,
        swDetailingDimensionsToleranceInwardRounding	= 579,
        swDetailingNoDimSpecificOptionSpecified	= 580,
        swPDFExportIncludeLayersNotToPrint	= 581,
        swEDrawingsIncludeLayersNotToPrint	= 582,
        swTIFIncludeLayersNotToPrint	= 583,
        swSketchAddConstToRectEntity	= 584,
        swSketchAddConstLineDiagonalType	= 585,
        swDisableDerivedConfigurations	= 586,
        swFlatPatternOpt_WhenFlattenedShowGussetProfiles	= 587,
        swFlatPatternOpt_WhenFlattenedShowGussetCenters	= 588,
        swImportSLDXMLImportSketchData	= 591,
        swImportSLDXMLImportMechanismSketchObjectsAsBlocks	= 592,
        swAMFCompression	= 593,
        swAMFMaterials	= 594,
        swAMFColors	= 595,
        swEnhanceSmallFaceSelectionPrecision	= 596,
        swWeldmentRenameCutlistDescriptionPropertyValue	= 597,
        swDetailingLocationLabelAddSameSheetNumber	= 598,
        swDetailingConnectionLinesHolePatternsCenterMarks	= 599,
        swDetailingAuxView_IncludeLocationLabelsForNewViews	= 600,
        swDetailingDetailView_IncludeLocationLabelsForNewViews	= 601,
        swDetailingSectionView_IncludeLocationLabelsForNewViews	= 602,
        swDrawingSheetsListNumFirstInZoneCallout	= 603,
        swDrawingSheetsContinueColumnIteration	= 604,
        swDrawingEnableSymbolAddingNewRevision	= 605,
        swImportSLDXMLImportAssemblyMatesData	= 606,
        swNoteParagraphAutoNumbering	= 607,
        swBreakAlignWithParent	= 608,
        swShowAnnotationInAnnotationViews	= 609,
        swPrintGrid	= 610,
        swPrintZoneLines	= 611,
        swShowToolboxFavoritesFolder	= 612,
        swDetailingCenterMarkScaleByViewScale	= 613,
        swDrawingSheetsMatchCustomPropVals	= 614,
        swSaveAsmAsPartPreserveIDs	= 615,
        swHideShowSketchDimensions	= 616,
        swPDFViewOnSave	= 617,
        swDisplayDatumCoordSystems	= 618,
        swMakeFirstSelectionTransparentInMateDialog	= 619,
        swMatchConfigurationNames	= 620,
        swDetailingLinearForeshortenedAutomatic	= 621,
        swDetachSegmentOnDragMode	= 622,
        swDetailingDiameterForeshortenedAutomatic	= 623,
        swShowBreadcrumbsOnSelection	= 624,
        swDetailingShowPeriodWithBorders	= 625,
        swDetailingBorderDoubleLine	= 628,
        swDetailingBorderShowZoneDividers	= 629,
        swDetailingBorderShowColumns	= 630,
        swDetailingBorderShowRows	= 631,
        swPointAxisCoordSystemHideNames	= 632,
        swFeatureManagerEnableRenamingComponent	= 633,
        swDynamicReferenceVisualization_Parent	= 634,
        swDynamicReferenceVisualization_Child	= 635,
        sw3MFAppearances	= 636,
        sw3MFMaterials	= 637,
        sw3MFDecals	= 638,
        swForceEnableImportDiagnosis	= 639,
        swDisplayCounterpartLocationLabel	= 640,
        swExtRefLoadRefDocsInMemory	= 641,
        swScaleSketchOnFirstDimension	= 642,
        sw3MFShowInfoOnSave	= 643,
        swExtRefIncludeSubFolders	= 644,
        swExtRefExcludeActiveFoldersAndRecentSaveLocations	= 645,
        swSheetMetalOverrideTemplateParam	= 646,
        swSheetMetalOverrideTemplateAllowance	= 647,
        swSheetMetalOverrideTemplateRelief	= 648,
        swShadedSketchContours	= 650,
        swDetailingRadialDimsDisplayNearSideMessages	= 651,
        swCollabAddTimeStampToComments	= 652,
        swCollabShowCommentsInPropertyManager	= 653,
        swDetailingScaleForJaggedStyle	= 654,
        swDetailingDetailViewLabels_ScaleForJaggedOutline	= 655,
        swFeatureManagerEnablePreviewHiddenComponents	= 656,
        swWeldmentCollectIdenticalBodies	= 657,
        swLargeAsmModePreviewHiddenComponent	= 658,
        swLargeAsmModeVerificationOnRebuild	= 659,
        swLargeAsmModeImageQualityPerfomance	= 660,
        sw3DPDFCompressLossyTessellation	= 661,
        swDisplayDecals	= 662,
        swDisplayPartingLines	= 663,
        swDisplaySketchPlanes	= 664,
        swDisplayWeldBead	= 665,
        swIFCOmniClassPreference	= 666,
        swIFCUniClass2Preference	= 667,
        swIFCCustomPropsPreference	= 668,
        swIFCMaterialsMassPropertiesPreference	= 669,
        swDisplayEquationIds	= 670,
        swMagMatePreAlign	= 671,
        swOptimizeMatePlacement	= 672,
        swPdfIncludeBookmarks	= 673,
        swDisplayGraphicsComponents	= 675,
        swDraftingStandardAllUppercaseForTable	= 676,
        swTransferHoleWizardSizeComboBoxSettings	= 677,
        swAssemblyAllowCreationOfMisalignedMates	= 678,
        swVrmlStlImportAsPSMesh	= 679,
        swSolidBBoxDescriptionUseDefault	= 680,
        swSheetMetalBodiesDescriptionUseDefault	= 681,
        swVrmlStlImportSegmented	= 682,
        swEnableVSTAVersion3	= 683,
        swViewDispGlobalBBox	= 684,
        swDisplayComponentDimXpertAnnotations	= 685,
        swImportNeutral_SolidandSurface	= 686,
        swImportNeutral_FreeCurvesAndPoints	= 687,
        swImportNeutralReferencePlane	= 688,
        swImportNeutral_AttributesAndProperties	= 689,
        swImportNeutralRunDiagnostics	= 690,
        swMultiCAD_Enable3DInterconnect	= 691,
        swDrawingTurnOffAutomaticSolveModeAndUndo	= 692,
        swSketchTurnOffAutomaticSolveModeAndUndo	= 693,
        swImportSolidBody	= 694,
        swImportSurfaceBody	= 695,
        swImportReferencePlane	= 696,
        swImportReferenceAxis	= 697,
        swImportUnconsumedSketchesAndCurves	= 698,
        swImportCustomProperties	= 699,
        swImportMaterialProperties	= 700,
        swImportDissolveTopLevelAssemblyOnOpen	= 701,
        swImportIgnoreHiddenEntities	= 702,
        swImportToolBodiesFromUGNX	= 703,
        swIncludePMI	= 704,
        swAssemblyAllowGraphicsComponent	= 705,
        swCheckCrashSolutions	= 706,
        swMakeTrimEntityConstruction	= 707,
        swIgnoreConstructionEntity	= 708,
        swLockRotationConcentricMates	= 709,
        swASMSLDPRT_ExcludeComponentsByVisibility	= 710,
        swASMSLDPRT_ExcludeComponentsByBBoxVolume	= 712,
        swASMSLDPRT_ExcludeIfToolboxComponents	= 713,
        swASMSLDPRT_IncludeMassProperties	= 716,
        swEnableAllowCosmeticThreadsUpgrade	= 718,
        swSheetMetalUseMaterial	= 719,
        swPDFExportShadedEdgesHighQuality	= 720,
        swBomTableShowCustomTextinBOMHeader_ForTopLevelOnlyBOM	= 721,
        swBomTableShowCustomTextinBOMHeader_ForPartOnlyBOM	= 722,
        swBomTableShowCustomTextinBOMHeader_ForIndentedBOM	= 723,
        swBomTableShowConfigurationInBOMHeader_ForTopLevelOnlyBOM	= 724,
        swBomTableShowConfigurationInBOMHeader_ForPartOnlyBOM	= 725,
        swBomTableShowConfigurationInBOMHeader_ForIndentedBOM	= 726,
        swEdit3DPDFTemplate	= 727,
        swPLYBinaryFormat	= 728,
        swPLYPreview	= 729,
        swPLYIncludeColors	= 730,
        swDisplayScrollbarsInGraphicsViewDrawings	= 731,
        swDisplayScrollbarsInGraphicsViewPartsAndAssemblies	= 732,
        swShowBreadcrumbsAtMousePointer	= 733,
        swIncludeDocumentsOpenedFromOtherDocuments	= 734,
        swIncludeSubfoldersForDrawingsSearchInPackAndGo	= 735,
        swAutomaticallyPopupSelectionToolForPreciseLocation	= 736,
        swCombineCutlistItemsInBOM	= 737,
        swEditNameWithSlowDoubleClick	= 738,
        swSheetMetalMBDDisplaySheetMetalBendNotes	= 739,
        swSheetMetalMBDUseDocumentLeaderLength	= 740,
        swSheetMetalMBDLeaderJustificationSnapping	= 741,
        swSheetMetalMBDShowFixedFace	= 742,
        swSheetMetalMBDShowGrainDirection	= 743,
        swSheetMetalMBDFormat	= 744,
        swEnablePerformancePipeline	= 745,
        swReferenceOnlyEnvelopeComponentType	= 746,
        swReferenceInContextOfTopLevelAssembly	= 747,
        swDisplayDataMarkNewConfig	= 749,
        swAllowCreationOfReferencesExternalToModel	= 750,
        swDetailingAnnotationShowTypeInThreadCallouts	= 751,
        swDetailingChainDimensionAddOverallDimensions	= 752,
        swDetailingChainDimensionAddLastReferenceDimension	= 753,
        swDraftingStandardAllUppercaseForDimensionsAndHoleCallouts	= 754,
        swBackupAfterMeshOrRunSimulationStudy	= 755,
        swIncludeDataForDelmia	= 756,
        swWeldmentGenerateCutlistIDs	= 757,
        swMultiCAD_ApplyOnlyToParts	= 758,
        swMultiCAD_CreateNewComponentsAsExternalFiles	= 759,
        swFeatureManagerShowTranslatedNameInFMTree	= 760,
        swAutomaticSyncSettings	= 761,
        swAutoSyncSettingsToInclude_SystemOptions	= 762,
        swAutoSyncSettingsToInclude_FileLocations	= 763,
        swAutoSyncSettingsToInclude_Customizations	= 764,
        swEnable3DEXPERIENCEIntegration	= 765,
        swShowCADFamilyConfigOnly3dexpIntegration	= 766,
        swShowCADAndOtherConfig3dexpIntegration	= 767,
        swEnable3DEXPERIENCEFileCompatibilityUpdate	= 768,
        swImportNeutralAnalyticalConversion	= 769,
        swUsePositiveInertiaTensorNotation	= 770,
        swDisplayBendLines	= 771,
        swTIFExportIncludeDrawingsPaperColor	= 772,
        swPDFExportIncludeDrawingsPaperColor	= 773,
        swSaveFileProperties	= 774,
        swSaveFilePropertiesForEachComp	= 775,
        swIncludeSketchData	= 776,
        swSystemNotificationHideGraphicsNotification	= 778,
        swDetailingModeSaveModelData	= 779,
        swDetailingModeIncludeStandardViewsInViewPalette	= 780,
        swStoreOLEImagesWithModel	= 781,
        swDetailingAnnotationApplyNewCTDepthArchForToNewParts	= 782,
        swCreateConfigurationTableOnOpen	= 783,
        swExtRefForceSaveToCurrentVersion	= 784,
        swDisplayTempAxesOnMouseHover	= 785,
        swStepExportAtomicSave	= 786,
        swStepExportAppearances	= 787,
        swDisplayMeshBREPFacetFins	= 788,
        swEdgesDefaultBulkSelection2	= 789,
        swWeldmentUseEnglishDescriptionNameInCutlist	= 790,
        swMultiCAD_3DInterconnectMaintainLinks	= 791,
        swMultiCAD_3DInterconnectManualBreakLink	= 792,
        swMultiCAD_3DInterconnectLinksFlag	= 793,
        swSketchPreviewDimensionOnSelect	= 794,
        swCollinearChainDimensionOffsetText	= 795,
        swCollinearChainDimensionArrowHeadTermination	= 796,
        swHardwareAccSilhouetteEdges	= 797,
        swDispDimXpertDimOnTopOfModel	= 798,
        swDimOverriddenHighlight	= 799,
        swSketchSuppressedDimProfileErrorOption	= 800,
        swDisplayTopLevelEnvelopes	= 801,
        swDisplayComponentEnvelopes	= 802,
        swDisplayMarkups	= 803,
        swDisplayMotionSymbol	= 804,
        swDrawingOpenInDetailingMode	= 805,
        swDxfExportViewAsBlock	= 806,
        swDetailingAutoInsertCosmeticThreadForHolesAsm	= 807,
        swSpeedpakUpdateSlider	= 808
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("B66549E6-69A3-4c12-B0B1-B9BD1741B574") swSearchIndexingPerformance_e
    {
        swSearchIndexingPerformanceIndexOnlyWhenComputerIsIdle	= 0,
        swSearchIndexingPerformanceAlwaysIndex	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("F4CF65A8-34C1-4857-8D12-B4CFBA1F25C3") swUserPreferenceIntegerValue_e
    {
        swDxfVersion	= 0,
        swDxfOutputFonts	= 1,
        swDxfMappingFileIndex	= 2,
        swAutoSaveInterval	= 3,
        swResolveLightweight	= 4,
        swAcisOutputVersion	= 5,
        swTiffScreenOrPrintCapture	= 6,
        swTiffImageType	= 7,
        swTiffCompressionScheme	= 8,
        swTiffPrintDPI	= 9,
        swTiffPrintPaperSize	= 10,
        swTiffPrintScaleFactor	= 11,
        swCreateBodyFromSurfacesOption	= 12,
        swDetailingDimensionStandard	= 13,
        swDetailingDualDimPosition	= 14,
        swDetailingDimTrailingZero	= 15,
        swDetailingArrowStyleForDimensions	= 16,
        swDetailingDimensionArrowPosition	= 17,
        swDetailingLinearDimLeaderStyle	= 18,
        swDetailingRadialDimLeaderStyle	= 19,
        swDetailingAngularDimLeaderStyle	= 20,
        swDetailingLinearToleranceStyle	= 21,
        swDetailingAngularToleranceStyle	= 22,
        swDetailingToleranceTextSizing	= 23,
        swDetailingLinearDimPrecision	= 24,
        swDetailingLinearTolPrecision	= 25,
        swDetailingAltLinearDimPrecision	= 26,
        swDetailingAltLinearTolPrecision	= 27,
        swDetailingAngularDimPrecision	= 28,
        swDetailingAngularTolPrecision	= 29,
        swDetailingNoteTextAlignment	= 30,
        swDetailingNoteLeaderSide	= 31,
        swDetailingBalloonStyle	= 32,
        swDetailingBalloonFit	= 33,
        swDetailingBOMBalloonStyle	= 34,
        swDetailingBOMBalloonFit	= 35,
        swDetailingBOMUpperText	= 36,
        swDetailingBOMLowerText	= 37,
        swDetailingArrowStyleForEdgeVertexAttachment	= 38,
        swDetailingArrowStyleForFaceAttachment	= 39,
        swDetailingArrowStyleForUnattached	= 40,
        swDetailingVirtualSharpStyle	= 41,
        swGridMinorLinesPerMajor	= 42,
        swSnapPointsPerMinor	= 43,
        swImageQualityShaded	= 44,
        swImageQualityWireframe	= 45,
        swImageQualityWireframeValue	= 46,
        swUnitsLinear	= 47,
        swUnitsLinearDecimalDisplay	= 48,
        swUnitsLinearDecimalPlaces	= 49,
        swUnitsLinearFractionDenominator	= 50,
        swUnitsAngular	= 51,
        swUnitsAngularDecimalPlaces	= 52,
        swLineFontVisibleEdgesThickness	= 53,
        swLineFontVisibleEdgesStyle	= 54,
        swLineFontHiddenEdgesThickness	= 55,
        swLineFontHiddenEdgesStyle	= 56,
        swLineFontSketchCurvesThickness	= 57,
        swLineFontSketchCurvesStyle	= 58,
        swLineFontDetailCircleThickness	= 59,
        swLineFontDetailCircleStyle	= 60,
        swLineFontSectionLineThickness	= 61,
        swLineFontSectionLineStyle	= 62,
        swLineFontDimensionsThickness	= 63,
        swLineFontDimensionsStyle	= 64,
        swLineFontConstructionCurvesThickness	= 65,
        swLineFontConstructionCurvesStyle	= 66,
        swLineFontCrosshatchThickness	= 67,
        swLineFontCrosshatchStyle	= 68,
        swLineFontTangentEdgesThickness	= 69,
        swLineFontTangentEdgesStyle	= 70,
        swLineFontDetailBorderThickness	= 71,
        swLineFontDetailBorderStyle	= 72,
        swLineFontCosmeticThreadThickness	= 73,
        swLineFontCosmeticThreadStyle	= 74,
        swStepAP	= 75,
        swHiddenEdgeDisplayDefault	= 76,
        swTangentEdgeDisplayDefault	= 77,
        swSTLQuality	= 78,
        swDrawingProjectionType	= 79,
        swDrawingPrintCrosshatchOutOfDateViews	= 80,
        swPerformanceAssemRebuildOnLoad	= 81,
        swLoadExternalReferences	= 82,
        swIGESRepresentation	= 83,
        swIGESSystem	= 84,
        swIGESCurveRepresentation	= 85,
        swViewRotationMouseSpeed	= 86,
        swBackupCopiesPerDocument	= 87,
        swCheckForOutOfDateLightweightComponents	= 88,
        swParasolidOutputVersion	= 89,
        swLineFontHideTangentEdgeThickness	= 90,
        swLineFontHideTangentEdgeStyle	= 91,
        swLineFontViewArrowThickness	= 92,
        swLineFontViewArrowStyle	= 93,
        swEdgesHiddenEdgeDisplay	= 94,
        swEdgesTangentEdgeDisplay	= 95,
        swEdgesShadedModeDisplay	= 96,
        swDetailingBOMStackedBalloonStyle	= 97,
        swDetailingBOMStackedBalloonFit	= 98,
        swSystemColorsViewportBackground	= 99,
        swSystemColorsTopGradientColor	= 100,
        swSystemColorsBottomGradientColor	= 101,
        swSystemColorsDynamicHighlight	= 102,
        swSystemColorsHighlight	= 103,
        swSystemColorsSelectedItem1	= 104,
        swSystemColorsSelectedItem2	= 105,
        swSystemColorsSelectedItem3	= 106,
        swSystemColorsSelectedFaceShaded	= 107,
        swSystemColorsDrawingsVisibleModelEdge	= 108,
        swSystemColorsDrawingsHiddenModelEdge	= 109,
        swSystemColorsDrawingsPaperBorder	= 110,
        swSystemColorsDrawingsPaperShadow	= 111,
        swSystemColorsDrawingsSheetBorder	= 111,
        swSystemColorsImportedDrivingAnnotation	= 112,
        swSystemColorsImportedDrivenAnnotation	= 113,
        swSystemColorsSketchOverDefined	= 114,
        swSystemColorsSketchFullyDefined	= 115,
        swSystemColorsSketchUnderDefined	= 116,
        swSystemColorsSketchInvalidGeometry	= 117,
        swSystemColorsSketchNotSolved	= 118,
        swSystemColorsGridLinesMinor	= 119,
        swSystemColorsGridLinesMajor	= 120,
        swSystemColorsConstructionGeometry	= 121,
        swSystemColorsDanglingDimension	= 122,
        swSystemColorsText	= 123,
        swSystemColorsAssemblyEditPart	= 124,
        swSystemColorsAssemblyEditPartHiddenLines	= 125,
        swSystemColorsAssemblyNonEditPart	= 126,
        swSystemColorsInactiveEntity	= 127,
        swSystemColorsTemporaryGraphics	= 128,
        swSystemColorsTemporaryGraphicsShaded	= 129,
        swSystemColorsActiveSelectionListBox	= 130,
        swSystemColorsSurfacesOpenEdge	= 131,
        swSystemColorsTreeViewBackground	= 132,
        swAcisOutputUnits	= 133,
        swSystemColorsShadedEdge	= 134,
        swDxfOutputLineStyles	= 135,
        swDxfOutputNoScale	= 136,
        swPageSetupPrinterOrientation	= 138,
        swPageSetupPrinterDrawingColor	= 139,
        swImportCheckAndRepair	= 140,
        swUseCustomizedImportTolerance	= 141,
        swStepExportPreference	= 142,
        swEdgesInContextEditTransparencyType	= 143,
        swEdgesInContextEditTransparency	= 144,
        swPlaneDisplayFrontFaceColor	= 145,
        swPlaneDisplayBackFaceColor	= 146,
        swPlaneDisplayTransparency	= 147,
        swPlaneDisplayIntersectionLineColor	= 148,
        swDetailingDatumDisplayType	= 149,
        swBOMConfigurationAnchorType	= 150,
        swBOMConfigurationWhatToShow	= 151,
        swBOMControlMissingRowDisplay	= 152,
        swBOMControlSplitDirection	= 153,
        swDetailingChamferDimLeaderStyle	= 154,
        swDetailingChamferDimTextStyle	= 155,
        swDetailingChamferDimXStyle	= 156,
        swDocumentColorFeatBend	= 157,
        swDocumentColorFeatBoss	= 158,
        swDocumentColorFeatCavity	= 159,
        swDocumentColorFeatChamfer	= 160,
        swDocumentColorFeatCut	= 161,
        swDocumentColorFeatLoftCut	= 162,
        swDocumentColorFeatSurfCut	= 163,
        swDocumentColorFeatSweepCut	= 164,
        swDocumentColorFeatWeldBead	= 165,
        swDocumentColorFeatExtrude	= 166,
        swDocumentColorFeatFillet	= 167,
        swDocumentColorFeatHole	= 168,
        swDocumentColorFeatLibrary	= 169,
        swDocumentColorFeatLoft	= 170,
        swDocumentColorFeatMidSurface	= 171,
        swDocumentColorFeatPattern	= 172,
        swDocumentColorFeatRefSurface	= 173,
        swDocumentColorFeatRevolution	= 174,
        swDocumentColorFeatShell	= 175,
        swDocumentColorFeatDerivedPart	= 176,
        swDocumentColorFeatSweep	= 177,
        swDocumentColorFeatThicken	= 178,
        swDocumentColorFeatRib	= 179,
        swDocumentColorFeatDome	= 180,
        swDocumentColorFeatForm	= 181,
        swDocumentColorFeatShape	= 182,
        swDocumentColorFeatReplaceFace	= 183,
        swDocumentColorWireFrame	= 184,
        swDocumentColorShading	= 185,
        swDocumentColorHidden	= 186,
        swLineFontExplodedLinesThickness	= 187,
        swLineFontExplodedLinesStyle	= 188,
        swSystemColorsRefTriadX	= 189,
        swSystemColorsRefTriadY	= 190,
        swSystemColorsRefTriadZ	= 191,
        swAcisOutputGeometryPreference	= 192,
        swSystemColorsDTDim	= 193,
        swLargeAsmModeThreshold	= 194,
        swLargeAsmModeAutoActivate	= 195,
        swLargeAsmModeCheckOutOfDateLightweight	= 196,
        swLargeAsmModeAutoRecoverCount	= 197,
        swLargeAsmModeDisplayModeForNewDrawViews	= 198,
        swLineFontBreakLineThickness	= 199,
        swLineFontBreakLineStyle	= 200,
        swSaveAssemblyAsPartOptions	= 201,
        swDetailingDimensionTextAlignmentVertical	= 202,
        swDetailingDimensionTextAlignmentHorizontal	= 203,
        swDetailingToleranceFitTolTextSizing	= 204,
        swImportUnitPreference	= 205,
        swImportCurvePreference	= 206,
        swImportUseBrep	= 207,
        swImportStlVrmlModelType	= 208,
        swSystemColorsSelectedItem4	= 209,
        swImportStlVrmlUnits	= 210,
        swExportStlUnits	= 211,
        swExportVrmlUnits	= 212,
        swSystemColorsSketchInactive	= 213,
        swExternalReferencesUpdateOutOfDateLinkedDesignTable	= 214,
        swSystemColorsTreeItemNormal	= 215,
        swSystemColorsTreeItemSelected	= 216,
        swSystemColorsDrawingsPaper	= 217,
        swSystemColorsDrawingsBackground	= 218,
        swSystemColorsDrawingsViewBorder	= 219,
        swDetailingNotesLeaderStyle	= 220,
        swSystemColorsDrawingsLockedFocus	= 221,
        swRevisionTableTagStyle	= 222,
        swRevisionTableSymbolShape	= 223,
        swBomTableZeroQuantityDisplay	= 224,
        swDocumentColorFeatStructuralMember	= 225,
        swDocumentColorFeatGusset	= 226,
        swDocumentColorFeatEndCap	= 227,
        swDetailingAutoBalloonLayout	= 228,
        swDocumentColorFeatWrap	= 229,
        swRebuildOnActivation	= 230,
        swSystemColorsImportedAnnotation	= 231,
        swSystemColorsNonImportedAnnotation	= 232,
        swLevelOfDetail	= 233,
        swLargeAsmLevelOfDetail	= 234,
        swPropertyManagerColorDivider	= 235,
        swCollabCheckReadOnlyModifiedInterval	= 236,
        swEdrawingsSaveAsSelectionOption	= 237,
        swHoleTableOriginStandard	= 238,
        swHoleTableTagStyle	= 239,
        swHoleTableHoleLocationPrecision	= 240,
        swDetailingDetailViewLabels_Name	= 241,
        swDetailingDetailViewLabels_Label	= 242,
        swDetailingDetailViewLabels_Scale	= 243,
        swDetailingDetailViewLabels_Delimiter	= 244,
        swDetailingSectionViewLabels_Name	= 245,
        swDetailingSectionViewLabels_Label	= 246,
        swDetailingSectionViewLabels_Scale	= 247,
        swDetailingSectionViewLabels_Delimiter	= 248,
        swDetailingAuxViewLabels_Name	= 249,
        swDetailingAuxViewLabels_Label	= 250,
        swDetailingAuxViewLabels_Scale	= 251,
        swDetailingAuxViewLabels_Delimiter	= 252,
        swDxfMultiSheetOption	= 253,
        swUnitsDualLinear	= 254,
        swUnitsDualLinearDecimalDisplay	= 255,
        swUnitsDualLinearDecimalPlaces	= 256,
        swUnitsDualLinearFractionDenominator	= 257,
        swUnitsMassPropLength	= 258,
        swUnitsMassPropMass	= 259,
        swUnitsMassPropVolume	= 260,
        swUnitsMassPropDecimalPlaces	= 261,
        swUnitsForce	= 262,
        swUnitSystem	= 263,
        swBendNoteStyle	= 264,
        swDetailingLeadingZero	= 265,
        swDetailingToleranceFitTolDisplayLinear	= 266,
        swDetailingToleranceFitTolDisplayAngular	= 267,
        swMaterialPropertyAreaHatchFillStyle	= 268,
        swDrawingAreaHatchFillStyle	= 269,
        swPerformanceViewsToDraftQuality	= 270,
        swFeatureManagerDisplayWarnings	= 271,
        swSheetMetalColorBendLinesUp	= 272,
        swSheetMetalColorBendLinesDown	= 273,
        swSheetMetalColorFormFeature	= 274,
        swSheetMetalColorBendLinesHems	= 275,
        swSheetMetalColorModelEdges	= 276,
        swSystemColorsDimsNotMarkedForDrawing	= 277,
        swSystemColorsAsmInterferenceVolume	= 278,
        swSystemColorsSwiftAnnotations	= 279,
        swSystemColorsSwiftUnderConstrained	= 280,
        swSystemColorsSwiftFullyConstrained	= 281,
        swSystemColorsSwiftOverConstrained	= 282,
        swSystemColorsToleranceAnalysisDim	= 283,
        swSystemColorsPropertyManagerColor	= 284,
        swPropertyManagerColorBackground	= 285,
        swPropertyManagerColorActiveClosedDivider	= 286,
        swPropertyManagerColorEditBox	= 287,
        swPropertyManagerColorEditText	= 288,
        swPropertyManagerColorLabelAndIcon	= 289,
        swPropertyManagerColorTitle	= 290,
        swPropertyManagerColorOuterBorder	= 291,
        swPropertyManagerColorInnerBorder	= 292,
        swPropertyManagerColorTopBorder	= 293,
        swPropertyManagerColorImportantMessage	= 294,
        swSystemColorsHiddenEdgeSelectionShow	= 295,
        swDetailingForeshortenedDiameterStyle	= 296,
        swRevisionTableMultipleSheetStyle	= 297,
        swUndoStepsMaximum	= 298,
        swDetailingDimFractionStyle	= 299,
        swDetailingDimFractionScaleIndex	= 300,
        swAutoSaveIntervalMode	= 301,
        swBackupRemoveInterval	= 302,
        swSaveReminderInterval	= 303,
        swSaveReminderIntervalMode	= 304,
        swColorsBackgroundAppearance	= 305,
        swRebuildErrorAction	= 306,
        swSheetMetalColorFlatPatternSketch	= 307,
        swLineFontVisibleEdgesEndCap	= 308,
        swLineFontHiddenEdgesEndCap	= 309,
        swLineFontSketchCurvesEndCap	= 310,
        swDetailingDimXpertChamferScheme	= 311,
        swDetailingDimXpertSlotScheme	= 312,
        swDetailingDimXpertFilletOptions	= 313,
        swDetailingDimXpertChamferOptions	= 314,
        swSystemColorsGhostSelColor	= 315,
        swFeatureManagerBlocksVisibility	= 318,
        swFeatureManagerDesignBinderVisibility	= 319,
        swFeatureManagerAnnotationsVisibility	= 320,
        swFeatureManagerLightsVisibility	= 321,
        swFeatureManagerSolidBodiesVisibility	= 322,
        swFeatureManagerSurfaceBodiesVisibility	= 323,
        swFeatureManagerEquationsVisibility	= 324,
        swFeatureManagerMaterialVisibility	= 325,
        swFeatureManagerDefaultPlanesVisibility	= 326,
        swFeatureManagerOriginVisibility	= 327,
        swFeatureManagerMateReferencesVisibility	= 328,
        swFeatureManagerDesignTableVisibility	= 329,
        swSearchResultsPerPage	= 330,
        swSearchMaxResultsPerDataSource	= 331,
        swUnitsForceDecimalPlaces	= 332,
        swUnitsEnergyUnits	= 333,
        swUnitsEnergyDecimalPlaces	= 334,
        swUnitsPowerUnits	= 335,
        swUnitsPowerDecimalPlaces	= 336,
        swUnitsTimeUnits	= 337,
        swUnitsTimeDecimalPlaces	= 338,
        swSystemColorsInactiveHandles	= 339,
        swPropertyMgrDockingState	= 340,
        swDetailingBalloonLeaderStyle	= 341,
        swDetailingBalloonLeaderLineStyle	= 342,
        swDetailingBalloonLeaderLineThickness	= 343,
        swDetailingBalloonFrameLineStyle	= 344,
        swDetailingBalloonFrameLineThickness	= 345,
        swDetailingDatumLeaderLineStyle	= 346,
        swDetailingDatumLeaderLineThickness	= 347,
        swDetailingDatumFrameLineStyle	= 348,
        swDetailingDatumFrameLineThickness	= 349,
        swDetailingGtolLeaderStyle	= 350,
        swDetailingGtolLeaderSide	= 351,
        swDetailingGtolLeaderLineStyle	= 352,
        swDetailingGtolLeaderLineThickness	= 353,
        swDetailingGtolFrameLineStyle	= 354,
        swDetailingGtolFrameLineThickness	= 355,
        swDetailingNoteLeaderLineStyle	= 356,
        swDetailingNoteLeaderLineThickness	= 357,
        swDetailingSFSymbolLeaderStyle	= 358,
        swDetailingSFSymbolLeaderLineStyle	= 359,
        swDetailingSFSymbolLeaderLineThickness	= 360,
        swDetailingWeldSymbolLeaderSide	= 361,
        swDetailingWeldSymbolLeaderLineStyle	= 362,
        swDetailingWeldSymbolLeaderLineThickness	= 363,
        swDetailingGeneralTableBorderLineWeight	= 364,
        swDetailingGeneralTableGridLineWeight	= 365,
        swDetailingBillOfMaterialBorderLineWeight	= 366,
        swDetailingBillOfMaterialGridLineWeight	= 367,
        swDetailingHoleTableBorderLineWeight	= 368,
        swDetailingHoleTableGridLineWeight	= 369,
        swDetailingRevisionTableBorderLineWeight	= 370,
        swDetailingRevisionTableGridLineWeight	= 371,
        swDetailingDimensionTextAndLeaderStyle	= 372,
        swDetailingToleranceStyle	= 375,
        swDetailingToleranceFitTolDisplay	= 376,
        swFeatureManagerSensorVisibility	= 377,
        swFeatureManagerTableFolderVisibility	= 378,
        swSystemColorsDrawingsSpeedPakModelEdge	= 379,
        swFeatureManagerConfigTableFolderVisibility	= 380,
        swDetailingDatumGbLeaderStyle	= 381,
        swDetailingTitleBlockTableBorderLineWeight	= 382,
        swDetailingTitleBlockTableGridLineWeight	= 383,
        swExportVrmlVersion	= 384,
        swExportJpegCompression	= 385,
        swSystemColorsDrawingsModelTangentEdges	= 386,
        swSystemColorsMateCalloutHealthy	= 387,
        swSystemColorsMateCalloutWarning	= 388,
        swSystemColorsMateCalloutError	= 389,
        swCenterLineMarkOrient	= 390,
        swLineFontSpeedPakDrawingsModelEdgesThickness	= 400,
        swLineFontSpeedPakDrawingsModelEdgesStyle	= 401,
        swDisplayStateCreationChoice	= 402,
        swSystemColorsSheetMetalTemporaryGraphics	= 403,
        swSystemColorsMeasureSelection	= 404,
        swPartDimXpertLengthUnitTol1Decimals	= 405,
        swPartDimXpertLengthUnitTol2Decimals	= 406,
        swPartDimXpertLengthUnitTol3Decimals	= 407,
        swPartDimXpertGeneralToleranceClass	= 408,
        swPartDimXpertLocationDistanceTolType	= 409,
        swPartDimXpertLocationAngleTolType	= 410,
        swPartDimXpertLocationDistanceBlockPrecision	= 411,
        swPartDimXpertLocationAngleBlockPrecision	= 412,
        swPartDimXpertChainPatternLocTolType	= 413,
        swPartDimXpertChainInnerTolType	= 414,
        swPartDimXpertChainPatternLocBlockPrecision	= 415,
        swPartDimXpertChainDistanceBwtnFeatBlockPrecision	= 416,
        swPartDimXpertChamferDistanceTolType	= 417,
        swPartDimXpertChamferAngleTolType	= 418,
        swPartDimXpertChamferDistanceBlockPrecision	= 419,
        swPartDimXpertChamferAngleBlockPrecision	= 420,
        swPartDimXpertSizeDiameterTolType	= 421,
        swPartDimXpertSizeCounterboreDiameterTolType	= 422,
        swPartDimXpertSizeCountersinkDiameterTolType	= 423,
        swPartDimXpertSizeCountersinkAngleTolType	= 424,
        swPartDimXpertSizeLengthSlotTolType	= 425,
        swPartDimXpertSizeWidthSlotTolType	= 426,
        swPartDimXpertSizeDepthTolType	= 427,
        swPartDimXpertSizeFilletRadiusTolType	= 428,
        swPartDimXpertSizeDiameterBlockPrecsion	= 429,
        swPartDimXpertSizeCounterboreDiameterBlockPrecsion	= 430,
        swPartDimXpertSizeCountersinkDiameterBlockPrecsion	= 431,
        swPartDimXpertSizeCountersinkAngleBlockPrecision	= 432,
        swPartDimXpertSizeLengthSlotBlockPrecision	= 433,
        swPartDimXpertSizeWidthSlotBlockPrecision	= 434,
        swPartDimXpertSizeDepthBlockPrecision	= 435,
        swPartDimXpertSizeFilletRadiusBlockPrecision	= 436,
        swPartDimXpertDisplaySlotDimensionType	= 437,
        swPartDimXpertDisplayHoleDimensionType	= 438,
        swPartDimXpertDisplayGtolLinearDimAttachment	= 439,
        swPartDimXpertDisplayDatumGtolSurfaceAttachment	= 440,
        swPartDimXpertDisplayDatumGtolLinearDimAttachment	= 441,
        swExportIFCUnits	= 442,
        swDetailingOrthoViewLabels_Scale	= 443,
        swDetailingOrthoViewLabels_Delimiter	= 444,
        swSystemOptionDisplayAntiAliasing	= 445,
        swTableHoleDualDimensionPos	= 446,
        swSystemColorsDrawingsChangedDimensions	= 447,
        swDetailingBendTableBorderLineWeight	= 448,
        swDetailingBendTableGridLineWeight	= 449,
        swBendLeadingZero	= 450,
        swBendTableZeroQuantityDisplay	= 451,
        swBendInnerRadiusPrecision	= 452,
        swBendAngularPrecision	= 453,
        swBendTableTagStyle	= 454,
        swPunchTableOriginStandard	= 455,
        swPunchTableLocationPrecision	= 456,
        swTablePunchDualDimensionPos	= 457,
        swPunchTableTagStyle	= 458,
        swDetailingSectionArrowStyle	= 459,
        swPerformanceFeedback	= 460,
        swLineFontAdjoiningComponent	= 461,
        swLineFontAdjoiningComponentStyle	= 462,
        swSystemColorsNoteHandle	= 463,
        swSystemColorsCrossHair	= 464,
        swSystemColorsNoteEditHandle	= 465,
        swSystemColorsTemporarySketchDragging	= 466,
        swSystemColorsWeldPathSelection	= 467,
        swDetailingPunchTableBorderLineWeight	= 468,
        swShowEquationCircularReferencesMessage	= 469,
        swDetailingPunchTableGridLineWeight	= 470,
        swDetailingWeldTableGridLineWeight	= 471,
        swDetailingWeldTableBorderLineWeight	= 472,
        swSearchIndexingPerformance	= 473,
        swLargeAsmModeLargeDesignReviewThreshhold	= 474,
        swShowEquationPotentialCircularReferencesMessage	= 475,
        swSaveReminderAutoDismissInterval	= 476,
        swDetailingRevisionCloudLineStyle	= 477,
        swDetailingRevisionCloudLineThickness	= 478,
        swDetailingHalfSectionArrow	= 479,
        swBendAllowancePrecision	= 480,
        swFeatureManagerFavorites	= 481,
        swFeatureManagerEDrawingMarkups	= 482,
        swSheetMetalColorBoundingBox	= 483,
        swSheetMetalBendNotesLeaderLineStyle	= 484,
        swSheetMetalBendNotesLeaderLineThickness	= 485,
        swSheetMetalBendNotesBorderStyle	= 486,
        swSheetMetalBendNotesBorderSize	= 487,
        swSheetMetalBendNotesTextAlignment	= 488,
        swSheetMetalBendNotesLeaderAnchor	= 489,
        swSheetMetalBendNotesLeaderDisplay	= 490,
        swSystemColorsCurrentColorScheme	= 491,
        swSystemColorsEnvelopes	= 492,
        swDetailingRadialDimsArrowPlacement	= 493,
        swSearchDissectionDailyStartTime	= 494,
        swSearchDissectionDailyStopTime	= 495,
        swLineFontBendLineUpStyle	= 496,
        swLineFontBendLineDownStyle	= 497,
        swLineFontEnvelopeComponentStyle	= 498,
        swLineFontBendLineUpThickness	= 499,
        swLineFontBendLineDownThickness	= 500,
        swLineFontEnvelopeComponentThickness	= 501,
        swEnvelopeComponentColor	= 502,
        swAssemblyVisualizationComponentColor1	= 503,
        swAssemblyVisualizationComponentColor2	= 504,
        swAssemblyVisualizationComponentColor3	= 505,
        swAssemblyVisualizationComponentColor4	= 506,
        swAssemblyVisualizationComponentColor5	= 507,
        swAssemblyVisualizationComponentColor6	= 508,
        swDetailingMiscView_Scale	= 509,
        swDetailingMiscView_Delimiter	= 510,
        swDetailingMiscView_Name	= 511,
        swDetailingAuxView_ViewIndication	= 512,
        swDetailingAuxView_Rotation	= 513,
        swDetailingSectionView_Rotation	= 515,
        swDimensionsExtensionLineStyle	= 516,
        swDimensionsExtensionLineStyleThickness	= 517,
        swDetailingOrthoView_Name	= 518,
        swAssemblyOpenMessagesDismissTime	= 519,
        swButtonSize	= 520,
        swTextSize	= 521,
        swUnitsDecimalRounding	= 522,
        swDetailingLocationLabelFrameLineStyle	= 523,
        swDetailingLocationLabelFrameLineThickness	= 524,
        swDetailingLocationLabelStyle	= 525,
        swDetailingLocationLabelFit	= 526,
        swDetailingLocationLabelUpperText	= 527,
        swDetailingLocationLabelLowerText	= 528,
        swDrawingSheetsZonesOrigin	= 529,
        swDrawingSheetsZonesLetterLayout	= 530,
        swDetailingBalloonAutoBalloons	= 531,
        swFeatureManagerSelectionSetsVisibility	= 532,
        swFeatureManagerHistory	= 533,
        swPDFExportShadedDraftDPI	= 534,
        swPDFExportOleDPI	= 535,
        swTwistCountValue	= 536,
        swManipConnectionPointColor	= 537,
        swRefVisualizationParentColor	= 538,
        swRefVisualizationChildrenColor	= 539,
        swDrawingSheetCustomPropSheetNo	= 540,
        swIFCExportSaveType	= 541,
        swDetailingSectionViewLineStyleDisplay	= 542,
        swSaveIFCFormat	= 543,
        swDetailingLinearForeshortened	= 544,
        swCartoonEdgeThickness	= 545,
        swTempGraphicsAddMaterialColor	= 546,
        swTempGraphicsRemoveMaterialColor	= 547,
        swDetailingBorderLeaderLineStyle	= 548,
        swDetailingBorderLeaderLineThickness	= 549,
        swDetailingBorderZoneDividerLineStyle	= 550,
        swDetailingBorderZoneDividerLineThickness	= 551,
        swIFCOmniUniClassPreference	= 552,
        swSystemColorsIconColor	= 553,
        swSystemColorsBackground	= 554,
        swShadedSketchContourColor	= 555,
        sw3DPDFAccuracy	= 556,
        swLineFontEmphasizedSectionOutlineStyle	= 557,
        swLineFontEmphasizedSectionThickness	= 558,
        swLineFontEmphasizedSectionEndCapStyle	= 559,
        swBasicDimType	= 560,
        swPolarMinHoles	= 561,
        swGraphicsTreeItemNormalColor	= 562,
        swZoneLineColor	= 563,
        swSketch_Auto_Solve_Threshold	= 564,
        swDrawing_Auto_Solve_Threshold	= 565,
        swPenSketchStrokeThickness	= 566,
        swPenSketchStrokeColor	= 567,
        swMatesDefaultMisalignedType	= 569,
        swUpdateOutOfDateSpeedPakConfigOnSave	= 570,
        swFeatureManagerMeshBodiesVisibility	= 571,
        swSolidBodiesDescriptionFirstPropertyIndex	= 572,
        swSolidBodiesDescriptionSecondPropertyIndex	= 573,
        swSolidBodiesDescriptionThirdPropertyIndex	= 574,
        swDefaultConfigSortOrder	= 575,
        swGraphicalAnnotationsColor	= 576,
        swImportNeutral_KnitOption	= 577,
        swImportNeutral_CurvesAndPointsOption	= 578,
        swImportNeutralAssemblyStructureMapping	= 579,
        swImportNeutralUnits	= 580,
        swBBoxDescriptionApplyMethod	= 581,
        swDetailingTrailingZeroTolerance	= 582,
        swDetailingTrailingZeroProperties	= 583,
        swDetailingAngleTrailingZero	= 584,
        swDetailingAngleTrailingZeroTolerance	= 585,
        swDetailingAngularRunningTrailingZero	= 586,
        swDetailingAngularRunningTrailingZeroTolerance	= 587,
        swEdrawingsAttachmentOption	= 588,
        swEdrawingsAttachmentType	= 589,
        swExportPlyUnits	= 591,
        swPLYQuality	= 592,
        swMaximumRecentDocuments	= 593,
        swFlatPatternColorsBendLinesUpDirection	= 594,
        swFlatPatternColorsBendLinesDownDirection	= 595,
        swFlatPatternColorsFromFeature	= 596,
        swFlatPatternColorsBendLinesHems	= 597,
        swFlatPatternColorsModelEdges	= 598,
        swFlatPatternColorsFlatPatternSketchColor	= 599,
        swFlatPatternColorsBoundingBox	= 600,
        swSheetMetalMBDBendNotesStyle	= 601,
        swSheetMetalMBDLeaderStyle	= 602,
        swSheetMetalMBDLeaderLineThickness	= 603,
        swSheetMetalMBDTextAlignment	= 604,
        swSheetMetalMBDLeaderAnchor	= 605,
        swSheetMetalMBDLeaderDisplay	= 606,
        swSheetMetalMBDBalloonStyle	= 607,
        swSheetMetalMBDFit	= 608,
        swSheetMetalMBDLineStyle_BendLinesUp	= 609,
        swSheetMetalMBDLineStyle_BendLinesDown	= 610,
        swFeatureManagerMarkupsVisibility	= 611,
        swEnableAutoMateFlip	= 612,
        swSystemColorsSelectedItem5	= 613,
        swSystemColorsSelectedItem6	= 614,
        swFeatureManagerTranslatedLanguage	= 615,
        swAssemblyLoadComponents	= 616,
        swConfigurationViewForFeatureManagerTree	= 617,
        swDetailingGtolMaterialConditionSymbolPlacement	= 618,
        swBomOverriddenCellValueColor	= 619,
        swSheetPrintQuadrant	= 620,
        swSketchExplodedColor	= 621,
        swDefaultBOMPartNumberForNewConfig	= 622,
        swDimOverriddenCellValueColor	= 623,
        swOppHandMirrorComp	= 624,
        swGtolDecimalSeparatorType	= 625,
        swCollinearChainDimensionArrowHeadTerminationStyle	= 626
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("b49f0fa1-8b8f-4b4b-9f7a-dd5f0d3e52e1") swDetailingSectionViewLineStyle_e
    {
        swDetailingSectionViewLineStyleDisplay_StandardWithConnector	= 0,
        swDetailingSectionViewLineStyleDisplay_AlternateWithoutConnector	= 1,
        swDetailingSectionViewLineStyleDisplay_StandardWithoutConnector	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("B757AA03-6B8B-4F10-835A-1C7990A917A6") swDetailingViewRotation_e
    {
        swDetailingViewRotation_None	= 0,
        swDetailingViewRotation_DisplaySymbolAngle	= 1,
        swDetailingViewRotation_DisplaySymbol	= 2,
        swDetailingViewRotation_DisplayROTATEDAngleCWCCW	= 3,
        swDetailingViewRotation_DisplayAngle	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("8EE295E0-D709-4225-86A6-C604AD25FB93") swSheetMetalBendNotesBorderSize_e
    {
        swSheetMetalBendNotesBorderSizeTightFit	= 0,
        swSheetMetalBendNotesBorderSizeOneCharacter	= 1,
        swSheetMetalBendNotesBorderSizeTwoCharacters	= 2,
        swSheetMetalBendNotesBorderSizeThreeCharacters	= 3,
        swSheetMetalBendNotesBorderSizeFourCharacters	= 4,
        swSheetMetalBendNotesBorderSizeFiveCharacters	= 5,
        swSheetMetalBendNotesBorderSizeUserDefined	= 6
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("2D5631B4-1E6B-4B16-A6F8-084F98CD4D21") swViewIndication_e
    {
        swViewIndication_ArrowMethod	= 0,
        swViewIndication_SameAsSection	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("CEF612CA-48F9-468a-AD28-6F0292A403D0") swModelRebuildStatus_e
    {
        swModelRebuildStatus_FullyRebuilt	= FALSE,
        swModelRebuildStatus_NonFrozenFeatureNeedsRebuild	= TRUE,
        swModelRebuildStatus_FrozenFeatureNeedsRebuild	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("3C223513-935D-4DA9-940A-17F4A7262253") swUserPreferenceDoubleValue_e
    {
        swDetailingNoteFontHeight	= 0,
        swDetailingDimFontHeight	= 1,
        swSTLDeviation	= 2,
        swSTLAngleTolerance	= 3,
        swSpinBoxMetricLengthIncrement	= 4,
        swSpinBoxEnglishLengthIncrement	= 5,
        swSpinBoxAngleIncrement	= 6,
        swMaterialPropertyDensity	= 7,
        swTiffPrintPaperWidth	= 8,
        swTiffPrintPaperHeight	= 9,
        swTiffPrintDrawingPaperHeight	= 8,
        swTiffPrintDrawingPaperWidth	= 9,
        swDetailingCenterlineExtension	= 10,
        swDetailingBreakLineGap	= 11,
        swDetailingCenterMarkSize	= 12,
        swDetailingWitnessLineGap	= 13,
        swDetailingWitnessLineExtension	= 14,
        swDetailingObjectToDimOffset	= 15,
        swDetailingDimToDimOffset	= 16,
        swDetailingMaxLinearToleranceValue	= 17,
        swDetailingMinLinearToleranceValue	= 18,
        swDetailingMaxAngularToleranceValue	= 19,
        swDetailingMinAngularToleranceValue	= 20,
        swDetailingToleranceTextScale	= 21,
        swDetailingToleranceTextHeight	= 22,
        swDetailingNoteBentLeaderLength	= 23,
        swDetailingArrowHeight	= 24,
        swDetailingArrowWidth	= 25,
        swDetailingArrowLength	= 26,
        swDetailingSectionArrowHeight	= 27,
        swDetailingSectionArrowWidth	= 28,
        swDetailingSectionArrowLength	= 29,
        swGridMajorSpacing	= 30,
        swSnapToAngleValue	= 31,
        swImageQualityShadedDeviation	= 32,
        swDrawingDefaultSheetScaleNumerator	= 33,
        swDrawingDefaultSheetScaleDenominator	= 34,
        swDrawingDetailViewScale	= 35,
        swViewRotationArrowKeys	= 36,
        swMateAnimationSpeed	= 37,
        swViewAnimationSpeed	= 38,
        swDetailingDimBentLeaderLength	= 39,
        swMaterialPropertyCrosshatchScale	= 40,
        swMaterialPropertyCrosshatchAngle	= 41,
        swDrawingAreaHatchScale	= 42,
        swDrawingAreaHatchAngle	= 43,
        swPageSetupPrinterTopMargin	= 44,
        swPageSetupPrinterBottomMargin	= 45,
        swPageSetupPrinterLeftMargin	= 46,
        swPageSetupPrinterRightMargin	= 47,
        swPageSetupPrinterThinLineWeight	= 48,
        swPageSetupPrinterNormalLineWeight	= 49,
        swPageSetupPrinterThickLineWeight	= 50,
        swPageSetupPrinterThick2LineWeight	= 51,
        swPageSetupPrinterThick3LineWeight	= 52,
        swPageSetupPrinterThick4LineWeight	= 53,
        swPageSetupPrinterThick5LineWeight	= 54,
        swPageSetupPrinterThick6LineWeight	= 55,
        swPageSetupPrinterDrawingScale	= 56,
        swPageSetupPrinterPartAsmScale	= 57,
        swCustomizedImportTolerance	= 58,
        swDetailingBalloonBentLeaderLength	= 60,
        swBOMControlSplitHeight	= 61,
        swAnnotationTextScaleNumerator	= 62,
        swAnnotationTextScaleDenominator	= 63,
        swDetailingDimBreakGap	= 64,
        swCurvatureValue1	= 65,
        swCurvatureValue2	= 66,
        swCurvatureValue3	= 67,
        swCurvatureValue4	= 68,
        swCurvatureValue5	= 69,
        swDetailingBreakLineExtension	= 70,
        swDetailingToleranceFitTolTextScale	= 71,
        swDetailingToleranceFitTolTextHeight	= 72,
        swDocumentColorAdvancedAmbient	= 73,
        swDocumentColorAdvancedDiffuse	= 74,
        swDocumentColorAdvancedSpecularity	= 75,
        swDocumentColorAdvancedShininess	= 76,
        swDocumentColorAdvancedTransparency	= 77,
        swDocumentColorAdvancedEmission	= 78,
        swDxfOutputScaleFactor	= 79,
        swHoleTableTagAngle	= 80,
        swHoleTableTagOffset	= 81,
        swDetailingMaxWitnessLineLength	= 82,
        swDrawingKeyboardMovementIncrement	= 83,
        swSketchSnapsAngleValue	= 84,
        swDxfMergingDistance	= 85,
        swDetailingDimRadialSnapAngle	= 86,
        swViewTransitionHideShowComponent	= 87,
        swViewTransitionIsolate	= 88,
        swLineFontVisibleEdgesThicknessCustom	= 89,
        swLineFontHiddenEdgesThicknessCustom	= 90,
        swLineFontSketchCurvesThicknessCustom	= 91,
        swLineFontDetailCircleThicknessCustom	= 92,
        swLineFontSectionLineThicknessCustom	= 93,
        swLineFontDimensionsThicknessCustom	= 94,
        swLineFontConstructionCurvesThicknessCustom	= 95,
        swLineFontCrosshatchThicknessCustom	= 96,
        swLineFontTangentEdgesThicknessCustom	= 97,
        swLineFontDetailBorderThicknessCustom	= 98,
        swLineFontCosmeticThreadThicknessCustom	= 99,
        swLineFontHideTangentEdgeThicknessCustom	= 100,
        swLineFontViewArrowThicknessCustom	= 101,
        swLineFontExplodedLinesThicknessCustom	= 102,
        swLineFontBreakLineThicknessCustom	= 103,
        swDetailingBalloonLeaderLineThicknessCustom	= 104,
        swDetailingBalloonFrameLineThicknessCustom	= 105,
        swDetailingDatumLeaderLineThicknessCustom	= 106,
        swDetailingDatumFrameLineThicknessCustom	= 107,
        swDetailingGtolLeaderLineThicknessCustom	= 108,
        swDetailingGtolFrameLineThicknessCustom	= 109,
        swDetailingNoteLeaderLineThicknessCustom	= 110,
        swDetailingSFSymbolLeaderLineThicknessCustom	= 111,
        swDetailingWeldSymbolLeaderLineThicknessCustom	= 112,
        swDetailingAnnotationBentLeaderLength	= 113,
        swDetailingGtolBentLeaderLength	= 114,
        swDetailingSFSymbolBentLeaderLength	= 115,
        swDetailingMaxToleranceValue	= 116,
        swDetailingMinToleranceValue	= 117,
        swSpinBoxTimeIncrement	= 118,
        swDetailingBorderUserDefined	= 119,
        swDetailingBOMBalloonCustomSize	= 120,
        swDetailingBOMStackedBalloonCustomSize	= 121,
        swLineFontSpeedPakDrawingsModelEdgesThicknessCustom	= 122,
        swPartDimXpertLengthUnitTol1Value	= 123,
        swPartDimXpertLengthUnitTol2Value	= 124,
        swPartDimXpertLengthUnitTol3Value	= 125,
        swPartDimXpertAngularUnitTolValue	= 126,
        swPartDimXpertLocationDistanceTolUpperValue	= 127,
        swPartDimXpertLocationDistanceTolLowerValue	= 128,
        swPartDimXpertLocationAngleTolUpperValue	= 129,
        swPartDimXpertLocationAngleTolLowerValue	= 130,
        swPartDimXpertChainPatternLocTolUpperValue	= 131,
        swPartDimXpertChainPatternLocTolLowerValue	= 132,
        swPartDimXpertChainInnerTolUpperValue	= 133,
        swPartDimXpertChainInnerTolLowerValue	= 134,
        swPartDimXpertGeometricPrimaryTolValue	= 135,
        swPartDimXpertGeometricSecondFeatureSizeTolValue	= 136,
        swPartDimXpertGeometricSecondPlaneFeatureTolValue	= 137,
        swPartDimXpertGeometricThirdFeatureSizeTolValue	= 138,
        swPartDimXpertGeometricThirdPlaneFeatureTolValue	= 139,
        swPartDimXpertGeometricPositionTolValue	= 140,
        swPartDimXpertGeometricPositionCompositeTolValue	= 141,
        swPartDimXpertGeometricSurfaceProfileTolValue	= 142,
        swPartDimXpertGeometricSurfaceProfileCompositeTolValue	= 143,
        swPartDimXpertGeometricRunoutTolValue	= 144,
        swPartDimXpertChamferWidthRatio	= 145,
        swPartDimXpertChamferMaxWidth	= 146,
        swPartDimXpertChamferDistanceTolUpperValue	= 147,
        swPartDimXpertChamferDistanceTolLowerValue	= 148,
        swPartDimXpertChamferAngleTolUpperValue	= 149,
        swPartDimXpertChamferAngleTolLowerValue	= 150,
        swPartDimXpertSizeDiameterTolUpperValue	= 151,
        swPartDimXpertSizeDiameterTolLowerValue	= 152,
        swPartDimXpertSizeCounterboreDiameterTolUpperValue	= 153,
        swPartDimXpertSizeCounterboreDiameterTolLowerValue	= 154,
        swPartDimXpertSizeCountersinkDiameterTolUpperValue	= 155,
        swPartDimXpertSizeCountersinkDiameterTolLowerValue	= 156,
        swPartDimXpertSizeCountersinkAngleTolUpperValue	= 157,
        swPartDimXpertSizeCountersinkAngleTolLowerValue	= 158,
        swPartDimXpertSizeLengthSlotTolUpperValue	= 159,
        swPartDimXpertSizeLengthSlotTolLowerValue	= 160,
        swPartDimXpertSizeWidthSlotTolUpperValue	= 161,
        swPartDimXpertSizeWidthSlotTolLowerValue	= 162,
        swPartDimXpertSizeDepthTolUpperValue	= 163,
        swPartDimXpertSizeDepthTolLowerValue	= 164,
        swPartDimXpertSizeFilletRadiusTolUpperValue	= 165,
        swPartDimXpertSizeFilletRadiusTolLowerValue	= 166,
        swPunchTableTagAngle	= 167,
        swPunchTableTagOffset	= 168,
        swLineFontAdjoiningComponentCustom	= 169,
        swQuickViewTransparencyLevel	= 170,
        swDetailingRevisionCloudLineThicknessCustom	= 171,
        swDetailingRevisionCloudMaxArcRadius	= 172,
        swSheetMetalBendNotesLeaderLineThicknessCustom	= 173,
        swSheetMetalBendNotesBorderSizeCustom	= 174,
        swSheetMetalBendNotesLeaderLength	= 175,
        swDetailingBorderAddPadding	= 176,
        swDetailingBOMBalloonPadding	= 177,
        swDetailingBOMStackedBalloonPadding	= 178,
        swDetailingTablesHorizontalPadding	= 179,
        swDetailingTablesVerticalPadding	= 180,
        swLineFontBendLineUpThicknessCustom	= 181,
        swLineFontBendLineDownThicknessCustom	= 182,
        swLineFontEnvelopeComponentThicknessCustom	= 183,
        swDetailingCenterOfMassSize	= 184,
        swViewSelectorSpeed	= 185,
        swDetailingBalloonQtyGapDistance	= 186,
        swDimensionsExtensionLineStyleThicknessCustom	= 188,
        swSmartMateSensitivity	= 189,
        swSystemTouchRotateWidth	= 190,
        swSystemTouchRotateVersusPanThreshhold	= 191,
        swDetailingParaSpacing	= 192,
        swTwistCountValuePerMeter	= 194,
        swDetailingLocationLabelFrameLineThicknessCustom	= 195,
        swDetailingLocationLabelStyleCustomSize	= 196,
        swDetailingLocationLabelPadding	= 197,
        swDetailingCenterMarkGap	= 198,
        swDetailingBorderLeaderCustomLineThickness	= 199,
        swDetailingBorderZoneDividerLength	= 200,
        swDetailingBorderOuterCenterZoneDividerLength	= 201,
        swDetailingBorderInnerCenterZoneDividerLength	= 202,
        swDetailingBorderZoneDividerCustomLineThickness	= 203,
        swDetailingOrdinateSize	= 204,
        swLineFontEmphasizedSectionThicknessCustom	= 205,
        swPrint3DBoxX	= 206,
        swPrint3DBoxY	= 207,
        swPrint3DBoxZ	= 208,
        swMatesMaximumDeviationForMisalignedMates	= 209,
        swASMSLDPRT_ExcludeComponentsByVisibilityThreshold	= 210,
        swASMSLDPRT_ExcludeComponentsByBBoxVolumeThreshold	= 211,
        swPLYDeviation	= 212,
        swPLYAngleTolerance	= 213,
        swSheetMetalMBDLeaderLineThicknessCustom	= 214,
        swSheetMetalMBDBorderSizeCustom	= 215,
        swSheetMetalMBDLeaderLength	= 216,
        swDetailingHatchDensityLimit	= 217
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("C9521290-8561-4190-AD2B-409B4B7FFA6F") swUserPreferenceStringValue_e
    {
        swFileLocationsDocuments	= 1,
        swFileLocationsPaletteFeatures	= 2,
        swFileLocationsPaletteParts	= 3,
        swFileLocationsPaletteFormTools	= 4,
        swFileLocationsBlocks	= 5,
        swFileLocationsDocumentTemplates	= 6,
        swFileLocationsSheetFormat	= 7,
        swDefaultTemplatePart	= 8,
        swDefaultTemplateAssembly	= 9,
        swDefaultTemplateDrawing	= 10,
        swBackupDirectory	= 11,
        swFileLocationsBendTable	= 12,
        swMaterialPropertyCrosshatchPattern	= 13,
        swDrawingAreaHatchPattern	= 14,
        swDetailingNextDatumFeatureLabel	= 15,
        swFileSaveAsCoordinateSystem	= 16,
        swFileLocationsPaletteAssemblies	= 17,
        swCustomPropertyUsedAsComponentDescription	= 18,
        swFileLocationsLibraryFeatures	= 19,
        swFileLocationsMacroFeatures	= 20,
        swFileLocationsWebFolders	= 21,
        swFileLocationsBOMTemplates	= 22,
        swFileLocationsMacros	= 23,
        swFileLocationsJournalFile	= 24,
        swFileLocationsCustomPropertyFile	= 25,
        swFileLocationsHoleCalloutFormatFile	= 26,
        swFileLocationsDimensionFavorites	= 27,
        swFileLocationsMaterialDatabases	= 28,
        swFileLocationsWeldmentProfiles	= 29,
        swFileLocationsColorSwatches	= 30,
        swFileLocationsTextures	= 31,
        swFileLocationsWeldmentPropertyFile	= 32,
        swFileLocationsHoleTableTemplates	= 33,
        swFileLocationsWeldmentCutListTemplates	= 34,
        swFileLocationsRevisionTableTemplates	= 35,
        swDrawingCustomPropertyUsedAsRevision	= 36,
        swFileLocationsRouteComponentLibrary	= 37,
        swFileLocationsDesignLibrary	= 38,
        swFileLocationsLineStyleDefinitions	= 39,
        swFileLocationsDesignJournalTemplate	= 40,
        swFileLocationsRouteCableLibrary	= 41,
        swFileLocationsAppearances	= 42,
        swFileLocationsScenes	= 43,
        swFileLocationsLights	= 44,
        swFileLocationsBendNoteFormatFile	= 45,
        swSeparatorCharacterForDims	= 46,
        swFileLocationsRouteCoveringLibrary	= 47,
        swFileLocationsDesignCheckerFile	= 48,
        swReferenceTriadXLabel	= 49,
        swReferenceTriadYLabel	= 50,
        swReferenceTriadZLabel	= 51,
        swHoleWizardToolBoxFolder	= 52,
        swAutoSaveDirectory	= 53,
        swColorsBackgroundImageFile	= 54,
        swDetailingBOMUpperCustomProperty	= 55,
        swDetailingBOMLowerCustomProperty	= 56,
        swFileLocationsTxCalloutFormatFile	= 57,
        swFileLocations3DCCModelFolder	= 58,
        swFileLocationsHoleWizardFavoritesDB	= 59,
        swFileLocationsSearchPaths	= 60,
        swFileLocationsSheetMetalGaugeTable	= 61,
        swFileLocationsSpellingFolders	= 62,
        swDetailingLayer	= 63,
        swFileLocationsDraftingStandard	= 64,
        swDetailingDimensionStandardName	= 65,
        swOverriddenQuantityColumnName	= 66,
        swFileLocationsCustomAppearances	= 67,
        swFileLocationsCustomDecals	= 68,
        swFileLocationsCustomScenes	= 69,
        swFileLocationsTitleBlockTableTemplate	= 70,
        swFileLocationsBendCalculationTable	= 71,
        swFileLocationsThemeFolder	= 72,
        swExportIFCType	= 73,
        swFileLocationsFuncBldrSegTypeDefinitions	= 74,
        swFileLocationsSustainabilityReportTemplateFolder	= 75,
        swFileLocationsCostingReportTemplateFolder	= 76,
        swFileLocationsCostingTemplates	= 77,
        swFileLocationsWeldTableTemplate	= 78,
        swFileLocationsBendTableTemplate	= 79,
        swFileLocationsPunchTableTemplate	= 80,
        swDetailingDetailViewLabels_CustomName	= 81,
        swDetailingDetailViewLabels_CustomScale	= 82,
        swDetailingSectionViewLabels_CustomName	= 83,
        swDetailingSectionViewLabels_CustomScale	= 84,
        swDetailingAuxViewLabels_CustomName	= 85,
        swDetailingAuxViewLabels_CustomScale	= 86,
        swCenterLineLayer	= 87,
        swCenterMarkLayer	= 88,
        swSheetMetalBendNotesLayer	= 89,
        swSearchDissectionLocation	= 91,
        swFileLocationsSymbolLibraryFolder	= 92,
        swFileLocationsNewSheetFormat	= 93,
        swDetailingMiscView_CustomName	= 94,
        swDetailingMiscView_CustomScale	= 95,
        swDraftStandardExclusionList	= 96,
        swDetailingOrthoView_CustomName	= 97,
        swDetailingOrthoView_CustomScale	= 98,
        swElecDuctingDuctName	= 99,
        swElecCableTrayDuctName	= 100,
        swHvacRectDuctName	= 101,
        swHvacCirDuctName	= 102,
        swElecDuctingElbowName	= 102,
        swElecCableTrayElbowName	= 103,
        swHvacRectElbowName	= 104,
        swHvacCirElbowName	= 105,
        swBorderLayer	= 106,
        swFileLocationsThreadProfiles	= 107,
        swFileLocationsGeneralTablesTemplate	= 108,
        swFileLocationsTxGeneralFileLocation	= 109,
        swMySldSettings	= 110,
        swSolidBodiesBBoxDescriptionPrefix	= 111,
        swSolidBodiesBBoxDescriptionFirstSeparator	= 112,
        swSolidBodiesBBoxDescriptionSecondSeparator	= 113,
        swSolidBodiesBBoxDescriptionSuffix	= 114,
        swSheetMetalDescription	= 115,
        swDimXpertGeneralToleranceCustomTable	= 116,
        swFileLocationsDefaultSave	= 117,
        swHoleTagsList	= 118,
        swBomTableBOMHeaderCustomText_ForTopLevelOnlyBOM	= 119,
        swBomTableBOMHeaderCustomText_ForPartOnlyBOM	= 120,
        swBomTableBOMHeaderCustomText_ForIndentedBOM	= 121,
        swFileLocationsDrawingScaleStandard	= 122,
        swStructureSystemsFolder	= 123,
        swWeldmentStructureCutlistID	= 124,
        swWeldmentSheetmetalCutlistID	= 125,
        swWeldmentGenericCutlistID	= 126,
        swFileLocationsHatchPatternFile	= 127,
        swFileLocationsInspectionProjects	= 128,
        swFileLocationsInspectionReports	= 129,
        swLastSynchronizationTimeStamp	= 130,
        swFileLocationsInspectionExports	= 131,
        swFileLocationsStructureSystemsConnectionElements	= 132,
        swFileLocationsConnectedLibrary	= 133,
        swExportOutputCoordinateSystem	= 134,
        swFileLocationsDefeatureRuleSets	= 135,
        swOppPrefixSuffixText	= 136,
        swVirtualComponentPrefixedit	= 137
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("E36B1575-30BE-444D-BDE0-5C1A73B0B333") swSystemColorsCurrentColorScheme_e
    {
        swSystemColorsCurrentColorSchemeBlueHighlight	= 0,
        swSystemColorsCurrentColorSchemeGreenHighlight	= 1,
        swSystemColorsCurrentColorSchemeOrangeHighlight	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("7045745D-FE3C-4D8E-9C73-7D61939FF680") swSystemColorsEnvelopes_e
    {
        swSystemColorsEnvelopes_SemiTransparent	= 0,
        swSystemColorsEnvelopes_Opaque	= 1,
        swSystemColorsEnvelopes_DoNotChange	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("80DF8D6B-1CD9-49a7-8D24-EDAC26978B46") swUserPreferenceOption_e
    {
        swDetailingNoOptionSpecified	= 0,
        swDetailingAnnotation	= 100,
        swDetailingBalloon	= 101,
        swDetailingDatum	= 102,
        swDetailingGeometricTolerance	= 103,
        swDetailingNote	= 104,
        swDetailingSurfaceFinishSymbol	= 105,
        swDetailingWeldSymbol	= 106,
        swDetailingRevisionCloud	= 107,
        swDetailingTableAnnotation	= 150,
        swDetailingGeneralTable	= 151,
        swDetailingBillOfMaterial	= 152,
        swDetailingHoleTable	= 153,
        swDetailingRevisionTable	= 154,
        swDetailingDimension	= 200,
        swDetailingAngleDimension	= 201,
        swDetailingArcLengthDimension	= 202,
        swDetailingChamferDimension	= 203,
        swDetailingDiameterDimension	= 204,
        swDetailingHoleDimension	= 205,
        swDetailingLinearDimension	= 206,
        swDetailingOrdinateDimension	= 207,
        swDetailingRadiusDimension	= 208,
        swDetailingAngularRunningDimension	= 209,
        swDetailingDrawingView	= 300,
        swDetailingDetailView	= 301,
        swDetailingSectionView	= 302,
        swDetailingAuxiliaryView	= 303,
        swDetailingOrthoView	= 304,
        swDetailingBendTable	= 305,
        swDetailingPunchTable	= 306,
        swDetailingWeldTable	= 307,
        swDetailingMiscView	= 308,
        swDetailingLocationLabel	= 309
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("136EB330-9CE8-4FDC-9ED0-B691CCCA02E6") swUserPreferenceStringListValue_e
    {
        swDxfMappingFiles	= 0,
        swEmodelSelectionList	= 1,
        swEmodelAttachmentList	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("81C02CA3-81C4-4B9F-A1BA-3CC5953557F7") swUserPreferenceTextFormat_e
    {
        swDetailingNoteTextFormat	= 0,
        swDetailingDimensionTextFormat	= 1,
        swDetailingSectionTextFormat	= 2,
        swDetailingDetailTextFormat	= 3,
        swDetailingViewArrowTextFormat	= 4,
        swDetailingSurfaceFinishTextFormat	= 5,
        swDetailingWeldSymbolTextFormat	= 6,
        swDetailingGeneralTableTextFormat	= 7,
        swDetailingBalloonTextFormat	= 8,
        swDetailingDetailLabelTextFormat	= 9,
        swDetailingSectionLabelTextFormat	= 10,
        swDetailingBillOfMaterialTextFormat	= 11,
        swDetailingHoleTableTextFormat	= 12,
        swDetailingRevisionTableTextFormat	= 13,
        swDetailingDatumTextFormat	= 14,
        swDetailingGeometricToleranceTextFormat	= 15,
        swDetailingAuxiliaryLabelTextFormat	= 16,
        swDetailingTableTextFormat	= 17,
        swDetailingViewTextFormat	= 18,
        swDetailingAnnotationTextFormat	= 19,
        swDetailingTitleBlockTableTextFormat	= 20,
        swDetailingOrthoLabelTextFormat	= 21,
        swDetailingBendTextFormat	= 22,
        swDetailingSectionLabelNameTextFormat	= 23,
        swDetailingSectionLabelLabelTextFormat	= 24,
        swDetailingSectionLabelScaleTextFormat	= 25,
        swDetailingSectionLabelDelimiterTextFormat	= 26,
        swDetailingPunchTextFormat	= 27,
        swSheetMetalBendNotesTextFormat	= 28,
        swDetailingWeldSymbolTextRootInsideFont	= 29,
        swDetailingMiscView_NameTextFormat	= 30,
        swDetailingMiscView_ScaleTextFormat	= 31,
        swDetailingMiscView_DelimiterTextFormat	= 32,
        swDetailingAuxView_NameTextFormat	= 33,
        swDetailingAuxView_LabelTextFormat	= 34,
        swDetailingAuxView_RotationTextFormat	= 35,
        swDetailingAuxView_ScaleTextFormat	= 36,
        swDetailingAuxView_DelimiterTextFormat	= 37,
        swDetailingSectionView_RotationTextFormat	= 38,
        swDetailingOrthoView_NameTextFormat	= 39,
        swDetailingOrthoView_ScaleTextFormat	= 40,
        swDetailingOrthoView_DelimiterTextFormat	= 41,
        swDetailingDetailView_NameTextFormat	= 42,
        swDetailingDetailView_LabelTextFormat	= 43,
        swDetailingDetailView_ScaleTextFormat	= 44,
        swDetailingDetailView_DelimiterTextFormat	= 45,
        swDetailingLocationLabelTextFormat	= 46,
        swPointAxisCoordSystemNameFontTextFormat	= 47,
        swPointAxisCoordSystemLabelFontTextFormat	= 48,
        swSheetMetalMBDTextFormat	= 49
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("695DFC34-E252-4E30-960E-F311959E0719") swArrowPlacement_e
    {
        swArrowPlacementLegacy	= 0,
        swArrowPlacementSmartArrowFollowText	= 1,
        swArrowPlacementSmartArrowRemainAttachedToArc	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("5098AF63-205A-45A4-9091-AE642C63C346") swViewDisplayType_e
    {
        swIsViewSectioned	= 0,
        swIsViewPerspective	= 1,
        swIsViewShaded	= 2,
        swIsViewWireFrame	= 3,
        swIsViewHiddenLinesRemoved	= 4,
        swIsViewHiddenInGrey	= 5,
        swIsViewCurvature	= 6,
        swIsViewStripe	= 7
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("35A8C82A-FB04-4dd8-AB95-992704185BE7") swViewDisplayMode_e
    {
        swViewDisplayMode_Wireframe	= 1,
        swViewDisplayMode_HiddenLinesRemoved	= 2,
        swViewDisplayMode_HiddenLinesGrayed	= 3,
        swViewDisplayMode_Shaded	= 4,
        swViewDisplayMode_ShadedWithEdges	= 5,
        swViewDisplayMode_ShadedCurvatureOn	= 6,
        swViewDisplayMode_ShadedCurvatureOFF	= 7,
        swViewDisplayMode_StripesOn	= 8,
        swViewDisplayMode_StripesOff	= 9,
        swViewDisplayMode_PerspectiveOn	= 10,
        swViewDisplayMode_PerspectiveOff	= 11,
        swViewDisplayMode_Faceted	= 12,
        swViewDisplayMode_IntegratedPreview	= 13
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("C83BAEC5-3942-4F9D-AABF-D239352337B7") swSkInternalPntOpts_e
    {
        swSkPntsOff	= 0,
        swSkPntsOn	= 1,
        swSkPntsDefault	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("499FE3FB-9FDB-4D48-A1F3-DB98614DAD05") swDxfFormat_e
    {
        swDxfFormat_R12	= 0,
        swDxfFormat_R13	= 1,
        swDxfFormat_R14	= 2,
        swDxfFormat_R2000	= 3,
        swDxfFormat_R2004	= 4,
        swDxfFormat_R2007	= 5,
        swDxfFormat_R2010	= 6,
        swDxfFormat_R2013	= 7,
        swDxfFormat_R2018	= 8
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("9D457DAE-33B1-42D9-94E4-3CFD2A20DD7F") swArrowDirection_e
    {
        swINSIDE	= 0,
        swOUTSIDE	= 1,
        swSMART	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("F26B2C60-6641-4E2C-9138-2CBE11B0C663") swPrintProperties_e
    {
        swPrintPaperSize	= 0,
        swPrintOrientation	= 1,
        swPrintPaperLength	= 2,
        swPrintPaperWidth	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("F3CF4C31-AAA4-4EAB-A944-6A61D139C959") swTiffImageType_e
    {
        swTiffImageBlackAndWhite	= 0,
        swTiffImageRGB	= 1,
        swTiffImageGrayScale	= 2,
        swTiffImageRGBA	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("B1A95D41-B705-4CE1-82AA-DAF5C7291E74") swTiffCompressionScheme_e
    {
        swTiffUncompressed	= 0,
        swTiffPackbitsCompression	= 1,
        swTiffGroup4FaxCompression	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("954901E1-3811-423b-81BF-55792F42DD96") swBodyOperationType_e
    {
        SWBODYINTERSECT	= 15901,
        SWBODYCUT	= 15902,
        SWBODYADD	= 15903
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("0D6738AA-18DE-4858-B84B-BABDB0BBC950") swPrintSelectionScaleFactor_e
    {
        swPrintAll	= 0,
        swPrintCurrentSheet	= 1,
        swPrintScreenImage	= 2,
        swPrintSelection	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("F1668E03-3E10-4043-91B9-AE5F34714617") swBodyOperationError_e
    {
        swBodyOperationUnknownError	= -1,
        swBodyOperationNoError	= 0,
        swBodyOperationNonApiBody	= 1,
        swBodyOperationWrongType	= 2,
        swBodyOperationBooleanFail	= 1058,
        swBodyOperationNoIntersect	= 1067,
        swBodyOperationNonManifold	= 547,
        swBodyOperationPartialCoincidence	= 1040,
        swBodyOperationIntersectSolidWithSheets	= 972,
        swBodyOperationUniteSolidSheet	= 543,
        swBodyOperationMissingGeom	= 96,
        swBodyOperationSameToolAndTarget	= 545,
        swBodyOperationFailGeomCondition	= 3,
        swBodyOperationFailToCutBody	= 4,
        swBodyOperationDisjointBodies	= 5,
        swBodyOperationEmptyBody	= 6,
        swBodyOperationEmptyInputBody	= 7,
        swBodyOperationInvalidInputBody	= 8,
        swBodyOperationOpposedSheets	= 951
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("3754482D-5A91-4510-B321-946ADEE50ADC") swStartConditions_e
    {
        swStartSketchPlane	= 0,
        swStartSurface	= 1,
        swStartVertex	= 2,
        swStartOffset	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("718284B5-F5D6-4239-A90C-89AAE86BDB91") swEndConditions_e
    {
        swEndCondBlind	= 0,
        swEndCondThroughAll	= 1,
        swEndCondThroughNext	= 2,
        swEndCondUpToVertex	= 3,
        swEndCondUpToSurface	= 4,
        swEndCondOffsetFromSurface	= 5,
        swEndCondMidPlane	= 6,
        swEndCondUpToBody	= 7,
        swEndCondThroughAllBoth	= 9,
        swEndCondUpToSelection	= 10,
        swEndCondUpToNext	= 11
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("6C0DC3EE-D080-42AC-896F-E497C7E1E825") swChamferType_e
    {
        swChamferAngleDistance	= 1,
        swChamferDistanceDistance	= 2,
        swChamferVertex	= 3,
        swChamferEqualDistance	= 16
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("7B08D9DA-5CB4-4482-93B7-426329033B59") swSketchChamferType_e
    {
        swSketchChamfer_DistanceAngle	= 0,
        swSketchChamfer_DistanceDistance	= 1,
        swSketchChamfer_DistanceEqual	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("C7486BF7-DE88-4B05-BEF3-A12129588505") swLineWeights_e
    {
        swLW_NONE	= -1,
        swLW_THIN	= 0,
        swLW_NORMAL	= 1,
        swLW_THICK	= 2,
        swLW_THICK2	= 3,
        swLW_THICK3	= 4,
        swLW_THICK4	= 5,
        swLW_THICK5	= 6,
        swLW_THICK6	= 7,
        swLW_NUMBER	= 8,
        swLW_LAYER	= 9,
        swLW_CUSTOM	= 10
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("DA55301B-37D7-4CA8-B9C4-C95F2DFFDAF6") swToolbarStates_e
    {
        swToolbarHidden	= 0
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("6580B9A0-6F9D-45E9-A623-CA4CB4628FFD") swSummInfoField_e
    {
        swSumInfoTitle	= 0,
        swSumInfoSubject	= 1,
        swSumInfoAuthor	= 2,
        swSumInfoKeywords	= 3,
        swSumInfoComment	= 4,
        swSumInfoSavedBy	= 5,
        swSumInfoCreateDate	= 6,
        swSumInfoSaveDate	= 7,
        swSumInfoCreateDate2	= 8,
        swSumInfoSaveDate2	= 9
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("56908F53-A82D-4229-B7C5-40C8332C707F") swPropSheetType_e
    {
        swPropSheetNotValid	= 0,
        swPropSheetLighting	= 1,
        swPropSheetToolsOptions	= 2,
        swPropSheetAmbientLight	= 3,
        swPropSheetDirectionalLight	= 4,
        swPropSheetPositionLight	= 5,
        swPropSheetSpotLight	= 6
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("87DCBCCD-950A-41AB-BAEC-649248ACE1EA") swCustomPropertyAddOption_e
    {
        swCustomPropertyOnlyIfNew	= 0,
        swCustomPropertyDeleteAndAdd	= 1,
        swCustomPropertyReplaceValue	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("687CB334-1E07-4F3F-BDC2-25C56D9498E7") swCustomInfoAddResult_e
    {
        swCustomInfoAddResult_AddedOrChanged	= 0,
        swCustomInfoAddResult_GenericFail	= 1,
        swCustomInfoAddResult_MismatchAgainstExistingType	= 2,
        swCustomInfoAddResult_MismatchAgainstSpecifiedType	= 3,
        swCustomInfoAddResult_MismatchAgainstLegacyTypes	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("5B24A03E-4CA2-43AB-8A24-56D6B4B0CBE1") swCustomInfoSetResult_e
    {
        swCustomInfoSetResult_OK	= 0,
        swCustomInfoSetResult_NotPresent	= 1,
        swCustomInfoSetResult_TypeMismatch	= 2,
        swCustomInfoSetResult_LinkedProp	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("55A446F8-FA41-4B62-85E6-C174667B6C67") swCustomInfoGetResult_e
    {
        swCustomInfoGetResult_CachedValue	= 0,
        swCustomInfoGetResult_ResolvedValue	= 2,
        swCustomInfoGetResult_NotPresent	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("96C0F8D2-A9C6-4E39-A15B-DE3A922A3755") swCustomInfoDeleteResult_e
    {
        swCustomInfoDeleteResult_OK	= 0,
        swCustomInfoDeleteResult_NotPresent	= 1,
        swCustomInfoDeleteResult_LinkedProp	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("A5FA80AD-2096-41A2-B9C6-6AC5D7BB7C18") swWindowState_e
    {
        swWindowNormal	= 0,
        swWindowMaximized	= 1,
        swWindowMinimized	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("69ED4FE3-4052-4698-81E6-96EC9783A448") swWitnessLineVisibility_e
    {
        swWitnessLineBoth	= 0,
        swWitnessLineFirst	= 1,
        swWitnessLineSecond	= 2,
        swWitnessLineNone	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("E064518B-46FF-4224-9E6C-8FD30740D91A") swLeaderLineVisibility_e
    {
        swLeaderLineBoth	= 0,
        swLeaderLineFirst	= 1,
        swLeaderLineSecond	= 2,
        swLeaderLineNone	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("DF21BDD5-5FAE-4B1A-AA68-C280FA66D1E1") swDimensionArrowsSide_e
    {
        swDimArrowsInside	= 0,
        swDimArrowsOutside	= 1,
        swDimArrowsSmart	= 2,
        swDimArrowsFollowDoc	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("44B8E5FE-D1F6-4072-9758-98E1EECE6095") swDimensionTextParts_e
    {
        swDimensionTextAll	= 0,
        swDimensionTextPrefix	= 1,
        swDimensionTextSuffix	= 2,
        swDimensionTextCalloutAbove	= 3,
        swDimensionTextCalloutBelow	= 4,
        swDimensionTextPrefixDefinition	= 5,
        swDimensionTextSuffixDefinition	= 6,
        swDimensionTextCalloutAboveDefinition	= 7,
        swDimensionTextCalloutBelowDefinition	= 8
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("DF2F6B72-556B-4E9D-AE81-EA1D154939D6") swTopology_e
    {
        swTopoSolidBody	= 1,
        swTopoSheetBody	= 2,
        swTopoWireBody	= 3,
        swTopoMinimumBody	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("F7966F12-610C-4DE0-B8DB-F7B443E78D4D") swTopoEntity_e
    {
        swTopoVertex	= 1,
        swTopoEdge	= 2,
        swTopoLoop	= 3,
        swTopoFace	= 4,
        swTopoShell	= 5,
        swTopoBody	= 6,
        swTopoRegion	= 7
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("C11E0BFF-869F-4397-88E6-BF65C2D2AE93") swViewAlignment_e
    {
        swViewAlignNone	= 0,
        swViewAlignedChildren	= 1,
        swViewAligned	= 2,
        swViewAlignBoth	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("0FA083A9-F696-4E0D-A856-710A7DB845FB") swToolbar_e
    {
        swSketchToolsToolbar	= 0,
        swMainToolbar	= 1,
        swStandardToolbar	= 2,
        swViewToolbar	= 3,
        swSketchRelationsToolbar	= 4,
        swMacroToolbar	= 5,
        swSketchToolbar	= 6,
        swAssemblyToolbar	= 7,
        swDrawingToolbar	= 8,
        swAnnotationToolbar	= 9,
        swWebToolbar	= 10,
        swFeatureToolbar	= 11,
        swFontToolbar	= 12,
        swLineToolbar	= 13,
        swSelectionFilterToolbar	= 14,
        swReferenceGeometryToolbar	= 15,
        swStandardViewsToolbar	= 16,
        swToolsToolbar	= 17,
        swCurvesToolbar	= 18,
        swMoldToolsToolbar	= 19,
        swSheetMetalToolbar	= 20,
        swSurfacesToolbar	= 21,
        swAlignToolbar	= 22,
        swLayerToolbar	= 23,
        sw2Dto3DToolbar	= 24,
        swRoutingToolbar	= 25,
        swSimulationToolbar	= 26,
        swSplineToolbar	= 27,
        swContextToolbar	= 28,
        swBlocksToolbar	= 29,
        swTaskPaneToolbar	= 30,
        swQuickSnapToolbar	= 31,
        swOfficeToolbar	= 32,
        swTolXpertToolbar	= 33,
        swDimXpertToolbar	= 33,
        swTableToolbar	= 34,
        swWeldmentToolbar	= 35,
        swAnimationPaneToolbar	= 36,
        swScreenCaptureToolbar	= 37,
        swLayoutToolbar	= 38,
        swRenderToolbar	= 39,
        swSheetFormatToolbar	= 40,
        swConfigurationToolbar	= 41,
        swDisplayStatesToolbar	= 42,
        swSOLIDWORKSMBDToolbars	= 43
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("6609A7F9-2A3F-4FA0-82BC-41C707EF811B") swInsertAnnotation_e
    {
        swInsertCThreads	= 0x1,
        swInsertDatums	= 0x2,
        swInsertDatumTargets	= 0x4,
        swInsertDimensions	= 0x8,
        swInsertInstanceCounts	= 0x10,
        swInsertGTols	= 0x20,
        swInsertNotes	= 0x40,
        swInsertSFSymbols	= 0x80,
        swInsertWelds	= 0x100,
        swInsertAxes	= 0x200,
        swInsertCurves	= 0x400,
        swInsertPlanes	= 0x800,
        swInsertSurfaces	= 0x1000,
        swInsertPoints	= 0x2000,
        swInsertOrigins	= 0x4000,
        swInsertDimensionsMarkedForDrawing	= 0x8000,
        swInsertHoleWizardProfileDimensions	= 0x10000,
        swInsertHoleWizardLocationDimensions	= 0x20000,
        swInsertRefPoints	= 0x40000,
        swInsertDimensionsNotMarkedForDrawing	= 0x80000,
        swInsertholeCallout	= 0x100000,
        swInsertWeldBeads	= 0x200000,
        swInsertSketches	= 0x400000,
        swInsertWeldBeads_ET	= 0x800000,
        swInsertTolerancedDims	= 0x1000000,
        swInsertCenterOfMass	= 0x2000000
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("BF392FA0-F80B-4DB7-946A-3423F70A5C91") swMessageBoxIcon_e
    {
        swMbWarning	= 1,
        swMbInformation	= 2,
        swMbQuestion	= 3,
        swMbStop	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("75A20839-2665-40FD-82B7-E6C11A5D97EB") swMessageBoxBtn_e
    {
        swMbAbortRetryIgnore	= 1,
        swMbOk	= 2,
        swMbOkCancel	= 3,
        swMbRetryCancel	= 4,
        swMbYesNo	= 5,
        swMbYesNoCancel	= 6
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("66FF03A9-A9B5-478B-8821-5DD9F24A351D") swMessageBoxResult_e
    {
        swMbHitAbort	= 1,
        swMbHitIgnore	= 2,
        swMbHitNo	= 3,
        swMbHitOk	= 4,
        swMbHitRetry	= 5,
        swMbHitYes	= 6,
        swMbHitCancel	= 7
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("8D2EBF7E-D1DE-4D59-BCDB-C123C41DA1C8") swAnnotationType_e
    {
        swCThread	= 1,
        swDatumTag	= 2,
        swDatumTargetSym	= 3,
        swDisplayDimension	= 4,
        swGTol	= 5,
        swNote	= 6,
        swSFSymbol	= 7,
        swWeldSymbol	= 8,
        swCustomSymbol	= 9,
        swDowelSym	= 10,
        swLeader	= 11,
        swBlock	= 12,
        swCenterMarkSym	= 13,
        swTableAnnotation	= 14,
        swCenterLine	= 15,
        swDatumOrigin	= 16,
        swWeldBeadSymbol	= 17,
        swRevisionCloud	= 18,
        swPMIOnly	= 19
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("6835D8AB-ECBD-416F-9AD8-A44A3342587E") swDimensionDrivenState_e
    {
        swDimensionDrivenUnknown	= 0,
        swDimensionDriven	= 1,
        swDimensionDriving	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("2D3E40D1-90A0-4DCD-A0B7-7AEE4A0F9BE5") swFileLoadError_e
    {
        swGenericError	= 0x1,
        swFileNotFoundError	= 0x2,
        swIdMatchError	= 0x4,
        swReadOnlyWarn	= 0x8,
        swSharingViolationWarn	= 0x10,
        swDrawingANSIUpdateWarn	= 0x20,
        swSheetScaleUpdateWarn	= 0x40,
        swNeedsRegenWarn	= 0x80,
        swBasePartNotLoadedWarn	= 0x100,
        swFileAlreadyOpenWarn	= 0x200,
        swInvalidFileTypeError	= 0x400,
        swDrawingsOnlyRapidDraftWarn	= 0x800,
        swViewOnlyRestrictions	= 0x1000,
        swFutureVersion	= 0x2000,
        swViewMissingReferencedConfig	= 0x4000,
        swDrawingSFSymbolConvertWarn	= 0x8000,
        swFileWithSameTitleAlreadyOpen	= 0x10000,
        swLiquidMachineDoc	= 0x20000,
        swLowResourcesError	= 0x40000,
        swNoDisplayData	= 0x80000,
        swAddinInteruptError	= 0x100000,
        swFileRequiresRepairError	= 0x200000,
        swFileCriticalDataRepairError	= 0x400000,
        swApplicationBusy	= 0x800000,
        swConnectedIsOffline	= 0x1000000
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("881A610B-F5A0-4969-90F3-FF2A1DEF6921") swFileLoadWarning_e
    {
        swFileLoadWarning_IdMismatch	= 0x1,
        swFileLoadWarning_ReadOnly	= 0x2,
        swFileLoadWarning_SharingViolation	= 0x4,
        swFileLoadWarning_DrawingANSIUpdate	= 0x8,
        swFileLoadWarning_SheetScaleUpdate	= 0x10,
        swFileLoadWarning_NeedsRegen	= 0x20,
        swFileLoadWarning_BasePartNotLoaded	= 0x40,
        swFileLoadWarning_AlreadyOpen	= 0x80,
        swFileLoadWarning_DrawingsOnlyRapidDraft	= 0x100,
        swFileLoadWarning_ViewOnlyRestrictions	= 0x200,
        swFileLoadWarning_ViewMissingReferencedConfig	= 0x400,
        swFileLoadWarning_DrawingSFSymbolConvert	= 0x800,
        swFileLoadWarning_RevolveDimTolerance	= 0x1000,
        swFileLoadWarning_ModelOutOfDate	= 0x2000,
        swFileLoadWarning_DimensionsReferencedIncorrectlyToModels	= 0x4000,
        swFileLoadWarning_ComponentMissingReferencedConfig	= 0x8000,
        swFileLoadWarning_InvisibleDoc_LinkedDesignTableUpdateFail	= 0x10000,
        swFileLoadWarning_MissingDesignTable	= 0x20000,
        swFileLoadWarning_AutomaticRepair	= 0x40000,
        swFileLoadWarning_CriticalDataRepair	= 0x80000,
        swFileLoadWarning_MissingExternalReferences	= 0x100000
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("DF330771-B47D-4397-ACC7-79FDE1321B4D") swFileSaveError_e
    {
        swGenericSaveError	= 0x1,
        swReadOnlySaveError	= 0x2,
        swFileNameEmpty	= 0x4,
        swFileNameContainsAtSign	= 0x8,
        swFileLockError	= 0x10,
        swFileSaveFormatNotAvailable	= 0x20,
        swFileSaveWithRebuildError	= 0x40,
        swFileSaveAsDoNotOverwrite	= 0x80,
        swFileSaveAsInvalidFileExtension	= 0x100,
        swFileSaveAsNoSelection	= 0x200,
        swFileSaveAsBadEDrawingsVersion	= 0x400,
        swFileSaveAsNameExceedsMaxPathLength	= 0x800,
        swFileSaveAsNotSupported	= 0x1000,
        swFileSaveRequiresSavingReferences	= 0x2000,
        swFileSaveAsDetachedDrawingsNotSupported	= 0x4000
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("151C8B13-209B-4677-8309-89E3EB5FE5CD") swFileSaveWarning_e
    {
        swFileSaveWarning_RebuildError	= 0x1,
        swFileSaveWarning_NeedsRebuild	= 0x2,
        swFileSaveWarning_ViewsNeedUpdate	= 0x4,
        swFileSaveWarning_AnimatorNeedToSolve	= 0x8,
        swFileSaveWarning_AnimatorFeatureEdits	= 0x10,
        swFileSaveWarning_EdrwingsBadSelection	= 0x20,
        swFileSaveWarning_AnimatorLightEdits	= 0x40,
        swFileSaveWarning_AnimatorCameraViews	= 0x80,
        swFileSaveWarning_AnimatorSectionViews	= 0x100,
        swFileSaveWarning_MissingOLEObjects	= 0x200,
        swFileSaveWarning_OpenedViewOnly	= 0x400,
        swFileSaveWarning_XmlInvalid	= 0x800
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("C4DA1103-9D2F-4f8b-A1F4-7418DF7C26EE") swEdrawingSaveAsOption_e
    {
        swEdrawingSaveActive	= 0x1,
        swEdrawingSaveAll	= 0x2,
        swEdrawingSaveSelected	= 0x3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("EE87D60C-0BC8-4AF6-8DE6-A25F9CDC45FE") swActivateDocError_e
    {
        swGenericActivateError	= 0x1,
        swDocNeedsRebuildWarning	= 0x2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("C7044F4E-27E1-4095-B6A5-35682477B8C8") swComponentSuppressionState_e
    {
        swComponentSuppressed	= 0,
        swComponentLightweight	= 1,
        swComponentFullyResolved	= 2,
        swComponentResolved	= 3,
        swComponentFullyLightweight	= 4,
        swComponentInternalIdMismatch	= 5
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("A274A28B-0B8A-435C-8861-809BB73A8BE3") swComponentVisibilityState_e
    {
        swComponentHidden	= 0,
        swComponentVisible	= 1,
        swComponentUnknown	= -1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("3CD097B1-79D5-4620-9B86-3DD96EA7E83B") swComponentSolvingOption_e
    {
        swComponentRigidSolving	= 0,
        swComponentFlexibleSolving	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("0A24702C-9CA8-4EDF-A4E0-1A398B228D89") swASMSLDPRTCompPref_e
    {
        swUseSystemSettings	= 0,
        swAlwaysInclude	= 1,
        swAlwaysExclude	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("0C9C7225-2AAC-41B3-8631-E3A1704AE71D") swCustomInfoType_e
    {
        swCustomInfoUnknown	= 0,
        swCustomInfoText	= 30,
        swCustomInfoDate	= 64,
        swCustomInfoNumber	= 3,
        swCustomInfoDouble	= 5,
        swCustomInfoYesOrNo	= 11,
        swCustomInfoEquation	= 105
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("58F84D5C-4E2B-4426-9ED1-546B50611DFB") swSafeArrayType_e
    {
        swWordArray	= 2,
        swLongArray	= 3,
        swDoubleArray	= 5,
        swBstrArray	= 8,
        swDispatchArray	= 9,
        swBooleanArray	= 11,
        swUnknownArray	= 13,
        swByteArray	= 16,
        swUnsignedByteArray	= 17,
        swLongLongArray	= 20,
        swUnsignedLongLongArray	= 21
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("E1A295CC-A16D-4C95-927D-B6B8A02197A1") swComponentResolveStatus_e
    {
        swResolveOk	= 0,
        swResolveAbortedByUser	= 1,
        swResolveNotPerformed	= 2,
        swResolveError	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("89A69703-AEA4-4abe-8445-B342497D119F") swSmartComponentSelectionTypes_e
    {
        swSmartComponentFeatures	= 1,
        swSmartComponentComponents	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("237D715A-D4FE-4438-80AA-A6B937BA5D23") swSuppressionError_e
    {
        swSuppressionBadComponent	= 0,
        swSuppressionBadState	= 1,
        swSuppressionChangeOk	= 2,
        swSuppressionChangeFailed	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("B10FE3C7-838E-41d7-8C1E-947C1D9A9E3D") swBitMaps
    {
        swBitMapNone	= 0,
        swBitMapUserDefined	= 1,
        swBitMapTreeError	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("80C4DAFA-C8B3-4dba-95E7-2C721E07F1BB") swLinkString
    {
        swLinkStringNone	= 0,
        swLinkStringUserDefined	= 1,
        swLinkStringTroubleShootTip	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("775FF304-7AC9-4612-B290-3BCFBE354970") swArrowPosition
    {
        swArrowLeftTop	= 0,
        swArrowLeftBottom	= 1,
        swArrowRightTop	= 2,
        swArrowRightBottom	= 3,
        swArrowUpTopLeft	= 4,
        swArrowUpTopRight	= 5,
        swArrowDownBottomLeft	= 6,
        swArrowDownBottomRight	= 7,
        swArrowLeftOrRightTop	= 8,
        swArrowLeftOrRightBottom	= 9,
        swArrowLeftOrRight	= 10,
        swArrowUpOrDownLeft	= 11,
        swArrowUpOrDownRight	= 12,
        swArrowUpOrDown	= 13,
        swArrowNone	= 14,
        swArrowUnknown	= 15
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("ABC896E9-8048-4e75-AD7C-91D7585F587E") swQuickTipPointAt_e
    {
        swQTPA_NONE	= 0,
        swQTPA_FilletFeature	= 1,
        swQTPA_RefPlanes	= 3,
        swQTPA_SheetMetalFeature	= 18,
        swQTPA_MateGroupFeature	= 33,
        swQTPA_MateFeature	= 105,
        swQTPA_ExtrudedCut	= 52,
        swQTPA_ExtrudedBoss	= 53,
        swQTPA_BaseExtrudeFeature	= 54,
        swQTPA_RevolvedCut	= 57,
        swQTPA_RevolvedBoss	= 57,
        swQTPA_BaseRevolvedFeature	= 57,
        swQTPA_FirstBodyFeature	= 998,
        swQTPA_LastBodyFeature	= 999,
        swQTPA_SketchFeature	= 78,
        swQTPA_Origin	= 79,
        swTPA_SheetFeature	= 88,
        swTPA_SheetFormat	= 97,
        swTPA_DwgViewFeature	= 43,
        swTPA_FeatureMgrTree	= 100,
        swTPA_SketchingDorito	= 1000,
        swTPA_OnScreenCancel	= 1001,
        swQTPA_Triad	= 1002,
        swQTPA_RollbackBar	= 1003,
        swQTPA_SheetMetalFlattenedFeature	= 1004,
        swQTPA_SheetMetalProcessedFeature	= 1005,
        swQTPA_AssemblyComponentFeature	= 1006,
        swQTPA_ArrowManipulator	= 1007,
        swQTPA_PropertyManager	= 1008,
        swQTPA_AssemblyComponentNonFixed	= 1009,
        swQTPA_MateOperationBar	= 1010,
        swQTPA_QTStatusBarButton	= 1011,
        swQTPA_Nothing_FloatTRGraphics	= 1012,
        swQTPA_ConstraintStatusBarButton	= 1013,
        swQTPA_ChangedFilesStatusBarButton	= 1014,
        swQTPA_PM_MSG_DIVIDER	= 5085,
        swQTPA_UpperAppFrame	= 387099
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("9C43A12B-EF20-4fa8-811E-BE5FC18773A3") swQuickTipMode_e
    {
        swQuickTipNoMode	= 0,
        swQuickTipEmptySWFrameMode	= 0x1,
        swQuickTipEmptyPartMode	= 0x2,
        swQuickTipSketchingMode	= 0x4,
        swQuickTipClosedProfileCompletedMode	= 0x8,
        swQuickTipSketchDoneMode	= 0x10,
        swQuickTipFirstFeatureDoneMode	= 0x20,
        swQuickTipEmptyAssemblyMode	= 0x40,
        swQuickTipAssemblyOneCompMode	= 0x80,
        swQuickTipAssemblyMultiCompMode	= 0x100,
        swQuickTipAssemblyMatedMode	= 0x200,
        swQuickTipAssemblySimulatingMode	= 0x400,
        swQuickTipEmptyDrawingMode	= 0x800,
        swQuickTipDrawingOneViewMode	= 0x1000,
        swQuickTipPMBaseFeatureDialogMode	= 0x2000,
        swQuickTipPMYellowErrorMessageMode	= 0x4000,
        swQuickTipPMMateDialogMode	= 0x8000,
        swQuickTipSheetMetalMode	= 0x10000,
        swQuickTipSketching3DMode	= 0x20000,
        swQuickTipDrawingEditSheetMode	= 0x40000,
        swQuickTipPMInsertModelViewMode	= 0x80000,
        swQuickTipPMInsertProjectedViewMode	= 0x100000,
        swQuickTipPMInsertComponentMode	= 0x200000,
        swQuickTipPMYellowGuidelinesMode	= 0x400000
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("4A2CAF96-6999-407D-8081-6008B0DF3D6F") swDynamicMode_e
    {
        swNoDynamics	= 0,
        swSpinDynamics	= 1,
        swPanDynamics	= 2,
        swZoomDynamics	= 3,
        swUnknownDynamics	= 4,
        swAnimDynamics	= 5,
        swDragDynamics	= 6
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("95FA0B6F-6E35-4CF2-BFD7-07DE7FEBA459") swTextJustification_e
    {
        swTextJustificationNone	= 0,
        swTextJustificationLeft	= 1,
        swTextJustificationCenter	= 2,
        swTextJustificationRight	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("BBD934FA-0BA3-4F1A-B1C6-E826B2514585") swVerticalJustification_e
    {
        swVerticalJustificationNone	= 0,
        swVerticalJustificationTop	= 1,
        swVerticalJustificationMiddle	= 2,
        swVerticalJustificationBottom	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("65086319-B8FD-496C-9841-DF7AB95328FD") swComponentReloadOption_e
    {
        swAlwaysReload	= 0,
        swDontReloadOldComponents	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("C1CB1A52-C2FF-40A5-B56B-E58E6F9E33CD") swComponentReloadError_e
    {
        swReloadOkay	= 0,
        swWriteAccessError	= 1,
        swFutureVersionError	= 2,
        swModifiedNotReloadedError	= 3,
        swInvalidOption	= 4,
        swFileNotSavedError	= 5,
        swInvalidComponentError	= 6,
        swUnexpectedError	= 7,
        swComponentLightWeightError	= 8,
        swFileDoesntExistError	= 9,
        swFileInvalidOrSameNameError	= 10,
        swDocumentHasNoView	= 11,
        swDocumentAlreadyOpenedError	= 12,
        swDocumentEventError	= 13,
        swDocumentNotChanged	= 14,
        swReloadCancel	= 15,
        swReadOnlyChanged	= 16
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("44C867BB-4261-48BA-A025-528813D9858A") swIntersectionType_e
    {
        swIntersectionSIMPLE	= 1,
        swIntersectionTANGENT	= 2,
        swIntersectionCOINCIDENCE_START	= 3,
        swIntersectionCOINCIDENCE_END	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("D3178C2E-1216-4BAD-BAB2-C076C79EAB71") swAddOrdinateDims_e
    {
        swOrdinate	= 1,
        swVerticalOrdinate	= 2,
        swHorizontalOrdinate	= 3,
        swAngularOrdinate	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("7F7CA6BF-FD7E-485C-A516-5DC220F755D1") swSheetSewingOption_e
    {
        swSewToSolid	= 0,
        swSewToSheets	= 1,
        swSewToSolidOrSheets	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("D05F2FB9-0A13-4D33-82B8-1D5B4FB45A77") swSheetSewingError_e
    {
        swSewingOk	= 0,
        swBadArgument	= 1,
        swUnspecifiedError	= 2,
        swSewingFailed	= 3,
        swSewingIncomplete	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("B0EE039B-BCA7-4EC7-8733-B70359940F67") swBodyType_e
    {
        swAllBodies	= -1,
        swSolidBody	= 0,
        swSheetBody	= 1,
        swWireBody	= 2,
        swMinimumBody	= 3,
        swGeneralBody	= 4,
        swEmptyBody	= 5,
        swMeshBody	= 6,
        swGraphicsBody	= 7
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("6D9C8B56-91ED-49DE-B061-5DFC2BBA2ED9") swSetValueInConfiguration_e
    {
        swSetValue_NoConfiguration	= -1,
        swSetValue_UseCurrentSetting	= 0,
        swSetValue_InThisConfiguration	= 1,
        swSetValue_InAllConfigurations	= 2,
        swSetValue_InSpecificConfigurations	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("B995F23D-32D3-46B2-902D-F840CE143210") swSetValueReturnStatus_e
    {
        swSetValue_Successful	= 0,
        swSetValue_Failure	= 1,
        swSetValue_InvalidValue	= 2,
        swSetValue_DrivenDimension	= 3,
        swSetValue_ModelNotLoaded	= 4,
        swSetValue_FrozenFeatureOwner	= 5
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("346EAE97-207C-4242-B684-90DC4BDB148E") swSMBendState_e
    {
        swSMBendStateNone	= 0,
        swSMBendStateSharps	= 1,
        swSMBendStateFlattened	= 2,
        swSMBendStateFolded	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("6CE4987B-522F-4A46-8CBF-1FC48DE4A1A3") swSMCommandStatus_e
    {
        swSMErrorNone	= 0,
        swSMErrorUnknown	= 1,
        swSMErrorNotAPart	= 2,
        swSMErrorNotASheetMetalPart	= 3,
        swSMErrorInvalidBendState	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("3A2C4798-1586-4998-B2DD-B0CA8563CB1F") swFeatureError_e
    {
        swFeatureErrorNone	= 0,
        swFeatureErrorUnknown	= 1,
        swFeatureErrorFilletNoLoop	= 10,
        swFeatureErrorFilletNoFace	= 11,
        swFeatureErrorFilletInvalidRadius	= 12,
        swFeatureErrorFilletNoEdge	= 13,
        swFeatureErrorFilletModelGeometry	= 14,
        swFeatureErrorFilletRadiusTooSmall	= 15,
        swFeatureErrorFilletCannotExtend	= 16,
        swFeatureErrorFilletRadiusEliminateElement	= 17,
        swFeatureErrorFilletRadiusTooBig	= 18,
        swFeatureErrorFilletRadiusTooBig2	= 19,
        swFeatureErrorExtrusionDisjoint	= 30,
        swFeatureErrorExtrusionNoEndFound	= 31,
        swFeatureErrorExtrusionBadGeometricConditions	= 32,
        swFeatureErrorExtrusionCutContourOpenAndClosed	= 33,
        swFeatureErrorExtrusionCutContourInvalid	= 34,
        swFeatureErrorExtrusionOpenCutContourInvalid	= 35,
        swFeatureErrorExtrusionBossContourOpenAndClosed	= 36,
        swFeatureErrorExtrusionBossContourInvalid	= 37,
        swFeatureErrorMateInvalidEdge	= 38,
        swFeatureErrorMateInvalidFace	= 39,
        swFeatureErrorMateFailedCreatingSurface	= 40,
        swFeatureErrorMateInvalidEntity	= 41,
        swFeatureErrorMateUnknownTangent	= 42,
        swFeatureErrorMateDanglingGeometry	= 43,
        swFeatureErrorMateEntityNotLinear	= 44,
        swFeatureErrorMateEntityFailed	= 45,
        swFeatureErrorMateOverdefined	= 46,
        swFeatureErrorMateIlldefined	= 47,
        swFeatureErrorMateBroken	= 48,
        swFeatureErrorFeatureDeprecated	= 49,
        swFeatureErrorFeatureObsolete	= 50,
        swSketchErrorExtRefFail	= 51,
        swFeatureErrorPartialEdgeFilletNoIntersection	= 52,
        swFeatureErrorPartialEdgeFilletUpdateFailed	= 53,
        swFeatureErrorPartialEdgeFilletNoPropagateEdges	= 54,
        swFeatureErrorPartialEdgeFilletNoStartEdge	= 55,
        swFeatureErrorPartialEdgeFilletNoEndEdge	= 56,
        swFeatureErrorPartialEdgeFilletNoMainEdge	= 57,
        swFeatureErrorPartialEdgeFilletOffsetTooBig	= 58,
        swFeatureErrorPartialEdgeFilletNoReferenceEntity	= 59,
        swFeatureErrorPartialEdgeFilletTooManyRefEntities	= 60,
        swFeatureErrorPartialEdgeFilletInvalidOffsetValue	= 61,
        swFeatureErrorPartialEdgeFilletCrossOverEndCondition	= 62,
        swFeatureErrorPartialEdgeFilletMissingReferenceEntity	= 63,
        swFeatureErrorPartialEdgeFilletInvalidReferenceEntity	= 64,
        swFeatureErrorPartialEdgeFilletNotSupported	= 65,
        swFeatureErrorPartialEdgeFilletNotSupportedForClosedLoop	= 66,
        swFeatureErrorPartialEdgeFilletMultiProjectionPoint	= 67,
        swFeatureErrorPartialEdgeFilletFailedToRepair	= 68,
        swFeatureErrorSweptFlangeInvalidProfileOrPath	= 69,
        swFeatureErrorSweptFlangeSelfIntersectingGeometry	= 70
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("012B185D-A0CF-45F7-A1F7-E651EACE326A") swSaveAsVersion_e
    {
        swSaveAsCurrentVersion	= 0,
        swSaveAsSW98plus	= 1,
        swSaveAsFormatProE	= 2,
        swSaveAsStandardDrawing	= 3,
        swSaveAsDetachedDrawing	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("D652391E-E3AA-4742-9993-58543D22E5D6") swArcLengthLeaderType_e
    {
        swArcLengthLeaderParallel	= 1,
        swArcLengthLeaderRadial	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("B7D8DDC4-5070-4A2E-A420-CF955A985C9C") swArcEndCondition_e
    {
        swArcEndConditionNone	= 0,
        swArcEndConditionCenter	= 1,
        swArcEndConditionMin	= 2,
        swArcEndConditionMax	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("D2DDA52F-5472-41A6-9EFD-88BD5A1DC337") swDestroyNotifyType_e
    {
        swDestroyNotifyDestroy	= 0,
        swDestroyNotifyHidden	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("C1458726-C592-4374-8A4D-2B7D26283093") swSketchSegments_e
    {
        swSketchLINE	= 0,
        swSketchARC	= 1,
        swSketchELLIPSE	= 2,
        swSketchSPLINE	= 3,
        swSketchTEXT	= 4,
        swSketchPARABOLA	= 5
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("52A7F449-36B4-4558-8C12-9C4411A90D5B") swPipingPenetrationStatus_e
    {
        swPenetrationSucceeded	= 0,
        swPenetrationFailed	= 1,
        swPenetrationFailedPipeTooWide	= 2,
        swPenetrationFailedDllNotLoaded	= 3,
        swPenetrationFailedNoSelection	= 4,
        swPenetrationFailedNotRouting	= 5,
        swPenetrationFailedBadSelection	= 6,
        swPenetrationFailedBadFitting	= 7,
        swPenetrationFailedAlreadyPenetrating	= 8,
        swPenetrationFailedMultiBody	= 9
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("11EF5D72-006D-412D-B5DD-B8E706032D59") swNotifyEntityType_e
    {
        swNotifyConfiguration	= 1,
        swNotifyComponent	= 2,
        swNotifyFeature	= 3,
        swNotifyDerivedConfiguration	= 4,
        swNotifyDrawingSheet	= 5,
        swNotifyDrawingView	= 6,
        swNotifyBlockDef	= 7,
        swNotifyComponentInternal	= 8
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("CFB53C67-434F-49DA-BCAC-507C9E428D28") swRayPtsOpts_e
    {
        swRayPtsOptsNORMALS	= 0x1,
        swRayPtsOptsTOPOLS	= 0x2,
        swRayPtsOptsENTRY_EXIT	= 0x4,
        swRayPtsOptsUNBLOCK	= 0x8
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("896BB66F-ED47-472D-A997-A3D76D75A794") swRayPtsResults_e
    {
        swRayPtsResultsUnknown	= 0,
        swRayPtsResultsFACE	= 0x1,
        swRayPtsResultsSILHOUETTE	= 0x2,
        swRayPtsResultsEDGE	= 0x4,
        swRayPtsResultsVERTEX	= 0x8,
        swRayPtsResultsENTER	= 0x10,
        swRayPtsResultsEXIT	= 0x20
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("7AA4A4BB-B6DF-41D4-8C26-C126FDBF2B4F") swWeldSymbolTextTypes_e
    {
        swWeldLeftTextAbove	= 1,
        swWeldSymbolTextAbove	= 2,
        swWeldRightTextAbove	= 3,
        swWeldStaggerTextAbove	= 4,
        swWeldLeftTextBelow	= 5,
        swWeldSymbolTextBelow	= 6,
        swWeldRightTextBelow	= 7,
        swWeldStaggerTextBelow	= 8,
        swWeldProcessText	= 9
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("011BB253-8E79-4BE5-9B83-C915DC8E9F95") swWeldSymbolContourTypes_e
    {
        swWeldContourNone	= 1,
        swWeldContourFlat	= 2,
        swWeldContourConvex	= 3,
        swWeldContourConcave	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("21C8436C-3208-4E38-BBE5-5CA728519B05") swWeldSymbolSymmetric_e
    {
        swWeldSymmetric	= 1,
        swWeldDashedLineOnTop	= 2,
        swWeldDashedLineOnBottom	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("5E07C437-9D8A-4AEF-B762-8D8ECCD9E00F") swWeldSymbolField_e
    {
        swFieldWeldNone	= 1,
        swFieldWeldUp	= 2,
        swFieldWeldDown	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("2E496EF8-E31D-49EB-BEDD-36998316865C") swDisplayDimensionLeaderText_e
    {
        swSolidLeaderAlignedText	= 1,
        swBrokenLeaderHorizontalText	= 2,
        swBrokenLeaderAlignedText	= 3,
        swSolidLeaderHorizontalText	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("10F58840-632B-4A7C-8E24-961452DAF9FB") swLineStyles_e
    {
        swLineCONTINUOUS	= 0,
        swLineHIDDEN	= 1,
        swLinePHANTOM	= 2,
        swLineCHAIN	= 3,
        swLineCENTER	= 4,
        swLineSTITCH	= 5,
        swLineCHAINTHICK	= 6,
        swLineDEFAULT	= 7
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("B02EA77B-27E7-4BC6-87BD-25895BC35783") swDrawingViewTypes_e
    {
        swDrawingSheet	= 1,
        swDrawingSectionView	= 2,
        swDrawingDetailView	= 3,
        swDrawingProjectedView	= 4,
        swDrawingAuxiliaryView	= 5,
        swDrawingStandardView	= 6,
        swDrawingNamedView	= 7,
        swDrawingRelativeView	= 8,
        swDrawingDetachedView	= 9,
        swDrawingAlternatePositionView	= 10
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("3A4FDFEC-E351-465D-AD7E-D7966FF148DA") swConstrainedCornerAction_e
    {
        swConstrainedCornerInteract	= 0,
        swConstrainedCornerKeepGeometry	= 1,
        swConstrainedCornerDeleteGeometry	= 2,
        swConstrainedCornerStopProcessing	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("37E77752-3B9D-44DA-A8B7-24357A2ED88A") swMouseDragMode_e
    {
        swTranslateAssemblyComponent	= 1,
        swRotateAssemblyComponentAboutCenter	= 2,
        swRotateAssemblyComponentAboutAxis	= 3,
        swAssemblySmartMates	= 4,
        swRotateView	= 5,
        swTranslateView	= 6,
        swZoomView	= 7,
        swZoomToAreaOfView	= 8,
        swInsertDimension	= 9,
        swRollView	= 10,
        swTurnView	= 11
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("B5D2154F-9765-4588-8758-70AA7EA259A3") swDatumTargetAreaShape_e
    {
        swDatumTargetAreaNone	= 0,
        swDatumTargetAreaPoint	= 1,
        swDatumTargetAreaCircle	= 2,
        swDatumTargetAreaRectangle	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("BD625603-1B46-45AB-82F2-A8261EBC372C") swEditPartCommandStatus_e
    {
        swEditPartFailure	= -1,
        swEditPartAsmMustBeSaved	= -2,
        swEditPartCompMustBeSelected	= -3,
        swEditPartCompMustBeResolved	= -4,
        swEditPartCompMustHaveWriteAccess	= -5,
        swEditPartSuccessful	= 0,
        swEditPartCompNotPositioned	= 0x1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("8179D388-1B75-4DF2-A370-4825F025F92C") swAnnotationVisibilityState_e
    {
        swAnnotationVisibilityUnknown	= 0,
        swAnnotationVisible	= 1,
        swAnnotationHalfHidden	= 2,
        swAnnotationHidden	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("975DA90F-03AD-4CA9-AE44-46C2F060431C") swOutOfDateStatus_e
    {
        swUnknownState	= 0,
        swModelUpToDate	= 1,
        swModelOutOfDate	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("B5F3D5F3-81D1-4AB8-8ABF-7EAD0C4EAB05") swMenuIdentifiers_e
    {
        swFileMenu	= 0,
        swEditMenu	= 1,
        swViewMenu	= 2,
        swInsertMenu	= 3,
        swToolsMenu	= 4,
        swWindowMenu	= 5,
        swHelpMenu	= 6,
        swDeveloperToolsMenu	= 7,
        swViewToolbarsMenu	= 8
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("64939C45-598F-4DC3-9D99-907EEE5F2F4D") swScaleType_e
    {
        swScaleAboutCentroid	= 0,
        swScaleAboutOrigin	= 1,
        swScaleAboutCoordinateSystem	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("607F4DAA-0E5C-427E-A1D0-C4B8EEF92611") swCavityScaleType_e
    {
        swAboutCentroid	= 0,
        swAboutOrigin	= 1,
        swAboutMoldBaseOrigin	= 2,
        swAboutCoordinateSystem	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("35B9A0D6-757A-47A3-BC47-A020F8D58F27") swDetailingHalfSectionArrow_e
    {
        swDetailingHalfSectionArrow_AlternativeDisplay	= 0,
        swDetailingHalfSectionArrow_StandardDisplay	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("870BC7D1-D7F9-4B99-8377-043275FD213C") swFeatMgrPane_e
    {
        swFeatMgrPaneTop	= 0,
        swFeatMgrPaneBottom	= 1,
        swFeatMgrPaneTopHidden	= 2,
        swFeatMgrPaneBottomHidden	= 3,
        swFeatMgrPaneFlyout	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("455DE8A0-C27B-4010-BA6A-551686850A3A") swDetailingDualDimPosition_e
    {
        swDualDimensionsSideBySide	= 1,
        swDualDimensionsAboveAndBelow	= 2,
        swDualDimensionsOnRight	= 1,
        swDualDimensionsOnTop	= 2,
        swDualDimensionsOnLeft	= 3,
        swDualDimensionsOnBottom	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("B47AA95E-547C-444C-8A0F-C0AA015B2716") swDetailingDimTrailingZero_e
    {
        swDimSmartTrailingZeroes	= 0,
        swDimShowTrailingZeroes	= 1,
        swDimRemoveTrailingZeroes	= 2,
        swDimStandardTrailingZeroes	= 3,
        swDimRemoveOnlyOnZero	= 4,
        swDimSameAsSource	= 5,
        swDimSameAsDocumentDimension	= 6,
        swDimSameAsDocumentTolerance	= 7,
        swDimSameAsDimension	= 8
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("A468AAE4-DACD-49CB-9C28-9BA190893CF9") swDetailingToleranceTextSizing_e
    {
        swToleranceTextSizeUsingScaleValue	= 1,
        swToleranceTextSizeUsingHeightValue	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("68D774DF-49E2-415D-A6BB-1F65CCC920A7") swDetailingStandard_e
    {
        swDetailingStandardANSI	= 1,
        swDetailingStandardISO	= 2,
        swDetailingStandardDIN	= 3,
        swDetailingStandardJIS	= 4,
        swDetailingStandardBS	= 5,
        swDetailingStandardGOST	= 6,
        swDetailingStandardGB	= 7,
        swDetailingStandardUserDefined	= 8
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("6F2CBA9F-2688-4267-B878-D04D66459BE5") swDetailingNoteTextContent_e
    {
        swDetailingNoteTextCustom	= 1,
        swDetailingNoteTextItemNumber	= 2,
        swDetailingNoteTextQuantity	= 3,
        swDetailingNoteTextCustomProperty	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("509CBB89-3CF3-47DF-A9D2-0D9E5CB1E9D4") swDetailingVirtualSharp_e
    {
        swDetailingVirtualSharpNone	= 0,
        swDetailingVirtualSharpPlus	= 1,
        swDetailingVirtualSharpStar	= 2,
        swDetailingVirtualSharpWitness	= 3,
        swDetailingVirtualSharpDot	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("F69AD815-224C-4478-BB91-C90F70F596CA") swDimensionType_e
    {
        swDimensionTypeUnknown	= 0,
        swOrdinateDimension	= 1,
        swLinearDimension	= 2,
        swAngularDimension	= 3,
        swArcLengthDimension	= 4,
        swRadialDimension	= 5,
        swDiameterDimension	= 6,
        swHorOrdinateDimension	= 7,
        swVertOrdinateDimension	= 8,
        swZAxisDimension	= 9,
        swChamferDimension	= 10,
        swHorLinearDimension	= 11,
        swVertLinearDimension	= 12,
        swScalarDimension	= 13,
        swRadialLinearDimension	= 14,
        swDiametricLinearDimension	= 15,
        swAngularOrdinateDimension	= 16
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("F8CFE0B3-7BF7-4F0B-B982-6A645A0757C9") swImageQualityShaded_e
    {
        swShadedImageQualityCoarse	= 1,
        swShadedImageQualityFine	= 2,
        swShadedImageQualityCustom	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("0812C124-7B50-488D-9652-EEDA818F1B93") swImageQualityWireframe_e
    {
        swWireframeImageQualityOptimal	= 1,
        swWireframeImageQualityCustom	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("240D4828-4E1E-4B0E-B092-19805DA82242") swLoadDetachedModelRules_e
    {
        swLoadDetachedModelPrompt	= 0,
        swLoadDetachedModelAuto	= 1,
        swDoNotLoadDetachedModel	= 2,
        swLoadDetailedModel	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("1E980D90-F740-4255-A971-222134FF9C6C") swDisplayTangentEdges_e
    {
        swTangentEdgesHidden	= 0,
        swTangentEdgesVisibleAndFonted	= 1,
        swTangentEdgesVisible	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("1D8DF5E1-DA30-4B2B-9CC1-0EADBBB6139D") swSTLQuality_e
    {
        swSTLQuality_Coarse	= 1,
        swSTLQuality_Fine	= 2,
        swSTLQuality_Custom	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("5F5D3295-06BF-4FC1-8724-F707A3577EE2") swDrawingProjectionType_e
    {
        swDrawing1stAngleProjection	= 1,
        swDrawing3rdAngleProjection	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("460BBE00-847F-469E-9FA1-602CFD26CD70") swPromptAlwaysNever_e
    {
        swResponsePrompt	= 0,
        swResponseAlways	= 1,
        swResponseNever	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("B8401BC8-023D-4F63-B8ED-BC998A4D60B1") swIGESRepresentation_e
    {
        swIGES_TRMSRF	= 0,
        swIGES_CURVES	= 1,
        swIGES_TRMSRFANDCURVES	= 2,
        swIGES_BREP	= 3,
        swIGES_BOUNDEDSRF	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("2F5C418E-1BD4-4E48-93DD-14C9659D2C71") swIGESPreferredSystem_e
    {
        swIGES_STANDARD	= 0,
        swIGES_NURBS	= 1,
        swIGES_ANSYS	= 2,
        swIGES_COSMOS	= 3,
        swIGES_MASCAM	= 4,
        swIGES_SURFCAM	= 5,
        swIGES_SMARTCAM	= 6,
        swIGES_TEKSOFT	= 7,
        swIGES_ALPHACAM	= 8,
        swIGES_MULTICAM	= 9,
        swIGES_ALIAS	= 10
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("08600588-4DAC-402E-9DDB-934F128423A1") swIGESCurveRepresentation_e
    {
        swIGES_CURVES_BSPLINE	= 0,
        swIGES_CURVES_PSPLINE	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("CCB930F4-D194-4C29-BD6A-E2FCE43DFF8A") swConstrainedStatus_e
    {
        swUnknownConstraint	= 1,
        swUnderConstrained	= 2,
        swFullyConstrained	= 3,
        swOverConstrained	= 4,
        swNoSolution	= 5,
        swInvalidSolution	= 6,
        swAutosolveOff	= 7
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("20867024-8F23-466F-BEC3-F2879D5B8BEF") swFeatureSuppressionAction_e
    {
        swSuppressFeature	= 0,
        swUnSuppressFeature	= 1,
        swUnSuppressDependent	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("21CBB25B-1CFA-4D80-ACDA-0165406AC90D") swHlrQuality_e
    {
        swPreciseHlr	= 0,
        swFastHlr	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("B75A913C-9E5D-41D2-9D00-2F091C094BFB") swSketchEntityType_e
    {
        swSketchEntityPoint	= 1,
        swSketchEntityLine	= 2,
        swSketchEntityArc	= 3,
        swSketchEntityEllipse	= 4,
        swSketchEntityParabola	= 5,
        swSketchEntitySpline	= 6
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("F5337B8B-D3AD-4468-A6DE-30EEF84D029A") swWzdGeneralHoleTypes_e
    {
        swWzdCounterBore	= 0,
        swWzdCounterSink	= 1,
        swWzdHole	= 2,
        swWzdPipeTap	= 3,
        swWzdTap	= 4,
        swWzdLegacy	= 5,
        swWzdCounterBoreSlot	= 6,
        swWzdCounterSinkSlot	= 7,
        swWzdHoleSlot	= 8
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("3C70C53C-114F-46E8-8CA3-3820CFFE1D9E") swWzdHoleTypes_e
    {
        swSimple	= 0,
        swTapered	= 1,
        swCounterBored	= 2,
        swCounterSunk	= 3,
        swCounterDrilled	= 4,
        swSimpleDrilled	= 5,
        swTaperedDrilled	= 6,
        swCounterBoredDrilled	= 7,
        swCounterSunkDrilled	= 8,
        swCounterDrilledDrilled	= 9,
        swCounterBoreBlind	= 10,
        swCounterBoreBlindCounterSinkMiddle	= 11,
        swCounterBoreBlindCounterSinkTop	= 12,
        swCounterBoreBlindCounterSinkTopmiddle	= 13,
        swCounterBoreThru	= 14,
        swCounterBoreThruCounterSinkBottom	= 15,
        swCounterBoreThruCounterSinkMiddle	= 16,
        swCounterBoreThruCounterSinkMiddleBottom	= 17,
        swCounterBoreThruCounterSinkTop	= 18,
        swCounterBoreThruCounterSinkTopBottom	= 19,
        swCounterBoreThruCounterSinkTopMiddle	= 20,
        swCounterBoreThruCounterSinkTopMiddleBottom	= 21,
        swHoleBlind	= 22,
        swHoleBlindCounterSinkTop	= 23,
        swCounterSinkBlind	= 24,
        swHoleThru	= 25,
        swHoleThruCounterSinkBottom	= 26,
        swHoleThruCounterSinkTop	= 27,
        swHoleThruCounterSinkTopBottom	= 28,
        swCounterSinkThru	= 29,
        swCounterSinkThruCounterSinkBottom	= 30,
        swTapBlind	= 31,
        swTapBlindCounterSinkTop	= 32,
        swTapThru	= 33,
        swTapThruCounterSinkBottom	= 34,
        swTapThruCounterSinkTop	= 35,
        swTapThruCounterSinkTopBottom	= 36,
        swPipeTapBlind	= 37,
        swPipeTapBlindCounterSinkTop	= 38,
        swPipeTapThru	= 39,
        swPipeTapThruCounterSinkBottom	= 40,
        swPipeTapThruCounterSinkTop	= 41,
        swPipeTapThruCounterSinkTopBottom	= 42,
        swCounterSinkBlindWithoutHeadClearance	= 43,
        swCounterSinkThruWithoutHeadClearance	= 44,
        swCounterSinkThruCounterSinkBottomWithoutHeadClearance	= 45,
        swTapBlindCosmeticThread	= 46,
        swTapBlindCosmeticThreadCounterSinkTop	= 47,
        swTapThruCosmeticThread	= 48,
        swTapThruCosmeticThreadCounterSinkTop	= 49,
        swTapThruCosmeticThreadCounterSinkBottom	= 50,
        swTapThruCosmeticThreadCounterSinkTopBottom	= 51,
        swTapThruThreadThru	= 52,
        swTapThruThreadThruCounterSinkTop	= 53,
        swTapThruThreadThruCounterSinkBottom	= 54,
        swTapThruThreadThruCountersinkTopBottom	= 55,
        swTapBlindRemoveThread	= 56,
        swCounterBoreSlotBlind	= 57,
        swCounterBoreSlotBlindCounterSinkMiddle	= 58,
        swCounterBoreSlotBlindCounterSinkTop	= 59,
        swCounterBoreSlotBlindCounterSinkTopMiddle	= 60,
        swCounterBoreSlotThru	= 61,
        swCounterBoreSlotThruCounterSinkBottom	= 62,
        swCounterBoreSlotThruCounterSinkMiddle	= 63,
        swCounterBoreSlotThruCounterSinkMiddleBottom	= 64,
        swCounterBoreSlotThruCounterSinkTop	= 65,
        swCounterBoreSlotThruCounterSinkTopBottom	= 66,
        swCounterBoreSlotThruCounterSinkTopMiddle	= 67,
        swCounterBoreSlotThruCounterSinkTopMiddleBottom	= 68,
        swSlotBlind	= 69,
        swSlotBlindCounterSinkTop	= 70,
        swCounterSinkSlotBlind	= 71,
        swSlotThru	= 72,
        swSlotThruCounterSinkBottom	= 73,
        swSlotThruCounterSinkTop	= 74,
        swSlotThruCounterSinkTopBottom	= 75,
        swCounterSinkSlotThru	= 76,
        swCounterSinkSlotThruCounterSinkBottom	= 77,
        swCounterSinkSlotBlindWithoutHeadClearance	= 78,
        swCounterSinkSlotThruWithoutHeadClearance	= 79,
        swCounterSinkSlotThruCounterSinkBottomWithoutHeadClearance	= 90
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("3A20CD0F-36B7-42c0-BFED-9505718410A7") swWzdHoleAuxiliaryConstants_e
    {
        NUM_HOLE_GENERIC_TYPES	= 9,
        NUM_HOLE_TYPES	= 91,
        NUM_HOLE_STANDARD_TYPES	= 249
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("843BA4F0-0851-4D94-A3F1-3FFF59E5016B") swWzdHoleStandards_e
    {
        swStandardAnsiInch	= 0,
        swStandardAnsiMetric	= 1,
        swStandardBSI	= 2,
        swStandardDME	= 3,
        swStandardDIN	= 4,
        swStandardHascoMetric	= 5,
        swStandardHelicoilInch	= 6,
        swStandardHelicoilMetric	= 7,
        swStandardISO	= 8,
        swStandardJIS	= 9,
        swStandardPCS	= 10,
        swStandardProgressive	= 11,
        swStandardSuperior	= 12,
        swStandardGB	= 13,
        swStandardKS	= 14,
        swStandardIS	= 15,
        swStandardAS	= 16,
        swStandardPEMInch	= 17,
        swStandardPEMMetric	= 18
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("45CE18D8-0881-4B90-BC1F-2017FF5E59A4") swWzdHoleStandardFastenerTypes_e
    {
        swStandardAnsiInchBinding	= 0,
        swStandardAnsiInchButton	= 1,
        swStandardAnsiInchFillister	= 2,
        swStandardAnsiInchHexBolt	= 3,
        swStandardAnsiInchHexBoltFinished	= 4,
        swStandardAnsiInchHexBoltHeavy	= 5,
        swStandardAnsiInchHexScrew	= 6,
        swStandardAnsiInchHexWasherScrew	= 7,
        swStandardAnsiInchPan	= 8,
        swStandardAnsiInchSocketCapScrew	= 9,
        swStandardAnsiInchSocketShoulderScrew	= 10,
        swStandardAnsiInchSquare	= 11,
        swStandardAnsiInchTruss	= 12,
        swStandardAnsiInchFlatSocket82	= 13,
        swStandardAnsiInchFlatHead100	= 14,
        swStandardAnsiInchFlatHead82	= 15,
        swStandardAnsiInchOval	= 16,
        swStandardAnsiInchHcoilTapDrills	= 17,
        swStandardAnsiInchAllDrillSizes	= 18,
        swStandardAnsiInchFractionalDrillSizes	= 19,
        swStandardAnsiInchLetterDrillSizes	= 20,
        swStandardAnsiInchPipeTapDrills	= 21,
        swStandardAnsiInchScrewClearances	= 22,
        swStandardAnsiInchTapDrills	= 23,
        swStandardAnsiInchNumberDrillSizes	= 24,
        swStandardAnsiInchTaperedPipeTap	= 25,
        swStandardAnsiInchBottomingTappedHole	= 26,
        swStandardAnsiInchTappedHole	= 27,
        swStandardAnsiMetricButton	= 28,
        swStandardAnsiMetricHexBolt	= 29,
        swStandardAnsiMetricHexCapScrew	= 30,
        swStandardAnsiMetricHexScrewFormed	= 31,
        swStandardAnsiMetricPan	= 32,
        swStandardAnsiMetricSocketHeadCapScrew	= 33,
        swStandardAnsiMetricSocketShoulderScrew	= 34,
        swStandardAnsiMetricFlatSocket82	= 35,
        swStandardAnsiMetricFlatHead82	= 36,
        swStandardAnsiMetricOval	= 37,
        swStandardAnsiMetricHcoilTapDrills	= 38,
        swStandardAnsiMetricDrillSizes	= 39,
        swStandardAnsiMetricScrewClearances	= 40,
        swStandardAnsiMetricTapDrills	= 41,
        swStandardAnsiMetricBottomingTappedHole	= 42,
        swStandardAnsiMetricTappedHole	= 43,
        swStandardBSICheese	= 44,
        swStandardBSIHexBolt	= 45,
        swStandardBSIHexCapScrew	= 46,
        swStandardBSIHexMachineScrew	= 47,
        swStandardBSIPanHead	= 48,
        swStandardBSISocketCapScrew	= 49,
        swStandardBSIFlatSocketCap	= 50,
        swStandardBSIFlatHead	= 51,
        swStandardBSIOvalHead	= 52,
        swStandardBSIHcoilTapDrills	= 53,
        swStandardBSIDrillSizes	= 54,
        swStandardBSIScrewClearances	= 55,
        swStandardBSITapDrills	= 56,
        swStandardBSITappedHoleBottoming	= 57,
        swStandardBSITappedHole	= 58,
        swStandardBSITaperedPipeTap	= 59,
        swStandardDINHeavyHexBolt	= 60,
        swStandardDINHexFlangeBolt	= 61,
        swStandardDINCheeseHead	= 62,
        swStandardDINHexBolt	= 63,
        swStandardDINHexCapScrew	= 64,
        swStandardDINHexMachineScrew	= 65,
        swStandardDINPan	= 66,
        swStandardDINSocketHeadCap	= 67,
        swStandardDINSocketCTSKFlatHead	= 68,
        swStandardDINCTSKFlatHead	= 69,
        swStandardDINCTSKRaisedHead	= 70,
        swStandardDINHcoilTapDrills	= 71,
        swStandardDINDrillSizes	= 72,
        swStandardDINScrewClearances	= 73,
        swStandardDINTapDrills	= 74,
        swStandardDINTappedHoleBottoming	= 75,
        swStandardDINTappedHole	= 76,
        swStandardDINTaperedPipeTap	= 77,
        swStandardDMECCorePins	= 78,
        swStandardDMECXCorePins	= 79,
        swStandardDMETHXEjectorPins	= 80,
        swStandardDMEStandardLeaderPins	= 81,
        swStandardDMEReturnPins	= 82,
        swStandardDMESocketCapScrew	= 83,
        swStandardDMESupportPillarSHCS	= 84,
        swStandardDMESpruPullerPins	= 85,
        swStandardDMEStripperBolt	= 86,
        swStandardDMEFlatSocket82	= 87,
        swStandardDMEFlatHead100	= 88,
        swStandardDMEFlatHead82	= 89,
        swStandardDMEOval	= 90,
        swStandardDMESupportPillarClearance	= 91,
        swStandardDMEFractionalDrillSizes	= 92,
        swStandardDMEHcoilTapDrills	= 93,
        swStandardDMEAllDrillSizes	= 94,
        swStandardDMELetterDrillSizes	= 95,
        swStandardDMENumberDrillSizes	= 96,
        swStandardDMEPipeTapDrills	= 97,
        swStandardDMEScrewClearances	= 98,
        swStandardDMECCorePinClearances	= 99,
        swStandardDMECXCorePinClearances	= 100,
        swStandardDMETHXEjectorPinClearances	= 101,
        swStandardDMELeaderPinClearances	= 102,
        swStandardDMEReturnPinClearances	= 103,
        swStandardDMESpruPullerPinClearances	= 104,
        swStandardDMETapDrills	= 105,
        swStandardDMEBottomingTappedHole	= 106,
        swStandardDMETappedHole	= 107,
        swStandardDMETaperedPipeTap	= 108,
        swStandardHascoMetricCCorePins	= 109,
        swStandardHascoMetricGuideBushings	= 110,
        swStandardHascoMetricGuidePillars	= 111,
        swStandardHascoMetricLocatingGuideBushings	= 112,
        swStandardHascoMetricLocatingGuidePillars	= 113,
        swStandardHascoMetricSocketCapScrew	= 114,
        swStandardHascoMetricShoulderScrew	= 115,
        swStandardHascoMetricCTSKFlatHead	= 116,
        swStandardHascoMetricDrillSizes	= 117,
        swStandardHascoMetricScrewClearances	= 118,
        swStandardHascoMetricCorePinClearances	= 119,
        swStandardHascoMetricCenteringSleeve	= 120,
        swStandardHascoMetricEjectorRodClearances	= 121,
        swStandardHascoMetricBottomingTappedHole	= 122,
        swStandardHascoMetricTappedHole	= 123,
        swStandardHcoilInchInsert10Dia	= 124,
        swStandardHcoilInchInsert15Dia	= 125,
        swStandardHcoilInchInsert20Dia	= 126,
        swStandardHcoilInchInsert25Dia	= 127,
        swStandardHcoilInchInsert30Dia	= 128,
        swStandardHcoilMetricInsert10Dia	= 129,
        swStandardHcoilMetricInsert15Dia	= 130,
        swStandardHcoilMetricInsert20Dia	= 131,
        swStandardHcoilMetricInsert25Dia	= 132,
        swStandardHcoilMetricInsert30Dia	= 133,
        swStandardISOCheeseHead	= 134,
        swStandardISOHexBolt	= 135,
        swStandardISOHexCapScrew	= 136,
        swStandardISOHexMachineScrew	= 137,
        swStandardISOPan	= 138,
        swStandardISOSocketHeadCap	= 139,
        swStandardISOSocketCTSKFlatHead	= 140,
        swStandardISOCTSKFlatHead	= 141,
        swStandardISOCTSKRaisedHead	= 142,
        swStandardISODrillSizes	= 143,
        swStandardISOScrewClearances	= 144,
        swStandardISOTapDrills	= 145,
        swStandardISOTappedHoleBottoming	= 146,
        swStandardISOTappedHole	= 147,
        swStandardISOTaperedPipeTap	= 148,
        swStandardJISCheeseHead	= 149,
        swStandardJISFillisterHead	= 150,
        swStandardJISButton	= 151,
        swStandardJISHexBolt	= 152,
        swStandardJISHexCapScrew	= 153,
        swStandardJISHexMachineScrew	= 154,
        swStandardJISPan	= 155,
        swStandardJISSocketHeadCap	= 156,
        swStandardJISSocketShoulderScrew	= 157,
        swStandardJISFlatCTSKHead	= 158,
        swStandardJISRaisedCTSKHead	= 159,
        swStandardJISDrillSizes	= 160,
        swStandardJISScrewClearances	= 161,
        swStandardJISTapDrills	= 162,
        swStandardJISTappedHoleBottoming	= 163,
        swStandardJISTappedHole	= 164,
        swStandardJISTaperedPipeTap	= 165,
        swStandardPCSReturnPins	= 166,
        swStandardPCSCorePins	= 167,
        swStandardPCSEjectorPins	= 168,
        swStandardPCSStandardLeaderPins	= 169,
        swStandardPCSSocketCapScrew	= 170,
        swStandardPCSStripperBolt	= 171,
        swStandardPCSSupportPillarSHCS	= 172,
        swStandardPCSFlatHead100	= 173,
        swStandardPCSFlatHead82	= 174,
        swStandardPCSOval	= 175,
        swStandardPCSFlatSocket82	= 176,
        swStandardPCSHcoilTapDrills	= 177,
        swStandardPCSFractionalDrillSizes	= 178,
        swStandardPCSNumberDrillSizes	= 179,
        swStandardPCSPipeTapDrills	= 180,
        swStandardPCSScrewClearances	= 181,
        swStandardPCSAllDrillSizes	= 182,
        swStandardPCSEjectorPinClearances	= 183,
        swStandardPCSLetterDrillSizes	= 184,
        swStandardPCSSupportPillarClearances	= 185,
        swStandardPCSCorePinClearances	= 186,
        swStandardPCSLeaderPinClearances	= 187,
        swStandardPCSReturnPinClearances	= 188,
        swStandardPCSTapDrills	= 189,
        swStandardPCSBottomingTappedHole	= 190,
        swStandardPCSTappedHole	= 191,
        swStandardPCSTaperedPipeTap	= 192,
        swStandardProgressiveSocketCapScrew	= 193,
        swStandardProgressiveReturnPins	= 194,
        swStandardProgressiveCorePins	= 195,
        swStandardProgressiveEjectorPins	= 196,
        swStandardProgressiveSpruePullerPins	= 197,
        swStandardProgressiveSupportPillarSHCS	= 198,
        swStandardProgressiveStripperBolt	= 199,
        swStandardProgressiveStandardLeaderPins	= 200,
        swStandardProgressiveFlatSocket82	= 201,
        swStandardProgressiveOval	= 202,
        swStandardProgressiveFlatHead100	= 203,
        swStandardProgressiveFlatHead82	= 204,
        swStandardProgressiveHcoilTapDrills	= 205,
        swStandardProgressiveFractionalDrillSizes	= 206,
        swStandardProgressiveNumberDrillSizes	= 207,
        swStandardProgressivePipeTapDrills	= 208,
        swStandardProgressiveScrewClearances	= 209,
        swStandardProgressiveAllDrillSizes	= 210,
        swStandardProgressiveEjectorPinClearances	= 211,
        swStandardProgressiveLetterDrillSizes	= 212,
        swStandardProgressiveSupportPillarClearances	= 213,
        swStandardProgressiveCorePinClearances	= 214,
        swStandardProgressiveLeaderPinClearances	= 215,
        swStandardProgressiveSpruePullerPinClearances	= 216,
        swStandardProgressiveReturnPinClearances	= 217,
        swStandardProgressiveTapDrills	= 218,
        swStandardProgressiveTappedHole	= 219,
        swStandardProgressiveBottomingTappedHole	= 220,
        swStandardProgressiveTaperedPipeTap	= 221,
        swStandardSuperiorReturnPins	= 222,
        swStandardSuperiorEjectorPins	= 223,
        swStandardSuperiorSpruePullerPins	= 224,
        swStandardSuperiorSupportPillarSHCS	= 225,
        swStandardSuperiorStripperBolt	= 226,
        swStandardSuperiorSocketCapScrew	= 227,
        swStandardSuperiorStandardLeaderPins	= 228,
        swStandardSuperiorFlatHead100	= 229,
        swStandardSuperiorFlatHead82	= 230,
        swStandardSuperiorOval	= 231,
        swStandardSuperiorFlatSocket82	= 232,
        swStandardSuperiorHcoilTapDrills	= 233,
        swStandardSuperiorFractionalDrillSizes	= 234,
        swStandardSuperiorNumberDrillSizes	= 235,
        swStandardSuperiorPipeTapDrills	= 236,
        swStandardSuperiorScrewClearances	= 237,
        swStandardSuperiorAllDrillSizes	= 238,
        swStandardSuperiorEjectorPinClearances	= 239,
        swStandardSuperiorLetterDrillSizes	= 240,
        swStandardSuperiorSupportPillarClearances	= 241,
        swStandardSuperiorLeaderPinClearances	= 242,
        swStandardSuperiorSpruePullerPinClearances	= 243,
        swStandardSuperiorReturnPinClearances	= 244,
        swStandardSuperiorTapDrills	= 245,
        swStandardSuperiorTappedHole	= 246,
        swStandardSuperiorBottomingTappedHole	= 247,
        swStandardSuperiorTappedHole2	= 247,
        swStandardSuperiorBottomingTappedHole2	= 249,
        swStandardSuperiorTaperedPipeTap	= 248,
        swStandardDINHexSocketHead6912	= 249,
        swStandardDINStraightPipeTappedHole	= 250,
        swStandardDINConduitTappedHole	= 351,
        swStandardDINEnsatTappedHoleforAL	= 352,
        swStandardDINEnsatTappedHoleforCU	= 353,
        swStandardDINEnsatTappedHoleforST	= 354,
        swStandardGBDrillSizes	= 355,
        swStandardGBScrewClearances	= 356,
        swStandardGBTapDrills	= 357,
        swStandardGBTappedHoleBottoming	= 358,
        swStandardGBTappedHole	= 359,
        swStandardGBTaperedPipeTap	= 360,
        swStandardGBHexagonSocketHeadCapScrews	= 361,
        swStandardGBHexagonLobularSocketCountersunkHeadScrews	= 362,
        swStandardGBHexagonLobularSocketRaisedCountersunkHeadScrews	= 363,
        swStandardGBHexagonLobularSocketHeadCapScrewsPropertyClass	= 364,
        swStandardGBSlottedRaisedCountersunkHeadScrews	= 365,
        swStandardGBSlottedCountersinkHeadWoodScrews	= 366,
        swStandardGBSlottedRaisedCountersunkHeadWoodScrews	= 367,
        swStandardGBCrossRecessedCountersunkHeadWoodScrews	= 368,
        swStandardGBCrossRecessedRaisedCountersunkHeadWoodScrews	= 369,
        swStandardGBSlottedCountersunkHeadTappingScrews	= 370,
        swStandardGBSlottedRaisedCountersunkHeadTappingScrews	= 371,
        swStandardGBCrossRecessedCountersunkHeadTappingScrews	= 372,
        swStandardGBCrossRecessedRaisedCountersunkHeadTappingScrews	= 373,
        swStandardGBSlottedCheeseHeadScrews	= 374,
        swStandardGBHexagonLobularSocketHeadCapScrewsPropertyClass4	= 375,
        swStandardGBHexagonHeadBoltsGB	= 376,
        swStandardGBHexagonHeadBoltsFullThreadProductGradeC	= 377,
        swStandardGBHexagonHeadBoltsFullThreadProductGradesAB	= 378,
        swStandardGBHexagonHeadBoltsProductGradeC	= 379,
        swStandardKSDrillSizes	= 450,
        swStandardKSScrewClearances	= 451,
        swStandardKSTapDrills	= 452,
        swStandardKSTaperedPipeTap	= 453,
        swStandardKSBottomingTappedHole	= 454,
        swStandardKSTappedHole	= 455,
        swStandardKSFlatCrossHeadScrew	= 456,
        swStandardKSRaisedCrossHeadScrew	= 457,
        swStandardKSSocketHeadCapScrew	= 458,
        swStandardKSHexHeadBoltA	= 459,
        swStandardKSHexHeadBoltB	= 460,
        swStandardKSHexHeadBoltC	= 461,
        swStandardKSCheeseSlottedHead	= 462,
        swStandardISDrillSizes	= 550,
        swStandardISScrewClearances	= 551,
        swStandardISTapDrills	= 552,
        swStandardISTaperedPipeTap	= 553,
        swStandardISBottomingTappedHole	= 554,
        swStandardISTappedHole	= 555,
        swStandardISCrossRecessFlatHeadScrew	= 556,
        swStandardISCrossRecessPanHeadScrew	= 557,
        swStandardISCrossRecessRaisedHeadScrew	= 558,
        swStandardISHexagonHeadBoltC	= 559,
        swStandardISHexagonHeadScrewA	= 560,
        swStandardISHexagonHeadScrewB	= 561,
        swStandardISHexagonHeadScrewC	= 562,
        swStandardISSlottedCheeseHeadScrew	= 563,
        swStandardISSocketHeadCapScrew	= 564,
        swStandardASDrillSizes	= 650,
        swStandardASScrewClearances	= 651,
        swStandardASTapDrills	= 652,
        swStandardASTaperedPipeTap	= 653,
        swStandardASBottomingTappedHole	= 654,
        swStandardASTappedHole	= 655,
        swStandardASCrossCountersunkHeadScrew	= 657,
        swStandardASRaisedCrossCountersunkHeadScrew	= 658,
        swStandardASPanCrossHeadScrew	= 659,
        swStandardASPanSlottedHeadScrew	= 660,
        swStandardASCheeseHeadScrew	= 661,
        swStandardASMushroomHeadScrew	= 662,
        swStandardASSocketHeadCapScrew	= 663,
        swStandardASHexBoltGradesAB	= 664,
        swStandardASUnifiedHexBolt	= 665,
        swStandardASHexStructuralBolt	= 666,
        swStandardASUnifiedHexScrew	= 667,
        swStandardASHexScrewGradesAB	= 668,
        swStandardASHexBoltGradeC	= 669,
        swStandardASHexScrewGradeC	= 670,
        swStandardDINHexSocketHeadFine912	= 701,
        swStandardDINHexSocketHeadThin7984	= 702,
        swStandardAnsiInchDowelHole	= 703,
        swStandardAnsiMetricDowelHole	= 704,
        swStandardASDowelHole	= 705,
        swStandardBSIDowelHole	= 706,
        swStandardDINDowelHole	= 707,
        swStandardGBDowelHole	= 708,
        swStandardISDowelHole	= 709,
        swStandardISODowelHole	= 710,
        swStandardJISDowelHole	= 711,
        swStandardKSDowelHole	= 712,
        swStandardPEMInch300SCNuts	= 906,
        swStandardPEMInchAluminumSCNuts	= 901,
        swStandardPEMInchNon_lockingNuts	= 905,
        swStandardPEMInchSelf_clinchingNuts	= 909,
        swStandardPEMInchSelf_lockingNuts	= 910,
        swStandardPEMInchThinSheet	= 912,
        swStandardPEMInchTRI_DENT	= 913,
        swStandardPEMInchWeldNuts	= 908,
        swStandardPEMInchBlindFasteners	= 902,
        swStandardPEMInchFloating	= 903,
        swStandardPEMInchMiniature	= 904,
        swStandardPEMInchPEMHEXFasteners	= 914,
        swStandardPEMInchPEMSERTFlushFasteners	= 907,
        swStandardPEMInchSelf_lockingFasteners	= 911,
        swStandardPEMInchBlindSO	= 947,
        swStandardPEMInchConcealedStandoffs	= 948,
        swStandardPEMInchKEYHOLEStandoffs	= 949,
        swStandardPEMInchSNAP_TOPSBStandoffs	= 950,
        swStandardPEMInchSNAP_TOPSCStandoffs	= 951,
        swStandardPEMInchTHStandoffs	= 952,
        swStandardPEMInchTSStandoffs	= 953,
        swStandardPEMInchUStandoffs	= 954,
        swStandardPEMInchConcealedStuds	= 929,
        swStandardPEMInchFHDogPointStuds	= 932,
        swStandardPEMInchFlushheadStuds	= 931,
        swStandardPEMInchHigh_strengthStuds	= 934,
        swStandardPEMInchHSDogPointStuds	= 935,
        swStandardPEMInchLow_displacementStuds	= 936,
        swStandardPEMInchNon_flushheadStuds	= 937,
        swStandardPEMInchFlushheadPins	= 930,
        swStandardPEMInchFlushPilotPins	= 933,
        swStandardPEMMetric300SCNuts	= 920,
        swStandardPEMMetricAluminumSCNuts	= 915,
        swStandardPEMMetricNon_lockingNuts	= 919,
        swStandardPEMMetricSelf_clinchingNuts	= 923,
        swStandardPEMMetricSelf_lockingNuts	= 924,
        swStandardPEMMetricThinSheet	= 926,
        swStandardPEMMetricTRI_DENT	= 927,
        swStandardPEMMetricWeldNuts	= 922,
        swStandardPEMMetricBlindFasteners	= 916,
        swStandardPEMMetricFloating	= 917,
        swStandardPEMMetricMiniature	= 918,
        swStandardPEMMetricPEMHEXFasteners	= 928,
        swStandardPEMMetricPEMSERTFlushFasteners	= 921,
        swStandardPEMMetricSelf_lockingFasteners	= 925,
        swStandardPEMMetricBlindSO	= 955,
        swStandardPEMMetricConcealedStandoffs	= 956,
        swStandardPEMMetricKEYHOLEStandoffs	= 957,
        swStandardPEMMetricSNAP_TOPSBStandoffs	= 958,
        swStandardPEMMetricSNAP_TOPSCStandoffs	= 959,
        swStandardPEMMetricTHStandoffs	= 961,
        swStandardPEMMetricTSStandoffs	= 960,
        swStandardPEMMetricUStandoffs	= 962,
        swStandardPEMMetricConcealedStuds	= 938,
        swStandardPEMMetricFHDogPointStuds	= 941,
        swStandardPEMMetricFlushheadStuds	= 940,
        swStandardPEMMetricHigh_strengthStuds	= 943,
        swStandardPEMMetricHSDogPointStuds	= 944,
        swStandardPEMMetricLow_displacementStuds	= 945,
        swStandardPEMMetricNon_flushheadStuds	= 946,
        swStandardPEMMetricFlushheadPins	= 939,
        swStandardPEMMetricFlushPilotPins	= 942
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("2FC3BD85-F5C2-4CB9-ADCB-D93F0E73160F") swWzdHoleCounterSinkHeadClearanceTypes_e
    {
        swHeadClearanceIncreasedCsink	= 0,
        swHeadClearanceAddToCbore	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("CAD5B32B-F014-4557-8359-EA126EFF4CB6") swWzdHoleHcoilTapTypes_e
    {
        swTapTypePlug	= 0,
        swTapTypeBottom	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("F9C16EE2-FF0F-4C1B-8D9B-9F9E32AE17A5") swWzdHoleScrewClearanceTypes_e
    {
        swScrewClearanceClose	= 0,
        swScrewClearanceNormal	= 1,
        swScrewClearanceLoose	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("A4295F91-6862-43F7-A5A6-D1A4777365AE") swWzdHoleCosmeticThreadTypes_e
    {
        swCosmeticThreadNone	= 0,
        swCosmeticThreadWithCallout	= 1,
        swCosmeticThreadWithoutCallout	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("4DB2CFBB-E08C-4A15-9B65-325B979FC100") swWzdHoleThreadEndCondition_e
    {
        swEndThreadTypeBLIND	= 0,
        swEndThreadTypeTHROUGH_ALL	= 1,
        swEndThreadTypeTHROUGH_NEXT	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("CC02444A-527E-4BC9-BF77-C368908F2145") swCreateFacesBodyAction_e
    {
        swCreateFacesBodyActionCap	= 1,
        swCreateFacesBodyActionGrow	= 2,
        swCreateFacesBodyActionGrowFromParent	= 3,
        swCreateFacesBodyActionLeaveRubber	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("5A904024-83A4-4E12-B892-31AA047285AC") swDocTemplateTypes_e
    {
        swDocTemplateTypeNONE	= 0x1,
        swDocTemplateTypePART	= 0x2,
        swDocTemplateTypeASSEMBLY	= 0x4,
        swDocTemplateTypeDRAWING	= 0x8,
        swDocTemplateTypeInContext	= 0x10
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("21D9896E-EDE1-4DBC-B52D-7D846B659202") swCreateFeatureBodyOpts_e
    {
        swCreateFeatureBodyCheck	= 0x1,
        swCreateFeatureBodySimplify	= 0x2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("25590929-6227-43AE-B8B5-4F83ECDFCC2B") swToolbarDockStatePosition_e
    {
        swDockNoToolbar	= -1,
        swNoDock	= 0,
        swDockTop	= 1,
        swDockBottom	= 2,
        swDockRight	= 3,
        swDockLeft	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("D8C92DC5-C965-4124-9F5D-029ABC99F242") swImprintingFacesOpts_e
    {
        swImprintingFacesOnTool	= 0x1,
        swImprintingFacesOnOverlapping	= 0x2,
        swImprintingFacesOnExtendFace	= 0x4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("4C9E5A28-6466-49B1-86D9-7596E6023559") swSketchCheckFeatureProfileUsage_e
    {
        swSketchCheckFeature_UNSET	= 0,
        swSketchCheckFeature_BASEEXTRUDE	= 1,
        swSketchCheckFeature_BASEEXTRUDETHIN	= 2,
        swSketchCheckFeature_BOSSEXTRUDE	= 3,
        swSketchCheckFeature_BOSSEXTRUDETHIN	= 4,
        swSketchCheckFeature_SURFACEEXTRUDE	= 5,
        swSketchCheckFeature_BASEREVOLVE	= 6,
        swSketchCheckFeature_BASEREVOLVETHIN	= 7,
        swSketchCheckFeature_BOSSREVOLVE	= 8,
        swSketchCheckFeature_BOSSREVOLVETHIN	= 9,
        swSketchCheckFeature_SURFACEREVOLVE	= 10,
        swSketchCheckFeature_CUTEXTRUDE	= 11,
        swSketchCheckFeature_CUTEXTRUDETHIN	= 12,
        swSketchCheckFeature_CUTREVOLVE	= 13,
        swSketchCheckFeature_CUTREVOLVETHIN	= 14,
        swSketchCheckFeature_SWEEPSECTION	= 15,
        swSketchCheckFeature_SURFACESWEEPSECTION	= 16,
        swSketchCheckFeature_SWEEPPATHORGUIDE	= 17,
        swSketchCheckFeature_LOFTSECTION	= 18,
        swSketchCheckFeature_SURFACELOFTSECTION	= 19,
        swSketchCheckFeature_LOFTGUIDE	= 20,
        swSketchCheckFeature_RIBSECTION	= 21,
        swSketchCheckFeature_SHEETMETAL_BASEFLANGE	= 22,
        swSketchCheckFeature_MOLD_PARTINGSURFACES	= 23
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("4D8E745A-BA95-4C65-B342-97F4E6768E3E") swSketchCheckFeatureStatus_e
    {
        swSketchCheckFeatureStatus_UnknownError	= -1,
        swSketchCheckFeatureStatus_OK	= 0,
        swSketchCheckFeatureStatus_EntXEnt	= 1,
        swSketchCheckFeatureStatus_EntXSelf	= 2,
        swSketchCheckFeatureStatus_EntUnspecBad	= 3,
        swSketchCheckFeatureStatus_ThreeEnts	= 4,
        swSketchCheckFeatureStatus_EmptySketch	= 5,
        swSketchCheckFeatureStatus_WrongOpen	= 6,
        swSketchCheckFeatureStatus_WrongManyContours	= 7,
        swSketchCheckFeatureStatus_ZeroLengthEnt	= 8,
        swSketchCheckFeatureStatus_ManyOpen	= 9,
        swSketchCheckFeatureStatus_NoOpen	= 10,
        swSketchCheckFeatureStatus_MixedContours	= 11,
        swSketchCheckFeatureStatus_CturXCtur	= 12,
        swSketchCheckFeatureStatus_DisjCturs	= 13,
        swSketchCheckFeatureStatus_OpenWantClosed	= 14,
        swSketchCheckFeatureStatus_ClosedWantOpen	= 15,
        swSketchCheckFeatureStatus_DoubleContainment	= 16,
        swSketchCheckFeatureStatus_MoreThanOneContour	= 17,
        swSketchCheckFeatureStatus_OneOpenContourExpected	= 18,
        swSketchCheckFeatureStatus_OneClosedContourExpected	= 19,
        swSketchCheckFeatureStatus_WantSingleOpenOrMultiClosedDisjoint	= 20,
        swSketchCheckFeatureStatus_NeedsAxis	= 21,
        swSketchCheckFeatureStatus_OpenOrUnclear	= 22,
        swSketchCheckFeatureStatus_ContourIntersectsCenterLine	= 23
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("69F2494B-5A65-4B83-8B5C-2DAD99A14578") swMassPropertiesStatus_e
    {
        swMassPropertiesStatus_OK	= 0,
        swMassPropertiesStatus_UnknownError	= 1,
        swMassPropertiesStatus_NoBody	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("9B4E1381-E2DE-48AE-932F-3D1B19CD68DF") swTangentArcTypes_e
    {
        swForward	= 1,
        swLeft	= 2,
        swBack	= 3,
        swRight	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("F8C30B65-20A5-4DA0-8003-D3D6C78E69C4") swOpenDocOptions_e
    {
        swOpenDocOptions_Silent	= 0x1,
        swOpenDocOptions_ReadOnly	= 0x2,
        swOpenDocOptions_ViewOnly	= 0x4,
        swOpenDocOptions_RapidDraft	= 0x8,
        swOpenDocOptions_LoadModel	= 0x10,
        swOpenDocOptions_AutoMissingConfig	= 0x20,
        swOpenDocOptions_OverrideDefaultLoadLightweight	= 0x40,
        swOpenDocOptions_LoadLightweight	= 0x80,
        swOpenDocOptions_DontLoadHiddenComponents	= 0x100,
        swOpenDocOptions_LoadExternalReferencesInMemory	= 0x200,
        swOpenDocOptions_OpenDetailingMode	= 0x400,
        swOpenDocOptions_LDR_EditAssembly	= 0x800,
        swOpenDocOptions_SpeedPak	= 0x1000,
        swOpenDocOptions_AdvancedConfig	= 0x2000
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("A39D1A60-DD4A-4118-8227-4FA71CCCDD80") swSaveAsOptions_e
    {
        swSaveAsOptions_Silent	= 0x1,
        swSaveAsOptions_Copy	= 0x2,
        swSaveAsOptions_SaveReferenced	= 0x4,
        swSaveAsOptions_AvoidRebuildOnSave	= 0x8,
        swSaveAsOptions_UpdateInactiveViews	= 0x10,
        swSaveAsOptions_OverrideSaveEmodel	= 0x20,
        swSaveAsOptions_SaveEmodelData	= 0x40,
        swSaveAsOptions_DetachedDrawing	= 0x80,
        swSaveAsOptions_IgnoreBiography	= 0x100,
        swSaveAsOptions_CopyAndOpen	= 0x200,
        swSaveAsOptions_IncludeVirtualSubAsmComps	= 0x400,
        swSaveAsOptions_ExportTo2DPdfFromInspection	= 0x800
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("B499265E-F332-4756-BC2B-1348BFD6FE1E") swInConfigurationOpts_e
    {
        swConfigPropertySuppressFeatures	= 0,
        swThisConfiguration	= 1,
        swAllConfiguration	= 2,
        swSpecifyConfiguration	= 3,
        swLinkedToParent	= 4,
        swSpeedpakConfiguration	= 5
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("15C61B06-71F6-4C57-82D0-B2CE42EF4B2F") swKernelErrorCode_e
    {
        swErrorSuccess	= 1,
        swErrorError	= 0,
        swErrorNotEntity	= -100022,
        swErrorInvalidParameter	= -100120,
        swErrorSurfaceDiscontinuous	= -100129,
        swErrorCurveDiscontinuous	= -100131,
        swErrorInvalidEntity	= -100914,
        swErrorInvalidSharing	= -100921,
        swErrorInvalidKnots	= -100978,
        swErrorInvalidGeometry	= -100999,
        swErrorHasInvalidentity	= -101004,
        swErrorBodyDontKnit	= -101041,
        swErrorInvalidPattern	= -101042,
        swErrorCurveShort	= -101057,
        swErrorFailed	= -101063,
        swErrorCheckFailed	= -105061,
        swErrorGeometryMissing	= -113803,
        swErrorTopologySelfx	= -113804,
        swErrorGeometrySelfx	= -113805,
        swErrorGeometryDegenerate	= -113806,
        swErrorInvalidGeometry2	= -113808,
        swErrorCheckFailed2	= -113812,
        swErrorFaceFaceInconsistent	= -113816,
        swErrorVertexNotOnCurve	= -113818,
        swErrorVerticesTouch	= -113821,
        swErrorLoopsInconsistent	= -113826,
        swErrorGeometryDiscontinuous	= -113827,
        swErrorFacecheckFailed	= -113829,
        swErrorFaceRedundant	= -116402,
        swErrorInconsistentDirs	= -116403,
        swErrorEdgeisectInvalid	= -116404,
        swErrorInvalidLoop	= -116405,
        swErrorEdgeIncorrectOrder	= -116406,
        swErrorUnknown	= -1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("AE73710C-5981-4750-AD6F-DC8CA79900E1") swPropertyManagerButtonTypes_e
    {
        swPropertyManager_OkayButton	= 0x1,
        swPropertyManager_CancelButton	= 0x2,
        swPropertyManager_HelpButton	= 0x4,
        swPropertyManager_PreviewButton	= 0x8,
        swPropertyManager_PushpinButton	= 0x10
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("F776A4FF-B80C-4DE2-9E21-1125281F6B26") swPropertyManagerStatus_e
    {
        swPropertyManagerStatus_Okay	= 0,
        swPropertyManagerStatus_Failed	= -1,
        swPropertyManagerStatus_Disconnected	= -2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("68222CD1-5657-41D9-BDBB-98265A87176C") swParasolidOutputVersion_e
    {
        swParasolidOutputVersion_latest	= 0,
        swParasolidOutputVersion_80	= 1,
        swParasolidOutputVersion_90	= 2,
        swParasolidOutputVersion_91	= 3,
        swParasolidOutputVersion_100	= 4,
        swParasolidOutputVersion_110	= 5,
        swParasolidOutputVersion_111	= 6,
        swParasolidOutputVersion_120	= 7,
        swParasolidOutputVersion_121	= 8,
        swParasolidOutputVersion_130	= 9,
        swParasolidOutputVersion_140	= 10,
        swParasolidOutputVersion_150	= 11,
        swParasolidOutputVersion_151	= 12,
        swParasolidOutputVersion_160	= 13,
        swParasolidOutputVersion_161	= 14,
        swParasolidOutputVersion_171	= 15,
        swParasolidOutputVersion_181	= 16,
        swParasolidOutputVersion_191	= 17,
        swParasolidOutputVersion_200	= 18,
        swParasolidOutputVersion_210	= 19,
        swParasolidOutputVersion_220	= 20,
        swParasolidOutputVersion_230	= 21,
        swParasolidOutputVersion_240	= 22,
        swParasolidOutputVersion_250	= 23,
        swParasolidOutputVersion_260	= 24,
        swParasolidOutputVersion_270	= 25,
        swParasolidOutputVersion_280	= 26,
        swParasolidOutputVersion_290	= 27,
        swParasolidOutputVersion_300	= 28,
        swParasolidOutputVersion_310	= 29,
        swParasolidOutputVersion_320	= 30,
        swParasolidOutputVersion_330	= 31,
        swParasolidOutputVersion_341	= 32,
        swParasolidOutputVersion_351	= 33
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("A07B5D8C-E444-4f55-8A3C-949ECFB09ADD") swAcisOutputVersion_e
    {
        swAcisOutputVersion_16	= 0,
        swAcisOutputVersion_17	= 1,
        swAcisOutputVersion_20	= 2,
        swAcisOutputVersion_21	= 3,
        swAcisOutputVersion_30	= 4,
        swAcisOutputVersion_40	= 5,
        swAcisOutputVersion_50	= 6,
        swAcisOutputVersion_60	= 7,
        swAcisOutputVersion_70	= 8,
        swAcisOutputVersion_80	= 9,
        swAcisOutputVersion_100	= 10,
        swAcisOutputVersion_110	= 11,
        swAcisOutputVersion_120	= 12,
        swAcisOutputVersion_130	= 13,
        swAcisOutputVersion_140	= 14,
        swAcisOutputVersion_150	= 15,
        swAcisOutputVersion_160	= 16,
        swAcisOutputVersion_170	= 17,
        swAcisOutputVersion_180	= 18,
        swAcisOutputVersion_190	= 19,
        swAcisOutputVersion_200	= 20,
        swAcisOutputVersion_210	= 21,
        swAcisOutputVersion_220	= 22,
        swAcisOutputVersion_270	= 23,
        swAcisOutputVersion_330	= 24
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("43989D1F-AEC6-4F4B-9458-B31481B4DB40") swSelectionMarkAction_e
    {
        swSelectionMarkSet	= 0,
        swSelectionMarkAppend	= 1,
        swSelectionMarkRemove	= 2,
        swSelectionMarkClear	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("6E47A876-CC4D-4BD6-8F28-B221009AEA8D") swEdgesHiddenEdgeDisplay_e
    {
        swEdgesHiddenEdgeDisplaySolid	= 1,
        swEdgesHiddenEdgeDisplayDashed	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("CACA43E4-9BF1-4D59-81AA-FEFE81B8F3AA") swEdgesTangentEdgeDisplay_e
    {
        swEdgesTangentEdgeDisplayVisible	= 1,
        swEdgesTangentEdgeDisplayPhantom	= 2,
        swEdgesTangentEdgeDisplayRemoved	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("3821FFC5-E89A-4174-9207-6A9AE1F1C55B") swEdgesShadedModeDisplay_e
    {
        swEdgesShadedModeDisplayNone	= 1,
        swEdgesShadedModeDisplayHLR	= 2,
        swEdgesShadedModeDisplayWireframe	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("EE4CB52D-6F14-4F9B-8F64-B41105852BF9") swSplitFaceOnParam_e
    {
        swSplitFaceOnParamU	= 1,
        swSplitFaceOnParamV	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("CC1EF388-10EA-40A7-8101-9EC033F77C61") swTbCommand_e
    {
        swTbCONTROL	= -2,
        swTbACTIVE	= -1,
        swTbNONE	= 0,
        swTbPART	= 1,
        swTbASSEMBLY	= 2,
        swTbDRAWING	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("234D96BF-4FE5-40DA-A030-6BF73A4315CD") swTbSaveModes_e
    {
        swTbSAVE	= 0,
        swTbLOAD	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("51BFBEDB-BBA4-4F2E-98D8-5EA76E3421A8") swTbControlModes_e
    {
        swTbSTOP	= 0,
        swTbCONTINUE	= 1,
        swTbOleInplaceMode	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("E19C1DDD-50E2-4CB8-BE5B-A57E5C79B698") swBendAllowanceTypes_e
    {
        swBendAllowanceBendTable	= 1,
        swBendAllowanceKFactor	= 2,
        swBendAllowanceDirect	= 3,
        swBendAllowanceDeduction	= 4,
        swBendAllowanceBendCalculationTable	= 5
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("F2DB09B5-ADB4-455F-B24F-323584929ACE") swSheetMetalReliefTypes_e
    {
        swSheetMetalReliefRectangular	= 1,
        swSheetMetalReliefTear	= 2,
        swSheetMetalReliefObround	= 3,
        swSheetMetalReliefNone	= 4,
        swSheetMetalReliefTearBend	= 5
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("1C1B6A9E-05DF-45AD-8022-86D7D71ACB01") swUserUnitsType_e
    {
        swLengthUnit	= 0,
        swAngleUnit	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("962ABD57-5145-4A20-95C1-15E8B0982D7A") swFlangeOffsetTypes_e
    {
        swFlangeOffsetBlind	= 1,
        swFlangeOffsetUpToVertex	= 2,
        swFlangeOffsetUpToSurface	= 3,
        swFlangeOffsetFromSurface	= 4,
        swFlangeOffsetMidPlane	= 5,
        swFlangeOffsetUptoEdgeAndMerge	= 6
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("58CA96E8-FD93-491C-8DD2-40D32351232D") swFlangeDimTypes_e
    {
        swFlangeDimTypeOuterVirtualSharp	= 1,
        swFlangeDimTypeInnerVirtualSharp	= 2,
        swFlangeDimTypeBendTangentArc	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("37B3C852-D0E9-4885-82AF-5C2BBAC11902") swFlangePositionTypes_e
    {
        swFlangePositionTypeMaterialInside	= 1,
        swFlangePositionTypeMaterialOutside	= 2,
        swFlangePositionTypeBendOutside	= 3,
        swFlangePositionTypeBendCenterLine	= 4,
        swFlangePositionTypeBendSharp	= 5,
        swFlangePositionTypeBendTangent	= 6
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("0B3146DF-3024-43D4-9C78-AF4ECD35C0EC") swReliefTearTypes_e
    {
        swReliefTearTypeRip	= 1,
        swReliefTearTypeExtend	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("9379E717-A69C-4687-B063-BFC5D392F346") swClosedCornerTypes_e
    {
        swClosedCornerTypeButt	= 1,
        swClosedCornerTypeOverlap	= 2,
        swClosedCornerTypeUnderlap	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("6DC00DA3-9D1A-45BA-A9B2-5CC866467DED") swSelectionReferenceTypes_e
    {
        swReferenceTypeVertex	= 1,
        swReferenceTypeEdge	= 2,
        swReferenceTypeFace	= 3,
        swReferenceTypeRefSurface	= 4,
        swReferenceTypeRefPlan	= 5,
        swReferenceTypeSketchPoint	= 6,
        swReferenceTypeBody	= 7
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("CC559267-EB69-462C-8E65-E6708E57C31A") swPatternReferenceTypes_e
    {
        swPatternReferenceTypeAxis	= 0,
        swPatternReferenceTypeEdge	= 1,
        swPatternReferenceTypeRefDim	= 2,
        swPatternReferenceTypeFace	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("B67DD19E-47A6-440E-BA58-4D8F960AC6B9") swThinWallType_e
    {
        swThinWallOneDirection	= 0,
        swThinWallOppDirection	= 1,
        swThinWallMidPlane	= 2,
        swThinWallTwoDirection	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("2C59787F-4F1C-4341-8089-F9D9F76F3C83") swTextInBoxStyle_e
    {
        swTextInBoxStyleNone	= 0,
        swTextInBoxStyleWrap	= 1,
        swTextInBoxStyleFit	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("72771AE9-D867-4B04-B03F-F87EEF94E079") swPageSetupOrientation_e
    {
        swPageSetupOrient_Portrait	= 1,
        swPageSetupOrient_Landscape	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("342291ED-7527-4C52-96EE-83758D9817D9") swPageSetupDrawingColor_e
    {
        swPageSetup_AutomaticDrawingColor	= 1,
        swPageSetup_ColorGrey	= 2,
        swPageSetup_BlackAndWhite	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("787382D0-1E2F-4B00-B0E5-CB976E39280B") swPropertyManagerPageStatus_e
    {
        swPropertyManagerPage_Okay	= 0,
        swPropertyManagerPage_UnsupportedHandler	= 1,
        swPropertyManagerPage_CreationFailure	= -1,
        swPropertyManagerPage_NoDocument	= -2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("92BC2AEE-0E3A-40EF-923D-EFD935545505") swPropertyManagerPageOptions_e
    {
        swPropertyManagerOptions_OkayButton	= 0x1,
        swPropertyManagerOptions_CancelButton	= 0x2,
        swPropertyManagerOptions_LockedPage	= 0x4,
        swPropertyManagerOptions_CloseDialogButton	= 0x8,
        swPropertyManagerOptions_MultiplePages	= 0x10,
        swPropertyManagerOptions_PushpinButton	= 0x20,
        swPropertyManagerOptions_AllowHorizontalResize	= 0x40,
        swPropertyManagerOptions_PreviewButton	= 0x80,
        swPropertyManagerOptions_DisableSelection	= 0x100,
        swPropertyManagerOptions_WhatsNew	= 0x200,
        swPropertyManagerOptions_AbortCommands	= 0x400,
        swPropertyManagerOptions_UndoButton	= 0x800,
        swPropertyManagerOptions_CanEscapeCancel	= 0x1000,
        swPropertyManagerOptions_HandleKeystrokes	= 0x2000,
        swPropertyManagerOptions_RedoButton	= 0x4000,
        swPropertyManagerOptions_DisablePageBuildDuringHandlers	= 0x8000,
        swPropertyManagerOptions_GrayOutDisabledSelectionListboxes	= 0x10000,
        swPropertyManagerOptions_SupportsChainSelection	= 0x20000,
        swPropertyManagerOptions_SupportsIsolate	= 0x40000
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("4EB63082-12CF-456c-A0C0-D9DF042B9AFA") swPropertyManagerPageShowOptions_e
    {
        swPropertyManagerShowOptions_StackPage	= 0x1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("6875D35E-AAB7-4096-8E90-DE604A37E835") swAddGroupBoxOptions_e
    {
        swGroupBoxOptions_Checkbox	= 0x1,
        swGroupBoxOptions_Checked	= 0x2,
        swGroupBoxOptions_Visible	= 0x4,
        swGroupBoxOptions_Expanded	= 0x8
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("CA171686-1211-4143-A19D-A220F1F1361D") swPropertyManagerPageMessageVisibility
    {
        swNoMessageBox	= 1,
        swMessageBoxHidden	= 2,
        swMessageBoxVisible	= 3,
        swImportantMessageBox	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("EFB856ED-A082-414a-B3DA-D9414598BAFA") swPropertyManagerPageMessageExpanded
    {
        swMessageBoxMaintainExpandState	= 0,
        swMessageBoxExpand	= 1,
        swMessageBoxCompress	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("D874BA8A-4088-43F4-BB35-D7B4F45665A9") swPropertyManagerPageControlType_e
    {
        swControlType_Label	= 1,
        swControlType_Checkbox	= 2,
        swControlType_Button	= 3,
        swControlType_Option	= 4,
        swControlType_Textbox	= 5,
        swControlType_Listbox	= 6,
        swControlType_Combobox	= 7,
        swControlType_Numberbox	= 8,
        swControlType_Selectionbox	= 9,
        swControlType_ActiveX	= 10,
        swControlType_BitmapButton	= 11,
        swControlType_CheckableBitmapButton	= 12,
        swControlType_Slider	= 13,
        swControlType_Bitmap	= 14,
        swControlType_WindowFromHandle	= 15
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("1427F6F5-A7E3-4458-9D74-FEA346A5D819") swAddControlOptions_e
    {
        swControlOptions_Visible	= 0x1,
        swControlOptions_Enabled	= 0x2,
        swControlOptions_SmallGapAbove	= 0x4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("71BA686A-C954-46B8-A79A-79DADCB99AF5") swPropertyManagerPageControlLeftAlign_e
    {
        swControlAlign_LeftEdge	= 1,
        swControlAlign_Indent	= 2,
        swControlAlign_DoubleIndent	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("5DD14240-9F98-48F9-83B3-F76FFD6F1256") swNumberboxUnitType_e
    {
        swNumberBox_UnitlessInteger	= 1,
        swNumberBox_UnitlessDouble	= 2,
        swNumberBox_Length	= 3,
        swNumberBox_Angle	= 4,
        swNumberBox_Density	= 5,
        swNumberBox_Stress	= 6,
        swNumberBox_Force	= 7,
        swNumberBox_Gravity	= 8,
        swNumberBox_Time	= 9,
        swNumberBox_Frequency	= 10,
        swNumberBox_Percent	= 11
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("9E1864C6-B5D2-4190-AA9B-3B2FAB7C54CC") swControlBitmapLabelType_e
    {
        swBitmapLabel_LinearDistance	= 1,
        swBitmapLabel_AngularDistance	= 2,
        swBitmapLabel_SelectEdgeFaceVertex	= 3,
        swBitmapLabel_SelectFaceSurface	= 4,
        swBitmapLabel_SelectVertex	= 5,
        swBitmapLabel_SelectFace	= 6,
        swBitmapLabel_SelectEdge	= 7,
        swBitmapLabel_SelectFaceEdge	= 8,
        swBitmapLabel_SelectComponent	= 9,
        swBitmapLabel_Diameter	= 10,
        swBitmapLabel_Radius	= 11,
        swBitmapLabel_LinearDistance1	= 12,
        swBitmapLabel_LinearDistance2	= 13,
        swBitmapLabel_Thickness1	= 14,
        swBitmapLabel_Thickness2	= 15,
        swBitmapLabel_LinearPattern	= 16,
        swBitmapLabel_CircularPattern	= 17,
        swBitmapLabel_Width	= 18,
        swBitmapLabel_Depth	= 19,
        swBitmapLabel_KFactor	= 20,
        swBitmapLabel_BendAllowance	= 21,
        swBitmapLabel_BendDeduction	= 22,
        swBitmapLabel_RipGap	= 23,
        swBitmapLabel_SelectProfile	= 24,
        swBitmapLabel_SelectBoundary	= 25
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("6F2D46E8-1C4A-467b-B768-52CB22ACC1D5") swBitmapControlStandardTypes_e
    {
        swBitmapControl_Volume	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("682BAA03-DC5E-4CE0-9BAE-3AFDC06BBDD1") swPropertyManagerPageCloseReasons_e
    {
        swPropertyManagerPageClose_UnknownReason	= 0,
        swPropertyManagerPageClose_Okay	= 1,
        swPropertyManagerPageClose_Cancel	= 2,
        swPropertyManagerPageClose_ParentClosed	= 3,
        swPropertyManagerPageClose_Closed	= 4,
        swPropertyManagerPageClose_UserEscape	= 5,
        swPropertyManagerPageClose_Apply	= 6,
        swPropertyManagerPageClose_Preview	= 7
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("EBB1CF2C-3BAC-4AD4-A551-4D7182A96469") swPropMgrPageListBoxStyle_e
    {
        swPropMgrPageListBoxStyle_Sorted	= 0x1,
        swPropMgrPageListBoxStyle_NoIntegralHeight	= 0x2,
        swPropMgrPageListBoxStyle_MultipleItemSelect	= 0x4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("4D667123-E0F2-4BBF-B7A9-947E16C68DE4") swPropMgrPageComboBoxStyle_e
    {
        swPropMgrPageComboBoxStyle_Sorted	= 0x1,
        swPropMgrPageComboBoxStyle_EditableText	= 0x2,
        swPropMgrPageComboBoxStyle_EditBoxReadOnly	= 0x4,
        swPropMgrPageComboBoxStyle_AvoidSelectionText	= 0x8
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("B28A7D76-BCE7-4E4D-BC93-9400CAA8A6E1") swPropertyManagerPageButtons_e
    {
        swPropertyManagerPageButton_Ok	= 1,
        swPropertyManagerPageButton_Cancel	= 2,
        swPropertyManagerPageButton_Help	= 3,
        swPropertyManagerPageButton_Next	= 4,
        swPropertyManagerPageButton_Back	= 5,
        swPropertyManagerPageButton_Undo	= 6,
        swPropertyManagerPageButton_Preview	= 7,
        swPropertyManagerPageButton_Pushpin	= 8,
        swPropertyManagerPageButton_Redo	= 9,
        swPropertyManagerPageButton_WhatsNew	= 10
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("75892C5B-F1E3-4D7D-A34A-91AF8788D5C4") swPropMgrPageLabelStyle_e
    {
        swPropMgrPageLabelStyle_LeftText	= 0x1,
        swPropMgrPageLabelStyle_CenterText	= 0x2,
        swPropMgrPageLabelStyle_RightText	= 0x4,
        swPropMgrPageLabelStyle_Sunken	= 0x8
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("FD104DBC-E3BB-4b85-A395-18D2F2D68B8A") swPropMgrPageLabelUnderlineStyle_e
    {
        swPropMgrPageLabel_NoUnderline	= 0,
        swPropMgrPageLabel_SolidUnderline	= 1,
        swPropMgrPageLabel_DashedUnderline	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("A478FB0A-D8A2-486E-9B1B-21B6E00C60CD") swHandleActiveXCreationFailure_e
    {
        swHandleActiveXCreationFailure_Cancel	= 1,
        swHandleActiveXCreationFailure_Retry	= 2,
        swHandleActiveXCreationFailure_Continue	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("D2B31E89-6D6C-4566-9E76-EF36B411AF69") swPropMgrPageOptionStyle_e
    {
        swPropMgrPageOptionStyle_FirstInGroup	= 0x1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("CE0DA579-62EA-4A56-A6DE-4B4202775420") swPropMgrPageSelectionBoxStyle_e
    {
        swPropMgrPageSelectionBoxStyle_HScroll	= 0x1,
        swPropMgrPageSelectionBoxStyle_UpAndDownButtons	= 0x2,
        swPropMgrPageSelectionBoxStyle_MultipleItemSelect	= 0x4,
        swPropMgrPageSelectionBoxStyle_WantListboxSelectionChanged	= 0x8
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("696DA3AC-1F56-4642-9DEC-B373EA4BD6D0") swPropMgrPageSliderStyle_e
    {
        swPropMgrPageSliderStyle_Vertical	= 0x1,
        swPropMgrPageSliderStyle_AutoTicks	= 0x2,
        swPropMgrPageSliderStyle_BottomLeftTicks	= 0x4,
        swPropMgrPageSliderStyle_TopRightTicks	= 0x8,
        swPropMgrPageSliderStyle_NotifyWhileTracking	= 0x10
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("74CEAB56-41EE-41a1-A2A7-63AAB2CEBA02") swPropMgrPageNumberBoxStyle_e
    {
        swPropMgrPageNumberBoxStyle_ComboEditBox	= 0x1,
        swPropMgrPageNumberBoxStyle_EditBoxReadOnly	= 0x2,
        swPropMgrPageNumberBoxStyle_AvoidSelectionText	= 0x4,
        swPropMgrPageNumberBoxStyle_NoScrollArrows	= 0x8,
        swPropMgrPageNumberBoxStyle_Slider	= 0x10,
        swPropMgrPageNumberBoxStyle_Thumbwheel	= 0x20,
        swPropMgrPageNumberBoxStyle_SuppressNotifyWhileTracking	= 0x40
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("FB98BB90-9428-4375-B5FC-78BB2A91D90D") swPropMgrPageTextBoxStyle_e
    {
        swPropMgrPageTextBoxStyle_NotifyOnlyWhenFocusLost	= 0x1,
        swPropMgrPageTextBoxStyle_ReadOnly	= 0x2,
        swPropMgrPageTextBoxStyle_NoBorder	= 0x4,
        swPropMgrPageTextBoxStyle_Multiline	= 0x8
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("2D64C1D5-E5FA-4759-BEBE-46C8476CD388") swPropMgrPageControlOnResizeOptions_e
    {
        swControlOptionsOnResize_LockLeft	= 0x1,
        swControlOptionsOnResize_LockRight	= 0x2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("9C9737A4-700E-400A-B00E-B3C4ED3C32C3") swInsertEdgeFlangeOptions_e
    {
        swInsertEdgeFlangeUseDefaultRadius	= 0x1,
        swInsertEdgeFlangeFlipDir	= 0x2,
        swInsertEdgeFlangeDoOffset	= 0x4,
        swInsertEdgeFlangeReverseOffsetDir	= 0x8,
        swInsertEdgeFlangeTearClip	= 0x10,
        swInsertEdgeFlangeTrimSideBend	= 0x20,
        swInsertEdgeFlangeUseReliefRatio	= 0x40,
        swInsertEdgeFlangeUseDefaultRelief	= 0x80
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("BA2E3CB6-4988-458F-A0C8-BC4ECE0EDB8E") swTwistControlType_e
    {
        swTwistControlFollowPath	= 0,
        swTwistControlKeepNormalConstant	= 1,
        swTwistControlFollowPathFirstGuideCurve	= 2,
        swTwistControlFollowFirstSecondGuideCurves	= 3,
        swTwistControlConstantTwistAlongPath	= 8,
        swTwistControlNormalConstantTwistAlongPath	= 9
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("1280FD1E-DC66-4EBA-8025-C0FFF060FE02") swTangencyType_e
    {
        swTangencyNone	= 0,
        swTangencyNormalToProfile	= 1,
        swTangencyDirectionVector	= 2,
        swTangencyAllFaces	= 3,
        swMinimumTwist	= 10
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("5CD056FF-8F1A-4E79-A3CA-D68386695575") swDraftStepType_e
    {
        swDraftTaperedStep	= 3,
        swDraftPerpendicular	= 6
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("4174511E-9386-45A4-81BA-94BA0B273FDC") swDraftFacePropagationType_e
    {
        swFacePropNone	= 0,
        swFacePropTangent	= 1,
        swFacePropAllLoops	= 2,
        swFacePropInnerLoops	= 3,
        swFacePropOuterLoops	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("09F500AF-1DB8-48FB-9B07-5ADB0051BB50") swThickenThicknessType_e
    {
        swThickenSideOne	= 0,
        swThickenSideTwo	= 1,
        swThickenSideBoth	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("A7614C2E-C2FF-4B15-867F-A35C0FCE7C29") swExternalReferenceStatus_e
    {
        swExternalReferenceBroken	= 0,
        swExternalReferenceLocked	= 1,
        swExternalReferenceInContext	= 3,
        swExternalReferenceOutOfContext	= 4,
        swExternalReferenceDangling	= 5
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("8DDA70EC-D3FD-43C8-9B94-CB844BC0A0F6") swReplaceComponentError_e
    {
        swReplaceComponent_Undefined	= 0,
        swReplaceComponent_Success	= 1,
        swReplaceComponent_EmptyName	= 2,
        swReplaceComponent_InvalidFileName	= 3,
        swReplaceComponent_SameModelDifferentPath	= 4,
        swReplaceComponent_SameFile	= 5,
        swReplaceComponent_NotTopLevelComponent	= 6,
        swReplaceComponent_UnknownError	= 7
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("5EF69122-9C3E-4BB2-8709-5A8D35766E43") swInContextEditTransparencyType_e
    {
        swInContextEditTransparencyOpaque	= 0,
        swInContextEditTransparencyForce	= 1,
        swInContextEditTransparencyMaintain	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("AB28B209-6BF5-447D-B15C-AFAC2676D500") swDraftType_e
    {
        swNeutralPlaneDraft	= 0,
        swPartingLineDraft	= 1,
        swStepDraft	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("4C3CEAC8-BA07-429F-AAE7-0123B51B1158") swMacroFeatureParamType_e
    {
        swMacroFeatureParamTypeString	= 0,
        swMacroFeatureParamTypeDouble	= 1,
        swMacroFeatureParamTypeInteger	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("96CABA78-ED1A-41B2-9A92-494990D3408E") swDatumDisplayType_e
    {
        swDatumDisplayType_Default	= 0,
        swDatumDisplayType_Square	= 1,
        swDatumDisplayType_Roundgb	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("A267DF4B-88E6-402A-BB6B-FFBC90E0E0F6") swCurveDrivenPatternCurveMethod_e
    {
        swCurvePatternTransformCurve	= 0,
        swCurvePatternOffsetCurve	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("1DCD3221-E44F-43B5-9AB0-8E9E6E4948D5") swCurveDrivenPatternAlignment_e
    {
        swCurvePatternTangentToCurve	= 0,
        swCurvePatternAlignToSeed	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("6CCA8498-C8C7-419C-AF8F-074C3EE9761D") swBOMConfigurationCreationErrors_e
    {
        swBOMTableCreation_Okay	= 0,
        swBOMTableCreation_UnspecifiedError	= -1,
        swBOMTableCreation_MustBeDrawingView	= -2,
        swBOMTableCreation_AlreadyExists	= -3,
        swBOMTableCreation_ExcelDisabled	= -4,
        swBOMTableCreation_Failed	= -5,
        swBOMTableCreation_NoModelForView	= -6
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("11D06720-1A75-4D1C-AAF7-228816AD772D") swBOMConfigurationAnchorType_e
    {
        swBOMConfigurationAnchor_TopLeft	= 1,
        swBOMConfigurationAnchor_TopRight	= 2,
        swBOMConfigurationAnchor_BottomLeft	= 3,
        swBOMConfigurationAnchor_BottomRight	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("9A460BA4-3C2F-4E48-A144-EE627B1574F3") swBOMConfigurationWhatToShow_e
    {
        swBOMConfiguration_ShowPartsOnly	= 1,
        swBOMConfiguration_ShowPartsAndTopLevelAsm	= 2,
        swBOMConfiguration_ShowAllInIndentedList	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("FC9C44E8-5F65-4063-8023-074C00ADC35A") swBOMControlMissingRowDisplay_e
    {
        swBOMControlShowMissingRow	= 1,
        swBOMControlHideMissingRow	= 2,
        swBOMControlStrikeMissingRow	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("80289A3C-A18B-4AE9-B3B3-28C586579954") swBOMControlSplitDirection_e
    {
        swBOMControlSplitRight	= 1,
        swBOMControlSplitLeft	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("995D622F-5316-4EA8-81DD-2B9696AA9FEA") swConfigurationOptions2_e
    {
        swConfigOption_UseAlternateName	= 0x1,
        swConfigOption_DontShowPartsInBOM	= 0x2,
        swConfigOption_SuppressByDefault	= 0x4,
        swConfigOption_HideByDefault	= 0x8,
        swConfigOption_MinFeatureManager	= 0x10,
        swConfigOption_InheritProperties	= 0x20,
        swConfigOption_LinkToParent	= 0x40,
        swConfigOption_DontActivate	= 0x80,
        swConfigOption_DoDisolveInBOM	= 0x100,
        swConfigOption_UseDescriptionInBOM	= 0x200
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("2E05D6C9-4FD3-4b8d-AC19-FCCB7FE26271") swBOMPartNumberSource_e
    {
        swBOMPartNumber_DocumentName	= 0x1,
        swBOMPartNumber_ConfigurationName	= 0x2,
        swBOMPartNumber_ParentName	= 0x4,
        swBOMPartNumber_UserSpecified	= 0x8
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("92B8B974-27F0-49C1-83B9-B32B31C197DF") swStackedBalloonDirection_e
    {
        swStackedBalloonDir_None	= 0,
        swStackedBalloonDir_Up	= 1,
        swStackedBalloonDir_Down	= 2,
        swStackedBalloonDir_Left	= 3,
        swStackedBalloonDir_Right	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("B896D7F3-CA7A-4EB6-9BEA-FB6A449BBB5D") swDraftAnalysisOptions_e
    {
        swDraftAnalysisFlipDir	= 0x1,
        swDraftAnalysisFindSteep	= 0x2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("F21E9F2C-18C2-4E6B-AF79-3E24D0E331A8") swDraftAnalysisShow_e
    {
        swDraftAnalysisShowPositive	= 0x1,
        swDraftAnalysisShowNegative	= 0x2,
        swDraftAnalysisShowDraftRequired	= 0x4,
        swDraftAnalysisShowStraddle	= 0x8,
        swDraftAnalysisShowPositiveSteep	= 0x10,
        swDraftAnalysisShowNegativeSteep	= 0x20,
        swDraftAnalysisShowSurface	= 0x40
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("95EBA254-EF1F-430C-87CA-943540DC8F04") swStandardHeaderFooterPageSetupTexts_e
    {
        swHeaderFooterText_PageNumber	= 1,
        swHeaderFooterText_PageCount	= 2,
        swHeaderFooterText_Date	= 3,
        swHeaderFooterText_Time	= 4,
        swHeaderFooterText_Filename	= 5
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("DF1A52C6-DDFE-4BD4-83CB-A4113D9EA9EF") swDetailingChamferDimLeaderTextStyle_e
    {
        swDetailChamferDimDistDist	= 1,
        swDetailChamferDimDistAng	= 2,
        swDetailChamferDimAngDist	= 3,
        swDetailChamferDimCDist	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("AF4E34B1-BD39-4C39-B69F-7D47480E2CA4") swDetailingChamferDimLeaderStyle_e
    {
        swDetailChamferDimLeaderHorizBeside	= 1,
        swDetailChamferDimLeaderHorizAbove	= 2,
        swDetailChamferDimLeaderAngBeside	= 3,
        swDetailChamferDimLeaderAngAbove	= 4,
        swDetailChamferDimLeaderAlongEdge	= 5
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("0805C313-44B3-428F-B9DA-0504FE330C1B") swDetailingChamferDimXStyle_e
    {
        swDetailingChamferDimXStyleUpperCaseX	= 1,
        swDetailingChamferDimXStyleLowerCaseX	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("3DA06A5B-2F03-409F-9D95-3253053D65AC") swHemPositionTypes_e
    {
        swHemPositionTypeInside	= 0,
        swHemPositionTypeOutside	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("F52DA2BD-FD80-4655-A1C5-F3B974F92A96") swHemTypes_e
    {
        swHemTypeOpen	= 0,
        swHemTypeClosed	= 1,
        swHemTypeTearDrop	= 2,
        swHemTypeRolled	= 3,
        swHemTypeDouble	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("9AE12F04-B20E-4967-9915-2246F9FE9EB8") swBreakCornerTypes_e
    {
        swBreakCornerTypeFillet	= 0,
        swBreakCornerTypeChamfer	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("3177B4F2-C97F-4291-A0AC-C28300288335") swJogDimensionPositionType_e
    {
        swJogDimensionPositionInsideOffset	= 1,
        swJogDimensionPositionOutsideOffset	= 2,
        swJogDimensionPositionOverallPosition	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("F705B503-313C-447C-AC4F-B7B4353B6BC8") swJogPositionType_e
    {
        swJogPositionBendCenterline	= 1,
        swJogPositionMaterialInside	= 2,
        swJogPositionMaterialOutside	= 3,
        swJogPositionBendOutside	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("705F4831-7766-4DC6-928B-3095637A49A4") swJogOffsetTypes_e
    {
        swJogOffsetBlind	= 1,
        swJogOffsetUpToVertex	= 2,
        swJogOffsetUpToSurface	= 3,
        swJogOffsetFromSurface	= 4,
        swJogOffsetMidPlane	= 5
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("775B74DB-80CD-4003-8942-5702DBD03DE1") swSurfaceTrimType_e
    {
        swTypeTrimTool	= 0,
        swTypeMutualTrim	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("5B9D8B74-3E23-446C-BDA2-7948BEA489DF") swRevolveType_e
    {
        swRevolveTypeOneDirection	= 0,
        swRevolveTypeMidPlane	= 1,
        swRevolveTypeTwoDirection	= 2,
        swRevolveTypeOneDirection360Degrees	= 3,
        swRevolveTypeMidPlane360Degrees	= 4,
        swRevolveTypeTwoDirection360Degrees	= 5
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("82F97DC3-D0BB-401F-9F76-B5A8535A8219") swSurfaceExtendEndCond_e
    {
        swSurfaceExtendEndCondDistance	= 0,
        swSurfaceExtendEndCondUpToPoint	= 1,
        swSurfaceExtendEndCondUpToSurface	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("09F1742A-88C8-49A0-83A9-E535128A37A2") swCalloutTargetStyle_e
    {
        swCalloutTargetStyle_None	= 0,
        swCalloutTargetStyle_Square	= 1,
        swCalloutTargetStyle_Circle	= 2,
        swCalloutTargetStyle_Triangle	= 3,
        swCalloutTargetStyle_Arrow	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("4611547F-410A-4F62-9514-0EF12B2B127E") swBendType_e
    {
        swSharpBend	= 0,
        swRoundBend	= 1,
        swFlatBend	= 2,
        swNoneBend	= 3,
        swBaseBend	= 4,
        swMiterBend	= 5,
        swFlat3dBend	= 6,
        swMirrorBend	= 7,
        swEdgeFlangeBend	= 8,
        swHemBend	= 9,
        swFreeFormBend	= 10,
        swRuledBend	= 11,
        swLoftedBend	= 12
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("D99426AD-6D70-41EE-80E8-787D836693C7") swBlockDefinitionExtFileStatus_e
    {
        swBlockDefinitionExtFile_Failed	= -1,
        swBlockDefinitionExtFile_Success	= 0,
        swBlockDefinitionExtFile_NotLinked	= 1,
        swBlockDefinitionExtFile_MissingReference	= 2,
        swBlockDefinitionExtFile_OutOfDateReference	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("572829E5-C9A2-4345-9A21-7414D19867DE") swCrossHatchFilter_e
    {
        swCrossHatchInclude	= 0,
        swCrossHatchExclude	= 1,
        swCrossHatchOnly	= 2,
        swCrossHatchAndExplodeOnly	= 3,
        swSolidHatchOnly	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("CFFD955A-B5C3-4629-B954-993D8A5913AF") swCheckOutOfDate_e
    {
        swCheckOutOfDate_DoNotCheck	= 0,
        swCheckOutOfDate_Indicate	= 1,
        swCheckOutOfDate_AlwaysResolve	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("9FF70D80-510A-4D1D-8B39-437712593E03") swBreakLineStyle_e
    {
        swBreakLine_Straight	= 1,
        swBreakLine_ZigZag	= 2,
        swBreakLine_Curve	= 3,
        swBreakLine_SmallZigZag	= 4,
        swBreakLine_Jagged	= 5
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("DA6D92E6-1EEA-423C-A6EE-F3A69176754F") swBreakLineOrientation_e
    {
        swBreakLineHorizontal	= 1,
        swBreakLineVertical	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("EEC016C2-5477-4F1F-A924-BACA2F242D06") swSaveAsmAsPartOptions_e
    {
        swSaveAsmAsPart_AllComponents	= 1,
        swSaveAsmAsPart_ExteriorComponents	= 2,
        swSaveAsmAsPart_ExteriorFaces	= 3,
        swSaveAsmAsPart_UserDefinedComponents	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("8D280B53-110E-461C-A46B-ED24EC9E0BE9") swPrompForFilenameCause_e
    {
        swUnused	= 0,
        swGeneric	= 1,
        swMirrorComponent	= 2,
        swWeldBead	= 3,
        swDerivedPart	= 4,
        swSplitAssembly	= 5,
        swSplitPart	= 6,
        swInsertEnvelopeFromFile	= 7,
        swMirrorComponentBrowse	= 8,
        swCreateNamedViewFromFile	= 9,
        swComponentPropsReplace	= 10,
        swOpenAssociatedDrawing	= 11,
        swFileReloadReplace	= 12,
        swDrawingAddViewFromFile	= 13,
        swDrawingInsert3ViewFromFile	= 14,
        swAddComponent	= 15,
        swStartRouteAssembly	= 16,
        swSaveRoutePart	= 17,
        swSaveVirtualComponentExternally	= 18,
        swEditReadOnlyComponent	= 19,
        swInsertBlock	= 20,
        swSketchBlock	= 21,
        swSaveDefeaturedModel	= 22,
        swFormNewSubAssembly	= 23,
        swAddVirtualComponent	= 24,
        swMakeComponentIndependent	= 25,
        swPromptForFilename_Cancelled	= 26
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("B983859C-CAAF-4B2A-9692-58BBBF00FBB1") swRefPlaneType_e
    {
        swRefPlaneInvalid	= 0,
        swRefPlaneUndefined	= 1,
        swRefPlaneLinePoint	= 2,
        swRefPlaneThreePoint	= 3,
        swRefPlaneLineLine	= 4,
        swRefPlaneDistance	= 5,
        swRefPlaneParallel	= 6,
        swRefPlaneAngle	= 7,
        swRefPlaneNormal	= 8,
        swRefPlaneOnSurface	= 9,
        swRefPlaneSWStandard	= 10,
        swRefPlaneConstraintBase	= 11
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("8645C20B-A210-45F4-9F9B-B5A7026C0F60") swRefPointType_e
    {
        swRefPointInvalid	= 0,
        swRefPointUndefined	= 1,
        swRefPointAlongCurve	= 2,
        swRefPointCenterEdge	= 3,
        swRefPointFaceCenter	= 4,
        swRefPointFaceVertexProjection	= 5,
        swRefPointIntersection	= 6,
        swRefPointSketchPoint	= 7
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("A916C78B-42C7-401B-A950-467F2141A68A") swRefPointAlongCurveType_e
    {
        swRefPointAlongCurveDistance	= 0,
        swRefPointAlongCurvePercentage	= 1,
        swRefPointAlongCurveEvenlyDistributed	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("A60EC288-0262-4821-91EA-E7FAE7E5ABA8") swOnSurfacePlaneProjectType_e
    {
        swOnSurfacePlaneProjecttoNearestLocation	= 0,
        swOnSurfacePlaneProjectAlongSketchNormal	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("37945090-90B0-40C3-8571-D2D9615748E4") swFileSaveTypes_e
    {
        swFileSave	= 1,
        swFileSaveAs	= 2,
        swFileSaveAsCopy	= 3,
        swFileSaveAsCopyAndOpen	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("66D848B6-3A85-4581-9763-5646054F11B9") swCenterMarkStyle_e
    {
        swCenterMark_NonAnnotation	= 1,
        swCenterMark_Single	= 2,
        swCenterMark_LinearGroup	= 3,
        swCenterMark_CircularGroup	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("FCF53C5E-F559-4EF8-AB05-8FD50C9F3F76") swCenterMarkConnectionLine_e
    {
        swCenterMark_ShowNoConnectLines	= 0,
        swCenterMark_ShowLinearConnectLines	= 0x1,
        swCenterMark_ShowCircularConnectLines	= 0x2,
        swCenterMark_ShowRadialConnectLines	= 0x4,
        swCenterMark_ShowBaseCenterMarkLines	= 0x8
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("B04356AE-A790-4AAC-BA50-D4AB68413F76") swTextAlignmentVertical_e
    {
        swTextAlignmentTop	= 0,
        swTextAlignmentMiddle	= 1,
        swTextAlignmentBottom	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("4CA1BC39-4A0E-43DE-9B3C-2498FA0933A1") swMacroFeatureEntityIdType_e
    {
        swMacroFeatureEntityIdNotApplied	= -1,
        swMacroFeatureEntityIdUndefined	= 0,
        swMacroFeatureEntityIdUnique	= 1,
        swMacroFeatureEntityIdDerived	= 2,
        swMacroFeatureEntityIdUserDefined	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("78EA054C-1B3A-4E5A-B8A5-EFB0073A5C9C") swCornerReliefType_e
    {
        swCornerCircularRelief	= 0,
        swCornerSquareRelief	= 1,
        swCornerBendWaistRelief	= 2,
        swCornerTearRelief	= 3,
        swCornerConstantWidthRelief	= 4,
        swCornerObroundRelief	= 5,
        swCornerMixed	= 6,
        swCornerFullRoundRelief	= 7,
        swCornerSuitCaseRelief	= 8,
        swCornerRectangularRelief	= 9
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("CF292E6A-D6EB-412B-8B4F-73B21AD0EEA6") swMoveRollbackBarTo_e
    {
        swMoveRollbackBarToEnd	= 1,
        swMoveRollbackBarToPreviousPosition	= 2,
        swMoveRollbackBarToBeforeFeature	= 3,
        swMoveRollbackBarToAfterFeature	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("1C49A590-760B-4b0d-94B0-1CF67A4AD4B3") swMoveFreezeBarTo_e
    {
        swMoveFreezeBarToEnd	= 1,
        swMoveFreezeBarToBeforeFeature	= 2,
        swMoveFreezeBarToAfterFeature	= 3,
        swMoveFreezeBarToTop	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("B9586204-7F71-427A-9BA4-CF60CF453B4B") swBlockInstanceTextDisplay_e
    {
        swBlockInstanceTextDisplayNone	= 1,
        swBlockInstanceTextDisplayAll	= 2,
        swBlockInstanceTextDisplayNormal	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("AA042D13-D592-4F75-8EDF-FA501C0ECF05") swTranslationNotifyOptions_e
    {
        swTranslationNotifySilentMode	= 0x1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("683072BF-D0FC-4932-A9C2-CA6BB631A8C6") swMacroFeatureOptions_e
    {
        swMacroFeatureByDefault	= 0,
        swMacroFeatureAlwaysAtEnd	= 0x1,
        swMacroFeatureIsPatternable	= 0x2,
        swMacroFeatureIsDragable	= 0x4,
        swMacroFeatureNoCachedBody	= 0x8,
        swMacroFeatureEmbedMacroFile	= 0x10
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("4F3FF558-EE02-4343-963C-42981BF87120") swMacroFeatureSecurityOptions_e
    {
        swMacroFeatureSecurityByDefault	= 0,
        swMacroFeatureSecurityCannotBeDeleted	= 0x1,
        swMacroFeatureSecurityNotEditable	= 0x2,
        swMacroFeatureSecurityCannotBeSuppressed	= 0x4,
        swMacroFeatureSecurityCannotBeReplaced	= 0x8,
        swMacroFeatureSecurityEnableNote	= 0x10,
        swMacroFeatureSecurityCannotBeRolledBack	= 0x20
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("0A0BDCA4-0895-4F7A-A78C-394D17A81F5C") swPageSetupInUse_e
    {
        swPageSetupInUse_Application	= 1,
        swPageSetupInUse_Document	= 2,
        swPageSetupInUse_DrawingSheet	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("DD806D8D-C038-4544-B1D0-58C6A86BCFBD") swAutodimEntities_e
    {
        swAutodimEntitiesBasedOnPreselect	= 0,
        swAutodimEntitiesAll	= 1,
        swAutodimEntitiesSelected	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("AE2040E4-E895-43CB-9C4C-C680B68C4E35") swAutodimMark_e
    {
        swAutodimMarkEntities	= 0x1,
        swAutodimMarkHorizontalDatum	= 0x2,
        swAutodimMarkVerticalDatum	= 0x4,
        swAutodimMarkOriginDatum	= 0x8
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("FD74DF59-8C51-4A95-8CC5-11BCA4543006") swAutodimScheme_e
    {
        swAutodimSchemeBaseline	= 1,
        swAutodimSchemeOrdinate	= 2,
        swAutodimSchemeChain	= 3,
        swAutodimSchemeCenterline	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("4A5F1BF3-8803-4AF9-B38B-ED6C8039F9C7") swAutodimHorizontalPlacement_e
    {
        swAutodimHorizontalPlacementBelow	= -1,
        swAutodimHorizontalPlacementAbove	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("E7C74949-FCBF-493B-91B9-66968491E40E") swAutodimVerticalPlacement_e
    {
        swAutodimVerticalPlacementLeft	= -1,
        swAutodimVerticalPlacementRight	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("3670C9B8-86D0-4B6A-9417-DE7C88A4907E") swAutodimStatus_e
    {
        swAutodimStatusSuccess	= 0,
        swAutodimStatusBadOptionValue	= 1,
        swAutodimStatusNoActiveDoc	= 2,
        swAutodimStatusDocTypeNotSupported	= 3,
        swAutodimStatusNoActiveSketch	= 4,
        swAutodimStatus3DSketchNotSupported	= 5,
        swAutodimStatusSketchIsEmpty	= 6,
        swAutodimStatusSketchIsOverDefined	= 7,
        swAutodimStatusNoEntities	= 8,
        swAutodimStatusEntitiesNotValid	= 9,
        swAutodimStatusCenterlineNotAllowed	= 10,
        swAutodimStatusDatumNotSupplied	= 11,
        swAutodimStatusDatumNotUnique	= 12,
        swAutodimStatusDatumNotValidType	= 13,
        swAutodimStatusDatumLineNotCenterline	= 14,
        swAutodimStatusDatumLineNotVertical	= 15,
        swAutodimStatusDatumLineNotHorizontal	= 16,
        swAutodimStatusAlgorithmFailed	= 17,
        swAutodimStatusSketchNoSolutionFound	= 18
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("E4890091-150D-41EC-A253-AF77D0FE9E3D") swFeatureFilletOptions_e
    {
        swFeatureFilletPropagate	= 0x1,
        swFeatureFilletUniformRadius	= 0x2,
        swFeatureFilletVarRadiusType	= 0x4,
        swFeatureFilletUseHelpPoint	= 0x8,
        swFeatureFilletUseTangentHoldLine	= 0x10,
        swFeatureFilletCornerType	= 0x20,
        swFeatureFilletAttachEdges	= 0x40,
        swFeatureFilletKeepFeatures	= 0x80,
        swFeatureFilletCurvatureContinuous	= 0x100,
        swFeatureFilletConstantWidth	= 0x200,
        swFeatureFilletNoTrimNoAttached	= 0x400,
        swFeatureFilletReverseFace1Dir	= 0x800,
        swFeatureFilletReverseFace2Dir	= 0x1000,
        swFeatureFilletPropagateFeatToParts	= 0x2000,
        swFeatureFilletAsymmetric	= 0x4000
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("386C2717-2AC3-4162-B8A1-AEEC4967D877") swRibExtrusionDirection_e
    {
        swRibParallelToSketch	= 0,
        swRibNormalToSketch	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("271630CE-17B1-40DF-AAA8-44515A835473") swRibType_e
    {
        swRibLinear	= 0,
        swRibNatural	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("47E53B1B-61BC-446E-9DAE-4C90107D3872") swSimpleFilletType_e
    {
        swConstRadiusFillet	= 0,
        swFaceFillet	= 2,
        swFullRoundFillet	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("EE268666-97CA-4848-8DF9-D52D85AA48BB") swSimpleFilletWhichFaces_e
    {
        swSimpleFilletSingleRadius	= 0,
        swFaceFilletSet1	= 1,
        swFaceFilletSet2	= 2,
        swFullRoundFilletSet1	= 3,
        swFullRoundFilletCenterSet	= 4,
        swFullRoundFilletSet2	= 5
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("A46D1628-AEF3-4ADB-A4DA-E6F8299346AE") swHelixDefinedBy_e
    {
        swHelixDefinedByPitchAndRevolution	= 0,
        swHelixDefinedByHeightAndRevolution	= 1,
        swHelixDefinedByHeightAndPitch	= 2,
        swHelixDefinedBySpiral	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("DAC28697-EAF9-4021-9CB1-0E06303AC158") swCreateWireBodyOptions_e
    {
        swCreateWireBodyByDefault	= 0,
        swCreateWireBodyMergeCurves	= 0x1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("C14D2825-94FA-4F77-A4CC-B7AA8D45AA22") swBoundingBoxOptions_e
    {
        swBoundingBoxIncludeRefPlanes	= 0x1,
        swBoundingBoxIncludeSketches	= 0x2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("2BB47770-EB08-4530-A72E-2A620AF93E95") swCosmeticThreadType_e
    {
        swApplyCosmeticThread_Blind	= 0,
        swApplyCosmeticThread_UpToNext	= 1,
        swApplyCosmeticThread_ThroughFeature	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("0AB68F04-3871-49CD-AD03-FEACB6392EEA") swCosmeticThreadDiameterType_e
    {
        swCosmeticThread_ConicalOffset	= 1,
        swCosmeticThread_MajorDiameter	= 2,
        swCosmeticThread_MinorDiameter	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("C03FA98B-2F9D-4F98-BFDE-6ACFB170056D") swDimensionParamType_e
    {
        swDimensionParamTypeUnknown	= -1,
        swDimensionParamTypeDoubleLinear	= 0,
        swDimensionParamTypeDoubleAngular	= 1,
        swDimensionParamTypeInteger	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("425102A5-D235-414F-9615-C8D5D80F1797") swTableItemInsertPosition_e
    {
        swTableItemInsertPosition_First	= 1,
        swTableItemInsertPosition_Before	= 2,
        swTableItemInsertPosition_After	= 3,
        swTableItemInsertPosition_Last	= 4,
        swTableItemMovePosition_Relative	= 5
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("83A2E405-7D03-40AE-9867-0EE27BE74C6E") swTableHeaderPosition_e
    {
        swTableHeader_None	= 0,
        swTableHeader_Top	= 1,
        swTableHeader_Bottom	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("6F938C97-1382-49DB-8278-6F919E482125") swTableCellRangeIdentifier_e
    {
        swTableCellRange_Current	= -1,
        swTableCellRange_All	= -2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("E714534B-849F-406A-91A9-AB9DA0A39AB9") swTableSplitLocations_e
    {
        swTableSplit_BeforeRow	= 1,
        swTableSplit_AfterRow	= 2,
        swTableSplit_BeforeColumn	= 3,
        swTableSplit_AfterColumn	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("E7C2A65B-7D00-4F94-9255-631D64B64663") swTableMergeLocations_e
    {
        swTableMerge_WithPrevious	= 1,
        swTableMerge_WithNext	= 2,
        swTableMerge_All	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("9DE5A063-315B-4636-B774-3BDB6EB59038") swTableSplitDirection_e
    {
        swTableSplit_None	= 0,
        swTableSplit_Horizontal	= 1,
        swTableSplit_Vertical	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("3EE45D03-9C7E-4BE5-9D2E-1180FDF06283") swTableRowColSizeChangeBehavior_e
    {
        swTableRowColChange_TableSizeCanChange	= 0,
        swTableRowColChange_AbsorbedByNext	= 1,
        swTableRowColChange_AbsorbedByPrevious	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("2EC9072A-7798-43C4-8CCC-C2BC2D4056DC") swTableAnnotationType_e
    {
        swTableAnnotation_General	= 0,
        swTableAnnotation_HoleChart	= 1,
        swTableAnnotation_BillOfMaterials	= 2,
        swTableAnnotation_RevisionBlock	= 3,
        swTableAnnotation_WeldmentCutList	= 4,
        swTableAnnotation_TitleBlock	= 5,
        swTableAnnotation_WeldTable	= 6,
        swTableAnnotation_BendTable	= 7,
        swTableAnnotation_PunchTable	= 8,
        swTableAnnotation_GeneralTolerance	= 9
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("2C615394-1DFE-4899-9EE0-E954550C18F3") swTableColumnTypes_e
    {
        swTableColumnType_UserDefined	= 0,
        swHoleTableColumnType_XLocation	= 101,
        swHoleTableColumnType_YLocation	= 102,
        swHoleTableColumnType_Tag	= 103,
        swHoleTableColumnType_Quantity	= 104,
        swHoleTableColumnType_Size	= 105,
        swBomTableColumnType_PartNumber	= 201,
        swBomTableColumnType_ItemNumber	= 202,
        swBomTableColumnType_Quantity	= 203,
        swBomTableColumnType_CustomProperty	= 204,
        swBomTableColumnType_UnitOfMeasure	= 205,
        swBomTableColumnType_Equation	= 206,
        swBomTableColumnType_ComponentReference	= 207,
        swBomTableColumnType_ToolboxProperty	= 208,
        swBomTableColumnType_CutListProperties	= 209,
        swRevisionTableColumnType_Zone	= 301,
        swRevisionTableColumnType_Revision	= 302,
        swRevisionTableColumnType_Description	= 303,
        swRevisionTableColumnType_Date	= 304,
        swRevisionTableColumnType_Approved	= 305,
        swRevisionTableColumnType_CustomProperties	= 306,
        swWeldTableColumnType_ItemNumber	= 401,
        swWeldTableColumnType_Quantity	= 402,
        swWeldTableColumnType_CutListName	= 403,
        swWeldTableColumnType_CustomProperty	= 404,
        swBendTableColumnType_Tag	= 501,
        swBendTableColumnType_Direction	= 502,
        swBendTableColumnType_Angle	= 503,
        swBendTableColumnType_InnerRadius	= 504,
        swBendTableColumnType_ComplementaryAngle	= 505,
        swBendTableColumnType_BendOrder	= 506,
        swBendTableColumnType_BendAllowance	= 507,
        swPunchTableColumnType_XLocation	= 601,
        swPunchTableColumnType_YLocation	= 602,
        swPunchTableColumnType_PunchID	= 603,
        swPunchTableColumnType_Quantity	= 604,
        swPunchTableColumnType_Angle	= 605,
        swPunchTableColumnType_Tag	= 606
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("2ACAE6E5-5CBE-4DC4-BC09-976C0CF0D81E") swBomType_e
    {
        swBomType_PartsOnly	= 1,
        swBomType_TopLevelOnly	= 2,
        swBomType_Indented	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("4B7B5313-0BF2-4A11-A72A-9234DF10FD10") swZeroQuantityDisplay_e
    {
        swZeroQuantityDashed	= 1,
        swZeroQuantityZero	= 2,
        swZeroQuantityBlank	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("AB6090A3-0659-46B8-B579-F6184ABD580E") swKeepReplacedCompOption_e
    {
        swKeepBothNewItemNumber	= 0,
        swKeepBothSameItemNumber	= 1,
        swKeepItemNumber	= 2,
        swKeepNewItemNumberRemoveReplacedComp	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("5CCEFA28-936C-46f1-ABCF-D42852ACEBB6") swTableTagStyle_e
    {
        swTable_AlphaNumericTags	= 1,
        swTable_NumericTags	= 2,
        swTable_ManualTags	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("95E4427D-270B-456C-AEAA-46E93606F336") swHoleTableTagStyle_e
    {
        swHoleTable_AlphaNumericTags	= 1,
        swHoleTable_NumericTags	= 2,
        swHoleTable_ManualTags	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("01A51746-4E3C-4F7F-9BEC-1A40D0F24CE8") swRevisionTableTagStyle_e
    {
        swRevisionTable_AlphabeticTags	= 1,
        swRevisionTable_NumericTags	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("4457EED5-5180-46F6-A5AB-B1FB11A8DE6F") swRevisionTableSymbolShape_e
    {
        swRevisionTable_CircleSymbol	= 1,
        swRevisionTable_SquareSymbol	= 2,
        swRevisionTable_TriangleSymbol	= 3,
        swRevisionTable_HexagonSymbol	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("D978EB22-C77B-44ab-BE62-6F0DD351CDAD") swRevisionTableMultipleSheetStyle_e
    {
        swRevisionTable_SeeSheet1	= 1,
        swRevisionTable_LinkedToSheet1	= 2,
        swRevisionTable_Independent	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("6090C355-A547-4689-A9A5-951EAC75BD81") swEdgesInContextEditTransparencyType_e
    {
        swEdgesInContextEditTransparency_OpaqueAssembly	= 1,
        swEdgesInContextEditTransparency_MaintainAssembly	= 2,
        swEdgesInContextEditTransparency_ForceAssembly	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("3FAC458E-ED47-4ec5-BDCF-B06C50D1722E") swDesignTableSourceTypes_e
    {
        swDesignTableSourceNone	= 1,
        swDesignTableSourceFromFile	= 2,
        swDesignTableSourceLinked	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("7F7DC719-440A-4647-94DB-AED7A0393ECD") swDesignTableUpdateOptions_e
    {
        swUpdateDesignTableSelected	= 1,
        swUpdateDesignTableAll	= 2,
        swUpdateDesignTableNone	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("16F37C05-DB98-46bb-BD42-B1397CF3A9D8") swDesignTableErrors_e
    {
        swDTblNoError	= 0,
        swDTblCfgInvalid	= 1,
        swDTblCorrupt	= 2,
        swDTblExiting	= 3,
        swDTblNoFileName	= 4,
        swDTblCurrentlyEditing	= 5,
        swDTblTooManyColumns	= 6,
        swDTblLinkChanged	= 7,
        swDTblFileNotFound	= 8,
        swDTblInvalidColumnValue	= 9,
        swDTblInvalidColCustomProp	= 10,
        swDTblInvalidColumnDimName	= 11,
        swDTblInvalidColumnFeatName	= 12,
        swDTblInvalidColumnKeyWord	= 13,
        swDTblInvalidConfigName	= 14,
        swDTblDataInvalidComponetState	= 15,
        swDTblDataInvalidFeatureState	= 16,
        swDTblInvalidYesNoData	= 17,
        swDTblDisplayStateError	= 18,
        swDTblModelFeatRequired	= 19,
        swDTblParentConfigInvalid	= 20,
        swDTblInvalidRowNameKeyword	= 21,
        swDTblTolTypeInvalid	= 22,
        swDTblNotSuppressible	= 23,
        swDTblTableIsEmpty	= 24,
        swDTblNegitiveDimension	= 25,
        swDTbUnUsedConfiguration	= 26,
        swDTbCannotOpen	= 27,
        swDTInvalidComponentName	= 28,
        swDTNeedsComponent	= 29,
        swDTDimValueRangeError	= 30,
        swDTDimAngleValueRangeError	= 31,
        swDTInvalidEquation	= 32,
        swDTConfigCircularDefinition	= 33
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("FFFD7919-D188-446A-AC3D-9F81F33AC85B") swExternalReferencesUpdateOutOfDateLinkedDesignTable_e
    {
        swUpdateDesignTable_Prompt	= 0,
        swUpdateDesignTable_Model	= 1,
        swUpdateLinkedDesignTable_ExcelFile	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("606D848F-BA60-4BBA-AB68-97DE1DCFA3E4") swLoadExternalReferences_e
    {
        swLoadExternalReferences_Prompt	= 0,
        swLoadExternalReferences_All	= 1,
        swLoadExternalReferences_None	= 2,
        swLoadExternalReferences_ChangedOnly	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("52A8AC05-773D-4493-8B9C-D4E14C68BE45") swSketchRelationFilterType_e
    {
        swAll	= 0,
        swDangling	= 1,
        swOverDefining	= 2,
        swExternal	= 3,
        swDefinedInContext	= 4,
        swLocked	= 5,
        swBroken	= 6,
        swSelectedEntities	= 7
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("05BB4739-EAB8-4544-BB80-B7F4F0F08CFD") swMateEntity2ReferenceType_e
    {
        swMateEntity2ReferenceType_Point	= 0,
        swMateEntity2ReferenceType_Line	= 1,
        swMateEntity2ReferenceType_Circle	= 2,
        swMateEntity2ReferenceType_Plane	= 3,
        swMateEntity2ReferenceType_Cylinder	= 4,
        swMateEntity2ReferenceType_Sphere	= 5,
        swMateEntity2ReferenceType_Set	= 6,
        swMateEntity2ReferenceType_Cone	= 7,
        swMateEntity2ReferenceType_SweptSurface	= 8,
        swMateEntity2ReferenceType_MultipleSurface	= 9,
        swMateEntity2ReferenceType_GenSurface	= 10,
        swMateEntity2ReferenceType_Ellipse	= 11,
        swMateEntity2ReferenceType_GeneralCurve	= 12,
        swMateEntity2ReferenceType_UNKNOWN	= 13
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("6A55A95E-775B-4B23-98A4-43906AD43B37") swLayerOverride_e
    {
        swLayerOverrideNone	= 0,
        swLayerOverrideColor	= 1,
        swLayerOverrideStyle	= 2,
        swLayerOverrideWidth	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("2B24C727-7474-4F22-B478-6E740A4D9389") swSetSectionLabelStatus_e
    {
        swSetSectionLabel_DuplicateLabelFailure	= -2,
        swSetSectionLabel_Failure	= -1,
        swSetSectionLabel_Okay	= 0,
        swSetSectionLabel_DuplicateLabelWarning	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("3B832244-512B-4207-895C-983CBA6D37EC") swInsertNewPartErrorCode_e
    {
        swInsertNewPartError_ErrorUknown	= 0,
        swInsertNewPartError_NoError	= 1,
        swInsertNewPartError_FilePathEmpty	= 2,
        swInsertNewPartError_FileAlreadyExists	= 3,
        swInsertNewPartError_FolderDoesNotExist	= 4,
        swInsertNewPartError_ExtensionNotSldPrt	= 5,
        swInsertNewPartError_NotAFaceOrPlane	= 6,
        swInsertNewPartError_CannotSelectFaceOrPlane	= 7
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("12E0CCC0-BDB9-4C0F-950C-2AA48D2C312D") swFeatureTreeFolderType_e
    {
        swFeatureTreeFolder_EmptyBefore	= 1,
        swFeatureTreeFolder_Containing	= 2,
        swFeatureTreeFolder_Mold	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("35853AA5-D3B3-4FE2-824F-946176529105") swMassPropertyMoment_e
    {
        swMassPropertyMomentAboutCenterOfMass	= 0,
        swMassPropertyMomentAboutCoordSys	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("8ACB8EE1-E98A-4FA6-BEAF-4757D9839E53") swLinkDimensionError_e
    {
        swLinkDimensionError_ErrorUknown	= 0,
        swLinkDimensionError_NoError	= 1,
        swLinkDimensionError_LinkAcrossDocs	= 2,
        swLinkDimensionError_IncompatibleDimTypes	= 3,
        swLinkDimensionError_AlreadyLinked	= 4,
        swLinkDimensionError_ReadOnlyOrDriven	= 5,
        swLinkDimensionError_IncompatibleValues	= 6,
        swLinkDimensionError_DrivenByEquation	= 7,
        swLinkDimensionError_CannotLink	= 8,
        swLinkDimensionError_UnableToCreateSharedParam	= 9,
        swLinkDimensionError_UnlinkFailure	= 10,
        swLinkDimensionError_EmptyString	= 11,
        swLinkDimensionError_InvalidString	= 12
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("77E7ABFB-C9AA-4C6A-AC14-05F1AEC611AD") swConstraintType_e
    {
        swConstraintType_INVALIDCTYPE	= 0,
        swConstraintType_DISTANCE	= 1,
        swConstraintType_ANGLE	= 2,
        swConstraintType_RADIUS	= 3,
        swConstraintType_HORIZONTAL	= 4,
        swConstraintType_VERTICAL	= 5,
        swConstraintType_TANGENT	= 6,
        swConstraintType_PARALLEL	= 7,
        swConstraintType_PERPENDICULAR	= 8,
        swConstraintType_COINCIDENT	= 9,
        swConstraintType_CONCENTRIC	= 10,
        swConstraintType_SYMMETRIC	= 11,
        swConstraintType_ATMIDDLE	= 12,
        swConstraintType_ATINTERSECT	= 13,
        swConstraintType_SAMELENGTH	= 14,
        swConstraintType_DIAMETER	= 15,
        swConstraintType_OFFSETEDGE	= 16,
        swConstraintType_FIXED	= 17,
        swConstraintType_ARCANG90	= 18,
        swConstraintType_ARCANG180	= 19,
        swConstraintType_ARCANG270	= 20,
        swConstraintType_ARCANGTOP	= 21,
        swConstraintType_ARCANGBOTTOM	= 22,
        swConstraintType_ARCANGLEFT	= 23,
        swConstraintType_ARCANGRIGHT	= 24,
        swConstraintType_HORIZPOINTS	= 25,
        swConstraintType_VERTPOINTS	= 26,
        swConstraintType_COLINEAR	= 27,
        swConstraintType_CORADIAL	= 28,
        swConstraintType_SNAPGRID	= 29,
        swConstraintType_SNAPLENGTH	= 30,
        swConstraintType_SNAPANGLE	= 31,
        swConstraintType_USEEDGE	= 32,
        swConstraintType_ELLIPSEANG90	= 33,
        swConstraintType_ELLIPSEANG180	= 34,
        swConstraintType_ELLIPSEANG270	= 35,
        swConstraintType_ELLIPSEANGTOP	= 36,
        swConstraintType_ELLIPSEANGBOTTOM	= 37,
        swConstraintType_ELLIPSEANGLEFT	= 38,
        swConstraintType_ELLIPSEANGRIGHT	= 39,
        swConstraintType_ATPIERCE	= 40,
        swConstraintType_DOUBLEDISTANCE	= 41,
        swConstraintType_MERGEPOINTS	= 42,
        swConstraintType_ANGLE3P	= 43,
        swConstraintType_ARCLENGTH	= 44,
        swConstraintType_NORMAL	= 45,
        swConstraintType_NORMALPOINTS	= 46,
        swConstraintType_SKETCHOFFSET	= 47,
        swConstraintType_ALONGX	= 48,
        swConstraintType_ALONGY	= 49,
        swConstraintType_ALONGZ	= 50,
        swConstraintType_ALONGXPOINTS	= 51,
        swConstraintType_ALONGYPOINTS	= 52,
        swConstraintType_ALONGZPOINTS	= 53,
        swConstraintType_PARALLELYZ	= 54,
        swConstraintType_PARALLELZX	= 55,
        swConstraintType_INTERSECTION	= 56,
        swConstraintType_PATTERNED	= 57,
        swConstraintType_ISOBYPOINT	= 58,
        swConstraintType_SAMEISOPARAM	= 59,
        swConstraintType_FITSPLINE	= 60,
        swConstraintType_EQUALCURVATURE	= 61,
        swConstraintType_EQUALTANGENT	= 62,
        swConstraintType_TANGENTFACE	= 63,
        swConstraintType_ALONGX3D	= 64,
        swConstraintType_ALONGY3D	= 65,
        swConstraintType_ALONGXPOINTS3D	= 66,
        swConstraintType_ALONGYPOINTS3D	= 67,
        swConstraintType_TRACTION	= 68,
        swConstraintType_BELTTRACTION	= 69,
        swConstraintType_BLOCKFIXEDLOCK	= 70,
        swConstraintType_BLOCKNORMALLOCK	= 71,
        swConstraintType_BLOCKROTATELOCK	= 72,
        swConstraintType_FAKESLOTCONSTRAINT	= 73,
        swConstraintType_FIXEDSLOT	= 74,
        swConstraintType_SAMESLOTS	= 75,
        swConstraintType_LINEARPATTCNT	= 76,
        swConstraintType_CIRCULARPATTCNT	= 77,
        swConstraintType_RADIALOFFSET	= 78,
        swConstraintType_PLANAROFFSET	= 79,
        swConstraintType_EQUALCURV3DALIGN	= 80,
        swConstraintType_FLANGEFACEDIST	= 81,
        swConstraintType_CONICRHO	= 82,
        swConstraintType_C3TOUCH	= 83,
        swConstraintType_DOUBLEANGLE	= 84,
        swConstraintType_SAMECURVELENGTH	= 85
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("8A283507-5EBE-4BCB-89F8-048A908B9268") swGeomType_e
    {
        swPOINT	= 0,
        swLINE	= 1,
        swARC	= 2,
        swSPLINECURVE	= 3,
        swELLIPSE	= 4,
        swTEXT	= 5,
        swHATCH	= 6,
        swPARABOLA	= 7,
        sw3DPLANE	= 8,
        sw3DCYLINDER	= 9,
        sw3DSPHERE	= 10,
        sw3DPARAMETRICSURFACE	= 11,
        swDIM	= 12,
        swSUBSKETCH	= 13,
        swINVALIDGTYPE	= 99
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("C5167D55-425F-4099-89BF-A5F5405E3D51") swCreateOrdDimError_e
    {
        swCreateOrdDimErr_Undefined	= -1,
        swCreateOrdDimErr_Success	= 0,
        swCreateOrdDimErr_GenFailure	= 1,
        swCreateOrdDimErr_GenNoInternalDims	= 2,
        swCreateOrdDimErr_GenBadSel	= 3,
        swCreateOrdDimErr_GenNeedModelLoaded	= 4,
        swCreateOrdDimErr_GenSamePartOnly	= 5,
        swCreateOrdDimErr_GenExtraSelection	= 6,
        swCreateOrdDimErr_OrdFailure	= 7,
        swCreateOrdDimErr_OrdDupInGroup	= 8,
        swCreateOrdDimErr_OrdBadDir	= 9
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("4004EF3F-85BA-47F1-AD96-0C0B44379BA4") swRevolveOptions_e
    {
        swRevolveOptionsNone	= 0,
        swAutoCloseSketch	= 0x1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("57A17F6C-4757-42EF-A9C9-72D8E7EF76E5") swConfigurationOptions_e
    {
        swUseAlternateName	= 0x1,
        swDontShowPartsInBOM	= 0x2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("0E920426-39BA-4286-B318-285268F09313") swBlockingStates_e
    {
        swNoBlock	= 0,
        swFullBlock	= 0x1,
        swModifyBlock	= 0x2,
        swPartialModifyBlock	= 0x3,
        swEditorBlock	= 0x4,
        swEditSketchBlock	= 0x5,
        swSystemBlock	= 0x6,
        swViewOnlyBlock	= 0x7,
        swEditSketchAllowExitBlock	= 0x8
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("39021C27-A128-467E-BB84-71A0C3C5A8D6") swRebuildOptions_e
    {
        swRebuildAll	= 0x1,
        swForceRebuildAll	= 0x2,
        swUpdateMates	= 0x4,
        swCurrentSheetDisp	= 0x8,
        swUpdateDirtyOnly	= 0x10
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("63219915-CEA8-4419-B19D-47112720724E") swDimensionPrecisionSettings_e
    {
        swDoNotChangePrecisionSetting	= -1,
        swPrecisionFollowsDocumentSetting	= -2,
        swTolerancePrecisionFollowsNominal	= -3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("E20CC132-C933-4765-A9FD-80E987D43E0D") swCommand_e
    {
        swFileOpen	= 0,
        swFileNew	= 1,
        swOpenRecentFile	= 2,
        swOpenHTMLHelp	= 3,
        swReserved	= 4,
        swVerticalMkt	= 5,
        swUserExperienceLevel	= 6,
        swNextTipOfDayString	= 7,
        swCurrentTipOfDayString	= 8,
        swPrevTipOfDayString	= 9,
        swFontSize	= 10,
        swInterfaceBrightnessTheme	= 11
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("F8274201-92EE-4DA7-B12E-9D2AF7AEB1F5") swPropertyManagerPageBitmapButtons_e
    {
        swBitmapButtonImage_alongz	= 1,
        swBitmapButtonImage_angle	= 2,
        swBitmapButtonImage_auto_bal_circular	= 3,
        swBitmapButtonImage_auto_bal_left	= 4,
        swBitmapButtonImage_auto_bal_right	= 5,
        swBitmapButtonImage_auto_bal_square	= 6,
        swBitmapButtonImage_auto_bal_top	= 7,
        swBitmapButtonImage_diameter	= 8,
        swBitmapButtonImage_distance1	= 9,
        swBitmapButtonImage_distance2	= 10,
        swBitmapButtonImage_draft	= 11,
        swBitmapButtonImage_dve_but_cmark_bolt	= 12,
        swBitmapButtonImage_dve_but_cmark_linear	= 13,
        swBitmapButtonImage_dve_but_cmark_single	= 14,
        swBitmapButtonImage_leader_ang_above	= 15,
        swBitmapButtonImage_leader_ang_beside	= 16,
        swBitmapButtonImage_leader_hor_above	= 17,
        swBitmapButtonImage_leader_hor_beside	= 18,
        swBitmapButtonImage_leader_left	= 19,
        swBitmapButtonImage_leader_no	= 20,
        swBitmapButtonImage_leader_right	= 21,
        swBitmapButtonImage_leader_yes	= 22,
        swBitmapButtonImage_parallel	= 23,
        swBitmapButtonImage_perpendicular	= 24,
        swBitmapButtonImage_reverse_direction	= 25,
        swBitmapButtonImage_revision_circle	= 26,
        swBitmapButtonImage_revision_hexagon	= 27,
        swBitmapButtonImage_revision_square	= 28,
        swBitmapButtonImage_revision_triangle	= 29,
        swBitmapButtonImage_stackleft	= 30,
        swBitmapButtonImage_stackright	= 31,
        swBitmapButtonImage_stackup	= 32,
        swBitmapButtonImage_stack	= 33,
        swBitmapButtonImage_favorite_add	= 34,
        swBitmapButtonImage_favorite_delete	= 35,
        swBitmapButtonImage_favorite_save	= 36,
        swBitmapButtonImage_favorite_load	= 37,
        swBitmapButtonImage_dimension_set_default_attributes	= 38
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("4BA52791-67B6-4D29-8249-117924EA96A5") swGeneralImportSurfaceSolidEntityOptions_e
    {
        swGeneralImportTryFormingSolids	= 0,
        swGeneralImportKnitSurfaces	= 1,
        swGeneralImportDoNotKnit	= 2,
        swGeneralImportByBrep	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("A0C848F1-AFF9-4E59-A289-E998D4176AF0") swGeneralImportFreePointCurveEntityOptions_e
    {
        swGeneralImportAsSketches	= 0,
        swGeneralImportAs3dCurves	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("BE362BC2-BFA2-4861-80AF-CD8CE4FE5FD7") swGeneralImportUnitsOptions_e
    {
        swGeneralImportFileSpecifiedUnit	= 0,
        swGeneralImportDocumentTemplateSpeciedUnit	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("61289FBF-5746-4E48-8D63-3AF82E4E1B98") swTextureRenderModes_e
    {
        swTextureRenderModeImage	= 0,
        swTextureRenderModeBlend	= 1,
        swTextureRenderModeLuminance	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("F356417D-D03B-4C7E-B9B4-F079B6DA9D6C") swSolidworksEditionOptions_e
    {
        SolidworksUnknownEdition	= 0,
        SolidworksCommercialEdition	= 1,
        SolidworksEducationalEdition	= 2,
        SolidworksStudentEdition	= 3,
        SolidworksStudentDesignKitEdition	= 4,
        SolidworksPersonalEdition	= 5,
        SolidworksMakerEdition	= 6
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("29E8CC6F-5C2A-42C4-970C-07505C1D1820") swSolidworksWeldmentEndCondOptions_e
    {
        swEndConditionNone	= 0,
        swEndConditionMiter	= 1,
        swEndConditionButt1	= 2,
        swEndConditionButt2	= 3,
        swEndConditionTrim	= 4,
        swEndConditionUseDefault	= 5
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("1BB5E072-ACB6-4E48-892C-6155E2FC0E0C") swMoveCopyOptions_e
    {
        swMoveCopyOptionsOverwriteExistingDocs	= 0x1,
        swMoveCopyOptionsCreateNewFolder	= 0x2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("A01B62E1-9F8F-4725-8B71-1AA4E70038FF") swMoveCopyError_e
    {
        swMoveCopyErrorNone	= 0,
        swMoveCopyErrorSourceDoesNotExist	= 1,
        swMoveCopyErrorFail	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("1AA9FB46-FC91-4855-836A-5060316B7C2C") swTempBodySelectOptions_e
    {
        swTempBodySelectOptionNone	= 0,
        swTempBodySelectable	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("C671D1E2-BDDF-4679-A146-CB10F71795AF") swBalloonLayoutType_e
    {
        swDetailingBalloonLayout_Square	= 1,
        swDetailingBalloonLayout_Circle	= 2,
        swDetailingBalloonLayout_Top	= 3,
        swDetailingBalloonLayout_Bottom	= 4,
        swDetailingBalloonLayout_Right	= 5,
        swDetailingBalloonLayout_Left	= 6
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("379F8727-E2AC-4B2F-8BA7-0FEB4737EF21") swAddMateError_e
    {
        swAddMateError_ErrorUknown	= 0,
        swAddMateError_NoError	= 1,
        swAddMateError_IncorrectMateType	= 2,
        swAddMateError_IncorrectAlignment	= 3,
        swAddMateError_IncorrectSelections	= 4,
        swAddMateError_OverDefinedAssembly	= 5,
        swAddMateError_IncorrectGearRatios	= 6
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("B4CAD6A0-B1B2-46a5-8089-3F6A0F373C98") swRefAxisType_e
    {
        swAxisTypeOneLine	= 0,
        swAxisTypeTwoPlanes	= 1,
        swAxisTypeTwoPoints	= 2,
        swAxisTypeCylOrConeFace	= 3,
        swAxisTypePtAndPlane	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("A32DB827-4148-4176-8DE9-7E26A4773AAA") swPartingSurfaceMoldParmType_e
    {
        swPartingSurfaceMoldParmTangent	= 0,
        swPartingSurfaceMoldParmNormal	= 1,
        swPartingSurfaceMoldParmPerpendicular	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("9D61BA65-0432-45CF-8429-5646C4F6335C") swPartingSurfaceSmoothingType_e
    {
        swPartingSurfaceSharp	= 1,
        swPartingSurfaceSmooth	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("2D5757AA-0234-4446-AC46-7BF7421140E0") swExternalFileReferencesConfig_e
    {
        swExternalFileReferencesConfigNone	= 0,
        swExternalFileReferencesCurrentConfig	= 1,
        swExternalFileReferencesNamedConfig	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("845DAFF1-AAE0-4313-9D3F-0410C06AEC24") swExternalFileReferencesUpdate_e
    {
        swExternalFileReferencesUpdateNone	= 0,
        swExternalFileReferencesBreakAll	= 1,
        swExternalFileReferencesLockAll	= 2,
        swExternalFileReferencesunlockAll	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("CED12BB7-8621-4936-89E5-954D59DEB741") swSketchRelationEntityTypes_e
    {
        swSketchRelationEntityType_Unknown	= 0,
        swSketchRelationEntityType_SubSketch	= 1,
        swSketchRelationEntityType_Point	= 2,
        swSketchRelationEntityType_Line	= 3,
        swSketchRelationEntityType_Arc	= 4,
        swSketchRelationEntityType_Ellipse	= 5,
        swSketchRelationEntityType_Parabola	= 6,
        swSketchRelationEntityType_Spline	= 7,
        swSketchRelationEntityType_Hatch	= 8,
        swSketchRelationEntityType_Text	= 9,
        swSketchRelationEntityType_Plane	= 10,
        swSketchRelationEntityType_Cylinder	= 11,
        swSketchRelationEntityType_Sphere	= 12,
        swSketchRelationEntityType_Surface	= 13,
        swSketchRelationEntityType_Dimension	= 14
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("2D8787D0-3B21-4417-967F-DA00D3CD03A5") swRebuildOnActivation_e
    {
        swUserDecision	= 0,
        swDontRebuildActiveDoc	= 1,
        swRebuildActiveDoc	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("5AC149B6-2515-4895-9421-1CE2C25E04C3") swTesselationMatchType_e
    {
        swTesselationMatchFacetTopology	= 0,
        swTesselationMatchFacetGeometry	= 1,
        swTesselationMatchEdgeCurve	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("F07EBD5F-52D3-4492-BBC3-52E03E50DD4D") swAlignViewTypes_e
    {
        swNoViewAlignment	= 0,
        swDefaultViewAlignment	= 1,
        swAlignViewHorizontalCenter	= 2,
        swAlignViewVerticalCenter	= 3,
        swAlignViewHorizontalOrigin	= 4,
        swAlignViewVerticalOrigin	= 5
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("5C2F31F8-9FF5-4320-BD7E-C7C41F27071A") swAlignDrawingViewTypes_e
    {
        swHorizontalToSheetClockwise	= 0,
        swHorizontalToSheetCounterclockwise	= 1,
        swDefaultAlignment	= 2,
        swProjectedAngle	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("c124a74d-784f-4f77-83e9-fd5f85479068") swTaskpaneViewStatus_e
    {
        swTaskpaneView_Okay	= 0,
        swTaskpaneView_UnsupportedHandler	= 1,
        swTaskpaneView_CreationFailure	= -1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("c7355766-15e2-45ed-a94e-94a205aa9341") swCropViewErrors_e
    {
        swCropViewErrors_Unknown	= 0,
        swCropViewErrors_NoError	= 1,
        swCropViewErrors_CannotCropDetailOrBrokenView	= 2,
        swCropViewErrors_CannotUnfoldView	= 3,
        swCropViewErrors_IncorrectProfile	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("D9C871D1-F7E2-4AF4-BBD0-804196BFB9ED") swRuledSurfaceType_e
    {
        swRuledSurfaceType_TangentToSurface	= 1,
        swRuledSurfaceType_NormalToSurface	= 2,
        swRuledSurfaceType_TaperedToVector	= 3,
        swRuledSurfaceType_PerpendicularToVector	= 4,
        swRuledSurfaceType_Sweep	= 5
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("1a523bbf-f049-43e9-a8b3-5c1cc8074b31") swSplitBodyType_e
    {
        swSplitBodyType_e_Show	= 0,
        swSplitBodyType_e_Hide	= 1,
        swSplitBodyType_e_Consume	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("068E9088-2039-4c30-B005-E26E93096FCC") swFeatureChamferOption_e
    {
        swFeatureChamferFlipDirection	= 0x1,
        swFeatureChamferKeepFeature	= 0x2,
        swFeatureChamferTangentPropagation	= 0x4,
        swFeatureChamferPropagateFeatToParts	= 0x8
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("56FAA591-44B8-441E-B634-E269F9A044C0") swPersistReferencedObjectStates_e
    {
        swPersistReferencedObject_Ok	= 0,
        swPersistReferencedObject_Invalid	= 0x1,
        swPersistReferencedObject_Suppressed	= 0x2,
        swPersistReferencedObject_Deleted	= 0x4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("151c362a-77ad-497a-8a96-e48661b9d0bb") swMateReferenceIndex_e
    {
        swMateReference_Primary	= 0,
        swMateReference_Secondary	= 1,
        swMateReference_Tertiary	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("5b57d057-3c37-4572-8894-301d98444c12") swMateReferenceType_e
    {
        swMateReferenceType_default	= 0,
        swMateReferenceType_Tangent	= 1,
        swMateReferenceType_Coincident	= 2,
        swMateReferenceType_Concentric	= 3,
        swMateReferenceType_Parallel	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("28677a7f-0e70-48ac-954b-23c9b4301e6a") swMateReferenceAlignment_e
    {
        swMateReferenceAlignment_Any	= 0,
        swMateReferenceAlignment_Aligned	= 1,
        swMateReferenceAlignment_AntiAligned	= 2,
        swMateReferenceAlignment_Closest	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("0E81D5B6-3685-48ce-B6BD-0A785B587807") swDraftAnalysisFaceType_e
    {
        swDraftAnalysisFaceTypePositive	= 0,
        swDraftAnalysisFaceTypeNegative	= 1,
        swDraftAnalysisFaceTypeNoDraft	= 2,
        swDraftAnalysisFaceTypeStraddle	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("142A42A8-851F-4613-8F9F-2F080FE090E8") swShutOffSurfacePatchType_e
    {
        swPatchTypeNoFill	= 0,
        swPatchTypeContact	= 1,
        swPatchTypeTangent	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("4A74ABE8-0A40-4236-9B89-72344CCE75DC") swManipulatorType_e
    {
        swTriadManipulator	= 0,
        swDragArrowManipulator	= 1,
        swPlaneManipulator	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("780CD22F-B22A-478e-8F76-DA5B046207E0") swManipulatorRepresentation_e
    {
        swManipulatorRepresentationNone	= 0,
        swManipulatorRepresentationSquare	= ( swManipulatorRepresentationNone + 1 ) ,
        swManipulatorRepresentationCircle	= ( swManipulatorRepresentationSquare + 1 ) ,
        swManipulatorRepresentationDiamond	= ( swManipulatorRepresentationCircle + 1 ) ,
        swManipulatorRepresentationTriangle	= ( swManipulatorRepresentationDiamond + 1 ) ,
        swManipulatorRepresentationArrow	= ( swManipulatorRepresentationTriangle + 1 ) ,
        swManipulatorRepresentationTextBox	= ( swManipulatorRepresentationArrow + 1 ) ,
        swManipulatorRepresentationRotationHandle	= ( swManipulatorRepresentationTextBox + 1 ) ,
        swManipulatorRepresentationPanHandle	= ( swManipulatorRepresentationRotationHandle + 1 ) ,
        swManipulatorRepresentationScaleHandle	= ( swManipulatorRepresentationPanHandle + 1 ) ,
        swManipulatorRepresentationSurfTopol	= ( swManipulatorRepresentationScaleHandle + 1 ) ,
        swManipulatorRepresentationWireTopol	= ( swManipulatorRepresentationSurfTopol + 1 ) ,
        swManipulatorRepresentationMiscTopol	= ( swManipulatorRepresentationWireTopol + 1 ) ,
        swManipulatorRepresentationBitmap	= ( swManipulatorRepresentationMiscTopol + 1 ) ,
        swManipulatorRepresentationShadow	= ( swManipulatorRepresentationBitmap + 1 ) ,
        swManipulatorRepresentationEmpty	= ( swManipulatorRepresentationShadow + 1 ) 
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("62435CCF-F1FD-42bd-8B9D-F6D2A0E5CC1A") swTriadManipulatorDoNotShow_e
    {
        swTriadManipulatorShowAll	= 0,
        swTriadManipulatorDoNotShowOrigin	= 0x1,
        swTriadManipulatorDoNotShowXAxis	= 0x2,
        swTriadManipulatorDoNotShowYAxis	= 0x4,
        swTriadManipulatorDoNotShowZAxis	= 0x8,
        swTriadManipulatorDoNotShowXYPlane	= 0x10,
        swTriadManipulatorDoNotShowYZPlane	= 0x20,
        swTriadManipulatorDoNotShowZXPlane	= 0x40,
        swTriadManipulatorDoNotShowXYRING	= 0x80,
        swTriadManipulatorDoNotShowYZRING	= 0x100,
        swTriadManipulatorDoNotShowZXRING	= 0x200
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("D10BFA94-4A5F-4912-9969-3C42E1C0D2FD") swTriadManipulatorControlPoints_e
    {
        swTriadManipulatorOrigin	= 0,
        swTriadManipulatorXAxis	= 1,
        swTriadManipulatorYAxis	= 2,
        swTriadManipulatorZAxis	= 3,
        swTriadManipulatorXYPlane	= 4,
        swTriadManipulatorYZPlane	= 5,
        swTriadManipulatorZXPlane	= 6
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("22946d8b-f3d5-44cb-b363-fadfb6dc494b") swDragArrowManipulatorOptions_e
    {
        swDragArrowManipulatorDirection1	= 0,
        swDragArrowManipulatorDirection2	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("8b911ac2-16ab-4df9-9975-1d3e2371556a") swMoveCopyBodyFeatureTransformType_e
    {
        swTransformType_None	= 0,
        swTransformType_Translation	= 1,
        swTransformType_Rotation	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("aeb2b5a9-5050-45b3-a797-d2f091f6f008") swSplitLineFeatureType_e
    {
        swSplitLineFeatureType_Draft	= 0,
        swSplitLineFeatureType_Projection	= 1,
        swSplitLineFeatureType_Intersection	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("3c664769-5c77-471c-be3e-9a37f300e1c4") swSplitLineSplitSurfaceType_e
    {
        swSplitLineSplitSurfaceType_Natural	= 0,
        swSplitLineSplitSurfaceType_Linear	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("C1AC74E1-A867-4ce6-8F70-8EC52501D219") swContactType_e
    {
        swContact	= 0,
        swTangent	= 1,
        swCurvature	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("47bdc789-5e2a-477c-a794-21e369851d00") swWrapSketchType_e
    {
        swWrapSketchType_Emboss	= 0,
        swWrapSketchType_Engrave	= 1,
        swWrapSketchType_Scribe	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("8CC77F89-4E82-45C5-8270-662EE6F4CA23") swWrapMethods_e
    {
        swWrapMethods_Analytical	= 0,
        swWrapMethods_SplineSurface	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("BB151EFA-4F81-47db-89DE-4F2DF6F510E9") swGussetProfileLocationType_e
    {
        swGussetProfileLocationStart	= 0,
        swGussetProfileLocationCenter	= 1,
        swGussetProfileLocationEnd	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("2CDCBF42-873A-4ab9-BF58-5EB72592971C") swGussetThicknessType_e
    {
        swGussetThicknessInner	= 0,
        swGussetThicknessBothSides	= 1,
        swGussetThicknessOuter	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("0325E9A0-6B10-4339-9F23-0C8DA490FD6B") swGussetProfileType_e
    {
        swGussetProfilePolygon	= 0,
        swGussetProfileTriangle	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("259374C3-7A43-4251-8E33-A107E5D3B55B") swCombineBodiesOperationType_e
    {
        swCombineBodiesOperationAdd	= 0,
        swCombineBodiesOperationSubtract	= 1,
        swCombineBodiesOperationCommon	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("9D5D9052-7B2D-48c9-90CE-194C0B922D84") swAcisOutputGeometryPreference_e
    {
        swAcisOutputAsSolidAndSurface	= 0,
        swAcisOutputAs3DCurves	= 1,
        swAcisOutputAs3DCurves_IncludeSketchEnts	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("e2e543d1-1f5c-4d1c-815e-6d4ad76bb4b3") swSketchPointType_e
    {
        swSketchPointType_Unknown	= -1,
        swSketchPointType_Internal	= 0,
        swSketchPointType_User	= 1,
        swSketchPointType_Spline	= 2,
        swSketchPointType_Datum	= 3,
        swSketchPointType_VirtualSharp	= 4,
        swSketchPointType_Parabola	= 5,
        swSketchPointType_MidPoint	= 6,
        swSketchPointType_FramePoint	= 7,
        swSketchPointType_Origin	= 8,
        swSketchPointType_Ellipse	= 9,
        swSketchPointType_External	= 10
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("5f48c7c1-2c4c-4633-a305-bc40869c1524") swAnnotationOwner_e
    {
        swAnnotationOwner_DrawingView	= 0,
        swAnnotationOwner_DrawingSheet	= 1,
        swAnnotationOwner_DrawingTemplate	= 2,
        swAnnotationOwner_Part	= 3,
        swAnnotationOwner_Assembly	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("58DB176B-D4D3-4d77-B8ED-EBEA62064093") swPartingLineFeatureStatus_e
    {
        STATUS_MOLD_REDUNDANT_EDGES	= 1,
        STATUS_MOLD_PARTINGLINE_EDGES_OPEN	= 2,
        STATUS_MOLD_PARTINGLINE_SEPARABLE	= 3,
        STATUS_MOLD_PARTINGLINE_NON_SEPARABLE	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("F70C155D-CDC5-41a7-AE1D-5D57F8361CA6") swCreateSectionViewAtOptions_e
    {
        swCreateSectionView_NotAligned	= 0x1,
        swCreateSectionView_OffsetSection	= 0x2,
        swCreateSectionView_ChangeDirection	= 0x4,
        swCreateSectionView_ScaleWithModel	= 0x8,
        swCreateSectionView_Partial	= 0x10,
        swCreateSectionView_DisplaySurfaceCut	= 0x20,
        swCreateSectionView_ExcludeFasteners	= 0x40,
        swCreateSectionView_CutSurfaceBodies	= 0x80
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("48233878-104E-4596-95B5-E83C63B32963") swShutOffSurfaceFeatureStatus_e
    {
        STATUS_SHUTOFF_REDUNDANT	= 1,
        STATUS_SHUTOFF_COMPLETE	= 2,
        STATUS_SHUTOFF_INCOMPLETE	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("84899A89-C637-4ab3-826C-C7855FD2BC46") swManipulatorCursor_e
    {
        swManipulatorMoveCursor	= 1,
        swManipulatorRotateCursor	= 2,
        swManipulatorMoveRotateCursor	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("d925fee8-512e-438c-affa-b70478d794aa") swSpringType_e
    {
        swSpringType_Compression	= 0,
        swSpringType_Extension	= 1,
        swSpringType_Torsion	= 2,
        swSpringType_Spiral	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("45f64030-4be8-407c-ac52-45f269e4b356") swSpringDefineType_e
    {
        swSpringDefineType_PitchAndRevolution	= 0,
        swSpringDefineType_HeightAndRevolution	= 1,
        swSpringDefineType_HeightAndPitch	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("146a9fa6-4748-4d3a-8937-e6b9fc2815a6") swSpringProfileType_e
    {
        swSpringProfileType_Circle	= 0,
        swSpringProfileType_Rectangle	= 1,
        swSpringProfileType_Trapezoid	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("cdae8e5f-9aff-45cc-9a81-f17aaea6a642") swSpringExtensionEndType_e
    {
        swSpringExtensionEndType_FullLoop	= 0,
        swSpringExtensionEndType_HalfLoop	= 1,
        swSpringExtensionEndType_UserDefined	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("52adfc51-3aed-47c5-8339-8acb0545ced2") swSpringTorsionEndType_e
    {
        swSpringTorsionEndType_Hook	= 0,
        swSpringTorsionEndType_Straight	= 1,
        swSpringTorsionEndType_Hinge	= 2,
        swSpringTorsionEndType_StraightOffset	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("8D8F01E1-7966-4131-9357-CBA50D5E91F6") swFaultEntityErrorCode_e
    {
        swBodyCorrupt	= 1,
        swBodyInvalidIdentifiers	= 2,
        swBodyInsideOut	= 3,
        swBodyRegionsInconsistent	= 4,
        swEdgeNonPeriodicCurve	= 5,
        swEdgeNonPeriodicNomGeom	= 6,
        swEdgeVertexNotLie	= 7,
        swEdgeVertexNotLieNomGeom	= 8,
        swEdgeWrongDir	= 9,
        swEdgeWrongDirNomGeom	= 10,
        swEdgeSpcurveOutOfTol	= 11,
        swEdgeSpcurveOutOfTolNomGeom	= 12,
        swEdgeVerticesTouch	= 13,
        swEdgeBadFaceOrder	= 14,
        swEdgeBadWire	= 15,
        swFaceBadVertex	= 16,
        swFaceBadEdge	= 17,
        swFaceBadEdgeOrder	= 18,
        swFaceNoAccomVertex	= 19,
        swFaceBadLoops	= 20,
        swFaceSelfIntersecting	= 21,
        swFaceBadWireframe	= 22,
        swFaceCheckerFailure	= 23,
        swFaceFaceInconsistency	= 24,
        swGeomStateSelfIntersect	= 25,
        swGeomDegenerate	= 26,
        swRegionBadShells	= 27,
        swShellBadTopologyGeometry	= 28,
        swShellIntersect	= 29,
        swTopolNotG1Continuous	= 30,
        swTopolSizeBoxViolation	= 31,
        swTopolStateCheckFail	= 32,
        swTopolStateNoGeometry	= 33,
        swEntityStateInvalid	= 34,
        swTopolMissingGeometry	= 35,
        swEdgeTouchEdge	= 36
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("BECEB38E-87F2-4798-8C41-47FEB69FF31B") swVisibilityState_e
    {
        swVisibilityStateHide	= 1,
        swVisibilityStateShown	= 2,
        swVisibilityStateUnknown	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("41D1BC29-D828-47d9-9313-A6E573E4EB0C") swGuideCurveInfluence_e
    {
        swGuideCurveInfluenceNextGuide	= 0,
        swGuideCurveInfluenceNextSharp	= 1,
        swGuideCurveInfluenceNextEdge	= 2,
        swGuideCurveInfluenceNextGlobal	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("2bedae9c-2022-4d1c-b2a6-0715c6f09410") swExtrudeFrom_e
    {
        swExtrudeFrom_SketchPlane	= 0,
        swExtrudeFrom_SurfaceFacePlane	= 1,
        swExtrudeFrom_Vertex	= 2,
        swExtrudeFrom_Offset	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("301811D7-7DDB-4cc1-96F0-7A806C06A53B") swFaceUntrimType_e
    {
        swFaceUntrimTypeAllEdges	= 0,
        swFaceUntrimTypeInternalEdges	= 1,
        swFaceUntrimTypeExternalEdges	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("88D00085-E5F4-4da2-A010-F1847773DECE") swEdgeUntrimType_e
    {
        swEdgeUntrimTypeExtendEdges	= 2,
        swEdgeUntrimTypeConnectEndPoints	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("11BE16D6-16E6-4d91-BABD-85E004E66C68") swCollabCheckReadOnlyModifiedInterval_e
    {
        swCollabCheckReadOnlyModifiedInterval_1min	= 1,
        swCollabCheckReadOnlyModifiedInterval_2min	= 2,
        swCollabCheckReadOnlyModifiedInterval_3min	= 3,
        swCollabCheckReadOnlyModifiedInterval_5min	= 4,
        swCollabCheckReadOnlyModifiedInterval_10min	= 5,
        swCollabCheckReadOnlyModifiedInterval_15min	= 6,
        swCollabCheckReadOnlyModifiedInterval_20min	= 7,
        swCollabCheckReadOnlyModifiedInterval_30min	= 8,
        swCollabCheckReadOnlyModifiedInterval_45min	= 9,
        swCollabCheckReadOnlyModifiedInterval_60min	= 10
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("2f5b5529-06e3-4cdc-bca7-6b38c95af88c") swSelectOption_e
    {
        swSelectOptionDefault	= 0,
        swSelectOptionExtensive	= 0x1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("7BAA71E5-CAA0-4dbf-95CF-6D774510E2BA") swNameType_e
    {
        swBodyName	= 0,
        swFeatureName	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("9399A577-6E89-43f2-8978-0F086F0627A0") swDetailingViewLabelsName_e
    {
        swDetailingViewLabelsName_none	= 0,
        swDetailingViewLabelsName_VIEW	= 1,
        swDetailingViewLabelsName_viewtype	= 2,
        swDetailingViewLabelsName_custom	= 3,
        swDetailingViewLabelsName_DrawingTree	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("26791C6D-143D-4c8c-9E12-47A0471D14F7") swDetailingViewLabelsLabel_e
    {
        swDetailingViewLabelsLabel_none	= 0,
        swDetailingViewLabelsLabel_X	= 1,
        swDetailingViewLabelsLabel_XdashX	= 2,
        swDetailingViewLabelsLabel_XspaceX	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("0D54434E-769B-41c4-922F-A819F39D65A0") swDetailingViewLabelsScale_e
    {
        swDetailingViewLabelsScale_none	= 0,
        swDetailingViewLabelsScale_SCALE	= 1,
        swDetailingViewLabelsScale_SCALEcolon	= 2,
        swDetailingViewLabelsScale_SCALEcustom	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("2BFED2B7-9CDA-400c-B569-35543F90225D") swDetailingViewLabelsDelimiter_e
    {
        swDetailingViewLabelsDelimiter_none	= 0,
        swDetailingViewLabelsDelimiter_XcolonX	= 1,
        swDetailingViewLabelsDelimiter_XslashX	= 2,
        swDetailingViewLabelsDelimiter_XcolonXparen	= 3,
        swDetailingViewLabelsDelimiter_XslashXparen	= 4,
        swDetailingViewLabelsDelimiter_numberX	= 5
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("0273295f-ee39-4d76-9481-0be24b323670") swOrdDimEndSymbol_e
    {
        swOrdDimEndSymbol_None	= 0,
        swOrdDimEndSymbol_Dowel	= 1,
        swOrdDimEndSymbol_UpwardRight	= 2,
        swOrdDimEndSymbol_DownwardLeft	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("1324516B-0B61-4a22-8583-EBA3390474C4") swUnitSystem_e
    {
        swUnitSystem_CGS	= 1,
        swUnitSystem_MKS	= 2,
        swUnitSystem_IPS	= 3,
        swUnitSystem_Custom	= 4,
        swUnitSystem_MMGS	= 5
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("6111BE89-27E8-413e-A5F3-3AFA9CF547F3") swUnitsMassPropMass_e
    {
        swUnitsMassPropMass_Milligrams	= 1,
        swUnitsMassPropMass_Grams	= 2,
        swUnitsMassPropMass_Kilograms	= 3,
        swUnitsMassPropMass_Pounds	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("7E0936B3-EC99-4963-A175-8C1C52CFA014") swUnitsMassPropVolume_e
    {
        swUnitsMassPropVolume_Angstroms3	= 1,
        swUnitsMassPropVolume_Nanometers3	= 2,
        swUnitsMassPropVolume_Microns3	= 3,
        swUnitsMassPropVolume_Millimeters3	= 4,
        swUnitsMassPropVolume_Centimeters3	= 5,
        swUnitsMassPropVolume_Meters3	= 6,
        swUnitsMassPropVolume_Microinches3	= 7,
        swUnitsMassPropVolume_Mils3	= 8,
        swUnitsMassPropVolume_Inches3	= 9,
        swUnitsMassPropVolume_Feet3	= 10,
        swUnitsMassPropVolume_MicroLiters	= 11,
        swUnitsMassPropVolume_MilliLiters	= 12,
        swUnitsMassPropVolume_CentiLiters	= 13,
        swUnitsMassPropVolume_DeciLiters	= 14,
        swUnitsMassPropVolume_Liters	= 15,
        swUnitsMassPropVolume_HectoLiters	= 16,
        swUnitsMassPropVolume_USFluidOunce	= 17,
        swUnitsMassPropVolume_USPints	= 18,
        swUnitsMassPropVolume_USGallons	= 19,
        swUnitsMassPropVolume_IMPGallons	= 20,
        swUnitsMassPropVolume_IMPCubicYards	= 21
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("AAB8EA4F-F7F9-40ca-A153-1EBAFED774CF") swUnitsForce_e
    {
        swUnitsForce_Dynes	= 1,
        swUnitsForce_Millinewtons	= 2,
        swUnitsForce_Newtons	= 3,
        swUnitsForce_Kilonewtons	= 4,
        swUnitsForce_Meganewtons	= 5,
        swUnitsForce_Poundfeet	= 6,
        swUnitsForce_KgForce	= 7,
        swUnitsForce_OunceForce	= 8
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("98366BD2-18C0-41a3-81B7-4BFE78EA7E03") swUnitsEnergyUnit_e
    {
        swUnitsEnergyUnit_Joule	= 1,
        swUnitsEnergyUnit_Ergs	= 2,
        swUnitsEnergyUnit_BTU	= 3,
        swUnitsEnergyUnit_KilowattHour	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("70309FDC-F5CB-45c2-969A-8795A8B59FE9") swUnitsPowerUnit_e
    {
        swUnitsPowerUnit_Watt	= 1,
        swUnitsPowerUnit_Horsepower	= 2,
        swUnitsPowerUnit_Kilowatt	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("ADB8AB76-0584-4c83-B765-BA429C84744D") swUnitsTimeUnit_e
    {
        swUnitsTimeUnit_Second	= 1,
        swUnitsTimeUnit_Millisecond	= 2,
        swUnitsTimeUnit_Minute	= 3,
        swUnitsTimeUnit_Hour	= 4,
        swUnitsTimeUnit_Microsecond	= 5,
        swUnitsTimeUnit_Nanosecond	= 6
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("69f64d87-125c-4476-83d9-dc86bb018d4b") swOleObjectOptions_e
    {
        swOleObjectOptions_GetAll	= 0,
        swOleObjectOptions_GetOnCurrentSheet	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("66822AFF-BB69-4990-A2E6-5A63E626EBE6") swOffsetPlanarWireBodyOptions_e
    {
        swOffsetPlanarWireBodyOptions_GapFillRound	= 0,
        swOffsetPlanarWireBodyOptions_GapFillExtend	= 1,
        swOffsetPlanarWireBodyOptions_GapFillTangent	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("F86D83D8-29D8-4d64-8EC8-18FD780D06B9") swDxfMultisheet_e
    {
        swDxfActiveSheetOnly	= 0,
        swDxfSeparateSheets	= 1,
        swDxfMultiSheet	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("036D54EF-237E-4857-82A7-3FC4FC6581CC") swSimulationMotorType_e
    {
        swSimulationLinearMotor	= 0,
        swSimulationRotaryMotor	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("5CB0FC9E-2972-4481-9A44-B9CFE879F7DD") swLibFeatDimensionType_e
    {
        swLibFeatLocatingDimension	= 0,
        swLibFeatSizeDimension	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("CCD4C957-FF94-4587-8E8A-D470E6816F58") swWeldBeadSide_e
    {
        swWeldBeadArrowSide	= 0,
        swWeldBeadOtherSide	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("8F4F692B-4269-40a3-8EBA-E792D239C93F") swWeldBeadType_e
    {
        swWeldBeadTypeFull	= 0,
        swWeldBeadTypeIntermittent	= 1,
        swWeldBeadTypeStaggered	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("a5533c31-fa7f-435c-b6b8-de2756f43d6e") swViewEntityType_e
    {
        swViewEntityType_Edge	= 1,
        swViewEntityType_Vertex	= 2,
        swViewEntityType_Face	= 3,
        swViewEntityType_SilhouetteEdge	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("88C59D36-5A8F-4377-BEFB-593228758D6B") swBodyFolderFeatureType_e
    {
        swSolidBodyFolder	= 1,
        swSurfaceBodyFolder	= 2,
        swBodySubFolder	= 3,
        swWeldmentSubFolder	= 4,
        swWeldmentCutListFolder	= 5
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("C9B78183-9E2E-41ac-A701-FA0256F32459") swWeldmentTrimExtendOptionType_e
    {
        swWeldmentTrimExtendOption_AllowTrimmedExtensionTrim	= 1,
        swWeldmentTrimExtendOption_AllowTrimmingExtensionTrim	= 2,
        swWeldmentTrimExtendOption_CopedCut	= 4,
        swWeldmentTrimExtendOption_WeldGap	= 8
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("D1DF409D-9EB6-458a-9624-6AA7846A56B7") swAdvSelectType_e
    {
        swAdvSelectType_And	= 0x1,
        swAdvSelectType_Or	= 0x2,
        swAdvSelectType_Is_Yes	= 0x4000,
        swAdvSelectType_Is_No	= 0x8000,
        swAdvSelectType_Is_Not	= 0x8,
        swAdvSelectType_Contains	= 0x10,
        swAdvSelectType_Is_Ccontained_By	= 0x20,
        swAdvSelectType_Interferes_With	= 0x40,
        swAdvSelectType_Does_Not_Interferes_With	= 0x80,
        swAdvSelectType_Is_Exactly	= 0x4,
        swAdvSelectType_Is_Not_Equal	= 0x2000,
        swAdvSelectType_Less_Than	= 0x200,
        swAdvSelectType_Less_Than_OR_Equal	= 0x800,
        swAdvSelectType_Equals	= 0x1000,
        swAdvSelectType_Greater_Than_OR_Equal	= 0x400,
        swAdvSelectType_Greater_Than	= 0x100
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("9FEB4C70-1ED4-4936-95C3-7F1FAE80632D") swDetailingLeadingZero_e
    {
        swLeadingZero_FollowStandard	= 1,
        swLeadingZero_Show	= 2,
        swLeadingZero_DoNotShow	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("76D9815B-F4F2-4094-AF84-D8C7558A806A") swFitTolDisplay_e
    {
        swFitTolDisplay_StackedWithLine	= 1,
        swFitTolDisplay_Stacked	= 2,
        swFitTolDisplay_Linear	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("F7E4422B-4260-41c2-BB69-DB2483EDA40F") swAreaHatchFillStyle_e
    {
        swAreaHatchFillStyle_None	= 1,
        swAreaHatchFillStyle_Pattern	= 2,
        swAreaHatchFillStyle_Solid	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("4D3A2DD8-801B-44d9-8BC7-5DEA5763E690") swCoreFeatureDirection_e
    {
        swCoreAlongExtractionDirection	= 0,
        swCoreAwayFromExtractionDirection	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("503C9ADD-1946-4201-9F34-41617313BBE2") swFeatureManagerDisplayWarnings_e
    {
        swFeatureManagerDisplayAllWarnings	= 0,
        swFeatureManagerDisplayNoWarnings	= 1,
        swFeatureManagerDisplayWarningsExceptTopLevel	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("164225FE-8712-490d-BCC6-284C57709522") swDisplayPotentialCircularReferencesInEquations_e
    {
        swDisplayPotentialCircularReferencesInEquationsEverywhere	= 0,
        swDisplayPotentialCircularReferencesInEquationsInEquationDialogOnly	= 1,
        swDisplayPotentialCircularReferencesInEquationsNever	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("DD2F85B1-D1E2-43ff-BCB2-D9FE2610419C") swDisplayCircularReferencesInEquations_e
    {
        swDisplayCircularReferencesInEquationsEverywhere	= 0,
        swDisplayCircularReferencesInEquationsInEquationDialogOnly	= 1,
        swDisplayCircularReferencesInEquationsNever	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("F0A63F08-319D-444f-B6CF-2AB9788970CF") swPropertyManagerColorScheme_e
    {
        swPropertyManagerColorScheme_Blue	= 1,
        swPropertyManagerColorScheme_Gray	= 2,
        swPropertyManagerColorScheme_Mustard	= 3,
        swPropertyManagerColorScheme_Olive	= 4,
        swPropertyManagerColorScheme_Sand	= 5,
        swPropertyManagerColorScheme_SeaGreen	= 6,
        swPropertyManagerColorScheme_Default	= 7,
        swPropertyManagerColorScheme_Windows	= 8
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("7213FA9F-D9E7-49a8-841F-225AFD52B56B") swDetailingForeshortenedDiameterStyle_e
    {
        swForeshortenedStyleDoubleArrowhead	= 1,
        swForeshortenedStyleZigZagLeader	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("D624F71E-0FA9-485f-868A-C4C15F2DEE96") swAnimationPlayMode_e
    {
        swAnimationPlayModeNormal	= 1,
        swAnimationPlayModeLoop	= 2,
        swAnimationPlayModeReciprocate	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("1C4000A0-6189-482d-9059-519CD16CDB43") swAnimationPlaySpeed_e
    {
        swAnimationPlaySpeedNormal	= 1,
        swAnimationPlaySpeedSlow	= 2,
        swAnimationPlaySpeedFast	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("8441E184-963E-4c64-B2F4-941BE77C8300") swDeleteSelectionOptions_e
    {
        swDelete_Children	= 0x1,
        swDelete_Absorbed	= 0x2,
        swDelete_Advanced	= 0x4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("3038898A-2F1B-4a4d-88A2-D60268341BF6") swDatumGbLeaderStyle_e
    {
        swDatumLeaderStyle_Horizontal	= 1,
        swDatumLeaderStyle_Vertical	= 2,
        swDatumLeaderStyle_Perpendicular	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("48d0fdff-f55a-4772-bf80-1feef45981d9") swSplitFacesOption_e
    {
        swSplitFacesAtPlusMinusDraftTransition	= 0,
        swSplitFacesAtSpecifiedAngle	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("58adba30-b4a9-405b-8712-d0738042bfa2") swSketchTrimChoice_e
    {
        swSketchTrimClosest	= 0,
        swSketchTrimCorner	= 1,
        swSketchTrimTwoEntities	= 2,
        swSketchTrimEntityPoint	= 3,
        swSketchTrimEntities	= 4,
        swSketchTrimOutside	= 5,
        swSketchTrimInside	= 6
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("19c4b31e-3d33-4efa-a588-1c1c9f65d55a") swMoveFaceType_e
    {
        swMoveFaceTypeOffset	= 0,
        swMoveFaceTypeTranslate	= 1,
        swMoveFaceTypeRotate	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("68F4EFBC-5A91-437b-8F79-5CEFB7F99D45") swCheckSpellingOptions_e
    {
        swSpellingIgnoreUpperCase	= 0x1,
        swSpellingIgnoreMixedCase	= 0x2,
        swSpellingIgnoreWordsWithNumbers	= 0x4,
        swSpellingIgnoreCapitalizedWords	= 0x8,
        swSpellingIgnoreInternetAndFiles	= 0x10,
        swSpellingLeaveEngineRunning	= 0x20
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("04A22524-0044-4147-837E-E77B0A6258EF") swDetailingDimFractionStyle_e
    {
        swDetailingDimFractionStyle_Slash	= 0,
        swDetailingDimFractionStyle_Stack	= 1,
        swDetailingDimFractionStyle_DiagonalStack	= 2,
        swDetailingDimFractionStyle_Dash	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("BD7676FF-5445-40bb-9047-B9B4E837630F") swDetailingDimFractionScaleIndex_e
    {
        swDetailingDimFractionScale_100Percent	= 0,
        swDetailingDimFractionScale_90Percent	= 1,
        swDetailingDimFractionScale_80Percent	= 2,
        swDetailingDimFractionScale_70Percent	= 3,
        swDetailingDimFractionScale_60Percent	= 4,
        swDetailingDimFractionScale_50Percent	= 5,
        swDetailingDimFractionScale_40Percent	= 6,
        swDetailingDimFractionScale_30Percent	= 7,
        swDetailingDimFractionScale_20Percent	= 8,
        swDetailingDimFractionScale_10Percent	= 9
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("B70B672F-9370-4675-9CAA-BFC8E0B275FA") swDofStatus_e
    {
        swDofStatus_Unused	= 0,
        swDofStatus_Static	= ( swDofStatus_Unused + 1 ) ,
        swDofStatus_StaticNormal	= ( swDofStatus_Static + 1 ) ,
        swDofStatus_Free	= ( swDofStatus_StaticNormal + 1 ) ,
        swDofStatus_FreeNormal	= ( swDofStatus_Free + 1 ) ,
        swDofStatus_Instantaneous	= ( swDofStatus_FreeNormal + 1 ) ,
        swDofStatus_InstantaneousNormal	= ( swDofStatus_Instantaneous + 1 ) 
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("0396BB34-9511-4ec6-9910-C749E0485D8B") swRemainingDofs_e
    {
        swRemainingDofs_Restricted	= 0,
        swRemainingDofs_Unrestricted	= ( swRemainingDofs_Restricted + 1 ) ,
        swRemainingDofs_Unavailable	= ( swRemainingDofs_Unrestricted + 1 ) ,
        swRemainingDofs_Failed	= ( swRemainingDofs_Unavailable + 1 ) ,
        swRemainingDofs_RootComponent	= ( swRemainingDofs_Failed + 1 ) 
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("7ba73af2-9ca8-4379-a7c5-ac18c02dff6a") swNonInterferingComponentDisplay_e
    {
        swNonInterferingComponentDisplay_Wireframe	= 0,
        swNonInterferingComponentDisplay_Hidden	= 1,
        swNonInterferingComponentDisplay_Transparent	= 2,
        swNonInterferingComponentDisplay_Current	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("70c4b9b6-bd6e-4a5e-aa2b-a6fce499f58a") swUpdateProgressError_e
    {
        swUpdateProgressError_UnknownError	= 0,
        swUpdateProgressError_Success	= 1,
        swUpdateProgressError_UserCancel	= 2,
        swUpdateProgressError_OutOfBounds	= 3,
        swUpdateProgressError_NotInitialized	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("7f11813e-5888-4d18-ade7-d2b8b31cf5ea") swVariableRadiusFilletOptions_e
    {
        swSmoothTransition	= 0,
        swStraightTransition	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("24812b11-4ade-4b8b-ba35-9867e4398175") swFilletOverFlowType_e
    {
        swFilletOverFlowType_Default	= 0,
        swFilletOverFlowType_KeepEdge	= 1,
        swFilletOverFlowType_KeepSurface	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("46cb1dc6-6aea-4ade-9513-a260e9bfdb28") swFeatureFilletType_e
    {
        swFeatureFilletType_Simple	= 0,
        swFeatureFilletType_VariableRadius	= 1,
        swFeatureFilletType_Face	= 2,
        swFeatureFilletType_FullRound	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("DA2158B3-C923-4657-93CE-063F1459E44E") swFeatureFilletProfileType_e
    {
        swFeatureFilletCircular	= 0,
        swFeatureFilletConicRho	= 1,
        swFeatureFilletConicRadius	= 2,
        swFeatureFilletConicRhoZeroChamfer	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("8B2D8F58-F834-404e-88FB-D0C9D85F04AA") swPointInferenceBrokerOption_e
    {
        swPointInferenceBrokerOption_IncludeHidden	= 0x1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("33ccf97a-02aa-4da2-92f6-8c99aebeb86e") swTangentMagnitudeDirection_e
    {
        swTangentMagnitudeDirection1	= 1,
        swTangentMagnitudeDirection2	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("c9b3c166-2707-46c6-81a3-c2dc6a040138") swFeatureFillSurfaceOptions_e
    {
        swOptimizeSurface	= 0x1,
        swTryToFormSolid	= 0x2,
        swMergeResult	= 0x4,
        swReverseDirection	= 0x8,
        swReverseSurface	= 0x10
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("e10c6961-1173-46ef-896e-2fae0757e5ef") swRelativeViewCreationDirection_e
    {
        swRelativeViewCreationDirection_FRONT	= 0,
        swRelativeViewCreationDirection_RIGHT	= 1,
        swRelativeViewCreationDirection_TOP	= 2,
        swRelativeViewCreationDirection_BACK	= 3,
        swRelativeViewCreationDirection_LEFT	= 4,
        swRelativeViewCreationDirection_BOTTOM	= 5,
        swRelativeViewCreationDirection_AUXILIARY	= 6
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("C6745E41-BD2F-402c-8792-475E2418BBFC") swCommandItemType_e
    {
        swMenuItem	= 1,
        swToolbarItem	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("10fa6ee8-874f-41fc-95c7-57684bb80786") swAddinBrokerBBoxOption_e
    {
        swAddinBrokerBBoxOption_Default	= 0
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("05605263-506D-4708-934C-6CE6F3E4B971") swImportDxfDwg_ImportMethod_e
    {
        swImportDxfDwg_DoNotImportSheet	= 0,
        swImportDxfDwg_ImportToDrawing	= 1,
        swImportDxfDwg_ImportToPartSketch	= 2,
        swImportDxfDwg_ImportToExistingDrawing	= 3,
        swImportDxfDwg_ImportToExistingPart	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("2562346D-74D1-4ff1-B012-D088F5D62588") swSameAs_Status_e
    {
        swSameAs_NotImplemented	= -1,
        swSameAs_Same	= TRUE,
        swSameAs_Different	= FALSE
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("E036F9A4-8E5C-453e-AE11-D20FD733C3D4") swImportDxfDwg_LayerVisibility_e
    {
        swImportDxfDwg_LayerMaintain	= 0,
        swImportDxfDwg_LayerVisible	= 1,
        swImportDxfDwg_LayerHidden	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("D756E784-EA85-4b60-ABCA-AD5A9E48529B") swAngularEquationUnits_e
    {
        swAngularEquationUnitsUnrecognized	= 0,
        swAngularEquationUnitsDegrees	= 1,
        swAngularEquationUnitsRadians	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("fc7f5ee0-9cc1-4261-9fe6-8f4703c00f0b") swSketchFullyDefineRelationType_e
    {
        swSketchFullyDefineRelationType_Equal	= 0x1,
        swSketchFullyDefineRelationType_Horizontal	= 0x2,
        swSketchFullyDefineRelationType_Vertical	= 0x4,
        swSketchFullyDefineRelationType_Tangent	= 0x8,
        swSketchFullyDefineRelationType_Perpendicular	= 0x10,
        swSketchFullyDefineRelationType_Colinear	= 0x20,
        swSketchFullyDefineRelationType_Concentric	= 0x40,
        swSketchFullyDefineRelationType_Parallel	= 0x80,
        swSketchFullyDefineRelationType_Midpoint	= 0x100,
        swSketchFullyDefineRelationType_Coincident	= 0x200
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("13130774-5B71-49bb-8388-0047EA13A712") swAutoSaveIntervalMode_e
    {
        swAutoSaveIntervalMode_Changes	= 1,
        swAutoSaveIntervalMode_Minutes	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("ED557E39-5907-4918-B52C-63DDE5ED42BA") swSaveReminderIntervalMode_e
    {
        swSaveReminderIntervalMode_Changes	= 1,
        swSaveReminderIntervalMode_Minutes	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("1FCA4C85-C829-439c-A1EB-11BECCB9EA74") swColorsBackgroundAppearance_e
    {
        swColorsBackgroundAppearance_Plain	= 0,
        swColorsBackgroundAppearance_Gradient	= 1,
        swColorsBackgroundAppearance_Image	= 2,
        swColorsBackgroundAppearance_DocumentScene	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("1E6A33D6-3C3A-46ae-B1DC-ECE54C9C0B3D") swStopContinuePrompt_e
    {
        swContinueResponse_Stop	= 1,
        swContinueResponse_Continue	= 2,
        swContinueResponse_Prompt	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("1B0039A2-A17E-4fc4-A3BD-53D9C63B899A") swLineEndCaps_e
    {
        swLineEndCapFlat	= 1,
        swLineEndCapRound	= 2,
        swLineEndCapSquare	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("F9E080B8-D757-415a-B07E-5AC7B600AE85") swDetailingDimXpertSlotStyle_e
    {
        swDetailingDimXpertSlotCenter	= 1,
        swDetailingDimXpertSlotOverall	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("CEA6AA12-6FF4-4de6-9677-547607C76335") swDetailingDimXpertChamferStyle_e
    {
        swDetailingDimXpertChamferDistDist	= 1,
        swDetailingDimXpertChamferDistAngle	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("100F1338-3833-42f5-88C2-901EE20C7C04") swDetailingDimXpertFilletInstanceStyle_e
    {
        swDetailingDimXpertFilletNone	= 1,
        swDetailingDimXpertFilletTyp	= 2,
        swDetailingDimXpertFilletInstance	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("57D415A4-C86B-4423-B42B-13103FC705EE") swDetailingDimXpertChamferInstanceStyle_e
    {
        swDetailingDimXpertChamferNone	= 1,
        swDetailingDimXpertChamferTyp	= 2,
        swDetailingDimXpertChamferInstance	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("F9337096-F6B5-46a4-8110-E5973DB76FF9") swExportDataFileType_e
    {
        swExportPdfData	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("C9E00B21-33C8-4fee-A842-676B48FC7D63") swExportDataSheetsToExport_e
    {
        swExportData_ExportAllSheets	= 1,
        swExportData_ExportCurrentSheet	= 2,
        swExportData_ExportSpecifiedSheets	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("ED709DC3-DD62-4912-8B37-EC156DBB1E05") swCameraType_e
    {
        swCameraType_AimedAtTarget	= 1,
        swCameraType_Floating	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("818DCC7C-0576-482d-8970-7D5C308147EB") swCameraPositionType_e
    {
        swCameraPosition_Cartesian	= 1,
        swCameraPosition_Spherical	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("7FBDD209-9314-4882-BC7B-5E33CA8E0EBF") swReorderComponentsWhere_e
    {
        swReorderComponents_After	= 1,
        swReorderComponents_Before	= 2,
        swReorderComponents_LastInFolder	= 3,
        swReorderComponents_FirstInFolder	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("3F94A862-19E3-40b4-8F0B-BCDA4A35C94E") swAnimatorAxisOfRotation_e
    {
        swRotationAboutXAxis	= 0,
        swRotationAboutYAxis	= 1,
        swRotationAboutZAxis	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("C2D7F189-5CB5-4f34-B5B8-124229768655") swAnimatorDirectionOfRotation_e
    {
        swRotationClockwise	= 0,
        swRotationCounterClockwise	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("09a4f537-ead7-47d9-8514-cd1df769fd11") swCenterMarkHandle_e
    {
        swCenterMarkHandle_Up	= 0,
        swCenterMarkHandle_Left	= 1,
        swCenterMarkHandle_Down	= 2,
        swCenterMarkHandle_Right	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("F8123843-D094-42cd-98B4-1346EEB7B813") swMeasureArcCircleOption_e
    {
        swMeasureArcCircle_CenterToCenter	= 0,
        swMeasureArcCircle_MinimumDistance	= 1,
        swMeasureArcCircle_MaximumDistance	= 2,
        swMeasureArcCircle_CustomCenterToCenter	= 3,
        swMeasureArcCircle_CustomMinimumToMinimum	= 4,
        swMeasureArcCircle_CustomMaximumToMaximum	= 5,
        swMeasureArcCircle_CustomCenterToMinimum	= 6,
        swMeasureArcCircle_CustomCenterToMaximum	= 7,
        swMeasureArcCircle_CustomMinimumToCenter	= 8,
        swMeasureArcCircle_CustomMaximumToCenter	= 9,
        swMeasureArcCircle_CustomMinimumToMaximum	= 10,
        swMeasureArcCircle_CustomMaximumToMinimum	= 11
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("F92CFA37-DBB0-4b50-AC3F-B030CFC44A9F") swMeasureProjectOnOption_e
    {
        swMeasureProjectOn_None	= 0,
        swMeasureProjectOn_Screen	= 1,
        swMeasureProjectOn_FaceOrPlane	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("27DA8290-BA99-4869-A8A6-7DA354797F12") swHoleSeriesWhichParts_e
    {
        swHoleSeriesFirstPart	= 0,
        swHoleSeriesMiddleParts	= 1,
        swHoleSeriesLastPart	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("6E09309E-6210-4e22-AFB8-D9511C793348") swSketchPictureTransparencyStyle_e
    {
        swSketchPictureTransparencyNone	= 0,
        swSketchPictureTransparencyFromFile	= 1,
        swSketchPictureTransparencyFullImage	= 2,
        swSketchPictureTransparencyUserDefined	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("C74B70B2-C4AA-4469-9A16-963D7D0F4996") swThickenDirection_e
    {
        swThickenDirection_Side1	= 0,
        swThickenDirection_Side2	= 1,
        swThickenDirection_Both	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("8f7bc8b1-d100-4a71-908d-5ce26b17c420") swInsertPartOptions_e
    {
        swInsertPartImportSolids	= 0x1,
        swInsertPartImportSurfaces	= 0x2,
        swInsertPartImportAxes	= 0x4,
        swInsertPartImportPlanes	= 0x8,
        swInsertPartImportCosmeticThreads	= 0x10,
        swInsertPartImportAbsorbedSketchs	= 0x20,
        swInsertPartImportUnabsorbedSketchs	= 0x40,
        swInsertPartImportCustomProperties	= 0x80,
        swInsertPartImportCoordinateSystem	= 0x100,
        swInsertPartBreakLink	= 0x200,
        swInsertPartImportModelDimensions	= 0x400,
        swInsertPartImportCutListProperties	= 0x800,
        swInsertPartImportHoleWzdData	= 0x1000,
        swInsertPartImportSMInfo	= 0x2000,
        swInsertPartImportIndProps	= 0x4000,
        swInsertPartImportCustomToFileProperties	= 0x8000,
        swInsertPartImportCustomToCutlistProperties	= 0x10000,
        swInsertPartImportDimXpertAnnotations	= 0x20000,
        swInsertPartDontZoomAll	= 0x40000,
        swInsertPartImportMaterial	= 0x80000,
        swInsertPartImportPropagateVisualPropertiesFromOriginalPart	= 0x100000,
        swInsertPartImportPoints	= 0x200000,
        swInsertPartImportPartMaterial	= 0x400000,
        swInsertPartImportGraphicBodies	= 0x800000
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("3A351DF1-928F-42AE-A2F9-6405AAC8ACCB") swInsertAssyOptions_e
    {
        swInsertAssySurfaceBodies	= 0x1,
        swInsertAssyMaterials	= 0x2,
        swInsertAssyRefPlanes	= 0x4,
        swInsertAssyRefAxes	= 0x8,
        swInsertAssyCoordinateSystems	= 0x10,
        swInsertAssyCosmeticThreads	= 0x20,
        swInsertAssyVisualProperties	= 0x40,
        swInsertAssySketches	= 0x80,
        swInsertAssyCustomProperties	= 0x100,
        swInsertAssyHoleWizardData	= 0x200,
        swInsertAssyGraphicsBodies	= 0x400,
        swInsertAssyPartCutListProps	= 0x800
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("9A862944-510B-4433-A0DB-7AA29EE5CA57") swFeatureScope_e
    {
        swFeatureScope_AllBodies	= 0,
        swFeatureScope_SelectedBodiesWithAutoSelect	= 1,
        swFeatureScope_SelectedBodiesWithOutAutoSelect	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("D1ED931F-FA7B-468a-8975-6516BC286785") swFaceCoincidentResult_e
    {
        swFaceCoincidentUnknownResult	= -1,
        swFaceCoincident_True	= 0,
        swFaceCoincident_TrueReversed	= 1,
        swFaceCoincident_FalseTopology	= 2,
        swFaceCoincident_FalseBoundary1	= 3,
        swFaceCoincident_FalseBoundary2	= 4,
        swFaceCoincident_FalseFace1	= 5,
        swFaceCoincident_FalseFace2	= 6,
        swFaceCoincident_FalseSurface	= 7
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("FFE2177F-51CE-4cc6-BE2C-79C96901354C") swAddDvePageForCommand_e
    {
        swAddDvePageFor_SketchPicture	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("A43B2211-19C4-4613-9B56-7A64952A2EA6") swCommandTabButtonTextDisplay_e
    {
        swCommandTabButton_NoText	= 0x1,
        swCommandTabButton_TextBelow	= 0x2,
        swCommandTabButton_TextHorizontal	= 0x4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("ED2C8943-E2E8-4260-BDE4-CB62C09230FB") swCommandTabButtonFlyoutStyle_e
    {
        swCommandTabButton_NoFlyout	= 0x8,
        swCommandTabButton_SimpleFlyout	= 0x10,
        swCommandTabButton_ActionFlyout	= 0x20
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("B33A8523-7EFD-4b8c-AD0D-4BA9EB8B9F21") swCommandFlyoutStyle_e
    {
        swCommandFlyoutStyle_Simple	= 0,
        swCommandFlyoutStyle_Favorite	= 1,
        swCommandFlyoutStyle_LastUsed	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("AA5EB13B-7FD4-4f72-A904-0913BBFF8799") swRendererType_e
    {
        swRendererType_Solidworks_Screen	= 0,
        swRendererType_Photoworks_Buffer	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("FC09AD58-531A-4376-B117-427970C7EF37") swBendLineControlOption_e
    {
        swBendLineControl_NumberOfBendLine	= 0,
        swBendLineControl_MaximumDeviation	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("3D923AA1-4722-45de-819B-1013BA823D70") swMirrorComponentNameModifier_e
    {
        swMirrorComponentName_Prefix	= 0,
        swMirrorComponentName_Suffix	= 1,
        swMirrorComponentName_Custom	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("93A18D8B-BD1C-489e-A0F8-4659F9C67D63") swAnimationOutputType_e
    {
        swAnimationOutput_AVI	= 1,
        swAnimationOutput_Series_of_BMP	= 2,
        swAnimationOutput_Series_of_TGA	= 3,
        swAnimationOutput_Series_of_PNG	= 4,
        swAnimationOutput_Series_of_JPG	= 5,
        swAnimationOutput_Series_of_TIF	= 6,
        swAnimationOutput_Series_of_MP4	= 7,
        swAnimationOutput_Series_of_MKV	= 8,
        swAnimationOutput_Series_of_FLV	= 9,
        swAnimationOutput_Series_of_LXO	= 10
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("22EBDF15-1889-4979-8A8E-31DAF2014AB4") swAutoHideShowResponse_e
    {
        swAutoHideShowResponse_Automatic	= 1,
        swAutoHideShowResponse_Hide	= 2,
        swAutoHideShowResponse_Show	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("899DF9E7-633D-440c-A843-F838A87BD077") swRenderMaterialBumpMap_e
    {
        swRenderMaterialBumpMapNone	= 0,
        swRenderMaterialBumpMapFrom_File	= 1,
        swRenderMaterialBumpMapCasting	= 2,
        swRenderMaterialBumpMapRough	= 3,
        swRenderMaterialBumpMapTread_Plate	= 4,
        swRenderMaterialBumpMapDimpled	= 5,
        swRenderMaterialBumpMapKnurled	= 6,
        swRenderMaterialBumpMapChips	= 7,
        swRenderMaterialBumpMapCircular	= 8,
        swRenderMaterialBumpMapRough_Smooth	= 9
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("C091FC53-02D0-4dc9-B60A-C18B5DD366A4") swRenderMaterialColorForms_e
    {
        swRenderMaterialColorFormsColor_Undefined	= -1,
        swRenderMaterialColorFormsImage	= 0,
        swRenderMaterialColorFormsOne_Color	= ( swRenderMaterialColorFormsImage + 1 ) ,
        swRenderMaterialColorFormsTwo_Colors	= ( swRenderMaterialColorFormsOne_Color + 1 ) ,
        swRenderMaterialColorFormsThree_Colors	= ( swRenderMaterialColorFormsTwo_Colors + 1 ) 
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("67933FD1-1006-4d3a-B1FC-8A53FFCFCB28") swRenderMaterialIlluminationTypes_e
    {
        swRenderMaterialIlluminationTypes_illumination_undefined	= -1,
        swRenderMaterialIlluminationType_use_underlying_material	= 0,
        swRenderMaterialIlluminationTypes_constant	= ( swRenderMaterialIlluminationType_use_underlying_material + 1 ) ,
        swRenderMaterialIlluminationType_matte	= ( swRenderMaterialIlluminationTypes_constant + 1 ) ,
        swRenderMaterialIlluminationTypes_plastic	= ( swRenderMaterialIlluminationType_matte + 1 ) ,
        swRenderMaterialIlluminationTypes_metal	= ( swRenderMaterialIlluminationTypes_plastic + 1 ) ,
        swRenderMaterialIlluminationTypes_satin_finish	= ( swRenderMaterialIlluminationTypes_metal + 1 ) ,
        swRenderMaterialIlluminationTypes_mirror	= ( swRenderMaterialIlluminationTypes_satin_finish + 1 ) ,
        swRenderMaterialIlluminationTypes_conductor	= ( swRenderMaterialIlluminationTypes_mirror + 1 ) ,
        swRenderMaterialIlluminationTypes_translucent	= ( swRenderMaterialIlluminationTypes_conductor + 1 ) ,
        swRenderMaterialIlluminationTypes_translucent_plastic	= ( swRenderMaterialIlluminationTypes_translucent + 1 ) ,
        swRenderMaterialIlluminationTypes_anisotropic	= ( swRenderMaterialIlluminationTypes_translucent_plastic + 1 ) ,
        swRenderMaterialIlluminationTypes_circular_anisotropic	= ( swRenderMaterialIlluminationTypes_anisotropic + 1 ) ,
        swRenderMaterialIlluminationTypes_woven_anisotropic	= ( swRenderMaterialIlluminationTypes_circular_anisotropic + 1 ) ,
        swRenderMaterialIlluminationTypes_multilayer_paint	= ( swRenderMaterialIlluminationTypes_woven_anisotropic + 1 ) ,
        swRenderMaterialIlluminationTypes_glass	= ( swRenderMaterialIlluminationTypes_multilayer_paint + 1 ) ,
        swRenderMaterialIlluminationTypes_dielectric	= ( swRenderMaterialIlluminationTypes_glass + 1 ) ,
        swRenderMaterialIlluminationTypes_dielectric_advanced	= ( swRenderMaterialIlluminationTypes_dielectric + 1 ) ,
        swRenderMaterialIlluminationTypes_cut_hole_with_decal	= ( swRenderMaterialIlluminationTypes_dielectric_advanced + 1 ) ,
        swRenderMaterialIlluminationTypes_studio_plastic	= ( swRenderMaterialIlluminationTypes_cut_hole_with_decal + 1 ) ,
        swRenderMaterialIlluminationTypes_car_paint	= ( swRenderMaterialIlluminationTypes_studio_plastic + 1 ) 
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("67077773-0B45-4e05-93F2-A55EE43F7EEF") swTreeControlItemType_e
    {
        swFeatureManagerItem_Unsupported	= 0,
        swFeatureManagerItem_Feature	= 1,
        swFeatureManagerItem_Component	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("ACBE3DA8-0239-41f8-8E38-683702876729") swCheckInterferenceOption_e
    {
        swBodyInterference_OptionDefault	= 0x1,
        swBodyInterference_IncludeCoincidentFaces	= 0x2,
        swBodyInterference_ReturnInterferingObject	= 0x4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("14E2E92A-34A8-4223-9017-A522FB7E6508") swConfigurationChangeTypes_e
    {
        swConfigurationChangeTypes_Undefined	= -1,
        swConfigurationChangeTypes_DimensionValue	= 0,
        swConfigurationChangeTypes_SuppressionState	= 1,
        swConfigurationChangeTypes_AddChildConfiguration	= 2,
        swConfigurationChangeTypes_RemoveChildConfiguration	= 3,
        swConfigurationChangeTypes_ComponentVisibilityState	= 4,
        swConfigurationChangeTypes_CustomProperty	= 5,
        swConfigurationChangeTypes_AddDisplayState	= 6,
        swConfigurationChangeTypes_RemoveDisplayState	= 7,
        swConfigurationChangeTypes_RenameDisplayState	= 8,
        swConfigurationChangeTypes_Feature	= 9,
        swConfigurationChangeTypes_Unused1	= 10,
        swConfigurationChangeTypes_Unused2	= 11,
        swConfigurationChangeTypes_ConvertToRepresentation	= 12,
        swConfigurationChangeTypes_ConvertToPhysicalProduct	= 13,
        swConfigurationChangeTypes_ChangeRepresentationParent	= 14
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("AE4986A0-ABB5-45f0-9FE5-232E48DA0893") swSimulationMotorMotionType_e
    {
        swSimulationMotorMotion_Constant	= 0,
        swSimulationMotorMotion_Step	= 1,
        swSimulationMotorMotion_Harmonic	= 2,
        swSimulationMotorMotion_Function	= 3,
        swSimulationMotorMotion_Spline	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("07D8A2C1-C7C5-401d-A295-7DDD8E0F4A3B") swSimulationMotorDriveType_e
    {
        swSimulationMotorDrive_Displacement	= 0,
        swSimulationMotorDrive_Velocity	= 1,
        swSimulationMotorDrive_Acceleration	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("109B3CC3-5F37-4a95-9B27-BE3B1ABBB179") swSimulationForceType_e
    {
        swSimulationForce_LinearForce	= 0,
        swSimulationForce_Torque	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("4ACD84F3-9E26-4b67-9A2C-2C8333A60F7A") swSimulationForceActionType_e
    {
        swSimulationForceAction_ActionOnly	= 0,
        swSimulationForceAction_ActionAndRecation	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("8BF86E4A-0AA8-4958-B3ED-42F3713FBA91") swSimulationForceFunctionType_e
    {
        swSimulationForceFunction_Constant	= 0,
        swSimulationForceFunction_Step	= 1,
        swSimulationForceFunction_Harmonic	= 2,
        swSimulationForceFunction_Function	= 3,
        swSimulationForceFunction_Spline	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("806B7CB0-500C-4bad-844B-E4822689633D") swSimulationSpringType_e
    {
        swSimulationSpring_Linear	= 0,
        swSimulationSpring_Torsional	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("A78765F4-2694-474c-B649-7A17370D2437") swSimulationDamperType_e
    {
        swSimulationDamper_Linear	= 0,
        swSimulationDamper_Torsional	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("0E1E09DA-72A8-49d2-BDC3-54605AE6CCE3") swSimulationGravityAxisName_e
    {
        swSimulationGravityAxis_Invalid	= -1,
        swSimulationGravityAxis_X	= 0,
        swSimulationGravityAxis_Y	= 1,
        swSimulationGravityAxis_Z	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("7C26E21D-0065-4c67-A0DD-3FA0DBB4C244") swRoutingSearchType_e
    {
        swRoutingConnectorSearch	= 0,
        swRoutingComponentSearch	= 1,
        swRoutingWireSearch	= 2,
        swRoutingCableSearch	= 3,
        swRoutingSignalSearch	= 4,
        swRoutingPipeSearch	= 5,
        swRoutingPipeSegmentSearch	= 6,
        swRoutingFittingSearch	= 7
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("a08e6608-5f15-406d-9e34-3bd293a42327") swCosmosWorksMat
    {
        swCosmosWorksMatNone	= 0,
        swCosmosWorksMatAcrylic	= 1,
        swCosmosWorksMatAluminum	= 2,
        swCosmosWorksMatNylon	= 3,
        swCosmosWorksMatRubber	= 4,
        swCosmosWorksMatSteel	= 5
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("99AC65DF-2BB8-4d85-A4AC-BB120B739576") swMotionMat_e
    {
        swMotionMatNone	= 1000,
        swMotionMatAcrylic	= 1001,
        swMotionMatAluminumDry	= 1002,
        swMotionMatAluminumGreasy	= 1003,
        swMotionMatNylon	= 1004,
        swMotionMatRubberDry	= 1005,
        swMotionMatRubberGreasy	= 1006,
        swMotionMatSteelDry	= 1007,
        swMotionMatSteelGreasy	= 1008
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("DF2C5440-55AC-4ee7-86A9-338EEE09E3C7") swMotionContactFrictionType_e
    {
        swMotionContactFrictionOff	= 0,
        swMotionContactFrictionFull	= 1,
        swMotionContactFrictionDynamic	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("1D04A937-E9D8-4ce8-8727-4924F3F291F5") swTrackingIDError_e
    {
        swTrackingIDError_NoError	= 0,
        swTrackingIDError_UnknownError	= 1,
        swTrackingIDError_InvalidTrackingCookie	= 2,
        swTrackingIDError_InvalidTrackingID	= 3,
        swTrackingIDError_UntrackableObject	= 4,
        swTrackingIDError_UntrackedObject	= 5
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("a08e6606-5f16-4066-9e36-3bd293a42326") swPresentationOpts_e
    {
        swPresentationOpts_None	= 0,
        swPresentationOpts_Pres	= 0x1,
        swPresentationOpts_U3D	= 0x2,
        swPresentationOpts_Animations	= 0x4,
        swPresentationOpts_Explodes	= 0x8,
        swPresentationOpts_CameraMovement	= 0x10,
        swPresentationOpts_ActiveView	= 0x20,
        swPresentationOpts_TopView	= 0x40,
        swPresentationOpts_BottomView	= 0x80,
        swPresentationOpts_LeftView	= 0x100,
        swPresentationOpts_RightView	= 0x200,
        swPresentationOpts_FrontView	= 0x400,
        swPresentationOpts_BackView	= 0x800,
        swPresentationOpts_NormalView	= 0x1000,
        swPresentationOpts_IsometricView	= 0x2000,
        swPresentationOpts_TrimetricView	= 0x4000,
        swPresentationOpts_DimetricView	= 0x8000,
        swPresentationOpts_OpenPDF	= 0x10000,
        swPresentationOpts_ExcludeFromAnnoView	= 0x20000,
        swPresentationOpts_CreateAttachSTEP242	= 0x40000,
        swPresentationOpts_LowAccuracy	= 0x80000,
        swPresentationOpts_HighAccuracy	= 0x100000,
        swPresentationOpts_MedAccuracy	= 0x200000,
        swPresentationOpts_MaxAccuracy	= 0x400000,
        swPresentationOpts_CompressTesselation	= 0x800000,
        swPresentationOpts_DisablePrinting3DPDF	= 0x1000000,
        swPresentationOpts_DisableEditing3DPDF	= 0x2000000,
        swPresentationOpts_DisableCopying3DPDF	= 0x4000000,
        swPresentationOpts_ShowOnlyGraphicalData	= 0x8000000,
        swPresentationOpts_PDFPreview	= 0x10000000,
        swPresentationOpts_SingleHTML	= 0x20000000,
        swPresentationOpts_ChkOpenPassword3DPDF	= 0x40000000
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("059AA305-1296-4d92-BE6F-C016335C3B10") swSketchSlotCreationType_e
    {
        swSketchSlotCreationType_line	= 0,
        swSketchSlotCreationType_center_line	= 1,
        swSketchSlotCreationType_arc	= 2,
        swSketchSlotCreationType_3pointarc	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("2F8AAC36-F606-48d0-9DDA-422A74576C18") swSketchSlotLengthType_e
    {
        swSketchSlotLengthType_CenterCenter	= 0,
        swSketchSlotLengthType_FullLength	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("250DDB99-84A9-4d95-B9BE-55CBDF60B625") swImportModelItemsSource_e
    {
        swImportModelItemsFromEntireModel	= 0,
        swImportModelItemsFromSelectedFeature	= 1,
        swImportModelItemsFromSelectedComponent	= 2,
        swImportModelItemsFromAssemblyOnly	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("250DDB99-84A9-4d95-B9BE-55CBDF60B626") swRunMacroOption_e
    {
        swRunMacroDefault	= 0,
        swRunMacroUnloadAfterRun	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("250DDB99-84A9-4d95-B9BE-55CBDF60B627") swRunMacroError_e
    {
        swRunMacroError_InvalidArg	= 1,
        swRunMacroError_MacrosAreDisabled	= 2,
        swRunMacroError_NotInDesignMode	= 3,
        swRunMacroError_OnlyCodeModules	= 4,
        swRunMacroError_OutOfMemory	= 5,
        swRunMacroError_InvalidProcname	= 6,
        swRunMacroError_InvalidPropertyType	= 7,
        swRunMacroError_SuborfuncExpected	= 8,
        swRunMacroError_BadParmCount	= 9,
        swRunMacroError_BadVarType	= 10,
        swRunMacroError_UserInterrupt	= 11,
        swRunMacroError_Exception	= 12,
        swRunMacroError_Overflow	= 13,
        swRunMacroError_TypeMismatch	= 14,
        swRunMacroError_ParmNotOptional	= 15,
        swRunMacroError_UnknownLcid	= 16,
        swRunMacroError_Busy	= 17,
        swRunMacroError_ConnectionTerminated	= 18,
        swRunMacroError_CallRejected	= 19,
        swRunMacroError_CallFailed	= 20,
        swRunMacroError_Zombied	= 21,
        swRunMacroError_Invalidindex	= 22,
        swRunMacroError_NoPermission	= 23,
        swRunMacroError_Reverted	= 24,
        swRunMacroError_TooManyOpenFiles	= 25,
        swRunMacroError_DiskError	= 26,
        swRunMacroError_CantSave	= 27,
        swRunMacroError_OpenFileFailed	= 28
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("36CB73BE-F184-4d8b-B823-3CCE9A8DE141") swPMContainer_e
    {
        swPMInTabsWithFM	= 0,
        swPMPinnedAboveFM	= 1,
        swPMPinnedNextToFM	= 2,
        swPMFloating	= 3,
        swPMPinnedLowerRight	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("F488A026-70F5-417c-B35A-BE7A3FB4C101") swInterpolationType_e
    {
        swInvalidInterpolation	= 0,
        swCubicInterpolation	= 1,
        swAkimaInterpolation	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("F488A026-70F5-417c-B35A-BE7A3FB4C102") swLicenseType_e
    {
        swLicenseType_Full	= 0,
        swLicenseType_Educational	= 1,
        swLicenseType_Student	= 2,
        swLicenseType_StudentDesignKit	= 3,
        swLicenseType_PersonalEdition	= 4,
        swLicenseType_Full_Office	= 5,
        swLicenseType_Full_Professional	= 6,
        swLicenseType_Full_Premium	= 7,
        swLicenseType_Maker	= 8
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("EA1DC919-2175-4bc2-AB0D-AAA9962FB67F") swPointStyle_e
    {
        swPointStyle_X	= 1,
        swPointStyle_Plus	= 2,
        swPointStyle_XPlus	= 3,
        swPointStyle_Circle	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("A6FD58E3-6D4D-4695-A8C2-2B1AD8B5D31C") swComponentLoadStatus_e
    {
        swComponentLoadStatus_Unknown	= 0,
        swComponentLoadStatus_Hidden	= 1,
        swComponentLoadStatus_Suppressed	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("520B4921-8196-464c-A7E0-84F6E27D9B9A") swDimXpertTreeDisplay_e
    {
        swDimXpertTreeDisplay_Flat	= 1,
        swDimXpertTreeDisplay_Annotation	= 2,
        swDimXpertTreeDisplay_Feature	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("B2377107-E6D6-4fab-9B50-78DE07C8AE8E") swSensorType_e
    {
        swSensorSimulation	= 0,
        swSensorMassProperty	= 1,
        swSensorDimension	= 2,
        swSensorInterfaceDetection	= 3,
        swSensorProximity	= 5
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("FB300942-139E-4aa2-8C2E-C7CED2FFBF54") swSensorAlertType_e
    {
        swSensorAlert_GreaterThan	= 0,
        swSensorAlert_LessThan	= 1,
        swSensorAlert_Exactly	= 2,
        swSensorAlert_NotGreaterThan	= 3,
        swSensorAlert_NotLessThan	= 4,
        swSensorAlert_NotExactly	= 5,
        swSensorAlert_Between	= 6,
        swSensorAlert_NotBetween	= 7,
        swSensorAlert_True	= 8,
        swSensorAlert_False	= 9
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("8C01A23A-3603-454a-A8B9-DB86A2B5AB42") swManipulatorOptions_e
    {
        swManipulatorOpts_Default	= 0,
        swManipulatorOpts_KeepAfterComponentModify	= 0x1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("E2517B85-38F2-447e-A582-D14482926732") swViewportDisplay_e
    {
        swViewportSingle	= 1,
        swViewportTwoViewHorizontal	= 2,
        swViewportTwoViewVertical	= 3,
        swViewportFourView	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("7BE79264-459E-4400-BE83-E9A09F1D3FE7") swFaceDeleteOption_e
    {
        swFaceDelete_Default	= 0,
        swFaceDelete_Patch	= 1,
        swFaceDelete_Fill	= 2,
        swFaceDelete_FillWithTangent	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("F6CD5E03-2756-4a0f-BC99-9A2872F01E0D") swAddComponentConfigOptions_e
    {
        swAddComponentConfigOptions_CurrentSelectedConfig	= 0,
        swAddComponentConfigOptions_NewConfigWithAllReferenceModels	= 1,
        swAddComponentConfigOptions_NewConfigWithAsmStructure	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("2EE2CE7B-90B3-41bc-A59D-25DC7856468D") swConnectionPointType_e
    {
        swConnectionPoint_Tube	= 1,
        swConnectionPoint_FabricatedPipe	= 2,
        swConnectionPoint_Electrical	= 3,
        swConnectionPoint_UserDefined	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("E0BB01C0-7086-41d5-99DB-EE23686948BD") swElectricalConnectionPointType_e
    {
        swElectricalConnectionPoint_Harness	= 1,
        swElectricalConnectionPoint_CableOrWire	= 2,
        swElectricalConnectionPoint_Conduit	= 3,
        swElectricalConnectionPoint_RibbonCable	= 4,
        swElectricalConnectionPoint_CableTray	= 5,
        swElectricalConnectionPoint_Trunking	= 6
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("84A74477-13C4-461e-8B44-1AF9A8B8ADC7") swExportFlatPatternViewOptions_e
    {
        swExportFlatPatternOption_None	= 0,
        swExportFlatPatternOption_RemoveBends	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("28BD913C-7021-47ad-BC21-51A1653A26A4") swVrmlOutputVersion_e
    {
        swVrmlOutputVersion_97	= 1,
        swVrmlOutputVersion_01	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("88798D2D-6364-41df-941A-0972E06B6E26") swImportStlVrmlModelType_e
    {
        swImportStlVrmlModelType_Graphics	= 0,
        swImportStlVrmlModelType_Surface	= 1,
        swImportStlVrmlModelType_Solid	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("7E6F559E-FED3-4898-9A80-1F0B21B0BA38") swHealActionType_e
    {
        swHealAction_Shrink	= 0,
        swHealAction_GrowParent	= 1,
        swHealAction_Cap	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("C466DFA7-5B5A-4c40-AB81-80DD2267DC8A") swLoopProcessOption_e
    {
        swLoopProcess_Together	= 0,
        swLoopProcess_Independent	= 1,
        swLoopProcess_Auto	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("2A006D5A-8953-4db0-AEC5-CF76E08E1604") swRefPlaneReferenceConstraints_e
    {
        swRefPlaneReferenceConstraint_Parallel	= 0x1,
        swRefPlaneReferenceConstraint_Perpendicular	= 0x2,
        swRefPlaneReferenceConstraint_Coincident	= 0x4,
        swRefPlaneReferenceConstraint_Distance	= 0x8,
        swRefPlaneReferenceConstraint_Angle	= 0x10,
        swRefPlaneReferenceConstraint_Tangent	= 0x20,
        swRefPlaneReferenceConstraint_Project	= 0x40,
        swRefPlaneReferenceConstraint_MidPlane	= 0x80,
        swRefPlaneReferenceConstraint_OptionFlip	= 0x100,
        swRefPlaneReferenceConstraint_OptionOriginOnCurve	= 0x200,
        swRefPlaneReferenceConstraint_OptionProjectToNearestLocation	= 0x400,
        swRefPlaneReferenceConstraint_OptionProjectAlongSketchNormal	= 0x800,
        swRefPlaneReferenceConstraint_ParallelToScreen	= 0x1000,
        swRefPlaneReferenceConstraint_OptionReferenceFlip	= 0x2000
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("3D91DCB2-718B-4b7a-8C94-26962C0DB210") swFeatureEditStatus_e
    {
        swFeature_Editable	= 0,
        swFeature_NonEditable	= 0x1,
        swFeature_UnderEditing	= 0x2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("08179B9A-4DC5-497d-B0C9-E3FAD91CB717") swRefPlaneReferenceIndex_e
    {
        swRefPlaneReference_First	= 0,
        swRefPlaneReference_Second	= 1,
        swRefPlaneReference_Third	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("61531ED5-E857-4aaa-B0CE-1CF31A6E1992") swBodyInfo_e
    {
        swUserBody_e	= 0,
        swNormalBody_e	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("73B1C265-85C2-4468-8056-AEDD09601487") swSetRouteFixedLengthError_e
    {
        swSetRouteFixedLengthError_NoError	= 0,
        swSetRouteFixedLengthError_NotFixedLengthSegment	= 1,
        swSetRouteFixedLengthError_NotFlexible	= 2,
        swSetRouteFixedLengthError_NoProperty	= 3,
        swSetRouteFixedLengthError_SetLengthFailed	= 4,
        swSetRouteFixedLengthError_SelectionFailed	= 5,
        swSetRouteFixedLengthError_FailedMinBendRadius	= 6
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("896A9D7A-ED91-4794-808F-05FD230519C2") swBodyMaterialApplicationError_e
    {
        swBodyMaterialApplicationError_UnknownError	= -1,
        swBodyMaterialApplicationError_NoError	= 1,
        swBodyMaterialApplicationError_ReadOnly	= 2,
        swBodyMaterialApplicationError_ExternalReference	= 3,
        swBodyMaterialApplicationError_RolledBackState	= 4,
        swBodyMaterialApplicationError_InvalidConfigName	= 5,
        swBodyMaterialApplicationError_InvalidMaterialNameOrDbName	= 6
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("5B98E547-90C8-4eb8-9898-4BB94779F441") swMenuItemType_e
    {
        swMenuItemType_Default	= 0,
        swMenuItemType_Break	= 1,
        swMenuItemType_Separator	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("5335B60B-C522-4131-91C1-EFFA9348BD7E") swInsertTableColumnWidthStyle_e
    {
        swInsertColumn_DefaultWidth	= 0,
        swInsertColumn_SingleLineTight	= 1,
        swInsertColumn_MultilineTight	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("92EB55F4-00BC-4261-AE7F-BEB6DDF313F4") swCenterLineMarkOrient_e
    {
        swCenterLineMarkOrientToSlot	= 0,
        swCenterLineMarkOrientToSheet	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("73C5512D-38CD-49ee-9CD1-28DF8AD791DD") swPropertyManagerPageCursors_e
    {
        swPropertyManagerPageCursors_None	= 0,
        swPropertyManagerPageCursors_Okay	= 1,
        swPropertyManagerPageCursors_Advance	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("E4AC3F39-839D-4aa8-9A6B-E5A2A1F12044") swModelRouteType_e
    {
        swModelRouteType_Harness	= 0,
        swModelRouteType_Tube	= 1,
        swModelRouteType_FabricatedPipe	= 2,
        swModelRouteType_FormedPipe	= 3,
        swModelRouteType_Trunking	= 4,
        swModelRouteType_UnknownRouteType	= 5,
        swModelRouteType_Electrical	= 6,
        swModelRouteType_AnyRouteType	= 7,
        swModelRouteType_MixedRouteType	= 8
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("53DA933F-DE09-429d-AD0D-ADC5A354F1FD") swElectricalSubType_e
    {
        swElectricalSubType_ElectricalHarness	= 0,
        swElectricalSubType_ElectricalCableWire	= 1,
        swElectricalSubType_ElectricalConduit	= 2,
        swElectricalSubType_ElectricalStandardCable	= 3,
        swElectricalSubType_NotElectrical	= 20,
        swElectricalSubType_ElectricalRibbonCable	= 30
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("364E0061-3E6E-428f-B228-FE8FC2DC5EB6") swDisplayStateCreationChoices_e
    {
        swDisplayStateCreation_AskUser	= -1,
        swDisplayStateCreation_PW	= 1,
        swDisplayStateCreation_SW	= 2,
        swDisplayStateCreation_BothPWSW	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("F7403AB6-6ABA-4646-8F64-25DA1812027B") swLibFeatureData_e
    {
        swLibFeatureData_FeatureRespect	= 0,
        swLibFeatureData_PartRespect	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("D5A30E7A-8520-464a-B0D1-6AD4D22B374D") swModifyTableNotifyReason_e
    {
        swModifyTableNotifyReason_ColumnInsertionLeft	= 0,
        swModifyTableNotifyReason_ColumnInsertionRight	= 1,
        swModifyTableNotifyReason_RowInsertionAbove	= 2,
        swModifyTableNotifyReason_RowInsertionBelow	= 3,
        swModifyTableNotifyReason_ColumnRellocation	= 4,
        swModifyTableNotifyReason_RowRellocation	= 5,
        swModifyTableNotifyReason_ColumnDeletion	= 6,
        swModifyTableNotifyReason_CellDataModify	= 7,
        swModifyTableNotifyReason_ColumnPropertyModify	= 8,
        swModifyTableNotifyReason_CellMerge	= 9,
        swModifyTableNotifyReason_CellUnMerge	= 10,
        swModifyTableNotifyReason_EditMultiProp	= 11,
        swModifyTableNotifyReason_CustomPropertyModify	= 12,
        swModifyTableNotifyReason_TableSplitVerticallyLeft	= 13,
        swModifyTableNotifyReason_TableSplitVerticallyRight	= 14,
        swModifyTableNotifyReason_TableSplitHorizontallyAbove	= 15,
        swModifyTableNotifyReason_TableSplitHorizontallyBelow	= 16,
        swModifyTableNotifyReason_TableMerge	= 17
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("EFBB4CA9-9AF6-45d1-9820-D0AD9CD8C4B1") swRemoveCommandGroupErrors
    {
        swRemoveCommandGroup_Failed	= 0,
        swRemoveCommandGroup_Success	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("0BA4E40E-2347-4341-B6D3-1267D24A1960") swCreateCommandGroupErrors
    {
        swCreateCommandGroup_Failed	= 0,
        swCreateCommandGroup_Success	= 1,
        swCreateCommandGroup_Exceeds_ToolBarIDs	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("D3C9C7E5-8792-4eba-B87A-20A45A1692BE") swRoutingFlattenTypes_e
    {
        swAnnotation_e	= 1,
        SwManufacture_e	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("9E6E314F-A3CF-4e16-A997-676E23676959") swRoutingFlattenSegmentOrientation_e
    {
        swVertical_e	= 1,
        SwHorizontal_e	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("E0F80830-D585-46a0-9176-611F0EE0AD0D") swRoutingFlattenConnectorOptions_e
    {
        swDisplay3DConnectors_e	= 1,
        SwUseDrawingConnectorBlocks_e	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("324C7EFB-1A55-402d-9C1C-D1587885D84F") swBendLineDirection_e
    {
        swNotBendLine	= 0,
        swUpDirection	= 1,
        swDownDirection	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("C88127C7-4DAA-45b5-BDE2-528BCE8D778E") swRepairSketchOption_e
    {
        swRepairSketchCleanup	= 0,
        swRepairSketchZeroSegment	= 1,
        swRepairSketchMergeSegment	= 2,
        swRepairSketchCloseGaps	= 4,
        swRepairSketchBreakIntersection	= 8
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("44B678BF-8789-49fc-9330-3FA4A9D5F63D") swTaskPaneBitmapsOptions_e
    {
        swTaskPaneBitmapsOptions_Close	= 1,
        swTaskPaneBitmapsOptions_Help	= 2,
        swTaskPaneBitmapsOptions_Ok	= 3,
        swTaskPaneBitmapsOptions_Next	= 4,
        swTaskPaneBitmapsOptions_Back	= 5,
        swTaskPaneBitmapsOptions_Options	= 6
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("FE3FB76B-9765-4137-B4BD-ECE7DF9E8223") swCutSweepOption_e
    {
        swProfileSweep	= 1,
        swSolidSweep	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("2C6EA568-050F-4e3e-823A-897BCACC6678") swRayTraceRenderType_e
    {
        swPhotoView	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("983FDB5B-3A8D-432d-85E1-AB82BBE36912") swInsertOptions_e
    {
        swInsertOption_BeforeSelectedSheet	= 0,
        swInsertOption_AfterSelectedSheet	= 1,
        swInsertOption_MoveToEnd	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("23991101-F544-47e1-89A5-2F192BAC0835") swRenameOptions_e
    {
        swRenameOption_Yes	= 1,
        swRenameOption_No	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("D68BF347-78B4-41f6-8EC2-035EC4C75A5C") swMirrorProfileOrAlignmentAxis_e
    {
        swMirrorProfileOrAlignmentAxis_Horizontal	= 1,
        swMirrorProfileOrAlignmentAxis_Vertical	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("A41A056A-2C33-42e6-9E2B-AE526823C5F5") swPackAndGoSaveStatus_e
    {
        swPackAndGoSaveStatus_Succeed	= 0,
        swPackAndGoSaveStatus_UserInputNotCorrect	= 1,
        swPackAndGoSaveStatus_FileAlreadyExist	= 2,
        swPackAndGoSaveStatus_SaveToEmpty	= 3,
        swPackAndGoSaveStatus_SaveError	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("1D323B5A-692E-4fcd-983B-52AA095C16A6") swPackAndGoDocumentStatus_e
    {
        swPackAndGoDocumentStatus_Normal	= 0,
        swPackAndGoDocumentStatus_Virtual	= 1,
        swPackAndGoDocumentStatus_UnKnown	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("32585007-C313-4b94-BB75-5A0AF632774E") swDisplayStateOpts_e
    {
        swThisDisplayState	= 1,
        swAllDisplayState	= 2,
        swSpecifyDisplayState	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("A43F89BF-1A3D-43fa-9733-6524D2CC515E") swDimXpertGeneralTolClass_e
    {
        swDimXpertGeneralTolClass_Fine	= 0,
        swDimXpertGeneralTolClass_Medium	= 1,
        swDimXpertGeneralTolClass_Coarse	= 2,
        swDimXpertGeneralTolClass_VeryCoarse	= 3,
        swDimXpertGeneralTolClass_Custom1	= 4,
        swDimXpertGeneralTolClass_Custom2	= 5
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("A2662A14-AA51-49b5-B0DC-F36494E22E77") swDimXpertTolType_e
    {
        swDimXpertTolType_Bilateral	= 0,
        swDimXpertTolType_Symmetric	= 1,
        swDimXpertTolType_GeneralOrBlock	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("C064DA36-7B2D-4353-BCEB-5669F7468F1C") swDimXpertDisplaySlotDimensionType_e
    {
        swDimXpertDisplaySlotDimensionType_LengthRadius	= 0,
        swDimXpertDisplaySlotDimensionType_LengthWidth	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("2465DC98-3B53-4318-B9D6-AB5DC75506C2") swDimXpertDisplayHoleDimensionType_e
    {
        swDimXpertDisplayHoleDimensionType_Diameters	= 0,
        swDimXpertDisplayHoleDimensionType_DiameterDepth	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("B643F124-A298-4dfd-AB88-3240ED09654F") swDimXpertDisplayGtolLinearDimAttachmentType_e
    {
        swDimXpertDisplayGtolLinearDimAttachmentType_ValueSide	= 0,
        swDimXpertDisplayGtolLinearDimAttachmentType_ValueTop	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("C4799DD7-363C-4b5a-8618-4843D40C4FBB") swDimXpertDisplayDatumGtolSurfaceAttachmentType_e
    {
        swDimXpertDisplayDatumGtolSurfaceAttachmentType_ValueSide	= 0,
        swDimXpertDisplayDatumGtolSurfaceAttachmentType_ValueTop	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("F7A433A0-945D-40bb-8F24-0BC7A0687F40") swDimXpertDisplayDatumGtolLinearDimAttachmentType_e
    {
        swDimXpertDisplayDatumGtolLinearDimAttachmentType_ValueSide	= 0,
        swDimXpertDisplayDatumGtolLinearDimAttachmentType_ValueTop	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("B30B7FC8-9029-4819-B6EF-BFAC86E95D2F") swInsertNewAssemblyErrorCode_e
    {
        swInsertNewAssemblyError_ErrorUknown	= 0,
        swInsertNewAssemblyError_NoError	= 1,
        swInsertNewAssemblyError_FilePathEmpty	= 2,
        swInsertNewAssemblyError_FileAlreadyExists	= 3,
        swInsertNewAssemblyError_FolderDoesNotExist	= 4,
        swInsertNewAssemblyError_ExtensionNotSldAsm	= 5
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("0B05588B-0819-4bd0-9552-AB64C674E6B8") swRayTraceRenderImageFormat_e
    {
        swImageFormat_FlexiblePrecision	= 0,
        swImageFormat_Targa	= 1,
        swImageFormat_WindowsBmp	= 2,
        swImageFormat_HDR	= 3,
        swImageFormat_JPEG2000	= 4,
        swImageFormat_JPEG2000_16bit	= 5,
        swImageFormat_JPEG2000_16bit_Lossless	= 6,
        swImageFormat_JPEG	= 7,
        swImageFormat_PNG	= 8,
        swImageFormat_PNG_16bit	= 9,
        swImageFormat_SGI_RGB	= 10,
        swImageFormat_TIF	= 11,
        swImageFormat_TIF_16bit	= 12,
        swImageFormat_TIF_16bit_uncompr	= 13,
        swImageFormat_OpenEXR	= 14,
        swImageFormat_OpenEXR_32bit	= 15,
        swImageFormat_OpenEXR_TILED16bit	= 16,
        swImageFormat_OpenEXR_TILED32bit	= 17
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("27922877-D267-496d-8477-808081B5FD95") swRayTraceRenderQuality_e
    {
        swRenderQuality_Good	= 0,
        swRenderQuality_Better	= 1,
        swRenderQuality_Best	= 2,
        swRenderQuality_Maximum	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("04EA05A7-AB61-4b8a-B812-0611943541AA") swParameterizationPropertyType_e
    {
        swParameterizationPropertyType_Periodic	= 13701,
        swParameterizationPropertyType_AllDerivativesContinuous	= 13737,
        swParameterizationPropertyType_AllDerivativesNotContinuous	= 13738,
        swParameterizationPropertyType_Linear	= 13739,
        swParameterizationPropertyType_Circular	= 13740,
        swParameterizationPropertyType_BoundsCoincident	= 13746
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("8D005900-E3AD-40e8-98B6-8B29DE939952") swBoundType_e
    {
        swBoundType_Infinite	= 13733,
        swBoundType_Extendable	= 13734,
        swBoundType_NotExtendable	= 13735,
        swBoundType_Periodic	= 13701,
        swBoundType_PeriodicNotDifferentiable	= 13736,
        swBoundType_Degenerate	= 13741
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("F065DB91-3BD0-49b4-94DD-04226D344938") swHandleWindowFromHandleCreationFailure_e
    {
        swHandleWindowFromHandleCreationFailure_Cancel	= 1,
        swHandleWindowFromHandleCreationFailure_Retry	= 2,
        swHandleWindowFromHandleCreationFailure_Continue	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("F54F8E2F-A2AC-4e1d-A193-07678A050F9C") swConnectedSegmentsOption_e
    {
        swConnectedSegments_SimpleCut	= 1,
        swConnectedSegments_CopedCut	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("5639D1D7-1143-4273-8FE9-A5C9802505B4") swConfigurationType_e
    {
        swConfiguration_Standard	= 0,
        swConfiguration_AsMachined	= 1,
        swConfiguration_AsWelded	= 2,
        swConfiguration_SheetMetal	= 3,
        swConfiguration_SpeedPak	= 4,
        swConfiguration_Defeature	= 5
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("FF5306EB-216A-41f1-8980-A8648009D47E") swSystemOptionDisplayAntiAliasing_e
    {
        swSystemOptionDisplayAntiAliasing_None	= 1,
        swSystemOptionDisplayAntiAliasing_Edges	= 2,
        swSystemOptionDisplayAntiAliasing_FullScene	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("C817E49B-630F-4322-909A-A0D5C1EE8AC3") swPerformanceFeedback_e
    {
        swPerformanceFeedback_No	= 0,
        swPerformanceFeedback_Yes	= 1,
        swPerformanceFeedback_RemindLater	= 2,
        swPerformanceFeedback_RemindNow	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("1C817C2C-7EF6-4c71-9259-A68C46BFCA97") swMotionPlotAxisType_e
    {
        swMotionPlotAxisType_XAXISTIME	= 0,
        swMotionPlotAxisType_XAXISFRAME	= 1,
        swMotionPlotAxisType_CM_POSITION	= 2,
        swMotionPlotAxisType_PRESSURE_ANGLE	= 3,
        swMotionPlotAxisType_CM_VELOCITY	= 4,
        swMotionPlotAxisType_CM_ACCELERATION	= 5,
        swMotionPlotAxisType_TRANS_DISP	= 6,
        swMotionPlotAxisType_TRANS_VELOCITY	= 7,
        swMotionPlotAxisType_TRANS_ACCELERATION	= 8,
        swMotionPlotAxisType_ANGULAR_DISP	= 9,
        swMotionPlotAxisType_ANGULAR_VELOCITY	= 10,
        swMotionPlotAxisType_ANGULAR_ACCEL	= 11,
        swMotionPlotAxisType_TRANS_MOMENTUM	= 12,
        swMotionPlotAxisType_ANGULAR_MOMENTUM	= 13,
        swMotionPlotAxisType_REACTION_FORCE	= 14,
        swMotionPlotAxisType_REACTION_TORQUE	= 15,
        swMotionPlotAxisType_PROJ_ANGLES	= 16,
        swMotionPlotAxisType_EULER_ANGLES	= 17,
        swMotionPlotAxisType_PITCH	= 18,
        swMotionPlotAxisType_BRYANT_ANGLE	= 19,
        swMotionPlotAxisType_RODRIQUEZ_PARAM	= 20,
        swMotionPlotAxisType_MOTION_APPLIED_FORCE	= 21,
        swMotionPlotAxisType_MOTION_APPLIED_TORQUE	= 22,
        swMotionPlotAxisType_FRICTION_FORCE	= 23,
        swMotionPlotAxisType_FRICTION_MOMENT	= 24,
        swMotionPlotAxisType_KINETIC_ENERGY	= 25,
        swMotionPlotAxisType_TRANS_KINETIC_ENERGY	= 26,
        swMotionPlotAxisType_ANGULAR_KINETIC_ENERGY	= 27,
        swMotionPlotAxisType_POTENTIAL_ENERGY_DELTA	= 28,
        swMotionPlotAxisType_POWER_CONSUMPTION	= 29,
        swMotionPlotAxisType_TRACE_PATH	= 30,
        swMotionPlotAxisType_CONTACT_FORCE	= 31,
        swMotionPlotAxisType_REFLECTED_MASS	= 32,
        swMotionPlotAxisType_REFLECTED_INERTIA	= 33
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("F51AC635-AAEC-4300-BE69-67DF290C33C4") swMotionPlotAxisComponent_e
    {
        swMotionPlotAxisComponent_X	= 0,
        swMotionPlotAxisComponent_Y	= 1,
        swMotionPlotAxisComponent_Z	= 2,
        swMotionPlotAxisComponent_MAGNITUDE	= 3,
        swMotionPlotAxisComponent_RADIAL_MAGNITUDE	= 4,
        swMotionPlotAxisComponent_EULER_PSI	= 5,
        swMotionPlotAxisComponent_EULER_THETA	= 6,
        swMotionPlotAxisComponent_EULER_PHI	= 7,
        swMotionPlotAxisComponent_YAW	= 8,
        swMotionPlotAxisComponent_PITCH	= 9,
        swMotionPlotAxisComponent_ROLL	= 10,
        swMotionPlotAxisComponent_RODRIGUEZ_PARAM1	= 11,
        swMotionPlotAxisComponent_RODRIGUEZ_PARAM2	= 12,
        swMotionPlotAxisComponent_RODRIGUEZ_PARAM3	= 13,
        swMotionPlotAxisComponent_BRYANT_ANGLE1	= 14,
        swMotionPlotAxisComponent_BRYANT_ANGLE2	= 15,
        swMotionPlotAxisComponent_BRYANT_ANGLE3	= 16
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("B68DBEC3-EF75-4e13-BC2C-31D7F57390D2") swAlignDimensionType_e
    {
        swAlignDimensionType_AutoArrange	= 0,
        swAlignDimensionType_SpaceEvenly	= 1,
        swAlignDimensionType_Colinear	= 2,
        swAlignDimensionType_Stagger	= 3,
        swAlignDimensionType_TopAlignText	= 4,
        swAlignDimensionType_BottomAlignText	= 5,
        swAlignDimensionType_LeftAlignText	= 6,
        swAlignDimensionType_RightAligntext	= 7
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("430823A9-581D-45e8-B6DA-9BF34F3AB570") swDimXpertBlockPrecision_e
    {
        swDimXpertBlockPrecsionTwoDecimals	= 0,
        swDimXpertBlockPrecisionThreeDecimals	= 1,
        swDimXpertBlockPrecisionFourDecimals	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("80BE9AE1-6FF4-4883-9261-44587162432A") swFileCloseNotifyReason_e
    {
        swFileCloseNotifyReason_Unknown	= 0,
        swFileCloseNotifyReason_CloseForReload	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("DFBC489C-8852-4819-BC7D-F8F39ADA75FA") swAutoInsertCenterMarkTypes_e
    {
        swAutoInsertCenterMarkType_Hole	= 0x1,
        swAutoInsertCenterMarkType_Fillets	= 0x2,
        swAutoInsertCenterMarkType_Slots	= 0x4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("916EE5DE-E545-4391-9AD9-752FEFB47EAB") swPartConfigurationGroupingOption_e
    {
        swDisplay_ConfigurationOfSamePart_AsSeparateItem	= 1,
        swDisplay_AllConfigurationOfSamePart_AsOneItem	= 2,
        swDisplay_ConfigurationWithSameName_AsOneItem	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("7D8EF2C6-AE50-4b0f-824C-04E1F4A32D62") swGTolTextParts_e
    {
        swGTolTextPrefix	= 1,
        swGTolTextSuffix	= 2,
        swGTolTextCalloutAbove	= 3,
        swGTolTextCalloutBelow	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("528EBA7D-2A1F-4e5b-B594-B059CDEAC425") swDatumTagTextParts_e
    {
        swDatumTagTextPrefix	= 1,
        swDatumTagTextSuffix	= 2,
        swDatumTagTextCalloutAbove	= 3,
        swDatumTagTextCalloutBelow	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("069C7BF3-21D1-487c-A719-5E120617D49D") swBomTableSortItemGroup_e
    {
        swBomTableSortItemGroup_None	= 0,
        swBomTableSortItemGroup_Assemblies	= 1,
        swBomTableSortItemGroup_Parts	= 2,
        swBomTableSortItemGroup_Other	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("0D640A0C-CFB6-4b77-9EAC-37248CEE399C") swCloseReopenError_e
    {
        swCloseReopenNoError	= 0,
        swCloseReopenUnknownError	= 1,
        swCloseReopenNoInputDocError	= 2,
        swCloseReopenOutputDocPointerError	= 3,
        swCloseReopenInvalidDocError	= 4,
        swCloseReopenCloseDocError	= 5,
        swCloseReopenLoadGenericError	= 6,
        swCloseReopenLoadFileNotFoundError	= 7,
        swCloseReopenLoadInvalidFileTypeError	= 8,
        swCloseReopenLoadFutureVersionError	= 9,
        swCloseReopenLoadSameTitleAlreadyOpenError	= 10,
        swCloseReopenLoadLiquidMachineDocError	= 11,
        swCloseReopenModifiedError	= 12,
        swCloseReopenLoadFilePathEmptyError	= 13,
        swCloseReopenLoadFilePathNonDrawingError	= 14
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("025E2010-9D00-417f-8232-9B32FE1BDB2E") swCloseReopenOption_e
    {
        swCloseReopenOption_ReadOnly	= 0x1,
        swCloseReopenOption_DiscardChanges	= 0x2,
        swCloseReopenOption_MatchSheet	= 0x4,
        swCloseReopenOption_ExitDetailingMode	= 0x8
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("C621FA4E-D7E8-4f55-9E88-7C9F3451405B") swBalloonItemNumbersOrder_e
    {
        swBalloonItemNumbers_DoNotChangeItemNumbers	= 0x1,
        swBalloonItemNumbers_FollowAssemblyOrder	= 0x2,
        swBalloonItemNumbers_OrderSequentially	= 0x4,
        swBalloonItemNumbers_NotApplicable	= 0x1000
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("6B3C001B-DC89-4199-BDB0-385A5F76732F") swBalloonQuantityPlacement_e
    {
        swBalloonQuantityPlacement_Left	= 0,
        swBalloonQuantityPlacement_Right	= 1,
        swBalloonQuantityPlacement_Top	= 2,
        swBalloonQuantityPlacement_Bottom	= 3,
        swBalloonQuantityPlacement_NotApplicable	= -1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("1EEE199B-9BEC-491a-98D6-141BF1FC0C23") swTransparencyState_e
    {
        swTransparencyStateUnknown	= -1,
        swTransparencyStateTransparent	= 0,
        swTransparencyStateNonTransparent	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("19BBBC14-214B-42ea-B6CC-6D922CA3D77F") swBendTableTagStyle_e
    {
        swBendTable_AlphaNumericTags	= 1,
        swBendTable_NumericTags	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("96E119AB-0D45-4ba9-9B8E-DEA245F5A140") swPunchTableTagStyle_e
    {
        swPunchTable_AlphaNumericTags	= 1,
        swPunchTable_NumericTags	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("54CDC8FC-7F95-4a30-82E5-0B63846D29F3") swDrawingComponentLineFontOption_e
    {
        swDrawingComponentLineFontVisible	= 1,
        swDrawingComponentLineFontHidden	= 2,
        swDrawingComponentLineFontTangent	= 3,
        swDrawingComponentLineFontHatch	= 4,
        swDrawingComponentLineFontSpeedpak	= 5
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("E22AF6ED-BEAD-40CB-B638-88B24FB69A0B") swRevisionCloudShape_e
    {
        swRevisionCloudShape_Freehand	= 0,
        swRevisionCloudShape_Ellipse	= 1,
        swRevisionCloudShape_Rectangle	= 2,
        swRevisionCloudShape_Polygon	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("BD0BC8FD-22B2-40E1-8BCF-C22E44AFCB6B") swCosmeticWeldBeadSide_e
    {
        swCosmeticWeldBeadSide_selection	= 1,
        swCosmeticWeldBeadSide_bothSides	= 2,
        swCosmeticWeldBeadSide_allAround	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("B385B014-AC3D-4A71-A01E-B79CAE3B3D63") swEdgeFlangeError_e
    {
        swEdgeFlangeError_NoError	= 0,
        swEdgeFlangeError_EdgeNotSpecified	= 1,
        swEdgeFlangeError_SketchNotSpecified	= 2,
        swEdgeFlangeError_NumberOfEdgesAndSketchesNotEqual	= 3,
        swEdgeFlangeError_EdgeAlreadyExists	= 4,
        swEdgeFlangeError_InvalidEdge	= 5,
        swEdgeFlangeError_MustSpecifyAtLeastOneEdge	= 6,
        swEdgeFlangeError_GenericError	= 7
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("CAB36875-5B3B-493C-8604-159B67A6D0C0") swBackgroundProcessOption_e
    {
        swBackgroundProcessing_Disabled	= 0,
        swBackgroundProcessing_Enabled	= 1,
        swBackgroundProcessing_DeferToApplication	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("7001B8A5-05D6-4B47-80DB-8329D63901E3") swNumberingType_e
    {
        swNumberingType_None	= 0,
        swNumberingType_Detailed	= 1,
        swNumberingType_Flat	= 2,
        swIndentedBOMNotSet	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("7C113CE3-DC6E-4BF4-9DF6-86C0F1A9C138") swAppearanceTargetType_e
    {
        swAppearanceTargetFace	= 0,
        swAppearanceTargetFeature	= ( swAppearanceTargetFace + 1 ) ,
        swAppearanceTargetBody	= ( swAppearanceTargetFeature + 1 ) ,
        swAppearanceTargetPart	= ( swAppearanceTargetBody + 1 ) ,
        swAppearanceTargetComponent	= ( swAppearanceTargetPart + 1 ) ,
        swAppearanceTargetAppearanceFilter	= ( swAppearanceTargetComponent + 1 ) 
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("43860D86-74BA-4048-8806-033F9DB3C4E1") swBendNoteAttribute_e
    {
        swBendNoteAttribute_BendDirection	= 1,
        swBendNoteAttribute_SupplementaryAngle	= 2,
        swBendNoteAttribute_ComplementaryAngle	= 3,
        swBendNoteAttribute_BendRadius	= 4,
        swBendNoteAttribute_BendOrder	= 5,
        swBendNoteAttribute_BendAllowance	= 6
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("57D1FED3-0D08-48C5-A453-09142E767F85") swMomentsOfInertiaReferenceFrame_e
    {
        swMomentsOfInertiaReferenceFrame_CenterOfMass	= 0,
        swMomentsOfInertiaReferenceFrame_DefaultCoordinateSystem	= 1,
        swMomentsOfInertiaReferenceFrame_UserCoordinateSystem	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("0B342ED0-4D3F-44CD-AD5F-221E62008A1D") swEditBalloonOption_e
    {
        swEditBalloonOption_Replace	= 0,
        swEditBalloonOption_Resequence	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("600F1F1C-B685-4FBA-A84C-A09C3630A975") swSurfaceCutFeatureError_e
    {
        swSurfaceCutFeatureError_NoError	= 0,
        swSurfaceCutFeatureError_BodiesNotSpecified	= 1,
        swSurfaceCutFeatureError_InvalidVariant	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("8895AE39-207E-4677-B51D-C2EBCFF44D67") swToolBoxPartType_e
    {
        swNotAToolboxPart	= 0,
        swToolboxStandardPart	= 0x1,
        swToolboxCopiedPart	= 0x2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("3C451CE0-B6DF-47A7-B699-D258D802CFDB") swMirrorPartOptions_e
    {
        swMirrorPartOptions_ImportSolids	= 0x1,
        swMirrorPartOptions_ImportSurfaces	= 0x2,
        swMirrorPartOptions_ImportAxes	= 0x4,
        swMirrorPartOptions_ImportPlanes	= 0x8,
        swMirrorPartOptions_ImportCosmeticThreads	= 0x10,
        swMirrorPartOptions_ImportAbsorbedSketchs	= 0x20,
        swMirrorPartOptions_ImportUnabsorbedSketchs	= 0x40,
        swMirrorPartOptions_ImportCustomProperties	= 0x80,
        swMirrorPartOptions_ImportCoordinateSystem	= 0x100,
        swMirrorPartOptions_ImportModelDimensions	= 0x200,
        swMirrorPartOptions_ImportHoleWizardData	= 0x400,
        swMirrorPartOptions_ImportCutListProperties	= 0x800,
        swMirrorPartOptions_ImportSMInfo	= 0x1000,
        swMirrorPartOptions_ImportIndProps	= 0x2000,
        swMirrorPartOptions_ImportDimXpertAnnotations	= 0x4000,
        swMirrorPartOptions_ImportBodyMaterial	= 0x8000,
        swMirrorPartOptions_ImportPartMaterial	= 0x10000
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("8E31B22F-6EDB-47C5-9119-EB6EC4315D43") swAttachAnnotationOption_e
    {
        swAttachAnnotationOption_Sheet	= 1,
        swAttachAnnotationOption_View	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("A9D18BA9-7E6B-453F-A90C-7D13A31AA5CE") swMirrorPlaneType_e
    {
        swMirrorPlaneType_Face	= 0,
        swMirrorPlaneType_Plane	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("A1D37B79-CF02-484B-8D04-4827DE1A1647") swLoftedBendFacetOptions_e
    {
        swChordTolerance	= 0,
        swBendsPerTransitionSegment	= 1,
        swMaxSegmentLength	= 2,
        swAngleBetweenSegments	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("05E87337-968C-42B8-8989-8A9BBD37B153") swSheetMetalModifierError_e
    {
        swSheetMetalModifierError_NoError	= 0,
        swSheetMetalModifierError_OldArchitecture	= 1,
        swSheetMetalModifierError_NotEnabledOnTemplate	= 2,
        swSheetMetalModifierError_InvalidProperty	= 3,
        swSheetMetalModifierError_UnspecifiedError	= 4,
        swSheetMetalModifierError_GaugeTablePathNotEmpty	= 5
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("2C17418D-6EF7-4FD1-AAD0-54EF39261356") swCreateAngRunDimError_e
    {
        swCreateAngRunDimError_Undefined	= -1,
        swCreateAngRunDimError_GenFailure	= 0,
        swCreateAngRunDimError_Success	= 1,
        swCreateAngRunDimError_IdenticalDimension	= 2,
        swCreateAngRunDimError_SelectAnotherEntity	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("4F5252E5-7544-464D-873B-59D17FB298E9") swHorizontalAutoSplitApply_e
    {
        swHorizontalAutoSplitApply_ThisTimeOnly	= 0,
        swHorizontalAutoSplitApply_Continuousely	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("239E0411-D357-467D-9413-F7DB96B70181") swHorizontalAutoSplitPlacementOfSplitTable_e
    {
        swHorizontalAutoSplitPlacementOfSplitTable_NextToLastSplit	= 0,
        swHorizontalAutoSplitPlacementOfSplitTable_BelowLastSplit	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("2F9231E7-7614-44D7-899A-67FA8A90BF4D") swCutListTransferOptions_e
    {
        swCutListTransferOptions_None	= 0,
        swCutListTransferOptions_FileProperties	= 1,
        swCutListTransferOptions_CutListProperties	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("ADCC79EC-45D1-4C98-A513-E9AD275F07BA") swSheetMetalGussetProfileDimType_e
    {
        swSheetMetalGussetProfileDimType_IndentDepth	= 0,
        swSheetMetalGussetProfileDimType_ProfileDimensions	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("80F7CBA5-28A8-46D5-9B3B-DF41529F12D8") swSheetMetalGussetProfileType_e
    {
        swSheetMetalGussetProfileType_Rib	= 0,
        swSheetMetalGussetProfileType_Custom	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("58D665C3-8D21-4208-A13B-1745FA43D9C6") swSheetMetalRibGussetType_e
    {
        swSheetMetalRibGussetType_Rounded	= 0,
        swSheetMetalRibGussetType_Flat	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("F921E5B0-8FF6-46BE-A51C-7F0E6FBA4DB5") swExportToDWG_e
    {
        swExportToDWG_ExportSheetMetal	= 1,
        swExportToDWG_ExportSelectedFacesOrLoops	= 2,
        swExportToDWG_ExportAnnotationViews	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("930C2181-A2CC-4142-9F38-B90CD92E69DD") swButtonSize_e
    {
        swButtonSize_Small	= 0,
        swButtonSize_Medium	= 1,
        swButtonSize_Large	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("1FD7BBDF-0D05-4531-9C93-FD5FE937FA99") swTextSize_e
    {
        swTextSize_Small	= 0,
        swTextSize_Medium	= 1,
        swTextSize_Large	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("9BAAB235-5141-435A-90F2-B18D678B1E0F") swMirrorComponentOrientation_e
    {
        swMirrorComponentOrientation_RotatePlaneY	= 0,
        swMirrorComponentOrientation_None	= 1,
        swMirrorComponentOrientation_RotatePlaneXY	= 2,
        swMirrorComponentOrientation_RotatePlaneX	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("102C8AEF-C18C-4AE5-8EAE-4CBF6DD30AC6") swMoveLocation_e
    {
        swMoveAfter	= 3,
        swMoveBefore	= 2,
        swMoveToEnd	= 1,
        swMoveToTop	= 4,
        swMoveToFolder	= 5
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("B034090F-8377-4E61-8296-B03A7EA11137") swLocalCurvePatternAlignment_e
    {
        swLocalCurvePatternTangentToCurve	= 0,
        swLocalCurvePatternAlignToSeed	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("DC661C11-31B5-4CB8-9380-1E502B0D6000") swLocalCurvePatternCurveMethod_e
    {
        swLocalCurvePatternTransformCurve	= 0,
        swLocalCurvePatternOffsetCurve	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("675532CC-63DD-4344-9527-BAA1A30DBCD5") swLocalCurvePatternReferencePoint_e
    {
        swLocalCurvePatternSelectedPoint	= 0,
        swLocalCurvePatternBoundingBoxCenter	= 1,
        swLocalCurvePatternComponentOrigin	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("7FB09CC1-BEFF-46AB-BA63-132778AC9390") swLocalSketchPatternReferencePoint_e
    {
        swLocalSketchPatternSelectedPoint	= 0,
        swLocalSketchPatternBoundingBoxCenter	= 1,
        swLocalSketchPatternComponentOrigin	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("ABC1B45A-ECD8-4746-9DB3-3DBD062C922D") swVariablePitchHelixRegionParameter_e
    {
        swVariablePitchHelixRegionParameter_Revolution	= 0,
        swVariablePitchHelixRegionParameter_Pitch	= 1,
        swVariablePitchHelixRegionParameter_Height	= 2,
        swVariablePitchHelixRegionParameter_Diameter	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("CD8ACDEF-6936-4963-986E-AFA58D402B29") swMateWidthOptions_e
    {
        swMateWidth_Centered	= 0,
        swMateWidth_Free	= 1,
        swMateWidth_Dimension	= 2,
        swMateWidth_Percent	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("3CB6300D-0470-432F-816C-A7F9287DFC37") swSetHelixRegionParameterStatus_e
    {
        swSetHelixRegionParam_Succeeded	= 0,
        swSetHelixRegionParam_Failed	= 1,
        swSetHelixRegionParam_InvalidInput	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("F101DB9F-358D-4F50-AC4E-44C50ABD063E") swCosmeticStandardType_e
    {
        swStandardType_StandardAnsiInch	= 0,
        swStandardType_StandardAnsiMetric	= 1,
        swStandardType_StandardBSI	= 2,
        swStandardType_StandardDME	= 3,
        swStandardType_StandardDIN	= 4,
        swStandardType_StandardHascoMetric	= 5,
        swStandardType_StandardHelicoilInch	= 6,
        swStandardType_StandardHelicoilMetric	= 7,
        swStandardType_StandardISO	= 8,
        swStandardType_StandardJIS	= 9,
        swStandardType_StandardPCS	= 10,
        swStandardType_StandardProgressive	= 11,
        swStandardType_StandardSuperior	= 12,
        swStandardType_StandardGB	= 13,
        swStandardType_StandardKS	= 14,
        swStandardType_StandardIS	= 15,
        swStandardType_StandardAS	= 16,
        swStandardType_StandardNone	= -2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("E27BAD3B-4545-4F94-853A-3706F583387A") swCosmeticEndConditions_e
    {
        swEndConditionBlind	= 0,
        swEndConditionBlindUptoNext	= 1,
        swEndConditionThrough	= 2,
        swEndConditionBlind2Dia	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("1533D35A-487A-4F88-84B2-7B988E9410F5") swCosmeticConfigOptions_e
    {
        swConfigOptions_ThisConfiguration	= 1,
        swConfigOptions_AllConfiguration	= 2,
        swConfigOptions_SpecifyConfiguration	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("C6F049BE-BF4D-4B27-A26F-9B103867FCE9") swUnitsDecimalRounding_e
    {
        swUnitsDecimalRounding_HalfAway	= 0,
        swUnitsDecimalRounding_HalfTowards	= 1,
        swUnitsDecimalRounding_HalfToEven	= 2,
        swUnitsDecimalRounding_Truncate	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("76708A28-1C32-4A10-91A3-5928E0EA3621") swSketchSegmentType_e
    {
        swSketchSegmentType_sketchpoints	= 1,
        swSketchSegmentType_sketchsegments	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("ABEC55BF-1FEF-448F-A020-93CBB49960C9") swFeatureDimensionParameter_e
    {
        swPatternSpacing1	= 1,
        swPatternInstanceCount1	= 2,
        swPatternSpacing2	= 3,
        swPatternInstanceCount2	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("94B101E3-0FD1-409A-A6AC-55101069D5D3") swCutListType_e
    {
        swSolidBodyCutList	= 1,
        swSheetmetalCutlist	= 2,
        swWeldmentCutlist	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("F01B433A-6EA0-4982-9EE8-BB93CCFBCB76") swPatternElementSelection_e
    {
        swErrorInPatternElementSelection	= 0,
        swFeatureFaces	= 1,
        swBodiesToPattern	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("DBEE519A-90B9-4599-8E76-BEAB609C2A1F") swChildComponentInBOMOption_e
    {
        swChildComponent_Hide	= 1,
        swChildComponent_Show	= 2,
        swChildComponent_Promote	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("C4862C39-1B9E-4468-833C-124BFF5A7C96") swSunlightInfoType_e
    {
        swSunlight_Sunrise	= 1,
        swSunlight_Sunset	= 2,
        swSunlight_LengthOfDay	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("9D8C21F7-2C0A-4F9B-9DD6-E81FC4BEEA38") swEndCapThicknessDirection_e
    {
        swExtendOutward	= 1,
        swExtendInward	= 2,
        swSpecifyInset	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("D0F19B55-7BFB-4856-A2C3-ED159E1864DE") swDrawingSheetsZonesOrigin_e
    {
        swDrawingSheetsZones_UpperLeft	= 0,
        swDrawingSheetsZones_UpperRight	= 1,
        swDrawingSheetsZones_LowerLeft	= 2,
        swDrawingSheetsZones_LowerRight	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("A9E69055-DE84-4EF3-B366-30E518EFCDB5") swDrawingSheetsZonesLetterLayout_e
    {
        swDrawingSheetsZonesLetterLayout_Column	= 0,
        swDrawingSheetsZonesLetterLayout_Row	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("D0EF374B-E90E-47EE-B3B5-5484D3F2F790") swDetailingBalloonAutoBalloons_e
    {
        swStraightAutoBalloonLeader	= 0,
        swBentAutoBalloonLeader	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("C080E902-883C-4847-B9DA-24F9AD27F9A4") swSmartDimensionDirection_e
    {
        swSmartDimensionDirection_Right	= 0,
        swSmartDimensionDirection_Up	= 1,
        swSmartDimensionDirection_Left	= 2,
        swSmartDimensionDirection_Down	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("6945EEA2-7185-4745-A0BC-EAB82DC0C9D5") swSetComponentsAndTransformsStatus_e
    {
        swSetComponentsAndTransforms_Failed	= 0,
        swSetComponentsAndTransforms_Succeeded	= 1,
        swSetComponentsAndTransforms_InvalidInput	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("C9E8C6B5-7271-4458-8824-B0D9CD636E1B") swSceneBackgroundType_e
    {
        swBackgroundType_None	= 0,
        swBackgroundType_Plain	= 1,
        swBackgroundType_Graduated	= 2,
        swBackgroundType_Image	= 3,
        swBackgroundType_UseEnvironment	= 4,
        swBackgroundType_Color	= 5
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("5603FE78-9065-4D63-BCDB-64D36FFFB597") swBomTableSortMethod_e
    {
        swBomTableSortMethod_Literal	= 0,
        swBomTableSortMethod_Numeric	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("CF43ED98-7EAF-4C19-83CA-524033D3ED0C") swSceneFloorAlign_e
    {
        swSceneFloorAlign_VIEW	= 0,
        swSceneFloorAlign_XY	= 1,
        swSceneFloorAlign_YZ	= 2,
        swSceneFloorAlign_ZX	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("FE1D22D7-1EB6-4585-AFB8-040E51287888") swLocationLabelText_e
    {
        swLocationLabelTextSheet	= 0,
        swLocationLabelTextSheetWithLabel	= 1,
        swLocationLabelTextZone	= 2,
        swLocationLabelTextViewLetter	= 3,
        swLocationLabelTextText	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("8CDE345D-0DC4-4F7A-9432-7DB8AFAFCEA4") swCosmeticWeldBeadMode_e
    {
        swCosmeticWeldBeadMode_WeldGeometry	= 0,
        swCosmeticWeldBeadMode_WeldPath	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("75B02A79-6818-4D86-A885-91F422C33440") swBoundaryBossDirection_e
    {
        swBoundaryBossDirection_First	= 0,
        swBoundaryBossDirection_Second	= 1,
        swBoundaryBossDirection_Both	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("6226AE1F-F5AD-4E2C-8A9B-112C298F4F13") swBoundaryBossCurveInfluenceType_e
    {
        swBoundaryBossCurve_ToNextCurveInfluence	= 0,
        swBoundaryBossCurve_ToNextSharpInfluence	= 0x10,
        swBoundaryBossCurve_GlobalInfluence	= 0x20,
        swBoundaryBossCurve_ToEdgeInfluence	= 0x40,
        swBoundaryBossCurve_LinearInfluence	= 0x90
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("45D79F75-299F-4A2D-B0F3-0BF6C28EA2C9") swIndentSelectionState_e
    {
        swIndentSelectionStateKeepSelection	= 0,
        swIndentSelectionStateRemoveSelection	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("B45AA070-F30B-4A6F-94F2-EE7AB0019025") swCalloutVariableType_e
    {
        swCalloutVariableType_Length	= 1,
        swCalloutVariableType_Angle	= 2,
        swCalloutVariableType_String	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("BD509E19-47B3-4B16-894B-51EA4EA43206") swCalloutVariable_e
    {
        swCalloutVariable_Standard	= 4,
        swCalloutVariable_Fastener_Type	= 5,
        swCalloutVariable_Fastener_Size	= 6,
        swCalloutVariable_Counterbore_Depth	= 7,
        swCalloutVariable_Counterbore_Diameter	= 8,
        swCalloutVariable_Counterdrill_Angle	= 9,
        swCalloutVariable_Counterdrill_Depth	= 10,
        swCalloutVariable_Counterdrill_Diameter	= 11,
        swCalloutVariable_Countersink_Angle	= 12,
        swCalloutVariable_Countersink_Diameter	= 13,
        swCalloutVariable_Depth	= 14,
        swCalloutVariable_Diameter	= 15,
        swCalloutVariable_Drill_Angle	= 16,
        swCalloutVariable_Far_Side_Countersink_Angle	= 17,
        swCalloutVariable_Far_Side_Countersink_Diameter	= 18,
        swCalloutVariable_Head_Clearance	= 19,
        swCalloutVariable_Hole_Diameter	= 20,
        swCalloutVariable_Hole_Depth	= 21,
        swCalloutVariable_Major_Diameter	= 22,
        swCalloutVariable_Middle_Countersink_Angle	= 23,
        swCalloutVariable_Middle_Countersink_Diameter	= 24,
        swCalloutVariable_Minor_Diameter	= 25,
        swCalloutVariable_Near_Side_Countersink_Angle	= 26,
        swCalloutVariable_Near_Side_Countersink_Diameter	= 27,
        swCalloutVariable_Tap_Drill_Depth	= 28,
        swCalloutVariable_Tap_Drill_Diameter	= 29,
        swCalloutVariable_Thread_Angle	= 30,
        swCalloutVariable_Thread_Diameter	= 31,
        swCalloutVariable_Thread_Depth	= 32,
        swCalloutVariable_Thru_Hole_Depth	= 33,
        swCalloutVariable_Thru_Hole_Diameter	= 34,
        swCalloutVariable_Thru_Tap_Depth	= 35,
        swCalloutVariable_Thru_Tap_Drill_Diameter	= 36,
        swCalloutVariable_Description	= 37,
        swCalloutVariable_Msg_Near_Side	= 38,
        swCalloutVariable_Msg_Mid_Side	= 39,
        swCalloutVariable_Msg_Far_Side	= 40,
        swCalloutVariable_Thread_Description	= 41,
        swCalloutVariable_Thread_Size	= 42,
        swCalloutVariable_Thread_Series	= 43,
        swCalloutVariable_Thru	= 44,
        swCalloutVariable_NUM_INST	= 45,
        swCalloutVariable_Thread_Class	= 46,
        swCalloutVariable_Counterbore	= 47,
        swCalloutVariable_Thread_Diameter_Only	= 48,
        swCalloutVariable_Slot_Length	= 49,
        swCalloutVariable_Slot_Width	= 50,
        swCalloutVariable_AH_Counterbore_Diameter	= 51,
        swCalloutVariable_AH_Counterbore_Depth	= 52,
        swCalloutVariable_AH_Counterbore_Nearside_Msg	= 53,
        swCalloutVariable_AH_Counterbore_Farside_Msg	= 54,
        swCalloutVariable_AH_Counterbore_Side	= 55,
        swCalloutVariable_AH_Countersink_Diameter	= 56,
        swCalloutVariable_AH_Countersink_Angle	= 57,
        swCalloutVariable_AH_Countersink_Depth	= 58,
        swCalloutVariable_AH_Countersink_Nearside_Msg	= 59,
        swCalloutVariable_AH_Countersink_Farside_Msg	= 60,
        swCalloutVariable_AH_Countersink_Side	= 61,
        swCalloutVariable_AH_StraightThread_Tap_Drill_Diameter	= 62,
        swCalloutVariable_AH_StraightThread_Major_Diameter	= 63,
        swCalloutVariable_AH_StraightThread_Size	= 64,
        swCalloutVariable_AH_StraightThread_Depth	= 65,
        swCalloutVariable_AH_StraightThread_Nearside_Msg	= 66,
        swCalloutVariable_AH_StraightThread_Farside_Msg	= 67,
        swCalloutVariable_AH_StraightThread_Side	= 68,
        swCalloutVariable_AH_TaperedThread_Tap_Drill_Diameter	= 69,
        swCalloutVariable_AH_TaperedThread_Major_Diameter	= 70,
        swCalloutVariable_AH_TaperedThread_Depth	= 71,
        swCalloutVariable_AH_TaperedThread_Size	= 72,
        swCalloutVariable_AH_TaperedThread_Nearside_Msg	= 73,
        swCalloutVariable_AH_TaperedThread_Farside_Msg	= 74,
        swCalloutVariable_AH_TaperedThread_Side	= 75,
        swCalloutVariable_AH_Straight_Diameter	= 76,
        swCalloutVariable_AH_Straight_Depth	= 77,
        swCalloutVariable_AH_Dowel_HoleFit	= 78,
        swCalloutVariable_AH_Dowel_ShaftFit	= 79,
        swCalloutVariable_AH_Straight_Nearside_Msg	= 80,
        swCalloutVariable_AH_Straight_Farside_Msg	= 81,
        swCalloutVariable_AH_Straight_Side	= 82,
        swCalloutVariable_AH_DrillPoint_Angle	= 83,
        swCalloutVariable_AH_DrillPoint_Msg	= 84,
        swCalloutVariable_AH_FlatBottom_Msg	= 85,
        swCalloutVariable_AH_Blind_Msg	= 86,
        swCalloutVariable_AH_UptoNext_Msg	= 87,
        swCalloutVariable_AH_UptoNextElement_Msg	= 88,
        swCalloutVariable_AH_UptoSelection_Msg	= 89,
        swCalloutVariable_AH_OffsetFromSurface_Msg	= 90,
        swCalloutVariable_AH_ThroughAll_Msg	= 91,
        swCalloutVariable_AH_Thread_Description	= 92,
        swCalloutVariable_AH_ThreadAdvance	= 93
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("B78C911B-43F7-4D05-B60F-000FC58156F1") swDimensionToleranceWarning_e
    {
        swDimensionTolerance_ValidForType	= 0,
        swDimensionTolerance_NotValidForType	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("444F1CEB-53E3-442F-AAD5-C80D39439750") swBoundaryBossAlignment_e
    {
        swAlignWithSectionNormal	= 0,
        swAlignWithNextSection	= 1,
        swAlignWithOtherGeometry	= 2,
        swAlignWithIsoParameter	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("7C3FD7A7-68AF-49A9-8AB2-5A5873A00ADD") swReloadTemplateResult_e
    {
        swReloadTemplate_Success	= 0,
        swReloadTemplate_UnknownError	= 1,
        swReloadTemplate_FileNotFound	= 2,
        swReloadTemplate_CustomSheet	= 3,
        swReloadTemplate_ViewOnly	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("A4D3855A-AA96-41B1-B79C-1F4324604E93") swChainPatternPitchMethod_e
    {
        swChainPatternDistance	= 0,
        swChainPatternDistanceLinkage	= 1,
        swChainPatternConnectedLinkage	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("54E46C70-0386-497A-9148-5667868F8373") swChainPatternAlignment_e
    {
        swChainPatternAlignToSeed	= 0,
        swChainPatternTangentToCurve	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("89BA39A1-A16F-4921-994F-ED3DE571906C") swChainPatternOptions_e
    {
        swChainPatternStatic	= 0,
        swChainPatternDynamic	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("96D12160-5B49-497F-B478-F97C59FADC5E") swParagraphType_e
    {
        swParagraphNone	= -1,
        swParagraphBullet	= 0,
        swParagraphNumbered	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("979A0F14-A6B8-4AB0-86A1-A4A24A60BDBD") swNumberedListStartType_e
    {
        swStartNumberingInvalid	= -1,
        swStartNumberingFromTop	= 0,
        swStartNumberingFromBottom	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("3A6C8B22-30DE-4510-9919-498955AE14AC") swNumberingFormat_e
    {
        swNumberingFormatInvalid	= -1,
        swNumberingFormat1	= 0,
        swNumberingFormat2	= 1,
        swNumberingFormat3	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("9D0B33EC-BB51-47F3-9E0E-770736D00708") swNumberedListType_e
    {
        swNumberedListTypeInvalid	= 0,
        swNumberedListType1	= 1,
        swNumberedListType2	= 2,
        swNumberedListType3	= 3,
        swNumberedListType4	= 4,
        swNumberedListType5	= 5
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("A9F49AFE-CDFA-4D5B-A5E8-8A1BA84BF082") swSkOffsetCapEndType_e
    {
        swSkOffsetNoCaps	= 0,
        swSkOffsetArcCaps	= 1,
        swSkOffsetLineCaps	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("181EE430-7224-44F4-BD9E-B302BC4117FD") swSkOffsetMakeConstructionType_e
    {
        swSkOffsetDontMakeConstruction	= 0,
        swSkOffsetMakeOrigConstruction	= 1,
        swSkOffsetMakeOffsConstruction	= 2,
        swSkOffsetMakeBothConstruction	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("50647C18-2ADF-4CFD-898A-C933A4C08E4C") swRayTraceRenderingType_e
    {
        swRayTraceCartoon	= 0,
        swRayTraceContour	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("9FBF6E3B-DBEF-49FF-8F3A-22186758E725") swPublishTo3DPDFError_e
    {
        swPublishTo3DPDF_Success	= 0,
        swPublishTo3DPDF_InvalidPath	= 1,
        swPublishTo3DPDF_InvalidTheme	= 2,
        swPublishTo3DPDF_UnknownError	= 3,
        swPublishTo3DPDF_MBDLicenseNotAvailable	= 4,
        swPublishTo3DPDF_NothingToPublish	= 5
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("C0427DA0-B76C-4D86-A3BE-DAB4E169EEC7") swDetailingLinearForeshortened_e
    {
        swDetailingLinearForeshortened_DoubleArrow	= 0,
        swDetailingLinearForeshortened_Zigzag	= 1,
        swDetailingLinearForeshortened_Line	= 2,
        swDetailingLinearForeshortened_SingleArrow	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("BDB881C1-E0DE-4749-B22F-BCD95F179F62") swIFCExportSaveType_e
    {
        swIFCExportSaveType_BREP	= 0,
        swIFCExportSaveType_BREPAndTessellation	= 1,
        swIFCExportSaveType_Tessellation	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("12189547-75DC-455D-8BF6-E7273F6F7028") swCollinearChainDimArrowHeadStyle_e
    {
        swCollinearChainDimArrowHeadStyle_Point	= 0,
        swCollinearChainDimArrowHeadStyle_Oblique	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("3D3BBCD3-4864-4ADD-ACD2-6BE8D9C91BEC") swRenameDocumentError_e
    {
        swRenameDocumentError_None	= 0,
        swRenameDocumentError_UnspecifiedInternalError	= 1,
        swRenameDocumentError_InvalidSelection	= 2,
        swRenameDocumentError_InvalidForDrawings	= 3,
        swRenameDocumentError_NoModelLoaded	= 4,
        swRenameDocumentError_ComponentNotResolved	= 5,
        swRenameDocumentError_LightWeightComponent	= 6,
        swRenameDocumentError_RoutingComponent	= 7,
        swRenameDocumentError_FileAlreadyExists	= 8,
        swRenameDocumentError_InvalidCharactersInName	= 9,
        swRenameDocumentError_InvalidVirtualComponent	= 10,
        swRenameDocumentError_NameTooLong	= 11,
        swRenameDocumentError_DocumentNameInUse	= 12,
        swRenameDocumentError_PendingNameAlreadyInUse	= 13,
        swRenameDocumentError_ReadOnlyDocument	= 14,
        swRenameDocumentError_DocumentNotSaved	= 15,
        swRenameDocumentError_VirtualComponent	= 16,
        swRenameDocumentError_NotAllowedWithPDM	= 17,
        swRenameDocumentError_ToolboxComponent	= 18,
        swRenameDocumentError_PatternedComponent	= 19
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("013A3AED-C031-4730-A41D-F7595C0255C8") swStyleSplineCurveType_e
    {
        BezierCurve	= 0,
        BSpline_Degree3	= 1,
        BSpline_Degree5	= 2,
        BSpline_Degree7	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("2A0E4E26-025B-438C-A3C9-267FD9FE1F7D") swRenamedDocumentFinalAction_e
    {
        swRenamedDocumentFinalAction_Default	= 0,
        swRenamedDocumentFinalAction_Ok	= 1,
        swRenamedDocumentFinalAction_Cancel	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("08A58982-A421-4F96-B113-3B94E66203B4") swBoundaryBossTangencyType_e
    {
        swBoundaryBossTangency_None	= 0,
        swBoundaryBossTangency_NormalToProfile	= 1,
        swBoundaryBossTangency_DirectionVector	= 2,
        swBoundaryBossTangency_TangencyToFace	= 3,
        swBoundaryBossTangency_CurvatureToFace	= 4,
        swBoundaryBossTangency_Default	= 6
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("88D2DD3E-83B8-489E-8D6F-BC827AA91D41") swIFCOmniUniClassPreference_e
    {
        swIFCSaveAsOmniClass	= 0,
        swIFCSaveAsUniClass2	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("2C24A0DD-8E03-4014-942E-54C89DC070A9") swInterfaceBrightnessTheme_e
    {
        swInterfaceBrightnessTheme_Light	= 0,
        swInterfaceBrightnessTheme_Medium	= 1,
        swInterfaceBrightnessTheme_Dark	= 2,
        swInterfaceBrightnessTheme_MediumLight	= 3,
        swInterfaceBrightnessTheme_3DExperience	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("23BADD7B-A034-479E-BD42-34AC10F40A46") swSweepDirection_e
    {
        swSweepDirection1	= 0,
        swSweepBidirectional	= 1,
        swSweepDirection2	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("4606D6FA-A706-461A-9F0C-87F08875044C") swAssemblyDeleteOptions_e
    {
        swDelete_SubAssembly	= 1,
        swDelete_SelectedComponents	= 0
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("B01AED20-2B63-4F70-9A80-D3034A8A0D8F") swIsolateVisibility_e
    {
        swIsolateVisibility_WIREFRAME	= 0,
        swIsolateVisibility_TRANSPARENT	= 1,
        swIsolateVisibility_HIDDEN	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("A6F66AF2-2E08-406A-8588-90281257E9F4") swRoutingComponentGroupingOption_e
    {
        swShowOnlyRoutingComponentsInBOM	= 0x1,
        swGroupPipesOrTubesWithTheSameDiameterAndSchedule	= 0x2,
        swDisplayUnitsInBOM	= 0x4,
        swRoutingGroupSpoolComponents	= 0x8
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("5DFC6CFA-0201-4459-885C-908C20ABBD71") swInterfaceBrightnessColor_e
    {
        swIBColor_FeatureMgrBkgnd	= 0,
        swIBColor_EnabledTextColor	= 1,
        swIBColor_DisabledTextColor	= 2,
        swIBColor_ActiveTabColor	= 3,
        swIBColor_InactiveTabColor	= 4,
        swIBColor_ButtonFillHotColor	= 5,
        swIBColor_ButtonFillCheckedColor	= 6,
        swIBColor_ButtonFillPressedColor	= 7,
        swIBColor_ButtonFillCheckedAndHotColor	= 8
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("4FFCEF1C-5603-4153-B6B0-C54BD1E4BA62") swPatternFeatureImportExportError_e
    {
        swPatternFeatureImportExportError_Succeed	= 0,
        swPatternFeatureImportExportError_Failed	= 1,
        swPatternFeatureImportExportError_UnequalNumOfCellsInColumn	= 2,
        swPatternFeatureImportExportError_UnequalNumOfCellsInRow	= 3,
        swPatternFeatureImportExportError_EmptyRowsOrColumns	= 4,
        swPatternFeatureImportExportError_ColumnARows1And2Error	= 5,
        swPatternFeatureImportExportError_InstNumStartsFromNonZero	= 6,
        swPatternFeatureImportExportError_ColumnBRows1And2Error	= 7,
        swPatternFeatureImportExportError_ImproperValuesForColumnB	= 8,
        swPatternFeatureImportExportError_FeatureDoesNotExist	= 9,
        swPatternFeatureImportExportError_DuplicateDimensions	= 10,
        swPatternFeatureImportExportError_OutOfRangeDimensionValue	= 11,
        swPatternFeatureImportExportError_DimensionNameDoesNotExist	= 12,
        swPatternFeatureImportExportError_FeatureOrDimDoesNotExist	= 13,
        swPatternFeatureImportExportError_NoValidDimensionToImport	= 14,
        swPatternFeatureImportExportError_DimValueFormatIncorrect	= 15,
        swPatternFeatureImportExportError_FailedToRetrieveModelDocument	= 16,
        swPatternFeatureImportExportError_FileExistsAndOverwriteIsFalse	= 17,
        swPatternFeatureImportExportError_ReadOnlyFile	= 18,
        swPatternFeatureImportExportError_AccessDeniedOrInvalidPath	= 19,
        swPatternFeatureImportExportError_FailedToRetrieveExcelApp	= 20
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("A2E23A35-31A7-4B57-8CA5-F35E7BF976D1") swPropertyManagerCheckboxState_e
    {
        Unchecked	= 0,
        Checked	= 1,
        Indeterminate	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("F2972069-D7D2-43F8-A84F-ADB91FFC9732") swReplaceComponentsConfiguration_e
    {
        swReplaceComponentsConfiguration_MatchName	= 0,
        swReplaceComponentsConfiguration_ManuallySelect	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("DD1388F0-1412-4C8F-83DD-BD5273D49E61") swAssemblyLevelToUpdate_e
    {
        swAssemblyLevelToUpdate_TopLevelAssemblyOnly	= 0,
        swAssemblyLevelToUpdate_SubLevelAssemblyOnly	= 1,
        swAssemblyLevelToUpdate_AllLevels	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("13FD58C6-6731-41AA-AE41-3200EB2665EF") swFileFormatType_e
    {
        swFileFormatType_STEP	= 0
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("BC24C46D-1DEE-4CBF-97AC-E43C437CACC6") swAssemblyUpdateToolboxComponentStatus_e
    {
        swAssemblyUpdateToolboxComponentStatus_Success	= 0,
        swAssemblyUpdateToolboxComponentStatus_Failed	= 1,
        swAssemblyUpdateToolboxComponentStatus_ToolboxNotRegistered	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("3E084C26-25DF-43DB-8688-21E5E1613DA7") sw3DPDFAccuracy_e
    {
        swMaximum	= 0,
        swHigh	= 1,
        swMedium	= 2,
        swLow	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("FFEB709A-35DB-456B-AEE0-392FB2701628") swStep242Error_e
    {
        swPublishStep242_Success	= 0,
        swPublishStep242_InvalidPath	= 1,
        swPublishStep242_UnknownError	= 3,
        swPublishStep242_MBDLicenseNotAvailable	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("8FED4A90-DAB4-4717-A92C-45E5E43188FD") swSystemColorsIconColor_e
    {
        swSystemColorsIconColorDefault	= 0,
        swSystemColorsIconColorClassic	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("29417A97-BD8D-4C39-A70E-8D8D78CE9C6B") swMirrorViewPositions_e
    {
        swMirrorViewPosition_NotDefined	= -1,
        swMirrorViewPosition_Horizontal	= 0,
        swMirrorViewPosition_Vertical	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("D79DD45D-3C79-479C-9A39-0030BDEB081E") swImageSizeToUse_e
    {
        swImageSizeToUse_20x20	= 20,
        swImageSizeToUse_32x32	= 32,
        swImageSizeToUse_40x40	= 40,
        swImageSizeToUse_64x64	= 64,
        swImageSizeToUse_96x96	= 96,
        swImageSizeToUse_128x128	= 128
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("9F6435D6-FC80-474A-AB87-74B032D6D9CA") sw3DPMISaveOptions_e
    {
        swAddReportToDesignBinder	= 0x1,
        swViewReportOnSave	= 0x2,
        swDimXpertData	= 0x4,
        swReferenceData	= 0x8
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("94B7AAD0-7322-48DA-89BA-FCACB30F2C92") swSheetMetalOverrideDefaultParameters_e
    {
        swSheetMetalOverrideDefaultParameters_BendParameters	= 0,
        swSheetMetalOverrideDefaultParameters_BendAllowance	= 1,
        swSheetMetalOverrideDefaultParameters_AutoRelief	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("2F9E37D6-55AA-4FC0-B7DD-9AD3AD327AA9") swConfigTreeSortType_e
    {
        swSortType_History	= 0,
        swSortType_Numeric	= 1,
        swSortType_Literal	= 2,
        swSortType_DesignTable	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("618255E0-7CCD-4F66-BF98-134F257D26DB") swBasicDimType_e
    {
        swBasicDimType_Chain	= 0,
        swBasicDimType_Baseline	= 1,
        swBasicDimType_Polar	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("49BEFA78-8DF9-4843-A1F2-BE7395CE946E") swConcentricPositionType
    {
        swConcentricPositionType_Default	= -1,
        swConcentricPositionType_Aligned	= 0,
        swConcentricPositionType_Symmetric	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("DB97F06F-4FD9-4EAF-BA0B-D1633913504B") swZonalSectionViewZones_e
    {
        swZonalSectionViewZones_swZonalSectionViewZone_1	= 0x1,
        swZonalSectionViewZones_swZonalSectionViewZone_2	= 0x2,
        swZonalSectionViewZones_swZonalSectionViewZone_3	= 0x4,
        swZonalSectionViewZones_swZonalSectionViewZone_4	= 0x8,
        swZonalSectionViewZones_swZonalSectionViewZone_5	= 0x10,
        swZonalSectionViewZones_swZonalSectionViewZone_6	= 0x20,
        swZonalSectionViewZones_swZonalSectionViewZone_7	= 0x40,
        swZonalSectionViewZones_swZonalSectionViewZone_8	= 0x80
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("88F0C900-FCDB-4953-9A52-C49FBC1980EF") swToolbarLayoutOption_e
    {
        swToolbarLayoutOption_None	= 0,
        swToolbarLayoutOption_AllToolbars	= 1,
        swToolbarLayoutOption_MacroToolbarOnly	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("676C1901-20E6-4E1C-A627-0996F0E97D29") swSaveRestoreSettingsResults_e
    {
        swSaveRestoreSettingsSuccess	= 0,
        swSaveRestoreSettingsFailure_Generic	= 1,
        swSaveRestoreSettingsFailure_InvalidFilename	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("5706D2BD-454D-4BED-91AA-2907FD301B84") swBOMTableObjectType_e
    {
        swBOMTableObjectType_RowIndex	= 1,
        swBOMTableObjectType_CutList	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("856C57B9-C53B-4BF4-8C88-46404D2495AF") swLayerItemsOption_e
    {
        swLayerItemsOption_Annotations	= 0x1,
        swLayerItemsOption_SketchSegments	= 0x2,
        swLayerItemsOption_SketchBlockInstance	= 0x4,
        swLayerItemsOption_SketchPoint	= 0x8,
        swLayerItemsOption_SketchHatch	= 0x10
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("57BD329E-2229-4744-A6D2-01DC8EC19390") swApiHoleWizardItemExportStatus_e
    {
        swApiHoleWizardItemExportStatus_Success	= 0,
        swApiHoleWizardItemExportStatus_InvalidArgument	= 1,
        swApiHoleWizardItemExportStatus_MicrosoftExcelNotInstalled	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("F32E6C76-E30A-458E-93F0-06CD705791D6") swApiHoleWizardItemImportStatus_e
    {
        swApiHoleWizardItemImportStatus_Success	= 0,
        swApiHoleWizardItemImportStatus_InvalidArgument	= 1,
        swApiHoleWizardItemImportStatus_MicrosoftExcelNotInstalled	= 2,
        swApiHoleWizardItemImportStatus_FailedToSaveFile	= 3,
        swApiHoleWizardItemImportStatus_ExcelCouldNotOpenFile	= 4,
        swApiHoleWizardItemImportStatus_ExcelSheetNameError	= 5,
        swApiHoleWizardItemImportStatus_FailedToSaveReportFile	= 6,
        swApiHoleWizardItemImportStatus_DataError	= 7,
        swApiHoleWizardItemImportStatus_UnspecifiedError	= 8
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("2BC9F9F1-F001-47C8-8BDA-B116224F4B36") swApiToolboxItemExportStatus_e
    {
        swApiToolboxItemExportStatus_Success	= 0,
        swApiToolboxItemExportStatus_InvalidArgument	= 1,
        swApiToolboxItemExportStatus_MicrosoftExcelNotInstalled	= 2,
        swApiToolboxItemExportStatus_FailedToSaveFile	= 3,
        swApiToolboxItemExportStatus_InvalidPartNumber	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("1FA231E8-A1EA-42F9-9E5C-A42A9ED2A267") swApiToolboxItemImportStatus_e
    {
        swApiToolboxItemImportStatus_Success	= 0,
        swApiToolboxItemImportStatus_InvalidArgument	= 1,
        swApiToolboxItemImportStatus_MicrosoftExcelNotInstalled	= 2,
        swApiToolboxItemImportStatus_FailedToSaveFile	= 3,
        swApiToolboxItemImportStatus_ExcelImportDidNotFindColumn	= 4,
        swApiToolboxItemImportStatus_ExcelImportWrongFile	= 5,
        swApiToolboxItemImportStatus_ExcelCouldNotOpenFile	= 6,
        swApiToolboxItemImportStatus_InvalidPartNumber	= 7,
        swApiToolboxItemImportStatus_FailedUnspecifiedError	= 8
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("015300B9-5716-4574-8209-E5B736E003CA") swDistanceMateArcConditions_e
    {
        swArcCondition_NotSet	= 0,
        swArcCondition_Center	= 1,
        swArcCondition_Minimum	= 2,
        swArcCondition_Maximum	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("9C990270-0CAC-4730-8772-C578237D22C6") swAdvWzdGeneralHoleTypes_e
    {
        swAdvWzdCounterBore	= 0,
        swAdvWzdCounterSink	= 1,
        swAdvWzdStraight	= 2,
        swAdvWzdStraightTap	= 3,
        swAdvWzdTaperTap	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("BBE8703C-E2AA-4FFB-A546-9A130D0EA5F1") swAddSpecificDimension_e
    {
        swAddSpecificDimension_Success	= 0,
        swAddSpecificDimension_DimTypeMismatch	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("C467DE72-8E97-41A4-87D9-67DAE06105CC") swHoleElementOrientation_e
    {
        swHoleElementOrientation_Nearside	= 0,
        swHoleElementOrientation_Farside	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("79703F92-F8EF-459F-BF3C-8D60178B48D7") swTaperedTapCustomSizing_e
    {
        swTaperedTapCustomSizing_MinorDiameterWithCosmeticThread	= 1,
        swTaperedTapCustomSizing_MajorDiameter	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("EED47347-FCF6-4848-8805-D460197AA3AF") swTaperedTapThreadClass_e
    {
        swTaperedTapThreadClass_1	= 1,
        swTaperedTapThreadClass_2	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("A7697983-BD9E-4F31-B76D-983C1FCA7AD3") swStraightHoleFitType_e
    {
        swStraightHoleFitType_Close	= 0,
        swStraightHoleFitType_Normal	= 1,
        swStraightHoleFitType_Loose	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("962F0202-F752-4427-9D15-D1C06E2F0C16") swStraightHoleClassificationType_e
    {
        swStraightHoleClassificationType_Nominal	= 0,
        swStraightHoleClassificationType_Clearance	= 1,
        swStraightHoleClassificationType_Transitional	= 2,
        swStraightHoleClassificationType_Press	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("99C1109C-88D9-4AD1-BF9A-2B3A3D73A861") swStraightHoleFilter_e
    {
        swStraightHoleFilter_All	= 0,
        swStraightHoleFilter_Nuts	= 1,
        swStraightHoleFilter_Fasteners	= 2,
        swStraightHoleFilter_Standoffs	= 3,
        swStraightHoleFilter_Studs	= 4,
        swStraightHoleFilter_Pins	= 5
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("1D554E78-B054-4BB1-8709-68426BC26020") swEndShape_e
    {
        swEndShape_DrillPoint	= 0,
        swEndShape_FlatBottom	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("AF4BEB66-1625-44EF-B866-8AC787845FC4") swStraightTapHoleThreadClass_e
    {
        swStraightTapHoleThreadClass_1B	= 1,
        swStraightTapHoleThreadClass_2B	= 2,
        swStraightTapHoleThreadClass_3B	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("1C5DF705-E8C4-4879-903E-A6FEE23F0885") swStraightTapHoleCustomSizing_e
    {
        swStraightTapHoleCustomSizing_TapDrillDiameter	= 0,
        swStraightTapHoleCustomSizing_TapDrillDiameterWithCosmeticThread	= 1,
        swStraightTapHoleCustomSizing_MajorDiameter	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("9273E7B6-123F-44B4-B71A-08D8FCC756AC") swMatesDefaultMisalignment_e
    {
        swMatesAlignFirstConcentricMate	= 0,
        swMatesAlignSecondConcentricMate	= 1,
        swMatesSymmetric	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("B1B3AEBC-2098-4D14-9A8B-6D1081B8ACBA") swConcentricAlignmentType_e
    {
        swConcentricAlignConcentric	= 0,
        swConcentricAlignThisMate	= 1,
        swConcentricAlignLinkedMate	= 2,
        swConcentricAlignSymmetric	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("891E7CDA-B476-4623-87F4-BAAF4D77BFD2") swStraightTapHoleEquation_e
    {
        swStraightTapHoleEquation_Diameter	= 0,
        swStraightTapHoleEquation_DiameterAndHalf	= 1,
        swStraightTapHoleEquation_TwiceTheDiameter	= 2,
        swStraightTapHoleEquation_UserDefinedValue	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("3621AE2D-302B-4520-935E-D65E6E699F48") swAdvancedHoleResults_e
    {
        swAdvancedHoleResults_Success	= 0,
        swAdvancedHoleResults_FailedIncorrectHoleElementParameters	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("F9012FF1-B867-442C-8BB5-85A8B19285E8") swThreadEndCondition_e
    {
        swThreadEndCondition_Blind	= 0,
        swThreadEndCondition_Revolutions	= 1,
        swThreadEndCondition_UpToSelection	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("AB99C3A7-60FA-47A8-89DF-226CECBEDCCE") swThreadMethod_e
    {
        swThreadMethod_Cut	= 0,
        swThreadMethod_Extrude	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("EA844FBE-1D9A-4B52-A4EE-7FD5C2F8F0DA") swThreadMirrorType_e
    {
        swThreadMirrorType_Horizontally	= 0,
        swThreadMirrorType_Vertically	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("D88D2DA9-661E-43F7-BF3D-2B5F73739634") swAssemblyExplodeStepType
    {
        swAssemblyExplodeStepType_Translate	= 0,
        swAssemblyExplodeStepType_Radial	= 1,
        swAssemblyExplodeStepType_SubAssembly	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("CBE3B12A-F227-4D8D-9A47-92FE6385B6BD") swSolidBodiesDescriptionPropertyIndex
    {
        swSolidBodiesDescriptionProp_None	= 0,
        swSolidBodiesDescriptionProp_Length	= 1,
        swSolidBodiesDescriptionProp_Thickness	= 2,
        swSolidBodiesDescriptionProp_Width	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("6106A10E-B7B6-4FC7-BC59-323CA308F863") swExplodeDirectionIndex_e
    {
        swExplodeDirectionIndex_Unknown	= -1,
        swExplodeDirectionIndex_XAxis	= 0,
        swExplodeDirectionIndex_YAxis	= 1,
        swExplodeDirectionIndex_ZAxis	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("66A07AB5-6B62-4827-AEA7-0E8AABA37F21") swRotationAxisIndex_e
    {
        swRotationAxisIndex_Unknown	= -1,
        swRotationAxisIndex_XYRing	= 0,
        swRotationAxisIndex_YZRing	= 1,
        swRotationAxisIndex_ZXRing	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("644F3882-77B6-4FF8-ADC8-F5036A9B149C") swCreateExplodeStepError_e
    {
        swCreateExplodeStepError_Successful	= 0,
        swCreateExplodeStepError_Generic	= 1,
        swCreateExplodeStepError_NoExplodeView	= 2,
        swCreateExplodeStepError_NoComponents	= 3,
        swCreateExplodeStepError_InvalidRadialAxis	= 4,
        swCreateExplodeStepError_OpenExplodePMP	= 5,
        swCreateExplodeStepError_EditingComponentInContext	= 6
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("D0A7D6AB-D2AF-4F28-8EA6-901B16E09705") swReverseEndPointTangentResult_e
    {
        swReverseEndPointTangent_Success	= 0,
        swReverseEndPointTangent_InvalidSelection	= 1,
        swReverseEndPointTangent_ConstraintConflict	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("6EC46073-2A29-4C66-AC55-EC410F6A183D") swImportNeutralKnitOption_e
    {
        swImportNeutralKnitOption_FormSolids	= 0,
        swImportNeutralKnitOption_DoNotKnit	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("EB25C391-3C2F-4457-B9B0-8CDD85AE5CC7") swImportNeutralCurvesAndPointsOptions_e
    {
        swImportNeutralCurvesAndPointsOptions_AsSketches	= 0,
        swImportNeutralCurvesAndPointsOptions_As3DCurves	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("BDC03F96-C4FF-46DC-935E-C511B1BBD1E1") swImportNeutralAssemblyStructureMapping_e
    {
        swImportNeutralAssemblyStructureMapping_Default	= 0,
        swImportNeutralAssemblyStructureMapping_MultipleParts	= 1,
        swImportNeutralAssemblyStructureMapping_MultibodyPart	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("4706F552-C6AE-469E-A2EC-69427C1E716D") swImportNeutralUnits_e
    {
        swImportNeutralUnits_ImportFileUnits	= 0,
        swImportNeutralUnits_TemplateUnits	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("72816ADD-B78E-4526-91E5-E0E2A60292D9") swMoveableDatumDirection_e
    {
        swMoveableDatumDirectionLeft	= 0,
        swMoveableDatumDirectionRight	= 1,
        swMoveableDatumDirectionUp	= 2,
        swMoveableDatumDirectionDown	= 3,
        swMoveableDatumDirectionFreeDrag	= 4,
        swMoveableDatumDirectionBySelection	= 5
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("B865C9C7-615D-438C-A464-08227D48BCB6") swRefGeometryError_e
    {
        swEdgeNotFound	= -1,
        swValidEdge	= 0,
        swNonlinearEdgeSelection	= 1,
        swInvalidEdgeSelection	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("DD0B6894-77F1-4971-9AF5-144F303F3329") swMoveableDatumStyle_e
    {
        swMoveableDatumStyle_NotMoveable	= 0,
        swMoveableDatumStyle_Horizontal	= 1,
        swMoveableDatumStyle_Rotational	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("CAF24A33-EB6A-49FA-9068-C048C8125A28") swCustomLinkSetResult_e
    {
        swCustomLinkSetResult_OK	= 0,
        swCustomLinkSetResult_NotPresent	= 1,
        swCustomLinkSetResult_Legacy	= 2,
        swCustomLinkSetResult_UserProp	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("899373B6-5BD4-48CC-8076-6332199ED40C") swBBoxDescriptionApplyMethod_e
    {
        swBBoxDescriptionApplyMethod_New	= 0,
        swBBoxDescriptionApplyMethod_ExistingAndNew	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("F2DE8744-53BC-4490-B254-B0D490A7CF3C") swGlobalBoundingBoxFitOptions_e
    {
        swBoundingBoxType_BestFit	= 1,
        swBoundingBoxType_CustomPlane	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("935E144A-5DC4-4894-8ACB-6D970432CF84") swGlobalBoundingBoxResult_e
    {
        swGlobalBoundingBoxResult_Success	= 0,
        swGlobalBoundingBoxResult_NoValidBodiesFound	= 1,
        swGlobalBoundingBoxResult_NonPlanarFaceSelected	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("13F7149F-72BC-4F33-B4F4-88223E44B563") swSMNormalCutError_e
    {
        swSMNormalCutError_NoError	= 0,
        swSMNormalCutError_FaceAlreadyExists	= 1,
        swSMNormalCutError_InvalidFace	= 2,
        swSMNormalCutError_FaceNotPresent	= 3,
        swSMNormalCutError_InvalidFaceArray	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("E672BE58-7E6A-40A4-8962-21A980076796") swSpeedpakUpdate_e
    {
        swSpeedpakUpdate_All	= 0,
        swSpeedpakUpdate_None	= 1,
        swSpeedpakUpdate_WithRebuildOnSaveMark	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("811BA52D-8A8A-4D77-83D6-46D9A741D974") swCollisionGroupSetComponentsErrors_e
    {
        swCollisionGroupSetComponentsErrors_None	= 0,
        swCollisionGroupSetComponentsErrors_InvalidComponents	= 1,
        swCollisionGroupSetComponentsErrors_ComponentsAddedElsewhere	= 2,
        swCollisionGroupSetComponentsErrors_GroupRemoved	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("39D329E9-FE38-4BAE-BA05-DD57B4A3A983") swCollisionGroupApplyTransformErrors_e
    {
        swCollisionGroupApplyTransformErrors_None	= 0,
        swCollisionGroupApplyTransformErrors_SizeMismatch	= 1,
        swCollisionGroupApplyTransformErrors_InvalidTransforms	= 2,
        swCollisionGroupApplyTransformErrors_GroupRemoved	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("D56C18B0-4F51-4A3A-83C6-1D5DE9F57C35") swCollisionDetectionResults_e
    {
        swCollisionDetectionResult_NoCollision	= 0,
        swCollisionDetectionResult_CollisionDetected	= 1,
        swCollisionDetectionResult_FailedNotEnoughGroups	= -1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("231EF215-3941-43DF-A02F-ECEE623B7BCA") swTabSlotFeatureSpacingType_e
    {
        EqualSpacing	= 0,
        SpacingLength	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("C9ECDFE1-72F8-45B7-88AF-C635EA6667C0") swTabSlotFeatureHeightType_e
    {
        Blind	= 0,
        UpToSurface	= 1,
        OffsetFromSurface	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("C97FDCE5-9873-4D2B-8E6C-430858B452A3") swTabEdgesType_e
    {
        SharpEdge	= 0,
        FilletEdge	= 1,
        ChamferEdge	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("4A14F87D-8EB3-4DCD-AE6B-A8F0AD556117") swCamMateEntityType_e
    {
        swCamMateEntityType_CamPath	= 0,
        swCamMateEntityType_CamFollower	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("BE32FCE6-6CCD-4C45-AAED-025FE83E6F32") swHingeMateEntityType_e
    {
        swHingeMateEntityType_Concentric	= 0,
        swHingeMateEntityType_Coincident	= 1,
        swHingeMateEntityType_Angle	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("9DF3A30E-9101-4CDC-854E-73F2AD6099EE") swRackPinionMateEntityType_e
    {
        swRackPinionMateEntityType_Rack	= 0,
        swRackPinionMateEntityType_Pinion	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("7B636E2B-E641-4F65-9D43-943987C43772") swRackPinionMateDistanceOptions_e
    {
        swPinionPitchDiameter	= 0,
        swRackTravelPerRevolution	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("21683974-1BDE-4714-BE6B-C80B45796FA6") swScrewMateDistanceOptions_e
    {
        swRevolutionsPerUnitLength	= 0,
        swDistancePerRevolution	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("2316F9CD-4580-4651-9333-BB705286A39D") swSlotMateConstraintOptions_e
    {
        swSlotMateConstraintOption_Free	= 0,
        swSlotMateConstraintOption_Centered	= 1,
        swSlotMateConstraintOption_Distance	= 2,
        swSlotMateConstraintOption_Percent	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("95D34DC5-A053-4F9C-96CE-DACE6F5E0ED1") swPMIType_e
    {
        swPMIType_None	= 0,
        swPMIType_Dimension	= 1,
        swPMIType_Datum	= 2,
        swPMIType_GTol	= 3,
        swPMIType_Unknown	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("5417A0E4-0772-49ED-B8FE-6BF68ECD4462") swDimensionPrefix_e
    {
        swDimensionPrefix_None	= 0,
        swDimensionPrefix_2X	= 1,
        swDimensionPrefix_3X	= 2,
        swDimensionPrefix_4X	= 3,
        swDimensionPrefix_5X	= 4,
        swDimensionPrefix_6X	= 5,
        swDimensionPrefix_Unknown	= 6
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("86EEE29D-1098-43CA-857C-506290F9FE30") swDimensionSymbol_e
    {
        swDimensionSymbol_None	= 0,
        swDimensionSymbol_Unknown	= 1,
        swDimensionSymbol_Diameter	= 2,
        swDimensionSymbol_Depth	= 3,
        swDimensionSymbol_Degree	= 4,
        swDimensionSymbol_Centerline	= 5,
        swDimensionSymbol_CenterOfMass	= 6,
        swDimensionSymbol_Counterbore	= 7,
        swDimensionSymbol_Countersink	= 8,
        swDimensionSymbol_ConicalTaper	= 9,
        swDimensionSymbol_Continuous	= 10,
        swDimensionSymbol_ControlledRadius	= 11,
        swDimensionSymbol_Delta	= 12,
        swDimensionSymbol_Encompassing	= 13,
        swDimensionSymbol_FlattenedLength	= 14,
        swDimensionSymbol_FreeState	= 15,
        swDimensionSymbol_Independency	= 16,
        swDimensionSymbol_LeastMaterialCondition	= 17,
        swDimensionSymbol_MaximumMaterialCondition	= 18,
        swDimensionSymbol_PartingLine	= 19,
        swDimensionSymbol_PlusMinus	= 20,
        swDimensionSymbol_ProjectedToleranceZone	= 21,
        swDimensionSymbol_RegardlessOfFeatureSize	= 22,
        swDimensionSymbol_Rho	= 23,
        swDimensionSymbol_SlopeUp	= 24,
        swDimensionSymbol_SlopeDown	= 25,
        swDimensionSymbol_SlopeInvertedUp	= 26,
        swDimensionSymbol_SlopeInvertedDown	= 27,
        swDimensionSymbol_SphericalRadius	= 28,
        swDimensionSymbol_SphericalDiameter	= 29,
        swDimensionSymbol_Square	= 30,
        swDimensionSymbol_SquareBS	= 31,
        swDimensionSymbol_Statistical	= 32,
        swDimensionSymbol_TangentPlane	= 33,
        swDimensionSymbol_Translation	= 34,
        swDimensionSymbol_UnequallyDisposedProfile	= 35,
        swDimensionSymbol_Radius	= 36,
        swDimensionSymbol_Angle	= 37,
        swDimensionSymbol_SlotLength	= 38,
        swDimensionSymbol_SlotWidth	= 39,
        swDimensionSymbol_CalloutText	= 40
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("380B7D0D-A4A1-4CFB-87A0-FFF1D76E53D2") swPMIDatumType_e
    {
        swPMIDatumType_DatumFeature	= 0,
        swPMIDatumType_DatumTarget	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("13249EA8-1020-4AC0-A992-6A6E5533ED34") swPMIDatumShape_e
    {
        swPMIDatumShape_Square	= 0,
        swPMIDatumShape_Round	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("93B1ACF5-B127-4A09-8DC3-DCBD8C35EB89") swPMIDatumAnchorStyle_e
    {
        swPMIDatumAnchorStyle_FilledTriangle	= 0,
        swPMIDatumAnchorStyle_FilledTriangleWithShoulder	= 1,
        swPMIDatumAnchorStyle_EmptyTriangle	= 2,
        swPMIDatumAnchorStyle_EmptyTriangleWithShoulder	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("50EAD3D2-17EA-453B-AD01-93759CD11C6D") swPMIDatumTargetSymbolStyle_e
    {
        swPMIDatumTargetSymbolStyle_None	= 0,
        swPMIDatumTargetSymbolStyle_Unknown	= 1,
        swPMIDatumTargetSymbolStyle_Symbol	= 2,
        swPMIDatumTargetSymbolStyle_AreaOutside	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("D194AC16-99C6-4416-B6F8-03A2B0CC272D") swPMIDatumTargetMovableStyle_e
    {
        swPMIDatumTargetMovableStyle_None	= 0,
        swPMIDatumTargetMovableStyle_Unknown	= 1,
        swPMIDatumTargetMovableStyle_Horizontal	= 2,
        swPMIDatumTargetMovableStyle_Rotational	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("7AC248F5-1A55-4B88-BCBC-B268DE612CF6") swPMIDatumTargetAreaStyle_e
    {
        swPMIDatumTargetAreaStyle_None	= 0,
        swPMIDatumTargetAreaStyle_Unknown	= 1,
        swPMIDatumTargetAreaStyle_X	= 2,
        swPMIDatumTargetAreaStyle_Circular	= 3,
        swPMIDatumTargetAreaStyle_Rectangular	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("E7331FB7-E145-4B77-B07A-82F028AEB521") swGeometricCharacteristic_e
    {
        swGeometricCharacteristic_None	= 0,
        swGeometricCharacteristic_Unknown	= 1,
        swGeometricCharacteristic_Straightness	= 2,
        swGeometricCharacteristic_Flatness	= 3,
        swGeometricCharacteristic_Circularity	= 4,
        swGeometricCharacteristic_Cylindricity	= 5,
        swGeometricCharacteristic_LineProfile	= 6,
        swGeometricCharacteristic_SurfaceProfile	= 7,
        swGeometricCharacteristic_Angularity	= 8,
        swGeometricCharacteristic_Parallelism	= 9,
        swGeometricCharacteristic_Perpendicularity	= 10,
        swGeometricCharacteristic_Position	= 11,
        swGeometricCharacteristic_Concentricity	= 12,
        swGeometricCharacteristic_Symmetry	= 13,
        swGeometricCharacteristic_CircularRunout	= 14,
        swGeometricCharacteristic_TotalRunout	= 15
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("2CEB288D-355B-4A4D-8FC4-82DF1CC0475F") swToleranceZoneModifier_e
    {
        swToleranceZoneModifier_None	= 0,
        swToleranceZoneModifier_Unknown	= 1,
        swToleranceZoneModifier_Diameter	= 2,
        swToleranceZoneModifier_SphericalDiameter	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("3EDA91AD-8152-466F-9838-B2CE9B18B8DF") swMaterialModifier_e
    {
        swMaterialModifier_None	= 0,
        swMaterialModifier_Unknown	= 1,
        swMaterialModifier_MaximumMaterialCondition	= 2,
        swMaterialModifier_LeastMaterialCondition	= 3,
        swMaterialModifier_RegardlessOfFeatureSize	= 4,
        swMaterialModifier_Translation	= 5
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("A4B5CA3A-C216-4BCD-A9A7-24ED54ECB5FD") swAdditionalSymbol_e
    {
        swAdditionalSymbol_None	= 0,
        swAdditionalSymbol_Unknown	= 1,
        swAdditionalSymbol_TangentPlane	= 2,
        swAdditionalSymbol_FreeState	= 3,
        swAdditionalSymbol_Statistical	= 4,
        swAdditionalSymbol_MaximumUpperTolerance	= 5,
        swAdditionalSymbol_MinimumLowerTolerance	= 6
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("B4CF6AB4-6711-4DD6-B56C-1D6F619B412A") swGtolTolType_e
    {
        swGtolTolType_None	= 0,
        swGtolTolType_Unknown	= 1,
        swGtolTolType_ProjectedTolerance	= 2,
        swGtolTolType_Square	= 3,
        swGtolTolType_UnequallyDisposedProfile	= 4,
        swGtolTolType_MAX	= 5
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("A2DA8E6C-0BFF-4369-8243-2585BA7817DE") swPMITolPerUnitAreaType_e
    {
        swPMITolPerUnitType_None	= 0,
        swPMITolPerUnitType_Unknown	= 1,
        swPMITolPerUnitType_Circular	= 2,
        swPMITolPerUnitType_Rectangular	= 3,
        swPMITolPerUnitType_Square	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("28A0A205-45AD-41F7-A0BC-6459DA78DAC8") swFeatureModifier_e
    {
        swGeometricFeatureModifier_None	= 0,
        swGeometricFeatureModifier_MaximumMaterialCondition	= 1,
        swGeometricFeatureModifier_LeastMaterialCondition	= 2,
        swGeometricFeatureModifier_ProjectedTolerance	= 3,
        swGeometricFeatureModifier_TangentPlane	= 4,
        swGeometricFeatureModifier_FreeState	= 5,
        swGeometricFeatureModifier_ToleranceAsDiameter	= 6,
        swGeometricFeatureModifier_Unknown	= 7
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("F4B04669-C9BB-4E17-AD1B-A8B28AB6EC28") swPMIUnit_e
    {
        swPMIUnit_None	= 0,
        swPMIUnit_ANGSTROM	= 1,
        swPMIUnit_CM	= 2,
        swPMIUnit_FEET	= 3,
        swPMIUnit_FEETINCHES	= 4,
        swPMIUnit_INCHES	= 5,
        swPMIUnit_METER	= 6,
        swPMIUnit_MICRON	= 7,
        swPMIUnit_MIL	= 8,
        swPMIUnit_MM	= 9,
        swPMIUnit_NANOMETER	= 10,
        swPMIUnit_UIN	= 11,
        swPMIUnit_DEGREE	= 12,
        swPMIUnit_RADIAN	= 13
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("A17F7250-1D59-4318-9481-BBF9886CEEB3") swPMILeaderType_e
    {
        swPMILeaderType_NoLeader	= 0,
        swPMILeaderType_Leader	= 1,
        swPMILeaderType_MultiJog	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("B3C42ADD-23F4-496D-8A96-691DFCAA08F2") swPMILeaderStyle_e
    {
        swPMILeaderStyle_None	= 0,
        swPMILeaderStyle_Straight	= 1,
        swPMILeaderStyle_Bent	= 2,
        swPMILeaderStyle_Perpendicular	= 3,
        swPMILeaderStyle_Outside	= 4,
        swPMILeaderStyle_Inside	= 5,
        swPMILeaderStyle_Smart	= 6
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("4EE947EF-7552-4BB2-B013-DB5D668CF8E6") swPMILeaderLocation_e
    {
        swPMILeaderLocation_None	= 0,
        swPMILeaderLocation_Left	= 1,
        swPMILeaderLocation_Right	= 2,
        swPMILeaderLocation_Nearest	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("08A310BA-86C5-442A-A53A-9E1E492BAA81") swPMILeaderModifier_e
    {
        swPMILeaderModifier_None	= 0,
        swPMILeaderModifier_AllAround	= 1,
        swPMILeaderModifier_AllAroundThisSide	= 2,
        swPMILeaderModifier_AllOver	= 3,
        swPMILeaderModifier_AllOverThisSide	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("3A0A920C-9F08-47AF-821F-98A6BD157083") swFastenerTableTypes_e
    {
        swSizeTable	= 0,
        swThreadDataTable	= 1,
        swScrewClearancesTable	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("037628B9-0A33-46C1-917D-D3754047EBEA") swReferencedFileStatus_e
    {
        swReferencedFileStatus_FileOk	= 0,
        swReferencedFileStatus_InternalIdMismatch	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("ADE237A7-5D04-43C4-8096-FF8397B77D73") swToolBoxPropertyName_e
    {
        swToolBoxPropertyName_PartName	= 0,
        swToolBoxPropertyName_Specification	= 1,
        swToolBoxPropertyName_Standard	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("E52ACE2B-F2E1-4379-B7AF-C950E59404DD") swColumnTypeStatus_e
    {
        swColumnTypeStatus_Success	= 0,
        swColumnTypeStatus_InvalidIndex	= 1,
        swColumnTypeStatus_InvalidPropertyType	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("E7895FA4-6EF5-4569-952C-9BF39BF68471") swCellEquationStatus_e
    {
        swCellEquationStatus_Success	= 0,
        swCellEquationStatus_InvalidIndex	= 1,
        swCellEquationStatus_InvalidEquation	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("6F32BA37-7F9E-4360-B2DC-C4C425465ADB") swPatternEndCondition_e
    {
        swPatternEndCondition_SpacingAndInstances	= 0,
        swPatternEndCondition_UpToReference	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("9E851686-034E-42B3-9F79-1B2A0CF44686") swExcludeFromBOMError_e
    {
        swExcludeFromBOM_Fail	= 0,
        swExcludeFromBOM_Success	= 1,
        swExcludeFromBOM_EnvelopedComponent	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("8AAE2CD6-5B9C-4C68-9376-BB42473890FB") swTableCellOrientation_e
    {
        swTableCellOrientation_Right	= 0,
        swTableCellOrientation_Left	= 1,
        swTableCellOrientation_Up	= 2,
        swTableCellOrientation_Down	= 3,
        swTableCellOrientation_Varies	= 4,
        swTableCellOrientation_Rotate90CW	= 5,
        swTableCellOrientation_Rotate90CCW	= 6
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("CF41A180-D834-46A3-8795-4874D7492EBF") swNormalCutParameters_e
    {
        swNormalCutExtent	= 0,
        swNormalCutOffsetPlane	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("64E89E57-0389-4D1B-B61D-B9E7743C184A") swNormalCutErrors_e
    {
        swAddNormalCutGroup_Success	= 0,
        swAddNormalCutGroup_Failed	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("5B122CDD-932E-4152-B2FE-870EB1456E18") swEdrawingsAttachmentOption_e
    {
        swEdrawingsAttachNone	= 0,
        swEdrawingsAttachActive	= 1,
        swEdrawingsAttachAll	= 2,
        swEdrawingsAttachSelected	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("D4CD31BA-6F75-4400-92CD-587625FAC148") swEdrawingsAttachmentType_e
    {
        swAP_Unknown	= 0,
        swAP_203	= 1,
        swAP_214	= 2,
        swAP_242	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("7168108D-5136-4B05-80E8-959021E268B8") swPLYQuality_e
    {
        swPLYQuality_Coarse	= 1,
        swPLYQuality_Fine	= 2,
        swPLYQuality_Custom	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("CAED0C7B-71C9-48B3-AE6A-B01E45B041AC") swSheetMetalMBDBendNotesStyle_e
    {
        swSheetMetalMBDBendNotesStyle_AboveBendLine	= 0,
        swSheetMetalMBDBendNotesStyle_BelowBendLine	= 1,
        swSheetMetalMBDBendNotesStyle_WithLeader	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("3F0F8AD8-6F19-4F32-B5FD-4A2FA7A72AEA") swHoleTableTagOrder_e
    {
        swHoleTableTagOrder_XY	= 1,
        swHoleTableTagOrder_ReduceToolPath	= 2,
        swHoleTableTagOrder_Radial	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("8BD08154-4BD4-4EC1-8093-0B8016F3AF53") swHoleTableTagPrefixApply_e
    {
        swHoleTableTagPrefixApply_AllHolesOfSameSize	= 1,
        swHoleTableTagPrefixOption_OnlySpecifiedHole	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("EEFC6AE9-E756-40D7-A2E6-AAE4D8EF3649") swCollisionManagerSetAssemblyErrors_e
    {
        swCollisionManagerSetAssemblyErrors_Success	= 0,
        swCollisionManagerSetAssemblyErrors_InvalidModelDocument	= 1,
        swCollisionManagerSetAssemblyErrors_OtherAssemblyActive	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("F664778D-8DD5-474F-A370-E9B7CF9741C0") sw3DInterconnectImportErrors_e
    {
        sw3DInterconnectImportErrors_None	= 0,
        sw3DInterconnectImportErrors_Disabled	= 1,
        sw3DInterconnectImportErrors_IncompatibleType	= 2,
        sw3DInterconnectImportErrors_AssemblyNotSaved	= 3,
        sw3DInterconnectImportErrors_BreakLinkUnavailable	= 4,
        sw3DInterconnectImportErrors_ParametersUnavailable	= 5,
        sw3DInterconnectImportErrors_TransferOptionNeeded	= 6
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("9AC05BB7-117D-4D59-82F9-8EA1E80E11B3") swCutListExclusionStatus_e
    {
        swCutListExclusionStatus_Success	= 0,
        swCutListExclusionStatus_InvalidEntities	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("CF021A8C-496C-4619-BB12-7F1ED9F0652B") swMassPropertyAccuracyLevel_e
    {
        swMassPropertyAccuracyLevel_Lower	= 0,
        swMassPropertyAccuracyLevel_Medium	= 1,
        swMassPropertyAccuracyLevel_Higher	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("FB7EE151-A1DB-406E-9677-4F785123EDC2") swSlicingTypes_e
    {
        swSlicingTypes_None	= 0,
        swSlicingTypes_Intersection	= 0x1,
        swSlicingTypes_Exact	= 0x2,
        swSlicingTypes_Circle	= 0x4,
        swSlicingTypes_Rectangle	= 0x8
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("6C734AE8-3F3B-44D5-BD92-B144B0A215F7") swInsertSlicingError_e
    {
        swInsertSlicingError_NoError	= 0,
        swInsertSlicingError_GenericError	= 0x1,
        swInsertSlicingError_InvalidTotalAngle	= 0x2,
        swInsertSlicingError_InvalidSlicesToGenerateOption	= 0x4,
        swInsertSlicingError_InvalidSlicingPlaneEntities	= 0x8,
        swInsertSlicingError_EntitiesCannotFormPlane	= 0x10,
        swInsertSlicingError_NoBodiesInsideBox	= 0x20,
        swInsertSlicingError_InvalidSlicingData	= 0x40,
        swInsertSlicingError_InvalidNumberOfPlanes	= 0x80
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("D805C583-E2DF-42B2-B670-EFCC6CF40B34") swCreatePartExplodeStepError_e
    {
        swCreatePartExplodeStepError_Successful	= 0,
        swCreatePartExplodeStepError_Generic	= 1,
        swCreatePartExplodeStepError_NoBodies	= 2,
        swCreatePartExplodeStepError_OpenExplodePMP	= 3,
        swCreatePartExplodeStepError_InactiveConfiguration	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("47C58A2C-4A5E-4C16-8CAF-A1D2193B979B") swSimpleFilletPartialEdgeCondition_e
    {
        swPartialEdgeNone	= 0,
        swPartialEdgeDistanceOffset	= 1,
        swPartialEdgePercentOffset	= 2,
        swPartialEdgeReferenceOffset	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("33603D7C-E4A5-4DDC-9C06-ECB805640E75") swImportPartCustomPropertiesToOptions_e
    {
        swImportPropertiesToFileProperties	= 1,
        swImportPropertiesToCutlistProperties	= 2,
        swImportPartCustomPropertiesNone	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("05440ED4-7156-432A-935B-7720C50F3EE5") swImportSheetMetalInformation_e
    {
        swImportWithUnlockedProperties	= 1,
        swImportWithoutUnlockedProperties	= 2,
        swImportUnlockedPropertiesNone	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("BBD1D913-BCD9-4129-B12E-D54F5B750612") swSeedAlignmentReferencePoint_e
    {
        swSeedAlignmentReferencePoint_BoundingBoxCenter	= 0,
        swSeedAlignmentReferencePoint_ComponentOrigin	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("324ADDD1-43DA-4E10-B532-EDE0389BE4F5") swMirrorComponentMirrorType_e
    {
        swMirrorType_CenterOfBoundingBox	= 0,
        swMirrorType_CenterOfMass	= 1,
        swMirrorType_ComponentOrigin	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("5F0DC4C9-5782-40B3-81E9-400DBC49531E") swMirrorComponentOrientation2_e
    {
        swOrientation_MirroredX_MirroredY	= 0,
        swOrientation_MirroredAndFlippedX_MirroredY	= 1,
        swOrientation_MirroredX_MirroredAndFlippedY	= 2,
        swOrientation_MirroredAndFlippedX_MirroredAndFlippedY	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("C9E4EF96-0488-47A6-82AF-57F1FCA468B4") swAreaHatchingScope_e
    {
        swAreaHatchingScope_Region	= 0,
        swAreaHatchingScope_Component	= 1,
        swAreaHatchingScope_View	= 2,
        swAreaHatchingScope_Body	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("4283548B-9573-468F-AAD6-255954374B45") swSweptFlangePositionTypes_e
    {
        swSweptFlangePositionType_MaterialInside	= 1,
        swSweptFlangePositionType_MaterialOutside	= 2,
        swSweptFlangePositionType_BendOutside	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("1EE7DA29-9522-4677-BF60-1A38CA2A50BE") swSaveItemsPathError_e
    {
        swSaveItemsPathError_Succeeded	= 0,
        swSaveItemsPathError_ArraySizeNotMatching	= 1,
        swSaveItemsPathError_InvalidPath	= 2,
        swSaveItemsPathError_WrongComponentName	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("5D4C55BC-2919-436B-99D3-6BBB6741BECC") swGeometryToSave_e
    {
        swGeometryToSave_AllComponents	= 0,
        swGeometryToSave_ExteriorFaces	= 1,
        swGeometryToSave_IncludeSpecificComponents	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("890F4E56-EAD8-41A2-8A8E-94604E9784DA") swSaveWithReferencesOptions_e
    {
        swSaveWithReferencesOptions_None	= 0,
        swSaveWithReferencesOptions_IncludeVirtualComponents	= 0x1,
        swSaveWithReferencesOptions_IncludeToolBoxParts	= 0x2,
        swSaveWithReferencesOptions_IncludeBrokenReferences	= 0x4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("ECDB0C43-56D7-4C24-8366-5D74868D4053") swApplicationType_e
    {
        swApplicationType_Desktop	= 0,
        swApplicationType_3DEXPERIENCE	= 1,
        swApplicationType_WithConnector	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("2DAD7031-5629-4E61-AA3C-64E1E5788CD0") swSweptFlangeError_e
    {
        swSweptFlangeError_None	= 0,
        swSweptFlangeError_InvalidProfile	= 0x1,
        swSweptFlangeError_InvalidPath	= 0x2,
        swSweptFlangeError_SelfIntersectingGeometry	= 0x4,
        swSweptFlangeError_InvalidSheetMetalParameters	= 0x8
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("4932330A-8338-4DC6-9AAC-53BF660CF914") swPartnerEntitlementStatus_e
    {
        swPESuccess	= 0,
        swPEFail	= 0x1,
        swPEAddinNameMismatch	= 0x2,
        swPEAddinGUIDMismatch	= 0x4,
        swPEVersionMismatch	= 0x8,
        swPELicenseExpired	= 0x10,
        swPETierMismatch	= 0x20
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("F72BFA7E-BB04-4ACE-A4D4-C41D93BC5D0F") swInstanceToVaryModificationType_e
    {
        swInstanceToVaryModificationType_D1Spacing	= 1,
        swInstanceToVaryModificationType_D2Spacing	= 2,
        swInstanceToVaryModificationType_Dimensions	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("737DAA64-0F55-4BE8-A897-D51E3565C75A") sw3DExperienceCfgType_e
    {
        swNot3DExperienceType	= 0,
        swPhysicalProduct	= 1,
        swRepresentation	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("E10225AE-8BFA-44D6-9479-F30A414307BF") swUserPreferencesLanguages_e
    {
        swLang_Chinese	= 0,
        swLang_Chinese_Simplified	= 1,
        swLang_Czech	= 2,
        swLang_English	= 3,
        swLang_French	= 4,
        swLang_German	= 5,
        swLang_Italian	= 6,
        swLang_Japanese	= 7,
        swLang_Korean	= 8,
        swLang_Polish	= 9,
        swLang_Portuguese_Brazilian	= 10,
        swLang_Russian	= 11,
        swLang_Spanish	= 12,
        swLang_Turkish	= 13
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("94709A7E-5093-424C-9DEC-DB6236EC09DB") swConnectedSyncSettingsErrors_e
    {
        swConnectedSyncSettings_Success	= 0,
        swConnectedSyncSettings_ConnectedDisabled	= 1,
        swConnectedSyncSettings_ConnectedNotLoggedIn	= 2,
        swConnectedSyncSettings_UploadDownloadError	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("E4EC7604-8B4A-44A5-836A-8527C3AD70C3") sw3DExperienceModelType_e
    {
        sw3DExperienceModelType_Standard	= 0,
        sw3DExperienceModelType_PartSupply	= 1,
        sw3DExperienceModelType_3DExperience	= 2,
        sw3DExperienceModelType_xCad	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("979530DE-EBBB-45E8-98B6-D58D894EC580") swCADFamilyCfgOptions_e
    {
        swCADFamilyCfgOption_SuppressNewFeatures	= 0x1,
        swCADFamilyCfgOption_SuppressNewComponents	= 0x2,
        swCADFamilyCfgOption_DontActivate	= 0x4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("1FE45D82-3997-4555-8A42-A68C03608989") swZoneSizeDistribution_e
    {
        swZoneSizeDistribution_50mmFromCenter	= 0,
        swZoneSizeDistribution_EvenlySized	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("30AFF418-5003-44A7-8A5A-6075241C09E1") swRegionType_e
    {
        swRegionTypeMargins	= 0,
        swRegionTypeSheet	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("4977DFAA-CB01-45FF-8975-16628789B3D2") swZoneMargin_e
    {
        swZoneTopMargin	= 0,
        swZoneBottomMargin	= 1,
        swZoneRightMargin	= 2,
        swZoneLeftMargin	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("A94C5645-BDF4-408D-855D-926613B271EE") swStructureSystemMemberType_e
    {
        swStructureSystemMemberType_Primary	= 0,
        swStructureSystemMemberType_Secondary	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("9D8FCD1C-700E-4B26-89E7-16AC077309EB") swStructureSystemMemberCreationType_e
    {
        swStructureSystemMemberCreationType_Primary_PathSegment	= 0,
        swStructureSystemMemberCreationType_Primary_RefPlane	= 1,
        swStructureSystemMemberCreationType_Primary_PointLength	= 2,
        swStructureSystemMemberCreationType_Primary_FacePlaneIntersection	= 3,
        swStructureSystemMemberCreationType_Secondary_SupportPlane	= 4,
        swStructureSystemMemberCreationType_Secondary_BetweenPoints	= 5,
        swStructureSystemMemberCreationType_Secondary_UpToMembers	= 6
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("537C1225-B7BA-4A2D-B1E9-8BDF7787BA68") swStructureProfileMirrorType_e
    {
        swStructureProfileMirrorType_HorizontalAxis	= 0,
        swStructureProfileMirrorType_VerticalAxis	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("FADF5C15-CD97-4B87-8CD7-11594F1B56B6") swStructureProfilePiercePointType_e
    {
        swStructureProfilePiercePoint_Center	= 0,
        swStructureProfilePiercePoint_TopCenter	= 1,
        swStructureProfilePiercePoint_BottomCenter	= 2,
        swStructureProfilePiercePoint_TopLeft	= 3,
        swStructureProfilePiercePoint_TopRight	= 4,
        swStructureProfilePiercePoint_CenterLeft	= 5,
        swStructureProfilePiercePoint_CenterRight	= 6,
        swStructureProfilePiercePoint_BottomLeft	= 7,
        swStructureProfilePiercePoint_BottomRight	= 8,
        swStructureProfilePiercePoint_Selection	= 9
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("A0C53120-52D7-417B-B928-27BB9349C61B") swStructureProfileAlignmentType_e
    {
        swStructureProfileAlignmentType_HorizontalAxis	= 0,
        swStructureProfileAlignmentType_VerticalAxis	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("EEDC1919-1992-43AD-8B2C-B7073085ECE3") swPrimaryMemberPointLengthEndCondition_e
    {
        swPrimaryMemberPointLengthEndCondition_Length	= 0,
        swPrimaryMemberPointLengthEndCondition_Point	= 1,
        swPrimaryMemberPointLengthEndCondition_UpToPoint	= 2,
        swPrimaryMemberPointLengthEndCondition_UpToPlane	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("BD152640-37C8-4A3B-9724-52126583C3EE") swSecondaryMemberBetweenPointsDistanceFromEndType_e
    {
        swSecondaryMemberBetweenPointsDistanceFromEndType_Distance	= 0,
        swSecondaryMemberBetweenPointsDistanceFromEndType_LengthRatio	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("0CC09EF4-646F-4F49-9117-10AB76C3C06D") swCornerType_e
    {
        swCorner_Simple	= 0,
        swCorner_TwoMember	= 1,
        swCorner_Complex	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("53BD0F65-8694-40D1-999E-6EAAD5C3A861") swCornerTreatmentPlanarTrimToolType_e
    {
        swCornerTreatmentPlanarTrimTool_Automatic	= 0,
        swCornerTreatmentPlanarTrimTool_UserDefined	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("97A5AFB9-6B2D-4544-9C5E-8C2503FB8F09") swCornerTreatmentPlanarTrimOptions_e
    {
        swCornerTreatmentPlanarTrim_FirstContact	= 0,
        swCornerTreatmentPlanarTrim_FullContact	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("7297913D-8F53-48D4-A1C4-63B4964DDB84") swCornerTreatmentTrimType_e
    {
        swCornerTreatmentTrim_PlanarTrim	= 0,
        swCornerTreatmentTrim_BodyTrim	= 1,
        swCornerTreatmentTrim_MiterTrim	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("0BE294C5-A2BB-4E64-8C01-0CA5D2A42624") swStructureSplitMemberType_e
    {
        swStructureSplitMember_Reference	= 0,
        swStructureSplitMember_Dimension	= ( swStructureSplitMember_Reference + 1 ) 
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("4B9EF2DC-F6D5-465B-9ACB-A74737C4E30E") swSplitMemberDimensionType_e
    {
        swSplitMemberDimensionType_SplitLength	= 0,
        swSplitMemberDimensionType_Instance	= ( swSplitMemberDimensionType_SplitLength + 1 ) 
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("C7F19AC0-5163-4C7E-A4BB-156A16BF2AC6") swShowMessageBarResult_e
    {
        swShowMessageBarResult_Shown	= 0,
        swShowMessageBarResult_DontShowAgain	= 1,
        swShowMessageBarResult_FailedInvalidDefinition	= 2,
        swShowMessageBarResult_FailedInvalidHandler	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("476FAB62-21E5-49BE-9B78-1454B2002B57") swUserMessageBarSeverity_e
    {
        swUserMessageBarSeverity_Information	= 0,
        swUserMessageBarSeverity_Acknowledgement	= 1,
        swUserMessageBarSeverity_Warning	= 2,
        swUserMessageBarSeverity_Error	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("755638B6-F946-4220-9E22-A28F68DCB957") swUserMessageBarResponseType_e
    {
        swUserMessageBarResponseType_None	= 0,
        swUserMessageBarResponseType_Button	= 1,
        swUserMessageBarResponseType_Link	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("0C8BD2C2-BA60-4DF0-B79D-6FC16A23F2B6") swShowNotificationResult_e
    {
        swShowNotificationResult_Shown	= 0,
        swShowNotificationResult_DontShowAgain	= 1,
        swShowNotificationResult_FailedInvalidDefinition	= 2,
        swShowNotificationResult_FailedInvalidHandler	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("6F6504BC-4C8B-43F3-AA59-3D1CE977E2A9") swUserNotificationSeverity_e
    {
        swUserNotificationSeverity_Information	= 0,
        swUserNotificationSeverity_Acknowledgement	= 1,
        swUserNotificationSeverity_Warning	= 2,
        swUserNotificationSeverity_Error	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("38A7E181-20C0-43ED-9CF6-7554ECF7260D") swUserNotificationResponseType_e
    {
        swUserNotificationResponseType_None	= 0,
        swUserNotificationResponseType_Button	= 1,
        swUserNotificationResponseType_Link	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("587D6538-BBE8-4E9F-A925-3FC0E32D4837") swUserNotificationPosition_e
    {
        swUserNotificationPosition_Default	= 0,
        swUserNotificationPosition_TopCenter	= 1,
        swUserNotificationPosition_TopRight	= 2,
        swUserNotificationPosition_BottomCenter	= 3,
        swUserNotificationPosition_BottomRight	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("08BCB61C-ABCE-40FD-B1FE-442B5CD4359C") swCornerReliefBendType_e
    {
        swCornerReliefBendType_TwoBend	= 0,
        swCornerReliefBendType_ThreeBend	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("C511B2ED-692B-455C-AAC4-2E8685874AEC") swCornerReliefError_e
    {
        swCornerReliefError_None	= 0,
        swCornerReliefError_InvalidFaces	= 1,
        swCornerReliefError_InvalidBody	= 2,
        swCornerReliefError_InvalidCornerType	= 3,
        swCornerReliefError_InvalidReliefType	= 4,
        swCornerReliefError_IndexNotAvailable	= 5,
        swCornerReliefError_GenericFailure	= 6
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("10C4682D-B557-40DE-B10B-542ADEF93B7A") swCornerReliefSuitCaseType_e
    {
        swCornerReliefSuitCase_Default	= 0,
        swCornerReliefSuitCase_ExtendGapInBendArea	= 1,
        swCornerReliefSuitCase_FillInSomeGap	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("6F9085A4-C8D4-4B27-80A1-16A76C49D23A") swGetOpenFileNameOptions_e
    {
        swGetOpenFileNameOptions_Silent	= 0x1,
        swGetOpenFileNameOptions_ReadOnly	= 0x2,
        swGetOpenFileNameOptions_ViewOnly	= 0x4,
        swGetOpenFileNameOptions_RapidDraft	= 0x8,
        swGetOpenFileNameOptions_LoadModel	= 0x10,
        swGetOpenFileNameOptions_AutoMissingConfig	= 0x20,
        swGetOpenFileNameOptions_OverrideDefaultLoadLightweight	= 0x40,
        swGetOpenFileNameOptions_LoadLightweight	= 0x80,
        swGetOpenFileNameOptions_DontLoadHiddenComponents	= 0x100,
        swGetOpenFileNameOptions_LoadExternalReferencesInMemory	= 0x200,
        swGetOpenFileNameOptions_OpenDetailingMode	= 0x400,
        swGetOpenFileNameOptions_LDR_EditAssembly	= 0x800,
        swGetOpenFileNameOptions_SpeedPak	= 0x1000,
        swGetOpenFileNameOptions_AdvancedConfig	= 0x2000,
        swGetOpenFileNameOptions_UseLargeAssemblySettings	= 0x4000,
        swGetOpenFileNameOptions_SelectedSheets	= 0x8000
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("C98FEE41-DF52-4B8B-9393-5957F83A741C") swAssemblyLoadComponents_e
    {
        swAssemblyLoadComponents_AutoLoad	= 0,
        swAssemblyLoadComponents_ManualLoad	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("8D990598-E648-4CFB-98C5-9BD7A42A4A52") swFeatureManagerTreeViewCADFamily_e
    {
        swFeatureManagerTreeViewCADFamily_CADFamilyOnly	= 0,
        swFeatureManagerTreeViewCADFamily_CADFamilyAndConfiguration	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("987E2C40-14B4-46D4-9319-0B22008BB557") swDetailingGtolMaterialConditionSymbolPlacement_e
    {
        swDetailingGtolMaterialConditionSymbolPlacement_ASME	= 0,
        swDetailingGtolMaterialConditionSymbolPlacement_ISO	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("F1FB2FCF-F851-4F69-807F-E5C363DE68BB") swGtolFormatType_e
    {
        GTOL_SW2021	= 1,
        GTOL_SW2022	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("0BBA4E2E-8F85-45E2-B2EA-FDF9D902F702") swGtolFormatConversionError_e
    {
        swGtolFormatConversionFail	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("37ECC9ED-1DBC-4606-BAF7-5C7E6CCEA231") swGtolFormatSchemaVersion_e
    {
        swGtolFormatSchemaVersion_SW2023	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("D03560FF-4357-43BB-BFB6-233284E50C3E") swGtolIndicatorBorderType_e
    {
        swGtolIndicatorBorderType_OrientationPlane	= 0,
        swGtolIndicatorBorderType_IntersectionPlane	= 1,
        swGtolIndicatorBorderType_CollectionPlane	= 2,
        swGtolIndicatorBorderType_DirectionFeature	= 3
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("64462318-4F72-4F96-A036-4FB4B01CBB0A") swTrimToolMemberObjectType_e
    {
        swTrimToolMemberObjectType_swCornerMember	= 0,
        swTrimToolMemberObjectType_swCornerTreatmentFeature	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("C082ECD0-39B5-4696-8D0F-4F6D8EB43E69") swSetComponentIdentifierResult_e
    {
        swSetComponentIdentifierResult_Success	= 0,
        swSetComponentIdentifierResult_InvalidPrimary	= 1,
        swSetComponentIdentifierResult_InvalidSecondary	= 2,
        swSetComponentIdentifierResult_InvalidTertiary	= 4
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("D97FDC1F-57EB-42B7-AC3B-1D2518621791") swComponentIdentifier_e
    {
        swComponentIdentifier_None	= 0,
        swComponentIdentifier_PhysicalProductTitle	= 1,
        swComponentIdentifier_ComponentName	= 2,
        swComponentIdentifier_ComponentDescription	= 4,
        swComponentIdentifier_EnterpriseItemNumber	= 8,
        swComponentIdentifier_PhysicalProductDescription	= 16,
        swComponentIdentifier_ConfigurationName	= 32,
        swComponentIdentifier_ConfigurationDescription	= 64,
        swComponentIdentifier_DisplayStateName	= 128,
        swComponentIdentifier_FileTitle	= 256,
        swComponentIdentifier_PLMRevision	= 512
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("E3EA7697-9E3D-42FD-A6F3-CBB86A82DDB3") swFileSaveTo3DExperienceError_e
    {
        swFileSaveTo3DExperienceError_swGenericError	= 1,
        swFileSaveTo3DExperienceError_swConnectedIsOffline	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("DD211A7B-FE30-4E0A-9103-377FF6725B53") sw3DExperienceState_e
    {
        sw3DExperienceState_None	= 0,
        sw3DExperienceState_Online	= 0x1,
        sw3DExperienceState_Offline	= 0x2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("F0FC2E6B-65D0-403B-A623-DEB93421E378") swSecondaryMemberUpToMembersMemberPointParameters_e
    {
        swSecondaryMemberUpToMembersMemberPointParameters_PointMemberPair	= 0,
        swSecondaryMemberUpToMembersMemberPointParameters_FromPoint	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("7CEB3BE8-CFA4-450E-A114-B9B7677FDD58") swSecondaryMemberUpToMembersDistanceFromEndType_e
    {
        swSecondaryMemberUpToMembersDistanceFromEndType_Distance	= 0,
        swSecondaryMemberUpToMembersDistanceFromEndType_LengthRatio	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("6402D6EB-C4DA-4DB4-9662-A1039149984D") swAddToRecentDocumentList_e
    {
        swAddToRecentDocumentList_Default	= 0,
        swAddToRecentDocumentList_Add	= 1,
        swAddToRecentDocumentList_DontAdd	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("44DD8E21-C611-4FA8-8906-09BF628DA85F") swDefaultBOMPartNumberSource_e
    {
        swDefaultBOMPartNumberSource_DocumentName	= 0,
        swDefaultBOMPartNumberSource_ConfigurationName	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("D50963DB-99FD-437B-97C5-92CBEB1E0349") swCreateFeatureError_e
    {
        swCreateFeatureError_GenricError_GeometricError	= 0,
        swCreateFeatureError_GenricError_UnknownError	= 1,
        swCreateFeatureError_MateController_MateNotSet	= 2,
        swCreateFeatureError_MateController_MateTypeNotSupported	= 3,
        swCreateFeatureError_MateController_FailedToSolveMates	= 4,
        swCreateFeatureError_MateController_DimensionValueOutOfLimit	= 5,
        swCreateFeatureError_MateController_MateSelectionsPositionDataMismatch	= 6
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("51129216-4F42-4939-85AE-26BA7073E418") swGtolDecimalSeparatorType_e
    {
        swGeometricTolerance_Decimal_Separator_Period	= 0,
        swGeometricTolerance_Decimal_Separator_Comma	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("08A46722-38F9-409D-BBFC-D4FE0CEEC0F8") swPublishStepOpts_e
    {
        swPublishStepOpts_None	= 0,
        swPublishStepOpts_SplitFacesSTEP242	= 0x1,
        swPublishStepOpts_FaceEdgeSTEP242	= 0x2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("F3FF7421-841F-43F3-9FBA-CE3CAE81C820") swClearanceType_e
    {
        swClearanceType_Distance	= 0,
        swClearanceType_Coincident	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("E409B45B-6D6C-4F1E-BD2E-58F5797D9EED") swClearanceVerificationSetEntityErrors_e
    {
        swClearanceVerification_Unknown	= -1,
        swClearanceVerification_swSuccess	= 0,
        swClearanceVerification_swFacesAlreadySelected	= 1,
        swClearanceVerification_swComponentAlreadySelected	= 2,
        swClearanceVerification_swInvalidComponent	= 3,
        swClearanceVerification_swInvalidFace	= 4,
        swClearanceVerification_swInsufficientEntities	= 5
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("F824B8A8-C3DD-44A6-9CD5-86994ED0E575") swCheckClearanceBetween_e
    {
        swCheckClearanceBetweenSelectedItems	= 0,
        swCheckClearanceBetweenSelectedItemsAndRestAssembly	= 1
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("EC808AE8-F33D-467D-BA57-A46869987FDD") swLargeDesignReviewState_e
    {
        swLargeDesignReviewState_None	= 0,
        swLargeDesignReviewState_LDR	= 1,
        swLargeDesignReviewState_LDR_EditAssembly	= 2
    } ;
/* [uuid] */ 
enum  DECLSPEC_UUID("7C08ED72-63C9-4E9A-A12B-08190EF44926") swAssemblyMode_e
    {
        swAssemblyMode_None	= 0,
        swAssemblyMode_Resolved	= 1,
        swAssemblyMode_LightWeight	= 2,
        swAssemblyMode_LDR	= 3,
        swAssemblyMode_LDR_EditAssembly	= 4
    } ;

EXTERN_C const IID LIBID_SwConst;
#endif /* __SwConst_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


