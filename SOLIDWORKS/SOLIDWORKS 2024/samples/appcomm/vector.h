//$c82 IBL 07/18/23 Added mgVector_c::sphericaPolar() taking isTrigs char
//$c81 IBL 03/09/23 Added mgVector_c::setZero()
//$c80 IBL 01/23/23 Prj  25934 FUN 129331 TSK9050341 Added mgVector2_c suDebStreamer. Changed mgVector_c::isZero() default tolerance tol
//$c79 IBL 01/18/23 Prj 25934 FUN 129331 TSK9050341 Added mgVector_c::isSameAngles()
//$c78 IBL 01/06/23 Prj 25934 FUN 129331 TSK9050341 Added optional currently ignored RNG specifier to $c77
//$c77 IBL 12/28/22 Prj 25934 FUN 129331 TSK9050341 Added mgVector_c::rand()
//$c76 IBL 11/28/22 Prj 25934 FUN129331 TSK9050341 Added mgVector_c::lenApprox() using float math
//$c75 IBL 09/28/22 Prj 25934 FUN 129331 Added crdsW() more explicit alternative for mgVector_c::operator()
//$c74 IBL 07/15/22-2 IR-964153 Compile Fix Added mgVector_c::sphericalPolar(), mgVector4_c::isZero()
//$c73 IBL 05/17/22 Added mgVector_c::Negate() [synonym for Inverse()] unit() and inv()
//$c72 IBL 04/21/22 Added mgVector_c *= mgPlane_c
//$c71 CWN 02/01/22 project ER085683 - implement get/setEulerAngles
//$c70 SGY1 10/19/21 Prj 25780 Removed the older version of mg_AngleBetweenSigned()
//$c69 SGY1 10/18/21 Prj 25780 Added  mg_AngleBetweenSigned() that takes a normal vector
//$c68 IBL 10/04/21 Prj 25832 #8 Added a new mgVector_c::set()
//$c67 IBL 01/14/21 Prj 25437 Added mgVector_c <<=/>>= mgPlane_c
//$c66 IBL 12/14/20 Prj 25437 Added mgVector2_c minimal 2D vector type
//$c65 IBL 12/04/20 Prj 25437 Added mg_NormalBetween()
//$c64 IBL 12/01/20 Prj 25437 Added mgVector_c::isSame()
//$c63 IBL 11/18/20 Prj 25437 Added crds() safer replacement for (double *) casting
//$c62 IBL 11/03/20 Prj 25437 Added mg_CoTangentBetween()
//$c61 IBL 10/20/20 Prj 25437 Added <<=_ and >>= rejection and projection into unitvec operators
//$c60 IBL 05/01/20 SPR 1170410 Added mgVector_c::isMultipleOf()
//$c59 IBL 03/23/20 Prj 24847 Added mgMatrix5_c *= operator
//$c58 IBL 03/16/20 Prj 24847 Added mgMatrix_c *= operator
//$c57 IBL 02/10/20 SPR 1167668 Added mgVector_4::vec() and pnt()
//$c56 IBL 01/06/20 Prj 24096 Added BOOL mgVector_c::isZero(double)
//$c55 IBL 11/11/19 Prj 24096 Added mgVector/Point_c::vec() and pnt() methods.
//$c54 IBL 11/01/19 Prj 24096 mgGeom adds: Added mg_AngleBetweenSigned()
//$c53 IBL 07/22/19 Prj 24096 Added mgVector_4 = double * mgVector_4 operator
//$c52 IBL 12/19/18 Added [] operators giving cleaner access to iComp than * operator.
//$c51 IBL 11/04/18 Added mg_CrossProductDirection()
//$c50 IBL 10/03/18 Moved $c44 inside include guard.
//$c49 IBL 10/02/18 Prj 24096 [Adding mgMv_c] Added mv() and mgMv_c operator*=.
//$c48 IBL 03/23/18 SPR 1032316 Blocked mgVector_c(int) compilation.
//$c47 IBL 12/04/17 SPR 1054194 Added mg_NormalisedCrossProduct()
//$c46 ATN 10/10/17 PRJ 23256: SPR: 1045084, engine /accumulator code
//$c45 SMD 01/22/16 SPR 930594, added function roundOff()
//$c44 IBL 11/12/15 Added debug build mgVector_c suDebStream_c streamer
//$c43 SKR 01/07/13 Prj 18851 Added Inverse function.
//$c42 VNZ 08/05/08 SPR 447796. Added mgVector_c::dominantComponentIndex()
//$c41  HLI 08/28/07 added mg_getBasis
//$c40  ANP 02/24/06 SPR 303514 :Added gcMdiPoint_c class 
//$c39  DL  09/22/05 Added TRACE_VECTOR macro
//$c38	ARM	10/16/03 Prj 8224 Temp Graphics in Scenegraph.
//$c37  LVS 01/21/03 Added vol()
//$c36  LVS 11/13/02 Added flip() method
//$c35  LVS 10/30/02 Added pullBack().
//$c34  LVS 10/23/02 Added normalize().
//$c33  LVS 26/07/02 Added isAlmostParallelTo().
//$c32  PRD 12/07/01 Added isParallelToTol.
//$c31  SRK 03/10/00 SPR 86580 Provide wrappers for (su_)CArchive functions
//$c30    drd 06/24/00 Isolate swcc lib from other apps
//$c29	SRK/DRD 06/23/2000 IA64 Porting Tool, Update to use SWCC library, and derive all objects from su_CObject
//$c28  DJC 03/31/99 Added isPerpendicularTo.
//$c27	XYZ 06/22/98 added isParallelTo(const mgVector_c&, double angleTol).
//$c26  HWL 05/13/97 mg_AngleBetween with respect to a normal
//$c25  LAL 05/10/97 intel compiler cleanup
//$c24  PSB 05/08/97 Moved exposed include files to \am\sldworks\appcomm
//$c23  HWL 01/23/97 added an argument to anyUnitNormal to get standard axis, this will be the default in the future.
//$c22  EJS 11/17/96 added isOppositeDirection() and isSameDirection()
//$c21  RPZ 10/29/96 made anyUnitNormal a const
//$c20  RPZ 10/29/96 made anyUnitNormal a const
//$c19  BAH 03/25/96 Put || back in to find any illegal usages
//$c18  HWL 03/16/96 added double* and isParallel() remove || operator
//$c17  VIT 09/18/95 make get() const; an arg to constructor const
//$c16	BCS 09/01/95 Added operator ||. 
//$c15  VIT 08/24/95 an overloaded version of set()
//$c14  RPZ 08/20/95 changed save methods to "const"
//$c13  CPD 08/03/95 Some vector/point methods declared friends
//$c12  CPD 08/02/95 Made mgPoint_c a friend
//$c11  DSA 07/25/95 removed includes
//$c10  DJC 07/21/95 Added constructor to make vector from point.
//$c9   AJO 06/02/95 Added mg_AngleBetween2d().
//$c8   JPD 05/04/95 Added mg_AngleBetween() and isOrthogonal()
//$c7   VIT 05/01/95 (MIP) clean-up
//$c6   DJC 02/17/95 Added !=.
//$c5   RPZ 02/11/95 Got rid of nested includes in sgSketch.h
//                   replaced precompiled header section with mopch.h
//                   changed all include directive to include the full 
//                   path from am on down.
//$c4   RPZ 02/04/95 Change restore to not allocate memory
//$c3   RPZ 01/10/95 moved from gcdll/geometry to create new mathgeom.dll
//$c2   HWL 12/16/94 Added get function
//$c1   VIT 11-29-94 Make mgVector_c::len() & sqlen() in-line
//========================================================================//
//              Copyright 1994 (Unpublished Material)                     //
//                  SolidWorks Corporation.                           //
//========================================================================//
//
//     File Name: vector.h
//     
//        
//     
//     Contents: class for simple 3d vector
//
//========================================================================//
#ifndef VECTOR_INCLUDED
#define VECTOR_INCLUDED

