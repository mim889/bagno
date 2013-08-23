#include "silnik.h"
#include <stdlib.h>
void silnik::uruchom()
	{
		moj_ekran.ustaw_rozdzielczosc_x(1024);
		moj_ekran.ustaw_rozdzielczosc_y(720);
		moj_ekran.ustaw();

		grafika tekstura_tlo;
		dzwiek moj_dzwiek;
		czas nowy_stoper;
		komunikaty komunikat;
		menu menu_bagno;
		zdarzenie wychwyc;
        moja_plansza.generuj_pola();
		while(moj_ekran.okno_gry.isOpen())
		{
			
			while(moj_ekran.okno_gry.pollEvent(wychwyc.zdarzenie_okna))
			{
				wychwyc.obsluz_zdarzenie(moj_ekran);
			}
			
			if (wychwyc.zwroc_opcja_gry()==0)//ekran powitalny z logo i tlo
			{
				moj_ekran.okno_gry.clear(sf::Color(255,50,50));
				moj_ekran.okno_gry.draw(tekstura_tlo.s_tlo_glowne);
				moj_ekran.okno_gry.draw(komunikat.logo_duze);
				moj_ekran.okno_gry.display();
			if (nowy_stoper.zwroc_czas() > 5)
				{
					wychwyc.ustaw_opcja_gry(1);	
				}
			}

			if (wychwyc.zwroc_opcja_gry()==1)//czarny ekran z oczekiwaniem na klawisz
			{
				moj_ekran.okno_gry.clear(sf::Color(0,0,0,255));
				moj_ekran.okno_gry.draw(komunikat.oczekiwanie_na_klawisz);
				moj_ekran.okno_gry.display();
			}
			if (wychwyc.zwroc_opcja_gry()==2)//wyswietlenie menu
			{
				moj_ekran.okno_gry.clear(sf::Color(100,100,100,255));
				moj_ekran.okno_gry.draw(tekstura_tlo.s_tlo_glowne);
				moj_ekran.okno_gry.draw(komunikat.logo_male);
				menu_bagno.wyswietl_opcje_menu(moj_ekran,wychwyc.pozycja_menu);
				moj_ekran.okno_gry.draw(komunikat.menu_opis);
				moj_ekran.okno_gry.display();
			}
			if (wychwyc.zwroc_opcja_gry()==3)//czarny ekran po¿egnalny z napisem
			{
				moj_ekran.okno_gry.clear(sf::Color(0,0,0,255));
				moj_ekran.okno_gry.draw(komunikat.napis_koncowy);
				moj_ekran.okno_gry.display();
				nowy_stoper.generuj_opoznienie(3);
				moj_ekran.okno_gry.close();
			}
			if (wychwyc.zwroc_opcja_gry()==4)//O bagnie slow kilka
			{
				moj_ekran.okno_gry.clear(sf::Color(124,238,12,230));
				moj_ekran.okno_gry.draw(komunikat.bagno_opis);
				moj_ekran.okno_gry.display();
			}
			if (wychwyc.zwroc_opcja_gry()==5)//Menu w GRAJ!
			{
				moj_ekran.okno_gry.clear(sf::Color(10,50,110,255));	
				moj_ekran.okno_gry.draw(komunikat.wybor_opcji_graj);
				moj_ekran.okno_gry.display();
			}
			if (wychwyc.zwroc_opcja_gry()==6)//gracze
            {
                if(wychwyc.zdarzenie_okna.type == sf::Event::KeyPressed
                        && wychwyc.zdarzenie_okna.key.code == sf::Keyboard::Up)
                {
                    moja_plansza.ile_oczek_wylosowano = rand()%6+1;
                }
				moj_ekran.okno_gry.clear(sf::Color(100,100,100,255));
                moja_plansza.rysuj(moj_ekran.okno_gry);
                moj_ekran.okno_gry.display();
			}
			
		}
		
	}
silnik::silnik() :moja_plansza(20)
{

	}

//silnik 
//statystyki ?? ile razy gra uruchomiona przez jaki czas. //uzycie strumieni plikow binarnych. //statystyka rzutow kostka.
//graj uzycie template-ow do pol gry. tablica stala z obiektami pole (negatywne badz pozytywne)
//problem z polskimi literami
//pc vs user uruchamia sie plansza gry z polem imiê do uzupelnienia przycisk start rozpoczyna gre.
//user vs user tak jak wyzej tylko ze mamy 4 pola imion.


//szblony(tablica)	
//strumienie (przeciazenie strumienia zapisu do pliku i odczyt)
//dziedziczenie

//grafika i algorytm gry rozdzielic
