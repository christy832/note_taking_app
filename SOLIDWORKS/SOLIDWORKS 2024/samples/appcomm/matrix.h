//$c65 IBL 12/05/23 IR-1207256* Added mg_cossin3(),mg_solveAngle()
//$c64 IBL 11/02/23 IR-1194679* Fix to mgMatrix_c::getEulerianAngles()
//$c63 IBL 10/26/23 TSK7906819/FUN117315 Added mg_atan2/3. Minor change to mgMatrix2_c constructor.
//$c62 IBL Added mgMatrix_c::isZero(),isEqual(),negate(), scalar product
//$c61 IBL 02/06/23 IR-1095805 Added mgMatrix4_c::crds(), mg_cosSinFast() taking an isTrg bool
//$c60 IBL 01/23/23 Prj 25934 FUN 129331 TSK9050341 Renamed mgMatrix2_c::getEigenSystemgeneral()
//$c59 IBL 01/06/23 Added some comments only
//$c58 IBL 12/28/22 Prj 25934 FUN 129331 Addded mgMatrix_c::a11(),a12(),...a33() for greater code clarity
//$c57 IBL 09/28/22 Prj 25934 FUN 129331 Added mgSolveQuarticReal(), also a new mgMatrix_c constructor
//$c56 IBL 05/05/22 Prj 25934 Added mg_coshsinh()
//$c55 IBL 03/02/22 Prj 25934 Added matrixProperties_e, mgMatrix_c::getAngleZ()
//$c54 CWN 02/01/22 project ER085683 - implement get/setEulerAngles
//$c53 IBL 01/28/22 Prj 25934 Added mgMatrix[4]_c::eigenSystemSymmetric(), copyFrom(), mg_SolveQuadratic2, mg_solveCubic2
//$c52 IBL 05/17/21 Prj 25437 Added mgMtric_c::setRow/Clm()
//$c51 IBL 02/01/21 Prj 24847 Declared mg_cossinFast()
//$c50 IBL 01/14/21 Prj 25437 Added mgMatrix2_c * mgVector2_c operator and mgMatrix2_c::transpose()
//$c49 IBL 12/14/20 Prj 25437 Extended  mgMatrix2_c and getEigenSystemSymmetric/General()
//$c48 IBL 12/01/20 Prj 25437 Added mg_asin(),mg_acos()
//$c47 IBL 10/23/20 Prj 25437 Added mgMatrix_c::max/minLengthRow/Column(). Also SPR 1184891 Added mgMatrix_c::update() exposing iSetiIdentity()
//$c46 IBL 06/17/20 Prj 24096 Added mgMatrix_c::setAxisVec()
//$c45 IBL 05/01/20 SPR 1170410 Added mgMatrix4_c::setSubMatrix()
//$c44 IBL 04/14/20 CID 184918 Added mgMatrix_c::crd()/crdW() methods.
//$c43 IBL 04/07/20 Prj 24847 SPR 1167668 Added BOOL tran param to $c41, mgMatrix4_c::isSame() and mgMatrix4_c * mgPoint_c
//$c42 IBL 03/27/20 Prj 24847 Extended $c41. Added mgMatrix_c::set()
//$c41 IBL 03/26/20 Prj 24847 Added mgMatrix4_c::set() and balance()
//$c40 IBL 03/23/20 Prj 24847 Added mgMatrix2//4_c::invert() and double * operator
//$c39 IBL 03/10/20 Prj 24847 Added mgMatrix_c::ex/y/z(), rotateAroundX/Y/ZAxis
//$c38 IBL 03/10/20 Prj 24847 Added mgMatrix2_c, mgMatrix4_c::generalInverse(). Extend mgMatrx4_c +/- to bottom row
//$c37 IBL 02/10/20 Prj 24847 SPR 1167668 Added mgMatrix_c::isScalar, mgMatrix4_c::split()
//$c36 IBL 02/06/20 Prj 24847 Added mgMatrix4::isScalar, getSubMatrix()
//$c35 IBL 11/01/19 Prj 24096 mgGeom adds: mgMatrix_c::setAxis(), axis(), and operator*=. mgMatrix4_c constructors.
//$c34 IBL 07/12219 Prj 24096 Added mgMatrix4_c::makeSymmetric() and zero initailisation.
//$c33 ASX 05/02/19 Prj 24126 SPR 1119263, 1119917 VS2017 compiler upgrade. Added mg_sin/mg_cos functions
//$c32 IBL 01/31/19 PRJ 24096 added mgMatrix[4]_c::power(double)
//$c31 IBL 10/02/18 Prj 24096 [Adding mgMv_c]. Added get[I]Axis(int) and mv methods.
//$c30 IBL 02/22/18 Prj 23259 Added mgMatrix_c::getSpectralRadius()
//$c29 IBL 02/20/18 Compile fix for $c28, renamed product evalMatrixProduct()
//$c28 IBL 02/19/18 Prj 23259 SPR 1068448. Added mgMatrix_c::generalInverse() and product()
//$c27	SMD	05/18/11 SPR 605838, added default argument for normalize
//$c26 YLU 07/08/09 added an arguement to snap tolerance for better numeric stability
//$c25  HLI 08/28/07 added more methods inc mgMatrix_c::getEigenSystem(), and mgMatrix4_c
//$c24  DSB 03/09/06 Added matrix inverse.
//$c23  DSB 09/01/05 Added comments to some accessor methods for clarity.
//$c22  CGB 04/22/05 SPR 259199 - ensure we validate matrix c'tor with correct tolerances when using DCM data
//$c21  RKK 11/02/01 SPR 114313 : added iValidateRepairOrthonormality
//$c20	JRK	03/13/01 Proj 4082: added mgMatrix_c(const double (&val)[9]) to speed up matrix mults
//$c19  SRK 03/10/00 SPR 86580 Provide wrappers for (su_)CArchive functions
//$c18    drd 06/24/00 Isolate swcc lib from other apps
//$c17	SRK/DRD 06/23/2000 IA64 Porting Tool, Update to use SWCC library, and derive all objects from su_CObject
//$c16  VIT 06/12/98 introduced restoreAsIs() for parts created under bugs
//$c15  VIT 07/03/97 added a private constructor, for asserting reasons only.
//$c14  JPD 05/21/97 (with VIT) constr now takes mgUnitVector_c; Renamed correctForPara to normalize(), added argument validateInput.
//$c13  LAL 05/10/97 intel compiler cleanup
//$c12  VIT 05/08/97 added correctForPara(), as their tolerances proved to be tighter
//$c11  PSB 05/08/97 Moved exposed include files to \am\sldworks\appcomm
//$c10  VIT 09/13/96 added operator ==
//$c9   VIT 12/18/95 purged commented out text; kill mgMatrix_c::checkIdentity()
//$c8   RPZ 09/06/95 made some methods inline ; change format of getXAxis & friends ; added getIXAxis & friends
//$c7   CPD 08/03/95 Point * Matrix and Matrix * Point declared friends
//$c6   CPD 08/02/95 mgPoint_c and mgXform_c made friends
//$c5   DSA 07/25/95 removed includes
//$c4   RPZ 02/11/95 Got rid of nested includes in sgSketch.h
//                   replaced precompiled header section with mopch.h
//                   changed all include directive to include the full 
//                   path from am on down.
//$c3   RPZ 02/04/95 Changed restore to not allocate memory
//$c2   DJC 01/30/95 added mgMatrix_c getXAxis, getYaxis and getZaxis functions.
//$c1   RPZ 01/10/95 moved from gcdll/geometry to create new mathgeom.dll
//========================================================================//
//              Copyright 1994 (Unpublished Material)                     //
//                  SolidWorks Corporation.   .                        //
//========================================================================//
//
//     File Name: matrix.h
//     
//     Application: MATH-GEOM utilities 
//     
//     Contents: class for simple 3d 3x3 (rotation) matrix
//
//  IBL: mgMatrix_c holds a 3x3 row-major array and an iIsIdentity flag.
//  Some member routines assume the matrix is (right handed) orthonormal, and some do not.
//  It is possible to use mgMatrix_c to hold and manipulate general 3x3 matrices
// but you are working somewhat "against the grain" of the initial implementation
// by doing so and occasionally have to prevent unwanted normalisations. 
//  mgMatrix_c seems to be conisidered sometimes as row-major, and sometimes column-major. Perhaps because it often acts from the right. 
// Most of the individual elemnet accessors are row-major.
// I have added a convention that lower case denotes row-major, and upper-case column-major
//
//========================================================================//
#ifndef MATRIX_INCLUDED
#define MATRIX_INCLUDED

