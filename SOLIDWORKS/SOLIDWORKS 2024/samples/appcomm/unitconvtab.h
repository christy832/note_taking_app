//$c29 L11 03/06/14 SPR 757484 Cubic yards added to volume units.
//$c28 L11 02/25/13 SPR 688873 Added IMP Gallon volume unit.
//$c27 L11 01/25/13 Project 18912 Added enum moVolumeUnit_e and conversion factors related to it.
//$c26 JRK 02/22/10 SPR 523277: increase precision for N_TO_POUNDFORCE
//$c25 JRK 12/02/09 SPR 524252: added DEGSI_TO_DEGIPS
//$c24 BA  05/17/09 SPR 490439 Added conversion factors for power units
//$c23 JRK 02/01/09 Prj 15023: more new units
//$c22 JRK 01/29/09 Prj 15023: added temperature units class
//$c21 DSB 10/23/08 Proj 13424: Added microsecond and nanosecond to the time units.
//$c20 OZ  04/10/07 added uuNA for virtual getAngleUnitType
//$c19 BXY 03/14/07 PROJ 11953 SPR 368670 added one more moAngleUnit_e item: uuROTATIONS
//$c18  ZLH 01/10/07 defined and used special TA precision setting
//$c17  SUS  11/25/06 PRJ 8913 added few more units
//$c16  RLB 12/03/03 Added force conversions (N_TO_xxx)
//$c15	HXT	07/12/02 added moLengthUnit2StlIndex[]
//$c14	HLI	06/28/01 added another new unit -- uuUIN, and adjusted the order of enums
//$c13	HLI	06/19/01 project 4276 (mircon), added more units
//$c12  SLF 06/30/99 Added uuUNDEFINED = -1 to moLengthUnit_e
//$c11  PSB 05/08/97 Moved exposed include files to \am\sldworks\appcomm
//$c10  HWL 03/17/97 Change Winchester Design Systems Inc. to SolidWorks Corporation.
//$c9   BAH 12/19/96 Added UNIT_MAX_PRECISION
//$c8   BCS 12/02/96 Added IsMetricLengthUnit()
//$c7   RPZ 04/18/96 added defines for some weight conversion
//$c6   AJO 06/09/95 Change significant digit default values
//$c5   VIT 03/31/95 a typo
//$c4   MIP 03/10/95 Significant Digits
//$c3   MIP 03/08/95 Added feet and inches
//$c2   MIP 03/01/95 Added inch conversion
//$c1   RPZ 01/22/95 Comments
//========================================================================//
//              Copyright 1994-95 (Unpublished Material)                 
//                  SolidWorks Corporation.                               
//========================================================================//
//
//     File Name: unitconvtab.h
//     
//     Application::  Model: User Units Conversion Table
//     
//     Contents: definitions for unit conversions
//
//========================================================================//
#ifndef UNITCONVTAB_INCLUDED	
#define UNITCONVTAB_INCLUDED

enum moLengthUnit_e { uuUNDEFINED = -1, uuMM,  uuCM,  uuMETER,  uuINCHES,  uuFEET, uuFEETINCHES, uuA, uuNM, uuUM, uuMILS, uuUIN};
enum moVolumeUnit_e { uuUNDEFINED3 = -1, uuA3, uuNM3, uuUM3, uuMM3, uuCM3, uuMETER3, uuUIN3, uuMIL3, uuINCHES3, uuFEET3, uuUL, uuML, uuCL, uuDL, uuLITER, uuHL, uuOUNCE, uuPINT, uuGALLON, uuIMPGALLON, uuIMPcuyd};
//static int moSignificantDigits [] = {0,	1, 3, 2, 3, 2};
static int moSignificantDigits []    = {2, 2, 3, 3, 3, 3, 0, 0, 1, 1, 0};
static int moSignificantDigits_TA [] = {3, 4, 6, 5, 6, 6, 0, 0, 1, 8, 1};
static int moIndex2LengthUnit [] = {6,7,8,0,1,2,10,9,3,4,5};
static int moLengthUnit2Index [] = {3,4,5,8,9,10,0,1,2,7,6};
static int moLengthUnit2StlIndex [] = {0,1,2,3,4};
static int stlIndex2SldworksIndex [] = {3,4,5,8,9};

static int moIndex2VolumeUnit [] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
static int moVolumeUnit2Index [] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
static int moLengthUnit2VolumeUnit [] = {3,4,5,8,9,8,0,1,2,7,6};
static int moVolumeUnit2LengthUnit [] = {6,7,8,0,1,2,10,9,3,4};

enum moAngleUnit_e { uuNA = -1, uuDEGREES,  uuDEG_MIN,  uuDEG_MIN_SEC,  uuRADIANS, uuROTATIONS };
enum moFractionDisplay_e { uuNONE,  uuDECIMAL,  uuFRACTION };

