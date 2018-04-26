#include "stdafx.h"
#include "Engine.h"

Engine::Engine() {
	// Get the screen resolution and create an SFML window and View
	sf::Vector2f resolution;
	resolution.x = sf::VideoMode::getDesktopMode().width;
	resolution.y = sf::VideoMode::getDesktopMode().height;

	_renderWindow.create(sf::VideoMode(resolution.x, resolution.y),
		"Simple Game Engine",
		sf::Style::Fullscreen);
}

void Engine::start() {
	// Timing
	sf::Clock clock;

	while (_renderWindow.isOpen())
	{
		// Restart the clock and save the elapsed time into dt
		sf::Time dt = clock.restart();

		// Make a fraction from the delta time
		float deltaTime = dt.asSeconds();

		input();
		update(deltaTime);
		draw();
	}
}