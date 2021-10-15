#include <stdio.h>

int main(void)
{
	int e1, e2, e3, totale;
	float media;
	printf("Inserisci primo voto: ");
	scanf("%d", &e1);
	printf("Inserisci secondo voto: ");
	scanf("%d", &e2);
	printf("Insrisci terzo voto: ");
	scanf("%d", &e3);

	totale = e1 + e2 + e3;
	media = totale / 3.0;

	printf("Media: %f\nVoto finale: %d\n", media, totale);

	if(totale >= 18)
	{
		printf("Esame superato!\n");
	} else
	{
		printf("Esame non superato :(\n");
	}

	return 0;
}

