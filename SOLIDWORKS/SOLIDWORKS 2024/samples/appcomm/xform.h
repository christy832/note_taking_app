//$c87 IBL 11/09/23 IR-1194679* Added  mg_fromThreeAnglesXform()
//$c86 IBL 07/18/23 Removed a redundant declare only 
//$c85 MHM 07/06/23 IR 1058527  SCALING_ZOOMIN_LIMIT
//$c84 IBL 09/28/22 Prj 25934 FUN  129311 Added mgXform_c::affineW()
//$c83 IBL 04/21/22 Added mgXform_c::setCoordinateXY/Z()
//$c82 IBL 03/02/22 Prj 25934 Added mgXform_c::getProperties()
//$c81 CWN 02/14/22 project ER085683 - added mg_RotateAtPointEuler()
//$c80 CWN 02/01/22 project ER085683 - implement get/setEulerAngles
//$c79 DK  04/15/21 Fixed spr1210627 -- flatten pattern sheet metal.
//$c78 IBL 01/1 2/21 Prj 25437 Added mgXform_c::affine/TranslationPtr/W() accessors and  update()
//$c77 IBL 05/15/20 Prj 24847 Added mgXform_c move constructor
//$c76 IBL 04/27/20 SPR 1178950 CID 185051 Passed mgXform_c by const reference rather than value
//$c75 IBL 04/20/20 CID 185026 SPR 1178040 Made mgXform_c polymorphic by making destructor virtual.
//$c74 IBL 04/14/20 CID 184879 SPR 1177159 Moved $c68 mgXform_c::is5D() into .cpp file
//$c73 IBL 04/08/20 Prj 24847 Added setFlags()/getFlags()
//$c72 IBL 04/07/20 Prj 24847 SPR 1167668 Added some comments, added is4D()
//$c71 IBL 04/02/20 Prj 24847 Added forceRigid param defaulting TRUE to restoreStringRep()
//$c70 IBL 03/30/20 Prj 24847 Added forceRigid param defaulting TRUE to createFromGLData()
//$c69 IBL 03/26/20 Prj 24847 Slight change to $c68
//$c68 IBL 03/23/20 Prj 24847 Replaced iPerspInfo with iGenPtr and added mgMatrix5_c
//$c67 IBL 03/09/20 SPR 1171595 Added isDebHot(),setDebHot()
//$c66 IBL 02/10/20 Prj 24847 SPR 1167668 Made $c65 mgMatrix4_c constructor explicit
//$c65 IBL 02/06/20 Added mgPerspectiveInfoBase_c
//$c64 IBL 11/29/19 Prj 24847 Made $c52 suDebStreamer const
//$c63 AWK 06/11/19 spr 1131662 added float version of createFromGLData
//$c62 JRK 04/29/19 Prj 24118: added slddbimpl dependency to mathgeom
//$c61 IBL 01/31/19 PRJ 24096 added mgXform_c::power(double)
//$c60 DGN 11/28/18 PRJ 24079: added initPerspective()
//$c59 IBL 10/02/18 Prj 24096 [Adding mgMv_c] Added mv(), sqrt() and interpolate().
//$c58 VIT 04/18/18 1074532; added mgXform_c::containsReflection()
//$c57 IBL 02/22/18 Prj 23259 Added an mg_ScaleXform() constructor for nonUniform scaling.
//$c56 IBL 02/20/18 Compile Fix for $c55.
//$c55 IBL 02/19/18 Prj 23259 SPR 1068448. Added fuller support for nonOrthonormal iRotation matrix.
//$c54 L11 11/14/17 Prj 23251 added mg_RotateAboutLine()
//$c53 R3V 09/09/16 pr 22482 - porting initial prototyping from the temporary stream.
//$c52 IBL 11/12/15 Added debug build mgXform_c suDebStream_c streamer
//$c51 YLU 07/08/09 added an arguement to snap tolerance for better numeric stability
//$c50  HLI 08/28/07 added a constructor and linearComponent()
//$c49  PRC 12/16/05 PRJ11212. Added mg_CoordinateXformLookAt
//$c48  CXR 09/16/05 SPR 282469 - Unable to open assembly because array of transforms are blitted during serialization, and are a different size in 64-bits.
//$c47  DSB 09/01/05 Made the equals and iIsPerspectiveEqual methods const, because they don't modify the xform.
//$c46  MK  10/14/04 spr 237218: providing a way to create a copy of transform with changed scale
//$c45  SJR 06/21/04 spr222913: developed and applied new getThreeAnglesNew() to solve degeneracies and multiple solutions
//$c44  ZLH 04/23/04 Bug number: 218361	fixed all xform data corruption
//$c43  BXY 12/03/03 PROJ 8863 added mgXform_c::setReflection()
//$c42  BXY 11/17/03 PROJ 8666 SPR 196173 added mgXform_c::isReflection() 
//$c41  SJR 10/16/03 added getThreeAngles
//$c40  JWP 04/11/03 SPR 168153: Added getNearestAxis()
//$c39  RKS 03/10/03 SPR 167110 : Added debug only iValidateRepairXForm() to repair such corruptions
//$c38  PTR 03/21/02 Proj 4519 Store bounding box and xform in XML stream
//$c37  RKK 11/02/01 SPR 114313 : added iValidateRepairRotationMatrix
//$c36	KXH	05/30/01 Project 4025: Added a method to get the OpenGL matrix as floats.
//$c35  JT  01/11/01 added friend ar>>mgXform_c
//$c34  SRK 03/10/00 SPR 86580 Provide wrappers for (su_)CArchive functions
//$c33    drd 06/24/00 Isolate swcc lib from other apps
//$c32	SRK/DRD 06/23/2000 IA64 Porting Tool, Update to use SWCC library, and derive all objects from su_CObject
//$c31  VIT	12/01/99 const declarations
//$c30  KDH 05/15/99 Bug number: 56956	added mg_PlaneToPlane
//$c29  AAR 05/06/99 #49983 - Added xDefined to mg_CoordinateXformXZ, yDefined to mg_CoordinateXformXY, zDefined to mg_CoordinateXformYZ to get the correct Xform
//$c28	PEL 04/22/99 readded samOrParallel()
//$c27	SJR 04/21/99 backed off $c26
//$c26	SJR 03/29/99 added sameOrParallel()
//$c25  VIT 06/12/98 introduced restoreAsIs() for parts created under bugs
//$c24  BCS 04/09/98 Added mg_CoordinateXformXY/XZ/YZS
//$c23  RBX 01/03/98 make dump const
//$c22  XPC 10/14/97 added forceIn2D to mg_PointVectorXform()
//$c21  EJS 09/29/97 added mg_PointAngleXform()
//$c20  PSB 05/08/97 Moved exposed include files to \am\sldworks\appcomm
//$c19  RBX 12/04/96 break out perspinfo in separate include file
//$c18  RBX 11/17/96 use getEyePoint and getPlaneDistance
//$c17  RBX 11/04/96 added perspective info
//$c16  EJS 09/13/96 Added suDynamicArray template
//$c15  RBX 09/13/96 getGLData and createFromGLData
//$c14  VIT 09/13/96 Added isIdentity()
//$c13  JPD 08/26/96 Added mg_RotateAtPoint with VIT
//$c12  VIT 08/21/96 a very old typo
//$c11  RPZ 10/26/95 got rid of unused reflect data/method on mgXform_c to avoid future bugs ; took unused args out of mg_RestoreXform
//$c10  VIT 09/27/95 Reflection stuff
//$c9   RPZ 09/06/95 made some methods inline ; added getXAxis & friends
//$c8   DSA 07/25/95 removed includes
//$c7   RPZ 07/15/95 added dump method
//$c6	CMC 05/18/95 Added mg_PointVecScaleXform
//$c5   LAL 05/15/95 added equals
//$c4	CMC 04/26/95 Added mg_PointVectorXform
//$c3   RPZ 02/11/95 Got rid of nested includes in sgSketch.h
//                   replaced precompiled header section with mopch.h
//                   changed all include directive to include the full 
//                   path from am on down.
//$c2   RPZ 02/04/95 Change restore to not allocate memory
//$c1   RPZ 01/10/95 moved from gcdll/geometry to create new mathgeom.dll
//========================================================================//
//              Copyright 1994 (Unpublished Material)                     //
//                  SolidWorks Corporation.                           //
//========================================================================//
//
//     File Name: xform.h
//     
//     
//     
//     Contents: class for simple 3d homegenious transforms
//
// See comments in xform.cpp
//
//========================================================================//
#ifndef XFORM_INCLUDED
#define XFORM_INCLUDED

