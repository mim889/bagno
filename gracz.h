#ifndef gracz_h
#define gracz_h

#include <iostream>
#include <SFML/Graphics.hpp>

class gracz
{

private:
	

public:
	int typ; //0-pc 1-czlowiek 
	std::string nazwa;
    int pozycja;
    sf::Sprite gracz_sprite;
    sf::Texture gracz_tekstura;
    gracz();
	void dodaj_znak(char litera);
    void rysuj(sf::RenderWindow &okno, sf::Vector2i pozycja);
    void ustaw_dane_gracza(int ktory_gracz, int typ);
};

#endif
