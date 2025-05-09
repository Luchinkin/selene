#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct IXMLDOMNotation]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ixmldom_notation_t
    {                        
                             
        SDK_MAGIC_PROPERTIES( "IXMLDOMNotation.$", 0x8, true, 0xa4dae7300c3551dd );
        SDK_FIXED_SIZE( ixmldom_notation_t, 0x8 );
    };                       
};
SDK_VERIFY( struct win::ixmldom_notation_t, 0x8 );
