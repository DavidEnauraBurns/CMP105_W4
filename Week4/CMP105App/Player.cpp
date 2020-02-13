#include "Player.h"
#include "Framework/Input.h"

Player::Player()
{
	// initialise game objects
	playerSpeed = 0;
}

Player::~Player()
{

}

void Player::handleInput(float dt)
{
	// Up
	if (input->isKeyDown(sf::Keyboard::W)) 
	{
		playerSpeed = -200.f;
		move(0, playerSpeed * dt);
	}
	// Down
	else if (input->isKeyDown(sf::Keyboard::S)) 
	{ 
		playerSpeed = 200.f;
		move(0, playerSpeed * dt);
	}
	// Left
	else if (input->isKeyDown(sf::Keyboard::A))
	{
		playerSpeed = -200.f;
		move(playerSpeed * dt, 0);
	}
	// Right
	else if (input->isKeyDown(sf::Keyboard::D))
	{
		playerSpeed = 200.f;
		move(playerSpeed * dt, 0);
	}
}


