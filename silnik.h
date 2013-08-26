#ifndef silnik_h
#define silnik_h

#include "ekran.h"
#include "zdarzenie.h"
#include "grafika.h"
#include "dzwiek.h"
#include "czas.h"
#include "komunikaty.h"
#include "menu.h"
#include "plansza.h"
using namespace sf;
class silnik
{

private:

public:
	silnik();
	ekran moj_ekran;
    plansza moja_plansza;
	void uruchom();
    bool gracz_nastepny_ruch;
    int ktory_gracz_ma_ruch;
};

#endif
