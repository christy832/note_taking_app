//$c74 SGY1 01/04/23 IR 1004517: Adding mg_mergeAdjacentCoincidentPoints().
//$c73 IBL 09/29/22 Prj 25934 FUN 129311 Added mgFittable_c. Moved ConvexHull_c<> into new header file
//$c72 IBL 04/28/20 SPR 1178950 Passing mgXform_c by const reference rather than value
//$c71 IBL 10/02/18 Prj 24096 [Adding mgMv_c] removed unused mgSolveQuadratic()
//$c70 KPL 01/05/18 Prj 23427: Added mg_pointSortAndRemoveDup() to sort and remove duplicate points from points array.
//$c69 R3V 03/25/16 pr 19837 - in progress.. adaptive compact mesh region discovery.
//$c68 VIT 03/25/16 942855 caused by fix to 939210; for re-fix, added mg_LineXLine() , an improved version of mg_LineIntLine()
//$c67 R3V 12/08/15 pr 21452 - Added template convex hull class.
//$c66 V89 06/18/15 SPR 889075:: Passing angle tolerance as parameter to the function minCnvxPlgRect.
//$c65 VIT 02/06/15 added fastSumOfDegrees()
//$c64 R3V 01/20/15 pr 20954 - removed obsolete test code.
//$c63 VRZ 11/20/14 proj 20954 add blas_test(), pardiso_test(), sgemm_test()
//$c62  VIT 04/17/13 698054; modified i/f of mg_frontOfCVSpline()/mg_backOfCVSpline()
//$c61 VIT 03/22/13 some cleanup
//$c60 RDM 02/08/13 PRJ 14657 added support for lasso selection.
//$c59 VIT 11/29/12 prj18134; modified math utilities for C3 smooth touch
//$c58 VIT 11/07/12 prj18134; adding math utilities for C3 smooth touch
//$c57 VIT 11/07/12 prj18134; added mg_changeCVcount() - another CV related math utility
//$c56 NAK 10/30/12 Attempted Compile fix
//$c55 VIT 10/29/12 prj18134; added mg_getDerivatives0() and 3 more CV related math utilities
//$c54 VRZ 09/25/12 added mg_LineIntLineClosePt
//$c53  TF 08/12/10 Added  minCnvxPlgRect();
//$c52  TF 08/05/10 Added class mg2DPoint_c;
//$c51  TF 08/05/10 Added convexHull( ) 
//$c50 OZ  02/20/07 on behalf of DPS: better hittest for TGOArrow
//$c49  DSB 03/20/05 Added mg_getModelSpaceViewRay to aid perspective-correct interactions.
//$c48  PYK 10/04/04 Proj 9642 - corrected hatch area display in plane of 3d datum target
//$c47  PYK 09/29/04 Proj 942 - 3D Datum Target support
//$c46	VIT	10/22/03 added mg_RayIntLineSeg()
//$c45	VIT	10/22/03 added mg_LineSegIntLineSeg2D()
//$c44	JRK	11/25/02 added optional tolerance to line/line checks (note: default is gcLengthTolerance)
//$c43  VIT 11/08/02 added mg_OpenTSP(), to accompany mg_ClosedTSP()
//$c42  VIT 10/21/02 prj6699; added mg_ClosedTSP()
//$c41  LVS 08/21/02 Added mgUnitVectorDer().
//$c40	SRJ 07/18/02 added flag mergeIfInLine in mg_MergeLines2D()145499
//$c39  ARM 04/05/01 Added mg_LineIntLineSeg()
//$c38  PTR 11/11/00 Proj 3225 Moved KDH's pointSelectionSort from asmui to mathgeom
//$c37  BAH 01/28/00 Added mg_PointOnLine2D() (68571)
//$c36	DKC 01/17/00 Removed #include <engines/gcdll/engine/engconst.h>, this include file is not available to outside users.
//                   It was included to get the gcLengthTolerance constant, which I replaced with 0.00000001, at VITs suggestion. (SPR 71154)
//$c35  VIT	12/01/99 const declarations
//$c34  JNW	11/01/1999 Added mg_transposeTwoDIntegerArray() and mg_transposeRealTwoDArray().
//$c33  YSS 08/10/99 added mg_LineSegIntLineSeg(), mg_LineSegIntPlane() functions. Added pdParOut argument to mg_LineIntPlane()
//$c32  VIT 04/12/99 Added mg_getAngleFromVectors()
//$c31  BAH 04/10/99 Added mg_ClipLineEndToRotated2DBox()
//$c30  DMH 03/02/99 Intersection between two circles
//$c29	SJR 11/16/98 added mg_fixPolarConvolution and mg_cleanupPolarEdge
//$c28  BAH 12/23/97 Added mg_MergeLines2D()
//$c27  BAH 11/10/97 Added mg_calcHatchLinesRect2D(), mg_hatchCenteredAxialRect2D()
//$c26  PSB 05/08/97 Moved exposed include files to \am\sldworks\appcomm
//$c25	SHB	04/29/97 Added mg_IsPolylineLine() (with VIT)
//$c24  HWL 04/04/97 Added mg_PutParamInRange()
//$c23  VIT 02/27/97 Added mg_GoodEqu3() for principal axes of inertia
//$c22  SMB 02/23/97 Change mg_Find3PointArcCenter2D() to mg_Find3PointArcCenter().
//$c21	SHB 08/13/96 Added mg_Line2DIntersectBox() 
//$c20  JPD 02/08/96 Added arg extraScaling to mg_FindBBox
//$c19  BAH 01/10/96 Added default tolerance to mg_IsPolylineArc()
//$c18  BAH 01/08/96 Added mg_IsPolylineArc()
//$c17  BAH 01/06/96 Added mg_LineIntLine2D()
//$c16  HWL 12/11/95 Added mg_Find3PointArcCenter2D();
//$c15  BAH 11/25/95 Added mg_Clip2DArcToBox()
//$c14  DJC 10/14/95 Added mg_LineIntCircle2D(), enum mgLineCircleIntType_e.
//$c13  HWL 10/14/95 added normalFrom3Points()
//$c12  BAH 08/12/95 Changed mg_Clip2DLineToWindow() to use integers
//$c11  DSA 07/25/95 removed includes
//$c10  DJC 07/24/95 Added mg_FindTangentArcCenter2D.
//$c9   HWL 05/16/95 Added putAngleInRange
//$c8   DJC 04/18/95 Add function to mirror point.
//$c7   LAL 03/25/95 mg_Clip2DLineToWindow()
//$c6   CPD 03/03/95 Line-Plane and Plane-Plane intersectors
//$c5   DJC 02/08/95 Added mgNO_POINT case to mgIntersectionType_c
//$c4   BAH 01/28/95 Added mg_ClipLine2DToBox and mg_Line2DToBoxIntersect
//$c3   RPZ 01/10/95 added to new mathgeom.dll
//$c2   BAH 12/23/94 Change CPoint in mg_ZoomToPosition to mgPoint_c
//$c1   BAH 12/02/94 Added mg_ZoomToPosition
//========================================================================//
//Copyright 1994 (Unpublished Material) SolidWorks Corporation.   .   //
//========================================================================//
//
//     File Name: mathgeom.h
//     
//     
//     
//     Contents: declarations for math utilities
//
//========================================================================//
#ifndef MATHGEOM_INCLUDED
#define MATHGEOM_INCLUDED
#include <vector>