class mgPoint_c;
class mgUnitVector_c;
class mgVector_c;
class mgVector4_c;
class mgXform_c;
class mgMatrix_c;
class mgMatrix2_c;
class mgIm_c;
class mgMKLMatrix_c;
class mgMKLMatrixIm_c;

class su_CArchive;	// for API CArchive wrapper, do not remove

#include <appcomm/unitvec.h>
#include <appcomm/mv.h>
#include <appcomm/swcc.h>
#include <utils/debug/debugext.h>

	//CWN project ER085683 - Implement Euler Angle Computations
enum EulerAnglesMethod_e
{
	eam_IntrinsicX = 1,
	eam_Default = eam_IntrinsicX
};

enum matrixProperties_e
{
	mtp_rigidRight = 0, // Right handed orthonormal
	mtp_nonUnit = 0x1, // Axies non unit (normal)
	mtp_nonOrtho =0x2, // Axies non othogonal
	mtp_leftHanded = 0x4, // Axies ortho but LHS
	mtp_hasPerspective = 0x8
};


class MG_EXPORT mgMatrix_c
{
public:

	// Construct a mgMatrix_c from three vectors that form its rows. (initlise equivalent to iSet(v1,v2,v3,TRUE,TRUE,FALSE))
	mgMatrix_c( const mgUnitVector_c&, const mgUnitVector_c&, const mgUnitVector_c&);

	// Construct symmetric matrix v * v_tran
	explicit mgMatrix_c(const mgVector_c&);
	// Construct a scalar matrix 
	explicit mgMatrix_c(double diag);
	explicit mgMatrix_c(const mgMatrix2_c &m2, double e33 = 0);
	mgMatrix_c(const mgInterval2d_c& srcRng, const mgInterval2d_c& tgtRng); // 2D xform mapping one rectangle to another
	// add dcm flag to control tolerances for validation: please use this c'tor with dcm=TRUE
	// whenever you need to construct a matrix with data from the DCM (SPR 259199)
	mgMatrix_c( BOOL dcm, const mgUnitVector_c&, const mgUnitVector_c&, const mgUnitVector_c&);
	mgMatrix_c(const double (&val)[9], BOOL normalize = TRUE);
	mgMatrix_c( );							// Default indentity
	mgMatrix_c( const mgMatrix_c& m );			// copy
	void setZero();
	void set(double d) { loadIdentity(d); }

	mgMatrix_c const&	operator=( const mgMatrix_c& m );	// assignment

	// Form mgMatrix_c for rotation by angle about mgVector_c.
	friend MG_EXPORT mgMatrix_c mg_RotationMatrix( double, mgVector_c const &, double snapTol = 0.0  );

	// Destructor
	~mgMatrix_c();

	void normalize(BOOL validateInput = FALSE, BOOL dcubed = FALSE);

	void loadIdentity(double d = 1.0); // initalise as diagonal matrix
	matrixProperties_e getProperties() const;

	// Extract an element of the mgMatrix_c (row-major)
	double element(int row, int col) const;
	// Extract an element of the mgMatrix_c (column-major)
	double Element(int row, int col) const;

	//	Enquire iIdentity field																	 
	BOOL	isIdentity() const;

	mgMv_c blade() const; // rotor exp( axis | e123)
	mgMv_c mv() const; // rotor form exp( blade() * angle() /2)

	BOOL operator==( const mgMatrix_c& mat2 ) const; // checks iElem and iIdentity
	BOOL isSame(const mgMatrix_c &, double tol = -1.0) const; // checks iElem only
	BOOL isEqual(const mgMatrix_c& rhs, double tol = -1.0) const { return isSame(rhs, tol); }
	//	Check if Identity matrix
	//	BOOL	mgMatrix_c::checkIdentity() const;	// mat*mat has better means; constructor
				// does it anyway; notohing else needs this separate check

