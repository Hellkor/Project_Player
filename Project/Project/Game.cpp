#include "Game.h"
#include "TextureHandler.h"

static sf::RenderWindow *window;
static TextureHandler textures;
sf::Texture *texture=textures.GetTexture(0);


Game::Game() :
mEntities(),
mCat(new Cat1(textures.GetTexture(10), 50, 50, 1)),
mController(mCat)
{
	window = new sf::RenderWindow(sf::VideoMode(1000, 800), "CatBurglars");
	window->setVerticalSyncEnabled(true);
	textures.Initialize();

	
	mEntities.push_back(mCat);
	//mEntities.push_back(mGameObjectives);
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

	for each (Cat1 *cat in mEntities)
	{
		cout << cat->GetPosition().x << endl;
	}
	mController.move();
	mEntities[0]->Render(window);
	window->display();
}