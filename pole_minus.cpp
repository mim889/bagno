#include "pole_minus.h"
#include <iostream>
#include <sstream>
pole_minus::pole_minus(int krok,int x1, int y1,int x2, int y2,int x3, int y3,int x4, int y4): pole(x1, y1,x2, y2,x3, y3,x4, y4)
{
    this->krok = krok;
    kolor=sf::Color::Red;

    std::ostringstream ss;
    ss << this->krok;
    sf::String str(ss.str().c_str()); //zamieniamy liczbe na sf::string'a

    sf::Vector2i pozycja;
    pozycja.x = (x[0]+x[1]+x[2]+x[3])/4-9;      //obliczamy pozycje napisu
    pozycja.y = (y[0]+y[1]+y[2]+y[3])/4-9;

    napis.setFont(czcionka_arial);     //ustawiamy właściwości napisu
    napis.setString(str);
    napis.setColor(sf::Color::Black);
    napis.setCharacterSize(18);
    napis.setPosition(pozycja.x,pozycja.y);
}
pole_minus::~pole_minus()
{

}
void pole_minus::rysuj(sf::RenderWindow &okno)
{
    float delta = 0.2;
    sf::Vertex vertices[] =
    {
        sf::Vertex(sf::Vector2f(x[0]-(x[0]-x[2])*delta,y[0]-(y[0]-y[2])*delta), kolor, sf::Vector2f( 0,  0)),
        sf::Vertex(sf::Vector2f(x[1]-(x[1]-x[3])*delta,y[1]-(y[1]-y[3])*delta), kolor, sf::Vector2f( 0, 0)),
        sf::Vertex(sf::Vector2f(x[2],y[2]), kolor, sf::Vector2f(0, 0)),
        sf::Vertex(sf::Vector2f(x[3],y[3]), kolor, sf::Vector2f(0,  0))
    };
    okno.draw(vertices,4,  sf::TrianglesStrip);
    sf::Vertex vertices2[] =
    {
        sf::Vertex(sf::Vector2f(x[0]-(x[0]-x[2])*delta,y[0]-(y[0]-y[2])*delta), sf::Color(kolor.r,kolor.g,kolor.b,kolor.a-0.5), sf::Vector2f( 0,  0)),
        sf::Vertex(sf::Vector2f(x[1]-(x[1]-x[3])*delta,y[1]-(y[1]-y[3])*delta), sf::Color(kolor.r,kolor.g,kolor.b,kolor.a-0.5), sf::Vector2f( 0, 0)),
        sf::Vertex(sf::Vector2f(x[0],y[0]),kolor_porzednika , sf::Vector2f(0, 0)),
        sf::Vertex(sf::Vector2f(x[1],y[1]), kolor_porzednika, sf::Vector2f(0,  0))
    };
    okno.draw(vertices2,4,  sf::TrianglesStrip);

    okno.draw(napis);              //rysujemy liczbe
}