#include <appcomm/matrix.h>
#include <appcomm/vector.h>
#include <appcomm/point.h>
#include <appcomm/swcc.h>
#include <sldDBImpl/msgpack11.hpp>

class mgPoint_c;
class mgUnitVector_c;
class mgVector_c;
class mgXform_c;
// class mgMatrix_c
class mgPlane_c;
class mgPerspInfo_c;
class mgPerspInfoBase_c;
class su_CArchive;	// for API CArchive wrapper, do not remove
class mgLine_c;
class mgMatrix5_c;

#define SCALING_ZOOMIN_LIMIT		(26000000000)


template <class mgXform_c> class suDynamicArray;

class MG_EXPORT mgXform_64BitHelper_c {
public:
	mgMatrix_c iRotation;
	mgVector_c iTranslation;
	double iScaling;
	BOOL iReflection;
	//int iFlags=0;
	long iPerspInfo;
};

// $c72 IBL: Note that mgXform_c is only polymorphic following $c75.
class MG_EXPORT mgXform_c
{
public:

// Constructors
	mgXform_c();					// creates the identity transformation
	mgXform_c(mgXform_c const &);	// copy constructor
	mgXform_c(mgXform_c &&);		// move constructor
	mgXform_c(mgUnitVector_c const &zDir, mgUnitVector_c const &xDir, mgVector_c const &start);
	explicit mgXform_c(mgMatrix4_c const &); // $c65
	explicit mgXform_c(mgMatrix5_c const &); // $c68

