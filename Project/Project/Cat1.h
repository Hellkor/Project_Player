#ifndef INCLUDE_CAT1
#define INCLUDE_CAT1

#include "Player.h"

class Cat1
{
public:
	Cat1();
	~Cat1();
	sf::Sprite getSprite();
	void setPosition(int x, int y);
	void setSprite(sf::Texture *texture);
	sf::Sprite getSprite();
	void Render(sf::RenderWindow *mainWindow);
	void Update();
private:
	sf::Sprite mSprite;
};

#endif