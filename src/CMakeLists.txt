project(kata_lib)

file(GLOB_RECURSE LIB_SOURCES CONFIGURE_DEPENDS *.cpp *.hpp)

set(EXPORT_HEADER ${PROJECT_SOURCE_DIR}/exports/export.h)

add_library(${PROJECT_NAME} SHARED ${LIB_SOURCES} ${EXPORT_HEADER})

include(GenerateExportHeader)

generate_export_header(kata_lib EXPORT_MACRO_NAME KATA_EXPORT EXPORT_FILE_NAME ${EXPORT_HEADER})

target_include_directories(${PROJECT_NAME} PUBLIC includes exports PRIVATE src)



