#include "Cat1.h"
#include "Controller.h"
#include <iostream>

Cat1::Cat1() : Player(){
}

Cat1::~Cat1(){

}

void Cat1::setPosition(int x, int y){
	mSprite.setPosition(x, y);
}

void Cat1::setSprite(sf::Texture *texture){
	mSprite.setTexture(*texture, true);
}

void Cat1::Render(sf::RenderWindow *mainWindow){
	mainWindow->draw(mSprite);
}

void Cat1::Update(){
	
}

void Cat1::move(int x, int y){
	mSprite.move(x, y);
}