	mgXform_c const& operator=(const mgXform_c& t);	// copy	assignment
	mgXform_c & operator=( mgXform_c && t);	//	move assignment
	// Note that these take translation from the "bottom row" (glmat[3*4+i] ) and ignore the "right column" (glmat[4*i+3]) regardless of iPerspInfo
	static mgXform_c createFromGLData (const double glmat[16], BOOL forceRigid = TRUE);
	static mgXform_c createFromGLData(const float glmat[16], BOOL forceRigid = TRUE);

// Destructor
	// $c75 SPR 1178040 CID 185026 Making mgXform_c polymorphic. If backporting, you must also backport xfrom.cpp $c117 brittle strearmers fix
	//~mgXform_c();
	virtual ~mgXform_c();
	mgMv_c mv() const; 

	BOOL isIdentity() const;
	BOOL hasPerspective() const;
	//void initPerspective() { iPerspInfo = NULL; } // $c60
	void initPerspectiveUnwise() { iGenPtr = nullptr; } // $c68 DO NOT USE. Only caller is uiBodyComparisonDveDlg_c::addTreeForBody
	
	void addPerspectiveInfo(const mgPerspInfo_c& pinfo); // passes deep copy
	BOOL getPerspectiveInfo(mgPerspInfo_c* piOut) const;// deep copy
	//--- $c66
	void addPerspectiveInfoBase(mgPerspInfoBase_c * pinfo); // passes ownership
	BOOL getPerspectiveInfoBase(mgPerspInfoBase_c** piOut) const; // $c65 returns pointer
	//---
	void deletePerspectiveInfo();

// Data reading routines. These all handle a null transformation
// by treating it as the identity.
	const mgMatrix_c& affine() const;
	const mgVector_c& translation() const;
	double scaling() const;
	BOOL rotate() const;
	// Note that these return translation in the "bottom row" (glMatOut[3*4+i] ) and (0,0,0,1) in the "right column" (glMatOut[4*i+3]) regardless of iPerspInfo
	void getGLData (double glMatOut[16]) const;
	void getGLData (float glMatOut[16]) const;


