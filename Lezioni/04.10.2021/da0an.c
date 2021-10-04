#include <stdio.h>

int main(void)
{
	int cont, n;
	
	cont = 0;
	printf("Inserisci un numero intero positivo: ");
	scanf("%d", &n);

	while(cont <= n)
	{
		printf("%d\n", cont);
		cont = cont + 1;
	}

	return 0;
}
