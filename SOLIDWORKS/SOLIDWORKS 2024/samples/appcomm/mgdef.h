//$c2 VP  09/18/06 Added condition of NO_EXPORTS for static libs
//$c1 PSB 05/08/97 Moved exposed include files to \am\sldworks\appcomm
//========================================================================//
//              Copyright 1994 (Unpublished Material)                     //
//                  SolidWorks Corporation.                           //
//========================================================================//
//
//     File Name: gcdlldef.h
//     
//      
//     
//     
//
//========================================================================//
#ifndef MG_EXPORT

#if defined(NO_EXPORTS)
	#define MG_EXPORT
#elif defined(MATHGEOM_FILE)
	#define MG_EXPORT __declspec( dllexport )
#else
	#define MG_EXPORT __declspec( dllimport )
#endif

#endif
