#include "Game.h"
#include "TextureHandler.h"
#include "Cat1.h"

static sf::RenderWindow *window;
static TextureHandler textures;
sf::Texture *texture=textures.GetTexture(0);

Cat1 cat1;

Game::Game()
{
	window = new sf::RenderWindow(sf::VideoMode(1000, 800), "CatBurglars");
	textures.Initialize();
	cat1.setPosition(100, 100);
	cat1.setSprite(textures.GetTexture(10));
}

Game::~Game()
{

}

void Game::Run(){
	while (window->isOpen())
	{

		sf::Event event;
		while (window->pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window->close();
		}
		Render();
	}
}

void Game::Update(){

}

void Game::Render()
{
	window->clear(sf::Color(0, 200, 0, 255));
	cat1.Render(window);
	window->display();
}