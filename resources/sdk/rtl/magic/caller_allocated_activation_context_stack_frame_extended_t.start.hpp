#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_CALLER_ALLOCATED_ACTIVATION_CONTEXT_STACK_FRAME_EXTENDED.Size", size, 0x0, 0x40, true, 0xae5d9cec7a500c5e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_CALLER_ALLOCATED_ACTIVATION_CONTEXT_STACK_FRAME_EXTENDED.Format", format, 0x40, 0x20, true, 0xb033820039d00321)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::activation_context_stack_frame_t), "_RTL_CALLER_ALLOCATED_ACTIVATION_CONTEXT_STACK_FRAME_EXTENDED.Frame", frame, 0x80, 0xc0, true, 0x476e9cc60b6686aa)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RTL_CALLER_ALLOCATED_ACTIVATION_CONTEXT_STACK_FRAME_EXTENDED.Extra1", extra1, 0x140, 0x40, true, 0xdcf6ce83aefd6f96)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RTL_CALLER_ALLOCATED_ACTIVATION_CONTEXT_STACK_FRAME_EXTENDED.Extra2", extra2, 0x180, 0x40, true, 0xc29c3d0bcde86a3c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RTL_CALLER_ALLOCATED_ACTIVATION_CONTEXT_STACK_FRAME_EXTENDED.Extra3", extra3, 0x1c0, 0x40, true, 0x9c6756cabf9c69db)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RTL_CALLER_ALLOCATED_ACTIVATION_CONTEXT_STACK_FRAME_EXTENDED.Extra4", extra4, 0x200, 0x40, true, 0xe7f30f2fb015f6b1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif