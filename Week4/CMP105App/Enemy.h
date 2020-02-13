#pragma once
#include "Framework/GameObject.h"

class Enemy:public GameObject
{
public:
	Enemy();
	Enemy(sf::RenderWindow* window);
	~Enemy();

	void update(float dt);

private:
	sf::RenderWindow* win;

	float enemySpeedX;
	float enemySpeedY;

};