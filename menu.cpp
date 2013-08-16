#include "menu.h"

	menu::menu()
	{
		czcionka_comic.loadFromFile("comicbd.ttf");

		graj.setFont(czcionka_comic);
		statystyki.setFont(czcionka_comic);
		o_autorze.setFont(czcionka_comic);
		koniec.setFont(czcionka_comic);

		graj.setString("GRAJ!");
		statystyki.setString("Statystyki");
		o_autorze.setString("O Bagnie slow kilka...");
		koniec.setString("Koniec");

		graj.setCharacterSize(40);
		statystyki.setCharacterSize(40);
		o_autorze.setCharacterSize(40);
		koniec.setCharacterSize(40);

		graj.setColor(sf::Color::Black);
		statystyki.setColor(sf::Color::Black);
		o_autorze.setColor(sf::Color::Black);
		koniec.setColor(sf::Color::Black);

		graj.setPosition(460,400);
		statystyki.setPosition(410,400);
		o_autorze.setPosition(320,400);
		koniec.setPosition(460,400);
		
	}
	menu::~menu(){}
	
	void menu::wyswietl_opcje_menu(ekran &ekran_glowny,int nr_opcji)
	{
		switch(nr_opcji)
		{
			case 1:
				ekran_glowny.okno_gry.draw(graj);
				break;

			case 2:
				ekran_glowny.okno_gry.draw(statystyki);
				break;

			case 3:
				ekran_glowny.okno_gry.draw(o_autorze);
				break;

			case 4:
				ekran_glowny.okno_gry.draw(koniec);
				break;

		}
	}
	