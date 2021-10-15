#include <stdio.h>
#include <string.h>
#define DIM 100
int main(void)
{
	char parola[DIM+1];
	char invertita[DIM+1];
	int lunghezza, i;

	printf("Inserisci una parola: ");
	scanf(" %s", parola);

	lunghezza = strlen(parola);

	for(i=0;i<lunghezza;i++)
	{
		invertita[i] = parola[lunghezza-1-i];
	}
	invertita[lunghezza] = '\0';

	printf("La parola invertita e': %s\n", invertita);

	return 0;
}
