#include "Game.h"
#include "TextureHandler.h"

static sf::RenderWindow *window;
static TextureHandler textures;
sf::Texture *texture=textures.GetTexture(0);
Controller controller1;


Game::Game() :
mEntities(),
mCat(),
mController()
{
	window = new sf::RenderWindow(sf::VideoMode(1000, 800), "CatBurglars");
	window->setVerticalSyncEnabled(true);
	textures.Initialize();
	//mController.assignController(1, mCat);
	mCat = new Cat1(textures.GetTexture(10), 50, 50, 1);
	mEntities.push_back(mCat);



}

Game::~Game()
{

}

void Game::Run(){
	while (window->isOpen())
	{
		mController.move(mCat);
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


	for each (Cat1 *cat in mEntities)
	{
		cout << cat->GetPosition().x << endl;
	}
	mEntities[0]->Render(window);
	window->display();
}