cmake_minimum_required(VERSION 3.10)
project(HelloCMake)

#### this is for the building the static library and then we link to main executable

add_library(operations STATIC src/operation.cpp)
target_include_directories(operations PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_compile_features(operations PUBLIC cxx_std_20)


### This is used for the directly use the src folder files - GLOB

# file(GLOB SRC_FILES "src/*.cpp")
# add_executable(HelloCMake main.cpp ${SRC_FILES})
# target_include_directories(HelloCMake PUBLIC include)

###

add_executable(HelloCMake main.cpp src/dog.cpp)
target_include_directories(HelloCMake PUBLIC include)

target_link_libraries(HelloCMake PUBLIC operations)