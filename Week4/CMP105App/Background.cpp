#include "Background.h"

Background::Background()
{
}

Background::Background(sf::RenderWindow* hwnd, Input* in)
{
	this->window = hwnd;
	this->input = in;
}

Background::~Background()
{
}

void Background::handleInput()
{
	auto view = window->getView();

	if (input->isKeyDown(sf::Keyboard::Right))
	{
		view.setCenter(view.getCenter().x + 1, view.getCenter().y);
		if (view.getCenter().x > (11038 - 600))
		{
			input->setKeyUp(sf::Keyboard::Right);
		}
		window->setView(view);
	}
	if (input->isKeyDown(sf::Keyboard::Left))
	{	
		view.setCenter(view.getCenter().x - 1, view.getCenter().y);
		if (view.getCenter().x < 600)
		{
			input->setKeyUp(sf::Keyboard::Left);
		}
		window->setView(view);
	}
}
