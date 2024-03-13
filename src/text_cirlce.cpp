#include <text_circle.h>

TextCircle::TextCircle(int x, int y, std::string write, sf::Font& font)
{
	txt.setFont(font);
	txt.setFillColor(sf::Color::Black);
	txt.setString(write);
	shape.setRadius(300);
	shape.setPosition(x - shape.getRadius(), y - shape.getRadius());
	shape.setFillColor(sf::Color(rand() % 256, rand() % 256, rand() % 256));
	sf::FloatRect TextRect = txt.getLocalBounds();
	txt.setOrigin(TextRect.left + TextRect.width / 2.0f, TextRect.top + TextRect.height / 2.0f);
	txt.setPosition(x, y);
	//TextRect.width -= shape.getRadius();
	//TextRect.height -= shape.getRadius();
	
	
}

void TextCircle::Pos(sf::Vector2i mouse_pos)
{
	shape.setPosition(mouse_pos.x - shape.getRadius(), mouse_pos.y - shape.getRadius());
	txt.setPosition(mouse_pos.x, mouse_pos.y);
}

void TextCircle::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(shape);
	target.draw(txt);
}


bool TextCircle::inside(sf::Vector2f target) const
{
	sf::Vector2f cir_pos = shape.getPosition();
	cir_pos.x += shape.getRadius();
	cir_pos.y += shape.getRadius();

	float b = target.y - cir_pos.y;
	float a = target.x - cir_pos.x;
	float c = sqrt(pow(a, 2) + pow(b, 2));

	if (c <= shape.getRadius())
	{
		return true;
	}
	else
	{
		return false;
	}
}