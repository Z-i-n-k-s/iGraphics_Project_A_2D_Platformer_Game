#ifndef COLLISION_H_INCLUDED
#define COLLISION_H_INCLUDED



struct Button {
	int x;
	int y;
	int height ;
	int width ;

	Button(){

	}

	Button(int _x,int _y, int _height,int _width){
		x = _x;
		y = _y;
		height = _height;
		width = _width;
	}
	
}menuImage(720, 50, 650, 570),
playImage(900,465,70,160),

scoreImage(900, 385, 70, 160),
creditImage(900, 305, 70, 160),
helpImage(900, 225, 70, 160),
exitImage(900, 145, 70, 160),
backImage(10, 600, 70, 100)
;



char button[10][20] = { "menu\\play.png", "menu\\score.png", "menu\\help.png", "menu\\credit.png", "menu\\exit.png", "menu\\wave.png", "menu\\wave2.png", "menu\\isle.png", "menu\\boat.png","menu\\hat.png" };

char tree1[4][30] = { "menu\\t1\\1.png", "menu\\t1\\2.png", "menu\\t1\\3.png", "menu\\t1\\4.png", };
char tree2[4][30] = { "menu\\t2\\1.png", "menu\\t2\\2.png", "menu\\t2\\3.png", "menu\\t2\\4.png", };
char tree3[4][30] = { "menu\\t3\\1.png", "menu\\t2\\2.png", "menu\\t3\\3.png", "menu\\t3\\4.png", };

int treeIndex = 0;


int gamestate = -1;

bool playCol = false;
bool scoreCol = false;
bool creditCol = false;
bool exitCol = false;
bool helpCol = false;

bool menu = true;

bool enter = false;

int rx = -600;
int ix = 1600;
int ry = 400;
int iy = 250;
int bx = 1500;


bool prsx = false;

int r = 0;
int g = 0;
int b = 0;

int x = 0;
int nx = screenWidth - 1;

int x2 = 0;
int nx2 = -screenWidth + 1;

int x3 = 0;
int nx3 = screenWidth - 1;

bool name = true;

bool space_bar = false;

