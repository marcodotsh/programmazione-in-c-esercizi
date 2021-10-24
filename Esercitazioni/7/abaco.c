#include <stdio.h>

int main()
{
	int n, cifra, pot;

	pot=1;

	do
	{
		printf("Inserire un numero positivo: ");
		scanf("%d", &n);
	}while(n<=0);
	
	while(n!=0)
	{
		cifra = n % 10;
		printf("%d * %d\n", cifra, pot);
		pot = pot * 10;
		n = n / 10;
	} 

	return 0;
}