	// functions to get the X, Y and Z axes (columns of the matrix)
	void getAxis(int ax, mgUnitVector_c* axisOut) const;
	void getXAxis( mgUnitVector_c* axisOut ) const;
	void getYAxis( mgUnitVector_c* axisOut ) const;
	void getZAxis( mgUnitVector_c* axisOut ) const;

	// Return the column vectors unnomrmalised
	mgVector_c ex() const { return mgVector_c(iElem[0], iElem[3], iElem[6]); }
	mgVector_c ey() const { return mgVector_c(iElem[1], iElem[4], iElem[7]); }
	mgVector_c ez() const { return mgVector_c(iElem[2], iElem[5], iElem[8]); }

	//mgVector_c row(UINT8 i) const { return mgVector_c(iElem[3 * i + 0], iElem[3 * i + 1], iElem[3 * i + 2]); }
	mgVector_c clm(UINT8 i) const { return mgVector_c(iElem[0 + i], iElem[3 + i], iElem[6 + i]); }
	mgVector_c Clm(UINT8 i) const { return mgVector_c(iElem[3 * i + 0], iElem[3 * i + 1], iElem[3 * i + 2]); }

	// returns which row has the greatest length (only meaningful for non orthonormal matrices)
	int maxLengthRow(double * lenOut = nullptr) const;
	// returns which column has the greatest length
	int maxLengthColumn(double * lenOut = nullptr) const;
	int minLengthRow(double * lenOut = nullptr) const;
	int minLengthColumn(double * lenOut = nullptr) const;

	void rotateAroundXAxis(double ang);
	void rotateAroundYAxis(double ang);
	void rotateAroundZAxis(double ang);

	void rotateAroundZAxisPi(); // fast negate of ex and ey
	void negateAxis(char ii); // Negate ii'th column

	void setEulerAngles(const mgVector_c& angleVectorIn, EulerAnglesMethod_e methodIn = EulerAnglesMethod_e::eam_Default);
	bool getEulerAngles(mgVector_c& angleVectorOut, EulerAnglesMethod_e methodIn = EulerAnglesMethod_e::eam_Default) const;

	double prod(int i, int j, const mgMatrix_c& rhs) const { return iElem[3 * i + 0] * rhs.iElem[0 * 3 * j] + iElem[3 * i + 1] * rhs.iElem[1 * 3 + j] + iElem[3 * i + 2] * rhs.iElem[2 * 3 + j]; }
	double operator%(const mgMatrix_c& rhs) const { return (prod(0, 0, rhs) + prod(1, 1, rhs) + prod(2, 2, rhs)) / 3; }

	mgUnitVector_c axis(int ax) const; // Returns ax'th column
	// functions to get the inverse X, Y and Z axes (rows of the matrix)
	void getIAxis(int ax, mgUnitVector_c* axisOut) const;
	void getIXAxis( mgUnitVector_c* axisOut ) const;
	void getIYAxis( mgUnitVector_c* axisOut ) const;
	void getIZAxis( mgUnitVector_c* axisOut ) const;

	// Direct write access to individual rows and columns, use with caution. Call update() to set iIdentity flag after use
	void setAxis(int ax, const mgUnitVector_c* axisIn); // set ax'th column
	void setAxisVec(int ax, const mgVector_c& axisIn);
	void setRow(UINT8 i, const mgVector_c& v) { iElem[3 * i + 0] = v.x(); iElem[3 * i + 1] = v.y(); iElem[3 * i + 2] = v.z(); }
	void setClm(UINT8 j, const mgVector_c& v) { iElem[0 + j] = v.x(); iElem[3 + j] = v.y(); iElem[6 + j] = v.z(); }
	void set(const mgVector_c & row1, const mgVector_c & row2, const mgVector_c & row3, BOOL doNormalize = FALSE, BOOL fullyValidate = FALSE, BOOL dcubed = FALSE);

	double trace() const { return iElem[0] + iElem[4] + iElem[8]; }

	// Inverse (same as transpose)
	mgMatrix_c inverse() const;	// Inverse (same as transpose)
	// Inverse (computed via adjugate matrix), works if mgMatrix_c is nonunitary.
	mgMatrix_c generalInverse() const;
	bool invert(mgMatrix_c & res, bool assertIfSingular = true) const; // sets res = this when singular and asserts if enabled

	// Raise to power
	mgMatrix_c power(double x) const;

	// Multiply two matrices. Note that this normalizes the result!
	friend MG_EXPORT mgMatrix_c operator*( mgMatrix_c const &, mgMatrix_c const & );

	// Archiving
	void save( su_CArchive& ar ) const;
	void restore( su_CArchive& ar );
	// Use restoreAsIs only if you set a new MO_VERSION
	void restoreAsIs( su_CArchive& ar );

	// CArchive API wrapper
	void save( CArchive& ar ) const;
	void restore( CArchive& ar );
	void restoreAsIs( CArchive& ar );

	// Transform a mgPoint_c by a mgMatrix_c.
	friend MG_EXPORT mgPoint_c operator*( mgMatrix_c const &, mgPoint_c const & );
	friend MG_EXPORT mgPoint_c operator*( mgPoint_c const &, mgMatrix_c const & );

	friend MG_EXPORT mgVector_c operator*( mgVector_c const &, mgMatrix_c const & );

	//	To be able to access the private data of the affine part of mgXform for efficient implementation
	friend MG_EXPORT mgPoint_c operator*( mgPoint_c const &, mgXform_c const & );
	friend MG_EXPORT mgVector_c operator*( mgVector_c const &, mgXform_c const & );

	friend MG_EXPORT mgMatrix_c evalMatrixProduct(mgMatrix_c const &, mgMatrix_c const &, BOOL normalize);

	//RKK : Cleaner function to force repair Orthonormality
	BOOL iValidateRepairOrthonormality();


	void zero();
	void tensor(mgVector_c const &v0, mgVector_c const &v1);

	double getDeterminant() const;
	double det() const { return getDeterminant(); }
	double minor(int i, int j) const;
	static mgMatrix_c getMatrixFromEigs(const double eigenvalues[3], const mgVector_c eigenvectors[3], BOOL forceRigid);

