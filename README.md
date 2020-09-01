# Vulkan

Cheez bindings for Vulkan 1.2.148.1

## Generate bindings

To generate the bindings run the `generate.ps1` script in the root directory.
This requires `clang` and `llvm-lib` to be on the path.

At the moment the generated cheez source file contains two duplicate enum members which have to be removed manually.

## Examples

To run an example you can run the `run_example.ps1` script in the `examples` folder:

    examples> run_example.ps1 ./list_extensions.che


