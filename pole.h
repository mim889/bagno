#ifndef pole_h
#define pole_h
#include <SFML/Graphics.hpp>
class pole
{
public:
    pole(int x1, int y1,int x2, int y2,int x3, int y3,int x4, int y4);
    virtual ~pole();
    int x[4];
    int y[4];
    sf::Font czcionka_arial;
    sf::Text napis;
    sf::Color kolor_porzednika;
    sf::Color kolor;
    int krok;
    virtual void rysuj(sf::RenderWindow &okno);
};


#endif

