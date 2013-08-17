#ifndef pole_neutral_h
#define pole_neutral_h

#include "pole.h"

class pole_neutral : public pole
{
public:
    pole_neutral(int krok,int x1, int y1,int x2, int y2,int x3, int y3,int x4, int y4);
    ~pole_neutral();
    sf::Color kolor;
    int krok;
    void rysuj(sf::RenderWindow &okno);
};
#endif
