#ifndef XRT_REFLECTION_FUNCTION_H
#define XRT_REFLECTION_FUNCTION_H





// Toggleable lists of functions for each extension
#ifdef XRT_ENABLE_XR_KHR_android_thread_settings
#define XRT_FUNCTION_LIST_XR_KHR_android_thread_settings(_) \
    _(xrSetAndroidApplicationThreadKHR, XrResult, 3)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_KHR_android_thread_settings(_)
#else
#define XRT_FUNCTION_LIST_XR_KHR_android_thread_settings(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_KHR_android_thread_settings(_) \
    _(xrSetAndroidApplicationThreadKHR) 
#endif
#ifdef XRT_ENABLE_XR_KHR_android_surface_swapchain
#define XRT_FUNCTION_LIST_XR_KHR_android_surface_swapchain(_) \
    _(xrCreateSwapchainAndroidSurfaceKHR, XrResult, 4)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_KHR_android_surface_swapchain(_)
#else
#define XRT_FUNCTION_LIST_XR_KHR_android_surface_swapchain(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_KHR_android_surface_swapchain(_) \
    _(xrCreateSwapchainAndroidSurfaceKHR) 
#endif
#define XRT_FUNCTION_LIST_XR_KHR_composition_layer_cube(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_KHR_composition_layer_cube(_)
#define XRT_FUNCTION_LIST_XR_KHR_android_create_instance(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_KHR_android_create_instance(_)
#define XRT_FUNCTION_LIST_XR_KHR_composition_layer_depth(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_KHR_composition_layer_depth(_)
#define XRT_FUNCTION_LIST_XR_KHR_vulkan_swapchain_format_list(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_KHR_vulkan_swapchain_format_list(_)
#ifdef XRT_ENABLE_XR_EXT_performance_settings
#define XRT_FUNCTION_LIST_XR_EXT_performance_settings(_) \
    _(xrPerfSettingsSetPerformanceLevelEXT, XrResult, 3)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_EXT_performance_settings(_)
#else
#define XRT_FUNCTION_LIST_XR_EXT_performance_settings(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_EXT_performance_settings(_) \
    _(xrPerfSettingsSetPerformanceLevelEXT) 
#endif
#ifdef XRT_ENABLE_XR_EXT_thermal_query
#define XRT_FUNCTION_LIST_XR_EXT_thermal_query(_) \
    _(xrThermalGetTemperatureTrendEXT, XrResult, 5)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_EXT_thermal_query(_)
#else
#define XRT_FUNCTION_LIST_XR_EXT_thermal_query(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_EXT_thermal_query(_) \
    _(xrThermalGetTemperatureTrendEXT) 
#endif
#define XRT_FUNCTION_LIST_XR_KHR_composition_layer_cylinder(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_KHR_composition_layer_cylinder(_)
#define XRT_FUNCTION_LIST_XR_KHR_composition_layer_equirect(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_KHR_composition_layer_equirect(_)
#ifdef XRT_ENABLE_XR_EXT_debug_utils
#define XRT_FUNCTION_LIST_XR_EXT_debug_utils(_) \
    _(xrSetDebugUtilsObjectNameEXT, XrResult, 2)
 \
    _(xrCreateDebugUtilsMessengerEXT, XrResult, 3)
 \
    _(xrDestroyDebugUtilsMessengerEXT, XrResult, 1)
 \
    _(xrSubmitDebugUtilsMessageEXT, XrResult, 4)
 \
    _(xrSessionBeginDebugUtilsLabelRegionEXT, XrResult, 2)
 \
    _(xrSessionEndDebugUtilsLabelRegionEXT, XrResult, 1)
 \
    _(xrSessionInsertDebugUtilsLabelEXT, XrResult, 2)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_EXT_debug_utils(_)
#else
#define XRT_FUNCTION_LIST_XR_EXT_debug_utils(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_EXT_debug_utils(_) \
    _(xrSetDebugUtilsObjectNameEXT) \
    _(xrCreateDebugUtilsMessengerEXT) \
    _(xrDestroyDebugUtilsMessengerEXT) \
    _(xrSubmitDebugUtilsMessageEXT) \
    _(xrSessionBeginDebugUtilsLabelRegionEXT) \
    _(xrSessionEndDebugUtilsLabelRegionEXT) \
    _(xrSessionInsertDebugUtilsLabelEXT) 
#endif
#ifdef XRT_ENABLE_XR_KHR_opengl_enable
#define XRT_FUNCTION_LIST_XR_KHR_opengl_enable(_) \
    _(xrGetOpenGLGraphicsRequirementsKHR, XrResult, 3)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_KHR_opengl_enable(_)
#else
#define XRT_FUNCTION_LIST_XR_KHR_opengl_enable(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_KHR_opengl_enable(_) \
    _(xrGetOpenGLGraphicsRequirementsKHR) 
#endif
#ifdef XRT_ENABLE_XR_KHR_opengl_es_enable
#define XRT_FUNCTION_LIST_XR_KHR_opengl_es_enable(_) \
    _(xrGetOpenGLESGraphicsRequirementsKHR, XrResult, 3)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_KHR_opengl_es_enable(_)
#else
#define XRT_FUNCTION_LIST_XR_KHR_opengl_es_enable(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_KHR_opengl_es_enable(_) \
    _(xrGetOpenGLESGraphicsRequirementsKHR) 
#endif
#ifdef XRT_ENABLE_XR_KHR_vulkan_enable
#define XRT_FUNCTION_LIST_XR_KHR_vulkan_enable(_) \
    _(xrGetVulkanInstanceExtensionsKHR, XrResult, 5)
 \
    _(xrGetVulkanDeviceExtensionsKHR, XrResult, 5)
 \
    _(xrGetVulkanGraphicsDeviceKHR, XrResult, 4)
 \
    _(xrGetVulkanGraphicsRequirementsKHR, XrResult, 3)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_KHR_vulkan_enable(_)
#else
#define XRT_FUNCTION_LIST_XR_KHR_vulkan_enable(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_KHR_vulkan_enable(_) \
    _(xrGetVulkanInstanceExtensionsKHR) \
    _(xrGetVulkanDeviceExtensionsKHR) \
    _(xrGetVulkanGraphicsDeviceKHR) \
    _(xrGetVulkanGraphicsRequirementsKHR) 
#endif
#ifdef XRT_ENABLE_XR_KHR_D3D11_enable
#define XRT_FUNCTION_LIST_XR_KHR_D3D11_enable(_) \
    _(xrGetD3D11GraphicsRequirementsKHR, XrResult, 3)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_KHR_D3D11_enable(_)
#else
#define XRT_FUNCTION_LIST_XR_KHR_D3D11_enable(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_KHR_D3D11_enable(_) \
    _(xrGetD3D11GraphicsRequirementsKHR) 
#endif
#ifdef XRT_ENABLE_XR_KHR_D3D12_enable
#define XRT_FUNCTION_LIST_XR_KHR_D3D12_enable(_) \
    _(xrGetD3D12GraphicsRequirementsKHR, XrResult, 3)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_KHR_D3D12_enable(_)
#else
#define XRT_FUNCTION_LIST_XR_KHR_D3D12_enable(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_KHR_D3D12_enable(_) \
    _(xrGetD3D12GraphicsRequirementsKHR) 
#endif
#ifdef XRT_ENABLE_XR_KHR_metal_enable
#define XRT_FUNCTION_LIST_XR_KHR_metal_enable(_) \
    _(xrGetMetalGraphicsRequirementsKHR, XrResult, 3)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_KHR_metal_enable(_)
#else
#define XRT_FUNCTION_LIST_XR_KHR_metal_enable(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_KHR_metal_enable(_) \
    _(xrGetMetalGraphicsRequirementsKHR) 
#endif
#define XRT_FUNCTION_LIST_XR_EXT_eye_gaze_interaction(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_EXT_eye_gaze_interaction(_)
#ifdef XRT_ENABLE_XR_KHR_visibility_mask
#define XRT_FUNCTION_LIST_XR_KHR_visibility_mask(_) \
    _(xrGetVisibilityMaskKHR, XrResult, 5)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_KHR_visibility_mask(_)
#else
#define XRT_FUNCTION_LIST_XR_KHR_visibility_mask(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_KHR_visibility_mask(_) \
    _(xrGetVisibilityMaskKHR) 
#endif
#define XRT_FUNCTION_LIST_XR_EXTX_overlay(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_EXTX_overlay(_)
#define XRT_FUNCTION_LIST_XR_KHR_composition_layer_color_scale_bias(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_KHR_composition_layer_color_scale_bias(_)
#ifdef XRT_ENABLE_XR_KHR_win32_convert_performance_counter_time
#define XRT_FUNCTION_LIST_XR_KHR_win32_convert_performance_counter_time(_) \
    _(xrConvertWin32PerformanceCounterToTimeKHR, XrResult, 3)
 \
    _(xrConvertTimeToWin32PerformanceCounterKHR, XrResult, 3)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_KHR_win32_convert_performance_counter_time(_)
#else
#define XRT_FUNCTION_LIST_XR_KHR_win32_convert_performance_counter_time(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_KHR_win32_convert_performance_counter_time(_) \
    _(xrConvertWin32PerformanceCounterToTimeKHR) \
    _(xrConvertTimeToWin32PerformanceCounterKHR) 
#endif
#ifdef XRT_ENABLE_XR_KHR_convert_timespec_time
#define XRT_FUNCTION_LIST_XR_KHR_convert_timespec_time(_) \
    _(xrConvertTimespecTimeToTimeKHR, XrResult, 3)
 \
    _(xrConvertTimeToTimespecTimeKHR, XrResult, 3)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_KHR_convert_timespec_time(_)
#else
#define XRT_FUNCTION_LIST_XR_KHR_convert_timespec_time(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_KHR_convert_timespec_time(_) \
    _(xrConvertTimespecTimeToTimeKHR) \
    _(xrConvertTimeToTimespecTimeKHR) 
#endif
#ifdef XRT_ENABLE_XR_MSFT_spatial_anchor
#define XRT_FUNCTION_LIST_XR_MSFT_spatial_anchor(_) \
    _(xrCreateSpatialAnchorMSFT, XrResult, 3)
 \
    _(xrCreateSpatialAnchorSpaceMSFT, XrResult, 3)
 \
    _(xrDestroySpatialAnchorMSFT, XrResult, 1)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_MSFT_spatial_anchor(_)
#else
#define XRT_FUNCTION_LIST_XR_MSFT_spatial_anchor(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_MSFT_spatial_anchor(_) \
    _(xrCreateSpatialAnchorMSFT) \
    _(xrCreateSpatialAnchorSpaceMSFT) \
    _(xrDestroySpatialAnchorMSFT) 
#endif
#define XRT_FUNCTION_LIST_XR_FB_composition_layer_image_layout(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_composition_layer_image_layout(_)
#define XRT_FUNCTION_LIST_XR_FB_composition_layer_alpha_blend(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_composition_layer_alpha_blend(_)
#define XRT_FUNCTION_LIST_XR_EXT_view_configuration_depth_range(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_EXT_view_configuration_depth_range(_)
#ifdef XRT_ENABLE_XR_EXT_conformance_automation
#define XRT_FUNCTION_LIST_XR_EXT_conformance_automation(_) \
    _(xrSetInputDeviceActiveEXT, XrResult, 4)
 \
    _(xrSetInputDeviceStateBoolEXT, XrResult, 4)
 \
    _(xrSetInputDeviceStateFloatEXT, XrResult, 4)
 \
    _(xrSetInputDeviceStateVector2fEXT, XrResult, 4)
 \
    _(xrSetInputDeviceLocationEXT, XrResult, 5)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_EXT_conformance_automation(_)
#else
#define XRT_FUNCTION_LIST_XR_EXT_conformance_automation(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_EXT_conformance_automation(_) \
    _(xrSetInputDeviceActiveEXT) \
    _(xrSetInputDeviceStateBoolEXT) \
    _(xrSetInputDeviceStateFloatEXT) \
    _(xrSetInputDeviceStateVector2fEXT) \
    _(xrSetInputDeviceLocationEXT) 
#endif
#define XRT_FUNCTION_LIST_XR_MNDX_egl_enable(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_MNDX_egl_enable(_)
#ifdef XRT_ENABLE_XR_MSFT_spatial_graph_bridge
#define XRT_FUNCTION_LIST_XR_MSFT_spatial_graph_bridge(_) \
    _(xrCreateSpatialGraphNodeSpaceMSFT, XrResult, 3)
 \
    _(xrTryCreateSpatialGraphStaticNodeBindingMSFT, XrResult, 3)
 \
    _(xrDestroySpatialGraphNodeBindingMSFT, XrResult, 1)
 \
    _(xrGetSpatialGraphNodeBindingPropertiesMSFT, XrResult, 3)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_MSFT_spatial_graph_bridge(_)
#else
#define XRT_FUNCTION_LIST_XR_MSFT_spatial_graph_bridge(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_MSFT_spatial_graph_bridge(_) \
    _(xrCreateSpatialGraphNodeSpaceMSFT) \
    _(xrTryCreateSpatialGraphStaticNodeBindingMSFT) \
    _(xrDestroySpatialGraphNodeBindingMSFT) \
    _(xrGetSpatialGraphNodeBindingPropertiesMSFT) 
#endif
#ifdef XRT_ENABLE_XR_EXT_hand_tracking
#define XRT_FUNCTION_LIST_XR_EXT_hand_tracking(_) \
    _(xrCreateHandTrackerEXT, XrResult, 3)
 \
    _(xrDestroyHandTrackerEXT, XrResult, 1)
 \
    _(xrLocateHandJointsEXT, XrResult, 3)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_EXT_hand_tracking(_)
#else
#define XRT_FUNCTION_LIST_XR_EXT_hand_tracking(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_EXT_hand_tracking(_) \
    _(xrCreateHandTrackerEXT) \
    _(xrDestroyHandTrackerEXT) \
    _(xrLocateHandJointsEXT) 
#endif
#ifdef XRT_ENABLE_XR_MSFT_hand_tracking_mesh
#define XRT_FUNCTION_LIST_XR_MSFT_hand_tracking_mesh(_) \
    _(xrCreateHandMeshSpaceMSFT, XrResult, 3)
 \
    _(xrUpdateHandMeshMSFT, XrResult, 3)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_MSFT_hand_tracking_mesh(_)
#else
#define XRT_FUNCTION_LIST_XR_MSFT_hand_tracking_mesh(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_MSFT_hand_tracking_mesh(_) \
    _(xrCreateHandMeshSpaceMSFT) \
    _(xrUpdateHandMeshMSFT) 
#endif
#define XRT_FUNCTION_LIST_XR_MSFT_secondary_view_configuration(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_MSFT_secondary_view_configuration(_)
#ifdef XRT_ENABLE_XR_MSFT_controller_model
#define XRT_FUNCTION_LIST_XR_MSFT_controller_model(_) \
    _(xrGetControllerModelKeyMSFT, XrResult, 3)
 \
    _(xrLoadControllerModelMSFT, XrResult, 5)
 \
    _(xrGetControllerModelPropertiesMSFT, XrResult, 3)
 \
    _(xrGetControllerModelStateMSFT, XrResult, 3)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_MSFT_controller_model(_)
#else
#define XRT_FUNCTION_LIST_XR_MSFT_controller_model(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_MSFT_controller_model(_) \
    _(xrGetControllerModelKeyMSFT) \
    _(xrLoadControllerModelMSFT) \
    _(xrGetControllerModelPropertiesMSFT) \
    _(xrGetControllerModelStateMSFT) 
#endif
#ifdef XRT_ENABLE_XR_MSFT_perception_anchor_interop
#define XRT_FUNCTION_LIST_XR_MSFT_perception_anchor_interop(_) \
    _(xrCreateSpatialAnchorFromPerceptionAnchorMSFT, XrResult, 3)
 \
    _(xrTryGetPerceptionAnchorFromSpatialAnchorMSFT, XrResult, 3)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_MSFT_perception_anchor_interop(_)
#else
#define XRT_FUNCTION_LIST_XR_MSFT_perception_anchor_interop(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_MSFT_perception_anchor_interop(_) \
    _(xrCreateSpatialAnchorFromPerceptionAnchorMSFT) \
    _(xrTryGetPerceptionAnchorFromSpatialAnchorMSFT) 
#endif
#define XRT_FUNCTION_LIST_XR_EPIC_view_configuration_fov(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_EPIC_view_configuration_fov(_)
#define XRT_FUNCTION_LIST_XR_MSFT_holographic_window_attachment(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_MSFT_holographic_window_attachment(_)
#ifdef XRT_ENABLE_XR_MSFT_composition_layer_reprojection
#define XRT_FUNCTION_LIST_XR_MSFT_composition_layer_reprojection(_) \
    _(xrEnumerateReprojectionModesMSFT, XrResult, 6)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_MSFT_composition_layer_reprojection(_)
#else
#define XRT_FUNCTION_LIST_XR_MSFT_composition_layer_reprojection(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_MSFT_composition_layer_reprojection(_) \
    _(xrEnumerateReprojectionModesMSFT) 
#endif
#define XRT_FUNCTION_LIST_XR_FB_android_surface_swapchain_create(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_android_surface_swapchain_create(_)
#ifdef XRT_ENABLE_XR_FB_swapchain_update_state
#define XRT_FUNCTION_LIST_XR_FB_swapchain_update_state(_) \
    _(xrUpdateSwapchainFB, XrResult, 2)
 \
    _(xrGetSwapchainStateFB, XrResult, 2)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_swapchain_update_state(_)
#else
#define XRT_FUNCTION_LIST_XR_FB_swapchain_update_state(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_swapchain_update_state(_) \
    _(xrUpdateSwapchainFB) \
    _(xrGetSwapchainStateFB) 
#endif
#define XRT_FUNCTION_LIST_XR_FB_composition_layer_secure_content(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_composition_layer_secure_content(_)
#ifdef XRT_ENABLE_XR_FB_body_tracking
#define XRT_FUNCTION_LIST_XR_FB_body_tracking(_) \
    _(xrCreateBodyTrackerFB, XrResult, 3)
 \
    _(xrDestroyBodyTrackerFB, XrResult, 1)
 \
    _(xrLocateBodyJointsFB, XrResult, 3)
 \
    _(xrGetBodySkeletonFB, XrResult, 2)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_body_tracking(_)
#else
#define XRT_FUNCTION_LIST_XR_FB_body_tracking(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_body_tracking(_) \
    _(xrCreateBodyTrackerFB) \
    _(xrDestroyBodyTrackerFB) \
    _(xrLocateBodyJointsFB) \
    _(xrGetBodySkeletonFB) 
#endif
#define XRT_FUNCTION_LIST_XR_EXT_dpad_binding(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_EXT_dpad_binding(_)
#define XRT_FUNCTION_LIST_XR_VALVE_analog_threshold(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_VALVE_analog_threshold(_)
#define XRT_FUNCTION_LIST_XR_EXT_hand_joints_motion_range(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_EXT_hand_joints_motion_range(_)
#ifdef XRT_ENABLE_XR_KHR_loader_init
#define XRT_FUNCTION_LIST_XR_KHR_loader_init(_) \
    _(xrInitializeLoaderKHR, XrResult, 1)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_KHR_loader_init(_)
#else
#define XRT_FUNCTION_LIST_XR_KHR_loader_init(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_KHR_loader_init(_) \
    _(xrInitializeLoaderKHR) 
#endif
#define XRT_FUNCTION_LIST_XR_KHR_loader_init_android(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_KHR_loader_init_android(_)
#ifdef XRT_ENABLE_XR_KHR_vulkan_enable2
#define XRT_FUNCTION_LIST_XR_KHR_vulkan_enable2(_) \
    _(xrCreateVulkanInstanceKHR, XrResult, 4)
 \
    _(xrCreateVulkanDeviceKHR, XrResult, 4)
 \
    _(xrGetVulkanGraphicsDevice2KHR, XrResult, 3)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_KHR_vulkan_enable2(_)
#else
#define XRT_FUNCTION_LIST_XR_KHR_vulkan_enable2(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_KHR_vulkan_enable2(_) \
    _(xrCreateVulkanInstanceKHR) \
    _(xrCreateVulkanDeviceKHR) \
    _(xrGetVulkanGraphicsDevice2KHR) 
#endif
#define XRT_FUNCTION_LIST_XR_KHR_composition_layer_equirect2(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_KHR_composition_layer_equirect2(_)
#ifdef XRT_ENABLE_XR_MSFT_scene_understanding
#define XRT_FUNCTION_LIST_XR_MSFT_scene_understanding(_) \
    _(xrEnumerateSceneComputeFeaturesMSFT, XrResult, 5)
 \
    _(xrCreateSceneObserverMSFT, XrResult, 3)
 \
    _(xrDestroySceneObserverMSFT, XrResult, 1)
 \
    _(xrCreateSceneMSFT, XrResult, 3)
 \
    _(xrDestroySceneMSFT, XrResult, 1)
 \
    _(xrComputeNewSceneMSFT, XrResult, 2)
 \
    _(xrGetSceneComputeStateMSFT, XrResult, 2)
 \
    _(xrGetSceneComponentsMSFT, XrResult, 3)
 \
    _(xrLocateSceneComponentsMSFT, XrResult, 3)
 \
    _(xrGetSceneMeshBuffersMSFT, XrResult, 3)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_MSFT_scene_understanding(_)
#else
#define XRT_FUNCTION_LIST_XR_MSFT_scene_understanding(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_MSFT_scene_understanding(_) \
    _(xrEnumerateSceneComputeFeaturesMSFT) \
    _(xrCreateSceneObserverMSFT) \
    _(xrDestroySceneObserverMSFT) \
    _(xrCreateSceneMSFT) \
    _(xrDestroySceneMSFT) \
    _(xrComputeNewSceneMSFT) \
    _(xrGetSceneComputeStateMSFT) \
    _(xrGetSceneComponentsMSFT) \
    _(xrLocateSceneComponentsMSFT) \
    _(xrGetSceneMeshBuffersMSFT) 
#endif
#ifdef XRT_ENABLE_XR_MSFT_scene_understanding_serialization
#define XRT_FUNCTION_LIST_XR_MSFT_scene_understanding_serialization(_) \
    _(xrDeserializeSceneMSFT, XrResult, 2)
 \
    _(xrGetSerializedSceneFragmentDataMSFT, XrResult, 5)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_MSFT_scene_understanding_serialization(_)
#else
#define XRT_FUNCTION_LIST_XR_MSFT_scene_understanding_serialization(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_MSFT_scene_understanding_serialization(_) \
    _(xrDeserializeSceneMSFT) \
    _(xrGetSerializedSceneFragmentDataMSFT) 
#endif
#ifdef XRT_ENABLE_XR_FB_display_refresh_rate
#define XRT_FUNCTION_LIST_XR_FB_display_refresh_rate(_) \
    _(xrEnumerateDisplayRefreshRatesFB, XrResult, 4)
 \
    _(xrGetDisplayRefreshRateFB, XrResult, 2)
 \
    _(xrRequestDisplayRefreshRateFB, XrResult, 2)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_display_refresh_rate(_)
#else
#define XRT_FUNCTION_LIST_XR_FB_display_refresh_rate(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_display_refresh_rate(_) \
    _(xrEnumerateDisplayRefreshRatesFB) \
    _(xrGetDisplayRefreshRateFB) \
    _(xrRequestDisplayRefreshRateFB) 
#endif
#ifdef XRT_ENABLE_XR_HTCX_vive_tracker_interaction
#define XRT_FUNCTION_LIST_XR_HTCX_vive_tracker_interaction(_) \
    _(xrEnumerateViveTrackerPathsHTCX, XrResult, 4)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_HTCX_vive_tracker_interaction(_)
#else
#define XRT_FUNCTION_LIST_XR_HTCX_vive_tracker_interaction(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_HTCX_vive_tracker_interaction(_) \
    _(xrEnumerateViveTrackerPathsHTCX) 
#endif
#ifdef XRT_ENABLE_XR_HTC_facial_tracking
#define XRT_FUNCTION_LIST_XR_HTC_facial_tracking(_) \
    _(xrCreateFacialTrackerHTC, XrResult, 3)
 \
    _(xrDestroyFacialTrackerHTC, XrResult, 1)
 \
    _(xrGetFacialExpressionsHTC, XrResult, 2)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_HTC_facial_tracking(_)
#else
#define XRT_FUNCTION_LIST_XR_HTC_facial_tracking(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_HTC_facial_tracking(_) \
    _(xrCreateFacialTrackerHTC) \
    _(xrDestroyFacialTrackerHTC) \
    _(xrGetFacialExpressionsHTC) 
#endif
#ifdef XRT_ENABLE_XR_FB_color_space
#define XRT_FUNCTION_LIST_XR_FB_color_space(_) \
    _(xrEnumerateColorSpacesFB, XrResult, 4)
 \
    _(xrSetColorSpaceFB, XrResult, 2)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_color_space(_)
#else
#define XRT_FUNCTION_LIST_XR_FB_color_space(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_color_space(_) \
    _(xrEnumerateColorSpacesFB) \
    _(xrSetColorSpaceFB) 
#endif
#ifdef XRT_ENABLE_XR_FB_hand_tracking_mesh
#define XRT_FUNCTION_LIST_XR_FB_hand_tracking_mesh(_) \
    _(xrGetHandMeshFB, XrResult, 2)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_hand_tracking_mesh(_)
#else
#define XRT_FUNCTION_LIST_XR_FB_hand_tracking_mesh(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_hand_tracking_mesh(_) \
    _(xrGetHandMeshFB) 
#endif
#define XRT_FUNCTION_LIST_XR_FB_hand_tracking_aim(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_hand_tracking_aim(_)
#define XRT_FUNCTION_LIST_XR_FB_hand_tracking_capsules(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_hand_tracking_capsules(_)
#ifdef XRT_ENABLE_XR_FB_spatial_entity
#define XRT_FUNCTION_LIST_XR_FB_spatial_entity(_) \
    _(xrCreateSpatialAnchorFB, XrResult, 3)
 \
    _(xrGetSpaceUuidFB, XrResult, 2)
 \
    _(xrEnumerateSpaceSupportedComponentsFB, XrResult, 4)
 \
    _(xrSetSpaceComponentStatusFB, XrResult, 3)
 \
    _(xrGetSpaceComponentStatusFB, XrResult, 3)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_spatial_entity(_)
#else
#define XRT_FUNCTION_LIST_XR_FB_spatial_entity(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_spatial_entity(_) \
    _(xrCreateSpatialAnchorFB) \
    _(xrGetSpaceUuidFB) \
    _(xrEnumerateSpaceSupportedComponentsFB) \
    _(xrSetSpaceComponentStatusFB) \
    _(xrGetSpaceComponentStatusFB) 
#endif
#ifdef XRT_ENABLE_XR_FB_foveation
#define XRT_FUNCTION_LIST_XR_FB_foveation(_) \
    _(xrCreateFoveationProfileFB, XrResult, 3)
 \
    _(xrDestroyFoveationProfileFB, XrResult, 1)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_foveation(_)
#else
#define XRT_FUNCTION_LIST_XR_FB_foveation(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_foveation(_) \
    _(xrCreateFoveationProfileFB) \
    _(xrDestroyFoveationProfileFB) 
#endif
#define XRT_FUNCTION_LIST_XR_FB_foveation_configuration(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_foveation_configuration(_)
#ifdef XRT_ENABLE_XR_FB_keyboard_tracking
#define XRT_FUNCTION_LIST_XR_FB_keyboard_tracking(_) \
    _(xrQuerySystemTrackedKeyboardFB, XrResult, 3)
 \
    _(xrCreateKeyboardSpaceFB, XrResult, 3)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_keyboard_tracking(_)
#else
#define XRT_FUNCTION_LIST_XR_FB_keyboard_tracking(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_keyboard_tracking(_) \
    _(xrQuerySystemTrackedKeyboardFB) \
    _(xrCreateKeyboardSpaceFB) 
#endif
#ifdef XRT_ENABLE_XR_FB_triangle_mesh
#define XRT_FUNCTION_LIST_XR_FB_triangle_mesh(_) \
    _(xrCreateTriangleMeshFB, XrResult, 3)
 \
    _(xrDestroyTriangleMeshFB, XrResult, 1)
 \
    _(xrTriangleMeshGetVertexBufferFB, XrResult, 2)
 \
    _(xrTriangleMeshGetIndexBufferFB, XrResult, 2)
 \
    _(xrTriangleMeshBeginUpdateFB, XrResult, 1)
 \
    _(xrTriangleMeshEndUpdateFB, XrResult, 3)
 \
    _(xrTriangleMeshBeginVertexBufferUpdateFB, XrResult, 2)
 \
    _(xrTriangleMeshEndVertexBufferUpdateFB, XrResult, 1)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_triangle_mesh(_)
#else
#define XRT_FUNCTION_LIST_XR_FB_triangle_mesh(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_triangle_mesh(_) \
    _(xrCreateTriangleMeshFB) \
    _(xrDestroyTriangleMeshFB) \
    _(xrTriangleMeshGetVertexBufferFB) \
    _(xrTriangleMeshGetIndexBufferFB) \
    _(xrTriangleMeshBeginUpdateFB) \
    _(xrTriangleMeshEndUpdateFB) \
    _(xrTriangleMeshBeginVertexBufferUpdateFB) \
    _(xrTriangleMeshEndVertexBufferUpdateFB) 
#endif
#ifdef XRT_ENABLE_XR_FB_passthrough
#define XRT_FUNCTION_LIST_XR_FB_passthrough(_) \
    _(xrCreatePassthroughFB, XrResult, 3)
 \
    _(xrDestroyPassthroughFB, XrResult, 1)
 \
    _(xrPassthroughStartFB, XrResult, 1)
 \
    _(xrPassthroughPauseFB, XrResult, 1)
 \
    _(xrCreatePassthroughLayerFB, XrResult, 3)
 \
    _(xrDestroyPassthroughLayerFB, XrResult, 1)
 \
    _(xrPassthroughLayerPauseFB, XrResult, 1)
 \
    _(xrPassthroughLayerResumeFB, XrResult, 1)
 \
    _(xrPassthroughLayerSetStyleFB, XrResult, 2)
 \
    _(xrCreateGeometryInstanceFB, XrResult, 3)
 \
    _(xrDestroyGeometryInstanceFB, XrResult, 1)
 \
    _(xrGeometryInstanceSetTransformFB, XrResult, 2)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_passthrough(_)
#else
#define XRT_FUNCTION_LIST_XR_FB_passthrough(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_passthrough(_) \
    _(xrCreatePassthroughFB) \
    _(xrDestroyPassthroughFB) \
    _(xrPassthroughStartFB) \
    _(xrPassthroughPauseFB) \
    _(xrCreatePassthroughLayerFB) \
    _(xrDestroyPassthroughLayerFB) \
    _(xrPassthroughLayerPauseFB) \
    _(xrPassthroughLayerResumeFB) \
    _(xrPassthroughLayerSetStyleFB) \
    _(xrCreateGeometryInstanceFB) \
    _(xrDestroyGeometryInstanceFB) \
    _(xrGeometryInstanceSetTransformFB) 
#endif
#ifdef XRT_ENABLE_XR_FB_render_model
#define XRT_FUNCTION_LIST_XR_FB_render_model(_) \
    _(xrEnumerateRenderModelPathsFB, XrResult, 4)
 \
    _(xrGetRenderModelPropertiesFB, XrResult, 3)
 \
    _(xrLoadRenderModelFB, XrResult, 3)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_render_model(_)
#else
#define XRT_FUNCTION_LIST_XR_FB_render_model(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_render_model(_) \
    _(xrEnumerateRenderModelPathsFB) \
    _(xrGetRenderModelPropertiesFB) \
    _(xrLoadRenderModelFB) 
#endif
#define XRT_FUNCTION_LIST_XR_KHR_binding_modification(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_KHR_binding_modification(_)
#define XRT_FUNCTION_LIST_XR_VARJO_foveated_rendering(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_VARJO_foveated_rendering(_)
#define XRT_FUNCTION_LIST_XR_VARJO_composition_layer_depth_test(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_VARJO_composition_layer_depth_test(_)
#ifdef XRT_ENABLE_XR_VARJO_environment_depth_estimation
#define XRT_FUNCTION_LIST_XR_VARJO_environment_depth_estimation(_) \
    _(xrSetEnvironmentDepthEstimationVARJO, XrResult, 2)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_VARJO_environment_depth_estimation(_)
#else
#define XRT_FUNCTION_LIST_XR_VARJO_environment_depth_estimation(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_VARJO_environment_depth_estimation(_) \
    _(xrSetEnvironmentDepthEstimationVARJO) 
#endif
#ifdef XRT_ENABLE_XR_VARJO_marker_tracking
#define XRT_FUNCTION_LIST_XR_VARJO_marker_tracking(_) \
    _(xrSetMarkerTrackingVARJO, XrResult, 2)
 \
    _(xrSetMarkerTrackingTimeoutVARJO, XrResult, 3)
 \
    _(xrSetMarkerTrackingPredictionVARJO, XrResult, 3)
 \
    _(xrGetMarkerSizeVARJO, XrResult, 3)
 \
    _(xrCreateMarkerSpaceVARJO, XrResult, 3)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_VARJO_marker_tracking(_)
#else
#define XRT_FUNCTION_LIST_XR_VARJO_marker_tracking(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_VARJO_marker_tracking(_) \
    _(xrSetMarkerTrackingVARJO) \
    _(xrSetMarkerTrackingTimeoutVARJO) \
    _(xrSetMarkerTrackingPredictionVARJO) \
    _(xrGetMarkerSizeVARJO) \
    _(xrCreateMarkerSpaceVARJO) 
#endif
#ifdef XRT_ENABLE_XR_VARJO_view_offset
#define XRT_FUNCTION_LIST_XR_VARJO_view_offset(_) \
    _(xrSetViewOffsetVARJO, XrResult, 2)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_VARJO_view_offset(_)
#else
#define XRT_FUNCTION_LIST_XR_VARJO_view_offset(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_VARJO_view_offset(_) \
    _(xrSetViewOffsetVARJO) 
#endif
#define XRT_FUNCTION_LIST_XR_ML_frame_end_info(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_ML_frame_end_info(_)
#define XRT_FUNCTION_LIST_XR_ML_global_dimmer(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_ML_global_dimmer(_)
#ifdef XRT_ENABLE_XR_ML_compat
#define XRT_FUNCTION_LIST_XR_ML_compat(_) \
    _(xrCreateSpaceFromCoordinateFrameUIDML, XrResult, 3)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_ML_compat(_)
