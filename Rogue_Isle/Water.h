#include <stdio.h>
#include<iostream>
using namespace std;


int waterX = 0;
int waterY = 0;
int waterW = 64;
int waterH = 64;
int waterI = 0;
int waterAni = 0;
int waterAniSpeed = 5;

char water[4][50] = { "terrain\\water\\animation\\1.png", "terrain\\water\\animation\\2.png", "terrain\\water\\animation\\3.png", "terrain\\water\\4.png" };





void waterMovement()
{

	//for (int i = 0; i < 21; i++)
	{
		iShowImage(waterX + waterW*0, waterY, waterW, waterH, iLoadImage(water[waterI]));

		iShowImage(waterX + waterW*1, waterY, waterW, waterH, iLoadImage(water[waterI]));
		iShowImage(waterX + waterW*2, waterY, waterW, waterH, iLoadImage(water[waterI]));

		iShowImage(waterX + waterW*3, waterY, waterW, waterH, iLoadImage(water[waterI]));
		iShowImage(waterX + waterW*4, waterY, waterW, waterH, iLoadImage(water[waterI]));
		iShowImage(waterX + waterW*5, waterY, waterW, waterH, iLoadImage(water[waterI]));

		iShowImage(waterX + waterW*6, waterY, waterW, waterH, iLoadImage(water[waterI]));
		iShowImage(waterX + waterW*7, waterY, waterW, waterH, iLoadImage(water[waterI]));
		iShowImage(waterX + waterW*8, waterY, waterW, waterH, iLoadImage(water[waterI]));
		iShowImage(waterX + waterW*9, waterY, waterW, waterH, iLoadImage(water[waterI]));
		iShowImage(waterX + waterW*10, waterY, waterW, waterH, iLoadImage(water[waterI]));

		iShowImage(waterX + waterW*11, waterY, waterW, waterH, iLoadImage(water[waterI]));
		iShowImage(waterX + waterW*12, waterY, waterW, waterH, iLoadImage(water[waterI]));
		iShowImage(waterX + waterW*13, waterY, waterW, waterH, iLoadImage(water[waterI]));
		iShowImage(waterX + waterW*14, waterY, waterW, waterH, iLoadImage(water[waterI]));

		iShowImage(waterX + waterW*15, waterY, waterW, waterH, iLoadImage(water[waterI]));
		iShowImage(waterX + waterW*16, waterY, waterW, waterH, iLoadImage(water[waterI]));
		iShowImage(waterX + waterW*17, waterY, waterW, waterH, iLoadImage(water[waterI]));
		iShowImage(waterX + waterW*18, waterY, waterW, waterH, iLoadImage(water[waterI]));
		iShowImage(waterX + waterW*19, waterY, waterW, waterH, iLoadImage(water[waterI]));
		iShowImage(waterX + waterW*20, waterY, waterW, waterH, iLoadImage(water[waterI]));
		iShowImage(waterX + waterW*21, waterY, waterW, waterH, iLoadImage(water[waterI]));
	}
	waterAni++;
	if (waterAni>waterAniSpeed)
	{
		waterAni = 0;
		waterI++;
		if (waterI >= 3)
		{
			waterI = 0;

		}
	}
}