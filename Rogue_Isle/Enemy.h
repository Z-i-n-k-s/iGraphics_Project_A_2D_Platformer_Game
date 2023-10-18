#include <stdio.h>
#include<iostream>
using namespace std;



struct Enemy{

	int x;
	int y;
	int height;
	int width;
	int AW;
	int AH;

	Enemy(){

	}

	Enemy(int _x, int _y, int _height, int _width){

		x = _x;
		y = _y;
		height = _height;
		width = _width;

	}
	Enemy(int _x, int _y, int _height, int _width, int _AW, int _AH){

		x = _x;
		y = _y;
		height = _height;
		width = _width;
		AW = _AW;
		AH = _AH;
	}


}enemy(screenWidth - 64 * 7, 60+64, 60,68,51,46),
enemy1(800, screenHeight-117, 60, 68, 51, 46);



char idleEnemy[8][30] = { "enemies\\tooth\\idle\\0.png", "enemies\\tooth\\idle\\1.png", "enemies\\tooth\\idle\\2.png", "enemies\\tooth\\idle\\3.png", "enemies\\tooth\\idle\\4.png", "enemies\\tooth\\idle\\5.png", "enemies\\tooth\\idle\\6.png", "enemies\\tooth\\idle\\7.png" };

char runLeftEnemy[6][30] = {  "enemies\\tooth\\run_left\\1.png", "enemies\\tooth\\run_left\\2.png", "enemies\\tooth\\run_left\\3.png", "enemies\\tooth\\run_left\\4.png", "enemies\\tooth\\run_left\\5.png", "enemies\\tooth\\run_left\\6.png" };

char runRightEnemy[6][30] = {  "enemies\\tooth\\run_right\\1.png", "enemies\\tooth\\run_right\\2.png", "enemies\\tooth\\run_right\\3.png", "enemies\\tooth\\run_right\\4.png", "enemies\\tooth\\run_right\\5.png", "enemies\\tooth\\run_right\\6.png"};


int idleAni = 0;
int idleAniSpeed = 3;
int idleEnemyIndex = 0;
int enemyMoveSpeed = 6;

bool idleE = false;
int idleCount = 0;
int idleTime = 70;

bool run = true;

bool left = false;

int runEnemyIndex = 0;
int runAni = 0;
int runAniSpeed = 1;




int idle2Ani = 0;
int idleAni2Speed2 = 2;
int idleEnemy2Index = 0;
int enemyMoveSpeed2 = 6;

bool idl2e = false;
int idle2Count2 = 0;
int idle2Time2 = 70;

bool run2 = true;

bool left2 = false;

int runEnemyIndex2 = 0;
int runAni2 = 0;
int runAniSpeed2 = 1;

bool deadEnemy1 = false;
bool deadEnemy2 = false;

void drawIdleEnemy(){

	
	if (!deadEnemy1){
		//**************************________Enemy 1________*******************************//

		if (idleE){
			iShowImage(enemy.x, enemy.y, enemy.width, enemy.height, iLoadImage(idleEnemy[idleEnemyIndex]));
			idleAni++;
			if (idleAni >= idleAniSpeed){
				idleAni = 0;
				idleEnemyIndex++;
				if (idleEnemyIndex >= 7)
					idleEnemyIndex = 0;

			}

		}

		{
			if (run)
			{

				enemy.x += enemyMoveSpeed;

				if (enemyMoveSpeed < 0){
					iShowImage(enemy.x, enemy.y, 51, 46, iLoadImage(runLeftEnemy[runEnemyIndex]));
					runAni++;
					if (runAni >= runAniSpeed){
						runAni = 0;
						runEnemyIndex++;
						if (runEnemyIndex >= 6)
							runEnemyIndex = 0;

					}
				}
				else{
					iShowImage(enemy.x, enemy.y, 51, 46, iLoadImage(runRightEnemy[runEnemyIndex]));
					runAni++;
					if (runAni >= runAniSpeed){
						runAni = 0;
						runEnemyIndex++;
						if (runEnemyIndex >= 6)
							runEnemyIndex = 0;

					}

				}


			}

			if (enemy.x > 1110 || enemy.x < screenWidth - 64 * 7 - 10)
			{
				idleE = true;
				run = false;
				idleCount++;
				if (idleCount>idleTime)
				{
					idleE = false;
					idleCount = 0;
					run = true;
					enemyMoveSpeed = enemyMoveSpeed*(-1);
				}


			}
		}

	}

		//**************************________Enemy 2________*******************************//


	if (!deadEnemy2)
	{


		if (idl2e){
			iShowImage(enemy1.x, enemy1.y, enemy1.width, enemy1.height, iLoadImage(idleEnemy[idleEnemy2Index]));
			idle2Ani++;
			if (idle2Ani >= idleAni2Speed2){
				idle2Ani = 0;
				idleEnemy2Index++;
				if (idleEnemy2Index >= 7)
					idleEnemy2Index = 0;

			}

		}

		{
			if (run2)
			{

				enemy1.x += enemyMoveSpeed2;

				if (enemyMoveSpeed2 < 0){
					iShowImage(enemy1.x, enemy1.y, 51, 46, iLoadImage(runLeftEnemy[runEnemyIndex2]));
					runAni2++;
					if (runAni2 >= runAniSpeed2){
						runAni2 = 0;
						runEnemyIndex2++;
						if (runEnemyIndex2 >= 6)
							runEnemyIndex2 = 0;

					}
				}
				else{
					iShowImage(enemy1.x, enemy1.y, 51, 46, iLoadImage(runRightEnemy[runEnemyIndex2]));
					runAni2++;
					if (runAni2 >= runAniSpeed2){
						runAni2 = 0;
						runEnemyIndex2++;
						if (runEnemyIndex2 >= 6)
							runEnemyIndex2 = 0;

					}

				}


			}

			if (enemy1.x > 900 || enemy1.x < 250)
			{
				idl2e = true;
				run2 = false;
				idle2Count2++;
				if (idle2Count2>idle2Time2)
				{
					idl2e = false;
					idle2Count2 = 0;
					run2 = true;
					enemyMoveSpeed2 = enemyMoveSpeed2*(-1);
				}


			}
		}

	}
}