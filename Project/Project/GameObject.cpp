#include "GameObject.h"

static const int width = 50, height = 50;
sf::Vector2i position;

GameObject::GameObject() :Entity(position, sf::IntRect(position.x, position.y, width, height))/*,
mPosition(position),
mID(ID),
mTextureID(textureID),
mTextureHandler(textures)*/
{

}

GameObject::~GameObject(){

}

void GameObject::CreatePlayer(int ID){
	if (ID == 1)
		;
	if (ID == 2)
		;
	if (ID == 3)
		;
	if (ID == 4)
		;
}

void GameObject::Render(sf::RenderWindow *mainWindow){

}

void GameObject::Update(){

}