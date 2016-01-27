#ifndef INCLUDE_CAT1
#define INCLUDE_CAT1

#include <SFML\Graphics.hpp>
#include "GameObject.h"


class Cat1 : public GameObject
{
public:
	Cat1(sf::Texture *texture, int x, int y);
	~Cat1();
	virtual void Render(sf::RenderWindow *mainWindow);
	virtual void Update();
	virtual void move(int x, int y);
private:
	sf::Sprite mSprite;
};

#endif