#include <appcomm/mgdef.h>
#include <appcomm/swcc.h>
#include <appcomm/mv.h>

class mgPoint_c;
class mgUnitVector_c;
class mgVector_c;
class mgXform_c;
class mgMatrix_c;
class mgMatrix4_c;
class mgMatrix5_c;
class su_CArchive;	// for API CArchive wrapper, do not remove

#ifdef _DEBUG
#define TRACE_VECTOR(vec) TRACE(_T("%s %.8f %.8f %.8f\n"), _T(#vec), vec.x(), vec.y(), vec.z());
#endif

class MG_EXPORT mgVector_c
{
public:
//====
// constructors
//====
	// Construct a mgVector_c from three doubles.
	mgVector_c( double x, double y, double z );
	mgVector_c(const double v[3]);
	explicit mgVector_c(const float v[3]);
	mgVector_c(  );							// initialises to 0,0,0
	mgVector_c( const mgVector_c& v );   		// copy
	mgVector_c (const mgPoint_c& p); // useful constructor for vector math on points

// assignment
	mgVector_c const&	 operator=( const mgVector_c& v ); 	// assignment

// Destructor
	~mgVector_c();

// Extract the components of a mgVector_c.
	double x() const;
	double y() const;
	double z() const;
	void get(double coor[3]) const;
	void get(float coor[3]) const;
	double & operator[](int i) { return iComp[i]; }
	const double & operator[](int i) const { return iComp[i]; }

