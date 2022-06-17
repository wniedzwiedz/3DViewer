/*

 C++ przez OpenGL - szablon do æwiczeñ laboratoryjnych
 (C) Micha³ Turek.

*/

#ifdef _INTERAKCJA


	/******************* SZABLON **************************/

	// DEFINICJE FUNKCJI OBS£UGUJ¥CYCH ZDARZENIA MYSZY I KLAWIATURY	

void PrzyciskMyszyWcisniety (int button, int state, int x, int y)
{
	SzablonPrzyciskMyszyWcisniety (button, state, x, y); // wywolanie standardowej obslugi zdarzen szablonu 


	//*************************************************************
	// tu mo¿na umieœciæ kod obs³uguj¹cy wciœniêcie przycisku myszy









}

void RuchKursoraMyszy (int x, int y)
{
	SzablonRuchKursoraMyszy (x, y); // wywolanie standardowej obslugi zdarzen szablonu 

	//****************************************************
	//tu mo¿na umieœciæ kod obs³uguj¹cy ruch kursora myszy

	





}

void KlawiszKlawiaturyWcisniety (GLubyte key, int x, int y)
{
	SzablonKlawiszKlawiaturyWcisniety (key, x, y);	// wywolanie standardowej obslugi zdarzen szablonu 
	
	//*******************************************************************************
	// tu mo¿na umieœciæ kod obs³uguj¹cy wciœniêcie klawisza klawiatury, przyk³adowo:
	
	switch (key) 
	{
		case 'e':    
			glEnable(GL_FOG);
		break;
		case 'd':    
			glDisable(GL_FOG);
		break;

		

		
	
	}


}



void KlawiszSpecjalnyWcisniety (GLint key, int x, int y)
{

	//*******************************************************************************
	// tu mo¿na umieœciæ kod obs³uguj¹cy wciœniêcie specjalnego klawisza klawiatury, przyk³adowo:
	
	switch (key) 
	{
		case GLUT_KEY_LEFT:

			break;
		case GLUT_KEY_RIGHT:

			break;
		case GLUT_KEY_UP:

			break;
		case GLUT_KEY_DOWN:

			break;

	}



}


	/******************************************************/

#undef _INTERAKCJA
#endif
