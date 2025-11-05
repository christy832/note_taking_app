//$c1   DRD 06/28/200 Written
//========================================================================//
//              Copyright 2000 (Unpublished Material)                 
//                  SolidWorks Corp.                  
//========================================================================//
//
//     File Name: mo_userunits.h
//     
//     Application::  Model: User Units
//     
//     Contents: Class Declaration for user units
//
//========================================================================//
#ifndef MO_USERUNITS_INCLUDED	
#define MO_USERUNITS_INCLUDED

#include <appcomm/mfcutdef.h>
#include <appcomm/unitconvtab.h>

class moLengthUserUnits_c;
class moAngleUserUnits_c;
class moUserUnits_c;

class mo_UserUnits_c
{
public:
	MFCUT_EXPORT void setFractionBase(int value);

	MFCUT_EXPORT void setFractionValue(int value);
	MFCUT_EXPORT void setSignificantDigits (int value);
	MFCUT_EXPORT void setRoundToFraction(BOOL value);

	MFCUT_EXPORT LPCTSTR convertToUserUnit(double valIn, BOOL show_unames = FALSE, BOOL nameInEnglish = FALSE);
	MFCUT_EXPORT BOOL convertToSysVal(LPCTSTR unitText, double& valOut);

protected:
	mo_UserUnits_c() {};

	moUserUnits_c	*iUnits;
};

class mo_LengthUserUnits_c : public mo_UserUnits_c
{
public:
	MFCUT_EXPORT mo_LengthUserUnits_c(moLengthUnit_e unitType = uuMETER);
	MFCUT_EXPORT ~mo_LengthUserUnits_c();

	MFCUT_EXPORT void setLengthUnit(moLengthUnit_e value);
};

class mo_AngleUserUnits_c : public mo_UserUnits_c
{
public:
	MFCUT_EXPORT mo_AngleUserUnits_c();
	MFCUT_EXPORT ~mo_AngleUserUnits_c();

	MFCUT_EXPORT void setAngleUnit(moAngleUnit_e value);
};

#endif
