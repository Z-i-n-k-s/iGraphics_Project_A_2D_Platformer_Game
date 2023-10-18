
#include <stdio.h>
#include<iostream>
using namespace std;




bool setValue3 = true;


void setValues3(){

	if (setValue3){


		for (int i = 0; i < 10; i++){
			coin3[i].AH = 16;
			coin3[i].AW = 16;
			coin3[i].height = 32;
			coin3[i].width = 32;
		}


		coin3[0].x = 160;
		coin3[0].y = 140;

		coin3[1].x = 470;
		coin3[1].y = 130;

		coin3[2].x = 670;
		coin3[2].y = 130;

		coin3[3].x = 1000;
		coin3[3].y = 200;

		coin3[4].x = 1220;
		coin3[4].y = 240;

		coin3[5].x = 850;
		coin3[5].y = 430;


		coin3[6].x = 800;
		coin3[6].y = 630;


		coin3[7].x = 530;
		coin3[7].y = 440;

		coin3[8].x = 62;
		coin3[8].y = 440;

		coin3[9].x = 220;
		coin3[9].y = 630;

		setValue3 = false;
	}

}






void drawCoin3(){
	

	iShowImage(coin3[0].x, coin3[0].y, coin3[0].width, coin3[0].height, iLoadImage(silver[coinIndex]));

	iShowImage(coin3[1].x, coin3[1].y, coin3[1].width, coin3[1].height, iLoadImage(silver[coinIndex]));

	iShowImage(coin3[2].x, coin3[2].y, coin3[2].width, coin3[2].height, iLoadImage(gold[coinIndex]));

	iShowImage(coin3[3].x, coin3[3].y, coin3[3].width, coin3[3].height, iLoadImage(gem[coinIndex]));

	iShowImage(coin3[4].x, coin3[4].y, coin3[4].width, coin3[4].height, iLoadImage(gold[coinIndex]));

	iShowImage(coin3[5].x, coin3[5].y, coin3[5].width, coin3[5].height, iLoadImage(gem[coinIndex]));

	iShowImage(coin3[6].x, coin3[6].y, coin3[6].width, coin3[6].height, iLoadImage(gem[coinIndex]));

	iShowImage(coin3[7].x, coin3[7].y, coin3[7].width, coin3[7].height, iLoadImage(gold[coinIndex]));

	iShowImage(coin3[8].x, coin3[8].y, coin3[8].width, coin3[8].height, iLoadImage(gold[coinIndex]));

	iShowImage(coin3[9].x, coin3[9].y, coin3[9].width, coin3[9].height, iLoadImage(gem[coinIndex]));



	coinIndex++;
	if (coinIndex >= 4)
		coinIndex = 0;

}







void drwaSpike(){


	iShowImage(spike11.x, spike11.y, spike11.width, spike11.height, iLoadImage(spikes[1]));
	iShowImage(spike12.x, spike12.y, spike12.width, spike12.height, iLoadImage(spikes[1]));
	iShowImage(spike13.x, spike13.y, spike13.width, spike13.height, iLoadImage(spikes[1]));
	iShowImage(spike14.x, spike14.y, spike14.width, spike14.height, iLoadImage(spikes[1]));
	//iShowImage(spike5.x, spike5.y, spike5.width, spike5.height, iLoadImage(spikes[0]));
	iShowImage(spike6.x, spike6.y, spike6.width, spike6.height, iLoadImage(spikes[1]));
	iShowImage(spike7.x, spike7.y, spike7.width, spike7.height, iLoadImage(spikes[1]));
	iShowImage(spike8.x, spike8.y, spike8.width, spike8.height, iLoadImage(spikes[1]));
	//iShowImage(spike9.x, spike9.y, spike9.width, spike9.height, iLoadImage(spikes[0]));
	//iShowImage(spike10.x, spike10.y, spike10.width, spike10.height, iLoadImage(spikes[0]));

}

