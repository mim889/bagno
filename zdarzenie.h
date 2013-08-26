#ifndef zdarzenie_h
#define zdarzenie_h

#include <SFML/Graphics.hpp>
#include "ekran.h"
#include "generuj_tablice.h"
#include "gracz.h"

class zdarzenie 
{
	
private:
	
    int uzyty_klawisz;
	int opcja_gry;
	//0 wyswietlenie logo i ekrano powitalnego
	//1 czarny ekran z oczekiwaniem na enter
	//2 menu
	//3 koniec z menu
	//

	
public:
	int pozycja_menu;
	int opcja_graj;
	//1. Graj
	//2. Statystyki
	//3. O bagnie
	//4. Koniec
	sf::Event zdarzenie_okna;
    int ilosc_graczy;
    zdarzenie();
	int obsluz_zdarzenie(ekran &ekran_glowny);
	int zwroc_opcja_gry();
	void ustaw_opcja_gry(int nr_opcji);
    generuj_tablice <gracz,4> tablica_graczy;
};
#endif