	mgMatrix_c& affineW() { return iRotation; } // Write access to iRotation. Use with caution.

	// Return the inverse transformation (can be shear in the
	// given transformation, provided isNonUnitary() flag is set)
	mgXform_c inverse() const;

	mgXform_c stripPerspective() const; // $c87 Returns a copy with only iRotation,iTranslation,iScaling . No perspective. 

	mgXform_c power(double x) const; // return (*this) ^ x
	// Return xf where xf*xf = *this
	mgXform_c sqrt() const { return power(0.5); }

	
// Get the axis of the space (or inverse space) which this xform represents
	void getXAxis( mgUnitVector_c* axisOut ) const;
	void getYAxis( mgUnitVector_c* axisOut ) const;
	void getZAxis( mgUnitVector_c* axisOut ) const;
	void getIXAxis( mgUnitVector_c* axisOut ) const;
	void getIYAxis( mgUnitVector_c* axisOut ) const;
	void getIZAxis( mgUnitVector_c* axisOut ) const;

	int getNearestAxis(mgUnitVector_c& direction, BOOL& isReversed) const;

	BOOL containsReflection( BOOL in3D) const;		// 1074532
	BOOL isReflection() const { return (iFlags & XfmReflection) == XfmReflection; };
	void setReflection(BOOL bSet = TRUE)
	{
		iFlags &= ~XfmReflection;
		if (bSet) iFlags |= XfmReflection; // 1
	}

	// $c78: Direct read access to numeric data. Use with caution. 
	const double * affinePtr() const { return iRotation.iElem; }
	const double * translationPtr() const { return iTranslation.crds(); }
	
	void setAffine(const double * ptr)
	{
		for (UINT8 ii = 0; ii < 9; ++ii) iRotation.iElem[ii] = ptr[ii];
		iRotation.update();
	}
	void setTranslation(const double * ptr)
	{
		for (UINT8 ii = 0; ii < 3; ++ii) iTranslation[ii] = ptr[ii];
	}
	void setScaling(double d) { iScaling = d; }


	// IBL: Prj 23259. SPR 1068448 . Is the iRotation matrix non orthonormal?
	BOOL isNonUnitary() const { return (iFlags & XfmNonUnitary) == XfmNonUnitary; };
	void setNonUnitary(BOOL bSet=TRUE) // Flags that affine() is not a pure rotation matrix 
	{
		iFlags &= ~XfmNonUnitary;
		if (bSet) iFlags |= XfmNonUnitary; //2 
	}
#ifdef _DEBUG
	BOOL isDebHot() const { return (iFlags & XfmDebHot) == XfmDebHot; };
	void setDebHot(BOOL bSet = TRUE) // Flags that affine() is not a pure rotation matrix 
	{
		iFlags &= ~XfmDebHot;
		if (bSet) iFlags |= XfmDebHot; //256
	}
#else
	BOOL isDebHot() const { return FALSE; };
	void setDebHot(BOOL=TRUE) {} 
#endif
	
// $c72
	BOOL is2D(double tol = -1.0) const; // true iff transform preserves and ignores Z
	BOOL is3D() const { return !is4D() && !is5D(); }
//$c75 Making mgXform_c polymorphic
	//BOOL is4D() const; // mgGenXform_c returns TRUE, base mgXform_c returns FALSE. Ideally this would be a virtual function  but that breaks the brittle serialization.
	virtual BOOL is4D() const { return FALSE; }
// $c68
	BOOL is5D() const; // CID 184879 SPR 1177159 moved into .cpp file

	void setMat5(mgMatrix5_c * ptr) // assumes ownership
	{
		iSetPtr(ptr);
		iFlags &= ~XfmPtrUseMask;
		if(ptr) iFlags |= XfmIs5D;
	}
	mgMatrix5_c * getMat5() const
	{
		if(is5D())
			return reinterpret_cast<mgMatrix5_c *>(iGetGenPtr());
		return nullptr;
	}

