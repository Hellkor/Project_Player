#ifndef INCLUDE_GAMEOBJECT
#define INCLUDE_GAMEOBJECT

#include "Entity.h"

class GameObject : public Entity
{
public:
	GameObject();
	~GameObject();
	virtual void Render();
	virtual void Update();
private:
};

#endif