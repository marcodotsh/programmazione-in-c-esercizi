#include <stdio.h>

int main(void)
{
	int num, resto, pari;

	scanf("%d",&num);

	while(num<1)
	{
		printf("Inserisci un numero > di 1: ");
		scanf("%d", &num);
	}

	pari = 1;
	while(num > 0 && pari == 1)
	{
		resto = num % 10;
		if(resto % 2 != 0)
		{
			pari = 0;
		}
		num = num / 10;
	}

	printf("%d\n", pari);

	return 0;
}
