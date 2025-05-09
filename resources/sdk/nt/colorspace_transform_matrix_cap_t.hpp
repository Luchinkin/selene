#pragma once
#include <sdkgen/support_library.hpp>
#include "colorspace_transform_data_cap_t.hpp"

#include "magic/colorspace_transform_matrix_cap_t.start.hpp"
namespace nt
{
    // [struct _COLORSPACE_TRANSFORM_MATRIX_CAP]
    // => WDK 10 (NV)
    //
    struct colorspace_transform_matrix_cap_t                          
    {                                                                 
        // WDK 10                                                     
        //                                                            
        _m00 uint10_t                                   matrix_size_x;  //{ +0x0000@0  } | .MatrixSizeX
        _m01 uint10_t                                   matrix_size_y;  //{ +0x0000@10 } | .MatrixSizeY
        _m02 uint32_t                                   value;          //{ +0x0000    } | .Value
        _m03 struct nt::colorspace_transform_data_cap_t data_cap;       //{ +0x0004    } | .DataCap
                                                                      
        SDK_NONVOL_PROPERTIES( "_COLORSPACE_TRANSFORM_MATRIX_CAP.$", 0x0, false, 0x8fe4e8c80ec47b35 );              
        SDK_FIXED_SIZE( colorspace_transform_matrix_cap_t, 0x14 );              
    };                                                                
};
#include "magic/colorspace_transform_matrix_cap_t.end.hpp"
SDK_VERIFY( struct nt::colorspace_transform_matrix_cap_t, 0x14 );
