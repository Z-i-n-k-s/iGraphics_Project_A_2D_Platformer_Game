#include<iostream>
#include<stdio.h>
//#include "VariablesForLevel1.h"


bool setCoinValue = true;

void setCoinValues1(){ 
	//___________ health is also here __________
	if (setCoinValue){
		for (int i = 0; i < 10; i++){
			coin[i].AH = 16;
			coin[i].AW = 16;
			coin[i].height = 32;
			coin[i].width = 32;
		}

		//::::::::::::::::::::________coin in ground 1_________::::::::::::::::::::::::::::://
		int sum = 0;
		int p = 150;
		for (int i = 0; i < 3; i++){

			coin[i].x = p + sum;
			coin[i].y = gl1.y + gl1.height + 20;
			sum = coin[i].x + 70;
			p = 0;

		}
		//::::::::::::::::::::________coin in ground 2_________::::::::::::::::::::::::::::://
		p = gl1.x + 70;
		for (int i = 3; i < 5; i++){

			coin[i].x = p + sum;
			coin[i].y = gl2.y + gl2.height + 20;
			sum = coin[i].x + 90;
			p = 0;

		}
		//::::::::::::::::::::________coin in ground 3_________::::::::::::::::::::::::::::://
		p = gl1.x + 70;
		for (int i = 5; i < 7; i++){

			coin[i].x = p + sum;
			coin[i].y = gl3.y + gl3.height + 20;
			sum = coin[i].x + 90;
			p = 0;

		}
		//::::::::::::::::::::________coin in ground 4_________::::::::::::::::::::::::::::://
		p = gl1.x;
		for (int i = 7; i < 9; i++){

			coin[i].x = p + sum;
			coin[i].y = gl4.y + gl4.height + 20;
			sum = coin[i].x + 90;
			p = 0;

		}
		//::::::::::::::::::::________coin in ground float_________::::::::::::::::::::::::::::://
		coin[9].x = 200;
		coin[9].y = 540;

		setCoinValue = false;
	}
}



//..................draw coin ....................//

void drawCoin1(){

	
	{
		iShowImage(coin[0].x, coin[0].y, coin[0].width, coin[0].height, iLoadImage(silver[coinIndex]));
		iShowImage(coin[1].x, coin[1].y, coin[1].width, coin[1].height, iLoadImage(silver[coinIndex]));
		iShowImage(coin[2].x, coin[2].y, coin[2].width, coin[2].height, iLoadImage(silver[coinIndex]));
	}
	
	{
		iShowImage(coin[3].x, coin[3].y, coin[3].width, coin[3].height, iLoadImage(silver[coinIndex]));
		iShowImage(coin[4].x, coin[4].y, coin[4].width, coin[4].height, iLoadImage(silver[coinIndex]));

	}
	
	{
		iShowImage(coin[5].x, coin[5].y, coin[5].width, coin[5].height, iLoadImage(silver[coinIndex]));
		iShowImage(coin[6].x, coin[6].y, coin[6].width, coin[6].height, iLoadImage(silver[coinIndex]));
	}
	
	{
		iShowImage(coin[7].x, coin[7].y, coin[7].width, coin[7].height, iLoadImage(gold[coinIndex]));
		iShowImage(coin[8].x, coin[8].y, coin[8].width, coin[8].height, iLoadImage(gold[coinIndex]));
	}
	iShowImage(coin[9].x, coin[9].y, coin[9].width, coin[9].height, iLoadImage(gem[coinIndex]));

	coinIndex++;
	if (coinIndex >= 4)
		coinIndex = 0;

}






