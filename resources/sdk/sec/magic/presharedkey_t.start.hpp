#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_SEC_PRESHAREDKEY.KeySize", key_size, 0x0, 0x10, true, 0x4fe473c6de55dbba)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_SEC_PRESHAREDKEY.Key", key, 0x10, 0x8, true, 0x18d5bffc454a1608)
#else
#define _m00
#define _m01
#endif