#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum OFFER_PRIORITY]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class offer_priority_t : int32_t
    {                                    
        very_low =     0x1,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        low =          0x2,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        below_normal = 0x3,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        normal =       0x4,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                   
};
