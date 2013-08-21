#include "pole.h"

pole::pole(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4)
{
    x[0] = x1;
    y[0] = y1;
    x[1] = x2;
    y[1] = y2;
    x[2] = x3;
    y[2] = y3;
    x[3] = x4;
    y[3] = y4;
    czcionka_arial.loadFromFile( "arial.ttf");
}

pole::~pole()
{

}
void pole::rysuj(sf::RenderWindow &okno)
{

}
