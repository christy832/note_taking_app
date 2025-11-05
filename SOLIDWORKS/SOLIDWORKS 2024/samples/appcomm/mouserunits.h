//$c68 IBL 11/29/21 Prj 25437 Added moUserUnits::stringForValFixed()
//$c67 IBL 04/09/20 Prj 24847 SPR 1176086 Added moUserUnits_c suDebStreamer.
//$c66 GLK 01/06/20 prj 24906 add a space for the Measure Tool
//$c65 IBL 04/12/19 Changed misleading parameter name sigDigits to decimalPlaces
//$c64 SM  08/16/18 spr 1100240. Fix mem leak
//$c63 ZYV 08/23/17 spr 1039231::Decimal place is changing from '2' to '2.00' for lower tolerance value in angle dimension. 
//$c62 ZYV 05/15/17 SPR 1020953::Add option “Same as Dimension” for Tolerance and Properties dropdowns
//$c61 ZYV 04/24/17 SPR 1023337::Angle dimension does not show trailing zeroes though the option is set to Show.
//$c60 ZYV 04/18/17 SPR 1022276::Whole numbers are converting into decimal number. (e.g.: value '20' is changing to '20.00')
//$c59 ZYV 02/28/17 project 22753 related changes
//$c58 ZYV 02/24/17 project 22753 ::angular ordinate dimension related changes
//$c57 ZYV 02/22/17 project 22753 changes for properties and angle dimension
//$c56 ZYV 02/14/17 project::22753 changes
//$c55 ZYV 02/09/17 prj 22753::spr 1007242,1007245,1007480,1007487
//$c54 ZYV 02/01/17 project 22753 functionality related changes
//$c53 ZYV 02/01/17 project 22753 related changes
//$c52 ASX 01/06/17 Prj 21878(VS 2015 compiler upgrade) Merged changes to main branch
//$c51 CBE 12/08/16 SPR 993709 Added u_unit in inferunits to avoid duplicate code in inferunitsFullName()
//$c50 CBE 11/29/16 SPR 993709 Added inferUnitsFullName to comapare unit string with unitsFullName
//$c49 qg8 05/26/16 SPR 956904 Added new varaible iSldSettingAdmin mode
//$c48 OI8 06/24/14 SPR 785440 & 762507 : Fixed
//$c47 OI8 10/21/13 Prj: 19803: Added set/getRmvInsignificantZeros()
//$c46 OI8 10/11/13 prj 19804 : decimal rounding method changes
//$c45 OI8 10/04/13 Prj: 19804 Added Decimal rounding options and inward rounding.
//$c44 L11 08/14/13 SPR 718970 Commented out getFullVolumeUnitName() on moLengthUserUnits_c.
//$c43 L11 07/12/13 PRJ 18850 Added iConvertDoubleToString().
//$c42 ABT 03/14/11 SPR 524883 : added new functions for showing user set leading zero
//$c41 ATN 03/12/10 Fixed SPR 529935 ( Mass properties units)
//$c40 DSB 05/22/09 SPR 472152: added getValidationTolerance so DDX tolerances can be set per unit type.
//$c39 DSB 03/12/09 Proj 13424: Added a way to force the display of the plus sign when formatting a non-negative value.
//$c38 BA  02/26/09 Prj 15021: Added SetUserUnit to set the display unit string for optimization data.
//$c37 BA  02/13/09 Prj 15018: Added SetUserUnitEnum to use conversion functions in optimization for simulation data.
//$c36 VNZ 10/01/08 prj 14533. Added iDoublePrimeMarkOn.
//$c35	DKC 04/10/08 MFCUT_EXPORT get/setLengthUnit() and get/setAngleUnit().
//$c34 OZ  04/10/07 added virtual getAngleUnitType
//$c33  ANP 09/29/06 PRJ 10967 : API Support for Measure - Exported iRound method made it Public 
//$c32	HAL 03/16/03 SPR 306080 add isAngle()
//$c31	KHL 03/06/03 SPR 167820: Added moUserUnits_c::iOverrideLeadZero, and get/setOverrideLeadZero().
//$c30	GWA 03/04/03 Prj. 6701 Make moUserUNits_c::getConversionFactor() virtual
//$c29 KHL 02/18/03 SPR 38578: Added moLengthUserUnits_c::iDualUnit.
//$c28  AS 02/18/03 Resubmitting c26. Data member 'iScientificNotation' is now exported
//$c27  AS 02/17/03 Rollback c26
//$c26  AS 02/17/03 Added static member 'iScientificNotation' in moUserUnits_c(fix to spr 48863)
//$c25  PRC 02/25/02 Removed "using namespace std" & used explicit namespace selection where needed
//$c24 STK 08/30/01 SPR 92976 Added an argument to iModifyString()
//$c23  VIK 06/08/01 104312 Added function convertAreaToFeetInches() to moLengthUserUnits_c
//$c22  SRK 01/26/01 SPR 93468 minor changes to header file
//$c21  SRK 01/15/01 SPR 93468, Allow mouserunits.h to be used in 3rd party addins created using the SW Addin Wizard
//$c20	JT  09/21/00 using namespace std - for min and max
//$c19    drd 06/24/00 Isolate swcc lib from other apps
//$c18	SRK/DRD 06/23/2000 IA64 Porting Tool, Update to use SWCC library, and derive all objects from su_CObject
//$c17  SLF 09/07/99 Added args inEnglish to the getUnitsStr() and nameInEnglish to the convertToUserUnit() (SPR#62276)
//$c16  DGL 08/08/99 removed semicolons after macros for ANSI C compliance
//$c15  KDH 05/25/99 Bug number: 57753	Limit the number of significant digets (safety measure in case someone set this two high before).
//$c14  PRC 07/12/98 Add moLengthUserUnits_c copy constructor & assignment operator
//$c13  VIT 02/09/98 fixed a nested include reference
//$c12  BAH 12/10/97 Allow a DASH format for feet & inches
//$c11  BAH 05/13/97 Added iRemovePadZero
//$c10  PSB 05/08/97 Moved exposed include files to \am\sldworks\appcomm
//$c9   BAH 04/25/97 Added iRoundValue()
//$c8	SHB 04/14/97 added setUnitStrMap()
//$c7   VIT 04/11/97 added getUserAngTolerance()
//$c6   LAL 04/02/97 export moUserUnits_c
//$c5   BCS 12/02/96 Added IsMetric().
//$c4   MIP 11/22/96 Added round to fraction
//$c3   SLF 11/06/96 make public copy() and operator= in the moAngleUserUnits_c class
//$c2   LAL 11/03/96 export default constructor for moAngleUserUnits_c
//$c1   LAL 09/27/96 extracted from userunits.h
//========================================================================//
//              Copyright 1994-96 (Unpublished Material)                 
//                  SolidWorks Corp.                  
//========================================================================//
//
//     File Name: moerunits.h
//     
//     Application::  Model: User Units
//     
//     Contents: Class Declaration for user units
//
//========================================================================//
#ifndef MOUSERUNITS_INCLUDED	
#define MOUSERUNITS_INCLUDED

#ifdef max
#undef max
#endif

#ifdef min
#undef min
#endif

#include <appcomm/mfcutdef.h>
#include <appcomm/unitconvtab.h>
#include <appcomm/swcc.h>
#include <algorithm> // min & max

//========================================================================//
// For 3rd Party developers, they don't need to know, and should not know:-
// 1) the difference between a CObject and a su_CObject
// 2) the difference between a CArchive and a su_CArchive
//
//
// When you are compiling an addin, you should have _ADDINLIB_DLL defined for all files
// in your project.
//
// When you are compiling for solidworks, you should NOT have _ADDINLIB_DLL defined for any files
// in your project.

#if _ADDINLIB_DLL
#ifdef su_CObject
#undef su_CObject
#endif
#ifdef su_CArchive
#undef su_CArchive
#endif
#define su_CObject  CObject
#define su_CArchive CArchive
#endif

#define UT_MAX_SIG_DIGITS (16)
                        // 16 = -3 + floor(log10(2^64)) with 2^64 the max int for a double and the -3 a safety factor 

//********************************************************************************
//********************************************************************************
//************************* moUserUnits_c **********************************
//********************************************************************************
//********************************************************************************

class unitStrMap;
enum class  moModifyString_e { uuNone = -1, uuShow, uuRemove, uuRemoveOnly , uuSameAsDoc, uuSameAsDim};
enum moRoundingMethod_e { uu_RND_AWY_FRM_ZERO = 0, uu_RND_HALF_TWRDS_ZERO,  uu_RND_HALF_TO_EVEN,  uu_TRUNCATE };//Prj:19804

