#include "czas.h"

void czas::generuj_opoznienie(int czas_opoznienia)
	{
		czas_start=zegar.getElapsedTime().asSeconds();
		
		do
		{
			czas_koniec=zegar.getElapsedTime().asSeconds();
		}while(czas_start+czas_opoznienia>czas_koniec);
	}

	float czas::zwroc_czas()
	{
		return zegar.getElapsedTime().asSeconds();
	}