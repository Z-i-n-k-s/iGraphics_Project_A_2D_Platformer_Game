#include"iostream"
#include<stdio.h>
//#include"Level1.h"
using namespace std;


struct GroundLand{

	int x;
	int y;
	int height;
	int width;
	int AW;
	int AH;

	GroundLand(){

	}

	GroundLand(int _x, int _y, int _height, int _width){

		x = _x;
		y = _y;
		height = _height;
		width = _width;

	}
	GroundLand(int _x, int _y, int _height, int _width, int _AW, int _AH){

		x = _x;
		y = _y;
		height = _height;
		width = _width;
		AW = _AW;
		AH = _AH;
	}


}
gl1(10, 60, 64, 64), gl2(400, 100, 64, 64), gl3(662, 195-30, 64, 64), gl4(850+20, 310-40, 64, 64), gl5(1023, 510, 64, 64),
player(10, 124, 64, 100),
floatGround1(650, 380, 64, 64), floatGround2(180, 340, 64, 64), floatGround3(400, 575, 64, 64),
chst(1175 , 549, 100, 125), 
coin[10];



bool level1 = false;
bool level2 = false;
bool level3 = false;



bool levelOneFinish = false;
bool opening = true;
bool musicOn = true;


bool levelTwoFinish = false;
bool movecoin = false;

int lifeCount = 0;
int life = 3;
bool over = false;
int screenWidth = 1300;
int screenHeight = 700;






bool idel = true;
bool idelLeft = false;
int charIdelLeftIndex = 0;
int aniLeft = 0;
int aniSpeed = 0;
int charIdelRightIndex = 0;
bool runRight = true;
int idelCount = 0;
int charRunRightIndex = 0;
int charRunLeftIndex = 0;
int jumpIndex = 0;
int playerMoveSpeed = 20;
int charAw = 65;
int charFw = 30;
int characterYspeed = 0;
bool isJumping = false;






int a1 = 8;
int a2 = 10;
int a3 = 11;
int a4 = 10;
int a5 = 15;
int a6 = 11;
int coinIndex = 0;
int ci = -1;

int gravity = 6;
int jumpforce = 36;












char landHill[3][30] = { "terrain\\land\\hbottom.png", "terrain\\land\\hmid.png", "terrain\\land\\htop.png" };

char landG[5][30] = { "terrain\\land\\1.png", "terrain\\land\\2.png", "terrain\\land\\3.png", "terrain\\land\\4.png", "terrain\\land\\5.png" };

char landS[3][30] = { "terrain\\land\\1.png", "terrain\\land\\2.png", "terrain\\land\\5.png" };

char landF[1][30] = { "terrain\\land\\float.png" };

char pirateRunRight[6][30] = { "player\\run_right\\1.png", "player\\run_right\\2.png", "player\\run_right\\3.png", "player\\run_right\\4.png", "player\\run_right\\5.png", "player\\run_right\\6.png" };

char pirateRunLeft[6][30] = { "player\\run_left\\1.png", "player\\run_left\\2.png", "player\\run_left\\3.png", "player\\run_left\\4.png", "player\\run_left\\5.png", "player\\run_left\\6.png" };

char pirateIdelLeft[5][30] = { "player\\idle_left\\1.png", "player\\idle_left\\2.png", "player\\idle_left\\3.png", "player\\idle_left\\4.png", "player\\idle_left\\5.png" };

char pirateIdelRight[5][30] = { "player\\idle_right\\1.png", "player\\idle_right\\2.png", "player\\idle_right\\3.png", "player\\idle_right\\4.png", "player\\idle_right\\5.png" };

char pirateJumpLeft[1][30] = { "player\\jump_left\\1.png" };

char pirateJumpRight[1][30] = { "player\\jump_right\\1.png" };

char level2end[1][20] = { "level3.png" };

char level2start[1][15] = { "level-2.png" };

char sky[1][10] = { "sky.png" };

char chest[3][30] = { "items\\chest\\0.png","items\\chest\\1.png","C.png"};

char gold[4][30] = { "items\\gold\\0.png", "items\\gold\\1.png", "items\\gold\\2.png", "items\\gold\\3.png" };

char silver[4][30] = { "items\\silver\\0.png", "items\\silver\\1.png", "items\\silver\\2.png", "items\\silver\\3.png" };

char gem[4][30] = { "items\\gem\\0.png", "items\\gem\\1.png", "items\\gem\\2.png", "items\\gem\\3.png" };

char spikes[2][30] = { "enemies\\spikes\\spikes1.png", "enemies\\spikes\\spikes.png" };


