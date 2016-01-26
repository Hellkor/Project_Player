#include "Game.h"
#include "TextureHandler.h"
#include "Cat1.h"
#include "Controller.h"
#include "Player.h"
#include "Entity.h"

static sf::RenderWindow *window;
static TextureHandler textures;
sf::Texture *texture=textures.GetTexture(0);

Cat1 cat1;
Controller controller1;

Game::Game()
{
	window = new sf::RenderWindow(sf::VideoMode(1000, 800), "CatBurglars");
	window->setVerticalSyncEnabled(true);
	textures.Initialize();
	cat1.setPosition(100, 100);
	cat1.setSprite(textures.GetTexture(10));
	controller1.assignController(1, &cat1);
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
		controller1.move();

	/*	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
		{
			cat1.getSprite()->move(0, -5);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
		{
			cat1.getSprite()->move(-5, 0);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
		{
			cat1.getSprite()->move(0, 5);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
		{
			cat1.getSprite()->move(5, 0);
		}*/


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