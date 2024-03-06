#include <text_circle.h>

void TextCircle::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	float random = rand() % (100 - 0 + 1) + 0;
	sf::CircleShape shape(random);
	sf::Text();

}
