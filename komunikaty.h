#ifndef komunikaty_h
#define komunikaty_h

#include <SFML/Graphics.hpp>

class komunikaty
{
private:
	sf::Font czcionka_arial;
	sf::Font czcionka_logo;

	 
	sf::String napis_logo;
	sf::String dowolny_klawisz;
	sf::String uzyj_strzalek;
	sf::String koniec;
	sf::String opcje_graj;

	sf::String o_bagnie_opis;

	//std::wstring polskie_znaki;

public:
	sf::Text oczekiwanie_na_klawisz;
	sf::Text menu_opis;
	sf::Text logo_duze;
	sf::Text logo_male;
	sf::Text napis_koncowy;
	sf::Text wybor_opcji_graj;
	
	sf::Text bagno_opis;

	komunikaty();

	void ustaw_duze_logo();
	void ustaw_male_logo();
	void ustaw_oczekiwanie_na_klawisz();
	void ustaw_menu_opis();
	void ustaw_bagno_opis();
	void ustaw_napis_koncowy();
	void ustaw_opcje_graj();


	~komunikaty();

};

#endif
