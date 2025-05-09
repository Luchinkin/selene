#pragma once
#include <sdkgen/support_library.hpp>
#include "storage_hw_endurance_info_t.hpp"

#include "magic/storage_hw_endurance_data_descriptor_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_HW_ENDURANCE_DATA_DESCRIPTOR]
    // => WDK 10 (NV)
    //
    struct storage_hw_endurance_data_descriptor_t                  
    {                                                              
        // WDK 10                                                  
        //                                                         
        _m00 uint32_t                               version;         //{ +0x0000    } | .Version
        _m01 uint32_t                               size;            //{ +0x0004    } | .Size
        _m02 struct nt::storage_hw_endurance_info_t endurance_info;  //{ +0x0008    } | .EnduranceInfo
                                                                   
        SDK_NONVOL_PROPERTIES( "_STORAGE_HW_ENDURANCE_DATA_DESCRIPTOR.$", 0x0, false, 0x1e036fb62d4dbb33 );               
        SDK_FIXED_SIZE( storage_hw_endurance_data_descriptor_t, 0x38 );               
    };                                                             
};
#include "magic/storage_hw_endurance_data_descriptor_t.end.hpp"
SDK_VERIFY( struct nt::storage_hw_endurance_data_descriptor_t, 0x38 );
