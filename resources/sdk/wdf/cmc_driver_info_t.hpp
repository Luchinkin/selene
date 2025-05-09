#pragma once
#include <sdkgen/support_library.hpp>

namespace nt    { struct kdpc_t;          }
namespace ntdll { struct mca_exception_t; }

#include "magic/cmc_driver_info_t.start.hpp"
namespace wdf
{
    // [struct _CMC_DRIVER_INFO]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct cmc_driver_info_t                          
    {                                                 
        using exception_callback_t = sdk::function<void(void*, struct ntdll::mca_exception_t*)>*;                   
        using pkdeferred_routine_t = sdk::function<void(struct nt::kdpc_t*, void*, void*, void*)>*;                   
                                                      
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                            
        _m00 exception_callback_t  exception_callback;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ExceptionCallback
        _m01 pkdeferred_routine_t  dpc_callback;        //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .DpcCallback
        _m02 void*                 device_context;      //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .DeviceContext
                                                      
        SDK_NONVOL_PROPERTIES( "_CMC_DRIVER_INFO.$", 0x18, true, 0x7ad1955829cc6d5a );                   
        SDK_FIXED_SIZE( cmc_driver_info_t, 0x18 );                   
    };                                                
};
#include "magic/cmc_driver_info_t.end.hpp"
SDK_VERIFY( struct wdf::cmc_driver_info_t, 0x18 );
