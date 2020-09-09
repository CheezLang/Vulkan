source_file = "spirv_cross_binding_source.cpp"

function prepend_to_cpp()
    return [[
#include <memory>
#include "../spirv_cross_binding_source.cpp"
]]
end

function prepend_to_cheez()
    return [[

#lib("./lib/spirv-cross-c.lib")
#lib("./lib/spirv-cross-core.lib")
#lib("./lib/spirv-cross-cpp.lib")
#lib("./lib/spirv-cross-c-shared.lib")
#lib("./lib/spirv-cross-glsl.lib")
#lib("./lib/spirv-cross-hlsl.lib")
#lib("./lib/spirv-cross-msl.lib")
#lib("./lib/spirv-cross-reflect.lib")
#lib("./lib/spirv-cross-util.lib")

#export_scope

spvc_msl_vertex_format :: spvc_msl_shader_input_format

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
    spvc_context = true,
    spvc_parsed_ir = true,
    spvc_compiler = true,
    spvc_compiler_options = true,
    spvc_resources = true,
    spvc_type = true,
    spvc_constant = true,
    spvc_set = true
}

exclude_functions = {
    __va_start                          = true,
    __security_init_cookie              = true,
    __security_check_cookie             = true,
    __report_gsfailure                  = true,
    _invalid_parameter_noinfo           = true,
    _invalid_parameter_noinfo_noreturn  = true,
    _invoke_watson                      = true,
    _errno                              = true,
    _set_errno                          = true,
    _get_errno                          = true,
    __threadid                          = true,
    __threadhandle                      = true
}

special_macros = {
    SPVC_TRUE                           = "1u8",
    SPVC_FALSE                          = "0u8",
    SPVC_MSL_PUSH_CONSTANT_DESC_SET     = "u32.max",
    SPVC_MSL_PUSH_CONSTANT_BINDING      = "0",
    SPVC_MSL_SWIZZLE_BUFFER_BINDING     = "u32.max - 1",
    SPVC_MSL_BUFFER_SIZE_BUFFER_BINDING = "u32.max - 2",
    SPVC_MSL_ARGUMENT_BUFFER_BINDING    = "u32.max - 3",
    SPVC_MSL_AUX_BUFFER_STRUCT_VERSION  = "1",
    SPVC_HLSL_PUSH_CONSTANT_DESC_SET    = "u32.max",
    SPVC_HLSL_PUSH_CONSTANT_BINDING     = "0"
}

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

function split_camel_case(name)
    local result = {}
    local temp = ""
    for i=1, #name do
        local c = name:sub(i, i)
        if c == c:upper() then
            if not (temp == "") then
                result[#result+1] = temp
                temp = ""
            end
        end
        temp = temp .. c
    end
    if not (temp == "") then
        result[#result+1] = temp
        temp = ""
    end
    return result
end

function split_snake_case(name)
    local result = {}
    local temp = ""
    for i=1, #name do
        local c = name:sub(i, i)
        if c == "_" then
            if not (temp == "") then
                result[#result+1] = temp
                temp = ""
            end
        else
            temp = temp .. c
        end
    end
    if not (temp == "") then
        result[#result+1] = temp
        temp = ""
    end
    return result
end

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
        return false, name .. "_s :: struct #copy {}"
    end

    return false, nil
end

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
    --index = name:find("vk")
    --if (index == nil) then
    --    -- doesn't start with vk*, so don't emit anything
    --    return true, nil
    --end

    if exclude_functions[name] then
        return true, nil
    end
    
    return false, nil
end

function transform_enum_name(c, enum_name, member_name)
    if enum_name:sub(#enum_name, #enum_name) == "_" then
        return enum_name:sub(1, #enum_name - 1)
    else
        return enum_name
    end
end

function transform_enum_member_name(c, enum_name, member_name)
    -- enum_name is in CamelCase
    -- member_name is in WHATEVEL_CASE

    -- check if is snake case of camel case

    local member_parts = {}
    local i = 1

    if enum_name:lower() == enum_name and enum_name:find("_") < #enum_name then
        local enum_parts = split_snake_case(enum_name)
        member_parts = split_snake_case(member_name)

        while i <= #enum_parts and i <= #member_parts do
            local enum = enum_parts[i]:lower()
            local member = member_parts[i]:lower()
            if not (enum == member) then
                break
            end
            i = i + 1
        end
    else
        if enum_name:sub(#enum_name, #enum_name) == "_" then
            enum_name = enum_name:sub(1, #enum_name - 1)
        end
        
        local enum_parts = split_camel_case(enum_name)
        member_parts = split_camel_case(member_name)

        while i <= #enum_parts and i <= #member_parts do
            if not (enum_parts[i] == member_parts[i]) then
                break
            end
            i = i + 1
        end
    end

    local result = ""
    for k=i, #member_parts do
        local part = member_parts[k]:sub(1, 1):upper() .. member_parts[k]:sub(2):lower()
        result = result .. part
    end

    if tonumber(result:sub(1, 1)) ~= nil then
        result = "_" .. result
    end

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