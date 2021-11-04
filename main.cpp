// Includes SFML
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Network.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

// Includes Other
#include <iostream>

// Includes User-Defined Headers
#include "includes/Game.hpp"

// Settings
#define WINDOW_WIDTH  1920
#define WINDOW_HEIGHT 1080

int main() {

	Game game(1920, 1080);

	while(game.getWindow()->isOpen()) {

		sf::Event event;
		while(game.getWindow()->pollEvent(event)) {

			if(event.type == sf::Event::Closed) {

				game.getWindow()->close();
			}
		}

		game.gameUpdate();

		game.getWindow()->clear();
		game.gameDraw();
		game.getWindow()->display();
	}

	return EXIT_SUCCESS;
}