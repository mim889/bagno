#ifndef pole_minus_h
#define pole_minus_h

#include "pole.h"

class pole_minus: public pole
{
public:
    pole_minus(int krok, int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4);
    ~pole_minus();
    sf::Color kolor;
    int krok;

    void rysuj(sf::RenderWindow &okno);
};

#endif
