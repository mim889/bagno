#ifndef plansza_h
#define plansza_h

#include "generuj_tablice.h"
#include "pole.h"
class plansza
{

public:
	
    plansza(int ile_ma_pol=10);
	~plansza();
    void generuj_pola();
    pole** pola;
private:
    int ile_ma_pol;

};

#endif