class mgXform_c;
class mgVector_c;
class mgUnitVector_c;
class mgMKLVector_c;
class mgPoint_c;
class mgSphere_c;
class mgLine_c;
class mgPlane_c;

class CPoint;
class CRect;
class mg2DPoint_c;

template <class mgPoint_c> class suDynamicArray;

//===================================================
// Macros 
//====================================================
//----
// Math Helpers
//----
#define MG_MIN(A, B) ((A) < (B) ? (A) : (B))
#define MG_MAX(A, B) ((A) > (B) ? (A) : (B))
// It would be nice to remove, or at leat rename, these
#define MG_SIGNUM(A) ((A) < 0.0) ? -1 : (((A) > 0.0) ? 1 : 0)
#define MG_DIST(A, B) sqrt((B.u()-A.u())*(B.u()-A.u()) + (B.v()-A.v())*(B.v()-A.v()))

//===================================================
// Utility functions and enums
// ===============================================
//----
// Find the model space ray through a screen or model space point.
//----
void MG_EXPORT mg_getModelSpaceViewRay(const mgXform_c &viewXformIn, const mgPoint_c &pointIn, BOOL isScreenPtIn,
									   mgPoint_c &pointOut, mgUnitVector_c &dirOut, BOOL &needClippingOut,
									   mgXform_c *invXformOut = NULL);

