#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::state_notification_type_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_17.Type", type, 0x0, 0x0, false, 0xe4dc7eba556f6334)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_17.Data.EnterState.CurrentState", current_state, 0x0, 0x0, false, 0xeda8be8382d299fe)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_17.Data.EnterState.NewState", new_state, 0x0, 0x0, false, 0xd5e4c8027bb39e1d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_enter_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_17.Data.EnterState", enter_state, 0x0, 0x0, false, 0x6d88a5430fc9d2e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_17.Data.PostProcessState.CurrentState", current_state, 0x0, 0x0, false, 0x99fdf905c1f8e254)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u2_post_process_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_17.Data.PostProcessState", post_process_state, 0x0, 0x0, false, 0x4a930575eee4e789)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_17.Data.LeaveState.CurrentState", current_state, 0x0, 0x0, false, 0x136ca9cf24db1ae)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::device_power_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_17.Data.LeaveState.NewState", new_state, 0x0, 0x0, false, 0x266e53e2d34d4858)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_leave_state_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_17.Data.LeaveState", leave_state, 0x0, 0x0, false, 0x361c1a2926ab3de5)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_data_t), "_WDF_DEVICE_POWER_NOTIFICATION_DATA_V1_17.Data", data, 0x0, 0x0, false, 0xbad3fa968ac0622d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#endif