class moUserUnits_c : public su_CObject
{
	
public:
		int getFractionBase() const { return  iFractionBase;}
		void setFractionBase(int value){iFractionBase = value;}
		int getFractionValue() const { return  iFractionDemoninator;}
		void setFractionValue(int value){iFractionDemoninator = value;}
		BOOL getRoundToFraction() const { return  iRoundToFraction;}
		void setRoundToFraction(BOOL value) { iRoundToFraction = value;}
		int getSignificantDigits () const { return std::min(iSignificantDigits, UT_MAX_SIG_DIGITS); }
		void setSignificantDigits (int value) { iSignificantDigits = std::min(value, UT_MAX_SIG_DIGITS);}
		BOOL getDoublePrimeMarkOn () const { return iDoublePrimeMarkOn; }
		void setDoublePrimeMarkOn (BOOL value) { iDoublePrimeMarkOn = value; }
		void setShowLeadingZero(BOOL showLeadingZero = FALSE){iShowLeadingZero = showLeadingZero;}
		BOOL getShowLeadingZero() const {return iShowLeadingZero;}

		MFCUT_EXPORT virtual double getValidationTolerance() const;
		
		// Prj: 19804 - start
		MFCUT_EXPORT  int getRoundingMethod () const { return iRoundingMethod ; } 
		MFCUT_EXPORT  void setRoundingMethod (int value)
		{ 
			iRoundingMethod = (moRoundingMethod_e)value;
		}		

		BOOL getUseDocM() const { return iUseDocM;}
		void setUseDocM(BOOL value) {iUseDocM = value;}

		double getDispValOut () const {return idispValOut;}
		void setDispValOut (double val )const {idispValOut = val;} 

		//Prj: 19804 End

	// Supress display of leading zeroes
		MFCUT_EXPORT BOOL getNoLeadZero() const { return iNoLeadZero; }
		MFCUT_EXPORT void setNoLeadZero(BOOL leadIn) { iNoLeadZero = leadIn; }

		MFCUT_EXPORT BOOL getSldSettingAdmin() const { return iIsSldSettingAdmin; }
		MFCUT_EXPORT void setSldSettingAdmin(BOOL bIsSldSettingAdmin) { iIsSldSettingAdmin = bIsSldSettingAdmin; }

	// Override flag for supress display of leading zeroes (not serialized, driven by doc option) 
		MFCUT_EXPORT BOOL getOverrideLeadZero() const { return iOverrideLeadZero; }
		MFCUT_EXPORT void setOverrideLeadZero(BOOL flagIn) { iOverrideLeadZero = flagIn; }

	// Supress display of padded zeroes
		MFCUT_EXPORT BOOL getNoPadZero() const { return iNoPadZero; }
		MFCUT_EXPORT void setNoPadZero(BOOL padIn) { iNoPadZero = padIn; }

		MFCUT_EXPORT moModifyString_e getRemoveTrailTolZero() const { return iTolTrailZero; }
		MFCUT_EXPORT void setRemoveTrailTolZero(moModifyString_e padIn) { iTolTrailZero = padIn; }

	/*	MFCUT_EXPORT moModifyString_e getRemoveTrailTolZeroOnly() const { return iTolTrailZeroOnly; }
		MFCUT_EXPORT void setRemoveTrailTolZeroOnly(moModifyString_e padIn) { iTolTrailZeroOnly = padIn; }*/

		MFCUT_EXPORT moModifyString_e getRemoveTrailPorpZero() const { return iPropTrailZero; }
		MFCUT_EXPORT void setRemoveTrailPropZero(moModifyString_e padIn) { iPropTrailZero = padIn; }

		MFCUT_EXPORT moModifyString_e getRemoveTrailAngleZero() const { return iAngleTrailZero; }
		MFCUT_EXPORT void setRemoveTrailAngleZero(moModifyString_e padIn) { iAngleTrailZero = padIn; }

		MFCUT_EXPORT moModifyString_e getRemoveTolTrailAngleZero() const { return iAngleTolTrailZero; }
		MFCUT_EXPORT void setRemoveTolTrailAngleZero(moModifyString_e padIn) { iAngleTolTrailZero = padIn; }

