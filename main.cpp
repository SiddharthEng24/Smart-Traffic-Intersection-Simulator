#include <SFML/Graphics.hpp>

int main() {
    sf::RenderWindow window(sf::VideoMode({800, 600}), "SFML 3.0 Test - Working!");

    sf::CircleShape circle(100.f);
    circle.setFillColor(sf::Color::Green);
    circle.setPosition({300.f, 200.f});

    while (window.isOpen()) {
        for (auto event = window.pollEvent(); event; event = window.pollEvent()) {
            if (event->is<sf::Event::Closed>()) {
                window.close();
            }
        }
        window.clear();
        window.draw(circle);
        window.display();
    }

    return 0;
}