void MG_EXPORT mg_transposeTwoDIntegerArray(int numColumns, int numRows, int* integerArray);

void MG_EXPORT mg_transposeRealTwoDArray(int numColumns, int numRows, double* realArray);

mgXform_c MG_EXPORT mg_ZoomBoxToBox( 
		const CPoint& screenUpperLeftIn, 
		const CPoint& screenLowerRightIn, 
		const mgPoint_c& upperLeft, 
		const mgPoint_c& lowerRight,
		const mgXform_c& rotationXform,
		double scaleFactor );

mgXform_c MG_EXPORT mg_ZoomToPosition( 
		const mgPoint_c& screenPosition, 
		const mgPoint_c& upperLeft, 
		const mgPoint_c& lowerRight,
		const mgXform_c& rotXform,
		double scaleFactor );

void MG_EXPORT mg_FindBBox(mgPoint_c low, mgPoint_c high, const mgXform_c & xform, double bbox[4], double extraScaling = 1.0); // CID 185038

BOOL MG_EXPORT convexHull(suDynamicArray<mg2DPoint_c>& uvPntArray, suDynamicArray<mg2DPoint_c>& convexPntArray);

BOOL MG_EXPORT minCnvxPlgRect(mg2DPoint_c* uvPntArray, int nPnts, double uvAB[2], double uvAD[2], double uvCB[2], double uvCD[2], double angleTolerance = -1);
//----
// Find if a 2D polyline approximates an arc/circle.
//----
BOOL MG_EXPORT mg_IsPolylineArc(int pointCount, mgPoint_c* pointArr, mgPoint_c& arcCenter, 
								mgPoint_c& arcStart, mgPoint_c& arcEnd,
								mgUnitVector_c& arcNormal, double tolerance = -1.0);
BOOL MG_EXPORT mg_IsPolylineLine(int pointCount, mgPoint_c* pointArr, 
								 mgPoint_c& lineStart, mgPoint_c& lineEnd);

// Merge adjacent coincident points from an array (vector) of points.
// Input and output parameter:
//		pointsInOut : Vector of points (of class mgPoint_c).
// Optional input parameter:
//		tolerance		: Geometry tolerance with -1.0 as default value.
//									If the input value is less than zero, then gcLengthTolerance will be used as tolerance.
// Notes: 
//	1. It checks only adjacent points for coincidence.
//	2. The implementation checks the three coordinate values (not the distance) to determine coincidence.
//	3. The end points are preserved unless all points are collapsed to a single point, in which case the 
//		 first point is preserved.
void MG_EXPORT mg_mergeAdjacentCoincidentPoints(std::vector<mgPoint_c>& pointsInOut, double tolerance = -1.0);

//----
//  Find intersection between two lines
//----
enum mgIntersectionType_e { mgCOINCIDENT, mgPARALLEL, mgONE_POINT, mgMULTI_POINT, 
							mgNO_POINT};

mgIntersectionType_e MG_EXPORT mg_LineIntLine2D( const mgPoint_c& point1, const mgVector_c& dir1,
                                                 const mgPoint_c& point2, const mgVector_c& dir2,
                                                 mgPoint_c* pointOut, double tol = .00000001 );

