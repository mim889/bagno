#ifndef plansza_h
#define plansza_h

#include "generuj_tablice.h"
#include "pole.h"
#include "kostka.h"
class plansza
{

public:
	
    plansza(int ile_ma_pol=10);
	~plansza();
    void generuj_pola();
    int ktory_gracz; // licznik który gracz ma teraz ruch
    int ile_oczek_wylosowano;
    void rysuj(sf::RenderWindow &okno);

private:
    pole** pola;
    int ile_ma_pol;

    kostka moja_kostka;
};

#endif
