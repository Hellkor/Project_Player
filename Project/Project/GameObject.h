#ifndef INCLUDE_GAMEOBJECT
#define INCLUDE_GAMEOBJECT

#include "Entity.h"
#include "TextureHandler.h"

class GameObject : public Entity
{
public:
	GameObject(sf::Vector2i position, int ID, int textureID, TextureHandler *textures);
	~GameObject();
	virtual void Render();
	virtual void Update();
private:
};

#endif