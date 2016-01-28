#include "GameObject.h"
#include "Cat1.h"

TextureHandler textures;
static const int width = 50, height = 50;
sf::Vector2i position;
Cat1 *mCat;
GameObject::GameObject() :Entity(position, sf::IntRect(position.x, position.y, width, height)),
mPlayerVector()
{

}

GameObject::~GameObject(){

}

void GameObject::CreatePlayer(sf::Texture *texture, int ID){
	mCat = new Cat1(texture, 100, 100, 1);
	//mPlayerVector.push_back(mCat);
	//if (ID == 1)
	/*if (ID == 2)
		;
	if (ID == 3)
		;
	if (ID == 4)
		;*/
}

void GameObject::Render(sf::RenderWindow *mainWindow){

}

void GameObject::Update(){

}