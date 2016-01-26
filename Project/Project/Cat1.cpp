#include "Cat1.h"

Cat1::Cat1(){
}

Cat1::~Cat1(){

}

sf::Sprite Cat1::getSprite(){
	return mSprite;
}

void Cat1::setPosition(int x, int y){
	mSprite.setPosition(x, y);
}

void Cat1::setSprite(sf::Texture *texture){
	mSprite.setTexture(*texture, true);
}

sf::Sprite Cat1::getSprite(){
	return mSprite;
}


void Cat1::Render(sf::RenderWindow *mainWindow){
	mainWindow->draw(mSprite);
}

void Cat1::Update(){

}
