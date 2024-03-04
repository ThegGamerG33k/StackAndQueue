// ssuds.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <SFML/Graphics.hpp>

#define DO_UNIT_TESTING 1
#include <iostream>
#if DO_UNIT_TESTING
#include <gtest/gtest.h>
#endif


/*int main()
{
#if DO_UNIT_TESTING
    // Invoke all google test fixtures we've registered
    testing::InitGoogleTest();
    return RUN_ALL_TESTS();
#else
    // Empty for now -- reserved for later use if we have 
    // "dual main programs" like in Lab4
#endif
}*/

int main()
{
    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}
