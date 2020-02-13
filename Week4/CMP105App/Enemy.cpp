#include "Enemy.h"

Enemy::Enemy()
{

}

Enemy::Enemy(sf::RenderWindow* window)
{
	win = window;
	enemySpeedX = 200.f;
	enemySpeedY = 200.f;
}

Enemy::~Enemy()
{

}

void Enemy::update(float dt)
{
	sf::Vector2u pos = win->getSize();
	sf::Vector2f enemyPos = getPosition();

	// Move the enemy
	move(enemySpeedX * dt, enemySpeedY * dt);

	//if hits side of the screen change direction and move back inside the screen
	if (enemyPos.x > (pos.x - 1))
	{
		enemySpeedX = -enemySpeedX;
		setPosition(pos.x - 1, getPosition().y);
	}
	else if (enemyPos.x < 0)
	{
		enemySpeedX = -enemySpeedX;
		setPosition(0, getPosition().y);
	}
	else if (enemyPos.y > (pos.y - 1))
	{
		enemySpeedY = -enemySpeedY;
		setPosition(getPosition().x, pos.y - 1);
	}
	else if (enemyPos.y < 0)
	{
		enemySpeedY = -enemySpeedY;
		setPosition(getPosition().x, 0);
	}
}