mgIntersectionType_e MG_EXPORT mg_LineIntLine( const mgPoint_c& pointOnLineOneIn,
                                               const mgVector_c& directionOfLineOneIn,
                                               const mgPoint_c& pointOnLineTwoIn,
                                               const mgVector_c& directionOfLineTwoIn,
                                               mgPoint_c* pointOut, double tol = .00000001 );

mgIntersectionType_e MG_EXPORT mg_LineXLine( const mgPoint_c& pointOnLineOneIn,		// 942855
                                               const mgVector_c& directionOfLineOneIn,
                                               const mgPoint_c& pointOnLineTwoIn,
                                               const mgVector_c& directionOfLineTwoIn,
                                               mgPoint_c* pointOut, double tol = .00000001 );

mgIntersectionType_e MG_EXPORT mg_LineIntLineClosePt( const mgPoint_c& pointOnLineOneIn,
                                               const mgVector_c& directionOfLineOneIn,
                                               const mgPoint_c& pointOnLineTwoIn,
                                               const mgVector_c& directionOfLineTwoIn,
                                               mgPoint_c* pointOut, mgPoint_c* point1Out, double tol = .00000001 );

mgIntersectionType_e MG_EXPORT mg_LineSegIntLineSeg( const mgPoint_c& zPt1Start, const mgPoint_c& zPt1End,
                                                     const mgPoint_c& zPt2Start, const mgPoint_c& zPt2End,
                                                     mgPoint_c& zPtXOut, double tol = .00000001 );

mgIntersectionType_e MG_EXPORT mg_LineSegIntLineSeg2D( const mgPoint_c& s1, const mgPoint_c& e1,
				const mgPoint_c& s2, const mgPoint_c& e2, mgPoint_c* pntOut );

mgIntersectionType_e MG_EXPORT mg_LineIntLineSeg( const mgLine_c& lineIn,
                                                  const mgPoint_c& segStart, const mgPoint_c& segEnd,
                                                  mgPoint_c* pointOut, double tol = .00000001 );

// selection ray intersection tools
//
mgIntersectionType_e MG_EXPORT mg_RayIntLineSeg(const mgLine_c& lineIn,
                                                const mgPoint_c& segStart,
												const mgPoint_c& segEnd,
                                                mgPoint_c* pointOut,
												double tol = .00000001 );

mgIntersectionType_e MG_EXPORT mg_RayIntPlane(	const mgXform_c* planeXform,
												const mgPoint_c* rayPoint, 
												const mgUnitVector_c* rayVec,
												mgPoint_c* pointOut);

mgIntersectionType_e MG_EXPORT mg_RayIntCylSeg(	const mgLine_c& rayIn,
												const mgPoint_c& cylStartIn,
												const mgUnitVector_c& cylDirIn,
												const double cylLengthIn,
												const double cylRadiusIn,
												mgPoint_c* pointOut);

mgIntersectionType_e MG_EXPORT mg_RayIntConeSeg(const mgLine_c& rayIn,
												const mgPoint_c& coneTipIn,
												const mgUnitVector_c& coneAxisIn,
												const double coneAngleIn,
												const double coneDistToMinorRadIn,
												const double coneDistToMajorRadIn,
												mgPoint_c* pointOut);

mgIntersectionType_e MG_EXPORT mg_RayIntDiskSeg(const mgXform_c* planeXform,
												const mgPoint_c* rayPoint, 
												const mgUnitVector_c* rayVec,
												const double diskRadiusIn,
												const double diskStartRadian,	// options are 0 to 2pi
												const double diskEndRadian,		// must be greater than start radian by tol to 2pi
												mgPoint_c* pointOut);			// radians start on X axis positive side and go CCW

mgIntersectionType_e MG_EXPORT mg_RayIntSphere(	const mgPoint_c* rayPoint, 
												const mgUnitVector_c* rayVec,
												const mgPoint_c* sphereCenterIn,
												const double sphereRadiusIn);

// in 2D, the routine assumes that the normal is (0,0,1 ) nad might
// return a negative result
double MG_EXPORT mg_getAngleFromVectors( const mgVector_c& dir1, const mgVector_c& dir2,
									double angTol = 0.00000001 ,
									BOOL force3D = FALSE );


