#include <stdio.h>
#include<iostream>
using namespace std;



char shellLeftIdle[1][35] = { "enemies\\shell_left\\idle\\1.png" };
char shellRightIdle[1][35] = { "enemies\\shell_right\\idle\\1.png" };

char shellLeftAttack[5][40] = {  "enemies\\shell_left\\attack\\1.png", "enemies\\shell_left\\attack\\2.png", "enemies\\shell_left\\attack\\3.png", "enemies\\shell_left\\attack\\4.png", "enemies\\shell_left\\attack\\5.png" };
char shellRightAttack[5][40] = {  "enemies\\shell_right\\attack\\1.png", "enemies\\shell_right\\attack\\2.png", "enemies\\shell_right\\attack\\3.png", "enemies\\shell_right\\attack\\4.png", "enemies\\shell_right\\attack\\5.png" };
char pearl[1][40] = { "enemies\\pearl\\pearl.png" };



bool attack1 = true;
bool attack2 = true;
bool movePerl1 = false;
bool movePerl2 = false;

int sLeft = 0;
int sLeftSpeed = 4;
int sLeftIndex = 0;

int sRight = 0;
int sRightSpeed = 3;
int sRightIndex = 0;

bool deadShell1 = false;
bool deadShell2 = false;

bool deadPearl = false;
bool deadPearl1 = false;


struct pearl{
	int pearlX;
	int pearlY;
	int pearlW;
	int pearlH;
	int AW, AH;
}pearl1, pearl2;

struct Shell{
	int shellX;
	int shellY;
	int shellW;
	int shellH;
}shell1, shell2;

//________________________________DEADLY SHELL________________________________________//

void setPearl1Value()
{
	pearl1.pearlX = 1100;
	pearl1.pearlY = 590;
	pearl1.pearlW = 32;
	pearl1.pearlH = 32;
	pearl1.AW = 16;
	pearl1.AH = 16;

}

void pearl1Actions()
{
	if (!deadShell1)
	{
		if (!deadPearl){

			if (movePerl1)
			{
				iShowImage(pearl1.pearlX, pearl1.pearlY, pearl1.pearlW, pearl1.pearlH, iLoadImage(pearl[0]));
				pearl1.pearlX -= 20;
			}

			if (pearl1.pearlX < (shell1.shellX) - 40){
				attack1 = false;
			}

			if (pearl1.pearlX < -40)
			{
				pearl1.pearlX = 1100;
				attack1 = true;
				movePerl1 = false;
			}
		}
		else{
			deadPearl = false;
		}
	}
}




void setPearl2Value()
{
	pearl2.pearlX = 150;
	pearl2.pearlY = 380;
	pearl2.pearlW = 32;
	pearl2.pearlH = 32;
}

void pearl2Actions()
{
	if (!deadShell2){

		attack2 = true;

		if (!deadPearl1){



		if (movePerl2){
			iShowImage(pearl2.pearlX, pearl2.pearlY, pearl2.pearlW, pearl2.pearlH, iLoadImage(pearl[0]));
			pearl2.pearlX += 20;
		}

		if (pearl2.pearlX > shell2.shellX + shell2.shellW + 40){
			attack2 = false;
		}
		if (pearl2.pearlX > screenWidth + 20)
		{
			pearl2.pearlX = 150;
			attack2 = true;
			movePerl2 = false;
		}
	}
		else{
			deadPearl1 = false;
		}
	}
}


void shell1Actions()
{
	if (!deadShell1)
	{

		shell1.shellX = 1100;
		shell1.shellY = 600 - 10;
		shell1.shellW = 76;
		shell1.shellH = 46;




		if (attack1)
		{

			iShowImage(shell1.shellX, shell1.shellY, shell1.shellW, shell1.shellH, iLoadImage(shellLeftAttack[sLeftIndex]));

			sLeft++;

			if (sLeft >= sLeftSpeed)
			{
				sLeft = 0;

				sLeftIndex++;
				if (sLeftIndex == 2)
					movePerl1 = true;

				if (sLeftIndex >= 5)
				{
					sLeftIndex = 0;
				}
			}
		}
		else{
			iShowImage(shell1.shellX, shell1.shellY, shell1.shellW, shell1.shellH, iLoadImage(shellLeftIdle[0]));
		}
	}

}

void shell2Actions()
{
	if (!deadShell2){


		shell2.shellX = 150;
		shell2.shellY = 380;
		shell2.shellW = 76;
		shell2.shellH = 46;



		if (attack2)
		{
			iShowImage(shell2.shellX, shell2.shellY, shell2.shellW, shell2.shellH, iLoadImage(shellRightAttack[sRightIndex]));

			sRight++;



			if (sRight >= sRightSpeed)
			{
				sRight = 0;

				sRightIndex++;
				if (sRightIndex == 2)
					movePerl2 = true;

				if (sRightIndex >= 5)
				{
					sRightIndex = 0;
				}
			}
		}
		else{
			iShowImage(shell2.shellX, shell2.shellY, shell2.shellW, shell2.shellH, iLoadImage(shellRightIdle[0]));
		}
	}
}
