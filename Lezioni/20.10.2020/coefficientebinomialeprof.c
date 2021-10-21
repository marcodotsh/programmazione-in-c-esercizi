#include <stdio.h>

int fattoriale(int n);

int main(void)
{
	int n, k, fatt1, fatt2, dfatt;
	int coeffbin;

	printf("Inserisci n: ");
	scanf("%d", &n);
	printf("Inserisci k: ");
	scanf("%d", &k);

	fatt1 = fattoriale(n);
	fatt2 = fattoriale(k);
	dfatt = fattoriale(n-k);
	/* n, k e n-k sono i parametri attuali */
	coeffbin = fatt1/(fatt2*dfatt);
	printf("Coefficiente binomiale: %d\n", coeffbin);

	return 0;
}

int fattoriale(int n) /*n è un parametro formale*/
{
	int ris, i;
	ris = 1;
	for(i=1;i<=n;i++)
	{
		ris = ris * i;
	}
	return ris;
}
