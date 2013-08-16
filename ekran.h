#ifndef ekran_h
#define ekran_h

#include <SFML/Graphics.hpp>

class ekran
{
private:
	int x, y;
public:
	sf::RenderWindow okno_gry;
	
	ekran(int roz_x=0, int roz_y=0);
	
	void ustaw();
	void ustaw_rozdzielczosc_x(int roz_x);
	void ustaw_rozdzielczosc_y(int roz_y);
	
};

#endif