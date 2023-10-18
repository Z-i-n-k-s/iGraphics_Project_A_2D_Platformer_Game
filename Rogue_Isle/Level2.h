//#include "VariablesForLevel2.h"
#include"iostream"
#include<stdio.h>
using namespace std;



bool setValue2 = true;

void setValues2(){

	if (setValue2){



		for (int i = 0; i < 10; i++){
			coin2[i].AH = 16;
			coin2[i].AW = 16;
			coin2[i].height = 32;
			coin2[i].width = 32;
		}

		//::::::::::::::::::::________coin2 in ground 1_________::::::::::::::::::::::::::::://
		int sum = 0;
		int p = 130;
		for (int i = 0; i < 2; i++){

			coin2[i].x = p + sum;
			coin2[i].y = gl6.y + gl6.height + 20;
			sum = coin2[i].x + 70;
			p = 0;

		}



		//::::::::::::::::::::________coin2 in ground 2_________::::::::::::::::::::::::::::://
		p = 400;
		for (int i = 2; i < 5; i++){

			coin2[i].x = p;
			coin2[i].y = 200;
			
			p = p+150;

		}


		coin2[5].x = gl7.x + 140;
		coin2[5].y = gl7.y + 150;


		coin2[6].x = 1220;
		coin2[6].y = 340;


		coin2[7].x = gl9.x - 120;
		coin2[7].y = gl9.y + 120;

		coin2[8].x = gl9.x - 120;
		coin2[8].y = gl9.y + 180;

		coin2[9].x = floatGround6.x + 20;
		coin2[9].y = floatGround6.y + 80;

		setValue2 = false;
	}
}


void drawCoin2(){
	
	{
		iShowImage(coin2[0].x, coin2[0].y, coin2[0].width, coin2[0].height, iLoadImage(silver[coinIndex]));
		iShowImage(coin2[1].x, coin2[1].y, coin2[1].width, coin2[1].height, iLoadImage(silver[coinIndex]));
		
	}
	
	{
		iShowImage(coin2[2].x, coin2[2].y, coin2[2].width, coin2[2].height, iLoadImage(gold[coinIndex]));
		iShowImage(coin2[3].x, coin2[3].y, coin2[3].width, coin2[3].height, iLoadImage(gold[coinIndex]));

	}

	iShowImage(coin2[5].x, coin2[5].y, coin2[5].width, coin2[5].height, iLoadImage(gem[coinIndex]));

	iShowImage(coin2[6].x, coin2[6].y, coin2[6].width, coin2[6].height, iLoadImage(gold[coinIndex]));

	iShowImage(coin2[7].x, coin2[7].y, coin2[7].width, coin2[7].height, iLoadImage(gold[coinIndex]));

	iShowImage(coin2[8].x, coin2[8].y, coin2[8].width, coin2[8].height, iLoadImage(gem[coinIndex]));

	iShowImage(coin2[9].x, coin2[9].y, coin2[9].width, coin2[9].height, iLoadImage(gem[coinIndex]));
	
	

	coinIndex++;
	if (coinIndex >= 4)
		coinIndex = 0;

}


