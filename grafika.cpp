#include "grafika.h"

grafika::grafika()
	{
		sciezka_tlo="tlo.jpg";

		tlo_glowne.loadFromFile(sciezka_tlo);
		s_tlo_glowne.setTexture(tlo_glowne);
	}
grafika::grafika(std::string adres_tlo)
	{
		sciezka_tlo=adres_tlo;

		tlo_glowne.loadFromFile(sciezka_tlo);
		s_tlo_glowne.setTexture(tlo_glowne);
	
	}