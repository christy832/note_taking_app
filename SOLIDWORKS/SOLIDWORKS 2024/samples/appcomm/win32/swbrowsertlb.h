/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 5.01.0164 */
/* at Wed Aug 08 15:11:00 2001
 */
/* Compiler settings for P:\am\thirdptysrc\toolbox\solidworks\swbrowser\API\typelib\swbrowsertlb.idl:
    Os (OptLev=s), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
*/
//@@MIDL_FILE_HEADING(  )


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 440
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __swbrowsertlb_h__
#define __swbrowsertlb_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

#ifndef __IApplication_FWD_DEFINED__
#define __IApplication_FWD_DEFINED__
typedef interface IApplication IApplication;
#endif 	/* __IApplication_FWD_DEFINED__ */


#ifndef __IPDMDocManager_FWD_DEFINED__
#define __IPDMDocManager_FWD_DEFINED__
typedef interface IPDMDocManager IPDMDocManager;
#endif 	/* __IPDMDocManager_FWD_DEFINED__ */


#ifndef __DApplicationEvents_FWD_DEFINED__
#define __DApplicationEvents_FWD_DEFINED__
typedef interface DApplicationEvents DApplicationEvents;
#endif 	/* __DApplicationEvents_FWD_DEFINED__ */


#ifndef __Application_FWD_DEFINED__
#define __Application_FWD_DEFINED__

#ifdef __cplusplus
typedef class Application Application;
#else
typedef struct Application Application;
#endif /* __cplusplus */

#endif 	/* __Application_FWD_DEFINED__ */


#ifndef __DPDMDocManagerEvents_FWD_DEFINED__
#define __DPDMDocManagerEvents_FWD_DEFINED__
typedef interface DPDMDocManagerEvents DPDMDocManagerEvents;
#endif 	/* __DPDMDocManagerEvents_FWD_DEFINED__ */


#ifndef __PDMDocManager_FWD_DEFINED__
#define __PDMDocManager_FWD_DEFINED__

#ifdef __cplusplus
typedef class PDMDocManager PDMDocManager;
#else
typedef struct PDMDocManager PDMDocManager;
#endif /* __cplusplus */

#endif 	/* __PDMDocManager_FWD_DEFINED__ */


void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 


#ifndef __ToolboxBrowser_LIBRARY_DEFINED__
#define __ToolboxBrowser_LIBRARY_DEFINED__

/* library ToolboxBrowser */
/* [helpstring][version][uuid] */ 

typedef IUnknown __RPC_FAR *LPUNKNOWN;

typedef IDispatch __RPC_FAR *LPDISPATCH;


typedef IApplication __RPC_FAR *LPAPPLICATION;


typedef IPDMDocManager __RPC_FAR *LPPDMDOCMANAGER;

typedef /* [uuid] */ 
enum swApplicationEvents_e
    {	swDestroy	= 1
    }	swApplicationEvents_e;

typedef /* [uuid] */ 
enum swPDMDocManagerEvents_e
    {	swPDMDestroy	= 1,
	swBeforeWritingToDocument	= 2,
	swAfterWritingToDocument	= 3,
	swPreInsertDocument	= 4,
	swNewDocumentAdded	= 5
    }	swPDMDocManagerEvents_e;

typedef /* [uuid] */ 
enum swPDMStatus_e
    {	swPDMStatusError	= 0,
	swPDMStatusUnknown	= 1,
	swPDMStatusKnownAndAvailable	= 2,
	swPDMStatusKnownAndUnavailable	= 3
    }	swPDMStatus_e;


DEFINE_GUID(LIBID_ToolboxBrowser,0xED783340,0xD5DB,0x11d4,0xBD,0x5A,0x00,0xC0,0x4F,0x01,0x98,0x09);

#ifndef __IApplication_INTERFACE_DEFINED__
#define __IApplication_INTERFACE_DEFINED__

