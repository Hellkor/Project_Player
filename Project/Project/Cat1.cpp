#include "Cat1.h"
#include <iostream>

Cat1::Cat1(sf::Texture *texture, int x, int y) : GameObject()
{
	mSprite.setTexture(*texture, true);
	mSprite.setPosition(x, y);
}

Cat1::~Cat1(){

}

void Cat1::Render(sf::RenderWindow *mainWindow){
	mainWindow->draw(mSprite);
	//std::cout << "Hello there" << std::endl;
}

void Cat1::Update(){
	
}

void Cat1::move(int x, int y){
	mSprite.move(x, y);
}