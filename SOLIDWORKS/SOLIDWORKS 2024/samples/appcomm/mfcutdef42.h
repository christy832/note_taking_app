//$c14  JC  01/07/05 VC8/X64 Port; added MFCUT_IMPLEMENT_DYNCREATE
//$c13  PXK 02/04/03 Changes to work with static libs
//$c12  DNC 10/04/02 Added initial compiler upgrade for Visual Studio .NET
//$c11  drd 03/09/01 Add operator<< to DECLARE_SERIAL
//$c10  PXK 09/28/00 Correct some symbols.
//$c9	SRK/DRD 06/23/2000 IA64 Porting Tool, Update to use SWCC library, and derive all objects from su_CObject
//$c8   MIP 08/01/98 Added for mfcdoc
//$c7   PSB 05/08/97 Moved exposed include files to \am\sldworks\appcomm
//$c6   HWL 03/17/97 Change Winchester Design Systems Inc. to SolidWorks Corporation.
//$c5   RBX 11/23/96 new def file for MFC 4.2
//$c4   BCS 10/04/96 Added MFCUT_DECLARE_MESSAGE_MAP
//$c3   RBX 01/10/96 Use CreateObject instead of Construct in dyncreate macro, export >>
//$c2   RPZ 12/06/95 eliminated MFCUT_DLL ifdef (no longer needed)
//$c1   RPZ 04/07/95 Created
//========================================================================//
//              Copyright 1995 (Unpublished Material)                     //
//                  SolidWorks Corporation.                               //
//========================================================================//
//
//     File Name: mfcutdef42.h
//     
//     Application: Utils:  mfc DLL support
//     
//     Contents: define for	export definition symbols
//
//========================================================================//
#ifndef MFCUT_EXPORT


//----
//  Model Dll Defines
//----
#ifndef NO_EXPORTS
#ifndef MFCUT_FILE
#define MFCUT_EXPORT __declspec( dllimport )
#else
#define MFCUT_EXPORT __declspec( dllexport )
#endif
#else
#define MFCUT_EXPORT 
#endif

//////////////////////////////////////////////////////////////////////////////
// Helper macros for declaring compliant classes
#ifdef _AFXDLL
#if _MFC_VER < 0x0700
#define MFCUT_DECLARE_DYNAMIC(class_name) \
protected: \
	static CRuntimeClass* PASCAL _GetBaseClass(); \
public: \
	static const MFCUT_EXPORT AFX_DATA CRuntimeClass class##class_name; \
	MFCUT_EXPORT virtual CRuntimeClass* GetRuntimeClass() const; \

#define _MFCUT_DECLARE_DYNAMIC(class_name) \
protected: \
	static CRuntimeClass* PASCAL _GetBaseClass(); \
public: \
	static MFCUT_EXPORT AFX_DATA CRuntimeClass class##class_name; \
	MFCUT_EXPORT virtual CRuntimeClass* GetRuntimeClass() const; \

#elif _MFC_VER >= 0x0800

#define MFCUT_DECLARE_DYNAMIC(class_name) \
protected: \
	static CRuntimeClass* PASCAL _GetBaseClass(); \
public: \
	static const MFCUT_EXPORT CRuntimeClass class##class_name; \
	static MFCUT_EXPORT CRuntimeClass* PASCAL GetThisClass(); \
	MFCUT_EXPORT virtual CRuntimeClass* GetRuntimeClass() const; \

#define _MFCUT_DECLARE_DYNAMIC(class_name) \
protected: \
	static CRuntimeClass* PASCAL _GetBaseClass(); \
public: \
	static MFCUT_EXPORT CRuntimeClass class##class_name; \
	static MFCUT_EXPORT CRuntimeClass* PASCAL GetThisClass(); \
	MFCUT_EXPORT virtual CRuntimeClass* GetRuntimeClass() const; \

#else //!_MFC_VER < 0x0700
#define MFCUT_DECLARE_DYNAMIC(class_name) \
public: \
	static const MFCUT_EXPORT CRuntimeClass class##class_name; \
	static MFCUT_EXPORT CRuntimeClass* PASCAL GetThisClass(); \
	MFCUT_EXPORT virtual CRuntimeClass* GetRuntimeClass() const; \

#define _MFCUT_DECLARE_DYNAMIC(class_name) \
public: \
	static MFCUT_EXPORT CRuntimeClass class##class_name; \
	static MFCUT_EXPORT CRuntimeClass* PASCAL GetThisClass(); \
	MFCUT_EXPORT virtual CRuntimeClass* GetRuntimeClass() const; \

#endif //_MFC_VER < 0x0700
#else //!_AFXDLL

