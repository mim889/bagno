#include "silnik.h"
#include <stdlib.h>
silnik::silnik() :moja_plansza(20)
{

}
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
        bool koniec = false;
        while(moj_ekran.okno_gry.isOpen() && !koniec)
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
            else if (wychwyc.zwroc_opcja_gry()==1)//czarny ekran z oczekiwaniem na klawisz
			{
				moj_ekran.okno_gry.clear(sf::Color(0,0,0,255));
				moj_ekran.okno_gry.draw(komunikat.oczekiwanie_na_klawisz);
				moj_ekran.okno_gry.display();
			}
            else if (wychwyc.zwroc_opcja_gry()==2)//wyswietlenie menu
			{
				moj_ekran.okno_gry.clear(sf::Color(100,100,100,255));
				moj_ekran.okno_gry.draw(tekstura_tlo.s_tlo_glowne);
				moj_ekran.okno_gry.draw(komunikat.logo_male);
				menu_bagno.wyswietl_opcje_menu(moj_ekran,wychwyc.pozycja_menu);
				moj_ekran.okno_gry.draw(komunikat.menu_opis);
				moj_ekran.okno_gry.display();
			}
            else if (wychwyc.zwroc_opcja_gry()==3)//czarny ekran po¿egnalny z napisem
			{
				moj_ekran.okno_gry.clear(sf::Color(0,0,0,255));
				moj_ekran.okno_gry.draw(komunikat.napis_koncowy);
				moj_ekran.okno_gry.display();
				nowy_stoper.generuj_opoznienie(3);
				moj_ekran.okno_gry.close();
			}
            else if (wychwyc.zwroc_opcja_gry()==4)//O bagnie slow kilka
			{
				moj_ekran.okno_gry.clear(sf::Color(124,238,12,230));
				moj_ekran.okno_gry.draw(komunikat.bagno_opis);
				moj_ekran.okno_gry.display();
			}
            else if (wychwyc.zwroc_opcja_gry()==5)//Menu w GRAJ!
			{
				moj_ekran.okno_gry.clear(sf::Color(10,50,110,255));	
				moj_ekran.okno_gry.draw(komunikat.wybor_opcji_graj);
				moj_ekran.okno_gry.display();
			}
            else if (wychwyc.zwroc_opcja_gry()==6)//gracze
            {
                moj_ekran.okno_gry.clear(sf::Color(100,100,100,255));
                if(wychwyc.zdarzenie_okna.type == sf::Event::KeyPressed
                        && wychwyc.zdarzenie_okna.key.code == sf::Keyboard::Up && gracz_nastepny_ruch == 0) //losowanie kostk?
                {
                    moja_plansza.ile_oczek_wylosowano = rand()%6+1;
                    gracz_nastepny_ruch = 1;
                }
                if(wychwyc.zdarzenie_okna.type == sf::Event::KeyPressed
                        && wychwyc.zdarzenie_okna.key.code == sf::Keyboard::Right && gracz_nastepny_ruch == 1 )  //skok do nast?pnego gracza
                {
                    if(gracz_nastepny_ruch  && wychwyc.tablica_graczy[ktory_gracz_ma_ruch].pozycja < moja_plansza.ile_ma_pol)
                    {
                        wychwyc.tablica_graczy[ktory_gracz_ma_ruch].pozycja += moja_plansza.pola[wychwyc.tablica_graczy[ktory_gracz_ma_ruch].pozycja]->krok+moja_plansza.ile_oczek_wylosowano;
                        if(wychwyc.tablica_graczy[ktory_gracz_ma_ruch].pozycja<0)
                        {
                            wychwyc.tablica_graczy[ktory_gracz_ma_ruch].pozycja = 0;
                        }
                    }
                    gracz_nastepny_ruch = 0;
                    ktory_gracz_ma_ruch++;
                    ktory_gracz_ma_ruch = ktory_gracz_ma_ruch%4;
                }

                moja_plansza.rysuj(moj_ekran.okno_gry);//rysujemy plansze

                for(int i = 0; i< 4;i++)
                {
                    int pozycja = wychwyc.tablica_graczy[i].pozycja;
                    if(pozycja >= moja_plansza.ile_ma_pol)
                    {
                        wychwyc.ustaw_opcja_gry(7);
                    }
                    else
                    {
                        sf::Vector2i polozenie;
                        polozenie.x = (moja_plansza.pola[pozycja]->x[0]+moja_plansza.pola[pozycja]->x[1]+moja_plansza.pola[pozycja]->x[2]+moja_plansza.pola[pozycja]->x[3])/4-52/2+i*2;
                        polozenie.y = (moja_plansza.pola[pozycja]->y[0]+moja_plansza.pola[pozycja]->y[1]+moja_plansza.pola[pozycja]->y[2]+moja_plansza.pola[pozycja]->y[3])/4-52/2+i*2-30;
                        wychwyc.tablica_graczy[i].rysuj(moj_ekran.okno_gry,polozenie);
                    }
                }
                moj_ekran.okno_gry.display();
			}
            else if (wychwyc.zwroc_opcja_gry()==7)//kto wygra?
            {
                //kurwa wygra?em <jupi> :D
                std::cout << "\nwygra? gracz: " << ktory_gracz_ma_ruch;
                koniec = true;
            }

		}
		
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
