//$c29 IBL 07/17/23 CID 193818 SPR 1248406 Added mgUnitVector_c(x,y,z,knowUnit) constructor
//$c28 IBL 02/03/23 Prj 25934 FUN 129331 TSK9050341 Added an mgUnitVector_c set method
//$c27 IBL 01/06/23 Prj 25934 FUN 129331 TSK9050341 Added optional currently ignored RNG specifier to $c26
//$c26 IBL 12/29/22 Prj 25934 FUN 129331 TSK9050341 Replaced mgUnitVector_c::random() with rand()
//$c25 IBL 07/15/22-2 IR-964153 Compile Fix Added mgUnitVector_c(const float *, bool) constructor
//$c24 IBL 11/12/20 Prj 25437 Added mgUnitVector_c::isEqualOrOpposite()
//$c23 IBL 10/26/20 Prj 25437 Added mgUnitVector_c::setv()
//$c22 IBL 10/12/20 Prj 25437 Added mgUnitVector_c::interpolate() 
//$c21 IBL 03/23/20 Compile fix for $c20
//$c20 IBL 03/23/20 Prj 24847 Added mgMatrix5_c *= operator
//$c19 IBL 03/16/20 Prj 24847 Added mgMatrix_c *= operator
//$c18 IBL 10/02/18 Compile fix for $c17.
//$c17 IBL 10/02/18 Prj 24096 [Adding mgMv_c] Added mgMv_c operator*=. Added axis(int).
//$c16 IBL 11/12/15 Added debug build mgUnuitVector_c suDebStream_c streamer
//$c15 ET  03/24/09 Added isSameDirectionUpToTol for planar surface normal snapping
//$c14 KDH 12/13/06 add random vector generator
//$c13  AMA 04/28/05 267770, tolerance issue : use use controlled tolerance when using isEqual function of mgUnitVector_c.
//$c12  JPD 05/21/97 Added isEqual() check whuch uses tighter tolerance than the mgVector_c
//$c11  HWL 05/12/97 take out dot product here.
//$c10  HWL 05/12/97 used mg_AngleBetween, angleSpanned is redundant,  add dot product here.
//$c9	XYZ 05/12/97 added angleSpanned().
//$c8   PSB 05/08/97 Moved exposed include files to \am\sldworks\appcomm
//$c7   VIT 12/29/95 provided new arg for mgVector_c=>mgUnitVector_c conversion
//$c6   VIT 09/18/95 changed an arg to "const"
//$c5   DSA 07/25/95 removed includes
//$c4   RPZ 02/11/95 Got rid of nested includes in sgSketch.h
//                   replaced precompiled header section with mopch.h
//                   changed all include directive to include the full 
//                   path from am on down.
//$c3   RPZ 02/04/95 Changed restore to not allocate memory
//$c2   RPZ 01/10/95 moved from gcdll/geometry to create new mathgeom.dll
//$c1   VIT 12/28/94  Added amUnitvec (mgVector_c);
//========================================================================//
//              Copyright 1994 (Unpublished Material)                     //
//                  SolidWorks Corporation.                           //
//========================================================================//
//
//     File Name: unitvec.h
//     
//        
//     
//     Contents: class for simple 3d point
//
//========================================================================//
#ifndef UNITVEC_INCLUDED
#define UNITVEC_INCLUDED

class mgPoint_c;
class mgUnitVector_c;
class mgVector_c;
class mgXform_c;
class mgMatrix_c; 
class mgMatrix5_c;


#include <appcomm/vector.h>
#include <appcomm/mv.h>
#include <engines/gci/engine/engconst_ic.h>

