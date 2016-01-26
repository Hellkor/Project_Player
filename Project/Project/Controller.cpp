#include "Controller.h"

Controller::Controller(){

}

Controller::~Controller(){

}

void Controller::assignController(int player, sf::Sprite *sprite){
	if (player == 1)
	{
		mPlayer1 = *sprite;
	}
	if (player == 2)
	{
		mPlayer2 = *sprite;
	}
}