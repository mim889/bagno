#ifndef czas_h
#define czas_h

#include <SFML/System.hpp>
class czas
{

private:
	sf::Clock zegar;
	float czas_start;
	float czas_koniec;

public:
	void generuj_opoznienie(int czas_opoznienia);
	float zwroc_czas();
};

#endif
