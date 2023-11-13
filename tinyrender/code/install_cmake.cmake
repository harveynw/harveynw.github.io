add_executable(YourApp source_files.cpp ...)
target_compile_features(YourApp PRIVATE cxx_std_17)

# Link + include shared library file for WebGPU
target_link_libraries(YourApp PUBLIC tinyrender)
# Do not forget this step, the WebGPU wrapper that tinyrender uses provides this function. 
# Read more at: https://github.com/eliemichel/WebGPU-distribution
target_copy_webgpu_binaries(YourApp)  