#include "header.h"

#include <SFML/Graphics.hpp>

Utils::Screen::Screen(sf::RenderWindow& newWindow) : window(newWindow) {}

sf::Font font;

// initalise font
void Utils::setFont(sf::Font& newFont) {
    font = newFont;
}

// take a base Text element, set font/text/size/style
void Utils::makeText(sf::Text& base, const char* str, int size, sf::Color colour, int style) {
    base.setFont(font);
    base.setString(str);
    base.setCharacterSize(size);
    base.setColor(colour);
    base.setStyle(style);
}

// take a base Text element, centre horizontally and/or vertically
void Utils::centreText(sf::Text& base, bool horiz, bool vert) {
    sf::FloatRect bounds = base.getGlobalBounds();
    if (horiz) base.setPosition(400 - (bounds.width / 2), bounds.top);
    if (vert) base.setPosition(bounds.left, 300 - (bounds.height / 2));
}