void movechar1(){

	characterYspeed -= gravity;
	player.y += characterYspeed;


	//..................platform 1 ....................//


	if (player.y <= gl1.y + gl1.height && player.y + player.height >= gl1.y &&
		player.x + charAw >= gl1.x && player.x + charFw <= gl1.x + gl1.width * 5){


		if (player.y + 80 >= gl1.y + gl1.height && player.x + charAw >= gl1.x && player.x <= gl1.x + gl1.width * 5)
		{

			characterYspeed = 0;
			isJumping = false;
			player.y = gl1.y + gl1.height + 5;
		}



		if ((gl1.y < player.height - 1 + player.y) && player.x + charAw >= gl1.x && player.x <= gl1.x + gl1.width * 5 )
		{
			characterYspeed = gravity;
			player.y -= 5;
		}
	}

	//..................platform2 ....................//

	if (player.y <= gl2.y + gl2.height && player.y + player.height >= gl2.y &&
		player.x + charAw >= gl2.x && player.x + charFw <= gl2.x + gl2.width * 3){


		if (player.y + 80 >= gl2.y + gl2.height && player.x + charAw >= gl2.x && player.x <= gl2.x + gl2.width * 3)
		{

			characterYspeed = 0;
			isJumping = false;
			player.y = gl2.y + gl2.height + 5;

		}

		if ((gl2.y < player.height - 10 + player.y) && player.x + charAw >= gl2.x && player.x <= gl2.x + gl2.width * 3)
		{
			characterYspeed = gravity;
			player.y -= 5;
		}
	}


	//..................platform3 ....................//

	if (player.y <= gl3.y + gl3.height && player.y + player.height >= gl3.y &&
		player.x + charAw >= gl3.x && player.x + charFw <= gl3.x + gl3.width * 3){


		if (player.y + 80 >= gl3.y + gl3.height && player.x + charAw >= gl3.x && player.x <= gl3.x + gl3.width * 3)
		{

			characterYspeed = 0;
			isJumping = false;
			player.y = gl3.y + gl3.height + 5;

		}

		if ((gl3.y < player.height - 10 + player.y) && player.x + charAw >= gl3.x && player.x <= gl3.x + gl3.width * 3)
		{
			characterYspeed = gravity;
			player.y -= 5;
		}
	}

	//..................platform4 ....................//


	if (player.y <= gl4.y + gl4.height && player.y + player.height >= gl4.y &&
		player.x + charAw >= gl4.x && player.x + charFw <= gl4.x + gl4.width * 5){


		if (player.y + 80 >= gl4.y + gl4.height && player.x + charAw >= gl4.x && player.x <= gl4.x + gl4.width * 5)
		{

			characterYspeed = 0;
			isJumping = false;
			player.y = gl4.y + gl4.height + 5;
		}



		if ((gl4.y < player.height - 10 + player.y) && player.x + charAw >= gl4.x && player.x <= gl4.x + gl4.width * 5)
		{
			characterYspeed = gravity;
			player.y -= 5;
		}
	}


	//..................platform5 ....................//


	if (player.y <= gl5.y + gl5.height && player.y + player.height >= gl5.y &&
		player.x + charAw >= gl5.x + 70 && player.x + charFw <= gl5.x + gl5.width * 5){


		if (player.y + 80 >= gl5.y + gl5.height && player.x + charAw >= gl5.x + 70 && player.x <= gl5.x + gl5.width * 5)
		{

			characterYspeed = 0;
			isJumping = false;
			player.y = gl5.y + gl5.height + 5;
		}



		if ((gl5.y < player.height - 10 + player.y) && player.x + charAw >= gl5.x + 70 && player.x <= gl5.x + gl5.width * 5)
		{
			characterYspeed = gravity;
			player.y -= 5;
		}
	}


	//..................float platform 1 ....................//


	if (player.y <= floatGround1.y + floatGround1.height && player.y + player.height >= floatGround1.y &&
		player.x + charAw >= floatGround1.x  && player.x + charFw <= floatGround1.x + floatGround1.width){


		if (player.y + 80 >= floatGround1.y + floatGround1.height && player.x + charAw >= floatGround1.x && player.x <= floatGround1.x + floatGround1.width)
		{
			characterYspeed = 0;
			isJumping = false;
			player.y = floatGround1.y + floatGround1.height + 5;

			player.x += a1;

		}



		if ((floatGround1.y < player.height - 10 + player.y) && player.x + charAw >= floatGround1.x && player.x <= floatGround1.x + floatGround1.width)
		{
			characterYspeed = gravity;
			player.y -= 5;

		}
	}



	//..................float platform 2 ....................//

	if (player.y <= floatGround2.y + floatGround2.height && player.y + player.height >= floatGround2.y &&
		player.x + charAw >= floatGround2.x  && player.x + charFw <= floatGround2.x + floatGround2.width){


		if (player.y + 80 >= floatGround2.y + floatGround2.height && player.x + charAw >= floatGround2.x && player.x <= floatGround2.x + floatGround2.width)
		{
			characterYspeed = 0;
			isJumping = false;
			player.y = floatGround2.y + floatGround2.height + 15;
			//player.y += a2;


		}



		if ((floatGround2.y < player.height - 10 + player.y) && player.x + charAw >= floatGround2.x && player.x <= floatGround2.x + floatGround2.width)
		{
			characterYspeed = gravity;
			player.y -= 5;

		}
	}

	//..................float platform 3 ....................//


	if (player.y <= floatGround3.y + floatGround3.height && player.y + player.height >= floatGround3.y &&
		player.x + charAw >= floatGround3.x  && player.x + charFw <= floatGround3.x + floatGround3.width){


		if (player.y + 80 >= floatGround3.y + floatGround3.height && player.x + charAw >= floatGround3.x && player.x <= floatGround3.x + floatGround3.width)
		{
			characterYspeed = 0;
			isJumping = false;
			player.y = floatGround3.y + floatGround3.height + 5;

			player.x += a3;

		}



		if ((floatGround3.y < player.height - 10 + player.y) && player.x + charAw >= floatGround3.x && player.x <= floatGround3.x + floatGround3.width)
		{
			characterYspeed = gravity;
			player.y -= 5;

		}
	}


	//..................chest and player ....................//


	if (player.y <= chst.y + chst.height && player.y + player.height >= chst.y &&
		player.x + charAw >= chst.x+30  && player.x + charFw <= chst.x + chst.width){

		levelOneFinish = true;
//		level1 = false;
	//	level2 = true;
		player.x = 10;
		player.y = 50+64;

	}

	//..................coin and player ....................//

	for (int i = 0; i < 3; i++){
		if (player.y <= coin[i].y + coin[i].AH && player.y + player.height >= coin[i].y &&
			player.x + charAw >= coin[i].x  && player.x + charFw <= coin[i].x + coin[i].AW){
			//cout << coin[Ci].x << endl;
			//cout << endl;
			//Ccoin(i);
			game_point += 10;
			std::sprintf(p_strinf, "%d", game_point);
			movecoin = true;
			ci = i;

		}
	}
	for (int i = 3; i < 5; i++){
		if (player.y <= coin[i].y + coin[i].AH && player.y + player.height >= coin[i].y &&
			player.x + charAw >= coin[i].x  && player.x + charFw <= coin[i].x + coin[i].AW){
			//cout << coin[Ci].x << endl;
			//cout << endl;
			//Ccoin(i);
			game_point += 10;
			std::sprintf(p_strinf, "%d", game_point);
			movecoin = true;
			ci = i;

		}
	}
	for (int i = 5; i < 7; i++){
		if (player.y <= coin[i].y + coin[i].AH && player.y + player.height >= coin[i].y &&
			player.x + charAw >= coin[i].x  && player.x + charFw <= coin[i].x + coin[i].AW){
			//cout << coin[Ci].x << endl;
			//cout << endl;
			//Ccoin(i);
			game_point += 10;
			std::sprintf(p_strinf, "%d", game_point);
			movecoin = true;
			ci = i;

		}
	}
	for (int i = 7; i < 9; i++){
		if (player.y <= coin[i].y + coin[i].AH && player.y + player.height >= coin[i].y &&
			player.x + charAw >= coin[i].x  && player.x + charFw <= coin[i].x + coin[i].AW){
			//cout << coin[Ci].x << endl;
			//cout << endl;
			//Ccoin(i);
			game_point += 20;
			std::sprintf(p_strinf, "%d", game_point);
			movecoin = true;
			ci = i;

		}
	}

	if (player.y <= coin[9].y + coin[9].AH && player.y + player.height >= coin[9].y &&
		player.x + charAw >= coin[9].x  && player.x + charFw <= coin[9].x + coin[9].AW){
		//cout << coin[Ci].x << endl;
		//cout << endl;
		//Ccoin(i);
		game_point += 40;
		std::sprintf(p_strinf, "%d", game_point);
		movecoin = true;
		ci = 9;

	}

	if (player.y <= 0) {
		player.y = 0;
		characterYspeed = 0;
		isJumping = false;

		lifeCount++;
		//cout << lifeCount << endl;

		if (lifeCount > 5)
		{
			life--;
			lifeCount = 0;
		}
		if (life == 0)
		{
			over = true;
		}
	}
	

	
}