	// getEigensystem() provides 3x3  P*D*P_inv matrix diagonization provided all eigenvalues are real. Returns number of eigenvalues
	//int getEigensystem(double *eigenvalues, mgUnitVector_c *eigenvectors) const; // $c25
	int getEigensystemSymmetric(double *eigenvalues, mgUnitVector_c *eigenvectors, int numSet =0) const; // $c45
	int getEigensystemGeneral(double *eigenvalues, mgUnitVector_c *eigenvectors, int numSet =0) const; // $c45

	// $c53
	int eigenSystemSymmetric(mgVector_c& evalsOut, mgMatrix_c* evecsOut, int algo = 0) const;

	int getNullspace(mgUnitVector_c *nullBasis, bool forceNull = false); //returns 1 minus rank = number of vectors in nullBasis
	double getSpectralRadius() const; // return the largest absolute eigenvalue (or -1.0 if fail to compute)


	bool isNearZero(double tol = -1.0) const;
	bool isZero(double tol = -1.0) const { return isNearZero(tol);}

    bool isNearIdentity() const;
	bool isUnitary(double tol, double & diag) const;
	bool isUnitary(double tol) const;
	bool isSymmetric(double tol) const;
	bool isAntiSymmetric(double tol, bool checkDiag=true) const; // if checkDiag is true, we require diagonal elements==0
	bool is2D(double tol) const;

    mgMatrix_c transpose() const;

    mgMatrix_c operator+(const mgMatrix_c &mm) const {
        mgMatrix_c tmp; int i; for(i = 0; i < 9; ++i) { tmp.iElem[i] = mm.iElem[i] + iElem[i]; }
		tmp.iSetiIdentity();
		return tmp;
    }
    mgMatrix_c operator-(const mgMatrix_c &mm) const {
        mgMatrix_c tmp; int i; for(i = 0; i < 9; ++i) { tmp.iElem[i] = mm.iElem[i] - iElem[i]; }
		tmp.iSetiIdentity();
		return tmp;
    }
    mgMatrix_c &operator +=(const mgMatrix_c &mm){
     int i; for(i = 0; i < 9; ++i) { iElem[i] += mm.iElem[i]; }
	 iSetiIdentity();
	 return *this;
    }
	mgMatrix_c &operator *=(double val) {
		mgMatrix_c tmp; int i; for (i = 0; i < 9; ++i) { iElem[i] *= val; }
		tmp.iSetiIdentity();
		return *this;
	}
	friend mgMatrix_c operator *(mgMatrix_c a, double val) { a *= val; return a; }
	friend mgMatrix_c operator *(double val, mgMatrix_c  a) { a *= val; return a; }

	mgMatrix_c &operator *=(mgXform_c const & xf);
	mgMatrix_c &operator *=(mgMatrix_c const & xf); // $c35. Note that this does NOT normalize the result

	void negate()
	{
		for (unsigned char ii = 0; ii < 9; ++ii) iElem[ii] = -iElem[ii];
		iSetiIdentity();
	}

	// Index start at 0.
	// These are all row-major
	double& operator()(int row, int col) { return iElem[row * 3 + col]; }
	const double& operator()(int row, int col) const { return iElem[row * 3 + col]; }
	double& crdW(int row, int col) { return iElem[row * 3 + col]; }
	double& crdW(UINT8 row, UINT8 col) { return iElem[row * 3 + col]; }
	double crd(int row, int col) const { return iElem[row * 3 + col]; }
	inline double crd(UINT8 row, UINT8 col) const { return iElem[row * 3 + col]; } 
	
	
	
	// $c58 Added: Index start at 1
#if 0
	inline double a11() const { return iElem[0]; }
	inline double a12() const { return iElem[1]; }
	inline double a13() const { return iElem[2]; }
	inline double a21() const { return iElem[3]; }
	inline double a22() const { return iElem[4]; }
	inline double a23() const { return iElem[5]; }
	inline double a31() const { return iElem[6]; }
	inline double a32() const { return iElem[7]; }
	inline double a33() const { return iElem[8]; }
#else
	inline double A11() const { return iElem[0]; }
	inline double A12() const { return iElem[3]; }
	inline double A13() const { return iElem[6]; }
	inline double A21() const { return iElem[1]; }
	inline double A22() const { return iElem[4]; }
	inline double A23() const { return iElem[7]; }
	inline double A31() const { return iElem[2]; }
	inline double A32() const { return iElem[5]; }
	inline double A33() const { return iElem[8]; }
#endif

	// If using the direct coordinate accessors above, call update() to reset the identiy flag and similar future maintenance
	void update() { iSetiIdentity(); }

	double& operator[](int i) { SU_VERIFY_RETURN(HLI, (i > -1 && i < 9), iElem[0]); return iElem[i]; }
    const double& operator[](int i) const { SU_VERIFY_RETURN(HLI, (i > -1 && i < 9), iElem[0]); return iElem[i]; }

	mgUnitVector_c getRotationAxis() const;
    double getRotationAngle(mgUnitVector_c *inAxis = NULL) const;

	BOOL isScalar(double & valOut, double tol) const; // returns true if matrix is diagonal with all nonzero elements equal (to tolerance) 

	void getSubMatrix(mgMatrix2_c & resOut, int i, int j) const; // unsigned cofactor

	mgXform_c * xform(double tol = -1.0) const;

	//$c53
	void copyFrom(const mgMKLMatrix_c&, bool transpose = false, double scl= 1.0,  UINT8* rowPerm = nullptr);
	void copyFrom(const mgMKLMatrixIm_c&, bool transpose = false, mgIm_c * scl = nullptr, UINT8* rowPerm = nullptr);

	bool getAngleZ(double& angOut) const; // Like getRotationAngle(&mgUnitVector_c::zAxis()) but faster and fails if matrix not fully Z aligned

private:
	// we want(ed) to enforce creating good (unitary) matrices, but do not want to assert on old files
	mgMatrix_c( const mgUnitVector_c&, const mgUnitVector_c&, const mgUnitVector_c& , BOOL fullyValidate , BOOL dcubed=FALSE);
	void iSetiIdentity(); 

private:  
	//	Private Data
	// IBL: NB. Adding or changing members here risks breaking bytedump mgXform_c archive streamers!!
	double iElem[9];   // values (row-major)
	BOOL	iIdentity; // bool flag
	friend class mgPoint_c;
	friend class mgVector_c;
	friend class mgXform_c;
	friend class mgMv_c;
	friend class mgMatrix4_c;
}; // endclass mgMatrix_c


