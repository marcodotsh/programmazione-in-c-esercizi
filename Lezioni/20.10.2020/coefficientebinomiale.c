#include <stdio.h>

int main(void)
{
	int n, k, num, den, coeffbin;

	printf("Inserisci n: ");
	scanf("%d", &n);
	printf("Inserisci k: ");
	scanf("%d", &k);

	num=1;
	den=1;

	while(k>0)
	{
		num = num * (n-k+1);
		den = den * k;
		k--;
	}

	coeffbin = num/den;

	printf("Coefficiente binomiale: %d\n", coeffbin);

	return 0;
}
