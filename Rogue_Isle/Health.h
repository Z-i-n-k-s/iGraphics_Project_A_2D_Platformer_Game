#include <stdio.h>
#include<iostream>
using namespace std;



struct Heart{

	int x;
	int y;
	int height;
	int width;

}heart[3];

char health[1][25] = { "Health\\heart.png" };

char Gover[2][25] = { "Health\\Harambe.png", "Health\\wasted.png" };

bool GMover = false;

void setHealthValue(){


	//::::::::::::::::::::________Health_________::::::::::::::::::::::::::::://
	int sum = 15;
	for (int i = 0; i < 3; i++){
		heart[i].width = 36;
		heart[i].height = 36;
		heart[i].y = screenHeight - 40;
		heart[i].x = sum;
		sum = heart[i].x + heart[i].width + 15;
	}


}

void gameOver(){


	menu = false;
	level1 = false;
	level2 = false;
	level3 = false;
	GMover = true;
	high_score.score = game_point;
	strcpy(details[k + 1].name, high_score.name);
	details[k + 1].point = high_score.score;
	user_name_appender(details);

}

void healthDisplay()
{

	if (life == 3)
	{
		iShowImage(heart[0].x, heart[0].y, heart[0].width, heart[0].height, iLoadImage(health[0]));
		iShowImage(heart[1].x, heart[1].y, heart[1].width, heart[1].height, iLoadImage(health[0]));
		iShowImage(heart[2].x, heart[2].y, heart[2].width, heart[2].height, iLoadImage(health[0]));
	}
	if (life == 2)
	{
		iShowImage(heart[0].x, heart[0].y, heart[0].width, heart[0].height, iLoadImage(health[0]));
		iShowImage(heart[1].x, heart[1].y, heart[1].width, heart[1].height, iLoadImage(health[0]));
	}
	if (life == 1)
	{
		iShowImage(heart[0].x, heart[0].y, heart[0].width, heart[0].height, iLoadImage(health[0]));
	}
	if (life <= 0)
	{
		gameOver();
	}
}



