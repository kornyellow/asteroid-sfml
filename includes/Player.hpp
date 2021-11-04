#pragma once

class Player {
	private:
	sf::RenderWindow* window;

	sf::CircleShape    collision_shape;
	sf::RectangleShape visual_shape;

	float x;
	float y;
	float size;

	public:
	Player(sf::RenderWindow* window);
	~Player();

	void update();
	void draw();
};

Player::Player(sf::RenderWindow* window) {

	this->window = window;

	this->x    = 500;
	this->y    = 500;
	this->size = 20;

	this->visual_shape.setSize(sf::Vector2f(this->size, this->size));
	this->visual_shape.setOrigin(this->size / 2, this->size / 2);
	this->visual_shape.setOutlineColor(sf::Color::Red);
	this->visual_shape.setOutlineThickness(5);
}
Player::~Player() {
}

void Player::update() {

	if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A)) {
		this->x--;
	}
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D)) {
		this->x++;
	}
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W)) {
		this->y--;
	}
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S)) {
		this->y++;
	}

	this->visual_shape.setPosition(this->x, this->y);
}
void Player::draw() {

	this->window->draw(this->visual_shape);
}