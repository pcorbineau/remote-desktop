find_package(sfml REQUIRED)

add_library(rd-window INTERFACE)

set(LONG_INC_DIR "${CMAKE_CURRENT_SOURCE_DIR}/include/remote_desktop/window")
target_sources(rd-window
    INTERFACE
    "${LONG_INC_DIR}/window.hpp"
)

target_include_directories(rd-window
    INTERFACE
    "${CMAKE_CURRENT_SOURCE_DIR}/include"
)

target_link_libraries(rd-window
    INTERFACE
    sfml::sfml
)
