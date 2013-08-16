#include "dzwiek.h"

dzwiek::dzwiek()
	{
		sciezka_dzwiek_intro="bagno_dzwiek.wav";
		sciezka_dzwiek_tlo="dzwiek_tlo.ogg";
		dzwiek_wej();
		dzwiek_t();

	}
void dzwiek::dzwiek_wej()
{
		bufor_dzwieku.loadFromFile(sciezka_dzwiek_intro);
		dzwiek_wejsciowy.setBuffer(bufor_dzwieku);
		dzwiek_wejsciowy.setVolume(10);
		dzwiek_wejsciowy.play();
}
void dzwiek::dzwiek_t()
{
		dzwiek_tlo.openFromFile(sciezka_dzwiek_tlo);
		dzwiek_tlo.setVolume(20);
		dzwiek_tlo.play();
		dzwiek_tlo.setLoop(1);
}