void floatGround_1()
{
	iShowImage(floatGround1.x, floatGround1.y, floatGround1.width, floatGround1.height, iLoadImage(landF[0]));
	iShowImage(floatGround2.x, floatGround2.y, floatGround2.width, floatGround2.height, iLoadImage(landF[0]));
	iShowImage(floatGround3.x, floatGround3.y, floatGround3.width, floatGround3.height, iLoadImage(landF[0]));

}

void makeland1(){


	{
		iShowImage(gl1.x+gl1.width*(0), gl1.y, gl1.width, gl1.height, iLoadImage(landG[0]));
		iShowImage(gl1.x + gl1.width*(1), gl1.y, gl1.width, gl1.height, iLoadImage(landG[1]));
		iShowImage(gl1.x + gl1.width*(2), gl1.y, gl1.width, gl1.height, iLoadImage(landG[2]));
		iShowImage(gl1.x + gl1.width*(3), gl1.y, gl1.width, gl1.height, iLoadImage(landG[3]));
		iShowImage(gl1.x + gl1.width*(4), gl1.y, gl1.width, gl1.height, iLoadImage(landG[4]));
	}

	
	{
			iShowImage(gl2.x + gl2.width*(0), gl2.y, gl2.width, gl2.height, iLoadImage(landS[0]));
			iShowImage(gl2.x + gl2.width*(1), gl2.y, gl2.width, gl2.height, iLoadImage(landS[1]));
			iShowImage(gl2.x + gl2.width*(2), gl2.y, gl2.width, gl2.height, iLoadImage(landS[2]));
	}

	
	{
		iShowImage(gl3.x + gl3.width*(0), gl3.y, gl3.width, gl3.height, iLoadImage(landS[0]));
		iShowImage(gl3.x + gl3.width*(1), gl3.y, gl3.width, gl3.height, iLoadImage(landS[1]));
		iShowImage(gl3.x + gl3.width*(2), gl3.y, gl3.width, gl3.height, iLoadImage(landS[2]));
	}

	
	{
			iShowImage(gl4.x + gl4.width*(0), gl4.y, gl4.width, gl4.height, iLoadImage(landG[0]));
			iShowImage(gl4.x + gl4.width*(1), gl4.y, gl4.width, gl4.height, iLoadImage(landG[1]));
			iShowImage(gl4.x + gl4.width*(2), gl4.y, gl4.width, gl4.height, iLoadImage(landG[2]));
			iShowImage(gl4.x + gl4.width*(3), gl4.y, gl4.width, gl4.height, iLoadImage(landG[3]));
			iShowImage(gl4.x + gl4.width*(4), gl4.y, gl4.width, gl4.height, iLoadImage(landG[4]));
	}

	
	{
		
			iShowImage(gl5.x + gl5.width*(0)+gl5.width, gl5.y, gl5.width, gl5.height, iLoadImage(landG[0]));
			iShowImage(gl5.x + gl5.width*(1)+gl5.width, gl5.y, gl5.width, gl5.height, iLoadImage(landG[1]));
			iShowImage(gl5.x + gl5.width*(2)+gl5.width, gl5.y, gl5.width, gl5.height, iLoadImage(landG[2]));
			iShowImage(gl5.x + gl5.width*(3)+gl5.width, gl5.y, gl5.width, gl5.height, iLoadImage(landG[3]));
			iShowImage(gl5.x + gl5.width*(4)+gl5.width, gl5.y, gl5.width, gl5.height, iLoadImage(landG[4]));
	}
	


}

void floatGroundChange1()
{
	floatGround1.x += a1;
	if (floatGround1.x >= 750 || floatGround1.x <= 300)
	{
		a1 = (-1)*a1;

	}


	floatGround2.y += a2;
	if (floatGround2.y <= 340 || floatGround2.y >= 575)
	{
		a2 = (-1)*a2;
	}


	floatGround3.x += a3;
	if (floatGround3.x >= 950 || floatGround3.x <= 280)
	{
		a3 = (-1)*a3;
	}


	

}