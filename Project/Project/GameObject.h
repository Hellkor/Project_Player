#ifndef INCLUDE_GAMEOBJECT
#define INCLUDE_GAMEOBJECT

#include <iostream>
#include <vector>
#include "Entity.h"
#include "TextureHandler.h"

class GameObject : public Entity
{
public:
	typedef std::vector<GameObject*> GameObjectVector;
	GameObject();
	~GameObject();
	void CreatePlayer(sf::Texture *texture, int ID);
	void Render(sf::RenderWindow *mainWindow);
	void Update();
private:
	GameObjectVector mPlayerVector;
};

#endif