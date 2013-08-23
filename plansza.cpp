#include "plansza.h"
#include "pole_minus.h"
#include "pole_neutral.h"
#include "pole_plus.h"
#include <SFML/Graphics/Vertex.hpp>
#include <math.h>
plansza::plansza(int ile_ma_pol)
{
    if(ile_ma_pol > 10)
    {
        this->ile_ma_pol = ile_ma_pol;
    }
    else
    {
        this->ile_ma_pol = 10;
    }
}
plansza::~plansza()
{
    for(int i =0; i < ile_ma_pol; i++)
    {
        delete pola[i];
    }
    delete []pola;
}

void plansza::generuj_pola()
{
    pola = new pole*[ile_ma_pol];
    int liczba;
    double x[4];
    double y[4];
    double deltay = 100; //różnica wysokości między górą a dołem planszy
    double rozmiar_ekranu = 1024;
    int plansza_y = 300;
    int plansza_wysokosc = 100;
    for(int i =0; i < ile_ma_pol; i++)
    {
        liczba = rand()%12-6;
        x[0] = i/(double)(ile_ma_pol + 10) + 0.1; //daje wartości od 0 do 1
        x[1] = (i+1)/(double)(ile_ma_pol + 10) + 0.1;//tymi wartościami 10 i 0.1 zmieniasz położenie planszy na ekranie
        y[0] = sin(x[0]*3.14*8)*plansza_wysokosc+plansza_y;
        y[1] = sin(x[1]*3.14*8)*plansza_wysokosc+plansza_y;
        if(liczba > 0)
        {
            pola[i] = new pole_plus(liczba,x[0]*rozmiar_ekranu,y[0],x[0]*rozmiar_ekranu,y[0]-deltay,x[1]*rozmiar_ekranu,y[1],x[1]*rozmiar_ekranu,y[1]-deltay);
        }
        else if(liczba < 0)
        {
            pola[i] = new pole_minus(liczba,x[0]*rozmiar_ekranu,y[0],x[0]*rozmiar_ekranu,y[0]-deltay,x[1]*rozmiar_ekranu,y[1],x[1]*rozmiar_ekranu,y[1]-deltay);
        }
        else
        {
            pola[i] = new pole_neutral(liczba,x[0]*rozmiar_ekranu,y[0],x[0]*rozmiar_ekranu,y[0]-deltay,x[1]*rozmiar_ekranu,y[1],x[1]*rozmiar_ekranu,y[1]-deltay);
        }
    }
    pola[0]->kolor_porzednika = pola[0]->kolor;
    pola[ile_ma_pol-1]->kolor_porzednika = pola[ile_ma_pol-2]->kolor;
    for(int i =1; i < ile_ma_pol-1; i++)
    {
        pola[i]->kolor_porzednika = pola[i-1]->kolor;
    }
}
void plansza::rysuj(sf::RenderWindow &okno)
{
    for(int i =0; i < ile_ma_pol; i++)
    {
        pola[i]->rysuj(okno);
    }
    moja_kostka.rysuj(ile_oczek_wylosowano,okno);
}
