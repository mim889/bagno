#include "gracz.h"
#include <string>
#include <SFML/Graphics.hpp>
gracz::gracz()
{
    pozycja = 0;
}
void gracz::ustaw_dane_gracza(int ktory_gracz, int typ)
{
    this->typ = typ;
    if(ktory_gracz==0)
    {
        gracz_tekstura.loadFromFile("pionekzielony.png");
    }
    else if(ktory_gracz ==1)
    {
        gracz_tekstura.loadFromFile("pionekzolty.png");
    }
    else if(ktory_gracz ==2)
    {
        gracz_tekstura.loadFromFile("pionekniebieski.png");
    }
    else if(ktory_gracz ==3)
    {
        gracz_tekstura.loadFromFile("pionekczerwony.png");
    }
    gracz_sprite.setTexture(gracz_tekstura);
    gracz_sprite.scale(0.1,0.1);
}
void gracz::dodaj_znak(char litera)
{
	nazwa=nazwa+litera;
}
void gracz::rysuj(sf::RenderWindow &okno, sf::Vector2i pozycja)
{
    gracz_sprite.setPosition(sf::Vector2f(pozycja));
    okno.draw(gracz_sprite);
}