#if _MFC_VER < 0x0700
#define MFCUT_DECLARE_DYNAMIC(class_name) \
public: \
	static const MFCUT_EXPORT AFX_DATA CRuntimeClass class##class_name; \
	MFCUT_EXPORT virtual CRuntimeClass* GetRuntimeClass() const; \

#define _MFCUT_DECLARE_DYNAMIC(class_name) \
public: \
	static MFCUT_EXPORT AFX_DATA CRuntimeClass class##class_name; \
	MFCUT_EXPORT virtual CRuntimeClass* GetRuntimeClass() const; \

#else //!_MFC_VER < 0x0700
#define MFCUT_DECLARE_DYNAMIC(class_name) \
public: \
	static const MFCUT_EXPORT CRuntimeClass class##class_name; \
	MFCUT_EXPORT virtual CRuntimeClass* GetRuntimeClass() const; \

#define _MFCUT_DECLARE_DYNAMIC(class_name) \
public: \
	static MFCUT_EXPORT CRuntimeClass class##class_name; \
	MFCUT_EXPORT virtual CRuntimeClass* GetRuntimeClass() const; \

#endif //_MFC_VER < 0x0700

#endif //!_AFXDLL 
//////
// not serializable, but dynamically constructable
#define MFCUT_DECLARE_DYNCREATE(class_name) \
	MFCUT_DECLARE_DYNAMIC(class_name) \
	static CObject* PASCAL CreateObject();

#define _MFCUT_DECLARE_DYNCREATE(class_name) \
	_MFCUT_DECLARE_DYNAMIC(class_name) \
	static CObject* PASCAL CreateObject();
#if _MFC_VER < 0x0700
#define MFCUT_DECLARE_SERIAL(class_name) \
	_MFCUT_DECLARE_DYNCREATE(class_name) \
	friend MFCUT_EXPORT su_CArchive& AFXAPI operator>>(su_CArchive& ar, class_name* &pOb);\
	friend MFCUT_EXPORT su_CArchive& AFXAPI operator<<(su_CArchive& ar, class_name* &pOb);
#else
#define MFCUT_DECLARE_SERIAL(class_name) \
	_MFCUT_DECLARE_DYNCREATE(class_name) \
	AFX_API friend MFCUT_EXPORT su_CArchive& AFXAPI operator>>(su_CArchive& ar, class_name* &pOb);\
	AFX_API friend MFCUT_EXPORT su_CArchive& AFXAPI operator<<(su_CArchive& ar, class_name* &pOb);

#endif
//IA64 definition start
#if _MFC_VER < 0x0700
#define MFCUT_IMPLEMENT_RUNTIMECLASS(class_name, base_class_name, wSchema, pfnNew) \
	CRuntimeClass* PASCAL class_name::_GetBaseClass() \
		{ return RUNTIME_CLASS(base_class_name); } \
	AFX_COMDAT const AFX_DATADEF CRuntimeClass class_name::class##class_name = { \
		#class_name, sizeof(class class_name), wSchema, pfnNew, \
			&class_name::_GetBaseClass, NULL }; \
	MFCUT_EXPORT CRuntimeClass* class_name::GetRuntimeClass() const \
		{ return RUNTIME_CLASS(class_name); } \

#define _MFCUT_IMPLEMENT_RUNTIMECLASS(class_name, base_class_name, wSchema, pfnNew) \
	CRuntimeClass* PASCAL class_name::_GetBaseClass() \
		{ return RUNTIME_CLASS(base_class_name); } \
	AFX_COMDAT AFX_DATADEF CRuntimeClass class_name::class##class_name = { \
		#class_name, sizeof(class class_name), wSchema, pfnNew, \
			&class_name::_GetBaseClass, NULL }; \
	MFCUT_EXPORT CRuntimeClass* class_name::GetRuntimeClass() const \
		{ return RUNTIME_CLASS(class_name); } \

#elif _MFC_VER >= 0x0800

#define MFCUT_IMPLEMENT_RUNTIMECLASS(class_name, base_class_name, wSchema, pfnNew, class_init) \
	CRuntimeClass* PASCAL class_name::_GetBaseClass() \
		{ return RUNTIME_CLASS(base_class_name); } \
	AFX_COMDAT const CRuntimeClass class_name::class##class_name = { \
		#class_name, sizeof(class class_name), wSchema, pfnNew, \
			&class_name::_GetBaseClass, NULL, class_init }; \
	CRuntimeClass* PASCAL class_name::GetThisClass() \
		{ return _RUNTIME_CLASS(class_name); } \
	CRuntimeClass* class_name::GetRuntimeClass() const \
		{ return _RUNTIME_CLASS(class_name); } \

