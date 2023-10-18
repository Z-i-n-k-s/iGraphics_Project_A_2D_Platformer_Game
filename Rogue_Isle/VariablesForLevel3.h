#include <stdio.h>
#include<iostream>





using namespace std;



bool levelThreeFinish = false;

struct Land{

	int x;
	int y;
	int height;
	int width;
	int AW;
	int AH;

	Land(){

	}

	Land(int _x, int _y, int _height, int _width){

		x = _x;
		y = _y;
		height = _height;
		width = _width;

	}
	Land(int _x, int _y, int _height, int _width, int _AW, int _AH){

		x = _x;
		y = _y;
		height = _height;
		width = _width;
		AW = _AW;
		AH = _AH;
	}


}
gl11(10, 50, 64, 64),
gl12(852, 60, 64, 64),
gl13(852, 300, 64, 64),
gl15(980, 530, 64, 64),
gl17(452, 300, 64, 64),
gl18(152, 320, 64, 64),
gl19(152, 520, 64, 64),

//player(gl1.x, gl1.y + gl1.height, 64, 100),
/**/
floatGround7(468, 40, 64, 64),
floatGround8(1200, 90, 64, 64),
floatGround9(42, 300, 64, 64),

spike11(266, 114, 64, 64, 50, 35),
spike12(980, 124, 64, 64, 50, 35),
spike13(1044, 364, 64, 64, 50, 35),
spike14(852, 364, 64, 64, 50, 35),
spike15(646, 364, 64, 64, 50, 35),
spike6(512, 364, 64, 64, 50, 35),
spike7(788, 584, 64, 64, 50, 35),
spike8(212, 584, 64, 64, 50, 35),
chst3(1180, 570, 100, 125),
coin3[10];


int coinIndex3 = 0;







int fMove[3] = { 10, 12, 14 };




char landBG[13][30] = { "terrain\\land\\1.png", "terrain\\land\\2.png", "terrain\\land\\2.png", "terrain\\land\\3.png", "terrain\\land\\4.png", "terrain\\land\\4.png", "terrain\\land\\3.png", "terrain\\land\\4.png", "terrain\\land\\4.png", "terrain\\land\\4.png", "terrain\\land\\3.png", "terrain\\land\\2.png", "terrain\\land\\5.png" };
