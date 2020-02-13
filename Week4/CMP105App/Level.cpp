#include "Level.h"
#include "Player.h"
#include "Enemy.h"

Level::Level(sf::RenderWindow* hwnd, Input* in) 
	: background(hwnd, in)
{
	window = hwnd;
	input = in;

	// initialise game objects
	playerTexture.loadFromFile("gfx/Briggs.png");
	enemyTexture.loadFromFile("gfx/Goomba.png");
	enemy2Texture.loadFromFile("gfx/MushroomMask.png");
	cursorTexture.loadFromFile("gfx/Icon.png");
	backgroundTexture.loadFromFile("gfx/Level1_1.png");

	background.setTexture(&backgroundTexture);
	background.setSize(sf::Vector2f(11038, 675));

	player.setTexture(&playerTexture);
	player.setSize(sf::Vector2f(100, 100));
	player.setPosition(100, 100);
	player.setInput(input);

	enemy = Enemy(window);
	enemy.setTexture(&enemyTexture);
	enemy.setSize(sf::Vector2f(100, 100));
	enemy.setPosition(200, 200);

	enemy2 = Enemy2(window);
	enemy2.setTexture(&enemy2Texture);
	enemy2.setSize(sf::Vector2f(100, 100));
	enemy2.setPosition(500, 500);

	cursor = Cursor(input);
	cursor.setTexture(&cursorTexture);
	cursor.setSize(sf::Vector2f(20, 20));
}

Level::~Level()
{

}

// handle user input
void Level::handleInput(float dt)
{
	// Close window on Escape pressed.
	if (input->isKeyDown(sf::Keyboard::Escape))
	{
		window->close();
	}
}

// Update game objects
void Level::update(float dt)
{
	player.handleInput(dt);
	enemy.update(dt);
	enemy2.update(dt);
	cursor.update(dt);
	background.handleInput();
}

// Render level
void Level::render()
{
	beginDraw();

	window->draw(background);
	window->setMouseCursorVisible(false);
	window->draw(player);
	window->draw(enemy);
	window->draw(enemy2);
	window->draw(cursor);

	endDraw();
}

// clear back buffer
void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}