	void setCoordinateXY(mgPoint_c const& originIn, mgUnitVector_c const& xAxisIn, mgUnitVector_c const& yAxisIn);
	void setCoordinateXZ(mgPoint_c const& originIn, mgUnitVector_c const& xAxisIn, mgUnitVector_c const& zAxisIn);

    mgXform_c linearComponent() const; //returns the transform without the translation

// Multiply two transformations.
	friend MG_EXPORT mgXform_c operator*( mgXform_c const &, mgXform_c const & );
	mgXform_c const &operator*=( mgXform_c const & );

// Creating a transform by setting all of the components of the transformation
  	friend MG_EXPORT mgXform_c mg_RestoreXform(
			mgMatrix_c const & rotation,
			mgVector_c const & translation, 
			double scaleFactor
		);

// Set transformation to translation along mgVector_c.
	friend MG_EXPORT mgXform_c mg_TranslateXform( mgVector_c const & );

// Set transformation to rotation by angle about mgVector_c.
	friend MG_EXPORT mgXform_c mg_RotateXform( double, mgVector_c const &, double snapTol = 0.0  );

// Set the rotation at point about vector by angle
	friend MG_EXPORT mgXform_c mg_RotateAtPoint( const mgPoint_c& fixedPnt, double ang, const mgVector_c& ax, double snapTol = 0.0  );

// Set the euler rotation at point about vector by angle
	friend MG_EXPORT mgXform_c mg_RotateAtPointEuler(const mgPoint_c& fixedPnt, const mgVector_c& eulerAngleVector, EulerAnglesMethod_e methodIn = EulerAnglesMethod_e::eam_Default );

// Set the rotation about line by angle
	friend MG_EXPORT mgXform_c mg_RotateAboutLine(mgLine_c const &axis, double angle);

// Set transformation to arg * identity.
	friend MG_EXPORT mgXform_c mg_ScaleXform( double );
// Set transformation to differential scaling. Note that such
// a transformation is not supported in the rest of Acis.
	friend MG_EXPORT mgXform_c mg_ScaleXform( double, double, double, BOOL unitDeterminent=FALSE);
// Set transformation to differential scaling unless all passed scales equal.. Note that such
// a transformation is not supported in the rest of Acis.
	friend MG_EXPORT mgXform_c mg_ScaleXform(double, double, double, const mgPoint_c & center);
	// Set scale of previous xform to the new value and return a new Xform
	friend MG_EXPORT mgXform_c mg_ScaleXform(const mgXform_c & xformIn, double newScale);

// Set reflections
	friend MG_EXPORT mgXform_c mg_XReflectionXform(  );
	friend MG_EXPORT mgXform_c mg_YReflectionXform(  );
	friend MG_EXPORT mgXform_c mg_ZReflectionXform(  );
		// the assumption is that the mirror plane contains the coord origin
	friend MG_EXPORT mgXform_c mg_ReflectionXform(mgUnitVector_c const & mirrowNormal  );
	friend MG_EXPORT mgXform_c mg_PlaneReflectionXform(mgPlane_c const & mirrowPlane  );

// Set transformation to carry origin to given mgPoint_c, and
// x and y axes to the given unit mgVector_cs.  If the second unit
// mgVector_c is not orthogonal to the first, uses instead a 
// unit mgVector_c in the plane of the two given mgVector_cs, that is.
	friend MG_EXPORT mgXform_c mg_CoordinateXform(
						mgPoint_c const &,
						mgUnitVector_c const &,
						mgUnitVector_c const & );

	friend MG_EXPORT mgXform_c mg_CoordinateXformXY(
						mgPoint_c const &,
						mgUnitVector_c const &,
						mgUnitVector_c const &,
						BOOL yDefined = FALSE		//AAR:#49983 - added yDefined
						);

	friend MG_EXPORT mgXform_c mg_CoordinateXformXZ(
						mgPoint_c const &,
						mgUnitVector_c const &,
						mgUnitVector_c const &,
						BOOL xDefined = FALSE		//AAR:#49983 - added xDefined
						);

