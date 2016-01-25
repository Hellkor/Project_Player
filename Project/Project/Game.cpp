#include "Game.h"

static sf::RenderWindow *window;

Game::Game()
{
	window = new sf::RenderWindow(sf::VideoMode(1000, 800), "CatBurglars");
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
	window->clear();
	window->display();
}