#define _MFCUT_IMPLEMENT_RUNTIMECLASS(class_name, base_class_name, wSchema, pfnNew, class_init) \
	CRuntimeClass* PASCAL class_name::_GetBaseClass() \
		{ return RUNTIME_CLASS(base_class_name); } \
	AFX_COMDAT CRuntimeClass class_name::class##class_name = { \
		#class_name, sizeof(class class_name), wSchema, pfnNew, \
			&class_name::_GetBaseClass, NULL, class_init }; \
	CRuntimeClass* PASCAL class_name::GetThisClass() \
		{ return _RUNTIME_CLASS(class_name); } \
	CRuntimeClass* class_name::GetRuntimeClass() const \
		{ return _RUNTIME_CLASS(class_name); } \

#else //!_MFC_VER < 0x0700
#define MFCUT_IMPLEMENT_RUNTIMECLASS(class_name, base_class_name, wSchema, pfnNew, class_init) \
	AFX_COMDAT const CRuntimeClass class_name::class##class_name = { \
		#class_name, sizeof(class class_name), wSchema, pfnNew, \
			&base_class_name::GetThisClass, RUNTIME_CLASS(class_name)->m_pNextClass, class_init }; \
	CRuntimeClass* PASCAL class_name::GetThisClass() \
		{ return _RUNTIME_CLASS(class_name); } \
	MFCUT_EXPORT CRuntimeClass* class_name::GetRuntimeClass() const \
		{ return _RUNTIME_CLASS(class_name); } \

#define _MFCUT_IMPLEMENT_RUNTIMECLASS(class_name, base_class_name, wSchema, pfnNew, class_init) \
	AFX_COMDAT CRuntimeClass class_name::class##class_name = { \
		#class_name, sizeof(class class_name), wSchema, pfnNew, \
			&base_class_name::GetThisClass, RUNTIME_CLASS(class_name)->m_pNextClass, class_init }; \
	CRuntimeClass* PASCAL class_name::GetThisClass() \
		{ return _RUNTIME_CLASS(class_name); } \
	MFCUT_EXPORT CRuntimeClass* class_name::GetRuntimeClass() const \
		{ return _RUNTIME_CLASS(class_name); } \

#endif //_MFC_VER < 0x0700

#if _MFC_VER < 0x0700
#define MFCUT_IMPLEMENT_DYNAMIC(class_name, base_class_name) \
	MFCUT_IMPLEMENT_RUNTIMECLASS(class_name, base_class_name, 0xFFFF, NULL)
#else
#define MFCUT_IMPLEMENT_DYNAMIC(class_name, base_class_name) \
	MFCUT_IMPLEMENT_RUNTIMECLASS(class_name, base_class_name, 0xFFFF, NULL, NULL)
#endif

#if _MFC_VER < 0x0700
#define MFCUT_IMPLEMENT_DYNCREATE(class_name, base_class_name) \
	CObject* PASCAL class_name::CreateObject() \
		{ return new class_name; } \
	MFCUT_IMPLEMENT_RUNTIMECLASS(class_name, base_class_name, 0xFFFF, \
		class_name::CreateObject)
#else //!_MFC_VER < 0x0700
#define MFCUT_IMPLEMENT_DYNCREATE(class_name, base_class_name) \
	CObject* PASCAL class_name::CreateObject() \
		{ return new class_name; } \
	MFCUT_IMPLEMENT_RUNTIMECLASS(class_name, base_class_name, 0xFFFF, \
		class_name::CreateObject, NULL)
#endif //_MFC_VER < 0x0700

#if _MFC_VER < 0x0700
#define MFCUT_IMPLEMENT_SERIAL(class_name, base_class_name, wSchema) \
	CObject* PASCAL class_name::CreateObject() \
		{ return new class_name; } \
	_IMPLEMENT_RUNTIMECLASS(class_name, base_class_name, wSchema, \
		class_name::CreateObject) \
	AFX_CLASSINIT _init_##class_name(RUNTIME_CLASS(class_name)); \
	MFCUT_EXPORT su_CArchive& AFXAPI operator>>(su_CArchive& ar, class_name* &pOb) \
		{ pOb = (class_name*) ar.ReadObject(RUNTIME_CLASS(class_name)); \
			return ar; } \
	MFCUT_EXPORT su_CArchive& AFXAPI operator<<(su_CArchive& ar, class_name* &pOb) \
		{  ar.WriteObject(pOb, RUNTIME_CLASS(class_name)); \
			return ar; } \

#else //!_MFC_VER < 0x0700