#else
#define XRT_FUNCTION_LIST_XR_ML_compat(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_ML_compat(_) \
    _(xrCreateSpaceFromCoordinateFrameUIDML) 
#endif
#ifdef XRT_ENABLE_XR_ML_marker_understanding
#define XRT_FUNCTION_LIST_XR_ML_marker_understanding(_) \
    _(xrCreateMarkerDetectorML, XrResult, 3)
 \
    _(xrDestroyMarkerDetectorML, XrResult, 1)
 \
    _(xrSnapshotMarkerDetectorML, XrResult, 2)
 \
    _(xrGetMarkerDetectorStateML, XrResult, 2)
 \
    _(xrGetMarkersML, XrResult, 4)
 \
    _(xrGetMarkerReprojectionErrorML, XrResult, 3)
 \
    _(xrGetMarkerLengthML, XrResult, 3)
 \
    _(xrGetMarkerNumberML, XrResult, 3)
 \
    _(xrGetMarkerStringML, XrResult, 5)
 \
    _(xrCreateMarkerSpaceML, XrResult, 3)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_ML_marker_understanding(_)
#else
#define XRT_FUNCTION_LIST_XR_ML_marker_understanding(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_ML_marker_understanding(_) \
    _(xrCreateMarkerDetectorML) \
    _(xrDestroyMarkerDetectorML) \
    _(xrSnapshotMarkerDetectorML) \
    _(xrGetMarkerDetectorStateML) \
    _(xrGetMarkersML) \
    _(xrGetMarkerReprojectionErrorML) \
    _(xrGetMarkerLengthML) \
    _(xrGetMarkerNumberML) \
    _(xrGetMarkerStringML) \
    _(xrCreateMarkerSpaceML) 
#endif
#ifdef XRT_ENABLE_XR_ML_localization_map
#define XRT_FUNCTION_LIST_XR_ML_localization_map(_) \
    _(xrEnableLocalizationEventsML, XrResult, 2)
 \
    _(xrQueryLocalizationMapsML, XrResult, 5)
 \
    _(xrRequestMapLocalizationML, XrResult, 2)
 \
    _(xrImportLocalizationMapML, XrResult, 3)
 \
    _(xrCreateExportedLocalizationMapML, XrResult, 3)
 \
    _(xrDestroyExportedLocalizationMapML, XrResult, 1)
 \
    _(xrGetExportedLocalizationMapDataML, XrResult, 4)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_ML_localization_map(_)
#else
#define XRT_FUNCTION_LIST_XR_ML_localization_map(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_ML_localization_map(_) \
    _(xrEnableLocalizationEventsML) \
    _(xrQueryLocalizationMapsML) \
    _(xrRequestMapLocalizationML) \
    _(xrImportLocalizationMapML) \
    _(xrCreateExportedLocalizationMapML) \
    _(xrDestroyExportedLocalizationMapML) \
    _(xrGetExportedLocalizationMapDataML) 
#endif
#ifdef XRT_ENABLE_XR_ML_spatial_anchors
#define XRT_FUNCTION_LIST_XR_ML_spatial_anchors(_) \
    _(xrCreateSpatialAnchorsAsyncML, XrResult, 3)
 \
    _(xrCreateSpatialAnchorsCompleteML, XrResult, 3)
 \
    _(xrGetSpatialAnchorStateML, XrResult, 2)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_ML_spatial_anchors(_)
#else
#define XRT_FUNCTION_LIST_XR_ML_spatial_anchors(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_ML_spatial_anchors(_) \
    _(xrCreateSpatialAnchorsAsyncML) \
    _(xrCreateSpatialAnchorsCompleteML) \
    _(xrGetSpatialAnchorStateML) 
#endif
#ifdef XRT_ENABLE_XR_ML_spatial_anchors_storage
#define XRT_FUNCTION_LIST_XR_ML_spatial_anchors_storage(_) \
    _(xrCreateSpatialAnchorsStorageML, XrResult, 3)
 \
    _(xrDestroySpatialAnchorsStorageML, XrResult, 1)
 \
    _(xrQuerySpatialAnchorsAsyncML, XrResult, 3)
 \
    _(xrQuerySpatialAnchorsCompleteML, XrResult, 3)
 \
    _(xrPublishSpatialAnchorsAsyncML, XrResult, 3)
 \
    _(xrPublishSpatialAnchorsCompleteML, XrResult, 3)
 \
    _(xrDeleteSpatialAnchorsAsyncML, XrResult, 3)
 \
    _(xrDeleteSpatialAnchorsCompleteML, XrResult, 3)
 \
    _(xrUpdateSpatialAnchorsExpirationAsyncML, XrResult, 3)
 \
    _(xrUpdateSpatialAnchorsExpirationCompleteML, XrResult, 3)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_ML_spatial_anchors_storage(_)
#else
#define XRT_FUNCTION_LIST_XR_ML_spatial_anchors_storage(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_ML_spatial_anchors_storage(_) \
    _(xrCreateSpatialAnchorsStorageML) \
    _(xrDestroySpatialAnchorsStorageML) \
    _(xrQuerySpatialAnchorsAsyncML) \
    _(xrQuerySpatialAnchorsCompleteML) \
    _(xrPublishSpatialAnchorsAsyncML) \
    _(xrPublishSpatialAnchorsCompleteML) \
    _(xrDeleteSpatialAnchorsAsyncML) \
    _(xrDeleteSpatialAnchorsCompleteML) \
    _(xrUpdateSpatialAnchorsExpirationAsyncML) \
    _(xrUpdateSpatialAnchorsExpirationCompleteML) 
#endif
#ifdef XRT_ENABLE_XR_ML_user_calibration
#define XRT_FUNCTION_LIST_XR_ML_user_calibration(_) \
    _(xrEnableUserCalibrationEventsML, XrResult, 2)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_ML_user_calibration(_)
#else
#define XRT_FUNCTION_LIST_XR_ML_user_calibration(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_ML_user_calibration(_) \
    _(xrEnableUserCalibrationEventsML) 
#endif
#ifdef XRT_ENABLE_XR_MSFT_spatial_anchor_persistence
#define XRT_FUNCTION_LIST_XR_MSFT_spatial_anchor_persistence(_) \
    _(xrCreateSpatialAnchorStoreConnectionMSFT, XrResult, 2)
 \
    _(xrDestroySpatialAnchorStoreConnectionMSFT, XrResult, 1)
 \
    _(xrPersistSpatialAnchorMSFT, XrResult, 2)
 \
    _(xrEnumeratePersistedSpatialAnchorNamesMSFT, XrResult, 4)
 \
    _(xrCreateSpatialAnchorFromPersistedNameMSFT, XrResult, 3)
 \
    _(xrUnpersistSpatialAnchorMSFT, XrResult, 2)
 \
    _(xrClearSpatialAnchorStoreMSFT, XrResult, 1)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_MSFT_spatial_anchor_persistence(_)
#else
#define XRT_FUNCTION_LIST_XR_MSFT_spatial_anchor_persistence(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_MSFT_spatial_anchor_persistence(_) \
    _(xrCreateSpatialAnchorStoreConnectionMSFT) \
    _(xrDestroySpatialAnchorStoreConnectionMSFT) \
    _(xrPersistSpatialAnchorMSFT) \
    _(xrEnumeratePersistedSpatialAnchorNamesMSFT) \
    _(xrCreateSpatialAnchorFromPersistedNameMSFT) \
    _(xrUnpersistSpatialAnchorMSFT) \
    _(xrClearSpatialAnchorStoreMSFT) 
#endif
#ifdef XRT_ENABLE_XR_MSFT_scene_marker
#define XRT_FUNCTION_LIST_XR_MSFT_scene_marker(_) \
    _(xrGetSceneMarkerRawDataMSFT, XrResult, 5)
 \
    _(xrGetSceneMarkerDecodedStringMSFT, XrResult, 5)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_MSFT_scene_marker(_)
#else
#define XRT_FUNCTION_LIST_XR_MSFT_scene_marker(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_MSFT_scene_marker(_) \
    _(xrGetSceneMarkerRawDataMSFT) \
    _(xrGetSceneMarkerDecodedStringMSFT) 
#endif
#ifdef XRT_ENABLE_XR_KHR_extended_struct_name_lengths
#define XRT_FUNCTION_LIST_XR_KHR_extended_struct_name_lengths(_) \
    _(xrStructureTypeToString2KHR, XrResult, 3)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_KHR_extended_struct_name_lengths(_)
#else
#define XRT_FUNCTION_LIST_XR_KHR_extended_struct_name_lengths(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_KHR_extended_struct_name_lengths(_) \
    _(xrStructureTypeToString2KHR) 
#endif
#ifdef XRT_ENABLE_XR_FB_spatial_entity_query
#define XRT_FUNCTION_LIST_XR_FB_spatial_entity_query(_) \
    _(xrQuerySpacesFB, XrResult, 3)
 \
    _(xrRetrieveSpaceQueryResultsFB, XrResult, 3)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_spatial_entity_query(_)
#else
#define XRT_FUNCTION_LIST_XR_FB_spatial_entity_query(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_spatial_entity_query(_) \
    _(xrQuerySpacesFB) \
    _(xrRetrieveSpaceQueryResultsFB) 
#endif
#ifdef XRT_ENABLE_XR_FB_spatial_entity_storage
#define XRT_FUNCTION_LIST_XR_FB_spatial_entity_storage(_) \
    _(xrSaveSpaceFB, XrResult, 3)
 \
    _(xrEraseSpaceFB, XrResult, 3)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_spatial_entity_storage(_)
#else
#define XRT_FUNCTION_LIST_XR_FB_spatial_entity_storage(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_spatial_entity_storage(_) \
    _(xrSaveSpaceFB) \
    _(xrEraseSpaceFB) 
#endif
#ifdef XRT_ENABLE_XR_OCULUS_audio_device_guid
#define XRT_FUNCTION_LIST_XR_OCULUS_audio_device_guid(_) \
    _(xrGetAudioOutputDeviceGuidOculus, XrResult, 2)
 \
    _(xrGetAudioInputDeviceGuidOculus, XrResult, 2)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_OCULUS_audio_device_guid(_)
#else
#define XRT_FUNCTION_LIST_XR_OCULUS_audio_device_guid(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_OCULUS_audio_device_guid(_) \
    _(xrGetAudioOutputDeviceGuidOculus) \
    _(xrGetAudioInputDeviceGuidOculus) 
#endif
#define XRT_FUNCTION_LIST_XR_FB_foveation_vulkan(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_foveation_vulkan(_)
#define XRT_FUNCTION_LIST_XR_FB_swapchain_update_state_android_surface(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_swapchain_update_state_android_surface(_)
#define XRT_FUNCTION_LIST_XR_FB_swapchain_update_state_opengl_es(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_swapchain_update_state_opengl_es(_)
#define XRT_FUNCTION_LIST_XR_FB_swapchain_update_state_vulkan(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_swapchain_update_state_vulkan(_)
#ifdef XRT_ENABLE_XR_FB_spatial_entity_sharing
#define XRT_FUNCTION_LIST_XR_FB_spatial_entity_sharing(_) \
    _(xrShareSpacesFB, XrResult, 3)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_spatial_entity_sharing(_)
#else
#define XRT_FUNCTION_LIST_XR_FB_spatial_entity_sharing(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_spatial_entity_sharing(_) \
    _(xrShareSpacesFB) 
#endif
#define XRT_FUNCTION_LIST_XR_FB_space_warp(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_space_warp(_)
#define XRT_FUNCTION_LIST_XR_FB_haptic_amplitude_envelope(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_haptic_amplitude_envelope(_)
#ifdef XRT_ENABLE_XR_FB_scene
#define XRT_FUNCTION_LIST_XR_FB_scene(_) \
    _(xrGetSpaceBoundingBox2DFB, XrResult, 3)
 \
    _(xrGetSpaceBoundingBox3DFB, XrResult, 3)
 \
    _(xrGetSpaceSemanticLabelsFB, XrResult, 3)
 \
    _(xrGetSpaceBoundary2DFB, XrResult, 3)
 \
    _(xrGetSpaceRoomLayoutFB, XrResult, 3)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_scene(_)
#else
#define XRT_FUNCTION_LIST_XR_FB_scene(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_scene(_) \
    _(xrGetSpaceBoundingBox2DFB) \
    _(xrGetSpaceBoundingBox3DFB) \
    _(xrGetSpaceSemanticLabelsFB) \
    _(xrGetSpaceBoundary2DFB) \
    _(xrGetSpaceRoomLayoutFB) 
#endif
#ifdef XRT_ENABLE_XR_ALMALENCE_digital_lens_control
#define XRT_FUNCTION_LIST_XR_ALMALENCE_digital_lens_control(_) \
    _(xrSetDigitalLensControlALMALENCE, XrResult, 2)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_ALMALENCE_digital_lens_control(_)
#else
#define XRT_FUNCTION_LIST_XR_ALMALENCE_digital_lens_control(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_ALMALENCE_digital_lens_control(_) \
    _(xrSetDigitalLensControlALMALENCE) 
#endif
#ifdef XRT_ENABLE_XR_FB_scene_capture
#define XRT_FUNCTION_LIST_XR_FB_scene_capture(_) \
    _(xrRequestSceneCaptureFB, XrResult, 3)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_scene_capture(_)
#else
#define XRT_FUNCTION_LIST_XR_FB_scene_capture(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_scene_capture(_) \
    _(xrRequestSceneCaptureFB) 
#endif
#ifdef XRT_ENABLE_XR_FB_spatial_entity_container
#define XRT_FUNCTION_LIST_XR_FB_spatial_entity_container(_) \
    _(xrGetSpaceContainerFB, XrResult, 3)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_spatial_entity_container(_)
#else
#define XRT_FUNCTION_LIST_XR_FB_spatial_entity_container(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_spatial_entity_container(_) \
    _(xrGetSpaceContainerFB) 
#endif
#ifdef XRT_ENABLE_XR_META_foveation_eye_tracked
#define XRT_FUNCTION_LIST_XR_META_foveation_eye_tracked(_) \
    _(xrGetFoveationEyeTrackedStateMETA, XrResult, 2)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_META_foveation_eye_tracked(_)
#else
#define XRT_FUNCTION_LIST_XR_META_foveation_eye_tracked(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_META_foveation_eye_tracked(_) \
    _(xrGetFoveationEyeTrackedStateMETA) 
#endif
#ifdef XRT_ENABLE_XR_FB_face_tracking
#define XRT_FUNCTION_LIST_XR_FB_face_tracking(_) \
    _(xrCreateFaceTrackerFB, XrResult, 3)
 \
    _(xrDestroyFaceTrackerFB, XrResult, 1)
 \
    _(xrGetFaceExpressionWeightsFB, XrResult, 3)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_face_tracking(_)
#else
#define XRT_FUNCTION_LIST_XR_FB_face_tracking(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_face_tracking(_) \
    _(xrCreateFaceTrackerFB) \
    _(xrDestroyFaceTrackerFB) \
    _(xrGetFaceExpressionWeightsFB) 
#endif
#ifdef XRT_ENABLE_XR_FB_eye_tracking_social
#define XRT_FUNCTION_LIST_XR_FB_eye_tracking_social(_) \
    _(xrCreateEyeTrackerFB, XrResult, 3)
 \
    _(xrDestroyEyeTrackerFB, XrResult, 1)
 \
    _(xrGetEyeGazesFB, XrResult, 3)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_eye_tracking_social(_)
#else
#define XRT_FUNCTION_LIST_XR_FB_eye_tracking_social(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_eye_tracking_social(_) \
    _(xrCreateEyeTrackerFB) \
    _(xrDestroyEyeTrackerFB) \
    _(xrGetEyeGazesFB) 
#endif
#ifdef XRT_ENABLE_XR_FB_passthrough_keyboard_hands
#define XRT_FUNCTION_LIST_XR_FB_passthrough_keyboard_hands(_) \
    _(xrPassthroughLayerSetKeyboardHandsIntensityFB, XrResult, 2)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_passthrough_keyboard_hands(_)
#else
#define XRT_FUNCTION_LIST_XR_FB_passthrough_keyboard_hands(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_passthrough_keyboard_hands(_) \
    _(xrPassthroughLayerSetKeyboardHandsIntensityFB) 
#endif
#define XRT_FUNCTION_LIST_XR_FB_composition_layer_settings(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_composition_layer_settings(_)
#ifdef XRT_ENABLE_XR_FB_haptic_pcm
#define XRT_FUNCTION_LIST_XR_FB_haptic_pcm(_) \
    _(xrGetDeviceSampleRateFB, XrResult, 3)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_haptic_pcm(_)
#else
#define XRT_FUNCTION_LIST_XR_FB_haptic_pcm(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_haptic_pcm(_) \
    _(xrGetDeviceSampleRateFB) 
#endif
#define XRT_FUNCTION_LIST_XR_EXT_frame_synthesis(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_EXT_frame_synthesis(_)
#define XRT_FUNCTION_LIST_XR_FB_composition_layer_depth_test(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_composition_layer_depth_test(_)
#define XRT_FUNCTION_LIST_XR_META_local_dimming(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_META_local_dimming(_)
#ifdef XRT_ENABLE_XR_META_passthrough_preferences
#define XRT_FUNCTION_LIST_XR_META_passthrough_preferences(_) \
    _(xrGetPassthroughPreferencesMETA, XrResult, 2)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_META_passthrough_preferences(_)
#else
#define XRT_FUNCTION_LIST_XR_META_passthrough_preferences(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_META_passthrough_preferences(_) \
    _(xrGetPassthroughPreferencesMETA) 
#endif
#ifdef XRT_ENABLE_XR_META_virtual_keyboard
#define XRT_FUNCTION_LIST_XR_META_virtual_keyboard(_) \
    _(xrCreateVirtualKeyboardMETA, XrResult, 3)
 \
    _(xrDestroyVirtualKeyboardMETA, XrResult, 1)
 \
    _(xrCreateVirtualKeyboardSpaceMETA, XrResult, 4)
 \
    _(xrSuggestVirtualKeyboardLocationMETA, XrResult, 2)
 \
    _(xrGetVirtualKeyboardScaleMETA, XrResult, 2)
 \
    _(xrSetVirtualKeyboardModelVisibilityMETA, XrResult, 2)
 \
    _(xrGetVirtualKeyboardModelAnimationStatesMETA, XrResult, 2)
 \
    _(xrGetVirtualKeyboardDirtyTexturesMETA, XrResult, 4)
 \
    _(xrGetVirtualKeyboardTextureDataMETA, XrResult, 3)
 \
    _(xrSendVirtualKeyboardInputMETA, XrResult, 3)
 \
    _(xrChangeVirtualKeyboardTextContextMETA, XrResult, 2)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_META_virtual_keyboard(_)
#else
#define XRT_FUNCTION_LIST_XR_META_virtual_keyboard(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_META_virtual_keyboard(_) \
    _(xrCreateVirtualKeyboardMETA) \
    _(xrDestroyVirtualKeyboardMETA) \
    _(xrCreateVirtualKeyboardSpaceMETA) \
    _(xrSuggestVirtualKeyboardLocationMETA) \
    _(xrGetVirtualKeyboardScaleMETA) \
    _(xrSetVirtualKeyboardModelVisibilityMETA) \
    _(xrGetVirtualKeyboardModelAnimationStatesMETA) \
    _(xrGetVirtualKeyboardDirtyTexturesMETA) \
    _(xrGetVirtualKeyboardTextureDataMETA) \
    _(xrSendVirtualKeyboardInputMETA) \
    _(xrChangeVirtualKeyboardTextContextMETA) 
#endif
#ifdef XRT_ENABLE_XR_OCULUS_external_camera
#define XRT_FUNCTION_LIST_XR_OCULUS_external_camera(_) \
    _(xrEnumerateExternalCamerasOCULUS, XrResult, 4)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_OCULUS_external_camera(_)
#else
#define XRT_FUNCTION_LIST_XR_OCULUS_external_camera(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_OCULUS_external_camera(_) \
    _(xrEnumerateExternalCamerasOCULUS) 
#endif
#define XRT_FUNCTION_LIST_XR_META_vulkan_swapchain_create_info(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_META_vulkan_swapchain_create_info(_)
#ifdef XRT_ENABLE_XR_META_performance_metrics
#define XRT_FUNCTION_LIST_XR_META_performance_metrics(_) \
    _(xrEnumeratePerformanceMetricsCounterPathsMETA, XrResult, 4)
 \
    _(xrSetPerformanceMetricsStateMETA, XrResult, 2)
 \
    _(xrGetPerformanceMetricsStateMETA, XrResult, 2)
 \
    _(xrQueryPerformanceMetricsCounterMETA, XrResult, 3)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_META_performance_metrics(_)
#else
#define XRT_FUNCTION_LIST_XR_META_performance_metrics(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_META_performance_metrics(_) \
    _(xrEnumeratePerformanceMetricsCounterPathsMETA) \
    _(xrSetPerformanceMetricsStateMETA) \
    _(xrGetPerformanceMetricsStateMETA) \
    _(xrQueryPerformanceMetricsCounterMETA) 
#endif
#ifdef XRT_ENABLE_XR_FB_spatial_entity_storage_batch
#define XRT_FUNCTION_LIST_XR_FB_spatial_entity_storage_batch(_) \
    _(xrSaveSpaceListFB, XrResult, 3)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_spatial_entity_storage_batch(_)
#else
#define XRT_FUNCTION_LIST_XR_FB_spatial_entity_storage_batch(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_spatial_entity_storage_batch(_) \
    _(xrSaveSpaceListFB) 
#endif
#ifdef XRT_ENABLE_XR_FB_spatial_entity_user
#define XRT_FUNCTION_LIST_XR_FB_spatial_entity_user(_) \
    _(xrCreateSpaceUserFB, XrResult, 3)
 \
    _(xrGetSpaceUserIdFB, XrResult, 2)
 \
    _(xrDestroySpaceUserFB, XrResult, 1)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_spatial_entity_user(_)
#else
#define XRT_FUNCTION_LIST_XR_FB_spatial_entity_user(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_spatial_entity_user(_) \
    _(xrCreateSpaceUserFB) \
    _(xrGetSpaceUserIdFB) \
    _(xrDestroySpaceUserFB) 
#endif
#define XRT_FUNCTION_LIST_XR_META_headset_id(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_META_headset_id(_)
#ifdef XRT_ENABLE_XR_META_recommended_layer_resolution
#define XRT_FUNCTION_LIST_XR_META_recommended_layer_resolution(_) \
    _(xrGetRecommendedLayerResolutionMETA, XrResult, 3)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_META_recommended_layer_resolution(_)
#else
#define XRT_FUNCTION_LIST_XR_META_recommended_layer_resolution(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_META_recommended_layer_resolution(_) \
    _(xrGetRecommendedLayerResolutionMETA) 
#endif
#ifdef XRT_ENABLE_XR_META_passthrough_color_lut
#define XRT_FUNCTION_LIST_XR_META_passthrough_color_lut(_) \
    _(xrCreatePassthroughColorLutMETA, XrResult, 3)
 \
    _(xrDestroyPassthroughColorLutMETA, XrResult, 1)
 \
    _(xrUpdatePassthroughColorLutMETA, XrResult, 2)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_META_passthrough_color_lut(_)
#else
#define XRT_FUNCTION_LIST_XR_META_passthrough_color_lut(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_META_passthrough_color_lut(_) \
    _(xrCreatePassthroughColorLutMETA) \
    _(xrDestroyPassthroughColorLutMETA) \
    _(xrUpdatePassthroughColorLutMETA) 
#endif
#ifdef XRT_ENABLE_XR_META_spatial_entity_mesh
#define XRT_FUNCTION_LIST_XR_META_spatial_entity_mesh(_) \
    _(xrGetSpaceTriangleMeshMETA, XrResult, 3)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_META_spatial_entity_mesh(_)
#else
#define XRT_FUNCTION_LIST_XR_META_spatial_entity_mesh(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_META_spatial_entity_mesh(_) \
    _(xrGetSpaceTriangleMeshMETA) 
#endif
#define XRT_FUNCTION_LIST_XR_META_body_tracking_full_body(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_META_body_tracking_full_body(_)
#define XRT_FUNCTION_LIST_XR_META_passthrough_layer_resumed_event(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_META_passthrough_layer_resumed_event(_)
#ifdef XRT_ENABLE_XR_FB_face_tracking2
#define XRT_FUNCTION_LIST_XR_FB_face_tracking2(_) \
    _(xrCreateFaceTracker2FB, XrResult, 3)
 \
    _(xrDestroyFaceTracker2FB, XrResult, 1)
 \
    _(xrGetFaceExpressionWeights2FB, XrResult, 3)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_face_tracking2(_)
#else
#define XRT_FUNCTION_LIST_XR_FB_face_tracking2(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_face_tracking2(_) \
    _(xrCreateFaceTracker2FB) \
    _(xrDestroyFaceTracker2FB) \
    _(xrGetFaceExpressionWeights2FB) 
#endif
#ifdef XRT_ENABLE_XR_META_spatial_entity_sharing
#define XRT_FUNCTION_LIST_XR_META_spatial_entity_sharing(_) \
    _(xrShareSpacesMETA, XrResult, 3)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_META_spatial_entity_sharing(_)
#else
#define XRT_FUNCTION_LIST_XR_META_spatial_entity_sharing(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_META_spatial_entity_sharing(_) \
    _(xrShareSpacesMETA) 
#endif
#ifdef XRT_ENABLE_XR_META_environment_depth
#define XRT_FUNCTION_LIST_XR_META_environment_depth(_) \
    _(xrCreateEnvironmentDepthProviderMETA, XrResult, 3)
 \
    _(xrDestroyEnvironmentDepthProviderMETA, XrResult, 1)
 \
    _(xrStartEnvironmentDepthProviderMETA, XrResult, 1)
 \
    _(xrStopEnvironmentDepthProviderMETA, XrResult, 1)
 \
    _(xrCreateEnvironmentDepthSwapchainMETA, XrResult, 3)
 \
    _(xrDestroyEnvironmentDepthSwapchainMETA, XrResult, 1)
 \
    _(xrEnumerateEnvironmentDepthSwapchainImagesMETA, XrResult, 4)
 \
    _(xrGetEnvironmentDepthSwapchainStateMETA, XrResult, 2)
 \
    _(xrAcquireEnvironmentDepthImageMETA, XrResult, 3)
 \
    _(xrSetEnvironmentDepthHandRemovalMETA, XrResult, 2)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_META_environment_depth(_)
#else
#define XRT_FUNCTION_LIST_XR_META_environment_depth(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_META_environment_depth(_) \
    _(xrCreateEnvironmentDepthProviderMETA) \
    _(xrDestroyEnvironmentDepthProviderMETA) \
    _(xrStartEnvironmentDepthProviderMETA) \
    _(xrStopEnvironmentDepthProviderMETA) \
    _(xrCreateEnvironmentDepthSwapchainMETA) \
    _(xrDestroyEnvironmentDepthSwapchainMETA) \
    _(xrEnumerateEnvironmentDepthSwapchainImagesMETA) \
    _(xrGetEnvironmentDepthSwapchainStateMETA) \
    _(xrAcquireEnvironmentDepthImageMETA) \
    _(xrSetEnvironmentDepthHandRemovalMETA) 
#endif
#ifdef XRT_ENABLE_XR_QCOM_tracking_optimization_settings
#define XRT_FUNCTION_LIST_XR_QCOM_tracking_optimization_settings(_) \
    _(xrSetTrackingOptimizationSettingsHintQCOM, XrResult, 3)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_QCOM_tracking_optimization_settings(_)
#else
#define XRT_FUNCTION_LIST_XR_QCOM_tracking_optimization_settings(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_QCOM_tracking_optimization_settings(_) \
    _(xrSetTrackingOptimizationSettingsHintQCOM) 
#endif
#ifdef XRT_ENABLE_XR_HTC_passthrough
#define XRT_FUNCTION_LIST_XR_HTC_passthrough(_) \
    _(xrCreatePassthroughHTC, XrResult, 3)
 \
    _(xrDestroyPassthroughHTC, XrResult, 1)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_HTC_passthrough(_)
#else
#define XRT_FUNCTION_LIST_XR_HTC_passthrough(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_HTC_passthrough(_) \
    _(xrCreatePassthroughHTC) \
    _(xrDestroyPassthroughHTC) 
#endif
#ifdef XRT_ENABLE_XR_HTC_foveation
#define XRT_FUNCTION_LIST_XR_HTC_foveation(_) \
    _(xrApplyFoveationHTC, XrResult, 2)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_HTC_foveation(_)
#else
#define XRT_FUNCTION_LIST_XR_HTC_foveation(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_HTC_foveation(_) \
    _(xrApplyFoveationHTC) 
#endif
#ifdef XRT_ENABLE_XR_HTC_anchor
#define XRT_FUNCTION_LIST_XR_HTC_anchor(_) \
    _(xrCreateSpatialAnchorHTC, XrResult, 3)
 \
    _(xrGetSpatialAnchorNameHTC, XrResult, 2)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_HTC_anchor(_)
#else
#define XRT_FUNCTION_LIST_XR_HTC_anchor(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_HTC_anchor(_) \
    _(xrCreateSpatialAnchorHTC) \
    _(xrGetSpatialAnchorNameHTC) 
#endif
#ifdef XRT_ENABLE_XR_HTC_body_tracking
#define XRT_FUNCTION_LIST_XR_HTC_body_tracking(_) \
    _(xrCreateBodyTrackerHTC, XrResult, 3)
 \
    _(xrDestroyBodyTrackerHTC, XrResult, 1)
 \
    _(xrLocateBodyJointsHTC, XrResult, 3)
 \
    _(xrGetBodySkeletonHTC, XrResult, 4)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_HTC_body_tracking(_)
#else
#define XRT_FUNCTION_LIST_XR_HTC_body_tracking(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_HTC_body_tracking(_) \
    _(xrCreateBodyTrackerHTC) \
    _(xrDestroyBodyTrackerHTC) \
    _(xrLocateBodyJointsHTC) \
    _(xrGetBodySkeletonHTC) 
#endif
#define XRT_FUNCTION_LIST_XR_EXT_active_action_set_priority(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_EXT_active_action_set_priority(_)
#ifdef XRT_ENABLE_XR_MNDX_force_feedback_curl
#define XRT_FUNCTION_LIST_XR_MNDX_force_feedback_curl(_) \
    _(xrApplyForceFeedbackCurlMNDX, XrResult, 2)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_MNDX_force_feedback_curl(_)
#else
#define XRT_FUNCTION_LIST_XR_MNDX_force_feedback_curl(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_MNDX_force_feedback_curl(_) \
    _(xrApplyForceFeedbackCurlMNDX) 
#endif
#ifdef XRT_ENABLE_XR_BD_body_tracking
#define XRT_FUNCTION_LIST_XR_BD_body_tracking(_) \
    _(xrCreateBodyTrackerBD, XrResult, 3)
 \
    _(xrDestroyBodyTrackerBD, XrResult, 1)
 \
    _(xrLocateBodyJointsBD, XrResult, 3)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_BD_body_tracking(_)
#else
#define XRT_FUNCTION_LIST_XR_BD_body_tracking(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_BD_body_tracking(_) \
    _(xrCreateBodyTrackerBD) \
    _(xrDestroyBodyTrackerBD) \
    _(xrLocateBodyJointsBD) 
#endif
#ifdef XRT_ENABLE_XR_BD_spatial_sensing
#define XRT_FUNCTION_LIST_XR_BD_spatial_sensing(_) \
    _(xrEnumerateSpatialEntityComponentTypesBD, XrResult, 5)
 \
    _(xrGetSpatialEntityUuidBD, XrResult, 3)
 \
    _(xrGetSpatialEntityComponentDataBD, XrResult, 3)
 \
    _(xrCreateSenseDataProviderBD, XrResult, 3)
 \
    _(xrStartSenseDataProviderAsyncBD, XrResult, 3)
 \
    _(xrStartSenseDataProviderCompleteBD, XrResult, 3)
 \
    _(xrGetSenseDataProviderStateBD, XrResult, 2)
 \
    _(xrQuerySenseDataAsyncBD, XrResult, 3)
 \
    _(xrQuerySenseDataCompleteBD, XrResult, 3)
 \
    _(xrDestroySenseDataSnapshotBD, XrResult, 1)
 \
    _(xrGetQueriedSenseDataBD, XrResult, 3)
 \
    _(xrStopSenseDataProviderBD, XrResult, 1)
 \
    _(xrDestroySenseDataProviderBD, XrResult, 1)
 \
    _(xrCreateSpatialEntityAnchorBD, XrResult, 3)
 \
    _(xrDestroyAnchorBD, XrResult, 1)
 \
    _(xrGetAnchorUuidBD, XrResult, 2)
 \
    _(xrCreateAnchorSpaceBD, XrResult, 3)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_BD_spatial_sensing(_)
#else
#define XRT_FUNCTION_LIST_XR_BD_spatial_sensing(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_BD_spatial_sensing(_) \
    _(xrEnumerateSpatialEntityComponentTypesBD) \
    _(xrGetSpatialEntityUuidBD) \
    _(xrGetSpatialEntityComponentDataBD) \
    _(xrCreateSenseDataProviderBD) \
    _(xrStartSenseDataProviderAsyncBD) \
    _(xrStartSenseDataProviderCompleteBD) \
    _(xrGetSenseDataProviderStateBD) \
    _(xrQuerySenseDataAsyncBD) \
    _(xrQuerySenseDataCompleteBD) \
    _(xrDestroySenseDataSnapshotBD) \
    _(xrGetQueriedSenseDataBD) \
    _(xrStopSenseDataProviderBD) \
    _(xrDestroySenseDataProviderBD) \
    _(xrCreateSpatialEntityAnchorBD) \
    _(xrDestroyAnchorBD) \
    _(xrGetAnchorUuidBD) \
    _(xrCreateAnchorSpaceBD) 
#endif
#ifdef XRT_ENABLE_XR_BD_spatial_anchor
#define XRT_FUNCTION_LIST_XR_BD_spatial_anchor(_) \
    _(xrCreateSpatialAnchorAsyncBD, XrResult, 3)
 \
    _(xrCreateSpatialAnchorCompleteBD, XrResult, 3)
 \
    _(xrPersistSpatialAnchorAsyncBD, XrResult, 3)
 \
    _(xrPersistSpatialAnchorCompleteBD, XrResult, 3)
 \
    _(xrUnpersistSpatialAnchorAsyncBD, XrResult, 3)
 \
    _(xrUnpersistSpatialAnchorCompleteBD, XrResult, 3)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_BD_spatial_anchor(_)
