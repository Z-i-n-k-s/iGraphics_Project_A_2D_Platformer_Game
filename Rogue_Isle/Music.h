#include<stdio.h>
#include<iostream>

using namespace std;

bool menuMusic = true;
bool level1Music = true;
bool level2Music = true;
bool level3Music = true;

void playMusic()
{
	if (musicOn){


		if (menu)
		{
			if (menuMusic)
			{
				PlaySound("Sounds\\Menu.wav", NULL, SND_LOOP | SND_ASYNC);
				menuMusic = false;

			}
		}
		if (level1)
		{
			if (level1Music)
			{
				PlaySound("Sounds\\SuperHero.wav", NULL, SND_LOOP | SND_ASYNC);
				level1Music = false;
			}
		}
		if (level2)
		{
			if (level2Music)
			{
				PlaySound("Sounds\\Kiss.wav", NULL, SND_LOOP | SND_ASYNC);
				level2Music = false;
			}
		}
		if (level3)
		{
			if (level3Music)
			{
				PlaySound("Sounds\\Light.wav", NULL, SND_LOOP | SND_ASYNC);
				level3Music = false;
			}
		}
	}
}