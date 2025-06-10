add_library(Renoir_Platform
    src/RenoirLog.cpp
)

target_include_directories(Renoir_Platform PUBLIC
        ../ThirdParty/spdlog
)