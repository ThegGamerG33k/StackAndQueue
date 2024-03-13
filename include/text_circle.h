#pragma once
#include <ostream>
#include <string>
#include <SFML/Graphics.hpp>

class TextCircle : public sf::Drawable
{
public:

	TextCircle(int x, int y, std::string write, sf::Font& font);

	virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const override;

	void Pos(sf::Vector2i mouse_pos);
	
	bool inside(sf::Vector2f target) const;
protected:

	sf::CircleShape shape;
	sf::Text txt;
};