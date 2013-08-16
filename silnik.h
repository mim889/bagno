#ifndef silnik_h
#define silnik_h

#include "ekran.h"
#include "zdarzenie.h"
#include "grafika.h"
#include "dzwiek.h"
#include "czas.h"
#include "komunikaty.h"
#include "menu.h"

using namespace sf;
class silnik
{

private:

public:
	silnik();
	ekran moj_ekran;
	void uruchom();
};

#endif