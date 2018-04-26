#include "stdafx.h"
#include "Engine.h"

void Engine::input()
{
	// Handle the player quitting
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
	{
		_renderWindow.close();
	}
}