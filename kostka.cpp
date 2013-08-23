#include "kostka.h"

kostka::kostka()
{
   // kostka_sprite.
    kostka_texture.loadFromFile("kostka.png");
    kostka_sprite.setTexture(kostka_texture);
}
void kostka::rysuj(int ile_oczek, sf::RenderWindow &okno)
{
    sf::IntRect rect;
    rect.width = 92;
    rect.height = 92;
    switch(ile_oczek)
    {
    case 1:
        rect.left = 196;
        rect.top = 105;
        break;
    case 2:
        rect.left = 196;
        rect.top = 196;
        break;
    case 3:
        rect.left = 285;
        rect.top = 105;
        break;
    case 4:
        rect.left = 107;
        rect.top = 105;
        break;
    case 5:
        rect.left = 196;
        rect.top = 16;
        break;
    case 6:
        rect.left = 17;
        rect.top = 105;
        break;

    default: break;

    }


    kostka_sprite.setTextureRect(rect);
    kostka_sprite.setPosition(20,20);
    okno.draw(kostka_sprite);
    //kostka_sprite.draw(okno);
}
