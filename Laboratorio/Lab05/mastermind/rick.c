#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "mastermind.h"

void playerSettings (Player *player)
{
    int color;
    printf("NOME GIOCATORE 1: ");
    scanf("%s", (*player).name);
    if(strcmp((*player).name, "\0") == 0)
        {strcpy((*player).name, "Giocatore 1");}
    printf("SELEZIONARE COLORE (0.NOCOLOR 1.BLACK 2.RED 3.GREEN 4.YELLOW 5.BLUE 6.MAGENTA 7.CYAN 8.WHITE) : ");
    scanf("%d", &color);
    switch (color)
    {
		case 1:
			strcpy((*player).color, BLKT);
			break;
		case 2:
			strcpy((*player).color, REDT);
			break;
		case 3:
			strcpy((*player).color, GRNT);
			break;
		case 4:
			strcpy((*player).color, YELT);
			break;
		case 5:
			strcpy((*player).color, BLUT);
			break;
		case 6:
			strcpy((*player).color, MAGT);
			break;
		case 7:
			strcpy((*player).color, CYNT);
			break;
		case 8:
			strcpy((*player).color, WHTT);
			break;
		default:
			strcpy((*player).color, reset);
			break;
    }

}
void printName(Player *player)
{
    printf("NOME: ");
    printf("%s" , (*player).color);
    printf("%s\n", (*player).name);
    printf(reset);
}

void genSequence(char *str, int len){
    int i;
    int color;
    srand(time(NULL));
    for(i=0; i<len; i++){
        color = rand() % 8;
        switch(color)
            {
                case 0:
                    str[i] = 'n'; //black
                    break;
                case 1:
                    str[i] = 'r'; //red
                    break;
                case 2:
                    str[i] = 'g'; //green
                    break;
                case 3:
                    str[i] = 'y'; //yellow
                    break;
                case 4:
                    str[i] = 'b'; //blue
                    break;
                case 5:
                    str[i] = 'm'; //magenta
                    break;
                case 6:
                    str[i] = 'c'; //cyan
                    break;
                case 7:
                    str[i] = 'w'; //white
                    break;
            }
    }
    str[i] = '\0';
}
