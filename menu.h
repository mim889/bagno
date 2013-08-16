#ifndef menu_h
#define menu_h

#include <SFML/Graphics.hpp>
#include "ekran.h"

class menu
{
private:
	sf::Font czcionka_comic;

public:
	sf::Text graj;
	sf::Text statystyki;
	sf::Text o_autorze;
	sf::Text koniec;

	menu::menu();
	menu::~menu();
	
	void wyswietl_opcje_menu(ekran &ekran_glowny,int nr_opcji);
	
};
#endif