	const mgVector_c & vec() const { return *this;	};
	mgPoint_c pnt() const;  // acess as point
	
	mgMv_c mv() const { return mgMv_c(*this); }
	mgMv7_c mv7() const; 

	double component( int i ) const;
	double maxAbsCoord() const; // Infinity norm Max{|x|,|y|,|z|}



	void Negate(); // additive inverse
	void Inverse(); // same as Negate
	mgUnitVector_c unit() const; // v/|v|  [0 if |v|=0]
	mgVector_c inv() const; // multiplicative inverse v/v^2 [v if v^2=0]

// Set component values.
	void set(double v[3]);
	void set(const double * v);
	void set( double new_x, double new_y, double new_z = 0.0);
	void set_x( double new_x );
	void set_y( double new_y );
	void set_z( double new_z );
	void setZero();

// common useful vectors
	static const mgVector_c& nullVector();
	mgUnitVector_c anyUnitNormal(BOOL useStandardAxis = FALSE) const;

// Smallest angle (0 to PI) between two vectors
	friend MG_EXPORT  double mg_AngleBetween ( const mgVector_c& v1, const mgVector_c& v2 );

	// Signed angle (-PI to PI) between two vectors, based on a normal
	friend MG_EXPORT  double mg_AngleBetweenSigned(const mgVector_c& v1, const mgVector_c& v2, const mgVector_c& normal);

// angle (0 to 2PI) between two vectors, based on a normal
	friend MG_EXPORT  double mg_AngleBetween ( const mgVector_c& v1, const mgVector_c& v2, const mgVector_c& normal );
	                                                                                 
// Angle (0 to 2PI) between two vectors on xy plane
	friend MG_EXPORT  double mg_AngleBetween2d( const mgVector_c& v1, const mgVector_c& v2 );

