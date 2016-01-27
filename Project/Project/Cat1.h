#ifndef INCLUDE_CAT1
#define INCLUDE_CAT1

#include "Player.h"
#include <SFML\Graphics.hpp>

class Cat1 : public Player
{
public:
	Cat1();
	~Cat1();
	virtual void setPosition(int x, int y);
	virtual void setSprite(sf::Texture *texture);
	virtual void Render(sf::RenderWindow *mainWindow);
	virtual void Update();
	virtual void move(int x, int y);
private:
	sf::Sprite mSprite;
};

#endif