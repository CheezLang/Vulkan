source_file = "vulkan_binding_source.cpp"

function prepend_to_cpp()
	return [[
#include <memory>
#include "../vulkan_binding_source.cpp"
]]
end

function prepend_to_cheez()
    return [[

#lib("./lib/binding.lib")

// #lib("./lib/SPIRV.lib")
// #lib("./lib/spirv-cross-c.lib")
// #lib("./lib/spirv-cross-core.lib")
// #lib("./lib/spirv-cross-cpp.lib")
// #lib("./lib/spirv-cross-c-shared.lib")
// #lib("./lib/spirv-cross-glsl.lib")
// #lib("./lib/spirv-cross-hlsl.lib")
// #lib("./lib/spirv-cross-msl.lib")
// #lib("./lib/spirv-cross-reflect.lib")
// #lib("./lib/spirv-cross-util.lib")
// #lib("./lib/SPIRV-Tools.lib")
// #lib("./lib/SPIRV-Tools-link.lib")
// #lib("./lib/SPIRV-Tools-opt.lib")
// #lib("./lib/SPIRV-Tools-reduce.lib")
// #lib("./lib/SPIRV-Tools-shared.lib")
// #lib("./lib/SPVRemapper.lib")
// #lib("./lib/VkLayer_utils.lib")
#lib("./lib/vulkan-1.lib")
// #lib("./lib/GenericCodeGen.lib")
// #lib("./lib/glslang.lib")
// #lib("./lib/HLSL.lib")
// #lib("./lib/MachineIndependent.lib")
// #lib("./lib/OGLCompiler.lib")
// #lib("./lib/OSDependent.lib")
// #lib("./lib/shaderc.lib")
// #lib("./lib/shaderc_combined.lib")
// #lib("./lib/shaderc_shared.lib")
// #lib("./lib/shaderc_util.lib")

#export_scope

VK_MAKE_VERSION :: (major: u32, minor: u32, patch: u32) #macro {
    @bin_or(@bin_lsl(major, 16), @bin_lsl(minor, 8), patch)
}
]]
end

excludes = {
    BENIGN_RACE_BEGIN         = true,
    BENIGN_RACE_END           = true,
    NO_COMPETING_THREAD_BEGIN = true,
    NO_COMPETING_THREAD_END   = true,
    NULL                      = true,
    errno                     = true,
    INT8_MIN                  = true,
    INT16_MIN                 = true,
    INT32_MIN                 = true,
    INT64_MIN                 = true,
    INT8_MAX                  = true,
    INT16_MAX                 = true,
    INT32_MAX                 = true,
    INT64_MAX                 = true,
    UINT8_MAX                 = true,
    UINT16_MAX                = true,
    UINT32_MAX                = true,
    UINT64_MAX                = true,
    INT_LEAST8_MIN            = true,
    INT_LEAST16_MIN           = true,
    INT_LEAST32_MIN           = true,
    INT_LEAST64_MIN           = true,
    INT_LEAST8_MAX            = true,
    INT_LEAST16_MAX           = true,
    INT_LEAST32_MAX           = true,
    INT_LEAST64_MAX           = true,
    UINT_LEAST8_MAX           = true,
    UINT_LEAST16_MAX          = true,
    UINT_LEAST32_MAX          = true,
    UINT_LEAST64_MAX          = true,
    INT_FAST8_MIN             = true,
    INT_FAST16_MIN            = true,
    INT_FAST32_MIN            = true,
    INT_FAST64_MIN            = true,
    INT_FAST8_MAX             = true,
    INT_FAST16_MAX            = true,
    INT_FAST32_MAX            = true,
    INT_FAST64_MAX            = true,
    UINT_FAST8_MAX            = true,
    UINT_FAST16_MAX           = true,
    UINT_FAST32_MAX           = true,
    UINT_FAST64_MAX           = true,
    INTPTR_MIN                = true,
    INTPTR_MAX                = true,
    UINTPTR_MAX               = true,
    INTMAX_MIN                = true,
    INTMAX_MAX                = true,
    UINTMAX_MAX               = true,
    PTRDIFF_MIN               = true,
    PTRDIFF_MAX               = true,
    SIZE_MAX                  = true,
    SIG_ATOMIC_MIN            = true,
    SIG_ATOMIC_MAX            = true,
    WCHAR_MIN                 = true,
    WCHAR_MAX                 = true,
    WINT_MIN                  = true,
    WINT_MAX                  = true,
    VULKAN_CORE_H_            = true,
    va_list                   = true,
    ptrdiff_t                 = true,
    intptr_t                  = true,
    __vcrt_bool               = true,
    __crt_bool                = true,
    errno_t                   = true,
    wint_t                    = true,
    wctype_t                  = true,
    __time32_t                = true,
    __time64_t                = true,
    __crt_locale_data_public  = true,
    __crt_locale_pointers     = true,
    _locale_t                 = true,
    _Mbstatet                 = true,
    mbstate_t                 = true,
    time_t                    = true,
    rsize_t                   = true,
    int_least8_t              = true,
    int_least16_t             = true,
    int_least32_t             = true,
    int_least64_t             = true,
    uint_least8_t             = true,
    uint_least16_t            = true,
    uint_least32_t            = true,
    uint_least64_t            = true,
    int_fast8_t               = true,
    int_fast16_t              = true,
    int_fast32_t              = true,
    int_fast64_t              = true,
    uint_fast8_t              = true,
    uint_fast16_t             = true,
    uint_fast32_t             = true,
    uint_fast64_t             = true,
    intmax_t                  = true,
    uintmax_t                 = true,
    VULKAN_H_                 = true,
    VKAPI_CALL                = true,
    VKAPI_PTR                 = true,
    __crt_locale_data_public  = true,
    __crt_locale_pointers     = true,
    _Mbstatet                 = true
}

