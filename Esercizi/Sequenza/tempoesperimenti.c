#include <stdio.h>
#define SECONDI_IN_UN_MINUTO 60
int main(void)
{
	int minuti1, minuti2, secondi1, secondi2, secondiTotali;
	printf("Inserire tempo primo esperimento nel seguente formato: \"minuti:secondi\"\n");
	scanf("%d:%d", &minuti1, &secondi1);
	printf("Inserire tempo secondo esperimento:\n");
	scanf("%d:%d", &minuti2, &secondi2);

	secondiTotali = (minuti1 + minuti2) * SECONDI_IN_UN_MINUTO + secondi1 + secondi2;
	printf("Tempo totale: %d:%d\n", secondiTotali / 60, secondiTotali % 60);
	return 0;
}