	friend MG_EXPORT double mg_NormalBetween(const mgVector_c & v1, const mgVector_c & v2, const mgVector_c & dir, mgUnitVector_c & vOut);

// Unary minus.
	friend MG_EXPORT mgVector_c operator-( mgVector_c const & );

// Binary minus.
	friend MG_EXPORT mgVector_c operator-( mgVector_c const &, mgVector_c const & );

// Addition of mgVector_cs.
	friend MG_EXPORT mgVector_c operator+( mgVector_c const &, mgVector_c const & );
	mgVector_c const &operator+=( mgVector_c const & );

// Point + or - Vector
	friend MG_EXPORT mgPoint_c operator+( mgPoint_c const &p, mgVector_c const &v );
	friend MG_EXPORT mgPoint_c operator+( mgVector_c const &v, mgPoint_c const &p );
	friend MG_EXPORT mgPoint_c operator-( mgPoint_c const &p, mgVector_c const &v );

// Multiplication of a mgVector_c by a scalar.
	friend MG_EXPORT mgVector_c operator*( double, mgVector_c const & );
	friend MG_EXPORT mgVector_c operator*( mgVector_c const &, double );
	mgVector_c const &operator*=( double );

// Scalar product of two mgVector_cs.
	friend MG_EXPORT double operator%( mgVector_c const &, mgVector_c const & );

// Scalar product of mgPoint_c with mgVector_c.
	friend MG_EXPORT double operator%( mgPoint_c const &, mgVector_c const & );
	friend MG_EXPORT double operator%( mgVector_c const &, mgPoint_c const & );

// Cross product of general mgVector_cs. Also applies to unit mgVector_cs.
	friend MG_EXPORT mgVector_c operator*( mgVector_c const &, mgVector_c const & );

// Division of a mgVector_c by a scalar.
	friend MG_EXPORT mgVector_c operator/( mgVector_c const &, double );

// Form a mgUnitVector_c by normalising a mgVector_c.
	friend MG_EXPORT mgUnitVector_c mg_Normalise(mgVector_c const &);
	
// Robust (v1 * v2) / |v1*v2| for small vectors v1,v2
	friend MG_EXPORT mgUnitVector_c mg_NormalisedCrossProduct(mgVector_c const &, mgVector_c const &, BOOL allowZero=FALSE);
// Returns vector in direction v1*v2 but with length of order 1 rather than = |v1*v2|
	friend MG_EXPORT mgVector_c mg_CrossProductDirection(mgVector_c const &, mgVector_c const &);

// Transform a mgVector_c i.e. by an affine transformation.
	friend MG_EXPORT mgVector_c operator*( mgVector_c const &, mgXform_c const & );
	mgVector_c const &operator*=( mgXform_c const & );
	mgVector_c const &operator*=(mgMatrix_c const &);
	mgVector_c const &operator*=(mgMatrix4_c const &);
	mgVector_c const &operator*=(mgMatrix5_c const &);
	mgVector_c const &operator*=(mgMv_c const &);
	mgVector_c const &operator*=(mgMvFunc_c &);
	mgVector_c const& operator*=(mgPlane_c const&);

// Transform a mgVector_c by a 3x3 matrix.
	friend MG_EXPORT mgVector_c operator*( mgMatrix_c const &, mgVector_c const & );
 	friend MG_EXPORT mgVector_c operator*( mgVector_c const &, mgMatrix_c const & );

// Length of a mgVector_c.
	double sqlen() const { return iComp[0] * iComp[0] + iComp[1] * iComp[1] + iComp[2] * iComp[2]; }
	double len() const { return sqrt(sqlen()); }
// Length via float math, so less precise 
	float sqlenApprox() const
	{
		float ret;
		float v = (float)iComp[0];
		ret = v * v;
		v = (float)iComp[1];
		ret += v * v;
		v = (float)iComp[1];
		return ret + v * v;
	}
	float lenApprox() const { return sqrtf(sqlenApprox()); } // float sqrt faster than double sqrt

	friend MG_EXPORT double vol(mgVector_c const &v1, 
							mgVector_c const &v2, mgVector_c const &v3);

	BOOL isOrthogonal ();

//	Check for not null
	BOOL isNotNull() const;

//	Check for null 
	BOOL isNull() const; // coords < gcLengthTolerance
	BOOL isZero(double tol = -1.0) const; // coords <= tol
	BOOL isSame(const mgVector_c& rhs, double tol) const;
	bool isSameAngles(const mgVector_c& rhs, double tol=-1.0) const; // compares coords modulo 2 pi

//	Check the null (internal data) flag
	BOOL null() const;

//	Check if vector is parallel  
	BOOL isParallelTo(const mgVector_c&) const;
	// Legacy version of toleranced isParallelTo - don't use in new code.
	BOOL isParallelTo(const mgVector_c&, double angleTol) const;
	// Corrected version of toleranced isParallelTo - use this one in new code.
	BOOL isParallelToTol( const mgVector_c& c, double angleTolInDegrees ) const;
	BOOL isSameDirection(const mgVector_c&) const;
	BOOL isOppositeDirection( const mgVector_c& vIn ) const;
	BOOL isPerpendicularTo(const mgVector_c&) const;
	BOOL isPerpendicularTo(const mgVector_c& vIn, double angleTol) const;// prj 23256:mesh segmentation: added for detecting nearly orthogonal vectors.

//  Weaker criteria of parallel used through the system.
	BOOL isAlmostParallelTo(const mgVector_c&) const;
	BOOL isAlmostParallelTo(const mgUnitVector_c &) const;