#define MFCUT_IMPLEMENT_SERIAL(class_name, base_class_name, wSchema) \
	CObject* PASCAL class_name::CreateObject() \
		{ return new class_name; } \
	AFX_COMDAT AFX_CLASSINIT _init_##class_name(RUNTIME_CLASS(class_name)); \
	_MFCUT_IMPLEMENT_RUNTIMECLASS(class_name, base_class_name, wSchema, \
		class_name::CreateObject, &_init_##class_name) \
	MFCUT_EXPORT su_CArchive& AFXAPI operator>>(su_CArchive& ar, class_name* &pOb) \
		{ pOb = (class_name*) ar.ReadObject(RUNTIME_CLASS(class_name)); \
			return ar; } \
	MFCUT_EXPORT su_CArchive& AFXAPI operator<<(su_CArchive& ar, class_name* &pOb) \
		{ ar.WriteObject(pOb, RUNTIME_CLASS(class_name)); \
			return ar; } \

#endif //_MFC_VER < 0x0700
//IA64 definition end

//////////
#ifdef _AFXDLL

#if _MFC_VER < 0x0700
#define MFCUT_DECLARE_MESSAGE_MAP() \
private: \
	static const AFX_MSGMAP_ENTRY _messageEntries[]; \
protected: \
	MFCUT_EXPORT static AFX_DATA const AFX_MSGMAP messageMap; \
	static const AFX_MSGMAP* PASCAL _GetBaseMessageMap(); \
	MFCUT_EXPORT virtual const AFX_MSGMAP* GetMessageMap() const; \

#else //!_MFC_VER < 0x0700
#define MFCUT_DECLARE_MESSAGE_MAP() \
private: \
	static const AFX_MSGMAP_ENTRY _messageEntries[]; \
protected: \
	MFCUT_EXPORT static const AFX_MSGMAP messageMap; \
	MFCUT_EXPORT static const AFX_MSGMAP* PASCAL GetThisMessageMap(); \
	MFCUT_EXPORT virtual const AFX_MSGMAP* GetMessageMap() const; \

#endif //_MFC_VER < 0x0700
#else	//_AFXDLL

#define MFCUT_DECLARE_MESSAGE_MAP() \
private: \
	static const AFX_MSGMAP_ENTRY _messageEntries[]; \
protected: \
	static AFX_DATA const AFX_MSGMAP messageMap; \
	MFCUT_EXPORT virtual const AFX_MSGMAP* GetMessageMap() const; \

#endif	//_AFXDLL


#ifdef _AFXDLL

#if _MFC_VER < 0x0700
#define MFCUT_DECLARE_DISPATCH_MAP() \
private: \
	static const AFX_DISPMAP_ENTRY _dispatchEntries[]; \
	static UINT _dispatchEntryCount; \
	static DWORD _dwStockPropMask; \
protected: \
	MFCUT_EXPORT static AFX_DATA const AFX_DISPMAP dispatchMap; \
	static const AFX_DISPMAP* PASCAL _GetBaseDispatchMap(); \
	MFCUT_EXPORT virtual const AFX_DISPMAP* GetDispatchMap() const;\

#else //!_MFC_VER < 0x0700
#define MFCUT_DECLARE_DISPATCH_MAP() \
private: \
	static const AFX_DISPMAP_ENTRY _dispatchEntries[]; \
	static UINT _dispatchEntryCount; \
	static DWORD _dwStockPropMask; \
protected: \
	MFCUT_EXPORT static const AFX_DISPMAP dispatchMap; \
	MFCUT_EXPORT static const AFX_DISPMAP* PASCAL GetThisDispatchMap(); \
	MFCUT_EXPORT virtual const AFX_DISPMAP* GetDispatchMap() const; \

#endif //_MFC_VER < 0x0700
#else	//_AFXDLL

#define MFCUT_DECLARE_DISPATCH_MAP() \
private: \
	static const AFX_DISPMAP_ENTRY _dispatchEntries[]; \
	static UINT _dispatchEntryCount; \
	static DWORD _dwStockPropMask; \
protected: \
	static AFX_DATA const AFX_DISPMAP dispatchMap; \
	MFCUT_EXPORT virtual const AFX_DISPMAP* GetDispatchMap() const; \

#endif	//_AFXDLL

#ifdef _AFXDLL

#define MFCUT_DECLARE_OLECMD_MAP() \
private: \
	static const AFX_OLECMDMAP_ENTRY _commandEntries[]; \
protected: \
	static AFX_DATA const AFX_OLECMDMAP commandMap; \
	static const AFX_OLECMDMAP* PASCAL _GetBaseCommandMap(); \
	MFCUT_EXPORT virtual const AFX_OLECMDMAP* GetCommandMap() const; \

#else // AFXDLL
#define MFCUT_DECLARE_OLECMD_MAP() \
private: \
	static const AFX_OLECMDMAP_ENTRY _commandEntries[]; \
protected: \
	static AFX_DATA const AFX_OLECMDMAP commandMap; \
	MFCUT_EXPORT virtual const AFX_OLECMDMAP* GetCommandMap() const; \

#endif // AFXDLL

#endif
