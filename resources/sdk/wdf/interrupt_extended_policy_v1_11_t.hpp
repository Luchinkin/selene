#pragma once
#include <sdkgen/support_library.hpp>
#include "interrupt_policy_t.hpp"
#include "interrupt_priority_t.hpp"
#include "../nt/group_affinity_t.hpp"

#include "magic/interrupt_extended_policy_v1_11_t.start.hpp"
namespace wdf
{
    // [struct _WDF_INTERRUPT_EXTENDED_POLICY_V1_11]
    // => Windows 10 v1607
    //
    struct interrupt_extended_policy_v1_11_t                               
    {                                                                      
        // Windows 10 v1607                                                
        //                                                                 
        _m00 uint32_t                       size;                            //{ +0x0000    } | .Size
        _m01 enum wdf::interrupt_policy_t   policy;                          //{ +0x0004    } | .Policy
        _m02 enum wdf::interrupt_priority_t priority;                        //{ +0x0008    } | .Priority
        _m03 struct nt::group_affinity_t    target_processor_set_and_group;  //{ +0x0010    } | .TargetProcessorSetAndGroup
                                                                           
        SDK_MAGIC_PROPERTIES( "_WDF_INTERRUPT_EXTENDED_POLICY_V1_11.$", 0x0, false, 0x5f8fd72ed8db0b88 );                               
        SDK_FIXED_SIZE( interrupt_extended_policy_v1_11_t, 0x20 );                               
    };                                                                     
};
#include "magic/interrupt_extended_policy_v1_11_t.end.hpp"
SDK_VERIFY( struct wdf::interrupt_extended_policy_v1_11_t, 0x20 );