special_typedefs = {
    VkBuffer              = true,
    VkImage               = true,
    VkInstance            = true,
    VkPhysicalDevice      = true,
    VkDevice              = true,
    VkQueue               = true,
    VkSemaphore           = true,
    VkCommandBuffer       = true,
    VkFence               = true,
    VkDeviceMemory        = true,
    VkEvent               = true,
    VkQueryPool           = true,
    VkBufferView          = true,
    VkImageView           = true,
    VkShaderModule        = true,
    VkPipelineCache       = true,
    VkPipelineLayout      = true,
    VkPipeline            = true,
    VkRenderPass          = true,
    VkDescriptorSetLayout = true,
    VkSampler             = true,
    VkDescriptorSet       = true,
    VkDescriptorPool      = true,
    VkFramebuffer         = true,
    VkCommandPool         = true,
    VkSamplerYcbcrConversion   = true,
    VkDescriptorUpdateTemplate = true,
    VkSurfaceKHR               = true,
    VkSwapchainKHR             = true,
    VkDisplayKHR               = true,
    VkDisplayKHR               = true,
    VkDisplayModeKHR           = true,
    VkDebugReportCallbackEXT   = true,
    VkDebugUtilsMessengerEXT   = true,
    VkValidationCacheEXT       = true,
    VkAccelerationStructureKHR      = true,
    VkPerformanceConfigurationINTEL = true,
    VkIndirectCommandsLayoutNV      = true,
    VkPrivateDataSlotEXT            = true
}