		MFCUT_EXPORT moModifyString_e getRemoveTrailAnglularRunningZero() const { return iAnglularRunningTrailZero; }
		MFCUT_EXPORT void setRemoveTrailAnglularRunningZero(moModifyString_e padIn) { iAnglularRunningTrailZero = padIn; }

		MFCUT_EXPORT moModifyString_e getRemoveTolTrailAnglularRunningZero() const { return iAnglularRunningTolTrailZero; }
		MFCUT_EXPORT void setRemoveTolTrailAnglularRunningZero(moModifyString_e padIn) { iAnglularRunningTolTrailZero = padIn; }
  	    MFCUT_EXPORT void setToleranceZero(BOOL valIn) { iTolZero = valIn; }
        MFCUT_EXPORT BOOL IsToleranceZero() const { return iTolZero; }

		MFCUT_EXPORT void setIsNewVersionFile(BOOL valIn) { iSnewVersionFile = valIn; }
		MFCUT_EXPORT BOOL IsNewVersionFile() const { return iSnewVersionFile; }

		MFCUT_EXPORT void setIsAngDim(BOOL valIn) { iAngDim = valIn; }
		MFCUT_EXPORT BOOL IsAngDim() const { return iAngDim; }


		MFCUT_EXPORT void setIsOrdinateDim(BOOL valIn) { iOrdDim = valIn; }
		MFCUT_EXPORT BOOL IsOrdinateDim() const { return iOrdDim; }

		MFCUT_EXPORT void setAngToleranceZero(BOOL valIn) { iAngTolZero = valIn; }
		MFCUT_EXPORT BOOL IsAngToleranceZero() const { return iAngTolZero; }

		MFCUT_EXPORT void setOrdinateToleranceZero(BOOL valIn) { iOrdTolZero = valIn; }
		MFCUT_EXPORT BOOL IsOrdinateToleranceZero() const { return iOrdTolZero; }

	// Suppress display of padded zeroes (all cases 32.000 or 32.500)
		MFCUT_EXPORT BOOL getRemovePadZero() const { return iRemovePadZero; }
		MFCUT_EXPORT void setRemovePadZero(BOOL padIn) { iRemovePadZero = padIn; }

	// Force display of sign
		MFCUT_EXPORT BOOL getForceDisplaySign() const { return iForceDisplaySign; }
		MFCUT_EXPORT void setForceDisplaySign(BOOL forceIn) { iForceDisplaySign = forceIn; }

	// Set/Get the separator character for display.
		MFCUT_EXPORT TCHAR getSeparaterChar() const { return iSepChar; }
		MFCUT_EXPORT void setSeparaterChar(TCHAR sepIn) { iSepChar = sepIn; }

		MFCUT_EXPORT virtual double getConversionFactor() const;
		virtual LPCTSTR convertToUserUnit ( double valIn, BOOL show_unames = FALSE, BOOL nameInEnglish = FALSE, moModifyString_e isModifyString = moModifyString_e:: uuNone, BOOL addSpaceForMeasure = FALSE ) const = 0;   // prj 24906 need a space for the Measure Tool
		virtual BOOL convertToSysVal ( LPCTSTR unitText, double& valOut) const = 0;
		double convertToSysVal ( double valIn ) const { return valIn / getConversionFactor(); }
		MFCUT_EXPORT virtual CString getUnitsStr(BOOL inEnglish = FALSE) const;

		MFCUT_EXPORT CString getFullUnitName(BOOL plural = TRUE) const;	// FALSE == singular
		MFCUT_EXPORT virtual BOOL IsMetric() {return FALSE;}

		MFCUT_EXPORT virtual moAngleUnit_e getAngleUnitType() const { return  uuNA; }

// internal values
// Grid Methods (should be on seperate grid object)
		double getMajorGridSpacing() const { return 	iMajorGridSize;}
		void setMajorGridSpacing(double value) { iMajorGridSize = value;}
		
		int getMinorsPerMajor()  const { return 	iMinorsInMajor;}
		void setMinorsPerMajor(int value) { iMinorsInMajor = value;}

