#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum ComTypeLibVersionRegistrationEntryPropertyIndex]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class com_type_lib_version_registration_entry_property_index_t : uint32_t
    {                                                                             
        locale_id =         0x0,                                                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        flags =             0x1,                                                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        help_directory =    0x2,                                                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        display_name =      0x3,                                                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //win32_path =      0x3,                                                    // Windows 10 v1607
        win32_path =        0x4,                                                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //win64_path =      0x4,                                                    // Windows 10 v1607
        //num_properties =  0x5,                                                    // Windows 10 v1607
        win64_path =        0x5,                                                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
        has_machine_scope = 0x6,                                                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
        num_properties =    0x7,                                                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                                            
};
