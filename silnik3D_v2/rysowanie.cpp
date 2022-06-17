/*

 OpenGL - szablon do æwiczeñ laboratoryjnych
 (C) Micha³ Turek.

*/

#ifdef _RYSOWANIE


	/******************* SZABLON **************************/


	// TEREN
	// Tekstura podloza jest zapisana w pliku "data/podloze.bmp", definiowana bezpoœrednio w 3ds. 
	// Wymagany format pliku: bmp, 24 bity na pixel.
	glPushMatrix();
		glTranslatef(0,1,0);
		rysujModel("teren"); // malowanie pod³o¿a
		rysujModel("niebo"); // malowanie nieba
	glPopMatrix();


	// MODELE 3ds:
	// Modele 3ds znajdujace sie w katalogu /data s¹ autoamtycznie ladowane i rejestrowane pod nazwami zbieznymi z nazwami plikow
	// Aby narysowaæ model nalezy wywo³aæ funkcjê: rysujModel ("nazwa_modelu");
	// Nazwa_modelu mo¿e byæ podana literemi du¿ymi lub ma³ymi, z rozszerzeniem pliku lub bez.
	

			

	// przyklad:

	glPushMatrix();
		glTranslatef(8,2,-152);
		glRotatef(160,0,1,0);
		rysujModel ("wiatrak");
	glPopMatrix();

	glPushMatrix();
		glTranslatef(-25,-7,-80);
		glRotatef(90,0,1,0);
		rysujModel ("latarnia");
	glPopMatrix();
	glPushMatrix();
		glTranslatef(-25,-7,120);
		glRotatef(90,0,1,0);
		rysujModel ("latarnia");
	glPopMatrix();
	
	
	glPushMatrix();
		glTranslatef(120,-5.5,-103);
		glRotatef(-86,0,1,0);
		rysujModel ("lawka");
	glPopMatrix();
	glPushMatrix();
		glTranslatef(10,-8,-43);
		glRotatef(-42,0,1,0);
		rysujModel ("lawka");
	glPopMatrix();
	glPushMatrix();
		glTranslatef(-149,50,-133);
		glRotatef(-33,0,1,0);
		rysujModel ("most");
	glPopMatrix();

	
	for (int a = 0; a<12; a++){
		glPushMatrix();
		glTranslatef(   drzewa1[a][0], drzewa1[a][1]   ,   drzewa1[a][2]  );
		glRotatef(drzewa1[a][3],0,1,0);
		rysujModel ("drzewo1");
		glPopMatrix();
	
		glPushMatrix();
		glTranslatef(   drzewa2[a][0], drzewa2[a][1]   ,   drzewa2[a][2]  );
		glRotatef(drzewa2[a][3],0,1,0);
		rysujModel ("drzewo2");
		glPopMatrix();
	
		glPushMatrix();
		glTranslatef(   drzewa3[a][0], drzewa3[a][1]   ,   drzewa3[a][2]  );
		glRotatef(drzewa3[a][3],0,1,0);
		rysujModel ("drzewo3");
		glPopMatrix();
	
		glPushMatrix();
		glTranslatef(   krzaki[a][0], krzaki[a][1]   ,   krzaki[a][2]  );
		glRotatef(krzaki[a][3],0,1,0);
		rysujModel ("krzak");
		glPopMatrix();
	}

	// Tu (na ko½cu) rysowanie obiekt¡w BLEND

	glPushMatrix();
		glEnable(GL_BLEND);
		glDepthMask(GL_FALSE);
		glBlendFunc(GL_SRC_COLOR, GL_ONE_MINUS_SRC_COLOR);
		GLfloat  mat1[4] = {0.5,0.4,0.7,1};
		glMaterialfv(GL_FRONT, GL_SPECULAR,mat1);
		glMaterialfv(GL_FRONT, GL_AMBIENT,mat1);
		glMaterialfv(GL_FRONT, GL_DIFFUSE,mat1);
		glTranslatef(105,-6.7,-103);
		rysujModel ("woda");
		glDepthMask(GL_TRUE);
		glDisable(GL_BLEND);
	glPopMatrix();

	/******************************************************/


#undef _RYSOWANIE
#endif
