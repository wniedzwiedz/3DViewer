/*

 OpenGL - szablon do æwiczeñ laboratoryjnych
 (C) Micha³ Turek.

*/

#ifdef _KONFIGURACJA


	/******************* SZABLON **************************/


	// KONFIGURACJA	WYSWIETLANIA

	
	oknoSzerkosc=800;
	oknoWysokosc=600;
	oknoFullScreen = false;



	// KONFIGURACJA	KAMERY

	
	ustalObszar (500);						// promien obszaru (kola), po jakim kamera mo¿e sie poruszaæ

 // wymiary terenu: (-200,-200) - (200,200)

	// Funkcja rejestruj¹ca przeszkody - kolejne parametry to X1, Z1, X2, Z2 prostok¹ta, który jest dodatkowo zabroniony dla kamery
	
	// blokady terenu (sciany)
	rejestrujPrzeszkode(-200,-200,-147,200);	// lewy brzeg
	rejestrujPrzeszkode(132,-200,200,200);		// prawy  brzeg
	rejestrujPrzeszkode(-200,-130,200,-200);	// przedni brzeg
	rejestrujPrzeszkode(-200,157,200,200);		// tylny brzeg
	
	rejestrujPrzeszkode(-101,-90,-26,200);		// lewa wyspa
	rejestrujPrzeszkode(13,-200,90,132);		// prawa wyspa
											// Funkcjê mo¿na wywo³ywac wielokrotnie dla ró¿nych obszarów



	/******************************************************/


#undef _KONFIGURACJA
#endif
