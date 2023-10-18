#include <stdio.h>
#include<iostream>
using namespace std;

bool set1 = true;
bool set2 = true;
bool set3 = true;



void setPlayerValues(){


	if (level1){
		if (set1){
			player.x = gl1.x;
			player.y = gl1.y + gl1.height;
			set1 = false;
		}
	}

	if (level3)
	{

		if (set3){
			player.x = gl11.x;
			player.y = gl11.y + gl11.height;
			set3 = false;
		}


	}


}


void playerMovement(){


		if (!attack){

			//::::::::::::::::::::________Jump Here_________::::::::::::::::::::::::::::://

			if (isJumping)
			{

				if (idelLeft)
				{
					iShowImage(player.x, player.y, player.width, player.height, iLoadImage(pirateJumpLeft[jumpIndex]));
				}
				else
				{
					iShowImage(player.x, player.y, player.width, player.height, iLoadImage(pirateJumpRight[jumpIndex]));

				}

			}


			//::::::::::::::::::::________Idle Here_________::::::::::::::::::::::::::::://


			else
			{

				if (idel)
				{
					if (idelLeft){

						iShowImage(player.x, player.y, player.width, player.height, iLoadImage(pirateIdelLeft[charIdelLeftIndex]));
						aniLeft++;
						if (aniLeft >= aniSpeed)
						{
							aniLeft = 0;

							charIdelLeftIndex++;

							if (charIdelLeftIndex >= 5){
								charIdelLeftIndex = 0;

							}
						}

					}
					else{
						iShowImage(player.x, player.y, player.width, player.height, iLoadImage(pirateIdelRight[charIdelRightIndex]));
						charIdelRightIndex++;

						if (charIdelRightIndex >= 5){
							charIdelRightIndex = 0;

						}
					}

				}


				else{

					if (runRight){

						iShowImage(player.x, player.y, player.width, player.height, iLoadImage(pirateRunRight[charRunRightIndex]));
					}
					else{

						iShowImage(player.x, player.y, player.width, player.height, iLoadImage(pirateRunLeft[charRunLeftIndex]));
					}

					idelCount++;
					if (idelCount >= 10){
						idelCount = 0;
						charRunRightIndex = 0;
						charRunLeftIndex = 0;
						idel = true;
					}
				}
			}


		}


	}


void playerCollisions(){

	if (level1)
	{
		movechar1();
	}
	else if (level2)
	{
		movechar2();
	}
	else if (level3)
	{
		movechar3();
	}

}


void floatChange(){

	if (level1)
	{
		floatGroundChange1();
	}
	else if (level2)
	{
		floatGroundChange2();
	}
	else if (level3)
	{
		floatGroundChange3();
	}

}


void coinGoUp(){
	if (movecoin && level1)
	{
		coin[ci].y += 220;
		if (coin[ci].y > 1300)
			movecoin = false;
	}
	if (movecoin && level2)
	{
		coin2[ci].y += 220;
		if (coin2[ci].y > 1300)
			movecoin = false;
	}
	if (movecoin && level3)
	{
		coin3[ci].y += 220;
		if (coin3[ci].y > 1300)
			movecoin = false;
	}
}