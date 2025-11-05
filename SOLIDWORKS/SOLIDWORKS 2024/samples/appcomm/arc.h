//$c5   BAH 02/27/04 SPR 206057: Added iStart, iEnd
//$c4   DPS 02/05/04 SPR 205225: added iAm2D and iMatrix
//$c3   SSR 01/14/04 SPR 200235: dont need a xform, normal will do
//$c2   DPS 01/09/04 added mgXform_c iXform
//$c1   DPS 10/10/03 create arc object
//========================================================================//
//              Copyright 1994 (Unpublished Material)                     //
//                  SolidWorks Corporation.                           //
//========================================================================//
//
//     File Name: arc.h
//     
//        
//     
//     Contents: class for 3d arc
//
//========================================================================//
#ifndef MG_ARC_INCLUDED
#define MG_ARC_INCLUDED

#include <appcomm/mgdef.h>
#include <appcomm/swcc.h>
#include <appcomm/point.h>
#include <appcomm/unitvec.h>
#include <appcomm/matrix.h>

class mgPoint_c;
class mgUnitVector_c;
class mgVector_c;
class mgMatrix_c;


class mgArc_c
{
public:
	MG_EXPORT mgArc_c();
	MG_EXPORT mgArc_c(const mgArc_c& arc);

	MG_EXPORT mgArc_c(	const mgUnitVector_c&	normal,
						const mgPoint_c&		center,
						double					radius,
						double					startAngle,
						double					endAngle);

	MG_EXPORT mgArc_c(	const mgUnitVector_c&	normal,
						const mgPoint_c&		center,
						const mgPoint_c&		start,
						const mgPoint_c&		end);

	MG_EXPORT BOOL isValid();

	MG_EXPORT void getCenter(mgPoint_c& center);
	MG_EXPORT void getStart(mgPoint_c& start);
	MG_EXPORT void getEnd(mgPoint_c& end);
	MG_EXPORT void getNormal(mgUnitVector_c& normal);

	MG_EXPORT void getStartPoint(mgPoint_c& start);
	MG_EXPORT void getEndPoint(mgPoint_c& end);

	MG_EXPORT double getRadius();
	MG_EXPORT double getStartAngleInRadians();
	MG_EXPORT double getEndAngleInRadians();

	MG_EXPORT double getStartAngleInDegrees();
	MG_EXPORT double getEndAngleInDegrees();

	MG_EXPORT double convertToOglAngle(double swAngle);
	MG_EXPORT double getOglStartAngle();
	MG_EXPORT double getOglSweepAngle();

	MG_EXPORT void operator = (const mgArc_c& arc);

	double iGetAngle(const mgPoint_c& ptOnArc);
	mgVector_c iGetVector(double angle);
	void iEnsurePositiveOrientation();

	MG_EXPORT void set2D(bool is2D);
	MG_EXPORT void setMatrix(mgMatrix_c& matrixIn);

	bool			iAm2D;
	mgPoint_c		iCenter;
	mgPoint_c		iStart;
	mgPoint_c		iEnd;
	double			iRadius;
	double			iStartAngle;
	double			iEndAngle;
	mgUnitVector_c	iNormal;
	mgMatrix_c		iMatrix;
};

#endif