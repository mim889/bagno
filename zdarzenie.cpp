#include "zdarzenie.h"
#include <iostream>
#include "gracz.h"
#include "generuj_tablice.h"

	zdarzenie::zdarzenie()
	{
		ilosc_graczy=0;
		opcja_gry=0;
		pozycja_menu=1;
		
	}

	int zdarzenie::obsluz_zdarzenie(ekran &ekran_glowny)
	{
			if(zdarzenie_okna.type == sf::Event::Closed)
				{
					ekran_glowny.okno_gry.close();
				}
			
			if(zdarzenie_okna.type == sf::Event::KeyPressed 
					&& zdarzenie_okna.key.code == sf::Keyboard::Escape )
				{
					ekran_glowny.okno_gry.close();
				}
			if( zdarzenie_okna.type == sf::Event::MouseButtonPressed 
					&& zdarzenie_okna.mouseButton.button == sf::Mouse::Middle )
				{
					ekran_glowny.okno_gry.close();
				}
			if( zdarzenie_okna.type == sf::Event::KeyPressed 
					&& opcja_gry==0)
				{
					opcja_gry=1;
					return 0;
				}
			if( zdarzenie_okna.type == sf::Event::KeyPressed 
					&& opcja_gry==1)
				{
					opcja_gry=2;
					return 0;
				}
			///////////////////////////////////////////////////////
			if( zdarzenie_okna.type == sf::Event::KeyPressed  //klawisz w gora
					&& zdarzenie_okna.key.code==sf::Keyboard::Up && opcja_gry==2)
				{
					pozycja_menu--;
					if(pozycja_menu==0){pozycja_menu=4;}
				}
			if( zdarzenie_okna.type == sf::Event::KeyPressed // klawisz w dol 
					&& zdarzenie_okna.key.code==sf::Keyboard::Down && opcja_gry==2)
				{
					pozycja_menu++;
					if(pozycja_menu==5){pozycja_menu=1;}
				}
			///////////////////////////////////////////////////////
			if(zdarzenie_okna.type == sf::Event::KeyPressed 
					&& zdarzenie_okna.key.code==sf::Keyboard::Return 
					&& opcja_gry==2 && pozycja_menu==4)//wybranie opcji
				{
					opcja_gry=3;
					return 0;
				}
			if(zdarzenie_okna.type == sf::Event::KeyPressed 
					&& zdarzenie_okna.key.code==sf::Keyboard::Return 
					&& opcja_gry==2 && pozycja_menu==3)//wybranie opcji
				{
					opcja_gry=4;
					return 0;
				}
			if(zdarzenie_okna.type == sf::Event::KeyPressed 
					&& zdarzenie_okna.key.code==sf::Keyboard::Return 
					&& opcja_gry==4)//wybranie opcji
				{
					opcja_gry=2;
					return 0;
				}
			if(zdarzenie_okna.type == sf::Event::KeyPressed 
					&& zdarzenie_okna.key.code==sf::Keyboard::Return 
					&& opcja_gry==2 && pozycja_menu==1)//wejscie w menu Graj!
				{
					opcja_gry=5;
					return 0;
				}
			if(zdarzenie_okna.type == sf::Event::KeyPressed && opcja_gry==5)
			{
						
				
				switch(zdarzenie_okna.key.code)
				{
				case 27 : 
					{
					std::cout << "Wybrano 1";
					ilosc_graczy=1;
					opcja_gry=6;
					return 0;
					}
					break;
				case 28 : 
					{
					std::cout << "Wybrano 2";
					ilosc_graczy=2;
					opcja_gry=6;
					return 0;
					}
					break;
				case 29 : 
					{
					std::cout << "Wybrano 3";
					ilosc_graczy=3;
					return 0;
					}
					break;
				case 30 : 
					{
					std::cout << "Wybrano 4";
					ilosc_graczy=4;
					opcja_gry=6;
					return 0;
					}
					break;
				default :
					{
					std::cout << "Inny klawisz!";
					return 0;
					}	 
					break;
				}
			}

			if(opcja_gry==6 && zdarzenie_okna.type==sf::Event::TextEntered)
				{
					
					generuj_tablice <gracz,4> tablica_graczy;

					

					tablica_graczy[0].dodaj_znak((char)zdarzenie_okna.text.unicode);
					
					
					//std::cout << (char)zdarzenie_okna.text.unicode;
					std::cout << tablica_graczy[0].nazwa;
					
					return 0;
				}
			


	}

			int zdarzenie::zwroc_opcja_gry()
			{
				return opcja_gry;
			}
			void zdarzenie::ustaw_opcja_gry(int nr_opcji)
			{
				opcja_gry=nr_opcji;
			}