#include "Game.h"

static sf::RenderWindow *window;
static TextureHandler textures;
sf::Texture *texture=textures.GetTexture(0);

Game::Game() :
mEntities(),
mCat()
{
	window = new sf::RenderWindow(sf::VideoMode(1000, 800), "CatBurglars");
	window->setVerticalSyncEnabled(true);
	textures.Initialize();
	//controller1.assignController(1, &cat1);
	sf::Vector2i vector;
	mGameObjectives->CreatePlayer(textures.GetTexture(10), 1);
	mCat = new Cat1(textures.GetTexture(10), 50, 50,1);
	mEntities.push_back(mCat);
	mCat = new Cat1(textures.GetTexture(10), 150, 150,2);
	mEntities.push_back(mCat);
	mEntities.push_back(mGameObjectives);
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
	//mCat->Render(window);
	
	mEntities[0]->Render(window);
	mEntities[1]->Render(window);
	mEntities[2]->Render(window);
	window->display();
}