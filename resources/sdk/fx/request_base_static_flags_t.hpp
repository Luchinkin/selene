#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum FxRequestBaseStaticFlags]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class request_base_static_flags_t : int32_t
    {                                               
        system_buffer_valid = 0x1,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        output_buffer_valid = 0x2,                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                              
};