		int getSnapsPerMinor()  const { return 	iSnapsInMinor;}
		void setSnapsPerMinor(int value) { iSnapsInMinor = value;}

		double getSnapAngle()  const { return 	iAngleSnapUnit;}
		void setSnapAngle(double value) { iAngleSnapUnit = value;}

		double getSnapDistance() const ;
		double getMinorGridSpacing() const ;

		BOOL getDashForFeet() const { return iUseDashForFeet; }
		void setDashForFeet(BOOL dashIn) { iUseDashForFeet = dashIn; }

	// Copy operator
		MFCUT_EXPORT virtual void copy( const moUserUnits_c& unitsIn );
		virtual bool isLengthUserUnit()				const { return false; }
		virtual bool isForceUnit()					const { return false; }
		virtual bool isEnergyUnit()					const { return false; }
		virtual bool isPowerUnit()					const { return false; }
		virtual bool isTimeUnit()					const { return false; }
		virtual bool isDensityUnit()				const { return false; }
		virtual bool isUnitSysUnit()				const { return false; }
		virtual bool isStressUnit()					const { return false; }
		virtual bool isSpringConstantUnit()			const { return false; }
		virtual bool isGravityUnit()				const { return false; }
		virtual bool isLinearMotorUnit()			const { return false; }
		virtual bool isRotaryMotorUnit()			const { return false; }
		virtual bool is2CombinedUnit()				const { return false; }
		virtual bool isFrequencyUserUnit()			const { return false; }
		virtual bool isTemperatureUnit()			const { return false; }
		virtual bool isPerDegreeUnit()				const { return false; }
		virtual bool isSpecificHeatUnit()			const { return false; }
		virtual bool isThermalConductivityUnit()	const { return false; }
		virtual bool isLightIntensityUserUnit()		const { return false; }
		virtual bool isPercentUserUnit()			const { return false; }
		
		

	// Comparison
		MFCUT_EXPORT virtual BOOL isEqual(const moUserUnits_c* unitsIn) const;

	// Prepocess a value string (typically entered by the user) so that it
	// can be evaluate()'d during ui_DDX_UserUnits()). Subclasses should override
	// to provide special handling (e.g. feet/inch for moLengthUserUnit_c's).
	// This base class implementation simply extracts trailing units specs.
	MFCUT_EXPORT virtual BOOL preprocessValueString(CString* valStrIn,
									   CString* valStrOut, moUserUnits_c*& unitsStrOut);

	// Determine if valStr specifies new units - for now, value strings cannot
	// contain a mixture of units. Subclasses must supply implementation.
	virtual BOOL inferUnits(CString* valStr, moUserUnits_c*& uUnitsOut, BOOL strip = TRUE, BOOL u_unit = FALSE) = 0;
	//virtual BOOL stripUnits(CString* valStr, CString*& valStrOut) = 0;

	// Information that may be shared by all strings: abbrev, fullname
	// plural name and an index (enum) - needed by uiExpression_c.
	virtual unitStrMap* getUnitsStringMap( ) const { return NULL; }
	virtual int getUnitEnum( ) const { return 0; }
	virtual BOOL isAngle() const { return FALSE; }
	//Added SetUserUnitEnum to use conversion functions in optimization.
	MFCUT_EXPORT virtual void SetUserUnitEnum(int eUnitType) {}
	MFCUT_EXPORT virtual void SetUserUnit(CString sUnitStr);
	MFCUT_EXPORT void getModifiedStringforRemoveTrailZero(CString& textStrInOut, double dispVal = 0.0, BOOL needsformat = FALSE) const;
	
	// The following set/get methods are called from functions of moMassProp_c so as to get 
	// the measurement strings in scientific notation if that option is specified
	// in the options of Measure tool
	MFCUT_EXPORT static void setScientificFlag( BOOL enable ){ iScientificNotation = enable;}
	MFCUT_EXPORT static BOOL getScientificFlag(){ return iScientificNotation;}
	MFCUT_EXPORT double iRoundValue(double valIn, int decimalPlaces) const;
	MFCUT_EXPORT CString iConvertDoubleToString(double valIn, int decimalPlaces/*, moModifyString_e ModifyString= moModifyString_e::uuNone*/) const;



