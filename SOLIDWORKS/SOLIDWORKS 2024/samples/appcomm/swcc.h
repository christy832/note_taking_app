//$c1   DRD 06/25/00 Only use SW replacements for MFC in Solidworks
//========================================================================//
//              Copyright 2000 (Unpublished Material)                     //
//                  SolidWorks Corporation.							      //
//========================================================================//
//
//     File Name: swcc.h
//     
//     Contents: SW replaces MFC internally, but we won't for apps
//
//========================================================================//

#ifndef APPCOMM_SWCC_INCLUDED
#define APPCOMM_SWCC_INCLUDED

// <DRD 24-Jun-00>  If SU_NEW is defined we're in SolidWorks

#ifdef SU_NEW

#include <swcc/sw_afxcoll.h>	// SolidWorks version of certain MFC classes for IA64
#include <swcc/sw_archive.h>	// SolidWorks version of certain MFC classes for IA64
#include <swcc/sw_time.h>		// SolidWorks version of certain MFC classes for IA64

class su_CArchive;
#define sw_CArchive	su_CArchive

#else

class CArchive;
#define sw_CArchive CArchive

#endif

#endif

