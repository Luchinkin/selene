#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/section_image_information64_t.start.hpp"
namespace win
{
    // [struct _SECTION_IMAGE_INFORMATION64]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct section_image_information64_t             
    {                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                           
        _m00 uint64_t transfer_address;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TransferAddress
        _m01 uint32_t zero_bits;                       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ZeroBits
        _m02 uint64_t maximum_stack_size;              //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .MaximumStackSize
        _m03 uint64_t committed_stack_size;            //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .CommittedStackSize
        _m04 uint32_t sub_system_type;                 //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .SubSystemType
        _m05 uint16_t sub_system_minor_version;        //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .SubSystemMinorVersion
        _m06 uint16_t sub_system_major_version;        //{ +0x0026    +0x0026    +0x0026    +0x0026    } | .SubSystemMajorVersion
        _m07 uint32_t sub_system_version;              //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .SubSystemVersion
        _m08 uint16_t major_operating_system_version;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .MajorOperatingSystemVersion
        _m09 uint16_t minor_operating_system_version;  //{ +0x002a    +0x002a    +0x002a    +0x002a    } | .MinorOperatingSystemVersion
        _m10 uint32_t operating_system_version;        //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .OperatingSystemVersion
        _m11 uint16_t image_characteristics;           //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .ImageCharacteristics
        _m12 uint16_t dll_characteristics;             //{ +0x002e    +0x002e    +0x002e    +0x002e    } | .DllCharacteristics
        _m13 uint16_t machine;                         //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Machine
        _m14 uint8_t  image_contains_code;             //{ +0x0032    +0x0032    +0x0032    +0x0032    } | .ImageContainsCode
        _m15 uint8_t  image_flags;                     //{ +0x0033    +0x0033    +0x0033    +0x0033    } | .ImageFlags
        _m16 uint1_t  com_plus;                        //{ +0x0033@0  +0x0033@0  +0x0033@0  +0x0033@0  } | .ComPlus
        _m17 uint1_t  image_dynamically_relocated;     //{ +0x0033@1  +0x0033@1  +0x0033@1  +0x0033@1  } | .ImageDynamicallyRelocated
        _m18 uint32_t loader_flags;                    //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .LoaderFlags
        _m19 uint32_t image_file_size;                 //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .ImageFileSize
        _m20 uint32_t check_sum;                       //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .CheckSum
                                                     
        SDK_MAGIC_PROPERTIES( "_SECTION_IMAGE_INFORMATION64.$", 0x40, true, 0x8329e816a9350af4 );                               
        SDK_FIXED_SIZE( section_image_information64_t, 0x40 );                               
    };                                               
};
#include "magic/section_image_information64_t.end.hpp"
SDK_VERIFY( struct win::section_image_information64_t, 0x40 );
