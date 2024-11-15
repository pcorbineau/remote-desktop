#include <remote_desktop/window/window.hpp>
using namespace rd;

int main() {
    window::window window;
    window.create();
    window::loop(window);
}
