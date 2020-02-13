#pragma once
#include "Framework/GameObject.h"

class Enemy2:public GameObject
{
public:
	Enemy2();
	Enemy2(sf::RenderWindow* window);
	~Enemy2();

	void update(float dt);

private:
	sf::RenderWindow* win;

	float enemy2SpeedX;
	float enemy2SpeedY;
};

