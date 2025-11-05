

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 22:14:07 2038
 */
/* Compiler settings for ..\swpublished.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0628 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */


#ifndef __swpublished_i_h__
#define __swpublished_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef DECLSPEC_XFGVIRT
#if defined(_CONTROL_FLOW_GUARD_XFG)
#define DECLSPEC_XFGVIRT(base, func) __declspec(xfg_virtual(base, func))
#else
#define DECLSPEC_XFGVIRT(base, func)
#endif
#endif

/* Forward Declarations */ 

#ifndef __IPropertyManagerPageHandler_FWD_DEFINED__
#define __IPropertyManagerPageHandler_FWD_DEFINED__
typedef interface IPropertyManagerPageHandler IPropertyManagerPageHandler;

#endif 	/* __IPropertyManagerPageHandler_FWD_DEFINED__ */


#ifndef __PropertyManagerPageHandler_FWD_DEFINED__
#define __PropertyManagerPageHandler_FWD_DEFINED__

#ifdef __cplusplus
typedef class PropertyManagerPageHandler PropertyManagerPageHandler;
#else
typedef struct PropertyManagerPageHandler PropertyManagerPageHandler;
#endif /* __cplusplus */

#endif 	/* __PropertyManagerPageHandler_FWD_DEFINED__ */


#ifndef __IPropertyManagerPageHandler2_FWD_DEFINED__
#define __IPropertyManagerPageHandler2_FWD_DEFINED__
typedef interface IPropertyManagerPageHandler2 IPropertyManagerPageHandler2;

#endif 	/* __IPropertyManagerPageHandler2_FWD_DEFINED__ */


#ifndef __PropertyManagerPageHandler2_FWD_DEFINED__
#define __PropertyManagerPageHandler2_FWD_DEFINED__

#ifdef __cplusplus
typedef class PropertyManagerPageHandler2 PropertyManagerPageHandler2;
#else
typedef struct PropertyManagerPageHandler2 PropertyManagerPageHandler2;
#endif /* __cplusplus */

#endif 	/* __PropertyManagerPageHandler2_FWD_DEFINED__ */


#ifndef __IPtnrPMPageHandler_FWD_DEFINED__
#define __IPtnrPMPageHandler_FWD_DEFINED__
typedef interface IPtnrPMPageHandler IPtnrPMPageHandler;

#endif 	/* __IPtnrPMPageHandler_FWD_DEFINED__ */


#ifndef __PtnrPMPageHandler_FWD_DEFINED__
#define __PtnrPMPageHandler_FWD_DEFINED__

#ifdef __cplusplus
typedef class PtnrPMPageHandler PtnrPMPageHandler;
#else
typedef struct PtnrPMPageHandler PtnrPMPageHandler;
#endif /* __cplusplus */

#endif 	/* __PtnrPMPageHandler_FWD_DEFINED__ */


#ifndef __IPtnrPMPageHandler2_FWD_DEFINED__
#define __IPtnrPMPageHandler2_FWD_DEFINED__
typedef interface IPtnrPMPageHandler2 IPtnrPMPageHandler2;

#endif 	/* __IPtnrPMPageHandler2_FWD_DEFINED__ */


#ifndef __PtnrPMPageHandler2_FWD_DEFINED__
#define __PtnrPMPageHandler2_FWD_DEFINED__

#ifdef __cplusplus
typedef class PtnrPMPageHandler2 PtnrPMPageHandler2;
#else
typedef struct PtnrPMPageHandler2 PtnrPMPageHandler2;
#endif /* __cplusplus */

#endif 	/* __PtnrPMPageHandler2_FWD_DEFINED__ */


#ifndef __IPtnrPMPageHandler3_FWD_DEFINED__
#define __IPtnrPMPageHandler3_FWD_DEFINED__
typedef interface IPtnrPMPageHandler3 IPtnrPMPageHandler3;

#endif 	/* __IPtnrPMPageHandler3_FWD_DEFINED__ */


#ifndef __PtnrPMPageHandler3_FWD_DEFINED__
#define __PtnrPMPageHandler3_FWD_DEFINED__

#ifdef __cplusplus
typedef class PtnrPMPageHandler3 PtnrPMPageHandler3;
#else
typedef struct PtnrPMPageHandler3 PtnrPMPageHandler3;
#endif /* __cplusplus */

#endif 	/* __PtnrPMPageHandler3_FWD_DEFINED__ */


#ifndef __ISwAddin_FWD_DEFINED__
#define __ISwAddin_FWD_DEFINED__
typedef interface ISwAddin ISwAddin;

#endif 	/* __ISwAddin_FWD_DEFINED__ */


#ifndef __SwAddin_FWD_DEFINED__
#define __SwAddin_FWD_DEFINED__

#ifdef __cplusplus
typedef class SwAddin SwAddin;
#else
typedef struct SwAddin SwAddin;
#endif /* __cplusplus */

#endif 	/* __SwAddin_FWD_DEFINED__ */


#ifndef __ISwAddinLicenseManager_FWD_DEFINED__
#define __ISwAddinLicenseManager_FWD_DEFINED__
typedef interface ISwAddinLicenseManager ISwAddinLicenseManager;

#endif 	/* __ISwAddinLicenseManager_FWD_DEFINED__ */


#ifndef __SwAddinLicenseManager_FWD_DEFINED__
#define __SwAddinLicenseManager_FWD_DEFINED__

#ifdef __cplusplus
typedef class SwAddinLicenseManager SwAddinLicenseManager;
#else
typedef struct SwAddinLicenseManager SwAddinLicenseManager;
#endif /* __cplusplus */

#endif 	/* __SwAddinLicenseManager_FWD_DEFINED__ */


#ifndef __IPropertyManagerPage2Handler_FWD_DEFINED__
#define __IPropertyManagerPage2Handler_FWD_DEFINED__
typedef interface IPropertyManagerPage2Handler IPropertyManagerPage2Handler;

#endif 	/* __IPropertyManagerPage2Handler_FWD_DEFINED__ */


#ifndef __PropertyManagerPage2Handler_FWD_DEFINED__
#define __PropertyManagerPage2Handler_FWD_DEFINED__

#ifdef __cplusplus
typedef class PropertyManagerPage2Handler PropertyManagerPage2Handler;
#else
typedef struct PropertyManagerPage2Handler PropertyManagerPage2Handler;
#endif /* __cplusplus */

#endif 	/* __PropertyManagerPage2Handler_FWD_DEFINED__ */


#ifndef __IPropertyManagerPage2Handler2_FWD_DEFINED__
#define __IPropertyManagerPage2Handler2_FWD_DEFINED__
typedef interface IPropertyManagerPage2Handler2 IPropertyManagerPage2Handler2;

#endif 	/* __IPropertyManagerPage2Handler2_FWD_DEFINED__ */


#ifndef __PropertyManagerPage2Handler2_FWD_DEFINED__
#define __PropertyManagerPage2Handler2_FWD_DEFINED__

#ifdef __cplusplus
typedef class PropertyManagerPage2Handler2 PropertyManagerPage2Handler2;
#else
typedef struct PropertyManagerPage2Handler2 PropertyManagerPage2Handler2;
#endif /* __cplusplus */

#endif 	/* __PropertyManagerPage2Handler2_FWD_DEFINED__ */


#ifndef __IPropertyManagerPage2Handler3_FWD_DEFINED__
#define __IPropertyManagerPage2Handler3_FWD_DEFINED__
typedef interface IPropertyManagerPage2Handler3 IPropertyManagerPage2Handler3;

#endif 	/* __IPropertyManagerPage2Handler3_FWD_DEFINED__ */


#ifndef __PropertyManagerPage2Handler3_FWD_DEFINED__
#define __PropertyManagerPage2Handler3_FWD_DEFINED__

#ifdef __cplusplus
typedef class PropertyManagerPage2Handler3 PropertyManagerPage2Handler3;
#else
typedef struct PropertyManagerPage2Handler3 PropertyManagerPage2Handler3;
#endif /* __cplusplus */

#endif 	/* __PropertyManagerPage2Handler3_FWD_DEFINED__ */


#ifndef __IPropertyManagerPage2Handler4_FWD_DEFINED__
#define __IPropertyManagerPage2Handler4_FWD_DEFINED__
typedef interface IPropertyManagerPage2Handler4 IPropertyManagerPage2Handler4;

#endif 	/* __IPropertyManagerPage2Handler4_FWD_DEFINED__ */


#ifndef __PropertyManagerPage2Handler4_FWD_DEFINED__
#define __PropertyManagerPage2Handler4_FWD_DEFINED__

#ifdef __cplusplus
typedef class PropertyManagerPage2Handler4 PropertyManagerPage2Handler4;
#else
typedef struct PropertyManagerPage2Handler4 PropertyManagerPage2Handler4;
#endif /* __cplusplus */

#endif 	/* __PropertyManagerPage2Handler4_FWD_DEFINED__ */


#ifndef __IPropertyManagerPage2Handler5_FWD_DEFINED__
#define __IPropertyManagerPage2Handler5_FWD_DEFINED__
typedef interface IPropertyManagerPage2Handler5 IPropertyManagerPage2Handler5;

#endif 	/* __IPropertyManagerPage2Handler5_FWD_DEFINED__ */


#ifndef __PropertyManagerPage2Handler5_FWD_DEFINED__
#define __PropertyManagerPage2Handler5_FWD_DEFINED__

#ifdef __cplusplus
typedef class PropertyManagerPage2Handler5 PropertyManagerPage2Handler5;
#else
typedef struct PropertyManagerPage2Handler5 PropertyManagerPage2Handler5;
#endif /* __cplusplus */

#endif 	/* __PropertyManagerPage2Handler5_FWD_DEFINED__ */


#ifndef __IPropertyManagerPage2Handler6_FWD_DEFINED__
#define __IPropertyManagerPage2Handler6_FWD_DEFINED__
typedef interface IPropertyManagerPage2Handler6 IPropertyManagerPage2Handler6;

#endif 	/* __IPropertyManagerPage2Handler6_FWD_DEFINED__ */


#ifndef __PropertyManagerPage2Handler6_FWD_DEFINED__
#define __PropertyManagerPage2Handler6_FWD_DEFINED__

#ifdef __cplusplus
typedef class PropertyManagerPage2Handler6 PropertyManagerPage2Handler6;
#else
typedef struct PropertyManagerPage2Handler6 PropertyManagerPage2Handler6;
#endif /* __cplusplus */

#endif 	/* __PropertyManagerPage2Handler6_FWD_DEFINED__ */


#ifndef __IPropertyManagerPage2Handler7_FWD_DEFINED__
#define __IPropertyManagerPage2Handler7_FWD_DEFINED__
typedef interface IPropertyManagerPage2Handler7 IPropertyManagerPage2Handler7;

#endif 	/* __IPropertyManagerPage2Handler7_FWD_DEFINED__ */


#ifndef __PropertyManagerPage2Handler7_FWD_DEFINED__
#define __PropertyManagerPage2Handler7_FWD_DEFINED__

#ifdef __cplusplus
typedef class PropertyManagerPage2Handler7 PropertyManagerPage2Handler7;
#else
typedef struct PropertyManagerPage2Handler7 PropertyManagerPage2Handler7;
#endif /* __cplusplus */

#endif 	/* __PropertyManagerPage2Handler7_FWD_DEFINED__ */


#ifndef __IPropertyManagerPage2Handler8_FWD_DEFINED__
#define __IPropertyManagerPage2Handler8_FWD_DEFINED__
typedef interface IPropertyManagerPage2Handler8 IPropertyManagerPage2Handler8;

#endif 	/* __IPropertyManagerPage2Handler8_FWD_DEFINED__ */


#ifndef __PropertyManagerPage2Handler8_FWD_DEFINED__
#define __PropertyManagerPage2Handler8_FWD_DEFINED__

#ifdef __cplusplus
typedef class PropertyManagerPage2Handler8 PropertyManagerPage2Handler8;
#else
typedef struct PropertyManagerPage2Handler8 PropertyManagerPage2Handler8;
#endif /* __cplusplus */

#endif 	/* __PropertyManagerPage2Handler8_FWD_DEFINED__ */


#ifndef __IPropertyManagerPage2Handler9_FWD_DEFINED__
#define __IPropertyManagerPage2Handler9_FWD_DEFINED__
typedef interface IPropertyManagerPage2Handler9 IPropertyManagerPage2Handler9;

#endif 	/* __IPropertyManagerPage2Handler9_FWD_DEFINED__ */


#ifndef __PropertyManagerPage2Handler9_FWD_DEFINED__
#define __PropertyManagerPage2Handler9_FWD_DEFINED__

#ifdef __cplusplus
typedef class PropertyManagerPage2Handler9 PropertyManagerPage2Handler9;
#else
typedef struct PropertyManagerPage2Handler9 PropertyManagerPage2Handler9;
#endif /* __cplusplus */

#endif 	/* __PropertyManagerPage2Handler9_FWD_DEFINED__ */


#ifndef __ISwComFeature_FWD_DEFINED__
#define __ISwComFeature_FWD_DEFINED__
typedef interface ISwComFeature ISwComFeature;

#endif 	/* __ISwComFeature_FWD_DEFINED__ */


#ifndef __SwComFeature_FWD_DEFINED__
#define __SwComFeature_FWD_DEFINED__

#ifdef __cplusplus
typedef class SwComFeature SwComFeature;
#else
typedef struct SwComFeature SwComFeature;
#endif /* __cplusplus */

#endif 	/* __SwComFeature_FWD_DEFINED__ */


#ifndef __ISwColorContour_FWD_DEFINED__
#define __ISwColorContour_FWD_DEFINED__
typedef interface ISwColorContour ISwColorContour;

#endif 	/* __ISwColorContour_FWD_DEFINED__ */


#ifndef __SwColorContour_FWD_DEFINED__
#define __SwColorContour_FWD_DEFINED__

#ifdef __cplusplus
typedef class SwColorContour SwColorContour;
#else
typedef struct SwColorContour SwColorContour;
#endif /* __cplusplus */

#endif 	/* __SwColorContour_FWD_DEFINED__ */


#ifndef __ISwColorContour1_FWD_DEFINED__
#define __ISwColorContour1_FWD_DEFINED__
typedef interface ISwColorContour1 ISwColorContour1;

#endif 	/* __ISwColorContour1_FWD_DEFINED__ */


#ifndef __SwColorContour1_FWD_DEFINED__
#define __SwColorContour1_FWD_DEFINED__

#ifdef __cplusplus
typedef class SwColorContour1 SwColorContour1;
#else
typedef struct SwColorContour1 SwColorContour1;
#endif /* __cplusplus */

#endif 	/* __SwColorContour1_FWD_DEFINED__ */


#ifndef __ITaskpaneViewHandler_FWD_DEFINED__
#define __ITaskpaneViewHandler_FWD_DEFINED__
typedef interface ITaskpaneViewHandler ITaskpaneViewHandler;

#endif 	/* __ITaskpaneViewHandler_FWD_DEFINED__ */


#ifndef __TaskpaneViewHandler_FWD_DEFINED__
#define __TaskpaneViewHandler_FWD_DEFINED__

#ifdef __cplusplus
typedef class TaskpaneViewHandler TaskpaneViewHandler;
#else
typedef struct TaskpaneViewHandler TaskpaneViewHandler;
#endif /* __cplusplus */

#endif 	/* __TaskpaneViewHandler_FWD_DEFINED__ */


#ifndef __ISwQuickTip_FWD_DEFINED__
#define __ISwQuickTip_FWD_DEFINED__
typedef interface ISwQuickTip ISwQuickTip;

#endif 	/* __ISwQuickTip_FWD_DEFINED__ */


#ifndef __SwQuickTip_FWD_DEFINED__
#define __SwQuickTip_FWD_DEFINED__

#ifdef __cplusplus
typedef class SwQuickTip SwQuickTip;
#else
typedef struct SwQuickTip SwQuickTip;
#endif /* __cplusplus */

#endif 	/* __SwQuickTip_FWD_DEFINED__ */


#ifndef __ISwManipulatorHandler_FWD_DEFINED__
#define __ISwManipulatorHandler_FWD_DEFINED__
typedef interface ISwManipulatorHandler ISwManipulatorHandler;

#endif 	/* __ISwManipulatorHandler_FWD_DEFINED__ */


#ifndef __SwManipulatorHandler_FWD_DEFINED__
#define __SwManipulatorHandler_FWD_DEFINED__

#ifdef __cplusplus
typedef class SwManipulatorHandler SwManipulatorHandler;
#else
typedef struct SwManipulatorHandler SwManipulatorHandler;
#endif /* __cplusplus */

#endif 	/* __SwManipulatorHandler_FWD_DEFINED__ */


#ifndef __ISwManipulatorHandler2_FWD_DEFINED__
#define __ISwManipulatorHandler2_FWD_DEFINED__
typedef interface ISwManipulatorHandler2 ISwManipulatorHandler2;

#endif 	/* __ISwManipulatorHandler2_FWD_DEFINED__ */


#ifndef __SwManipulatorHandler2_FWD_DEFINED__
#define __SwManipulatorHandler2_FWD_DEFINED__

#ifdef __cplusplus
typedef class SwManipulatorHandler2 SwManipulatorHandler2;
#else
typedef struct SwManipulatorHandler2 SwManipulatorHandler2;
#endif /* __cplusplus */

#endif 	/* __SwManipulatorHandler2_FWD_DEFINED__ */


#ifndef __ISwCalloutHandler_FWD_DEFINED__
#define __ISwCalloutHandler_FWD_DEFINED__
typedef interface ISwCalloutHandler ISwCalloutHandler;

#endif 	/* __ISwCalloutHandler_FWD_DEFINED__ */


#ifndef __SwCalloutHandler_FWD_DEFINED__
#define __SwCalloutHandler_FWD_DEFINED__

#ifdef __cplusplus
typedef class SwCalloutHandler SwCalloutHandler;
#else
typedef struct SwCalloutHandler SwCalloutHandler;
#endif /* __cplusplus */

#endif 	/* __SwCalloutHandler_FWD_DEFINED__ */


#ifndef __ISwPointInferenceBroker_FWD_DEFINED__
#define __ISwPointInferenceBroker_FWD_DEFINED__
typedef interface ISwPointInferenceBroker ISwPointInferenceBroker;

#endif 	/* __ISwPointInferenceBroker_FWD_DEFINED__ */


#ifndef __SwPointInferenceBroker_FWD_DEFINED__
#define __SwPointInferenceBroker_FWD_DEFINED__

#ifdef __cplusplus
typedef class SwPointInferenceBroker SwPointInferenceBroker;
#else
typedef struct SwPointInferenceBroker SwPointInferenceBroker;
#endif /* __cplusplus */

#endif 	/* __SwPointInferenceBroker_FWD_DEFINED__ */


#ifndef __ISwAddinBroker_FWD_DEFINED__
#define __ISwAddinBroker_FWD_DEFINED__
typedef interface ISwAddinBroker ISwAddinBroker;

#endif 	/* __ISwAddinBroker_FWD_DEFINED__ */


#ifndef __SwAddinBroker_FWD_DEFINED__
#define __SwAddinBroker_FWD_DEFINED__

#ifdef __cplusplus
typedef class SwAddinBroker SwAddinBroker;
#else
typedef struct SwAddinBroker SwAddinBroker;
#endif /* __cplusplus */

#endif 	/* __SwAddinBroker_FWD_DEFINED__ */


#ifndef __ISwAddinAdvancedOptionBroker_FWD_DEFINED__
#define __ISwAddinAdvancedOptionBroker_FWD_DEFINED__
typedef interface ISwAddinAdvancedOptionBroker ISwAddinAdvancedOptionBroker;

#endif 	/* __ISwAddinAdvancedOptionBroker_FWD_DEFINED__ */


#ifndef __SwAddinAdvancedOptionBroker_FWD_DEFINED__
#define __SwAddinAdvancedOptionBroker_FWD_DEFINED__

#ifdef __cplusplus
typedef class SwAddinAdvancedOptionBroker SwAddinAdvancedOptionBroker;
#else
typedef struct SwAddinAdvancedOptionBroker SwAddinAdvancedOptionBroker;
#endif /* __cplusplus */

#endif 	/* __SwAddinAdvancedOptionBroker_FWD_DEFINED__ */


#ifndef __ISwUndoAPIHandler_FWD_DEFINED__
#define __ISwUndoAPIHandler_FWD_DEFINED__
typedef interface ISwUndoAPIHandler ISwUndoAPIHandler;

#endif 	/* __ISwUndoAPIHandler_FWD_DEFINED__ */


#ifndef __SwUndoAPIHandler_FWD_DEFINED__
#define __SwUndoAPIHandler_FWD_DEFINED__

#ifdef __cplusplus
typedef class SwUndoAPIHandler SwUndoAPIHandler;
#else
typedef struct SwUndoAPIHandler SwUndoAPIHandler;
#endif /* __cplusplus */

#endif 	/* __SwUndoAPIHandler_FWD_DEFINED__ */


#ifndef __ISwPEManager_FWD_DEFINED__
#define __ISwPEManager_FWD_DEFINED__
typedef interface ISwPEManager ISwPEManager;

#endif 	/* __ISwPEManager_FWD_DEFINED__ */


#ifndef __SwPEManager_FWD_DEFINED__
#define __SwPEManager_FWD_DEFINED__

#ifdef __cplusplus
typedef class SwPEManager SwPEManager;
#else
typedef struct SwPEManager SwPEManager;
#endif /* __cplusplus */

#endif 	/* __SwPEManager_FWD_DEFINED__ */


#ifndef __IMessageBarHandler_FWD_DEFINED__
#define __IMessageBarHandler_FWD_DEFINED__
typedef interface IMessageBarHandler IMessageBarHandler;

#endif 	/* __IMessageBarHandler_FWD_DEFINED__ */


#ifndef __MessageBarHandler_FWD_DEFINED__
#define __MessageBarHandler_FWD_DEFINED__

#ifdef __cplusplus
typedef class MessageBarHandler MessageBarHandler;
#else
typedef struct MessageBarHandler MessageBarHandler;
#endif /* __cplusplus */

#endif 	/* __MessageBarHandler_FWD_DEFINED__ */


#ifndef __IUserNotificationHandler_FWD_DEFINED__
#define __IUserNotificationHandler_FWD_DEFINED__
typedef interface IUserNotificationHandler IUserNotificationHandler;

#endif 	/* __IUserNotificationHandler_FWD_DEFINED__ */


#ifndef __UserNotificationHandler_FWD_DEFINED__
#define __UserNotificationHandler_FWD_DEFINED__

#ifdef __cplusplus
typedef class UserNotificationHandler UserNotificationHandler;
#else
typedef struct UserNotificationHandler UserNotificationHandler;
#endif /* __cplusplus */

#endif 	/* __UserNotificationHandler_FWD_DEFINED__ */


/* header files for imported files */
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_swpublished_0000_0000 */
/* [local] */ 

#pragma once


extern RPC_IF_HANDLE __MIDL_itf_swpublished_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_swpublished_0000_0000_v0_0_s_ifspec;


#ifndef __SWPublished_LIBRARY_DEFINED__
#define __SWPublished_LIBRARY_DEFINED__

/* library SWPublished */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_SWPublished;

#ifndef __IPropertyManagerPageHandler_INTERFACE_DEFINED__
#define __IPropertyManagerPageHandler_INTERFACE_DEFINED__

/* interface IPropertyManagerPageHandler */
/* [object][helpstring][unique][hidden][oleautomation][uuid] */ 


