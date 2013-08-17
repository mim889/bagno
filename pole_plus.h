#ifndef pole_plus_h
#define pole_plus_h

#include "pole.h"

class pole_plus : public pole
{
public:
    pole_plus(int krok,int x1, int y1,int x2, int y2,int x3, int y3,int x4, int y4);
    ~pole_plus();
    sf::Color kolor;
    int krok;
    void rysuj(sf::RenderWindow &okno);
};

#endif