//===========================================================
//	Definition of INLINE member functions
//===========================================================
inline	double mgMatrix_c::element(int row, int col) const { return (iElem[3 * row + col]); }
inline	double mgMatrix_c::Element(int row, int col) const { return (iElem[3 * col + row]); }

inline	BOOL mgMatrix_c::isIdentity ()	const
{
	return	iIdentity;
}


inline void mgMatrix_c::getAxis(int ax, mgUnitVector_c* axisOut) const // assumes 0 <= ax < 3
{
	axisOut->set_x(iElem[ax]); axisOut->set_y(iElem[ax+3]); axisOut->set_z(iElem[ax+6]);
}

inline void mgMatrix_c::setAxis(int ax, const mgUnitVector_c* axisIn) // assumes 0 <= ax < 3
{
	iElem[ax] = axisIn->x(); iElem[ax + 3] = axisIn->y(); iElem[ax + 6] = axisIn->z();
}

inline void mgMatrix_c::setAxisVec(int ax, const mgVector_c& axisIn) // assumes 0 <= ax < 3
{
	iElem[ax] = axisIn.x(); iElem[ax + 3] = axisIn.y(); iElem[ax + 6] = axisIn.z();
}


inline mgUnitVector_c mgMatrix_c::axis(int ax) const
{
	mgUnitVector_c ret;
	getAxis(ax, &ret);
	return ret;
}

inline void mgMatrix_c::getXAxis (mgUnitVector_c* axisOut) const
{	
	axisOut->set_x( iElem[0] ); axisOut->set_y( iElem[3] ); axisOut->set_z( iElem[6] );
}

inline void mgMatrix_c::getYAxis (mgUnitVector_c* axisOut) const
{	
	axisOut->set_x( iElem[1] ); axisOut->set_y( iElem[4] ); axisOut->set_z( iElem[7] );
}

inline void mgMatrix_c::getZAxis (mgUnitVector_c* axisOut) const
{	
	axisOut->set_x( iElem[2] ); axisOut->set_y( iElem[5] ); axisOut->set_z( iElem[8] );
}

inline void mgMatrix_c::getIAxis(int ax, mgUnitVector_c* axisOut) const // assumes 0 <= ax < 3
{
	axisOut->set_x(iElem[3*ax]); axisOut->set_y(iElem[3*ax+1]); axisOut->set_z(iElem[3*ax+2]);
}

inline void mgMatrix_c::getIXAxis (mgUnitVector_c* axisOut) const
{	
	axisOut->set_x( iElem[0] ); axisOut->set_y( iElem[1] ); axisOut->set_z( iElem[2] );
}

inline void mgMatrix_c::getIYAxis (mgUnitVector_c* axisOut)	const
{	
	axisOut->set_x( iElem[3] ); axisOut->set_y( iElem[4] ); axisOut->set_z( iElem[5] );
}

inline void mgMatrix_c::getIZAxis (mgUnitVector_c* axisOut)	const
{	
	axisOut->set_x( iElem[6] ); axisOut->set_y( iElem[7] ); axisOut->set_z( iElem[8] );
}

inline void mgMatrix_c::setZero()
{
	for (char ii = 0; ii < 9; ++ii) iElem[ii] = 0; // could use memset
	iIdentity = FALSE;
}

//Prj 24126 SPR 1119263, 1119917 VS2017 compiler upgrade.
MG_EXPORT void mg_cossin(double angle, double& cosOut, double& sinOut);

// Lowest precision bits dependent on C optimiser setting
MG_EXPORT void mg_cossinFast(double angle, double& cosOut, double& sinOut);

MG_EXPORT void mg_cossinFast(double angle, double& cout, double& sout, bool isTrig);

MG_EXPORT void mg_coshsinh(double angle, double& cosOut, double& sinOut);
MG_EXPORT void mg_cossin3(double angle, double& cosOut, double& sinOut,int sig=-1);


//Prj 25437 Like std::acos and asin but clamp arguments to [-1,1]
MG_EXPORT double mg_acos(double x,bool isTrig = true);
MG_EXPORT double mg_asin(double x, bool isTrig = true);
//  atan[h] for real or complex with  easier control of sig
MG_EXPORT double mg_atan2(double y, double x, bool isTrig = true); // uses same y,x order as std::atan2
MG_EXPORT double mg_atan3(double y, double x, int sig);
MG_EXPORT mgIm_c mg_atan2(mgIm_c y, mgIm_c x, bool isTrig = true); // uses same y,x order as std::atan2
MG_EXPORT mgIm_c mg_atan3(mgIm_c y, mgIm_c x, int sig);

MG_EXPORT bool mg_solveAngle(double a, double b, double d, double* angOut, double* csOut = nullptr, int sig = -1);

// ===========================
// mgMatrix2_c  $c38 2x2 matrix
// ===========================
class MG_EXPORT mgMatrix2_c  
{
public:
	void loadIdentity(double mul = 1.0)
	{
		m[0] = m[3] = mul;
		m[1] = m[2] = 0;
	}

	mgMatrix2_c()
	{
		loadIdentity(1.0);
	}

	explicit mgMatrix2_c(double mul) {	loadIdentity(mul);}
	explicit mgMatrix2_c(double m11, double m12, double m21, double m22) { set( m11, m12, m21, m22);}
	mgMatrix2_c(const mgMatrix2_c &m2)	{ memcpy(m, m2.m, sizeof(m)); }

	explicit mgMatrix2_c(const mgVector2_c & vec)
	{
		m[0] = vec.m[0] * vec.m[0];
		m[1] = m[2] = vec.m[0] * vec.m[1];
		m[3] = vec.m[1] * vec.m[1];
	}

	void setZero() { m[0] = m[1] = m[2] = m[3] = 0; }
	void set(double a11, double a12, double a21, double a22) { m[0] = a11; m[1] = a12; m[2] = a21; m[3] = a22; }
	void set(double d) { loadIdentity(d); }
	double trace() const { return m[0] + m[3]; }
	double det() const { return m[0] * m[3] - m[1] * m[2]; }
	double phi() const; // arctan((b+c)/(a-d))/2) Most useful if symmetric, when it is the diagonilisation angle

