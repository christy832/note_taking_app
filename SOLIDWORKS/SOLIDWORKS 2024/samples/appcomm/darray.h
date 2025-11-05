//$c50 IBL 06/29/23 IR-1118320 Added su_loadArray2()
//$c49 IBL 04/09/20 Prj 24847 SPR 1176086 Added suDynamicArray::Swap()
//$c48 C5B 02/04/20 Prj 24503 Sketch pattern out to database stream. Using dynamic arracy for partern segment ids.
//$c47 SYV311/25/16 Added MaxCount function in dynamic array.
//$c46 RMS 05/10/12 fix memory leak in Serialize()
//$c45 ARM 10/22/08 Proj 14620: Removed MAINWIN code
//$c44  DRD 07/03/06 Model separation
//$c43  PEL 03/01/05 SPR 255850: Use ARRAY_ARCH_ASSERT instead of ASSERT.
//$c42  LVS 07/14/03 spr183630, No early return from Alloc with growSize
//$c41  DRD 06/25/03 Arrays which are zero in size are no longer allocated
//$c40  LVS 12/06/02 Fixed Realloc(), added AddUnique()
//$c39	PEL 03/04/02 changed typename to class in su_saveArray and su_loadArray.
//$c38	WGC 01/15/02 fixed typo in $c37
//$c37    VIT 01/15/02 added ReverseFromTo; augmented InsertAt
//$c36    PJS 04/19/01 call the notify method in Resize (for project 4139)
//$c35    PJS 02/28/01 Submission for project 4139 - persistent DCM in sketcher
//$c34	JT	01/08/01 use amDynamicArrayAllocSpecial
//$c33	JT	01/08/01 include sw_archive.h for MTS & XGL
//$c32  JT  01/05/01 added array load and store templates.
//$c31    drd 06/24/00 Isolate swcc lib from other apps
//$c30	SRK/DRD 06/23/2000 IA64 Porting Tool, Update to use SWCC library, and derive all objects from su_CObject
//$c29  JT  01/30/99 added mainwin su_loadIntArray et al
//$c28  VIT 02/27/97 more const declarations
//$c27  VIT 12/26/97 several const declarations
//$c26  PSB 05/08/97 Moved exposed include files to \am\sldworks\appcomm
//$c25  VIT 04/16/97 Add Append()
//$c24  VIT 11/19/96 modified RemoveAt()
//$c23  RPZ 11/19/96 added Serialize for plain data type (i.e. no pointers please)
//$c22  BAH 07/26/96 Added SetNewArray()
//$c21  VIT 06/26/96 added SetAt
//$c20  RPZ 05/23/96 changed Alloc etc to use THIS_FILE instead of file
//$c19  VIT 04/22/96 Added CopyCount(), overloaded Alloc w/ a template arg
//$c18  BAH 02/27/96 Added Realloc()
//$c17  BAH 02/22/96 Added growMultiple to allocation
//$c16  VIT 02/14/96 Add Copy()
//$c14  RPZ 11/07/95 added debug tracking for dynamic arrays
//$c13	BCS 09/28/95 Make sure that we do not have memory leak in Alloc().
//$c12  RBX 09/06/95 trap underflow error too in CheckIndex
//$c11  RBX 08/25/95 CheckIndex in operator[]
//$c10  VIT 07/21/95 New constructor, safe Add()
//$c9   RPZ 07/19/95 Added Free to the destructor
//$c8   BAH 04/24/95 Added RemoveAt()
//$c7   DJC 04/11/95 Added InsertAt function.
//$c6   BAH 03/03/95 Added Array() to get to the base pointer.
//$c5   RPZ 02/11/95 Got rid of nested includes in sgSketch.h
//                   replaced precompiled header section with mopch.h
//                   changed all include directive to include the full 
//                   path from am on down.
//$c4	RBX	01/24/95 Return index from Add function.
//$c3   VIT 01/12/95 Make it safer for NULL pointers
//$c2   VIT 01/10/95 Make it safe for NULL pointers
//$c1   BAH 12/28/94 Created
//========================================================================//
//              Copyright 1994 (Unpublished Material)                     //
//                  SolidWorks Corporation.                        //
//========================================================================//
//
//     File Name: appcomm/darray.h
//     
//     Application: UTILS: template for dynamic array class   
//     
//     Contents: Class definition for template of dynamic arrays
//
//========================================================================//
//
#ifndef DARRAY_INCLUDED
#define DARRAY_INCLUDED