void makeland3(){


	
	{
		iShowImage(gl11.x + gl11.width*(0), gl11.y, gl11.width, gl11.height, iLoadImage(landG[0]));
		iShowImage(gl11.x + gl11.width*(1), gl11.y, gl11.width, gl11.height, iLoadImage(landG[1]));
		iShowImage(gl11.x + gl11.width*(2), gl11.y, gl11.width, gl11.height, iLoadImage(landG[2]));
		iShowImage(gl11.x + gl11.width*(3), gl11.y, gl11.width, gl11.height, iLoadImage(landG[3]));
		iShowImage(gl11.x + gl11.width*(4), gl11.y, gl11.width, gl11.height, iLoadImage(landG[4]));
	}


	
	{
		iShowImage(gl18.x + gl18.width*(0), gl18.y, gl18.width, gl18.height, iLoadImage(landS[0]));
		iShowImage(gl18.x + gl18.width*(1), gl18.y, gl18.width, gl18.height, iLoadImage(landS[1]));
		iShowImage(gl18.x + gl18.width*(2), gl18.y, gl18.width, gl18.height, iLoadImage(landS[2]));
	}

	

	{
		iShowImage(gl12.x + gl12.width*(0), gl12.y, gl12.width, gl12.height, iLoadImage(landG[0]));
		iShowImage(gl12.x + gl12.width*(1), gl12.y, gl12.width, gl12.height, iLoadImage(landG[1]));
		iShowImage(gl12.x + gl12.width*(2), gl12.y, gl12.width, gl12.height, iLoadImage(landG[2]));
		iShowImage(gl12.x + gl12.width*(3), gl12.y, gl12.width, gl12.height, iLoadImage(landG[3]));
		iShowImage(gl12.x + gl12.width*(4), gl12.y, gl12.width, gl12.height, iLoadImage(landG[4]));
	}
	
	{
		iShowImage(gl13.x + gl13.width*(0), gl13.y, gl3.width, gl13.height, iLoadImage(landG[0]));
		iShowImage(gl13.x + gl13.width*(1), gl13.y, gl3.width, gl13.height, iLoadImage(landG[1]));
		iShowImage(gl13.x + gl13.width*(2), gl13.y, gl3.width, gl13.height, iLoadImage(landG[2]));
		iShowImage(gl13.x + gl13.width*(3), gl13.y, gl3.width, gl13.height, iLoadImage(landG[3]));
		iShowImage(gl13.x + gl13.width*(4), gl13.y, gl3.width, gl13.height, iLoadImage(landG[4]));
	}
	
	{
		iShowImage(gl17.x + gl17.width*(0), gl17.y, gl17.width, gl17.height, iLoadImage(landG[0]));
		iShowImage(gl17.x + gl17.width*(1), gl17.y, gl17.width, gl17.height, iLoadImage(landG[1]));
		iShowImage(gl17.x + gl17.width*(2), gl17.y, gl17.width, gl17.height, iLoadImage(landG[2]));
		iShowImage(gl17.x + gl17.width*(3), gl17.y, gl17.width, gl17.height, iLoadImage(landG[3]));
		iShowImage(gl17.x + gl17.width*(4), gl17.y, gl17.width, gl17.height, iLoadImage(landG[4]));
	}
	
	{
		iShowImage(gl19.x + gl19.width*(0), gl19.y, gl19.width, gl19.height, iLoadImage(landBG[0]));
		iShowImage(gl19.x + gl19.width*(1), gl19.y, gl19.width, gl19.height, iLoadImage(landBG[1]));
		iShowImage(gl19.x + gl19.width*(2), gl19.y, gl19.width, gl19.height, iLoadImage(landBG[2]));
		iShowImage(gl19.x + gl19.width*(3), gl19.y, gl19.width, gl19.height, iLoadImage(landBG[3]));
		iShowImage(gl19.x + gl19.width*(4), gl19.y, gl19.width, gl19.height, iLoadImage(landBG[4]));
		iShowImage(gl19.x + gl19.width*(5), gl19.y, gl19.width, gl19.height, iLoadImage(landBG[5]));
		iShowImage(gl19.x + gl19.width*(6), gl19.y, gl19.width, gl19.height, iLoadImage(landBG[6]));
		iShowImage(gl19.x + gl19.width*(7), gl19.y, gl19.width, gl19.height, iLoadImage(landBG[7]));
		iShowImage(gl19.x + gl19.width*(8), gl19.y, gl19.width, gl19.height, iLoadImage(landBG[8]));
		iShowImage(gl19.x + gl19.width*(9), gl19.y, gl19.width, gl19.height, iLoadImage(landBG[9]));
		iShowImage(gl19.x + gl19.width*(10), gl19.y, gl19.width, gl19.height, iLoadImage(landBG[10]));
		iShowImage(gl19.x + gl19.width*(11), gl19.y, gl19.width, gl19.height, iLoadImage(landBG[11]));
		iShowImage(gl19.x + gl19.width*(12), gl19.y, gl19.width, gl19.height, iLoadImage(landBG[12]));
	}


	
	{

		iShowImage(gl15.x + gl15.width*(0)+gl15.width, gl15.y, gl15.width, gl15.height, iLoadImage(landG[0]));
		iShowImage(gl15.x + gl15.width*(1)+gl15.width, gl15.y, gl15.width, gl15.height, iLoadImage(landG[1]));
		iShowImage(gl15.x + gl15.width*(2)+gl15.width, gl15.y, gl15.width, gl15.height, iLoadImage(landG[2]));
		iShowImage(gl15.x + gl15.width*(3)+gl15.width, gl15.y, gl15.width, gl15.height, iLoadImage(landG[3]));
	}


	iShowImage(floatGround7.x, floatGround7.y, floatGround7.width, floatGround7.height, iLoadImage(landF[0]));
	iShowImage(floatGround8.x, floatGround8.y, floatGround8.width, floatGround8.height, iLoadImage(landF[0]));
	iShowImage(floatGround9.x, floatGround9.y, floatGround9.width, floatGround9.height, iLoadImage(landF[0]));



}


