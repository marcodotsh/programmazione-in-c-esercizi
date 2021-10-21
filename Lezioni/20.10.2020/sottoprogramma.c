#include <stdio.h>

int abs(int);
int maggiore(int,int);

int main(void)
{
	int a, b, ris;

	printf("Inserisci primo valore: ");
	scanf("%d", &a);
	printf("Inserisci secondo valore: ");
	scanf("%d", &b);

	ris = maggiore(abs(a), abs(b));

	printf("Risultato: %d\n", ris);

	return 0;
}

int abs(int n)
{
	if(n<0)
	{	n = -n;	}
	return n;
}

int maggiore(int n, int m)
{
	if(n>m)
	{
		return n;
	}else
	{
		return m;
	}
}
