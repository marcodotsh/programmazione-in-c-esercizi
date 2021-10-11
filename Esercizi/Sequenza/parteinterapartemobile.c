#include <stdio.h>

int main(void)
{
	int intera;
	float n, decimale;

	printf("Inserisci un numero: ");
	scanf("%f", &n);
	intera = (int)n;
	decimale = n - intera;
	printf("Parte intera: %d\nParte decimale: %f\n", intera, decimale);
	
	return 0;
}
