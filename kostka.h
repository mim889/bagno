#ifndef KOSTKA_H
#define KOSTKA_H
#include <SFML/Graphics.hpp>
class kostka
{
public:
    kostka();
    sf::Sprite kostka_sprite;
    sf::Texture kostka_texture;
    void rysuj(int ile_oczek,sf::RenderWindow &okno);
};

#endif // KOSTKA_H
