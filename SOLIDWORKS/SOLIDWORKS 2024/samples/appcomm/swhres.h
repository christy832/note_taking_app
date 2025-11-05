//$c3	DKC 10/13/06 Added ITF_E_UNSUPPORTED_OBSOLETE_API. (SPR 337694)
//$c2   PRC 04/15/99 Added ITF_E_ROUTINGNOTLOADED
//$c1   PRC 08/22/98 First SolidWorks specific HRESULT

#include <winerror.h>

static const HRESULT ITF_E_COMPONENTNOTRESOLVED = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x01);
static const HRESULT ITF_E_ROUTINGNOTLOADED = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x02);

// An error code for COM APIs to return in the case of an API that is not just obsolete, but that
// also can not even be supported; in other words, use of this API must be changed. (SPR 337694)
static const HRESULT ITF_E_UNSUPPORTED_OBSOLETE_API = MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, 0x03);
