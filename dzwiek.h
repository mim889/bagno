#ifndef dzwiek_h
#define dzwiek_h

#include <SFML/Audio.hpp>

class dzwiek
{
private:
	std::string sciezka_dzwiek_intro;
	std::string sciezka_dzwiek_tlo;
	
public:
	sf::SoundBuffer bufor_dzwieku;
	sf::Sound dzwiek_wejsciowy;
	sf::Music dzwiek_tlo;

	dzwiek();
	void dzwiek_t();
	void dzwiek_wej();
};

#endif
