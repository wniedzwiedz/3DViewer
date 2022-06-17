/*

 OpenGL - szablon do �wicze� laboratoryjnych
 (C) Micha� Turek.

*/

#ifdef _KONFIGURACJA


	/******************* SZABLON **************************/


	// KONFIGURACJA	WYSWIETLANIA

	
	oknoSzerkosc=800;
	oknoWysokosc=600;
	oknoFullScreen = false;



	// KONFIGURACJA	KAMERY

	
	ustalObszar (500);						// promien obszaru (kola), po jakim kamera mo�e sie porusza�

 // wymiary terenu: (-200,-200) - (200,200)

	// Funkcja rejestruj�ca przeszkody - kolejne parametry to X1, Z1, X2, Z2 prostok�ta, kt�ry jest dodatkowo zabroniony dla kamery
	
	// blokady terenu (sciany)
	rejestrujPrzeszkode(-200,-200,-147,200);	// lewy brzeg
	rejestrujPrzeszkode(132,-200,200,200);		// prawy  brzeg
	rejestrujPrzeszkode(-200,-130,200,-200);	// przedni brzeg
	rejestrujPrzeszkode(-200,157,200,200);		// tylny brzeg
	
	rejestrujPrzeszkode(-101,-90,-26,200);		// lewa wyspa
	rejestrujPrzeszkode(13,-200,90,132);		// prawa wyspa
											// Funkcj� mo�na wywo�ywac wielokrotnie dla r�nych obszar�w



	/******************************************************/


#undef _KONFIGURACJA
#endif
