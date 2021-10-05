#include <stdio.h>
#define SECONDI_IN_UN_MINUTO 60

int main(void)
{
	int minuti, secondi, minutiAddizionali;

	printf("Inserisci il tempo secondo la seguente sintassi: \"minuti:secondi\"\n");
	scanf("%d:%d", &minuti, &secondi);

	minutiAddizionali = secondi / SECONDI_IN_UN_MINUTO;
	minuti = minuti + minutiAddizionali;
	secondi = secondi % SECONDI_IN_UN_MINUTO;
	
	printf("Tempo corretto: %d:%d\n", minuti, secondi);
	return 0;
}