#include <appcomm/mgdef.h>
#include <appcomm/dynmem.h>
#include <appcomm/swcc.h>
#include <sldDBImpl/msgpack11.hpp>
#include <algorithm>

#define ARRAY_ARCH_ASSERT(f) \
if (!(f) ) { ASSERT(0); AfxThrowFileException ( CFileException::genericException ); } \

#ifdef _DEBUG 
#define CHECKINDEX(iarray, indexIn) \
	if (indexIn < 0 || indexIn >= amDynamicArrayCount(iarray))	\
	{											\
		amDynamicArrayRangeError ();			\
	}
#else
#define CHECKINDEX(iarray, index)
#endif

template <class T> void su_saveArray( T* theArray, sw_CArchive& ar )
{
	ARRAY_ARCH_ASSERT( ar.IsStoring() );

	if( theArray == NULL )
	{
		ar << (DWORD)0;
		return;
	}

	DWORD elementSize = 0;
	DWORD growByCount = 0;
	DWORD growByMultiple = 0;
	DWORD count = 0;
	suDynamicGetStats( theArray, (int*)&growByCount, (int*)&growByMultiple, (int*)&elementSize );

	ARRAY_ARCH_ASSERT( 0 == (elementSize % sizeof(T)) ); // for example, VertexCoords is float[3].  elementSize is 12 and sizeof(T) is 4 bytes (float)
	ARRAY_ARCH_ASSERT(growByCount >= 0);
	ARRAY_ARCH_ASSERT( growByMultiple == 1 || growByMultiple == 2 );

	ar << elementSize;
	ar << growByCount;
	ar << growByMultiple;
	count = amDynamicArrayCount( theArray );
	ar << count;
	ar.Write( theArray, count*elementSize );
}


template <class T> T* su_loadArray2(sw_CArchive& ar, DWORD elementSize)
{
	if (elementSize == 0)
		return NULL;
	ARRAY_ARCH_ASSERT( 0 == (elementSize % sizeof(T)) );
	T* theArray = NULL;
	ARRAY_ARCH_ASSERT( ar.IsLoading() );
	DWORD growByCount = 0;
	DWORD growByMultiple = 0;
	DWORD count = 0;
	ARRAY_ARCH_ASSERT( elementSize > 0 );
	ar >> growByCount;
	ar >> growByMultiple;
	ar >> count;
	theArray = (T*)amDynamicArrayAllocSpecial(count, growByCount, growByMultiple, elementSize);
	if( NULL != theArray )
	{
		ar.Read( theArray, count * elementSize );
	}
	else if (count != 0)
		ARRAY_ARCH_ASSERT(0);
	return theArray;
}

template <class T> T* su_loadArray( sw_CArchive& ar )
{
	DWORD elementSize = 0;
	ar >> elementSize;
	return su_loadArray2<T>(ar, elementSize);
}


