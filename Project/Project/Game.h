#ifndef INCLUDE_GAME
#define INCLUDE_GAME

#include <SFML/Graphics.hpp>
#include <iostream>

class Game
{
public:
	Game();
	~Game();
	void Run();
private:
	void Update();
	void Render();
};

#endif