//----
//  Find intersection between line and circle
//----
enum mgLineCircleIntType_e { mgTANGENT, mgBISECT, mgCHORD, mgNONE };

// mgTANGENT - line intersects circle at tangent, returns tangent point in intPt1Out, ignore intPt2Out
// mgBISECT  - line bisects circle, returns both intpoints
// mgCHORD   - line intersects circle - not tangent or bisect, returns both intpoints
// mgNONE    - line does not intersect circle; ignore intPt1Out and intPt2Out
mgLineCircleIntType_e MG_EXPORT mg_LineIntCircle2D(
												const mgPoint_c& linePtIn,
												const mgUnitVector_c& lineDirIn,
												const mgPoint_c& center,
			 									const double& radius,
												mgPoint_c* intPt1Out,
												mgPoint_c* intPt2Out
											);

// Find the intersection between two circles
//
// Possible return values are:
//		mgNO_POINT	-	No intersection
//		mgCOINCIDENT -	Centers coincide
//		mgONE_POINT -	One point of intersection
//		mgMULTI_POINT -	Two points of intersection
//
mgIntersectionType_e MG_EXPORT mg_CircleIntCircle2D(
												const mgPoint_c& center1,
												const double& radius1,
												const mgPoint_c& center2,
			 									const double& radius2,
												mgPoint_c* intPt1Out,
												mgPoint_c* intPt2Out
											);
											
BOOL MG_EXPORT mg_FindTangentArcCenter2D ( const mgPoint_c& startpIn, const mgUnitVector_c& sdirIn,
	const mgPoint_c& endpIn, mgPoint_c* centerOut, int *directionOut);

BOOL MG_EXPORT mg_Find3PointArcCenter ( const mgPoint_c pts[3], mgPoint_c* centerOut, mgUnitVector_c* normalOut);

mgPoint_c MG_EXPORT mg_MirrorPoint(
								const mgPoint_c& axisPoint,
								const mgVector_c& axisDir,
								const mgPoint_c& pointToMirror
							  );

mgVector_c MG_EXPORT mgUnitVectorDer(mgVector_c const &vect, mgVector_c const &der);


//----
//  Find intersection between two planes
//----

enum mgPlnPlnIntersectionType_e { mgPLANE_PLANE_COINCIDENT,
													mgPLANE_PLANE_PARALLEL,
													mgPLANE_PLANE_LINE,
													mgPLANE_PLANE_FAILED };

mgPlnPlnIntersectionType_e MG_EXPORT mg_PlaneIntPlane
											(
												const mgPlane_c& planeOneIn,
												const mgPlane_c& planeTwoIn,
												mgLine_c* lineOut
											);

//----
//  Find intersection between line and plane
//----
enum mgLinePlaneIntersectionType_e { mgLINE_PLANE_LINE,
													mgLINE_PLANE_NO_POINT,
													mgLINE_PLANE_POINT,
													mgLINE_PLANE_FAILED };

mgLinePlaneIntersectionType_e MG_EXPORT mg_LineIntPlane
											(
												const mgLine_c& lineIn,
												const mgPlane_c& planeIn,
												mgPoint_c* pointOut,
												double* pdParOut = NULL
											);

mgLinePlaneIntersectionType_e MG_EXPORT mg_LineSegIntPlane
											(
												const mgPoint_c& zPtStartIn,
												const mgPoint_c& zPtEndIn,
												const mgPlane_c& zPlaneIn,
												mgPoint_c* pPointOut,
												double* pdParOut = NULL
											);

//------
// Clip a line to a box in 2D -- the resulting line lies outside of the rectangle
//------
enum mg_ClipType { mgNOCLIP, mgCLIPSTART, mgCLIPEND, mgCLIPBOTH };

mg_ClipType MG_EXPORT mg_ClipLine2DToBox(mgPoint_c& lineStart, mgPoint_c& lineEnd,
										 mgPoint_c& boxul, mgPoint_c& boxlr);

BOOL MG_EXPORT mg_Line2DToBoxIntersect(mgPoint_c lineStart, mgPoint_c lineEnd,
									   mgPoint_c boxul, mgPoint_c boxlr);