	const double* getDataPtr() const { return m; }
	mgMatrix2_c transpose() const { return mgMatrix2_c(m[0], m[2], m[1], m[3]); }
	mgMatrix2_c inverse() const;
	bool invert(mgMatrix2_c & res,bool assertIfSingular = true) const;

	mgMatrix2_c & operator*=(double d)
	{
		m[0] *= d;	m[1] *= d;	m[2] *= d;	m[3] *= d;
		return *this;
	}
	friend mgMatrix2_c operator*(mgMatrix2_c a, double d) { a *= d; return a; } // return by value (will use move contructor)
	//mgMatrix2_c operator*(double d) const { return mgMatrix2_c(d*m[0], d*m[1], d*m[2], d*m[3]); }
	mgMatrix2_c operator*(const mgMatrix2_c &m2) const;
	mgMatrix2_c& operator*=(const mgMatrix2_c& m2);

	bool operator==(const mgMatrix2_c &m2) const {
		for (int i = 0; i < 4; ++i) if (m[i] != m2.m[i]) return false;
		return true;
	}

	bool operator<(const mgMatrix2_c &m2) const { //just for sorting
		for (int i = 0; i < 4; ++i) { if (m[i] < m2.m[i]) return true; if (m2.m[i] < m[i]) return false; }
		return false;
	}
	mgMatrix2_c &operator=(const mgMatrix2_c &m2)
	{
		for (int i = 0; i < 4; ++i) m[i] = m2.m[i];
		return *this;
	}

	mgMatrix2_c operator+(const mgMatrix2_c &mm) const
	{
		mgMatrix2_c tmp; int i; for (i = 0; i < 4; ++i) { tmp.m[i] = mm.m[i] + m[i]; }
		return tmp;
	}
	mgMatrix2_c operator-(const mgMatrix2_c &mm) const
	{
		mgMatrix2_c tmp; int i; for (i = 0; i < 4; ++i) { tmp.m[i] = mm.m[i] - m[i]; }
		return tmp;
	}

	BOOL isScalar(double & valOut, double tol) const; // returns true if matrix is diagonal with all nonzero elements equal (to tolerance) 
	BOOL isIdentity(double tol) const
	{
		double v;
		return isScalar(v, tol) && (fabs(v - 1.0) <= tol);
	}
	BOOL isZero(double tol) const
	{
		double v;
		return isScalar(v, tol) && (fabs(v) <= tol);
	}
	BOOL isUnitary(double tol) const;

	double minor(int i, int j) const { return m[(!i) * 2 + !j]; }
	//void getSubMatrix(double & resOut, int i, int j) const { resOut = minor(); }// unsigned cofactor

	double &operator()(int row, int col) { return m[row * 2 + col]; }
	const double &operator()(int row, int col) const { return m[row * 2 + col]; }
	double & crdW(int row, int col) { return m[row * 2 + col]; }
	double crd(int row, int col) const { return m[row * 2 + col]; }

	mgXform_c * xform(double tol = -1.0) const;

	mgVector2_c row(bool b) const { return mgVector2_c(m[2 * b + 0], m[2 * b + 1]); }
	mgVector2_c clm(bool b) const { return mgVector2_c(m[0 + b], m[2 + b]); }

	int getEigensystemGeneralReal(double *eigenvalues, mgVector2_c *eigenvectors, int numSet = 0) const; // $c45
	int getEigensystemSymmetric(double *eigenvalues, mgVector2_c *eigenvectors, int numSet = 0) const; // $c45

	mgMv_c mv() const { return mgMatrix_c(*this, 1.0).mv(); }

	friend mgVector2_c operator*(const mgMatrix2_c & m, const mgVector2_c & v);
	void negate() { m[0] = -m[0]; m[1] = -m[1]; m[2] = -m[2]; m[3] = -m[3]; }
	bool isEqual(const mgMatrix2_c&, double tol) const;

private:
	friend class mgMatrix_c;
	double m[4];
}; // endclass mgMatrix2_c

inline mgVector2_c operator*(const mgMatrix2_c & m, const mgVector2_c & v)
{
	return mgVector2_c(m.m[0] * v.x() + m.m[1] * v.y(), m.m[2] * v.x() + m.m[3] * v.y());
}

//////////////////////////////////////////////
// mgMatrix4_c
//////////////////////////////////////////////

class MG_EXPORT mgMatrix4_c // $c25: best for representing rigid motions
{
public:
    void loadIdentity(double mul=1.0)
    {
        for(int i = 0; i < 16; ++i) m[i] = 0.;
        m[0] = m[5] = m[10] = m[15] = mul;
    }

	mgMatrix4_c()
	{
		loadIdentity(1.0);
	}

	explicit mgMatrix4_c(double mul)
	{
		loadIdentity(mul);
	}

	mgMatrix4_c(const mgMatrix4_c &m2)
	{
		for (int i = 0; i < 16; ++i) m[i] = m2.m[i];
	}


	explicit mgMatrix4_c(const mgXform_c &);

	explicit mgMatrix4_c(const mgMatrix_c &m2)
	{
		for (int j = 0; j < 3; ++j)
		{
			for (int i = 0; i < 3; ++i)
			{
				m[4*i + j] = m2.crd(i, j);
			}
			m[4*3 + j] = m[4*j + 3] = 0.0;
		}
		m[15] = 1.0;
	}

	void set(const float m2[16], BOOL tran)
	{
		if (tran)
		{
			for (int ii = 0; ii < 4; ++ii)
				for (int jj = 0; jj < 4; ++jj)
					m[4 * ii + jj] = m2[4 * jj + ii];
		}
		else
		{
			for (int i = 0; i < 16; ++i) m[i] = m2[i];
		}
	}
	void set(const double m2[16], BOOL tran)
	{
		if (tran)
		{
			for (int ii = 0; ii < 4; ++ii)
				for (int jj = 0; jj < 4; ++jj)
					m[4 * ii + jj] = m2[4 * jj + ii];
		}
		else
		{
			for (int i = 0; i < 16; ++i) m[i] = m2[i]; // consider replacing with memcpy()
		}
	}
	void set12(const double m2[12])
	{
		for (int i = 0; i < 12; ++i) m[i] = m2[i]; // consider replacing with memcpy()
		m[12] = m[13] = m[14] = 0;
		m[15] = 1;
	}
	void set(double d) { loadIdentity(d); }
	void setZero() { for (char ii = 0; ii < 16; ++ii) m[ii] = 0; } // could use memset
	void negate() {	for (char ii = 0; ii < 16; ++ii) m[ii] = -m[ii]; } 
	
