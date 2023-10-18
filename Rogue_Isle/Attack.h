#include <stdio.h>
#include<iostream>
using namespace std;


bool attack = false;

char pirateAttackLeft[3][35] = { "player\\Attack\\left\\1.png", "player\\Attack\\left\\2.png", "player\\Attack\\left\\3.png" };

char pirateAttackRight[3][35] = { "player\\Attack\\right\\1.png", "player\\Attack\\right\\2.png", "player\\Attack\\right\\3.png" };

char pirateSlashLeft[3][35] = { "player\\Attack2\\left\\1.png", "player\\Attack2\\left\\2.png", "player\\Attack2\\left\\3.png" };

char pirateSlashRight[3][35] = { "player\\Attack2\\right\\1.png", "player\\Attack2\\right\\2.png", "player\\Attack2\\right\\3.png" };



int attackAniRight = 0;
int attackAniSpeed = 2;
int attackIncrease = 3;
int attackRightIndex = 0;

int slashLeftX, slashLeftY, slashRightY, slashRightX, slashH, slashW, slashX, slashY;

void slashValue(){

	slashLeftX = player.x - 15;
	slashLeftY = player.y + 5;

	slashRightX = player.x + 75;
	slashRightY = player.y + 5;

	slashX = player.x + 75;
	slashY = player.y + 5;

	slashW = 38;
	slashH = 37;

}

void slash(){

	if (attack){



		if (idelLeft){

			iShowImage(slashLeftX, slashLeftY, slashW, slashH, iLoadImage(pirateSlashLeft[attackRightIndex]));




			attackAniRight++;

			//cout << attackAniLeft << endl;

			if (attackAniRight >= attackAniSpeed)
			{
				attackAniRight = 0;

				attackRightIndex++;

				cout << attackRightIndex << endl;
				if (attackRightIndex >= 3){
					attackRightIndex = 0;
					attack = false;

				}
			}

		}
		else{

			iShowImage(slashRightX, slashRightY, slashW, slashH, iLoadImage(pirateSlashRight[attackRightIndex]));




			attackAniRight++;

			//cout << attackAniLeft << endl;

			if (attackAniRight >= attackAniSpeed)
			{
				attackAniRight = 0;

				attackRightIndex++;

				cout << attackRightIndex << endl;
				if (attackRightIndex >= 3){
					attackRightIndex = 0;
					attack = false;

				}
			}



		}


	}


}


void PlayerAttack(){

	if (attack){



		if (idelLeft){

			iShowImage(player.x, player.y, player.width, player.height, iLoadImage(pirateAttackLeft[attackRightIndex]));




			attackAniRight++;

			//cout << attackAniLeft << endl;

			if (attackAniRight >= attackAniSpeed)
			{
				attackAniRight = 0;

				attackRightIndex++;

				cout << attackRightIndex << endl;
				if (attackRightIndex >= 3){
					attackRightIndex = 0;
					attack = false;
					

				}
			}
		}
		else{

			iShowImage(player.x, player.y, player.width, player.height, iLoadImage(pirateAttackRight[attackRightIndex]));




			attackAniRight++;

			//cout << attackAniLeft << endl;

			if (attackAniRight >= attackAniSpeed)
			{
				attackAniRight = 0;

				attackRightIndex++;

				cout << attackRightIndex << endl;
				if (attackRightIndex >= 3){
					attackRightIndex = 0;
					attack = false;

				}
			}



		}


	}

}