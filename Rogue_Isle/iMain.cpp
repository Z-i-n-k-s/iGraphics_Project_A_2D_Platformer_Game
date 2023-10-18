#define _CRT_SECURE_NO_WARNINGS
#include "iGraphics.h"
#include<stdio.h>


#include "ScoreSave.h"
#include"iostream"
#include"VariablesForLevel1.h"
#include"VariablesForLevel2.h"
#include"VariablesForLevel3.h"
#include"Clouds.h"
#include"Level1.h"
#include"Level2.h"
#include"Menu.h"
#include"Attack.h"
#include"Enemy.h"
#include"Shell.h"
#include"Level3.h"
#include"Water.h"
#include"Health.h"
#include"PlayerCordinates.h"
#include "Music.h"


using namespace std;



//............................jump....................................//
void jumpchar(){
	if (!isJumping){

		{
			characterYspeed += jumpforce;
			isJumping = true;

		}
	}
}



//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::Idraw Here::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://



void iDraw()
{
	

	iClear();


	k = file_line_counter() + 1;

	setPlayerValues();



	startGame();


	

	playMusic();

	


	if (level1)
	{

		std::sprintf(p_strinf, "%d", game_point);

		iShowImage(0, 0, screenWidth, screenHeight, iLoadImage(background[0]));

		drawClouds();

		iShowImage(chst.x, chst.y, chst.width, chst.height, iLoadImage(chest[1]));

		
		iText(190, screenHeight - 30, "SCORE : ", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(290, screenHeight - 30, p_strinf, GLUT_BITMAP_TIMES_ROMAN_24);

				
		slashValue();

		slash();

		PlayerAttack();

		makeland1();

		drawCoin1();

		floatGround_1();

		playerMovement();

		healthDisplay();

		waterMovement();

		if (levelOneFinish){

			level1 = false;
			level2 = true;
		}
	
	
	
	}
	if (level2)
	{
		std::sprintf(p_strinf, "%d", game_point);

		iShowImage(0, 0, screenWidth, screenHeight, iLoadImage(background[0]));

		drawClouds();

		iShowImage(chst2.x, chst2.y, chst2.width, chst2.height, iLoadImage(chest[0]));


		iText(190, screenHeight - 30, "SCORE : ", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(290, screenHeight - 30, p_strinf, GLUT_BITMAP_TIMES_ROMAN_24);

			
		slashValue();

		slash();

		PlayerAttack();

		makeland2();

		drawCoin2();

		playerMovement();

		healthDisplay();

		waterMovement();

		if (levelTwoFinish){
			level2 = false;
			level3 = true;
			
		}
	}
	
	if (level3){



		std::sprintf(p_strinf, "%d", game_point);

		iShowImage(0, 0, screenWidth, screenHeight, iLoadImage(background[0]));

		drawClouds();

		iShowImage(chst3.x, chst3.y, chst3.width, chst3.height, iLoadImage(chest[1]));



		iText(190, screenHeight - 30, "SCORE : ", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(290, screenHeight - 30, p_strinf, GLUT_BITMAP_TIMES_ROMAN_24);

		

		pearl1Actions();	

		shell1Actions();

		pearl2Actions();

		shell2Actions();

		slashValue();

		slash();

		

		drwaSpike();

		playerMovement();

		

		PlayerAttack();

		makeland3();

		drawIdleEnemy();

		waterMovement();

		healthDisplay();

		drawCoin3();

		if (levelThreeFinish){
			level3 = false;
			gameOver();
		}

	}


	if (GMover){
		iShowImage(0, 0, screenWidth, screenHeight, iLoadImage(Gover[0]));
		iSetColor(r, g, b);
		iText(530, 340, "Press F5 To Go To Menu", GLUT_BITMAP_TIMES_ROMAN_24);
	}

	
}


void textchange(){
	r = 58;
	g = 209;
	b = 245;
}
void textchange2(){
	r = 0;
	g = 0;
	b = 0;
}
/*function iMouseMove() is called when the user presses and drags the mouse.
(mx, my) is the position where the mouse pointer is.
*/


void iMouseMove(int mx, int my)
{
	
}
//*******************************************************************ipassiveMouse***********************************************************************//
void iPassiveMouseMove(int mx, int my)
{
	if (my <= playImage.y + playImage.height && my >= playImage.y &&
		mx >= playImage.x  && mx <= playImage.x + playImage.width){
		playCol = true;

	}
	else{
		playCol = false;
	}
	if (my <= scoreImage.y + scoreImage.height && my >= scoreImage.y &&
		mx >= scoreImage.x  && mx <= scoreImage.x + scoreImage.width){
		scoreCol = true;

	}
	else{
		scoreCol = false;
	}
	if (my <= creditImage.y + creditImage.height && my >= creditImage.y &&
		mx >= creditImage.x  && mx <= creditImage.x + creditImage.width){
		creditCol = true;

	}
	else{
		creditCol = false;
	}
	if (my <= helpImage.y + helpImage.height && my >= helpImage.y &&
		mx >= helpImage.x  && mx <= helpImage.x + helpImage.width){
		helpCol = true;

	}
	else{
		helpCol = false;
	}
	if (my <= exitImage.y + exitImage.height && my >= exitImage.y &&
		mx >= exitImage.x  && mx <= exitImage.x + exitImage.width){
		exitCol = true;

	}
	else{
		exitCol = false;
	}
	

}

void iMouse(int button, int state, int mx, int my)
{
	if (menu){

		if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
		{
			
			if (creditCol){
				gamestate = 4;
			}
			if (playCol){
				gamestate = 1;
			}
			if (exitCol){
				gamestate = 5;

			}
			if (helpCol){
				gamestate = 3;

			}
			if (scoreCol){
				gamestate = 2;

			}





				//................................. back button ..........................................................//
				if (mx >= 10 && mx < 10 + 205 && my >= 600 && my <= 600 + 95){
					gamestate = -1;

				

			}

			
			
		}

		
		
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN){

		attack = true;
		

	}

	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
		{
			player.x = mx;
			player.y = my;
		}

}
/*
function iKeyboard() is called whenever the user hits a key in keyboard.
key- holds the ASCII value of the key pressed.
*/


void iKeyboard(unsigned char key)
{
	if (key == 'x' || key == 'X')
	{ 
		
		if (menu){
			space_bar = true;
			opening = false;
		}
		
	
	}

	if (field_active){
		inputName(key);
	}

	if (key == ' ')
	{
		jumpchar();
	}

	if (key == 'a' || key == 'A')
	{
		
	}


	if (key == 'd' || key == 'D')
	{
		
	}
	
	
}

/*
function iSpecialKeyboard() is called whenver user hits special keys like-
function keys, home, end, pg up, pg down, arraows etc. you have to use
appropriate constants to detect them. A list is:
GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{
	if (GMover && key == GLUT_KEY_F5){

		game_point = 0;
		fflush(stdin);
	//	cout << flag << endl;
		enter = false;
		
		while (name_index >= 0){
			high_score.name[--name_index] = NULL;
		}
		 set1 = true;
		 set2 = true;
		 set3 = true;

		 setValue2 = true;

		 name = true;

		GMover = false;

		life = 3;

		menuMusic = true;
		level1Music = true;
	    level2Music = true;
	    level3Music = true;

		menu = true;

		gamestate = -1;

		space_bar = false;
		opening = true;
		levelOneFinish = false;

		levelTwoFinish = false;

		level1 = false;

		level2 = false;

		level3 = false;

		setHealthValue();

		setCoinValue = true;
		setCoinValues1();

		setValue2 = true;
		setValues2();

		setValue3 = true;
		setValues3();

	}
	
	if (key == GLUT_KEY_RIGHT)
	{
		
		{

			player.x += playerMoveSpeed;
			charRunRightIndex++;
			if (charRunRightIndex >= 6)
			{
				charRunRightIndex = 0;

			}
			else
			{

			}
			idel = false;
			runRight = true;
			idelLeft = false;
		}
	}
	if (key == GLUT_KEY_LEFT)
	{
		{
			player.x -= playerMoveSpeed;
			charRunLeftIndex++;
			if (charRunLeftIndex >= 6)
			{
				charRunLeftIndex = 0;
			}
			else
			{

			}
			idel = false;
			runRight = false;
			idelLeft = true;
		}
	}
	if (key == GLUT_KEY_F4)
	{
		if (musicOn){
			musicOn = false;
			PlaySound(0, 0, 0);
		}
		else{
			musicOn = true;
			 menuMusic = true;
			 level1Music = true;
			 level2Music = true;
			 level3Music = true;
		}
	}
	if (key == GLUT_KEY_F2)
	{
			enter = true;
			name = false;
		
	}
	
}


int main()

{

	iSetTimer(1000, textchange);

	iSetTimer(200, textchange2);

	iSetTimer(1, playerCollisions);

	iSetTimer(1, floatChange);

	iSetTimer(1, coinGoUp);

	iSetTimer(1, cloudMove);

	setPearl1Value();

	setPearl2Value();

	setCloudValues();
	
	setCoinValues1();

	setValues2();

	setValues3();

	setHealthValue();
	
	
	///srand((unsigned)time(NULL));
	iInitialize(screenWidth, screenHeight, "ROGUE ISLE");
	///updated see the documentations
	iStart();
	return 0;
}