#pragma once

#include <SFML/Graphics.hpp>
#include "Framework/Input.h"
#include "Framework/GameObject.h"
#include "Player.h"
#include "Enemy.h"
#include "Enemy2.h"
#include "Background.h"
#include <string.h>
#include <iostream>
#include "Cursor.h"



class Level{
public:
	Level(sf::RenderWindow* hwnd, Input* in);
	~Level();

	void handleInput(float dt);
	void update(float dt);
	void render();

private:
	// Default functions for rendering to the screen.
	void beginDraw();
	void endDraw();

	// Default variables for level class.
	sf::RenderWindow* window;
	Input* input;

	// Level objects
	Cursor cursor;
	sf::Texture cursorTexture;

	Player player;
	sf::Texture playerTexture;

	Enemy enemy;
	sf::Texture enemyTexture;

	Enemy2 enemy2;
	sf::Texture enemy2Texture;

	Background background;
	sf::Texture backgroundTexture;

};