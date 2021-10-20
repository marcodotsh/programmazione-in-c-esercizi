#include <stdio.h>
typedef struct
{
	int n;
	int d;
}frazione_t;

int main(void)
{
	frazione_t f1,f2, somma;
	int neg, mcd, div, resto;

	neg = 0; /* 0 se positiva, 1 se negativa*/
	resto = 1;
	do
	{
		printf("Inserire prima frazione (n d): ");
		scanf("%d/%d", &f1.n, &f1.d);
	}while(f1.d<=0);


	do
	{
		printf("Inserire seconda frazione (n d): ");
		scanf("%d/%d", &f2.n, &f2.d);
	}while(f2.d<=0);

	somma.n = f1.n * f2.d + f2.n * f1.d;
	somma.d = f1.d * f2.d;

	if(somma.n<0)
	{
		neg = 1;
		somma.n = -somma.n;
	}
	if(somma.n>somma.d)
	{
		mcd = somma.n;
		div = somma.d;
	}else
	{
		mcd = somma.d;
		div = somma.n;
	}

	while(resto!=0)
	{
		resto = mcd % div;
		mcd = div;
		div = resto;
	}

	somma.n = somma.n / mcd;
	somma.d = somma.d / mcd;

	if(neg)
	{	somma.n = -somma.n;	}
	
	if(somma.d==1)
	{
		printf("Somma: %d\n", somma.n);
	}else
	{
		printf("Somma: %d/%d\n", somma.n, somma.d);
	}

	return 0;
}
