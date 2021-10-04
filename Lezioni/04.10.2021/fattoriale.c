#include <stdio.h>

int main(void)
{
	int cont, f, n;

	printf("Inserisci un numero intero positivo per calcolarne il fattoriale: ");
	scanf("%d", &n);

	f = 1;
	cont = n;
	while(cont>0)
	{
		f = f * cont;
		cont = cont - 1;
	}

	printf("%d!=%d\n", n, f);
	
	return 0;
}
