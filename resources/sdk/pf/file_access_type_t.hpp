#pragma once
#include <sdkgen/support_library.hpp>

namespace pf
{
    // [enum _PF_FILE_ACCESS_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class file_access_type_t : int32_t
    {                                      
        read =  0x0,                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        write = 0x1,                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =   0x2,                         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                     
};