void startGame(){

	if (menu){


		

		if (opening){

			

			iShowImage(0, 0, screenWidth, screenHeight, iLoadImage(background[0]));

			
			drawClouds();

			iShowImage(x3, 80, screenWidth, 60, iLoadImage(button[5]));
			iShowImage(nx3, 80, screenWidth, 60, iLoadImage(button[5]));

			{
				iShowImage(gl1.x + gl1.width*(2)-140, gl1.y + 80 , 168, 148, iLoadImage(tree2[treeIndex]));

				iShowImage(gl1.x + gl1.width*(2), gl1.y + 60, 168, 148, iLoadImage(tree2[treeIndex]));

				iShowImage(gl1.x + gl1.width*(2)-30, gl1.y + 90 - 30, 100, 120, iLoadImage(tree1[treeIndex]));

				iShowImage(gl1.x + gl1.width*(2)+50 , gl1.y + 80, 168, 168, iLoadImage(tree2[treeIndex]));


				iShowImage(gl1.x + gl1.width*(5), gl1.y + 90-5, player.width, player.height, iLoadImage(pirateIdelRight[charIdelLeftIndex]));
				aniLeft++;
				if (aniLeft >= aniSpeed)
				{
					aniLeft = 0;

					charIdelLeftIndex++;
					treeIndex++;

					if (charIdelLeftIndex >= 5){
						charIdelLeftIndex = 0;

					}
					if (treeIndex >= 4){
						treeIndex = 0;
					}
				}
			}

			iShowImage(bx, gl1.y + 20, 250+30, 200+20, iLoadImage(button[8]));
			
	{
		iShowImage(gl1.x + gl1.width*(0), gl1.y + 20, gl1.width, gl1.height, iLoadImage(landG[0]));
		iShowImage(gl1.x + gl1.width*(1), gl1.y + 20, gl1.width, gl1.height, iLoadImage(landG[1]));
		iShowImage(gl1.x + gl1.width*(2), gl1.y + 20, gl1.width, gl1.height, iLoadImage(landG[2]));
		iShowImage(gl1.x + gl1.width*(3), gl1.y + 20, gl1.width, gl1.height, iLoadImage(landG[3]));
		iShowImage(gl1.x + gl1.width*(4), gl1.y + 20, gl1.width, gl1.height, iLoadImage(landG[3]));
		iShowImage(gl1.x + gl1.width*(5), gl1.y + 20, gl1.width, gl1.height, iLoadImage(landG[3]));
		iShowImage(gl1.x + gl1.width*(6), gl1.y + 20, gl1.width, gl1.height, iLoadImage(landG[4]));

		
	}

			iShowImage(x2, 45, screenWidth, 60, iLoadImage(button[6]));
			iShowImage(nx2, 45, screenWidth, 60, iLoadImage(button[6]));
			iShowImage(x, 0, screenWidth, 60, iLoadImage(button[5]));
			iShowImage(nx, 0, screenWidth, 60, iLoadImage(button[5]));

			iShowImage(rx, ry, 420+30, 200+30, iLoadImage(button[9]));
			iShowImage(ix, iy, 300, 180, iLoadImage(button[7]));
			//iShowImage(bx, gl1.y + 20, 200, 150, iLoadImage(button[8]));
		
			rx+=15;
			ix-=15;
			bx -= 10;

			if (bx<gl1.x + gl1.width*(7) - 10){
				bx = gl1.x + gl1.width*(7) - 10;
				prsx = true;
			}

			if (rx > 320)
				rx = 320;
			if (ix < 350 * 2 + 50)
				ix = 350 * 2 + 50;

			x-=3;
			nx-=3;

			x2 += 5;
			nx2 += 5;

			x3 -= 5;
			nx3 -= 5;

			if ( x < -1299 ){
				x = screenWidth - 3;
			}
			 if (nx < -1299){
				nx = screenWidth - 3;
			}

			if (x2 > 1300-1){
				x2 = -screenWidth + 1;
			}
			 if (nx2 > 1300-1){
				nx2 = -screenWidth + 1;
			}


			 if (x3 < -1299){
				 x3 = screenWidth - 5;
			 }
			 if (nx3 < -1299){
				 nx3 = screenWidth - 5;
			 }


			iSetColor(r, g, b);
			if (prsx){
				iText(550, 65, "Press X to continue", GLUT_BITMAP_TIMES_ROMAN_24);
			}

		}
		if (space_bar){
			if (name){
				iShowImage(0, 0, screenWidth, screenHeight, iLoadImage("menu\\s.png"));
				activateTextBox();
				setPlayerName();
			}
			if (enter){
				if (gamestate == -1){


					iShowImage(0, 0, screenWidth, screenHeight, iLoadImage(background[0]));

					drawClouds();

					iShowImage(x3, 80, screenWidth, 60, iLoadImage(button[5]));
					iShowImage(nx3, 80, screenWidth, 60, iLoadImage(button[5]));
					iShowImage(x2, 45, screenWidth, 60, iLoadImage(button[6]));
					iShowImage(nx2, 45, screenWidth, 60, iLoadImage(button[6]));
					iShowImage(x, 0, screenWidth, 60, iLoadImage(button[5]));
					iShowImage(nx, 0, screenWidth, 60, iLoadImage(button[5]));

					
							x -= 3;
							nx -= 3;

							x2 += 5;
							nx2 += 5;

							x3 -= 5;
							nx3 -= 5;

							if (x < -1299){
								x = screenWidth - 3;
							}
							if (nx < -1299){
								nx = screenWidth - 3;
							}

							if (x2 > 1300 - 1){
								x2 = -screenWidth + 1;
							}
							if (nx2 > 1300 - 1){
								nx2 = -screenWidth + 1;
							}


							if (x3 < -1299){
								x3 = screenWidth - 5;
							}
							if (nx3 < -1299){
								nx3 = screenWidth - 5;
							}
					
							iShowImage(80, ry+20, 420, 200, iLoadImage(button[9]));
							iShowImage(300+50, iy+30, 300, 180, iLoadImage(button[7]));

					iShowImage(menuImage.x+65, menuImage.y, menuImage.width-100, menuImage.height, iLoadImage("menu\\Menu.png"));
					
					{
						if (playCol){
							iShowImage(playImage.x-20, playImage.y-20, playImage.width + 50, playImage.height + 50, iLoadImage(button[0]));
						}
						else{
							iShowImage(playImage.x, playImage.y, playImage.width, playImage.height, iLoadImage(button[0]));
						}
						if (scoreCol){
							iShowImage(scoreImage.x - 20, scoreImage.y - 20, scoreImage.width + 50, scoreImage.height + 50, iLoadImage(button[1]));
						}
						else{
							iShowImage(scoreImage.x, scoreImage.y, scoreImage.width, scoreImage.height, iLoadImage(button[1]));
						}
						if (creditCol){
							iShowImage(creditImage.x - 20, creditImage.y - 20, creditImage.width + 50, creditImage.height + 50, iLoadImage(button[3]));
						}
						else{
							iShowImage(creditImage.x, creditImage.y, creditImage.width, creditImage.height, iLoadImage(button[3]));
						}
						if (helpCol){
							iShowImage(helpImage.x - 20, helpImage.y - 20, helpImage.width + 50, helpImage.height + 50, iLoadImage(button[2]));
						}
						else{
							iShowImage(helpImage.x, helpImage.y, helpImage.width, helpImage.height, iLoadImage(button[2]));
						}
						if (exitCol){
							iShowImage(exitImage.x - 20, exitImage.y - 20, exitImage.width + 50, exitImage.height + 50, iLoadImage(button[4]));
						}
						else{
							iShowImage(exitImage.x, exitImage.y, exitImage.width, exitImage.height, iLoadImage(button[4]));
						}
						
				
					}
				}
				else if (gamestate == 1){
					menu = false;
					level1 = true;
					space_bar = false;
					flag = 0;

				}
				else if (gamestate == 2){
					iShowImage(0, 0, screenWidth, screenHeight, iLoadImage("menu\\score1.png"));
					iShowImage(10, 600, backImage.width, backImage.height, iLoadImage("menu\\back.png"));
					highfunction();
				}
				else if (gamestate == 3){
					iShowImage(0, 0, screenWidth, screenHeight, iLoadImage("menu\\control.png"));
					iShowImage(10, 600, backImage.width, backImage.height, iLoadImage("menu\\back.png"));
				}
				else if (gamestate == 4){
					iShowImage(0, 0, screenWidth, screenHeight, iLoadImage("menu\\credit1.png"));
					iShowImage(10, 600, backImage.width, backImage.height, iLoadImage("menu\\back.png"));
				}
				else if (gamestate == 5){

					exit(0);
				}
			}
		}
	}
}



#endif 