void movechar3(){


	characterYspeed -= gravity;
	player.y += characterYspeed;




	if (player.y <= chst3.y + chst3.height && player.y + player.height >= chst3.y &&
		player.x + charAw >= chst3.x + 30 && player.x + charFw <= chst3.x + chst3.width){

		levelThreeFinish = true;
	}

	//..................platform 1 ....................//


	if (player.y <= gl11.y + gl11.height && player.y + player.height >= gl11.y &&
		player.x + charAw >= gl11.x && player.x + charFw <= gl11.x + gl11.width * 5){


		if (player.y + 80 >= gl11.y + gl11.height && player.x + charAw >= gl11.x && player.x <= gl11.x + gl11.width * 5)
		{

			characterYspeed = 0;
			isJumping = false;
			player.y = gl11.y + gl11.height + 5;
		}



		if ((gl11.y < player.height - 1 + player.y) && player.x + charAw >= gl11.x && player.x <= gl11.x + gl11.width * 5)
		{
			characterYspeed = gravity;
			player.y -= 5;
		}
	}


	//..................platform2 ....................//

	if (player.y <= gl12.y + gl12.height && player.y + player.height >= gl12.y &&
		player.x + charAw >= gl12.x && player.x + charFw <= gl12.x + gl12.width * 5){


		if (player.y + 80 >= gl12.y + gl12.height && player.x + charAw >= gl12.x && player.x <= gl12.x + gl12.width * 5)
		{

			characterYspeed = 0;
			isJumping = false;
			player.y = gl12.y + gl12.height + 5;

		}

		if ((gl12.y < player.height - 10 + player.y) && player.x + charAw >= gl12.x && player.x <= gl12.x + gl12.width * 5)
		{
			characterYspeed = gravity;
			player.y -= 5;
		}
	}


	//..................platform3 ....................//

	if (player.y <= gl13.y + gl13.height && player.y + player.height >= gl13.y &&
		player.x + charAw >= gl13.x && player.x + charFw <= gl13.x + gl13.width * 5){


		if (player.y + 80 >= gl13.y + gl13.height && player.x + charAw >= gl13.x && player.x <= gl13.x + gl13.width * 5)
		{

			characterYspeed = 0;
			isJumping = false;
			player.y = gl13.y + gl13.height + 5;

		}

		if ((gl13.y < player.height - 10 + player.y) && player.x + charAw >= gl13.x && player.x <= gl13.x + gl13.width * 5)
		{
			characterYspeed = gravity;
			player.y -= 5;
		}
	}



	//..................platform5 ....................//


	if (player.y <= gl15.y + gl15.height && player.y + player.height >= gl15.y &&
		player.x + charAw >= gl15.x + 70 && player.x + charFw <= gl15.x + gl15.width * 5){


		if (player.y + 80 >= gl15.y + gl15.height && player.x + charAw >= gl15.x + 70 && player.x <= gl15.x + gl15.width * 5)
		{

			characterYspeed = 0;
			isJumping = false;
			player.y = gl15.y + gl15.height + 5;
		}



		if ((gl15.y < player.height - 10 + player.y) && player.x + charAw >= gl15.x + 70 && player.x <= gl15.x + gl15.width * 5)
		{
			characterYspeed = gravity;
			player.y -= 5;
		}
	}

	//..................platform 7 ....................//

	if (player.y <= gl17.y + gl17.height && player.y + player.height >= gl17.y &&
		player.x + charAw >= gl17.x && player.x + charFw <= gl17.x + gl17.width * 5){


		if (player.y + 80 >= gl17.y + gl17.height && player.x + charAw >= gl17.x && player.x <= gl17.x + gl17.width * 5)
		{

			characterYspeed = 0;
			isJumping = false;
			player.y = gl17.y + gl17.height + 5;

		}

		if ((gl17.y < player.height - 10 + player.y) && player.x + charAw >= gl17.x && player.x <= gl17.x + gl17.width * 5)
		{
			characterYspeed = gravity;
			player.y -= 5;
		}
	}


	//..................platform8 ....................//

	if (player.y <= gl18.y + gl18.height && player.y + player.height >= gl18.y &&
		player.x + charAw >= gl18.x && player.x + charFw <= gl18.x + gl18.width * 3){


		if (player.y + 80 >= gl18.y + gl18.height && player.x + charAw >= gl18.x && player.x <= gl18.x + gl18.width * 3)
		{

			characterYspeed = 0;
			isJumping = false;
			player.y = gl18.y + gl18.height + 5;

		}

		if ((gl18.y < player.height - 10 + player.y) && player.x + charAw >= gl18.x && player.x <= gl18.x + gl18.width * 3)
		{
			characterYspeed = gravity;
			player.y -= 5;
		}
	}
	
	//..................platform9 ....................//

	if (player.y <= gl19.y + gl19.height && player.y + player.height >= gl19.y &&
		player.x + charAw >= gl19.x && player.x + charFw <= gl19.x + gl19.width * 13){


		if (player.y + 80 >= gl19.y + gl19.height && player.x + charAw >= gl19.x && player.x <= gl19.x + gl19.width * 13)
		{

			characterYspeed = 0;
			isJumping = false;
			player.y = gl19.y + gl19.height + 5;

		}

		if ((gl19.y < player.height - 10 + player.y) && player.x + charAw >= gl19.x && player.x <= gl19.x + gl19.width * 13)
		{
			characterYspeed = gravity;
			player.y -= 5;
		}
	}




	//..................float platform 1 ....................//


	if (player.y <= floatGround7.y + floatGround7.height && player.y + player.height >= floatGround7.y &&
		player.x + charAw >= floatGround7.x  && player.x + charFw <= floatGround7.x + floatGround7.width){


		if (player.y + 80 >= floatGround7.y + floatGround7.height && player.x + charAw >= floatGround7.x && player.x <= floatGround7.x + floatGround7.width)
		{
			characterYspeed = 0;
			isJumping = false;
			player.y = floatGround7.y + floatGround7.height + 5;

			player.x += fMove[0];

		}



		if ((floatGround7.y < player.height - 10 + player.y) && player.x + charAw >= floatGround7.x && player.x <= floatGround7.x + floatGround7.width)
		{
			characterYspeed = gravity;
			player.y -= 5;

		}
	}



	//..................float platform 2 ....................//

	if (player.y <= floatGround8.y + floatGround8.height && player.y + player.height >= floatGround8.y &&
		player.x + charAw >= floatGround8.x  && player.x + charFw <= floatGround8.x + floatGround8.width){


		if (player.y + 80 >= floatGround8.y + floatGround8.height && player.x + charAw >= floatGround8.x && player.x <= floatGround8.x + floatGround8.width)
		{
			characterYspeed = 0;
			isJumping = false;
			player.y = floatGround8.y + floatGround8.height + 5;


		}



		if ((floatGround8.y < player.height - 10 + player.y) && player.x + charAw >= floatGround8.x && player.x <= floatGround8.x + floatGround8.width)
		{
			characterYspeed = gravity;
			player.y -= 5;

		}
	}

	//..................float platform 3 ....................//


	if (player.y <= floatGround9.y + floatGround9.height && player.y + player.height >= floatGround9.y &&
		player.x + charAw >= floatGround9.x  && player.x + charFw <= floatGround9.x + floatGround9.width){


		if (player.y + 80 >= floatGround9.y + floatGround9.height && player.x + charAw >= floatGround9.x && player.x <= floatGround9.x + floatGround9.width)
		{
			characterYspeed = 0;
			isJumping = false;
			player.y = floatGround9.y + floatGround9.height + 5;

		

		}



		if ((floatGround9.y < player.height - 10 + player.y) && player.x + charAw >= floatGround9.x && player.x <= floatGround9.x + floatGround9.width)
		{
			characterYspeed = gravity;
			player.y -= 5;

		}
	}



	//..................Spike1 ....................//
	if (player.y <= spike11.y + spike11.height - 17 && player.y + player.height >= spike11.y &&
		player.x + charAw >= spike11.x + 12 && player.x + charFw <= spike11.x + spike11.width)
	{
		player.x = spike11.x - 150;
		life--;
	}


	//..................Spike2 ....................//
	if (player.y <= spike12.y + spike12.height - 17 && player.y + player.height >= spike12.y &&
		player.x + charAw >= spike12.x + 12 && player.x + charFw <= spike12.x + spike12.width)
	{
		player.x = spike12.x - 150;
		life--;
	}
	//..................Spike3 ....................//
	if (player.y <= spike13.y + spike13.height - 17 && player.y + player.height >= spike13.y &&
		player.x + charAw >= spike13.x + 12 && player.x + charFw <= spike13.x + spike13.width)
	{
		player.x = spike13.x - 150;
		life--;
	}
	//..................Spike4 ....................//
	if (player.y <= spike14.y + spike14.height - 17 && player.y + player.height >= spike14.y &&
		player.x + charAw >= spike14.x  && player.x + charFw <= spike14.x + spike14.width - 13)
	{
		player.x = spike14.x + 100;
		life--;
	}

/*	//..................Spike5 ....................//
	if (player.y <= spike5.y + spike5.AH - 17 && player.y + player.height >= spike5.y &&
		player.x + charAw >= spike5.x && player.x + charFw <= spike5.x + spike5.AW - 10)
	{
		player.x = spike5.x + 50;
		life--;
	}
	*/
	//..................Spike6 ....................//
	if (player.y <= spike6.y + spike6.AH - 17 && player.y + player.height >= spike6.y &&
		player.x + charAw >= spike6.x && player.x + charFw <= spike6.x + spike6.AW - 10)
	{
		player.x = spike6.x + 50;
		life--;
	}

	//..................Spike7 ....................//
	if (player.y <= spike7.y + spike7.AH - 17 && player.y + player.height >= spike7.y &&
		player.x + charAw >= spike7.x + 12 && player.x + charFw <= spike7.x + spike7.AW)
	{
		player.x = spike7.x - 120;
		life--;
	}

	//..................Spike8 ....................//
	if (player.y <= spike8.y + spike8.AH - 17 && player.y + player.height >= spike8.y &&
		player.x + charAw >= spike8.x && player.x + charFw <= spike8.x + spike8.AW )
	{
		player.x = spike8.x - 190;
		life--;
	}
/*	//..................Spike9 ....................//
	if (player.y <= spike9.y + spike9.AH - 17 && player.y + player.height >= spike9.y &&
		player.x + charAw >= spike9.x && player.x + charFw <= spike9.x + spike9.AW )
	{
		player.x = spike9.x - 120;
		life--;
	}
	//..................Spike10 ....................//
	if (player.y <= spike10.y + spike10.AH - 17 && player.y + player.height >= spike10.y &&
		player.x + charAw >= spike10.x && player.x + charFw <= spike10.x + spike10.AW )
	{
		player.x = spike10.x - 120;
		life--;
	}
	*/

	//..................  enemy attack player ....................//
	if (player.y <= enemy.y + enemy.AH - 17 && player.y + player.height >= enemy.y &&
		player.x + charAw >= enemy.x && player.x + charFw <= enemy.x + enemy.AW && !attack && idel)
	{
		if (!deadEnemy1){
			player.x = enemy.x - 10;
			lifeCount++;
			//cout << lifeCount << endl;

			if (lifeCount > 4)
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

	if (player.y <= enemy1.y + enemy1.AH - 17 && player.y + player.height >= enemy1.y &&
		player.x + charAw >= enemy1.x && player.x + charFw <= enemy1.x + enemy1.AW && !attack && idel)
	{
		if (!deadEnemy1){
			player.x = enemy1.x - 10;
			lifeCount++;
			//cout << lifeCount << endl;

			if (lifeCount > 4)
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



	//.................. player attack enemy ....................//


	if (slashRightY <= enemy.y + enemy.AH - 10 && slashRightY + slashH >= enemy.y &&
		slashRightX + 25 >= enemy.x && player.x <= enemy.x + enemy.width && attack)
	{
		deadEnemy1 = true;
	}

	if (slashRightY <= enemy1.y + enemy1.AH - 10 && slashRightY + slashH >= enemy1.y &&
		slashRightX + 25 >= enemy1.x && player.x <= enemy1.x + enemy1.width && attack)
	{
		deadEnemy2 = true;
	}

	//.................. player attack Shell ....................//


	if (slashRightY <= shell1.shellY + shell1.shellH - 10 && slashRightY + slashH >= shell1.shellY &&
		slashRightX + 25 >= shell1.shellX && slashRightX <= shell1.shellX + shell1.shellW && attack)
	{
		
		{
			deadShell1 = true;
		}
	}
	if (slashLeftY <= shell2.shellY + shell2.shellH - 10 && slashLeftY + slashH >= shell2.shellY &&
		slashLeftX + 25 >= shell2.shellX && slashLeftX <= shell2.shellX + shell2.shellW && attack)
	{

		{
			deadShell2 = true;
		}
	}


	if (player.y <= pearl1.pearlY + pearl1.AH  && player.y + player.height >= pearl1.pearlY &&
		player.x + charAw >= pearl1.pearlX && player.x + charFw - 40 <= pearl1.pearlX)
	{
		deadPearl = true;
		life--;
		pearl1.pearlX = -80;
	}

	if (player.y -20 <= pearl2.pearlY + pearl2.AH  && player.y + player.height >= pearl2.pearlY &&
		player.x + charAw >= pearl2.pearlX && player.x + charFw <= pearl2.pearlX + pearl2.AW)
	{
		deadPearl1 = true;
		life--;
		pearl2.pearlX = 1400;
	}



	if (player.y <= coin3[0].y + coin3[0].AH && player.y + player.height >= coin3[0].y &&
		player.x + charAw >= coin3[0].x  && player.x + charFw <= coin3[0].x + coin3[0].AW){
		//cout << coin[Ci].x << endl;
		//cout << endl;
		//Ccoin(i);
		game_point += 10;
		std::sprintf(p_strinf, "%d", game_point);
		movecoin = true;
		ci = 0;

	}
	if (player.y <= coin3[1].y + coin3[1].AH && player.y + player.height >= coin3[1].y &&
		player.x + charAw >= coin3[1].x  && player.x + charFw <= coin3[1].x + coin3[1].AW){
		//cout << coin[Ci].x << endl;
		//cout << endl;
		//Ccoin(i);
		game_point += 10;
		std::sprintf(p_strinf, "%d", game_point);
		movecoin = true;
		ci = 1;

	}
	if (player.y <= coin3[2].y + coin3[2].AH && player.y + player.height >= coin3[2].y &&
		player.x + charAw >= coin3[2].x  && player.x + charFw <= coin3[2].x + coin3[2].AW){
		//cout << coin[Ci].x << endl;
		//cout << endl;
		//Ccoin(i);
		game_point += 20;
		std::sprintf(p_strinf, "%d", game_point);
		movecoin = true;
		ci = 2;

	}
	if (player.y <= coin3[3].y + coin3[3].AH && player.y + player.height >= coin3[3].y &&
		player.x + charAw >= coin3[3].x  && player.x + charFw <= coin3[3].x + coin3[3].AW){
		//cout << coin[Ci].x << endl;
		//cout << endl;
		//Ccoin(i);
		game_point += 40;
		std::sprintf(p_strinf, "%d", game_point);
		movecoin = true;
		ci = 3;

	}
	if (player.y <= coin3[4].y + coin3[4].AH && player.y + player.height >= coin3[4].y &&
		player.x + charAw >= coin3[4].x  && player.x + charFw <= coin3[4].x + coin3[4].AW){
		//cout << coin[Ci].x << endl;
		//cout << endl;
		//Ccoin(i);
		game_point += 20;
		std::sprintf(p_strinf, "%d", game_point);
		movecoin = true;
		ci = 4;

	}
	if (player.y <= coin3[5].y + coin3[5].AH && player.y + player.height >= coin3[5].y &&
		player.x + charAw >= coin3[5].x  && player.x + charFw <= coin3[5].x + coin3[5].AW){
		//cout << coin[Ci].x << endl;
		//cout << endl;
		//Ccoin(i);
		game_point += 40;
		std::sprintf(p_strinf, "%d", game_point);
		movecoin = true;
		ci = 5;

	}if (player.y <= coin3[6].y + coin3[6].AH && player.y + player.height >= coin3[6].y &&
		player.x + charAw >= coin3[6].x  && player.x + charFw <= coin3[6].x + coin3[6].AW){
		//cout << coin[Ci].x << endl;
		//cout << endl;
		//Ccoin(i);
		game_point += 20;
		std::sprintf(p_strinf, "%d", game_point);
		movecoin = true;
		ci = 6;

	}if (player.y <= coin3[7].y + coin3[7].AH && player.y + player.height >= coin3[7].y &&
		player.x + charAw >= coin3[7].x  && player.x + charFw <= coin3[7].x + coin3[7].AW){
		//cout << coin[Ci].x << endl;
		//cout << endl;
		//Ccoin(i);
		game_point += 20;
		std::sprintf(p_strinf, "%d", game_point);
		movecoin = true;
		ci = 7;

	}if (player.y <= coin3[8].y + coin3[8].AH && player.y + player.height >= coin3[8].y &&
		player.x + charAw >= coin3[8].x  && player.x + charFw <= coin3[8].x + coin3[8].AW){
		//cout << coin[Ci].x << endl;
		//cout << endl;
		//Ccoin(i);
		game_point += 40;
		std::sprintf(p_strinf, "%d", game_point);
		movecoin = true;
		ci = 8;

	}if (player.y <= coin3[9].y + coin3[9].AH && player.y + player.height >= coin3[9].y &&
		player.x + charAw >= coin3[9].x  && player.x + charFw <= coin3[4].x + coin3[9].AW){
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


void floatGroundChange3(){

	floatGround7.x += fMove[0];
	if (floatGround7.x >= 770 || floatGround7.x <= 350)
	{
		fMove[0] = (-1)*fMove[0];

	}



	floatGround8.y += fMove[1];
	if (floatGround8.y <= 100 - 50 || floatGround8.y >= 320)
	{
		fMove[1] = (-1)*fMove[1];
	}


	floatGround9.y += fMove[2];
	if (floatGround9.y >= 500 || floatGround9.y <= 300)
	{
		fMove[2] = (-1)*fMove[2];
	}


}
