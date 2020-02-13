#include "Enemy2.h"

Enemy2::Enemy2()
{
}

Enemy2::Enemy2(sf::RenderWindow* window)
{
	win = window;
	enemy2SpeedX = 200.f;
	enemy2SpeedY = 200.f;
}

Enemy2::~Enemy2()
{
}

void Enemy2::update(float dt)
{
	sf::Vector2u pos = win->getSize();
	sf::Vector2f enemyPos = getPosition();

	// Move the enemy
	move(-enemy2SpeedX * dt, -enemy2SpeedY * dt);

	//if hits side of the screen change direction and move back inside the screen
	if (enemyPos.x > (pos.x - 1))
	{
		enemy2SpeedX = -enemy2SpeedX;
		setPosition(pos.x - 1, getPosition().y);
	}
	else if (enemyPos.x < 0)
	{
		enemy2SpeedX = -enemy2SpeedX;
		setPosition(0, getPosition().y);
	}
	else if (enemyPos.y > (pos.y - 1))
	{
		enemy2SpeedY = -enemy2SpeedY;
		setPosition(getPosition().x, pos.y - 1);
	}
	else if (enemyPos.y < 0)
	{
		enemy2SpeedY = -enemy2SpeedY;
		setPosition(getPosition().x, 0);
	}
}
