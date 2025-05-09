#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum ASTAWorkPriority]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class asta_work_priority_t : int32_t
    {                                        
        high =   0x0,                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        normal = 0x1,                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        low =    0x2,                          // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                       
};
