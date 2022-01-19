#include <stdio.h>
#include "mastermind.h"

int main(void)
{
	int i, wtiles, btiles;
	char *secretCode, *guessCode;
	Settings currentSettings;
	Player playerinfo;

	wtiles = 0;
	btiles = 0;

	printf("Impostazioni:\n");
	do {
		printf("Numero di round: ");
		scanf("%d", &currentSettings.nRounds);
	}while(currentSettings.nRounds<=0);
	do {
		printf("Lunghezza sequenza(min 4): ");
		scanf("%d", &currentSettings.seqLen);
	}while(currentSettings.seqLen<4);

	playerSettings(&playerinfo);

	secretCode = strmalloc(currentSettings.seqLen);
	guessCode = strmalloc(currentSettings.seqLen);

	genSequence(secretCode,currentSettings.seqLen);

	for(i=0;i<currentSettings.nRounds && (btiles!=currentSettings.seqLen);i++) {
		printf("Round %d\n", i+1);
		wtiles = 0;
		btiles = 0;
		do {
			printf("Inserisci sequenza:\n");
			printf("Nero: n\nRosso: r\nVerde: g\nGiallo: y\nBlu: b\nArancio: m\nCiano: c\nBianco: w\n");
			scanf(" %s", guessCode);
		}while(!checkInput(guessCode, currentSettings.seqLen));
		
		checkSequence(secretCode, guessCode, currentSettings.seqLen, &wtiles, &btiles);
		
		printSequence(guessCode, currentSettings.seqLen);
		printf("\n");	
		printWhiteBlack(wtiles, btiles);
		printf("\n");	
		printf("\n");	

	}
	if(btiles==currentSettings.seqLen) {
		printName(&playerinfo);
		printf(", hai vinto!\n");
		printf("La sequenza trovata e':\n");
	}
	else {
		printName(&playerinfo);
		printf(", hai perso...\n");
		printf("La sequenza cercata e':\n");
		
	}
	printSequence(secretCode, currentSettings.seqLen);
	printf("\n");

	return 0;
}
