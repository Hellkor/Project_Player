#include "Controller.h"
#include <iostream>

Controller::Controller(){

}

Controller::~Controller(){

}

void Controller::assignController(int player, Cat1 *cat){
	if (player == 1)
	{
		mCat = cat;
	}
}

void Controller::move(){
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
	{
		mCat->move(0, -5);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
	{
		mCat->move(-5, 0);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
	{
		mCat->move(0, 5);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
	{
		mCat->move(5, 0);
	}
}