mg_ClipType MG_EXPORT mg_Clip2DArcToBox(mgPoint_c& startP, mgPoint_c& endP, const mgPoint_c& centerP,
										const mgPoint_c& boxul, const mgPoint_c& boxlr);

//Clip a line to a rectangle -- the resulting line lies within the rectangle
enum mg_ClipStatus { mgACCEPT, mgREJECT };
mg_ClipStatus MG_EXPORT mg_Clip2DLineToWindow(CPoint& lineStart, CPoint& lineEnd,
							 				  CPoint& upperLeft, CPoint& lowerRight);

// Put two angles in range such that start angle is within 0 to 2PI and end angle
// is greater that start angle and within 0 to 4PI.	 You can pass in just the
// start angle and it will only bring the startAngle into range.
void MG_EXPORT mg_PutAngleInRange (double* startAngle, double* endAngle = NULL);
void MG_EXPORT mg_PutParamInRange (double* startAngle, double range, double* endAngle = NULL);

// find a normal from 3 points which can be used to define a plane
BOOL MG_EXPORT mg_NormalFrom3Points (const mgPoint_c& p1, const mgPoint_c& p2, const mgPoint_c& p3,
                                     mgUnitVector_c* normalOut);

BOOL MG_EXPORT mg_Point2DInsideBox(mgPoint_c pt, mgPoint_c boxul, mgPoint_c boxlr);

BOOL MG_EXPORT mg_Line2DInsideBox(mgPoint_c lineStart, mgPoint_c lineEnd,
						mgPoint_c boxul, mgPoint_c boxlr);

BOOL MG_EXPORT mg_Line2DOutsideBox(mgPoint_c lineStart, mgPoint_c lineEnd,
						mgPoint_c boxul, mgPoint_c boxlr);

mg_ClipType MG_EXPORT mg_ClipLineEndToRotated2DBox(mgPoint_c& start, mgPoint_c&end,
												   mgPoint_c& uLeft, mgPoint_c& lLeft,
											       mgPoint_c& uRight, mgPoint_c& lRight);

// Returns the number of intersecting points (0, 1 or 2)
int MG_EXPORT mg_Line2DIntersectBox(mgPoint_c lineStart, mgPoint_c lineEnd,
						  mgPoint_c boxul, mgPoint_c boxlr,
						  mgPoint_c* pts);

enum mg_GoodEqu3Status { mgALL_UNIQ, mgALL_SAME, mgUNIQ_GREATER, mgUNIQ_SMALLER, mgWRONG_DATA };
// this method solves specific 3rd degree equations
//		x^3 - s1*x^2 + s2*x^ - s3 = 0;
//
// whose input coeffs s1,s2,s3 must be positive and whose roots are guaranteed
// to be all  positive and where the precision is being taken relative to s1
mg_GoodEqu3Status MG_EXPORT mg_GoodEqu3(double s1, double s2, double s3, double rootsOut[3]);


// 2D Hatching functions (circle/rectangle)
MG_EXPORT BOOL mg_calcHatchLinesCircle2D(const mgPoint_c& center, double radius,
									     double angle, double spacing, suDynamicArray<mgPoint_c>&  pointsOut, mgXform_c* s3dXform = NULL, BOOL is3d = FALSE);

MG_EXPORT BOOL mg_calcHatchLinesRect2D(const mgPoint_c& center, double width, double height,
				 					   double angle, double spacing, suDynamicArray<mgPoint_c>& pointsOut, mgXform_c* s3dXform = NULL, mgXform_c* screenXform = NULL, BOOL is3d = FALSE);

// Merge two collinear lines into one in 2D
MG_EXPORT BOOL mg_MergeLines2D(const mgPoint_c& pt1, const mgPoint_c& pt2,
							   const mgPoint_c& pt3, const mgPoint_c& pt4,
							   mgPoint_c& pt1Out, mgPoint_c& pt2Out, BOOL mergeIfInLine = FALSE);