exclude_functions = {
    vkGetPhysicalDeviceFeatures2KHR                                     = true,
    vkGetPhysicalDeviceProperties2KHR                                   = true,
    vkGetPhysicalDeviceFormatProperties2KHR                             = true,
    vkGetPhysicalDeviceImageFormatProperties2KHR                        = true,
    vkGetPhysicalDeviceQueueFamilyProperties2KHR                        = true,
    vkGetPhysicalDeviceMemoryProperties2KHR                             = true,
    vkGetPhysicalDeviceSparseImageFormatProperties2KHR                  = true,
    vkCmdSetDeviceMaskKHR                                               = true,
    vkCmdDispatchBaseKHR                                                = true,
    vkTrimCommandPoolKHR                                                = true,
    vkEnumeratePhysicalDeviceGroupsKHR                                  = true,
    vkGetPhysicalDeviceExternalBufferPropertiesKHR                      = true,
    vkGetMemoryFdKHR                                                    = true,
    vkGetMemoryFdPropertiesKHR                                          = true,
    vkGetPhysicalDeviceExternalSemaphorePropertiesKHR                   = true,
    vkImportSemaphoreFdKHR                                              = true,
    vkGetSemaphoreFdKHR                                                 = true,
    vkCmdPushDescriptorSetKHR                                           = true,
    vkCmdPushDescriptorSetWithTemplateKHR                               = true,
    vkCreateDescriptorUpdateTemplateKHR                                 = true,
    vkDestroyDescriptorUpdateTemplateKHR                                = true,
    vkUpdateDescriptorSetWithTemplateKHR                                = true,
    vkCreateRenderPass2KHR                                              = true,
    vkCmdBeginRenderPass2KHR                                            = true,
    vkCmdNextSubpass2KHR                                                = true,
    vkCmdEndRenderPass2KHR                                              = true,
    vkGetSwapchainStatusKHR                                             = true,
    vkGetPhysicalDeviceExternalFencePropertiesKHR                       = true,
    vkImportFenceFdKHR                                                  = true,
    vkGetFenceFdKHR                                                     = true,
    vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR     = true,
    vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR             = true,
    vkAcquireProfilingLockKHR                                           = true,
    vkReleaseProfilingLockKHR                                           = true,
    vkGetPhysicalDeviceSurfaceCapabilities2KHR                          = true,
    vkGetPhysicalDeviceSurfaceFormats2KHR                               = true,
    vkGetPhysicalDeviceDisplayProperties2KHR                            = true,
    vkGetPhysicalDeviceDisplayPlaneProperties2KHR                       = true,
    vkGetDisplayModeProperties2KHR                                      = true,
    vkGetDisplayPlaneCapabilities2KHR                                   = true,
    vkGetImageMemoryRequirements2KHR                                    = true,
    vkGetBufferMemoryRequirements2KHR                                   = true,
    vkGetImageSparseMemoryRequirements2KHR                              = true,
    vkCreateSamplerYcbcrConversionKHR                                   = true,
    vkDestroySamplerYcbcrConversionKHR                                  = true,
    vkBindBufferMemory2KHR                                              = true,
    vkBindImageMemory2KHR                                               = true,
    vkGetDescriptorSetLayoutSupportKHR                                  = true,
    vkCmdDrawIndirectCountKHR                                           = true,
    vkCmdDrawIndexedIndirectCountKHR                                    = true,
    vkGetSemaphoreCounterValueKHR                                       = true,
    vkWaitSemaphoresKHR                                                 = true,
    vkSignalSemaphoreKHR                                                = true,
    vkGetBufferDeviceAddressKHR                                         = true,
    vkGetBufferOpaqueCaptureAddressKHR                                  = true,
    vkGetDeviceMemoryOpaqueCaptureAddressKHR                            = true,
    vkGetPipelineExecutablePropertiesKHR                                = true,
    vkGetPipelineExecutableStatisticsKHR                                = true,
    vkGetPipelineExecutableInternalRepresentationsKHR                   = true,
    vkCreateDebugReportCallbackEXT                                      = true,
    vkDestroyDebugReportCallbackEXT                                     = true,
    vkDebugReportMessageEXT                                             = true,
    vkDebugMarkerSetObjectTagEXT                                        = true,
    vkDebugMarkerSetObjectNameEXT                                       = true,
    vkCmdDebugMarkerBeginEXT                                            = true,
    vkCmdDebugMarkerEndEXT                                              = true,
    vkCmdDebugMarkerInsertEXT                                           = true,
    vkCmdBindTransformFeedbackBuffersEXT                                = true,
    vkCmdBeginTransformFeedbackEXT                                      = true,
    vkCmdEndTransformFeedbackEXT                                        = true,
    vkCmdBeginQueryIndexedEXT                                           = true,
    vkCmdEndQueryIndexedEXT                                             = true,
    vkCmdDrawIndirectByteCountEXT                                       = true,
    vkGetImageViewHandleNVX                                             = true,
    vkGetImageViewAddressNVX                                            = true,
    vkCmdDrawIndirectCountAMD                                           = true,
    vkCmdDrawIndexedIndirectCountAMD                                    = true,
    vkGetShaderInfoAMD                                                  = true,
    vkGetPhysicalDeviceExternalImageFormatPropertiesNV                  = true,
    vkCmdBeginConditionalRenderingEXT                                   = true,
    vkCmdEndConditionalRenderingEXT                                     = true,
    vkCmdSetViewportWScalingNV                                          = true,
    vkReleaseDisplayEXT                                                 = true,
    vkGetPhysicalDeviceSurfaceCapabilities2EXT                          = true,
    vkDisplayPowerControlEXT                                            = true,
    vkRegisterDeviceEventEXT                                            = true,
    vkRegisterDisplayEventEXT                                           = true,
    vkGetSwapchainCounterEXT                                            = true,
    vkGetRefreshCycleDurationGOOGLE                                     = true,
    vkGetPastPresentationTimingGOOGLE                                   = true,
    vkCmdSetDiscardRectangleEXT                                         = true,
    vkSetHdrMetadataEXT                                                 = true,
    vkSetDebugUtilsObjectNameEXT                                        = true,
    vkSetDebugUtilsObjectTagEXT                                         = true,
    vkQueueBeginDebugUtilsLabelEXT                                      = true,
    vkQueueEndDebugUtilsLabelEXT                                        = true,
    vkQueueInsertDebugUtilsLabelEXT                                     = true,
    vkCmdBeginDebugUtilsLabelEXT                                        = true,
    vkCmdEndDebugUtilsLabelEXT                                          = true,
    vkCmdInsertDebugUtilsLabelEXT                                       = true,
    vkCreateDebugUtilsMessengerEXT                                      = true,
    vkDestroyDebugUtilsMessengerEXT                                     = true,
    vkSubmitDebugUtilsMessageEXT                                        = true,
    vkCmdSetSampleLocationsEXT                                          = true,
    vkGetPhysicalDeviceMultisamplePropertiesEXT                         = true,
    vkGetImageDrmFormatModifierPropertiesEXT                            = true,
    vkCreateValidationCacheEXT                                          = true,
    vkDestroyValidationCacheEXT                                         = true,
    vkMergeValidationCachesEXT                                          = true,
    vkGetValidationCacheDataEXT                                         = true,
    vkCmdBindShadingRateImageNV                                         = true,
    vkCmdSetViewportShadingRatePaletteNV                                = true,
    vkCmdSetCoarseSampleOrderNV                                         = true,
    vkCreateAccelerationStructureNV                                     = true,
    vkDestroyAccelerationStructureKHR                                   = true,
    vkDestroyAccelerationStructureNV                                    = true,
    vkGetAccelerationStructureMemoryRequirementsNV                      = true,
    vkBindAccelerationStructureMemoryKHR                                = true,
    vkBindAccelerationStructureMemoryNV                                 = true,
    vkCmdBuildAccelerationStructureNV                                   = true,
    vkCmdCopyAccelerationStructureNV                                    = true,
    vkCmdTraceRaysNV                                                    = true,
    vkCreateRayTracingPipelinesNV                                       = true,
    vkGetRayTracingShaderGroupHandlesKHR                                = true,
    vkGetRayTracingShaderGroupHandlesNV                                 = true,
    vkGetAccelerationStructureHandleNV                                  = true,
    vkCmdWriteAccelerationStructuresPropertiesKHR                       = true,
    vkCmdWriteAccelerationStructuresPropertiesNV                        = true,
    vkCompileDeferredNV                                                 = true,
    vkGetMemoryHostPointerPropertiesEXT                                 = true,
    vkCmdWriteBufferMarkerAMD                                           = true,
    vkGetPhysicalDeviceCalibrateableTimeDomainsEXT                      = true,
    vkGetCalibratedTimestampsEXT                                        = true,
    vkCmdDrawMeshTasksNV                                                = true,
    vkCmdDrawMeshTasksIndirectNV                                        = true,
    vkCmdDrawMeshTasksIndirectCountNV                                   = true,
    vkCmdSetExclusiveScissorNV                                          = true,
    vkCmdSetCheckpointNV                                                = true,
    vkGetQueueCheckpointDataNV                                          = true,
    vkInitializePerformanceApiINTEL                                     = true,
    vkUninitializePerformanceApiINTEL                                   = true,
    vkCmdSetPerformanceMarkerINTEL                                      = true,
    vkCmdSetPerformanceStreamMarkerINTEL                                = true,
    vkCmdSetPerformanceOverrideINTEL                                    = true,
    vkAcquirePerformanceConfigurationINTEL                              = true,
    vkReleasePerformanceConfigurationINTEL                              = true,
    vkQueueSetPerformanceConfigurationINTEL                             = true,
    vkGetPerformanceParameterINTEL                                      = true,
    vkSetLocalDimmingAMD                                                = true,
    vkGetBufferDeviceAddressEXT                                         = true,
    vkGetPhysicalDeviceToolPropertiesEXT                                = true,
    vkGetPhysicalDeviceCooperativeMatrixPropertiesNV                    = true,
    vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV   = true,
    vkCreateHeadlessSurfaceEXT                                          = true,
    vkCmdSetLineStippleEXT                                              = true,
    vkResetQueryPoolEXT                                                 = true,
    vkCmdSetCullModeEXT                                                 = true,
    vkCmdSetFrontFaceEXT                                                = true,
    vkCmdSetPrimitiveTopologyEXT                                        = true,
    vkCmdSetViewportWithCountEXT                                        = true,
    vkCmdSetScissorWithCountEXT                                         = true,
    vkCmdBindVertexBuffers2EXT                                          = true,
    vkCmdSetDepthTestEnableEXT                                          = true,
    vkCmdSetDepthWriteEnableEXT                                         = true,
    vkCmdSetDepthCompareOpEXT                                           = true,
    vkCmdSetDepthBoundsTestEnableEXT                                    = true,
    vkCmdSetStencilTestEnableEXT                                        = true,
    vkCmdSetStencilOpEXT                                                = true,
    vkGetGeneratedCommandsMemoryRequirementsNV                          = true,
    vkCmdPreprocessGeneratedCommandsNV                                  = true,
    vkCmdExecuteGeneratedCommandsNV                                     = true,
    vkCmdBindPipelineShaderGroupNV                                      = true,
    vkCreateIndirectCommandsLayoutNV                                    = true,
    vkDestroyIndirectCommandsLayoutNV                                   = true,
    vkCreatePrivateDataSlotEXT                                          = true,
    vkDestroyPrivateDataSlotEXT                                         = true,
    vkSetPrivateDataEXT                                                 = true,
    vkGetPrivateDataEXT                                                 = true,
    vkGetDeviceGroupPeerMemoryFeaturesKHR                               = true
}

