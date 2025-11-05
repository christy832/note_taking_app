//$c33 IBL 05/18/23 IR-1097267 Added Prior to dynamic array header (compile disabled)
//$c32 IBL 12/28/22 Prj 25934 FUN 129331 TSK9050341 Added some const only
//$c31 IBL 01/28/22 Prj 25934 Added amDynnamicArrayIsInvalid()
//$c30 IBL 07/14/19 Prj 24096 Added amDynamicArrayCountSafe() and amDynamicArrayFreeSafe() that can take nullptr
//$c29 IBL 04/05/19 Prj 24096 Added amDynamicArrayReize2() allowing size increase
//$c28 IBL 03/19/19 Prj 24096 Added amDynamicArrayReserve()
//$c27 SYV3 11/25/16 Added amDynamicArrayAllocCount function to get max allocated size.
//$c26  VIT 01/25/02 added ReverseFromTo; augmented InsertAt
//$c25  JT  01/08/01 added amDynamicArrayAllocSpecial
//$c24  PSB 05/08/97 Moved exposed include files to \am\sldworks\appcomm
//$c23  VIT 04/16/97 added append function
//$c22  HWL 03/17/97 Change Winchester Design Systems Inc. to SolidWorks Corporation.
//$c21  VIT 11/19/96 modified RemoveAt()
//$c20  RPZ 11/19/96 added Serialize for plain data type (i.e. no pointers please)
//$c19  VIT 06/26/96 add SetAt function
//$c8   VIT 04/22/96 added an input BOOL arg to amDynamicArrayCopy,added suDynArrayAlloc1
//$c7   RPZ 03/13/96 added amDynamicArrayFreeExtra & amDynamicArrayGetMemStatus
//$c6   BAH 02/27/96 Added amDynArrayRealloc()
//$c5   BAH 02/22/96 Added extra 'int' for growMultiple on allocation
//$c4   VIT 02/15/95 added copy function
//$c3   RPZ 11/07/95 added debug tracking for dynamic arrays
//$c2   RBX 08/25/95 amDynamicRangeError function 
//$c1   RPZ 02/09/95 Put in mathgeom.dll for now ; Added header
//========================================================================//
//              Copyright 1995 (Unpublished Material)                     //
//                  SolidWorks Corporation.                               //
//========================================================================//
//
//     File Name: dynmem.h
//     
//     Application: Memory
//     
//     Contents: dynamic array implementation
//
//========================================================================//
#ifndef		DYNMEM_H
#define		DYNMEM_H

#include <appcomm/mgdef.h>

#ifdef _DEBUG
#define amDynamicArrayAlloc(ICOUNT, GROWBY, MULTIPLE , SIZE) suDynArrayAlloc( ICOUNT, GROWBY, MULTIPLE, SIZE, __FILE__, __LINE__ ); 
#define amDynamicArrayAllocSpecial(ICOUNT, GROWBY, MULTIPLE , SIZE) suDynArrayAllocSpecial( ICOUNT, GROWBY, MULTIPLE, SIZE, __FILE__, __LINE__ ); 
#else
#define amDynamicArrayAlloc(ICOUNT, GROWBY, MULTIPLE, SIZE) suDynArrayAlloc( ICOUNT, GROWBY, MULTIPLE, SIZE);
#define amDynamicArrayAllocSpecial(ICOUNT, GROWBY, MULTIPLE, SIZE) suDynArrayAllocSpecial( ICOUNT, GROWBY, MULTIPLE, SIZE);
#endif

extern "C"
{
#ifdef _DEBUG
	MG_EXPORT void* suDynArrayAlloc(int, int, int, int, const char* file, int line);
	MG_EXPORT void* suDynArrayAllocSpecial(int, int, int, int, const char* file, int line);
	MG_EXPORT void* suDynArrayAlloc1(int, void*, const char* file, int line);
	MG_EXPORT void amDynamicArrayGetMemStatus(int* allocated, int* used);
#else
	MG_EXPORT void* suDynArrayAlloc(int, int, int, int);
	MG_EXPORT void* suDynArrayAllocSpecial(int, int, int, int);
	MG_EXPORT void* suDynArrayAlloc1(int, void*);
#endif
	MG_EXPORT void* amDynArrayRealloc(void*, int, int growmultiple = 1);//SPRs 1247656 and 1251820
	MG_EXPORT int amDynamicArrayCount(const void *);
	MG_EXPORT int amDynamicArrayCountSafe(const void*);
	MG_EXPORT int amDynamicArrayCountSafe2(const void*);
	MG_EXPORT int amDynamicArrayAllocCount(void *);
	MG_EXPORT void *amDynamicArrayAdd( void *, const void *);
	MG_EXPORT void amDynamicArrayFree(void *);
	MG_EXPORT void amDynamicArrayFreeSafe(void *);
	MG_EXPORT void *amDynamicArrayResize(void *, int);
	MG_EXPORT void *amDynamicArrayResize2(void *, int, const void *);
	MG_EXPORT void *amDynamicArrayReserve(void *dynArrayIn, int newCapacity);

	MG_EXPORT void* amDynamicArrayInsertAt(void*, int, const void*, int);
	MG_EXPORT void* amDynamicArraySetAt(void*, void*, int, int);
	MG_EXPORT void amDynamicArrayRemoveAt(void*, int, int);
	MG_EXPORT void* amDynamicArrayFreeExtra(void*, double fractionFree = 0.0);
	MG_EXPORT void* amDynamicArrayCopy(void*, int);
	MG_EXPORT void* amDynamicArrayAppend(void*, void*);
	MG_EXPORT int amDynamicArrayReverseFromTo(void*, int, int);
	MG_EXPORT void suDynamicGetStats(const void* arrayIn, int* growByElementCount, int* growByMultiple, int* elementSize);

	MG_EXPORT int amDynamicArrayIsInvalid(void*); // Checks for corrupted header

	MG_EXPORT int amDynamicArrayGetPrior(const void* dynArrayIn);
	MG_EXPORT int amDynamicArraySetPrior(void* dynArrayIn, int);
	MG_EXPORT const int* amDynamicArrayPriorPointer(const void* dynArrayIn);

	MG_EXPORT const int* amDynamicArrayCountPointer(const void* dynArrayIn);
} // endextern C

	MG_EXPORT void amDynamicArrayRangeError();


#endif
