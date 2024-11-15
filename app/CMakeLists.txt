add_executable(rd-app app.cpp)
target_link_libraries(rd-app
    PRIVATE
    rd-window
)