class MG_EXPORT mgUnitVector_c : public mgVector_c
{
public:

// Construct a unit mgVector_c from three components. 
// Always normalises result.
	mgUnitVector_c(double, double, double);
	mgUnitVector_c(double, double, double, bool assumeUnit);
	mgUnitVector_c(const double u[3]);
	mgUnitVector_c(const float u[3], bool assumeUnit);
	mgUnitVector_c();  							// 1,0,0
	mgUnitVector_c( const mgUnitVector_c& v );		// copy constructor
	mgUnitVector_c( const mgVector_c& v, BOOL unitLen = FALSE );		// copy constructor

// asssignment	
	mgUnitVector_c const& operator=( const mgUnitVector_c& v );	// assignment

// Destructor
	~mgUnitVector_c();

// common useful vectors
	static const mgUnitVector_c& axis(int ax);
	static const mgUnitVector_c& xAxis();
	static const mgUnitVector_c& yAxis();
	static const mgUnitVector_c& zAxis();
	// static mgUnitVector_c* random();
	static mgUnitVector_c rand(bool firstOctOnly = false, char wh = 0); // $c26,$c27

// Unary minus.
	friend MG_EXPORT mgUnitVector_c operator-( mgUnitVector_c const & );

// Transform a unit mgVector_c by the rotation matrix in a 
// transformation (gives an error if the transformation contains
// a shear).
	friend MG_EXPORT mgUnitVector_c operator*( mgUnitVector_c const &, mgXform_c const & );
	mgUnitVector_c const &operator*=(mgXform_c const &);
	mgUnitVector_c const &operator*=(mgMatrix_c const &);
	mgUnitVector_c const &operator*=(mgMatrix4_c const &);
	mgUnitVector_c const &operator*=(mgMatrix5_c const &);
	mgUnitVector_c const &operator*=(mgMv_c const &);

	mgUnitVector_c interpolate(double frac, const mgUnitVector_c & tgt, const mgUnitVector_c & axis) const;

	BOOL isEqual ( const mgUnitVector_c& v2, double tolIn = gcAngleTolerance / 10) const;
	BOOL isEqualOrOpposite(const mgUnitVector_c& vIn, double tol = gcAngleTolerance / 10) const;
	BOOL isSameDirectionUpToTol(const mgUnitVector_c& vIn, double tol) const;
	bool isEqualOrOpposite(const mgUnitVector_c& vIn, bool& isOpposite, double tol = gcAngleTolerance / 10) const;

	void setv(const mgUnitVector_c & rhs) // Like copy constuctor but does not assert unit length
	{
		set_x(rhs.x()); set_y(rhs.y()); set_z(rhs.z());
	}
	void setv(const mgVector_c& vecIn, bool isUnit);
	BOOL peturb(const mgVector_c& vecIn, int method = 0); // Adds vecIn and renormalises. Returns TRUE if this causes a change.
private:
/*
//----
// Constructors
//----

	// Scalar product of a mgPoint_c. This is just as for a mgVector_c,
	// but declared explicitly to avoid an ambiguity.

	friend MG_EXPORT double operator%( mgPoint_c const &, mgUnitVector_c const & );
	friend MG_EXPORT double operator%( mgUnitVector_c const &, mgPoint_c const & );


	// Find a mgPoint_c as the cross-product of a mgPoint_c with a 
	// unit mgVector_c.

	friend MG_EXPORT mgPoint_c operator*( mgPoint_c const &, mgUnitVector_c const & );
	friend MG_EXPORT mgPoint_c operator*( mgUnitVector_c const &, mgPoint_c const & );


	// The only way to get back from a mgVector_c to a mgUnitVector_c is by
	// means of normalise().  We make it explicit, and have no 
	// constructor from mgVector_c to mgUnitVector_c in order to make clear 
	// the change in value.

	friend MG_EXPORT mgUnitVector_c mg_Normalise( mgVector_c const & );

private:
	friend class mgPoint_c;
	friend class mgXform_c;
	friend class mgMatrix_c;

	public:
	// The following methods should only be used in emergency situations!!!
		operator const unit_vector& ();
		mgUnitVector_c( const unit_vector& );
#ifdef GC_FILE
		const unit_vector& rep() const { return *(unit_vector*)_rep; }
#endif
*/

};


#ifdef _HTML_DEBUG
class suDebStream_c;
MG_EXPORT suDebStream_c & operator<<(suDebStream_c & s, mgUnitVector_c &);
#endif

#endif
