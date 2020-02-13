#include "Cursor.h"

Cursor::Cursor()
{
}

Cursor::Cursor(Input* in)
{
	this->input = in;
}

Cursor::~Cursor()
{
}

void Cursor::update(float dt)
{
	sf::Vector2f cursorPos = getPosition();

	setPosition(input->getMouseX(), input->getMouseY());
}