function on_struct(decl, name, type)
	if excludes[name] then
        return true, nil
    end

    return false, nil
end

function on_typedef(decl, name, type)
	if excludes[name] then
        return true, nil
    end

    local special = special_typedefs[name]
    if special then
        return false, name .. "_T :: struct #copy {}"
    end

    return false, nil
end


special_macros = {
    VK_ATTACHMENT_UNUSED        = "u32.max",
    VK_QUEUE_FAMILY_IGNORED     = "u32.max",
    VK_REMAINING_ARRAY_LAYERS   = "u32.max",
    VK_REMAINING_MIP_LEVELS     = "u32.max",
    VK_SUBPASS_EXTERNAL         = "u32.max",
    VK_WHOLE_SIZE               = "u64.max",
    VK_QUEUE_FAMILY_EXTERNAL    = "u32.max - 1",
    VK_QUEUE_FAMILY_FOREIGN_EXT = "u32.max - 2",
    VK_SHADER_UNUSED_KHR        = "u32.max"
}

function on_macro(decl, name)
	if excludes[name] then
        return true, nil
    end

    local special = special_macros[name]
    if special == nil then
        return false, nil
    end

    return true, (name .. " :: " .. special)
end

function on_function(decl, name)
	index = name:find("vk")
	if (index == nil) then
		-- doesn't start with glfw*, so don't emit anything
		return true, nil
    end

    if exclude_functions[name] then
        return true, nil
    end
    
    return false, nil
