#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_17.Size", size, 0x0, 0x0, false, 0xc9712891d032578a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::io_target_open_type_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_17.Type", type, 0x0, 0x0, false, 0x64914aad6bbd28e4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_io_target_query_remove_t ), "_WDF_IO_TARGET_OPEN_PARAMS_V1_17.EvtIoTargetQueryRemove", evt_io_target_query_remove, 0x0, 0x0, false, 0xdf47cd5593751839)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfiotarget_t*)>*), "_WDF_IO_TARGET_OPEN_PARAMS_V1_17.EvtIoTargetRemoveCanceled", evt_io_target_remove_canceled, 0x0, 0x0, false, 0x22aa0e137149a7b2)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfiotarget_t*)>*), "_WDF_IO_TARGET_OPEN_PARAMS_V1_17.EvtIoTargetRemoveComplete", evt_io_target_remove_complete, 0x0, 0x0, false, 0x736d5390657fb5e2)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_WDF_IO_TARGET_OPEN_PARAMS_V1_17.TargetDeviceObject", target_device_object, 0x0, 0x0, false, 0xb83724f81943fd7a)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::file_object_t*), "_WDF_IO_TARGET_OPEN_PARAMS_V1_17.TargetFileObject", target_file_object, 0x0, 0x0, false, 0xeed6f5dbb6aa206d)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_WDF_IO_TARGET_OPEN_PARAMS_V1_17.TargetDeviceName", target_device_name, 0x0, 0x0, false, 0x7239e3765c871dd7)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_17.DesiredAccess", desired_access, 0x0, 0x0, false, 0x6946215dd8ffc4d3)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_17.ShareAccess", share_access, 0x0, 0x0, false, 0x7f5c68ed0516d632)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_17.FileAttributes", file_attributes, 0x0, 0x0, false, 0xdefe7070725a0a1f)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_17.CreateDisposition", create_disposition, 0x0, 0x0, false, 0xfde94dd5804c12a1)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_17.CreateOptions", create_options, 0x0, 0x0, false, 0xa90c54b07893e607)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WDF_IO_TARGET_OPEN_PARAMS_V1_17.EaBuffer", ea_buffer, 0x0, 0x0, false, 0xef2565983fea17)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_17.EaBufferLength", ea_buffer_length, 0x0, 0x0, false, 0x69c2491b8edbdad8)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t*), "_WDF_IO_TARGET_OPEN_PARAMS_V1_17.AllocationSize", allocation_size, 0x0, 0x0, false, 0x3691da3e8445f58f)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_TARGET_OPEN_PARAMS_V1_17.FileInformation", file_information, 0x0, 0x0, false, 0x700787cc0eb6a4ea)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_WDF_IO_TARGET_OPEN_PARAMS_V1_17.FileName", file_name, 0x0, 0x0, false, 0x3eb6fb9226b0f72c)
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
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#endif