MG_EXPORT BOOL mg_IsPointInPoly(const CPoint& scrPnt, const CArray<CPoint, CPoint&>& pointArray);
MG_EXPORT bool mg_IsPointInPoly(const mgPoint_c& scrPnt, const std::vector<mgPoint_c>& pointArray);

MG_EXPORT BOOL mg_cleanupPolarEdge
(
 double *cpts,		//the control point doubles
 int start,			//start index in control point array
 int stride,		//number of doubles to next control point on the edge
 int count,			//number of control points
 double zero		//discrimination tolerance
 );

MG_EXPORT BOOL mg_fixPolarConvolution
(
 double *cpts,		//the control points
 int nU,			//number of u control pts 
 int nV,			//number of v control pts 
 int dim,			//the dimension of the surface (3=polynomial, 4=rational)
 double zero		//discrimination tolerance
 );

// Tool to solve a*x*x + b*x + c = 0.0. If discriminant < 0.0 the solutions have no meaning.
// If discriminant > 0.0 and the two solutions are identical, the equation is linear (aCoeff = 0.0).
//MG_EXPORT void mgSolveQuadratic(double aCoeff, double bCoeff, double cCoeff, double* discriminantAddr,
//								double* lesserSolutionAddr = nullptr, double* greaterSolutionAddr = nullptr
//								);


MG_EXPORT BOOL mg_PointOnLine2D(mgPoint_c& start, mgPoint_c& end, mgPoint_c& pointIn, const double toleranceIn);


// KDH point sorting
MG_EXPORT void mg_pointSelectionSort( mgPoint_c* pointArray, int start, int end );
MG_EXPORT void mg_pointQuickSort( mgPoint_c* pointArray, int start, int end );

MG_EXPORT void mg_pointSortAndRemoveDup(std::vector<mgPoint_c>& pntsInVect, std::vector<mgPoint_c>& pntsOutVect);

// some solution of the Closed Traveling Salesman Problem is needed for
// styled curves with gaps ( prj6699 ).  The solution offered by this
// utility in case of 2D should not be bad.
MG_EXPORT void mg_ClosedTSP ( suDynamicArray<mgPoint_c>& pnts, suDynamicArray<int>& indicesOut, BOOL in2D = FALSE);	// though TRUE is the most expected case
// some solution of the Open Traveling Salesman Problem to accompany mg_ClosedTSP
MG_EXPORT void mg_OpenTSP ( suDynamicArray<mgPoint_c>& pnts, suDynamicArray<int>& indicesOut);

// A fast method of computing the sum 1 + 2^k + ... + n^k
MG_EXPORT double fastSumOfDegrees( int n, int k ); 

typedef std::vector<mgVector_c> mg_vecvec;
MG_EXPORT BOOL mg_getDerivatives0( mg_vecvec & cv, mg_vecvec& dOut);
MG_EXPORT BOOL mg_frontOfCVSpline( mg_vecvec & origCV, mg_vecvec & newCVout, double a, mgVector_c* drv = NULL );	// 698054
MG_EXPORT BOOL mg_backOfCVSpline( mg_vecvec & origCV, mg_vecvec & newCVout, double a, mgVector_c* drv = NULL );		// 698054
MG_EXPORT BOOL mg_changeCVcount( mg_vecvec & origCV, int cntIn, mg_vecvec & newCVout );

MG_EXPORT BOOL mg_convertDerivesToNatural( mg_vecvec& origD, mg_vecvec& natDout );
#define DEFAULT_DEGREE	7
typedef std::pair<mgVector_c, BOOL> mg_vecBool;
MG_EXPORT mg_vecBool mg_findC2root( mg_vecvec & cv, mg_vecvec& natD, int degree = DEFAULT_DEGREE );
MG_EXPORT mg_vecBool mg_findC3root( mg_vecvec & cv, mg_vecvec& natD, int degree = DEFAULT_DEGREE );

//==============================


//===================================================
// Class defines
//==================================================


// ------------------------------------

// ConvexHull_c templated class moved into mgConvexHull.h
//==============================

#endif // INCLUDE GUARD
