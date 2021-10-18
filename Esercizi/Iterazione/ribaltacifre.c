#include <stdio.h>

int main(void)
{
	int n, inv, resto;

	inv = 0;
	
	do
	{
		printf("Inserire numero positivo: ");
		scanf("%d", &n);
	}while(n<=0);

	while(n!=0)
	{
		resto = n % 10;
		inv = inv * 10 + resto;
		n = n / 10;
	}
	
	printf("Inverso: %d\n", inv);

	return 0;
}