	void setDiag(double a, double b, double c, double d, bool opp)
	{
		if (opp)
		{	// UR -> LL
			m[3] = a; m[6] = b; m[9] = c; m[12] = d;
		}
		else
		{	// UL -> LR
			m[0] = a; m[5] = b; m[10] = c; m[15] = d;
		}
	}
	void setBlock(char wh, double a, double b, double c, double d)
	{
		double* p = m;
		if (wh & 0x1) p += 2;
		if (wh & 0x2) p += 8;
		p[0] = a; p[1] = b; p[4] = c; p[5] = d;
	}
	//$c53
	void copyFrom(const mgMKLMatrix_c&, bool transpose = false, double = 1.0, UINT8* rowPerm = nullptr);
	void copyFrom(const mgMKLMatrixIm_c&, bool transpose = false, mgIm_c * scl = nullptr, UINT8* rowPerm = nullptr);

    //mgMatrix4_c(const Matrix4f &m2);
    mgMatrix4_c &setTranslation(const mgVector_c &v)  { m[3] = v.x(); m[7] = v.y(); m[11] = v.z(); return *this;}

	BOOL isScalar(double& res, double tol) const;

    mgVector_c getTranslation() const { return mgVector_c(m[3], m[7], m[11]); }
    double getScale() const { return mgVector_c(m[0], m[1], m[2]).len(); }
    mgMatrix4_c getRotation() const {
        mgMatrix4_c tmp = *this;
        tmp.m[3] = tmp.m[7] = tmp.m[11] = 0;
        double scale = getScale();
        for(int i = 0; i < 16; ++i) tmp.m[i] /= scale;
        return tmp;
    }
    double getDeterminant() const // assumes botom row =(0,0,0,1)
	{
        return  m[0] * (m[5] * m[10] - m[6] * m[9]) -
                m[1] * (m[4] * m[10] - m[6] * m[8]) +
                m[2] * (m[4] * m[9] - m[5] * m[8]); 
    }
	double det() const; // general determinant

    const double* getDataPtr() const { return m; }

    double distTo(const mgMatrix4_c &) const;

	BOOL balance(BOOL wantUnit33); // controls whether scaling is held in [3][3] or the 3x3 matrix. Returns TRUE if matrix was changed

	mgMv_c mv() const;
	mgMv_c blade() const;

    bool isRigid() const;
    mgMatrix4_c scale(double val) const;
    mgMatrix4_c transpose() const;
	mgMatrix4_c inverse() const; // assumes botom row =(0,0,0,1)
	bool invert(mgMatrix4_c & res, bool assertIfSingular =false); // general inverse
	mgMatrix4_c generalInverse() const; 
	mgMatrix4_c power(double) const;
	double trace() const { return m[0] + m[5] + m[10] + m[15]; }
	double minor(int ii, int jj) const; // determinant of submatrix
	mgMatrix4_c operator*(const mgMatrix4_c &m2) const;
    mgMatrix4_c& operator*=(const mgMatrix4_c& m2);
	friend mgMatrix4_c operator *(mgMatrix4_c a, double val) { a *= val; return a; }

    mgVector_c getRotationAxis() const;
    double getRotationAngle(mgVector_c axis = mgVector_c()) const;

    bool operator==(const mgMatrix4_c &m2) const {
        for(int i = 0; i < 16; ++i) if(m[i] != m2.m[i]) return false;
        return true;
    }

    bool operator<(const mgMatrix4_c &m2) const { //just for sorting
        for(int i = 0; i < 16; ++i) { if(m[i] < m2.m[i]) return true; if(m2.m[i] < m[i]) return false; }
        return false;
    }
    
	mgPoint_c operator*(const mgPoint_c &pt) const;// $c43

	mgVector_c operator*(const mgVector_c &v) const {
		return mgVector_c(
			m[0] * v.x() + m[1] * v.y() + m[2] * v.z() + 0 * m[3],
			m[4] * v.x() + m[5] * v.y() + m[6] * v.z() + 0 * m[7],
			m[8] * v.x() + m[9] * v.y() + m[10] * v.z() + 0 * m[11]);
	}
    
    mgVector_c mult(const mgVector_c &v) const
    {//homogeneous multiplication so that translation vector is applied, too -sjr 1/30/2003
        return mgVector_c(
            m[0] * v.x() + m[1] * v.y() + m[2] * v.z() + 1 * m[3],
            m[4] * v.x() + m[5] * v.y() + m[6] * v.z() + 1 * m[7],
            m[8] * v.x() + m[9] * v.y() + m[10]* v.z() + 1 * m[11]);
    }

    mgVector_c mult(const mgVector4_c &v) const
    {//homogeneous multiplication so that translation vector is applied, too -sjr 1/30/2003
        return mgVector_c
            (
            m[0] * v.m[0] + m[1] * v.m[1] + m[2] * v.m[2] + v.m[3] * m[3],
            m[4] * v.m[0] + m[5] * v.m[1] + m[6] * v.m[2] + v.m[3] * m[7],
            m[8] * v.m[0] + m[9] * v.m[1] + m[10]* v.m[2] + v.m[3] * m[11]
            );
    }

    mgVector4_c mult4(const mgVector4_c &v) const
    {//homogeneous multiplication of a full 4-vector by 4-matrix
        return mgVector4_c
            (
            m[0] * v.m[0] + m[1] * v.m[1] + m[2] * v.m[2] + v.m[3] * m[3],
            m[4] * v.m[0] + m[5] * v.m[1] + m[6] * v.m[2] + v.m[3] * m[7],
            m[8] * v.m[0] + m[9] * v.m[1] + m[10]* v.m[2] + v.m[3] * m[11],
            m[12]* v.m[0] + m[13]* v.m[1] + m[14]* v.m[2] + v.m[3] * m[15]
            );
    }