	friend MG_EXPORT mgXform_c mg_CoordinateXformYZ(
						mgPoint_c const &,
						mgUnitVector_c const &,
						mgUnitVector_c const &,
						BOOL zDefined = FALSE		//AAR:#49983 - added zDefined
						);

	// mg_CoordinateXformLookAt returns a transform that will transform the origin onto lookAt and will provide a "nice" orientation where the user's head is pointing "up", as specified in the spec for project 9107
	friend MG_EXPORT mgXform_c mg_CoordinateXformLookAt(
						const mgPoint_c& lookAt,
						const mgUnitVector_c& viewDirection
						);

	friend MG_EXPORT mgXform_c mg_PointVectorXform(
						mgPoint_c const & startPoint,
						mgPoint_c const & targetPoint,
						mgUnitVector_c const & startVec,
						mgUnitVector_c const & targetVec, 
						BOOL forceIn2D = FALSE);

	friend MG_EXPORT mgXform_c mg_PointAngleXform(
						mgPoint_c const &startPoint, 
					   mgPoint_c const &targetPoint, 
					   double angle, 
					   mgVector_c const &axis);

	friend MG_EXPORT mgXform_c mg_PointVecScaleXform(
						mgPoint_c const & startPoint,
						mgPoint_c const & targetPoint,
						mgVector_c const & startVec,
						mgVector_c const & targetVec,
						double scale );
	friend MG_EXPORT mgXform_c mg_PlaneToPlane(mgPoint_c const &originStartPlane,
						mgVector_c const &normalStartPlane,
						mgPoint_c const &originEndPlane,
						mgVector_c const &normalEndPlane, bool bRobust = false);

	friend MG_EXPORT mgXform_c mg_fromThreeAnglesXform(double theta, double beta, double gamma, const mgPoint_c& pos, const mgXform_c* pComnp = nullptr, int algo =0);

	friend MG_EXPORT mgPoint_c operator*( mgPoint_c const &p, mgXform_c const &t );

	friend mgPoint_c const &mgPoint_c::operator*=( mgXform_c const &t );

	friend MG_EXPORT mgVector_c operator*( mgVector_c const &, mgXform_c const & );
    
    // These streamers are brittle DWORD dumps, different to the
    // the save and restore methods.	
	friend MG_EXPORT su_CArchive& operator>>(su_CArchive& ar, mgXform_c& p); // This routine is used by the mainwin side of su_loadArray<mgPoint_c*>()
	friend MG_EXPORT su_CArchive& operator<<(su_CArchive& ar, mgXform_c& p); // This routine is used by the mainwin side of su_saveArray<mgPoint_c*>()
	
	//	Compare 2 xforms
	BOOL equals( const mgXform_c& t , double tol = -1.0) const;
	

	// Preciseely interpolate between two mgXform_c.
	// The parameter can be < 0 or > 1, in which case the function extrapolates.
	friend MG_EXPORT mgXform_c interpolate(double,	mgXform_c const &, mgXform_c const &);

	// Archiving
	void save( su_CArchive& ar );
	void restore( su_CArchive& ar );
	// Use restoreAsIs only if you set a new MO_VERSION
	void restoreAsIs( su_CArchive& ar );

	// CArchive API wrapper
	void save( CArchive& ar );
	void restore( CArchive& ar );
	void restoreAsIs( CArchive& ar );

	//@{
	/// Serialize methods for writing to XML stream
	void saveStringRep( CString &strOut) const;
	BOOL restoreStringRep( CString &strIn, BOOL forceRigid = TRUE); // $c71
	//@}

	//@{
	/// Serialize methods for writing to database stream
	msgpack11::MsgPack to_msgpack();
	void from_msgpack(msgpack11::MsgPack& msgpack);
	//@}

	//compare view direction of two transforms and see if they are parallel (or antiparallel)
	BOOL sameOrParallel
		(
		mgXform_c *that	//the other transform
		);
	
