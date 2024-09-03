cmake_minimum_required(VERSION 3.21)

set(PROJECT_NAME Nand2Tetris)
PROJECT(${PROJECT_NAME})
set(CMAKE_PROJECT_VERSION 0.1.0)

# Build Type : debug or release
set(CMAKE_BUILD_TYPE DEBUG)

#set(CMAKE_CXX_COMPILER "C:\\Program Files\\Microsoft Visual Studio\\2022\\Community\\VC\\Tools\\MSVC\\14.38.33130\\bin\\Hostx64\\x64\\cl.exe")

# determine cmake generator
if(MSVC)
    message("In MSVC environment use VS")
    # define compiler
    set(CMAKE_GENERATOR "Visual Studio 17 2022")
    #set(CMAKE_GENERATOR_TOOLSET "v143,version=14.38.33130" CACHE INTERNAL "The MSVC toolset version")
elseif(UNIX AND NOT APPLE)
    message("In Unix or Linux environment")
    set(CMAKE_GENERATOR "Unix Makefiles")
else()
    message("Warning: not in Windows or Unix-like system.")
    set(CMAKE_GENERATOR "MinGW Makefiles")
endif()

# add gdb debug symbols
# add_definitions("-Wall -g")



# set(CMAKE_CXX_COMPILER "C:\\MinGW\\bin\\")
# set(CMAKE_CXX_SOURCE_FILE_EXTENSIONS cc cpp)
# enable_language(C CXX)

# set dir path
set(DHL ${PROJECT_SOURCE_DIR}/DHL)
set(spdlog ${PROJECT_SOURCE_DIR}/lib/spdlog)
set(gtest ${PROJECT_SOURCE_DIR}/lib/googletest)

# find_package(fmt CONFIG C_STANDARD_REQUIRED)
add_subdirectory(${DHL})
add_subdirectory(${spdlog})
#add_subdirectory(${gtest})

#aux_source_directory(src DIR_SRCS)
#file(GLOB_RECUSE C_SOURCE_FILES ./ *.cc)

# cxx compiler at least C++14
set(CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD 14)
SET(CMAKE_CXX_STANDARD_REQUIRED ON)







# set header file path
include_directories(DHL, lib/spdlog/include)

# import google test (gtest) cmake 3.14+

# include(GoogleTest)
# FetchContent_Declare(
#     googletest 
#     URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
# )

# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
# FetchContent_MakeAvailable(googletest)

# add_executable(${PROJECT_NAME} main.c)
add_executable(${PROJECT_NAME} main.cc)

#link
target_link_libraries(${PROJECT_NAME}
DHL)