	mgMatrix_c convertToMatrix() const;

    mgMatrix4_c &operator=(const mgMatrix4_c &m2)
    {
        for(int i = 0; i < 16; ++i) m[i] = m2.m[i];
        return *this;
    }

    mgMatrix4_c operator+(const mgMatrix4_c &mm) const
	{
        mgMatrix4_c tmp; int i; for(i = 0; i < 12+4; ++i) { tmp.m[i] = mm.m[i] + m[i]; } // $c38 inclue bottom row
        return tmp;
    }
	mgMatrix4_c operator-(const mgMatrix4_c &mm) const
	{
		mgMatrix4_c tmp; int i; for (i = 0; i < 12 + 4; ++i) { tmp.m[i] = mm.m[i] - m[i]; } // $c38 include bottom row
		return tmp;
	}
	mgMatrix4_c & operator*=(double d)
	{
		for (UINT8 i = 0; i < 16; ++i) { m[i] *= d; }
		return *this;
	}

	//BOOL isScalar(double & valOut, double tol) const; // returns true if matrix is diagonal with all nonzero elements equal (to tolerance) 
	BOOL isIdentity(double tol) const
	{
		double v;
		return isScalar(v, tol) && (fabs(v - 1.0) <= tol);
	}
	BOOL isZero(double tol) const
	{
		double v;
		return isScalar(v, tol) && (fabs(v) <= tol);
	}
	BOOL isEqual(const mgMatrix4_c & rhs, double tol) const
	{
		for (int ii = 0; ii < 16; ++ii) if (fabs(m[ii] - rhs.m[ii]) > tol) return FALSE;
		return TRUE;
	}

	void getSubMatrix(mgMatrix_c & resOut, int i, int j) const; // unsigned cofactor
	void setSubMatrix(const mgMatrix_c & resOut, int i, int j);

    double &operator()(int row, int col) { return m[row * 4 + col]; }
    const double &operator()(int row, int col) const { return m[row * 4 + col]; }
	double & crdW(int row, int col) { return m[row * 4 + col]; }
	double crd(int row, int col) const { return m[row * 4 + col]; }
		
	double &operator()(int rowcol) { return m[rowcol]; }
    const double &operator()(int rowcol) const { return m[rowcol]; }

	void makeSymmetric() // fill below the diagonal from above it
	{
		(*this)(1, 0) = (*this)(0, 1);
		(*this)(2, 0) = (*this)(0, 2); (*this)(2, 1) = (*this)(1, 2);
		(*this)(3, 0) = (*this)(0, 3); (*this)(3, 1) = (*this)(1, 3); (*this)(3, 2) = (*this)(2, 3);
	}

	BOOL split(mgXform_c & preOut, mgXform_c & postOut) const; // returns TRUE if preOut != Identity

    static mgMatrix4_c rigidTransform(const mgVector_c &c1, const mgVector_c &d1, const mgVector_c &c2, const mgVector_c &d2);
    static mgMatrix4_c rotationMatrix(const mgVector_c &axis, double angle);
    static mgMatrix4_c translationMatrix(const mgVector_c &delta) {
        mgMatrix4_c out;
        out.m[3] = delta.x(); out.m[7] = delta.y(); out.m[11] = delta.z();
        return out;
    }
    static mgMatrix4_c interpolate(const mgMatrix4_c &m1, const mgMatrix4_c &m2, double val);

    static mgMatrix4_c vvt(const mgVector_c &v);

	mgXform_c * xform(double tol = -1.0) const; // may return an mgGenXform_c *

	mgVector4_c row(UINT8 i) const { return mgVector4_c(m[4 * i + 0], m[4 * i + 1], m[4 * i + 2], m[4*i+3]); }
	mgVector4_c clm(UINT8 i) const { return mgVector4_c(m[0 + i], m[4 + i], m[8 + i], m[12+i]); }

	//$c53
	int eigenSystemSymmetric(mgVector4_c& evalsOut, mgMatrix4_c* evecsOut, int algo = 0) const;
	//int eigenSystemGeneral(mgVector4Im_c& evalsOut, mgMatrix4Im_c* evecsROut, mgMatrix4_c* evecsLOut = nullptr, int algo = 0) const;

	double prod(int i, int j, const mgMatrix4_c& rhs) const { return m[4 * i + 0] * rhs.m[0 * 4 * j] + m[4 * i + 1] * rhs.m[1 * 4 + j] + m[4 * i + 2] * rhs.m[2 * 4 + j] + m[4*i+3]*rhs.m[3*4+j]; }
	double operator%(const mgMatrix4_c& rhs) const { return (prod(0, 0, rhs) + prod(1, 1, rhs) + prod(2, 2, rhs) + prod(3,3,rhs))/4; }

	// Use with caution
	const double* crds() const { return m; }
	double* crdsW() { return m; }

private:
    double m[16];
	friend class mgXform_c;
	friend class mgMatrix_c;
}; // endclass mgMatrix4_c

MG_EXPORT mgMatrix4_c operator*(double d, const mgMatrix4_c & m); // { mgMatrix4_c res(m); res *= d; return res; }

MG_EXPORT int mg_solveQuadratic(double aa, double bb, double cc, double root[2]);
MG_EXPORT int mg_solveQuadratic2(double aa, double bb, double cc, double root[2], double tol); // More accurate when aa*cc much smaller than bb*bb
MG_EXPORT int mg_solveCubic(double aa, double bb, double cc, double dd, double root[3]);
MG_EXPORT int mg_solveCubic2(double aa, double bb, double cc, double dd, double root[3], double tol); // Calls mg_solveQuadratic2 rather than mg_solveQuadratic
MG_EXPORT int mg_solveQuarticReal(const double* coeffIn /* 5 doubles */, double rootsOut[4], double tol=-1.0);

#ifdef _HTML_DEBUG
class suDebStream_c;
MG_EXPORT suDebStream_c & operator<<(suDebStream_c & s, const mgMatrix2_c &);
MG_EXPORT suDebStream_c & operator<<(suDebStream_c & s, const mgMatrix_c &);
MG_EXPORT suDebStream_c & operator<<(suDebStream_c & s, const mgMatrix4_c &);
#endif


#endif