void movechar2(){

	characterYspeed -= gravity;
	player.y += characterYspeed;


	//..................platform 1 ....................//


	if (player.y <= gl6.y + gl6.height && player.y + player.height >= gl6.y &&
		player.x + charAw >= gl6.x && player.x + charFw <= gl6.x + gl6.width * 5){


		if (player.y + 80 >= gl6.y + gl6.height && player.x + charAw >= gl6.x && player.x <= gl6.x + gl6.width * 5)
		{
			

			characterYspeed = 0;
			isJumping = false;
			player.y = gl6.y + gl6.height + 5;

			

		}



		if ((gl6.y < player.height - 1 + player.y) && player.x + charAw >= gl6.x && player.x <= gl6.x + gl6.width * 5)
		{
			characterYspeed = gravity;
			player.y -= 5;
		}
	}

	

	//..................platform2 ....................//

	if (player.y <= gl7.y + gl7.height && player.y + player.height >= gl7.y &&
		player.x + charAw >= gl7.x && player.x + charFw <= gl7.x + gl7.width * 5){


		if (player.y + 80 >= gl7.y + gl7.height && player.x + charAw >= gl7.x && player.x <= gl7.x + gl7.width * 5)
		{

			characterYspeed = 0;
			isJumping = false;
			player.y = gl7.y + gl7.height + 5;

		}

		if ((gl7.y < player.height - 10 + player.y) && player.x + charAw >= gl7.x && player.x <= gl7.x + gl7.width * 5)
		{
			characterYspeed = gravity;
			player.y -= 5;
		}
	}


	//..................platform3 ....................//

	if (player.y <= gl8.y + gl8.height && player.y + player.height >= gl8.y &&
		player.x + charAw >= gl8.x && player.x + charFw <= gl8.x + gl8.width * 3){


		if (player.y + 80 >= gl8.y + gl8.height && player.x + charAw >= gl8.x && player.x <= gl8.x + gl8.width * 3)
		{

			characterYspeed = 0;
			isJumping = false;
			player.y = gl8.y + gl8.height + 5;

		}

		if ((gl8.y < player.height - 10 + player.y) && player.x + charAw >= gl8.x && player.x <= gl8.x + gl8.width * 3)
		{
			characterYspeed = gravity;
			player.y -= 5;
		}
	}

	//..................platform4 ....................//


	if (player.y <= gl9.y + gl9.height && player.y + player.height >= gl9.y &&
		player.x + charAw <= gl9.x + gl9.width +20 && player.x + charFw >= gl9.x - gl9.width * 5){


		if (player.y + 80 >= gl9.y + gl9.height && player.x + charAw <= gl9.x + gl9.width + 20 && player.x >= gl9.x - gl9.width * 5)
		{

			characterYspeed = 0;
			isJumping = false;
			player.y = gl9.y + gl9.height + 5;
		}



		if ((gl9.y < player.height - 10 + player.y) && player.x + charAw <= gl9.x+gl9.width +20 && player.x >= gl9.x - gl9.width * 5)
		{
			characterYspeed = gravity;
			player.y -= 5;
		}
	}


	//..................platform5 ....................//


	if (player.y <= gl10.y + gl10.height && player.y + player.height >= gl10.y &&
		player.x + charAw <= gl10.x + gl10.width*2 +30 && player.x + charFw >= gl10.x - gl10.width * 3){


		if (player.y + 80 >= gl10.y + gl10.height && player.x + charAw <= gl10.x + gl10.width * 2+30 && player.x >= gl10.x - gl10.width * 3)
		{

			characterYspeed = 0;
			isJumping = false;
			player.y = gl10.y + gl10.height + 5;

			
		}



		if ((gl10.y < player.height - 10 + player.y) && player.x + charAw <= gl10.x + gl10.width * 2+30 && player.x >= gl10.x - gl10.width * 3)
		{
			characterYspeed = gravity;
			player.y -= 5;
		}
	}


	//..................float platform 1 ....................//


	if (player.y <= floatGround4.y + floatGround4.height && player.y + player.height >= floatGround4.y &&
		player.x + charAw >= floatGround4.x  && player.x + charFw <= floatGround4.x + floatGround4.width){


		if (player.y + 80 >= floatGround4.y + floatGround4.height && player.x + charAw >= floatGround4.x && player.x <= floatGround4.x + floatGround4.width)
		{
			characterYspeed = 0;
			isJumping = false;
			player.y = floatGround4.y + floatGround4.height + 5;

			player.x += a4;

		}



		if ((floatGround4.y < player.height - 10 + player.y) && player.x + charAw >= floatGround4.x && player.x <= floatGround4.x + floatGround4.width)
		{
			characterYspeed = gravity;
			player.y -= 5;

		}
	}



	//..................float platform 2 ....................//

	if (player.y <= floatGround5.y + floatGround5.height && player.y + player.height >= floatGround5.y &&
		player.x + charAw >= floatGround5.x  && player.x + charFw <= floatGround5.x + floatGround5.width){


		if (player.y + 80 >= floatGround5.y + floatGround5.height && player.x + charAw >= floatGround5.x && player.x <= floatGround5.x + floatGround5.width)
		{
			characterYspeed = 0;
			isJumping = false;
			player.y = floatGround5.y + floatGround5.height + 15;


		}



		if ((floatGround5.y < player.height - 10 + player.y) && player.x + charAw >= floatGround5.x && player.x <= floatGround5.x + floatGround5.width)
		{
			characterYspeed = gravity;
			player.y -= 5;

		}
	}

	//..................float platform 3 ....................//


	if (player.y <= floatGround6.y + floatGround6.height && player.y + player.height >= floatGround6.y &&
		player.x + charAw >= floatGround6.x  && player.x + charFw <= floatGround6.x + floatGround6.width){


		if (player.y + 80 >= floatGround6.y + floatGround6.height && player.x + charAw >= floatGround6.x && player.x <= floatGround6.x + floatGround6.width)
		{
			characterYspeed = 0;
			isJumping = false;
			player.y = floatGround6.y + floatGround6.height + 5;

			player.x += a6;

		}



		if ((floatGround6.y < player.height - 10 + player.y) && player.x + charAw >= floatGround6.x && player.x <= floatGround6.x + floatGround6.width)
		{
			characterYspeed = gravity;
			player.y -= 5;

		}
	}

	//.................._____________________________Spike and player _____________________________....................//



	//..................Spike1 ....................//
	if (player.y <= spike1.y + spike1.height - 17 && player.y + player.height >= spike1.y &&
		player.x + charAw >= spike1.x + 12 && player.x + charFw <= spike1.x + spike1.width)
	{
		player.x = spike1.x - 150;
		life--;
	}
	

	//..................Spike2 ....................//
	if (player.y <= spike2.y + spike2.height-17 && player.y + player.height >= spike2.y &&
		player.x + charAw >= spike2.x + 12 && player.x + charFw <= spike2.x + spike2.width)
	{
		player.x = spike2.x - 150;
		life--;
	}
	//..................Spike3 ....................//
	if (player.y <= spike3.y + spike3.height - 17 && player.y + player.height >= spike3.y &&
		player.x + charAw >= spike3.x + 12 && player.x + charFw <= spike3.x + spike3.width)
	{
		player.x = spike3.x - 150;
		life--;
	}
	//..................Spike4 ....................//
	if (player.y <= spike4.y + spike4.height - 17 && player.y + player.height >= spike4.y &&
		player.x + charAw >= spike4.x  && player.x + charFw <= spike4.x + spike4.width - 13)
	{
		player.x = spike4.x + 100;
		life--;
	}
	//..................Spike5 ....................//
	if (player.y <= spike5.y + spike5.height - 17 && player.y + player.height >= spike5.y &&
		player.x + charAw >= spike5.x && player.x + charFw <= spike5.x + spike5.width - 10)
	{
		player.x = spike5.x - 150;
		life--;
	}


	

	//..................chest and player ....................//


	if (player.y <= chst2.y + chst2.height && player.y + player.height >= chst2.y &&
		player.x + charAw >= chst2.x  && player.x + charFw <= chst2.x + chst2.width-100){

		levelTwoFinish = true;
		player.x = gl11.x;
		player.y = gl11.y + gl11.height;

	}

	//..................coin and player ....................//

	for (int i = 0; i < 2; i++){
		if (player.y <= coin2[i].y + coin2[i].AH && player.y + player.height >= coin2[i].y &&
			player.x + charAw >= coin2[i].x  && player.x + charFw <= coin2[i].x + coin2[i].AW){
			//cout << coin[Ci].x << endl;
			//cout << endl;
			//Ccoin(i);
			game_point += 10;
			std::sprintf(p_strinf, "%d", game_point);
			movecoin = true;
			ci = i;

		}
	}
	for (int i = 2; i < 5; i++){
		if (player.y <= coin2[i].y + coin2[i].AH && player.y + player.height >= coin2[i].y &&
			player.x + charAw >= coin2[i].x  && player.x + charFw <= coin2[i].x + coin2[i].AW){
			//cout << coin[Ci].x << endl;
			//cout << endl;
			//Ccoin(i);
			game_point += 20;
			std::sprintf(p_strinf, "%d", game_point);
			movecoin = true;
			ci = i;

		}
	}

	if (player.y <= coin2[5].y + coin2[5].AH && player.y + player.height >= coin2[5].y &&
		player.x + charAw >= coin2[5].x  && player.x + charFw <= coin2[5].x + coin2[5].AW){
		//cout << coin[Ci].x << endl;
		//cout << endl;
		//Ccoin(i);
		game_point += 40;
		std::sprintf(p_strinf, "%d", game_point);
		movecoin = true;
		ci = 5;

	}


	if (player.y <= coin2[6].y + coin2[6].AH && player.y + player.height >= coin2[6].y &&
		player.x + charAw >= coin2[6].x  && player.x + charFw <= coin2[6].x + coin2[6].AW){
		//cout << coin[Ci].x << endl;
		//cout << endl;
		//Ccoin(i);
		game_point += 20;
		std::sprintf(p_strinf, "%d", game_point);
		movecoin = true;
		ci = 6;

	}
	if (player.y <= coin2[7].y + coin2[7].AH && player.y + player.height >= coin2[7].y &&
		player.x + charAw >= coin2[7].x  && player.x + charFw <= coin2[7].x + coin2[7].AW){
		//cout << coin[Ci].x << endl;
		//cout << endl;
		//Ccoin(i);
		game_point += 20;
		std::sprintf(p_strinf, "%d", game_point);
		movecoin = true;
		ci = 7;

	}
	if (player.y <= coin2[8].y + coin2[8].AH && player.y + player.height >= coin2[8].y &&
		player.x + charAw >= coin2[8].x  && player.x + charFw <= coin2[8].x + coin2[8].AW){
		//cout << coin[Ci].x << endl;
		//cout << endl;
		//Ccoin(i);
		game_point += 40;
		std::sprintf(p_strinf, "%d", game_point);
		movecoin = true;
		ci = 8;

	}

	if (player.y <= coin2[9].y + coin2[9].AH && player.y + player.height >= coin2[9].y &&
		player.x + charAw >= coin2[9].x  && player.x + charFw <= coin2[9].x + coin2[9].AW){
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










void makeland2(){


	
	{
		iShowImage(gl6.x + gl6.width*(0), gl6.y, gl6.width, gl6.height, iLoadImage(landG[0]));
		iShowImage(gl6.x + gl6.width*(1), gl6.y, gl6.width, gl6.height, iLoadImage(landG[1]));
		iShowImage(gl6.x + gl6.width*(2), gl6.y, gl6.width, gl6.height, iLoadImage(landG[2]));
		iShowImage(gl6.x + gl6.width*(3), gl6.y, gl6.width, gl6.height, iLoadImage(landG[3]));
		iShowImage(gl6.x + gl6.width*(4), gl6.y, gl6.width, gl6.height, iLoadImage(landG[4]));
	}
	
	
	{
		iShowImage(gl7.x + gl7.width*(0), gl7.y, gl7.width, gl7.height, iLoadImage(landG[0]));
		iShowImage(gl7.x + gl7.width*(1), gl7.y, gl7.width, gl7.height, iLoadImage(landG[1]));
		iShowImage(gl7.x + gl7.width*(2), gl7.y, gl7.width, gl7.height, iLoadImage(landG[2]));
		iShowImage(gl7.x + gl7.width*(3), gl7.y, gl7.width, gl7.height, iLoadImage(landG[3]));
		iShowImage(gl7.x + gl7.width*(4), gl7.y, gl7.width, gl7.height, iLoadImage(landG[4]));
		
			
	}
	

	
	
	{
		iShowImage(gl8.x + gl8.width*(0), gl8.y, gl8.width, gl8.height, iLoadImage(landS[0]));
		iShowImage(gl8.x + gl8.width*(1), gl8.y, gl8.width, gl8.height, iLoadImage(landS[1]));
		iShowImage(gl8.x + gl8.width*(2), gl8.y, gl8.width, gl8.height, iLoadImage(landS[2]));
	}


	iShowImage(gl9.x - gl9.width*(0), gl9.y, gl9.width, gl9.height, iLoadImage(landG[4]));
	iShowImage(gl9.x - gl9.width*(1), gl9.y, gl9.width, gl9.height, iLoadImage(landG[3]));
	iShowImage(gl9.x - gl9.width*(2), gl9.y, gl9.width, gl9.height, iLoadImage(landG[2]));
	iShowImage(gl9.x - gl9.width*(3), gl9.y, gl9.width, gl9.height, iLoadImage(landG[1]));
	iShowImage(gl9.x - gl9.width*(4), gl9.y, gl9.width, gl9.height, iLoadImage(landG[0]));



	iShowImage(gl10.x - gl10.width*(3)+gl10.width, gl10.y, gl10.width, gl10.height, iLoadImage(landG[3]));
	iShowImage(gl10.x - gl10.width*(2)+gl10.width, gl10.y, gl10.width, gl10.height, iLoadImage(landG[2]));
	iShowImage(gl10.x - gl10.width*(1)+gl10.width, gl10.y, gl10.width, gl10.height, iLoadImage(landG[1]));
	iShowImage(gl10.x - gl10.width*(0)+gl10.width, gl10.y, gl10.width, gl10.height, iLoadImage(landG[4]));




	iShowImage(spike1.x, spike1.y, spike1.width, spike1.height, iLoadImage(spikes[0]));
	iShowImage(spike2.x, spike2.y, spike2.width, spike2.height, iLoadImage(spikes[0]));
	iShowImage(spike4.x, spike4.y, spike4.width, spike4.height, iLoadImage(spikes[0]));
	iShowImage(spike3.x, spike3.y, spike3.width, spike3.height, iLoadImage(spikes[0]));
	iShowImage(spike5.x, spike5.y, spike5.width, spike5.height, iLoadImage(spikes[0]));

	iShowImage(floatGround4.x, floatGround4.y, floatGround4.width, floatGround4.height, iLoadImage(landF[0]));
	iShowImage(floatGround5.x, floatGround5.y, floatGround5.width, floatGround5.height, iLoadImage(landF[0]));
	iShowImage(floatGround6.x, floatGround6.y, floatGround6.width, floatGround6.height, iLoadImage(landF[0]));
}


void floatGroundChange2()
{
	floatGround4.x += a4;
	if (floatGround4.x >= 810 || floatGround4.x <= 325)
	{
		a4 = (-1)*a4;

	}

	

	floatGround5.y += a5;
	if (floatGround5.y <= 100 || floatGround5.y >= 550)
	{
		a5 = (-1)*a5;
	}


	floatGround6.x += a6;
	if (floatGround6.x >= 600-10 || floatGround6.x <= 280-20)
	{
		a6 = (-1)*a6;
	}




}

