#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::iptp_engine
{
    // [SetClient@IPTPEngine]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9d20, 0x243e0 bytes
    // win32kbase.sys .text:0xdad70, 0x27ef0 bytes
    // win32kbase.sys .text:0xc86c0, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) set_client;
};
#include "magic/api.end.hpp"
