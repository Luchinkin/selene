#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/system_power_state_t.hpp"

#include "magic/pdo_event_callbacks_v1_11_t.start.hpp"
namespace wdf
{
    struct wdfdevice_t;
    struct wdfcmreslist_t;
    struct wdfioresreqlist_t;

    // [struct _WDF_PDO_EVENT_CALLBACKS_V1_11]
    // => Windows 10 v1607
    //
    struct pdo_event_callbacks_v1_11_t                                                             
    {                                                                                              
        using evt_device_resources_query_t =             sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfcmreslist_t*)>*;                                       
        using evt_device_resource_requirements_query_t = sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfioresreqlist_t*)>*;                                       
        using evt_device_eject_t =                       sdk::function<int32_t(struct wdf::wdfdevice_t*)>*;                                       
        using pfn_wdf_device_set_lock_t =                sdk::function<int32_t(struct wdf::wdfdevice_t*, uint8_t)>*;                                       
        using pfn_wdf_device_enable_wake_at_bus_t =      sdk::function<int32_t(struct wdf::wdfdevice_t*, enum nt::system_power_state_t)>*;                                       
                                                                                                   
        // Windows 10 v1607                                                                        
        //                                                                                         
        _m00 uint32_t                                       size;                                    //{ +0x0000    } | .Size
        _m01 evt_device_resources_query_t                   evt_device_resources_query;              //{ +0x0008    } | .EvtDeviceResourcesQuery
        _m02 evt_device_resource_requirements_query_t       evt_device_resource_requirements_query;  //{ +0x0010    } | .EvtDeviceResourceRequirementsQuery
        _m03 evt_device_eject_t                             evt_device_eject;                        //{ +0x0018    } | .EvtDeviceEject
        _m04 pfn_wdf_device_set_lock_t                      evt_device_set_lock;                     //{ +0x0020    } | .EvtDeviceSetLock
        _m05 pfn_wdf_device_enable_wake_at_bus_t            evt_device_enable_wake_at_bus;           //{ +0x0028    } | .EvtDeviceEnableWakeAtBus
        _m06 sdk::function<void(struct wdf::wdfdevice_t*)>* evt_device_disable_wake_at_bus;          //{ +0x0030    } | .EvtDeviceDisableWakeAtBus
        _m07 sdk::function<void(struct wdf::wdfdevice_t*)>* evt_device_reported_missing;             //{ +0x0038    } | .EvtDeviceReportedMissing
                                                                                                   
        SDK_MAGIC_PROPERTIES( "_WDF_PDO_EVENT_CALLBACKS_V1_11.$", 0x0, false, 0x5100d6ef9faf8559 );                                       
        SDK_FIXED_SIZE( pdo_event_callbacks_v1_11_t, 0x40 );                                       
    };                                                                                             
};
#include "magic/pdo_event_callbacks_v1_11_t.end.hpp"
SDK_VERIFY( struct wdf::pdo_event_callbacks_v1_11_t, 0x40 );
