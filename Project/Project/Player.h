#ifndef INCLUDE_PLAYER
#define INCLUDE_PLAYER

#include "GameObject.h"

class Player
{
public:
	Player();
	~Player();
	virtual void setPosition(int x, int y) = 0;
	virtual void setSprite(sf::Texture *texture) = 0;
	virtual sf::Sprite* getSprite() = 0;
	virtual void Render(sf::RenderWindow *mainWindow) = 0;
	virtual void Update() = 0;
	virtual void move(int x, int y) = 0;
private:
};

#endif