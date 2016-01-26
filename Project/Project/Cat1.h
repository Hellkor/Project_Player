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
	void Render(sf::RenderWindow *window);
	void Update();
private:
	sf::Sprite mSprite;
};

#endif