/* interface IApplication */
/* [object][helpstring][unique][hidden][oleautomation][dual][uuid] */ 


DEFINE_GUID(IID_IApplication,0xF2A5D740,0x01F6,0x4f20,0xA1,0x61,0x8D,0x78,0xD6,0x5F,0x62,0x07);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F2A5D740-01F6-4f20-A161-8D78D65F6207")
    IApplication : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_PDMDocManager( 
            /* [retval][out] */ LPPDMDOCMANAGER __RPC_FAR *retval) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IApplicationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IApplication __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IApplication __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IApplication __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IApplication __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IApplication __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IApplication __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IApplication __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_PDMDocManager )( 
            IApplication __RPC_FAR * This,
            /* [retval][out] */ LPPDMDOCMANAGER __RPC_FAR *retval);
        
        END_INTERFACE
    } IApplicationVtbl;

    interface IApplication
    {
        CONST_VTBL struct IApplicationVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IApplication_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IApplication_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IApplication_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IApplication_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IApplication_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IApplication_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IApplication_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IApplication_get_PDMDocManager(This,retval)	\
    (This)->lpVtbl -> get_PDMDocManager(This,retval)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE IApplication_get_PDMDocManager_Proxy( 
    IApplication __RPC_FAR * This,
    /* [retval][out] */ LPPDMDOCMANAGER __RPC_FAR *retval);


void __RPC_STUB IApplication_get_PDMDocManager_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IApplication_INTERFACE_DEFINED__ */


#ifndef __IPDMDocManager_INTERFACE_DEFINED__
#define __IPDMDocManager_INTERFACE_DEFINED__

/* interface IPDMDocManager */
/* [object][helpstring][unique][hidden][oleautomation][dual][uuid] */ 


DEFINE_GUID(IID_IPDMDocManager,0x859EFC6D,0x62A4,0x4872,0xA2,0x04,0xDF,0xDD,0xC5,0x50,0x79,0x9D);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("859EFC6D-62A4-4872-A204-DFDDC550799D")
    IPDMDocManager : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetDocumentStatus( 
            /* [in] */ long status,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetManagedDocument( 
            /* [in] */ BSTR fileName,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *retval) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IPDMDocManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IPDMDocManager __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IPDMDocManager __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IPDMDocManager __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            IPDMDocManager __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            IPDMDocManager __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            IPDMDocManager __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            IPDMDocManager __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetDocumentStatus )( 
            IPDMDocManager __RPC_FAR * This,
            /* [in] */ long status,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *retval);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetManagedDocument )( 
            IPDMDocManager __RPC_FAR * This,
            /* [in] */ BSTR fileName,
            /* [retval][out] */ VARIANT_BOOL __RPC_FAR *retval);
        
        END_INTERFACE
    } IPDMDocManagerVtbl;

    interface IPDMDocManager
    {
        CONST_VTBL struct IPDMDocManagerVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPDMDocManager_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IPDMDocManager_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IPDMDocManager_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IPDMDocManager_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define IPDMDocManager_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define IPDMDocManager_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define IPDMDocManager_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)


#define IPDMDocManager_SetDocumentStatus(This,status,retval)	\
    (This)->lpVtbl -> SetDocumentStatus(This,status,retval)

#define IPDMDocManager_SetManagedDocument(This,fileName,retval)	\
    (This)->lpVtbl -> SetManagedDocument(This,fileName,retval)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPDMDocManager_SetDocumentStatus_Proxy( 
    IPDMDocManager __RPC_FAR * This,
    /* [in] */ long status,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *retval);


void __RPC_STUB IPDMDocManager_SetDocumentStatus_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IPDMDocManager_SetManagedDocument_Proxy( 
    IPDMDocManager __RPC_FAR * This,
    /* [in] */ BSTR fileName,
    /* [retval][out] */ VARIANT_BOOL __RPC_FAR *retval);


void __RPC_STUB IPDMDocManager_SetManagedDocument_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IPDMDocManager_INTERFACE_DEFINED__ */


