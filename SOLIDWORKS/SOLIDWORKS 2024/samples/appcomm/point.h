//$c82 ??? Added mgPoint_c >>= mgPoint5_c projection
//$c81 OPI 03/10/23 FUN128529 VS2022 upgrade, Error C4596 illegal qualified name in member declaration , Fix: remove illegal qualified name
//$c80 IBL 12/28/22 Prj 25934 FUN 129331 TSK9050341 Added mgPoint_c::contains(mgSphere_c &)
//$c79 IBL 09/28/22 Prj 25934 FUN 129331 TSK9050341 Added mgPoint_c >>= mgConic_c, mgPoint_c::undef()
//$c78 IBL 07/15/22-2 IR-964153 Compile Fix. Added mgPoint_c float * constructor
//$c77 IBL 05/23/22 Prj 25934 Added mgPoint_c::dilateMe() intended replacement for *= double
//$c76 IBL 05/17/22 Prj 25934 Added mgMvEmbedMethod_e
//$c75 IBL 04/21/22 Prj 25934 Added mgPoint_c *= mgPlane_c
//$c74 IBL 03/11/22 Added method some #if MGMV_COMPILED
//$c73 IBL 03/02/22 Prj 25934 Added mgSphere_c *= mgPoint_c spherical reflection operator
//$c72 IBL 01/28/22 Prj 25932 Added sqlen()
//$c70 IBL 11/29/21Prj 25437 Added >>= mgMv[7]_c
//$c69 IBL 10/04/21 Prj 25832 #8 Added a new mgPoint_c::set()
//$c68 IBL 08/31/21 Prj 25437 Preliminary Added crdsW()
//$c67 IBL 11/18/20 Prj 25437 Moved double * casting operator into header. Added safer crds() member function.
//$c66 IBL 03/23/20 Prj 24847 Added mgMatrix5_c *= operator
//$c65 IBL 03/16/20 Prj 24847 Added mgMatrix_c *= operator
//$c64 IBL 02/10/20 Prj 24847 SPR 1167668 Added mgMatrix4_c *= operator
//$c63 IBL 02/06/20 Prj 24847 Added a second argument to mgPoint_c::iDoPerspectiveDivision
//$c62 IBL 01/06/20 Renamed mgMv_c mgPoint_c::infinity() to ei(). Added mgPoint_c mgPoint_c::inf(), bool mgPoint_c::isInfinity().
//$c61 IBL 11/11/19 Removed improper mgPoint_c arithmetic operators (+,* double). Added vec() and pnt() methods and interpolate functions.
//$c60 IBL 11/01/19 Prj 24096 mgGeom adds: Added <<= >>= projection and rejection operators
//$c59 IBL 02/12/19 Prj 24096 [Adding mgMv_c] Added mg[2D]Point_c::mv7()
//$c58 IBL 01/09/19 Prj 24096 [Adding mgMv_c] Added mg2DPoint_c::mv()
//$c57 IBL 10/02/18 Prj 24096 [Adding mgMv_c] Added mv() and mgMv_c operator*=.
//$c56 VIT 06/13/18 re: prj 23255; added direct intermediate scaling of a point (2 methods)
//$c55 IBL 03/23/18 SPR 1032316 Added mgPoint_c::nullPoint(). Blocked mgPoint_c(0) compilation.
//$c54 IBL 02/27/17 Prj 22101 Added mgBBox_c suDebStream_c streamer
//$c53 IBL 06/14/16 Added debug build mg2DPoint_c suDebStream_c streamer
//$c52 IBL 11/12/15 Added debug build mgPoint_c suDebStream_c streamer
//$c51 CGB 03/11/14 New distToLine fn
//$c50 FXG 03/01/14 PRJ 19745: support diverge dir
//$c49 FXG 02/11/14 PRJ 19745: code refactory
//$c48  TF 08/05/10 Added a couple of methods to mg2DPoint_c
//$c47 PEL 02/09/08 Compile fix include mgdef.h.
//$c46  SCL 04/27/06 added distToLine()
//$c45  drd 01/29/06 Release compilefix for c44
//$c44  DL  09/22/05 Added TRACE_POINT macro
//$c43  DSB 04/12/05 Added xformByPerspInverseVisible to aid in placing annotations in model space.
//$c42  ARM 01/19/04 Added set( const float compIn[3] ) and made set( double compIn[3] ) inline
//$c41  LVS 03/01/03 Added distToRay()
//$c40 LVS  08/12/02  Added mirror, dist(), sqDist()
//$c39	PYA/WGC 03/01/02 spr 131624: take the "virtual" out of Dump() else we'll be down in the Dumps
//$c38  SWC 02/28/02 Added Dump() - as debugging aid.
//$c37  ARM 12/21/01 Added method to get the coords into a float[3] array
//$c36	TSL 06/15/01 added same2 ().
//$c35	JT	01/05/01 added operator>>(su_CArchive&, mgPoint_c&)
//$c34	kxh	10/13/00 Added set method that takes three double arguments.
//$c33  SRK 03/10/00 SPR 86580 Provide wrappers for (su_)CArchive functions
//$c32  KDH 07/05/00 Project name: Smart Fasteners	Added isLessThan, less than is determined by lexigraphical ordering (a total, translation invariant ordering)
//$c31    drd 06/24/00 Isolate swcc lib from other apps
//$c30	SRK/DRD 06/23/2000 IA64 Porting Tool, Update to use SWCC library, and derive all objects from su_CObject
//$c29  BAH 09/10/99 Added mgPoint_c::save2D(), restore2D() (DRW 2279)
//$c28	BCS 09/16/98 Added mg2DPoint_c
//$c27  BCS 11/18/97 Added getPLUSrep() and getXrep()
//$c26  HWL 08/19/97 make operator*= public
//$c25  RBX 07/13/97 methods for xforming by persp inverse
//$c24  RPZ 07/02/97 added getParamOnLine
//$c23  PSB 05/08/97 Moved exposed include files to \am\sldworks\appcomm
//$c22  VIT 02/11/97 undid bad $c1
//$c21  RBX 12/02/96 move persp division code into iDoPerspectiveDivision
//$c20  HWL 03/16/96 added double* operator
//$c19  VIT 02/12/96 correction to $c18; checkCollinear() is used in iges
//$c18  VIT 02/09/96 kill unused routine; use memcpy
//$c17  VIT 09/18/95 changed an arg to "const"
//$c16  RPZ 08/20/95 changed save methods to "const"
//$c15  VIT 08/09/95 Make isSame() const
//$c14  CPD 08/03/95 Point * Matrix and Matrix*Point declared friends
//$c13  CPD 08/02/95 Introduced private multiplier by scalar (inline)
//$c12  DSA 07/25/95 removed includes
//$c11  DJC 07/21/95 Added constructor to make point from vector.
//$c10  RBX 07/19/95 isSame method on mgPoint_c, uses specified tolerance
//$c9   HWL 06/08/95 Added set()
//$c8   CPD 06/02/95 Implement checkCollinear().
//$c7   MIP 03/31/95 Exported only methods
//$c6   DJC 02/17/95 Made == public, added !=.
//$c5   RPZ 02/11/95 Got rid of nested includes in sgSketch.h
//                   replaced precompiled header section with mopch.h
//                   changed all include directive to include the full 
//                   path from am on down.
//$c4   RPZ 02/04/95 Changed restore to not allocate memory
//$c3   VIT 01/25/95 add Restore2(), to be able to restore without SU_NEW
//$c2   RPZ 01/10/95 moved from gcdll/geometry to create new mathgeom.dll
//$c1   VIT 12/08/94 For convience sake, merged default & 3 doubles constructors
//                   and added set_coord()
//========================================================================//
//              Copyright 1994 (Unpublished Material)                     //
//                  SolidWorks Corporation.                           //
//========================================================================//
//
//     File Name: point.h
//     
//    
//     
//     Contents: class for simple 3d point
//
//========================================================================//
#ifndef POINT_INCLUDED
#define POINT_INCLUDED

