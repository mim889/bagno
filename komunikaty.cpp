#include "komunikaty.h"

komunikaty::komunikaty()
	{
		
		
		//polskie_znaki=L"πÊÍ≥ÒÛúüø•∆ £—”åèØ";

		czcionka_arial.loadFromFile( "arial.ttf");;
		czcionka_logo.loadFromFile("JFRingmaster.ttf");


		napis_logo=L"Bagno!";
		dowolny_klawisz=L"Uderz w dowolny klawisz!";
		uzyj_strzalek=L"Uzyj strzlek by wybrac opcje";
		koniec=L"Zapraszam ponownie... na Bagno!";
		o_bagnie_opis=L"\tWitaj!\nBagno to gra ktÛra zabierze ciÍ w niesamowity úwiat moczar..\nTa prosta gra umozliwi ci dobrπ zabawÍ ze znajmomymi.\nWykorzystano bibliotekÍ SFML2\nG≥Ûwnym celem stworzenia Bagna! jest zaliczenie przedmiotu PK4 :)\n\n\nMi≥ej zabawy!";
		opcje_graj=L"Podaj graczy! \nWybierz cyfre od 1-4";

		ustaw_duze_logo();
		ustaw_male_logo();
		ustaw_oczekiwanie_na_klawisz();
		ustaw_menu_opis();
		ustaw_bagno_opis();
		ustaw_napis_koncowy();
		ustaw_opcje_graj();
	}
		
		void komunikaty::ustaw_duze_logo()
		{
			logo_duze.setFont(czcionka_logo);
			logo_duze.setString(napis_logo);
			logo_duze.setColor(sf::Color::White);
			logo_duze.setCharacterSize(80);
			logo_duze.setPosition(320,300);
		}
		void komunikaty::ustaw_male_logo()	
		{
			logo_male.setFont(czcionka_logo);
			logo_male.setString(napis_logo);
			logo_male.setColor(sf::Color::White);
			logo_male.setCharacterSize(40);
			logo_male.setPosition(420,100);
		}
		void komunikaty::ustaw_oczekiwanie_na_klawisz()
		{
			oczekiwanie_na_klawisz.setFont(czcionka_arial);
			oczekiwanie_na_klawisz.setString(dowolny_klawisz);
			oczekiwanie_na_klawisz.setColor(sf::Color::White);
			oczekiwanie_na_klawisz.setCharacterSize(25);
			oczekiwanie_na_klawisz.setPosition(370,600);
		}
		void komunikaty::ustaw_menu_opis()
		{
			menu_opis.setFont(czcionka_arial);
			menu_opis.setString(uzyj_strzalek);
			menu_opis.setColor(sf::Color::Red);
			menu_opis.setCharacterSize(18);
			menu_opis.setPosition(420,600);
		}
		void komunikaty::ustaw_napis_koncowy()
		{
			napis_koncowy.setFont(czcionka_arial);
			napis_koncowy.setString(koniec);
			napis_koncowy.setColor(sf::Color::White);
			napis_koncowy.setCharacterSize(50);
			napis_koncowy.setPosition(150,300);
		}
		void komunikaty::ustaw_bagno_opis()
		{
			bagno_opis.setFont(czcionka_arial);
			bagno_opis.setString(o_bagnie_opis);
			bagno_opis.setColor(sf::Color::Black);
			bagno_opis.setCharacterSize(30);
			bagno_opis.setPosition(50,150);
		}
		void komunikaty::ustaw_opcje_graj()
		{
			wybor_opcji_graj.setFont(czcionka_arial);
			wybor_opcji_graj.setString(opcje_graj);
			wybor_opcji_graj.setColor(sf::Color::White);
			wybor_opcji_graj.setCharacterSize(40);
			wybor_opcji_graj.setPosition(300,100); 
		}


	
	komunikaty::~komunikaty(){}