#ifndef __DApplicationEvents_DISPINTERFACE_DEFINED__
#define __DApplicationEvents_DISPINTERFACE_DEFINED__

/* dispinterface DApplicationEvents */
/* [helpstring][hidden][uuid] */ 


DEFINE_GUID(DIID_DApplicationEvents,0xF4E1A719,0x13DD,0x4e9f,0xBB,0x73,0x65,0x9E,0xDE,0x0C,0xD0,0x92);

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("F4E1A719-13DD-4e9f-BB73-659EDE0CD092")
    DApplicationEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct DApplicationEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            DApplicationEvents __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            DApplicationEvents __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            DApplicationEvents __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            DApplicationEvents __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            DApplicationEvents __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            DApplicationEvents __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            DApplicationEvents __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        END_INTERFACE
    } DApplicationEventsVtbl;

    interface DApplicationEvents
    {
        CONST_VTBL struct DApplicationEventsVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define DApplicationEvents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define DApplicationEvents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define DApplicationEvents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define DApplicationEvents_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define DApplicationEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define DApplicationEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define DApplicationEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __DApplicationEvents_DISPINTERFACE_DEFINED__ */


DEFINE_GUID(CLSID_Application,0x280FD973,0xC9AF,0x4825,0x9C,0x7D,0x40,0x8A,0xC4,0xCE,0xA1,0xA3);

#ifdef __cplusplus

class DECLSPEC_UUID("280FD973-C9AF-4825-9C7D-408AC4CEA1A3")
Application;
#endif

#ifndef __DPDMDocManagerEvents_DISPINTERFACE_DEFINED__
#define __DPDMDocManagerEvents_DISPINTERFACE_DEFINED__

/* dispinterface DPDMDocManagerEvents */
/* [helpstring][hidden][uuid] */ 


DEFINE_GUID(DIID_DPDMDocManagerEvents,0x5E6EC4A7,0x98E1,0x429b,0xA8,0x4A,0xEF,0xBD,0x62,0x44,0x77,0x40);

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("5E6EC4A7-98E1-429b-A84A-EFBD62447740")
    DPDMDocManagerEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct DPDMDocManagerEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            DPDMDocManagerEvents __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            DPDMDocManagerEvents __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            DPDMDocManagerEvents __RPC_FAR * This);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )( 
            DPDMDocManagerEvents __RPC_FAR * This,
            /* [out] */ UINT __RPC_FAR *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )( 
            DPDMDocManagerEvents __RPC_FAR * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )( 
            DPDMDocManagerEvents __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR __RPC_FAR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID __RPC_FAR *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )( 
            DPDMDocManagerEvents __RPC_FAR * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS __RPC_FAR *pDispParams,
            /* [out] */ VARIANT __RPC_FAR *pVarResult,
            /* [out] */ EXCEPINFO __RPC_FAR *pExcepInfo,
            /* [out] */ UINT __RPC_FAR *puArgErr);
        
        END_INTERFACE
    } DPDMDocManagerEventsVtbl;

    interface DPDMDocManagerEvents
    {
        CONST_VTBL struct DPDMDocManagerEventsVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define DPDMDocManagerEvents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define DPDMDocManagerEvents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define DPDMDocManagerEvents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define DPDMDocManagerEvents_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define DPDMDocManagerEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define DPDMDocManagerEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define DPDMDocManagerEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __DPDMDocManagerEvents_DISPINTERFACE_DEFINED__ */


DEFINE_GUID(CLSID_PDMDocManager,0x463BE734,0x9E5D,0x4d80,0xA9,0x20,0x1D,0x86,0x1D,0xC5,0x8D,0xF5);

#ifdef __cplusplus

class DECLSPEC_UUID("463BE734-9E5D-4d80-A920-1D861DC58DF5")
PDMDocManager;
#endif
#endif /* __ToolboxBrowser_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
