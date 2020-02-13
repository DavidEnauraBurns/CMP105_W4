#pragma once
#include "Framework/GameObject.h"
#include "Framework/Input.h"

class Cursor:public GameObject
{
public:
	Cursor();
	Cursor(Input* in);
	~Cursor();
	void update(float dt);
};