#define METER_TO_METER		1.0

#define METER_TO_A			10000000000.0
#define	A_TO_METER			0.0000000001

#define METER_TO_NM			1000000000.0
#define	NM_TO_METER			0.000000001

#define METER_TO_UM			1000000.0
#define	UM_TO_METER			0.000001

#define METER_TO_MM			1000.0
#define MM_TO_METER         0.001

#define METER_TO_CM			 100.0
#define CM_TO_METER			 0.01

#define METER_TO_UIN		( 1000000.0 / .0254)
#define	METER_TO_MIL		( 1000.0 / .0254)
#define METER_TO_INCH		( 1.0 / .0254 )
#define METER_TO_FEET		( 1.0 / .3048 )

#define UIN_TO_METER		0.0000000254
#define MIL_TO_METER		0.0000254
#define INCH_TO_METER		0.0254
#define FEET_TO_INCH		12.0
#define INCH_TO_FEET		(1.0 / 12.0	)

#define KG_TO_MG			1000000.0
#define KG_TO_GRAM			1000.0
#define KG_TO_LB			( 2.204622 )

#define CUBIC_METER_TO_LITER			(1000.0)
#define LITER_TO_MICROLITER			1000000.0
#define LITER_TO_MILLILITER			1000.0
#define LITER_TO_CENTILITER			100.0
#define LITER_TO_DECILITER			10.0
#define LITER_TO_LITER				1.0
#define LITER_TO_HECTOLITER			0.01
#define LITER_TO_US_FLUID_OUNCE		( 1.0 / 0.029573529563 )
#define LITER_TO_US_PINT			( 1.0 / 0.473176473 )
#define LITER_TO_US_GALLON			( 1.0 / 3.785411784 )
#define LITER_TO_IMP_GALLON			( 1.0 / 4.54609188 )
#define IMP_CUBIC_METER_TO_CUBIC_YARD			( 1.0 / 0.764554858)

#define N_TO_MILLINEWTONS	1000.0
#define N_TO_KILONEWTONS	0.001
#define N_TO_MEGANEWTONS	0.000001
#define N_TO_DYNES			100000.0
#define N_TO_POUNDFORCE		( 0.224808943 )
#define N_TO_KGFORCE		0.101971
#define N_TO_OUNCEFORCE		3.596943
#define N_TO_UNDEFINED		1.0

#define J_TO_ERGS           10000000
#define J_TO_BTU            0.0009478171 
#define J_TO_KILOWATTHOUR   (1.0/3600000.0)
#define J_TO_UNDEFINED      1.0

#define W_TO_HP             0.0013410221
#define W_TO_KW             0.001
#define W_TO_UNDEFINED      1.0
#define W_TO_BTUPERSECOND	0.00094781712
#define W_TO_CALPERSECOND	0.239005736 

#define SEC_TO_MILLISEC     1000
#define SEC_TO_MICROSEC     1000000
#define SEC_TO_NANOSEC      1000000000
#define SEC_TO_MIN          (1.0/60.0)
#define SEC_TO_HOUR         (1.0/3600.0)
#define SEC_TO_UNDEFINED     1.0

#define DEG_TO_DEG			1.0
#define DEGSI_TO_DEGIPS		(9.0/5.0)

#define SPECHEATSI_TO_SPECHEATSIMPA		1.0
#define SPECHEATSI_TO_SPECHEATIPS		(1.0/4186.8)
#define	SPECHEATSI_TO_SPECHEATMKS		(1.0/4.184)
#define SPECHEATSI_TO_SPECHEATUNDEFINED	1.0
#define SPECHEATSI_TO_SPECHEATJPERGPERK	0.001

#define THERMCONDSI_TO_THERMCONDSIMPA		1.0
#define THERMCONDSI_TO_THERMCONDIPS			(1.0/74767.752)
#define THERMCONDSI_TO_THERMCONDMKS			(1.0/418.4)
#define THERMCONDSI_TO_TERMCONDUNDEFINED	1.0
#define THERMCONDSI_TO_WPERCMPERK			0.01

__inline BOOL IsMetricLengthUnit( moLengthUnit_e unitIn )
{
	switch( unitIn )
	{
		case uuA:
		case uuNM:
		case uuUM:
		case uuMM:
		case uuCM:
		case uuMETER:
			return TRUE;

		case uuUIN:
		case uuMILS:
		case uuINCHES:
		case uuFEET:
		case uuFEETINCHES:
			return FALSE;
	}

	ASSERT( FALSE );
	return FALSE;
}

#define UNIT_MAX_PRECISION		(8)

#endif
