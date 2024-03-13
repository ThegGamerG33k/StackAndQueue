// ssuds.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <SFML/Graphics.hpp>

#define DO_UNIT_TESTING 1
#include <iostream>
#include <fstream> 
#include <text_circle.h>
#include <stack.h>
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
    sf::RenderWindow window(sf::VideoMode(600, 800), "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);
    static sf::Vector2i cur_pos = sf::Mouse::getPosition(window);
    int cur_x = cur_pos.x;
    int cur_y = cur_pos.y;
    sf::Font font;
    font.loadFromFile("../../media/Ojuju-VariableFont_wght.ttf");
    TextCircle circle(cur_x, cur_y, "test", font);
    bool press_a = false;
    ssuds::Stack<TextCircle> stack;

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();

            if (event.type == sf::Event::MouseButtonPressed)
                if (event.mouseButton.button == sf::Mouse::Left)
                {
                    //stack.append()
                    printf("click");
                    press_a = true;
                }
        }

        window.clear();
        //window.draw(shape);
        if(press_a == true)
        {
            cur_pos = sf::Mouse::getPosition(window);
            printf("%d %d \n",cur_pos.x, cur_pos.y);
            circle.Pos(cur_pos);
            window.draw(circle);
        }
        window.display();
    }

    return 0;
}
