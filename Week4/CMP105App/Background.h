#pragma once
#include "Framework/GameObject.h"

class Background: public GameObject
{
public:
	Background();
	Background(sf::RenderWindow* hwnd, Input* in);
	~Background();

	void handleInput();

private:
	sf::RenderWindow* window;
};