	//RKK : repair routine
	BOOL iValidateRepairRotationMatrix();
	BOOL iValidateRepairXForm();
	
	bool getEulerAngles(mgVector_c& angleVectorOut, EulerAnglesMethod_e methodIn = eam_Default, mgPoint_c * pntOut=nullptr) const;
	void setEulerAngles(const mgVector_c& angleVectorIn, EulerAnglesMethod_e methodIn = eam_Default);

	matrixProperties_e getProperties() const;
	
#ifdef _DEBUG	
	void dump() const;
#endif

	//utility functions for rotation in three angle form
	BOOL getThreeAngles(double &a1, double &a2, double &a3, int algo=0, mgPoint_c* pntOut = nullptr) const;
	BOOL getThreeAnglesNew(double &a1, double &a2, double &a3, int algo=0, mgPoint_c* pntOut = nullptr) const;	//added 6/21/04 -sjr
	
	//$c73 Do not use. only public for use in serialization
	void setFlags(int fl) { iFlags = fl; } 
	int getFlags() const { return iFlags; }

	// $c87 adds (not currently used)
	mgVector_c applyInverse(const mgVector_c&) const;
	mgUnitVector_c applyInverseUnit(const mgUnitVector_c&) const;
	mgPoint_c applyInversePoint(const mgPoint_c&) const;

protected:
	void iSet(const mgXform_c &);
private:
	void iCopyPerspectiveInfo (const mgXform_c& xf);
	BOOL iIsPerspectiveEqual( const mgXform_c& t ) const;

private:

	enum XfmFlags { XfmNoneSet = 0x0, 
		XfmReflection = 0x1, 
		XfmSerialiseMask = 0xFE, // pre $c68 iFlags was serialised as a 0 char (so losing low Reflection bit) and we will retain that behaviour
		XfmNonUnitary = 0x2,
		XfmPtrUseMask = 0xF0, // if all these bits are zero we don't serialise iGenPtr (so losing perspective info)
		XfmPtrNonPrspUseMask = 0xC0,	// allows for rapid hasPerspective()
		XfmIsPerspBase = 0x10,	XfmIsPerspInfo= 0x20, XfmIsModelPerspInfo=0x30,
		XfmIs5D = 0x40,
		XfmDebHot = 0x100  // lost on serialisation since iFlags is serialised as unsigned char
		};

	// Because of the way mgXform_c is serialised (as a DWORD dump!) by the << streamers adding new data members is highly perilous 
	mgMatrix_c iRotation;
	mgVector_c iTranslation;
	double iScaling = 1.0; // $c65
	//BOOL iReflection;
	int iFlags = XfmNoneSet; // serialised as a char by save/restore and as DWORD by streamers
	//mgPerspInfoBase_c* iPerspInfo = nullptr; // $c65
	void* iGenPtr = nullptr; // $c67 initialised here so no need to in constructors
	
	friend class mgVector_c;
	friend class mgMatrix4_c;
private: 
	void* iGetGenPtr() const
	{
		return iGenPtr; 
	}
	void iSetGenPtr(void* ptr) // Does not free existing value
	{
		iGenPtr = ptr;
	}

public:
	void SetHelper(const mgXform_64BitHelper_c& oth); // $c67 Moved into .cpp
	mgXform_64BitHelper_c GetHelper(); // Moved into .cpp to add SU_ASSERT()

	void GetHelper(mgXform_64BitHelper_c& oth)
	{
		oth=GetHelper();
	}

	// $c68	Replacing iPerspInfo with iGenPtr
	bool iHasPtr() const { return iGenPtr != nullptr; }
	void iClearPtr(); // deletes whatever iGenPtr is
	void iSetPtr(void * ptr)
	{
		if (ptr != iGenPtr)
		{
			iClearPtr();
			iSetGenPtr(ptr);
		}
	}
	void iSavePtr(su_CArchive&) const;
	void iRestorePtr(su_CArchive&);

