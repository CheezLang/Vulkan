Write-Host "Compiling C++ part"
&clang -c "./int/vulkan.cpp" -o "./int/vulkan_binding.o" -DFORCE_CPP
&clang -c "./int/spirv_cross.cpp" -o "./int/spirv_binding.o" -DFORCE_CPP
&llvm-lib "/out:./int/binding.lib" "./int/vulkan_binding.o" "./int/spirv_binding.o"
Copy-Item "./int/binding.lib" "./vulkan/lib/binding.lib" -Force