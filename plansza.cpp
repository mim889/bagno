#include "plansza.h"
#include "pole_minus.h"
#include "pole_neutral.h"
#include "pole_plus.h"
plansza::plansza(int ile_ma_pol)
{
   this->ile_ma_pol = ile_ma_pol;
};
plansza::~plansza()
{

};

void plansza::generuj_pola()
{
    pola = new pole[ile_ma_pol];
    int liczba;
    for(int i =0; i < ile_ma_pol; i++)
    {
        liczba = rand()%6-3;
        if(liczba > 0)
        {
            pola[i] = new pole_plus;
        }
        else if(liczba < 0)
        {
            pola[i] = new pole_mins;
        }
        else
        {
            pola[i] = new pole_neutral;
        }
    }
};
