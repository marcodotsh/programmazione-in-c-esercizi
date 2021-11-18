#include <stdio.h>

int mcdric(int a, int b);

int main(void)
{
	int n, m;

	printf("Inserisci due numeri interi positivi: ");
	scanf("%d%d", &n, &m);

	printf("MCD =  %d\n", mcdric(n,m));

	return 0;
}

int mcdric(int a, int b)
{
	if(a % b == 0)
		return b;

	return mcdric(b, a % b);
}