#else
#define XRT_FUNCTION_LIST_XR_BD_spatial_anchor(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_BD_spatial_anchor(_) \
    _(xrCreateSpatialAnchorAsyncBD) \
    _(xrCreateSpatialAnchorCompleteBD) \
    _(xrPersistSpatialAnchorAsyncBD) \
    _(xrPersistSpatialAnchorCompleteBD) \
    _(xrUnpersistSpatialAnchorAsyncBD) \
    _(xrUnpersistSpatialAnchorCompleteBD) 
#endif
#ifdef XRT_ENABLE_XR_BD_spatial_anchor_sharing
#define XRT_FUNCTION_LIST_XR_BD_spatial_anchor_sharing(_) \
    _(xrShareSpatialAnchorAsyncBD, XrResult, 3)
 \
    _(xrShareSpatialAnchorCompleteBD, XrResult, 3)
 \
    _(xrDownloadSharedSpatialAnchorAsyncBD, XrResult, 3)
 \
    _(xrDownloadSharedSpatialAnchorCompleteBD, XrResult, 3)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_BD_spatial_anchor_sharing(_)
#else
#define XRT_FUNCTION_LIST_XR_BD_spatial_anchor_sharing(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_BD_spatial_anchor_sharing(_) \
    _(xrShareSpatialAnchorAsyncBD) \
    _(xrShareSpatialAnchorCompleteBD) \
    _(xrDownloadSharedSpatialAnchorAsyncBD) \
    _(xrDownloadSharedSpatialAnchorCompleteBD) 
#endif
#ifdef XRT_ENABLE_XR_BD_spatial_scene
#define XRT_FUNCTION_LIST_XR_BD_spatial_scene(_) \
    _(xrCaptureSceneAsyncBD, XrResult, 3)
 \
    _(xrCaptureSceneCompleteBD, XrResult, 3)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_BD_spatial_scene(_)
#else
#define XRT_FUNCTION_LIST_XR_BD_spatial_scene(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_BD_spatial_scene(_) \
    _(xrCaptureSceneAsyncBD) \
    _(xrCaptureSceneCompleteBD) 
#endif
#define XRT_FUNCTION_LIST_XR_BD_spatial_mesh(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_BD_spatial_mesh(_)
#define XRT_FUNCTION_LIST_XR_BD_future_progress(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_BD_future_progress(_)
#define XRT_FUNCTION_LIST_XR_EXT_hand_tracking_data_source(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_EXT_hand_tracking_data_source(_)
#ifdef XRT_ENABLE_XR_EXT_plane_detection
#define XRT_FUNCTION_LIST_XR_EXT_plane_detection(_) \
    _(xrCreatePlaneDetectorEXT, XrResult, 3)
 \
    _(xrDestroyPlaneDetectorEXT, XrResult, 1)
 \
    _(xrBeginPlaneDetectionEXT, XrResult, 2)
 \
    _(xrGetPlaneDetectionStateEXT, XrResult, 2)
 \
    _(xrGetPlaneDetectionsEXT, XrResult, 3)
 \
    _(xrGetPlanePolygonBufferEXT, XrResult, 4)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_EXT_plane_detection(_)
#else
#define XRT_FUNCTION_LIST_XR_EXT_plane_detection(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_EXT_plane_detection(_) \
    _(xrCreatePlaneDetectorEXT) \
    _(xrDestroyPlaneDetectorEXT) \
    _(xrBeginPlaneDetectionEXT) \
    _(xrGetPlaneDetectionStateEXT) \
    _(xrGetPlaneDetectionsEXT) \
    _(xrGetPlanePolygonBufferEXT) 
#endif
#ifdef XRT_ENABLE_XR_EXT_future
#define XRT_FUNCTION_LIST_XR_EXT_future(_) \
    _(xrPollFutureEXT, XrResult, 3)
 \
    _(xrCancelFutureEXT, XrResult, 2)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_EXT_future(_)
#else
#define XRT_FUNCTION_LIST_XR_EXT_future(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_EXT_future(_) \
    _(xrPollFutureEXT) \
    _(xrCancelFutureEXT) 
#endif
#define XRT_FUNCTION_LIST_XR_EXT_user_presence(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_EXT_user_presence(_)
#ifdef XRT_ENABLE_XR_ML_system_notifications
#define XRT_FUNCTION_LIST_XR_ML_system_notifications(_) \
    _(xrSetSystemNotificationsML, XrResult, 2)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_ML_system_notifications(_)
#else
#define XRT_FUNCTION_LIST_XR_ML_system_notifications(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_ML_system_notifications(_) \
    _(xrSetSystemNotificationsML) 
#endif
#ifdef XRT_ENABLE_XR_ML_world_mesh_detection
#define XRT_FUNCTION_LIST_XR_ML_world_mesh_detection(_) \
    _(xrCreateWorldMeshDetectorML, XrResult, 3)
 \
    _(xrDestroyWorldMeshDetectorML, XrResult, 1)
 \
    _(xrRequestWorldMeshStateAsyncML, XrResult, 3)
 \
    _(xrRequestWorldMeshStateCompleteML, XrResult, 3)
 \
    _(xrGetWorldMeshBufferRecommendSizeML, XrResult, 3)
 \
    _(xrAllocateWorldMeshBufferML, XrResult, 3)
 \
    _(xrFreeWorldMeshBufferML, XrResult, 2)
 \
    _(xrRequestWorldMeshAsyncML, XrResult, 4)
 \
    _(xrRequestWorldMeshCompleteML, XrResult, 4)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_ML_world_mesh_detection(_)
#else
#define XRT_FUNCTION_LIST_XR_ML_world_mesh_detection(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_ML_world_mesh_detection(_) \
    _(xrCreateWorldMeshDetectorML) \
    _(xrDestroyWorldMeshDetectorML) \
    _(xrRequestWorldMeshStateAsyncML) \
    _(xrRequestWorldMeshStateCompleteML) \
    _(xrGetWorldMeshBufferRecommendSizeML) \
    _(xrAllocateWorldMeshBufferML) \
    _(xrFreeWorldMeshBufferML) \
    _(xrRequestWorldMeshAsyncML) \
    _(xrRequestWorldMeshCompleteML) 
#endif
#ifdef XRT_ENABLE_XR_ML_facial_expression
#define XRT_FUNCTION_LIST_XR_ML_facial_expression(_) \
    _(xrCreateFacialExpressionClientML, XrResult, 3)
 \
    _(xrDestroyFacialExpressionClientML, XrResult, 1)
 \
    _(xrGetFacialExpressionBlendShapePropertiesML, XrResult, 4)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_ML_facial_expression(_)
#else
#define XRT_FUNCTION_LIST_XR_ML_facial_expression(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_ML_facial_expression(_) \
    _(xrCreateFacialExpressionClientML) \
    _(xrDestroyFacialExpressionClientML) \
    _(xrGetFacialExpressionBlendShapePropertiesML) 
#endif
#ifdef XRT_ENABLE_XR_META_simultaneous_hands_and_controllers
#define XRT_FUNCTION_LIST_XR_META_simultaneous_hands_and_controllers(_) \
    _(xrResumeSimultaneousHandsAndControllersTrackingMETA, XrResult, 2)
 \
    _(xrPauseSimultaneousHandsAndControllersTrackingMETA, XrResult, 2)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_META_simultaneous_hands_and_controllers(_)
#else
#define XRT_FUNCTION_LIST_XR_META_simultaneous_hands_and_controllers(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_META_simultaneous_hands_and_controllers(_) \
    _(xrResumeSimultaneousHandsAndControllersTrackingMETA) \
    _(xrPauseSimultaneousHandsAndControllersTrackingMETA) 
#endif
#ifdef XRT_ENABLE_XR_META_colocation_discovery
#define XRT_FUNCTION_LIST_XR_META_colocation_discovery(_) \
    _(xrStartColocationDiscoveryMETA, XrResult, 3)
 \
    _(xrStopColocationDiscoveryMETA, XrResult, 3)
 \
    _(xrStartColocationAdvertisementMETA, XrResult, 3)
 \
    _(xrStopColocationAdvertisementMETA, XrResult, 3)
 
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_META_colocation_discovery(_)
#else
#define XRT_FUNCTION_LIST_XR_META_colocation_discovery(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_META_colocation_discovery(_) \
    _(xrStartColocationDiscoveryMETA) \
    _(xrStopColocationDiscoveryMETA) \
    _(xrStartColocationAdvertisementMETA) \
    _(xrStopColocationAdvertisementMETA) 
#endif
#define XRT_FUNCTION_LIST_XR_META_spatial_entity_group_sharing(_)
#define XRT_FUNCTION_LIST_UNAVAILABLE_XR_META_spatial_entity_group_sharing(_)

// List of base functions and all enabled extension functions
#define XRT_FUNCTION_LIST_ALL(_) \
    _(xrAcquireSwapchainImage, XrResult, 3)
 \
    _(xrApplyHapticFeedback, XrResult, 3)
 \
    _(xrAttachSessionActionSets, XrResult, 2)
 \
    _(xrBeginFrame, XrResult, 2)
 \
    _(xrBeginSession, XrResult, 2)
 \
    _(xrCreateAction, XrResult, 3)
 \
    _(xrCreateActionSet, XrResult, 3)
 \
    _(xrCreateActionSpace, XrResult, 3)
 \
    _(xrCreateApiLayerInstance, XrResult, 3)
 \
    _(xrCreateInstance, XrResult, 2)
 \
    _(xrCreateReferenceSpace, XrResult, 3)
 \
    _(xrCreateSession, XrResult, 3)
 \
    _(xrCreateSwapchain, XrResult, 3)
 \
    _(xrDestroyAction, XrResult, 1)
 \
    _(xrDestroyActionSet, XrResult, 1)
 \
    _(xrDestroyInstance, XrResult, 1)
 \
    _(xrDestroySession, XrResult, 1)
 \
    _(xrDestroySpace, XrResult, 1)
 \
    _(xrDestroySwapchain, XrResult, 1)
 \
    _(xrEndFrame, XrResult, 2)
 \
    _(xrEndSession, XrResult, 1)
 \
    _(xrEnumerateApiLayerProperties, XrResult, 3)
 \
    _(xrEnumerateBoundSourcesForAction, XrResult, 5)
 \
    _(xrEnumerateEnvironmentBlendModes, XrResult, 6)
 \
    _(xrEnumerateInstanceExtensionProperties, XrResult, 4)
 \
    _(xrEnumerateReferenceSpaces, XrResult, 4)
 \
    _(xrEnumerateSwapchainFormats, XrResult, 4)
 \
    _(xrEnumerateSwapchainImages, XrResult, 4)
 \
    _(xrEnumerateViewConfigurationViews, XrResult, 6)
 \
    _(xrEnumerateViewConfigurations, XrResult, 5)
 \
    _(xrGetActionStateBoolean, XrResult, 3)
 \
    _(xrGetActionStateFloat, XrResult, 3)
 \
    _(xrGetActionStatePose, XrResult, 3)
 \
    _(xrGetActionStateVector2f, XrResult, 3)
 \
    _(xrGetCurrentInteractionProfile, XrResult, 3)
 \
    _(xrGetInputSourceLocalizedName, XrResult, 5)
 \
    _(xrGetInstanceProcAddr, XrResult, 3)
 \
    _(xrGetInstanceProperties, XrResult, 2)
 \
    _(xrGetReferenceSpaceBoundsRect, XrResult, 3)
 \
    _(xrGetSystem, XrResult, 3)
 \
    _(xrGetSystemProperties, XrResult, 3)
 \
    _(xrGetViewConfigurationProperties, XrResult, 4)
 \
    _(xrLocateSpace, XrResult, 4)
 \
    _(xrLocateSpaces, XrResult, 3)
 \
    _(xrLocateViews, XrResult, 6)
 \
    _(xrNegotiateLoaderApiLayerInterface, XrResult, 3)
 \
    _(xrNegotiateLoaderRuntimeInterface, XrResult, 2)
 \
    _(xrPathToString, XrResult, 5)
 \
    _(xrPollEvent, XrResult, 2)
 \
    _(xrReleaseSwapchainImage, XrResult, 2)
 \
    _(xrRequestExitSession, XrResult, 1)
 \
    _(xrResultToString, XrResult, 3)
 \
    _(xrStopHapticFeedback, XrResult, 2)
 \
    _(xrStringToPath, XrResult, 3)
 \
    _(xrStructureTypeToString, XrResult, 3)
 \
    _(xrSuggestInteractionProfileBindings, XrResult, 2)
 \
    _(xrSyncActions, XrResult, 2)
 \
    _(xrWaitFrame, XrResult, 3)
 \
    _(xrWaitSwapchainImage, XrResult, 2)
 \
    XRT_FUNCTION_LIST_XR_KHR_android_thread_settings(_) \
    XRT_FUNCTION_LIST_XR_KHR_android_surface_swapchain(_) \
    XRT_FUNCTION_LIST_XR_KHR_composition_layer_cube(_) \
    XRT_FUNCTION_LIST_XR_KHR_android_create_instance(_) \
    XRT_FUNCTION_LIST_XR_KHR_composition_layer_depth(_) \
    XRT_FUNCTION_LIST_XR_KHR_vulkan_swapchain_format_list(_) \
    XRT_FUNCTION_LIST_XR_EXT_performance_settings(_) \
    XRT_FUNCTION_LIST_XR_EXT_thermal_query(_) \
    XRT_FUNCTION_LIST_XR_KHR_composition_layer_cylinder(_) \
    XRT_FUNCTION_LIST_XR_KHR_composition_layer_equirect(_) \
    XRT_FUNCTION_LIST_XR_EXT_debug_utils(_) \
    XRT_FUNCTION_LIST_XR_KHR_opengl_enable(_) \
    XRT_FUNCTION_LIST_XR_KHR_opengl_es_enable(_) \
    XRT_FUNCTION_LIST_XR_KHR_vulkan_enable(_) \
    XRT_FUNCTION_LIST_XR_KHR_D3D11_enable(_) \
    XRT_FUNCTION_LIST_XR_KHR_D3D12_enable(_) \
    XRT_FUNCTION_LIST_XR_KHR_metal_enable(_) \
    XRT_FUNCTION_LIST_XR_EXT_eye_gaze_interaction(_) \
    XRT_FUNCTION_LIST_XR_KHR_visibility_mask(_) \
    XRT_FUNCTION_LIST_XR_EXTX_overlay(_) \
    XRT_FUNCTION_LIST_XR_KHR_composition_layer_color_scale_bias(_) \
    XRT_FUNCTION_LIST_XR_KHR_win32_convert_performance_counter_time(_) \
    XRT_FUNCTION_LIST_XR_KHR_convert_timespec_time(_) \
    XRT_FUNCTION_LIST_XR_MSFT_spatial_anchor(_) \
    XRT_FUNCTION_LIST_XR_FB_composition_layer_image_layout(_) \
    XRT_FUNCTION_LIST_XR_FB_composition_layer_alpha_blend(_) \
    XRT_FUNCTION_LIST_XR_EXT_view_configuration_depth_range(_) \
    XRT_FUNCTION_LIST_XR_EXT_conformance_automation(_) \
    XRT_FUNCTION_LIST_XR_MNDX_egl_enable(_) \
    XRT_FUNCTION_LIST_XR_MSFT_spatial_graph_bridge(_) \
    XRT_FUNCTION_LIST_XR_EXT_hand_tracking(_) \
    XRT_FUNCTION_LIST_XR_MSFT_hand_tracking_mesh(_) \
    XRT_FUNCTION_LIST_XR_MSFT_secondary_view_configuration(_) \
    XRT_FUNCTION_LIST_XR_MSFT_controller_model(_) \
    XRT_FUNCTION_LIST_XR_MSFT_perception_anchor_interop(_) \
    XRT_FUNCTION_LIST_XR_EPIC_view_configuration_fov(_) \
    XRT_FUNCTION_LIST_XR_MSFT_holographic_window_attachment(_) \
    XRT_FUNCTION_LIST_XR_MSFT_composition_layer_reprojection(_) \
    XRT_FUNCTION_LIST_XR_FB_android_surface_swapchain_create(_) \
    XRT_FUNCTION_LIST_XR_FB_swapchain_update_state(_) \
    XRT_FUNCTION_LIST_XR_FB_composition_layer_secure_content(_) \
    XRT_FUNCTION_LIST_XR_FB_body_tracking(_) \
    XRT_FUNCTION_LIST_XR_EXT_dpad_binding(_) \
    XRT_FUNCTION_LIST_XR_VALVE_analog_threshold(_) \
    XRT_FUNCTION_LIST_XR_EXT_hand_joints_motion_range(_) \
    XRT_FUNCTION_LIST_XR_KHR_loader_init(_) \
    XRT_FUNCTION_LIST_XR_KHR_loader_init_android(_) \
    XRT_FUNCTION_LIST_XR_KHR_vulkan_enable2(_) \
    XRT_FUNCTION_LIST_XR_KHR_composition_layer_equirect2(_) \
    XRT_FUNCTION_LIST_XR_MSFT_scene_understanding(_) \
    XRT_FUNCTION_LIST_XR_MSFT_scene_understanding_serialization(_) \
    XRT_FUNCTION_LIST_XR_FB_display_refresh_rate(_) \
    XRT_FUNCTION_LIST_XR_HTCX_vive_tracker_interaction(_) \
    XRT_FUNCTION_LIST_XR_HTC_facial_tracking(_) \
    XRT_FUNCTION_LIST_XR_FB_color_space(_) \
    XRT_FUNCTION_LIST_XR_FB_hand_tracking_mesh(_) \
    XRT_FUNCTION_LIST_XR_FB_hand_tracking_aim(_) \
    XRT_FUNCTION_LIST_XR_FB_hand_tracking_capsules(_) \
    XRT_FUNCTION_LIST_XR_FB_spatial_entity(_) \
    XRT_FUNCTION_LIST_XR_FB_foveation(_) \
    XRT_FUNCTION_LIST_XR_FB_foveation_configuration(_) \
    XRT_FUNCTION_LIST_XR_FB_keyboard_tracking(_) \
    XRT_FUNCTION_LIST_XR_FB_triangle_mesh(_) \
    XRT_FUNCTION_LIST_XR_FB_passthrough(_) \
    XRT_FUNCTION_LIST_XR_FB_render_model(_) \
    XRT_FUNCTION_LIST_XR_KHR_binding_modification(_) \
    XRT_FUNCTION_LIST_XR_VARJO_foveated_rendering(_) \
    XRT_FUNCTION_LIST_XR_VARJO_composition_layer_depth_test(_) \
    XRT_FUNCTION_LIST_XR_VARJO_environment_depth_estimation(_) \
    XRT_FUNCTION_LIST_XR_VARJO_marker_tracking(_) \
    XRT_FUNCTION_LIST_XR_VARJO_view_offset(_) \
    XRT_FUNCTION_LIST_XR_ML_frame_end_info(_) \
    XRT_FUNCTION_LIST_XR_ML_global_dimmer(_) \
    XRT_FUNCTION_LIST_XR_ML_compat(_) \
    XRT_FUNCTION_LIST_XR_ML_marker_understanding(_) \
    XRT_FUNCTION_LIST_XR_ML_localization_map(_) \
    XRT_FUNCTION_LIST_XR_ML_spatial_anchors(_) \
    XRT_FUNCTION_LIST_XR_ML_spatial_anchors_storage(_) \
    XRT_FUNCTION_LIST_XR_ML_user_calibration(_) \
    XRT_FUNCTION_LIST_XR_MSFT_spatial_anchor_persistence(_) \
    XRT_FUNCTION_LIST_XR_MSFT_scene_marker(_) \
    XRT_FUNCTION_LIST_XR_KHR_extended_struct_name_lengths(_) \
    XRT_FUNCTION_LIST_XR_FB_spatial_entity_query(_) \
    XRT_FUNCTION_LIST_XR_FB_spatial_entity_storage(_) \
    XRT_FUNCTION_LIST_XR_OCULUS_audio_device_guid(_) \
    XRT_FUNCTION_LIST_XR_FB_foveation_vulkan(_) \
    XRT_FUNCTION_LIST_XR_FB_swapchain_update_state_android_surface(_) \
    XRT_FUNCTION_LIST_XR_FB_swapchain_update_state_opengl_es(_) \
    XRT_FUNCTION_LIST_XR_FB_swapchain_update_state_vulkan(_) \
    XRT_FUNCTION_LIST_XR_FB_spatial_entity_sharing(_) \
    XRT_FUNCTION_LIST_XR_FB_space_warp(_) \
    XRT_FUNCTION_LIST_XR_FB_haptic_amplitude_envelope(_) \
    XRT_FUNCTION_LIST_XR_FB_scene(_) \
    XRT_FUNCTION_LIST_XR_ALMALENCE_digital_lens_control(_) \
    XRT_FUNCTION_LIST_XR_FB_scene_capture(_) \
    XRT_FUNCTION_LIST_XR_FB_spatial_entity_container(_) \
    XRT_FUNCTION_LIST_XR_META_foveation_eye_tracked(_) \
    XRT_FUNCTION_LIST_XR_FB_face_tracking(_) \
    XRT_FUNCTION_LIST_XR_FB_eye_tracking_social(_) \
    XRT_FUNCTION_LIST_XR_FB_passthrough_keyboard_hands(_) \
    XRT_FUNCTION_LIST_XR_FB_composition_layer_settings(_) \
    XRT_FUNCTION_LIST_XR_FB_haptic_pcm(_) \
    XRT_FUNCTION_LIST_XR_EXT_frame_synthesis(_) \
    XRT_FUNCTION_LIST_XR_FB_composition_layer_depth_test(_) \
    XRT_FUNCTION_LIST_XR_META_local_dimming(_) \
    XRT_FUNCTION_LIST_XR_META_passthrough_preferences(_) \
    XRT_FUNCTION_LIST_XR_META_virtual_keyboard(_) \
    XRT_FUNCTION_LIST_XR_OCULUS_external_camera(_) \
    XRT_FUNCTION_LIST_XR_META_vulkan_swapchain_create_info(_) \
    XRT_FUNCTION_LIST_XR_META_performance_metrics(_) \
    XRT_FUNCTION_LIST_XR_FB_spatial_entity_storage_batch(_) \
    XRT_FUNCTION_LIST_XR_FB_spatial_entity_user(_) \
    XRT_FUNCTION_LIST_XR_META_headset_id(_) \
    XRT_FUNCTION_LIST_XR_META_recommended_layer_resolution(_) \
    XRT_FUNCTION_LIST_XR_META_passthrough_color_lut(_) \
    XRT_FUNCTION_LIST_XR_META_spatial_entity_mesh(_) \
    XRT_FUNCTION_LIST_XR_META_body_tracking_full_body(_) \
    XRT_FUNCTION_LIST_XR_META_passthrough_layer_resumed_event(_) \
    XRT_FUNCTION_LIST_XR_FB_face_tracking2(_) \
    XRT_FUNCTION_LIST_XR_META_spatial_entity_sharing(_) \
    XRT_FUNCTION_LIST_XR_META_environment_depth(_) \
    XRT_FUNCTION_LIST_XR_QCOM_tracking_optimization_settings(_) \
    XRT_FUNCTION_LIST_XR_HTC_passthrough(_) \
    XRT_FUNCTION_LIST_XR_HTC_foveation(_) \
    XRT_FUNCTION_LIST_XR_HTC_anchor(_) \
    XRT_FUNCTION_LIST_XR_HTC_body_tracking(_) \
    XRT_FUNCTION_LIST_XR_EXT_active_action_set_priority(_) \
    XRT_FUNCTION_LIST_XR_MNDX_force_feedback_curl(_) \
    XRT_FUNCTION_LIST_XR_BD_body_tracking(_) \
    XRT_FUNCTION_LIST_XR_BD_spatial_sensing(_) \
    XRT_FUNCTION_LIST_XR_BD_spatial_anchor(_) \
    XRT_FUNCTION_LIST_XR_BD_spatial_anchor_sharing(_) \
    XRT_FUNCTION_LIST_XR_BD_spatial_scene(_) \
    XRT_FUNCTION_LIST_XR_BD_spatial_mesh(_) \
    XRT_FUNCTION_LIST_XR_BD_future_progress(_) \
    XRT_FUNCTION_LIST_XR_EXT_hand_tracking_data_source(_) \
    XRT_FUNCTION_LIST_XR_EXT_plane_detection(_) \
    XRT_FUNCTION_LIST_XR_EXT_future(_) \
    XRT_FUNCTION_LIST_XR_EXT_user_presence(_) \
    XRT_FUNCTION_LIST_XR_ML_system_notifications(_) \
    XRT_FUNCTION_LIST_XR_ML_world_mesh_detection(_) \
    XRT_FUNCTION_LIST_XR_ML_facial_expression(_) \
    XRT_FUNCTION_LIST_XR_META_simultaneous_hands_and_controllers(_) \
    XRT_FUNCTION_LIST_XR_META_colocation_discovery(_) \
    XRT_FUNCTION_LIST_XR_META_spatial_entity_group_sharing(_) \

// List of all non-enabled extension functions
#define XRT_FUNCTION_LIST_UNAVAILABLE(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_KHR_android_thread_settings(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_KHR_android_surface_swapchain(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_KHR_composition_layer_cube(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_KHR_android_create_instance(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_KHR_composition_layer_depth(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_KHR_vulkan_swapchain_format_list(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_EXT_performance_settings(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_EXT_thermal_query(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_KHR_composition_layer_cylinder(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_KHR_composition_layer_equirect(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_EXT_debug_utils(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_KHR_opengl_enable(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_KHR_opengl_es_enable(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_KHR_vulkan_enable(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_KHR_D3D11_enable(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_KHR_D3D12_enable(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_KHR_metal_enable(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_EXT_eye_gaze_interaction(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_KHR_visibility_mask(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_EXTX_overlay(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_KHR_composition_layer_color_scale_bias(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_KHR_win32_convert_performance_counter_time(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_KHR_convert_timespec_time(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_MSFT_spatial_anchor(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_composition_layer_image_layout(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_composition_layer_alpha_blend(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_EXT_view_configuration_depth_range(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_EXT_conformance_automation(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_MNDX_egl_enable(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_MSFT_spatial_graph_bridge(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_EXT_hand_tracking(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_MSFT_hand_tracking_mesh(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_MSFT_secondary_view_configuration(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_MSFT_controller_model(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_MSFT_perception_anchor_interop(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_EPIC_view_configuration_fov(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_MSFT_holographic_window_attachment(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_MSFT_composition_layer_reprojection(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_android_surface_swapchain_create(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_swapchain_update_state(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_composition_layer_secure_content(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_body_tracking(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_EXT_dpad_binding(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_VALVE_analog_threshold(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_EXT_hand_joints_motion_range(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_KHR_loader_init(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_KHR_loader_init_android(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_KHR_vulkan_enable2(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_KHR_composition_layer_equirect2(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_MSFT_scene_understanding(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_MSFT_scene_understanding_serialization(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_display_refresh_rate(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_HTCX_vive_tracker_interaction(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_HTC_facial_tracking(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_color_space(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_hand_tracking_mesh(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_hand_tracking_aim(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_hand_tracking_capsules(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_spatial_entity(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_foveation(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_foveation_configuration(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_keyboard_tracking(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_triangle_mesh(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_passthrough(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_render_model(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_KHR_binding_modification(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_VARJO_foveated_rendering(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_VARJO_composition_layer_depth_test(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_VARJO_environment_depth_estimation(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_VARJO_marker_tracking(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_VARJO_view_offset(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_ML_frame_end_info(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_ML_global_dimmer(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_ML_compat(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_ML_marker_understanding(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_ML_localization_map(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_ML_spatial_anchors(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_ML_spatial_anchors_storage(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_ML_user_calibration(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_MSFT_spatial_anchor_persistence(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_MSFT_scene_marker(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_KHR_extended_struct_name_lengths(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_spatial_entity_query(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_spatial_entity_storage(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_OCULUS_audio_device_guid(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_foveation_vulkan(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_swapchain_update_state_android_surface(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_swapchain_update_state_opengl_es(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_swapchain_update_state_vulkan(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_spatial_entity_sharing(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_space_warp(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_haptic_amplitude_envelope(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_scene(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_ALMALENCE_digital_lens_control(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_scene_capture(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_spatial_entity_container(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_META_foveation_eye_tracked(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_face_tracking(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_eye_tracking_social(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_passthrough_keyboard_hands(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_composition_layer_settings(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_haptic_pcm(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_EXT_frame_synthesis(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_composition_layer_depth_test(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_META_local_dimming(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_META_passthrough_preferences(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_META_virtual_keyboard(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_OCULUS_external_camera(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_META_vulkan_swapchain_create_info(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_META_performance_metrics(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_spatial_entity_storage_batch(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_spatial_entity_user(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_META_headset_id(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_META_recommended_layer_resolution(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_META_passthrough_color_lut(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_META_spatial_entity_mesh(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_META_body_tracking_full_body(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_META_passthrough_layer_resumed_event(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_FB_face_tracking2(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_META_spatial_entity_sharing(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_META_environment_depth(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_QCOM_tracking_optimization_settings(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_HTC_passthrough(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_HTC_foveation(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_HTC_anchor(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_HTC_body_tracking(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_EXT_active_action_set_priority(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_MNDX_force_feedback_curl(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_BD_body_tracking(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_BD_spatial_sensing(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_BD_spatial_anchor(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_BD_spatial_anchor_sharing(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_BD_spatial_scene(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_BD_spatial_mesh(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_BD_future_progress(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_EXT_hand_tracking_data_source(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_EXT_plane_detection(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_EXT_future(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_EXT_user_presence(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_ML_system_notifications(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_ML_world_mesh_detection(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_ML_facial_expression(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_META_simultaneous_hands_and_controllers(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_META_colocation_discovery(_) \
    XRT_FUNCTION_LIST_UNAVAILABLE_XR_META_spatial_entity_group_sharing(_) \

// Function parameter enumeration
#define XRT_ENUMERATE_xrSetAndroidApplicationThreadKHR(_) \
    _(session, XrSession, INOUT)
 \
    _(threadType, XrAndroidThreadTypeKHR, INOUT)
 \
    _(threadId, uint32_t, INOUT)
 
#define XRT_ENUMERATE_xrCreateSwapchainAndroidSurfaceKHR(_) \
    _(session, XrSession, INOUT)
 \
    _(info, const XrSwapchainCreateInfo*, INPUT)
 \
    _(swapchain, XrSwapchain*, OUTPUT)
 \
    _(surface, jobject*, OUTPUT)
 
#define XRT_ENUMERATE_xrPerfSettingsSetPerformanceLevelEXT(_) \
    _(session, XrSession, INOUT)
 \
    _(domain, XrPerfSettingsDomainEXT, INOUT)
 \
    _(level, XrPerfSettingsLevelEXT, INOUT)
 
#define XRT_ENUMERATE_xrThermalGetTemperatureTrendEXT(_) \
    _(session, XrSession, INOUT)
 \
    _(domain, XrPerfSettingsDomainEXT, INOUT)
 \
    _(notificationLevel, XrPerfSettingsNotificationLevelEXT*, OUTPUT)
 \
    _(tempHeadroom, float*, OUTPUT)
 \
    _(tempSlope, float*, OUTPUT)
 
#define XRT_ENUMERATE_xrSetDebugUtilsObjectNameEXT(_) \
    _(instance, XrInstance, INOUT)
 \
    _(nameInfo, const XrDebugUtilsObjectNameInfoEXT*, INPUT)
 
#define XRT_ENUMERATE_xrCreateDebugUtilsMessengerEXT(_) \
    _(instance, XrInstance, INOUT)
 \
    _(createInfo, const XrDebugUtilsMessengerCreateInfoEXT*, INPUT)
 \
    _(messenger, XrDebugUtilsMessengerEXT*, OUTPUT)
 
#define XRT_ENUMERATE_xrDestroyDebugUtilsMessengerEXT(_) \
    _(messenger, XrDebugUtilsMessengerEXT, INOUT)
 
#define XRT_ENUMERATE_xrSubmitDebugUtilsMessageEXT(_) \
    _(instance, XrInstance, INOUT)
 \
    _(messageSeverity, XrDebugUtilsMessageSeverityFlagsEXT, INOUT)
 \
    _(messageTypes, XrDebugUtilsMessageTypeFlagsEXT, INOUT)
 \
    _(callbackData, const XrDebugUtilsMessengerCallbackDataEXT*, INPUT)
 
#define XRT_ENUMERATE_xrSessionBeginDebugUtilsLabelRegionEXT(_) \
    _(session, XrSession, INOUT)
 \
    _(labelInfo, const XrDebugUtilsLabelEXT*, INPUT)
 
#define XRT_ENUMERATE_xrSessionEndDebugUtilsLabelRegionEXT(_) \
    _(session, XrSession, INOUT)
 
#define XRT_ENUMERATE_xrSessionInsertDebugUtilsLabelEXT(_) \
    _(session, XrSession, INOUT)
 \
    _(labelInfo, const XrDebugUtilsLabelEXT*, INPUT)
 
#define XRT_ENUMERATE_xrGetOpenGLGraphicsRequirementsKHR(_) \
    _(instance, XrInstance, INOUT)
 \
    _(systemId, XrSystemId, INOUT)
 \
    _(graphicsRequirements, XrGraphicsRequirementsOpenGLKHR*, OUTPUT)
 
#define XRT_ENUMERATE_xrGetOpenGLESGraphicsRequirementsKHR(_) \
    _(instance, XrInstance, INOUT)
 \
    _(systemId, XrSystemId, INOUT)
 \
    _(graphicsRequirements, XrGraphicsRequirementsOpenGLESKHR*, OUTPUT)
 
#define XRT_ENUMERATE_xrGetVulkanInstanceExtensionsKHR(_) \
    _(instance, XrInstance, INOUT)
 \
    _(systemId, XrSystemId, INOUT)
 \
    _(bufferCapacityInput, uint32_t, INOUT)
 \
    _(bufferCountOutput, uint32_t*, OUTPUT)
 \
    _(buffer, char*, OUTPUT)
 
#define XRT_ENUMERATE_xrGetVulkanDeviceExtensionsKHR(_) \
    _(instance, XrInstance, INOUT)
 \
    _(systemId, XrSystemId, INOUT)
 \
    _(bufferCapacityInput, uint32_t, INOUT)
 \
    _(bufferCountOutput, uint32_t*, OUTPUT)
 \
    _(buffer, char*, OUTPUT)
 
