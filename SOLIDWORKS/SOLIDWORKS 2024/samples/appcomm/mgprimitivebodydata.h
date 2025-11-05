//$c3   JAC 04/08/04 .NET compiler changes.
//$c2   BWK 12/17/03 Added default constructor, operator=
//$c1   AMA 12/10/03 Created
//========================================================================//
//              Copyright 2003 (Unpublished Material)                     //
//                  SolidWorks Corporation.                           //
//========================================================================//
//
//     File Name: mgPrimitiveBodyData.h
//     
//    
//     
//     Contents: class for primitve body type
//
//========================================================================//
#ifndef MGPRIMITIVEBODYDATA_INCLUDED
#define MGPRIMITIVEBODYDATA_INCLUDED

#include <appcomm/swcc.h>
#include <appcomm/point.h>

class su_CArchive;	// for API CArchive wrapper, do not remove

class mgPrimitiveBodyData_c 
{
public:
	MG_EXPORT mgPrimitiveBodyData_c(int bodyType, mgPoint_c& ptIn, double p1, double p2, double p3, BOOL isCone  );
	MG_EXPORT mgPrimitiveBodyData_c();
	MG_EXPORT ~mgPrimitiveBodyData_c();

// Archiving
	MG_EXPORT void save( su_CArchive& ar ) const;
	MG_EXPORT void restore( su_CArchive& ar );
	
// CArchive API wrapper
	MG_EXPORT void save( CArchive& ar ) const;
	MG_EXPORT void restore( CArchive& ar );
	MG_EXPORT void operator =(mgPrimitiveBodyData_c&d);  //JAC - VC7.1 - added return type
	
	int iBodyType;
	mgPoint_c iOrigin;
	double iParam1;
	double iParam2;
	double iParam3;
	BOOL iIsCone;
};
#endif