	MFCUT_EXPORT virtual void setRmvInsignificantZeros(BOOL set) const { iremoveInsigZero = set; }  // Prj: 19803
	MFCUT_EXPORT virtual BOOL getRmvInsignificantZeros() const { return iremoveInsigZero;}

	MFCUT_EXPORT CString stringForValFixed(double valIn, int nSigIn = -1, int pstDcpIn = -1, int preDcpIn=-1, BOOL leadZeros = -1, BOOL showPlusIn = -1); // Added $c68

	private:
		mutable BOOL iremoveInsigZero;

protected:
		moUserUnits_c(moFractionDisplay_e iFract = uuDECIMAL, double snapping = .01, 
						  int major  = 10, int minor = 1, int fractDemoninator = 1,
						  BOOL roundToFraction = FALSE,
						  // int significantDigits = 2, double angle = amPI/4.0,
						  int significantDigits = 2, double angle = 3.1415926535898/4.0, 
						  BOOL noLeadZero = FALSE, BOOL noPadZero = FALSE,
						  TCHAR separaterChar = _T('.'),
						  BOOL showDashForFeet = TRUE,						 
						  moRoundingMethod_e iselRoundingMtd = uu_RND_AWY_FRM_ZERO,
						  BOOL iUseDocM = TRUE
						  );

	
	// Apply effects of iNoLeadZero, iNoPadZero, and iSepChar.
		void iModifyString( CString& textStrInOut, double dispVal, BOOL notFractionable = FALSE, moModifyString_e bModifyString= moModifyString_e::uuNone) const;

	MFCUT_EXPORT virtual void Serialize( sw_CArchive& ar);	
private:
	// ALL DATA are protected.
	int 		iSignificantDigits;
	int 		iFractionBase;
	double 		iMajorGridSize;				// in meters 
	int			iMinorsInMajor; 			// number of snap units in major unit
	int			iSnapsInMinor; 				// number of snap units in minor unit
	int			iFractionDemoninator;		// number of fraction in unit type
	double		iAngleSnapUnit;				// angle in radians to snap to 
	BOOL		iNoLeadZero;				// Supress display of leading zeroes
	int			iOverrideLeadZero;	    	// Override leading zeroes driven by doc option (0: by iNoLeadZero, 1: show, 2: hide)
	BOOL		iNoPadZero;					// Supress display of padded zeroes
	moModifyString_e         iTolTrailZero;
	moModifyString_e         iTolTrailZeroOnly;
	moModifyString_e         iPropTrailZero;
	moModifyString_e         iAngleTrailZero;
	moModifyString_e         iAngleTolTrailZero;
	moModifyString_e         iAnglularRunningTrailZero;
	moModifyString_e         iAnglularRunningTolTrailZero;
	
	BOOL		iRemovePadZero;				// Remove trailing zeroes
	BOOL		iForceDisplaySign;			// Force the display of the sign (+ or -)
	TCHAR		iSepChar;					// Separator character for decimal point
	BOOL		iRoundToFraction;			// User Preference to round display of all inch dims to fractions
	BOOL		iUseDashForFeet;			// Show a dash for feet & inches
	BOOL        iDoublePrimeMarkOn;          // Show a double prime mark "inch mark"(") 
	MFCUT_EXPORT static BOOL iScientificNotation;		// used for displaying measurements in scientific notation in Measure tool
	BOOL iShowLeadingZero;	
	moRoundingMethod_e iRoundingMethod;
	BOOL iUseDocM;					//Prj: 19804: Doc rounding	
	mutable double idispValOut;
	BOOL iIsSldSettingAdmin;
        BOOL iTolZero;
		BOOL iSnewVersionFile;
		BOOL iAngDim;
		BOOL iAngTolZero;
		BOOL iOrdTolZero;
		BOOL iOrdDim;
 	// mfc runtime type declaration: keep at bottom of class definition
	MFCUT_DECLARE_DYNAMIC (moUserUnits_c)
	private:
}; // endclass moUserUnits_c

__inline double moUserUnits_c::getSnapDistance() const
{ 
	int snapsPerMajor = iMinorsInMajor * iSnapsInMinor;
	if( snapsPerMajor > 0 )
		return iMajorGridSize / ( (double) snapsPerMajor ); 
	else 
		return iMajorGridSize;
}