#define XRT_ENUMERATE_xrGetVulkanGraphicsDeviceKHR(_) \
    _(instance, XrInstance, INOUT)
 \
    _(systemId, XrSystemId, INOUT)
 \
    _(vkInstance, VkInstance, INOUT)
 \
    _(vkPhysicalDevice, VkPhysicalDevice*, OUTPUT)
 
#define XRT_ENUMERATE_xrGetVulkanGraphicsRequirementsKHR(_) \
    _(instance, XrInstance, INOUT)
 \
    _(systemId, XrSystemId, INOUT)
 \
    _(graphicsRequirements, XrGraphicsRequirementsVulkanKHR*, OUTPUT)
 
#define XRT_ENUMERATE_xrGetD3D11GraphicsRequirementsKHR(_) \
    _(instance, XrInstance, INOUT)
 \
    _(systemId, XrSystemId, INOUT)
 \
    _(graphicsRequirements, XrGraphicsRequirementsD3D11KHR*, OUTPUT)
 
#define XRT_ENUMERATE_xrGetD3D12GraphicsRequirementsKHR(_) \
    _(instance, XrInstance, INOUT)
 \
    _(systemId, XrSystemId, INOUT)
 \
    _(graphicsRequirements, XrGraphicsRequirementsD3D12KHR*, OUTPUT)
 
#define XRT_ENUMERATE_xrGetMetalGraphicsRequirementsKHR(_) \
    _(instance, XrInstance, INOUT)
 \
    _(systemId, XrSystemId, INOUT)
 \
    _(graphicsRequirements, XrGraphicsRequirementsMetalKHR*, OUTPUT)
 
#define XRT_ENUMERATE_xrGetVisibilityMaskKHR(_) \
    _(session, XrSession, INOUT)
 \
    _(viewConfigurationType, XrViewConfigurationType, INOUT)
 \
    _(viewIndex, uint32_t, INOUT)
 \
    _(visibilityMaskType, XrVisibilityMaskTypeKHR, INOUT)
 \
    _(visibilityMask, XrVisibilityMaskKHR*, OUTPUT)
 
#define XRT_ENUMERATE_xrConvertWin32PerformanceCounterToTimeKHR(_) \
    _(instance, XrInstance, INOUT)
 \
    _(performanceCounter, const LARGE_INTEGER*, INPUT)
 \
    _(time, XrTime*, OUTPUT)
 
#define XRT_ENUMERATE_xrConvertTimeToWin32PerformanceCounterKHR(_) \
    _(instance, XrInstance, INOUT)
 \
    _(time, XrTime, INOUT)
 \
    _(performanceCounter, LARGE_INTEGER*, OUTPUT)
 
#define XRT_ENUMERATE_xrConvertTimespecTimeToTimeKHR(_) \
    _(instance, XrInstance, INOUT)
 \
    _(timespecTime, const struct timespec*, INOUT)
 \
    _(time, XrTime*, OUTPUT)
 
#define XRT_ENUMERATE_xrConvertTimeToTimespecTimeKHR(_) \
    _(instance, XrInstance, INOUT)
 \
    _(time, XrTime, INOUT)
 \
    _(timespecTime, struct timespec*, INOUT)
 
#define XRT_ENUMERATE_xrCreateSpatialAnchorMSFT(_) \
    _(session, XrSession, INOUT)
 \
    _(createInfo, const XrSpatialAnchorCreateInfoMSFT*, INPUT)
 \
    _(anchor, XrSpatialAnchorMSFT*, OUTPUT)
 
#define XRT_ENUMERATE_xrCreateSpatialAnchorSpaceMSFT(_) \
    _(session, XrSession, INOUT)
 \
    _(createInfo, const XrSpatialAnchorSpaceCreateInfoMSFT*, INPUT)
 \
    _(space, XrSpace*, OUTPUT)
 
#define XRT_ENUMERATE_xrDestroySpatialAnchorMSFT(_) \
    _(anchor, XrSpatialAnchorMSFT, INOUT)
 
#define XRT_ENUMERATE_xrSetInputDeviceActiveEXT(_) \
    _(session, XrSession, INOUT)
 \
    _(interactionProfile, XrPath, INOUT)
 \
    _(topLevelPath, XrPath, INOUT)
 \
    _(isActive, XrBool32, INOUT)
 
#define XRT_ENUMERATE_xrSetInputDeviceStateBoolEXT(_) \
    _(session, XrSession, INOUT)
 \
    _(topLevelPath, XrPath, INOUT)
 \
    _(inputSourcePath, XrPath, INOUT)
 \
    _(state, XrBool32, INOUT)
 
#define XRT_ENUMERATE_xrSetInputDeviceStateFloatEXT(_) \
    _(session, XrSession, INOUT)
 \
    _(topLevelPath, XrPath, INOUT)
 \
    _(inputSourcePath, XrPath, INOUT)
 \
    _(state, float, INOUT)
 
#define XRT_ENUMERATE_xrSetInputDeviceStateVector2fEXT(_) \
    _(session, XrSession, INOUT)
 \
    _(topLevelPath, XrPath, INOUT)
 \
    _(inputSourcePath, XrPath, INOUT)
 \
    _(state, XrVector2f, INOUT)
 
#define XRT_ENUMERATE_xrSetInputDeviceLocationEXT(_) \
    _(session, XrSession, INOUT)
 \
    _(topLevelPath, XrPath, INOUT)
 \
    _(inputSourcePath, XrPath, INOUT)
 \
    _(space, XrSpace, INOUT)
 \
    _(pose, XrPosef, INOUT)
 
#define XRT_ENUMERATE_xrCreateSpatialGraphNodeSpaceMSFT(_) \
    _(session, XrSession, INOUT)
 \
    _(createInfo, const XrSpatialGraphNodeSpaceCreateInfoMSFT*, INPUT)
 \
    _(space, XrSpace*, OUTPUT)
 
#define XRT_ENUMERATE_xrTryCreateSpatialGraphStaticNodeBindingMSFT(_) \
    _(session, XrSession, INOUT)
 \
    _(createInfo, const XrSpatialGraphStaticNodeBindingCreateInfoMSFT*, INPUT)
 \
    _(nodeBinding, XrSpatialGraphNodeBindingMSFT*, OUTPUT)
 
#define XRT_ENUMERATE_xrDestroySpatialGraphNodeBindingMSFT(_) \
    _(nodeBinding, XrSpatialGraphNodeBindingMSFT, INOUT)
 
#define XRT_ENUMERATE_xrGetSpatialGraphNodeBindingPropertiesMSFT(_) \
    _(nodeBinding, XrSpatialGraphNodeBindingMSFT, INOUT)
 \
    _(getInfo, const XrSpatialGraphNodeBindingPropertiesGetInfoMSFT*, INPUT)
 \
    _(properties, XrSpatialGraphNodeBindingPropertiesMSFT*, OUTPUT)
 
#define XRT_ENUMERATE_xrCreateHandTrackerEXT(_) \
    _(session, XrSession, INOUT)
 \
    _(createInfo, const XrHandTrackerCreateInfoEXT*, INPUT)
 \
    _(handTracker, XrHandTrackerEXT*, OUTPUT)
 
#define XRT_ENUMERATE_xrDestroyHandTrackerEXT(_) \
    _(handTracker, XrHandTrackerEXT, INOUT)
 
#define XRT_ENUMERATE_xrLocateHandJointsEXT(_) \
    _(handTracker, XrHandTrackerEXT, INOUT)
 \
    _(locateInfo, const XrHandJointsLocateInfoEXT*, INPUT)
 \
    _(locations, XrHandJointLocationsEXT*, OUTPUT)
 
#define XRT_ENUMERATE_xrCreateHandMeshSpaceMSFT(_) \
    _(handTracker, XrHandTrackerEXT, INOUT)
 \
    _(createInfo, const XrHandMeshSpaceCreateInfoMSFT*, INPUT)
 \
    _(space, XrSpace*, OUTPUT)
 
#define XRT_ENUMERATE_xrUpdateHandMeshMSFT(_) \
    _(handTracker, XrHandTrackerEXT, INOUT)
 \
    _(updateInfo, const XrHandMeshUpdateInfoMSFT*, INPUT)
 \
    _(handMesh, XrHandMeshMSFT*, OUTPUT)
 
#define XRT_ENUMERATE_xrGetControllerModelKeyMSFT(_) \
    _(session, XrSession, INOUT)
 \
    _(topLevelUserPath, XrPath, INOUT)
 \
    _(controllerModelKeyState, XrControllerModelKeyStateMSFT*, OUTPUT)
 
#define XRT_ENUMERATE_xrLoadControllerModelMSFT(_) \
    _(session, XrSession, INOUT)
 \
    _(modelKey, XrControllerModelKeyMSFT, INOUT)
 \
    _(bufferCapacityInput, uint32_t, INOUT)
 \
    _(bufferCountOutput, uint32_t*, OUTPUT)
 \
    _(buffer, uint8_t*, OUTPUT)
 
#define XRT_ENUMERATE_xrGetControllerModelPropertiesMSFT(_) \
    _(session, XrSession, INOUT)
 \
    _(modelKey, XrControllerModelKeyMSFT, INOUT)
 \
    _(properties, XrControllerModelPropertiesMSFT*, OUTPUT)
 
#define XRT_ENUMERATE_xrGetControllerModelStateMSFT(_) \
    _(session, XrSession, INOUT)
 \
    _(modelKey, XrControllerModelKeyMSFT, INOUT)
 \
    _(state, XrControllerModelStateMSFT*, OUTPUT)
 
#define XRT_ENUMERATE_xrCreateSpatialAnchorFromPerceptionAnchorMSFT(_) \
    _(session, XrSession, INOUT)
 \
    _(perceptionAnchor, IUnknown*, OUTPUT)
 \
    _(anchor, XrSpatialAnchorMSFT*, OUTPUT)
 
#define XRT_ENUMERATE_xrTryGetPerceptionAnchorFromSpatialAnchorMSFT(_) \
    _(session, XrSession, INOUT)
 \
    _(anchor, XrSpatialAnchorMSFT, INOUT)
 \
    _(perceptionAnchor, IUnknown**, OUTPUT)
 
#define XRT_ENUMERATE_xrEnumerateReprojectionModesMSFT(_) \
    _(instance, XrInstance, INOUT)
 \
    _(systemId, XrSystemId, INOUT)
 \
    _(viewConfigurationType, XrViewConfigurationType, INOUT)
 \
    _(modeCapacityInput, uint32_t, INOUT)
 \
    _(modeCountOutput, uint32_t*, OUTPUT)
 \
    _(modes, XrReprojectionModeMSFT*, OUTPUT)
 
#define XRT_ENUMERATE_xrUpdateSwapchainFB(_) \
    _(swapchain, XrSwapchain, INOUT)
 \
    _(state, const XrSwapchainStateBaseHeaderFB*, INPUT)
 
#define XRT_ENUMERATE_xrGetSwapchainStateFB(_) \
    _(swapchain, XrSwapchain, INOUT)
 \
    _(state, XrSwapchainStateBaseHeaderFB*, OUTPUT)
 
#define XRT_ENUMERATE_xrCreateBodyTrackerFB(_) \
    _(session, XrSession, INOUT)
 \
    _(createInfo, const XrBodyTrackerCreateInfoFB*, INPUT)
 \
    _(bodyTracker, XrBodyTrackerFB*, OUTPUT)
 
#define XRT_ENUMERATE_xrDestroyBodyTrackerFB(_) \
    _(bodyTracker, XrBodyTrackerFB, INOUT)
 
#define XRT_ENUMERATE_xrLocateBodyJointsFB(_) \
    _(bodyTracker, XrBodyTrackerFB, INOUT)
 \
    _(locateInfo, const XrBodyJointsLocateInfoFB*, INPUT)
 \
    _(locations, XrBodyJointLocationsFB*, OUTPUT)
 
#define XRT_ENUMERATE_xrGetBodySkeletonFB(_) \
    _(bodyTracker, XrBodyTrackerFB, INOUT)
 \
    _(skeleton, XrBodySkeletonFB*, OUTPUT)
 
#define XRT_ENUMERATE_xrInitializeLoaderKHR(_) \
    _(loaderInitInfo, const XrLoaderInitInfoBaseHeaderKHR*, INPUT)
 
#define XRT_ENUMERATE_xrCreateVulkanInstanceKHR(_) \
    _(instance, XrInstance, INOUT)
 \
    _(createInfo, const XrVulkanInstanceCreateInfoKHR*, INPUT)
 \
    _(vulkanInstance, VkInstance*, OUTPUT)
 \
    _(vulkanResult, VkResult*, OUTPUT)
 
#define XRT_ENUMERATE_xrCreateVulkanDeviceKHR(_) \
    _(instance, XrInstance, INOUT)
 \
    _(createInfo, const XrVulkanDeviceCreateInfoKHR*, INPUT)
 \
    _(vulkanDevice, VkDevice*, OUTPUT)
 \
    _(vulkanResult, VkResult*, OUTPUT)
 
#define XRT_ENUMERATE_xrGetVulkanGraphicsDevice2KHR(_) \
    _(instance, XrInstance, INOUT)
 \
    _(getInfo, const XrVulkanGraphicsDeviceGetInfoKHR*, INPUT)
 \
    _(vulkanPhysicalDevice, VkPhysicalDevice*, OUTPUT)
 
#define XRT_ENUMERATE_xrEnumerateSceneComputeFeaturesMSFT(_) \
    _(instance, XrInstance, INOUT)
 \
    _(systemId, XrSystemId, INOUT)
 \
    _(featureCapacityInput, uint32_t, INOUT)
 \
    _(featureCountOutput, uint32_t*, OUTPUT)
 \
    _(features, XrSceneComputeFeatureMSFT*, OUTPUT)
 
#define XRT_ENUMERATE_xrCreateSceneObserverMSFT(_) \
    _(session, XrSession, INOUT)
 \
    _(createInfo, const XrSceneObserverCreateInfoMSFT*, INPUT)
 \
    _(sceneObserver, XrSceneObserverMSFT*, OUTPUT)
 
#define XRT_ENUMERATE_xrDestroySceneObserverMSFT(_) \
    _(sceneObserver, XrSceneObserverMSFT, INOUT)
 
#define XRT_ENUMERATE_xrCreateSceneMSFT(_) \
    _(sceneObserver, XrSceneObserverMSFT, INOUT)
 \
    _(createInfo, const XrSceneCreateInfoMSFT*, INPUT)
 \
    _(scene, XrSceneMSFT*, OUTPUT)
 
#define XRT_ENUMERATE_xrDestroySceneMSFT(_) \
    _(scene, XrSceneMSFT, INOUT)
 
#define XRT_ENUMERATE_xrComputeNewSceneMSFT(_) \
    _(sceneObserver, XrSceneObserverMSFT, INOUT)
 \
    _(computeInfo, const XrNewSceneComputeInfoMSFT*, INPUT)
 
#define XRT_ENUMERATE_xrGetSceneComputeStateMSFT(_) \
    _(sceneObserver, XrSceneObserverMSFT, INOUT)
 \
    _(state, XrSceneComputeStateMSFT*, OUTPUT)
 
#define XRT_ENUMERATE_xrGetSceneComponentsMSFT(_) \
    _(scene, XrSceneMSFT, INOUT)
 \
    _(getInfo, const XrSceneComponentsGetInfoMSFT*, INPUT)
 \
    _(components, XrSceneComponentsMSFT*, OUTPUT)
 
#define XRT_ENUMERATE_xrLocateSceneComponentsMSFT(_) \
    _(scene, XrSceneMSFT, INOUT)
 \
    _(locateInfo, const XrSceneComponentsLocateInfoMSFT*, INPUT)
 \
    _(locations, XrSceneComponentLocationsMSFT*, OUTPUT)
 
#define XRT_ENUMERATE_xrGetSceneMeshBuffersMSFT(_) \
    _(scene, XrSceneMSFT, INOUT)
 \
    _(getInfo, const XrSceneMeshBuffersGetInfoMSFT*, INPUT)
 \
    _(buffers, XrSceneMeshBuffersMSFT*, OUTPUT)
 
#define XRT_ENUMERATE_xrDeserializeSceneMSFT(_) \
    _(sceneObserver, XrSceneObserverMSFT, INOUT)
 \
    _(deserializeInfo, const XrSceneDeserializeInfoMSFT*, INPUT)
 
#define XRT_ENUMERATE_xrGetSerializedSceneFragmentDataMSFT(_) \
    _(scene, XrSceneMSFT, INOUT)
 \
    _(getInfo, const XrSerializedSceneFragmentDataGetInfoMSFT*, INPUT)
 \
    _(countInput, uint32_t, INOUT)
 \
    _(readOutput, uint32_t*, OUTPUT)
 \
    _(buffer, uint8_t*, OUTPUT)
 
#define XRT_ENUMERATE_xrEnumerateDisplayRefreshRatesFB(_) \
    _(session, XrSession, INOUT)
 \
    _(displayRefreshRateCapacityInput, uint32_t, INOUT)
 \
    _(displayRefreshRateCountOutput, uint32_t*, OUTPUT)
 \
    _(displayRefreshRates, float*, OUTPUT)
 
#define XRT_ENUMERATE_xrGetDisplayRefreshRateFB(_) \
    _(session, XrSession, INOUT)
 \
    _(displayRefreshRate, float*, OUTPUT)
 
#define XRT_ENUMERATE_xrRequestDisplayRefreshRateFB(_) \
    _(session, XrSession, INOUT)
 \
    _(displayRefreshRate, float, INOUT)
 
#define XRT_ENUMERATE_xrEnumerateViveTrackerPathsHTCX(_) \
    _(instance, XrInstance, INOUT)
 \
    _(pathCapacityInput, uint32_t, INOUT)
 \
    _(pathCountOutput, uint32_t*, OUTPUT)
 \
    _(paths, XrViveTrackerPathsHTCX*, OUTPUT)
 
#define XRT_ENUMERATE_xrCreateFacialTrackerHTC(_) \
    _(session, XrSession, INOUT)
 \
    _(createInfo, const XrFacialTrackerCreateInfoHTC*, INPUT)
 \
    _(facialTracker, XrFacialTrackerHTC*, OUTPUT)
 
#define XRT_ENUMERATE_xrDestroyFacialTrackerHTC(_) \
    _(facialTracker, XrFacialTrackerHTC, INOUT)
 
#define XRT_ENUMERATE_xrGetFacialExpressionsHTC(_) \
    _(facialTracker, XrFacialTrackerHTC, INOUT)
 \
    _(facialExpressions, XrFacialExpressionsHTC*, OUTPUT)
 
#define XRT_ENUMERATE_xrEnumerateColorSpacesFB(_) \
    _(session, XrSession, INOUT)
 \
    _(colorSpaceCapacityInput, uint32_t, INOUT)
 \
    _(colorSpaceCountOutput, uint32_t*, OUTPUT)
 \
    _(colorSpaces, XrColorSpaceFB*, OUTPUT)
 
#define XRT_ENUMERATE_xrSetColorSpaceFB(_) \
    _(session, XrSession, INOUT)
 \
    _(colorSpace, const XrColorSpaceFB, INPUT)
 
#define XRT_ENUMERATE_xrGetHandMeshFB(_) \
    _(handTracker, XrHandTrackerEXT, INOUT)
 \
    _(mesh, XrHandTrackingMeshFB*, OUTPUT)
 
#define XRT_ENUMERATE_xrCreateSpatialAnchorFB(_) \
    _(session, XrSession, INOUT)
 \
    _(info, const XrSpatialAnchorCreateInfoFB*, INPUT)
 \
    _(requestId, XrAsyncRequestIdFB*, OUTPUT)
 
#define XRT_ENUMERATE_xrGetSpaceUuidFB(_) \
    _(space, XrSpace, INOUT)
 \
    _(uuid, XrUuidEXT*, OUTPUT)
 
#define XRT_ENUMERATE_xrEnumerateSpaceSupportedComponentsFB(_) \
    _(space, XrSpace, INOUT)
 \
    _(componentTypeCapacityInput, uint32_t, INOUT)
 \
    _(componentTypeCountOutput, uint32_t*, OUTPUT)
 \
    _(componentTypes, XrSpaceComponentTypeFB*, OUTPUT)
 
#define XRT_ENUMERATE_xrSetSpaceComponentStatusFB(_) \
    _(space, XrSpace, INOUT)
 \
    _(info, const XrSpaceComponentStatusSetInfoFB*, INPUT)
 \
    _(requestId, XrAsyncRequestIdFB*, OUTPUT)
 
#define XRT_ENUMERATE_xrGetSpaceComponentStatusFB(_) \
    _(space, XrSpace, INOUT)
 \
    _(componentType, XrSpaceComponentTypeFB, INOUT)
 \
    _(status, XrSpaceComponentStatusFB*, OUTPUT)
 
#define XRT_ENUMERATE_xrCreateFoveationProfileFB(_) \
    _(session, XrSession, INOUT)
 \
    _(createInfo, const XrFoveationProfileCreateInfoFB*, INPUT)
 \
    _(profile, XrFoveationProfileFB*, OUTPUT)
 
#define XRT_ENUMERATE_xrDestroyFoveationProfileFB(_) \
    _(profile, XrFoveationProfileFB, INOUT)
 
#define XRT_ENUMERATE_xrQuerySystemTrackedKeyboardFB(_) \
    _(session, XrSession, INOUT)
 \
    _(queryInfo, const XrKeyboardTrackingQueryFB*, INPUT)
 \
    _(keyboard, XrKeyboardTrackingDescriptionFB*, OUTPUT)
 
#define XRT_ENUMERATE_xrCreateKeyboardSpaceFB(_) \
    _(session, XrSession, INOUT)
 \
    _(createInfo, const XrKeyboardSpaceCreateInfoFB*, INPUT)
 \
    _(keyboardSpace, XrSpace*, OUTPUT)
 
#define XRT_ENUMERATE_xrCreateTriangleMeshFB(_) \
    _(session, XrSession, INOUT)
 \
    _(createInfo, const XrTriangleMeshCreateInfoFB*, INPUT)
 \
    _(outTriangleMesh, XrTriangleMeshFB*, OUTPUT)
 
#define XRT_ENUMERATE_xrDestroyTriangleMeshFB(_) \
    _(mesh, XrTriangleMeshFB, INOUT)
 
#define XRT_ENUMERATE_xrTriangleMeshGetVertexBufferFB(_) \
    _(mesh, XrTriangleMeshFB, INOUT)
 \
    _(outVertexBuffer, XrVector3f**, OUTPUT)
 
#define XRT_ENUMERATE_xrTriangleMeshGetIndexBufferFB(_) \
    _(mesh, XrTriangleMeshFB, INOUT)
 \
    _(outIndexBuffer, uint32_t**, OUTPUT)
 
#define XRT_ENUMERATE_xrTriangleMeshBeginUpdateFB(_) \
    _(mesh, XrTriangleMeshFB, INOUT)
 
#define XRT_ENUMERATE_xrTriangleMeshEndUpdateFB(_) \
    _(mesh, XrTriangleMeshFB, INOUT)
 \
    _(vertexCount, uint32_t, INOUT)
 \
    _(triangleCount, uint32_t, INOUT)
 
#define XRT_ENUMERATE_xrTriangleMeshBeginVertexBufferUpdateFB(_) \
    _(mesh, XrTriangleMeshFB, INOUT)
 \
    _(outVertexCount, uint32_t*, OUTPUT)
 
#define XRT_ENUMERATE_xrTriangleMeshEndVertexBufferUpdateFB(_) \
    _(mesh, XrTriangleMeshFB, INOUT)
 
#define XRT_ENUMERATE_xrCreatePassthroughFB(_) \
    _(session, XrSession, INOUT)
 \
    _(createInfo, const XrPassthroughCreateInfoFB*, INPUT)
 \
    _(outPassthrough, XrPassthroughFB*, OUTPUT)
 
#define XRT_ENUMERATE_xrDestroyPassthroughFB(_) \
    _(passthrough, XrPassthroughFB, INOUT)
 
#define XRT_ENUMERATE_xrPassthroughStartFB(_) \
    _(passthrough, XrPassthroughFB, INOUT)
 
#define XRT_ENUMERATE_xrPassthroughPauseFB(_) \
    _(passthrough, XrPassthroughFB, INOUT)
 
#define XRT_ENUMERATE_xrCreatePassthroughLayerFB(_) \
    _(session, XrSession, INOUT)
 \
    _(createInfo, const XrPassthroughLayerCreateInfoFB*, INPUT)
 \
    _(outLayer, XrPassthroughLayerFB*, OUTPUT)
 
#define XRT_ENUMERATE_xrDestroyPassthroughLayerFB(_) \
    _(layer, XrPassthroughLayerFB, INOUT)
 
#define XRT_ENUMERATE_xrPassthroughLayerPauseFB(_) \
    _(layer, XrPassthroughLayerFB, INOUT)
 
#define XRT_ENUMERATE_xrPassthroughLayerResumeFB(_) \
    _(layer, XrPassthroughLayerFB, INOUT)
 
#define XRT_ENUMERATE_xrPassthroughLayerSetStyleFB(_) \
    _(layer, XrPassthroughLayerFB, INOUT)
 \
    _(style, const XrPassthroughStyleFB*, INPUT)
 
#define XRT_ENUMERATE_xrCreateGeometryInstanceFB(_) \
    _(session, XrSession, INOUT)
 \
    _(createInfo, const XrGeometryInstanceCreateInfoFB*, INPUT)
 \
    _(outGeometryInstance, XrGeometryInstanceFB*, OUTPUT)
 
#define XRT_ENUMERATE_xrDestroyGeometryInstanceFB(_) \
    _(instance, XrGeometryInstanceFB, INOUT)
 
#define XRT_ENUMERATE_xrGeometryInstanceSetTransformFB(_) \
    _(instance, XrGeometryInstanceFB, INOUT)
 \
    _(transformation, const XrGeometryInstanceTransformFB*, INPUT)
 
#define XRT_ENUMERATE_xrEnumerateRenderModelPathsFB(_) \
    _(session, XrSession, INOUT)
 \
    _(pathCapacityInput, uint32_t, INOUT)
 \
    _(pathCountOutput, uint32_t*, OUTPUT)
 \
    _(paths, XrRenderModelPathInfoFB*, OUTPUT)
 
#define XRT_ENUMERATE_xrGetRenderModelPropertiesFB(_) \
    _(session, XrSession, INOUT)
 \
    _(path, XrPath, INOUT)
 \
    _(properties, XrRenderModelPropertiesFB*, OUTPUT)
 
#define XRT_ENUMERATE_xrLoadRenderModelFB(_) \
    _(session, XrSession, INOUT)
 \
    _(info, const XrRenderModelLoadInfoFB*, INPUT)
 \
    _(buffer, XrRenderModelBufferFB*, OUTPUT)
 
#define XRT_ENUMERATE_xrSetEnvironmentDepthEstimationVARJO(_) \
    _(session, XrSession, INOUT)
 \
    _(enabled, XrBool32, INOUT)
 
#define XRT_ENUMERATE_xrSetMarkerTrackingVARJO(_) \
    _(session, XrSession, INOUT)
 \
    _(enabled, XrBool32, INOUT)
 
#define XRT_ENUMERATE_xrSetMarkerTrackingTimeoutVARJO(_) \
    _(session, XrSession, INOUT)
 \
    _(markerId, uint64_t, INOUT)
 \
    _(timeout, XrDuration, INOUT)
 
#define XRT_ENUMERATE_xrSetMarkerTrackingPredictionVARJO(_) \
    _(session, XrSession, INOUT)
 \
    _(markerId, uint64_t, INOUT)
 \
    _(enable, XrBool32, INOUT)
 
#define XRT_ENUMERATE_xrGetMarkerSizeVARJO(_) \
    _(session, XrSession, INOUT)
 \
    _(markerId, uint64_t, INOUT)
 \
    _(size, XrExtent2Df*, OUTPUT)
 
#define XRT_ENUMERATE_xrCreateMarkerSpaceVARJO(_) \
    _(session, XrSession, INOUT)
 \
    _(createInfo, const XrMarkerSpaceCreateInfoVARJO*, INPUT)
 \
    _(space, XrSpace*, OUTPUT)
 
#define XRT_ENUMERATE_xrSetViewOffsetVARJO(_) \
    _(session, XrSession, INOUT)
 \
    _(offset, float, INOUT)
 
#define XRT_ENUMERATE_xrCreateSpaceFromCoordinateFrameUIDML(_) \
    _(session, XrSession, INOUT)
 \
    _(createInfo, const XrCoordinateSpaceCreateInfoML*, INPUT)
 \
    _(space, XrSpace*, OUTPUT)
 
#define XRT_ENUMERATE_xrCreateMarkerDetectorML(_) \
    _(session, XrSession, INOUT)
 \
    _(createInfo, const XrMarkerDetectorCreateInfoML*, INPUT)
 \
    _(markerDetector, XrMarkerDetectorML*, OUTPUT)
 
#define XRT_ENUMERATE_xrDestroyMarkerDetectorML(_) \
    _(markerDetector, XrMarkerDetectorML, INOUT)
 
#define XRT_ENUMERATE_xrSnapshotMarkerDetectorML(_) \
    _(markerDetector, XrMarkerDetectorML, INOUT)
 \
    _(snapshotInfo, XrMarkerDetectorSnapshotInfoML*, OUTPUT)
 
#define XRT_ENUMERATE_xrGetMarkerDetectorStateML(_) \
    _(markerDetector, XrMarkerDetectorML, INOUT)
 \
    _(state, XrMarkerDetectorStateML*, OUTPUT)
 
#define XRT_ENUMERATE_xrGetMarkersML(_) \
    _(markerDetector, XrMarkerDetectorML, INOUT)
 \
    _(markerCapacityInput, uint32_t, INOUT)
 \
    _(markerCountOutput, uint32_t*, OUTPUT)
 \
    _(markers, XrMarkerML*, OUTPUT)
 
#define XRT_ENUMERATE_xrGetMarkerReprojectionErrorML(_) \
    _(markerDetector, XrMarkerDetectorML, INOUT)
 \
    _(marker, XrMarkerML, INOUT)
 \
    _(reprojectionErrorMeters, float*, OUTPUT)
 
#define XRT_ENUMERATE_xrGetMarkerLengthML(_) \
    _(markerDetector, XrMarkerDetectorML, INOUT)
 \
    _(marker, XrMarkerML, INOUT)
 \
    _(meters, float*, OUTPUT)
 
#define XRT_ENUMERATE_xrGetMarkerNumberML(_) \
    _(markerDetector, XrMarkerDetectorML, INOUT)
 \
    _(marker, XrMarkerML, INOUT)
 \
    _(number, uint64_t*, OUTPUT)
 
#define XRT_ENUMERATE_xrGetMarkerStringML(_) \
    _(markerDetector, XrMarkerDetectorML, INOUT)
 \
    _(marker, XrMarkerML, INOUT)
 \
    _(bufferCapacityInput, uint32_t, INOUT)
 \
    _(bufferCountOutput, uint32_t*, OUTPUT)
 \
    _(buffer, char*, OUTPUT)
 
#define XRT_ENUMERATE_xrCreateMarkerSpaceML(_) \
    _(session, XrSession, INOUT)
 \
    _(createInfo, const XrMarkerSpaceCreateInfoML*, INPUT)
 \
    _(space, XrSpace*, OUTPUT)
 
#define XRT_ENUMERATE_xrEnableLocalizationEventsML(_) \
    _(session, XrSession, INOUT)
 \
    _(info, const XrLocalizationEnableEventsInfoML*, INPUT)
 
#define XRT_ENUMERATE_xrQueryLocalizationMapsML(_) \
    _(session, XrSession, INOUT)
 \
    _(queryInfo, const XrLocalizationMapQueryInfoBaseHeaderML*, INPUT)
 \
    _(mapCapacityInput, uint32_t, INOUT)
 \
    _(mapCountOutput, uint32_t*, OUTPUT)
 \
    _(maps, XrLocalizationMapML*, OUTPUT)
 
#define XRT_ENUMERATE_xrRequestMapLocalizationML(_) \
    _(session, XrSession, INOUT)
 \
    _(requestInfo, const XrMapLocalizationRequestInfoML*, INPUT)
 
#define XRT_ENUMERATE_xrImportLocalizationMapML(_) \
    _(session, XrSession, INOUT)
 \
    _(importInfo, const XrLocalizationMapImportInfoML*, INPUT)
 \
    _(mapUuid, XrUuidEXT*, OUTPUT)
 
#define XRT_ENUMERATE_xrCreateExportedLocalizationMapML(_) \
    _(session, XrSession, INOUT)
 \
    _(mapUuid, const XrUuidEXT*, INPUT)
 \
    _(map, XrExportedLocalizationMapML*, OUTPUT)
 
#define XRT_ENUMERATE_xrDestroyExportedLocalizationMapML(_) \
    _(map, XrExportedLocalizationMapML, INOUT)
 
#define XRT_ENUMERATE_xrGetExportedLocalizationMapDataML(_) \
    _(map, XrExportedLocalizationMapML, INOUT)
 \
    _(bufferCapacityInput, uint32_t, INOUT)
 \
    _(bufferCountOutput, uint32_t*, OUTPUT)
 \
    _(buffer, char*, OUTPUT)
 
#define XRT_ENUMERATE_xrCreateSpatialAnchorsAsyncML(_) \
    _(session, XrSession, INOUT)
 \
    _(createInfo, const XrSpatialAnchorsCreateInfoBaseHeaderML*, INPUT)
 \
    _(future, XrFutureEXT*, OUTPUT)
 
#define XRT_ENUMERATE_xrCreateSpatialAnchorsCompleteML(_) \
    _(session, XrSession, INOUT)
 \
    _(future, XrFutureEXT, INOUT)
 \
    _(completion, XrCreateSpatialAnchorsCompletionML*, OUTPUT)
 
#define XRT_ENUMERATE_xrGetSpatialAnchorStateML(_) \
    _(anchor, XrSpace, INOUT)
 \
    _(state, XrSpatialAnchorStateML*, OUTPUT)
 
#define XRT_ENUMERATE_xrCreateSpatialAnchorsStorageML(_) \
    _(session, XrSession, INOUT)
 \
    _(createInfo, const XrSpatialAnchorsCreateStorageInfoML*, INPUT)
 \
    _(storage, XrSpatialAnchorsStorageML*, OUTPUT)
 
