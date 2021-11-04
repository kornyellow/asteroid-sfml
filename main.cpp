// Includes SFML
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

// Includes Other
#include <iostream>

// Includes User-Defined Headers

int main() {

    sf::RenderWindow window(
        sf::VideoMode(1920, 1080), 
        "Asteroid"
    );

    while(window.isOpen()) {

        sf::Event event;
        while(window.pollEvent(event)) {

            if(event.type == sf::Event::Closed) {

                window.close();
            }
        }

        window.clear();
        window.display();
    }

    return EXIT_SUCCESS;
}