	// Returns TRUE and sets mulOut only if mulOut * vIn = *this to given tolerance 
	BOOL isMultipleOf(const mgVector_c & vIn, double * mulOut  = nullptr, double tol = -1.0) const;

// normalize in place.
	BOOL normalise();
	void flip();

	//check for values which tend to zero, make them zero
	//if they are less than the tolerance we have specified
	void roundOff();

	//bool autoNormalize();

	friend MG_EXPORT BOOL operator||( mgVector_c const&, mgVector_c const& );

//	Check equality within tolerance
// IBL: Note that (v1 != v2) != !(v1 == v2) in cases where coord differ by EXACTLY gcLengthTolerance!
	friend MG_EXPORT BOOL operator==( mgVector_c const&, mgVector_c const& );	
	friend MG_EXPORT BOOL operator!=( mgVector_c const&, mgVector_c const& );	

	mgVector_c operator>>=(const mgUnitVector_c & dir) const; // returns (*this % dir)*dir
	mgVector_c operator<<=(const mgUnitVector_c & dir) const; // returns *this - (*this % dir)*dir

	mgVector_c operator>>=(const mgPlane_c & pln) const;
	mgVector_c operator<<=(const mgPlane_c & pln) const;


// cast operator to conveniently pass the list to parasolid
	operator double* () { return iComp; }
// more explicit const version
	const double* crds() const { return iComp; } // $c63
// more explicit write access version
	double* crdsW() { return iComp; } // $c75

// Archiving
	void save( su_CArchive& ar ) const;
	void restore( su_CArchive& ar );

	// CArchive API wrapper
	void save( CArchive& ar ) const;
	void restore( CArchive& ar );

// These are only here and declared as friends, so that we can have acces to the private 
//	data of the vector translation portion of the xform. These data needed for efficient
// implementation that do not involve function calls
	friend MG_EXPORT mgPoint_c operator*( mgPoint_c const &, mgXform_c const & );

	mgVector_c pullBack(mgVector_c const &dir1, mgVector_c const &dir2) const;
	int dominantComponentIndex() const;

	//CWN project ER085683 - Implement Euler Angle Computations
	//Eulera Matrices are formed by  Phi Rotation, * then* Theta Rotation, * then* Psi rotation.
	static char phiInd() { return 0; } //Phi - aka Pitch - angle around X" Axis
	static char thetaInd() { return 1; } //Theta - aka Yaw or Heading - angle around Y" axis
	static char psiInd() { return 2; } //Psi - aka Roll or Bank - angle around Z" axis

	static mgVector_c sphericalPolar(double theta, double phi);
	static mgVector_c sphericalPolar(double theta, double phi, char isTrigs);
	static mgVector_c rand(double d, bool firstOctOnly = false, char wh = 0); // $c77,$c78
private:
/*


	// Binary minus.
	mgVector_c const &operator-=( mgVector_c const & );

	// Scalar product of a mgPoint_c.
	friend MG_EXPORT double operator%( mgPoint_c const &, mgVector_c const & );
	friend MG_EXPORT double operator%( mgVector_c const &, mgPoint_c const & );
	mgVector_c const &operator/=( double );

	// Transform a mgVector_c by a 3x3 matrix.
	friend MG_EXPORT mgVector_c operator*( mgMatrix_c const &, mgVector_c const & );
	friend MG_EXPORT mgVector_c operator*( mgVector_c const &, mgMatrix_c const & );
	mgVector_c const &operator*=( mgMatrix_c const & );

protected:
	friend class mgUnitVector_c;
	friend class mgPoint_c;
	friend class mgXform_c;
	friend class mgMatrix_c;

// The following methods should only be used in emergency situations!!!
	public:
		operator const vector& ();
#ifdef GC_FILE
 		const vector& rep() const { return *_rep; }
#endif
*/
	mgVector_c(int); // Private and undefined. Prevents compilation of mgVector_c(NULL) or FALSE instantiations (CID 148538 SPR 1032316)

private:

//	Private Data
	double	iComp[3];

	friend class mgPoint_c;
	
};

