project(main CXX)

file(
    GLOB_RECURSE MAIN_SOURCE_FILES
    RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} CONFIGURE_DEPENDS src/*.c*)
add_executable(main ${MAIN_SOURCE_FILES})

# link libraries
target_link_libraries(main PRIVATE static_lib spdlog)