__inline double  moUserUnits_c::getMinorGridSpacing() const
{
	if( iMinorsInMajor > 0 )
		return iMajorGridSize / ( (double) iMinorsInMajor );
	else
		return iMajorGridSize;
}

#ifdef _HTML_DEBUG
class suDebStream_c;
MFCUT_EXPORT suDebStream_c & operator<<(suDebStream_c &, const moUserUnits_c &);
MFCUT_EXPORT suDebStream_c & operator<<(suDebStream_c &, const moUserUnits_c *);
#endif

//********************************************************************************
//********************************************************************************
//************************* moLengthUserUnits_c **********************************
//********************************************************************************
//********************************************************************************

class moLengthUserUnits_c : public moUserUnits_c
{
	public:
			MFCUT_EXPORT moLengthUserUnits_c( moLengthUnit_e unitType = uuMETER );
			MFCUT_EXPORT moLengthUserUnits_c ( 
						moLengthUnit_e unitType, 
						moFractionDisplay_e iFract,
						double majorSpacing, 
						int minorsPerMajor,
						int snapsPerMinor, 
						int fractDemoninator,
						BOOL roundToFraction,
						int significantDigits, // Prj: 19804
						BOOL iUseDocRndMthd = FALSE,
						moRoundingMethod_e iselRoundingMtd = uu_RND_AWY_FRM_ZERO,
						BOOL iInwardRndMthd = FALSE,
						BOOL iInrdRChanged = FALSE);
						

			MFCUT_EXPORT ~moLengthUserUnits_c( );

			MFCUT_EXPORT virtual LPCTSTR convertToUserUnit ( double valIn, BOOL show_unames = FALSE, BOOL nameInEnglish = FALSE, moModifyString_e isModifyString = moModifyString_e::uuNone, BOOL addSpaceForMeasure = FALSE ) const override;   // prj 24906 need a space for the Measure Tool
			MFCUT_EXPORT virtual LPCTSTR convertAreaToFeetInches ( double valIn, BOOL show_unames = FALSE, BOOL nameInEnglish = FALSE ) const;
			MFCUT_EXPORT virtual BOOL convertToSysVal ( LPCTSTR unitText, double& valOut) const;

			MFCUT_EXPORT virtual void Serialize( sw_CArchive& ar);
			MFCUT_EXPORT moLengthUnit_e getLengthUnit() const { return  iLengthUnit;}
			MFCUT_EXPORT void  setLengthUnit(moLengthUnit_e value) {iLengthUnit = value;}
			MFCUT_EXPORT virtual BOOL IsMetric() {return IsMetricLengthUnit( iLengthUnit );}

			// Override base class implementation to provide special length handling:
			// 
			MFCUT_EXPORT BOOL preprocessValueString(CString* valStrIn,
									   CString* valStrOut, moUserUnits_c*& unitsOut);
			MFCUT_EXPORT BOOL inferUnits(CString* valStr, moUserUnits_c*& uUnitsOut,  BOOL strip = TRUE, BOOL u_unit = FALSE ); 
			
			//Added SetUserUnitEnum to use conversion functions in optimization.
			MFCUT_EXPORT virtual void SetUserUnitEnum(int eUnitType) { setLengthUnit((moLengthUnit_e) eUnitType);}
	
		// Comparison
		MFCUT_EXPORT virtual BOOL isEqual(const moUserUnits_c* unitsIn) const;

	// Copy operator
	MFCUT_EXPORT virtual void copy( const moUserUnits_c& unitsIn ) override;
	virtual bool isLengthUserUnit() const override { return true; }

	MFCUT_EXPORT moLengthUserUnits_c& operator=(moLengthUserUnits_c& unitsIn);
	MFCUT_EXPORT moLengthUserUnits_c( const moLengthUserUnits_c& unitsIn );

	// The actual unitStrMap - global, shared by all moLengthUserUnit_c's
	MFCUT_EXPORT static void setUnitsStringMap(unitStrMap* strMapIn);
	MFCUT_EXPORT static void destroyUnitsStringMap();
	static MFCUT_EXPORT unitStrMap* lengthUnitMap;

