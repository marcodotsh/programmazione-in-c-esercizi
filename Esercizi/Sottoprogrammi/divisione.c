#include <stdio.h>

void divint(int n, int div, int *ris, int *mod);

int main(void)
{
	int n, i, ris, mod;
	i=2;
	do {
		printf("Inserisci un numero intero positivo: ");
		scanf("%d", &n);
	}while(n<=1);

	do {
		divint(n,i,&ris,&mod);
		i++;	
	}while(mod!=0);

	printf("Primo divisore maggiore di 1: %d\n", i-1);

	return 0;
}

void divint(int n, int div, int *ris, int *mod)
{
	*ris = n/div;
	*mod = n%div;
}

