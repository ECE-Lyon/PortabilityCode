cmake_minimum_required(VERSION 3.10)
project(libportability)

set(CMAKE_C_STANDARD 99)

# create only a static library
add_library(libportability STATIC portability.c portability.h)

# test the library
add_executable(testlibrary test.c)
target_link_libraries(testlibrary PRIVATE libportability)

# documentation
# find the doxygen program
find_package(Doxygen REQUIRED)
set(DOXYGEN_CONFIG_FILE ${PROJECT_SOURCE_DIR}/doc/Doxyfile)
if(DOXYGEN_FOUND)
    doxygen_add_docs(
            doc # Target name for the documentation
            portability.h portability.c # Directories/files to document
            COMMENT "Generating API documentation with Doxygen" # Optional comment
            CONFIG_FILE ${DOXYGEN_CONFIG_FILE}
    )
else()
    message(WARNING "Doxygen is needed to build the documentation but was not found.")
endif()
