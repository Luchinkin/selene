#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _MUTANT_INFORMATION_CLASS]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class mutant_information_class_t : int32_t
    {                                              
        basic_information = 0x0,                     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        owner_information = 0x1,                     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                             
};