#define XRT_ENUMERATE_xrDestroySpatialAnchorsStorageML(_) \
    _(storage, XrSpatialAnchorsStorageML, INOUT)
 
#define XRT_ENUMERATE_xrQuerySpatialAnchorsAsyncML(_) \
    _(storage, XrSpatialAnchorsStorageML, INOUT)
 \
    _(queryInfo, const XrSpatialAnchorsQueryInfoBaseHeaderML*, INPUT)
 \
    _(future, XrFutureEXT*, OUTPUT)
 
#define XRT_ENUMERATE_xrQuerySpatialAnchorsCompleteML(_) \
    _(storage, XrSpatialAnchorsStorageML, INOUT)
 \
    _(future, XrFutureEXT, INOUT)
 \
    _(completion, XrSpatialAnchorsQueryCompletionML*, OUTPUT)
 
#define XRT_ENUMERATE_xrPublishSpatialAnchorsAsyncML(_) \
    _(storage, XrSpatialAnchorsStorageML, INOUT)
 \
    _(publishInfo, const XrSpatialAnchorsPublishInfoML*, INPUT)
 \
    _(future, XrFutureEXT*, OUTPUT)
 
#define XRT_ENUMERATE_xrPublishSpatialAnchorsCompleteML(_) \
    _(storage, XrSpatialAnchorsStorageML, INOUT)
 \
    _(future, XrFutureEXT, INOUT)
 \
    _(completion, XrSpatialAnchorsPublishCompletionML*, OUTPUT)
 
#define XRT_ENUMERATE_xrDeleteSpatialAnchorsAsyncML(_) \
    _(storage, XrSpatialAnchorsStorageML, INOUT)
 \
    _(deleteInfo, const XrSpatialAnchorsDeleteInfoML*, INPUT)
 \
    _(future, XrFutureEXT*, OUTPUT)
 
#define XRT_ENUMERATE_xrDeleteSpatialAnchorsCompleteML(_) \
    _(storage, XrSpatialAnchorsStorageML, INOUT)
 \
    _(future, XrFutureEXT, INOUT)
 \
    _(completion, XrSpatialAnchorsDeleteCompletionML*, OUTPUT)
 
#define XRT_ENUMERATE_xrUpdateSpatialAnchorsExpirationAsyncML(_) \
    _(storage, XrSpatialAnchorsStorageML, INOUT)
 \
    _(updateInfo, const XrSpatialAnchorsUpdateExpirationInfoML*, INPUT)
 \
    _(future, XrFutureEXT*, OUTPUT)
 
#define XRT_ENUMERATE_xrUpdateSpatialAnchorsExpirationCompleteML(_) \
    _(storage, XrSpatialAnchorsStorageML, INOUT)
 \
    _(future, XrFutureEXT, INOUT)
 \
    _(completion, XrSpatialAnchorsUpdateExpirationCompletionML*, OUTPUT)
 
#define XRT_ENUMERATE_xrEnableUserCalibrationEventsML(_) \
    _(instance, XrInstance, INOUT)
 \
    _(enableInfo, const XrUserCalibrationEnableEventsInfoML*, INPUT)
 
#define XRT_ENUMERATE_xrCreateSpatialAnchorStoreConnectionMSFT(_) \
    _(session, XrSession, INOUT)
 \
    _(spatialAnchorStore, XrSpatialAnchorStoreConnectionMSFT*, OUTPUT)
 
#define XRT_ENUMERATE_xrDestroySpatialAnchorStoreConnectionMSFT(_) \
    _(spatialAnchorStore, XrSpatialAnchorStoreConnectionMSFT, INOUT)
 
#define XRT_ENUMERATE_xrPersistSpatialAnchorMSFT(_) \
    _(spatialAnchorStore, XrSpatialAnchorStoreConnectionMSFT, INOUT)
 \
    _(spatialAnchorPersistenceInfo, const XrSpatialAnchorPersistenceInfoMSFT*, INPUT)
 
#define XRT_ENUMERATE_xrEnumeratePersistedSpatialAnchorNamesMSFT(_) \
    _(spatialAnchorStore, XrSpatialAnchorStoreConnectionMSFT, INOUT)
 \
    _(spatialAnchorNameCapacityInput, uint32_t, INOUT)
 \
    _(spatialAnchorNameCountOutput, uint32_t*, OUTPUT)
 \
    _(spatialAnchorNames, XrSpatialAnchorPersistenceNameMSFT*, OUTPUT)
 
#define XRT_ENUMERATE_xrCreateSpatialAnchorFromPersistedNameMSFT(_) \
    _(session, XrSession, INOUT)
 \
    _(spatialAnchorCreateInfo, const XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT*, INPUT)
 \
    _(spatialAnchor, XrSpatialAnchorMSFT*, OUTPUT)
 
#define XRT_ENUMERATE_xrUnpersistSpatialAnchorMSFT(_) \
    _(spatialAnchorStore, XrSpatialAnchorStoreConnectionMSFT, INOUT)
 \
    _(spatialAnchorPersistenceName, const XrSpatialAnchorPersistenceNameMSFT*, INPUT)
 
#define XRT_ENUMERATE_xrClearSpatialAnchorStoreMSFT(_) \
    _(spatialAnchorStore, XrSpatialAnchorStoreConnectionMSFT, INOUT)
 
#define XRT_ENUMERATE_xrGetSceneMarkerRawDataMSFT(_) \
    _(scene, XrSceneMSFT, INOUT)
 \
    _(markerId, const XrUuidMSFT*, INPUT)
 \
    _(bufferCapacityInput, uint32_t, INOUT)
 \
    _(bufferCountOutput, uint32_t*, OUTPUT)
 \
    _(buffer, uint8_t*, OUTPUT)
 
#define XRT_ENUMERATE_xrGetSceneMarkerDecodedStringMSFT(_) \
    _(scene, XrSceneMSFT, INOUT)
 \
    _(markerId, const XrUuidMSFT*, INPUT)
 \
    _(bufferCapacityInput, uint32_t, INOUT)
 \
    _(bufferCountOutput, uint32_t*, OUTPUT)
 \
    _(buffer, char*, OUTPUT)
 
#define XRT_ENUMERATE_xrStructureTypeToString2KHR(_) \
    _(instance, XrInstance, INOUT)
 \
    _(value, XrStructureType, INOUT)
 \
    _(buffer, char[XR_MAX_STRUCTURE_NAME_SIZE_EXTENDED_KHR], INOUT)
 
#define XRT_ENUMERATE_xrQuerySpacesFB(_) \
    _(session, XrSession, INOUT)
 \
    _(info, const XrSpaceQueryInfoBaseHeaderFB*, INPUT)
 \
    _(requestId, XrAsyncRequestIdFB*, OUTPUT)
 
#define XRT_ENUMERATE_xrRetrieveSpaceQueryResultsFB(_) \
    _(session, XrSession, INOUT)
 \
    _(requestId, XrAsyncRequestIdFB, INOUT)
 \
    _(results, XrSpaceQueryResultsFB*, OUTPUT)
 
#define XRT_ENUMERATE_xrSaveSpaceFB(_) \
    _(session, XrSession, INOUT)
 \
    _(info, const XrSpaceSaveInfoFB*, INPUT)
 \
    _(requestId, XrAsyncRequestIdFB*, OUTPUT)
 
#define XRT_ENUMERATE_xrEraseSpaceFB(_) \
    _(session, XrSession, INOUT)
 \
    _(info, const XrSpaceEraseInfoFB*, INPUT)
 \
    _(requestId, XrAsyncRequestIdFB*, OUTPUT)
 
#define XRT_ENUMERATE_xrGetAudioOutputDeviceGuidOculus(_) \
    _(instance, XrInstance, INOUT)
 \
    _(buffer, wchar_t[XR_MAX_AUDIO_DEVICE_STR_SIZE_OCULUS], INOUT)
 
#define XRT_ENUMERATE_xrGetAudioInputDeviceGuidOculus(_) \
    _(instance, XrInstance, INOUT)
 \
    _(buffer, wchar_t[XR_MAX_AUDIO_DEVICE_STR_SIZE_OCULUS], INOUT)
 
#define XRT_ENUMERATE_xrShareSpacesFB(_) \
    _(session, XrSession, INOUT)
 \
    _(info, const XrSpaceShareInfoFB*, INPUT)
 \
    _(requestId, XrAsyncRequestIdFB*, OUTPUT)
 
#define XRT_ENUMERATE_xrGetSpaceBoundingBox2DFB(_) \
    _(session, XrSession, INOUT)
 \
    _(space, XrSpace, INOUT)
 \
    _(boundingBox2DOutput, XrRect2Df*, OUTPUT)
 
#define XRT_ENUMERATE_xrGetSpaceBoundingBox3DFB(_) \
    _(session, XrSession, INOUT)
 \
    _(space, XrSpace, INOUT)
 \
    _(boundingBox3DOutput, XrRect3DfFB*, OUTPUT)
 
#define XRT_ENUMERATE_xrGetSpaceSemanticLabelsFB(_) \
    _(session, XrSession, INOUT)
 \
    _(space, XrSpace, INOUT)
 \
    _(semanticLabelsOutput, XrSemanticLabelsFB*, OUTPUT)
 
#define XRT_ENUMERATE_xrGetSpaceBoundary2DFB(_) \
    _(session, XrSession, INOUT)
 \
    _(space, XrSpace, INOUT)
 \
    _(boundary2DOutput, XrBoundary2DFB*, OUTPUT)
 
#define XRT_ENUMERATE_xrGetSpaceRoomLayoutFB(_) \
    _(session, XrSession, INOUT)
 \
    _(space, XrSpace, INOUT)
 \
    _(roomLayoutOutput, XrRoomLayoutFB*, OUTPUT)
 
#define XRT_ENUMERATE_xrSetDigitalLensControlALMALENCE(_) \
    _(session, XrSession, INOUT)
 \
    _(digitalLensControl, const XrDigitalLensControlALMALENCE*, INPUT)
 
#define XRT_ENUMERATE_xrRequestSceneCaptureFB(_) \
    _(session, XrSession, INOUT)
 \
    _(info, const XrSceneCaptureRequestInfoFB*, INPUT)
 \
    _(requestId, XrAsyncRequestIdFB*, OUTPUT)
 
#define XRT_ENUMERATE_xrGetSpaceContainerFB(_) \
    _(session, XrSession, INOUT)
 \
    _(space, XrSpace, INOUT)
 \
    _(spaceContainerOutput, XrSpaceContainerFB*, OUTPUT)
 
#define XRT_ENUMERATE_xrGetFoveationEyeTrackedStateMETA(_) \
    _(session, XrSession, INOUT)
 \
    _(foveationState, XrFoveationEyeTrackedStateMETA*, OUTPUT)
 
#define XRT_ENUMERATE_xrCreateFaceTrackerFB(_) \
    _(session, XrSession, INOUT)
 \
    _(createInfo, const XrFaceTrackerCreateInfoFB*, INPUT)
 \
    _(faceTracker, XrFaceTrackerFB*, OUTPUT)
 
#define XRT_ENUMERATE_xrDestroyFaceTrackerFB(_) \
    _(faceTracker, XrFaceTrackerFB, INOUT)
 
#define XRT_ENUMERATE_xrGetFaceExpressionWeightsFB(_) \
    _(faceTracker, XrFaceTrackerFB, INOUT)
 \
    _(expressionInfo, const XrFaceExpressionInfoFB*, INPUT)
 \
    _(expressionWeights, XrFaceExpressionWeightsFB*, OUTPUT)
 
#define XRT_ENUMERATE_xrCreateEyeTrackerFB(_) \
    _(session, XrSession, INOUT)
 \
    _(createInfo, const XrEyeTrackerCreateInfoFB*, INPUT)
 \
    _(eyeTracker, XrEyeTrackerFB*, OUTPUT)
 
#define XRT_ENUMERATE_xrDestroyEyeTrackerFB(_) \
    _(eyeTracker, XrEyeTrackerFB, INOUT)
 
#define XRT_ENUMERATE_xrGetEyeGazesFB(_) \
    _(eyeTracker, XrEyeTrackerFB, INOUT)
 \
    _(gazeInfo, const XrEyeGazesInfoFB*, INPUT)
 \
    _(eyeGazes, XrEyeGazesFB*, OUTPUT)
 
#define XRT_ENUMERATE_xrPassthroughLayerSetKeyboardHandsIntensityFB(_) \
    _(layer, XrPassthroughLayerFB, INOUT)
 \
    _(intensity, const XrPassthroughKeyboardHandsIntensityFB*, INPUT)
 
#define XRT_ENUMERATE_xrGetDeviceSampleRateFB(_) \
    _(session, XrSession, INOUT)
 \
    _(hapticActionInfo, const XrHapticActionInfo*, INPUT)
 \
    _(deviceSampleRate, XrDevicePcmSampleRateGetInfoFB*, OUTPUT)
 
#define XRT_ENUMERATE_xrGetPassthroughPreferencesMETA(_) \
    _(session, XrSession, INOUT)
 \
    _(preferences, XrPassthroughPreferencesMETA*, OUTPUT)
 
#define XRT_ENUMERATE_xrCreateVirtualKeyboardMETA(_) \
    _(session, XrSession, INOUT)
 \
    _(createInfo, const XrVirtualKeyboardCreateInfoMETA*, INPUT)
 \
    _(keyboard, XrVirtualKeyboardMETA*, OUTPUT)
 
#define XRT_ENUMERATE_xrDestroyVirtualKeyboardMETA(_) \
    _(keyboard, XrVirtualKeyboardMETA, INOUT)
 
#define XRT_ENUMERATE_xrCreateVirtualKeyboardSpaceMETA(_) \
    _(session, XrSession, INOUT)
 \
    _(keyboard, XrVirtualKeyboardMETA, INOUT)
 \
    _(createInfo, const XrVirtualKeyboardSpaceCreateInfoMETA*, INPUT)
 \
    _(keyboardSpace, XrSpace*, OUTPUT)
 
#define XRT_ENUMERATE_xrSuggestVirtualKeyboardLocationMETA(_) \
    _(keyboard, XrVirtualKeyboardMETA, INOUT)
 \
    _(locationInfo, const XrVirtualKeyboardLocationInfoMETA*, INPUT)
 
#define XRT_ENUMERATE_xrGetVirtualKeyboardScaleMETA(_) \
    _(keyboard, XrVirtualKeyboardMETA, INOUT)
 \
    _(scale, float*, OUTPUT)
 
#define XRT_ENUMERATE_xrSetVirtualKeyboardModelVisibilityMETA(_) \
    _(keyboard, XrVirtualKeyboardMETA, INOUT)
 \
    _(modelVisibility, const XrVirtualKeyboardModelVisibilitySetInfoMETA*, INPUT)
 
#define XRT_ENUMERATE_xrGetVirtualKeyboardModelAnimationStatesMETA(_) \
    _(keyboard, XrVirtualKeyboardMETA, INOUT)
 \
    _(animationStates, XrVirtualKeyboardModelAnimationStatesMETA*, OUTPUT)
 
#define XRT_ENUMERATE_xrGetVirtualKeyboardDirtyTexturesMETA(_) \
    _(keyboard, XrVirtualKeyboardMETA, INOUT)
 \
    _(textureIdCapacityInput, uint32_t, INOUT)
 \
    _(textureIdCountOutput, uint32_t*, OUTPUT)
 \
    _(textureIds, uint64_t*, OUTPUT)
 
#define XRT_ENUMERATE_xrGetVirtualKeyboardTextureDataMETA(_) \
    _(keyboard, XrVirtualKeyboardMETA, INOUT)
 \
    _(textureId, uint64_t, INOUT)
 \
    _(textureData, XrVirtualKeyboardTextureDataMETA*, OUTPUT)
 
#define XRT_ENUMERATE_xrSendVirtualKeyboardInputMETA(_) \
    _(keyboard, XrVirtualKeyboardMETA, INOUT)
 \
    _(info, const XrVirtualKeyboardInputInfoMETA*, INPUT)
 \
    _(interactorRootPose, XrPosef*, OUTPUT)
 
#define XRT_ENUMERATE_xrChangeVirtualKeyboardTextContextMETA(_) \
    _(keyboard, XrVirtualKeyboardMETA, INOUT)
 \
    _(changeInfo, const XrVirtualKeyboardTextContextChangeInfoMETA*, INPUT)
 
#define XRT_ENUMERATE_xrEnumerateExternalCamerasOCULUS(_) \
    _(session, XrSession, INOUT)
 \
    _(cameraCapacityInput, uint32_t, INOUT)
 \
    _(cameraCountOutput, uint32_t*, OUTPUT)
 \
    _(cameras, XrExternalCameraOCULUS*, OUTPUT)
 
#define XRT_ENUMERATE_xrEnumeratePerformanceMetricsCounterPathsMETA(_) \
    _(instance, XrInstance, INOUT)
 \
    _(counterPathCapacityInput, uint32_t, INOUT)
 \
    _(counterPathCountOutput, uint32_t*, OUTPUT)
 \
    _(counterPaths, XrPath*, OUTPUT)
 
#define XRT_ENUMERATE_xrSetPerformanceMetricsStateMETA(_) \
    _(session, XrSession, INOUT)
 \
    _(state, const XrPerformanceMetricsStateMETA*, INPUT)
 
#define XRT_ENUMERATE_xrGetPerformanceMetricsStateMETA(_) \
    _(session, XrSession, INOUT)
 \
    _(state, XrPerformanceMetricsStateMETA*, OUTPUT)
 
#define XRT_ENUMERATE_xrQueryPerformanceMetricsCounterMETA(_) \
    _(session, XrSession, INOUT)
 \
    _(counterPath, XrPath, INOUT)
 \
    _(counter, XrPerformanceMetricsCounterMETA*, OUTPUT)
 
#define XRT_ENUMERATE_xrSaveSpaceListFB(_) \
    _(session, XrSession, INOUT)
 \
    _(info, const XrSpaceListSaveInfoFB*, INPUT)
 \
    _(requestId, XrAsyncRequestIdFB*, OUTPUT)
 
#define XRT_ENUMERATE_xrCreateSpaceUserFB(_) \
    _(session, XrSession, INOUT)
 \
    _(info, const XrSpaceUserCreateInfoFB*, INPUT)
 \
    _(user, XrSpaceUserFB*, OUTPUT)
 
#define XRT_ENUMERATE_xrGetSpaceUserIdFB(_) \
    _(user, XrSpaceUserFB, INOUT)
 \
    _(userId, XrSpaceUserIdFB*, OUTPUT)
 
#define XRT_ENUMERATE_xrDestroySpaceUserFB(_) \
    _(user, XrSpaceUserFB, INOUT)
 
#define XRT_ENUMERATE_xrGetRecommendedLayerResolutionMETA(_) \
    _(session, XrSession, INOUT)
 \
    _(info, const XrRecommendedLayerResolutionGetInfoMETA*, INPUT)
 \
    _(resolution, XrRecommendedLayerResolutionMETA*, OUTPUT)
 
#define XRT_ENUMERATE_xrCreatePassthroughColorLutMETA(_) \
    _(passthrough, XrPassthroughFB, INOUT)
 \
    _(createInfo, const XrPassthroughColorLutCreateInfoMETA*, INPUT)
 \
    _(colorLut, XrPassthroughColorLutMETA*, OUTPUT)
 
#define XRT_ENUMERATE_xrDestroyPassthroughColorLutMETA(_) \
    _(colorLut, XrPassthroughColorLutMETA, INOUT)
 
#define XRT_ENUMERATE_xrUpdatePassthroughColorLutMETA(_) \
    _(colorLut, XrPassthroughColorLutMETA, INOUT)
 \
    _(updateInfo, const XrPassthroughColorLutUpdateInfoMETA*, INPUT)
 
#define XRT_ENUMERATE_xrGetSpaceTriangleMeshMETA(_) \
    _(space, XrSpace, INOUT)
 \
    _(getInfo, const XrSpaceTriangleMeshGetInfoMETA*, INPUT)
 \
    _(triangleMeshOutput, XrSpaceTriangleMeshMETA*, OUTPUT)
 
#define XRT_ENUMERATE_xrCreateFaceTracker2FB(_) \
    _(session, XrSession, INOUT)
 \
    _(createInfo, const XrFaceTrackerCreateInfo2FB*, INPUT)
 \
    _(faceTracker, XrFaceTracker2FB*, OUTPUT)
 
#define XRT_ENUMERATE_xrDestroyFaceTracker2FB(_) \
    _(faceTracker, XrFaceTracker2FB, INOUT)
 
#define XRT_ENUMERATE_xrGetFaceExpressionWeights2FB(_) \
    _(faceTracker, XrFaceTracker2FB, INOUT)
 \
    _(expressionInfo, const XrFaceExpressionInfo2FB*, INPUT)
 \
    _(expressionWeights, XrFaceExpressionWeights2FB*, OUTPUT)
 
#define XRT_ENUMERATE_xrShareSpacesMETA(_) \
    _(session, XrSession, INOUT)
 \
    _(info, const XrShareSpacesInfoMETA*, INPUT)
 \
    _(requestId, XrAsyncRequestIdFB*, OUTPUT)
 
#define XRT_ENUMERATE_xrCreateEnvironmentDepthProviderMETA(_) \
    _(session, XrSession, INOUT)
 \
    _(createInfo, const XrEnvironmentDepthProviderCreateInfoMETA*, INPUT)
 \
    _(environmentDepthProvider, XrEnvironmentDepthProviderMETA*, OUTPUT)
 
#define XRT_ENUMERATE_xrDestroyEnvironmentDepthProviderMETA(_) \
    _(environmentDepthProvider, XrEnvironmentDepthProviderMETA, INOUT)
 
#define XRT_ENUMERATE_xrStartEnvironmentDepthProviderMETA(_) \
    _(environmentDepthProvider, XrEnvironmentDepthProviderMETA, INOUT)
 
#define XRT_ENUMERATE_xrStopEnvironmentDepthProviderMETA(_) \
    _(environmentDepthProvider, XrEnvironmentDepthProviderMETA, INOUT)
 
#define XRT_ENUMERATE_xrCreateEnvironmentDepthSwapchainMETA(_) \
    _(environmentDepthProvider, XrEnvironmentDepthProviderMETA, INOUT)
 \
    _(createInfo, const XrEnvironmentDepthSwapchainCreateInfoMETA*, INPUT)
 \
    _(swapchain, XrEnvironmentDepthSwapchainMETA*, OUTPUT)
 
#define XRT_ENUMERATE_xrDestroyEnvironmentDepthSwapchainMETA(_) \
    _(swapchain, XrEnvironmentDepthSwapchainMETA, INOUT)
 
#define XRT_ENUMERATE_xrEnumerateEnvironmentDepthSwapchainImagesMETA(_) \
    _(swapchain, XrEnvironmentDepthSwapchainMETA, INOUT)
 \
    _(imageCapacityInput, uint32_t, INOUT)
 \
    _(imageCountOutput, uint32_t*, OUTPUT)
 \
    _(images, XrSwapchainImageBaseHeader*, OUTPUT)
 
#define XRT_ENUMERATE_xrGetEnvironmentDepthSwapchainStateMETA(_) \
    _(swapchain, XrEnvironmentDepthSwapchainMETA, INOUT)
 \
    _(state, XrEnvironmentDepthSwapchainStateMETA*, OUTPUT)
 
#define XRT_ENUMERATE_xrAcquireEnvironmentDepthImageMETA(_) \
    _(environmentDepthProvider, XrEnvironmentDepthProviderMETA, INOUT)
 \
    _(acquireInfo, const XrEnvironmentDepthImageAcquireInfoMETA*, INPUT)
 \
    _(environmentDepthImage, XrEnvironmentDepthImageMETA*, OUTPUT)
 
#define XRT_ENUMERATE_xrSetEnvironmentDepthHandRemovalMETA(_) \
    _(environmentDepthProvider, XrEnvironmentDepthProviderMETA, INOUT)
 \
    _(setInfo, const XrEnvironmentDepthHandRemovalSetInfoMETA*, INPUT)
 
#define XRT_ENUMERATE_xrSetTrackingOptimizationSettingsHintQCOM(_) \
    _(session, XrSession, INOUT)
 \
    _(domain, XrTrackingOptimizationSettingsDomainQCOM, INOUT)
 \
    _(hint, XrTrackingOptimizationSettingsHintQCOM, INOUT)
 
#define XRT_ENUMERATE_xrCreatePassthroughHTC(_) \
    _(session, XrSession, INOUT)
 \
    _(createInfo, const XrPassthroughCreateInfoHTC*, INPUT)
 \
    _(passthrough, XrPassthroughHTC*, OUTPUT)
 
#define XRT_ENUMERATE_xrDestroyPassthroughHTC(_) \
    _(passthrough, XrPassthroughHTC, INOUT)
 
#define XRT_ENUMERATE_xrApplyFoveationHTC(_) \
    _(session, XrSession, INOUT)
 \
    _(applyInfo, const XrFoveationApplyInfoHTC*, INPUT)
 
#define XRT_ENUMERATE_xrCreateSpatialAnchorHTC(_) \
    _(session, XrSession, INOUT)
 \
    _(createInfo, const XrSpatialAnchorCreateInfoHTC*, INPUT)
 \
    _(anchor, XrSpace*, OUTPUT)
 
#define XRT_ENUMERATE_xrGetSpatialAnchorNameHTC(_) \
    _(anchor, XrSpace, INOUT)
 \
    _(name, XrSpatialAnchorNameHTC*, OUTPUT)
 
#define XRT_ENUMERATE_xrCreateBodyTrackerHTC(_) \
    _(session, XrSession, INOUT)
 \
    _(createInfo, const XrBodyTrackerCreateInfoHTC*, INPUT)
 \
    _(bodyTracker, XrBodyTrackerHTC*, OUTPUT)
 
#define XRT_ENUMERATE_xrDestroyBodyTrackerHTC(_) \
    _(bodyTracker, XrBodyTrackerHTC, INOUT)
 
#define XRT_ENUMERATE_xrLocateBodyJointsHTC(_) \
    _(bodyTracker, XrBodyTrackerHTC, INOUT)
 \
    _(locateInfo, const XrBodyJointsLocateInfoHTC*, INPUT)
 \
    _(locations, XrBodyJointLocationsHTC*, OUTPUT)
 
#define XRT_ENUMERATE_xrGetBodySkeletonHTC(_) \
    _(bodyTracker, XrBodyTrackerHTC, INOUT)
 \
    _(baseSpace, XrSpace, INOUT)
 \
    _(skeletonGenerationId, uint32_t, INOUT)
 \
    _(skeleton, XrBodySkeletonHTC*, OUTPUT)
 
#define XRT_ENUMERATE_xrApplyForceFeedbackCurlMNDX(_) \
    _(handTracker, XrHandTrackerEXT, INOUT)
 \
    _(locations, const XrForceFeedbackCurlApplyLocationsMNDX*, INPUT)
 
#define XRT_ENUMERATE_xrCreateBodyTrackerBD(_) \
    _(session, XrSession, INOUT)
 \
    _(createInfo, const XrBodyTrackerCreateInfoBD*, INPUT)
 \
    _(bodyTracker, XrBodyTrackerBD*, OUTPUT)
 
#define XRT_ENUMERATE_xrDestroyBodyTrackerBD(_) \
    _(bodyTracker, XrBodyTrackerBD, INOUT)
 
#define XRT_ENUMERATE_xrLocateBodyJointsBD(_) \
    _(bodyTracker, XrBodyTrackerBD, INOUT)
 \
    _(locateInfo, const XrBodyJointsLocateInfoBD*, INPUT)
 \
    _(locations, XrBodyJointLocationsBD*, OUTPUT)
 
#define XRT_ENUMERATE_xrEnumerateSpatialEntityComponentTypesBD(_) \
    _(snapshot, XrSenseDataSnapshotBD, INOUT)
 \
    _(entityId, XrSpatialEntityIdBD, INOUT)
 \
    _(componentTypeCapacityInput, uint32_t, INOUT)
 \
    _(componentTypeCountOutput, uint32_t*, OUTPUT)
 \
    _(componentTypes, XrSpatialEntityComponentTypeBD*, OUTPUT)
 
#define XRT_ENUMERATE_xrGetSpatialEntityUuidBD(_) \
    _(snapshot, XrSenseDataSnapshotBD, INOUT)
 \
    _(entityId, XrSpatialEntityIdBD, INOUT)
 \
    _(uuid, XrUuidEXT*, OUTPUT)
 
#define XRT_ENUMERATE_xrGetSpatialEntityComponentDataBD(_) \
    _(snapshot, XrSenseDataSnapshotBD, INOUT)
 \
    _(getInfo, const XrSpatialEntityComponentGetInfoBD*, INPUT)
 \
    _(componentData, XrSpatialEntityComponentDataBaseHeaderBD*, OUTPUT)
 
#define XRT_ENUMERATE_xrCreateSenseDataProviderBD(_) \
    _(session, XrSession, INOUT)
 \
    _(createInfo, const XrSenseDataProviderCreateInfoBD*, INPUT)
 \
    _(provider, XrSenseDataProviderBD*, OUTPUT)
 
#define XRT_ENUMERATE_xrStartSenseDataProviderAsyncBD(_) \
    _(provider, XrSenseDataProviderBD, INOUT)
 \
    _(startInfo, const XrSenseDataProviderStartInfoBD*, INPUT)
 \
    _(future, XrFutureEXT*, OUTPUT)
 
#define XRT_ENUMERATE_xrStartSenseDataProviderCompleteBD(_) \
    _(session, XrSession, INOUT)
 \
    _(future, XrFutureEXT, INOUT)
 \
    _(completion, XrFutureCompletionEXT*, OUTPUT)
 
#define XRT_ENUMERATE_xrGetSenseDataProviderStateBD(_) \
    _(provider, XrSenseDataProviderBD, INOUT)
 \
    _(state, XrSenseDataProviderStateBD*, OUTPUT)
 
#define XRT_ENUMERATE_xrQuerySenseDataAsyncBD(_) \
    _(provider, XrSenseDataProviderBD, INOUT)
 \
    _(queryInfo, const XrSenseDataQueryInfoBD*, INPUT)
 \
    _(future, XrFutureEXT*, OUTPUT)
 
#define XRT_ENUMERATE_xrQuerySenseDataCompleteBD(_) \
    _(provider, XrSenseDataProviderBD, INOUT)
 \
    _(future, XrFutureEXT, INOUT)
 \
    _(completion, XrSenseDataQueryCompletionBD*, OUTPUT)
 
#define XRT_ENUMERATE_xrDestroySenseDataSnapshotBD(_) \
    _(snapshot, XrSenseDataSnapshotBD, INOUT)
 
#define XRT_ENUMERATE_xrGetQueriedSenseDataBD(_) \
    _(snapshot, XrSenseDataSnapshotBD, INOUT)
 \
    _(getInfo, XrQueriedSenseDataGetInfoBD*, OUTPUT)
 \
    _(queriedSenseData, XrQueriedSenseDataBD*, OUTPUT)
 
#define XRT_ENUMERATE_xrStopSenseDataProviderBD(_) \
    _(provider, XrSenseDataProviderBD, INOUT)
 
#define XRT_ENUMERATE_xrDestroySenseDataProviderBD(_) \
    _(provider, XrSenseDataProviderBD, INOUT)
 
#define XRT_ENUMERATE_xrCreateSpatialEntityAnchorBD(_) \
    _(provider, XrSenseDataProviderBD, INOUT)
 \
    _(createInfo, const XrSpatialEntityAnchorCreateInfoBD*, INPUT)
 \
    _(anchor, XrAnchorBD*, OUTPUT)
 
#define XRT_ENUMERATE_xrDestroyAnchorBD(_) \
    _(anchor, XrAnchorBD, INOUT)
 
#define XRT_ENUMERATE_xrGetAnchorUuidBD(_) \
    _(anchor, XrAnchorBD, INOUT)
 \
    _(uuid, XrUuidEXT*, OUTPUT)
 
#define XRT_ENUMERATE_xrCreateAnchorSpaceBD(_) \
    _(session, XrSession, INOUT)
 \
    _(createInfo, const XrAnchorSpaceCreateInfoBD*, INPUT)
 \
    _(space, XrSpace*, OUTPUT)
 
#define XRT_ENUMERATE_xrCreateSpatialAnchorAsyncBD(_) \
    _(provider, XrSenseDataProviderBD, INOUT)
 \
    _(info, const XrSpatialAnchorCreateInfoBD*, INPUT)
 \
    _(future, XrFutureEXT*, OUTPUT)
 
#define XRT_ENUMERATE_xrCreateSpatialAnchorCompleteBD(_) \
    _(provider, XrSenseDataProviderBD, INOUT)
 \
    _(future, XrFutureEXT, INOUT)
 \
    _(completion, XrSpatialAnchorCreateCompletionBD*, OUTPUT)
 
#define XRT_ENUMERATE_xrPersistSpatialAnchorAsyncBD(_) \
    _(provider, XrSenseDataProviderBD, INOUT)
 \
    _(info, const XrSpatialAnchorPersistInfoBD*, INPUT)
 \
    _(future, XrFutureEXT*, OUTPUT)
 
#define XRT_ENUMERATE_xrPersistSpatialAnchorCompleteBD(_) \
    _(provider, XrSenseDataProviderBD, INOUT)
 \
    _(future, XrFutureEXT, INOUT)
 \
    _(completion, XrFutureCompletionEXT*, OUTPUT)
 
#define XRT_ENUMERATE_xrUnpersistSpatialAnchorAsyncBD(_) \
    _(provider, XrSenseDataProviderBD, INOUT)
 \
    _(info, const XrSpatialAnchorUnpersistInfoBD*, INPUT)
 \
    _(future, XrFutureEXT*, OUTPUT)
 
#define XRT_ENUMERATE_xrUnpersistSpatialAnchorCompleteBD(_) \
    _(provider, XrSenseDataProviderBD, INOUT)
 \
    _(future, XrFutureEXT, INOUT)
 \
    _(completion, XrFutureCompletionEXT*, OUTPUT)
 
#define XRT_ENUMERATE_xrShareSpatialAnchorAsyncBD(_) \
    _(provider, XrSenseDataProviderBD, INOUT)
 \
    _(info, const XrSpatialAnchorShareInfoBD*, INPUT)
 \
    _(future, XrFutureEXT*, OUTPUT)
 
