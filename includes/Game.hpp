#pragma once

#include "Player.hpp"

class Game {
	private:
	sf::RenderWindow* window;

	Player* player;

	public:
	Game(int window_width, int window_height);
	~Game();

	void gameUpdate();
	void gameDraw();

	sf::RenderWindow* getWindow();
};

Game::Game(int window_width, int window_height) {

	this->window = new sf::RenderWindow(sf::VideoMode(window_width, window_height), "Asteroid", sf::Style::Close | sf::Style::Fullscreen);
	this->window->setKeyRepeatEnabled(false);

	this->player = new Player(this->window);
}
Game::~Game() {

	delete this->window;
	delete this->player;
}

void Game::gameUpdate() {

	this->player->update();
}
void Game::gameDraw() {

	this->player->draw();
}

sf::RenderWindow* Game::getWindow() {

	return this->window;
}