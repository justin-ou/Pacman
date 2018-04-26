#pragma once
#include <SFML/Graphics.hpp>

class Engine {
private:
	sf::RenderWindow _renderWindow;

	void input();
	void update(float deltaTime);
	void draw();
public:
	Engine();

	void start();
};