#define XRT_ENUMERATE_xrShareSpatialAnchorCompleteBD(_) \
    _(provider, XrSenseDataProviderBD, INOUT)
 \
    _(future, XrFutureEXT, INOUT)
 \
    _(completion, XrFutureCompletionEXT*, OUTPUT)
 
#define XRT_ENUMERATE_xrDownloadSharedSpatialAnchorAsyncBD(_) \
    _(provider, XrSenseDataProviderBD, INOUT)
 \
    _(info, const XrSharedSpatialAnchorDownloadInfoBD*, INPUT)
 \
    _(future, XrFutureEXT*, OUTPUT)
 
#define XRT_ENUMERATE_xrDownloadSharedSpatialAnchorCompleteBD(_) \
    _(provider, XrSenseDataProviderBD, INOUT)
 \
    _(future, XrFutureEXT, INOUT)
 \
    _(completion, XrFutureCompletionEXT*, OUTPUT)
 
#define XRT_ENUMERATE_xrCaptureSceneAsyncBD(_) \
    _(provider, XrSenseDataProviderBD, INOUT)
 \
    _(info, const XrSceneCaptureInfoBD*, INPUT)
 \
    _(future, XrFutureEXT*, OUTPUT)
 
#define XRT_ENUMERATE_xrCaptureSceneCompleteBD(_) \
    _(provider, XrSenseDataProviderBD, INOUT)
 \
    _(future, XrFutureEXT, INOUT)
 \
    _(completion, XrFutureCompletionEXT*, OUTPUT)
 
#define XRT_ENUMERATE_xrCreatePlaneDetectorEXT(_) \
    _(session, XrSession, INOUT)
 \
    _(createInfo, const XrPlaneDetectorCreateInfoEXT*, INPUT)
 \
    _(planeDetector, XrPlaneDetectorEXT*, OUTPUT)
 
#define XRT_ENUMERATE_xrDestroyPlaneDetectorEXT(_) \
    _(planeDetector, XrPlaneDetectorEXT, INOUT)
 
#define XRT_ENUMERATE_xrBeginPlaneDetectionEXT(_) \
    _(planeDetector, XrPlaneDetectorEXT, INOUT)
 \
    _(beginInfo, const XrPlaneDetectorBeginInfoEXT*, INPUT)
 
#define XRT_ENUMERATE_xrGetPlaneDetectionStateEXT(_) \
    _(planeDetector, XrPlaneDetectorEXT, INOUT)
 \
    _(state, XrPlaneDetectionStateEXT*, OUTPUT)
 
#define XRT_ENUMERATE_xrGetPlaneDetectionsEXT(_) \
    _(planeDetector, XrPlaneDetectorEXT, INOUT)
 \
    _(info, const XrPlaneDetectorGetInfoEXT*, INPUT)
 \
    _(locations, XrPlaneDetectorLocationsEXT*, OUTPUT)
 
#define XRT_ENUMERATE_xrGetPlanePolygonBufferEXT(_) \
    _(planeDetector, XrPlaneDetectorEXT, INOUT)
 \
    _(planeId, uint64_t, INOUT)
 \
    _(polygonBufferIndex, uint32_t, INOUT)
 \
    _(polygonBuffer, XrPlaneDetectorPolygonBufferEXT*, OUTPUT)
 
#define XRT_ENUMERATE_xrPollFutureEXT(_) \
    _(instance, XrInstance, INOUT)
 \
    _(pollInfo, const XrFuturePollInfoEXT*, INPUT)
 \
    _(pollResult, XrFuturePollResultEXT*, OUTPUT)
 
#define XRT_ENUMERATE_xrCancelFutureEXT(_) \
    _(instance, XrInstance, INOUT)
 \
    _(cancelInfo, const XrFutureCancelInfoEXT*, INPUT)
 
#define XRT_ENUMERATE_xrSetSystemNotificationsML(_) \
    _(instance, XrInstance, INOUT)
 \
    _(info, const XrSystemNotificationsSetInfoML*, INPUT)
 
#define XRT_ENUMERATE_xrCreateWorldMeshDetectorML(_) \
    _(session, XrSession, INOUT)
 \
    _(createInfo, const XrWorldMeshDetectorCreateInfoML*, INPUT)
 \
    _(detector, XrWorldMeshDetectorML*, OUTPUT)
 
#define XRT_ENUMERATE_xrDestroyWorldMeshDetectorML(_) \
    _(detector, XrWorldMeshDetectorML, INOUT)
 
#define XRT_ENUMERATE_xrRequestWorldMeshStateAsyncML(_) \
    _(detector, XrWorldMeshDetectorML, INOUT)
 \
    _(stateRequest, const XrWorldMeshStateRequestInfoML*, INPUT)
 \
    _(future, XrFutureEXT*, OUTPUT)
 
#define XRT_ENUMERATE_xrRequestWorldMeshStateCompleteML(_) \
    _(detector, XrWorldMeshDetectorML, INOUT)
 \
    _(future, XrFutureEXT, INOUT)
 \
    _(completion, XrWorldMeshStateRequestCompletionML*, OUTPUT)
 
#define XRT_ENUMERATE_xrGetWorldMeshBufferRecommendSizeML(_) \
    _(detector, XrWorldMeshDetectorML, INOUT)
 \
    _(sizeInfo, const XrWorldMeshBufferRecommendedSizeInfoML*, INPUT)
 \
    _(size, XrWorldMeshBufferSizeML*, OUTPUT)
 
#define XRT_ENUMERATE_xrAllocateWorldMeshBufferML(_) \
    _(detector, XrWorldMeshDetectorML, INOUT)
 \
    _(size, const XrWorldMeshBufferSizeML*, INPUT)
 \
    _(buffer, XrWorldMeshBufferML*, OUTPUT)
 
#define XRT_ENUMERATE_xrFreeWorldMeshBufferML(_) \
    _(detector, XrWorldMeshDetectorML, INOUT)
 \
    _(buffer, const XrWorldMeshBufferML*, INPUT)
 
#define XRT_ENUMERATE_xrRequestWorldMeshAsyncML(_) \
    _(detector, XrWorldMeshDetectorML, INOUT)
 \
    _(getInfo, const XrWorldMeshGetInfoML*, INPUT)
 \
    _(buffer, XrWorldMeshBufferML*, OUTPUT)
 \
    _(future, XrFutureEXT*, OUTPUT)
 
#define XRT_ENUMERATE_xrRequestWorldMeshCompleteML(_) \
    _(detector, XrWorldMeshDetectorML, INOUT)
 \
    _(completionInfo, const XrWorldMeshRequestCompletionInfoML*, INPUT)
 \
    _(future, XrFutureEXT, INOUT)
 \
    _(completion, XrWorldMeshRequestCompletionML*, OUTPUT)
 
#define XRT_ENUMERATE_xrCreateFacialExpressionClientML(_) \
    _(session, XrSession, INOUT)
 \
    _(createInfo, const XrFacialExpressionClientCreateInfoML*, INPUT)
 \
    _(facialExpressionClient, XrFacialExpressionClientML*, OUTPUT)
 
#define XRT_ENUMERATE_xrDestroyFacialExpressionClientML(_) \
    _(facialExpressionClient, XrFacialExpressionClientML, INOUT)
 
#define XRT_ENUMERATE_xrGetFacialExpressionBlendShapePropertiesML(_) \
    _(facialExpressionClient, XrFacialExpressionClientML, INOUT)
 \
    _(blendShapeGetInfo, const XrFacialExpressionBlendShapeGetInfoML*, INPUT)
 \
    _(blendShapeCount, uint32_t, INOUT)
 \
    _(blendShapes, XrFacialExpressionBlendShapePropertiesML*, OUTPUT)
 
#define XRT_ENUMERATE_xrResumeSimultaneousHandsAndControllersTrackingMETA(_) \
    _(session, XrSession, INOUT)
 \
    _(resumeInfo, const XrSimultaneousHandsAndControllersTrackingResumeInfoMETA*, INPUT)
 
#define XRT_ENUMERATE_xrPauseSimultaneousHandsAndControllersTrackingMETA(_) \
    _(session, XrSession, INOUT)
 \
    _(pauseInfo, const XrSimultaneousHandsAndControllersTrackingPauseInfoMETA*, INPUT)
 
#define XRT_ENUMERATE_xrStartColocationDiscoveryMETA(_) \
    _(session, XrSession, INOUT)
 \
    _(info, const XrColocationDiscoveryStartInfoMETA*, INPUT)
 \
    _(discoveryRequestId, XrAsyncRequestIdFB*, OUTPUT)
 
#define XRT_ENUMERATE_xrStopColocationDiscoveryMETA(_) \
    _(session, XrSession, INOUT)
 \
    _(info, const XrColocationDiscoveryStopInfoMETA*, INPUT)
 \
    _(requestId, XrAsyncRequestIdFB*, OUTPUT)
 
#define XRT_ENUMERATE_xrStartColocationAdvertisementMETA(_) \
    _(session, XrSession, INOUT)
 \
    _(info, const XrColocationAdvertisementStartInfoMETA*, INPUT)
 \
    _(advertisementRequestId, XrAsyncRequestIdFB*, OUTPUT)
 
#define XRT_ENUMERATE_xrStopColocationAdvertisementMETA(_) \
    _(session, XrSession, INOUT)
 \
    _(info, const XrColocationAdvertisementStopInfoMETA*, INPUT)
 \
    _(requestId, XrAsyncRequestIdFB*, OUTPUT)
 
#define XRT_ENUMERATE_xrAcquireSwapchainImage(_) \
    _(swapchain, XrSwapchain, INOUT)
 \
    _(acquireInfo, const XrSwapchainImageAcquireInfo*, INPUT)
 \
    _(index, uint32_t*, OUTPUT)
 
#define XRT_ENUMERATE_xrApplyHapticFeedback(_) \
    _(session, XrSession, INOUT)
 \
    _(hapticActionInfo, const XrHapticActionInfo*, INPUT)
 \
    _(hapticFeedback, const XrHapticBaseHeader*, INPUT)
 
#define XRT_ENUMERATE_xrAttachSessionActionSets(_) \
    _(session, XrSession, INOUT)
 \
    _(attachInfo, const XrSessionActionSetsAttachInfo*, INPUT)
 
#define XRT_ENUMERATE_xrBeginFrame(_) \
    _(session, XrSession, INOUT)
 \
    _(frameBeginInfo, const XrFrameBeginInfo*, INPUT)
 
#define XRT_ENUMERATE_xrBeginSession(_) \
    _(session, XrSession, INOUT)
 \
    _(beginInfo, const XrSessionBeginInfo*, INPUT)
 
#define XRT_ENUMERATE_xrCreateAction(_) \
    _(actionSet, XrActionSet, INOUT)
 \
    _(createInfo, const XrActionCreateInfo*, INPUT)
 \
    _(action, XrAction*, OUTPUT)
 
#define XRT_ENUMERATE_xrCreateActionSet(_) \
    _(instance, XrInstance, INOUT)
 \
    _(createInfo, const XrActionSetCreateInfo*, INPUT)
 \
    _(actionSet, XrActionSet*, OUTPUT)
 
#define XRT_ENUMERATE_xrCreateActionSpace(_) \
    _(session, XrSession, INOUT)
 \
    _(createInfo, const XrActionSpaceCreateInfo*, INPUT)
 \
    _(space, XrSpace*, OUTPUT)
 
#define XRT_ENUMERATE_xrCreateApiLayerInstance(_) \
    _(info, const XrInstanceCreateInfo*, INPUT)
 \
    _(layerInfo, const XrApiLayerCreateInfo*, INPUT)
 \
    _(instance, XrInstance*, OUTPUT)
 
#define XRT_ENUMERATE_xrCreateInstance(_) \
    _(createInfo, const XrInstanceCreateInfo*, INPUT)
 \
    _(instance, XrInstance*, OUTPUT)
 
#define XRT_ENUMERATE_xrCreateReferenceSpace(_) \
    _(session, XrSession, INOUT)
 \
    _(createInfo, const XrReferenceSpaceCreateInfo*, INPUT)
 \
    _(space, XrSpace*, OUTPUT)
 
#define XRT_ENUMERATE_xrCreateSession(_) \
    _(instance, XrInstance, INOUT)
 \
    _(createInfo, const XrSessionCreateInfo*, INPUT)
 \
    _(session, XrSession*, OUTPUT)
 
#define XRT_ENUMERATE_xrCreateSwapchain(_) \
    _(session, XrSession, INOUT)
 \
    _(createInfo, const XrSwapchainCreateInfo*, INPUT)
 \
    _(swapchain, XrSwapchain*, OUTPUT)
 
#define XRT_ENUMERATE_xrDestroyAction(_) \
    _(action, XrAction, INOUT)
 
#define XRT_ENUMERATE_xrDestroyActionSet(_) \
    _(actionSet, XrActionSet, INOUT)
 
#define XRT_ENUMERATE_xrDestroyInstance(_) \
    _(instance, XrInstance, INOUT)
 
#define XRT_ENUMERATE_xrDestroySession(_) \
    _(session, XrSession, INOUT)
 
#define XRT_ENUMERATE_xrDestroySpace(_) \
    _(space, XrSpace, INOUT)
 
#define XRT_ENUMERATE_xrDestroySwapchain(_) \
    _(swapchain, XrSwapchain, INOUT)
 
#define XRT_ENUMERATE_xrEndFrame(_) \
    _(session, XrSession, INOUT)
 \
    _(frameEndInfo, const XrFrameEndInfo*, INPUT)
 
#define XRT_ENUMERATE_xrEndSession(_) \
    _(session, XrSession, INOUT)
 
#define XRT_ENUMERATE_xrEnumerateApiLayerProperties(_) \
    _(propertyCapacityInput, uint32_t, INOUT)
 \
    _(propertyCountOutput, uint32_t*, OUTPUT)
 \
    _(properties, XrApiLayerProperties*, OUTPUT)
 
#define XRT_ENUMERATE_xrEnumerateBoundSourcesForAction(_) \
    _(session, XrSession, INOUT)
 \
    _(enumerateInfo, const XrBoundSourcesForActionEnumerateInfo*, INPUT)
 \
    _(sourceCapacityInput, uint32_t, INOUT)
 \
    _(sourceCountOutput, uint32_t*, OUTPUT)
 \
    _(sources, XrPath*, OUTPUT)
 
#define XRT_ENUMERATE_xrEnumerateEnvironmentBlendModes(_) \
    _(instance, XrInstance, INOUT)
 \
    _(systemId, XrSystemId, INOUT)
 \
    _(viewConfigurationType, XrViewConfigurationType, INOUT)
 \
    _(environmentBlendModeCapacityInput, uint32_t, INOUT)
 \
    _(environmentBlendModeCountOutput, uint32_t*, OUTPUT)
 \
    _(environmentBlendModes, XrEnvironmentBlendMode*, OUTPUT)
 
#define XRT_ENUMERATE_xrEnumerateInstanceExtensionProperties(_) \
    _(layerName, const char*, INPUT)
 \
    _(propertyCapacityInput, uint32_t, INOUT)
 \
    _(propertyCountOutput, uint32_t*, OUTPUT)
 \
    _(properties, XrExtensionProperties*, OUTPUT)
 
#define XRT_ENUMERATE_xrEnumerateReferenceSpaces(_) \
    _(session, XrSession, INOUT)
 \
    _(spaceCapacityInput, uint32_t, INOUT)
 \
    _(spaceCountOutput, uint32_t*, OUTPUT)
 \
    _(spaces, XrReferenceSpaceType*, OUTPUT)
 
#define XRT_ENUMERATE_xrEnumerateSwapchainFormats(_) \
    _(session, XrSession, INOUT)
 \
    _(formatCapacityInput, uint32_t, INOUT)
 \
    _(formatCountOutput, uint32_t*, OUTPUT)
 \
    _(formats, int64_t*, OUTPUT)
 
#define XRT_ENUMERATE_xrEnumerateSwapchainImages(_) \
    _(swapchain, XrSwapchain, INOUT)
 \
    _(imageCapacityInput, uint32_t, INOUT)
 \
    _(imageCountOutput, uint32_t*, OUTPUT)
 \
    _(images, XrSwapchainImageBaseHeader*, OUTPUT)
 
#define XRT_ENUMERATE_xrEnumerateViewConfigurationViews(_) \
    _(instance, XrInstance, INOUT)
 \
    _(systemId, XrSystemId, INOUT)
 \
    _(viewConfigurationType, XrViewConfigurationType, INOUT)
 \
    _(viewCapacityInput, uint32_t, INOUT)
 \
    _(viewCountOutput, uint32_t*, OUTPUT)
 \
    _(views, XrViewConfigurationView*, OUTPUT)
 
#define XRT_ENUMERATE_xrEnumerateViewConfigurations(_) \
    _(instance, XrInstance, INOUT)
 \
    _(systemId, XrSystemId, INOUT)
 \
    _(viewConfigurationTypeCapacityInput, uint32_t, INOUT)
 \
    _(viewConfigurationTypeCountOutput, uint32_t*, OUTPUT)
 \
    _(viewConfigurationTypes, XrViewConfigurationType*, OUTPUT)
 
#define XRT_ENUMERATE_xrGetActionStateBoolean(_) \
    _(session, XrSession, INOUT)
 \
    _(getInfo, const XrActionStateGetInfo*, INPUT)
 \
    _(state, XrActionStateBoolean*, OUTPUT)
 
#define XRT_ENUMERATE_xrGetActionStateFloat(_) \
    _(session, XrSession, INOUT)
 \
    _(getInfo, const XrActionStateGetInfo*, INPUT)
 \
    _(state, XrActionStateFloat*, OUTPUT)
 
#define XRT_ENUMERATE_xrGetActionStatePose(_) \
    _(session, XrSession, INOUT)
 \
    _(getInfo, const XrActionStateGetInfo*, INPUT)
 \
    _(state, XrActionStatePose*, OUTPUT)
 
#define XRT_ENUMERATE_xrGetActionStateVector2f(_) \
    _(session, XrSession, INOUT)
 \
    _(getInfo, const XrActionStateGetInfo*, INPUT)
 \
    _(state, XrActionStateVector2f*, OUTPUT)
 
#define XRT_ENUMERATE_xrGetCurrentInteractionProfile(_) \
    _(session, XrSession, INOUT)
 \
    _(topLevelUserPath, XrPath, INOUT)
 \
    _(interactionProfile, XrInteractionProfileState*, OUTPUT)
 
#define XRT_ENUMERATE_xrGetInputSourceLocalizedName(_) \
    _(session, XrSession, INOUT)
 \
    _(getInfo, const XrInputSourceLocalizedNameGetInfo*, INPUT)
 \
    _(bufferCapacityInput, uint32_t, INOUT)
 \
    _(bufferCountOutput, uint32_t*, OUTPUT)
 \
    _(buffer, char*, OUTPUT)
 
#define XRT_ENUMERATE_xrGetInstanceProcAddr(_) \
    _(instance, XrInstance, INOUT)
 \
    _(name, const char*, INPUT)
 \
    _(function, PFN_xrVoidFunction*, OUTPUT)
 
#define XRT_ENUMERATE_xrGetInstanceProperties(_) \
    _(instance, XrInstance, INOUT)
 \
    _(instanceProperties, XrInstanceProperties*, OUTPUT)
 
#define XRT_ENUMERATE_xrGetReferenceSpaceBoundsRect(_) \
    _(session, XrSession, INOUT)
 \
    _(referenceSpaceType, XrReferenceSpaceType, INOUT)
 \
    _(bounds, XrExtent2Df*, OUTPUT)
 
#define XRT_ENUMERATE_xrGetSystem(_) \
    _(instance, XrInstance, INOUT)
 \
    _(getInfo, const XrSystemGetInfo*, INPUT)
 \
    _(systemId, XrSystemId*, OUTPUT)
 
#define XRT_ENUMERATE_xrGetSystemProperties(_) \
    _(instance, XrInstance, INOUT)
 \
    _(systemId, XrSystemId, INOUT)
 \
    _(properties, XrSystemProperties*, OUTPUT)
 
#define XRT_ENUMERATE_xrGetViewConfigurationProperties(_) \
    _(instance, XrInstance, INOUT)
 \
    _(systemId, XrSystemId, INOUT)
 \
    _(viewConfigurationType, XrViewConfigurationType, INOUT)
 \
    _(configurationProperties, XrViewConfigurationProperties*, OUTPUT)
 
#define XRT_ENUMERATE_xrLocateSpace(_) \
    _(space, XrSpace, INOUT)
 \
    _(baseSpace, XrSpace, INOUT)
 \
    _(time, XrTime, INOUT)
 \
    _(location, XrSpaceLocation*, OUTPUT)
 
#define XRT_ENUMERATE_xrLocateSpaces(_) \
    _(session, XrSession, INOUT)
 \
    _(locateInfo, const XrSpacesLocateInfo*, INPUT)
 \
    _(spaceLocations, XrSpaceLocations*, OUTPUT)
 
#define XRT_ENUMERATE_xrLocateViews(_) \
    _(session, XrSession, INOUT)
 \
    _(viewLocateInfo, const XrViewLocateInfo*, INPUT)
 \
    _(viewState, XrViewState*, OUTPUT)
 \
    _(viewCapacityInput, uint32_t, INOUT)
 \
    _(viewCountOutput, uint32_t*, OUTPUT)
 \
    _(views, XrView*, OUTPUT)
 
#define XRT_ENUMERATE_xrNegotiateLoaderApiLayerInterface(_) \
    _(loaderInfo, const XrNegotiateLoaderInfo*, INPUT)
 \
    _(layerName, const char*, INPUT)
 \
    _(apiLayerRequest, XrNegotiateApiLayerRequest*, OUTPUT)
 
#define XRT_ENUMERATE_xrNegotiateLoaderRuntimeInterface(_) \
    _(loaderInfo, const XrNegotiateLoaderInfo*, INPUT)
 \
    _(runtimeRequest, XrNegotiateRuntimeRequest*, OUTPUT)
 
#define XRT_ENUMERATE_xrPathToString(_) \
    _(instance, XrInstance, INOUT)
 \
    _(path, XrPath, INOUT)
 \
    _(bufferCapacityInput, uint32_t, INOUT)
 \
    _(bufferCountOutput, uint32_t*, OUTPUT)
 \
    _(buffer, char*, OUTPUT)
 
#define XRT_ENUMERATE_xrPollEvent(_) \
    _(instance, XrInstance, INOUT)
 \
    _(eventData, XrEventDataBuffer*, OUTPUT)
 
#define XRT_ENUMERATE_xrReleaseSwapchainImage(_) \
    _(swapchain, XrSwapchain, INOUT)
 \
    _(releaseInfo, const XrSwapchainImageReleaseInfo*, INPUT)
 
#define XRT_ENUMERATE_xrRequestExitSession(_) \
    _(session, XrSession, INOUT)
 
#define XRT_ENUMERATE_xrResultToString(_) \
    _(instance, XrInstance, INOUT)
 \
    _(value, XrResult, INOUT)
 \
    _(buffer, char[XR_MAX_RESULT_STRING_SIZE], INOUT)
 
#define XRT_ENUMERATE_xrStopHapticFeedback(_) \
    _(session, XrSession, INOUT)
 \
    _(hapticActionInfo, const XrHapticActionInfo*, INPUT)
 
#define XRT_ENUMERATE_xrStringToPath(_) \
    _(instance, XrInstance, INOUT)
 \
    _(pathString, const char*, INPUT)
 \
    _(path, XrPath*, OUTPUT)
 
#define XRT_ENUMERATE_xrStructureTypeToString(_) \
    _(instance, XrInstance, INOUT)
 \
    _(value, XrStructureType, INOUT)
 \
    _(buffer, char[XR_MAX_STRUCTURE_NAME_SIZE], INOUT)
 
#define XRT_ENUMERATE_xrSuggestInteractionProfileBindings(_) \
    _(instance, XrInstance, INOUT)
 \
    _(suggestedBindings, const XrInteractionProfileSuggestedBinding*, INPUT)
 
#define XRT_ENUMERATE_xrSyncActions(_) \
    _(session, XrSession, INOUT)
 \
    _(syncInfo, const XrActionsSyncInfo*, INPUT)
 
#define XRT_ENUMERATE_xrWaitFrame(_) \
    _(session, XrSession, INOUT)
 \
    _(frameWaitInfo, const XrFrameWaitInfo*, INPUT)
 \
    _(frameState, XrFrameState*, OUTPUT)
 
#define XRT_ENUMERATE_xrWaitSwapchainImage(_) \
    _(swapchain, XrSwapchain, INOUT)
 \
    _(waitInfo, const XrSwapchainImageWaitInfo*, INPUT)
 

