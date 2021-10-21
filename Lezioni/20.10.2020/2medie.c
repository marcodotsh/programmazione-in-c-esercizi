#include <stdio.h>

float media(int, int);

int main(void)
{
	int n1, n2, n3 ,n4;
	float media1, media2;
	printf("Inserisci valore 1: ");
	scanf("%d", &n1);
	printf("Inserisci valore 2: ");
	scanf("%d", &n2);
	printf("Inserisci valore 3: ");
	scanf("%d", &n3);
	printf("Inserisci valore 4: ");
	scanf("%d", &n4);

	media1 = media(n1,n2);
	media2 = media(n3,n4);

	printf("Media tra 1 e 2: %f\n", media1);
	printf("Media tra 3 e 4: %f\n", media2);

	return 0;
}

float media(int x, int y)
{
	int ris;
	ris = (x+y)/2.0;
	
	return ris;
}
