#include <stdio.h>

int main()
{
	int n, cifra, pot;

	pot=1;

	do
	{
		printf("Inserire un numero positivo: ");
		scanf("%d", &n);
	}while(n<0);
	
	do
	{
		cifra = n % 10;
		printf("%d * %d\n", cifra, pot);
		pot = pot * 10;
		n = n / 10;
	}while(n!=0);

	return 0;
}
