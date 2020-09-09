New-Item -ItemType Directory -Path "int" -Force

./CheezCBindingGenerator.exe vulkan.lua "./int"
Write-Host ""
./CheezCBindingGenerator.exe spirv_cross.lua "./int"
Write-Host ""
Copy-Item "./int/vulkan.che" "./vulkan/vulkan.che" -Force
Copy-Item "./int/spirv_cross.che" "./vulkan/spirv_cross.che" -Force
Write-Host ""

Write-Host "Compiling C++ part"
&clang -c "./int/vulkan.cpp" -o "./int/vulkan_binding.o" -DFORCE_CPP
&clang -c "./int/spirv_cross.cpp" -o "./int/spirv_binding.o" -DFORCE_CPP
&llvm-lib "/out:./int/binding.lib" "./int/vulkan_binding.o" "./int/spirv_binding.o"
Copy-Item "./int/binding.lib" "./vulkan/lib/binding.lib" -Force