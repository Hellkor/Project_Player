#ifndef INCLUDE_GAMEOBJECT
#define INCLUDE_GAMEOBJECT

#include <iostream>
#include <vector>
#include "Entity.h"
#include "TextureHandler.h"

class GameObject : public Entity
{
public:
	typedef std::vector<Player*> PlayerVector;
	GameObject();
	~GameObject();
	void CreatePlayer(int ID);
	void Render(sf::RenderWindow *mainWindow);
	void Update();
private:
	PlayerVector mPlayerVector;
};

#endif