#include <SFML/Graphics.hpp>
#include <iostream>
int main()
{
    sf::RenderWindow window(sf::VideoMode(500, 500), "My First Form");
		sf::RectangleShape rectangle;
		rectangle.setSize(sf::Vector2f(500, 50));
		rectangle.setFillColor(sf::Color::Blue);
		sf::CircleShape circle;
		circle.setRadius(50);
		circle.setPosition(200,100);
		circle.setFillColor(sf::Color::Red);
		circle.setOutlineThickness(2);
		circle.setOutlineColor(sf::Color::Blue);
    while (window.isOpen())
    {

				sf::Event event;
				while (window.pollEvent(event))
				{
					if (event.type == sf::Event::Closed)
					window.close();
				}

        window.clear();
        window.draw(rectangle);
				window.draw(circle);
        window.display();
    }

    return 0;
}
