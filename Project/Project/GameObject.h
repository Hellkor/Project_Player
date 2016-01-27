#ifndef INCLUDE_GAMEOBJECT
#define INCLUDE_GAMEOBJECT

#include <vector>
#include "Entity.h"
#include "TextureHandler.h"

class GameObject : public Entity
{
public:
	GameObject();
	~GameObject();
	void CreatePlayer(int ID);
	void Render(sf::RenderWindow *mainWindow);
	void Update();
private:
	sf::Vector2i mPosition;
	int mID;
	int mTextureID;
	TextureHandler *mTextureHandler;
};

#endif