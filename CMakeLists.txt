cmake_minimum_required(VERSION 3.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -w -fpermissive")

set(COMPILER_HOME E:/Program Files/mingw64/bin)
set(CMAKE_C_COMPILER ${COMPILER_HOME}/bin/gcc)
set(CMAKE_CXX_COMPILER ${COMPILER_HOME}/bin/g++)

project(DataStructureImpl)

include_directories(
    ${CMAKE_SOURCE_DIR}/src
)

# link_directories(
# )

AUX_SOURCE_DIRECTORY(${CMAKE_SOURCE_DIR}/src DIR_ROOT)

SET(ALL_SRCS ${DIR_ROOT})

add_executable(${PROJECT_NAME} ${ALL_SRCS})
target_link_libraries(${PROJECT_NAME})

SET(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR})