template <class Entity> class suDynamicArray
{
	public:
	// Constructors/Destructors
		suDynamicArray()
		{
			iarray = NULL;
		}

		suDynamicArray(int startSize, int growSize, int growMultiple = 1)
		{
			iarray = NULL;
			Alloc( startSize, growSize, growMultiple);
		}

		~suDynamicArray() 
		{
			Free();
		}

	// Create and Destroy functions for dynamic array
#ifdef _DEBUG
		int Alloc(int startSize, int growSize, int growMultiple = 1, char* fileName = THIS_FILE, int lineNum = -1 )
#else
		int Alloc(int startSize, int growSize, int growMultiple = 1)
#endif
		{
			if (startSize < 0)
			{
				TRACE(_T("\r\nWarning: negative allocation suDynamicArray"));
				startSize = 0;
			}
			
			// make sure that we will not have a memory leak here
#ifdef _DEBUG 
			if( Count() != 0 || growSize <= 0 )
				amDynamicArrayRangeError ();			
#endif
			if ( NULL != iarray )
			{
#ifdef _DEBUG
				TRACE(_T("\r\nWarning: iarray of suDynamicArray != NULL, Free() is called from Alloc()"));
				TRACE(_T("\r\n         you may want to check the call to Alloc()"));
#endif
				Free();
			}

#ifdef _DEBUG
			iarray = (Entity*) suDynArrayAlloc(startSize, growSize, growMultiple, sizeof (Entity), fileName, lineNum );
#else
			iarray = (Entity*) suDynArrayAlloc(startSize, growSize, growMultiple, sizeof (Entity) );			
#endif
			return ((iarray == NULL) ? FALSE : TRUE);
		}

#ifdef _DEBUG
		int Alloc(int startSize, suDynamicArray<Entity>* incrTemplate, char* fileName = THIS_FILE, int lineNum = -1 )
#else
		int Alloc(int startSize, suDynamicArray<Entity>* incrTemplate)
#endif
		{
			if (startSize == 0)
					return TRUE;

			// make sure that we will not have a memory leak here
#ifdef _DEBUG 
			if( Count() != 0 || incrTemplate->iarray == NULL )
				amDynamicArrayRangeError ();			
#endif
			if ( NULL != iarray )
			{
#ifdef _DEBUG
				TRACE(_T("\r\nWarning: iarray of suDynamicArray != NULL, Free() is called from Alloc()"));
				TRACE(_T("\r\n         you may want to check the call to Alloc()"));
#endif
				Free();
			}

#ifdef _DEBUG
			iarray = (Entity*) suDynArrayAlloc1(startSize, incrTemplate->iarray, fileName, lineNum );
#else
			iarray = (Entity*) suDynArrayAlloc1(startSize, incrTemplate->iarray );			
#endif
			return ((iarray == NULL) ? FALSE : TRUE);
		}

		void Realloc(int newMaxSize, int growMultiple = 1) //SPRs 1247656 and 1251820
		{
			if (newMaxSize <= Count())
				return;
			if (NULL == iarray)
				Alloc(8, std::max(newMaxSize, 16));

			iarray = (Entity*) amDynArrayRealloc(iarray, newMaxSize, growMultiple);
		}

		int Append( const suDynamicArray<Entity>& sourceArray )
		{
			int oldCount = Count();
			if( iarray == NULL )
				CopyCount( sourceArray );
			else if( sourceArray.Count() != 0 )
				iarray = (Entity*) amDynamicArrayAppend( iarray, sourceArray.iarray );
			iNotifyArrayChanged(oldCount,Count()-1);
			return Count();
		}

		void Copy( const suDynamicArray<Entity>& sourceArray )
		{
			if( iarray != NULL )
			{
				amDynamicArrayRangeError ();
				Free();
			}
			iarray = (Entity*) amDynamicArrayCopy( sourceArray.iarray, FALSE );
			iNotifyArrayChanged(0,Count()-1);
		}
		void CopyCount( const suDynamicArray<Entity>& sourceArray )
		{
			if( iarray != NULL )
			{
				amDynamicArrayRangeError ();
				Free();
			}
			iarray = (Entity*) amDynamicArrayCopy( sourceArray.iarray, TRUE );
			iNotifyArrayChanged(0,Count()-1);
		}
		void Free()
		{
			if (iarray != NULL)
			{
				amDynamicArrayFree(iarray);
				iarray = NULL;
			}
		}

		void Swap(suDynamicArray<Entity>& sourceArray) // $c49
		{
			Entity * temp = iarray;
			iarray = sourceArray.iarray;
			sourceArray.iarray = temp;
		}


	// Access functions to dynamic array
		int Add(Entity* newItem) 
		{
			if (iarray == NULL)
			{
				Alloc (8, 16, 1);
			}	  
			iarray = (Entity*) amDynamicArrayAdd(iarray, newItem);
			iNotifyArrayChanged(Count() - 1, Count() - 1);
			return Count() - 1;
		}

//     Carefull - there is a performance hit associated with using AddUnique().
//     Will work on performance fix later - LVS.
		BOOL AddUnique(Entity* newItem)
		{
			int nn = Count();
			for (int ii = 0; ii < nn; ++ii)
			{
				if (*newItem == iarray[ii])
					return FALSE;
			}
			Add(newItem);
			return TRUE;
		}

	// Access functions to dynamic array
		void SetAt(int index, Entity* newItem, int numAdd = 1 ) 
		{
			if ( index < 0 || numAdd <= 0 || index+numAdd > Count() )
			{
				amDynamicArrayRangeError ();
			}	  
			amDynamicArraySetAt(iarray, newItem, index, numAdd);
			iNotifyArrayChanged(index, index);
			return ;
		}

 	// Access functions to dynamic array
		void InsertAt(int index, Entity* newItem, int count = 1) 
		{
			if ( index < 0 || count <= 0 || index > Count() )
			{
				amDynamicArrayRangeError ();
			}
			if( iarray == NULL )
			{
				Alloc(count, 1);			
			}
			iarray = (Entity*) amDynamicArrayInsertAt (iarray, index, newItem, count);
			iNotifyArrayChanged(index, Count() -1);
			return;
		}

		BOOL ReverseFromTo( int startInd = 0, int endInd = -2)
		{
			if( endInd == -2 )		// default: till the end
				endInd = Count() - 1;
			int done = amDynamicArrayReverseFromTo( iarray, startInd, endInd );
			if( done )
				iNotifyArrayChanged(startInd, endInd);
			return done;
		}

		int Count() const
		{
			return (iarray == NULL) ? 0 : amDynamicArrayCount(iarray);
		}

		int MaxCount() const
		{
			return (iarray == NULL) ? 0 : amDynamicArrayAllocCount(iarray);
		}

		void Resize(int newCount)
		{
			if( iarray == NULL)
			{
				if( newCount != NULL )
					amDynamicArrayRangeError ();
				return;
			}
			int count = Count();
			iarray = (Entity*) amDynamicArrayResize(iarray, newCount);
			count = (count > Count()) ? count : Count();
			iNotifyArrayChanged(0,count-1);
		}

		void RemoveAt(int index, int count = 1)
		{
			if (iarray == NULL)
				return;
			amDynamicArrayRemoveAt(iarray, index, count);
			iNotifyArrayChanged(index, Count()-1);
		}

		Entity& operator [](int indexIn) const
		{	
		// If we ever try to step out of bounds, this
		// will ASSERT (0).
			CHECKINDEX (iarray, indexIn);
			return (iarray[indexIn]);
		}

		Entity* Array() const
		{
			return iarray;
		}

	// WARNING: Do not use this function unless you REALLY REALLY know what you are doing!
		void SetNewArray(Entity* arrayIn)
		{
			iarray = arrayIn;
			iNotifyArrayChanged(0,Count()-1);
		}
	// WARNING: Do not use this function unless you REALLY REALLY know what you are doing!

		void Serialize( sw_CArchive& ar )
		{
			if( ar.IsStoring() )
				su_saveArray( iarray, ar );
			else 
			{
				if( iarray != NULL )
				{
					//amDynamicArrayRangeError ();
					Free();
				}
				iarray = su_loadArray<Entity>( ar );
			}
		}

		msgpack11::MsgPack to_msgpack()
		{
			msgpack11::MsgPack::array arr;

			int count = Count();
			for (int i = 0; i < count; i++)
				arr.push_back(iarray[i]);

			msgpack11::MsgPack msg(arr);
			return msg;
		}

	private:

		virtual void iNotifyArrayChanged ( int lower, int upper ) {}

		Entity* iarray;
};


#endif
