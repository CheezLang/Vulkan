New-Item -ItemType Directory -Path "int" -Force

./CheezCBindingGenerator.exe vulkan.lua "./int"
Copy-Item "./int/vulkan.che" "./vulkan/vulkan.che" -Force
Write-Host ""

Write-Host "Compiling C++ part"
&clang -c "./int/vulkan.cpp" -o "./int/binding.o" -DFORCE_CPP
&llvm-lib "/out:./int/binding.lib" "./int/binding.o"
Copy-Item "./int/binding.lib" "./vulkan/lib/binding.lib" -Force