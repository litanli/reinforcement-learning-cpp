cmake_minimum_required(VERSION 3.22)
project(ReinforcementLearningCpp)

# Specify C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include paths to search for header files
include_directories(include)

function(add_chapter_executables chapter_dir)
    file(GLOB chapter_sources ${chapter_dir}/*.cpp)
    foreach(source_file ${chapter_sources})
        get_filename_component(executable_name ${source_file} NAME_WE)
        add_executable(${executable_name} ${source_file})
        message(STATUS "Added executable ${executable_name} from ${source_file}")
    endforeach()
endfunction()

# Add executables for each chapter
add_chapter_executables(${CMAKE_SOURCE_DIR}/src/chapter-1)
add_chapter_executables(${CMAKE_SOURCE_DIR}/src/chapter-2)
