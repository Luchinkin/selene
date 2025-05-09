#pragma once
#include <sdkgen/support_library.hpp>
#include "ace_header_t.hpp"

#include "magic/system_resource_attribute_ace_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_RESOURCE_ATTRIBUTE_ACE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct system_resource_attribute_ace_t      
    {                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                      
        _m00 struct win::ace_header_t header;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                 mask;       //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Mask
        _m02 uint32_t                 sid_start;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .SidStart
                                                
        SDK_NONVOL_PROPERTIES( "_SYSTEM_RESOURCE_ATTRIBUTE_ACE.$", 0xc, true, 0xae1468eb2853e6a0 );          
        SDK_FIXED_SIZE( system_resource_attribute_ace_t, 0xc );          
    };                                          
};
#include "magic/system_resource_attribute_ace_t.end.hpp"
SDK_VERIFY( struct win::system_resource_attribute_ace_t, 0xc );
