project(DHL)

# define compiler
# set(CMAKE_CXX_COMPILER)
# enable_language(CXX)

# set(DHL_DIR ${PROJECT_SOURCE_DIR}/DHL)
set(DHL_DIR ${PROJECT_SOURCE_DIR})
# message("dhl_dir is " ${DHL_DIR})

include_directories(DHL)

# file(DHL_FILES) 
aux_source_directory(${DHL_DIR} DHL_FILES) 

add_library(${PROJECT_NAME} STATIC ${DHL_FILES})
link_directories(${PROJECT_SOURCE_DIR})

target_link_libraries(${PROJECT_NAME})
