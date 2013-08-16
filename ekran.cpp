#include "ekran.h"

ekran::ekran(int roz_x, int roz_y)
	{
		x=roz_x;
		y=roz_y;
	}
void ekran::ustaw()
	{
		okno_gry.create(sf::VideoMode( x, y, 32 ), "Bagno!",sf::Style::Close);//ustawienie okna gry 
		okno_gry.setFramerateLimit(30); //liczba klate na sekundê	
	}
	void ekran::ustaw_rozdzielczosc_x(int roz_x)
	{
		x=roz_x;
	}
	void ekran::ustaw_rozdzielczosc_y(int roz_y)
	{
		y=roz_y;
	}