	mgPerspInfoBase_c * iPerspInfoBase() const; // { return iGenPtr ? reinterpret_cast<mgPerspInfoBase_c *>(iGenPtr) : nullptr; }
	mgPerspInfo_c * iPerspInfo() const; // { return dynamic_cast<mgPerspInfo_c *>(iPerspInfoBase()); }
	mgMatrix5_c * iMat5() const
	{
		return reinterpret_cast<mgMatrix5_c *>(iGetGenPtr()); 
	}
	void iCheckNot5D() const;
	void iMake5D();

	/*
	BOOL shear() const;


	// Set transformation to differential scaling. Note that such
	// a transformation is not supported in the rest of Acis.
	friend MG_EXPORT mgXform_c mg_ScaleXform( double, double, double );


	// Set transformation to reflection about plane through
	// origin and perpendicular to given mgVector_c.
	friend MG_EXPORT mgXform_c mg_ReflectXform( mgVector_c const & );

	// Compare two transformations. This does not allow any tolerance,
	// so is not a general equality operator, but may be assumed to
	// return TRUE if one argument is a copy of the other.
	BOOL operator==(
						mgXform_c const &
					) const;

	BOOL operator!=(
						mgXform_c const &rhs
					) const;

	// Floating point equals.  Uses resabs to determine if same matrix
	
	// Transform a mgVector_c, ignoring the translation part of the
	// transformation.

	friend MG_EXPORT mgVector_c operator*( mgVector_c const &, mgXform_c const & );


	// Transform a unit mgVector_c.  Ignores the translation and 
	// scaling parts, but complains if there is a shear

	friend MG_EXPORT mgUnitVector_c operator*( mgUnitVector_c const &,
									mgXform_c const & );

	// Transform a mgPoint_c.  Uses the complete 4x3 transformation.

	friend MG_EXPORT mgPoint_c operator*( mgPoint_c const &, mgXform_c const & );



	friend class mgVector_c;
	friend class mgUnitVector_c;
	friend class mgPoint_c;
	friend class mgMatrix_c;

	public:
// The following methods should only be used in emergency situations!!!
		operator const transf& ();
		const transf& rep() const 
			{ return *_rep; 
				}
*/

}; // endclass mgXform_c

//=========================================================
//	Definition of INLINE (data reading) member functions
//=========================================================
inline	double mgXform_c::scaling() const 
{ 
	return iScaling; 
}

inline	void mgXform_c::getXAxis( mgUnitVector_c* axisOut ) const
{
	iRotation.getXAxis( axisOut );
}
inline	void mgXform_c::getYAxis( mgUnitVector_c* axisOut ) const
{
	iRotation.getYAxis( axisOut );
}
inline	void mgXform_c::getZAxis( mgUnitVector_c* axisOut ) const
{
	iRotation.getZAxis( axisOut );
}
inline	void mgXform_c::getIXAxis( mgUnitVector_c* axisOut ) const
{
	iRotation.getIXAxis( axisOut );
}
inline	void mgXform_c::getIYAxis( mgUnitVector_c* axisOut ) const
{
	iRotation.getIYAxis( axisOut );
}
inline	void mgXform_c::getIZAxis( mgUnitVector_c* axisOut ) const
{
	iRotation.getIZAxis( axisOut );
}

inline BOOL mgXform_c::hasPerspective() const 
{ 
	return (iGenPtr != nullptr) && ((iFlags & XfmPtrNonPrspUseMask) == 0);
}

inline const mgMatrix_c& mgXform_c::affine() const 
{ 
	return iRotation;
	/*
	if ( !( iRotation.isIdentity() ) )
		return mgMatrix_c( iRotation );
	else
		return mgMatrix_c(); // identity
	*/ 
}

inline const mgVector_c& mgXform_c::translation() const 
{ 
	return iTranslation;
	/*
	if ( iTranslation.isNotNull() )
		return mgVector_c( iTranslation );
	else
		return mgVector_c( 0.0, 0.0, 0.0 );
	*/ 
}



#ifdef _HTML_DEBUG
class suDebStream_c;
MG_EXPORT suDebStream_c & operator<<(suDebStream_c & s, const mgXform_c &);
#endif



#endif
