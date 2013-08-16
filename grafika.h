#ifndef grafika_h
#define grafika_h

#include <SFML/Graphics.hpp>

class grafika
{
private:
	std::string sciezka_tlo;
public:
	
	sf::Sprite s_tlo_glowne;
	sf::Texture tlo_glowne;

	//konstruktory z podaniem œcie¿ki 
    grafika();
    grafika(std::string adres_tlo);
	//koniec konstruktorów
};

#endif
