#ifndef INCLUDE_CONTROLLER
#define INCLUDE_CONTROLLER

#include "Player.h"
#include "Cat1.h"

class Controller
{
public:
	Controller();
	~Controller();
	void assignController(int player, Cat1 *cat);
	void move();
private:
	sf::Sprite mPlayer1;
	sf::Sprite mPlayer2;
	Cat1 *mCat;
};

#endif