	MFCUT_EXPORT moLengthUserUnits_c* getDualUnit ();
	//MFCUT_EXPORT CString getFullVolumeUnitName( BOOL plural = TRUE) const;
	//MFCUT_EXPORT CString getFullVolumeUnitName( int lenEnum, BOOL plural) const;	 
	MFCUT_EXPORT CString getFullAreaUnitName( BOOL plural = TRUE ) const;
	MFCUT_EXPORT CString getFullAreaUnitName( int lenEnum, BOOL plural ) const;
protected:

	// mfc runtime type declaration: keep at bottom of class definition
private:
	moLengthUnit_e	 iLengthUnit;

	virtual int getUnitEnum( ) const { return (int)iLengthUnit; }
	MFCUT_EXPORT virtual unitStrMap* getUnitsStringMap( ) const;

	moLengthUserUnits_c* iDualUnit;
public:
	// Global access to lengthUnitMap (doesn't require an instance of an moUserUnit_c)
	static unitStrMap* getLengthUnitStringMap() { return lengthUnitMap; }

	MFCUT_DECLARE_SERIAL( moLengthUserUnits_c )

};


//********************************************************************************
//********************************************************************************
//************************* moAngleUserUnits_c **********************************
//********************************************************************************
//********************************************************************************

class moAngleUserUnits_c : public moUserUnits_c
{
	public:
			MFCUT_EXPORT moAngleUserUnits_c();
 			MFCUT_EXPORT moAngleUserUnits_c ( moAngleUnit_e unitType, int digits = 2 );

			MFCUT_EXPORT ~moAngleUserUnits_c(){};

			MFCUT_EXPORT virtual LPCTSTR convertToUserUnit ( double valIn, BOOL show_unames = FALSE, BOOL nameInEnglish = FALSE, moModifyString_e isModifyString = moModifyString_e ::uuNone, BOOL addSpaceForMeasure = FALSE ) const override;
			MFCUT_EXPORT virtual BOOL convertToSysVal ( LPCTSTR unitText, double& valOut) const;
			MFCUT_EXPORT double getUserAngTolerance () const;

			MFCUT_EXPORT virtual void Serialize( sw_CArchive& ar);

			MFCUT_EXPORT virtual moAngleUnit_e getAngleUnitType() const { return  iAngleUnit; }

			MFCUT_EXPORT moAngleUnit_e getAngleUnit() const { return  iAngleUnit;}
			MFCUT_EXPORT void  setAngleUnit(moAngleUnit_e value) {iAngleUnit = value;}
			//Added SetUserUnitEnum to use conversion functions in optimization.
			MFCUT_EXPORT virtual void SetUserUnitEnum(int eUnitType) { setAngleUnit((moAngleUnit_e) eUnitType);}
			// Comparison
			MFCUT_EXPORT virtual BOOL isEqual(const moUserUnits_c* unitsIn) const;
	
			// Override base class implementation to provide special length handling:
			// 
			MFCUT_EXPORT BOOL preprocessValueString(CString* valStrIn,
									   CString* valStrOut, moUserUnits_c*& unitsOut);
			MFCUT_EXPORT BOOL inferUnits(CString* valStr, moUserUnits_c*& uUnitsOut, BOOL strip = TRUE, BOOL u_unit = FALSE );

	// Copy operator
	MFCUT_EXPORT virtual void copy( const moUserUnits_c& unitsIn ) override;

	moAngleUserUnits_c& operator=(moAngleUserUnits_c& unitsIn);

	// The actual unitStrMap - global, shared by all moAngleUserUnit_c's
	MFCUT_EXPORT static void setUnitsStringMap(unitStrMap* strMapIn);// { angleUnitMap = strMapIn; }
	MFCUT_EXPORT static void destroyUnitsStringMap();
	MFCUT_EXPORT static unitStrMap* angleUnitMap;
	MFCUT_EXPORT virtual BOOL isAngle() const override { return TRUE; }

protected:

	// mfc runtime type declaration: keep at bottom of class definition
private:
	MFCUT_EXPORT virtual unitStrMap* getUnitsStringMap(  ) const;

	virtual int getUnitEnum( ) const { return (int)iAngleUnit; }

	moAngleUnit_e		 iAngleUnit;
	MFCUT_DECLARE_SERIAL (moAngleUserUnits_c)

public:
	// Global access to lengthUnitMap (doesn't require an instance of an moUserUnit_c)
	static unitStrMap* getAngleUnitStringMap() { return angleUnitMap; }
};


#endif