// Function pointer type definitions
typedef XrResult (XRAPI_PTR *PFN_xrSetAndroidApplicationThreadKHR)(XrSession session, XrAndroidThreadTypeKHR threadType, uint32_t threadId);
typedef XrResult (XRAPI_PTR *PFN_xrCreateSwapchainAndroidSurfaceKHR)(XrSession session, const XrSwapchainCreateInfo* info, XrSwapchain* swapchain, jobject* surface);
typedef XrResult (XRAPI_PTR *PFN_xrPerfSettingsSetPerformanceLevelEXT)(XrSession session, XrPerfSettingsDomainEXT domain, XrPerfSettingsLevelEXT level);
typedef XrResult (XRAPI_PTR *PFN_xrThermalGetTemperatureTrendEXT)(XrSession session, XrPerfSettingsDomainEXT domain, XrPerfSettingsNotificationLevelEXT* notificationLevel, float* tempHeadroom, float* tempSlope);
typedef XrResult (XRAPI_PTR *PFN_xrSetDebugUtilsObjectNameEXT)(XrInstance instance, const XrDebugUtilsObjectNameInfoEXT* nameInfo);
typedef XrResult (XRAPI_PTR *PFN_xrCreateDebugUtilsMessengerEXT)(XrInstance instance, const XrDebugUtilsMessengerCreateInfoEXT* createInfo, XrDebugUtilsMessengerEXT* messenger);
typedef XrResult (XRAPI_PTR *PFN_xrDestroyDebugUtilsMessengerEXT)(XrDebugUtilsMessengerEXT messenger);
typedef XrResult (XRAPI_PTR *PFN_xrSubmitDebugUtilsMessageEXT)(XrInstance instance, XrDebugUtilsMessageSeverityFlagsEXT messageSeverity, XrDebugUtilsMessageTypeFlagsEXT messageTypes, const XrDebugUtilsMessengerCallbackDataEXT* callbackData);
typedef XrResult (XRAPI_PTR *PFN_xrSessionBeginDebugUtilsLabelRegionEXT)(XrSession session, const XrDebugUtilsLabelEXT* labelInfo);
typedef XrResult (XRAPI_PTR *PFN_xrSessionEndDebugUtilsLabelRegionEXT)(XrSession session);
typedef XrResult (XRAPI_PTR *PFN_xrSessionInsertDebugUtilsLabelEXT)(XrSession session, const XrDebugUtilsLabelEXT* labelInfo);
typedef XrResult (XRAPI_PTR *PFN_xrGetOpenGLGraphicsRequirementsKHR)(XrInstance instance, XrSystemId systemId, XrGraphicsRequirementsOpenGLKHR* graphicsRequirements);
typedef XrResult (XRAPI_PTR *PFN_xrGetOpenGLESGraphicsRequirementsKHR)(XrInstance instance, XrSystemId systemId, XrGraphicsRequirementsOpenGLESKHR* graphicsRequirements);
typedef XrResult (XRAPI_PTR *PFN_xrGetVulkanInstanceExtensionsKHR)(XrInstance instance, XrSystemId systemId, uint32_t bufferCapacityInput, uint32_t* bufferCountOutput, char* buffer);
typedef XrResult (XRAPI_PTR *PFN_xrGetVulkanDeviceExtensionsKHR)(XrInstance instance, XrSystemId systemId, uint32_t bufferCapacityInput, uint32_t* bufferCountOutput, char* buffer);
typedef XrResult (XRAPI_PTR *PFN_xrGetVulkanGraphicsDeviceKHR)(XrInstance instance, XrSystemId systemId, VkInstance vkInstance, VkPhysicalDevice* vkPhysicalDevice);
typedef XrResult (XRAPI_PTR *PFN_xrGetVulkanGraphicsRequirementsKHR)(XrInstance instance, XrSystemId systemId, XrGraphicsRequirementsVulkanKHR* graphicsRequirements);
typedef XrResult (XRAPI_PTR *PFN_xrGetD3D11GraphicsRequirementsKHR)(XrInstance instance, XrSystemId systemId, XrGraphicsRequirementsD3D11KHR* graphicsRequirements);
typedef XrResult (XRAPI_PTR *PFN_xrGetD3D12GraphicsRequirementsKHR)(XrInstance instance, XrSystemId systemId, XrGraphicsRequirementsD3D12KHR* graphicsRequirements);
typedef XrResult (XRAPI_PTR *PFN_xrGetMetalGraphicsRequirementsKHR)(XrInstance instance, XrSystemId systemId, XrGraphicsRequirementsMetalKHR* graphicsRequirements);
typedef XrResult (XRAPI_PTR *PFN_xrGetVisibilityMaskKHR)(XrSession session, XrViewConfigurationType viewConfigurationType, uint32_t viewIndex, XrVisibilityMaskTypeKHR visibilityMaskType, XrVisibilityMaskKHR* visibilityMask);
typedef XrResult (XRAPI_PTR *PFN_xrConvertWin32PerformanceCounterToTimeKHR)(XrInstance instance, const LARGE_INTEGER* performanceCounter, XrTime* time);
typedef XrResult (XRAPI_PTR *PFN_xrConvertTimeToWin32PerformanceCounterKHR)(XrInstance instance, XrTime time, LARGE_INTEGER* performanceCounter);
typedef XrResult (XRAPI_PTR *PFN_xrConvertTimespecTimeToTimeKHR)(XrInstance instance, const struct timespec* timespecTime, XrTime* time);
typedef XrResult (XRAPI_PTR *PFN_xrConvertTimeToTimespecTimeKHR)(XrInstance instance, XrTime time, struct timespec* timespecTime);
typedef XrResult (XRAPI_PTR *PFN_xrCreateSpatialAnchorMSFT)(XrSession session, const XrSpatialAnchorCreateInfoMSFT* createInfo, XrSpatialAnchorMSFT* anchor);
typedef XrResult (XRAPI_PTR *PFN_xrCreateSpatialAnchorSpaceMSFT)(XrSession session, const XrSpatialAnchorSpaceCreateInfoMSFT* createInfo, XrSpace* space);
typedef XrResult (XRAPI_PTR *PFN_xrDestroySpatialAnchorMSFT)(XrSpatialAnchorMSFT anchor);
typedef XrResult (XRAPI_PTR *PFN_xrSetInputDeviceActiveEXT)(XrSession session, XrPath interactionProfile, XrPath topLevelPath, XrBool32 isActive);
typedef XrResult (XRAPI_PTR *PFN_xrSetInputDeviceStateBoolEXT)(XrSession session, XrPath topLevelPath, XrPath inputSourcePath, XrBool32 state);
typedef XrResult (XRAPI_PTR *PFN_xrSetInputDeviceStateFloatEXT)(XrSession session, XrPath topLevelPath, XrPath inputSourcePath, float state);
typedef XrResult (XRAPI_PTR *PFN_xrSetInputDeviceStateVector2fEXT)(XrSession session, XrPath topLevelPath, XrPath inputSourcePath, XrVector2f state);
typedef XrResult (XRAPI_PTR *PFN_xrSetInputDeviceLocationEXT)(XrSession session, XrPath topLevelPath, XrPath inputSourcePath, XrSpace space, XrPosef pose);
typedef XrResult (XRAPI_PTR *PFN_xrCreateSpatialGraphNodeSpaceMSFT)(XrSession session, const XrSpatialGraphNodeSpaceCreateInfoMSFT* createInfo, XrSpace* space);
typedef XrResult (XRAPI_PTR *PFN_xrTryCreateSpatialGraphStaticNodeBindingMSFT)(XrSession session, const XrSpatialGraphStaticNodeBindingCreateInfoMSFT* createInfo, XrSpatialGraphNodeBindingMSFT* nodeBinding);
typedef XrResult (XRAPI_PTR *PFN_xrDestroySpatialGraphNodeBindingMSFT)(XrSpatialGraphNodeBindingMSFT nodeBinding);
typedef XrResult (XRAPI_PTR *PFN_xrGetSpatialGraphNodeBindingPropertiesMSFT)(XrSpatialGraphNodeBindingMSFT nodeBinding, const XrSpatialGraphNodeBindingPropertiesGetInfoMSFT* getInfo, XrSpatialGraphNodeBindingPropertiesMSFT* properties);
typedef XrResult (XRAPI_PTR *PFN_xrCreateHandTrackerEXT)(XrSession session, const XrHandTrackerCreateInfoEXT* createInfo, XrHandTrackerEXT* handTracker);
typedef XrResult (XRAPI_PTR *PFN_xrDestroyHandTrackerEXT)(XrHandTrackerEXT handTracker);
typedef XrResult (XRAPI_PTR *PFN_xrLocateHandJointsEXT)(XrHandTrackerEXT handTracker, const XrHandJointsLocateInfoEXT* locateInfo, XrHandJointLocationsEXT* locations);
typedef XrResult (XRAPI_PTR *PFN_xrCreateHandMeshSpaceMSFT)(XrHandTrackerEXT handTracker, const XrHandMeshSpaceCreateInfoMSFT* createInfo, XrSpace* space);
typedef XrResult (XRAPI_PTR *PFN_xrUpdateHandMeshMSFT)(XrHandTrackerEXT handTracker, const XrHandMeshUpdateInfoMSFT* updateInfo, XrHandMeshMSFT* handMesh);
typedef XrResult (XRAPI_PTR *PFN_xrGetControllerModelKeyMSFT)(XrSession session, XrPath topLevelUserPath, XrControllerModelKeyStateMSFT* controllerModelKeyState);
typedef XrResult (XRAPI_PTR *PFN_xrLoadControllerModelMSFT)(XrSession session, XrControllerModelKeyMSFT modelKey, uint32_t bufferCapacityInput, uint32_t* bufferCountOutput, uint8_t* buffer);
typedef XrResult (XRAPI_PTR *PFN_xrGetControllerModelPropertiesMSFT)(XrSession session, XrControllerModelKeyMSFT modelKey, XrControllerModelPropertiesMSFT* properties);
typedef XrResult (XRAPI_PTR *PFN_xrGetControllerModelStateMSFT)(XrSession session, XrControllerModelKeyMSFT modelKey, XrControllerModelStateMSFT* state);
typedef XrResult (XRAPI_PTR *PFN_xrCreateSpatialAnchorFromPerceptionAnchorMSFT)(XrSession session, IUnknown* perceptionAnchor, XrSpatialAnchorMSFT* anchor);
typedef XrResult (XRAPI_PTR *PFN_xrTryGetPerceptionAnchorFromSpatialAnchorMSFT)(XrSession session, XrSpatialAnchorMSFT anchor, IUnknown** perceptionAnchor);
typedef XrResult (XRAPI_PTR *PFN_xrEnumerateReprojectionModesMSFT)(XrInstance instance, XrSystemId systemId, XrViewConfigurationType viewConfigurationType, uint32_t modeCapacityInput, uint32_t* modeCountOutput, XrReprojectionModeMSFT* modes);
typedef XrResult (XRAPI_PTR *PFN_xrUpdateSwapchainFB)(XrSwapchain swapchain, const XrSwapchainStateBaseHeaderFB* state);
typedef XrResult (XRAPI_PTR *PFN_xrGetSwapchainStateFB)(XrSwapchain swapchain, XrSwapchainStateBaseHeaderFB* state);
typedef XrResult (XRAPI_PTR *PFN_xrCreateBodyTrackerFB)(XrSession session, const XrBodyTrackerCreateInfoFB* createInfo, XrBodyTrackerFB* bodyTracker);
typedef XrResult (XRAPI_PTR *PFN_xrDestroyBodyTrackerFB)(XrBodyTrackerFB bodyTracker);
typedef XrResult (XRAPI_PTR *PFN_xrLocateBodyJointsFB)(XrBodyTrackerFB bodyTracker, const XrBodyJointsLocateInfoFB* locateInfo, XrBodyJointLocationsFB* locations);
typedef XrResult (XRAPI_PTR *PFN_xrGetBodySkeletonFB)(XrBodyTrackerFB bodyTracker, XrBodySkeletonFB* skeleton);
typedef XrResult (XRAPI_PTR *PFN_xrInitializeLoaderKHR)(const XrLoaderInitInfoBaseHeaderKHR* loaderInitInfo);
typedef XrResult (XRAPI_PTR *PFN_xrCreateVulkanInstanceKHR)(XrInstance instance, const XrVulkanInstanceCreateInfoKHR* createInfo, VkInstance* vulkanInstance, VkResult* vulkanResult);
typedef XrResult (XRAPI_PTR *PFN_xrCreateVulkanDeviceKHR)(XrInstance instance, const XrVulkanDeviceCreateInfoKHR* createInfo, VkDevice* vulkanDevice, VkResult* vulkanResult);
typedef XrResult (XRAPI_PTR *PFN_xrGetVulkanGraphicsDevice2KHR)(XrInstance instance, const XrVulkanGraphicsDeviceGetInfoKHR* getInfo, VkPhysicalDevice* vulkanPhysicalDevice);
typedef XrResult (XRAPI_PTR *PFN_xrEnumerateSceneComputeFeaturesMSFT)(XrInstance instance, XrSystemId systemId, uint32_t featureCapacityInput, uint32_t* featureCountOutput, XrSceneComputeFeatureMSFT* features);
typedef XrResult (XRAPI_PTR *PFN_xrCreateSceneObserverMSFT)(XrSession session, const XrSceneObserverCreateInfoMSFT* createInfo, XrSceneObserverMSFT* sceneObserver);
typedef XrResult (XRAPI_PTR *PFN_xrDestroySceneObserverMSFT)(XrSceneObserverMSFT sceneObserver);
typedef XrResult (XRAPI_PTR *PFN_xrCreateSceneMSFT)(XrSceneObserverMSFT sceneObserver, const XrSceneCreateInfoMSFT* createInfo, XrSceneMSFT* scene);
typedef XrResult (XRAPI_PTR *PFN_xrDestroySceneMSFT)(XrSceneMSFT scene);
typedef XrResult (XRAPI_PTR *PFN_xrComputeNewSceneMSFT)(XrSceneObserverMSFT sceneObserver, const XrNewSceneComputeInfoMSFT* computeInfo);
typedef XrResult (XRAPI_PTR *PFN_xrGetSceneComputeStateMSFT)(XrSceneObserverMSFT sceneObserver, XrSceneComputeStateMSFT* state);
typedef XrResult (XRAPI_PTR *PFN_xrGetSceneComponentsMSFT)(XrSceneMSFT scene, const XrSceneComponentsGetInfoMSFT* getInfo, XrSceneComponentsMSFT* components);
typedef XrResult (XRAPI_PTR *PFN_xrLocateSceneComponentsMSFT)(XrSceneMSFT scene, const XrSceneComponentsLocateInfoMSFT* locateInfo, XrSceneComponentLocationsMSFT* locations);
typedef XrResult (XRAPI_PTR *PFN_xrGetSceneMeshBuffersMSFT)(XrSceneMSFT scene, const XrSceneMeshBuffersGetInfoMSFT* getInfo, XrSceneMeshBuffersMSFT* buffers);
typedef XrResult (XRAPI_PTR *PFN_xrDeserializeSceneMSFT)(XrSceneObserverMSFT sceneObserver, const XrSceneDeserializeInfoMSFT* deserializeInfo);
typedef XrResult (XRAPI_PTR *PFN_xrGetSerializedSceneFragmentDataMSFT)(XrSceneMSFT scene, const XrSerializedSceneFragmentDataGetInfoMSFT* getInfo, uint32_t countInput, uint32_t* readOutput, uint8_t* buffer);
typedef XrResult (XRAPI_PTR *PFN_xrEnumerateDisplayRefreshRatesFB)(XrSession session, uint32_t displayRefreshRateCapacityInput, uint32_t* displayRefreshRateCountOutput, float* displayRefreshRates);
typedef XrResult (XRAPI_PTR *PFN_xrGetDisplayRefreshRateFB)(XrSession session, float* displayRefreshRate);
typedef XrResult (XRAPI_PTR *PFN_xrRequestDisplayRefreshRateFB)(XrSession session, float displayRefreshRate);
typedef XrResult (XRAPI_PTR *PFN_xrEnumerateViveTrackerPathsHTCX)(XrInstance instance, uint32_t pathCapacityInput, uint32_t* pathCountOutput, XrViveTrackerPathsHTCX* paths);
typedef XrResult (XRAPI_PTR *PFN_xrCreateFacialTrackerHTC)(XrSession session, const XrFacialTrackerCreateInfoHTC* createInfo, XrFacialTrackerHTC* facialTracker);
typedef XrResult (XRAPI_PTR *PFN_xrDestroyFacialTrackerHTC)(XrFacialTrackerHTC facialTracker);
typedef XrResult (XRAPI_PTR *PFN_xrGetFacialExpressionsHTC)(XrFacialTrackerHTC facialTracker, XrFacialExpressionsHTC* facialExpressions);
typedef XrResult (XRAPI_PTR *PFN_xrEnumerateColorSpacesFB)(XrSession session, uint32_t colorSpaceCapacityInput, uint32_t* colorSpaceCountOutput, XrColorSpaceFB* colorSpaces);
typedef XrResult (XRAPI_PTR *PFN_xrSetColorSpaceFB)(XrSession session, const XrColorSpaceFB colorSpace);
typedef XrResult (XRAPI_PTR *PFN_xrGetHandMeshFB)(XrHandTrackerEXT handTracker, XrHandTrackingMeshFB* mesh);
typedef XrResult (XRAPI_PTR *PFN_xrCreateSpatialAnchorFB)(XrSession session, const XrSpatialAnchorCreateInfoFB* info, XrAsyncRequestIdFB* requestId);
typedef XrResult (XRAPI_PTR *PFN_xrGetSpaceUuidFB)(XrSpace space, XrUuidEXT* uuid);
typedef XrResult (XRAPI_PTR *PFN_xrEnumerateSpaceSupportedComponentsFB)(XrSpace space, uint32_t componentTypeCapacityInput, uint32_t* componentTypeCountOutput, XrSpaceComponentTypeFB* componentTypes);
typedef XrResult (XRAPI_PTR *PFN_xrSetSpaceComponentStatusFB)(XrSpace space, const XrSpaceComponentStatusSetInfoFB* info, XrAsyncRequestIdFB* requestId);
typedef XrResult (XRAPI_PTR *PFN_xrGetSpaceComponentStatusFB)(XrSpace space, XrSpaceComponentTypeFB componentType, XrSpaceComponentStatusFB* status);
typedef XrResult (XRAPI_PTR *PFN_xrCreateFoveationProfileFB)(XrSession session, const XrFoveationProfileCreateInfoFB* createInfo, XrFoveationProfileFB* profile);
typedef XrResult (XRAPI_PTR *PFN_xrDestroyFoveationProfileFB)(XrFoveationProfileFB profile);
typedef XrResult (XRAPI_PTR *PFN_xrQuerySystemTrackedKeyboardFB)(XrSession session, const XrKeyboardTrackingQueryFB* queryInfo, XrKeyboardTrackingDescriptionFB* keyboard);
typedef XrResult (XRAPI_PTR *PFN_xrCreateKeyboardSpaceFB)(XrSession session, const XrKeyboardSpaceCreateInfoFB* createInfo, XrSpace* keyboardSpace);
typedef XrResult (XRAPI_PTR *PFN_xrCreateTriangleMeshFB)(XrSession session, const XrTriangleMeshCreateInfoFB* createInfo, XrTriangleMeshFB* outTriangleMesh);
typedef XrResult (XRAPI_PTR *PFN_xrDestroyTriangleMeshFB)(XrTriangleMeshFB mesh);
typedef XrResult (XRAPI_PTR *PFN_xrTriangleMeshGetVertexBufferFB)(XrTriangleMeshFB mesh, XrVector3f** outVertexBuffer);
typedef XrResult (XRAPI_PTR *PFN_xrTriangleMeshGetIndexBufferFB)(XrTriangleMeshFB mesh, uint32_t** outIndexBuffer);
typedef XrResult (XRAPI_PTR *PFN_xrTriangleMeshBeginUpdateFB)(XrTriangleMeshFB mesh);
typedef XrResult (XRAPI_PTR *PFN_xrTriangleMeshEndUpdateFB)(XrTriangleMeshFB mesh, uint32_t vertexCount, uint32_t triangleCount);
typedef XrResult (XRAPI_PTR *PFN_xrTriangleMeshBeginVertexBufferUpdateFB)(XrTriangleMeshFB mesh, uint32_t* outVertexCount);
typedef XrResult (XRAPI_PTR *PFN_xrTriangleMeshEndVertexBufferUpdateFB)(XrTriangleMeshFB mesh);
typedef XrResult (XRAPI_PTR *PFN_xrCreatePassthroughFB)(XrSession session, const XrPassthroughCreateInfoFB* createInfo, XrPassthroughFB* outPassthrough);
typedef XrResult (XRAPI_PTR *PFN_xrDestroyPassthroughFB)(XrPassthroughFB passthrough);
typedef XrResult (XRAPI_PTR *PFN_xrPassthroughStartFB)(XrPassthroughFB passthrough);
typedef XrResult (XRAPI_PTR *PFN_xrPassthroughPauseFB)(XrPassthroughFB passthrough);
typedef XrResult (XRAPI_PTR *PFN_xrCreatePassthroughLayerFB)(XrSession session, const XrPassthroughLayerCreateInfoFB* createInfo, XrPassthroughLayerFB* outLayer);
typedef XrResult (XRAPI_PTR *PFN_xrDestroyPassthroughLayerFB)(XrPassthroughLayerFB layer);
typedef XrResult (XRAPI_PTR *PFN_xrPassthroughLayerPauseFB)(XrPassthroughLayerFB layer);
typedef XrResult (XRAPI_PTR *PFN_xrPassthroughLayerResumeFB)(XrPassthroughLayerFB layer);
typedef XrResult (XRAPI_PTR *PFN_xrPassthroughLayerSetStyleFB)(XrPassthroughLayerFB layer, const XrPassthroughStyleFB* style);
typedef XrResult (XRAPI_PTR *PFN_xrCreateGeometryInstanceFB)(XrSession session, const XrGeometryInstanceCreateInfoFB* createInfo, XrGeometryInstanceFB* outGeometryInstance);
typedef XrResult (XRAPI_PTR *PFN_xrDestroyGeometryInstanceFB)(XrGeometryInstanceFB instance);
typedef XrResult (XRAPI_PTR *PFN_xrGeometryInstanceSetTransformFB)(XrGeometryInstanceFB instance, const XrGeometryInstanceTransformFB* transformation);
typedef XrResult (XRAPI_PTR *PFN_xrEnumerateRenderModelPathsFB)(XrSession session, uint32_t pathCapacityInput, uint32_t* pathCountOutput, XrRenderModelPathInfoFB* paths);
typedef XrResult (XRAPI_PTR *PFN_xrGetRenderModelPropertiesFB)(XrSession session, XrPath path, XrRenderModelPropertiesFB* properties);
typedef XrResult (XRAPI_PTR *PFN_xrLoadRenderModelFB)(XrSession session, const XrRenderModelLoadInfoFB* info, XrRenderModelBufferFB* buffer);
typedef XrResult (XRAPI_PTR *PFN_xrSetEnvironmentDepthEstimationVARJO)(XrSession session, XrBool32 enabled);
typedef XrResult (XRAPI_PTR *PFN_xrSetMarkerTrackingVARJO)(XrSession session, XrBool32 enabled);
typedef XrResult (XRAPI_PTR *PFN_xrSetMarkerTrackingTimeoutVARJO)(XrSession session, uint64_t markerId, XrDuration timeout);
typedef XrResult (XRAPI_PTR *PFN_xrSetMarkerTrackingPredictionVARJO)(XrSession session, uint64_t markerId, XrBool32 enable);
typedef XrResult (XRAPI_PTR *PFN_xrGetMarkerSizeVARJO)(XrSession session, uint64_t markerId, XrExtent2Df* size);
typedef XrResult (XRAPI_PTR *PFN_xrCreateMarkerSpaceVARJO)(XrSession session, const XrMarkerSpaceCreateInfoVARJO* createInfo, XrSpace* space);
typedef XrResult (XRAPI_PTR *PFN_xrSetViewOffsetVARJO)(XrSession session, float offset);
typedef XrResult (XRAPI_PTR *PFN_xrCreateSpaceFromCoordinateFrameUIDML)(XrSession session, const XrCoordinateSpaceCreateInfoML* createInfo, XrSpace* space);
typedef XrResult (XRAPI_PTR *PFN_xrCreateMarkerDetectorML)(XrSession session, const XrMarkerDetectorCreateInfoML* createInfo, XrMarkerDetectorML* markerDetector);
typedef XrResult (XRAPI_PTR *PFN_xrDestroyMarkerDetectorML)(XrMarkerDetectorML markerDetector);
typedef XrResult (XRAPI_PTR *PFN_xrSnapshotMarkerDetectorML)(XrMarkerDetectorML markerDetector, XrMarkerDetectorSnapshotInfoML* snapshotInfo);
typedef XrResult (XRAPI_PTR *PFN_xrGetMarkerDetectorStateML)(XrMarkerDetectorML markerDetector, XrMarkerDetectorStateML* state);
typedef XrResult (XRAPI_PTR *PFN_xrGetMarkersML)(XrMarkerDetectorML markerDetector, uint32_t markerCapacityInput, uint32_t* markerCountOutput, XrMarkerML* markers);
typedef XrResult (XRAPI_PTR *PFN_xrGetMarkerReprojectionErrorML)(XrMarkerDetectorML markerDetector, XrMarkerML marker, float* reprojectionErrorMeters);
typedef XrResult (XRAPI_PTR *PFN_xrGetMarkerLengthML)(XrMarkerDetectorML markerDetector, XrMarkerML marker, float* meters);
typedef XrResult (XRAPI_PTR *PFN_xrGetMarkerNumberML)(XrMarkerDetectorML markerDetector, XrMarkerML marker, uint64_t* number);
typedef XrResult (XRAPI_PTR *PFN_xrGetMarkerStringML)(XrMarkerDetectorML markerDetector, XrMarkerML marker, uint32_t bufferCapacityInput, uint32_t* bufferCountOutput, char* buffer);
typedef XrResult (XRAPI_PTR *PFN_xrCreateMarkerSpaceML)(XrSession session, const XrMarkerSpaceCreateInfoML* createInfo, XrSpace* space);
typedef XrResult (XRAPI_PTR *PFN_xrEnableLocalizationEventsML)(XrSession session, const XrLocalizationEnableEventsInfoML* info);
typedef XrResult (XRAPI_PTR *PFN_xrQueryLocalizationMapsML)(XrSession session, const XrLocalizationMapQueryInfoBaseHeaderML* queryInfo, uint32_t mapCapacityInput, uint32_t* mapCountOutput, XrLocalizationMapML* maps);
typedef XrResult (XRAPI_PTR *PFN_xrRequestMapLocalizationML)(XrSession session, const XrMapLocalizationRequestInfoML* requestInfo);
typedef XrResult (XRAPI_PTR *PFN_xrImportLocalizationMapML)(XrSession session, const XrLocalizationMapImportInfoML* importInfo, XrUuidEXT* mapUuid);
typedef XrResult (XRAPI_PTR *PFN_xrCreateExportedLocalizationMapML)(XrSession session, const XrUuidEXT* mapUuid, XrExportedLocalizationMapML* map);
typedef XrResult (XRAPI_PTR *PFN_xrDestroyExportedLocalizationMapML)(XrExportedLocalizationMapML map);
typedef XrResult (XRAPI_PTR *PFN_xrGetExportedLocalizationMapDataML)(XrExportedLocalizationMapML map, uint32_t bufferCapacityInput, uint32_t* bufferCountOutput, char* buffer);
typedef XrResult (XRAPI_PTR *PFN_xrCreateSpatialAnchorsAsyncML)(XrSession session, const XrSpatialAnchorsCreateInfoBaseHeaderML* createInfo, XrFutureEXT* future);
typedef XrResult (XRAPI_PTR *PFN_xrCreateSpatialAnchorsCompleteML)(XrSession session, XrFutureEXT future, XrCreateSpatialAnchorsCompletionML* completion);
typedef XrResult (XRAPI_PTR *PFN_xrGetSpatialAnchorStateML)(XrSpace anchor, XrSpatialAnchorStateML* state);
typedef XrResult (XRAPI_PTR *PFN_xrCreateSpatialAnchorsStorageML)(XrSession session, const XrSpatialAnchorsCreateStorageInfoML* createInfo, XrSpatialAnchorsStorageML* storage);
typedef XrResult (XRAPI_PTR *PFN_xrDestroySpatialAnchorsStorageML)(XrSpatialAnchorsStorageML storage);
typedef XrResult (XRAPI_PTR *PFN_xrQuerySpatialAnchorsAsyncML)(XrSpatialAnchorsStorageML storage, const XrSpatialAnchorsQueryInfoBaseHeaderML* queryInfo, XrFutureEXT* future);
typedef XrResult (XRAPI_PTR *PFN_xrQuerySpatialAnchorsCompleteML)(XrSpatialAnchorsStorageML storage, XrFutureEXT future, XrSpatialAnchorsQueryCompletionML* completion);
typedef XrResult (XRAPI_PTR *PFN_xrPublishSpatialAnchorsAsyncML)(XrSpatialAnchorsStorageML storage, const XrSpatialAnchorsPublishInfoML* publishInfo, XrFutureEXT* future);
typedef XrResult (XRAPI_PTR *PFN_xrPublishSpatialAnchorsCompleteML)(XrSpatialAnchorsStorageML storage, XrFutureEXT future, XrSpatialAnchorsPublishCompletionML* completion);
typedef XrResult (XRAPI_PTR *PFN_xrDeleteSpatialAnchorsAsyncML)(XrSpatialAnchorsStorageML storage, const XrSpatialAnchorsDeleteInfoML* deleteInfo, XrFutureEXT* future);
typedef XrResult (XRAPI_PTR *PFN_xrDeleteSpatialAnchorsCompleteML)(XrSpatialAnchorsStorageML storage, XrFutureEXT future, XrSpatialAnchorsDeleteCompletionML* completion);
typedef XrResult (XRAPI_PTR *PFN_xrUpdateSpatialAnchorsExpirationAsyncML)(XrSpatialAnchorsStorageML storage, const XrSpatialAnchorsUpdateExpirationInfoML* updateInfo, XrFutureEXT* future);
typedef XrResult (XRAPI_PTR *PFN_xrUpdateSpatialAnchorsExpirationCompleteML)(XrSpatialAnchorsStorageML storage, XrFutureEXT future, XrSpatialAnchorsUpdateExpirationCompletionML* completion);
typedef XrResult (XRAPI_PTR *PFN_xrEnableUserCalibrationEventsML)(XrInstance instance, const XrUserCalibrationEnableEventsInfoML* enableInfo);
typedef XrResult (XRAPI_PTR *PFN_xrCreateSpatialAnchorStoreConnectionMSFT)(XrSession session, XrSpatialAnchorStoreConnectionMSFT* spatialAnchorStore);
typedef XrResult (XRAPI_PTR *PFN_xrDestroySpatialAnchorStoreConnectionMSFT)(XrSpatialAnchorStoreConnectionMSFT spatialAnchorStore);
typedef XrResult (XRAPI_PTR *PFN_xrPersistSpatialAnchorMSFT)(XrSpatialAnchorStoreConnectionMSFT spatialAnchorStore, const XrSpatialAnchorPersistenceInfoMSFT* spatialAnchorPersistenceInfo);
typedef XrResult (XRAPI_PTR *PFN_xrEnumeratePersistedSpatialAnchorNamesMSFT)(XrSpatialAnchorStoreConnectionMSFT spatialAnchorStore, uint32_t spatialAnchorNameCapacityInput, uint32_t* spatialAnchorNameCountOutput, XrSpatialAnchorPersistenceNameMSFT* spatialAnchorNames);
typedef XrResult (XRAPI_PTR *PFN_xrCreateSpatialAnchorFromPersistedNameMSFT)(XrSession session, const XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT* spatialAnchorCreateInfo, XrSpatialAnchorMSFT* spatialAnchor);
typedef XrResult (XRAPI_PTR *PFN_xrUnpersistSpatialAnchorMSFT)(XrSpatialAnchorStoreConnectionMSFT spatialAnchorStore, const XrSpatialAnchorPersistenceNameMSFT* spatialAnchorPersistenceName);
typedef XrResult (XRAPI_PTR *PFN_xrClearSpatialAnchorStoreMSFT)(XrSpatialAnchorStoreConnectionMSFT spatialAnchorStore);
typedef XrResult (XRAPI_PTR *PFN_xrGetSceneMarkerRawDataMSFT)(XrSceneMSFT scene, const XrUuidMSFT* markerId, uint32_t bufferCapacityInput, uint32_t* bufferCountOutput, uint8_t* buffer);
typedef XrResult (XRAPI_PTR *PFN_xrGetSceneMarkerDecodedStringMSFT)(XrSceneMSFT scene, const XrUuidMSFT* markerId, uint32_t bufferCapacityInput, uint32_t* bufferCountOutput, char* buffer);
typedef XrResult (XRAPI_PTR *PFN_xrStructureTypeToString2KHR)(XrInstance instance, XrStructureType value, char[XR_MAX_STRUCTURE_NAME_SIZE_EXTENDED_KHR] buffer);
typedef XrResult (XRAPI_PTR *PFN_xrQuerySpacesFB)(XrSession session, const XrSpaceQueryInfoBaseHeaderFB* info, XrAsyncRequestIdFB* requestId);
typedef XrResult (XRAPI_PTR *PFN_xrRetrieveSpaceQueryResultsFB)(XrSession session, XrAsyncRequestIdFB requestId, XrSpaceQueryResultsFB* results);
typedef XrResult (XRAPI_PTR *PFN_xrSaveSpaceFB)(XrSession session, const XrSpaceSaveInfoFB* info, XrAsyncRequestIdFB* requestId);
typedef XrResult (XRAPI_PTR *PFN_xrEraseSpaceFB)(XrSession session, const XrSpaceEraseInfoFB* info, XrAsyncRequestIdFB* requestId);
typedef XrResult (XRAPI_PTR *PFN_xrGetAudioOutputDeviceGuidOculus)(XrInstance instance, wchar_t[XR_MAX_AUDIO_DEVICE_STR_SIZE_OCULUS] buffer);
typedef XrResult (XRAPI_PTR *PFN_xrGetAudioInputDeviceGuidOculus)(XrInstance instance, wchar_t[XR_MAX_AUDIO_DEVICE_STR_SIZE_OCULUS] buffer);
typedef XrResult (XRAPI_PTR *PFN_xrShareSpacesFB)(XrSession session, const XrSpaceShareInfoFB* info, XrAsyncRequestIdFB* requestId);
typedef XrResult (XRAPI_PTR *PFN_xrGetSpaceBoundingBox2DFB)(XrSession session, XrSpace space, XrRect2Df* boundingBox2DOutput);
typedef XrResult (XRAPI_PTR *PFN_xrGetSpaceBoundingBox3DFB)(XrSession session, XrSpace space, XrRect3DfFB* boundingBox3DOutput);
typedef XrResult (XRAPI_PTR *PFN_xrGetSpaceSemanticLabelsFB)(XrSession session, XrSpace space, XrSemanticLabelsFB* semanticLabelsOutput);
typedef XrResult (XRAPI_PTR *PFN_xrGetSpaceBoundary2DFB)(XrSession session, XrSpace space, XrBoundary2DFB* boundary2DOutput);
typedef XrResult (XRAPI_PTR *PFN_xrGetSpaceRoomLayoutFB)(XrSession session, XrSpace space, XrRoomLayoutFB* roomLayoutOutput);
typedef XrResult (XRAPI_PTR *PFN_xrSetDigitalLensControlALMALENCE)(XrSession session, const XrDigitalLensControlALMALENCE* digitalLensControl);
typedef XrResult (XRAPI_PTR *PFN_xrRequestSceneCaptureFB)(XrSession session, const XrSceneCaptureRequestInfoFB* info, XrAsyncRequestIdFB* requestId);
typedef XrResult (XRAPI_PTR *PFN_xrGetSpaceContainerFB)(XrSession session, XrSpace space, XrSpaceContainerFB* spaceContainerOutput);
typedef XrResult (XRAPI_PTR *PFN_xrGetFoveationEyeTrackedStateMETA)(XrSession session, XrFoveationEyeTrackedStateMETA* foveationState);
typedef XrResult (XRAPI_PTR *PFN_xrCreateFaceTrackerFB)(XrSession session, const XrFaceTrackerCreateInfoFB* createInfo, XrFaceTrackerFB* faceTracker);
typedef XrResult (XRAPI_PTR *PFN_xrDestroyFaceTrackerFB)(XrFaceTrackerFB faceTracker);
typedef XrResult (XRAPI_PTR *PFN_xrGetFaceExpressionWeightsFB)(XrFaceTrackerFB faceTracker, const XrFaceExpressionInfoFB* expressionInfo, XrFaceExpressionWeightsFB* expressionWeights);
typedef XrResult (XRAPI_PTR *PFN_xrCreateEyeTrackerFB)(XrSession session, const XrEyeTrackerCreateInfoFB* createInfo, XrEyeTrackerFB* eyeTracker);
typedef XrResult (XRAPI_PTR *PFN_xrDestroyEyeTrackerFB)(XrEyeTrackerFB eyeTracker);
typedef XrResult (XRAPI_PTR *PFN_xrGetEyeGazesFB)(XrEyeTrackerFB eyeTracker, const XrEyeGazesInfoFB* gazeInfo, XrEyeGazesFB* eyeGazes);
typedef XrResult (XRAPI_PTR *PFN_xrPassthroughLayerSetKeyboardHandsIntensityFB)(XrPassthroughLayerFB layer, const XrPassthroughKeyboardHandsIntensityFB* intensity);
typedef XrResult (XRAPI_PTR *PFN_xrGetDeviceSampleRateFB)(XrSession session, const XrHapticActionInfo* hapticActionInfo, XrDevicePcmSampleRateGetInfoFB* deviceSampleRate);
typedef XrResult (XRAPI_PTR *PFN_xrGetPassthroughPreferencesMETA)(XrSession session, XrPassthroughPreferencesMETA* preferences);
typedef XrResult (XRAPI_PTR *PFN_xrCreateVirtualKeyboardMETA)(XrSession session, const XrVirtualKeyboardCreateInfoMETA* createInfo, XrVirtualKeyboardMETA* keyboard);
typedef XrResult (XRAPI_PTR *PFN_xrDestroyVirtualKeyboardMETA)(XrVirtualKeyboardMETA keyboard);
typedef XrResult (XRAPI_PTR *PFN_xrCreateVirtualKeyboardSpaceMETA)(XrSession session, XrVirtualKeyboardMETA keyboard, const XrVirtualKeyboardSpaceCreateInfoMETA* createInfo, XrSpace* keyboardSpace);
typedef XrResult (XRAPI_PTR *PFN_xrSuggestVirtualKeyboardLocationMETA)(XrVirtualKeyboardMETA keyboard, const XrVirtualKeyboardLocationInfoMETA* locationInfo);
typedef XrResult (XRAPI_PTR *PFN_xrGetVirtualKeyboardScaleMETA)(XrVirtualKeyboardMETA keyboard, float* scale);
typedef XrResult (XRAPI_PTR *PFN_xrSetVirtualKeyboardModelVisibilityMETA)(XrVirtualKeyboardMETA keyboard, const XrVirtualKeyboardModelVisibilitySetInfoMETA* modelVisibility);
typedef XrResult (XRAPI_PTR *PFN_xrGetVirtualKeyboardModelAnimationStatesMETA)(XrVirtualKeyboardMETA keyboard, XrVirtualKeyboardModelAnimationStatesMETA* animationStates);
typedef XrResult (XRAPI_PTR *PFN_xrGetVirtualKeyboardDirtyTexturesMETA)(XrVirtualKeyboardMETA keyboard, uint32_t textureIdCapacityInput, uint32_t* textureIdCountOutput, uint64_t* textureIds);
typedef XrResult (XRAPI_PTR *PFN_xrGetVirtualKeyboardTextureDataMETA)(XrVirtualKeyboardMETA keyboard, uint64_t textureId, XrVirtualKeyboardTextureDataMETA* textureData);
typedef XrResult (XRAPI_PTR *PFN_xrSendVirtualKeyboardInputMETA)(XrVirtualKeyboardMETA keyboard, const XrVirtualKeyboardInputInfoMETA* info, XrPosef* interactorRootPose);
typedef XrResult (XRAPI_PTR *PFN_xrChangeVirtualKeyboardTextContextMETA)(XrVirtualKeyboardMETA keyboard, const XrVirtualKeyboardTextContextChangeInfoMETA* changeInfo);
typedef XrResult (XRAPI_PTR *PFN_xrEnumerateExternalCamerasOCULUS)(XrSession session, uint32_t cameraCapacityInput, uint32_t* cameraCountOutput, XrExternalCameraOCULUS* cameras);
typedef XrResult (XRAPI_PTR *PFN_xrEnumeratePerformanceMetricsCounterPathsMETA)(XrInstance instance, uint32_t counterPathCapacityInput, uint32_t* counterPathCountOutput, XrPath* counterPaths);
typedef XrResult (XRAPI_PTR *PFN_xrSetPerformanceMetricsStateMETA)(XrSession session, const XrPerformanceMetricsStateMETA* state);
typedef XrResult (XRAPI_PTR *PFN_xrGetPerformanceMetricsStateMETA)(XrSession session, XrPerformanceMetricsStateMETA* state);
typedef XrResult (XRAPI_PTR *PFN_xrQueryPerformanceMetricsCounterMETA)(XrSession session, XrPath counterPath, XrPerformanceMetricsCounterMETA* counter);
typedef XrResult (XRAPI_PTR *PFN_xrSaveSpaceListFB)(XrSession session, const XrSpaceListSaveInfoFB* info, XrAsyncRequestIdFB* requestId);
typedef XrResult (XRAPI_PTR *PFN_xrCreateSpaceUserFB)(XrSession session, const XrSpaceUserCreateInfoFB* info, XrSpaceUserFB* user);
typedef XrResult (XRAPI_PTR *PFN_xrGetSpaceUserIdFB)(XrSpaceUserFB user, XrSpaceUserIdFB* userId);
typedef XrResult (XRAPI_PTR *PFN_xrDestroySpaceUserFB)(XrSpaceUserFB user);
typedef XrResult (XRAPI_PTR *PFN_xrGetRecommendedLayerResolutionMETA)(XrSession session, const XrRecommendedLayerResolutionGetInfoMETA* info, XrRecommendedLayerResolutionMETA* resolution);
typedef XrResult (XRAPI_PTR *PFN_xrCreatePassthroughColorLutMETA)(XrPassthroughFB passthrough, const XrPassthroughColorLutCreateInfoMETA* createInfo, XrPassthroughColorLutMETA* colorLut);
typedef XrResult (XRAPI_PTR *PFN_xrDestroyPassthroughColorLutMETA)(XrPassthroughColorLutMETA colorLut);
typedef XrResult (XRAPI_PTR *PFN_xrUpdatePassthroughColorLutMETA)(XrPassthroughColorLutMETA colorLut, const XrPassthroughColorLutUpdateInfoMETA* updateInfo);
typedef XrResult (XRAPI_PTR *PFN_xrGetSpaceTriangleMeshMETA)(XrSpace space, const XrSpaceTriangleMeshGetInfoMETA* getInfo, XrSpaceTriangleMeshMETA* triangleMeshOutput);
typedef XrResult (XRAPI_PTR *PFN_xrCreateFaceTracker2FB)(XrSession session, const XrFaceTrackerCreateInfo2FB* createInfo, XrFaceTracker2FB* faceTracker);
typedef XrResult (XRAPI_PTR *PFN_xrDestroyFaceTracker2FB)(XrFaceTracker2FB faceTracker);
typedef XrResult (XRAPI_PTR *PFN_xrGetFaceExpressionWeights2FB)(XrFaceTracker2FB faceTracker, const XrFaceExpressionInfo2FB* expressionInfo, XrFaceExpressionWeights2FB* expressionWeights);
typedef XrResult (XRAPI_PTR *PFN_xrShareSpacesMETA)(XrSession session, const XrShareSpacesInfoMETA* info, XrAsyncRequestIdFB* requestId);
typedef XrResult (XRAPI_PTR *PFN_xrCreateEnvironmentDepthProviderMETA)(XrSession session, const XrEnvironmentDepthProviderCreateInfoMETA* createInfo, XrEnvironmentDepthProviderMETA* environmentDepthProvider);
typedef XrResult (XRAPI_PTR *PFN_xrDestroyEnvironmentDepthProviderMETA)(XrEnvironmentDepthProviderMETA environmentDepthProvider);
typedef XrResult (XRAPI_PTR *PFN_xrStartEnvironmentDepthProviderMETA)(XrEnvironmentDepthProviderMETA environmentDepthProvider);
typedef XrResult (XRAPI_PTR *PFN_xrStopEnvironmentDepthProviderMETA)(XrEnvironmentDepthProviderMETA environmentDepthProvider);
typedef XrResult (XRAPI_PTR *PFN_xrCreateEnvironmentDepthSwapchainMETA)(XrEnvironmentDepthProviderMETA environmentDepthProvider, const XrEnvironmentDepthSwapchainCreateInfoMETA* createInfo, XrEnvironmentDepthSwapchainMETA* swapchain);
typedef XrResult (XRAPI_PTR *PFN_xrDestroyEnvironmentDepthSwapchainMETA)(XrEnvironmentDepthSwapchainMETA swapchain);
typedef XrResult (XRAPI_PTR *PFN_xrEnumerateEnvironmentDepthSwapchainImagesMETA)(XrEnvironmentDepthSwapchainMETA swapchain, uint32_t imageCapacityInput, uint32_t* imageCountOutput, XrSwapchainImageBaseHeader* images);
typedef XrResult (XRAPI_PTR *PFN_xrGetEnvironmentDepthSwapchainStateMETA)(XrEnvironmentDepthSwapchainMETA swapchain, XrEnvironmentDepthSwapchainStateMETA* state);
typedef XrResult (XRAPI_PTR *PFN_xrAcquireEnvironmentDepthImageMETA)(XrEnvironmentDepthProviderMETA environmentDepthProvider, const XrEnvironmentDepthImageAcquireInfoMETA* acquireInfo, XrEnvironmentDepthImageMETA* environmentDepthImage);
typedef XrResult (XRAPI_PTR *PFN_xrSetEnvironmentDepthHandRemovalMETA)(XrEnvironmentDepthProviderMETA environmentDepthProvider, const XrEnvironmentDepthHandRemovalSetInfoMETA* setInfo);
typedef XrResult (XRAPI_PTR *PFN_xrSetTrackingOptimizationSettingsHintQCOM)(XrSession session, XrTrackingOptimizationSettingsDomainQCOM domain, XrTrackingOptimizationSettingsHintQCOM hint);
typedef XrResult (XRAPI_PTR *PFN_xrCreatePassthroughHTC)(XrSession session, const XrPassthroughCreateInfoHTC* createInfo, XrPassthroughHTC* passthrough);
typedef XrResult (XRAPI_PTR *PFN_xrDestroyPassthroughHTC)(XrPassthroughHTC passthrough);
typedef XrResult (XRAPI_PTR *PFN_xrApplyFoveationHTC)(XrSession session, const XrFoveationApplyInfoHTC* applyInfo);
typedef XrResult (XRAPI_PTR *PFN_xrCreateSpatialAnchorHTC)(XrSession session, const XrSpatialAnchorCreateInfoHTC* createInfo, XrSpace* anchor);
typedef XrResult (XRAPI_PTR *PFN_xrGetSpatialAnchorNameHTC)(XrSpace anchor, XrSpatialAnchorNameHTC* name);
typedef XrResult (XRAPI_PTR *PFN_xrCreateBodyTrackerHTC)(XrSession session, const XrBodyTrackerCreateInfoHTC* createInfo, XrBodyTrackerHTC* bodyTracker);
typedef XrResult (XRAPI_PTR *PFN_xrDestroyBodyTrackerHTC)(XrBodyTrackerHTC bodyTracker);
typedef XrResult (XRAPI_PTR *PFN_xrLocateBodyJointsHTC)(XrBodyTrackerHTC bodyTracker, const XrBodyJointsLocateInfoHTC* locateInfo, XrBodyJointLocationsHTC* locations);
typedef XrResult (XRAPI_PTR *PFN_xrGetBodySkeletonHTC)(XrBodyTrackerHTC bodyTracker, XrSpace baseSpace, uint32_t skeletonGenerationId, XrBodySkeletonHTC* skeleton);
typedef XrResult (XRAPI_PTR *PFN_xrApplyForceFeedbackCurlMNDX)(XrHandTrackerEXT handTracker, const XrForceFeedbackCurlApplyLocationsMNDX* locations);
typedef XrResult (XRAPI_PTR *PFN_xrCreateBodyTrackerBD)(XrSession session, const XrBodyTrackerCreateInfoBD* createInfo, XrBodyTrackerBD* bodyTracker);
typedef XrResult (XRAPI_PTR *PFN_xrDestroyBodyTrackerBD)(XrBodyTrackerBD bodyTracker);
typedef XrResult (XRAPI_PTR *PFN_xrLocateBodyJointsBD)(XrBodyTrackerBD bodyTracker, const XrBodyJointsLocateInfoBD* locateInfo, XrBodyJointLocationsBD* locations);
typedef XrResult (XRAPI_PTR *PFN_xrEnumerateSpatialEntityComponentTypesBD)(XrSenseDataSnapshotBD snapshot, XrSpatialEntityIdBD entityId, uint32_t componentTypeCapacityInput, uint32_t* componentTypeCountOutput, XrSpatialEntityComponentTypeBD* componentTypes);
typedef XrResult (XRAPI_PTR *PFN_xrGetSpatialEntityUuidBD)(XrSenseDataSnapshotBD snapshot, XrSpatialEntityIdBD entityId, XrUuidEXT* uuid);
typedef XrResult (XRAPI_PTR *PFN_xrGetSpatialEntityComponentDataBD)(XrSenseDataSnapshotBD snapshot, const XrSpatialEntityComponentGetInfoBD* getInfo, XrSpatialEntityComponentDataBaseHeaderBD* componentData);
typedef XrResult (XRAPI_PTR *PFN_xrCreateSenseDataProviderBD)(XrSession session, const XrSenseDataProviderCreateInfoBD* createInfo, XrSenseDataProviderBD* provider);
typedef XrResult (XRAPI_PTR *PFN_xrStartSenseDataProviderAsyncBD)(XrSenseDataProviderBD provider, const XrSenseDataProviderStartInfoBD* startInfo, XrFutureEXT* future);
typedef XrResult (XRAPI_PTR *PFN_xrStartSenseDataProviderCompleteBD)(XrSession session, XrFutureEXT future, XrFutureCompletionEXT* completion);
typedef XrResult (XRAPI_PTR *PFN_xrGetSenseDataProviderStateBD)(XrSenseDataProviderBD provider, XrSenseDataProviderStateBD* state);
typedef XrResult (XRAPI_PTR *PFN_xrQuerySenseDataAsyncBD)(XrSenseDataProviderBD provider, const XrSenseDataQueryInfoBD* queryInfo, XrFutureEXT* future);
typedef XrResult (XRAPI_PTR *PFN_xrQuerySenseDataCompleteBD)(XrSenseDataProviderBD provider, XrFutureEXT future, XrSenseDataQueryCompletionBD* completion);
typedef XrResult (XRAPI_PTR *PFN_xrDestroySenseDataSnapshotBD)(XrSenseDataSnapshotBD snapshot);
typedef XrResult (XRAPI_PTR *PFN_xrGetQueriedSenseDataBD)(XrSenseDataSnapshotBD snapshot, XrQueriedSenseDataGetInfoBD* getInfo, XrQueriedSenseDataBD* queriedSenseData);
typedef XrResult (XRAPI_PTR *PFN_xrStopSenseDataProviderBD)(XrSenseDataProviderBD provider);
typedef XrResult (XRAPI_PTR *PFN_xrDestroySenseDataProviderBD)(XrSenseDataProviderBD provider);
typedef XrResult (XRAPI_PTR *PFN_xrCreateSpatialEntityAnchorBD)(XrSenseDataProviderBD provider, const XrSpatialEntityAnchorCreateInfoBD* createInfo, XrAnchorBD* anchor);
typedef XrResult (XRAPI_PTR *PFN_xrDestroyAnchorBD)(XrAnchorBD anchor);
typedef XrResult (XRAPI_PTR *PFN_xrGetAnchorUuidBD)(XrAnchorBD anchor, XrUuidEXT* uuid);
typedef XrResult (XRAPI_PTR *PFN_xrCreateAnchorSpaceBD)(XrSession session, const XrAnchorSpaceCreateInfoBD* createInfo, XrSpace* space);
typedef XrResult (XRAPI_PTR *PFN_xrCreateSpatialAnchorAsyncBD)(XrSenseDataProviderBD provider, const XrSpatialAnchorCreateInfoBD* info, XrFutureEXT* future);
typedef XrResult (XRAPI_PTR *PFN_xrCreateSpatialAnchorCompleteBD)(XrSenseDataProviderBD provider, XrFutureEXT future, XrSpatialAnchorCreateCompletionBD* completion);
typedef XrResult (XRAPI_PTR *PFN_xrPersistSpatialAnchorAsyncBD)(XrSenseDataProviderBD provider, const XrSpatialAnchorPersistInfoBD* info, XrFutureEXT* future);
typedef XrResult (XRAPI_PTR *PFN_xrPersistSpatialAnchorCompleteBD)(XrSenseDataProviderBD provider, XrFutureEXT future, XrFutureCompletionEXT* completion);
typedef XrResult (XRAPI_PTR *PFN_xrUnpersistSpatialAnchorAsyncBD)(XrSenseDataProviderBD provider, const XrSpatialAnchorUnpersistInfoBD* info, XrFutureEXT* future);
typedef XrResult (XRAPI_PTR *PFN_xrUnpersistSpatialAnchorCompleteBD)(XrSenseDataProviderBD provider, XrFutureEXT future, XrFutureCompletionEXT* completion);
typedef XrResult (XRAPI_PTR *PFN_xrShareSpatialAnchorAsyncBD)(XrSenseDataProviderBD provider, const XrSpatialAnchorShareInfoBD* info, XrFutureEXT* future);
typedef XrResult (XRAPI_PTR *PFN_xrShareSpatialAnchorCompleteBD)(XrSenseDataProviderBD provider, XrFutureEXT future, XrFutureCompletionEXT* completion);
typedef XrResult (XRAPI_PTR *PFN_xrDownloadSharedSpatialAnchorAsyncBD)(XrSenseDataProviderBD provider, const XrSharedSpatialAnchorDownloadInfoBD* info, XrFutureEXT* future);
typedef XrResult (XRAPI_PTR *PFN_xrDownloadSharedSpatialAnchorCompleteBD)(XrSenseDataProviderBD provider, XrFutureEXT future, XrFutureCompletionEXT* completion);
typedef XrResult (XRAPI_PTR *PFN_xrCaptureSceneAsyncBD)(XrSenseDataProviderBD provider, const XrSceneCaptureInfoBD* info, XrFutureEXT* future);
typedef XrResult (XRAPI_PTR *PFN_xrCaptureSceneCompleteBD)(XrSenseDataProviderBD provider, XrFutureEXT future, XrFutureCompletionEXT* completion);
typedef XrResult (XRAPI_PTR *PFN_xrCreatePlaneDetectorEXT)(XrSession session, const XrPlaneDetectorCreateInfoEXT* createInfo, XrPlaneDetectorEXT* planeDetector);
typedef XrResult (XRAPI_PTR *PFN_xrDestroyPlaneDetectorEXT)(XrPlaneDetectorEXT planeDetector);
typedef XrResult (XRAPI_PTR *PFN_xrBeginPlaneDetectionEXT)(XrPlaneDetectorEXT planeDetector, const XrPlaneDetectorBeginInfoEXT* beginInfo);
typedef XrResult (XRAPI_PTR *PFN_xrGetPlaneDetectionStateEXT)(XrPlaneDetectorEXT planeDetector, XrPlaneDetectionStateEXT* state);
typedef XrResult (XRAPI_PTR *PFN_xrGetPlaneDetectionsEXT)(XrPlaneDetectorEXT planeDetector, const XrPlaneDetectorGetInfoEXT* info, XrPlaneDetectorLocationsEXT* locations);
typedef XrResult (XRAPI_PTR *PFN_xrGetPlanePolygonBufferEXT)(XrPlaneDetectorEXT planeDetector, uint64_t planeId, uint32_t polygonBufferIndex, XrPlaneDetectorPolygonBufferEXT* polygonBuffer);
typedef XrResult (XRAPI_PTR *PFN_xrPollFutureEXT)(XrInstance instance, const XrFuturePollInfoEXT* pollInfo, XrFuturePollResultEXT* pollResult);
typedef XrResult (XRAPI_PTR *PFN_xrCancelFutureEXT)(XrInstance instance, const XrFutureCancelInfoEXT* cancelInfo);
typedef XrResult (XRAPI_PTR *PFN_xrSetSystemNotificationsML)(XrInstance instance, const XrSystemNotificationsSetInfoML* info);
typedef XrResult (XRAPI_PTR *PFN_xrCreateWorldMeshDetectorML)(XrSession session, const XrWorldMeshDetectorCreateInfoML* createInfo, XrWorldMeshDetectorML* detector);
typedef XrResult (XRAPI_PTR *PFN_xrDestroyWorldMeshDetectorML)(XrWorldMeshDetectorML detector);
typedef XrResult (XRAPI_PTR *PFN_xrRequestWorldMeshStateAsyncML)(XrWorldMeshDetectorML detector, const XrWorldMeshStateRequestInfoML* stateRequest, XrFutureEXT* future);
typedef XrResult (XRAPI_PTR *PFN_xrRequestWorldMeshStateCompleteML)(XrWorldMeshDetectorML detector, XrFutureEXT future, XrWorldMeshStateRequestCompletionML* completion);
typedef XrResult (XRAPI_PTR *PFN_xrGetWorldMeshBufferRecommendSizeML)(XrWorldMeshDetectorML detector, const XrWorldMeshBufferRecommendedSizeInfoML* sizeInfo, XrWorldMeshBufferSizeML* size);
typedef XrResult (XRAPI_PTR *PFN_xrAllocateWorldMeshBufferML)(XrWorldMeshDetectorML detector, const XrWorldMeshBufferSizeML* size, XrWorldMeshBufferML* buffer);
typedef XrResult (XRAPI_PTR *PFN_xrFreeWorldMeshBufferML)(XrWorldMeshDetectorML detector, const XrWorldMeshBufferML* buffer);
typedef XrResult (XRAPI_PTR *PFN_xrRequestWorldMeshAsyncML)(XrWorldMeshDetectorML detector, const XrWorldMeshGetInfoML* getInfo, XrWorldMeshBufferML* buffer, XrFutureEXT* future);
typedef XrResult (XRAPI_PTR *PFN_xrRequestWorldMeshCompleteML)(XrWorldMeshDetectorML detector, const XrWorldMeshRequestCompletionInfoML* completionInfo, XrFutureEXT future, XrWorldMeshRequestCompletionML* completion);
typedef XrResult (XRAPI_PTR *PFN_xrCreateFacialExpressionClientML)(XrSession session, const XrFacialExpressionClientCreateInfoML* createInfo, XrFacialExpressionClientML* facialExpressionClient);
typedef XrResult (XRAPI_PTR *PFN_xrDestroyFacialExpressionClientML)(XrFacialExpressionClientML facialExpressionClient);
typedef XrResult (XRAPI_PTR *PFN_xrGetFacialExpressionBlendShapePropertiesML)(XrFacialExpressionClientML facialExpressionClient, const XrFacialExpressionBlendShapeGetInfoML* blendShapeGetInfo, uint32_t blendShapeCount, XrFacialExpressionBlendShapePropertiesML* blendShapes);
typedef XrResult (XRAPI_PTR *PFN_xrResumeSimultaneousHandsAndControllersTrackingMETA)(XrSession session, const XrSimultaneousHandsAndControllersTrackingResumeInfoMETA* resumeInfo);
typedef XrResult (XRAPI_PTR *PFN_xrPauseSimultaneousHandsAndControllersTrackingMETA)(XrSession session, const XrSimultaneousHandsAndControllersTrackingPauseInfoMETA* pauseInfo);
typedef XrResult (XRAPI_PTR *PFN_xrStartColocationDiscoveryMETA)(XrSession session, const XrColocationDiscoveryStartInfoMETA* info, XrAsyncRequestIdFB* discoveryRequestId);
typedef XrResult (XRAPI_PTR *PFN_xrStopColocationDiscoveryMETA)(XrSession session, const XrColocationDiscoveryStopInfoMETA* info, XrAsyncRequestIdFB* requestId);
typedef XrResult (XRAPI_PTR *PFN_xrStartColocationAdvertisementMETA)(XrSession session, const XrColocationAdvertisementStartInfoMETA* info, XrAsyncRequestIdFB* advertisementRequestId);
typedef XrResult (XRAPI_PTR *PFN_xrStopColocationAdvertisementMETA)(XrSession session, const XrColocationAdvertisementStopInfoMETA* info, XrAsyncRequestIdFB* requestId);
typedef XrResult (XRAPI_PTR *PFN_xrAcquireSwapchainImage)(XrSwapchain swapchain, const XrSwapchainImageAcquireInfo* acquireInfo, uint32_t* index);
typedef XrResult (XRAPI_PTR *PFN_xrApplyHapticFeedback)(XrSession session, const XrHapticActionInfo* hapticActionInfo, const XrHapticBaseHeader* hapticFeedback);
typedef XrResult (XRAPI_PTR *PFN_xrAttachSessionActionSets)(XrSession session, const XrSessionActionSetsAttachInfo* attachInfo);
typedef XrResult (XRAPI_PTR *PFN_xrBeginFrame)(XrSession session, const XrFrameBeginInfo* frameBeginInfo);
typedef XrResult (XRAPI_PTR *PFN_xrBeginSession)(XrSession session, const XrSessionBeginInfo* beginInfo);
typedef XrResult (XRAPI_PTR *PFN_xrCreateAction)(XrActionSet actionSet, const XrActionCreateInfo* createInfo, XrAction* action);
typedef XrResult (XRAPI_PTR *PFN_xrCreateActionSet)(XrInstance instance, const XrActionSetCreateInfo* createInfo, XrActionSet* actionSet);
typedef XrResult (XRAPI_PTR *PFN_xrCreateActionSpace)(XrSession session, const XrActionSpaceCreateInfo* createInfo, XrSpace* space);
typedef XrResult (XRAPI_PTR *PFN_xrCreateApiLayerInstance)(const XrInstanceCreateInfo* info, const XrApiLayerCreateInfo* layerInfo, XrInstance* instance);
typedef XrResult (XRAPI_PTR *PFN_xrCreateInstance)(const XrInstanceCreateInfo* createInfo, XrInstance* instance);
typedef XrResult (XRAPI_PTR *PFN_xrCreateReferenceSpace)(XrSession session, const XrReferenceSpaceCreateInfo* createInfo, XrSpace* space);
typedef XrResult (XRAPI_PTR *PFN_xrCreateSession)(XrInstance instance, const XrSessionCreateInfo* createInfo, XrSession* session);
typedef XrResult (XRAPI_PTR *PFN_xrCreateSwapchain)(XrSession session, const XrSwapchainCreateInfo* createInfo, XrSwapchain* swapchain);
typedef XrResult (XRAPI_PTR *PFN_xrDestroyAction)(XrAction action);
typedef XrResult (XRAPI_PTR *PFN_xrDestroyActionSet)(XrActionSet actionSet);
typedef XrResult (XRAPI_PTR *PFN_xrDestroyInstance)(XrInstance instance);
typedef XrResult (XRAPI_PTR *PFN_xrDestroySession)(XrSession session);
typedef XrResult (XRAPI_PTR *PFN_xrDestroySpace)(XrSpace space);
typedef XrResult (XRAPI_PTR *PFN_xrDestroySwapchain)(XrSwapchain swapchain);
typedef XrResult (XRAPI_PTR *PFN_xrEndFrame)(XrSession session, const XrFrameEndInfo* frameEndInfo);
typedef XrResult (XRAPI_PTR *PFN_xrEndSession)(XrSession session);
typedef XrResult (XRAPI_PTR *PFN_xrEnumerateApiLayerProperties)(uint32_t propertyCapacityInput, uint32_t* propertyCountOutput, XrApiLayerProperties* properties);
typedef XrResult (XRAPI_PTR *PFN_xrEnumerateBoundSourcesForAction)(XrSession session, const XrBoundSourcesForActionEnumerateInfo* enumerateInfo, uint32_t sourceCapacityInput, uint32_t* sourceCountOutput, XrPath* sources);
typedef XrResult (XRAPI_PTR *PFN_xrEnumerateEnvironmentBlendModes)(XrInstance instance, XrSystemId systemId, XrViewConfigurationType viewConfigurationType, uint32_t environmentBlendModeCapacityInput, uint32_t* environmentBlendModeCountOutput, XrEnvironmentBlendMode* environmentBlendModes);
typedef XrResult (XRAPI_PTR *PFN_xrEnumerateInstanceExtensionProperties)(const char* layerName, uint32_t propertyCapacityInput, uint32_t* propertyCountOutput, XrExtensionProperties* properties);
typedef XrResult (XRAPI_PTR *PFN_xrEnumerateReferenceSpaces)(XrSession session, uint32_t spaceCapacityInput, uint32_t* spaceCountOutput, XrReferenceSpaceType* spaces);
typedef XrResult (XRAPI_PTR *PFN_xrEnumerateSwapchainFormats)(XrSession session, uint32_t formatCapacityInput, uint32_t* formatCountOutput, int64_t* formats);
typedef XrResult (XRAPI_PTR *PFN_xrEnumerateSwapchainImages)(XrSwapchain swapchain, uint32_t imageCapacityInput, uint32_t* imageCountOutput, XrSwapchainImageBaseHeader* images);
typedef XrResult (XRAPI_PTR *PFN_xrEnumerateViewConfigurationViews)(XrInstance instance, XrSystemId systemId, XrViewConfigurationType viewConfigurationType, uint32_t viewCapacityInput, uint32_t* viewCountOutput, XrViewConfigurationView* views);
typedef XrResult (XRAPI_PTR *PFN_xrEnumerateViewConfigurations)(XrInstance instance, XrSystemId systemId, uint32_t viewConfigurationTypeCapacityInput, uint32_t* viewConfigurationTypeCountOutput, XrViewConfigurationType* viewConfigurationTypes);
typedef XrResult (XRAPI_PTR *PFN_xrGetActionStateBoolean)(XrSession session, const XrActionStateGetInfo* getInfo, XrActionStateBoolean* state);
typedef XrResult (XRAPI_PTR *PFN_xrGetActionStateFloat)(XrSession session, const XrActionStateGetInfo* getInfo, XrActionStateFloat* state);
typedef XrResult (XRAPI_PTR *PFN_xrGetActionStatePose)(XrSession session, const XrActionStateGetInfo* getInfo, XrActionStatePose* state);
typedef XrResult (XRAPI_PTR *PFN_xrGetActionStateVector2f)(XrSession session, const XrActionStateGetInfo* getInfo, XrActionStateVector2f* state);
typedef XrResult (XRAPI_PTR *PFN_xrGetCurrentInteractionProfile)(XrSession session, XrPath topLevelUserPath, XrInteractionProfileState* interactionProfile);
typedef XrResult (XRAPI_PTR *PFN_xrGetInputSourceLocalizedName)(XrSession session, const XrInputSourceLocalizedNameGetInfo* getInfo, uint32_t bufferCapacityInput, uint32_t* bufferCountOutput, char* buffer);
typedef XrResult (XRAPI_PTR *PFN_xrGetInstanceProcAddr)(XrInstance instance, const char* name, PFN_xrVoidFunction* function);
typedef XrResult (XRAPI_PTR *PFN_xrGetInstanceProperties)(XrInstance instance, XrInstanceProperties* instanceProperties);
typedef XrResult (XRAPI_PTR *PFN_xrGetReferenceSpaceBoundsRect)(XrSession session, XrReferenceSpaceType referenceSpaceType, XrExtent2Df* bounds);
typedef XrResult (XRAPI_PTR *PFN_xrGetSystem)(XrInstance instance, const XrSystemGetInfo* getInfo, XrSystemId* systemId);
typedef XrResult (XRAPI_PTR *PFN_xrGetSystemProperties)(XrInstance instance, XrSystemId systemId, XrSystemProperties* properties);
typedef XrResult (XRAPI_PTR *PFN_xrGetViewConfigurationProperties)(XrInstance instance, XrSystemId systemId, XrViewConfigurationType viewConfigurationType, XrViewConfigurationProperties* configurationProperties);
typedef XrResult (XRAPI_PTR *PFN_xrLocateSpace)(XrSpace space, XrSpace baseSpace, XrTime time, XrSpaceLocation* location);
typedef XrResult (XRAPI_PTR *PFN_xrLocateSpaces)(XrSession session, const XrSpacesLocateInfo* locateInfo, XrSpaceLocations* spaceLocations);
typedef XrResult (XRAPI_PTR *PFN_xrLocateViews)(XrSession session, const XrViewLocateInfo* viewLocateInfo, XrViewState* viewState, uint32_t viewCapacityInput, uint32_t* viewCountOutput, XrView* views);
typedef XrResult (XRAPI_PTR *PFN_xrNegotiateLoaderApiLayerInterface)(const XrNegotiateLoaderInfo* loaderInfo, const char* layerName, XrNegotiateApiLayerRequest* apiLayerRequest);
typedef XrResult (XRAPI_PTR *PFN_xrNegotiateLoaderRuntimeInterface)(const XrNegotiateLoaderInfo* loaderInfo, XrNegotiateRuntimeRequest* runtimeRequest);
typedef XrResult (XRAPI_PTR *PFN_xrPathToString)(XrInstance instance, XrPath path, uint32_t bufferCapacityInput, uint32_t* bufferCountOutput, char* buffer);
typedef XrResult (XRAPI_PTR *PFN_xrPollEvent)(XrInstance instance, XrEventDataBuffer* eventData);
typedef XrResult (XRAPI_PTR *PFN_xrReleaseSwapchainImage)(XrSwapchain swapchain, const XrSwapchainImageReleaseInfo* releaseInfo);
typedef XrResult (XRAPI_PTR *PFN_xrRequestExitSession)(XrSession session);
typedef XrResult (XRAPI_PTR *PFN_xrResultToString)(XrInstance instance, XrResult value, char[XR_MAX_RESULT_STRING_SIZE] buffer);
typedef XrResult (XRAPI_PTR *PFN_xrStopHapticFeedback)(XrSession session, const XrHapticActionInfo* hapticActionInfo);
typedef XrResult (XRAPI_PTR *PFN_xrStringToPath)(XrInstance instance, const char* pathString, XrPath* path);
typedef XrResult (XRAPI_PTR *PFN_xrStructureTypeToString)(XrInstance instance, XrStructureType value, char[XR_MAX_STRUCTURE_NAME_SIZE] buffer);
typedef XrResult (XRAPI_PTR *PFN_xrSuggestInteractionProfileBindings)(XrInstance instance, const XrInteractionProfileSuggestedBinding* suggestedBindings);
typedef XrResult (XRAPI_PTR *PFN_xrSyncActions)(XrSession session, const XrActionsSyncInfo* syncInfo);
typedef XrResult (XRAPI_PTR *PFN_xrWaitFrame)(XrSession session, const XrFrameWaitInfo* frameWaitInfo, XrFrameState* frameState);
typedef XrResult (XRAPI_PTR *PFN_xrWaitSwapchainImage)(XrSwapchain swapchain, const XrSwapchainImageWaitInfo* waitInfo);

