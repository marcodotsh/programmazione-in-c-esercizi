#include <stdio.h>

int fib_ric(int n);

int main(void)
{
	int num, ris;
	
	printf("Inserisci posizione: ");
	scanf("%d", &num);

	ris = fib_ric(num);

	printf("\nPosizione %d: %d\n\n", num, ris);

	return 0;
}

int fib_ric(int n)
{
	if(n==0 || n==1)
		return n;
	else
		return fib_ric(n-1)+fib_ric(n-2);
}
