#ifndef gracz_h
#define gracz_h

#include <iostream>


class gracz
{

private:
	

public:
	int typ; //0-pc 1-czlowiek 
	std::string nazwa;
	int pozycja;

	gracz();

	void dodaj_znak(char litera);
	
};

#endif