New-Item -ItemType Directory -Path "int" -Force

&"../../CheezLang/CheezCBindingGenerator.exe" vulkan.lua "./int"
Write-Host ""
&"../../CheezLang/CheezCBindingGenerator.exe" spirv_cross.lua "./int"
Write-Host ""
Copy-Item "./int/vulkan.che" "./vulkan/vulkan.che" -Force
Copy-Item "./int/spirv_cross.che" "./vulkan/spirv_cross.che" -Force

./compile.ps1