// Function ID enumeration
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 0
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 1
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 2
#define XRT_FUNCTION_ID_xrBeginFrame 3
#define XRT_FUNCTION_ID_xrBeginSession 4
#define XRT_FUNCTION_ID_xrCreateAction 5
#define XRT_FUNCTION_ID_xrCreateActionSet 6
#define XRT_FUNCTION_ID_xrCreateActionSpace 7
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 8
#define XRT_FUNCTION_ID_xrCreateInstance 9
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 10
#define XRT_FUNCTION_ID_xrCreateSession 11
#define XRT_FUNCTION_ID_xrCreateSwapchain 12
#define XRT_FUNCTION_ID_xrDestroyAction 13
#define XRT_FUNCTION_ID_xrDestroyActionSet 14
#define XRT_FUNCTION_ID_xrDestroyInstance 15
#define XRT_FUNCTION_ID_xrDestroySession 16
#define XRT_FUNCTION_ID_xrDestroySpace 17
#define XRT_FUNCTION_ID_xrDestroySwapchain 18
#define XRT_FUNCTION_ID_xrEndFrame 19
#define XRT_FUNCTION_ID_xrEndSession 20
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 21
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 22
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 23
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 24
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 25
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 26
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 27
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 28
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 29
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 30
#define XRT_FUNCTION_ID_xrGetActionStateFloat 31
#define XRT_FUNCTION_ID_xrGetActionStatePose 32
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 33
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 34
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 35
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 36
#define XRT_FUNCTION_ID_xrGetInstanceProperties 37
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 38
#define XRT_FUNCTION_ID_xrGetSystem 39
#define XRT_FUNCTION_ID_xrGetSystemProperties 40
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 41
#define XRT_FUNCTION_ID_xrLocateSpace 42
#define XRT_FUNCTION_ID_xrLocateSpaces 43
#define XRT_FUNCTION_ID_xrLocateViews 44
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 45
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 46
#define XRT_FUNCTION_ID_xrPathToString 47
#define XRT_FUNCTION_ID_xrPollEvent 48
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 49
#define XRT_FUNCTION_ID_xrRequestExitSession 50
#define XRT_FUNCTION_ID_xrResultToString 51
#define XRT_FUNCTION_ID_xrStopHapticFeedback 52
#define XRT_FUNCTION_ID_xrStringToPath 53
#define XRT_FUNCTION_ID_xrStructureTypeToString 54
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 55
#define XRT_FUNCTION_ID_xrSyncActions 56
#define XRT_FUNCTION_ID_xrWaitFrame 57
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 58
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117
#define XRT_FUNCTION_ID_xrAcquireSwapchainImage 59
#define XRT_FUNCTION_ID_xrApplyHapticFeedback 60
#define XRT_FUNCTION_ID_xrAttachSessionActionSets 61
#define XRT_FUNCTION_ID_xrBeginFrame 62
#define XRT_FUNCTION_ID_xrBeginSession 63
#define XRT_FUNCTION_ID_xrCreateAction 64
#define XRT_FUNCTION_ID_xrCreateActionSet 65
#define XRT_FUNCTION_ID_xrCreateActionSpace 66
#define XRT_FUNCTION_ID_xrCreateApiLayerInstance 67
#define XRT_FUNCTION_ID_xrCreateInstance 68
#define XRT_FUNCTION_ID_xrCreateReferenceSpace 69
#define XRT_FUNCTION_ID_xrCreateSession 70
#define XRT_FUNCTION_ID_xrCreateSwapchain 71
#define XRT_FUNCTION_ID_xrDestroyAction 72
#define XRT_FUNCTION_ID_xrDestroyActionSet 73
#define XRT_FUNCTION_ID_xrDestroyInstance 74
#define XRT_FUNCTION_ID_xrDestroySession 75
#define XRT_FUNCTION_ID_xrDestroySpace 76
#define XRT_FUNCTION_ID_xrDestroySwapchain 77
#define XRT_FUNCTION_ID_xrEndFrame 78
#define XRT_FUNCTION_ID_xrEndSession 79
#define XRT_FUNCTION_ID_xrEnumerateApiLayerProperties 80
#define XRT_FUNCTION_ID_xrEnumerateBoundSourcesForAction 81
#define XRT_FUNCTION_ID_xrEnumerateEnvironmentBlendModes 82
#define XRT_FUNCTION_ID_xrEnumerateInstanceExtensionProperties 83
#define XRT_FUNCTION_ID_xrEnumerateReferenceSpaces 84
#define XRT_FUNCTION_ID_xrEnumerateSwapchainFormats 85
#define XRT_FUNCTION_ID_xrEnumerateSwapchainImages 86
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurationViews 87
#define XRT_FUNCTION_ID_xrEnumerateViewConfigurations 88
#define XRT_FUNCTION_ID_xrGetActionStateBoolean 89
#define XRT_FUNCTION_ID_xrGetActionStateFloat 90
#define XRT_FUNCTION_ID_xrGetActionStatePose 91
#define XRT_FUNCTION_ID_xrGetActionStateVector2f 92
#define XRT_FUNCTION_ID_xrGetCurrentInteractionProfile 93
#define XRT_FUNCTION_ID_xrGetInputSourceLocalizedName 94
#define XRT_FUNCTION_ID_xrGetInstanceProcAddr 95
#define XRT_FUNCTION_ID_xrGetInstanceProperties 96
#define XRT_FUNCTION_ID_xrGetReferenceSpaceBoundsRect 97
#define XRT_FUNCTION_ID_xrGetSystem 98
#define XRT_FUNCTION_ID_xrGetSystemProperties 99
#define XRT_FUNCTION_ID_xrGetViewConfigurationProperties 100
#define XRT_FUNCTION_ID_xrLocateSpace 101
#define XRT_FUNCTION_ID_xrLocateSpaces 102
#define XRT_FUNCTION_ID_xrLocateViews 103
#define XRT_FUNCTION_ID_xrNegotiateLoaderApiLayerInterface 104
#define XRT_FUNCTION_ID_xrNegotiateLoaderRuntimeInterface 105
#define XRT_FUNCTION_ID_xrPathToString 106
#define XRT_FUNCTION_ID_xrPollEvent 107
#define XRT_FUNCTION_ID_xrReleaseSwapchainImage 108
#define XRT_FUNCTION_ID_xrRequestExitSession 109
#define XRT_FUNCTION_ID_xrResultToString 110
#define XRT_FUNCTION_ID_xrStopHapticFeedback 111
#define XRT_FUNCTION_ID_xrStringToPath 112
#define XRT_FUNCTION_ID_xrStructureTypeToString 113
#define XRT_FUNCTION_ID_xrSuggestInteractionProfileBindings 114
#define XRT_FUNCTION_ID_xrSyncActions 115
#define XRT_FUNCTION_ID_xrWaitFrame 116
#define XRT_FUNCTION_ID_xrWaitSwapchainImage 117

// Total function count
#define XRT_FUNCTION_COUNT 355

#endif // XRT_REFLECTION_FUNCTION_H 