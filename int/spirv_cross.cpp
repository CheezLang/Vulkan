#include <memory>
#include "../spirv_cross_binding_source.cpp"

extern "C" void __c__spvc_get_version(uint32_t * _major, uint32_t * _minor, uint32_t * _patch) {
    spvc_get_version(_major, _minor, _patch);
}
extern "C" void __c__spvc_get_commit_revision_and_timestamp(const char * *ret) {
    *ret = (const char * )spvc_get_commit_revision_and_timestamp();
}
extern "C" void __c__spvc_msl_vertex_attribute_init(spvc_msl_vertex_attribute * _attr) {
    spvc_msl_vertex_attribute_init(_attr);
}
extern "C" void __c__spvc_msl_shader_input_init(spvc_msl_shader_input * _input) {
    spvc_msl_shader_input_init(_input);
}
extern "C" void __c__spvc_msl_resource_binding_init(spvc_msl_resource_binding * _binding) {
    spvc_msl_resource_binding_init(_binding);
}
extern "C" void __c__spvc_msl_get_aux_buffer_struct_version(uint32_t *ret) {
    *ret = (uint32_t )spvc_msl_get_aux_buffer_struct_version();
}
extern "C" void __c__spvc_msl_constexpr_sampler_init(spvc_msl_constexpr_sampler * _sampler) {
    spvc_msl_constexpr_sampler_init(_sampler);
}
extern "C" void __c__spvc_msl_sampler_ycbcr_conversion_init(spvc_msl_sampler_ycbcr_conversion * _conv) {
    spvc_msl_sampler_ycbcr_conversion_init(_conv);
}
extern "C" void __c__spvc_hlsl_resource_binding_init(spvc_hlsl_resource_binding * _binding) {
    spvc_hlsl_resource_binding_init(_binding);
}
extern "C" void __c__spvc_context_create(spvc_result *ret, spvc_context * _context) {
    *ret = (spvc_result )spvc_context_create(_context);
}
extern "C" void __c__spvc_context_destroy(spvc_context_s * _context) {
    spvc_context_destroy(_context);
}
extern "C" void __c__spvc_context_release_allocations(spvc_context_s * _context) {
    spvc_context_release_allocations(_context);
}
extern "C" void __c__spvc_context_get_last_error_string(const char * *ret, spvc_context_s * _context) {
    *ret = (const char * )spvc_context_get_last_error_string(_context);
}
extern "C" void __c__spvc_context_set_error_callback(spvc_context_s * _context, spvc_error_callback _cb, void * _userdata) {
    spvc_context_set_error_callback(_context, _cb, _userdata);
}
extern "C" void __c__spvc_context_parse_spirv(spvc_result *ret, spvc_context_s * _context, const SpvId * _spirv, uint64_t _word_count, spvc_parsed_ir * _parsed_ir) {
    *ret = (spvc_result )spvc_context_parse_spirv(_context, _spirv, _word_count, _parsed_ir);
}
extern "C" void __c__spvc_context_create_compiler(spvc_result *ret, spvc_context_s * _context, spvc_backend _backend, spvc_parsed_ir_s * _parsed_ir, spvc_capture_mode _mode, spvc_compiler * _compiler) {
    *ret = (spvc_result )spvc_context_create_compiler(_context, _backend, _parsed_ir, _mode, _compiler);
}
extern "C" void __c__spvc_compiler_get_current_id_bound(uint32_t *ret, spvc_compiler_s * _compiler) {
    *ret = (uint32_t )spvc_compiler_get_current_id_bound(_compiler);
}
extern "C" void __c__spvc_compiler_create_compiler_options(spvc_result *ret, spvc_compiler_s * _compiler, spvc_compiler_options * _options) {
    *ret = (spvc_result )spvc_compiler_create_compiler_options(_compiler, _options);
}
extern "C" void __c__spvc_compiler_options_set_bool(spvc_result *ret, spvc_compiler_options_s * _options, spvc_compiler_option _option, uint8_t _value) {
    *ret = (spvc_result )spvc_compiler_options_set_bool(_options, _option, _value);
}
extern "C" void __c__spvc_compiler_options_set_uint(spvc_result *ret, spvc_compiler_options_s * _options, spvc_compiler_option _option, uint32_t _value) {
    *ret = (spvc_result )spvc_compiler_options_set_uint(_options, _option, _value);
}
extern "C" void __c__spvc_compiler_install_compiler_options(spvc_result *ret, spvc_compiler_s * _compiler, spvc_compiler_options_s * _options) {
    *ret = (spvc_result )spvc_compiler_install_compiler_options(_compiler, _options);
}
extern "C" void __c__spvc_compiler_compile(spvc_result *ret, spvc_compiler_s * _compiler, const char * * _source) {
    *ret = (spvc_result )spvc_compiler_compile(_compiler, _source);
}
extern "C" void __c__spvc_compiler_add_header_line(spvc_result *ret, spvc_compiler_s * _compiler, const char * _line) {
    *ret = (spvc_result )spvc_compiler_add_header_line(_compiler, _line);
}
extern "C" void __c__spvc_compiler_require_extension(spvc_result *ret, spvc_compiler_s * _compiler, const char * _ext) {
    *ret = (spvc_result )spvc_compiler_require_extension(_compiler, _ext);
}
extern "C" void __c__spvc_compiler_flatten_buffer_block(spvc_result *ret, spvc_compiler_s * _compiler, uint32_t _id) {
    *ret = (spvc_result )spvc_compiler_flatten_buffer_block(_compiler, _id);
}
extern "C" void __c__spvc_compiler_variable_is_depth_or_compare(spvc_bool *ret, spvc_compiler_s * _compiler, uint32_t _id) {
    *ret = (uint8_t )spvc_compiler_variable_is_depth_or_compare(_compiler, _id);
}
extern "C" void __c__spvc_compiler_hlsl_set_root_constants_layout(spvc_result *ret, spvc_compiler_s * _compiler, const spvc_hlsl_root_constants * _constant_info, uint64_t _count) {
    *ret = (spvc_result )spvc_compiler_hlsl_set_root_constants_layout(_compiler, _constant_info, _count);
}
extern "C" void __c__spvc_compiler_hlsl_add_vertex_attribute_remap(spvc_result *ret, spvc_compiler_s * _compiler, const spvc_hlsl_vertex_attribute_remap * _remap, uint64_t _remaps) {
    *ret = (spvc_result )spvc_compiler_hlsl_add_vertex_attribute_remap(_compiler, _remap, _remaps);
}
extern "C" void __c__spvc_compiler_hlsl_remap_num_workgroups_builtin(spvc_variable_id *ret, spvc_compiler_s * _compiler) {
    *ret = (uint32_t )spvc_compiler_hlsl_remap_num_workgroups_builtin(_compiler);
}
extern "C" void __c__spvc_compiler_hlsl_set_resource_binding_flags(spvc_result *ret, spvc_compiler_s * _compiler, uint32_t _flags) {
    *ret = (spvc_result )spvc_compiler_hlsl_set_resource_binding_flags(_compiler, _flags);
}
extern "C" void __c__spvc_compiler_hlsl_add_resource_binding(spvc_result *ret, spvc_compiler_s * _compiler, const spvc_hlsl_resource_binding * _binding) {
    *ret = (spvc_result )spvc_compiler_hlsl_add_resource_binding(_compiler, _binding);
}
extern "C" void __c__spvc_compiler_hlsl_is_resource_used(spvc_bool *ret, spvc_compiler_s * _compiler, SpvExecutionModel_ _model, uint32_t _set, uint32_t _binding) {
    *ret = (uint8_t )spvc_compiler_hlsl_is_resource_used(_compiler, _model, _set, _binding);
}
extern "C" void __c__spvc_compiler_msl_is_rasterization_disabled(spvc_bool *ret, spvc_compiler_s * _compiler) {
    *ret = (uint8_t )spvc_compiler_msl_is_rasterization_disabled(_compiler);
}
extern "C" void __c__spvc_compiler_msl_needs_aux_buffer(spvc_bool *ret, spvc_compiler_s * _compiler) {
    *ret = (uint8_t )spvc_compiler_msl_needs_aux_buffer(_compiler);
}
extern "C" void __c__spvc_compiler_msl_needs_swizzle_buffer(spvc_bool *ret, spvc_compiler_s * _compiler) {
    *ret = (uint8_t )spvc_compiler_msl_needs_swizzle_buffer(_compiler);
}
extern "C" void __c__spvc_compiler_msl_needs_buffer_size_buffer(spvc_bool *ret, spvc_compiler_s * _compiler) {
    *ret = (uint8_t )spvc_compiler_msl_needs_buffer_size_buffer(_compiler);
}
extern "C" void __c__spvc_compiler_msl_needs_output_buffer(spvc_bool *ret, spvc_compiler_s * _compiler) {
    *ret = (uint8_t )spvc_compiler_msl_needs_output_buffer(_compiler);
}
extern "C" void __c__spvc_compiler_msl_needs_patch_output_buffer(spvc_bool *ret, spvc_compiler_s * _compiler) {
    *ret = (uint8_t )spvc_compiler_msl_needs_patch_output_buffer(_compiler);
}
extern "C" void __c__spvc_compiler_msl_needs_input_threadgroup_mem(spvc_bool *ret, spvc_compiler_s * _compiler) {
    *ret = (uint8_t )spvc_compiler_msl_needs_input_threadgroup_mem(_compiler);
}
extern "C" void __c__spvc_compiler_msl_add_vertex_attribute(spvc_result *ret, spvc_compiler_s * _compiler, const spvc_msl_vertex_attribute * _attrs) {
    *ret = (spvc_result )spvc_compiler_msl_add_vertex_attribute(_compiler, _attrs);
}
extern "C" void __c__spvc_compiler_msl_add_resource_binding(spvc_result *ret, spvc_compiler_s * _compiler, const spvc_msl_resource_binding * _binding) {
    *ret = (spvc_result )spvc_compiler_msl_add_resource_binding(_compiler, _binding);
}
extern "C" void __c__spvc_compiler_msl_add_shader_input(spvc_result *ret, spvc_compiler_s * _compiler, const spvc_msl_shader_input * _input) {
    *ret = (spvc_result )spvc_compiler_msl_add_shader_input(_compiler, _input);
}
extern "C" void __c__spvc_compiler_msl_add_discrete_descriptor_set(spvc_result *ret, spvc_compiler_s * _compiler, uint32_t _desc_set) {
    *ret = (spvc_result )spvc_compiler_msl_add_discrete_descriptor_set(_compiler, _desc_set);
}
extern "C" void __c__spvc_compiler_msl_set_argument_buffer_device_address_space(spvc_result *ret, spvc_compiler_s * _compiler, uint32_t _desc_set, uint8_t _device_address) {
    *ret = (spvc_result )spvc_compiler_msl_set_argument_buffer_device_address_space(_compiler, _desc_set, _device_address);
}
extern "C" void __c__spvc_compiler_msl_is_vertex_attribute_used(spvc_bool *ret, spvc_compiler_s * _compiler, uint32_t _location) {
    *ret = (uint8_t )spvc_compiler_msl_is_vertex_attribute_used(_compiler, _location);
}
extern "C" void __c__spvc_compiler_msl_is_shader_input_used(spvc_bool *ret, spvc_compiler_s * _compiler, uint32_t _location) {
    *ret = (uint8_t )spvc_compiler_msl_is_shader_input_used(_compiler, _location);
}
extern "C" void __c__spvc_compiler_msl_is_resource_used(spvc_bool *ret, spvc_compiler_s * _compiler, SpvExecutionModel_ _model, uint32_t _set, uint32_t _binding) {
    *ret = (uint8_t )spvc_compiler_msl_is_resource_used(_compiler, _model, _set, _binding);
}
extern "C" void __c__spvc_compiler_msl_remap_constexpr_sampler(spvc_result *ret, spvc_compiler_s * _compiler, uint32_t _id, const spvc_msl_constexpr_sampler * _sampler) {
    *ret = (spvc_result )spvc_compiler_msl_remap_constexpr_sampler(_compiler, _id, _sampler);
}
extern "C" void __c__spvc_compiler_msl_remap_constexpr_sampler_by_binding(spvc_result *ret, spvc_compiler_s * _compiler, uint32_t _desc_set, uint32_t _binding, const spvc_msl_constexpr_sampler * _sampler) {
    *ret = (spvc_result )spvc_compiler_msl_remap_constexpr_sampler_by_binding(_compiler, _desc_set, _binding, _sampler);
}
extern "C" void __c__spvc_compiler_msl_remap_constexpr_sampler_ycbcr(spvc_result *ret, spvc_compiler_s * _compiler, uint32_t _id, const spvc_msl_constexpr_sampler * _sampler, const spvc_msl_sampler_ycbcr_conversion * _conv) {
    *ret = (spvc_result )spvc_compiler_msl_remap_constexpr_sampler_ycbcr(_compiler, _id, _sampler, _conv);
}
extern "C" void __c__spvc_compiler_msl_remap_constexpr_sampler_by_binding_ycbcr(spvc_result *ret, spvc_compiler_s * _compiler, uint32_t _desc_set, uint32_t _binding, const spvc_msl_constexpr_sampler * _sampler, const spvc_msl_sampler_ycbcr_conversion * _conv) {
    *ret = (spvc_result )spvc_compiler_msl_remap_constexpr_sampler_by_binding_ycbcr(_compiler, _desc_set, _binding, _sampler, _conv);
}
extern "C" void __c__spvc_compiler_msl_set_fragment_output_components(spvc_result *ret, spvc_compiler_s * _compiler, uint32_t _location, uint32_t _components) {
    *ret = (spvc_result )spvc_compiler_msl_set_fragment_output_components(_compiler, _location, _components);
}
extern "C" void __c__spvc_compiler_msl_get_automatic_resource_binding(uint32_t *ret, spvc_compiler_s * _compiler, uint32_t _id) {
    *ret = (uint32_t )spvc_compiler_msl_get_automatic_resource_binding(_compiler, _id);
}
extern "C" void __c__spvc_compiler_msl_get_automatic_resource_binding_secondary(uint32_t *ret, spvc_compiler_s * _compiler, uint32_t _id) {
    *ret = (uint32_t )spvc_compiler_msl_get_automatic_resource_binding_secondary(_compiler, _id);
}
extern "C" void __c__spvc_compiler_msl_add_dynamic_buffer(spvc_result *ret, spvc_compiler_s * _compiler, uint32_t _desc_set, uint32_t _binding, uint32_t _index) {
    *ret = (spvc_result )spvc_compiler_msl_add_dynamic_buffer(_compiler, _desc_set, _binding, _index);
}
extern "C" void __c__spvc_compiler_msl_add_inline_uniform_block(spvc_result *ret, spvc_compiler_s * _compiler, uint32_t _desc_set, uint32_t _binding) {
    *ret = (spvc_result )spvc_compiler_msl_add_inline_uniform_block(_compiler, _desc_set, _binding);
}
extern "C" void __c__spvc_compiler_get_active_interface_variables(spvc_result *ret, spvc_compiler_s * _compiler, spvc_set * _set) {
    *ret = (spvc_result )spvc_compiler_get_active_interface_variables(_compiler, _set);
}
extern "C" void __c__spvc_compiler_set_enabled_interface_variables(spvc_result *ret, spvc_compiler_s * _compiler, spvc_set_s * _set) {
    *ret = (spvc_result )spvc_compiler_set_enabled_interface_variables(_compiler, _set);
}
extern "C" void __c__spvc_compiler_create_shader_resources(spvc_result *ret, spvc_compiler_s * _compiler, spvc_resources * _resources) {
    *ret = (spvc_result )spvc_compiler_create_shader_resources(_compiler, _resources);
}
extern "C" void __c__spvc_compiler_create_shader_resources_for_active_variables(spvc_result *ret, spvc_compiler_s * _compiler, spvc_resources * _resources, spvc_set_s * _active) {
    *ret = (spvc_result )spvc_compiler_create_shader_resources_for_active_variables(_compiler, _resources, _active);
}
extern "C" void __c__spvc_resources_get_resource_list_for_type(spvc_result *ret, spvc_resources_s * _resources, spvc_resource_type _type, const spvc_reflected_resource * * _resource_list, size_t * _resource_size) {
    *ret = (spvc_result )spvc_resources_get_resource_list_for_type(_resources, _type, _resource_list, _resource_size);
}
extern "C" void __c__spvc_compiler_set_decoration(spvc_compiler_s * _compiler, uint32_t _id, SpvDecoration_ _decoration, uint32_t _argument) {
    spvc_compiler_set_decoration(_compiler, _id, _decoration, _argument);
}
extern "C" void __c__spvc_compiler_set_decoration_string(spvc_compiler_s * _compiler, uint32_t _id, SpvDecoration_ _decoration, const char * _argument) {
    spvc_compiler_set_decoration_string(_compiler, _id, _decoration, _argument);
}
extern "C" void __c__spvc_compiler_set_name(spvc_compiler_s * _compiler, uint32_t _id, const char * _argument) {
    spvc_compiler_set_name(_compiler, _id, _argument);
}
extern "C" void __c__spvc_compiler_set_member_decoration(spvc_compiler_s * _compiler, uint32_t _id, uint32_t _member_index, SpvDecoration_ _decoration, uint32_t _argument) {
    spvc_compiler_set_member_decoration(_compiler, _id, _member_index, _decoration, _argument);
}
extern "C" void __c__spvc_compiler_set_member_decoration_string(spvc_compiler_s * _compiler, uint32_t _id, uint32_t _member_index, SpvDecoration_ _decoration, const char * _argument) {
    spvc_compiler_set_member_decoration_string(_compiler, _id, _member_index, _decoration, _argument);
}
extern "C" void __c__spvc_compiler_set_member_name(spvc_compiler_s * _compiler, uint32_t _id, uint32_t _member_index, const char * _argument) {
    spvc_compiler_set_member_name(_compiler, _id, _member_index, _argument);
}
extern "C" void __c__spvc_compiler_unset_decoration(spvc_compiler_s * _compiler, uint32_t _id, SpvDecoration_ _decoration) {
    spvc_compiler_unset_decoration(_compiler, _id, _decoration);
}
extern "C" void __c__spvc_compiler_unset_member_decoration(spvc_compiler_s * _compiler, uint32_t _id, uint32_t _member_index, SpvDecoration_ _decoration) {
    spvc_compiler_unset_member_decoration(_compiler, _id, _member_index, _decoration);
}
extern "C" void __c__spvc_compiler_has_decoration(spvc_bool *ret, spvc_compiler_s * _compiler, uint32_t _id, SpvDecoration_ _decoration) {
    *ret = (uint8_t )spvc_compiler_has_decoration(_compiler, _id, _decoration);
}
extern "C" void __c__spvc_compiler_has_member_decoration(spvc_bool *ret, spvc_compiler_s * _compiler, uint32_t _id, uint32_t _member_index, SpvDecoration_ _decoration) {
    *ret = (uint8_t )spvc_compiler_has_member_decoration(_compiler, _id, _member_index, _decoration);
}
extern "C" void __c__spvc_compiler_get_name(const char * *ret, spvc_compiler_s * _compiler, uint32_t _id) {
    *ret = (const char * )spvc_compiler_get_name(_compiler, _id);
}
extern "C" void __c__spvc_compiler_get_decoration(uint32_t *ret, spvc_compiler_s * _compiler, uint32_t _id, SpvDecoration_ _decoration) {
    *ret = (uint32_t )spvc_compiler_get_decoration(_compiler, _id, _decoration);
}
extern "C" void __c__spvc_compiler_get_decoration_string(const char * *ret, spvc_compiler_s * _compiler, uint32_t _id, SpvDecoration_ _decoration) {
    *ret = (const char * )spvc_compiler_get_decoration_string(_compiler, _id, _decoration);
}
extern "C" void __c__spvc_compiler_get_member_decoration(uint32_t *ret, spvc_compiler_s * _compiler, uint32_t _id, uint32_t _member_index, SpvDecoration_ _decoration) {
    *ret = (uint32_t )spvc_compiler_get_member_decoration(_compiler, _id, _member_index, _decoration);
}
extern "C" void __c__spvc_compiler_get_member_decoration_string(const char * *ret, spvc_compiler_s * _compiler, uint32_t _id, uint32_t _member_index, SpvDecoration_ _decoration) {
    *ret = (const char * )spvc_compiler_get_member_decoration_string(_compiler, _id, _member_index, _decoration);
}
extern "C" void __c__spvc_compiler_get_member_name(const char * *ret, spvc_compiler_s * _compiler, uint32_t _id, uint32_t _member_index) {
    *ret = (const char * )spvc_compiler_get_member_name(_compiler, _id, _member_index);
}
extern "C" void __c__spvc_compiler_get_entry_points(spvc_result *ret, spvc_compiler_s * _compiler, const spvc_entry_point * * _entry_points, size_t * _num_entry_points) {
    *ret = (spvc_result )spvc_compiler_get_entry_points(_compiler, _entry_points, _num_entry_points);
}
extern "C" void __c__spvc_compiler_set_entry_point(spvc_result *ret, spvc_compiler_s * _compiler, const char * _name, SpvExecutionModel_ _model) {
    *ret = (spvc_result )spvc_compiler_set_entry_point(_compiler, _name, _model);
}
extern "C" void __c__spvc_compiler_rename_entry_point(spvc_result *ret, spvc_compiler_s * _compiler, const char * _old_name, const char * _new_name, SpvExecutionModel_ _model) {
    *ret = (spvc_result )spvc_compiler_rename_entry_point(_compiler, _old_name, _new_name, _model);
}
extern "C" void __c__spvc_compiler_get_cleansed_entry_point_name(const char * *ret, spvc_compiler_s * _compiler, const char * _name, SpvExecutionModel_ _model) {
    *ret = (const char * )spvc_compiler_get_cleansed_entry_point_name(_compiler, _name, _model);
}
extern "C" void __c__spvc_compiler_set_execution_mode(spvc_compiler_s * _compiler, SpvExecutionMode_ _mode) {
    spvc_compiler_set_execution_mode(_compiler, _mode);
}
extern "C" void __c__spvc_compiler_unset_execution_mode(spvc_compiler_s * _compiler, SpvExecutionMode_ _mode) {
    spvc_compiler_unset_execution_mode(_compiler, _mode);
}
extern "C" void __c__spvc_compiler_set_execution_mode_with_arguments(spvc_compiler_s * _compiler, SpvExecutionMode_ _mode, uint32_t _arg0, uint32_t _arg1, uint32_t _arg2) {
    spvc_compiler_set_execution_mode_with_arguments(_compiler, _mode, _arg0, _arg1, _arg2);
}
extern "C" void __c__spvc_compiler_get_execution_modes(spvc_result *ret, spvc_compiler_s * _compiler, const SpvExecutionMode * * _modes, size_t * _num_modes) {
    *ret = (spvc_result )spvc_compiler_get_execution_modes(_compiler, _modes, _num_modes);
}
extern "C" void __c__spvc_compiler_get_execution_mode_argument(uint32_t *ret, spvc_compiler_s * _compiler, SpvExecutionMode_ _mode) {
    *ret = (uint32_t )spvc_compiler_get_execution_mode_argument(_compiler, _mode);
}
extern "C" void __c__spvc_compiler_get_execution_mode_argument_by_index(uint32_t *ret, spvc_compiler_s * _compiler, SpvExecutionMode_ _mode, uint32_t _index) {
    *ret = (uint32_t )spvc_compiler_get_execution_mode_argument_by_index(_compiler, _mode, _index);
}
extern "C" void __c__spvc_compiler_get_execution_model(SpvExecutionModel *ret, spvc_compiler_s * _compiler) {
    *ret = (SpvExecutionModel_ )spvc_compiler_get_execution_model(_compiler);
}
extern "C" void __c__spvc_compiler_get_type_handle(spvc_type *ret, spvc_compiler_s * _compiler, uint32_t _id) {
    *ret = (spvc_type_s * )spvc_compiler_get_type_handle(_compiler, _id);
}
extern "C" void __c__spvc_type_get_base_type_id(spvc_type_id *ret, spvc_type_s * _type) {
    *ret = (uint32_t )spvc_type_get_base_type_id(_type);
}
extern "C" void __c__spvc_type_get_basetype(spvc_basetype *ret, spvc_type_s * _type) {
    *ret = (spvc_basetype )spvc_type_get_basetype(_type);
}
extern "C" void __c__spvc_type_get_bit_width(uint32_t *ret, spvc_type_s * _type) {
    *ret = (uint32_t )spvc_type_get_bit_width(_type);
}
extern "C" void __c__spvc_type_get_vector_size(uint32_t *ret, spvc_type_s * _type) {
    *ret = (uint32_t )spvc_type_get_vector_size(_type);
}
extern "C" void __c__spvc_type_get_columns(uint32_t *ret, spvc_type_s * _type) {
    *ret = (uint32_t )spvc_type_get_columns(_type);
}
extern "C" void __c__spvc_type_get_num_array_dimensions(uint32_t *ret, spvc_type_s * _type) {
    *ret = (uint32_t )spvc_type_get_num_array_dimensions(_type);
}
extern "C" void __c__spvc_type_array_dimension_is_literal(spvc_bool *ret, spvc_type_s * _type, uint32_t _dimension) {
    *ret = (uint8_t )spvc_type_array_dimension_is_literal(_type, _dimension);
}
extern "C" void __c__spvc_type_get_array_dimension(SpvId *ret, spvc_type_s * _type, uint32_t _dimension) {
    *ret = (uint32_t )spvc_type_get_array_dimension(_type, _dimension);
}
extern "C" void __c__spvc_type_get_num_member_types(uint32_t *ret, spvc_type_s * _type) {
    *ret = (uint32_t )spvc_type_get_num_member_types(_type);
}
extern "C" void __c__spvc_type_get_member_type(spvc_type_id *ret, spvc_type_s * _type, uint32_t _index) {
    *ret = (uint32_t )spvc_type_get_member_type(_type, _index);
}
extern "C" void __c__spvc_type_get_storage_class(SpvStorageClass *ret, spvc_type_s * _type) {
    *ret = (SpvStorageClass_ )spvc_type_get_storage_class(_type);
}
extern "C" void __c__spvc_type_get_image_sampled_type(spvc_type_id *ret, spvc_type_s * _type) {
    *ret = (uint32_t )spvc_type_get_image_sampled_type(_type);
}
extern "C" void __c__spvc_type_get_image_dimension(SpvDim *ret, spvc_type_s * _type) {
    *ret = (SpvDim_ )spvc_type_get_image_dimension(_type);
}
extern "C" void __c__spvc_type_get_image_is_depth(spvc_bool *ret, spvc_type_s * _type) {
    *ret = (uint8_t )spvc_type_get_image_is_depth(_type);
}
extern "C" void __c__spvc_type_get_image_arrayed(spvc_bool *ret, spvc_type_s * _type) {
    *ret = (uint8_t )spvc_type_get_image_arrayed(_type);
}
extern "C" void __c__spvc_type_get_image_multisampled(spvc_bool *ret, spvc_type_s * _type) {
    *ret = (uint8_t )spvc_type_get_image_multisampled(_type);
}
extern "C" void __c__spvc_type_get_image_is_storage(spvc_bool *ret, spvc_type_s * _type) {
    *ret = (uint8_t )spvc_type_get_image_is_storage(_type);
}
extern "C" void __c__spvc_type_get_image_storage_format(SpvImageFormat *ret, spvc_type_s * _type) {
    *ret = (SpvImageFormat_ )spvc_type_get_image_storage_format(_type);
}
extern "C" void __c__spvc_type_get_image_access_qualifier(SpvAccessQualifier *ret, spvc_type_s * _type) {
    *ret = (SpvAccessQualifier_ )spvc_type_get_image_access_qualifier(_type);
}
extern "C" void __c__spvc_compiler_get_declared_struct_size(spvc_result *ret, spvc_compiler_s * _compiler, spvc_type_s * _struct_type, size_t * _size) {
    *ret = (spvc_result )spvc_compiler_get_declared_struct_size(_compiler, _struct_type, _size);
}
extern "C" void __c__spvc_compiler_get_declared_struct_size_runtime_array(spvc_result *ret, spvc_compiler_s * _compiler, spvc_type_s * _struct_type, uint64_t _array_size, size_t * _size) {
    *ret = (spvc_result )spvc_compiler_get_declared_struct_size_runtime_array(_compiler, _struct_type, _array_size, _size);
}
extern "C" void __c__spvc_compiler_get_declared_struct_member_size(spvc_result *ret, spvc_compiler_s * _compiler, spvc_type_s * _type, uint32_t _index, size_t * _size) {
    *ret = (spvc_result )spvc_compiler_get_declared_struct_member_size(_compiler, _type, _index, _size);
}
extern "C" void __c__spvc_compiler_type_struct_member_offset(spvc_result *ret, spvc_compiler_s * _compiler, spvc_type_s * _type, uint32_t _index, uint32_t * _offset) {
    *ret = (spvc_result )spvc_compiler_type_struct_member_offset(_compiler, _type, _index, _offset);
}
extern "C" void __c__spvc_compiler_type_struct_member_array_stride(spvc_result *ret, spvc_compiler_s * _compiler, spvc_type_s * _type, uint32_t _index, uint32_t * _stride) {
    *ret = (spvc_result )spvc_compiler_type_struct_member_array_stride(_compiler, _type, _index, _stride);
}
extern "C" void __c__spvc_compiler_type_struct_member_matrix_stride(spvc_result *ret, spvc_compiler_s * _compiler, spvc_type_s * _type, uint32_t _index, uint32_t * _stride) {
    *ret = (spvc_result )spvc_compiler_type_struct_member_matrix_stride(_compiler, _type, _index, _stride);
}
extern "C" void __c__spvc_compiler_build_dummy_sampler_for_combined_images(spvc_result *ret, spvc_compiler_s * _compiler, spvc_variable_id * _id) {
    *ret = (spvc_result )spvc_compiler_build_dummy_sampler_for_combined_images(_compiler, _id);
}
extern "C" void __c__spvc_compiler_build_combined_image_samplers(spvc_result *ret, spvc_compiler_s * _compiler) {
    *ret = (spvc_result )spvc_compiler_build_combined_image_samplers(_compiler);
}
extern "C" void __c__spvc_compiler_get_combined_image_samplers(spvc_result *ret, spvc_compiler_s * _compiler, const spvc_combined_image_sampler * * _samplers, size_t * _num_samplers) {
    *ret = (spvc_result )spvc_compiler_get_combined_image_samplers(_compiler, _samplers, _num_samplers);
}
extern "C" void __c__spvc_compiler_get_specialization_constants(spvc_result *ret, spvc_compiler_s * _compiler, const spvc_specialization_constant * * _constants, size_t * _num_constants) {
    *ret = (spvc_result )spvc_compiler_get_specialization_constants(_compiler, _constants, _num_constants);
}
extern "C" void __c__spvc_compiler_get_constant_handle(spvc_constant *ret, spvc_compiler_s * _compiler, uint32_t _id) {
    *ret = (spvc_constant_s * )spvc_compiler_get_constant_handle(_compiler, _id);
}
extern "C" void __c__spvc_compiler_get_work_group_size_specialization_constants(spvc_constant_id *ret, spvc_compiler_s * _compiler, spvc_specialization_constant * _x, spvc_specialization_constant * _y, spvc_specialization_constant * _z) {
    *ret = (uint32_t )spvc_compiler_get_work_group_size_specialization_constants(_compiler, _x, _y, _z);
}
extern "C" void __c__spvc_compiler_get_active_buffer_ranges(spvc_result *ret, spvc_compiler_s * _compiler, uint32_t _id, const spvc_buffer_range * * _ranges, size_t * _num_ranges) {
    *ret = (spvc_result )spvc_compiler_get_active_buffer_ranges(_compiler, _id, _ranges, _num_ranges);
}
extern "C" void __c__spvc_constant_get_scalar_fp16(float *ret, spvc_constant_s * _constant, uint32_t _column, uint32_t _row) {
    *ret = (float )spvc_constant_get_scalar_fp16(_constant, _column, _row);
}
extern "C" void __c__spvc_constant_get_scalar_fp32(float *ret, spvc_constant_s * _constant, uint32_t _column, uint32_t _row) {
    *ret = (float )spvc_constant_get_scalar_fp32(_constant, _column, _row);
}
extern "C" void __c__spvc_constant_get_scalar_fp64(double *ret, spvc_constant_s * _constant, uint32_t _column, uint32_t _row) {
    *ret = (double )spvc_constant_get_scalar_fp64(_constant, _column, _row);
}
extern "C" void __c__spvc_constant_get_scalar_u32(uint32_t *ret, spvc_constant_s * _constant, uint32_t _column, uint32_t _row) {
    *ret = (uint32_t )spvc_constant_get_scalar_u32(_constant, _column, _row);
}
extern "C" void __c__spvc_constant_get_scalar_i32(int32_t *ret, spvc_constant_s * _constant, uint32_t _column, uint32_t _row) {
    *ret = (int32_t )spvc_constant_get_scalar_i32(_constant, _column, _row);
}
extern "C" void __c__spvc_constant_get_scalar_u16(uint32_t *ret, spvc_constant_s * _constant, uint32_t _column, uint32_t _row) {
    *ret = (uint32_t )spvc_constant_get_scalar_u16(_constant, _column, _row);
}
extern "C" void __c__spvc_constant_get_scalar_i16(int32_t *ret, spvc_constant_s * _constant, uint32_t _column, uint32_t _row) {
    *ret = (int32_t )spvc_constant_get_scalar_i16(_constant, _column, _row);
}
extern "C" void __c__spvc_constant_get_scalar_u8(uint32_t *ret, spvc_constant_s * _constant, uint32_t _column, uint32_t _row) {
    *ret = (uint32_t )spvc_constant_get_scalar_u8(_constant, _column, _row);
}
extern "C" void __c__spvc_constant_get_scalar_i8(int32_t *ret, spvc_constant_s * _constant, uint32_t _column, uint32_t _row) {
    *ret = (int32_t )spvc_constant_get_scalar_i8(_constant, _column, _row);
}
extern "C" void __c__spvc_constant_get_subconstants(spvc_constant_s * _constant, const spvc_constant_id * * _constituents, size_t * _count) {
    spvc_constant_get_subconstants(_constant, _constituents, _count);
}
extern "C" void __c__spvc_constant_get_type(spvc_type_id *ret, spvc_constant_s * _constant) {
    *ret = (uint32_t )spvc_constant_get_type(_constant);
}
extern "C" void __c__spvc_compiler_get_binary_offset_for_decoration(spvc_bool *ret, spvc_compiler_s * _compiler, uint32_t _id, SpvDecoration_ _decoration, uint32_t * _word_offset) {
    *ret = (uint8_t )spvc_compiler_get_binary_offset_for_decoration(_compiler, _id, _decoration, _word_offset);
}
extern "C" void __c__spvc_compiler_buffer_is_hlsl_counter_buffer(spvc_bool *ret, spvc_compiler_s * _compiler, uint32_t _id) {
    *ret = (uint8_t )spvc_compiler_buffer_is_hlsl_counter_buffer(_compiler, _id);
}
extern "C" void __c__spvc_compiler_buffer_get_hlsl_counter_buffer(spvc_bool *ret, spvc_compiler_s * _compiler, uint32_t _id, spvc_variable_id * _counter_id) {
    *ret = (uint8_t )spvc_compiler_buffer_get_hlsl_counter_buffer(_compiler, _id, _counter_id);
}
extern "C" void __c__spvc_compiler_get_declared_capabilities(spvc_result *ret, spvc_compiler_s * _compiler, const SpvCapability * * _capabilities, size_t * _num_capabilities) {
    *ret = (spvc_result )spvc_compiler_get_declared_capabilities(_compiler, _capabilities, _num_capabilities);
}
extern "C" void __c__spvc_compiler_get_declared_extensions(spvc_result *ret, spvc_compiler_s * _compiler, const char * * * _extensions, size_t * _num_extensions) {
    *ret = (spvc_result )spvc_compiler_get_declared_extensions(_compiler, _extensions, _num_extensions);
}
extern "C" void __c__spvc_compiler_get_remapped_declared_block_name(const char * *ret, spvc_compiler_s * _compiler, uint32_t _id) {
    *ret = (const char * )spvc_compiler_get_remapped_declared_block_name(_compiler, _id);
}
extern "C" void __c__spvc_compiler_get_buffer_block_decorations(spvc_result *ret, spvc_compiler_s * _compiler, uint32_t _id, const SpvDecoration * * _decorations, size_t * _num_decorations) {
    *ret = (spvc_result )spvc_compiler_get_buffer_block_decorations(_compiler, _id, _decorations, _num_decorations);
}
