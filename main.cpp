#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;

int main()
{
    sf::RenderWindow window(sf::VideoMode(512, 512), "DVD anim");
    sf::CircleShape shape(100.f);

    shape.setFillColor(sf::Color::Green);
    shape.setScale(0.2,0.2);
    shape.setPosition(100,100);

    sf::Texture texture;
    if (!texture.loadFromFile("C://Users//Kamil//CppProjects//src//dvd.png"))
    {
        cout << "ERROR!";
    }

    sf::Sprite sprite(texture);

    while (window.isOpen())
    {
        sf::Event event;
        
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color(16,16,16,255));

        sprite.setScale(0.1f,0.1f);
        sprite.setPosition(200,100);
        
        window.draw(sprite);
        window.display();
    }

    return 0;
}
