#include <text_circle.h>

TextCircle::TextCircle(int x, int y, std::string write, sf::Font font)
{
	txt.setFont(font);
	txt.setString(write);
	txt.setColor(sf::Color::Black);
	shape.setPosition(x, y);
	shape.setFillColor(sf::Color(rand() % 255, rand() % 255, rand() % 255));
	shape.setRadius(float((rand() % (50 - 10 + 1) + 10)));
}

void TextCircle::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(txt);
	target.draw(shape);
}
