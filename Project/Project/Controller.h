#ifndef INCLUDE_CONTROLLER
#define INCLUDE_CONTROLLER

#include "Player.h"

class Controller
{
public:
	Controller();
	~Controller();
	void assignController(int player, sf::Sprite *sprite);
private:
	sf::Sprite mPlayer1;
	sf::Sprite mPlayer2;
};

#endif