#include <stdio.h>

int main(void)
{
	int n, posizioni, i, asterischi;
	printf("Inserisci il numero di righe della piramide: ");
	scanf("%d", &n);
	posizioni = n * 2 - 1;
	asterischi = 1;
	while(n>0)
	{
		for(i=0;i<((posizioni-asterischi)/2);i++)
		{
			printf(" ");
		}
		for(i=0;i<asterischi;i++)
		{
			printf("*");
		}
		for(i=0;i<((posizioni-asterischi)/2);i++)
		{
			printf(" ");
		}
		printf("\n");
		asterischi = asterischi + 2;
		n--;
	}
	return 0;
}

