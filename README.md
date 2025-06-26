# Renoir
A tiny crossplatform renderer(plan to evolve as a DCC tool(not just a renderer or game engine).

# Architecture
All the subdirectories of these files are organized with `CMake`. You can get in with the engine architecture through `CMakeLists.txt`.
- `App`: Run the instance of different versions of `Renoir Engine`
- `Core`: The core layer of `Renoir Engine`. Most features of engine like rendering, animation, geometry processing will be implemented here.
- `External`: The third-party libraries like glfw, imgui, spdlog etc.
- `Platform`: Present user interface for different OS and log the running status.