MG_EXPORT  double mg_CoTangentBetween(const mgVector_c& v1, const mgVector_c& v2);



//=======================================================================
//	Definition of INLINE (data access) member functions
//=======================================================================
inline	double mgVector_c::x() const 
{ 
	return ( iComp[0] ); 
}

inline	double mgVector_c::y() const 
{ 
	return ( iComp[1] ); 
}

inline	double mgVector_c::z() const 
{ 
	return ( iComp[2] ); 
}

inline	double mgVector_c::component( int i ) const 
{ 
	return ( iComp[i] ); 
}

inline	BOOL	mgVector_c::null() const
{
	return (iComp[0] == 0.0 && iComp[1] == 0.0 && iComp[2] == 0.0);
}

inline void mgVector_c::get(double coor[3]) const
{
	memcpy( coor, iComp, 3 * sizeof( double ) );   
}

inline void mgVector_c::get(float coor[3]) const
{
	coor[0] = (float)iComp[0];
	coor[1] = (float)iComp[1];
	coor[2] = (float)iComp[2];
}

// This is class used for SPR 303514 may be in future replaced by mgVector_c class presently all overloaded operators are
// of this class is not implimented in mgVector_c class 
class  MG_EXPORT gcMdiPoint_c
{
 public :
   gcMdiPoint_c(void) : x(0), y(0), z(0) {}
   gcMdiPoint_c(double ix, double iy, double iz) : x(ix), y(iy), z(iz) {}
   gcMdiPoint_c(const gcMdiPoint_c& other) : x(other.x), y(other.y), z(other.z) {}

   ~gcMdiPoint_c(void) {}

   gcMdiPoint_c& normalize() {double mag=magnitude(); return (mag ? (*this)/=mag: *this);}
   double magnitude(void) const { return sqrt(x*x + y*y + z*z); }
   void zero() { x=y=z=0; }

   friend gcMdiPoint_c operator%(const gcMdiPoint_c &one, const gcMdiPoint_c &other)
   {
      return gcMdiPoint_c(one.y*other.z-one.z*other.y,
		       one.z*other.x-one.x*other.z,
		       one.x*other.y-one.y*other.x);
   }
   friend gcMdiPoint_c operator+(const gcMdiPoint_c &one, const gcMdiPoint_c &other)
   {
      return gcMdiPoint_c(one.x+other.x,
		       one.y+other.y,
		       one.z+other.z);
   }
   friend gcMdiPoint_c operator*(const gcMdiPoint_c &one, const double s)
   {
      return gcMdiPoint_c(one.x*s,
		       one.y*s,
		       one.z*s);
   }
   friend gcMdiPoint_c operator*(const double s, const gcMdiPoint_c &one)
   {
      return gcMdiPoint_c(one.x*s,
		       one.y*s,
		       one.z*s);
   }
   friend gcMdiPoint_c operator/(const double s, const gcMdiPoint_c &one )
   {
      return gcMdiPoint_c(one.x/s,
		       one.y/s,
		       one.z/s);
   }
   friend gcMdiPoint_c operator/(const gcMdiPoint_c &one, const double s )
   {
      return gcMdiPoint_c(one.x/s,
		       one.y/s,
		       one.z/s);
   }
   friend double operator*(const gcMdiPoint_c &one, const gcMdiPoint_c &other)
   {
      return one.x*other.x + one.y*other.y + one.z*other.z;
   }
   friend gcMdiPoint_c operator-(const gcMdiPoint_c &one, const gcMdiPoint_c &other)
   {
      return gcMdiPoint_c(one.x-other.x, one.y-other.y, one.z-other.z);
   }
   gcMdiPoint_c &operator/=(const double s)
   {
      x /= s; y /= s; z /= s;
      return *this;
   }
   gcMdiPoint_c &operator*=(const double s)
   {
      x *= s; y *= s; z *= s;
      return *this;
   }
   gcMdiPoint_c &operator-=(const gcMdiPoint_c &other)
   {
      x -= other.x; y -= other.y; z -= other.z;
      return *this;
   }
   gcMdiPoint_c &operator+=(const gcMdiPoint_c &other)
   {
      x += other.x; y += other.y; z += other.z;
      return *this;
   }

