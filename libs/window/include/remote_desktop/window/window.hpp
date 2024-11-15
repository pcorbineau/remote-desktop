#pragma once

#include <SFML/Window.hpp>

namespace rd {
namespace window {
class window {
  public:
    auto create() -> void {
        window_.create(sf::VideoMode(800, 600), "Remote Desktop");
    }

    friend auto loop(window &base) -> void;

  private:
    sf::Window window_;
};

inline auto loop(window &base) -> void {
    auto &window = base.window_;
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }
    }
}

} // namespace window
} // namespace rd
