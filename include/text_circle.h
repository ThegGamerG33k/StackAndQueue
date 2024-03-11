#pragma once
#include <ostream>
#include <string>
#include <SFML/Graphics.hpp>

class TextCircle : private sf::Drawable
{
	TextCircle(int x, int y, std::string write, sf::Font font);

	virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const override;

	bool inside(sf::Vector2f target) const;

	sf::CircleShape shape;
	sf::Text txt;
	float randomcol = rand() % (255 - 0 + 1) + 0;

};