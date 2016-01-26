#include "GameObject.h"

static const int width = 50, height = 50;

GameObject::GameObject(sf::Vector2i position, int ID, int textureID, TextureHandler *textures) :Entity(position, sf::IntRect(position.x, position.y, width, height)){

}

void GameObject::Render(){

}

void GameObject::Update(){

}