   double x, y, z;
};



// Added $c66. Not serialized.
class MG_EXPORT mgVector2_c
{
public:
	mgVector2_c() { m[0] = m[1] = 0; }
	mgVector2_c(double x, double y) { m[0] = x; m[1] = y; }
	mgVector2_c(double mIn[2]) { m[0] = mIn[0]; m[1] = mIn[1]; }

	mgVector_c vec() const { return mgVector_c(m[0], m[1], 0); }
	mgPoint_c pnt() const;

	double sqlen() const { return m[0] * m[0] + m[1] * m[1]; }
	double len() const { return std::sqrt(sqlen()); }

	mgVector2_c norm(double tol) const
	{
		double q = len();
		if (q > tol) return mgVector2_c(m[0] / q, m[1] / q);
		return mgVector2_c(); // return zero
	}

	double& operator[](int i) { return m[i]; }
	const double& operator[](int i) const { return m[i]; }

	double x()  const { return m[0]; }
	double y()  const { return m[1]; }
	void set_x(double x) { m[0] = x; }
	void set_y(double y) { m[1] = y; }
	void set(double x, double y) { m[0] = x; m[1] = y; }

	const double * crds() const { return m; }

	mgVector2_c & operator+=(const mgVector2_c & rhs)
	{
		m[0] += rhs.m[0]; m[1] += rhs.m[1];
		return *this;
	}
	mgVector2_c & operator-=(const mgVector2_c & rhs)
	{
		m[0] -= rhs.m[0]; m[1] -= rhs.m[1];
		return *this;
	}
	mgVector2_c & operator*=(double d)
	{
		m[0] *= d; m[1] *= d;
		return *this;
	}

	bool isZero(double tol) const
	{
		return (fabs(m[0]) <= tol) && (fabs(m[1]) <= tol);
	}

	bool isSame(const mgVector2_c & rhs, double tol) const
	{
		return (fabs(m[0]-rhs.m[0]) <= tol) && (fabs(m[1]-rhs.m[1]) <= tol);
	}

	mgMv_c mv() const { return vec().mv(); }

private:
	friend class mgMatrix2_c;
	double m[2];
}; // endclass mgVector2_c

MG_EXPORT mgVector2_c operator*(double v, mgVector2_c const& rhs);


class MG_EXPORT mgVector4_c
{
public:
	mgVector4_c() { m[0] = m[1] = m[2] = 0; m[3] = 1; }
	mgVector4_c(double x, double y, double z, double w) { m[0] = x; m[1] = y; m[2] = z; m[3] = w; }
	mgVector4_c(double mIn[4]) { m[0] = mIn[0]; m[1] = mIn[1]; m[2] = mIn[2]; m[3] = mIn[3]; }
	explicit mgVector4_c(const mgVector_c & v3) {
		m[0] = v3.x(); m[1] = v3.y(); m[2] = v3.z();
		m[3] = 1;  // IBL: This should really be 0.
	}
	explicit mgVector4_c(const mgPoint_c & p3);

	mgVector_c getVector3() { return mgVector_c(m[0] / m[3], m[1] / m[3], m[2] / m[3]); }; // IBL $c57:  this is illadvised. Use vec() henceforth.

	mgVector_c vec() const { return mgVector_c(m[0], m[1], m[2]); }
	mgPoint_c pnt() const;

	bool isZero(double tol = 0.0) const;

	double& operator[](int i) { return m[i]; }
	const double& operator[](int i) const { return m[i]; }

private:
	friend class mgMatrix4_c;
	double m[4];
};

MG_EXPORT void mg_getBasis(const mgVector_c &n, mgVector_c &tx, mgVector_c &ty);
MG_EXPORT mgVector4_c operator*(double v, mgVector4_c const & rhs);

#ifdef _HTML_DEBUG
class suDebStream_c;
MG_EXPORT suDebStream_c & operator<<(suDebStream_c & s, const mgVector_c &); 
MG_EXPORT suDebStream_c& operator<<(suDebStream_c& s, const mgVector2_c&);
MG_EXPORT suDebStream_c & operator<<(suDebStream_c & s, const mgVector4_c &);
#endif

#endif // VECTOR_INCLUDED 

