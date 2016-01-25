/*#include <SFML/Graphics.hpp>
#include <iostream>

int main()
{
	sf::ContextSettings settings;
	settings.antialiasingLevel = 8;

	sf::RenderWindow window(sf::VideoMode(800, 800), "!");
	window.setVerticalSyncEnabled(true);
	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);

	sf::Texture texture;
	texture.loadFromFile("texture.png");

	sf::Sprite sprite;
	sprite.setTexture(texture);
	sprite.setTextureRect(sf::IntRect(100, 100, 100, 100));
	sprite.setColor(sf::Color(255, 255, 255, 200));
	sprite.setPosition(100, 100);

	sf::Clock clock;
	int lvlTime = 120;
	while (window.isOpen())
	{
		sf::Time t1 = clock.getElapsedTime();
		std::cout << lvlTime-t1.asSeconds() << std::endl;
		

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
		{
			shape.scale(0.99f, 0.99f);
		}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
		{
			shape.scale(1.01f, 1.01f);
		}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
		{
			sprite.move(0, -5);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
		{
			sprite.move(-5, 0);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
		{
			sprite.move(0, 5);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
		{
			sprite.move(5, 0);
		}

		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		window.draw(shape);
		if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
		{
			sf::Vector2i position = sf::Mouse::getPosition(window);
			sprite.setPosition(position.x-50,position.y-50);
		}
		window.draw(sprite);
		window.display();
	}

	return 0;
}
*/