#include <appcomm/mgdef.h>
#include <appcomm/swcc.h>
#include <appcomm/mv.h>
class mgPoint_c;
class mgLine_c;
class mgPlane_c;
class mgUnitVector_c;
class mgConic_c;
class mgVector_c;
class mgXform_c;
class mgMatrix_c;
class mgMatrix4_c;
class mgMatrix5_c;
struct tagVARIANT;
class mg2DPoint_c;
class mgPoint5_c;
class su_CArchive;	// for API CArchive wrapper, do not remove

#ifdef _DEBUG
#define TRACE_POINT(pt) \
	do { TRACE(_T("%s %.8f %.8f %.8f\n"), _T(#pt), pt.x(), pt.y(), pt.z()); } while(0)
#else
#define TRACE_POINT(pt) 
#endif

class mgPoint_c 
{
public:
// Construct a mgPoint_c from three doubles.
	MG_EXPORT mgPoint_c( );
	MG_EXPORT mgPoint_c( double xi, double yi, double zi );
	MG_EXPORT mgPoint_c(const double p[3]);
	MG_EXPORT explicit mgPoint_c(const float p[3]);
	MG_EXPORT mgPoint_c ( const mgVector_c& v); // useful constructor after vector math on points
	

	MG_EXPORT mgPoint_c( const mgPoint_c& p );		// Copy Constructor
	MG_EXPORT mgPoint_c	const&	operator=(const mgPoint_c& p);	// assignment
	mgPoint_c(const tagVARIANT& v);
// Destructor
	MG_EXPORT ~mgPoint_c();



	MG_EXPORT static const mgPoint_c& nullPoint(); // returns (0,0,0)
// Extract a coordinate value.
	double x() const;
	double y() const;
	double z() const;
  	void get(double pt[3]) const;
  	void get(float pt[3]) const;

	double sqlen() const { return x()*x() + y()*y() + z()*z(); }

// Extract the i-th coordinate
	double coordinate( int i ) const;

	MG_EXPORT mgMv_c mv(mgMvEmbedMethod_e em = mvem_default5) const { return mgMv_c::point( x(), y(), z() ,em); }
	MG_EXPORT mgMv7_c mv7(mgMvEmbedMethod_e em = mvem_default7) const;
	
	MG_EXPORT static mgMv_c ei() { return mgMv_c().p_inf(); } // returns ei (point at infinity)
	MG_EXPORT bool isInfinity() const;
	MG_EXPORT static mgPoint_c inf();

	MG_EXPORT bool isUndefined() const;
	MG_EXPORT static mgPoint_c undef(); // The mgPoint_c to return if you don't have an mgPoint_c to return

	MG_EXPORT double maxAbsCoord() const; // Max{|x|,|y|,|z|}

// Set coordinate values.
	MG_EXPORT void set(double xyz[3]);
	MG_EXPORT void set(const double * xyz);
	MG_EXPORT void set( const float xyz[3] );
	
 	void set_x( double new_x );
 	void set_y( double new_y );
 	void set_z( double new_z );
 	
 	void set_coord(int i, double new_val );

	void set ( double new_x, double new_y, double new_z );
 
// Transform this point
	MG_EXPORT mgPoint_c const& operator*=(mgXform_c const&);
	MG_EXPORT mgPoint_c const &operator*=(mgMatrix_c const &);
	MG_EXPORT mgPoint_c const &operator*=(mgMatrix4_c const &);
	MG_EXPORT mgPoint_c const &operator*=(mgMatrix5_c const &);
	MG_EXPORT mgPoint_c const &operator*=(mgMv_c const &);
	MG_EXPORT mgPoint_c const &operator*=(mgMvFunc_c &);
	MG_EXPORT mgPoint_c const& operator*=(mgSphere_c const&); // reflect in sphere
	MG_EXPORT mgPoint_c const& operator*=(mgPlane_c const&); // reflect in plane
	MG_EXPORT mgPoint_c xformByPerspInverse (const mgXform_c& xf);
	MG_EXPORT mgPoint_c xformByPerspInverseVisible (const mgXform_c& xf);
	MG_EXPORT mgPoint_c xformByPerspInverseLine (const mgXform_c& xf, const mgLine_c& modelLine);
	MG_EXPORT mgPoint_c xformByPerspInversePlane (const mgXform_c& xf, const mgPlane_c& plane);
	//Error	C4596 illegal qualified name in member declaration	
	MG_EXPORT mgPoint_c mirror (mgPoint_c const &plnStart, 
							 mgUnitVector_c const &plnNormal) const;
	friend MG_EXPORT mgPoint_c operator*( mgPoint_c const &, mgXform_c const & );

	// Othogonal Projection into 
	MG_EXPORT mgPoint_c operator>>=(const mgLine_c &) const;
	MG_EXPORT mgPoint_c operator>>=(const mgPlane_c &) const;
	MG_EXPORT mgPoint_c operator>>=(const mgSphere_c &) const;
	MG_EXPORT mgPoint_c operator>>=(const mgCircle_c&) const;
	MG_EXPORT mgPoint_c operator>>=(const mgTorus_c&) const;
	MG_EXPORT mgPoint_c operator>>=(const mgBiPoint_c&) const;
	MG_EXPORT mgPoint_c operator>>=(const mgConic_c&) const;
	MG_EXPORT mgPoint_c operator>>=(const mgPoint5_c&) const;
#if MGMV_COMPILED
	MG_EXPORT mgPoint_c operator>>=(mgMv_c&) const;
	MG_EXPORT mgPoint_c operator>>=(mgMv7_c&) const;
#endif

	// Othogonal Rejection from 
	MG_EXPORT mgVector_c operator<<=(const mgLine_c & obj) const; // { return *this - ((*this) >>= obj); }
	MG_EXPORT mgVector_c operator<<=(const mgPlane_c & obj) const; // { return *this - ((*this) >>= obj); }
	MG_EXPORT mgVector_c operator<<=(const mgSphere_c & obj) const; // { return *this - ((*this) >>= obj); }
	MG_EXPORT mgVector_c operator<<=(const mgCircle_c & obj) const; // { return *this - ((*this) >>= obj); }
	MG_EXPORT mgVector_c operator<<=(const mgBiPoint_c& obj) const; // { return *this - ((*this) >>= obj); }
#if MGMV_COMPILED
	MG_EXPORT mgVector_c operator<<=(mgMv_c& obj) const; // { return *this - ((*this) >>= obj); }
	MG_EXPORT mgVector_c operator<<=(mgMv7_c& obj) const; // { return *this - ((*this) >>= obj); }
#endif

	// methods facilitating mgPoint_c <-> mgSphere_c equivalent coding 
	MG_EXPORT const mgPoint_c center() const { return *this; }
	MG_EXPORT double squadius() const {	return 0.0;	}

	// IBL removed: Directly scale a point; convenient for bSplines with control points (vertices) are points, not vectors
	//friend MG_EXPORT mgPoint_c operator*(double, mgPoint_c const &);		// re: prj 23255
	//friend MG_EXPORT mgPoint_c operator*(mgPoint_c const &, double);
	MG_EXPORT void dilateMe(double d) { iCoord[0] *= d; iCoord[1] *= d; iCoord[2] *= d; }
	MG_EXPORT void dilateMe(double d, const mgPoint_c& c);
	MG_EXPORT mgPoint_c dilate(double d) const { return mgPoint_c(d * iCoord[0], d * iCoord[1], d * iCoord[2]); }
	MG_EXPORT mgPoint_c dilate(double d, const mgPoint_c & c) const; // { return c + d * ((*this) - c); }

	MG_EXPORT mgVector_c vec() const; // acess as vector
	MG_EXPORT const mgPoint_c & pnt() const { return *this; } // acess as point

    MG_EXPORT void getPLUSrep( mgPoint_c* start1Out, mgPoint_c* ent1Out,
                               mgPoint_c* start2Out, mgPoint_c* end2Out,
                               double ratioIn = 1) const;
    MG_EXPORT void getXrep( mgPoint_c* start1Out, mgPoint_c* ent1Out,
                            mgPoint_c* start2Out, mgPoint_c* end2Out,
                            double ratioIn = 1 ) const;
// scale the point (IBL, leaving this present but mathematically dubious)
	mgPoint_c const& operator*=(double factor); 

// Translate this point
	friend MG_EXPORT mgPoint_c operator+( mgPoint_c const &, mgVector_c const & );
	friend MG_EXPORT mgPoint_c operator+(mgVector_c const &, mgPoint_c const &);
	// IBL removed friend MG_EXPORT mgPoint_c operator+(mgPoint_c const &, mgPoint_c const & );	// re: prj23255 (IBL removed. point+point=sphere)
	// but implict mgVector_c from mgPoint_c constructor means it still compiles. It would be nice to delete it but too widely used.
	//MG_EXPORT mgPoint_c const &operator+=(mgPoint_c const &) = delete;	
	MG_EXPORT mgPoint_c const &operator+=(mgVector_c const &);
	friend MG_EXPORT mgPoint_c operator-( mgPoint_c const &, mgVector_c const & );
	MG_EXPORT mgPoint_c const &operator-=( mgVector_c const & );


// Get displacement, i.e. a mgVector_c, as difference of two mgPoint_cs a-b .
	friend MG_EXPORT mgVector_c operator-( mgPoint_c const & a, mgPoint_c const & b);

// Scalar product of mgPoint_c with mgVector_c.
friend MG_EXPORT double operator%( mgPoint_c const &, mgVector_c const & );
friend MG_EXPORT double operator%( mgVector_c const &, mgPoint_c const & );

//	Check equality within tolerance,or specified tolerance
friend MG_EXPORT BOOL operator==( mgPoint_c const&, mgPoint_c const& );	
MG_EXPORT BOOL isSame ( const mgPoint_c&, double tol = -1.0 ) const;	
friend MG_EXPORT BOOL operator!=( mgPoint_c const&, mgPoint_c const& );	
MG_EXPORT BOOL isLessThan (const mgPoint_c&, double tol = -1.0 ) const;	
MG_EXPORT BOOL isSame2 ( const mgPoint_c&, double tol = -1.0 ) const;	

MG_EXPORT bool contains(const mgSphere_c&, bool=0) const; // $c80

// Transform a mgPoint_c by a mgMatrix_c.
friend MG_EXPORT mgPoint_c operator*( mgMatrix_c const &, mgPoint_c const & );
friend MG_EXPORT mgPoint_c operator*( mgPoint_c const &, mgMatrix_c const & );

// cast operator to conveniently pass the list to parasolid 
	MG_EXPORT operator double* () { return iCoord; }
	MG_EXPORT const double* crds() const { return iCoord; } // added $c67
	MG_EXPORT double* crdsW() { return iCoord; } // added $c68

// Archiving
	MG_EXPORT void save( su_CArchive& ar ) const;
	MG_EXPORT void restore( su_CArchive& ar );
	MG_EXPORT void save2D(su_CArchive& ar) const;
	MG_EXPORT void restore2D(su_CArchive& ar);

	// CArchive API wrapper
	MG_EXPORT void save( CArchive& ar ) const;
	MG_EXPORT void restore( CArchive& ar );
	MG_EXPORT void save2D( CArchive& ar ) const;
	MG_EXPORT void restore2D( CArchive& ar );

// Interpolate between two mgPoint_cs. The parameter gives the
// proportion of the segment between p1 and p2. In fact, the
// parameter can be < 0 or > 1, in which case the function
// extrapolates. IBL: Adding more such, use for eg. weighted control point sums.
	friend MG_EXPORT mgPoint_c interpolate( double,	mgPoint_c const &, mgPoint_c const & );
	friend MG_EXPORT mgPoint_c interpolate2(double a, double b, mgPoint_c const & p1, mgPoint_c const & p2);	
	friend MG_EXPORT mgPoint_c interpolate3(double a, double b, double c, mgPoint_c const & p1, mgPoint_c const & p2, mgPoint_c const & p3);
	friend MG_EXPORT mgPoint_c interpolate4(double a, double b, double c, double d, mgPoint_c const & p1, mgPoint_c const & p2, mgPoint_c const & p3, mgPoint_c const & p4);

//	Check collinearity of triplet of points
	MG_EXPORT	BOOL checkCollinear ( mgPoint_c triplet[], mgPoint_c& rootPoint, mgVector_c& normal ) const;


	MG_EXPORT	double getParamOnLine( const mgPoint_c& startPoint, const mgPoint_c& endPoint ) const;
	MG_EXPORT	double distToRay(mgPoint_c const &start, mgUnitVector_c const &dir, 
							 double *rayPar = NULL) const;
	MG_EXPORT	double distToLine(mgPoint_c const& zPt1, mgPoint_c const& zPt2,
							double* pdParam = NULL, mgPoint_c* pzPrjPt = NULL) const;
	MG_EXPORT	double distToLine(mgLine_c line) const;
	MG_EXPORT   BOOL projectPoint2Line(const mgUnitVector_c& lineDir, const mgPoint_c& lineOrigin, mgPoint_c& pointOut) const;
	MG_EXPORT	int isOnLine(const mgPoint_c& point1, const mgPoint_c& point2) const;

	MG_EXPORT void Dump(CDumpContext& dc) const;


/*
public:

	// Cross product of a mgPoint_c with a unit mgVector_c.
	friend MG_EXPORT mgPoint_c operator*( mgPoint_c const &, mgUnitVector_c const & );
	friend MG_EXPORT mgPoint_c operator*( mgUnitVector_c const &, mgPoint_c const & );
	friend MG_EXPORT double operator%( mgPoint_c const &, mgUnitVector_c const & );
	friend MG_EXPORT double operator%( mgUnitVector_c const &, mgPoint_c const & );

	// Transform a mgPoint_c.
	friend MG_EXPORT mgPoint_c operator*( mgMatrix_c const &, mgPoint_c const & );
	friend MG_EXPORT mgPoint_c operator*( mgPoint_c const &, mgMatrix_c const & );
	mgPoint_c const &operator*=( mgMatrix_c const & );


	friend class mgVector_c;
	friend class mgUnitVector_c;
	friend class mgXform_c;
	friend class mgMatrix_c;

	// The following methods should only be used in emergency situations!!!
	public:
#ifdef GC_FILE
//		position& rep() const { return *_rep; }
#endif
*/

private:
	//	Private Data
	double	iCoord[3];

	//	Convenience for internal manipulation ( do not make public )
	void iDoPerspectiveDivision(const mgXform_c& t, const mgPoint_c & p2); // $c63 added second point argument

	friend class mgVector_c;
    friend class mg2DPoint_c;

	friend MG_EXPORT su_CArchive& operator>>(su_CArchive& ar, mgPoint_c& p); // This routine is used by the mainwin side of su_loadArray<mgPoint_c*>()
	friend MG_EXPORT su_CArchive& operator<<(su_CArchive& ar, mgPoint_c& p); // This routine is used by the mainwin side of su_saveArray<mgPoint_c*>()

	mgPoint_c(int); // Private and undefined. Prevents compilation of mgPoint_c(NULL) or FALSE instantiations (CID 148538 SPR 1032316)

};



MG_EXPORT double sqDist(mgPoint_c const &pnt0, mgPoint_c const &pnt1);
MG_EXPORT double dist(mgPoint_c const &pnt0, mgPoint_c const &pnt1);
//=================================================================
//	Definition of INLINE (data access) member functions
//=================================================================
inline	double mgPoint_c::x() const 
{
	return ( iCoord[0] ); 
}

inline	double mgPoint_c::y() const 
{
	return ( iCoord[1] ); 
}


inline	double mgPoint_c::z() const 
{
	return ( iCoord[2] ); 
}

inline	double mgPoint_c::coordinate( int i ) const 
{
	return ( iCoord[i] );
}

inline	void mgPoint_c::set_x( double new_x ) 
{
	iCoord[0] = new_x; 
}

inline	void mgPoint_c::set_y( double new_y ) 
{
	iCoord[1] = new_y;	 
}

inline	void mgPoint_c::set_z( double new_z ) 
{
	iCoord[2] = new_z;
}

inline	void mgPoint_c::set ( double new_x, double new_y, double new_z )
{
	iCoord[0] = new_x;
	iCoord[1] = new_y;
	iCoord[2] = new_z;
}

inline	void mgPoint_c::set( double compIn[3] ) 
{
	memcpy( iCoord, compIn, 3 * sizeof( double ) );   
}

inline	void mgPoint_c::set(const double * compIn)
{
	memcpy(iCoord, compIn, 3 * sizeof(double));
}

inline	void mgPoint_c::set( const float compIn[3] ) 
{
	iCoord[0] = compIn[0];
	iCoord[1] = compIn[1];
	iCoord[2] = compIn[2];
}

inline	void mgPoint_c::set_coord( int i, double new_val ) 
{
	iCoord[i] = new_val;
}

inline	void mgPoint_c::get ( double pt[3] ) const
{
/*
	pt[0] = iCoord[0];
	pt[1] = iCoord[1];
	pt[2] = iCoord[2];
*/
	memcpy( pt, iCoord, 3 * sizeof( double ) );   
}

inline	void mgPoint_c::get ( float pt[3] ) const
{
	pt[0] = (float)iCoord[0];
	pt[1] = (float)iCoord[1];
	pt[2] = (float)iCoord[2];
}


// IBL: It would be good to remove this, replacing with dilateMe() or dilate(), but it is very widely use.
inline		mgPoint_c const &	mgPoint_c::operator*=( double factor )
{
	iCoord[0] *= factor; 	
	iCoord[1] *= factor; 
	iCoord[2] *= factor;
	return *this;
} 	

inline void mgPoint_c::getPLUSrep( mgPoint_c* start1Out, mgPoint_c* end1Out,
                                   mgPoint_c* start2Out, mgPoint_c* end2Out,
                                   double ratioIn/*1*/ ) const
{
    double prm3 = 3.0*ratioIn;
    double prm4 = 4.0*ratioIn;
    double xSign = (x() < 0.0) ? -1.0 : 1.0;
    double ySign = (y() < 0.0) ? -1.0 : 1.0;
	*start1Out = mgPoint_c(x()-prm3*xSign, y(), 0.0);
	*end1Out = mgPoint_c(x()+prm4*xSign, y(), 0.0);
    *start2Out = mgPoint_c(x(), y()-prm3*ySign, 0.0);
    *end2Out = mgPoint_c(x(), y()+prm4*ySign, 0.0);
}

inline void mgPoint_c::getXrep( mgPoint_c* start1Out, mgPoint_c* end1Out,
                                mgPoint_c* start2Out, mgPoint_c* end2Out,
                                double ratioIn/*1*/ ) const
{
    double prm3 = 3.0*ratioIn;
    double prm4 = 4.0*ratioIn;
    double xSign = (x() < 0.0) ? -1.0 : 1.0;
    double ySign = (y() < 0.0) ? -1.0 : 1.0;
	*start1Out = mgPoint_c(x()-prm3*xSign, y()-prm3*ySign, 0.0);
    *end1Out = mgPoint_c(x()+prm4*xSign, y()+prm4*ySign, 0);
	*start2Out = mgPoint_c(x()+prm3*xSign, y()-prm3*ySign, 0.0);
    *end2Out = mgPoint_c(x()-prm4*xSign, y()+prm4*ySign, 0.0);
}

// These should be optimised for performance
inline mgPoint_c interpolate2(double a, double b, mgPoint_c const & p1, mgPoint_c const & p2)
{
	return mgPoint_c(a*p1.iCoord[0] + b*p2.iCoord[0], a*p1.iCoord[1] + b*p2.iCoord[1], a*p1.iCoord[2] + b*p2.iCoord[2]);
}
inline mgPoint_c interpolate(double d, mgPoint_c const & p1, mgPoint_c const & p2) { return interpolate2(1.0 - d, d, p1, p2); }
inline mgPoint_c interpolate3(double a, double b, double c, mgPoint_c const & p1, mgPoint_c const & p2, mgPoint_c const & p3)
{
	return mgPoint_c(
		a * p1.iCoord[0] + b * p2.iCoord[0] + c * p3.iCoord[0],
		a * p1.iCoord[1] + b * p2.iCoord[1] + c * p3.iCoord[1],
		a * p1.iCoord[2] + b * p2.iCoord[2] + c * p3.iCoord[2]);
}
inline mgPoint_c interpolate4(double a, double b, double c, double d, mgPoint_c const & p1, mgPoint_c const & p2, mgPoint_c const & p3, mgPoint_c const & p4)
{
	return mgPoint_c(
		a * p1.iCoord[0] + b * p2.iCoord[0] + c * p3.iCoord[0] + d * p4.iCoord[0],
		a * p1.iCoord[1] + b * p2.iCoord[1] + c * p3.iCoord[1] + d * p4.iCoord[1],
		a * p1.iCoord[2] + b * p2.iCoord[2] + c * p3.iCoord[2] + d * p4.iCoord[2]);
}

class mg2DPoint_c
{
public:
    MG_EXPORT mg2DPoint_c();
	MG_EXPORT mg2DPoint_c( double xIn, double yIn );

// Set coordinate values.
    MG_EXPORT void set_x( double new_x ) {iCoord[0] = new_x;}
 	MG_EXPORT void set_y( double new_y ) {iCoord[1] = new_y;}
	MG_EXPORT void set( double new_x, double new_y ) {iCoord[0] = new_x; iCoord[1] = new_y;}

// Extract a coordinate value.
    MG_EXPORT double x() const {return iCoord[0];}
	MG_EXPORT double y() const {return iCoord[1];}
	MG_EXPORT double u() const {return iCoord[0];}
	MG_EXPORT double v() const {return iCoord[1];}

	MG_EXPORT mgMv_c mv(mgMvEmbedMethod_e em = mvem_default5) const { return mgMv_c::point(x(), y(), 0.0,em); }
	MG_EXPORT mgMv7_c mv7(mgMvEmbedMethod_e em = mvem_default7) const;
	MG_EXPORT static mgMv_c infinity() { return mgMv_c().p_inf(); } // returns ei (point at infinity)


// Archiving
	MG_EXPORT void save( su_CArchive& ar ) const;
	MG_EXPORT void restore( su_CArchive& ar );

	// CArchive API wrapper
	MG_EXPORT void save( CArchive& ar ) const;
	MG_EXPORT void restore( CArchive& ar );

private:
	//	Private Data
	double	iCoord[2];
};

#ifdef _HTML_DEBUG
class suDebStream_c;
MG_EXPORT suDebStream_c & operator<<(suDebStream_c & s, mgPoint_c pt);
MG_EXPORT suDebStream_c & operator<<(suDebStream_c & s, mg2DPoint_c pt);
#endif


#endif
