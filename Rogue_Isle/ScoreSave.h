// dont write name with name with space 
#ifndef SCORESAVE_H_INCLUDED
#define SCORESAVE_H_INCLUDED
char player_name;
int length;
bool field_active = false;
bool input_name = true;
int name_index = 0 , flag = 0 ;

#include <iostream>
int game_point = 0;
char p_strinf[40];
using namespace std;

int k;
int i, m;
char scores1[15], scores2[15], scores3[10], scores4[10], scores5[10];
//...................................... saving high scores ......................................................//
struct HighScore
{
	char name[35];
	int score;

	
} high_score;
struct user_details{   //declaring the structures for storing the details
	char name[35];
	int point;
} details[20];

struct scores
{
	char name[35];
	int score;

}s[20];

int file_line_counter(){  // counts the line of a file and at the end returns the total lines
	FILE *fp;
	char ch;
	int linesCount = 0;
	//open file in read more
	fp = fopen("player.txt", "r");
	if (fp == NULL) {
		printf("File \"%s\" does not exist!!!\n");
		return -1;
	}
	//read character by character and check for new line
	while ((ch = fgetc(fp)) != EOF) {
		if (ch == '\n' && ch !=' ')
			linesCount++;
	}
	//close the file
	fclose(fp);
	
	return linesCount;
	
}
 



//..................................................Function for text box activation to take player's name input..............................................................//

//To activate text box for name input.
void activateTextBox()
{
	if (input_name)
	
		
		{
			field_active = true;
			
		}
		else
		{
			field_active = false;
			
		}
	}

//................................................. Function for saving palyer name which has been taken input at first..........................................//
void  user_name_appender(struct user_details details [])
{

	FILE *fp = fopen("player.txt", "a");

	if (fp == NULL)  printf("File \"%s\" does not exist!!!\n");

	else
	{   
		
		fprintf(fp, "%s\n%d\n", details[k + 1].name,details[k+1].point);
		
		flag = 1;

		
	}
	
	fclose(fp);
}

//...............................................Function for writing in the text box to take player's name input............................................//

//For taking input the player's name through the text box.
void inputName(unsigned char key)
{
	if (input_name)
	{
		
		if (field_active && name_index < 33)
		{
			if (key == '\b')
			{
				if (name_index > 0)
				{
					high_score.name[--name_index] = NULL;
				}
			}
			else if (name_index < 32 && key != 'p' && (key >= 'A' && key <= 'Z' || key >= 'a' && key <= 'z' || key >= '0' && key <= '9' || key == ' '))
			{
				
				if (key == '\r'){
					high_score.name[name_index++] = ' ';
				}
				else{
					fflush(stdin);
					high_score.name[name_index++] = key;
					fflush(stdin);
				}
				
			}
			
			

		}
	}
}


//..............................................Function for setting player's name...........................................................//

//Shows the player's name on the screen which is being taken input from the keyboard by the function void inputName().
void setPlayerName()
{
	if (field_active)
	{
		iSetColor(0, 0, 0);
		iRectangle(400, 400, 480, 58);
		iText(500, 420, high_score.name, GLUT_BITMAP_TIMES_ROMAN_24); //Gets the value from void inputName() function.
		
	}
	else
	{
		iSetColor(0, 0, 0);
		iText(500, 420, high_score.name, GLUT_BITMAP_TIMES_ROMAN_24);
		
	}
	
}

//.................................Functions for score sorting and showing highscores................................//
void highfunction()
{
	FILE *dp;
	
	struct scores high_scores[120], temp;


	dp = fopen("player.txt", "r");

	//........................................Read player names and scores from the file .........................//
	while (fscanf(dp, "%s\n%d\n", &high_scores[i].name, &high_scores[i].score) != EOF) {
		for (i = 0; i < k / 2; i++){
			for (m = 0; m < (k / 2) - i;m++){
				if (high_scores[m].score < high_scores[m + 1].score){
					temp = high_scores[m + 1];
					high_scores[m + 1] = high_scores[m];
					high_scores[m] = temp;

				}
			}
		}

	}
	int high_score_dy = 50;
	int high_score_y = 475;
	int high_score_x = 720;
	int high_score_x1 = 480;
	
	

	    _itoa(high_scores[0].score, scores1, 10);
		_itoa(high_scores[1].score, scores2, 10);
		_itoa(high_scores[2].score, scores3, 10);
		_itoa(high_scores[3].score, scores4, 10);
		_itoa(high_scores[4].score, scores5, 10);
		iText(high_score_x1, high_score_y," NAME: ", GLUT_BITMAP_TIMES_ROMAN_24); // for showing the names
		iText(high_score_x, high_score_y, " SCORE: ", GLUT_BITMAP_TIMES_ROMAN_24); // for showing the score
		high_score_y -= high_score_dy;
		iText(high_score_x1, high_score_y, high_scores[0].name, GLUT_BITMAP_TIMES_ROMAN_24); // for showing the names
		iText(high_score_x, high_score_y, scores1, GLUT_BITMAP_TIMES_ROMAN_24); // for showing the score
		high_score_y -= high_score_dy;
		if (k > 3){
			iText(high_score_x1, high_score_y, high_scores[1].name, GLUT_BITMAP_TIMES_ROMAN_24); // for showing the names
			iText(high_score_x, high_score_y, scores2, GLUT_BITMAP_TIMES_ROMAN_24); // for showing the score
			high_score_y -= high_score_dy;
		}
		if (k > 5){
			
			iText(high_score_x1, high_score_y, high_scores[2].name, GLUT_BITMAP_TIMES_ROMAN_24); // for showing the names
			iText(high_score_x, high_score_y, scores3, GLUT_BITMAP_TIMES_ROMAN_24); // for showing the score
			high_score_y -= high_score_dy;
		}
		if (k > 7){
			
			iText(high_score_x1, high_score_y, high_scores[3].name, GLUT_BITMAP_TIMES_ROMAN_24); // for showing the names
			iText(high_score_x, high_score_y, scores4, GLUT_BITMAP_TIMES_ROMAN_24); // for showing the score
			high_score_y -= high_score_dy;
		}
		if (k > 9){
			
			iText(high_score_x1, high_score_y, high_scores[4].name, GLUT_BITMAP_TIMES_ROMAN_24); // for showing the names
			iText(high_score_x, high_score_y, scores5, GLUT_BITMAP_TIMES_ROMAN_24); // for showing the score
			high_score_y -= high_score_dy;
		}
	
	fclose(dp);



}



#endif // !SCORESAVE_H_INCLUDED