project(con2redis CXX)

find_package(hiredis REQUIRED)

file(
    GLOB_RECURSE MAIN_SOURCE_FILES
    RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} CONFIGURE_DEPENDS src/*.c*)

add_library(${PROJECT_NAME} STATIC ${MAIN_SOURCE_FILES})

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

target_link_libraries(${PROJECT_NAME} PRIVATE hiredis)