EXTERN_C const IID IID_IPropertyManagerPageHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C71C31CE-898C-11d4-AEF6-00C04F603FAF")
    IPropertyManagerPageHandler : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DoDataExchange( 
            /* [in] */ long DDXptr) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnOK( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnCancel( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPropertyManagerPageHandlerVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPropertyManagerPageHandler * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPropertyManagerPageHandler * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPropertyManagerPageHandler * This);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPageHandler, DoDataExchange)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DoDataExchange )( 
            IPropertyManagerPageHandler * This,
            /* [in] */ long DDXptr);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPageHandler, OnOK)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnOK )( 
            IPropertyManagerPageHandler * This);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPageHandler, OnCancel)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnCancel )( 
            IPropertyManagerPageHandler * This);
        
        END_INTERFACE
    } IPropertyManagerPageHandlerVtbl;

    interface IPropertyManagerPageHandler
    {
        CONST_VTBL struct IPropertyManagerPageHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPropertyManagerPageHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPropertyManagerPageHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPropertyManagerPageHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPropertyManagerPageHandler_DoDataExchange(This,DDXptr)	\
    ( (This)->lpVtbl -> DoDataExchange(This,DDXptr) ) 

#define IPropertyManagerPageHandler_OnOK(This)	\
    ( (This)->lpVtbl -> OnOK(This) ) 

#define IPropertyManagerPageHandler_OnCancel(This)	\
    ( (This)->lpVtbl -> OnCancel(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPropertyManagerPageHandler_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_PropertyManagerPageHandler;

#ifdef __cplusplus

class DECLSPEC_UUID("C71C31CF-898C-11d4-AEF6-00C04F603FAF")
PropertyManagerPageHandler;
#endif

#ifndef __IPropertyManagerPageHandler2_INTERFACE_DEFINED__
#define __IPropertyManagerPageHandler2_INTERFACE_DEFINED__

/* interface IPropertyManagerPageHandler2 */
/* [object][helpstring][unique][hidden][oleautomation][uuid] */ 


EXTERN_C const IID IID_IPropertyManagerPageHandler2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6D236210-2459-4436-B422-8134F1F4AD63")
    IPropertyManagerPageHandler2 : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DoDataExchange( 
            /* [in] */ long DDXptr) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnOK( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnCancel( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnHelp( 
            /* [retval][out] */ VARIANT_BOOL *retval) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPropertyManagerPageHandler2Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPropertyManagerPageHandler2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPropertyManagerPageHandler2 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPropertyManagerPageHandler2 * This);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPageHandler2, DoDataExchange)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DoDataExchange )( 
            IPropertyManagerPageHandler2 * This,
            /* [in] */ long DDXptr);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPageHandler2, OnOK)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnOK )( 
            IPropertyManagerPageHandler2 * This);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPageHandler2, OnCancel)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnCancel )( 
            IPropertyManagerPageHandler2 * This);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPageHandler2, OnHelp)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnHelp )( 
            IPropertyManagerPageHandler2 * This,
            /* [retval][out] */ VARIANT_BOOL *retval);
        
        END_INTERFACE
    } IPropertyManagerPageHandler2Vtbl;

    interface IPropertyManagerPageHandler2
    {
        CONST_VTBL struct IPropertyManagerPageHandler2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPropertyManagerPageHandler2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPropertyManagerPageHandler2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPropertyManagerPageHandler2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPropertyManagerPageHandler2_DoDataExchange(This,DDXptr)	\
    ( (This)->lpVtbl -> DoDataExchange(This,DDXptr) ) 

#define IPropertyManagerPageHandler2_OnOK(This)	\
    ( (This)->lpVtbl -> OnOK(This) ) 

#define IPropertyManagerPageHandler2_OnCancel(This)	\
    ( (This)->lpVtbl -> OnCancel(This) ) 

#define IPropertyManagerPageHandler2_OnHelp(This,retval)	\
    ( (This)->lpVtbl -> OnHelp(This,retval) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPropertyManagerPageHandler2_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_PropertyManagerPageHandler2;

#ifdef __cplusplus

class DECLSPEC_UUID("F995DCF4-6EE5-4103-97FF-C02DCC53EAB2")
PropertyManagerPageHandler2;
#endif

#ifndef __IPtnrPMPageHandler_INTERFACE_DEFINED__
#define __IPtnrPMPageHandler_INTERFACE_DEFINED__

/* interface IPtnrPMPageHandler */
/* [object][helpstring][unique][hidden][oleautomation][uuid] */ 


EXTERN_C const IID IID_IPtnrPMPageHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4F517FA1-0DB1-455f-9DBD-BB2D185DF1FD")
    IPtnrPMPageHandler : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DoDataExchange( 
            /* [in] */ long DDXptr) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnOK( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnCancel( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnHelp( 
            /* [retval][out] */ VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnInitDialog( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE getBackPageIndex( 
            /* [out] */ short *previousPageId,
            /* [retval][out] */ VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE getNextPageIndex( 
            /* [out] */ short *nextPageId,
            /* [retval][out] */ VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnUndo( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE PreDestroyNotify( 
            /* [in] */ long pageNumber,
            /* [retval][out] */ VARIANT_BOOL *retval) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPtnrPMPageHandlerVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPtnrPMPageHandler * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPtnrPMPageHandler * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPtnrPMPageHandler * This);
        
        DECLSPEC_XFGVIRT(IPtnrPMPageHandler, DoDataExchange)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DoDataExchange )( 
            IPtnrPMPageHandler * This,
            /* [in] */ long DDXptr);
        
        DECLSPEC_XFGVIRT(IPtnrPMPageHandler, OnOK)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnOK )( 
            IPtnrPMPageHandler * This);
        
        DECLSPEC_XFGVIRT(IPtnrPMPageHandler, OnCancel)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnCancel )( 
            IPtnrPMPageHandler * This);
        
        DECLSPEC_XFGVIRT(IPtnrPMPageHandler, OnHelp)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnHelp )( 
            IPtnrPMPageHandler * This,
            /* [retval][out] */ VARIANT_BOOL *retval);
        
        DECLSPEC_XFGVIRT(IPtnrPMPageHandler, OnInitDialog)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnInitDialog )( 
            IPtnrPMPageHandler * This);
        
        DECLSPEC_XFGVIRT(IPtnrPMPageHandler, getBackPageIndex)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *getBackPageIndex )( 
            IPtnrPMPageHandler * This,
            /* [out] */ short *previousPageId,
            /* [retval][out] */ VARIANT_BOOL *retval);
        
        DECLSPEC_XFGVIRT(IPtnrPMPageHandler, getNextPageIndex)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *getNextPageIndex )( 
            IPtnrPMPageHandler * This,
            /* [out] */ short *nextPageId,
            /* [retval][out] */ VARIANT_BOOL *retval);
        
        DECLSPEC_XFGVIRT(IPtnrPMPageHandler, OnUndo)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnUndo )( 
            IPtnrPMPageHandler * This);
        
        DECLSPEC_XFGVIRT(IPtnrPMPageHandler, PreDestroyNotify)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *PreDestroyNotify )( 
            IPtnrPMPageHandler * This,
            /* [in] */ long pageNumber,
            /* [retval][out] */ VARIANT_BOOL *retval);
        
        END_INTERFACE
    } IPtnrPMPageHandlerVtbl;

    interface IPtnrPMPageHandler
    {
        CONST_VTBL struct IPtnrPMPageHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPtnrPMPageHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPtnrPMPageHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPtnrPMPageHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPtnrPMPageHandler_DoDataExchange(This,DDXptr)	\
    ( (This)->lpVtbl -> DoDataExchange(This,DDXptr) ) 

#define IPtnrPMPageHandler_OnOK(This)	\
    ( (This)->lpVtbl -> OnOK(This) ) 

#define IPtnrPMPageHandler_OnCancel(This)	\
    ( (This)->lpVtbl -> OnCancel(This) ) 

#define IPtnrPMPageHandler_OnHelp(This,retval)	\
    ( (This)->lpVtbl -> OnHelp(This,retval) ) 

#define IPtnrPMPageHandler_OnInitDialog(This)	\
    ( (This)->lpVtbl -> OnInitDialog(This) ) 

#define IPtnrPMPageHandler_getBackPageIndex(This,previousPageId,retval)	\
    ( (This)->lpVtbl -> getBackPageIndex(This,previousPageId,retval) ) 

#define IPtnrPMPageHandler_getNextPageIndex(This,nextPageId,retval)	\
    ( (This)->lpVtbl -> getNextPageIndex(This,nextPageId,retval) ) 

#define IPtnrPMPageHandler_OnUndo(This)	\
    ( (This)->lpVtbl -> OnUndo(This) ) 

#define IPtnrPMPageHandler_PreDestroyNotify(This,pageNumber,retval)	\
    ( (This)->lpVtbl -> PreDestroyNotify(This,pageNumber,retval) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPtnrPMPageHandler_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_PtnrPMPageHandler;

#ifdef __cplusplus

class DECLSPEC_UUID("39FEC2D0-3259-4841-9BC6-B2579233F5E5")
PtnrPMPageHandler;
#endif

#ifndef __IPtnrPMPageHandler2_INTERFACE_DEFINED__
#define __IPtnrPMPageHandler2_INTERFACE_DEFINED__

/* interface IPtnrPMPageHandler2 */
/* [object][helpstring][unique][hidden][oleautomation][uuid] */ 


EXTERN_C const IID IID_IPtnrPMPageHandler2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("241838CC-B5A6-4b41-B70A-8F34CE844C88")
    IPtnrPMPageHandler2 : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DoDataExchange( 
            /* [in] */ long DDXptr) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnOK( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnCancel( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnHelp( 
            /* [retval][out] */ VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnInitDialog( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE getBackPageIndex( 
            /* [out] */ short *previousPageId,
            /* [retval][out] */ VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE getNextPageIndex( 
            /* [out] */ short *nextPageId,
            /* [retval][out] */ VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnUndo( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE PreDestroyNotify( 
            /* [in] */ long pageNumber,
            /* [retval][out] */ VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnPreview( 
            /* [retval][out] */ VARIANT_BOOL *retval) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPtnrPMPageHandler2Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPtnrPMPageHandler2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPtnrPMPageHandler2 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPtnrPMPageHandler2 * This);
        
        DECLSPEC_XFGVIRT(IPtnrPMPageHandler2, DoDataExchange)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DoDataExchange )( 
            IPtnrPMPageHandler2 * This,
            /* [in] */ long DDXptr);
        
        DECLSPEC_XFGVIRT(IPtnrPMPageHandler2, OnOK)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnOK )( 
            IPtnrPMPageHandler2 * This);
        
        DECLSPEC_XFGVIRT(IPtnrPMPageHandler2, OnCancel)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnCancel )( 
            IPtnrPMPageHandler2 * This);
        
        DECLSPEC_XFGVIRT(IPtnrPMPageHandler2, OnHelp)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnHelp )( 
            IPtnrPMPageHandler2 * This,
            /* [retval][out] */ VARIANT_BOOL *retval);
        
        DECLSPEC_XFGVIRT(IPtnrPMPageHandler2, OnInitDialog)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnInitDialog )( 
            IPtnrPMPageHandler2 * This);
        
        DECLSPEC_XFGVIRT(IPtnrPMPageHandler2, getBackPageIndex)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *getBackPageIndex )( 
            IPtnrPMPageHandler2 * This,
            /* [out] */ short *previousPageId,
            /* [retval][out] */ VARIANT_BOOL *retval);
        
        DECLSPEC_XFGVIRT(IPtnrPMPageHandler2, getNextPageIndex)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *getNextPageIndex )( 
            IPtnrPMPageHandler2 * This,
            /* [out] */ short *nextPageId,
            /* [retval][out] */ VARIANT_BOOL *retval);
        
        DECLSPEC_XFGVIRT(IPtnrPMPageHandler2, OnUndo)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnUndo )( 
            IPtnrPMPageHandler2 * This);
        
        DECLSPEC_XFGVIRT(IPtnrPMPageHandler2, PreDestroyNotify)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *PreDestroyNotify )( 
            IPtnrPMPageHandler2 * This,
            /* [in] */ long pageNumber,
            /* [retval][out] */ VARIANT_BOOL *retval);
        
        DECLSPEC_XFGVIRT(IPtnrPMPageHandler2, OnPreview)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnPreview )( 
            IPtnrPMPageHandler2 * This,
            /* [retval][out] */ VARIANT_BOOL *retval);
        
        END_INTERFACE
    } IPtnrPMPageHandler2Vtbl;

    interface IPtnrPMPageHandler2
    {
        CONST_VTBL struct IPtnrPMPageHandler2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPtnrPMPageHandler2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPtnrPMPageHandler2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPtnrPMPageHandler2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPtnrPMPageHandler2_DoDataExchange(This,DDXptr)	\
    ( (This)->lpVtbl -> DoDataExchange(This,DDXptr) ) 

#define IPtnrPMPageHandler2_OnOK(This)	\
    ( (This)->lpVtbl -> OnOK(This) ) 

#define IPtnrPMPageHandler2_OnCancel(This)	\
    ( (This)->lpVtbl -> OnCancel(This) ) 

#define IPtnrPMPageHandler2_OnHelp(This,retval)	\
    ( (This)->lpVtbl -> OnHelp(This,retval) ) 

#define IPtnrPMPageHandler2_OnInitDialog(This)	\
    ( (This)->lpVtbl -> OnInitDialog(This) ) 

#define IPtnrPMPageHandler2_getBackPageIndex(This,previousPageId,retval)	\
    ( (This)->lpVtbl -> getBackPageIndex(This,previousPageId,retval) ) 

#define IPtnrPMPageHandler2_getNextPageIndex(This,nextPageId,retval)	\
    ( (This)->lpVtbl -> getNextPageIndex(This,nextPageId,retval) ) 

#define IPtnrPMPageHandler2_OnUndo(This)	\
    ( (This)->lpVtbl -> OnUndo(This) ) 

#define IPtnrPMPageHandler2_PreDestroyNotify(This,pageNumber,retval)	\
    ( (This)->lpVtbl -> PreDestroyNotify(This,pageNumber,retval) ) 

#define IPtnrPMPageHandler2_OnPreview(This,retval)	\
    ( (This)->lpVtbl -> OnPreview(This,retval) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPtnrPMPageHandler2_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_PtnrPMPageHandler2;

#ifdef __cplusplus

class DECLSPEC_UUID("44664467-9283-48f8-8112-50709FE11D67")
PtnrPMPageHandler2;
#endif

#ifndef __IPtnrPMPageHandler3_INTERFACE_DEFINED__
#define __IPtnrPMPageHandler3_INTERFACE_DEFINED__

/* interface IPtnrPMPageHandler3 */
/* [object][helpstring][unique][hidden][oleautomation][uuid] */ 


EXTERN_C const IID IID_IPtnrPMPageHandler3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8F88CE97-2C4F-4dc7-8A6C-624CBD33F380")
    IPtnrPMPageHandler3 : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DoDataExchangex64( 
            /* [in] */ LONGLONG DDXptr) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnOK( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnCancel( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnHelp( 
            /* [retval][out] */ VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnInitDialog( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE getBackPageIndex( 
            /* [out] */ short *previousPageId,
            /* [retval][out] */ VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE getNextPageIndex( 
            /* [out] */ short *nextPageId,
            /* [retval][out] */ VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnUndo( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE PreDestroyNotify( 
            /* [in] */ long pageNumber,
            /* [retval][out] */ VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnPreview( 
            /* [retval][out] */ VARIANT_BOOL *retval) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPtnrPMPageHandler3Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPtnrPMPageHandler3 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPtnrPMPageHandler3 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPtnrPMPageHandler3 * This);
        
        DECLSPEC_XFGVIRT(IPtnrPMPageHandler3, DoDataExchangex64)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DoDataExchangex64 )( 
            IPtnrPMPageHandler3 * This,
            /* [in] */ LONGLONG DDXptr);
        
        DECLSPEC_XFGVIRT(IPtnrPMPageHandler3, OnOK)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnOK )( 
            IPtnrPMPageHandler3 * This);
        
        DECLSPEC_XFGVIRT(IPtnrPMPageHandler3, OnCancel)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnCancel )( 
            IPtnrPMPageHandler3 * This);
        
        DECLSPEC_XFGVIRT(IPtnrPMPageHandler3, OnHelp)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnHelp )( 
            IPtnrPMPageHandler3 * This,
            /* [retval][out] */ VARIANT_BOOL *retval);
        
        DECLSPEC_XFGVIRT(IPtnrPMPageHandler3, OnInitDialog)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnInitDialog )( 
            IPtnrPMPageHandler3 * This);
        
        DECLSPEC_XFGVIRT(IPtnrPMPageHandler3, getBackPageIndex)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *getBackPageIndex )( 
            IPtnrPMPageHandler3 * This,
            /* [out] */ short *previousPageId,
            /* [retval][out] */ VARIANT_BOOL *retval);
        
        DECLSPEC_XFGVIRT(IPtnrPMPageHandler3, getNextPageIndex)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *getNextPageIndex )( 
            IPtnrPMPageHandler3 * This,
            /* [out] */ short *nextPageId,
            /* [retval][out] */ VARIANT_BOOL *retval);
        
        DECLSPEC_XFGVIRT(IPtnrPMPageHandler3, OnUndo)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnUndo )( 
            IPtnrPMPageHandler3 * This);
        
        DECLSPEC_XFGVIRT(IPtnrPMPageHandler3, PreDestroyNotify)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *PreDestroyNotify )( 
            IPtnrPMPageHandler3 * This,
            /* [in] */ long pageNumber,
            /* [retval][out] */ VARIANT_BOOL *retval);
        
        DECLSPEC_XFGVIRT(IPtnrPMPageHandler3, OnPreview)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnPreview )( 
            IPtnrPMPageHandler3 * This,
            /* [retval][out] */ VARIANT_BOOL *retval);
        
        END_INTERFACE
    } IPtnrPMPageHandler3Vtbl;

    interface IPtnrPMPageHandler3
    {
        CONST_VTBL struct IPtnrPMPageHandler3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPtnrPMPageHandler3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPtnrPMPageHandler3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPtnrPMPageHandler3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPtnrPMPageHandler3_DoDataExchangex64(This,DDXptr)	\
    ( (This)->lpVtbl -> DoDataExchangex64(This,DDXptr) ) 

#define IPtnrPMPageHandler3_OnOK(This)	\
    ( (This)->lpVtbl -> OnOK(This) ) 

#define IPtnrPMPageHandler3_OnCancel(This)	\
    ( (This)->lpVtbl -> OnCancel(This) ) 

#define IPtnrPMPageHandler3_OnHelp(This,retval)	\
    ( (This)->lpVtbl -> OnHelp(This,retval) ) 

#define IPtnrPMPageHandler3_OnInitDialog(This)	\
    ( (This)->lpVtbl -> OnInitDialog(This) ) 

#define IPtnrPMPageHandler3_getBackPageIndex(This,previousPageId,retval)	\
    ( (This)->lpVtbl -> getBackPageIndex(This,previousPageId,retval) ) 

#define IPtnrPMPageHandler3_getNextPageIndex(This,nextPageId,retval)	\
    ( (This)->lpVtbl -> getNextPageIndex(This,nextPageId,retval) ) 

#define IPtnrPMPageHandler3_OnUndo(This)	\
    ( (This)->lpVtbl -> OnUndo(This) ) 

#define IPtnrPMPageHandler3_PreDestroyNotify(This,pageNumber,retval)	\
    ( (This)->lpVtbl -> PreDestroyNotify(This,pageNumber,retval) ) 

#define IPtnrPMPageHandler3_OnPreview(This,retval)	\
    ( (This)->lpVtbl -> OnPreview(This,retval) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPtnrPMPageHandler3_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_PtnrPMPageHandler3;

#ifdef __cplusplus

class DECLSPEC_UUID("A6FD25BB-1CE8-4032-B48A-6CA01EFA5306")
PtnrPMPageHandler3;
#endif

#ifndef __ISwAddin_INTERFACE_DEFINED__
#define __ISwAddin_INTERFACE_DEFINED__

/* interface ISwAddin */
/* [object][helpstring][unique][hidden][oleautomation][uuid] */ 


EXTERN_C const IID IID_ISwAddin;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DA306A0D-EAC5-4406-8610-B1DA805D9270")
    ISwAddin : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ConnectToSW( 
            /* [in] */ LPDISPATCH ThisSW,
            /* [in] */ long Cookie,
            /* [retval][out] */ VARIANT_BOOL *IsConnected) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DisconnectFromSW( 
            /* [retval][out] */ VARIANT_BOOL *IsDisconnected) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISwAddinVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISwAddin * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISwAddin * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISwAddin * This);
        
        DECLSPEC_XFGVIRT(ISwAddin, ConnectToSW)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ConnectToSW )( 
            ISwAddin * This,
            /* [in] */ LPDISPATCH ThisSW,
            /* [in] */ long Cookie,
            /* [retval][out] */ VARIANT_BOOL *IsConnected);
        
        DECLSPEC_XFGVIRT(ISwAddin, DisconnectFromSW)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DisconnectFromSW )( 
            ISwAddin * This,
            /* [retval][out] */ VARIANT_BOOL *IsDisconnected);
        
        END_INTERFACE
    } ISwAddinVtbl;

    interface ISwAddin
    {
        CONST_VTBL struct ISwAddinVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISwAddin_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISwAddin_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISwAddin_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISwAddin_ConnectToSW(This,ThisSW,Cookie,IsConnected)	\
    ( (This)->lpVtbl -> ConnectToSW(This,ThisSW,Cookie,IsConnected) ) 

#define ISwAddin_DisconnectFromSW(This,IsDisconnected)	\
    ( (This)->lpVtbl -> DisconnectFromSW(This,IsDisconnected) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISwAddin_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_SwAddin;

#ifdef __cplusplus

class DECLSPEC_UUID("660E0090-1432-4a71-A90C-4359273381B1")
SwAddin;
#endif

#ifndef __ISwAddinLicenseManager_INTERFACE_DEFINED__
#define __ISwAddinLicenseManager_INTERFACE_DEFINED__

/* interface ISwAddinLicenseManager */
/* [object][helpstring][unique][hidden][oleautomation][uuid] */ 


EXTERN_C const IID IID_ISwAddinLicenseManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1C0CCD98-368B-4cd3-B168-901395224693")
    ISwAddinLicenseManager : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AcquireLicense( 
            /* [retval][out] */ VARIANT_BOOL *IsAcquired) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ReleaseLicense( 
            /* [retval][out] */ VARIANT_BOOL *IsReleased) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsHoldingLicense( 
            /* [retval][out] */ VARIANT_BOOL *LicenseStatus) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISwAddinLicenseManagerVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISwAddinLicenseManager * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISwAddinLicenseManager * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISwAddinLicenseManager * This);
        
        DECLSPEC_XFGVIRT(ISwAddinLicenseManager, AcquireLicense)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AcquireLicense )( 
            ISwAddinLicenseManager * This,
            /* [retval][out] */ VARIANT_BOOL *IsAcquired);
        
        DECLSPEC_XFGVIRT(ISwAddinLicenseManager, ReleaseLicense)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ReleaseLicense )( 
            ISwAddinLicenseManager * This,
            /* [retval][out] */ VARIANT_BOOL *IsReleased);
        
        DECLSPEC_XFGVIRT(ISwAddinLicenseManager, IsHoldingLicense)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsHoldingLicense )( 
            ISwAddinLicenseManager * This,
            /* [retval][out] */ VARIANT_BOOL *LicenseStatus);
        
        END_INTERFACE
    } ISwAddinLicenseManagerVtbl;

    interface ISwAddinLicenseManager
    {
        CONST_VTBL struct ISwAddinLicenseManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISwAddinLicenseManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISwAddinLicenseManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISwAddinLicenseManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISwAddinLicenseManager_AcquireLicense(This,IsAcquired)	\
    ( (This)->lpVtbl -> AcquireLicense(This,IsAcquired) ) 

#define ISwAddinLicenseManager_ReleaseLicense(This,IsReleased)	\
    ( (This)->lpVtbl -> ReleaseLicense(This,IsReleased) ) 

#define ISwAddinLicenseManager_IsHoldingLicense(This,LicenseStatus)	\
    ( (This)->lpVtbl -> IsHoldingLicense(This,LicenseStatus) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISwAddinLicenseManager_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_SwAddinLicenseManager;

#ifdef __cplusplus

class DECLSPEC_UUID("81F42CF6-FA31-474e-9498-745142F7205B")
SwAddinLicenseManager;
#endif

#ifndef __IPropertyManagerPage2Handler_INTERFACE_DEFINED__
#define __IPropertyManagerPage2Handler_INTERFACE_DEFINED__

/* interface IPropertyManagerPage2Handler */
/* [object][helpstring][unique][hidden][oleautomation][uuid] */ 


EXTERN_C const IID IID_IPropertyManagerPage2Handler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("229FF820-0DD2-11d5-AF1E-00C04F603FAF")
    IPropertyManagerPage2Handler : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnClose( 
            /* [in] */ long Reason) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AfterClose( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnHelp( 
            /* [retval][out] */ VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnGroupExpand( 
            /* [in] */ long Id,
            /* [in] */ VARIANT_BOOL Expanded) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnGroupCheck( 
            /* [in] */ long Id,
            /* [in] */ VARIANT_BOOL Checked) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnCheckboxCheck( 
            /* [in] */ long Id,
            /* [in] */ VARIANT_BOOL Checked) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnOptionCheck( 
            /* [in] */ long Id) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnButtonPress( 
            /* [in] */ long Id) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnTextboxChanged( 
            /* [in] */ long Id,
            /* [in] */ BSTR Text) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnNumberboxChanged( 
            /* [in] */ long Id,
            /* [in] */ double Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnComboboxSelectionChanged( 
            /* [in] */ long Id,
            /* [in] */ long Item) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnListboxSelectionChanged( 
            /* [in] */ long Id,
            /* [in] */ long Item) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnSelectionboxFocusChanged( 
            /* [in] */ long Id) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnSelectionboxListChanged( 
            /* [in] */ long Id,
            /* [in] */ long Count) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPropertyManagerPage2HandlerVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPropertyManagerPage2Handler * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPropertyManagerPage2Handler * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPropertyManagerPage2Handler * This);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler, OnClose)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnClose )( 
            IPropertyManagerPage2Handler * This,
            /* [in] */ long Reason);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler, AfterClose)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AfterClose )( 
            IPropertyManagerPage2Handler * This);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler, OnHelp)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnHelp )( 
            IPropertyManagerPage2Handler * This,
            /* [retval][out] */ VARIANT_BOOL *retval);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler, OnGroupExpand)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnGroupExpand )( 
            IPropertyManagerPage2Handler * This,
            /* [in] */ long Id,
            /* [in] */ VARIANT_BOOL Expanded);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler, OnGroupCheck)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnGroupCheck )( 
            IPropertyManagerPage2Handler * This,
            /* [in] */ long Id,
            /* [in] */ VARIANT_BOOL Checked);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler, OnCheckboxCheck)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnCheckboxCheck )( 
            IPropertyManagerPage2Handler * This,
            /* [in] */ long Id,
            /* [in] */ VARIANT_BOOL Checked);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler, OnOptionCheck)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnOptionCheck )( 
            IPropertyManagerPage2Handler * This,
            /* [in] */ long Id);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler, OnButtonPress)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnButtonPress )( 
            IPropertyManagerPage2Handler * This,
            /* [in] */ long Id);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler, OnTextboxChanged)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnTextboxChanged )( 
            IPropertyManagerPage2Handler * This,
            /* [in] */ long Id,
            /* [in] */ BSTR Text);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler, OnNumberboxChanged)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnNumberboxChanged )( 
            IPropertyManagerPage2Handler * This,
            /* [in] */ long Id,
            /* [in] */ double Value);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler, OnComboboxSelectionChanged)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnComboboxSelectionChanged )( 
            IPropertyManagerPage2Handler * This,
            /* [in] */ long Id,
            /* [in] */ long Item);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler, OnListboxSelectionChanged)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnListboxSelectionChanged )( 
            IPropertyManagerPage2Handler * This,
            /* [in] */ long Id,
            /* [in] */ long Item);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler, OnSelectionboxFocusChanged)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnSelectionboxFocusChanged )( 
            IPropertyManagerPage2Handler * This,
            /* [in] */ long Id);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler, OnSelectionboxListChanged)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnSelectionboxListChanged )( 
            IPropertyManagerPage2Handler * This,
            /* [in] */ long Id,
            /* [in] */ long Count);
        
        END_INTERFACE
    } IPropertyManagerPage2HandlerVtbl;

    interface IPropertyManagerPage2Handler
    {
        CONST_VTBL struct IPropertyManagerPage2HandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPropertyManagerPage2Handler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPropertyManagerPage2Handler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPropertyManagerPage2Handler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPropertyManagerPage2Handler_OnClose(This,Reason)	\
    ( (This)->lpVtbl -> OnClose(This,Reason) ) 

#define IPropertyManagerPage2Handler_AfterClose(This)	\
    ( (This)->lpVtbl -> AfterClose(This) ) 

#define IPropertyManagerPage2Handler_OnHelp(This,retval)	\
    ( (This)->lpVtbl -> OnHelp(This,retval) ) 

#define IPropertyManagerPage2Handler_OnGroupExpand(This,Id,Expanded)	\
    ( (This)->lpVtbl -> OnGroupExpand(This,Id,Expanded) ) 

#define IPropertyManagerPage2Handler_OnGroupCheck(This,Id,Checked)	\
    ( (This)->lpVtbl -> OnGroupCheck(This,Id,Checked) ) 

#define IPropertyManagerPage2Handler_OnCheckboxCheck(This,Id,Checked)	\
    ( (This)->lpVtbl -> OnCheckboxCheck(This,Id,Checked) ) 

#define IPropertyManagerPage2Handler_OnOptionCheck(This,Id)	\
    ( (This)->lpVtbl -> OnOptionCheck(This,Id) ) 

#define IPropertyManagerPage2Handler_OnButtonPress(This,Id)	\
    ( (This)->lpVtbl -> OnButtonPress(This,Id) ) 

#define IPropertyManagerPage2Handler_OnTextboxChanged(This,Id,Text)	\
    ( (This)->lpVtbl -> OnTextboxChanged(This,Id,Text) ) 

#define IPropertyManagerPage2Handler_OnNumberboxChanged(This,Id,Value)	\
    ( (This)->lpVtbl -> OnNumberboxChanged(This,Id,Value) ) 

#define IPropertyManagerPage2Handler_OnComboboxSelectionChanged(This,Id,Item)	\
    ( (This)->lpVtbl -> OnComboboxSelectionChanged(This,Id,Item) ) 

#define IPropertyManagerPage2Handler_OnListboxSelectionChanged(This,Id,Item)	\
    ( (This)->lpVtbl -> OnListboxSelectionChanged(This,Id,Item) ) 

#define IPropertyManagerPage2Handler_OnSelectionboxFocusChanged(This,Id)	\
    ( (This)->lpVtbl -> OnSelectionboxFocusChanged(This,Id) ) 

#define IPropertyManagerPage2Handler_OnSelectionboxListChanged(This,Id,Count)	\
    ( (This)->lpVtbl -> OnSelectionboxListChanged(This,Id,Count) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPropertyManagerPage2Handler_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_PropertyManagerPage2Handler;

#ifdef __cplusplus

class DECLSPEC_UUID("229FF821-0DD2-11d5-AF1E-00C04F603FAF")
PropertyManagerPage2Handler;
#endif

#ifndef __IPropertyManagerPage2Handler2_INTERFACE_DEFINED__
#define __IPropertyManagerPage2Handler2_INTERFACE_DEFINED__

/* interface IPropertyManagerPage2Handler2 */
/* [object][helpstring][unique][hidden][oleautomation][uuid] */ 


EXTERN_C const IID IID_IPropertyManagerPage2Handler2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9F580EB4-F31B-11d5-AF66-00C04F603FAF")
    IPropertyManagerPage2Handler2 : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnClose( 
            /* [in] */ long Reason) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AfterClose( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnHelp( 
            /* [retval][out] */ VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnGroupExpand( 
            /* [in] */ long Id,
            /* [in] */ VARIANT_BOOL Expanded) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnGroupCheck( 
            /* [in] */ long Id,
            /* [in] */ VARIANT_BOOL Checked) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnCheckboxCheck( 
            /* [in] */ long Id,
            /* [in] */ VARIANT_BOOL Checked) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnOptionCheck( 
            /* [in] */ long Id) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnButtonPress( 
            /* [in] */ long Id) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnTextboxChanged( 
            /* [in] */ long Id,
            /* [in] */ BSTR Text) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnNumberboxChanged( 
            /* [in] */ long Id,
            /* [in] */ double Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnComboboxSelectionChanged( 
            /* [in] */ long Id,
            /* [in] */ long Item) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnListboxSelectionChanged( 
            /* [in] */ long Id,
            /* [in] */ long Item) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnSelectionboxFocusChanged( 
            /* [in] */ long Id) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnSelectionboxListChanged( 
            /* [in] */ long Id,
            /* [in] */ long Count) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnSelectionboxCalloutCreated( 
            /* [in] */ long Id) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnSelectionboxCalloutDestroyed( 
            /* [in] */ long Id) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnComboboxEditChanged( 
            /* [in] */ long Id,
            /* [in] */ BSTR Text) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnActiveXControlCreated( 
            /* [in] */ long Id,
            /* [in] */ VARIANT_BOOL Status,
            /* [retval][out] */ long *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnPreviousPage( 
            /* [retval][out] */ VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnNextPage( 
            /* [retval][out] */ VARIANT_BOOL *retval) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPropertyManagerPage2Handler2Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPropertyManagerPage2Handler2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPropertyManagerPage2Handler2 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPropertyManagerPage2Handler2 * This);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler2, OnClose)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnClose )( 
            IPropertyManagerPage2Handler2 * This,
            /* [in] */ long Reason);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler2, AfterClose)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AfterClose )( 
            IPropertyManagerPage2Handler2 * This);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler2, OnHelp)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnHelp )( 
            IPropertyManagerPage2Handler2 * This,
            /* [retval][out] */ VARIANT_BOOL *retval);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler2, OnGroupExpand)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnGroupExpand )( 
            IPropertyManagerPage2Handler2 * This,
            /* [in] */ long Id,
            /* [in] */ VARIANT_BOOL Expanded);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler2, OnGroupCheck)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnGroupCheck )( 
            IPropertyManagerPage2Handler2 * This,
            /* [in] */ long Id,
            /* [in] */ VARIANT_BOOL Checked);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler2, OnCheckboxCheck)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnCheckboxCheck )( 
            IPropertyManagerPage2Handler2 * This,
            /* [in] */ long Id,
            /* [in] */ VARIANT_BOOL Checked);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler2, OnOptionCheck)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnOptionCheck )( 
            IPropertyManagerPage2Handler2 * This,
            /* [in] */ long Id);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler2, OnButtonPress)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnButtonPress )( 
            IPropertyManagerPage2Handler2 * This,
            /* [in] */ long Id);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler2, OnTextboxChanged)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnTextboxChanged )( 
            IPropertyManagerPage2Handler2 * This,
            /* [in] */ long Id,
            /* [in] */ BSTR Text);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler2, OnNumberboxChanged)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnNumberboxChanged )( 
            IPropertyManagerPage2Handler2 * This,
            /* [in] */ long Id,
            /* [in] */ double Value);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler2, OnComboboxSelectionChanged)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnComboboxSelectionChanged )( 
            IPropertyManagerPage2Handler2 * This,
            /* [in] */ long Id,
            /* [in] */ long Item);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler2, OnListboxSelectionChanged)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnListboxSelectionChanged )( 
            IPropertyManagerPage2Handler2 * This,
            /* [in] */ long Id,
            /* [in] */ long Item);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler2, OnSelectionboxFocusChanged)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnSelectionboxFocusChanged )( 
            IPropertyManagerPage2Handler2 * This,
            /* [in] */ long Id);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler2, OnSelectionboxListChanged)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnSelectionboxListChanged )( 
            IPropertyManagerPage2Handler2 * This,
            /* [in] */ long Id,
            /* [in] */ long Count);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler2, OnSelectionboxCalloutCreated)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnSelectionboxCalloutCreated )( 
            IPropertyManagerPage2Handler2 * This,
            /* [in] */ long Id);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler2, OnSelectionboxCalloutDestroyed)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnSelectionboxCalloutDestroyed )( 
            IPropertyManagerPage2Handler2 * This,
            /* [in] */ long Id);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler2, OnComboboxEditChanged)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnComboboxEditChanged )( 
            IPropertyManagerPage2Handler2 * This,
            /* [in] */ long Id,
            /* [in] */ BSTR Text);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler2, OnActiveXControlCreated)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnActiveXControlCreated )( 
            IPropertyManagerPage2Handler2 * This,
            /* [in] */ long Id,
            /* [in] */ VARIANT_BOOL Status,
            /* [retval][out] */ long *retval);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler2, OnPreviousPage)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnPreviousPage )( 
            IPropertyManagerPage2Handler2 * This,
            /* [retval][out] */ VARIANT_BOOL *retval);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler2, OnNextPage)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnNextPage )( 
            IPropertyManagerPage2Handler2 * This,
            /* [retval][out] */ VARIANT_BOOL *retval);
        
        END_INTERFACE
    } IPropertyManagerPage2Handler2Vtbl;

    interface IPropertyManagerPage2Handler2
    {
        CONST_VTBL struct IPropertyManagerPage2Handler2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPropertyManagerPage2Handler2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPropertyManagerPage2Handler2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPropertyManagerPage2Handler2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPropertyManagerPage2Handler2_OnClose(This,Reason)	\
    ( (This)->lpVtbl -> OnClose(This,Reason) ) 

#define IPropertyManagerPage2Handler2_AfterClose(This)	\
    ( (This)->lpVtbl -> AfterClose(This) ) 

#define IPropertyManagerPage2Handler2_OnHelp(This,retval)	\
    ( (This)->lpVtbl -> OnHelp(This,retval) ) 

#define IPropertyManagerPage2Handler2_OnGroupExpand(This,Id,Expanded)	\
    ( (This)->lpVtbl -> OnGroupExpand(This,Id,Expanded) ) 

#define IPropertyManagerPage2Handler2_OnGroupCheck(This,Id,Checked)	\
    ( (This)->lpVtbl -> OnGroupCheck(This,Id,Checked) ) 

#define IPropertyManagerPage2Handler2_OnCheckboxCheck(This,Id,Checked)	\
    ( (This)->lpVtbl -> OnCheckboxCheck(This,Id,Checked) ) 

#define IPropertyManagerPage2Handler2_OnOptionCheck(This,Id)	\
    ( (This)->lpVtbl -> OnOptionCheck(This,Id) ) 

#define IPropertyManagerPage2Handler2_OnButtonPress(This,Id)	\
    ( (This)->lpVtbl -> OnButtonPress(This,Id) ) 

#define IPropertyManagerPage2Handler2_OnTextboxChanged(This,Id,Text)	\
    ( (This)->lpVtbl -> OnTextboxChanged(This,Id,Text) ) 

#define IPropertyManagerPage2Handler2_OnNumberboxChanged(This,Id,Value)	\
    ( (This)->lpVtbl -> OnNumberboxChanged(This,Id,Value) ) 

#define IPropertyManagerPage2Handler2_OnComboboxSelectionChanged(This,Id,Item)	\
    ( (This)->lpVtbl -> OnComboboxSelectionChanged(This,Id,Item) ) 

#define IPropertyManagerPage2Handler2_OnListboxSelectionChanged(This,Id,Item)	\
    ( (This)->lpVtbl -> OnListboxSelectionChanged(This,Id,Item) ) 

#define IPropertyManagerPage2Handler2_OnSelectionboxFocusChanged(This,Id)	\
    ( (This)->lpVtbl -> OnSelectionboxFocusChanged(This,Id) ) 

#define IPropertyManagerPage2Handler2_OnSelectionboxListChanged(This,Id,Count)	\
    ( (This)->lpVtbl -> OnSelectionboxListChanged(This,Id,Count) ) 

#define IPropertyManagerPage2Handler2_OnSelectionboxCalloutCreated(This,Id)	\
    ( (This)->lpVtbl -> OnSelectionboxCalloutCreated(This,Id) ) 

#define IPropertyManagerPage2Handler2_OnSelectionboxCalloutDestroyed(This,Id)	\
    ( (This)->lpVtbl -> OnSelectionboxCalloutDestroyed(This,Id) ) 

#define IPropertyManagerPage2Handler2_OnComboboxEditChanged(This,Id,Text)	\
    ( (This)->lpVtbl -> OnComboboxEditChanged(This,Id,Text) ) 

#define IPropertyManagerPage2Handler2_OnActiveXControlCreated(This,Id,Status,retval)	\
    ( (This)->lpVtbl -> OnActiveXControlCreated(This,Id,Status,retval) ) 

#define IPropertyManagerPage2Handler2_OnPreviousPage(This,retval)	\
    ( (This)->lpVtbl -> OnPreviousPage(This,retval) ) 

#define IPropertyManagerPage2Handler2_OnNextPage(This,retval)	\
    ( (This)->lpVtbl -> OnNextPage(This,retval) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPropertyManagerPage2Handler2_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_PropertyManagerPage2Handler2;

#ifdef __cplusplus

class DECLSPEC_UUID("9F580EB5-F31B-11d5-AF66-00C04F603FAF")
PropertyManagerPage2Handler2;
#endif

#ifndef __IPropertyManagerPage2Handler3_INTERFACE_DEFINED__
#define __IPropertyManagerPage2Handler3_INTERFACE_DEFINED__

/* interface IPropertyManagerPage2Handler3 */
/* [object][helpstring][unique][hidden][oleautomation][uuid] */ 


EXTERN_C const IID IID_IPropertyManagerPage2Handler3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B149338A-54D5-4e46-9FD0-ED95C9FCB85C")
    IPropertyManagerPage2Handler3 : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnClose( 
            /* [in] */ long Reason) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AfterClose( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnHelp( 
            /* [retval][out] */ VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnGroupExpand( 
            /* [in] */ long Id,
            /* [in] */ VARIANT_BOOL Expanded) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnGroupCheck( 
            /* [in] */ long Id,
            /* [in] */ VARIANT_BOOL Checked) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnCheckboxCheck( 
            /* [in] */ long Id,
            /* [in] */ VARIANT_BOOL Checked) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnOptionCheck( 
            /* [in] */ long Id) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnButtonPress( 
            /* [in] */ long Id) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnTextboxChanged( 
            /* [in] */ long Id,
            /* [in] */ BSTR Text) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnNumberboxChanged( 
            /* [in] */ long Id,
            /* [in] */ double Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnComboboxSelectionChanged( 
            /* [in] */ long Id,
            /* [in] */ long Item) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnListboxSelectionChanged( 
            /* [in] */ long Id,
            /* [in] */ long Item) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnSelectionboxFocusChanged( 
            /* [in] */ long Id) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnSelectionboxListChanged( 
            /* [in] */ long Id,
            /* [in] */ long Count) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnSelectionboxCalloutCreated( 
            /* [in] */ long Id) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnSelectionboxCalloutDestroyed( 
            /* [in] */ long Id) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnComboboxEditChanged( 
            /* [in] */ long Id,
            /* [in] */ BSTR Text) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnActiveXControlCreated( 
            /* [in] */ long Id,
            /* [in] */ VARIANT_BOOL Status,
            /* [retval][out] */ long *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnPreviousPage( 
            /* [retval][out] */ VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnNextPage( 
            /* [retval][out] */ VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnPreview( 
            /* [retval][out] */ VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnSubmitSelection( 
            /* [in] */ long Id,
            /* [in] */ LPDISPATCH Selection,
            /* [in] */ long SelType,
            /* [retval][out] */ VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnTabClicked( 
            /* [in] */ long Id,
            /* [retval][out] */ VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnSliderPositionChanged( 
            /* [in] */ long Id,
            /* [in] */ double Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnWhatsNew( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPropertyManagerPage2Handler3Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPropertyManagerPage2Handler3 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPropertyManagerPage2Handler3 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPropertyManagerPage2Handler3 * This);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler3, OnClose)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnClose )( 
            IPropertyManagerPage2Handler3 * This,
            /* [in] */ long Reason);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler3, AfterClose)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AfterClose )( 
            IPropertyManagerPage2Handler3 * This);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler3, OnHelp)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnHelp )( 
            IPropertyManagerPage2Handler3 * This,
            /* [retval][out] */ VARIANT_BOOL *retval);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler3, OnGroupExpand)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnGroupExpand )( 
            IPropertyManagerPage2Handler3 * This,
            /* [in] */ long Id,
            /* [in] */ VARIANT_BOOL Expanded);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler3, OnGroupCheck)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnGroupCheck )( 
            IPropertyManagerPage2Handler3 * This,
            /* [in] */ long Id,
            /* [in] */ VARIANT_BOOL Checked);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler3, OnCheckboxCheck)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnCheckboxCheck )( 
            IPropertyManagerPage2Handler3 * This,
            /* [in] */ long Id,
            /* [in] */ VARIANT_BOOL Checked);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler3, OnOptionCheck)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnOptionCheck )( 
            IPropertyManagerPage2Handler3 * This,
            /* [in] */ long Id);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler3, OnButtonPress)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnButtonPress )( 
            IPropertyManagerPage2Handler3 * This,
            /* [in] */ long Id);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler3, OnTextboxChanged)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnTextboxChanged )( 
            IPropertyManagerPage2Handler3 * This,
            /* [in] */ long Id,
            /* [in] */ BSTR Text);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler3, OnNumberboxChanged)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnNumberboxChanged )( 
            IPropertyManagerPage2Handler3 * This,
            /* [in] */ long Id,
            /* [in] */ double Value);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler3, OnComboboxSelectionChanged)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnComboboxSelectionChanged )( 
            IPropertyManagerPage2Handler3 * This,
            /* [in] */ long Id,
            /* [in] */ long Item);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler3, OnListboxSelectionChanged)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnListboxSelectionChanged )( 
            IPropertyManagerPage2Handler3 * This,
            /* [in] */ long Id,
            /* [in] */ long Item);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler3, OnSelectionboxFocusChanged)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnSelectionboxFocusChanged )( 
            IPropertyManagerPage2Handler3 * This,
            /* [in] */ long Id);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler3, OnSelectionboxListChanged)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnSelectionboxListChanged )( 
            IPropertyManagerPage2Handler3 * This,
            /* [in] */ long Id,
            /* [in] */ long Count);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler3, OnSelectionboxCalloutCreated)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnSelectionboxCalloutCreated )( 
            IPropertyManagerPage2Handler3 * This,
            /* [in] */ long Id);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler3, OnSelectionboxCalloutDestroyed)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnSelectionboxCalloutDestroyed )( 
            IPropertyManagerPage2Handler3 * This,
            /* [in] */ long Id);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler3, OnComboboxEditChanged)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnComboboxEditChanged )( 
            IPropertyManagerPage2Handler3 * This,
            /* [in] */ long Id,
            /* [in] */ BSTR Text);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler3, OnActiveXControlCreated)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnActiveXControlCreated )( 
            IPropertyManagerPage2Handler3 * This,
            /* [in] */ long Id,
            /* [in] */ VARIANT_BOOL Status,
            /* [retval][out] */ long *retval);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler3, OnPreviousPage)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnPreviousPage )( 
            IPropertyManagerPage2Handler3 * This,
            /* [retval][out] */ VARIANT_BOOL *retval);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler3, OnNextPage)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnNextPage )( 
            IPropertyManagerPage2Handler3 * This,
            /* [retval][out] */ VARIANT_BOOL *retval);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler3, OnPreview)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnPreview )( 
            IPropertyManagerPage2Handler3 * This,
            /* [retval][out] */ VARIANT_BOOL *retval);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler3, OnSubmitSelection)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnSubmitSelection )( 
            IPropertyManagerPage2Handler3 * This,
            /* [in] */ long Id,
            /* [in] */ LPDISPATCH Selection,
            /* [in] */ long SelType,
            /* [retval][out] */ VARIANT_BOOL *retval);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler3, OnTabClicked)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnTabClicked )( 
            IPropertyManagerPage2Handler3 * This,
            /* [in] */ long Id,
            /* [retval][out] */ VARIANT_BOOL *retval);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler3, OnSliderPositionChanged)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnSliderPositionChanged )( 
            IPropertyManagerPage2Handler3 * This,
            /* [in] */ long Id,
            /* [in] */ double Value);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler3, OnWhatsNew)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnWhatsNew )( 
            IPropertyManagerPage2Handler3 * This);
        
        END_INTERFACE
    } IPropertyManagerPage2Handler3Vtbl;

    interface IPropertyManagerPage2Handler3
    {
        CONST_VTBL struct IPropertyManagerPage2Handler3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPropertyManagerPage2Handler3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPropertyManagerPage2Handler3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPropertyManagerPage2Handler3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPropertyManagerPage2Handler3_OnClose(This,Reason)	\
    ( (This)->lpVtbl -> OnClose(This,Reason) ) 

#define IPropertyManagerPage2Handler3_AfterClose(This)	\
    ( (This)->lpVtbl -> AfterClose(This) ) 

#define IPropertyManagerPage2Handler3_OnHelp(This,retval)	\
    ( (This)->lpVtbl -> OnHelp(This,retval) ) 

#define IPropertyManagerPage2Handler3_OnGroupExpand(This,Id,Expanded)	\
    ( (This)->lpVtbl -> OnGroupExpand(This,Id,Expanded) ) 

#define IPropertyManagerPage2Handler3_OnGroupCheck(This,Id,Checked)	\
    ( (This)->lpVtbl -> OnGroupCheck(This,Id,Checked) ) 

#define IPropertyManagerPage2Handler3_OnCheckboxCheck(This,Id,Checked)	\
    ( (This)->lpVtbl -> OnCheckboxCheck(This,Id,Checked) ) 

#define IPropertyManagerPage2Handler3_OnOptionCheck(This,Id)	\
    ( (This)->lpVtbl -> OnOptionCheck(This,Id) ) 

#define IPropertyManagerPage2Handler3_OnButtonPress(This,Id)	\
    ( (This)->lpVtbl -> OnButtonPress(This,Id) ) 

#define IPropertyManagerPage2Handler3_OnTextboxChanged(This,Id,Text)	\
    ( (This)->lpVtbl -> OnTextboxChanged(This,Id,Text) ) 

#define IPropertyManagerPage2Handler3_OnNumberboxChanged(This,Id,Value)	\
    ( (This)->lpVtbl -> OnNumberboxChanged(This,Id,Value) ) 

#define IPropertyManagerPage2Handler3_OnComboboxSelectionChanged(This,Id,Item)	\
    ( (This)->lpVtbl -> OnComboboxSelectionChanged(This,Id,Item) ) 

#define IPropertyManagerPage2Handler3_OnListboxSelectionChanged(This,Id,Item)	\
    ( (This)->lpVtbl -> OnListboxSelectionChanged(This,Id,Item) ) 

#define IPropertyManagerPage2Handler3_OnSelectionboxFocusChanged(This,Id)	\
    ( (This)->lpVtbl -> OnSelectionboxFocusChanged(This,Id) ) 

#define IPropertyManagerPage2Handler3_OnSelectionboxListChanged(This,Id,Count)	\
    ( (This)->lpVtbl -> OnSelectionboxListChanged(This,Id,Count) ) 

#define IPropertyManagerPage2Handler3_OnSelectionboxCalloutCreated(This,Id)	\
    ( (This)->lpVtbl -> OnSelectionboxCalloutCreated(This,Id) ) 

#define IPropertyManagerPage2Handler3_OnSelectionboxCalloutDestroyed(This,Id)	\
    ( (This)->lpVtbl -> OnSelectionboxCalloutDestroyed(This,Id) ) 

#define IPropertyManagerPage2Handler3_OnComboboxEditChanged(This,Id,Text)	\
    ( (This)->lpVtbl -> OnComboboxEditChanged(This,Id,Text) ) 

#define IPropertyManagerPage2Handler3_OnActiveXControlCreated(This,Id,Status,retval)	\
    ( (This)->lpVtbl -> OnActiveXControlCreated(This,Id,Status,retval) ) 

#define IPropertyManagerPage2Handler3_OnPreviousPage(This,retval)	\
    ( (This)->lpVtbl -> OnPreviousPage(This,retval) ) 

#define IPropertyManagerPage2Handler3_OnNextPage(This,retval)	\
    ( (This)->lpVtbl -> OnNextPage(This,retval) ) 

#define IPropertyManagerPage2Handler3_OnPreview(This,retval)	\
    ( (This)->lpVtbl -> OnPreview(This,retval) ) 

#define IPropertyManagerPage2Handler3_OnSubmitSelection(This,Id,Selection,SelType,retval)	\
    ( (This)->lpVtbl -> OnSubmitSelection(This,Id,Selection,SelType,retval) ) 

#define IPropertyManagerPage2Handler3_OnTabClicked(This,Id,retval)	\
    ( (This)->lpVtbl -> OnTabClicked(This,Id,retval) ) 

#define IPropertyManagerPage2Handler3_OnSliderPositionChanged(This,Id,Value)	\
    ( (This)->lpVtbl -> OnSliderPositionChanged(This,Id,Value) ) 

#define IPropertyManagerPage2Handler3_OnWhatsNew(This)	\
    ( (This)->lpVtbl -> OnWhatsNew(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPropertyManagerPage2Handler3_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_PropertyManagerPage2Handler3;

#ifdef __cplusplus

class DECLSPEC_UUID("9DD2292A-B437-47db-8E45-D8E7157C946C")
PropertyManagerPage2Handler3;
#endif

#ifndef __IPropertyManagerPage2Handler4_INTERFACE_DEFINED__
#define __IPropertyManagerPage2Handler4_INTERFACE_DEFINED__

/* interface IPropertyManagerPage2Handler4 */
/* [object][helpstring][unique][hidden][oleautomation][uuid] */ 


EXTERN_C const IID IID_IPropertyManagerPage2Handler4;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6EBCEDF2-452A-49db-BF35-100D42B669D3")
    IPropertyManagerPage2Handler4 : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnClose( 
            /* [in] */ long Reason) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AfterClose( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnHelp( 
            /* [retval][out] */ VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnGroupExpand( 
            /* [in] */ long Id,
            /* [in] */ VARIANT_BOOL Expanded) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnGroupCheck( 
            /* [in] */ long Id,
            /* [in] */ VARIANT_BOOL Checked) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnCheckboxCheck( 
            /* [in] */ long Id,
            /* [in] */ VARIANT_BOOL Checked) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnOptionCheck( 
            /* [in] */ long Id) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnButtonPress( 
            /* [in] */ long Id) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnTextboxChanged( 
            /* [in] */ long Id,
            /* [in] */ BSTR Text) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnNumberboxChanged( 
            /* [in] */ long Id,
            /* [in] */ double Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnComboboxSelectionChanged( 
            /* [in] */ long Id,
            /* [in] */ long Item) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnListboxSelectionChanged( 
            /* [in] */ long Id,
            /* [in] */ long Item) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnSelectionboxFocusChanged( 
            /* [in] */ long Id) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnSelectionboxListChanged( 
            /* [in] */ long Id,
            /* [in] */ long Count) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnSelectionboxCalloutCreated( 
            /* [in] */ long Id) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnSelectionboxCalloutDestroyed( 
            /* [in] */ long Id) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnComboboxEditChanged( 
            /* [in] */ long Id,
            /* [in] */ BSTR Text) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnActiveXControlCreated( 
            /* [in] */ long Id,
            /* [in] */ VARIANT_BOOL Status,
            /* [retval][out] */ long *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnPreviousPage( 
            /* [retval][out] */ VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnNextPage( 
            /* [retval][out] */ VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnPreview( 
            /* [retval][out] */ VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnSubmitSelection( 
            /* [in] */ long Id,
            /* [in] */ LPDISPATCH Selection,
            /* [in] */ long SelType,
            /* [retval][out] */ VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnTabClicked( 
            /* [in] */ long Id,
            /* [retval][out] */ VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnSliderPositionChanged( 
            /* [in] */ long Id,
            /* [in] */ double Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnWhatsNew( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnUndo( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnSliderTrackingCompleted( 
            /* [in] */ long Id,
            /* [in] */ double Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnKeystroke( 
            /* [in] */ long Wparam,
            /* [in] */ long Message,
            /* [in] */ long Lparam,
            /* [in] */ long Id) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnPopupMenuItem( 
            /* [in] */ long Id) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnPopupMenuItemUpdate( 
            /* [in] */ long Id,
            /* [in] */ long *Retval) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPropertyManagerPage2Handler4Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPropertyManagerPage2Handler4 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPropertyManagerPage2Handler4 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPropertyManagerPage2Handler4 * This);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler4, OnClose)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnClose )( 
            IPropertyManagerPage2Handler4 * This,
            /* [in] */ long Reason);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler4, AfterClose)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AfterClose )( 
            IPropertyManagerPage2Handler4 * This);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler4, OnHelp)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnHelp )( 
            IPropertyManagerPage2Handler4 * This,
            /* [retval][out] */ VARIANT_BOOL *retval);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler4, OnGroupExpand)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnGroupExpand )( 
            IPropertyManagerPage2Handler4 * This,
            /* [in] */ long Id,
            /* [in] */ VARIANT_BOOL Expanded);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler4, OnGroupCheck)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnGroupCheck )( 
            IPropertyManagerPage2Handler4 * This,
            /* [in] */ long Id,
            /* [in] */ VARIANT_BOOL Checked);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler4, OnCheckboxCheck)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnCheckboxCheck )( 
            IPropertyManagerPage2Handler4 * This,
            /* [in] */ long Id,
            /* [in] */ VARIANT_BOOL Checked);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler4, OnOptionCheck)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnOptionCheck )( 
            IPropertyManagerPage2Handler4 * This,
            /* [in] */ long Id);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler4, OnButtonPress)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnButtonPress )( 
            IPropertyManagerPage2Handler4 * This,
            /* [in] */ long Id);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler4, OnTextboxChanged)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnTextboxChanged )( 
            IPropertyManagerPage2Handler4 * This,
            /* [in] */ long Id,
            /* [in] */ BSTR Text);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler4, OnNumberboxChanged)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnNumberboxChanged )( 
            IPropertyManagerPage2Handler4 * This,
            /* [in] */ long Id,
            /* [in] */ double Value);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler4, OnComboboxSelectionChanged)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnComboboxSelectionChanged )( 
            IPropertyManagerPage2Handler4 * This,
            /* [in] */ long Id,
            /* [in] */ long Item);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler4, OnListboxSelectionChanged)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnListboxSelectionChanged )( 
            IPropertyManagerPage2Handler4 * This,
            /* [in] */ long Id,
            /* [in] */ long Item);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler4, OnSelectionboxFocusChanged)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnSelectionboxFocusChanged )( 
            IPropertyManagerPage2Handler4 * This,
            /* [in] */ long Id);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler4, OnSelectionboxListChanged)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnSelectionboxListChanged )( 
            IPropertyManagerPage2Handler4 * This,
            /* [in] */ long Id,
            /* [in] */ long Count);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler4, OnSelectionboxCalloutCreated)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnSelectionboxCalloutCreated )( 
            IPropertyManagerPage2Handler4 * This,
            /* [in] */ long Id);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler4, OnSelectionboxCalloutDestroyed)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnSelectionboxCalloutDestroyed )( 
            IPropertyManagerPage2Handler4 * This,
            /* [in] */ long Id);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler4, OnComboboxEditChanged)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnComboboxEditChanged )( 
            IPropertyManagerPage2Handler4 * This,
            /* [in] */ long Id,
            /* [in] */ BSTR Text);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler4, OnActiveXControlCreated)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnActiveXControlCreated )( 
            IPropertyManagerPage2Handler4 * This,
            /* [in] */ long Id,
            /* [in] */ VARIANT_BOOL Status,
            /* [retval][out] */ long *retval);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler4, OnPreviousPage)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnPreviousPage )( 
            IPropertyManagerPage2Handler4 * This,
            /* [retval][out] */ VARIANT_BOOL *retval);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler4, OnNextPage)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnNextPage )( 
            IPropertyManagerPage2Handler4 * This,
            /* [retval][out] */ VARIANT_BOOL *retval);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler4, OnPreview)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnPreview )( 
            IPropertyManagerPage2Handler4 * This,
            /* [retval][out] */ VARIANT_BOOL *retval);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler4, OnSubmitSelection)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnSubmitSelection )( 
            IPropertyManagerPage2Handler4 * This,
            /* [in] */ long Id,
            /* [in] */ LPDISPATCH Selection,
            /* [in] */ long SelType,
            /* [retval][out] */ VARIANT_BOOL *retval);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler4, OnTabClicked)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnTabClicked )( 
            IPropertyManagerPage2Handler4 * This,
            /* [in] */ long Id,
            /* [retval][out] */ VARIANT_BOOL *retval);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler4, OnSliderPositionChanged)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnSliderPositionChanged )( 
            IPropertyManagerPage2Handler4 * This,
            /* [in] */ long Id,
            /* [in] */ double Value);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler4, OnWhatsNew)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnWhatsNew )( 
            IPropertyManagerPage2Handler4 * This);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler4, OnUndo)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnUndo )( 
            IPropertyManagerPage2Handler4 * This);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler4, OnSliderTrackingCompleted)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnSliderTrackingCompleted )( 
            IPropertyManagerPage2Handler4 * This,
            /* [in] */ long Id,
            /* [in] */ double Value);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler4, OnKeystroke)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnKeystroke )( 
            IPropertyManagerPage2Handler4 * This,
            /* [in] */ long Wparam,
            /* [in] */ long Message,
            /* [in] */ long Lparam,
            /* [in] */ long Id);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler4, OnPopupMenuItem)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnPopupMenuItem )( 
            IPropertyManagerPage2Handler4 * This,
            /* [in] */ long Id);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler4, OnPopupMenuItemUpdate)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnPopupMenuItemUpdate )( 
            IPropertyManagerPage2Handler4 * This,
            /* [in] */ long Id,
            /* [in] */ long *Retval);
        
        END_INTERFACE
    } IPropertyManagerPage2Handler4Vtbl;

    interface IPropertyManagerPage2Handler4
    {
        CONST_VTBL struct IPropertyManagerPage2Handler4Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPropertyManagerPage2Handler4_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPropertyManagerPage2Handler4_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPropertyManagerPage2Handler4_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPropertyManagerPage2Handler4_OnClose(This,Reason)	\
    ( (This)->lpVtbl -> OnClose(This,Reason) ) 

#define IPropertyManagerPage2Handler4_AfterClose(This)	\
    ( (This)->lpVtbl -> AfterClose(This) ) 

#define IPropertyManagerPage2Handler4_OnHelp(This,retval)	\
    ( (This)->lpVtbl -> OnHelp(This,retval) ) 

#define IPropertyManagerPage2Handler4_OnGroupExpand(This,Id,Expanded)	\
    ( (This)->lpVtbl -> OnGroupExpand(This,Id,Expanded) ) 

#define IPropertyManagerPage2Handler4_OnGroupCheck(This,Id,Checked)	\
    ( (This)->lpVtbl -> OnGroupCheck(This,Id,Checked) ) 

#define IPropertyManagerPage2Handler4_OnCheckboxCheck(This,Id,Checked)	\
    ( (This)->lpVtbl -> OnCheckboxCheck(This,Id,Checked) ) 

#define IPropertyManagerPage2Handler4_OnOptionCheck(This,Id)	\
    ( (This)->lpVtbl -> OnOptionCheck(This,Id) ) 

#define IPropertyManagerPage2Handler4_OnButtonPress(This,Id)	\
    ( (This)->lpVtbl -> OnButtonPress(This,Id) ) 

#define IPropertyManagerPage2Handler4_OnTextboxChanged(This,Id,Text)	\
    ( (This)->lpVtbl -> OnTextboxChanged(This,Id,Text) ) 

#define IPropertyManagerPage2Handler4_OnNumberboxChanged(This,Id,Value)	\
    ( (This)->lpVtbl -> OnNumberboxChanged(This,Id,Value) ) 

#define IPropertyManagerPage2Handler4_OnComboboxSelectionChanged(This,Id,Item)	\
    ( (This)->lpVtbl -> OnComboboxSelectionChanged(This,Id,Item) ) 

#define IPropertyManagerPage2Handler4_OnListboxSelectionChanged(This,Id,Item)	\
    ( (This)->lpVtbl -> OnListboxSelectionChanged(This,Id,Item) ) 

#define IPropertyManagerPage2Handler4_OnSelectionboxFocusChanged(This,Id)	\
    ( (This)->lpVtbl -> OnSelectionboxFocusChanged(This,Id) ) 

#define IPropertyManagerPage2Handler4_OnSelectionboxListChanged(This,Id,Count)	\
    ( (This)->lpVtbl -> OnSelectionboxListChanged(This,Id,Count) ) 

#define IPropertyManagerPage2Handler4_OnSelectionboxCalloutCreated(This,Id)	\
    ( (This)->lpVtbl -> OnSelectionboxCalloutCreated(This,Id) ) 

#define IPropertyManagerPage2Handler4_OnSelectionboxCalloutDestroyed(This,Id)	\
    ( (This)->lpVtbl -> OnSelectionboxCalloutDestroyed(This,Id) ) 

#define IPropertyManagerPage2Handler4_OnComboboxEditChanged(This,Id,Text)	\
    ( (This)->lpVtbl -> OnComboboxEditChanged(This,Id,Text) ) 

#define IPropertyManagerPage2Handler4_OnActiveXControlCreated(This,Id,Status,retval)	\
    ( (This)->lpVtbl -> OnActiveXControlCreated(This,Id,Status,retval) ) 

#define IPropertyManagerPage2Handler4_OnPreviousPage(This,retval)	\
    ( (This)->lpVtbl -> OnPreviousPage(This,retval) ) 

#define IPropertyManagerPage2Handler4_OnNextPage(This,retval)	\
    ( (This)->lpVtbl -> OnNextPage(This,retval) ) 

#define IPropertyManagerPage2Handler4_OnPreview(This,retval)	\
    ( (This)->lpVtbl -> OnPreview(This,retval) ) 

#define IPropertyManagerPage2Handler4_OnSubmitSelection(This,Id,Selection,SelType,retval)	\
    ( (This)->lpVtbl -> OnSubmitSelection(This,Id,Selection,SelType,retval) ) 

#define IPropertyManagerPage2Handler4_OnTabClicked(This,Id,retval)	\
    ( (This)->lpVtbl -> OnTabClicked(This,Id,retval) ) 

#define IPropertyManagerPage2Handler4_OnSliderPositionChanged(This,Id,Value)	\
    ( (This)->lpVtbl -> OnSliderPositionChanged(This,Id,Value) ) 

#define IPropertyManagerPage2Handler4_OnWhatsNew(This)	\
    ( (This)->lpVtbl -> OnWhatsNew(This) ) 

#define IPropertyManagerPage2Handler4_OnUndo(This)	\
    ( (This)->lpVtbl -> OnUndo(This) ) 

#define IPropertyManagerPage2Handler4_OnSliderTrackingCompleted(This,Id,Value)	\
    ( (This)->lpVtbl -> OnSliderTrackingCompleted(This,Id,Value) ) 

#define IPropertyManagerPage2Handler4_OnKeystroke(This,Wparam,Message,Lparam,Id)	\
    ( (This)->lpVtbl -> OnKeystroke(This,Wparam,Message,Lparam,Id) ) 

#define IPropertyManagerPage2Handler4_OnPopupMenuItem(This,Id)	\
    ( (This)->lpVtbl -> OnPopupMenuItem(This,Id) ) 

#define IPropertyManagerPage2Handler4_OnPopupMenuItemUpdate(This,Id,Retval)	\
    ( (This)->lpVtbl -> OnPopupMenuItemUpdate(This,Id,Retval) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPropertyManagerPage2Handler4_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_PropertyManagerPage2Handler4;

#ifdef __cplusplus

class DECLSPEC_UUID("F622129C-393A-487b-AE8E-0FD01313F115")
PropertyManagerPage2Handler4;
#endif

#ifndef __IPropertyManagerPage2Handler5_INTERFACE_DEFINED__
#define __IPropertyManagerPage2Handler5_INTERFACE_DEFINED__

/* interface IPropertyManagerPage2Handler5 */
/* [object][helpstring][unique][hidden][oleautomation][uuid] */ 


EXTERN_C const IID IID_IPropertyManagerPage2Handler5;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A343363F-3098-42fa-ADC3-DFA70F39EB24")
    IPropertyManagerPage2Handler5 : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnClose( 
            /* [in] */ long Reason) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AfterClose( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnHelp( 
            /* [retval][out] */ VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnGroupExpand( 
            /* [in] */ long Id,
            /* [in] */ VARIANT_BOOL Expanded) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnGroupCheck( 
            /* [in] */ long Id,
            /* [in] */ VARIANT_BOOL Checked) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnCheckboxCheck( 
            /* [in] */ long Id,
            /* [in] */ VARIANT_BOOL Checked) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnOptionCheck( 
            /* [in] */ long Id) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnButtonPress( 
            /* [in] */ long Id) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnTextboxChanged( 
            /* [in] */ long Id,
            /* [in] */ BSTR Text) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnNumberboxChanged( 
            /* [in] */ long Id,
            /* [in] */ double Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnComboboxSelectionChanged( 
            /* [in] */ long Id,
            /* [in] */ long Item) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnListboxSelectionChanged( 
            /* [in] */ long Id,
            /* [in] */ long Item) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnSelectionboxFocusChanged( 
            /* [in] */ long Id) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnSelectionboxListChanged( 
            /* [in] */ long Id,
            /* [in] */ long Count) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnSelectionboxCalloutCreated( 
            /* [in] */ long Id) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnSelectionboxCalloutDestroyed( 
            /* [in] */ long Id) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnComboboxEditChanged( 
            /* [in] */ long Id,
            /* [in] */ BSTR Text) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnActiveXControlCreated( 
            /* [in] */ long Id,
            /* [in] */ VARIANT_BOOL Status,
            /* [retval][out] */ long *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnPreviousPage( 
            /* [retval][out] */ VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnNextPage( 
            /* [retval][out] */ VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnPreview( 
            /* [retval][out] */ VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnSubmitSelection( 
            /* [in] */ long Id,
            /* [in] */ LPDISPATCH Selection,
            /* [in] */ long SelType,
            /* [out][in] */ BSTR *ItemText,
            /* [retval][out] */ VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnTabClicked( 
            /* [in] */ long Id,
            /* [retval][out] */ VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnSliderPositionChanged( 
            /* [in] */ long Id,
            /* [in] */ double Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnWhatsNew( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnUndo( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnSliderTrackingCompleted( 
            /* [in] */ long Id,
            /* [in] */ double Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnKeystroke( 
            /* [in] */ long Wparam,
            /* [in] */ long Message,
            /* [in] */ long Lparam,
            /* [in] */ long Id,
            /* [retval][out] */ VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnPopupMenuItem( 
            /* [in] */ long Id) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnPopupMenuItemUpdate( 
            /* [in] */ long Id,
            /* [in] */ long *Retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AfterActivation( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPropertyManagerPage2Handler5Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPropertyManagerPage2Handler5 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPropertyManagerPage2Handler5 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPropertyManagerPage2Handler5 * This);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler5, OnClose)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnClose )( 
            IPropertyManagerPage2Handler5 * This,
            /* [in] */ long Reason);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler5, AfterClose)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AfterClose )( 
            IPropertyManagerPage2Handler5 * This);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler5, OnHelp)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnHelp )( 
            IPropertyManagerPage2Handler5 * This,
            /* [retval][out] */ VARIANT_BOOL *retval);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler5, OnGroupExpand)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnGroupExpand )( 
            IPropertyManagerPage2Handler5 * This,
            /* [in] */ long Id,
            /* [in] */ VARIANT_BOOL Expanded);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler5, OnGroupCheck)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnGroupCheck )( 
            IPropertyManagerPage2Handler5 * This,
            /* [in] */ long Id,
            /* [in] */ VARIANT_BOOL Checked);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler5, OnCheckboxCheck)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnCheckboxCheck )( 
            IPropertyManagerPage2Handler5 * This,
            /* [in] */ long Id,
            /* [in] */ VARIANT_BOOL Checked);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler5, OnOptionCheck)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnOptionCheck )( 
            IPropertyManagerPage2Handler5 * This,
            /* [in] */ long Id);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler5, OnButtonPress)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnButtonPress )( 
            IPropertyManagerPage2Handler5 * This,
            /* [in] */ long Id);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler5, OnTextboxChanged)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnTextboxChanged )( 
            IPropertyManagerPage2Handler5 * This,
            /* [in] */ long Id,
            /* [in] */ BSTR Text);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler5, OnNumberboxChanged)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnNumberboxChanged )( 
            IPropertyManagerPage2Handler5 * This,
            /* [in] */ long Id,
            /* [in] */ double Value);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler5, OnComboboxSelectionChanged)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnComboboxSelectionChanged )( 
            IPropertyManagerPage2Handler5 * This,
            /* [in] */ long Id,
            /* [in] */ long Item);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler5, OnListboxSelectionChanged)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnListboxSelectionChanged )( 
            IPropertyManagerPage2Handler5 * This,
            /* [in] */ long Id,
            /* [in] */ long Item);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler5, OnSelectionboxFocusChanged)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnSelectionboxFocusChanged )( 
            IPropertyManagerPage2Handler5 * This,
            /* [in] */ long Id);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler5, OnSelectionboxListChanged)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnSelectionboxListChanged )( 
            IPropertyManagerPage2Handler5 * This,
            /* [in] */ long Id,
            /* [in] */ long Count);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler5, OnSelectionboxCalloutCreated)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnSelectionboxCalloutCreated )( 
            IPropertyManagerPage2Handler5 * This,
            /* [in] */ long Id);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler5, OnSelectionboxCalloutDestroyed)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnSelectionboxCalloutDestroyed )( 
            IPropertyManagerPage2Handler5 * This,
            /* [in] */ long Id);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler5, OnComboboxEditChanged)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnComboboxEditChanged )( 
            IPropertyManagerPage2Handler5 * This,
            /* [in] */ long Id,
            /* [in] */ BSTR Text);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler5, OnActiveXControlCreated)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnActiveXControlCreated )( 
            IPropertyManagerPage2Handler5 * This,
            /* [in] */ long Id,
            /* [in] */ VARIANT_BOOL Status,
            /* [retval][out] */ long *retval);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler5, OnPreviousPage)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnPreviousPage )( 
            IPropertyManagerPage2Handler5 * This,
            /* [retval][out] */ VARIANT_BOOL *retval);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler5, OnNextPage)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnNextPage )( 
            IPropertyManagerPage2Handler5 * This,
            /* [retval][out] */ VARIANT_BOOL *retval);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler5, OnPreview)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnPreview )( 
            IPropertyManagerPage2Handler5 * This,
            /* [retval][out] */ VARIANT_BOOL *retval);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler5, OnSubmitSelection)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnSubmitSelection )( 
            IPropertyManagerPage2Handler5 * This,
            /* [in] */ long Id,
            /* [in] */ LPDISPATCH Selection,
            /* [in] */ long SelType,
            /* [out][in] */ BSTR *ItemText,
            /* [retval][out] */ VARIANT_BOOL *retval);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler5, OnTabClicked)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnTabClicked )( 
            IPropertyManagerPage2Handler5 * This,
            /* [in] */ long Id,
            /* [retval][out] */ VARIANT_BOOL *retval);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler5, OnSliderPositionChanged)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnSliderPositionChanged )( 
            IPropertyManagerPage2Handler5 * This,
            /* [in] */ long Id,
            /* [in] */ double Value);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler5, OnWhatsNew)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnWhatsNew )( 
            IPropertyManagerPage2Handler5 * This);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler5, OnUndo)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnUndo )( 
            IPropertyManagerPage2Handler5 * This);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler5, OnSliderTrackingCompleted)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnSliderTrackingCompleted )( 
            IPropertyManagerPage2Handler5 * This,
            /* [in] */ long Id,
            /* [in] */ double Value);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler5, OnKeystroke)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnKeystroke )( 
            IPropertyManagerPage2Handler5 * This,
            /* [in] */ long Wparam,
            /* [in] */ long Message,
            /* [in] */ long Lparam,
            /* [in] */ long Id,
            /* [retval][out] */ VARIANT_BOOL *retval);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler5, OnPopupMenuItem)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnPopupMenuItem )( 
            IPropertyManagerPage2Handler5 * This,
            /* [in] */ long Id);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler5, OnPopupMenuItemUpdate)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnPopupMenuItemUpdate )( 
            IPropertyManagerPage2Handler5 * This,
            /* [in] */ long Id,
            /* [in] */ long *Retval);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler5, AfterActivation)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AfterActivation )( 
            IPropertyManagerPage2Handler5 * This);
        
        END_INTERFACE
    } IPropertyManagerPage2Handler5Vtbl;

    interface IPropertyManagerPage2Handler5
    {
        CONST_VTBL struct IPropertyManagerPage2Handler5Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPropertyManagerPage2Handler5_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPropertyManagerPage2Handler5_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPropertyManagerPage2Handler5_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPropertyManagerPage2Handler5_OnClose(This,Reason)	\
    ( (This)->lpVtbl -> OnClose(This,Reason) ) 

#define IPropertyManagerPage2Handler5_AfterClose(This)	\
    ( (This)->lpVtbl -> AfterClose(This) ) 

#define IPropertyManagerPage2Handler5_OnHelp(This,retval)	\
    ( (This)->lpVtbl -> OnHelp(This,retval) ) 

#define IPropertyManagerPage2Handler5_OnGroupExpand(This,Id,Expanded)	\
    ( (This)->lpVtbl -> OnGroupExpand(This,Id,Expanded) ) 

#define IPropertyManagerPage2Handler5_OnGroupCheck(This,Id,Checked)	\
    ( (This)->lpVtbl -> OnGroupCheck(This,Id,Checked) ) 

#define IPropertyManagerPage2Handler5_OnCheckboxCheck(This,Id,Checked)	\
    ( (This)->lpVtbl -> OnCheckboxCheck(This,Id,Checked) ) 

#define IPropertyManagerPage2Handler5_OnOptionCheck(This,Id)	\
    ( (This)->lpVtbl -> OnOptionCheck(This,Id) ) 

#define IPropertyManagerPage2Handler5_OnButtonPress(This,Id)	\
    ( (This)->lpVtbl -> OnButtonPress(This,Id) ) 

#define IPropertyManagerPage2Handler5_OnTextboxChanged(This,Id,Text)	\
    ( (This)->lpVtbl -> OnTextboxChanged(This,Id,Text) ) 

#define IPropertyManagerPage2Handler5_OnNumberboxChanged(This,Id,Value)	\
    ( (This)->lpVtbl -> OnNumberboxChanged(This,Id,Value) ) 

#define IPropertyManagerPage2Handler5_OnComboboxSelectionChanged(This,Id,Item)	\
    ( (This)->lpVtbl -> OnComboboxSelectionChanged(This,Id,Item) ) 

#define IPropertyManagerPage2Handler5_OnListboxSelectionChanged(This,Id,Item)	\
    ( (This)->lpVtbl -> OnListboxSelectionChanged(This,Id,Item) ) 

#define IPropertyManagerPage2Handler5_OnSelectionboxFocusChanged(This,Id)	\
    ( (This)->lpVtbl -> OnSelectionboxFocusChanged(This,Id) ) 

#define IPropertyManagerPage2Handler5_OnSelectionboxListChanged(This,Id,Count)	\
    ( (This)->lpVtbl -> OnSelectionboxListChanged(This,Id,Count) ) 

#define IPropertyManagerPage2Handler5_OnSelectionboxCalloutCreated(This,Id)	\
    ( (This)->lpVtbl -> OnSelectionboxCalloutCreated(This,Id) ) 

#define IPropertyManagerPage2Handler5_OnSelectionboxCalloutDestroyed(This,Id)	\
    ( (This)->lpVtbl -> OnSelectionboxCalloutDestroyed(This,Id) ) 

#define IPropertyManagerPage2Handler5_OnComboboxEditChanged(This,Id,Text)	\
    ( (This)->lpVtbl -> OnComboboxEditChanged(This,Id,Text) ) 

#define IPropertyManagerPage2Handler5_OnActiveXControlCreated(This,Id,Status,retval)	\
    ( (This)->lpVtbl -> OnActiveXControlCreated(This,Id,Status,retval) ) 

#define IPropertyManagerPage2Handler5_OnPreviousPage(This,retval)	\
    ( (This)->lpVtbl -> OnPreviousPage(This,retval) ) 

#define IPropertyManagerPage2Handler5_OnNextPage(This,retval)	\
    ( (This)->lpVtbl -> OnNextPage(This,retval) ) 

#define IPropertyManagerPage2Handler5_OnPreview(This,retval)	\
    ( (This)->lpVtbl -> OnPreview(This,retval) ) 

#define IPropertyManagerPage2Handler5_OnSubmitSelection(This,Id,Selection,SelType,ItemText,retval)	\
    ( (This)->lpVtbl -> OnSubmitSelection(This,Id,Selection,SelType,ItemText,retval) ) 

#define IPropertyManagerPage2Handler5_OnTabClicked(This,Id,retval)	\
    ( (This)->lpVtbl -> OnTabClicked(This,Id,retval) ) 

#define IPropertyManagerPage2Handler5_OnSliderPositionChanged(This,Id,Value)	\
    ( (This)->lpVtbl -> OnSliderPositionChanged(This,Id,Value) ) 

#define IPropertyManagerPage2Handler5_OnWhatsNew(This)	\
    ( (This)->lpVtbl -> OnWhatsNew(This) ) 

#define IPropertyManagerPage2Handler5_OnUndo(This)	\
    ( (This)->lpVtbl -> OnUndo(This) ) 

#define IPropertyManagerPage2Handler5_OnSliderTrackingCompleted(This,Id,Value)	\
    ( (This)->lpVtbl -> OnSliderTrackingCompleted(This,Id,Value) ) 

#define IPropertyManagerPage2Handler5_OnKeystroke(This,Wparam,Message,Lparam,Id,retval)	\
    ( (This)->lpVtbl -> OnKeystroke(This,Wparam,Message,Lparam,Id,retval) ) 

#define IPropertyManagerPage2Handler5_OnPopupMenuItem(This,Id)	\
    ( (This)->lpVtbl -> OnPopupMenuItem(This,Id) ) 

#define IPropertyManagerPage2Handler5_OnPopupMenuItemUpdate(This,Id,Retval)	\
    ( (This)->lpVtbl -> OnPopupMenuItemUpdate(This,Id,Retval) ) 

#define IPropertyManagerPage2Handler5_AfterActivation(This)	\
    ( (This)->lpVtbl -> AfterActivation(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPropertyManagerPage2Handler5_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_PropertyManagerPage2Handler5;

#ifdef __cplusplus

class DECLSPEC_UUID("35DE8357-6B15-4b13-9916-A455DD4A3112")
PropertyManagerPage2Handler5;
#endif

#ifndef __IPropertyManagerPage2Handler6_INTERFACE_DEFINED__
#define __IPropertyManagerPage2Handler6_INTERFACE_DEFINED__

/* interface IPropertyManagerPage2Handler6 */
/* [object][helpstring][unique][hidden][oleautomation][uuid] */ 


EXTERN_C const IID IID_IPropertyManagerPage2Handler6;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2C0D2B66-B379-4bca-B167-FF2222650388")
    IPropertyManagerPage2Handler6 : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AfterActivation( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnClose( 
            /* [in] */ long Reason) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AfterClose( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnHelp( 
            /* [retval][out] */ VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnPreviousPage( 
            /* [retval][out] */ VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnNextPage( 
            /* [retval][out] */ VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnPreview( 
            /* [retval][out] */ VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnWhatsNew( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnUndo( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnRedo( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnTabClicked( 
            /* [in] */ long Id,
            /* [retval][out] */ VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnGroupExpand( 
            /* [in] */ long Id,
            /* [in] */ VARIANT_BOOL Expanded) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnGroupCheck( 
            /* [in] */ long Id,
            /* [in] */ VARIANT_BOOL Checked) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnCheckboxCheck( 
            /* [in] */ long Id,
            /* [in] */ VARIANT_BOOL Checked) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnOptionCheck( 
            /* [in] */ long Id) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnButtonPress( 
            /* [in] */ long Id) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnTextboxChanged( 
            /* [in] */ long Id,
            /* [in] */ BSTR Text) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnNumberboxChanged( 
            /* [in] */ long Id,
            /* [in] */ double Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnComboboxEditChanged( 
            /* [in] */ long Id,
            /* [in] */ BSTR Text) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnComboboxSelectionChanged( 
            /* [in] */ long Id,
            /* [in] */ long Item) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnListboxSelectionChanged( 
            /* [in] */ long Id,
            /* [in] */ long Item) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnSelectionboxFocusChanged( 
            /* [in] */ long Id) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnSelectionboxListChanged( 
            /* [in] */ long Id,
            /* [in] */ long Count) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnSelectionboxCalloutCreated( 
            /* [in] */ long Id) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnSelectionboxCalloutDestroyed( 
            /* [in] */ long Id) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnSubmitSelection( 
            /* [in] */ long Id,
            /* [in] */ LPDISPATCH Selection,
            /* [in] */ long SelType,
            /* [out][in] */ BSTR *ItemText,
            /* [retval][out] */ VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnActiveXControlCreated( 
            /* [in] */ long Id,
            /* [in] */ VARIANT_BOOL Status,
            /* [retval][out] */ long *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnSliderPositionChanged( 
            /* [in] */ long Id,
            /* [in] */ double Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnSliderTrackingCompleted( 
            /* [in] */ long Id,
            /* [in] */ double Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnKeystroke( 
            /* [in] */ long Wparam,
            /* [in] */ long Message,
            /* [in] */ long Lparam,
            /* [in] */ long Id,
            /* [retval][out] */ VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnPopupMenuItem( 
            /* [in] */ long Id) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnPopupMenuItemUpdate( 
            /* [in] */ long Id,
            /* [in] */ long *Retval) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPropertyManagerPage2Handler6Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPropertyManagerPage2Handler6 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPropertyManagerPage2Handler6 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPropertyManagerPage2Handler6 * This);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler6, AfterActivation)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AfterActivation )( 
            IPropertyManagerPage2Handler6 * This);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler6, OnClose)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnClose )( 
            IPropertyManagerPage2Handler6 * This,
            /* [in] */ long Reason);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler6, AfterClose)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AfterClose )( 
            IPropertyManagerPage2Handler6 * This);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler6, OnHelp)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnHelp )( 
            IPropertyManagerPage2Handler6 * This,
            /* [retval][out] */ VARIANT_BOOL *retval);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler6, OnPreviousPage)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnPreviousPage )( 
            IPropertyManagerPage2Handler6 * This,
            /* [retval][out] */ VARIANT_BOOL *retval);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler6, OnNextPage)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnNextPage )( 
            IPropertyManagerPage2Handler6 * This,
            /* [retval][out] */ VARIANT_BOOL *retval);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler6, OnPreview)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnPreview )( 
            IPropertyManagerPage2Handler6 * This,
            /* [retval][out] */ VARIANT_BOOL *retval);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler6, OnWhatsNew)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnWhatsNew )( 
            IPropertyManagerPage2Handler6 * This);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler6, OnUndo)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnUndo )( 
            IPropertyManagerPage2Handler6 * This);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler6, OnRedo)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnRedo )( 
            IPropertyManagerPage2Handler6 * This);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler6, OnTabClicked)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnTabClicked )( 
            IPropertyManagerPage2Handler6 * This,
            /* [in] */ long Id,
            /* [retval][out] */ VARIANT_BOOL *retval);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler6, OnGroupExpand)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnGroupExpand )( 
            IPropertyManagerPage2Handler6 * This,
            /* [in] */ long Id,
            /* [in] */ VARIANT_BOOL Expanded);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler6, OnGroupCheck)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnGroupCheck )( 
            IPropertyManagerPage2Handler6 * This,
            /* [in] */ long Id,
            /* [in] */ VARIANT_BOOL Checked);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler6, OnCheckboxCheck)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnCheckboxCheck )( 
            IPropertyManagerPage2Handler6 * This,
            /* [in] */ long Id,
            /* [in] */ VARIANT_BOOL Checked);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler6, OnOptionCheck)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnOptionCheck )( 
            IPropertyManagerPage2Handler6 * This,
            /* [in] */ long Id);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler6, OnButtonPress)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnButtonPress )( 
            IPropertyManagerPage2Handler6 * This,
            /* [in] */ long Id);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler6, OnTextboxChanged)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnTextboxChanged )( 
            IPropertyManagerPage2Handler6 * This,
            /* [in] */ long Id,
            /* [in] */ BSTR Text);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler6, OnNumberboxChanged)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnNumberboxChanged )( 
            IPropertyManagerPage2Handler6 * This,
            /* [in] */ long Id,
            /* [in] */ double Value);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler6, OnComboboxEditChanged)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnComboboxEditChanged )( 
            IPropertyManagerPage2Handler6 * This,
            /* [in] */ long Id,
            /* [in] */ BSTR Text);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler6, OnComboboxSelectionChanged)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnComboboxSelectionChanged )( 
            IPropertyManagerPage2Handler6 * This,
            /* [in] */ long Id,
            /* [in] */ long Item);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler6, OnListboxSelectionChanged)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnListboxSelectionChanged )( 
            IPropertyManagerPage2Handler6 * This,
            /* [in] */ long Id,
            /* [in] */ long Item);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler6, OnSelectionboxFocusChanged)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnSelectionboxFocusChanged )( 
            IPropertyManagerPage2Handler6 * This,
            /* [in] */ long Id);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler6, OnSelectionboxListChanged)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnSelectionboxListChanged )( 
            IPropertyManagerPage2Handler6 * This,
            /* [in] */ long Id,
            /* [in] */ long Count);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler6, OnSelectionboxCalloutCreated)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnSelectionboxCalloutCreated )( 
            IPropertyManagerPage2Handler6 * This,
            /* [in] */ long Id);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler6, OnSelectionboxCalloutDestroyed)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnSelectionboxCalloutDestroyed )( 
            IPropertyManagerPage2Handler6 * This,
            /* [in] */ long Id);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler6, OnSubmitSelection)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnSubmitSelection )( 
            IPropertyManagerPage2Handler6 * This,
            /* [in] */ long Id,
            /* [in] */ LPDISPATCH Selection,
            /* [in] */ long SelType,
            /* [out][in] */ BSTR *ItemText,
            /* [retval][out] */ VARIANT_BOOL *retval);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler6, OnActiveXControlCreated)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnActiveXControlCreated )( 
            IPropertyManagerPage2Handler6 * This,
            /* [in] */ long Id,
            /* [in] */ VARIANT_BOOL Status,
            /* [retval][out] */ long *retval);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler6, OnSliderPositionChanged)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnSliderPositionChanged )( 
            IPropertyManagerPage2Handler6 * This,
            /* [in] */ long Id,
            /* [in] */ double Value);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler6, OnSliderTrackingCompleted)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnSliderTrackingCompleted )( 
            IPropertyManagerPage2Handler6 * This,
            /* [in] */ long Id,
            /* [in] */ double Value);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler6, OnKeystroke)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnKeystroke )( 
            IPropertyManagerPage2Handler6 * This,
            /* [in] */ long Wparam,
            /* [in] */ long Message,
            /* [in] */ long Lparam,
            /* [in] */ long Id,
            /* [retval][out] */ VARIANT_BOOL *retval);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler6, OnPopupMenuItem)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnPopupMenuItem )( 
            IPropertyManagerPage2Handler6 * This,
            /* [in] */ long Id);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler6, OnPopupMenuItemUpdate)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnPopupMenuItemUpdate )( 
            IPropertyManagerPage2Handler6 * This,
            /* [in] */ long Id,
            /* [in] */ long *Retval);
        
        END_INTERFACE
    } IPropertyManagerPage2Handler6Vtbl;

    interface IPropertyManagerPage2Handler6
    {
        CONST_VTBL struct IPropertyManagerPage2Handler6Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPropertyManagerPage2Handler6_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPropertyManagerPage2Handler6_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPropertyManagerPage2Handler6_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPropertyManagerPage2Handler6_AfterActivation(This)	\
    ( (This)->lpVtbl -> AfterActivation(This) ) 

#define IPropertyManagerPage2Handler6_OnClose(This,Reason)	\
    ( (This)->lpVtbl -> OnClose(This,Reason) ) 

#define IPropertyManagerPage2Handler6_AfterClose(This)	\
    ( (This)->lpVtbl -> AfterClose(This) ) 

#define IPropertyManagerPage2Handler6_OnHelp(This,retval)	\
    ( (This)->lpVtbl -> OnHelp(This,retval) ) 

#define IPropertyManagerPage2Handler6_OnPreviousPage(This,retval)	\
    ( (This)->lpVtbl -> OnPreviousPage(This,retval) ) 

#define IPropertyManagerPage2Handler6_OnNextPage(This,retval)	\
    ( (This)->lpVtbl -> OnNextPage(This,retval) ) 

#define IPropertyManagerPage2Handler6_OnPreview(This,retval)	\
    ( (This)->lpVtbl -> OnPreview(This,retval) ) 

#define IPropertyManagerPage2Handler6_OnWhatsNew(This)	\
    ( (This)->lpVtbl -> OnWhatsNew(This) ) 

#define IPropertyManagerPage2Handler6_OnUndo(This)	\
    ( (This)->lpVtbl -> OnUndo(This) ) 

#define IPropertyManagerPage2Handler6_OnRedo(This)	\
    ( (This)->lpVtbl -> OnRedo(This) ) 

#define IPropertyManagerPage2Handler6_OnTabClicked(This,Id,retval)	\
    ( (This)->lpVtbl -> OnTabClicked(This,Id,retval) ) 

#define IPropertyManagerPage2Handler6_OnGroupExpand(This,Id,Expanded)	\
    ( (This)->lpVtbl -> OnGroupExpand(This,Id,Expanded) ) 

#define IPropertyManagerPage2Handler6_OnGroupCheck(This,Id,Checked)	\
    ( (This)->lpVtbl -> OnGroupCheck(This,Id,Checked) ) 

#define IPropertyManagerPage2Handler6_OnCheckboxCheck(This,Id,Checked)	\
    ( (This)->lpVtbl -> OnCheckboxCheck(This,Id,Checked) ) 

#define IPropertyManagerPage2Handler6_OnOptionCheck(This,Id)	\
    ( (This)->lpVtbl -> OnOptionCheck(This,Id) ) 

#define IPropertyManagerPage2Handler6_OnButtonPress(This,Id)	\
    ( (This)->lpVtbl -> OnButtonPress(This,Id) ) 

#define IPropertyManagerPage2Handler6_OnTextboxChanged(This,Id,Text)	\
    ( (This)->lpVtbl -> OnTextboxChanged(This,Id,Text) ) 

#define IPropertyManagerPage2Handler6_OnNumberboxChanged(This,Id,Value)	\
    ( (This)->lpVtbl -> OnNumberboxChanged(This,Id,Value) ) 

#define IPropertyManagerPage2Handler6_OnComboboxEditChanged(This,Id,Text)	\
    ( (This)->lpVtbl -> OnComboboxEditChanged(This,Id,Text) ) 

#define IPropertyManagerPage2Handler6_OnComboboxSelectionChanged(This,Id,Item)	\
    ( (This)->lpVtbl -> OnComboboxSelectionChanged(This,Id,Item) ) 

#define IPropertyManagerPage2Handler6_OnListboxSelectionChanged(This,Id,Item)	\
    ( (This)->lpVtbl -> OnListboxSelectionChanged(This,Id,Item) ) 

#define IPropertyManagerPage2Handler6_OnSelectionboxFocusChanged(This,Id)	\
    ( (This)->lpVtbl -> OnSelectionboxFocusChanged(This,Id) ) 

#define IPropertyManagerPage2Handler6_OnSelectionboxListChanged(This,Id,Count)	\
    ( (This)->lpVtbl -> OnSelectionboxListChanged(This,Id,Count) ) 

#define IPropertyManagerPage2Handler6_OnSelectionboxCalloutCreated(This,Id)	\
    ( (This)->lpVtbl -> OnSelectionboxCalloutCreated(This,Id) ) 

#define IPropertyManagerPage2Handler6_OnSelectionboxCalloutDestroyed(This,Id)	\
    ( (This)->lpVtbl -> OnSelectionboxCalloutDestroyed(This,Id) ) 

#define IPropertyManagerPage2Handler6_OnSubmitSelection(This,Id,Selection,SelType,ItemText,retval)	\
    ( (This)->lpVtbl -> OnSubmitSelection(This,Id,Selection,SelType,ItemText,retval) ) 

#define IPropertyManagerPage2Handler6_OnActiveXControlCreated(This,Id,Status,retval)	\
    ( (This)->lpVtbl -> OnActiveXControlCreated(This,Id,Status,retval) ) 

#define IPropertyManagerPage2Handler6_OnSliderPositionChanged(This,Id,Value)	\
    ( (This)->lpVtbl -> OnSliderPositionChanged(This,Id,Value) ) 

#define IPropertyManagerPage2Handler6_OnSliderTrackingCompleted(This,Id,Value)	\
    ( (This)->lpVtbl -> OnSliderTrackingCompleted(This,Id,Value) ) 

#define IPropertyManagerPage2Handler6_OnKeystroke(This,Wparam,Message,Lparam,Id,retval)	\
    ( (This)->lpVtbl -> OnKeystroke(This,Wparam,Message,Lparam,Id,retval) ) 

#define IPropertyManagerPage2Handler6_OnPopupMenuItem(This,Id)	\
    ( (This)->lpVtbl -> OnPopupMenuItem(This,Id) ) 

#define IPropertyManagerPage2Handler6_OnPopupMenuItemUpdate(This,Id,Retval)	\
    ( (This)->lpVtbl -> OnPopupMenuItemUpdate(This,Id,Retval) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPropertyManagerPage2Handler6_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_PropertyManagerPage2Handler6;

#ifdef __cplusplus

class DECLSPEC_UUID("FAC3F7AE-D1D7-452e-82CB-0FD7A725ED42")
PropertyManagerPage2Handler6;
#endif

#ifndef __IPropertyManagerPage2Handler7_INTERFACE_DEFINED__
#define __IPropertyManagerPage2Handler7_INTERFACE_DEFINED__

/* interface IPropertyManagerPage2Handler7 */
/* [object][helpstring][unique][hidden][oleautomation][uuid] */ 


EXTERN_C const IID IID_IPropertyManagerPage2Handler7;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("57FCAD1A-C71D-4b99-9973-FEA09D55E9BB")
    IPropertyManagerPage2Handler7 : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AfterActivation( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnClose( 
            /* [in] */ long Reason) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AfterClose( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnHelp( 
            /* [retval][out] */ VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnPreviousPage( 
            /* [retval][out] */ VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnNextPage( 
            /* [retval][out] */ VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnPreview( 
            /* [retval][out] */ VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnWhatsNew( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnUndo( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnRedo( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnTabClicked( 
            /* [in] */ long Id,
            /* [retval][out] */ VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnGroupExpand( 
            /* [in] */ long Id,
            /* [in] */ VARIANT_BOOL Expanded) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnGroupCheck( 
            /* [in] */ long Id,
            /* [in] */ VARIANT_BOOL Checked) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnCheckboxCheck( 
            /* [in] */ long Id,
            /* [in] */ VARIANT_BOOL Checked) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnOptionCheck( 
            /* [in] */ long Id) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnButtonPress( 
            /* [in] */ long Id) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnTextboxChanged( 
            /* [in] */ long Id,
            /* [in] */ BSTR Text) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnNumberboxChanged( 
            /* [in] */ long Id,
            /* [in] */ double Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnComboboxEditChanged( 
            /* [in] */ long Id,
            /* [in] */ BSTR Text) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnComboboxSelectionChanged( 
            /* [in] */ long Id,
            /* [in] */ long Item) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnListboxSelectionChanged( 
            /* [in] */ long Id,
            /* [in] */ long Item) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnSelectionboxFocusChanged( 
            /* [in] */ long Id) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnSelectionboxListChanged( 
            /* [in] */ long Id,
            /* [in] */ long Count) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnSelectionboxCalloutCreated( 
            /* [in] */ long Id) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnSelectionboxCalloutDestroyed( 
            /* [in] */ long Id) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnSubmitSelection( 
            /* [in] */ long Id,
            /* [in] */ LPDISPATCH Selection,
            /* [in] */ long SelType,
            /* [out][in] */ BSTR *ItemText,
            /* [retval][out] */ VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnActiveXControlCreated( 
            /* [in] */ long Id,
            /* [in] */ VARIANT_BOOL Status,
            /* [retval][out] */ long *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnSliderPositionChanged( 
            /* [in] */ long Id,
            /* [in] */ double Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnSliderTrackingCompleted( 
            /* [in] */ long Id,
            /* [in] */ double Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnKeystroke( 
            /* [in] */ long Wparam,
            /* [in] */ long Message,
            /* [in] */ long Lparam,
            /* [in] */ long Id,
            /* [retval][out] */ VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnPopupMenuItem( 
            /* [in] */ long Id) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnPopupMenuItemUpdate( 
            /* [in] */ long Id,
            /* [in] */ long *Retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnGainedFocus( 
            /* [in] */ long Id) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnLostFocus( 
            /* [in] */ long Id) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPropertyManagerPage2Handler7Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPropertyManagerPage2Handler7 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPropertyManagerPage2Handler7 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPropertyManagerPage2Handler7 * This);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler7, AfterActivation)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AfterActivation )( 
            IPropertyManagerPage2Handler7 * This);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler7, OnClose)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnClose )( 
            IPropertyManagerPage2Handler7 * This,
            /* [in] */ long Reason);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler7, AfterClose)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AfterClose )( 
            IPropertyManagerPage2Handler7 * This);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler7, OnHelp)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnHelp )( 
            IPropertyManagerPage2Handler7 * This,
            /* [retval][out] */ VARIANT_BOOL *retval);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler7, OnPreviousPage)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnPreviousPage )( 
            IPropertyManagerPage2Handler7 * This,
            /* [retval][out] */ VARIANT_BOOL *retval);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler7, OnNextPage)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnNextPage )( 
            IPropertyManagerPage2Handler7 * This,
            /* [retval][out] */ VARIANT_BOOL *retval);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler7, OnPreview)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnPreview )( 
            IPropertyManagerPage2Handler7 * This,
            /* [retval][out] */ VARIANT_BOOL *retval);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler7, OnWhatsNew)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnWhatsNew )( 
            IPropertyManagerPage2Handler7 * This);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler7, OnUndo)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnUndo )( 
            IPropertyManagerPage2Handler7 * This);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler7, OnRedo)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnRedo )( 
            IPropertyManagerPage2Handler7 * This);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler7, OnTabClicked)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnTabClicked )( 
            IPropertyManagerPage2Handler7 * This,
            /* [in] */ long Id,
            /* [retval][out] */ VARIANT_BOOL *retval);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler7, OnGroupExpand)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnGroupExpand )( 
            IPropertyManagerPage2Handler7 * This,
            /* [in] */ long Id,
            /* [in] */ VARIANT_BOOL Expanded);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler7, OnGroupCheck)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnGroupCheck )( 
            IPropertyManagerPage2Handler7 * This,
            /* [in] */ long Id,
            /* [in] */ VARIANT_BOOL Checked);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler7, OnCheckboxCheck)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnCheckboxCheck )( 
            IPropertyManagerPage2Handler7 * This,
            /* [in] */ long Id,
            /* [in] */ VARIANT_BOOL Checked);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler7, OnOptionCheck)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnOptionCheck )( 
            IPropertyManagerPage2Handler7 * This,
            /* [in] */ long Id);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler7, OnButtonPress)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnButtonPress )( 
            IPropertyManagerPage2Handler7 * This,
            /* [in] */ long Id);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler7, OnTextboxChanged)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnTextboxChanged )( 
            IPropertyManagerPage2Handler7 * This,
            /* [in] */ long Id,
            /* [in] */ BSTR Text);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler7, OnNumberboxChanged)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnNumberboxChanged )( 
            IPropertyManagerPage2Handler7 * This,
            /* [in] */ long Id,
            /* [in] */ double Value);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler7, OnComboboxEditChanged)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnComboboxEditChanged )( 
            IPropertyManagerPage2Handler7 * This,
            /* [in] */ long Id,
            /* [in] */ BSTR Text);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler7, OnComboboxSelectionChanged)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnComboboxSelectionChanged )( 
            IPropertyManagerPage2Handler7 * This,
            /* [in] */ long Id,
            /* [in] */ long Item);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler7, OnListboxSelectionChanged)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnListboxSelectionChanged )( 
            IPropertyManagerPage2Handler7 * This,
            /* [in] */ long Id,
            /* [in] */ long Item);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler7, OnSelectionboxFocusChanged)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnSelectionboxFocusChanged )( 
            IPropertyManagerPage2Handler7 * This,
            /* [in] */ long Id);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler7, OnSelectionboxListChanged)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnSelectionboxListChanged )( 
            IPropertyManagerPage2Handler7 * This,
            /* [in] */ long Id,
            /* [in] */ long Count);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler7, OnSelectionboxCalloutCreated)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnSelectionboxCalloutCreated )( 
            IPropertyManagerPage2Handler7 * This,
            /* [in] */ long Id);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler7, OnSelectionboxCalloutDestroyed)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnSelectionboxCalloutDestroyed )( 
            IPropertyManagerPage2Handler7 * This,
            /* [in] */ long Id);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler7, OnSubmitSelection)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnSubmitSelection )( 
            IPropertyManagerPage2Handler7 * This,
            /* [in] */ long Id,
            /* [in] */ LPDISPATCH Selection,
            /* [in] */ long SelType,
            /* [out][in] */ BSTR *ItemText,
            /* [retval][out] */ VARIANT_BOOL *retval);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler7, OnActiveXControlCreated)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnActiveXControlCreated )( 
            IPropertyManagerPage2Handler7 * This,
            /* [in] */ long Id,
            /* [in] */ VARIANT_BOOL Status,
            /* [retval][out] */ long *retval);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler7, OnSliderPositionChanged)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnSliderPositionChanged )( 
            IPropertyManagerPage2Handler7 * This,
            /* [in] */ long Id,
            /* [in] */ double Value);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler7, OnSliderTrackingCompleted)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnSliderTrackingCompleted )( 
            IPropertyManagerPage2Handler7 * This,
            /* [in] */ long Id,
            /* [in] */ double Value);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler7, OnKeystroke)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnKeystroke )( 
            IPropertyManagerPage2Handler7 * This,
            /* [in] */ long Wparam,
            /* [in] */ long Message,
            /* [in] */ long Lparam,
            /* [in] */ long Id,
            /* [retval][out] */ VARIANT_BOOL *retval);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler7, OnPopupMenuItem)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnPopupMenuItem )( 
            IPropertyManagerPage2Handler7 * This,
            /* [in] */ long Id);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler7, OnPopupMenuItemUpdate)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnPopupMenuItemUpdate )( 
            IPropertyManagerPage2Handler7 * This,
            /* [in] */ long Id,
            /* [in] */ long *Retval);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler7, OnGainedFocus)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnGainedFocus )( 
            IPropertyManagerPage2Handler7 * This,
            /* [in] */ long Id);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler7, OnLostFocus)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnLostFocus )( 
            IPropertyManagerPage2Handler7 * This,
            /* [in] */ long Id);
        
        END_INTERFACE
    } IPropertyManagerPage2Handler7Vtbl;

    interface IPropertyManagerPage2Handler7
    {
        CONST_VTBL struct IPropertyManagerPage2Handler7Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPropertyManagerPage2Handler7_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPropertyManagerPage2Handler7_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPropertyManagerPage2Handler7_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPropertyManagerPage2Handler7_AfterActivation(This)	\
    ( (This)->lpVtbl -> AfterActivation(This) ) 

#define IPropertyManagerPage2Handler7_OnClose(This,Reason)	\
    ( (This)->lpVtbl -> OnClose(This,Reason) ) 

#define IPropertyManagerPage2Handler7_AfterClose(This)	\
    ( (This)->lpVtbl -> AfterClose(This) ) 

#define IPropertyManagerPage2Handler7_OnHelp(This,retval)	\
    ( (This)->lpVtbl -> OnHelp(This,retval) ) 

#define IPropertyManagerPage2Handler7_OnPreviousPage(This,retval)	\
    ( (This)->lpVtbl -> OnPreviousPage(This,retval) ) 

#define IPropertyManagerPage2Handler7_OnNextPage(This,retval)	\
    ( (This)->lpVtbl -> OnNextPage(This,retval) ) 

#define IPropertyManagerPage2Handler7_OnPreview(This,retval)	\
    ( (This)->lpVtbl -> OnPreview(This,retval) ) 

#define IPropertyManagerPage2Handler7_OnWhatsNew(This)	\
    ( (This)->lpVtbl -> OnWhatsNew(This) ) 

#define IPropertyManagerPage2Handler7_OnUndo(This)	\
    ( (This)->lpVtbl -> OnUndo(This) ) 

#define IPropertyManagerPage2Handler7_OnRedo(This)	\
    ( (This)->lpVtbl -> OnRedo(This) ) 

#define IPropertyManagerPage2Handler7_OnTabClicked(This,Id,retval)	\
    ( (This)->lpVtbl -> OnTabClicked(This,Id,retval) ) 

#define IPropertyManagerPage2Handler7_OnGroupExpand(This,Id,Expanded)	\
    ( (This)->lpVtbl -> OnGroupExpand(This,Id,Expanded) ) 

#define IPropertyManagerPage2Handler7_OnGroupCheck(This,Id,Checked)	\
    ( (This)->lpVtbl -> OnGroupCheck(This,Id,Checked) ) 

#define IPropertyManagerPage2Handler7_OnCheckboxCheck(This,Id,Checked)	\
    ( (This)->lpVtbl -> OnCheckboxCheck(This,Id,Checked) ) 

#define IPropertyManagerPage2Handler7_OnOptionCheck(This,Id)	\
    ( (This)->lpVtbl -> OnOptionCheck(This,Id) ) 

#define IPropertyManagerPage2Handler7_OnButtonPress(This,Id)	\
    ( (This)->lpVtbl -> OnButtonPress(This,Id) ) 

#define IPropertyManagerPage2Handler7_OnTextboxChanged(This,Id,Text)	\
    ( (This)->lpVtbl -> OnTextboxChanged(This,Id,Text) ) 

#define IPropertyManagerPage2Handler7_OnNumberboxChanged(This,Id,Value)	\
    ( (This)->lpVtbl -> OnNumberboxChanged(This,Id,Value) ) 

#define IPropertyManagerPage2Handler7_OnComboboxEditChanged(This,Id,Text)	\
    ( (This)->lpVtbl -> OnComboboxEditChanged(This,Id,Text) ) 

#define IPropertyManagerPage2Handler7_OnComboboxSelectionChanged(This,Id,Item)	\
    ( (This)->lpVtbl -> OnComboboxSelectionChanged(This,Id,Item) ) 

#define IPropertyManagerPage2Handler7_OnListboxSelectionChanged(This,Id,Item)	\
    ( (This)->lpVtbl -> OnListboxSelectionChanged(This,Id,Item) ) 

#define IPropertyManagerPage2Handler7_OnSelectionboxFocusChanged(This,Id)	\
    ( (This)->lpVtbl -> OnSelectionboxFocusChanged(This,Id) ) 

#define IPropertyManagerPage2Handler7_OnSelectionboxListChanged(This,Id,Count)	\
    ( (This)->lpVtbl -> OnSelectionboxListChanged(This,Id,Count) ) 

#define IPropertyManagerPage2Handler7_OnSelectionboxCalloutCreated(This,Id)	\
    ( (This)->lpVtbl -> OnSelectionboxCalloutCreated(This,Id) ) 

#define IPropertyManagerPage2Handler7_OnSelectionboxCalloutDestroyed(This,Id)	\
    ( (This)->lpVtbl -> OnSelectionboxCalloutDestroyed(This,Id) ) 

#define IPropertyManagerPage2Handler7_OnSubmitSelection(This,Id,Selection,SelType,ItemText,retval)	\
    ( (This)->lpVtbl -> OnSubmitSelection(This,Id,Selection,SelType,ItemText,retval) ) 

#define IPropertyManagerPage2Handler7_OnActiveXControlCreated(This,Id,Status,retval)	\
    ( (This)->lpVtbl -> OnActiveXControlCreated(This,Id,Status,retval) ) 

#define IPropertyManagerPage2Handler7_OnSliderPositionChanged(This,Id,Value)	\
    ( (This)->lpVtbl -> OnSliderPositionChanged(This,Id,Value) ) 

#define IPropertyManagerPage2Handler7_OnSliderTrackingCompleted(This,Id,Value)	\
    ( (This)->lpVtbl -> OnSliderTrackingCompleted(This,Id,Value) ) 

#define IPropertyManagerPage2Handler7_OnKeystroke(This,Wparam,Message,Lparam,Id,retval)	\
    ( (This)->lpVtbl -> OnKeystroke(This,Wparam,Message,Lparam,Id,retval) ) 

#define IPropertyManagerPage2Handler7_OnPopupMenuItem(This,Id)	\
    ( (This)->lpVtbl -> OnPopupMenuItem(This,Id) ) 

#define IPropertyManagerPage2Handler7_OnPopupMenuItemUpdate(This,Id,Retval)	\
    ( (This)->lpVtbl -> OnPopupMenuItemUpdate(This,Id,Retval) ) 

#define IPropertyManagerPage2Handler7_OnGainedFocus(This,Id)	\
    ( (This)->lpVtbl -> OnGainedFocus(This,Id) ) 

#define IPropertyManagerPage2Handler7_OnLostFocus(This,Id)	\
    ( (This)->lpVtbl -> OnLostFocus(This,Id) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPropertyManagerPage2Handler7_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_PropertyManagerPage2Handler7;

#ifdef __cplusplus

class DECLSPEC_UUID("6DD349B1-7B16-46fd-8EEE-79D8E9C08075")
PropertyManagerPage2Handler7;
#endif

#ifndef __IPropertyManagerPage2Handler8_INTERFACE_DEFINED__
#define __IPropertyManagerPage2Handler8_INTERFACE_DEFINED__

/* interface IPropertyManagerPage2Handler8 */
/* [object][helpstring][unique][hidden][oleautomation][uuid] */ 


EXTERN_C const IID IID_IPropertyManagerPage2Handler8;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0F7C6D9D-0B18-4bb9-92D4-A3BB9C735F73")
    IPropertyManagerPage2Handler8 : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AfterActivation( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnClose( 
            /* [in] */ long Reason) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AfterClose( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnHelp( 
            /* [retval][out] */ VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnPreviousPage( 
            /* [retval][out] */ VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnNextPage( 
            /* [retval][out] */ VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnPreview( 
            /* [retval][out] */ VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnWhatsNew( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnUndo( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnRedo( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnTabClicked( 
            /* [in] */ long Id,
            /* [retval][out] */ VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnGroupExpand( 
            /* [in] */ long Id,
            /* [in] */ VARIANT_BOOL Expanded) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnGroupCheck( 
            /* [in] */ long Id,
            /* [in] */ VARIANT_BOOL Checked) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnCheckboxCheck( 
            /* [in] */ long Id,
            /* [in] */ VARIANT_BOOL Checked) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnOptionCheck( 
            /* [in] */ long Id) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnButtonPress( 
            /* [in] */ long Id) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnTextboxChanged( 
            /* [in] */ long Id,
            /* [in] */ BSTR Text) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnNumberboxChanged( 
            /* [in] */ long Id,
            /* [in] */ double Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnComboboxEditChanged( 
            /* [in] */ long Id,
            /* [in] */ BSTR Text) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnComboboxSelectionChanged( 
            /* [in] */ long Id,
            /* [in] */ long Item) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnListboxSelectionChanged( 
            /* [in] */ long Id,
            /* [in] */ long Item) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnSelectionboxFocusChanged( 
            /* [in] */ long Id) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnSelectionboxListChanged( 
            /* [in] */ long Id,
            /* [in] */ long Count) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnSelectionboxCalloutCreated( 
            /* [in] */ long Id) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnSelectionboxCalloutDestroyed( 
            /* [in] */ long Id) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnSubmitSelection( 
            /* [in] */ long Id,
            /* [in] */ LPDISPATCH Selection,
            /* [in] */ long SelType,
            /* [out][in] */ BSTR *ItemText,
            /* [retval][out] */ VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnActiveXControlCreated( 
            /* [in] */ long Id,
            /* [in] */ VARIANT_BOOL Status,
            /* [retval][out] */ long *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnSliderPositionChanged( 
            /* [in] */ long Id,
            /* [in] */ double Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnSliderTrackingCompleted( 
            /* [in] */ long Id,
            /* [in] */ double Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnKeystroke( 
            /* [in] */ long Wparam,
            /* [in] */ long Message,
            /* [in] */ long Lparam,
            /* [in] */ long Id,
            /* [retval][out] */ VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnPopupMenuItem( 
            /* [in] */ long Id) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnPopupMenuItemUpdate( 
            /* [in] */ long Id,
            /* [in] */ long *Retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnGainedFocus( 
            /* [in] */ long Id) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnLostFocus( 
            /* [in] */ long Id) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnWindowFromHandleControlCreated( 
            /* [in] */ long Id,
            /* [in] */ VARIANT_BOOL Status,
            /* [retval][out] */ long *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnListboxRMBUp( 
            /* [in] */ long Id,
            /* [in] */ long PosX,
            /* [in] */ long PosY) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPropertyManagerPage2Handler8Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPropertyManagerPage2Handler8 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPropertyManagerPage2Handler8 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPropertyManagerPage2Handler8 * This);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler8, AfterActivation)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AfterActivation )( 
            IPropertyManagerPage2Handler8 * This);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler8, OnClose)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnClose )( 
            IPropertyManagerPage2Handler8 * This,
            /* [in] */ long Reason);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler8, AfterClose)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AfterClose )( 
            IPropertyManagerPage2Handler8 * This);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler8, OnHelp)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnHelp )( 
            IPropertyManagerPage2Handler8 * This,
            /* [retval][out] */ VARIANT_BOOL *retval);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler8, OnPreviousPage)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnPreviousPage )( 
            IPropertyManagerPage2Handler8 * This,
            /* [retval][out] */ VARIANT_BOOL *retval);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler8, OnNextPage)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnNextPage )( 
            IPropertyManagerPage2Handler8 * This,
            /* [retval][out] */ VARIANT_BOOL *retval);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler8, OnPreview)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnPreview )( 
            IPropertyManagerPage2Handler8 * This,
            /* [retval][out] */ VARIANT_BOOL *retval);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler8, OnWhatsNew)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnWhatsNew )( 
            IPropertyManagerPage2Handler8 * This);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler8, OnUndo)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnUndo )( 
            IPropertyManagerPage2Handler8 * This);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler8, OnRedo)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnRedo )( 
            IPropertyManagerPage2Handler8 * This);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler8, OnTabClicked)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnTabClicked )( 
            IPropertyManagerPage2Handler8 * This,
            /* [in] */ long Id,
            /* [retval][out] */ VARIANT_BOOL *retval);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler8, OnGroupExpand)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnGroupExpand )( 
            IPropertyManagerPage2Handler8 * This,
            /* [in] */ long Id,
            /* [in] */ VARIANT_BOOL Expanded);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler8, OnGroupCheck)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnGroupCheck )( 
            IPropertyManagerPage2Handler8 * This,
            /* [in] */ long Id,
            /* [in] */ VARIANT_BOOL Checked);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler8, OnCheckboxCheck)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnCheckboxCheck )( 
            IPropertyManagerPage2Handler8 * This,
            /* [in] */ long Id,
            /* [in] */ VARIANT_BOOL Checked);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler8, OnOptionCheck)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnOptionCheck )( 
            IPropertyManagerPage2Handler8 * This,
            /* [in] */ long Id);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler8, OnButtonPress)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnButtonPress )( 
            IPropertyManagerPage2Handler8 * This,
            /* [in] */ long Id);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler8, OnTextboxChanged)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnTextboxChanged )( 
            IPropertyManagerPage2Handler8 * This,
            /* [in] */ long Id,
            /* [in] */ BSTR Text);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler8, OnNumberboxChanged)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnNumberboxChanged )( 
            IPropertyManagerPage2Handler8 * This,
            /* [in] */ long Id,
            /* [in] */ double Value);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler8, OnComboboxEditChanged)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnComboboxEditChanged )( 
            IPropertyManagerPage2Handler8 * This,
            /* [in] */ long Id,
            /* [in] */ BSTR Text);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler8, OnComboboxSelectionChanged)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnComboboxSelectionChanged )( 
            IPropertyManagerPage2Handler8 * This,
            /* [in] */ long Id,
            /* [in] */ long Item);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler8, OnListboxSelectionChanged)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnListboxSelectionChanged )( 
            IPropertyManagerPage2Handler8 * This,
            /* [in] */ long Id,
            /* [in] */ long Item);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler8, OnSelectionboxFocusChanged)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnSelectionboxFocusChanged )( 
            IPropertyManagerPage2Handler8 * This,
            /* [in] */ long Id);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler8, OnSelectionboxListChanged)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnSelectionboxListChanged )( 
            IPropertyManagerPage2Handler8 * This,
            /* [in] */ long Id,
            /* [in] */ long Count);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler8, OnSelectionboxCalloutCreated)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnSelectionboxCalloutCreated )( 
            IPropertyManagerPage2Handler8 * This,
            /* [in] */ long Id);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler8, OnSelectionboxCalloutDestroyed)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnSelectionboxCalloutDestroyed )( 
            IPropertyManagerPage2Handler8 * This,
            /* [in] */ long Id);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler8, OnSubmitSelection)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnSubmitSelection )( 
            IPropertyManagerPage2Handler8 * This,
            /* [in] */ long Id,
            /* [in] */ LPDISPATCH Selection,
            /* [in] */ long SelType,
            /* [out][in] */ BSTR *ItemText,
            /* [retval][out] */ VARIANT_BOOL *retval);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler8, OnActiveXControlCreated)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnActiveXControlCreated )( 
            IPropertyManagerPage2Handler8 * This,
            /* [in] */ long Id,
            /* [in] */ VARIANT_BOOL Status,
            /* [retval][out] */ long *retval);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler8, OnSliderPositionChanged)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnSliderPositionChanged )( 
            IPropertyManagerPage2Handler8 * This,
            /* [in] */ long Id,
            /* [in] */ double Value);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler8, OnSliderTrackingCompleted)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnSliderTrackingCompleted )( 
            IPropertyManagerPage2Handler8 * This,
            /* [in] */ long Id,
            /* [in] */ double Value);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler8, OnKeystroke)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnKeystroke )( 
            IPropertyManagerPage2Handler8 * This,
            /* [in] */ long Wparam,
            /* [in] */ long Message,
            /* [in] */ long Lparam,
            /* [in] */ long Id,
            /* [retval][out] */ VARIANT_BOOL *retval);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler8, OnPopupMenuItem)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnPopupMenuItem )( 
            IPropertyManagerPage2Handler8 * This,
            /* [in] */ long Id);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler8, OnPopupMenuItemUpdate)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnPopupMenuItemUpdate )( 
            IPropertyManagerPage2Handler8 * This,
            /* [in] */ long Id,
            /* [in] */ long *Retval);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler8, OnGainedFocus)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnGainedFocus )( 
            IPropertyManagerPage2Handler8 * This,
            /* [in] */ long Id);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler8, OnLostFocus)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnLostFocus )( 
            IPropertyManagerPage2Handler8 * This,
            /* [in] */ long Id);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler8, OnWindowFromHandleControlCreated)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnWindowFromHandleControlCreated )( 
            IPropertyManagerPage2Handler8 * This,
            /* [in] */ long Id,
            /* [in] */ VARIANT_BOOL Status,
            /* [retval][out] */ long *retval);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler8, OnListboxRMBUp)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnListboxRMBUp )( 
            IPropertyManagerPage2Handler8 * This,
            /* [in] */ long Id,
            /* [in] */ long PosX,
            /* [in] */ long PosY);
        
        END_INTERFACE
    } IPropertyManagerPage2Handler8Vtbl;

    interface IPropertyManagerPage2Handler8
    {
        CONST_VTBL struct IPropertyManagerPage2Handler8Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPropertyManagerPage2Handler8_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPropertyManagerPage2Handler8_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPropertyManagerPage2Handler8_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPropertyManagerPage2Handler8_AfterActivation(This)	\
    ( (This)->lpVtbl -> AfterActivation(This) ) 

#define IPropertyManagerPage2Handler8_OnClose(This,Reason)	\
    ( (This)->lpVtbl -> OnClose(This,Reason) ) 

#define IPropertyManagerPage2Handler8_AfterClose(This)	\
    ( (This)->lpVtbl -> AfterClose(This) ) 

#define IPropertyManagerPage2Handler8_OnHelp(This,retval)	\
    ( (This)->lpVtbl -> OnHelp(This,retval) ) 

#define IPropertyManagerPage2Handler8_OnPreviousPage(This,retval)	\
    ( (This)->lpVtbl -> OnPreviousPage(This,retval) ) 

#define IPropertyManagerPage2Handler8_OnNextPage(This,retval)	\
    ( (This)->lpVtbl -> OnNextPage(This,retval) ) 

#define IPropertyManagerPage2Handler8_OnPreview(This,retval)	\
    ( (This)->lpVtbl -> OnPreview(This,retval) ) 

#define IPropertyManagerPage2Handler8_OnWhatsNew(This)	\
    ( (This)->lpVtbl -> OnWhatsNew(This) ) 

#define IPropertyManagerPage2Handler8_OnUndo(This)	\
    ( (This)->lpVtbl -> OnUndo(This) ) 

#define IPropertyManagerPage2Handler8_OnRedo(This)	\
    ( (This)->lpVtbl -> OnRedo(This) ) 

#define IPropertyManagerPage2Handler8_OnTabClicked(This,Id,retval)	\
    ( (This)->lpVtbl -> OnTabClicked(This,Id,retval) ) 

#define IPropertyManagerPage2Handler8_OnGroupExpand(This,Id,Expanded)	\
    ( (This)->lpVtbl -> OnGroupExpand(This,Id,Expanded) ) 

#define IPropertyManagerPage2Handler8_OnGroupCheck(This,Id,Checked)	\
    ( (This)->lpVtbl -> OnGroupCheck(This,Id,Checked) ) 

#define IPropertyManagerPage2Handler8_OnCheckboxCheck(This,Id,Checked)	\
    ( (This)->lpVtbl -> OnCheckboxCheck(This,Id,Checked) ) 

#define IPropertyManagerPage2Handler8_OnOptionCheck(This,Id)	\
    ( (This)->lpVtbl -> OnOptionCheck(This,Id) ) 

#define IPropertyManagerPage2Handler8_OnButtonPress(This,Id)	\
    ( (This)->lpVtbl -> OnButtonPress(This,Id) ) 

#define IPropertyManagerPage2Handler8_OnTextboxChanged(This,Id,Text)	\
    ( (This)->lpVtbl -> OnTextboxChanged(This,Id,Text) ) 

#define IPropertyManagerPage2Handler8_OnNumberboxChanged(This,Id,Value)	\
    ( (This)->lpVtbl -> OnNumberboxChanged(This,Id,Value) ) 

#define IPropertyManagerPage2Handler8_OnComboboxEditChanged(This,Id,Text)	\
    ( (This)->lpVtbl -> OnComboboxEditChanged(This,Id,Text) ) 

#define IPropertyManagerPage2Handler8_OnComboboxSelectionChanged(This,Id,Item)	\
    ( (This)->lpVtbl -> OnComboboxSelectionChanged(This,Id,Item) ) 

#define IPropertyManagerPage2Handler8_OnListboxSelectionChanged(This,Id,Item)	\
    ( (This)->lpVtbl -> OnListboxSelectionChanged(This,Id,Item) ) 

#define IPropertyManagerPage2Handler8_OnSelectionboxFocusChanged(This,Id)	\
    ( (This)->lpVtbl -> OnSelectionboxFocusChanged(This,Id) ) 

#define IPropertyManagerPage2Handler8_OnSelectionboxListChanged(This,Id,Count)	\
    ( (This)->lpVtbl -> OnSelectionboxListChanged(This,Id,Count) ) 

#define IPropertyManagerPage2Handler8_OnSelectionboxCalloutCreated(This,Id)	\
    ( (This)->lpVtbl -> OnSelectionboxCalloutCreated(This,Id) ) 

#define IPropertyManagerPage2Handler8_OnSelectionboxCalloutDestroyed(This,Id)	\
    ( (This)->lpVtbl -> OnSelectionboxCalloutDestroyed(This,Id) ) 

#define IPropertyManagerPage2Handler8_OnSubmitSelection(This,Id,Selection,SelType,ItemText,retval)	\
    ( (This)->lpVtbl -> OnSubmitSelection(This,Id,Selection,SelType,ItemText,retval) ) 

#define IPropertyManagerPage2Handler8_OnActiveXControlCreated(This,Id,Status,retval)	\
    ( (This)->lpVtbl -> OnActiveXControlCreated(This,Id,Status,retval) ) 

#define IPropertyManagerPage2Handler8_OnSliderPositionChanged(This,Id,Value)	\
    ( (This)->lpVtbl -> OnSliderPositionChanged(This,Id,Value) ) 

#define IPropertyManagerPage2Handler8_OnSliderTrackingCompleted(This,Id,Value)	\
    ( (This)->lpVtbl -> OnSliderTrackingCompleted(This,Id,Value) ) 

#define IPropertyManagerPage2Handler8_OnKeystroke(This,Wparam,Message,Lparam,Id,retval)	\
    ( (This)->lpVtbl -> OnKeystroke(This,Wparam,Message,Lparam,Id,retval) ) 

#define IPropertyManagerPage2Handler8_OnPopupMenuItem(This,Id)	\
    ( (This)->lpVtbl -> OnPopupMenuItem(This,Id) ) 

#define IPropertyManagerPage2Handler8_OnPopupMenuItemUpdate(This,Id,Retval)	\
    ( (This)->lpVtbl -> OnPopupMenuItemUpdate(This,Id,Retval) ) 

#define IPropertyManagerPage2Handler8_OnGainedFocus(This,Id)	\
    ( (This)->lpVtbl -> OnGainedFocus(This,Id) ) 

#define IPropertyManagerPage2Handler8_OnLostFocus(This,Id)	\
    ( (This)->lpVtbl -> OnLostFocus(This,Id) ) 

#define IPropertyManagerPage2Handler8_OnWindowFromHandleControlCreated(This,Id,Status,retval)	\
    ( (This)->lpVtbl -> OnWindowFromHandleControlCreated(This,Id,Status,retval) ) 

#define IPropertyManagerPage2Handler8_OnListboxRMBUp(This,Id,PosX,PosY)	\
    ( (This)->lpVtbl -> OnListboxRMBUp(This,Id,PosX,PosY) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPropertyManagerPage2Handler8_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_PropertyManagerPage2Handler8;

#ifdef __cplusplus

class DECLSPEC_UUID("29B4FC12-67F9-47bc-9C0D-0DD7667D8235")
PropertyManagerPage2Handler8;
#endif

#ifndef __IPropertyManagerPage2Handler9_INTERFACE_DEFINED__
#define __IPropertyManagerPage2Handler9_INTERFACE_DEFINED__

/* interface IPropertyManagerPage2Handler9 */
/* [object][helpstring][unique][hidden][oleautomation][uuid] */ 


EXTERN_C const IID IID_IPropertyManagerPage2Handler9;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("46BB87B4-AFF4-4e3f-B77E-B459356F660C")
    IPropertyManagerPage2Handler9 : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AfterActivation( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnClose( 
            /* [in] */ long Reason) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AfterClose( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnHelp( 
            /* [retval][out] */ VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnPreviousPage( 
            /* [retval][out] */ VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnNextPage( 
            /* [retval][out] */ VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnPreview( 
            /* [retval][out] */ VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnWhatsNew( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnUndo( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnRedo( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnTabClicked( 
            /* [in] */ long Id,
            /* [retval][out] */ VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnGroupExpand( 
            /* [in] */ long Id,
            /* [in] */ VARIANT_BOOL Expanded) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnGroupCheck( 
            /* [in] */ long Id,
            /* [in] */ VARIANT_BOOL Checked) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnCheckboxCheck( 
            /* [in] */ long Id,
            /* [in] */ VARIANT_BOOL Checked) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnOptionCheck( 
            /* [in] */ long Id) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnButtonPress( 
            /* [in] */ long Id) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnTextboxChanged( 
            /* [in] */ long Id,
            /* [in] */ BSTR Text) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnNumberboxChanged( 
            /* [in] */ long Id,
            /* [in] */ double Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnComboboxEditChanged( 
            /* [in] */ long Id,
            /* [in] */ BSTR Text) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnComboboxSelectionChanged( 
            /* [in] */ long Id,
            /* [in] */ long Item) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnListboxSelectionChanged( 
            /* [in] */ long Id,
            /* [in] */ long Item) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnSelectionboxFocusChanged( 
            /* [in] */ long Id) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnSelectionboxListChanged( 
            /* [in] */ long Id,
            /* [in] */ long Count) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnSelectionboxCalloutCreated( 
            /* [in] */ long Id) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnSelectionboxCalloutDestroyed( 
            /* [in] */ long Id) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnSubmitSelection( 
            /* [in] */ long Id,
            /* [in] */ LPDISPATCH Selection,
            /* [in] */ long SelType,
            /* [out][in] */ BSTR *ItemText,
            /* [retval][out] */ VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnActiveXControlCreated( 
            /* [in] */ long Id,
            /* [in] */ VARIANT_BOOL Status,
            /* [retval][out] */ long *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnSliderPositionChanged( 
            /* [in] */ long Id,
            /* [in] */ double Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnSliderTrackingCompleted( 
            /* [in] */ long Id,
            /* [in] */ double Value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnKeystroke( 
            /* [in] */ long Wparam,
            /* [in] */ long Message,
            /* [in] */ long Lparam,
            /* [in] */ long Id,
            /* [retval][out] */ VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnPopupMenuItem( 
            /* [in] */ long Id) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnPopupMenuItemUpdate( 
            /* [in] */ long Id,
            /* [in] */ long *Retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnGainedFocus( 
            /* [in] */ long Id) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnLostFocus( 
            /* [in] */ long Id) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnWindowFromHandleControlCreated( 
            /* [in] */ long Id,
            /* [in] */ VARIANT_BOOL Status,
            /* [retval][out] */ long *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnListboxRMBUp( 
            /* [in] */ long Id,
            /* [in] */ long PosX,
            /* [in] */ long PosY) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnNumberBoxTrackingCompleted( 
            /* [in] */ long Id,
            /* [in] */ double Value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPropertyManagerPage2Handler9Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPropertyManagerPage2Handler9 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPropertyManagerPage2Handler9 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPropertyManagerPage2Handler9 * This);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler9, AfterActivation)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AfterActivation )( 
            IPropertyManagerPage2Handler9 * This);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler9, OnClose)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnClose )( 
            IPropertyManagerPage2Handler9 * This,
            /* [in] */ long Reason);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler9, AfterClose)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AfterClose )( 
            IPropertyManagerPage2Handler9 * This);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler9, OnHelp)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnHelp )( 
            IPropertyManagerPage2Handler9 * This,
            /* [retval][out] */ VARIANT_BOOL *retval);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler9, OnPreviousPage)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnPreviousPage )( 
            IPropertyManagerPage2Handler9 * This,
            /* [retval][out] */ VARIANT_BOOL *retval);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler9, OnNextPage)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnNextPage )( 
            IPropertyManagerPage2Handler9 * This,
            /* [retval][out] */ VARIANT_BOOL *retval);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler9, OnPreview)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnPreview )( 
            IPropertyManagerPage2Handler9 * This,
            /* [retval][out] */ VARIANT_BOOL *retval);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler9, OnWhatsNew)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnWhatsNew )( 
            IPropertyManagerPage2Handler9 * This);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler9, OnUndo)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnUndo )( 
            IPropertyManagerPage2Handler9 * This);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler9, OnRedo)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnRedo )( 
            IPropertyManagerPage2Handler9 * This);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler9, OnTabClicked)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnTabClicked )( 
            IPropertyManagerPage2Handler9 * This,
            /* [in] */ long Id,
            /* [retval][out] */ VARIANT_BOOL *retval);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler9, OnGroupExpand)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnGroupExpand )( 
            IPropertyManagerPage2Handler9 * This,
            /* [in] */ long Id,
            /* [in] */ VARIANT_BOOL Expanded);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler9, OnGroupCheck)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnGroupCheck )( 
            IPropertyManagerPage2Handler9 * This,
            /* [in] */ long Id,
            /* [in] */ VARIANT_BOOL Checked);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler9, OnCheckboxCheck)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnCheckboxCheck )( 
            IPropertyManagerPage2Handler9 * This,
            /* [in] */ long Id,
            /* [in] */ VARIANT_BOOL Checked);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler9, OnOptionCheck)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnOptionCheck )( 
            IPropertyManagerPage2Handler9 * This,
            /* [in] */ long Id);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler9, OnButtonPress)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnButtonPress )( 
            IPropertyManagerPage2Handler9 * This,
            /* [in] */ long Id);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler9, OnTextboxChanged)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnTextboxChanged )( 
            IPropertyManagerPage2Handler9 * This,
            /* [in] */ long Id,
            /* [in] */ BSTR Text);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler9, OnNumberboxChanged)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnNumberboxChanged )( 
            IPropertyManagerPage2Handler9 * This,
            /* [in] */ long Id,
            /* [in] */ double Value);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler9, OnComboboxEditChanged)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnComboboxEditChanged )( 
            IPropertyManagerPage2Handler9 * This,
            /* [in] */ long Id,
            /* [in] */ BSTR Text);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler9, OnComboboxSelectionChanged)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnComboboxSelectionChanged )( 
            IPropertyManagerPage2Handler9 * This,
            /* [in] */ long Id,
            /* [in] */ long Item);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler9, OnListboxSelectionChanged)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnListboxSelectionChanged )( 
            IPropertyManagerPage2Handler9 * This,
            /* [in] */ long Id,
            /* [in] */ long Item);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler9, OnSelectionboxFocusChanged)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnSelectionboxFocusChanged )( 
            IPropertyManagerPage2Handler9 * This,
            /* [in] */ long Id);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler9, OnSelectionboxListChanged)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnSelectionboxListChanged )( 
            IPropertyManagerPage2Handler9 * This,
            /* [in] */ long Id,
            /* [in] */ long Count);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler9, OnSelectionboxCalloutCreated)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnSelectionboxCalloutCreated )( 
            IPropertyManagerPage2Handler9 * This,
            /* [in] */ long Id);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler9, OnSelectionboxCalloutDestroyed)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnSelectionboxCalloutDestroyed )( 
            IPropertyManagerPage2Handler9 * This,
            /* [in] */ long Id);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler9, OnSubmitSelection)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnSubmitSelection )( 
            IPropertyManagerPage2Handler9 * This,
            /* [in] */ long Id,
            /* [in] */ LPDISPATCH Selection,
            /* [in] */ long SelType,
            /* [out][in] */ BSTR *ItemText,
            /* [retval][out] */ VARIANT_BOOL *retval);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler9, OnActiveXControlCreated)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnActiveXControlCreated )( 
            IPropertyManagerPage2Handler9 * This,
            /* [in] */ long Id,
            /* [in] */ VARIANT_BOOL Status,
            /* [retval][out] */ long *retval);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler9, OnSliderPositionChanged)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnSliderPositionChanged )( 
            IPropertyManagerPage2Handler9 * This,
            /* [in] */ long Id,
            /* [in] */ double Value);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler9, OnSliderTrackingCompleted)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnSliderTrackingCompleted )( 
            IPropertyManagerPage2Handler9 * This,
            /* [in] */ long Id,
            /* [in] */ double Value);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler9, OnKeystroke)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnKeystroke )( 
            IPropertyManagerPage2Handler9 * This,
            /* [in] */ long Wparam,
            /* [in] */ long Message,
            /* [in] */ long Lparam,
            /* [in] */ long Id,
            /* [retval][out] */ VARIANT_BOOL *retval);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler9, OnPopupMenuItem)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnPopupMenuItem )( 
            IPropertyManagerPage2Handler9 * This,
            /* [in] */ long Id);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler9, OnPopupMenuItemUpdate)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnPopupMenuItemUpdate )( 
            IPropertyManagerPage2Handler9 * This,
            /* [in] */ long Id,
            /* [in] */ long *Retval);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler9, OnGainedFocus)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnGainedFocus )( 
            IPropertyManagerPage2Handler9 * This,
            /* [in] */ long Id);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler9, OnLostFocus)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnLostFocus )( 
            IPropertyManagerPage2Handler9 * This,
            /* [in] */ long Id);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler9, OnWindowFromHandleControlCreated)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnWindowFromHandleControlCreated )( 
            IPropertyManagerPage2Handler9 * This,
            /* [in] */ long Id,
            /* [in] */ VARIANT_BOOL Status,
            /* [retval][out] */ long *retval);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler9, OnListboxRMBUp)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnListboxRMBUp )( 
            IPropertyManagerPage2Handler9 * This,
            /* [in] */ long Id,
            /* [in] */ long PosX,
            /* [in] */ long PosY);
        
        DECLSPEC_XFGVIRT(IPropertyManagerPage2Handler9, OnNumberBoxTrackingCompleted)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnNumberBoxTrackingCompleted )( 
            IPropertyManagerPage2Handler9 * This,
            /* [in] */ long Id,
            /* [in] */ double Value);
        
        END_INTERFACE
    } IPropertyManagerPage2Handler9Vtbl;

    interface IPropertyManagerPage2Handler9
    {
        CONST_VTBL struct IPropertyManagerPage2Handler9Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPropertyManagerPage2Handler9_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPropertyManagerPage2Handler9_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPropertyManagerPage2Handler9_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPropertyManagerPage2Handler9_AfterActivation(This)	\
    ( (This)->lpVtbl -> AfterActivation(This) ) 

#define IPropertyManagerPage2Handler9_OnClose(This,Reason)	\
    ( (This)->lpVtbl -> OnClose(This,Reason) ) 

#define IPropertyManagerPage2Handler9_AfterClose(This)	\
    ( (This)->lpVtbl -> AfterClose(This) ) 

#define IPropertyManagerPage2Handler9_OnHelp(This,retval)	\
    ( (This)->lpVtbl -> OnHelp(This,retval) ) 

#define IPropertyManagerPage2Handler9_OnPreviousPage(This,retval)	\
    ( (This)->lpVtbl -> OnPreviousPage(This,retval) ) 

#define IPropertyManagerPage2Handler9_OnNextPage(This,retval)	\
    ( (This)->lpVtbl -> OnNextPage(This,retval) ) 

#define IPropertyManagerPage2Handler9_OnPreview(This,retval)	\
    ( (This)->lpVtbl -> OnPreview(This,retval) ) 

#define IPropertyManagerPage2Handler9_OnWhatsNew(This)	\
    ( (This)->lpVtbl -> OnWhatsNew(This) ) 

#define IPropertyManagerPage2Handler9_OnUndo(This)	\
    ( (This)->lpVtbl -> OnUndo(This) ) 

#define IPropertyManagerPage2Handler9_OnRedo(This)	\
    ( (This)->lpVtbl -> OnRedo(This) ) 

#define IPropertyManagerPage2Handler9_OnTabClicked(This,Id,retval)	\
    ( (This)->lpVtbl -> OnTabClicked(This,Id,retval) ) 

#define IPropertyManagerPage2Handler9_OnGroupExpand(This,Id,Expanded)	\
    ( (This)->lpVtbl -> OnGroupExpand(This,Id,Expanded) ) 

#define IPropertyManagerPage2Handler9_OnGroupCheck(This,Id,Checked)	\
    ( (This)->lpVtbl -> OnGroupCheck(This,Id,Checked) ) 

#define IPropertyManagerPage2Handler9_OnCheckboxCheck(This,Id,Checked)	\
    ( (This)->lpVtbl -> OnCheckboxCheck(This,Id,Checked) ) 

#define IPropertyManagerPage2Handler9_OnOptionCheck(This,Id)	\
    ( (This)->lpVtbl -> OnOptionCheck(This,Id) ) 

#define IPropertyManagerPage2Handler9_OnButtonPress(This,Id)	\
    ( (This)->lpVtbl -> OnButtonPress(This,Id) ) 

#define IPropertyManagerPage2Handler9_OnTextboxChanged(This,Id,Text)	\
    ( (This)->lpVtbl -> OnTextboxChanged(This,Id,Text) ) 

#define IPropertyManagerPage2Handler9_OnNumberboxChanged(This,Id,Value)	\
    ( (This)->lpVtbl -> OnNumberboxChanged(This,Id,Value) ) 

#define IPropertyManagerPage2Handler9_OnComboboxEditChanged(This,Id,Text)	\
    ( (This)->lpVtbl -> OnComboboxEditChanged(This,Id,Text) ) 

#define IPropertyManagerPage2Handler9_OnComboboxSelectionChanged(This,Id,Item)	\
    ( (This)->lpVtbl -> OnComboboxSelectionChanged(This,Id,Item) ) 

#define IPropertyManagerPage2Handler9_OnListboxSelectionChanged(This,Id,Item)	\
    ( (This)->lpVtbl -> OnListboxSelectionChanged(This,Id,Item) ) 

#define IPropertyManagerPage2Handler9_OnSelectionboxFocusChanged(This,Id)	\
    ( (This)->lpVtbl -> OnSelectionboxFocusChanged(This,Id) ) 

#define IPropertyManagerPage2Handler9_OnSelectionboxListChanged(This,Id,Count)	\
    ( (This)->lpVtbl -> OnSelectionboxListChanged(This,Id,Count) ) 

#define IPropertyManagerPage2Handler9_OnSelectionboxCalloutCreated(This,Id)	\
    ( (This)->lpVtbl -> OnSelectionboxCalloutCreated(This,Id) ) 

#define IPropertyManagerPage2Handler9_OnSelectionboxCalloutDestroyed(This,Id)	\
    ( (This)->lpVtbl -> OnSelectionboxCalloutDestroyed(This,Id) ) 

#define IPropertyManagerPage2Handler9_OnSubmitSelection(This,Id,Selection,SelType,ItemText,retval)	\
    ( (This)->lpVtbl -> OnSubmitSelection(This,Id,Selection,SelType,ItemText,retval) ) 

#define IPropertyManagerPage2Handler9_OnActiveXControlCreated(This,Id,Status,retval)	\
    ( (This)->lpVtbl -> OnActiveXControlCreated(This,Id,Status,retval) ) 

#define IPropertyManagerPage2Handler9_OnSliderPositionChanged(This,Id,Value)	\
    ( (This)->lpVtbl -> OnSliderPositionChanged(This,Id,Value) ) 

#define IPropertyManagerPage2Handler9_OnSliderTrackingCompleted(This,Id,Value)	\
    ( (This)->lpVtbl -> OnSliderTrackingCompleted(This,Id,Value) ) 

#define IPropertyManagerPage2Handler9_OnKeystroke(This,Wparam,Message,Lparam,Id,retval)	\
    ( (This)->lpVtbl -> OnKeystroke(This,Wparam,Message,Lparam,Id,retval) ) 

#define IPropertyManagerPage2Handler9_OnPopupMenuItem(This,Id)	\
    ( (This)->lpVtbl -> OnPopupMenuItem(This,Id) ) 

#define IPropertyManagerPage2Handler9_OnPopupMenuItemUpdate(This,Id,Retval)	\
    ( (This)->lpVtbl -> OnPopupMenuItemUpdate(This,Id,Retval) ) 

#define IPropertyManagerPage2Handler9_OnGainedFocus(This,Id)	\
    ( (This)->lpVtbl -> OnGainedFocus(This,Id) ) 

#define IPropertyManagerPage2Handler9_OnLostFocus(This,Id)	\
    ( (This)->lpVtbl -> OnLostFocus(This,Id) ) 

#define IPropertyManagerPage2Handler9_OnWindowFromHandleControlCreated(This,Id,Status,retval)	\
    ( (This)->lpVtbl -> OnWindowFromHandleControlCreated(This,Id,Status,retval) ) 

#define IPropertyManagerPage2Handler9_OnListboxRMBUp(This,Id,PosX,PosY)	\
    ( (This)->lpVtbl -> OnListboxRMBUp(This,Id,PosX,PosY) ) 

#define IPropertyManagerPage2Handler9_OnNumberBoxTrackingCompleted(This,Id,Value)	\
    ( (This)->lpVtbl -> OnNumberBoxTrackingCompleted(This,Id,Value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPropertyManagerPage2Handler9_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_PropertyManagerPage2Handler9;

#ifdef __cplusplus

class DECLSPEC_UUID("1ACB8386-AD5A-4913-9E9F-0A31A9CB33B0")
PropertyManagerPage2Handler9;
#endif

#ifndef __ISwComFeature_INTERFACE_DEFINED__
#define __ISwComFeature_INTERFACE_DEFINED__

/* interface ISwComFeature */
/* [object][helpstring][unique][hidden][oleautomation][uuid] */ 


EXTERN_C const IID IID_ISwComFeature;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D0E29E5E-98E8-4B6B-84BC-ED77336B2E91")
    ISwComFeature : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Edit( 
            /* [in] */ LPDISPATCH app,
            /* [in] */ LPDISPATCH modelDoc,
            /* [in] */ LPDISPATCH feature,
            /* [retval][out] */ VARIANT *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Regenerate( 
            /* [in] */ LPDISPATCH app,
            /* [in] */ LPDISPATCH modelDoc,
            /* [in] */ LPDISPATCH feature,
            /* [retval][out] */ VARIANT *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Security( 
            /* [in] */ LPDISPATCH app,
            /* [in] */ LPDISPATCH modelDoc,
            /* [in] */ LPDISPATCH feature,
            /* [retval][out] */ VARIANT *retval) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISwComFeatureVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISwComFeature * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISwComFeature * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISwComFeature * This);
        
        DECLSPEC_XFGVIRT(ISwComFeature, Edit)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Edit )( 
            ISwComFeature * This,
            /* [in] */ LPDISPATCH app,
            /* [in] */ LPDISPATCH modelDoc,
            /* [in] */ LPDISPATCH feature,
            /* [retval][out] */ VARIANT *retval);
        
        DECLSPEC_XFGVIRT(ISwComFeature, Regenerate)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Regenerate )( 
            ISwComFeature * This,
            /* [in] */ LPDISPATCH app,
            /* [in] */ LPDISPATCH modelDoc,
            /* [in] */ LPDISPATCH feature,
            /* [retval][out] */ VARIANT *retval);
        
        DECLSPEC_XFGVIRT(ISwComFeature, Security)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Security )( 
            ISwComFeature * This,
            /* [in] */ LPDISPATCH app,
            /* [in] */ LPDISPATCH modelDoc,
            /* [in] */ LPDISPATCH feature,
            /* [retval][out] */ VARIANT *retval);
        
        END_INTERFACE
    } ISwComFeatureVtbl;

    interface ISwComFeature
    {
        CONST_VTBL struct ISwComFeatureVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISwComFeature_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISwComFeature_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISwComFeature_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISwComFeature_Edit(This,app,modelDoc,feature,retval)	\
    ( (This)->lpVtbl -> Edit(This,app,modelDoc,feature,retval) ) 

#define ISwComFeature_Regenerate(This,app,modelDoc,feature,retval)	\
    ( (This)->lpVtbl -> Regenerate(This,app,modelDoc,feature,retval) ) 

#define ISwComFeature_Security(This,app,modelDoc,feature,retval)	\
    ( (This)->lpVtbl -> Security(This,app,modelDoc,feature,retval) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISwComFeature_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_SwComFeature;

#ifdef __cplusplus

class DECLSPEC_UUID("00229C01-F87A-479B-BE42-410C4F53EF91")
SwComFeature;
#endif

#ifndef __ISwColorContour_INTERFACE_DEFINED__
#define __ISwColorContour_INTERFACE_DEFINED__

/* interface ISwColorContour */
/* [object][helpstring][unique][hidden][oleautomation][uuid] */ 


EXTERN_C const IID IID_ISwColorContour;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ABE5694F-16F2-4819-9EF6-502AE534D4ED")
    ISwColorContour : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Color( 
            /* [in] */ double value,
            /* [retval][out] */ long *color) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE NeedsUpdate( 
            /* [retval][out] */ VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Value( 
            /* [in] */ LPDISPATCH face,
            /* [in] */ float *vertexCoords,
            /* [in] */ float *normalCoords,
            /* [out] */ double *value,
            /* [retval][out] */ long *color) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DisplayString( 
            /* [in] */ double value,
            /* [retval][out] */ BSTR *retval) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISwColorContourVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISwColorContour * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISwColorContour * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISwColorContour * This);
        
        DECLSPEC_XFGVIRT(ISwColorContour, Color)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Color )( 
            ISwColorContour * This,
            /* [in] */ double value,
            /* [retval][out] */ long *color);
        
        DECLSPEC_XFGVIRT(ISwColorContour, NeedsUpdate)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *NeedsUpdate )( 
            ISwColorContour * This,
            /* [retval][out] */ VARIANT_BOOL *retval);
        
        DECLSPEC_XFGVIRT(ISwColorContour, Value)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Value )( 
            ISwColorContour * This,
            /* [in] */ LPDISPATCH face,
            /* [in] */ float *vertexCoords,
            /* [in] */ float *normalCoords,
            /* [out] */ double *value,
            /* [retval][out] */ long *color);
        
        DECLSPEC_XFGVIRT(ISwColorContour, DisplayString)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DisplayString )( 
            ISwColorContour * This,
            /* [in] */ double value,
            /* [retval][out] */ BSTR *retval);
        
        END_INTERFACE
    } ISwColorContourVtbl;

    interface ISwColorContour
    {
        CONST_VTBL struct ISwColorContourVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISwColorContour_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISwColorContour_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISwColorContour_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISwColorContour_Color(This,value,color)	\
    ( (This)->lpVtbl -> Color(This,value,color) ) 

#define ISwColorContour_NeedsUpdate(This,retval)	\
    ( (This)->lpVtbl -> NeedsUpdate(This,retval) ) 

#define ISwColorContour_Value(This,face,vertexCoords,normalCoords,value,color)	\
    ( (This)->lpVtbl -> Value(This,face,vertexCoords,normalCoords,value,color) ) 

#define ISwColorContour_DisplayString(This,value,retval)	\
    ( (This)->lpVtbl -> DisplayString(This,value,retval) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISwColorContour_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_SwColorContour;

#ifdef __cplusplus

class DECLSPEC_UUID("0FD2C4C1-88AC-4708-8E5C-1B193476951E")
SwColorContour;
#endif

#ifndef __ISwColorContour1_INTERFACE_DEFINED__
#define __ISwColorContour1_INTERFACE_DEFINED__

/* interface ISwColorContour1 */
/* [object][helpstring][unique][hidden][oleautomation][uuid] */ 


EXTERN_C const IID IID_ISwColorContour1;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8F1B8E8F-B0A3-46b4-808A-357262266F6C")
    ISwColorContour1 : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Color( 
            /* [in] */ double value,
            /* [retval][out] */ long *color) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE NeedsUpdate( 
            /* [retval][out] */ VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Value( 
            /* [in] */ LPDISPATCH face,
            /* [in] */ float vertex_x,
            /* [in] */ float vertex_y,
            /* [in] */ float vertex_z,
            /* [in] */ float normal_x,
            /* [in] */ float normal_y,
            /* [in] */ float normal_z,
            /* [out] */ double *value,
            /* [retval][out] */ long *color) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DisplayString( 
            /* [in] */ double value,
            /* [retval][out] */ BSTR *retval) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISwColorContour1Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISwColorContour1 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISwColorContour1 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISwColorContour1 * This);
        
        DECLSPEC_XFGVIRT(ISwColorContour1, Color)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Color )( 
            ISwColorContour1 * This,
            /* [in] */ double value,
            /* [retval][out] */ long *color);
        
        DECLSPEC_XFGVIRT(ISwColorContour1, NeedsUpdate)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *NeedsUpdate )( 
            ISwColorContour1 * This,
            /* [retval][out] */ VARIANT_BOOL *retval);
        
        DECLSPEC_XFGVIRT(ISwColorContour1, Value)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Value )( 
            ISwColorContour1 * This,
            /* [in] */ LPDISPATCH face,
            /* [in] */ float vertex_x,
            /* [in] */ float vertex_y,
            /* [in] */ float vertex_z,
            /* [in] */ float normal_x,
            /* [in] */ float normal_y,
            /* [in] */ float normal_z,
            /* [out] */ double *value,
            /* [retval][out] */ long *color);
        
        DECLSPEC_XFGVIRT(ISwColorContour1, DisplayString)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DisplayString )( 
            ISwColorContour1 * This,
            /* [in] */ double value,
            /* [retval][out] */ BSTR *retval);
        
        END_INTERFACE
    } ISwColorContour1Vtbl;

    interface ISwColorContour1
    {
        CONST_VTBL struct ISwColorContour1Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISwColorContour1_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISwColorContour1_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISwColorContour1_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISwColorContour1_Color(This,value,color)	\
    ( (This)->lpVtbl -> Color(This,value,color) ) 

#define ISwColorContour1_NeedsUpdate(This,retval)	\
    ( (This)->lpVtbl -> NeedsUpdate(This,retval) ) 

#define ISwColorContour1_Value(This,face,vertex_x,vertex_y,vertex_z,normal_x,normal_y,normal_z,value,color)	\
    ( (This)->lpVtbl -> Value(This,face,vertex_x,vertex_y,vertex_z,normal_x,normal_y,normal_z,value,color) ) 

#define ISwColorContour1_DisplayString(This,value,retval)	\
    ( (This)->lpVtbl -> DisplayString(This,value,retval) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISwColorContour1_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_SwColorContour1;

#ifdef __cplusplus

class DECLSPEC_UUID("2C943207-14AA-491a-BBAD-B9FFF3B44814")
SwColorContour1;
#endif

#ifndef __ITaskpaneViewHandler_INTERFACE_DEFINED__
#define __ITaskpaneViewHandler_INTERFACE_DEFINED__

/* interface ITaskpaneViewHandler */
/* [object][helpstring][unique][hidden][oleautomation][uuid] */ 


EXTERN_C const IID IID_ITaskpaneViewHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("78773B6B-530E-4999-AE5A-1EF20FCC286C")
    ITaskpaneViewHandler : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnActivate( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnDeactivate( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnDestroy( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITaskpaneViewHandlerVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITaskpaneViewHandler * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITaskpaneViewHandler * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITaskpaneViewHandler * This);
        
        DECLSPEC_XFGVIRT(ITaskpaneViewHandler, OnActivate)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnActivate )( 
            ITaskpaneViewHandler * This);
        
        DECLSPEC_XFGVIRT(ITaskpaneViewHandler, OnDeactivate)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnDeactivate )( 
            ITaskpaneViewHandler * This);
        
        DECLSPEC_XFGVIRT(ITaskpaneViewHandler, OnDestroy)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnDestroy )( 
            ITaskpaneViewHandler * This);
        
        END_INTERFACE
    } ITaskpaneViewHandlerVtbl;

    interface ITaskpaneViewHandler
    {
        CONST_VTBL struct ITaskpaneViewHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITaskpaneViewHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITaskpaneViewHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITaskpaneViewHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITaskpaneViewHandler_OnActivate(This)	\
    ( (This)->lpVtbl -> OnActivate(This) ) 

#define ITaskpaneViewHandler_OnDeactivate(This)	\
    ( (This)->lpVtbl -> OnDeactivate(This) ) 

#define ITaskpaneViewHandler_OnDestroy(This)	\
    ( (This)->lpVtbl -> OnDestroy(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITaskpaneViewHandler_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_TaskpaneViewHandler;

#ifdef __cplusplus

class DECLSPEC_UUID("78773B6C-530E-4999-AE5A-1EF20FCC286C")
TaskpaneViewHandler;
#endif

#ifndef __ISwQuickTip_INTERFACE_DEFINED__
#define __ISwQuickTip_INTERFACE_DEFINED__

/* interface ISwQuickTip */
/* [object][helpstring][unique][hidden][oleautomation][uuid] */ 


EXTERN_C const IID IID_ISwQuickTip;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2E8CA070-96B2-4ee4-A169-7D121AEDE5E3")
    ISwQuickTip : public IUnknown
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Url( 
            /* [retval][out] */ BSTR *Url) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_HideGuide( 
            /* [retval][out] */ VARIANT_BOOL *hide) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ApplicationName( 
            /* [retval][out] */ BSTR *appName) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_MenuName( 
            /* [retval][out] */ BSTR *label) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ShowInAssemblyDoc( 
            /* [retval][out] */ VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ShowInPartDoc( 
            /* [retval][out] */ VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ShowInDrawingDoc( 
            /* [retval][out] */ VARIANT_BOOL *retval) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SwState( 
            /* [in] */ long state) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AppState( 
            /* [in] */ long state) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISwQuickTipVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISwQuickTip * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISwQuickTip * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISwQuickTip * This);
        
        DECLSPEC_XFGVIRT(ISwQuickTip, get_Url)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Url )( 
            ISwQuickTip * This,
            /* [retval][out] */ BSTR *Url);
        
        DECLSPEC_XFGVIRT(ISwQuickTip, get_HideGuide)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HideGuide )( 
            ISwQuickTip * This,
            /* [retval][out] */ VARIANT_BOOL *hide);
        
        DECLSPEC_XFGVIRT(ISwQuickTip, get_ApplicationName)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ApplicationName )( 
            ISwQuickTip * This,
            /* [retval][out] */ BSTR *appName);
        
        DECLSPEC_XFGVIRT(ISwQuickTip, get_MenuName)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MenuName )( 
            ISwQuickTip * This,
            /* [retval][out] */ BSTR *label);
        
        DECLSPEC_XFGVIRT(ISwQuickTip, get_ShowInAssemblyDoc)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ShowInAssemblyDoc )( 
            ISwQuickTip * This,
            /* [retval][out] */ VARIANT_BOOL *retval);
        
        DECLSPEC_XFGVIRT(ISwQuickTip, get_ShowInPartDoc)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ShowInPartDoc )( 
            ISwQuickTip * This,
            /* [retval][out] */ VARIANT_BOOL *retval);
        
        DECLSPEC_XFGVIRT(ISwQuickTip, get_ShowInDrawingDoc)
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ShowInDrawingDoc )( 
            ISwQuickTip * This,
            /* [retval][out] */ VARIANT_BOOL *retval);
        
        DECLSPEC_XFGVIRT(ISwQuickTip, SwState)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SwState )( 
            ISwQuickTip * This,
            /* [in] */ long state);
        
        DECLSPEC_XFGVIRT(ISwQuickTip, AppState)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AppState )( 
            ISwQuickTip * This,
            /* [in] */ long state);
        
        END_INTERFACE
    } ISwQuickTipVtbl;

    interface ISwQuickTip
    {
        CONST_VTBL struct ISwQuickTipVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISwQuickTip_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISwQuickTip_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISwQuickTip_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISwQuickTip_get_Url(This,Url)	\
    ( (This)->lpVtbl -> get_Url(This,Url) ) 

#define ISwQuickTip_get_HideGuide(This,hide)	\
    ( (This)->lpVtbl -> get_HideGuide(This,hide) ) 

#define ISwQuickTip_get_ApplicationName(This,appName)	\
    ( (This)->lpVtbl -> get_ApplicationName(This,appName) ) 

#define ISwQuickTip_get_MenuName(This,label)	\
    ( (This)->lpVtbl -> get_MenuName(This,label) ) 

#define ISwQuickTip_get_ShowInAssemblyDoc(This,retval)	\
    ( (This)->lpVtbl -> get_ShowInAssemblyDoc(This,retval) ) 

#define ISwQuickTip_get_ShowInPartDoc(This,retval)	\
    ( (This)->lpVtbl -> get_ShowInPartDoc(This,retval) ) 

#define ISwQuickTip_get_ShowInDrawingDoc(This,retval)	\
    ( (This)->lpVtbl -> get_ShowInDrawingDoc(This,retval) ) 

#define ISwQuickTip_SwState(This,state)	\
    ( (This)->lpVtbl -> SwState(This,state) ) 

#define ISwQuickTip_AppState(This,state)	\
    ( (This)->lpVtbl -> AppState(This,state) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISwQuickTip_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_SwQuickTip;

#ifdef __cplusplus

class DECLSPEC_UUID("DD34749A-5C8D-4c7b-AB5B-CFB908B49571")
SwQuickTip;
#endif

#ifndef __ISwManipulatorHandler_INTERFACE_DEFINED__
#define __ISwManipulatorHandler_INTERFACE_DEFINED__

/* interface ISwManipulatorHandler */
/* [object][helpstring][unique][hidden][oleautomation][uuid] */ 


EXTERN_C const IID IID_ISwManipulatorHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8BA4E17E-660E-41d6-BC6F-8A9B3F9CDCA6")
    ISwManipulatorHandler : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnDirectionFlipped( 
            /* [in] */ LPDISPATCH pManipulator) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnLmbSelected( 
            /* [in] */ LPDISPATCH pManipulator,
            /* [retval][out] */ VARIANT_BOOL *retVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnHandleSelected( 
            /* [in] */ LPDISPATCH pManipulator,
            /* [in] */ int handleIndex) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnUpdateDrag( 
            /* [in] */ LPDISPATCH pManipulator,
            /* [in] */ int handleIndex,
            /* [in] */ LPDISPATCH newPosMathPt) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnEndDrag( 
            /* [in] */ LPDISPATCH pManipulator) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnEndNoDrag( 
            /* [in] */ LPDISPATCH pManipulator,
            /* [in] */ int handleIndex) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnHandleRmbSelected( 
            /* [in] */ LPDISPATCH pManipulator,
            /* [in] */ int handleIndex) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnDelete( 
            /* [in] */ LPDISPATCH pManipulator,
            /* [retval][out] */ VARIANT_BOOL *retVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnDoubleValueChanged( 
            /* [in] */ LPDISPATCH pManipulator,
            /* [in] */ int id,
            /* [in] */ double *value,
            /* [retval][out] */ VARIANT_BOOL *retVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnStringValueChanged( 
            /* [in] */ LPDISPATCH pManipulator,
            /* [in] */ int id,
            /* [in] */ BSTR *value,
            /* [retval][out] */ VARIANT_BOOL *retVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnItemSetFocus( 
            /* [in] */ LPDISPATCH pManipulator,
            /* [in] */ int id) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISwManipulatorHandlerVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISwManipulatorHandler * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISwManipulatorHandler * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISwManipulatorHandler * This);
        
        DECLSPEC_XFGVIRT(ISwManipulatorHandler, OnDirectionFlipped)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnDirectionFlipped )( 
            ISwManipulatorHandler * This,
            /* [in] */ LPDISPATCH pManipulator);
        
        DECLSPEC_XFGVIRT(ISwManipulatorHandler, OnLmbSelected)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnLmbSelected )( 
            ISwManipulatorHandler * This,
            /* [in] */ LPDISPATCH pManipulator,
            /* [retval][out] */ VARIANT_BOOL *retVal);
        
        DECLSPEC_XFGVIRT(ISwManipulatorHandler, OnHandleSelected)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnHandleSelected )( 
            ISwManipulatorHandler * This,
            /* [in] */ LPDISPATCH pManipulator,
            /* [in] */ int handleIndex);
        
        DECLSPEC_XFGVIRT(ISwManipulatorHandler, OnUpdateDrag)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnUpdateDrag )( 
            ISwManipulatorHandler * This,
            /* [in] */ LPDISPATCH pManipulator,
            /* [in] */ int handleIndex,
            /* [in] */ LPDISPATCH newPosMathPt);
        
        DECLSPEC_XFGVIRT(ISwManipulatorHandler, OnEndDrag)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnEndDrag )( 
            ISwManipulatorHandler * This,
            /* [in] */ LPDISPATCH pManipulator);
        
        DECLSPEC_XFGVIRT(ISwManipulatorHandler, OnEndNoDrag)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnEndNoDrag )( 
            ISwManipulatorHandler * This,
            /* [in] */ LPDISPATCH pManipulator,
            /* [in] */ int handleIndex);
        
        DECLSPEC_XFGVIRT(ISwManipulatorHandler, OnHandleRmbSelected)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnHandleRmbSelected )( 
            ISwManipulatorHandler * This,
            /* [in] */ LPDISPATCH pManipulator,
            /* [in] */ int handleIndex);
        
        DECLSPEC_XFGVIRT(ISwManipulatorHandler, OnDelete)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnDelete )( 
            ISwManipulatorHandler * This,
            /* [in] */ LPDISPATCH pManipulator,
            /* [retval][out] */ VARIANT_BOOL *retVal);
        
        DECLSPEC_XFGVIRT(ISwManipulatorHandler, OnDoubleValueChanged)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnDoubleValueChanged )( 
            ISwManipulatorHandler * This,
            /* [in] */ LPDISPATCH pManipulator,
            /* [in] */ int id,
            /* [in] */ double *value,
            /* [retval][out] */ VARIANT_BOOL *retVal);
        
        DECLSPEC_XFGVIRT(ISwManipulatorHandler, OnStringValueChanged)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnStringValueChanged )( 
            ISwManipulatorHandler * This,
            /* [in] */ LPDISPATCH pManipulator,
            /* [in] */ int id,
            /* [in] */ BSTR *value,
            /* [retval][out] */ VARIANT_BOOL *retVal);
        
        DECLSPEC_XFGVIRT(ISwManipulatorHandler, OnItemSetFocus)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnItemSetFocus )( 
            ISwManipulatorHandler * This,
            /* [in] */ LPDISPATCH pManipulator,
            /* [in] */ int id);
        
        END_INTERFACE
    } ISwManipulatorHandlerVtbl;

    interface ISwManipulatorHandler
    {
        CONST_VTBL struct ISwManipulatorHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISwManipulatorHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISwManipulatorHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISwManipulatorHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISwManipulatorHandler_OnDirectionFlipped(This,pManipulator)	\
    ( (This)->lpVtbl -> OnDirectionFlipped(This,pManipulator) ) 

#define ISwManipulatorHandler_OnLmbSelected(This,pManipulator,retVal)	\
    ( (This)->lpVtbl -> OnLmbSelected(This,pManipulator,retVal) ) 

#define ISwManipulatorHandler_OnHandleSelected(This,pManipulator,handleIndex)	\
    ( (This)->lpVtbl -> OnHandleSelected(This,pManipulator,handleIndex) ) 

#define ISwManipulatorHandler_OnUpdateDrag(This,pManipulator,handleIndex,newPosMathPt)	\
    ( (This)->lpVtbl -> OnUpdateDrag(This,pManipulator,handleIndex,newPosMathPt) ) 

#define ISwManipulatorHandler_OnEndDrag(This,pManipulator)	\
    ( (This)->lpVtbl -> OnEndDrag(This,pManipulator) ) 

#define ISwManipulatorHandler_OnEndNoDrag(This,pManipulator,handleIndex)	\
    ( (This)->lpVtbl -> OnEndNoDrag(This,pManipulator,handleIndex) ) 

#define ISwManipulatorHandler_OnHandleRmbSelected(This,pManipulator,handleIndex)	\
    ( (This)->lpVtbl -> OnHandleRmbSelected(This,pManipulator,handleIndex) ) 

#define ISwManipulatorHandler_OnDelete(This,pManipulator,retVal)	\
    ( (This)->lpVtbl -> OnDelete(This,pManipulator,retVal) ) 

#define ISwManipulatorHandler_OnDoubleValueChanged(This,pManipulator,id,value,retVal)	\
    ( (This)->lpVtbl -> OnDoubleValueChanged(This,pManipulator,id,value,retVal) ) 

#define ISwManipulatorHandler_OnStringValueChanged(This,pManipulator,id,value,retVal)	\
    ( (This)->lpVtbl -> OnStringValueChanged(This,pManipulator,id,value,retVal) ) 

#define ISwManipulatorHandler_OnItemSetFocus(This,pManipulator,id)	\
    ( (This)->lpVtbl -> OnItemSetFocus(This,pManipulator,id) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISwManipulatorHandler_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_SwManipulatorHandler;

#ifdef __cplusplus

class DECLSPEC_UUID("70BF185D-F072-4ff6-82E0-741823CF05F4")
SwManipulatorHandler;
#endif

#ifndef __ISwManipulatorHandler2_INTERFACE_DEFINED__
#define __ISwManipulatorHandler2_INTERFACE_DEFINED__

/* interface ISwManipulatorHandler2 */
/* [object][helpstring][unique][hidden][oleautomation][uuid] */ 


EXTERN_C const IID IID_ISwManipulatorHandler2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("45FC2F0E-7B16-4194-9E70-C8FA55ECECE0")
    ISwManipulatorHandler2 : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnDirectionFlipped( 
            /* [in] */ LPDISPATCH pManipulator) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnHandleLmbSelected( 
            /* [in] */ LPDISPATCH pManipulator,
            /* [retval][out] */ VARIANT_BOOL *retVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnHandleSelected( 
            /* [in] */ LPDISPATCH pManipulator,
            /* [in] */ int handleIndex) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnUpdateDrag( 
            /* [in] */ LPDISPATCH pManipulator,
            /* [in] */ int handleIndex,
            /* [in] */ LPDISPATCH newPosMathPt) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnEndDrag( 
            /* [in] */ LPDISPATCH pManipulator,
            /* [in] */ int handleIndex) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnEndNoDrag( 
            /* [in] */ LPDISPATCH pManipulator,
            /* [in] */ int handleIndex) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnHandleRmbSelected( 
            /* [in] */ LPDISPATCH pManipulator,
            /* [in] */ int handleIndex) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnDelete( 
            /* [in] */ LPDISPATCH pManipulator,
            /* [retval][out] */ VARIANT_BOOL *retVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnDoubleValueChanged( 
            /* [in] */ LPDISPATCH pManipulator,
            /* [in] */ int handleIndex,
            /* [in] */ double *value,
            /* [retval][out] */ VARIANT_BOOL *retVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnStringValueChanged( 
            /* [in] */ LPDISPATCH pManipulator,
            /* [in] */ int handleIndex,
            /* [in] */ BSTR *value,
            /* [retval][out] */ VARIANT_BOOL *retVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnItemSetFocus( 
            /* [in] */ LPDISPATCH pManipulator,
            /* [in] */ int handleIndex) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISwManipulatorHandler2Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISwManipulatorHandler2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISwManipulatorHandler2 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISwManipulatorHandler2 * This);
        
        DECLSPEC_XFGVIRT(ISwManipulatorHandler2, OnDirectionFlipped)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnDirectionFlipped )( 
            ISwManipulatorHandler2 * This,
            /* [in] */ LPDISPATCH pManipulator);
        
        DECLSPEC_XFGVIRT(ISwManipulatorHandler2, OnHandleLmbSelected)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnHandleLmbSelected )( 
            ISwManipulatorHandler2 * This,
            /* [in] */ LPDISPATCH pManipulator,
            /* [retval][out] */ VARIANT_BOOL *retVal);
        
        DECLSPEC_XFGVIRT(ISwManipulatorHandler2, OnHandleSelected)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnHandleSelected )( 
            ISwManipulatorHandler2 * This,
            /* [in] */ LPDISPATCH pManipulator,
            /* [in] */ int handleIndex);
        
        DECLSPEC_XFGVIRT(ISwManipulatorHandler2, OnUpdateDrag)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnUpdateDrag )( 
            ISwManipulatorHandler2 * This,
            /* [in] */ LPDISPATCH pManipulator,
            /* [in] */ int handleIndex,
            /* [in] */ LPDISPATCH newPosMathPt);
        
        DECLSPEC_XFGVIRT(ISwManipulatorHandler2, OnEndDrag)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnEndDrag )( 
            ISwManipulatorHandler2 * This,
            /* [in] */ LPDISPATCH pManipulator,
            /* [in] */ int handleIndex);
        
        DECLSPEC_XFGVIRT(ISwManipulatorHandler2, OnEndNoDrag)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnEndNoDrag )( 
            ISwManipulatorHandler2 * This,
            /* [in] */ LPDISPATCH pManipulator,
            /* [in] */ int handleIndex);
        
        DECLSPEC_XFGVIRT(ISwManipulatorHandler2, OnHandleRmbSelected)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnHandleRmbSelected )( 
            ISwManipulatorHandler2 * This,
            /* [in] */ LPDISPATCH pManipulator,
            /* [in] */ int handleIndex);
        
        DECLSPEC_XFGVIRT(ISwManipulatorHandler2, OnDelete)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnDelete )( 
            ISwManipulatorHandler2 * This,
            /* [in] */ LPDISPATCH pManipulator,
            /* [retval][out] */ VARIANT_BOOL *retVal);
        
        DECLSPEC_XFGVIRT(ISwManipulatorHandler2, OnDoubleValueChanged)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnDoubleValueChanged )( 
            ISwManipulatorHandler2 * This,
            /* [in] */ LPDISPATCH pManipulator,
            /* [in] */ int handleIndex,
            /* [in] */ double *value,
            /* [retval][out] */ VARIANT_BOOL *retVal);
        
        DECLSPEC_XFGVIRT(ISwManipulatorHandler2, OnStringValueChanged)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnStringValueChanged )( 
            ISwManipulatorHandler2 * This,
            /* [in] */ LPDISPATCH pManipulator,
            /* [in] */ int handleIndex,
            /* [in] */ BSTR *value,
            /* [retval][out] */ VARIANT_BOOL *retVal);
        
        DECLSPEC_XFGVIRT(ISwManipulatorHandler2, OnItemSetFocus)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnItemSetFocus )( 
            ISwManipulatorHandler2 * This,
            /* [in] */ LPDISPATCH pManipulator,
            /* [in] */ int handleIndex);
        
        END_INTERFACE
    } ISwManipulatorHandler2Vtbl;

    interface ISwManipulatorHandler2
    {
        CONST_VTBL struct ISwManipulatorHandler2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISwManipulatorHandler2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISwManipulatorHandler2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISwManipulatorHandler2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISwManipulatorHandler2_OnDirectionFlipped(This,pManipulator)	\
    ( (This)->lpVtbl -> OnDirectionFlipped(This,pManipulator) ) 

#define ISwManipulatorHandler2_OnHandleLmbSelected(This,pManipulator,retVal)	\
    ( (This)->lpVtbl -> OnHandleLmbSelected(This,pManipulator,retVal) ) 

#define ISwManipulatorHandler2_OnHandleSelected(This,pManipulator,handleIndex)	\
    ( (This)->lpVtbl -> OnHandleSelected(This,pManipulator,handleIndex) ) 

#define ISwManipulatorHandler2_OnUpdateDrag(This,pManipulator,handleIndex,newPosMathPt)	\
    ( (This)->lpVtbl -> OnUpdateDrag(This,pManipulator,handleIndex,newPosMathPt) ) 

#define ISwManipulatorHandler2_OnEndDrag(This,pManipulator,handleIndex)	\
    ( (This)->lpVtbl -> OnEndDrag(This,pManipulator,handleIndex) ) 

#define ISwManipulatorHandler2_OnEndNoDrag(This,pManipulator,handleIndex)	\
    ( (This)->lpVtbl -> OnEndNoDrag(This,pManipulator,handleIndex) ) 

#define ISwManipulatorHandler2_OnHandleRmbSelected(This,pManipulator,handleIndex)	\
    ( (This)->lpVtbl -> OnHandleRmbSelected(This,pManipulator,handleIndex) ) 

#define ISwManipulatorHandler2_OnDelete(This,pManipulator,retVal)	\
    ( (This)->lpVtbl -> OnDelete(This,pManipulator,retVal) ) 

#define ISwManipulatorHandler2_OnDoubleValueChanged(This,pManipulator,handleIndex,value,retVal)	\
    ( (This)->lpVtbl -> OnDoubleValueChanged(This,pManipulator,handleIndex,value,retVal) ) 

#define ISwManipulatorHandler2_OnStringValueChanged(This,pManipulator,handleIndex,value,retVal)	\
    ( (This)->lpVtbl -> OnStringValueChanged(This,pManipulator,handleIndex,value,retVal) ) 

#define ISwManipulatorHandler2_OnItemSetFocus(This,pManipulator,handleIndex)	\
    ( (This)->lpVtbl -> OnItemSetFocus(This,pManipulator,handleIndex) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISwManipulatorHandler2_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_SwManipulatorHandler2;

#ifdef __cplusplus

class DECLSPEC_UUID("9DF3414F-2131-4009-A366-9330EE6A9763")
SwManipulatorHandler2;
#endif

#ifndef __ISwCalloutHandler_INTERFACE_DEFINED__
#define __ISwCalloutHandler_INTERFACE_DEFINED__

/* interface ISwCalloutHandler */
/* [object][helpstring][unique][hidden][oleautomation][uuid] */ 


EXTERN_C const IID IID_ISwCalloutHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ae0fe0b2-2217-4610-8c0f-ac7619c0cafe")
    ISwCalloutHandler : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnStringValueChanged( 
            /* [in] */ LPDISPATCH pManipulator,
            /* [in] */ long RowID,
            /* [in] */ BSTR Text,
            /* [retval][out] */ VARIANT_BOOL *retVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISwCalloutHandlerVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISwCalloutHandler * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISwCalloutHandler * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISwCalloutHandler * This);
        
        DECLSPEC_XFGVIRT(ISwCalloutHandler, OnStringValueChanged)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnStringValueChanged )( 
            ISwCalloutHandler * This,
            /* [in] */ LPDISPATCH pManipulator,
            /* [in] */ long RowID,
            /* [in] */ BSTR Text,
            /* [retval][out] */ VARIANT_BOOL *retVal);
        
        END_INTERFACE
    } ISwCalloutHandlerVtbl;

    interface ISwCalloutHandler
    {
        CONST_VTBL struct ISwCalloutHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISwCalloutHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISwCalloutHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISwCalloutHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISwCalloutHandler_OnStringValueChanged(This,pManipulator,RowID,Text,retVal)	\
    ( (This)->lpVtbl -> OnStringValueChanged(This,pManipulator,RowID,Text,retVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISwCalloutHandler_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_SwCalloutHandler;

#ifdef __cplusplus

class DECLSPEC_UUID("f00456f4-9dd2-49c8-90f8-818e70328622")
SwCalloutHandler;
#endif

#ifndef __ISwPointInferenceBroker_INTERFACE_DEFINED__
#define __ISwPointInferenceBroker_INTERFACE_DEFINED__

/* interface ISwPointInferenceBroker */
/* [object][helpstring][unique][hidden][oleautomation][uuid] */ 


EXTERN_C const IID IID_ISwPointInferenceBroker;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("043ABA21-BC20-4c46-A8D4-C8C0B67707A9")
    ISwPointInferenceBroker : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetInferencePoints( 
            /* [in] */ LPDISPATCH pDoc,
            /* [in] */ int SelPosX,
            /* [in] */ int SelPosY,
            /* [in] */ double Tolerance,
            /* [in] */ long Option,
            /* [out] */ VARIANT *InferPoints) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISwPointInferenceBrokerVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISwPointInferenceBroker * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISwPointInferenceBroker * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISwPointInferenceBroker * This);
        
        DECLSPEC_XFGVIRT(ISwPointInferenceBroker, GetInferencePoints)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInferencePoints )( 
            ISwPointInferenceBroker * This,
            /* [in] */ LPDISPATCH pDoc,
            /* [in] */ int SelPosX,
            /* [in] */ int SelPosY,
            /* [in] */ double Tolerance,
            /* [in] */ long Option,
            /* [out] */ VARIANT *InferPoints);
        
        END_INTERFACE
    } ISwPointInferenceBrokerVtbl;

    interface ISwPointInferenceBroker
    {
        CONST_VTBL struct ISwPointInferenceBrokerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISwPointInferenceBroker_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISwPointInferenceBroker_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISwPointInferenceBroker_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISwPointInferenceBroker_GetInferencePoints(This,pDoc,SelPosX,SelPosY,Tolerance,Option,InferPoints)	\
    ( (This)->lpVtbl -> GetInferencePoints(This,pDoc,SelPosX,SelPosY,Tolerance,Option,InferPoints) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISwPointInferenceBroker_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_SwPointInferenceBroker;

#ifdef __cplusplus

class DECLSPEC_UUID("ED8D1114-5B57-4a5f-BC6A-E16E505F4110")
SwPointInferenceBroker;
#endif

#ifndef __ISwAddinBroker_INTERFACE_DEFINED__
#define __ISwAddinBroker_INTERFACE_DEFINED__

/* interface ISwAddinBroker */
/* [object][helpstring][unique][hidden][oleautomation][uuid] */ 


EXTERN_C const IID IID_ISwAddinBroker;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f8d48077-9710-4661-81af-5afb30000e99")
    ISwAddinBroker : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetInferencePoints( 
            /* [in] */ LPDISPATCH pDoc,
            /* [in] */ int SelPosX,
            /* [in] */ int SelPosY,
            /* [in] */ double Tolerance,
            /* [in] */ long Option,
            /* [out] */ VARIANT *InferPoints) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSelectedObjectsBBox( 
            /* [in] */ LPDISPATCH pDoc,
            /* [in] */ long Option,
            /* [out] */ VARIANT *BoxCorners) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISwAddinBrokerVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISwAddinBroker * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISwAddinBroker * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISwAddinBroker * This);
        
        DECLSPEC_XFGVIRT(ISwAddinBroker, GetInferencePoints)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInferencePoints )( 
            ISwAddinBroker * This,
            /* [in] */ LPDISPATCH pDoc,
            /* [in] */ int SelPosX,
            /* [in] */ int SelPosY,
            /* [in] */ double Tolerance,
            /* [in] */ long Option,
            /* [out] */ VARIANT *InferPoints);
        
        DECLSPEC_XFGVIRT(ISwAddinBroker, GetSelectedObjectsBBox)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSelectedObjectsBBox )( 
            ISwAddinBroker * This,
            /* [in] */ LPDISPATCH pDoc,
            /* [in] */ long Option,
            /* [out] */ VARIANT *BoxCorners);
        
        END_INTERFACE
    } ISwAddinBrokerVtbl;

    interface ISwAddinBroker
    {
        CONST_VTBL struct ISwAddinBrokerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISwAddinBroker_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISwAddinBroker_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISwAddinBroker_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISwAddinBroker_GetInferencePoints(This,pDoc,SelPosX,SelPosY,Tolerance,Option,InferPoints)	\
    ( (This)->lpVtbl -> GetInferencePoints(This,pDoc,SelPosX,SelPosY,Tolerance,Option,InferPoints) ) 

#define ISwAddinBroker_GetSelectedObjectsBBox(This,pDoc,Option,BoxCorners)	\
    ( (This)->lpVtbl -> GetSelectedObjectsBBox(This,pDoc,Option,BoxCorners) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISwAddinBroker_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_SwAddinBroker;

#ifdef __cplusplus

class DECLSPEC_UUID("47673231-58de-4d90-9b18-1711f44c5e80")
SwAddinBroker;
#endif

#ifndef __ISwAddinAdvancedOptionBroker_INTERFACE_DEFINED__
#define __ISwAddinAdvancedOptionBroker_INTERFACE_DEFINED__

/* interface ISwAddinAdvancedOptionBroker */
/* [object][helpstring][unique][hidden][oleautomation][uuid] */ 


EXTERN_C const IID IID_ISwAddinAdvancedOptionBroker;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E6B7D1B1-8A1A-468f-AF16-98CEFEA09266")
    ISwAddinAdvancedOptionBroker : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetMessageIDs( 
            /* [out] */ VARIANT *IDs,
            /* [out] */ VARIANT *Message) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetMessageIDs( 
            /* [in] */ VARIANT IDs) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISwAddinAdvancedOptionBrokerVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISwAddinAdvancedOptionBroker * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISwAddinAdvancedOptionBroker * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISwAddinAdvancedOptionBroker * This);
        
        DECLSPEC_XFGVIRT(ISwAddinAdvancedOptionBroker, GetMessageIDs)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetMessageIDs )( 
            ISwAddinAdvancedOptionBroker * This,
            /* [out] */ VARIANT *IDs,
            /* [out] */ VARIANT *Message);
        
        DECLSPEC_XFGVIRT(ISwAddinAdvancedOptionBroker, SetMessageIDs)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetMessageIDs )( 
            ISwAddinAdvancedOptionBroker * This,
            /* [in] */ VARIANT IDs);
        
        END_INTERFACE
    } ISwAddinAdvancedOptionBrokerVtbl;

    interface ISwAddinAdvancedOptionBroker
    {
        CONST_VTBL struct ISwAddinAdvancedOptionBrokerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISwAddinAdvancedOptionBroker_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISwAddinAdvancedOptionBroker_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISwAddinAdvancedOptionBroker_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISwAddinAdvancedOptionBroker_GetMessageIDs(This,IDs,Message)	\
    ( (This)->lpVtbl -> GetMessageIDs(This,IDs,Message) ) 

#define ISwAddinAdvancedOptionBroker_SetMessageIDs(This,IDs)	\
    ( (This)->lpVtbl -> SetMessageIDs(This,IDs) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISwAddinAdvancedOptionBroker_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_SwAddinAdvancedOptionBroker;

#ifdef __cplusplus

class DECLSPEC_UUID("F008CE6F-2326-47a8-B96A-D30972AF3F3C")
SwAddinAdvancedOptionBroker;
#endif

#ifndef __ISwUndoAPIHandler_INTERFACE_DEFINED__
#define __ISwUndoAPIHandler_INTERFACE_DEFINED__

/* interface ISwUndoAPIHandler */
/* [object][helpstring][unique][hidden][oleautomation][uuid] */ 


EXTERN_C const IID IID_ISwUndoAPIHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CE926859-CD92-4bc6-A0AF-1079544AC3EA")
    ISwUndoAPIHandler : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DoUndo( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE UndoReSet( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISwUndoAPIHandlerVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISwUndoAPIHandler * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISwUndoAPIHandler * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISwUndoAPIHandler * This);
        
        DECLSPEC_XFGVIRT(ISwUndoAPIHandler, DoUndo)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DoUndo )( 
            ISwUndoAPIHandler * This);
        
        DECLSPEC_XFGVIRT(ISwUndoAPIHandler, UndoReSet)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *UndoReSet )( 
            ISwUndoAPIHandler * This);
        
        END_INTERFACE
    } ISwUndoAPIHandlerVtbl;

    interface ISwUndoAPIHandler
    {
        CONST_VTBL struct ISwUndoAPIHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISwUndoAPIHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISwUndoAPIHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISwUndoAPIHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISwUndoAPIHandler_DoUndo(This)	\
    ( (This)->lpVtbl -> DoUndo(This) ) 

#define ISwUndoAPIHandler_UndoReSet(This)	\
    ( (This)->lpVtbl -> UndoReSet(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISwUndoAPIHandler_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_SwUndoAPIHandler;

#ifdef __cplusplus

class DECLSPEC_UUID("EB142970-7FF9-4d1e-B4D2-80B11EC7816E")
SwUndoAPIHandler;
#endif

#ifndef __ISwPEManager_INTERFACE_DEFINED__
#define __ISwPEManager_INTERFACE_DEFINED__

/* interface ISwPEManager */
/* [object][helpstring][unique][hidden][oleautomation][uuid] */ 


EXTERN_C const IID IID_ISwPEManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BD338499-242A-4413-9193-5EB618C2DFAD")
    ISwPEManager : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IdentifyToSW( 
            /* [in] */ LPDISPATCH ClassFactory) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISwPEManagerVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISwPEManager * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISwPEManager * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISwPEManager * This);
        
        DECLSPEC_XFGVIRT(ISwPEManager, IdentifyToSW)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IdentifyToSW )( 
            ISwPEManager * This,
            /* [in] */ LPDISPATCH ClassFactory);
        
        END_INTERFACE
    } ISwPEManagerVtbl;

    interface ISwPEManager
    {
        CONST_VTBL struct ISwPEManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISwPEManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISwPEManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISwPEManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISwPEManager_IdentifyToSW(This,ClassFactory)	\
    ( (This)->lpVtbl -> IdentifyToSW(This,ClassFactory) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISwPEManager_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_SwPEManager;

#ifdef __cplusplus

class DECLSPEC_UUID("5A59AACB-3BAB-42AB-A500-3BB179348F17")
SwPEManager;
#endif

#ifndef __IMessageBarHandler_INTERFACE_DEFINED__
#define __IMessageBarHandler_INTERFACE_DEFINED__

/* interface IMessageBarHandler */
/* [object][helpstring][unique][hidden][oleautomation][uuid] */ 


EXTERN_C const IID IID_IMessageBarHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("70AB87B8-1762-44D0-9431-37CCE827A7BE")
    IMessageBarHandler : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnUserResponseA( 
            /* [in] */ VARIANT_BOOL DoNotShowAgain) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnUserResponseB( 
            /* [in] */ VARIANT_BOOL DoNotShowAgain) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnUserClose( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMessageBarHandlerVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMessageBarHandler * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMessageBarHandler * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMessageBarHandler * This);
        
        DECLSPEC_XFGVIRT(IMessageBarHandler, OnUserResponseA)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnUserResponseA )( 
            IMessageBarHandler * This,
            /* [in] */ VARIANT_BOOL DoNotShowAgain);
        
        DECLSPEC_XFGVIRT(IMessageBarHandler, OnUserResponseB)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnUserResponseB )( 
            IMessageBarHandler * This,
            /* [in] */ VARIANT_BOOL DoNotShowAgain);
        
        DECLSPEC_XFGVIRT(IMessageBarHandler, OnUserClose)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnUserClose )( 
            IMessageBarHandler * This);
        
        END_INTERFACE
    } IMessageBarHandlerVtbl;

    interface IMessageBarHandler
    {
        CONST_VTBL struct IMessageBarHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMessageBarHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMessageBarHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMessageBarHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMessageBarHandler_OnUserResponseA(This,DoNotShowAgain)	\
    ( (This)->lpVtbl -> OnUserResponseA(This,DoNotShowAgain) ) 

#define IMessageBarHandler_OnUserResponseB(This,DoNotShowAgain)	\
    ( (This)->lpVtbl -> OnUserResponseB(This,DoNotShowAgain) ) 

#define IMessageBarHandler_OnUserClose(This)	\
    ( (This)->lpVtbl -> OnUserClose(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMessageBarHandler_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_MessageBarHandler;

#ifdef __cplusplus

class DECLSPEC_UUID("C72D5D93-EA7C-4020-8B10-B2000B3A6B94")
MessageBarHandler;
#endif

#ifndef __IUserNotificationHandler_INTERFACE_DEFINED__
#define __IUserNotificationHandler_INTERFACE_DEFINED__

/* interface IUserNotificationHandler */
/* [object][helpstring][unique][hidden][oleautomation][uuid] */ 


EXTERN_C const IID IID_IUserNotificationHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F51A0756-7BD9-40AF-8990-57FAC93B5B16")
    IUserNotificationHandler : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnUserResponseA( 
            /* [in] */ VARIANT_BOOL DoNotShowAgain) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnUserResponseB( 
            /* [in] */ VARIANT_BOOL DoNotShowAgain) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnUserClose( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnTimeout( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUserNotificationHandlerVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUserNotificationHandler * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUserNotificationHandler * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUserNotificationHandler * This);
        
        DECLSPEC_XFGVIRT(IUserNotificationHandler, OnUserResponseA)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnUserResponseA )( 
            IUserNotificationHandler * This,
            /* [in] */ VARIANT_BOOL DoNotShowAgain);
        
        DECLSPEC_XFGVIRT(IUserNotificationHandler, OnUserResponseB)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnUserResponseB )( 
            IUserNotificationHandler * This,
            /* [in] */ VARIANT_BOOL DoNotShowAgain);
        
        DECLSPEC_XFGVIRT(IUserNotificationHandler, OnUserClose)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnUserClose )( 
            IUserNotificationHandler * This);
        
        DECLSPEC_XFGVIRT(IUserNotificationHandler, OnTimeout)
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnTimeout )( 
            IUserNotificationHandler * This);
        
        END_INTERFACE
    } IUserNotificationHandlerVtbl;

    interface IUserNotificationHandler
    {
        CONST_VTBL struct IUserNotificationHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUserNotificationHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUserNotificationHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUserNotificationHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUserNotificationHandler_OnUserResponseA(This,DoNotShowAgain)	\
    ( (This)->lpVtbl -> OnUserResponseA(This,DoNotShowAgain) ) 

#define IUserNotificationHandler_OnUserResponseB(This,DoNotShowAgain)	\
    ( (This)->lpVtbl -> OnUserResponseB(This,DoNotShowAgain) ) 

#define IUserNotificationHandler_OnUserClose(This)	\
    ( (This)->lpVtbl -> OnUserClose(This) ) 

#define IUserNotificationHandler_OnTimeout(This)	\
    ( (This)->lpVtbl -> OnTimeout(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUserNotificationHandler_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_UserNotificationHandler;

#ifdef __cplusplus

class DECLSPEC_UUID("EA27563D-E7D2-43D0-9E6D-714C2E6E659C")
UserNotificationHandler;
#endif
#endif /* __SWPublished_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


