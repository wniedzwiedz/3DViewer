/*

 C++ przez OpenGL - szablon do æwiczeñ laboratoryjnych
 (C) Micha³ Turek.

*/

#ifdef _KONFIGURACJA


	/******************* SZABLON **************************/


	// KONFIGURACJA	WYSWIETLANIA

	

	oknoFullScreen = false;



	// KONFIGURACJA	KAMERY

	
	ustalObszar (5000);						// promien obszaru (kola), po jakim kamera mo¿e sie poruszaæ


	nowaPrzeszkoda(-44, -36, 3,1); //hustawka
	nowaPrzeszkoda(-20, 20, 5); //lawka
	nowaPrzeszkoda(0, 20, 3, 0); //karuzela
	nowaPrzeszkoda(30, 90, 5, 2); //zjezdzalnia
	nowaPrzeszkoda(50, 89, 10); //zjezdzalnia œrodek
	nowaPrzeszkoda(-15, 0, 20); //hustawka zj
	nowaPrzeszkoda(50, 50, 3); //bujak
	nowaPrzeszkoda(30, -3,3); //bujak podwójny
	/******************************************************/


#undef _KONFIGURACJA
#endif