end

builtin_types = {
    i8 = true,
    i16 = true,
    i32 = true,
    i64 = true,
    u8 = true,
    u16 = true,
    u32 = true,
    u64 = true,
    f32 = true,
    f64 = true,
    bool = true,
    string = true
}

function transform_enum_member_name(c, enum_name, member_name)
	-- enum_name is in CamelCase
	-- member_name is in WHATEVEL_CASE
	
	local result = ""
	for i=1, #member_name do
		local prev = member_name:sub(i-1, i-1)
		local c = member_name:sub(i,i)

		if i == 1 or prev == "_" then
			c = c:upper()
		else
			c = c:lower()
		end

		if not (c == "_") then
			result = result .. c
		end
	end

	local i = 1
	while i <= #enum_name and i <= #result and enum_name:sub(i, i) == result:sub(i, i) do
		i = i + 1
	end

	result = result:sub(i)

	if tonumber(result:sub(1, 1)) ~= nil then
		result = "_" .. result
	end

    if builtin_types[result] then
        print(result)
		result = "_" .. result
	end

	-- print(enum_name .. ": " .. member_name .. " -> " .. result)
	
	return result
end

function transform_union_member_name(c, union_name, member_name)
	-- union_name is in CamelCase
	-- member_name is in WHATEVEL_CASE
	
	local result = member_name
    if builtin_types[result] then
		result = "_" .. result
	end

	-- print(union_name .. ": " .. member_name .. " -> " .. result)
	
	return result
end

function on_global_variable(decl, name, type)
	return true, nil
end