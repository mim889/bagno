#include "pole_minus.h"

pole_minus::pole_minus(int krok,int x1, int y1,int x2, int y2,int x3, int y3,int x4, int y4): pole(x1, y1,x2, y2,x3, y3,x4, y4)
{
    this->krok = krok;
    kolor=sf::Color::Red;
}
pole_minus::~pole_minus()
{

}
void pole_minus::rysuj(sf::RenderWindow &okno)
{
    sf::Vertex vertices[] =
    {
        sf::Vertex(sf::Vector2f(x[0],y[0]), kolor, sf::Vector2f( 0,  0)),
        sf::Vertex(sf::Vector2f(x[1],y[1]), kolor, sf::Vector2f( 0, 0)),
        sf::Vertex(sf::Vector2f(x[2],y[2]), kolor, sf::Vector2f(0, 0)),
        sf::Vertex(sf::Vector2f(x[3],y[3]), kolor, sf::Vector2f(0,  0))
    };
    okno.draw(vertices,4,  sf::TrianglesStrip);
    sf::Vertex verticesLine[] =
    {
        sf::Vertex(sf::Vector2f(x[0],y[0]), sf::Color::Black, sf::Vector2f( 0,  0)),
        sf::Vertex(sf::Vector2f(x[1],y[1]), sf::Color::Black, sf::Vector2f( 0, 0)),
        sf::Vertex(sf::Vector2f(x[2],y[2]), sf::Color::Black, sf::Vector2f(0, 0)),
        sf::Vertex(sf::Vector2f(x[3],y[3]), sf::Color::Black, sf::Vector2f(0,  0))
    };
    okno.draw(verticesLine,4,  sf::Lines);
}
