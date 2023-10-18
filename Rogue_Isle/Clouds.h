#include <stdio.h>
#include<iostream>
using namespace std;




struct Cloud
{
	int cloudX;
	int cloudY;
	int cloudW;
	int cloudH;

	Cloud(){
	
	}

	Cloud(int _x, int _y, int _width, int _height){

		cloudX = _x;
		cloudY = _y;
		cloudH = _height;
		cloudW = _width;

	}

}cloud[9];



char background[2][40] = { "background\\BG.png", "background\\2.png" };
char clouds[3][20] = { "clouds\\1.png", "clouds\\2.png", "clouds\\3.png" };

int cloudSpeed[3] = { 2, 3, 5 };

void setCloudValues(){

	cloud[1].cloudX = 0;
	cloud[1].cloudY = 585;
	cloud[1].cloudW = 348;
	cloud[1].cloudH = 78;

	cloud[2].cloudX = 200;
	cloud[2].cloudY = 150;
	cloud[2].cloudW = 266;
	cloud[2].cloudH = 70;


	cloud[3].cloudX = 400;
	cloud[3].cloudY = 280;
	cloud[3].cloudW = 280;
	cloud[3].cloudH = 78;

	cloud[4].cloudX = 800;
	cloud[4].cloudY = 215;
	cloud[4].cloudW = 288;
	cloud[4].cloudH = 68;


	cloud[5].cloudX = 1200;
	cloud[5].cloudY = 375;
	cloud[5].cloudW = 298;
	cloud[5].cloudH = 68;


	cloud[6].cloudX = 1000;
	cloud[6].cloudY = 480;
	cloud[6].cloudW = 388;
	cloud[6].cloudH = 78;


	cloud[7].cloudX = 1400;
	cloud[7].cloudY = 610;
	cloud[7].cloudW = 218;
	cloud[7].cloudH = 48;


	cloud[8].cloudX = 1600;
	cloud[8].cloudY = 325;
	cloud[8].cloudW = 198;
	cloud[8].cloudH = 68;

}


void drawClouds(){

	iShowImage(cloud[1].cloudX, cloud[1].cloudY, cloud[1].cloudW, cloud[1].cloudH, iLoadImage(clouds[2]));

//	cloud[1].cloudX -= cloudSpeed2;
	


	
		iShowImage(cloud[2].cloudX, cloud[2].cloudY, cloud[2].cloudW, cloud[2].cloudH, iLoadImage(clouds[1]));

	//	cloud[2].cloudX -= cloudSpeed1;
	



		iShowImage(cloud[3].cloudX, cloud[3].cloudY, cloud[3].cloudW, cloud[3].cloudH, iLoadImage(clouds[2]));

	//	cloud[3].cloudX -= cloudSpeed3;
	



		iShowImage(cloud[4].cloudX, cloud[4].cloudY, cloud[4].cloudW, cloud[4].cloudH, iLoadImage(clouds[2]));

		//cloud[4].cloudX -= cloudSpeed2;
	



		iShowImage(cloud[5].cloudX, cloud[5].cloudY, cloud[5].cloudW, cloud[5].cloudH, iLoadImage(clouds[1]));

	//	cloud[5].cloudX -= cloudSpeed2;
	


		iShowImage(cloud[6].cloudX, cloud[6].cloudY, cloud[6].cloudW, cloud[6].cloudH, iLoadImage(clouds[2]));

	//	cloud[6].cloudX -= cloudSpeed1;
	



		iShowImage(cloud[7].cloudX, cloud[7].cloudY, cloud[7].cloudW, cloud[7].cloudH, iLoadImage(clouds[0]));

	//	cloud[7].cloudX -= cloudSpeed3;
	



		iShowImage(cloud[8].cloudX, cloud[8].cloudY, cloud[8].cloudW, cloud[8].cloudH, iLoadImage(clouds[1]));

	//	cloud[8].cloudX -= cloudSpeed2;
		



}

int j = 0;

void  cloudMove(){


	//for (int i = 1; i < 9; i++)
	{
		cloud[1].cloudX -= cloudSpeed[1];
		if (cloud[1].cloudX < -400)
		{
			cloud[1].cloudX = 1330;
		}



		cloud[2].cloudX -= cloudSpeed[j];
		if (cloud[2].cloudX < -400)
		{
			cloud[2].cloudX = 1330;

		}

		cloud[3].cloudX -= cloudSpeed[2];
		if (cloud[3].cloudX < -400)
		{
			cloud[3].cloudX = 1330;
		}


		cloud[4].cloudX -= cloudSpeed[j];
		if (cloud[4].cloudX < -400)
		{
			cloud[4].cloudX = 1330;
		}



		cloud[5].cloudX -= cloudSpeed[2];
		if (cloud[5].cloudX < -400)
		{
			cloud[5].cloudX = 1330;
		}



		cloud[6].cloudX -= cloudSpeed[j];
		if (cloud[7].cloudX < -400)
		{
			cloud[7].cloudX = 1330;
		}


		cloud[8].cloudX -= cloudSpeed[2];
		if (cloud[8].cloudX < -400)
		{
			cloud[8].cloudX = 1330;
		}

	}

	j++;
	if (j >= 3)
		j = 0;
}
