#ifndef INCLUDED_CONTROLLER
#define INCLUDED_CONTROLLER

#include "Cat1.h"

class Controller
{
public:
	Controller(Cat1 *cat);
	~Controller();
	void assignController(int player, Cat1 *cat);
	void move();
private:
	Cat1 *mCat;
};

#endif