#ifndef GENERUJ_TABLICE
#define GENERUJ_TABLICE
template <class typ_pola, int elementow>
class generuj_tablice
{
public:
	
    typ_pola tablica[elementow];

     typ_pola &operator[]( int rozmiar )
     {
           return tablica[rozmiar];
	 }

};
#endif
